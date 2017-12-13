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
#include "panda/collections/ImmutableArray.h"
#include "panda/core/Range.LTpanda/core/Int64.Q.GT.h"
#include "org/pandalanguage/pandac/MethodRef.h"
#include "panda/io/Console.h"
#include "panda/io/File.h"
#include "panda/collections/Set.h"
#include "org/pandalanguage/pandac/Methods.h"
#include "org/pandalanguage/pandac/Variable.h"
#include "org/pandalanguage/pandac/Compiler/CompileTargetResult.h"
#include "panda/core/SteppedRange.LTpanda/core/Int64.Cpanda/core/Int64.GT.h"


struct { panda$core$Class* cl; ITable* next; void* methods[1]; } org$pandalanguage$pandac$Compiler$_org$pandalanguage$pandac$ErrorReporter = { (panda$core$Class*) &org$pandalanguage$pandac$ErrorReporter$class, NULL, { org$pandalanguage$pandac$Compiler$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String} };

org$pandalanguage$pandac$Compiler$class_type org$pandalanguage$pandac$Compiler$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &org$pandalanguage$pandac$Compiler$_org$pandalanguage$pandac$ErrorReporter, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, org$pandalanguage$pandac$Compiler$addAlias$panda$core$String, org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q, org$pandalanguage$pandac$Compiler$checkGenericParameters$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$Type$Q, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl, org$pandalanguage$pandac$Compiler$resolveMethodCall$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT, org$pandalanguage$pandac$Compiler$exists$panda$io$File$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$getClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q, org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Position$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q, org$pandalanguage$pandac$Compiler$specialize$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q, org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT, org$pandalanguage$pandac$Compiler$signatureMatch$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q, org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q, org$pandalanguage$pandac$Compiler$interfaceMethods$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT, org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable, org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT, org$pandalanguage$pandac$Compiler$addInheritedMethods$org$pandalanguage$pandac$SymbolTable$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT, org$pandalanguage$pandac$Compiler$getMethodReference$org$pandalanguage$pandac$SymbolTable$org$pandalanguage$pandac$IRNode$Q$panda$core$String$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$Compiler$symbolRef$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q, org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64, org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64, org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q, org$pandalanguage$pandac$Compiler$doCoerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$Compiler$callCost$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q, org$pandalanguage$pandac$Compiler$matchMethods$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q, org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$declaredTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$foldInts$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$Compiler$compileIndexedAssignment$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT, org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$IRNode$Q$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT, org$pandalanguage$pandac$Compiler$compilePrefix$panda$core$Int64$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compilePrefix$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileCall$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileIdentifier$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileRange$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileSelf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileSuper$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileNull$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileBlock$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileIf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileRangeFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileIteratorFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileFor$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileWhile$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileDo$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileLoop$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q, org$pandalanguage$pandac$Compiler$compileDeclaration$org$pandalanguage$pandac$ASTNode$panda$core$Int64$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileBreak$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileContinue$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileReturn$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileAssert$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileVar$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileWhenTest$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileChainedIfWhen$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileChainedIfMatch$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileWhen$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileOtherwise$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64, org$pandalanguage$pandac$Compiler$compileMatch$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileBody$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT, org$pandalanguage$pandac$Compiler$compile$panda$io$File, org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String, org$pandalanguage$pandac$Compiler$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String, org$pandalanguage$pandac$Compiler$finish} };

typedef void (*$fn23)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$Compiler*);
typedef panda$core$Object* (*$fn129)(panda$collections$MapView*, panda$core$Object*);
typedef panda$core$Int64 (*$fn174)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn181)(panda$collections$CollectionView*);
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
typedef panda$collections$Iterator* (*$fn582)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn588)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn594)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn618)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn650)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn656)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn662)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn681)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn687)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn693)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn719)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn725)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn731)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn783)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn789)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn795)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn804)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn821)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn839)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn845)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn851)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn859)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn865)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn871)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn883)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn889)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn895)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn918)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn924)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn930)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn969)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn975)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn981)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn994)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1000)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1006)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1021)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1027)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1033)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1049)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1055)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1061)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1075)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1081)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1087)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1100)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1106)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1112)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1157)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1163)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1169)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1176)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1182)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1188)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1208)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1214)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1220)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1300)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn1408)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1414)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1420)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1446)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1452)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1458)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1615)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1621)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1627)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1813)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1819)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1825)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn1915)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn1937)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Int64 (*$fn1959)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn1976)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1982)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1988)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn2000)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn2022)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn2096)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2114)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn2185)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn2203)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2209)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2215)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2246)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2252)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2258)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2295)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2301)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2307)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2330)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2336)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2342)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2732)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2738)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2744)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2876)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2882)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2888)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn3001)(panda$core$Object*);
typedef panda$core$Int64 (*$fn3101)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn3117)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3123)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3129)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3224)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3230)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3236)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3446)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3452)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3458)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3593)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3599)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3605)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3631)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3637)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3643)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3750)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3756)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3762)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3908)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3914)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3920)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4003)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4009)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4015)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4066)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4072)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4078)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4142)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4148)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4154)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4193)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4199)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4205)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4217)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4223)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4229)(panda$collections$Iterator*);
typedef void (*$fn4260)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$MethodDecl*, org$pandalanguage$pandac$IRNode*);
typedef void (*$fn4263)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$collections$Iterator* (*$fn4267)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4273)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4279)(panda$collections$Iterator*);
typedef void (*$fn4284)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn4287)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn4292)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$collections$Iterator* (*$fn4296)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4302)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4308)(panda$collections$Iterator*);
typedef void (*$fn4312)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn4322)(org$pandalanguage$pandac$parser$Parser*, panda$io$File*, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn4324)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$collections$Iterator* (*$fn4330)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4336)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4342)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4351)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4357)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4363)(panda$collections$Iterator*);
typedef void (*$fn4379)(org$pandalanguage$pandac$CodeGenerator*);

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
static panda$core$String $s73 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x53\x70\x65\x63\x69\x61\x6C\x69\x7A\x65\x64\x41\x72\x72\x61\x79", 34, 3135313918436209288, NULL };
static panda$core$String $s74 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x53\x74\x61\x63\x6B", 23, 4189143067940765470, NULL };
static panda$core$String $s75 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x43\x6C\x61\x73\x73", 16, -4218233433613800972, NULL };
static panda$core$String $s76 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x42\x69\x74", 14, -8202984937925717763, NULL };
static panda$core$String $s77 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x43\x68\x61\x72\x38", 16, -4218233433617922336, NULL };
static panda$core$String $s78 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x43\x68\x61\x72\x31\x36", 17, -1766463100090469421, NULL };
static panda$core$String $s79 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x43\x68\x61\x72\x33\x32", 17, -1766463100090469223, NULL };
static panda$core$String $s80 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x43\x6F\x6D\x70\x61\x72\x61\x62\x6C\x65", 21, -5254568576296725552, NULL };
static panda$core$String $s81 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x45\x71\x75\x61\x74\x61\x62\x6C\x65", 20, 3987957135724734002, NULL };
static panda$core$String $s82 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74\x38", 15, 1602004586439591825, NULL };
static panda$core$String $s83 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74\x31\x36", 16, -4218233432987190872, NULL };
static panda$core$String $s84 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74\x33\x32", 16, -4218233432987190674, NULL };
static panda$core$String $s85 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74\x36\x34", 16, -4218233432987190369, NULL };
static panda$core$String $s86 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6D\x6D\x75\x74\x61\x62\x6C\x65", 20, 4030834267849819614, NULL };
static panda$core$String $s87 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x4D\x75\x74\x61\x62\x6C\x65\x53\x74\x72\x69\x6E\x67", 24, -1180377191894570377, NULL };
static panda$core$String $s88 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x4F\x62\x6A\x65\x63\x74", 17, -1766462974584480607, NULL };
static panda$core$String $s89 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x50\x61\x6E\x64\x61", 16, -4218233432272217990, NULL };
static panda$core$String $s90 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x52\x61\x6E\x67\x65", 16, -4218233432064096881, NULL };
static panda$core$String $s91 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x53\x69\x6D\x70\x6C\x65\x52\x61\x6E\x67\x65", 22, -5809978584159753927, NULL };
static panda$core$String $s92 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6E\x67\x65", 23, -7661850693661404164, NULL };
static panda$core$String $s93 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x53\x74\x72\x69\x6E\x67", 17, -1766462930662707075, NULL };
static panda$core$String $s94 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x53\x79\x73\x74\x65\x6D", 17, -1766462930141263461, NULL };
static panda$core$String $s95 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x55\x49\x6E\x74\x38", 16, -4218233431776641634, NULL };
static panda$core$String $s96 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x55\x49\x6E\x74\x31\x36", 17, -1766462914121118519, NULL };
static panda$core$String $s97 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x55\x49\x6E\x74\x33\x32", 17, -1766462914121118321, NULL };
static panda$core$String $s98 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x55\x49\x6E\x74\x36\x34", 17, -1766462914121118016, NULL };
static panda$core$String $s99 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x56\x61\x6C\x75\x65", 16, -4218233431647874265, NULL };
static panda$core$String $s100 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x6D\x61\x74\x68\x2E\x52\x61\x6E\x64\x6F\x6D", 17, -791852923676021540, NULL };
static panda$core$String $s101 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x6D\x61\x74\x68\x2E\x58\x6F\x72\x53\x68\x69\x66\x74\x31\x32\x38\x50\x6C\x75\x73", 26, 215641961116556169, NULL };
static panda$core$String $s102 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x69\x6F\x2E\x43\x6F\x6E\x73\x6F\x6C\x65", 16, 2336552278051400340, NULL };
static panda$core$String $s103 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x69\x6F\x2E\x46\x69\x6C\x65", 13, 4119532389314393493, NULL };
static panda$core$String $s104 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x69\x6F\x2E\x49\x6E\x64\x65\x6E\x74\x65\x64\x4F\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6D", 29, 1042140495667569485, NULL };
static panda$core$String $s105 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x69\x6F\x2E\x49\x6E\x70\x75\x74\x53\x74\x72\x65\x61\x6D", 20, -2955417606099851271, NULL };
static panda$core$String $s106 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x69\x6F\x2E\x4C\x69\x6E\x65\x4E\x75\x6D\x62\x65\x72\x49\x6E\x70\x75\x74\x53\x74\x72\x65\x61\x6D", 30, 6529214259521028726, NULL };
static panda$core$String $s107 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x69\x6F\x2E\x4D\x65\x6D\x6F\x72\x79\x49\x6E\x70\x75\x74\x53\x74\x72\x65\x61\x6D", 26, -2754778238192978458, NULL };
static panda$core$String $s108 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x69\x6F\x2E\x4D\x65\x6D\x6F\x72\x79\x4F\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6D", 27, -1871907680230610725, NULL };
static panda$core$String $s109 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x69\x6F\x2E\x4F\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6D", 21, -3689739765115213222, NULL };
static panda$core$String $s110 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x69\x6F\x2E\x50\x75\x73\x68\x62\x61\x63\x6B\x49\x6E\x70\x75\x74\x53\x74\x72\x65\x61\x6D", 28, -1415712807475310042, NULL };
static panda$core$String $s111 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s115 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s137 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s143 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s159 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s186 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s187 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, 216, NULL };
static panda$core$String $s188 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s190 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x65\x78\x70\x65\x63\x74\x65\x64\x20", 11, 5549333425848529514, NULL };
static panda$core$String $s193 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x67\x65\x6E\x65\x72\x69\x63\x20\x70\x61\x72\x61\x6D\x65\x74\x65\x72", 18, 754488464303810091, NULL };
static panda$core$String $s196 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x62\x75\x74\x20", 6, 1527396680240, NULL };
static panda$core$String $s198 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x6F\x75\x6E\x64\x20", 6, 2145222783673, NULL };
static panda$core$String $s200 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s240 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x65\x6E\x65\x72\x69\x63\x20\x70\x61\x72\x61\x6D\x65\x74\x65\x72\x20\x27", 19, -7104957698969262010, NULL };
static panda$core$String $s242 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s249 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20", 10, 5900311425897229264, NULL };
static panda$core$String $s251 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6F\x66\x20\x74\x79\x70\x65\x20\x27", 9, 2306627197047234467, NULL };
static panda$core$String $s257 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 14, 2262695563077912654, NULL };
static panda$core$String $s264 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s288 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x6B\x6E\x6F\x77\x6E\x20\x74\x79\x70\x65\x20\x27", 14, 1254433276954177894, NULL };
static panda$core$String $s290 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s303 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3F", 1, 164, NULL };
static panda$core$String $s317 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 161, NULL };
static panda$core$String $s319 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s338 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s345 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 163, NULL };
static panda$core$String $s398 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x74\x65\x72\x66\x61\x63\x65\x20\x27", 11, 2825576507357767077, NULL };
static panda$core$String $s400 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x65\x78\x74\x65\x6E\x64\x20\x63\x6C\x61\x73\x73\x20", 22, -8406128752343392811, NULL };
static panda$core$String $s402 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s404 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s409 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x75\x70\x65\x72\x63\x6C\x61\x73\x73\x20\x27", 12, 3706067405940886645, NULL };
static panda$core$String $s411 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x6F\x66\x20\x63\x6C\x61\x73\x73\x20\x27", 12, -633030867692887714, NULL };
static panda$core$String $s414 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20", 10, 5900311425897229264, NULL };
static panda$core$String $s416 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x69\x73\x74\x65\x64\x20\x62\x65\x66\x6F\x72\x65\x20\x61\x6E\x79\x20\x73\x75\x70\x65\x72\x69\x6E\x74\x65\x72\x66\x61\x63\x65\x73", 33, 4787050402069409712, NULL };
static panda$core$String $s418 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6C\x61\x73\x73\x20\x27", 7, 213449334494206, NULL };
static panda$core$String $s420 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x68\x61\x73\x20\x6D\x6F\x72\x65\x20\x74\x68\x61\x6E\x20\x6F\x6E\x65\x20\x73\x75\x70\x65\x72\x63\x6C\x61\x73\x73", 30, -759923653827872275, NULL };
static panda$core$String $s425 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x4F\x62\x6A\x65\x63\x74", 17, -1766462974584480607, NULL };
static panda$core$String $s436 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x56\x61\x6C\x75\x65", 16, -4218233431647874265, NULL };
static panda$core$String $s528 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x6F\x76\x65\x72\x72\x69\x64\x65\x73\x20", 11, 1426563750390550596, NULL };
static panda$core$String $s532 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s534 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x74\x20\x69\x73\x20\x6E\x6F\x74\x20\x6D\x61\x72\x6B\x65\x64\x20\x40\x6F\x76\x65\x72\x72\x69\x64\x65", 27, -5223536864783252703, NULL };
static panda$core$String $s543 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x6F\x76\x65\x72\x72\x69\x64\x65\x73\x20", 11, 1426563750390550596, NULL };
static panda$core$String $s547 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s549 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x74\x20\x6D\x65\x74\x68\x6F\x64\x73\x20\x63\x61\x6E\x6E\x6F\x74\x20\x6F\x76\x65\x72\x72\x69\x64\x65\x20\x66\x75\x6E\x63\x74\x69\x6F\x6E\x73", 37, 7193225585860914176, NULL };
static panda$core$String $s554 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x69\x73\x20\x6D\x61\x72\x6B\x65\x64\x20\x40\x6F\x76\x65\x72\x72\x69\x64\x65\x2C\x20\x62\x75\x74\x20\x6E\x6F\x20\x6D\x61\x74\x63\x68\x69\x6E\x67\x20", 38, -6085226934842474132, NULL };
static panda$core$String $s556 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6D\x65\x74\x68\x6F\x64\x20\x65\x78\x69\x73\x74\x73\x20\x61\x6D\x6F\x6E\x67\x20\x69\x74\x73\x20\x61\x6E\x63\x65\x73\x74\x6F\x72\x73", 33, -5331763662845728394, NULL };
static panda$core$String $s565 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x69\x65\x6C\x64\x20\x68\x61\x73\x20\x6E\x65\x69\x74\x68\x65\x72\x20\x61\x20\x74\x79\x70\x65\x20\x6E\x6F\x72\x20\x61\x20\x76\x61\x6C\x75\x65", 36, 5735293162260763604, NULL };
static panda$core$String $s612 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x6F\x20\x6F\x72\x20\x61\x6D\x62\x69\x67\x75\x6F\x75\x73\x20\x6D\x61\x74\x63\x68\x20\x6F\x6E\x20\x6D\x65\x74\x68\x6F\x64\x20\x63\x61\x6C\x6C\x20\x28", 38, 3392199122829501018, NULL };
static panda$core$String $s614 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s621 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s624 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s626 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x6B\x6E\x6F\x77\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 18, 1104129620483010492, NULL };
static panda$core$String $s628 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x73\x75\x70\x65\x72\x27\x20\x63\x61\x6E\x20\x6F\x6E\x6C\x79\x20\x62\x65\x20\x75\x73\x65\x64\x20\x61\x73\x20\x70\x61\x72\x74\x20\x6F\x66\x20\x61\x20\x6D\x65\x74\x68\x6F\x64\x20\x63\x61\x6C\x6C", 49, 5687166824689512368, NULL };
static panda$core$String $s633 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x56\x61\x6C\x75\x65", 16, -4218233431647874265, NULL };
static panda$core$String $s672 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s673 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, 148, NULL };
static panda$core$String $s675 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x70\x61\x6E\x64\x61", 6, 1556740610063, NULL };
static panda$core$String $s700 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s710 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s711 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, 148, NULL };
static panda$core$String $s713 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x70\x61\x6E\x64\x61", 6, 1556740610063, NULL };
static panda$core$String $s743 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x66\x69\x6C\x65\x20\x27", 15, -3519420271001816814, NULL };
static panda$core$String $s745 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x74\x6F\x20\x63\x6F\x6E\x74\x61\x69\x6E\x20\x61\x20\x63\x6C\x61\x73\x73\x20\x6E\x61\x6D\x65\x64\x20\x27", 28, 3445503135242247770, NULL };
static panda$core$String $s748 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s751 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x6F\x20\x66\x69\x6C\x65\x20\x6E\x61\x6D\x65\x64\x20", 14, 8876718408773305983, NULL };
static panda$core$String $s753 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x69\x6E\x20\x61\x6E\x79\x20\x69\x6D\x70\x6F\x72\x74\x20\x70\x61\x74\x68\x20\x28", 21, 3105450433703869576, NULL };
static panda$core$String $s756 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s758 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x69\x6E\x74\x5F\x6C\x69\x74\x65\x72\x61\x6C", 12, -6710647184408424492, NULL };
static panda$core$String $s1250 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x73\x75\x70\x65\x72\x27\x20\x63\x61\x6E\x20\x6F\x6E\x6C\x79\x20\x62\x65\x20\x75\x73\x65\x64\x20\x61\x73\x20\x70\x61\x72\x74\x20\x6F\x66\x20\x61\x20\x6D\x65\x74\x68\x6F\x64\x20\x63\x61\x6C\x6C", 49, 5687166824689512368, NULL };
static panda$core$String $s1295 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s1377 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 19485, NULL };
static panda$core$String $s1605 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 19485, NULL };
static panda$core$String $s1720 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27", 10, 875040426634827830, NULL };
static panda$core$String $s1722 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 14, 2262695563077912654, NULL };
static panda$core$String $s1725 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1750 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27", 10, 875040426634827830, NULL };
static panda$core$String $s1752 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 14, 2262695563077912654, NULL };
static panda$core$String $s1755 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1788 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 19485, NULL };
static panda$core$String $s1847 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27", 10, 875040426634827830, NULL };
static panda$core$String $s1849 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 14, 2262695563077912654, NULL };
static panda$core$String $s1852 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1892 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6C\x75\x65\x20\x6F\x66\x20\x74\x79\x70\x65\x20\x27", 15, -1620219380461029456, NULL };
static panda$core$String $s1894 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x70\x6F\x73\x73\x69\x62\x6C\x79\x20\x62\x65\x20\x61\x6E\x20\x69\x6E\x73\x74\x61\x6E\x63\x65\x20\x6F\x66\x20", 36, -427166674877421096, NULL };
static panda$core$String $s1896 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1898 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2006 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2007 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, 216, NULL };
static panda$core$String $s2010 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x65\x78\x70\x65\x63\x74\x65\x64\x20", 10, -1007140463547215113, NULL };
static panda$core$String $s2014 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x61\x72\x67\x75\x6D\x65\x6E\x74", 9, 1450721239526715900, NULL };
static panda$core$String $s2017 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2019 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x74\x20\x72\x65\x63\x65\x69\x76\x65\x64\x20", 13, -1301083486074551925, NULL };
static panda$core$String $s2025 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2049 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x64\x69\x72\x65\x63\x74\x6C\x79\x20\x63\x61\x6C\x6C\x20\x27\x69\x6E\x69\x74\x27\x20\x6F\x75\x74\x73\x69\x64\x65\x20\x6F\x66\x20\x61\x6E\x20\x69\x6E\x69\x74\x20\x6D\x65\x74\x68\x6F\x64", 53, 84993564105955720, NULL };
static panda$core$String $s2059 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x69\x6E\x69\x74\x27\x20\x6D\x61\x79\x20\x6F\x6E\x6C\x79\x20\x62\x65\x20\x63\x61\x6C\x6C\x65\x64\x20\x6F\x6E\x20\x27\x73\x65\x6C\x66\x27\x20\x6F\x72\x20\x27\x73\x75\x70\x65\x72\x27", 46, 5737688576853633111, NULL };
static panda$core$String $s2074 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x63\x61\x6C\x6C\x20\x69\x6E\x73\x74\x61\x6E\x63\x65\x20", 21, -1285496544752055923, NULL };
static panda$core$String $s2077 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x66\x72\x6F\x6D\x20\x61\x20\x40\x63\x6C\x61\x73\x73\x20\x63\x6F\x6E\x74\x65\x78\x74", 22, 6236893689928691337, NULL };
static panda$core$String $s2088 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x63\x61\x6C\x6C\x20\x63\x6C\x61\x73\x73\x20", 18, 4176321021903236102, NULL };
static panda$core$String $s2091 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x6F\x6E\x20\x61\x6E\x20\x69\x6E\x73\x74\x61\x6E\x63\x65", 15, 4946791728819903386, NULL };
static panda$core$String $s2127 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s2146 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6C\x61\x73\x73\x20\x27", 7, 213449334494206, NULL };
static panda$core$String $s2148 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x64\x6F\x65\x73\x20\x6E\x6F\x74\x20\x68\x61\x76\x65\x20\x61\x20\x6D\x65\x6D\x62\x65\x72\x20\x6E\x61\x6D\x65\x64\x20\x27", 32, -5677460192622646983, NULL };
static panda$core$String $s2151 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2158 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2160 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s2163 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x69\x73\x20\x6E\x6F\x74\x20\x61\x20\x6D\x65\x74\x68\x6F\x64", 17, 1918101523522592587, NULL };
static panda$core$String $s2190 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x6F\x20\x6D\x61\x74\x63\x68\x20\x66\x6F\x72\x20\x63\x61\x6C\x6C\x20\x74\x6F\x20\x27", 22, 7814600009206081200, NULL };
static panda$core$String $s2192 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s2195 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2199 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2217 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2218 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x27", 2, 14381, NULL };
static panda$core$String $s2219 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x77\x69\x74\x68\x20\x72\x65\x74\x75\x72\x6E\x20\x74\x79\x70\x65\x20\x27", 19, -3030064837581027794, NULL };
static panda$core$String $s2221 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2269 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x69\x74", 4, 213374837, NULL };
static panda$core$String $s2279 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6C\x75\x65\x20\x6F\x66\x20\x74\x79\x70\x65\x20\x27", 15, -1620219380461029456, NULL };
static panda$core$String $s2281 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x69\x73\x20\x6E\x6F\x74\x20\x61\x20\x6D\x65\x74\x68\x6F\x64", 17, 1918101523522592587, NULL };
static panda$core$String $s2289 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2291 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2309 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2312 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x3E\x28", 4, 146931305, NULL };
static panda$core$String $s2313 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x26\x3E\x28", 5, 14839819243, NULL };
static panda$core$String $s2316 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s2326 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2344 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2347 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x3E\x28", 4, 146931305, NULL };
static panda$core$String $s2348 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x26\x3E\x28", 5, 14839819243, NULL };
static panda$core$String $s2351 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s2365 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2B", 1, 144, NULL };
static panda$core$String $s2366 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D", 1, 146, NULL };
static panda$core$String $s2367 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 143, NULL };
static panda$core$String $s2368 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, 148, NULL };
static panda$core$String $s2369 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F\x2F", 2, 14995, NULL };
static panda$core$String $s2370 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 138, NULL };
static panda$core$String $s2371 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5E", 1, 195, NULL };
static panda$core$String $s2372 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3D", 1, 162, NULL };
static panda$core$String $s2373 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x3D", 2, 13595, NULL };
static panda$core$String $s2374 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 163, NULL };
static panda$core$String $s2375 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 161, NULL };
static panda$core$String $s2376 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E\x3D", 2, 16524, NULL };
static panda$core$String $s2377 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x3D", 2, 16322, NULL };
static panda$core$String $s2378 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1, 225, NULL };
static panda$core$String $s2379 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C\x7C", 2, 22849, NULL };
static panda$core$String $s2380 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s2381 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26\x26", 2, 14077, NULL };
static panda$core$String $s2382 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7E", 1, 227, NULL };
static panda$core$String $s2383 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7E\x7E", 2, 23053, NULL };
static panda$core$String $s2384 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21", 1, 134, NULL };
static panda$core$String $s2385 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x21", 2, 13567, NULL };
static panda$core$String $s2386 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x3C", 2, 16321, NULL };
static panda$core$String $s2387 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E\x3E", 2, 16525, NULL };
static panda$core$String $s2388 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 19485, NULL };
static panda$core$String $s2389 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A\x3D", 2, 16120, NULL };
static panda$core$String $s2390 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3D\x3D", 2, 16423, NULL };
static panda$core$String $s2391 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x3D\x3D", 3, 1373156, NULL };
static panda$core$String $s2502 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x76\x61\x6C\x69\x64\x20\x6E\x75\x6D\x65\x72\x69\x63\x20\x6F\x70\x65\x72\x61\x74\x69\x6F\x6E", 25, 9019145596080302696, NULL };
static panda$core$String $s2514 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D\x3A\x3D", 4, 198772404, NULL };
static panda$core$String $s2562 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6F\x6E\x76\x65\x72\x74", 7, 213482220537370, NULL };
static panda$core$String $s2566 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D\x3A\x3D", 4, 198772404, NULL };
static panda$core$String $s2626 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2629 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x6F\x70\x65\x72\x61\x74\x65\x20\x6F\x6E\x20\x27", 21, -3266050109438970469, NULL };
static panda$core$String $s2632 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20", 3, 1432616, NULL };
static panda$core$String $s2634 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2636 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2643 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2646 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x6F\x70\x65\x72\x61\x74\x65\x20\x6F\x6E\x20\x27", 21, -3266050109438970469, NULL };
static panda$core$String $s2649 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20", 3, 1432616, NULL };
static panda$core$String $s2651 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2653 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2675 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x61\x73\x73\x69\x67\x6E\x20\x74\x6F\x20\x74\x68\x69\x73\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6F\x6E", 32, -4891466264852316840, NULL };
static panda$core$String $s2687 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x61\x73\x73\x69\x67\x6E\x20\x74\x6F\x20\x74\x68\x69\x73\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6F\x6E", 32, -4891466264852316840, NULL };
static panda$core$String $s2704 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6F\x6E\x76\x65\x72\x74", 7, 213482220537370, NULL };
static panda$core$String $s2717 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 19485, NULL };
static panda$core$String $s2786 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2789 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x6F\x70\x65\x72\x61\x74\x65\x20\x6F\x6E\x20\x27", 21, -3266050109438970469, NULL };
static panda$core$String $s2792 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20\x27", 4, 144694255, NULL };
static panda$core$String $s2795 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2909 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x6D\x65\x74\x68\x6F\x64\x3E", 8, 17378158564789264, NULL };
static panda$core$String $s2925 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6E\x75\x6D\x62\x65\x72\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 30, 5304221197101987767, NULL };
static panda$core$String $s2927 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2935 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6E\x75\x6D\x62\x65\x72\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 30, 5304221197101987767, NULL };
static panda$core$String $s2937 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3003 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s3006 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3024 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6C\x61\x73\x73\x20\x27", 7, 213449334494206, NULL };
static panda$core$String $s3026 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x64\x6F\x65\x73\x20\x6E\x6F\x74\x20\x68\x61\x76\x65\x20\x61\x20\x6D\x65\x6D\x62\x65\x72\x20\x6E\x61\x6D\x65\x64\x20", 31, -2978468964078965078, NULL };
static panda$core$String $s3028 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3030 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3086 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x75\x6E\x72\x65\x73\x6F\x6C\x76\x65\x64\x20\x72\x61\x6E\x67\x65\x3E", 18, -1293962867859660245, NULL };
static panda$core$String $s3095 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x72\x65\x66\x65\x72\x65\x6E\x63\x65\x20\x27\x73\x65\x6C\x66\x27\x20\x66\x72\x6F\x6D\x20\x61\x20\x40\x63\x6C\x61\x73\x73\x20\x6D\x65\x74\x68\x6F\x64", 44, -511889306060728385, NULL };
static panda$core$String $s3111 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 161, NULL };
static panda$core$String $s3113 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3136 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s3139 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3143 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3144 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 163, NULL };
static panda$core$String $s3154 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x72\x65\x66\x65\x72\x65\x6E\x63\x65\x20\x27\x73\x75\x70\x65\x72\x27\x20\x66\x72\x6F\x6D\x20\x61\x20\x40\x63\x6C\x61\x73\x73\x20\x6D\x65\x74\x68\x6F\x64", 45, 3734810722724983720, NULL };
static panda$core$String $s3173 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6C\x75\x65\x20\x6F\x66\x20\x74\x79\x70\x65\x20\x27", 15, -1620219380461029456, NULL };
static panda$core$String $s3175 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x70\x6F\x73\x73\x69\x62\x6C\x79\x20\x62\x65\x20\x61\x6E\x20", 24, -5420382528200372370, NULL };
static panda$core$String $s3177 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x73\x74\x61\x6E\x63\x65\x20\x6F\x66\x20\x27", 13, 7885269545242335118, NULL };
static panda$core$String $s3179 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3199 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x64\x6F\x65\x73\x20\x6E\x6F\x74\x20\x72\x65\x74\x75\x72\x6E\x20\x61\x20\x76\x61\x6C\x75\x65", 24, -3977552604268313933, NULL };
static panda$core$String $s3347 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 161, NULL };
static panda$core$String $s3351 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 163, NULL };
static panda$core$String $s3356 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x49\x74\x65\x72", 5, 14332680541, NULL };
static panda$core$String $s3379 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x65\x74\x5F\x64\x6F\x6E\x65", 8, 21980003879763538, NULL };
static panda$core$String $s3384 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21", 1, 134, NULL };
static panda$core$String $s3396 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x65\x78\x74", 4, 218436048, NULL };
static panda$core$String $s3482 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x74\x65\x72\x61\x74\x6F\x72", 8, 22210198075044275, NULL };
static panda$core$String $s3490 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6E\x20\x49\x74\x65\x72\x61\x62\x6C\x65\x20\x6F\x72\x20\x49\x74\x65\x72\x61\x74\x6F\x72\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 45, 562271959045909027, NULL };
static panda$core$String $s3492 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3555 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x63\x6C\x61\x72\x61\x74\x69\x6F\x6E\x20\x68\x61\x73\x20\x6E\x65\x69\x74\x68\x65\x72\x20\x61\x20\x74\x79\x70\x65\x20\x6E\x6F\x72\x20\x61\x20\x76\x61\x6C\x75\x65", 42, 71025131614347466, NULL };
static panda$core$String $s3612 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x62\x72\x65\x61\x6B\x20", 7, 149654778879689, NULL };
static panda$core$String $s3614 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20\x69\x6E\x73\x69\x64\x65\x20\x61\x20\x6C\x6F\x6F\x70\x20\x6C\x61\x62\x65\x6C\x6C\x65\x64\x20", 33, 5869484791969643332, NULL };
static panda$core$String $s3616 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3618 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A\x27", 2, 16098, NULL };
static panda$core$String $s3623 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x62\x72\x65\x61\x6B\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20\x69\x6E\x73\x69\x64\x65\x20\x61\x20\x6C\x6F\x6F\x70", 29, -2107280000252113069, NULL };
static panda$core$String $s3650 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x63\x6F\x6E\x74\x69\x6E\x75\x65\x20", 10, 6626032424543403513, NULL };
static panda$core$String $s3652 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20\x69\x6E\x73\x69\x64\x65\x20\x61\x20\x6C\x6F\x6F\x70\x20\x6C\x61\x62\x65\x6C\x6C\x65\x64\x20", 33, 5869484791969643332, NULL };
static panda$core$String $s3654 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3656 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A\x27", 2, 16098, NULL };
static panda$core$String $s3661 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x63\x6F\x6E\x74\x69\x6E\x75\x65\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20\x69\x6E\x73\x69\x64\x65\x20\x61\x20\x6C\x6F\x6F\x70", 32, -6048052453244835837, NULL };
static panda$core$String $s3675 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x72\x65\x74\x75\x72\x6E\x20\x61\x20\x76\x61\x6C\x75\x65\x20\x66\x72\x6F\x6D\x20\x61\x20\x6D\x65\x74\x68\x6F\x64\x20\x77\x69\x74\x68\x20\x6E\x6F\x20\x72\x65\x74\x75\x72\x6E\x20\x74\x79\x70\x65", 55, -6755143087675264705, NULL };
static panda$core$String $s3689 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x72\x65\x74\x75\x72\x6E\x20\x76\x61\x6C\x75\x65", 23, 6159277012237708805, NULL };
static panda$core$String $s3709 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6C\x75\x65", 5, 22890280642, NULL };
static panda$core$String $s3776 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3D", 1, 162, NULL };
static panda$core$String $s3813 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1, 225, NULL };
static panda$core$String $s3864 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x6D\x61\x74\x63\x68\x24", 7, 146584075981198, NULL };
static panda$core$String $s3866 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5F", 1, 196, NULL };
static panda$core$String $s3869 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4369 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A", 1, 159, NULL };
static panda$core$String $s4372 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A\x20\x65\x72\x72\x6F\x72\x3A\x20", 9, 1725281418740475535, NULL };
static panda$core$String $s4375 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };

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
    org$pandalanguage$pandac$Compiler$addAlias$panda$core$String(self, &$s111);
}
void org$pandalanguage$pandac$Compiler$addAlias$panda$core$String(org$pandalanguage$pandac$Compiler* self, panda$core$String* p_name) {
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp114;
    org$pandalanguage$pandac$Position $tmp119;
    org$pandalanguage$pandac$Alias* $tmp112 = (org$pandalanguage$pandac$Alias*) malloc(64);
    $tmp112->$class = (panda$core$Class*) &org$pandalanguage$pandac$Alias$class;
    $tmp112->refCount.value = 1;
    panda$core$String$Index$nullable $tmp116 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(p_name, &$s115);
    panda$core$String$Index $tmp117 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(p_name, ((panda$core$String$Index) $tmp116.value));
    panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp114, ((panda$core$String$Index$nullable) { $tmp117, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
    panda$core$String* $tmp118 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(p_name, $tmp114);
    org$pandalanguage$pandac$Position$init(&$tmp119);
    org$pandalanguage$pandac$Alias$init$panda$core$String$panda$core$String$org$pandalanguage$pandac$Position($tmp112, $tmp118, p_name, $tmp119);
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->root, ((org$pandalanguage$pandac$Symbol*) $tmp112));
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Compiler* self, panda$core$String* p_name) {
    org$pandalanguage$pandac$ClassDecl* current120;
    org$pandalanguage$pandac$ClassDecl$Resolution* result124;
    panda$core$String* alias126;
    org$pandalanguage$pandac$ClassDecl* result134;
    panda$core$String$Index$nullable idx136;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp139;
    org$pandalanguage$pandac$Symbol* rootAlias151;
    panda$core$String$Index$nullable index158;
    org$pandalanguage$pandac$ClassDecl* parent161;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp162;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp165;
    panda$core$Int64 $tmp121 = panda$collections$Stack$get_count$R$panda$core$Int64(self->currentClass);
    panda$core$Bit $tmp122 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp121, ((panda$core$Int64) { 0 }));
    if ($tmp122.value) {
    {
        panda$core$Object* $tmp123 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
        current120 = ((org$pandalanguage$pandac$ClassDecl*) $tmp123);
    }
    }
    else {
    {
        current120 = NULL;
    }
    }
    if (((panda$core$Bit) { current120 != NULL }).value) {
    {
        panda$core$Object* $tmp125 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(current120->classResolutionCache, ((panda$collections$Key*) p_name));
        result124 = ((org$pandalanguage$pandac$ClassDecl$Resolution*) $tmp125);
        if (((panda$core$Bit) { result124 != NULL }).value) {
        {
            return result124->value;
        }
        }
        ITable* $tmp127 = current120->aliases->$class->itable;
        while ($tmp127->$class != (panda$core$Class*) &panda$collections$MapView$class) {
            $tmp127 = $tmp127->next;
        }
        $fn129 $tmp128 = $tmp127->methods[1];
        panda$core$Object* $tmp130 = $tmp128(current120->aliases, ((panda$core$Object*) p_name));
        alias126 = ((panda$core$String*) $tmp130);
        if (((panda$core$Bit) { alias126 != NULL }).value) {
        {
            org$pandalanguage$pandac$ClassDecl$Resolution* $tmp131 = (org$pandalanguage$pandac$ClassDecl$Resolution*) malloc(24);
            $tmp131->$class = (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Resolution$class;
            $tmp131->refCount.value = 1;
            org$pandalanguage$pandac$ClassDecl* $tmp133 = org$pandalanguage$pandac$Compiler$getClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, alias126);
            org$pandalanguage$pandac$ClassDecl$Resolution$init$org$pandalanguage$pandac$ClassDecl$Q($tmp131, $tmp133);
            result124 = $tmp131;
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(current120->classResolutionCache, ((panda$collections$Key*) p_name), ((panda$core$Object*) result124));
            return result124->value;
        }
        }
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp135 = org$pandalanguage$pandac$Compiler$getClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_name);
    result134 = $tmp135;
    if (((panda$core$Bit) { current120 != NULL }).value) {
    {
        if (((panda$core$Bit) { result134 == NULL }).value) {
        {
            panda$core$String$Index$nullable $tmp138 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(((org$pandalanguage$pandac$Symbol*) current120)->name, &$s137);
            idx136 = $tmp138;
            if (((panda$core$Bit) { idx136.nonnull }).value) {
            {
                panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp139, ((panda$core$String$Index$nullable) { .nonnull = false }), idx136, ((panda$core$Bit) { true }));
                panda$core$String* $tmp140 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) current120)->name, $tmp139);
                panda$core$String* $tmp141 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp140, p_name);
                org$pandalanguage$pandac$ClassDecl* $tmp142 = org$pandalanguage$pandac$Compiler$getClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, $tmp141);
                result134 = $tmp142;
            }
            }
        }
        }
        if (((panda$core$Bit) { result134 == NULL }).value) {
        {
            panda$core$String* $tmp144 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) current120)->name, &$s143);
            panda$core$String* $tmp145 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp144, p_name);
            org$pandalanguage$pandac$ClassDecl* $tmp146 = org$pandalanguage$pandac$Compiler$getClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, $tmp145);
            result134 = $tmp146;
        }
        }
        bool $tmp147 = ((panda$core$Bit) { result134 == NULL }).value;
        if (!$tmp147) goto $l148;
        $tmp147 = ((panda$core$Bit) { current120->owner != NULL }).value;
        $l148:;
        panda$core$Bit $tmp149 = { $tmp147 };
        if ($tmp149.value) {
        {
            panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) current120->owner));
            org$pandalanguage$pandac$ClassDecl* $tmp150 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_name);
            result134 = $tmp150;
            panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
        }
        }
    }
    }
    if (((panda$core$Bit) { result134 == NULL }).value) {
    {
        org$pandalanguage$pandac$Symbol* $tmp152 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(self->root, p_name);
        rootAlias151 = $tmp152;
        bool $tmp153 = ((panda$core$Bit) { rootAlias151 != NULL }).value;
        if (!$tmp153) goto $l154;
        panda$core$Bit $tmp155 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(rootAlias151->kind, ((panda$core$Int64) { 200 }));
        $tmp153 = $tmp155.value;
        $l154:;
        panda$core$Bit $tmp156 = { $tmp153 };
        if ($tmp156.value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp157 = org$pandalanguage$pandac$Compiler$getClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Alias*) rootAlias151)->fullName);
            result134 = $tmp157;
        }
        }
    }
    }
    if (((panda$core$Bit) { result134 == NULL }).value) {
    {
        panda$core$String$Index$nullable $tmp160 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(p_name, &$s159);
        index158 = $tmp160;
        if (((panda$core$Bit) { index158.nonnull }).value) {
        {
            panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp162, ((panda$core$String$Index$nullable) { .nonnull = false }), index158, ((panda$core$Bit) { false }));
            panda$core$String* $tmp163 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(p_name, $tmp162);
            org$pandalanguage$pandac$ClassDecl* $tmp164 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, $tmp163);
            parent161 = $tmp164;
            if (((panda$core$Bit) { parent161 != NULL }).value) {
            {
                panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp165, index158, ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                panda$core$String* $tmp166 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(p_name, $tmp165);
                panda$core$String* $tmp167 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) parent161)->name, $tmp166);
                org$pandalanguage$pandac$ClassDecl* $tmp168 = org$pandalanguage$pandac$Compiler$getClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, $tmp167);
                result134 = $tmp168;
            }
            }
        }
        }
    }
    }
    if (((panda$core$Bit) { current120 != NULL }).value) {
    {
        org$pandalanguage$pandac$ClassDecl$Resolution* $tmp169 = (org$pandalanguage$pandac$ClassDecl$Resolution*) malloc(24);
        $tmp169->$class = (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Resolution$class;
        $tmp169->refCount.value = 1;
        org$pandalanguage$pandac$ClassDecl$Resolution$init$org$pandalanguage$pandac$ClassDecl$Q($tmp169, result134);
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(current120->classResolutionCache, ((panda$collections$Key*) p_name), ((panda$core$Object*) $tmp169));
    }
    }
    return result134;
}
panda$core$Bit org$pandalanguage$pandac$Compiler$checkGenericParameters$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ClassDecl* p_cl, org$pandalanguage$pandac$Type* p_type) {
    panda$core$Int64 expectedCount171;
    panda$collections$ListView* foundTypes176;
    panda$core$Int64 foundCount178;
    panda$core$String* s184;
    org$pandalanguage$pandac$Type* object203;
    panda$core$Range$LTpanda$core$Int64$GT $tmp205;
    org$pandalanguage$pandac$Type* bound219;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
    PANDA_ASSERT(p_type->resolved.value);
    ITable* $tmp172 = ((panda$collections$CollectionView*) p_cl->parameters)->$class->itable;
    while ($tmp172->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp172 = $tmp172->next;
    }
    $fn174 $tmp173 = $tmp172->methods[0];
    panda$core$Int64 $tmp175 = $tmp173(((panda$collections$CollectionView*) p_cl->parameters));
    expectedCount171 = $tmp175;
    panda$collections$ListView* $tmp177 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p_type);
    foundTypes176 = $tmp177;
    ITable* $tmp179 = ((panda$collections$CollectionView*) foundTypes176)->$class->itable;
    while ($tmp179->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp179 = $tmp179->next;
    }
    $fn181 $tmp180 = $tmp179->methods[0];
    panda$core$Int64 $tmp182 = $tmp180(((panda$collections$CollectionView*) foundTypes176));
    foundCount178 = $tmp182;
    panda$core$Bit $tmp183 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(expectedCount171, foundCount178);
    if ($tmp183.value) {
    {
        panda$core$Bit $tmp185 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(expectedCount171, ((panda$core$Int64) { 1 }));
        if ($tmp185.value) {
        {
            s184 = &$s186;
        }
        }
        else {
        {
            s184 = &$s187;
        }
        }
        panda$core$String* $tmp189 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s188, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp191 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp189, &$s190);
        panda$core$String* $tmp192 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp191, ((panda$core$Object*) wrap_panda$core$Int64(expectedCount171)));
        panda$core$String* $tmp194 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp192, &$s193);
        panda$core$String* $tmp195 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp194, s184);
        panda$core$String* $tmp197 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp195, &$s196);
        panda$core$String* $tmp199 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s198, ((panda$core$Object*) wrap_panda$core$Int64(foundCount178)));
        panda$core$String* $tmp201 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp199, &$s200);
        panda$core$String* $tmp202 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp197, $tmp201);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp202);
        return ((panda$core$Bit) { false });
    }
    }
    org$pandalanguage$pandac$Type* $tmp204 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    object203 = $tmp204;
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp205, ((panda$core$Int64) { 0 }), expectedCount171, ((panda$core$Bit) { false }));
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
        ITable* $tmp234 = foundTypes176->$class->itable;
        while ($tmp234->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp234 = $tmp234->next;
        }
        $fn236 $tmp235 = $tmp234->methods[0];
        panda$core$Object* $tmp237 = $tmp235(foundTypes176, i206);
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
            ITable* $tmp259 = foundTypes176->$class->itable;
            while ($tmp259->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp259 = $tmp259->next;
            }
            $fn261 $tmp260 = $tmp259->methods[0];
            panda$core$Object* $tmp262 = $tmp260(foundTypes176, i206);
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
    panda$core$String* separator318;
    panda$core$Range$LTpanda$core$Int64$GT $tmp320;
    org$pandalanguage$pandac$Type* resolved335;
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
            panda$core$MutableString$append$panda$core$String(name313, &$s317);
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
            panda$core$MutableString$append$panda$core$String(name313, &$s345);
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
                    panda$core$Bit $tmp396 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(sClass394->classKind, ((panda$core$Int64) { 5011 }));
                    if ($tmp396.value) {
                    {
                        panda$core$Bit $tmp397 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_cl->classKind, ((panda$core$Int64) { 5012 }));
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
                        panda$core$Bit $tmp422 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(sClass394->classKind, ((panda$core$Int64) { 5012 }));
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
            panda$core$Bit $tmp537 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 57 }));
            bool $tmp536 = $tmp537.value;
            if (!$tmp536) goto $l538;
            panda$core$Bit $tmp539 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(overridden522->methodKind, ((panda$core$Int64) { 58 }));
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
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$resolveMethodCall$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr, org$pandalanguage$pandac$Type* p_target) {
    panda$collections$ListView* methods570;
    panda$collections$ImmutableArray* args572;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp573;
    panda$collections$Array* best575;
    panda$core$Int64$nullable bestCost578;
    panda$collections$Iterator* m$Iter579;
    org$pandalanguage$pandac$MethodRef* m591;
    panda$core$Int64$nullable cost596;
    org$pandalanguage$pandac$IRNode* callTarget602;
    org$pandalanguage$pandac$IRNode* result608;
    panda$core$Bit $tmp569 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1039 }));
    PANDA_ASSERT($tmp569.value);
    panda$core$Object* $tmp571 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
    methods570 = ((panda$collections$ListView*) ((org$pandalanguage$pandac$IRNode*) $tmp571)->payload);
    panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp573, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
    panda$collections$ImmutableArray* $tmp574 = panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(p_expr->children, $tmp573);
    args572 = $tmp574;
    panda$collections$Array* $tmp576 = (panda$collections$Array*) malloc(40);
    $tmp576->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp576->refCount.value = 1;
    panda$collections$Array$init($tmp576);
    best575 = $tmp576;
    bestCost578 = ((panda$core$Int64$nullable) { .nonnull = false });
    {
        ITable* $tmp580 = ((panda$collections$Iterable*) methods570)->$class->itable;
        while ($tmp580->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp580 = $tmp580->next;
        }
        $fn582 $tmp581 = $tmp580->methods[0];
        panda$collections$Iterator* $tmp583 = $tmp581(((panda$collections$Iterable*) methods570));
        m$Iter579 = $tmp583;
        $l584:;
        ITable* $tmp586 = m$Iter579->$class->itable;
        while ($tmp586->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp586 = $tmp586->next;
        }
        $fn588 $tmp587 = $tmp586->methods[0];
        panda$core$Bit $tmp589 = $tmp587(m$Iter579);
        panda$core$Bit $tmp590 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp589);
        if (!$tmp590.value) goto $l585;
        {
            ITable* $tmp592 = m$Iter579->$class->itable;
            while ($tmp592->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp592 = $tmp592->next;
            }
            $fn594 $tmp593 = $tmp592->methods[1];
            panda$core$Object* $tmp595 = $tmp593(m$Iter579);
            m591 = ((org$pandalanguage$pandac$MethodRef*) $tmp595);
            panda$core$Int64$nullable $tmp597 = org$pandalanguage$pandac$Compiler$callCost$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(self, m591, ((panda$collections$ListView*) args572), p_target);
            cost596 = $tmp597;
            if (((panda$core$Bit) { !cost596.nonnull }).value) {
            {
                goto $l584;
            }
            }
            if (((panda$core$Bit) { !bestCost578.nonnull }).value) {
            {
                panda$collections$Array$add$panda$collections$Array$T(best575, ((panda$core$Object*) m591));
                bestCost578 = cost596;
                goto $l584;
            }
            }
            panda$core$Bit $tmp598 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost596.value), ((panda$core$Int64) bestCost578.value));
            if ($tmp598.value) {
            {
                panda$collections$Array$clear(best575);
                bestCost578 = cost596;
            }
            }
            panda$core$Bit $tmp599 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost596.value), ((panda$core$Int64) bestCost578.value));
            if ($tmp599.value) {
            {
                panda$collections$Array$add$panda$collections$Array$T(best575, ((panda$core$Object*) m591));
            }
            }
        }
        goto $l584;
        $l585:;
    }
    panda$core$Int64 $tmp600 = panda$collections$Array$get_count$R$panda$core$Int64(best575);
    panda$core$Bit $tmp601 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp600, ((panda$core$Int64) { 1 }));
    if ($tmp601.value) {
    {
        panda$core$Object* $tmp603 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
        panda$core$Int64 $tmp604 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp603)->children);
        panda$core$Bit $tmp605 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp604, ((panda$core$Int64) { 0 }));
        if ($tmp605.value) {
        {
            panda$core$Object* $tmp606 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp607 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$IRNode*) $tmp606)->children, ((panda$core$Int64) { 0 }));
            callTarget602 = ((org$pandalanguage$pandac$IRNode*) $tmp607);
        }
        }
        else {
        {
            callTarget602 = NULL;
        }
        }
        panda$core$Object* $tmp609 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(best575, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp610 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr->position, callTarget602, ((org$pandalanguage$pandac$MethodRef*) $tmp609), ((panda$collections$ListView*) args572));
        result608 = $tmp610;
        if (((panda$core$Bit) { p_target != NULL }).value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp611 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, result608, p_target);
            result608 = $tmp611;
        }
        }
        return result608;
    }
    }
    panda$core$String* $tmp613 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s612, ((panda$core$Object*) wrap_org$pandalanguage$pandac$Position(p_expr->position)));
    panda$core$String* $tmp615 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp613, &$s614);
    ITable* $tmp616 = methods570->$class->itable;
    while ($tmp616->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp616 = $tmp616->next;
    }
    $fn618 $tmp617 = $tmp616->methods[0];
    panda$core$Object* $tmp619 = $tmp617(methods570, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp620 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp615, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodRef*) $tmp619)->value)->name);
    panda$core$String* $tmp622 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp620, &$s621);
    panda$core$String* $tmp623 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp622, ((panda$core$Object*) best575));
    panda$core$String* $tmp625 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp623, &$s624);
    panda$io$Console$printLine$panda$core$Object(((panda$core$Object*) $tmp625));
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
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_expr->position, &$s626);
            return NULL;
        }
        break;
        case 1039:
        {
            org$pandalanguage$pandac$IRNode* $tmp627 = org$pandalanguage$pandac$Compiler$resolveMethodCall$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, NULL);
            return $tmp627;
        }
        break;
        case 1024:
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_expr->position, &$s628);
            return NULL;
        }
        break;
        default:
        {
            org$pandalanguage$pandac$Type* $tmp629 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
            org$pandalanguage$pandac$IRNode* $tmp630 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, $tmp629);
            return $tmp630;
        }
    }
}
panda$core$Bit org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
    bool $tmp631 = ((panda$core$Bit) { p_cl->rawSuper != NULL }).value;
    if (!$tmp631) goto $l632;
    panda$core$Bit $tmp634 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_cl->rawSuper)->name, &$s633);
    $tmp631 = $tmp634.value;
    $l632:;
    panda$core$Bit $tmp635 = { $tmp631 };
    return $tmp635;
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Array* result636;
    org$pandalanguage$pandac$ClassDecl* s644;
    panda$collections$Iterator* f$Iter647;
    org$pandalanguage$pandac$FieldDecl* f659;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
    panda$collections$Array* $tmp637 = (panda$collections$Array*) malloc(40);
    $tmp637->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp637->refCount.value = 1;
    panda$collections$Array$init($tmp637);
    result636 = $tmp637;
    panda$core$Bit $tmp640 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, p_cl);
    panda$core$Bit $tmp641 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp640);
    bool $tmp639 = $tmp641.value;
    if (!$tmp639) goto $l642;
    $tmp639 = ((panda$core$Bit) { p_cl->rawSuper != NULL }).value;
    $l642:;
    panda$core$Bit $tmp643 = { $tmp639 };
    if ($tmp643.value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp645 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_cl->rawSuper);
        s644 = $tmp645;
        if (((panda$core$Bit) { s644 != NULL }).value) {
        {
            panda$collections$ListView* $tmp646 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self, s644);
            panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(result636, ((panda$collections$CollectionView*) $tmp646));
        }
        }
    }
    }
    {
        ITable* $tmp648 = ((panda$collections$Iterable*) p_cl->fields)->$class->itable;
        while ($tmp648->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp648 = $tmp648->next;
        }
        $fn650 $tmp649 = $tmp648->methods[0];
        panda$collections$Iterator* $tmp651 = $tmp649(((panda$collections$Iterable*) p_cl->fields));
        f$Iter647 = $tmp651;
        $l652:;
        ITable* $tmp654 = f$Iter647->$class->itable;
        while ($tmp654->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp654 = $tmp654->next;
        }
        $fn656 $tmp655 = $tmp654->methods[0];
        panda$core$Bit $tmp657 = $tmp655(f$Iter647);
        panda$core$Bit $tmp658 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp657);
        if (!$tmp658.value) goto $l653;
        {
            ITable* $tmp660 = f$Iter647->$class->itable;
            while ($tmp660->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp660 = $tmp660->next;
            }
            $fn662 $tmp661 = $tmp660->methods[1];
            panda$core$Object* $tmp663 = $tmp661(f$Iter647);
            f659 = ((org$pandalanguage$pandac$FieldDecl*) $tmp663);
            panda$core$Bit $tmp664 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(f659->annotations);
            panda$core$Bit $tmp665 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp664);
            if ($tmp665.value) {
            {
                panda$collections$Array$add$panda$collections$Array$T(result636, ((panda$core$Object*) f659));
            }
            }
        }
        goto $l652;
        $l653:;
    }
    return ((panda$collections$ListView*) result636);
}
panda$core$Bit org$pandalanguage$pandac$Compiler$exists$panda$io$File$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, panda$io$File* p_f) {
    panda$core$Bit$nullable result666;
    panda$core$Bit $tmp668;
    panda$core$Object* $tmp667 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->existenceCache, ((panda$collections$Key*) p_f));
    result666 = ($tmp667 != NULL ? ((panda$core$Bit$nullable) { ((panda$core$Bit$wrapper*) $tmp667)->value, true }) : (panda$core$Bit$nullable) { .nonnull = 0 });
    if (((panda$core$Bit) { !result666.nonnull }).value) {
    {
        panda$io$File$exists$R$panda$core$Bit(&$tmp668, p_f);
        result666 = ((panda$core$Bit$nullable) { $tmp668, true });
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->existenceCache, ((panda$collections$Key*) p_f), ((panda$core$Object*) wrap_panda$core$Bit(((panda$core$Bit) result666.value))));
    }
    }
    return ((panda$core$Bit) result666.value);
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Compiler$getClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Compiler* self, panda$core$String* p_fullName) {
    org$pandalanguage$pandac$ClassDecl* result669;
    panda$core$String* suffix671;
    panda$core$Bit found677;
    panda$collections$Iterator* dir$Iter678;
    panda$io$File* dir690;
    panda$io$File* f695;
    panda$core$String$Index$nullable index699;
    org$pandalanguage$pandac$ClassDecl* parent702;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp703;
    panda$core$Object* $tmp670 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) p_fullName));
    result669 = ((org$pandalanguage$pandac$ClassDecl*) $tmp670);
    if (((panda$core$Bit) { result669 == NULL }).value) {
    {
        panda$core$String* $tmp674 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(p_fullName, &$s672, &$s673);
        panda$core$String* $tmp676 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp674, &$s675);
        suffix671 = $tmp676;
        found677 = ((panda$core$Bit) { false });
        {
            ITable* $tmp679 = ((panda$collections$Iterable*) self->settings->importDirs)->$class->itable;
            while ($tmp679->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp679 = $tmp679->next;
            }
            $fn681 $tmp680 = $tmp679->methods[0];
            panda$collections$Iterator* $tmp682 = $tmp680(((panda$collections$Iterable*) self->settings->importDirs));
            dir$Iter678 = $tmp682;
            $l683:;
            ITable* $tmp685 = dir$Iter678->$class->itable;
            while ($tmp685->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp685 = $tmp685->next;
            }
            $fn687 $tmp686 = $tmp685->methods[0];
            panda$core$Bit $tmp688 = $tmp686(dir$Iter678);
            panda$core$Bit $tmp689 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp688);
            if (!$tmp689.value) goto $l684;
            {
                ITable* $tmp691 = dir$Iter678->$class->itable;
                while ($tmp691->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp691 = $tmp691->next;
                }
                $fn693 $tmp692 = $tmp691->methods[1];
                panda$core$Object* $tmp694 = $tmp692(dir$Iter678);
                dir690 = ((panda$io$File*) $tmp694);
                panda$io$File* $tmp696 = panda$io$File$resolve$panda$core$String$R$panda$io$File(dir690, suffix671);
                f695 = $tmp696;
                panda$core$Bit $tmp697 = org$pandalanguage$pandac$Compiler$exists$panda$io$File$R$panda$core$Bit(self, f695);
                if ($tmp697.value) {
                {
                    found677 = ((panda$core$Bit) { true });
                    org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(self, f695);
                    panda$core$Object* $tmp698 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) p_fullName));
                    result669 = ((org$pandalanguage$pandac$ClassDecl*) $tmp698);
                }
                }
            }
            goto $l683;
            $l684:;
        }
    }
    }
    if (((panda$core$Bit) { result669 == NULL }).value) {
    {
        panda$core$String$Index$nullable $tmp701 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(p_fullName, &$s700);
        index699 = $tmp701;
        if (((panda$core$Bit) { index699.nonnull }).value) {
        {
            panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp703, ((panda$core$String$Index$nullable) { .nonnull = false }), index699, ((panda$core$Bit) { false }));
            panda$core$String* $tmp704 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(p_fullName, $tmp703);
            org$pandalanguage$pandac$ClassDecl* $tmp705 = org$pandalanguage$pandac$Compiler$getClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, $tmp704);
            parent702 = $tmp705;
            if (((panda$core$Bit) { parent702 != NULL }).value) {
            {
                panda$core$Object* $tmp706 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) p_fullName));
                result669 = ((org$pandalanguage$pandac$ClassDecl*) $tmp706);
            }
            }
        }
        }
    }
    }
    return result669;
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Position$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, panda$core$String* p_fullName) {
    org$pandalanguage$pandac$ClassDecl* result707;
    panda$core$String* suffix709;
    panda$core$Bit found715;
    panda$collections$Iterator* dir$Iter716;
    panda$io$File* dir728;
    panda$io$File* f733;
    panda$core$Int64 oldErrorCount736;
    org$pandalanguage$pandac$Position $tmp742;
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
                    oldErrorCount736 = self->errorCount;
                    org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(self, f733);
                    panda$core$Object* $tmp737 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) p_fullName));
                    result707 = ((org$pandalanguage$pandac$ClassDecl*) $tmp737);
                    bool $tmp738 = ((panda$core$Bit) { result707 == NULL }).value;
                    if (!$tmp738) goto $l739;
                    panda$core$Bit $tmp740 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->errorCount, oldErrorCount736);
                    $tmp738 = $tmp740.value;
                    $l739:;
                    panda$core$Bit $tmp741 = { $tmp738 };
                    if ($tmp741.value) {
                    {
                        org$pandalanguage$pandac$Position$init$panda$core$Int64$panda$core$Int64(&$tmp742, ((panda$core$Int64) { 1 }), ((panda$core$Int64) { 1 }));
                        panda$core$String* $tmp744 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s743, ((panda$core$Object*) f733));
                        panda$core$String* $tmp746 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp744, &$s745);
                        panda$core$String* $tmp747 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp746, p_fullName);
                        panda$core$String* $tmp749 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp747, &$s748);
                        org$pandalanguage$pandac$Compiler$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String(self, f733, $tmp742, $tmp749);
                    }
                    }
                }
                }
            }
            goto $l721;
            $l722:;
        }
        panda$core$Bit $tmp750 = panda$core$Bit$$NOT$R$panda$core$Bit(found715);
        if ($tmp750.value) {
        {
            panda$core$String* $tmp752 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s751, suffix709);
            panda$core$String* $tmp754 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp752, &$s753);
            panda$core$String* $tmp755 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp754, ((panda$core$Object*) self->settings->importDirs));
            panda$core$String* $tmp757 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp755, &$s756);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp757);
        }
        }
    }
    }
    return result707;
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Compiler$specialize$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl, org$pandalanguage$pandac$Type* p_rawType) {
    org$pandalanguage$pandac$Type* type761;
    org$pandalanguage$pandac$ClassDecl* result768;
    org$pandalanguage$pandac$Annotations* annotations770;
    panda$collections$Array* supertypes776;
    panda$collections$Iterator* intf$Iter780;
    org$pandalanguage$pandac$Type* intf792;
    panda$collections$HashMap* aliases798;
    panda$core$Range$LTpanda$core$Int64$GT $tmp801;
    panda$collections$Iterator* m$Iter836;
    org$pandalanguage$pandac$MethodDecl* m848;
    panda$collections$Array* parameters853;
    panda$collections$Iterator* p$Iter856;
    org$pandalanguage$pandac$MethodDecl$Parameter* p868;
    org$pandalanguage$pandac$MethodDecl* clone876;
    panda$collections$Iterator* f$Iter880;
    org$pandalanguage$pandac$FieldDecl* f892;
    org$pandalanguage$pandac$FieldDecl* clone897;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
    panda$core$Bit $tmp759 = panda$core$String$contains$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_rawType)->name, &$s758);
    panda$core$Bit $tmp760 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp759);
    PANDA_ASSERT($tmp760.value);
    org$pandalanguage$pandac$Type* $tmp762 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, p_rawType);
    type761 = $tmp762;
    panda$core$Bit $tmp763 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(type761->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp763.value) {
    {
        panda$core$Object* $tmp764 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(type761->subtypes, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$ClassDecl* $tmp765 = org$pandalanguage$pandac$Compiler$specialize$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl(self, p_cl, ((org$pandalanguage$pandac$Type*) $tmp764));
        return $tmp765;
    }
    }
    panda$core$Bit $tmp766 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(type761->typeKind, ((panda$core$Int64) { 10 }));
    if ($tmp766.value) {
    {
        return p_cl;
    }
    }
    panda$core$Bit $tmp767 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(type761->typeKind, ((panda$core$Int64) { 21 }));
    PANDA_ASSERT($tmp767.value);
    panda$core$Object* $tmp769 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) type761)->name));
    result768 = ((org$pandalanguage$pandac$ClassDecl*) $tmp769);
    if (((panda$core$Bit) { result768 == NULL }).value) {
    {
        panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_cl));
        org$pandalanguage$pandac$Annotations* $tmp771 = (org$pandalanguage$pandac$Annotations*) malloc(24);
        $tmp771->$class = (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class;
        $tmp771->refCount.value = 1;
        panda$core$Int64 $tmp773 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 11 }));
        panda$core$Int64 $tmp774 = panda$core$Int64$$BNOT$R$panda$core$Int64($tmp773);
        panda$core$Int64 $tmp775 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(p_cl->annotations->flags, $tmp774);
        org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp771, $tmp775);
        annotations770 = $tmp771;
        panda$collections$Array* $tmp777 = (panda$collections$Array*) malloc(40);
        $tmp777->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp777->refCount.value = 1;
        panda$collections$Array$init($tmp777);
        supertypes776 = $tmp777;
        org$pandalanguage$pandac$Type* $tmp779 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, type761, p_cl->rawSuper);
        panda$collections$Array$add$panda$collections$Array$T(supertypes776, ((panda$core$Object*) $tmp779));
        {
            ITable* $tmp781 = ((panda$collections$Iterable*) p_cl->rawInterfaces)->$class->itable;
            while ($tmp781->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp781 = $tmp781->next;
            }
            $fn783 $tmp782 = $tmp781->methods[0];
            panda$collections$Iterator* $tmp784 = $tmp782(((panda$collections$Iterable*) p_cl->rawInterfaces));
            intf$Iter780 = $tmp784;
            $l785:;
            ITable* $tmp787 = intf$Iter780->$class->itable;
            while ($tmp787->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp787 = $tmp787->next;
            }
            $fn789 $tmp788 = $tmp787->methods[0];
            panda$core$Bit $tmp790 = $tmp788(intf$Iter780);
            panda$core$Bit $tmp791 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp790);
            if (!$tmp791.value) goto $l786;
            {
                ITable* $tmp793 = intf$Iter780->$class->itable;
                while ($tmp793->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp793 = $tmp793->next;
                }
                $fn795 $tmp794 = $tmp793->methods[1];
                panda$core$Object* $tmp796 = $tmp794(intf$Iter780);
                intf792 = ((org$pandalanguage$pandac$Type*) $tmp796);
                org$pandalanguage$pandac$Type* $tmp797 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, type761, intf792);
                panda$collections$Array$add$panda$collections$Array$T(supertypes776, ((panda$core$Object*) $tmp797));
            }
            goto $l785;
            $l786:;
        }
        panda$collections$HashMap* $tmp799 = (panda$collections$HashMap*) malloc(56);
        $tmp799->$class = (panda$core$Class*) &panda$collections$HashMap$class;
        $tmp799->refCount.value = 1;
        panda$collections$HashMap$init$panda$collections$MapView$LTpanda$collections$HashMap$K$Cpanda$collections$HashMap$V$GT($tmp799, p_cl->aliases);
        aliases798 = $tmp799;
        ITable* $tmp802 = ((panda$collections$CollectionView*) p_cl->parameters)->$class->itable;
        while ($tmp802->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp802 = $tmp802->next;
        }
        $fn804 $tmp803 = $tmp802->methods[0];
        panda$core$Int64 $tmp805 = $tmp803(((panda$collections$CollectionView*) p_cl->parameters));
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp801, ((panda$core$Int64) { 0 }), $tmp805, ((panda$core$Bit) { false }));
        int64_t $tmp807 = $tmp801.min.value;
        panda$core$Int64 i806 = { $tmp807 };
        int64_t $tmp809 = $tmp801.max.value;
        bool $tmp810 = $tmp801.inclusive.value;
        if ($tmp810) goto $l817; else goto $l818;
        $l817:;
        if ($tmp807 <= $tmp809) goto $l811; else goto $l813;
        $l818:;
        if ($tmp807 < $tmp809) goto $l811; else goto $l813;
        $l811:;
        {
            ITable* $tmp819 = ((panda$collections$ListView*) p_cl->parameters)->$class->itable;
            while ($tmp819->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp819 = $tmp819->next;
            }
            $fn821 $tmp820 = $tmp819->methods[0];
            panda$core$Object* $tmp822 = $tmp820(((panda$collections$ListView*) p_cl->parameters), i806);
            panda$core$Int64 $tmp823 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i806, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp824 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(type761->subtypes, $tmp823);
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(aliases798, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp822))->name), ((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp824))->name));
        }
        $l814:;
        int64_t $tmp826 = $tmp809 - i806.value;
        if ($tmp810) goto $l827; else goto $l828;
        $l827:;
        if ($tmp826 >= 1) goto $l825; else goto $l813;
        $l828:;
        if ($tmp826 > 1) goto $l825; else goto $l813;
        $l825:;
        i806.value += 1;
        goto $l811;
        $l813:;
        org$pandalanguage$pandac$ClassDecl* $tmp831 = (org$pandalanguage$pandac$ClassDecl*) malloc(193);
        $tmp831->$class = (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$class;
        $tmp831->refCount.value = 1;
        panda$collections$Array* $tmp833 = (panda$collections$Array*) malloc(40);
        $tmp833->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp833->refCount.value = 1;
        panda$collections$Array$init($tmp833);
        panda$core$Object* $tmp835 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_cl->symbolTable->parents, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$ClassDecl$init$panda$io$File$org$pandalanguage$pandac$Position$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable($tmp831, p_cl->source, ((org$pandalanguage$pandac$Symbol*) p_cl)->position, ((panda$collections$MapView*) aliases798), p_cl->doccomment, annotations770, p_cl->classKind, ((org$pandalanguage$pandac$Symbol*) type761)->name, ((panda$collections$ListView*) supertypes776), $tmp833, ((org$pandalanguage$pandac$SymbolTable*) $tmp835));
        result768 = $tmp831;
        result768->external = ((panda$core$Bit) { false });
        {
            ITable* $tmp837 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
            while ($tmp837->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp837 = $tmp837->next;
            }
            $fn839 $tmp838 = $tmp837->methods[0];
            panda$collections$Iterator* $tmp840 = $tmp838(((panda$collections$Iterable*) p_cl->methods));
            m$Iter836 = $tmp840;
            $l841:;
            ITable* $tmp843 = m$Iter836->$class->itable;
            while ($tmp843->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp843 = $tmp843->next;
            }
            $fn845 $tmp844 = $tmp843->methods[0];
            panda$core$Bit $tmp846 = $tmp844(m$Iter836);
            panda$core$Bit $tmp847 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp846);
            if (!$tmp847.value) goto $l842;
            {
                ITable* $tmp849 = m$Iter836->$class->itable;
                while ($tmp849->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp849 = $tmp849->next;
                }
                $fn851 $tmp850 = $tmp849->methods[1];
                panda$core$Object* $tmp852 = $tmp850(m$Iter836);
                m848 = ((org$pandalanguage$pandac$MethodDecl*) $tmp852);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m848);
                panda$collections$Array* $tmp854 = (panda$collections$Array*) malloc(40);
                $tmp854->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp854->refCount.value = 1;
                panda$collections$Array$init($tmp854);
                parameters853 = $tmp854;
                {
                    ITable* $tmp857 = ((panda$collections$Iterable*) m848->parameters)->$class->itable;
                    while ($tmp857->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp857 = $tmp857->next;
                    }
                    $fn859 $tmp858 = $tmp857->methods[0];
                    panda$collections$Iterator* $tmp860 = $tmp858(((panda$collections$Iterable*) m848->parameters));
                    p$Iter856 = $tmp860;
                    $l861:;
                    ITable* $tmp863 = p$Iter856->$class->itable;
                    while ($tmp863->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp863 = $tmp863->next;
                    }
                    $fn865 $tmp864 = $tmp863->methods[0];
                    panda$core$Bit $tmp866 = $tmp864(p$Iter856);
                    panda$core$Bit $tmp867 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp866);
                    if (!$tmp867.value) goto $l862;
                    {
                        ITable* $tmp869 = p$Iter856->$class->itable;
                        while ($tmp869->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp869 = $tmp869->next;
                        }
                        $fn871 $tmp870 = $tmp869->methods[1];
                        panda$core$Object* $tmp872 = $tmp870(p$Iter856);
                        p868 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp872);
                        org$pandalanguage$pandac$MethodDecl$Parameter* $tmp873 = (org$pandalanguage$pandac$MethodDecl$Parameter*) malloc(32);
                        $tmp873->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class;
                        $tmp873->refCount.value = 1;
                        org$pandalanguage$pandac$Type* $tmp875 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, type761, p868->type);
                        org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp873, p868->name, $tmp875);
                        panda$collections$Array$add$panda$collections$Array$T(parameters853, ((panda$core$Object*) $tmp873));
                    }
                    goto $l861;
                    $l862:;
                }
                org$pandalanguage$pandac$MethodDecl* $tmp877 = (org$pandalanguage$pandac$MethodDecl*) malloc(136);
                $tmp877->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class;
                $tmp877->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp879 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, type761, m848->returnType);
                org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp877, result768, ((org$pandalanguage$pandac$Symbol*) m848)->position, m848->doccomment, m848->annotations, m848->methodKind, ((org$pandalanguage$pandac$Symbol*) m848)->name, parameters853, $tmp879, m848->body);
                clone876 = $tmp877;
                panda$collections$Array$add$panda$collections$Array$T(result768->methods, ((panda$core$Object*) clone876));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result768->symbolTable, ((org$pandalanguage$pandac$Symbol*) clone876));
            }
            goto $l841;
            $l842:;
        }
        {
            ITable* $tmp881 = ((panda$collections$Iterable*) p_cl->fields)->$class->itable;
            while ($tmp881->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp881 = $tmp881->next;
            }
            $fn883 $tmp882 = $tmp881->methods[0];
            panda$collections$Iterator* $tmp884 = $tmp882(((panda$collections$Iterable*) p_cl->fields));
            f$Iter880 = $tmp884;
            $l885:;
            ITable* $tmp887 = f$Iter880->$class->itable;
            while ($tmp887->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp887 = $tmp887->next;
            }
            $fn889 $tmp888 = $tmp887->methods[0];
            panda$core$Bit $tmp890 = $tmp888(f$Iter880);
            panda$core$Bit $tmp891 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp890);
            if (!$tmp891.value) goto $l886;
            {
                ITable* $tmp893 = f$Iter880->$class->itable;
                while ($tmp893->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp893 = $tmp893->next;
                }
                $fn895 $tmp894 = $tmp893->methods[1];
                panda$core$Object* $tmp896 = $tmp894(f$Iter880);
                f892 = ((org$pandalanguage$pandac$FieldDecl*) $tmp896);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self, f892);
                org$pandalanguage$pandac$FieldDecl* $tmp898 = (org$pandalanguage$pandac$FieldDecl*) malloc(113);
                $tmp898->$class = (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class;
                $tmp898->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp900 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, type761, f892->type);
                org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp898, result768, ((org$pandalanguage$pandac$Symbol*) f892)->position, f892->doccomment, f892->annotations, f892->fieldKind, ((org$pandalanguage$pandac$Symbol*) f892)->name, $tmp900, f892->rawValue);
                clone897 = $tmp898;
                panda$collections$Array$add$panda$collections$Array$T(result768->fields, ((panda$core$Object*) clone897));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result768->symbolTable, ((org$pandalanguage$pandac$Symbol*) clone897));
            }
            goto $l885;
            $l886:;
        }
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classes, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) result768)->name), ((panda$core$Object*) result768));
        panda$collections$Array$add$panda$collections$Array$T(self->compilationQueue, ((panda$core$Object*) result768));
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, result768);
    }
    }
    return result768;
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type) {
    org$pandalanguage$pandac$ClassDecl* result901;
    PANDA_ASSERT(p_type->resolved.value);
    switch (p_type->typeKind.value) {
        case 10:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp902 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Position$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Symbol*) p_type)->position, ((org$pandalanguage$pandac$Symbol*) p_type)->name);
            result901 = $tmp902;
        }
        break;
        case 11:
        case 21:
        {
            panda$core$Object* $tmp903 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$ClassDecl* $tmp904 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Type*) $tmp903));
            result901 = $tmp904;
        }
        break;
        case 22:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp905 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_type->parameter->bound);
            return $tmp905;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
    panda$core$Bit $tmp906 = org$pandalanguage$pandac$Annotations$isSpecialize$R$panda$core$Bit(result901->annotations);
    if ($tmp906.value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp907 = org$pandalanguage$pandac$Compiler$specialize$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl(self, result901, p_type);
        result901 = $tmp907;
    }
    }
    return result901;
}
panda$collections$Set* org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_t) {
    org$pandalanguage$pandac$ClassDecl* cl908;
    panda$collections$Set* result910;
    panda$collections$Iterator* intf$Iter915;
    org$pandalanguage$pandac$Type* intf927;
    org$pandalanguage$pandac$ClassDecl* $tmp909 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_t);
    cl908 = $tmp909;
    PANDA_ASSERT(((panda$core$Bit) { cl908 != NULL }).value);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, cl908);
    panda$collections$Set* $tmp911 = (panda$collections$Set*) malloc(24);
    $tmp911->$class = (panda$core$Class*) &panda$collections$Set$class;
    $tmp911->refCount.value = 1;
    panda$collections$Set$init($tmp911);
    result910 = $tmp911;
    if (((panda$core$Bit) { cl908->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp913 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_t, cl908->rawSuper);
        panda$collections$Set* $tmp914 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self, $tmp913);
        panda$collections$Set$addAll$panda$collections$CollectionView$LTpanda$collections$Set$T$GT(result910, ((panda$collections$CollectionView*) $tmp914));
    }
    }
    {
        ITable* $tmp916 = ((panda$collections$Iterable*) cl908->rawInterfaces)->$class->itable;
        while ($tmp916->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp916 = $tmp916->next;
        }
        $fn918 $tmp917 = $tmp916->methods[0];
        panda$collections$Iterator* $tmp919 = $tmp917(((panda$collections$Iterable*) cl908->rawInterfaces));
        intf$Iter915 = $tmp919;
        $l920:;
        ITable* $tmp922 = intf$Iter915->$class->itable;
        while ($tmp922->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp922 = $tmp922->next;
        }
        $fn924 $tmp923 = $tmp922->methods[0];
        panda$core$Bit $tmp925 = $tmp923(intf$Iter915);
        panda$core$Bit $tmp926 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp925);
        if (!$tmp926.value) goto $l921;
        {
            ITable* $tmp928 = intf$Iter915->$class->itable;
            while ($tmp928->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp928 = $tmp928->next;
            }
            $fn930 $tmp929 = $tmp928->methods[1];
            panda$core$Object* $tmp931 = $tmp929(intf$Iter915);
            intf927 = ((org$pandalanguage$pandac$Type*) $tmp931);
            org$pandalanguage$pandac$Type* $tmp932 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_t, intf927);
            panda$collections$Set* $tmp933 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self, $tmp932);
            panda$collections$Set$addAll$panda$collections$CollectionView$LTpanda$collections$Set$T$GT(result910, ((panda$collections$CollectionView*) $tmp933));
        }
        goto $l920;
        $l921:;
    }
    panda$core$Bit $tmp934 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(cl908->classKind, ((panda$core$Int64) { 5012 }));
    if ($tmp934.value) {
    {
        panda$collections$Set$add$panda$collections$Set$T(result910, ((panda$collections$Key*) p_t));
    }
    }
    return result910;
}
panda$core$Bit org$pandalanguage$pandac$Compiler$signatureMatch$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_t1, org$pandalanguage$pandac$Type* p_t2) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp940;
    panda$core$Bit $tmp935 = org$pandalanguage$pandac$Type$isMethod$R$panda$core$Bit(p_t1);
    PANDA_ASSERT($tmp935.value);
    panda$core$Bit $tmp936 = org$pandalanguage$pandac$Type$isMethod$R$panda$core$Bit(p_t2);
    PANDA_ASSERT($tmp936.value);
    panda$core$Int64 $tmp937 = panda$collections$Array$get_count$R$panda$core$Int64(p_t1->subtypes);
    panda$core$Int64 $tmp938 = panda$collections$Array$get_count$R$panda$core$Int64(p_t2->subtypes);
    panda$core$Bit $tmp939 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp937, $tmp938);
    if ($tmp939.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Int64 $tmp941 = panda$collections$Array$get_count$R$panda$core$Int64(p_t1->subtypes);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp940, ((panda$core$Int64) { 0 }), $tmp941, ((panda$core$Bit) { false }));
    int64_t $tmp943 = $tmp940.min.value;
    panda$core$Int64 i942 = { $tmp943 };
    int64_t $tmp945 = $tmp940.max.value;
    bool $tmp946 = $tmp940.inclusive.value;
    if ($tmp946) goto $l953; else goto $l954;
    $l953:;
    if ($tmp943 <= $tmp945) goto $l947; else goto $l949;
    $l954:;
    if ($tmp943 < $tmp945) goto $l947; else goto $l949;
    $l947:;
    {
        panda$core$Object* $tmp955 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t1->subtypes, i942);
        panda$core$Object* $tmp956 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t2->subtypes, i942);
        panda$core$Bit $tmp957 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp955), ((org$pandalanguage$pandac$Type*) $tmp956));
        if ($tmp957.value) {
        {
            return ((panda$core$Bit) { false });
        }
        }
    }
    $l950:;
    int64_t $tmp959 = $tmp945 - i942.value;
    if ($tmp946) goto $l960; else goto $l961;
    $l960:;
    if ($tmp959 >= 1) goto $l958; else goto $l949;
    $l961:;
    if ($tmp959 > 1) goto $l958; else goto $l949;
    $l958:;
    i942.value += 1;
    goto $l947;
    $l949:;
    return ((panda$core$Bit) { true });
}
org$pandalanguage$pandac$MethodDecl* org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_owner, panda$core$String* p_name, org$pandalanguage$pandac$Type* p_methodType, panda$core$Bit p_checkInterfaces) {
    org$pandalanguage$pandac$ClassDecl* cl964;
    panda$collections$Iterator* test$Iter966;
    org$pandalanguage$pandac$MethodDecl* test978;
    panda$collections$Iterator* raw$Iter991;
    org$pandalanguage$pandac$Type* raw1003;
    org$pandalanguage$pandac$MethodDecl* result1008;
    org$pandalanguage$pandac$ClassDecl* $tmp965 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_owner);
    cl964 = $tmp965;
    PANDA_ASSERT(((panda$core$Bit) { cl964 != NULL }).value);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, cl964);
    {
        ITable* $tmp967 = ((panda$collections$Iterable*) cl964->methods)->$class->itable;
        while ($tmp967->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp967 = $tmp967->next;
        }
        $fn969 $tmp968 = $tmp967->methods[0];
        panda$collections$Iterator* $tmp970 = $tmp968(((panda$collections$Iterable*) cl964->methods));
        test$Iter966 = $tmp970;
        $l971:;
        ITable* $tmp973 = test$Iter966->$class->itable;
        while ($tmp973->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp973 = $tmp973->next;
        }
        $fn975 $tmp974 = $tmp973->methods[0];
        panda$core$Bit $tmp976 = $tmp974(test$Iter966);
        panda$core$Bit $tmp977 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp976);
        if (!$tmp977.value) goto $l972;
        {
            ITable* $tmp979 = test$Iter966->$class->itable;
            while ($tmp979->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp979 = $tmp979->next;
            }
            $fn981 $tmp980 = $tmp979->methods[1];
            panda$core$Object* $tmp982 = $tmp980(test$Iter966);
            test978 = ((org$pandalanguage$pandac$MethodDecl*) $tmp982);
            panda$core$Bit $tmp983 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) test978)->name, p_name);
            if ($tmp983.value) {
            {
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, test978);
                org$pandalanguage$pandac$Type* $tmp984 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, test978);
                org$pandalanguage$pandac$Type* $tmp985 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_owner, $tmp984);
                panda$core$Bit $tmp986 = org$pandalanguage$pandac$Compiler$signatureMatch$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, $tmp985, p_methodType);
                if ($tmp986.value) {
                {
                    return test978;
                }
                }
            }
            }
        }
        goto $l971;
        $l972:;
    }
    bool $tmp987 = p_checkInterfaces.value;
    if ($tmp987) goto $l988;
    panda$core$Bit $tmp989 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(cl964->classKind, ((panda$core$Int64) { 5012 }));
    $tmp987 = $tmp989.value;
    $l988:;
    panda$core$Bit $tmp990 = { $tmp987 };
    if ($tmp990.value) {
    {
        {
            ITable* $tmp992 = ((panda$collections$Iterable*) cl964->rawInterfaces)->$class->itable;
            while ($tmp992->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp992 = $tmp992->next;
            }
            $fn994 $tmp993 = $tmp992->methods[0];
            panda$collections$Iterator* $tmp995 = $tmp993(((panda$collections$Iterable*) cl964->rawInterfaces));
            raw$Iter991 = $tmp995;
            $l996:;
            ITable* $tmp998 = raw$Iter991->$class->itable;
            while ($tmp998->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp998 = $tmp998->next;
            }
            $fn1000 $tmp999 = $tmp998->methods[0];
            panda$core$Bit $tmp1001 = $tmp999(raw$Iter991);
            panda$core$Bit $tmp1002 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1001);
            if (!$tmp1002.value) goto $l997;
            {
                ITable* $tmp1004 = raw$Iter991->$class->itable;
                while ($tmp1004->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1004 = $tmp1004->next;
                }
                $fn1006 $tmp1005 = $tmp1004->methods[1];
                panda$core$Object* $tmp1007 = $tmp1005(raw$Iter991);
                raw1003 = ((org$pandalanguage$pandac$Type*) $tmp1007);
                org$pandalanguage$pandac$Type* $tmp1009 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_owner, raw1003);
                org$pandalanguage$pandac$MethodDecl* $tmp1010 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp1009, p_name, p_methodType, p_checkInterfaces);
                result1008 = $tmp1010;
                if (((panda$core$Bit) { result1008 != NULL }).value) {
                {
                    return result1008;
                }
                }
            }
            goto $l996;
            $l997:;
        }
    }
    }
    if (((panda$core$Bit) { cl964->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp1011 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_owner, cl964->rawSuper);
        org$pandalanguage$pandac$MethodDecl* $tmp1012 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp1011, p_name, p_methodType, p_checkInterfaces);
        return $tmp1012;
    }
    }
    return NULL;
}
org$pandalanguage$pandac$MethodDecl* org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$Type* methodType1014;
    org$pandalanguage$pandac$Type* owner1016;
    panda$collections$Iterator* raw$Iter1018;
    org$pandalanguage$pandac$Type* raw1030;
    org$pandalanguage$pandac$MethodDecl* result1035;
    org$pandalanguage$pandac$MethodDecl* result1038;
    if (p_m->overrideKnown.value) {
    {
        return p_m->overridden;
    }
    }
    panda$core$Bit $tmp1013 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 59 }));
    if ($tmp1013.value) {
    {
        p_m->overrideKnown = ((panda$core$Bit) { true });
        return NULL;
    }
    }
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
    org$pandalanguage$pandac$Type* $tmp1015 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, p_m);
    methodType1014 = $tmp1015;
    org$pandalanguage$pandac$Type* $tmp1017 = org$pandalanguage$pandac$ClassDecl$typeWithParameters$R$org$pandalanguage$pandac$Type(p_m->owner);
    owner1016 = $tmp1017;
    {
        ITable* $tmp1019 = ((panda$collections$Iterable*) p_m->owner->rawInterfaces)->$class->itable;
        while ($tmp1019->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1019 = $tmp1019->next;
        }
        $fn1021 $tmp1020 = $tmp1019->methods[0];
        panda$collections$Iterator* $tmp1022 = $tmp1020(((panda$collections$Iterable*) p_m->owner->rawInterfaces));
        raw$Iter1018 = $tmp1022;
        $l1023:;
        ITable* $tmp1025 = raw$Iter1018->$class->itable;
        while ($tmp1025->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1025 = $tmp1025->next;
        }
        $fn1027 $tmp1026 = $tmp1025->methods[0];
        panda$core$Bit $tmp1028 = $tmp1026(raw$Iter1018);
        panda$core$Bit $tmp1029 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1028);
        if (!$tmp1029.value) goto $l1024;
        {
            ITable* $tmp1031 = raw$Iter1018->$class->itable;
            while ($tmp1031->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1031 = $tmp1031->next;
            }
            $fn1033 $tmp1032 = $tmp1031->methods[1];
            panda$core$Object* $tmp1034 = $tmp1032(raw$Iter1018);
            raw1030 = ((org$pandalanguage$pandac$Type*) $tmp1034);
            org$pandalanguage$pandac$Type* $tmp1036 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, owner1016, raw1030);
            org$pandalanguage$pandac$MethodDecl* $tmp1037 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp1036, ((org$pandalanguage$pandac$Symbol*) p_m)->name, methodType1014, ((panda$core$Bit) { true }));
            result1035 = $tmp1037;
            if (((panda$core$Bit) { result1035 != NULL }).value) {
            {
                p_m->overrideKnown = ((panda$core$Bit) { true });
                p_m->overridden = result1035;
                return result1035;
            }
            }
        }
        goto $l1023;
        $l1024:;
    }
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_m->owner);
    if (((panda$core$Bit) { p_m->owner->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp1039 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, owner1016, p_m->owner->rawSuper);
        org$pandalanguage$pandac$MethodDecl* $tmp1040 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp1039, ((org$pandalanguage$pandac$Symbol*) p_m)->name, methodType1014, ((panda$core$Bit) { true }));
        result1038 = $tmp1040;
        p_m->overrideKnown = ((panda$core$Bit) { true });
        p_m->overridden = result1038;
        return result1038;
    }
    }
    p_m->overrideKnown = ((panda$core$Bit) { true });
    return NULL;
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$interfaceMethods$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl, org$pandalanguage$pandac$Type* p_intf) {
    org$pandalanguage$pandac$ClassDecl* intfClass1041;
    panda$collections$Array* result1043;
    panda$collections$Iterator* m$Iter1046;
    org$pandalanguage$pandac$MethodDecl* m1058;
    org$pandalanguage$pandac$MethodDecl* found1063;
    org$pandalanguage$pandac$ClassDecl* $tmp1042 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_intf);
    intfClass1041 = $tmp1042;
    PANDA_ASSERT(((panda$core$Bit) { intfClass1041 != NULL }).value);
    panda$collections$Array* $tmp1044 = (panda$collections$Array*) malloc(40);
    $tmp1044->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1044->refCount.value = 1;
    panda$collections$Array$init($tmp1044);
    result1043 = $tmp1044;
    {
        ITable* $tmp1047 = ((panda$collections$Iterable*) intfClass1041->methods)->$class->itable;
        while ($tmp1047->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1047 = $tmp1047->next;
        }
        $fn1049 $tmp1048 = $tmp1047->methods[0];
        panda$collections$Iterator* $tmp1050 = $tmp1048(((panda$collections$Iterable*) intfClass1041->methods));
        m$Iter1046 = $tmp1050;
        $l1051:;
        ITable* $tmp1053 = m$Iter1046->$class->itable;
        while ($tmp1053->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1053 = $tmp1053->next;
        }
        $fn1055 $tmp1054 = $tmp1053->methods[0];
        panda$core$Bit $tmp1056 = $tmp1054(m$Iter1046);
        panda$core$Bit $tmp1057 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1056);
        if (!$tmp1057.value) goto $l1052;
        {
            ITable* $tmp1059 = m$Iter1046->$class->itable;
            while ($tmp1059->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1059 = $tmp1059->next;
            }
            $fn1061 $tmp1060 = $tmp1059->methods[1];
            panda$core$Object* $tmp1062 = $tmp1060(m$Iter1046);
            m1058 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1062);
            org$pandalanguage$pandac$Type* $tmp1064 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
            org$pandalanguage$pandac$Type* $tmp1065 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, m1058);
            org$pandalanguage$pandac$Type* $tmp1066 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_intf, $tmp1065);
            org$pandalanguage$pandac$MethodDecl* $tmp1067 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp1064, ((org$pandalanguage$pandac$Symbol*) m1058)->name, $tmp1066, ((panda$core$Bit) { false }));
            found1063 = $tmp1067;
            PANDA_ASSERT(((panda$core$Bit) { found1063 != NULL }).value);
            panda$collections$Array$add$panda$collections$Array$T(result1043, ((panda$core$Object*) found1063));
        }
        goto $l1051;
        $l1052:;
    }
    return ((panda$collections$ListView*) result1043);
}
org$pandalanguage$pandac$SymbolTable* org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$ClassDecl* superCl1069;
    panda$collections$Iterator* rawIntf$Iter1072;
    org$pandalanguage$pandac$Type* rawIntf1084;
    org$pandalanguage$pandac$ClassDecl* intf1089;
    panda$core$Bit $tmp1068 = panda$core$Bit$$NOT$R$panda$core$Bit(p_cl->symbolTableResolved);
    if ($tmp1068.value) {
    {
        p_cl->symbolTableResolved = ((panda$core$Bit) { true });
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
        if (((panda$core$Bit) { p_cl->rawSuper != NULL }).value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp1070 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_cl->rawSuper);
            superCl1069 = $tmp1070;
            if (((panda$core$Bit) { superCl1069 != NULL }).value) {
            {
                org$pandalanguage$pandac$SymbolTable* $tmp1071 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, superCl1069);
                panda$collections$Array$add$panda$collections$Array$T(p_cl->symbolTable->parents, ((panda$core$Object*) $tmp1071));
            }
            }
        }
        }
        {
            ITable* $tmp1073 = ((panda$collections$Iterable*) p_cl->rawInterfaces)->$class->itable;
            while ($tmp1073->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1073 = $tmp1073->next;
            }
            $fn1075 $tmp1074 = $tmp1073->methods[0];
            panda$collections$Iterator* $tmp1076 = $tmp1074(((panda$collections$Iterable*) p_cl->rawInterfaces));
            rawIntf$Iter1072 = $tmp1076;
            $l1077:;
            ITable* $tmp1079 = rawIntf$Iter1072->$class->itable;
            while ($tmp1079->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1079 = $tmp1079->next;
            }
            $fn1081 $tmp1080 = $tmp1079->methods[0];
            panda$core$Bit $tmp1082 = $tmp1080(rawIntf$Iter1072);
            panda$core$Bit $tmp1083 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1082);
            if (!$tmp1083.value) goto $l1078;
            {
                ITable* $tmp1085 = rawIntf$Iter1072->$class->itable;
                while ($tmp1085->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1085 = $tmp1085->next;
                }
                $fn1087 $tmp1086 = $tmp1085->methods[1];
                panda$core$Object* $tmp1088 = $tmp1086(rawIntf$Iter1072);
                rawIntf1084 = ((org$pandalanguage$pandac$Type*) $tmp1088);
                org$pandalanguage$pandac$ClassDecl* $tmp1090 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, rawIntf1084);
                intf1089 = $tmp1090;
                if (((panda$core$Bit) { intf1089 != NULL }).value) {
                {
                    org$pandalanguage$pandac$SymbolTable* $tmp1091 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, intf1089);
                    panda$collections$Array$add$panda$collections$Array$T(p_cl->symbolTable->parents, ((panda$core$Object*) $tmp1091));
                }
                }
            }
            goto $l1077;
            $l1078:;
        }
    }
    }
    return p_cl->symbolTable;
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$ClassDecl* superCl1094;
    panda$collections$Iterator* derived$Iter1097;
    org$pandalanguage$pandac$MethodDecl* derived1109;
    panda$core$Bit found1119;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1120;
    org$pandalanguage$pandac$MethodDecl* base1135;
    panda$core$Int64 $tmp1092 = panda$collections$Array$get_count$R$panda$core$Int64(p_cl->virtualMethods);
    panda$core$Bit $tmp1093 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1092, ((panda$core$Int64) { 0 }));
    if ($tmp1093.value) {
    {
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
        panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_cl));
        if (((panda$core$Bit) { p_cl->rawSuper != NULL }).value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp1095 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_cl->rawSuper);
            superCl1094 = $tmp1095;
            if (((panda$core$Bit) { superCl1094 == NULL }).value) {
            {
                panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
                return ((panda$collections$ListView*) p_cl->virtualMethods);
            }
            }
            panda$collections$ListView* $tmp1096 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self, superCl1094);
            panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(p_cl->virtualMethods, ((panda$collections$CollectionView*) $tmp1096));
        }
        }
        {
            ITable* $tmp1098 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
            while ($tmp1098->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1098 = $tmp1098->next;
            }
            $fn1100 $tmp1099 = $tmp1098->methods[0];
            panda$collections$Iterator* $tmp1101 = $tmp1099(((panda$collections$Iterable*) p_cl->methods));
            derived$Iter1097 = $tmp1101;
            $l1102:;
            ITable* $tmp1104 = derived$Iter1097->$class->itable;
            while ($tmp1104->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1104 = $tmp1104->next;
            }
            $fn1106 $tmp1105 = $tmp1104->methods[0];
            panda$core$Bit $tmp1107 = $tmp1105(derived$Iter1097);
            panda$core$Bit $tmp1108 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1107);
            if (!$tmp1108.value) goto $l1103;
            {
                ITable* $tmp1110 = derived$Iter1097->$class->itable;
                while ($tmp1110->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1110 = $tmp1110->next;
                }
                $fn1112 $tmp1111 = $tmp1110->methods[1];
                panda$core$Object* $tmp1113 = $tmp1111(derived$Iter1097);
                derived1109 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1113);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, derived1109);
                panda$core$Bit $tmp1115 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(derived1109->methodKind, ((panda$core$Int64) { 59 }));
                bool $tmp1114 = $tmp1115.value;
                if ($tmp1114) goto $l1116;
                panda$core$Bit $tmp1117 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(derived1109->annotations);
                $tmp1114 = $tmp1117.value;
                $l1116:;
                panda$core$Bit $tmp1118 = { $tmp1114 };
                if ($tmp1118.value) {
                {
                    goto $l1102;
                }
                }
                found1119 = ((panda$core$Bit) { false });
                panda$core$Int64 $tmp1121 = panda$collections$Array$get_count$R$panda$core$Int64(p_cl->virtualMethods);
                panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1120, ((panda$core$Int64) { 0 }), $tmp1121, ((panda$core$Bit) { false }));
                int64_t $tmp1123 = $tmp1120.min.value;
                panda$core$Int64 i1122 = { $tmp1123 };
                int64_t $tmp1125 = $tmp1120.max.value;
                bool $tmp1126 = $tmp1120.inclusive.value;
                if ($tmp1126) goto $l1133; else goto $l1134;
                $l1133:;
                if ($tmp1123 <= $tmp1125) goto $l1127; else goto $l1129;
                $l1134:;
                if ($tmp1123 < $tmp1125) goto $l1127; else goto $l1129;
                $l1127:;
                {
                    panda$core$Object* $tmp1136 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_cl->virtualMethods, i1122);
                    base1135 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1136);
                    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, base1135);
                    panda$core$Bit $tmp1137 = org$pandalanguage$pandac$MethodDecl$matches$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(derived1109, base1135);
                    if ($tmp1137.value) {
                    {
                        found1119 = ((panda$core$Bit) { true });
                        panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(p_cl->virtualMethods, i1122, ((panda$core$Object*) derived1109));
                        goto $l1129;
                    }
                    }
                }
                $l1130:;
                int64_t $tmp1139 = $tmp1125 - i1122.value;
                if ($tmp1126) goto $l1140; else goto $l1141;
                $l1140:;
                if ($tmp1139 >= 1) goto $l1138; else goto $l1129;
                $l1141:;
                if ($tmp1139 > 1) goto $l1138; else goto $l1129;
                $l1138:;
                i1122.value += 1;
                goto $l1127;
                $l1129:;
                panda$core$Bit $tmp1144 = panda$core$Bit$$NOT$R$panda$core$Bit(found1119);
                if ($tmp1144.value) {
                {
                    panda$collections$Array$add$panda$collections$Array$T(p_cl->virtualMethods, ((panda$core$Object*) derived1109));
                }
                }
            }
            goto $l1102;
            $l1103:;
        }
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    }
    }
    return ((panda$collections$ListView*) p_cl->virtualMethods);
}
void org$pandalanguage$pandac$Compiler$addInheritedMethods$org$pandalanguage$pandac$SymbolTable$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$SymbolTable* p_st, panda$core$String* p_name, panda$collections$Array* p_result, panda$collections$ListView* p_types) {
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$getMethodReference$org$pandalanguage$pandac$SymbolTable$org$pandalanguage$pandac$IRNode$Q$panda$core$String$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$SymbolTable* p_st, org$pandalanguage$pandac$IRNode* p_target, panda$core$String* p_name, org$pandalanguage$pandac$Position p_position, panda$collections$ListView* p_types) {
    panda$collections$Array* methods1145;
    org$pandalanguage$pandac$Symbol* s1148;
    panda$collections$Iterator* m$Iter1154;
    org$pandalanguage$pandac$MethodDecl* m1166;
    panda$collections$Iterator* p$Iter1173;
    org$pandalanguage$pandac$SymbolTable* p1185;
    panda$collections$Array* children1190;
    panda$collections$Array* types1202;
    panda$collections$Iterator* m$Iter1205;
    org$pandalanguage$pandac$MethodRef* m1217;
    panda$collections$Array* $tmp1146 = (panda$collections$Array*) malloc(40);
    $tmp1146->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1146->refCount.value = 1;
    panda$collections$Array$init($tmp1146);
    methods1145 = $tmp1146;
    org$pandalanguage$pandac$Symbol* $tmp1149 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(p_st, p_name);
    s1148 = $tmp1149;
    PANDA_ASSERT(((panda$core$Bit) { s1148 != NULL }).value);
    panda$core$Bit $tmp1150 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(s1148->kind, ((panda$core$Int64) { 204 }));
    if ($tmp1150.value) {
    {
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, ((org$pandalanguage$pandac$MethodDecl*) s1148));
        org$pandalanguage$pandac$MethodRef* $tmp1151 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
        $tmp1151->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
        $tmp1151->refCount.value = 1;
        org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp1151, ((org$pandalanguage$pandac$MethodDecl*) s1148), p_types);
        panda$collections$Array$add$panda$collections$Array$T(methods1145, ((panda$core$Object*) $tmp1151));
    }
    }
    else {
    {
        panda$core$Bit $tmp1153 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(s1148->kind, ((panda$core$Int64) { 205 }));
        PANDA_ASSERT($tmp1153.value);
        {
            ITable* $tmp1155 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s1148)->methods)->$class->itable;
            while ($tmp1155->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1155 = $tmp1155->next;
            }
            $fn1157 $tmp1156 = $tmp1155->methods[0];
            panda$collections$Iterator* $tmp1158 = $tmp1156(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s1148)->methods));
            m$Iter1154 = $tmp1158;
            $l1159:;
            ITable* $tmp1161 = m$Iter1154->$class->itable;
            while ($tmp1161->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1161 = $tmp1161->next;
            }
            $fn1163 $tmp1162 = $tmp1161->methods[0];
            panda$core$Bit $tmp1164 = $tmp1162(m$Iter1154);
            panda$core$Bit $tmp1165 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1164);
            if (!$tmp1165.value) goto $l1160;
            {
                ITable* $tmp1167 = m$Iter1154->$class->itable;
                while ($tmp1167->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1167 = $tmp1167->next;
                }
                $fn1169 $tmp1168 = $tmp1167->methods[1];
                panda$core$Object* $tmp1170 = $tmp1168(m$Iter1154);
                m1166 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1170);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m1166);
                org$pandalanguage$pandac$MethodRef* $tmp1171 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                $tmp1171->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                $tmp1171->refCount.value = 1;
                org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp1171, m1166, p_types);
                panda$collections$Array$add$panda$collections$Array$T(methods1145, ((panda$core$Object*) $tmp1171));
            }
            goto $l1159;
            $l1160:;
        }
    }
    }
    {
        ITable* $tmp1174 = ((panda$collections$Iterable*) p_st->parents)->$class->itable;
        while ($tmp1174->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1174 = $tmp1174->next;
        }
        $fn1176 $tmp1175 = $tmp1174->methods[0];
        panda$collections$Iterator* $tmp1177 = $tmp1175(((panda$collections$Iterable*) p_st->parents));
        p$Iter1173 = $tmp1177;
        $l1178:;
        ITable* $tmp1180 = p$Iter1173->$class->itable;
        while ($tmp1180->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1180 = $tmp1180->next;
        }
        $fn1182 $tmp1181 = $tmp1180->methods[0];
        panda$core$Bit $tmp1183 = $tmp1181(p$Iter1173);
        panda$core$Bit $tmp1184 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1183);
        if (!$tmp1184.value) goto $l1179;
        {
            ITable* $tmp1186 = p$Iter1173->$class->itable;
            while ($tmp1186->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1186 = $tmp1186->next;
            }
            $fn1188 $tmp1187 = $tmp1186->methods[1];
            panda$core$Object* $tmp1189 = $tmp1187(p$Iter1173);
            p1185 = ((org$pandalanguage$pandac$SymbolTable*) $tmp1189);
            org$pandalanguage$pandac$Compiler$addInheritedMethods$org$pandalanguage$pandac$SymbolTable$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p1185, p_name, methods1145, p_types);
        }
        goto $l1178;
        $l1179:;
    }
    panda$collections$Array* $tmp1191 = (panda$collections$Array*) malloc(40);
    $tmp1191->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1191->refCount.value = 1;
    panda$collections$Array$init($tmp1191);
    children1190 = $tmp1191;
    if (((panda$core$Bit) { p_target != NULL }).value) {
    {
        panda$collections$Array$add$panda$collections$Array$T(children1190, ((panda$core$Object*) p_target));
    }
    }
    panda$core$Int64 $tmp1193 = panda$collections$Array$get_count$R$panda$core$Int64(methods1145);
    panda$core$Bit $tmp1194 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1193, ((panda$core$Int64) { 1 }));
    if ($tmp1194.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp1195 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp1195->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp1195->refCount.value = 1;
        panda$core$Object* $tmp1197 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(methods1145, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Type* $tmp1198 = org$pandalanguage$pandac$MethodRef$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$MethodRef*) $tmp1197));
        panda$core$Object* $tmp1199 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(methods1145, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp1195, ((panda$core$Int64) { 1002 }), p_position, $tmp1198, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodRef*) $tmp1199)), ((panda$collections$ListView*) children1190));
        return $tmp1195;
    }
    }
    else {
    {
        panda$core$Int64 $tmp1200 = panda$collections$Array$get_count$R$panda$core$Int64(methods1145);
        panda$core$Bit $tmp1201 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1200, ((panda$core$Int64) { 0 }));
        PANDA_ASSERT($tmp1201.value);
        panda$collections$Array* $tmp1203 = (panda$collections$Array*) malloc(40);
        $tmp1203->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp1203->refCount.value = 1;
        panda$collections$Array$init($tmp1203);
        types1202 = $tmp1203;
        {
            ITable* $tmp1206 = ((panda$collections$Iterable*) methods1145)->$class->itable;
            while ($tmp1206->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1206 = $tmp1206->next;
            }
            $fn1208 $tmp1207 = $tmp1206->methods[0];
            panda$collections$Iterator* $tmp1209 = $tmp1207(((panda$collections$Iterable*) methods1145));
            m$Iter1205 = $tmp1209;
            $l1210:;
            ITable* $tmp1212 = m$Iter1205->$class->itable;
            while ($tmp1212->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1212 = $tmp1212->next;
            }
            $fn1214 $tmp1213 = $tmp1212->methods[0];
            panda$core$Bit $tmp1215 = $tmp1213(m$Iter1205);
            panda$core$Bit $tmp1216 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1215);
            if (!$tmp1216.value) goto $l1211;
            {
                ITable* $tmp1218 = m$Iter1205->$class->itable;
                while ($tmp1218->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1218 = $tmp1218->next;
                }
                $fn1220 $tmp1219 = $tmp1218->methods[1];
                panda$core$Object* $tmp1221 = $tmp1219(m$Iter1205);
                m1217 = ((org$pandalanguage$pandac$MethodRef*) $tmp1221);
                org$pandalanguage$pandac$Type* $tmp1222 = org$pandalanguage$pandac$MethodRef$type$R$org$pandalanguage$pandac$Type(m1217);
                panda$collections$Array$add$panda$collections$Array$T(types1202, ((panda$core$Object*) $tmp1222));
            }
            goto $l1210;
            $l1211:;
        }
        org$pandalanguage$pandac$IRNode* $tmp1223 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp1223->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp1223->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp1225 = (org$pandalanguage$pandac$Type*) malloc(96);
        $tmp1225->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
        $tmp1225->refCount.value = 1;
        org$pandalanguage$pandac$Type$init$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp1225, ((panda$collections$ListView*) types1202));
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp1223, ((panda$core$Int64) { 1003 }), p_position, $tmp1225, ((panda$core$Object*) methods1145), ((panda$collections$ListView*) children1190));
        return $tmp1223;
    }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$symbolRef$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$Symbol* p_s, org$pandalanguage$pandac$SymbolTable* p_st) {
    org$pandalanguage$pandac$ClassDecl* cl1227;
    org$pandalanguage$pandac$FieldDecl* f1243;
    panda$collections$Array* children1246;
    org$pandalanguage$pandac$Type* effectiveType1251;
    org$pandalanguage$pandac$IRNode* result1256;
    switch (p_s->kind.value) {
        case 200:
        {
            PANDA_ASSERT(((panda$core$Bit) { p_target == NULL }).value);
            org$pandalanguage$pandac$ClassDecl* $tmp1228 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Position$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_position, ((org$pandalanguage$pandac$Alias*) p_s)->fullName);
            cl1227 = $tmp1228;
            if (((panda$core$Bit) { cl1227 != NULL }).value) {
            {
                org$pandalanguage$pandac$Type* $tmp1229 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl1227);
                org$pandalanguage$pandac$Compiler$checkGenericParameters$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_position, cl1227, $tmp1229);
                org$pandalanguage$pandac$IRNode* $tmp1230 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1230->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1230->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1232 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$Type* $tmp1233 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl1227);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1230, ((panda$core$Int64) { 1001 }), p_position, $tmp1232, $tmp1233);
                return $tmp1230;
            }
            }
            return NULL;
        }
        break;
        case 201:
        {
            org$pandalanguage$pandac$Type* $tmp1234 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) p_s));
            org$pandalanguage$pandac$Compiler$checkGenericParameters$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_position, ((org$pandalanguage$pandac$ClassDecl*) p_s), $tmp1234);
            org$pandalanguage$pandac$IRNode* $tmp1235 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp1235->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1235->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp1237 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$Type* $tmp1238 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) p_s));
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1235, ((panda$core$Int64) { 1001 }), p_position, $tmp1237, $tmp1238);
            return $tmp1235;
        }
        break;
        case 204:
        case 205:
        {
            panda$collections$ListView* $tmp1239 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$IRNode$Q$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p_target);
            org$pandalanguage$pandac$IRNode* $tmp1240 = org$pandalanguage$pandac$Compiler$getMethodReference$org$pandalanguage$pandac$SymbolTable$org$pandalanguage$pandac$IRNode$Q$panda$core$String$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$IRNode(self, p_st, p_target, p_s->name, p_position, $tmp1239);
            return $tmp1240;
        }
        break;
        case 208:
        {
            org$pandalanguage$pandac$IRNode* $tmp1241 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp1241->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1241->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp1241, ((panda$core$Int64) { 1016 }), p_position, ((org$pandalanguage$pandac$Variable*) p_s)->type, ((org$pandalanguage$pandac$Variable*) p_s));
            return $tmp1241;
        }
        break;
        case 202:
        {
            f1243 = ((org$pandalanguage$pandac$FieldDecl*) p_s);
            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self, f1243);
            org$pandalanguage$pandac$Type* $tmp1244 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1245 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(f1243->type, $tmp1244);
            if ($tmp1245.value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp1247 = (panda$collections$Array*) malloc(40);
            $tmp1247->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1247->refCount.value = 1;
            panda$collections$Array$init($tmp1247);
            children1246 = $tmp1247;
            if (((panda$core$Bit) { p_target != NULL }).value) {
            {
                panda$core$Bit $tmp1249 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1024 }));
                if ($tmp1249.value) {
                {
                    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_target->position, &$s1250);
                    return NULL;
                }
                }
                org$pandalanguage$pandac$Type* $tmp1252 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_target->type, f1243->type);
                effectiveType1251 = $tmp1252;
                panda$core$Bit $tmp1253 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(f1243->annotations);
                if ($tmp1253.value) {
                {
                    panda$collections$Array$add$panda$collections$Array$T(children1246, ((panda$core$Object*) p_target));
                }
                }
                else {
                {
                    org$pandalanguage$pandac$Type* $tmp1254 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(f1243->owner);
                    org$pandalanguage$pandac$IRNode* $tmp1255 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_target, $tmp1254);
                    panda$collections$Array$add$panda$collections$Array$T(children1246, ((panda$core$Object*) $tmp1255));
                }
                }
                org$pandalanguage$pandac$IRNode* $tmp1257 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1257->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1257->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp1257, ((panda$core$Int64) { 1026 }), p_position, f1243->type, ((panda$core$Object*) p_s), ((panda$collections$ListView*) children1246));
                result1256 = $tmp1257;
                panda$core$Bit $tmp1259 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(effectiveType1251, result1256->type);
                if ($tmp1259.value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp1260 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, result1256, p_position, ((panda$core$Bit) { false }), effectiveType1251);
                    result1256 = $tmp1260;
                }
                }
                return result1256;
            }
            }
            else {
            {
                org$pandalanguage$pandac$IRNode* $tmp1261 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1261->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1261->refCount.value = 1;
                panda$core$Object* $tmp1263 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
                org$pandalanguage$pandac$Type* $tmp1264 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp1263));
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp1261, ((panda$core$Int64) { 1025 }), p_position, $tmp1264);
                panda$collections$Array$add$panda$collections$Array$T(children1246, ((panda$core$Object*) $tmp1261));
                org$pandalanguage$pandac$IRNode* $tmp1265 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1265->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1265->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp1265, ((panda$core$Int64) { 1026 }), p_position, f1243->type, ((panda$core$Object*) p_s), ((panda$collections$ListView*) children1246));
                return $tmp1265;
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
    panda$collections$HashMap* typeMap1273;
    org$pandalanguage$pandac$Type* base1276;
    org$pandalanguage$pandac$ClassDecl* cl1278;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1280;
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
            panda$core$Int64 $tmp1267 = panda$collections$Array$get_count$R$panda$core$Int64(p_context->subtypes);
            panda$core$Bit $tmp1268 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1267, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp1268.value);
            panda$core$Object* $tmp1269 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_context->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp1270 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$Type*) $tmp1269), p_raw);
            return $tmp1270;
        }
        break;
        case 21:
        {
            panda$core$Int64 $tmp1271 = panda$collections$Array$get_count$R$panda$core$Int64(p_context->subtypes);
            panda$core$Bit $tmp1272 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp1271, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1272.value);
            panda$collections$HashMap* $tmp1274 = (panda$collections$HashMap*) malloc(56);
            $tmp1274->$class = (panda$core$Class*) &panda$collections$HashMap$class;
            $tmp1274->refCount.value = 1;
            panda$collections$HashMap$init($tmp1274);
            typeMap1273 = $tmp1274;
            panda$core$Object* $tmp1277 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_context->subtypes, ((panda$core$Int64) { 0 }));
            base1276 = ((org$pandalanguage$pandac$Type*) $tmp1277);
            org$pandalanguage$pandac$ClassDecl* $tmp1279 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Symbol*) base1276)->name);
            cl1278 = $tmp1279;
            PANDA_ASSERT(((panda$core$Bit) { cl1278 != NULL }).value);
            panda$core$Int64 $tmp1281 = panda$collections$Array$get_count$R$panda$core$Int64(p_context->subtypes);
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1280, ((panda$core$Int64) { 1 }), $tmp1281, ((panda$core$Bit) { false }));
            int64_t $tmp1283 = $tmp1280.min.value;
            panda$core$Int64 i1282 = { $tmp1283 };
            int64_t $tmp1285 = $tmp1280.max.value;
            bool $tmp1286 = $tmp1280.inclusive.value;
            if ($tmp1286) goto $l1293; else goto $l1294;
            $l1293:;
            if ($tmp1283 <= $tmp1285) goto $l1287; else goto $l1289;
            $l1294:;
            if ($tmp1283 < $tmp1285) goto $l1287; else goto $l1289;
            $l1287:;
            {
                panda$core$String* $tmp1296 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) cl1278)->name, &$s1295);
                panda$core$Int64 $tmp1297 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i1282, ((panda$core$Int64) { 1 }));
                ITable* $tmp1298 = ((panda$collections$ListView*) cl1278->parameters)->$class->itable;
                while ($tmp1298->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp1298 = $tmp1298->next;
                }
                $fn1300 $tmp1299 = $tmp1298->methods[0];
                panda$core$Object* $tmp1301 = $tmp1299(((panda$collections$ListView*) cl1278->parameters), $tmp1297);
                panda$core$String* $tmp1302 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1296, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp1301))->name);
                panda$core$Object* $tmp1303 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_context->subtypes, i1282);
                panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(typeMap1273, ((panda$collections$Key*) $tmp1302), ((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp1303)));
            }
            $l1290:;
            int64_t $tmp1305 = $tmp1285 - i1282.value;
            if ($tmp1286) goto $l1306; else goto $l1307;
            $l1306:;
            if ($tmp1305 >= 1) goto $l1304; else goto $l1289;
            $l1307:;
            if ($tmp1305 > 1) goto $l1304; else goto $l1289;
            $l1304:;
            i1282.value += 1;
            goto $l1287;
            $l1289:;
            org$pandalanguage$pandac$Type* $tmp1310 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(p_raw, typeMap1273);
            return $tmp1310;
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
    org$pandalanguage$pandac$Type* $tmp1311 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1312 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_type, $tmp1311);
    if ($tmp1312.value) {
    {
        org$pandalanguage$pandac$Type* $tmp1313 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
        return $tmp1313;
    }
    }
    org$pandalanguage$pandac$Type* $tmp1314 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1315 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_type, $tmp1314);
    if ($tmp1315.value) {
    {
        org$pandalanguage$pandac$Type* $tmp1316 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
        return $tmp1316;
    }
    }
    panda$core$Bit $tmp1317 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 23 }));
    if ($tmp1317.value) {
    {
        org$pandalanguage$pandac$Type* $tmp1318 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
        return $tmp1318;
    }
    }
    return p_type;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    org$pandalanguage$pandac$Type* step1345;
    panda$collections$ImmutableArray* args1372;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1373;
    org$pandalanguage$pandac$IRNode* c1375;
    switch (p_expr->kind.value) {
        case 1031:
        {
            panda$core$Int64 $tmp1319 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_expr->children);
            panda$core$Bit $tmp1320 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1319, ((panda$core$Int64) { 2 }));
            if ($tmp1320.value) {
            {
                panda$core$Object* $tmp1321 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Bit $tmp1322 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1321)->kind, ((panda$core$Int64) { 1030 }));
                if ($tmp1322.value) {
                {
                    panda$core$Object* $tmp1323 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                    panda$core$Bit $tmp1324 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1323)->kind, ((panda$core$Int64) { 1030 }));
                    if ($tmp1324.value) {
                    {
                        org$pandalanguage$pandac$Type* $tmp1325 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
                        org$pandalanguage$pandac$Type* $tmp1326 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1325);
                        org$pandalanguage$pandac$Type* $tmp1327 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1326);
                        return $tmp1327;
                    }
                    }
                    panda$core$Object* $tmp1328 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                    org$pandalanguage$pandac$Type* $tmp1329 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$IRNode*) $tmp1328)->type);
                    org$pandalanguage$pandac$Type* $tmp1330 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1329);
                    org$pandalanguage$pandac$Type* $tmp1331 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1330);
                    return $tmp1331;
                }
                }
                panda$core$Object* $tmp1332 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                panda$core$Bit $tmp1333 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1332)->kind, ((panda$core$Int64) { 1030 }));
                if ($tmp1333.value) {
                {
                    panda$core$Object* $tmp1334 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                    org$pandalanguage$pandac$Type* $tmp1335 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$IRNode*) $tmp1334)->type);
                    org$pandalanguage$pandac$Type* $tmp1336 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1335);
                    org$pandalanguage$pandac$Type* $tmp1337 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1336);
                    return $tmp1337;
                }
                }
                panda$core$Object* $tmp1338 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp1339 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$IRNode*) $tmp1338)->type);
                panda$core$Object* $tmp1340 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$Type* $tmp1341 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$IRNode*) $tmp1340)->type);
                org$pandalanguage$pandac$Type* $tmp1342 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1339, $tmp1341);
                org$pandalanguage$pandac$Type* $tmp1343 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, $tmp1342);
                org$pandalanguage$pandac$Type* $tmp1344 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1343);
                return $tmp1344;
            }
            }
            panda$core$Object* $tmp1346 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 2 }));
            org$pandalanguage$pandac$Type* $tmp1347 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$IRNode*) $tmp1346)->type);
            step1345 = $tmp1347;
            panda$core$Object* $tmp1348 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp1349 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1348)->kind, ((panda$core$Int64) { 1030 }));
            if ($tmp1349.value) {
            {
                panda$core$Object* $tmp1350 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                panda$core$Bit $tmp1351 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1350)->kind, ((panda$core$Int64) { 1030 }));
                if ($tmp1351.value) {
                {
                    org$pandalanguage$pandac$Type* $tmp1352 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
                    org$pandalanguage$pandac$Type* $tmp1353 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1352);
                    org$pandalanguage$pandac$Type* $tmp1354 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1353, step1345);
                    return $tmp1354;
                }
                }
                panda$core$Object* $tmp1355 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$Type* $tmp1356 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$IRNode*) $tmp1355)->type);
                org$pandalanguage$pandac$Type* $tmp1357 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1356);
                org$pandalanguage$pandac$Type* $tmp1358 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1357, step1345);
                return $tmp1358;
            }
            }
            panda$core$Object* $tmp1359 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
            panda$core$Bit $tmp1360 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1359)->kind, ((panda$core$Int64) { 1030 }));
            if ($tmp1360.value) {
            {
                panda$core$Object* $tmp1361 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp1362 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$IRNode*) $tmp1361)->type);
                org$pandalanguage$pandac$Type* $tmp1363 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1362);
                org$pandalanguage$pandac$Type* $tmp1364 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1363, step1345);
                return $tmp1364;
            }
            }
            panda$core$Object* $tmp1365 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp1366 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$IRNode*) $tmp1365)->type);
            panda$core$Object* $tmp1367 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
            org$pandalanguage$pandac$Type* $tmp1368 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$IRNode*) $tmp1367)->type);
            org$pandalanguage$pandac$Type* $tmp1369 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1366, $tmp1368);
            org$pandalanguage$pandac$Type* $tmp1370 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, $tmp1369);
            org$pandalanguage$pandac$Type* $tmp1371 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1370, step1345);
            return $tmp1371;
        }
        break;
        case 1040:
        {
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1373, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$collections$ImmutableArray* $tmp1374 = panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(p_expr->children, $tmp1373);
            args1372 = $tmp1374;
            panda$core$Object* $tmp1376 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp1378 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1376), &$s1377, ((panda$collections$ListView*) args1372));
            c1375 = $tmp1378;
            if (((panda$core$Bit) { c1375 == NULL }).value) {
            {
                org$pandalanguage$pandac$Type* $tmp1379 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
                return $tmp1379;
            }
            }
            return c1375->type;
        }
        break;
    }
    org$pandalanguage$pandac$Type* $tmp1380 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_expr->type);
    return $tmp1380;
}
panda$core$Int64$nullable org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type, org$pandalanguage$pandac$Type* p_target) {
    panda$core$Int64$nullable result1391;
    panda$core$Int64$nullable result1395;
    panda$core$Int64$nullable best1404;
    panda$collections$Iterator* t$Iter1405;
    org$pandalanguage$pandac$Type* t1417;
    panda$core$Int64$nullable cost1422;
    org$pandalanguage$pandac$ClassDecl* cl1436;
    panda$core$Int64$nullable cost1438;
    panda$collections$Iterator* intf$Iter1443;
    org$pandalanguage$pandac$Type* intf1455;
    panda$core$Int64$nullable cost1460;
    PANDA_ASSERT(p_type->resolved.value);
    PANDA_ASSERT(p_target->resolved.value);
    panda$core$Bit $tmp1381 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_type, p_target);
    if ($tmp1381.value) {
    {
        return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
    }
    }
    org$pandalanguage$pandac$Type* $tmp1382 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1383 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_type, $tmp1382);
    if ($tmp1383.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    panda$core$Bit $tmp1384 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 23 }));
    if ($tmp1384.value) {
    {
        panda$core$Bit $tmp1385 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp1385.value) {
        {
            return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
        }
        }
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    panda$core$Bit $tmp1387 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 11 }));
    bool $tmp1386 = $tmp1387.value;
    if (!$tmp1386) goto $l1388;
    panda$core$Bit $tmp1389 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
    $tmp1386 = $tmp1389.value;
    $l1388:;
    panda$core$Bit $tmp1390 = { $tmp1386 };
    if ($tmp1390.value) {
    {
        panda$core$Object* $tmp1392 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Int64$nullable $tmp1393 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$Type*) $tmp1392), p_target);
        result1391 = $tmp1393;
        if (((panda$core$Bit) { !result1391.nonnull }).value) {
        {
            return ((panda$core$Int64$nullable) { .nonnull = false });
        }
        }
        panda$core$Int64 $tmp1394 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) result1391.value), ((panda$core$Int64) { 2 }));
        return ((panda$core$Int64$nullable) { $tmp1394, true });
    }
    }
    switch (p_target->typeKind.value) {
        case 11:
        {
            panda$core$Object* $tmp1396 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$Int64$nullable $tmp1397 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_type, ((org$pandalanguage$pandac$Type*) $tmp1396));
            result1395 = $tmp1397;
            if (((panda$core$Bit) { !result1395.nonnull }).value) {
            {
                return ((panda$core$Int64$nullable) { .nonnull = false });
            }
            }
            panda$core$Int64 $tmp1398 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) result1395.value), ((panda$core$Int64) { 1 }));
            return ((panda$core$Int64$nullable) { $tmp1398, true });
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
            panda$core$Bit $tmp1399 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 21 }));
            if ($tmp1399.value) {
            {
                panda$core$Object* $tmp1400 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
                panda$core$Int64$nullable $tmp1401 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$Type*) $tmp1400), p_target);
                return $tmp1401;
            }
            }
        }
        break;
    }
    switch (p_type->typeKind.value) {
        case 19:
        {
            org$pandalanguage$pandac$Type* $tmp1402 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            panda$core$Int64$nullable $tmp1403 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1402, p_target);
            return $tmp1403;
        }
        break;
        case 17:
        {
            best1404 = ((panda$core$Int64$nullable) { .nonnull = false });
            {
                ITable* $tmp1406 = ((panda$collections$Iterable*) p_type->subtypes)->$class->itable;
                while ($tmp1406->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1406 = $tmp1406->next;
                }
                $fn1408 $tmp1407 = $tmp1406->methods[0];
                panda$collections$Iterator* $tmp1409 = $tmp1407(((panda$collections$Iterable*) p_type->subtypes));
                t$Iter1405 = $tmp1409;
                $l1410:;
                ITable* $tmp1412 = t$Iter1405->$class->itable;
                while ($tmp1412->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1412 = $tmp1412->next;
                }
                $fn1414 $tmp1413 = $tmp1412->methods[0];
                panda$core$Bit $tmp1415 = $tmp1413(t$Iter1405);
                panda$core$Bit $tmp1416 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1415);
                if (!$tmp1416.value) goto $l1411;
                {
                    ITable* $tmp1418 = t$Iter1405->$class->itable;
                    while ($tmp1418->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1418 = $tmp1418->next;
                    }
                    $fn1420 $tmp1419 = $tmp1418->methods[1];
                    panda$core$Object* $tmp1421 = $tmp1419(t$Iter1405);
                    t1417 = ((org$pandalanguage$pandac$Type*) $tmp1421);
                    panda$core$Int64$nullable $tmp1423 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, t1417, p_target);
                    cost1422 = $tmp1423;
                    bool $tmp1424 = ((panda$core$Bit) { cost1422.nonnull }).value;
                    if (!$tmp1424) goto $l1425;
                    bool $tmp1426 = ((panda$core$Bit) { !best1404.nonnull }).value;
                    if ($tmp1426) goto $l1427;
                    panda$core$Bit $tmp1428 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost1422.value), ((panda$core$Int64) best1404.value));
                    $tmp1426 = $tmp1428.value;
                    $l1427:;
                    panda$core$Bit $tmp1429 = { $tmp1426 };
                    $tmp1424 = $tmp1429.value;
                    $l1425:;
                    panda$core$Bit $tmp1430 = { $tmp1424 };
                    if ($tmp1430.value) {
                    {
                        best1404 = cost1422;
                    }
                    }
                }
                goto $l1410;
                $l1411:;
            }
            return best1404;
        }
        break;
        case 22:
        {
            panda$core$Int64$nullable $tmp1431 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_type->parameter->bound, p_target);
            return $tmp1431;
        }
        break;
    }
    panda$core$Bit $tmp1432 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_target);
    panda$core$Bit $tmp1433 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1432);
    if ($tmp1433.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    panda$core$Bit $tmp1434 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_type);
    panda$core$Bit $tmp1435 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1434);
    if ($tmp1435.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp1437 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_type);
    cl1436 = $tmp1437;
    PANDA_ASSERT(((panda$core$Bit) { cl1436 != NULL }).value);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, cl1436);
    if (((panda$core$Bit) { cl1436->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp1439 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_type, cl1436->rawSuper);
        org$pandalanguage$pandac$Type* $tmp1440 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_type, $tmp1439);
        panda$core$Int64$nullable $tmp1441 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1440, p_target);
        cost1438 = $tmp1441;
        if (((panda$core$Bit) { cost1438.nonnull }).value) {
        {
            panda$core$Int64 $tmp1442 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) cost1438.value), ((panda$core$Int64) ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }).value));
            return ((panda$core$Int64$nullable) { $tmp1442, true });
        }
        }
    }
    }
    {
        ITable* $tmp1444 = ((panda$collections$Iterable*) cl1436->rawInterfaces)->$class->itable;
        while ($tmp1444->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1444 = $tmp1444->next;
        }
        $fn1446 $tmp1445 = $tmp1444->methods[0];
        panda$collections$Iterator* $tmp1447 = $tmp1445(((panda$collections$Iterable*) cl1436->rawInterfaces));
        intf$Iter1443 = $tmp1447;
        $l1448:;
        ITable* $tmp1450 = intf$Iter1443->$class->itable;
        while ($tmp1450->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1450 = $tmp1450->next;
        }
        $fn1452 $tmp1451 = $tmp1450->methods[0];
        panda$core$Bit $tmp1453 = $tmp1451(intf$Iter1443);
        panda$core$Bit $tmp1454 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1453);
        if (!$tmp1454.value) goto $l1449;
        {
            ITable* $tmp1456 = intf$Iter1443->$class->itable;
            while ($tmp1456->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1456 = $tmp1456->next;
            }
            $fn1458 $tmp1457 = $tmp1456->methods[1];
            panda$core$Object* $tmp1459 = $tmp1457(intf$Iter1443);
            intf1455 = ((org$pandalanguage$pandac$Type*) $tmp1459);
            org$pandalanguage$pandac$Type* $tmp1461 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_type, intf1455);
            org$pandalanguage$pandac$Type* $tmp1462 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_type, $tmp1461);
            panda$core$Int64$nullable $tmp1463 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1462, p_target);
            cost1460 = $tmp1463;
            if (((panda$core$Bit) { cost1460.nonnull }).value) {
            {
                panda$core$Int64 $tmp1464 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) cost1460.value), ((panda$core$Int64) ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }).value));
                return ((panda$core$Int64$nullable) { $tmp1464, true });
            }
            }
        }
        goto $l1448;
        $l1449:;
    }
    return ((panda$core$Int64$nullable) { .nonnull = false });
}
panda$core$Int64 org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_value) {
    panda$core$Bit $tmp1466 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { -128 }));
    bool $tmp1465 = $tmp1466.value;
    if (!$tmp1465) goto $l1467;
    panda$core$Bit $tmp1468 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { 127 }));
    $tmp1465 = $tmp1468.value;
    $l1467:;
    panda$core$Bit $tmp1469 = { $tmp1465 };
    if ($tmp1469.value) {
    {
        return ((panda$core$Int64) { 8 });
    }
    }
    panda$core$Bit $tmp1471 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { -32768 }));
    bool $tmp1470 = $tmp1471.value;
    if (!$tmp1470) goto $l1472;
    panda$core$Bit $tmp1473 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { 32767 }));
    $tmp1470 = $tmp1473.value;
    $l1472:;
    panda$core$Bit $tmp1474 = { $tmp1470 };
    if ($tmp1474.value) {
    {
        return ((panda$core$Int64) { 16 });
    }
    }
    panda$core$Bit $tmp1476 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { -2147483648 }));
    bool $tmp1475 = $tmp1476.value;
    if (!$tmp1475) goto $l1477;
    panda$core$Bit $tmp1478 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { 2147483647 }));
    $tmp1475 = $tmp1478.value;
    $l1477:;
    panda$core$Bit $tmp1479 = { $tmp1475 };
    if ($tmp1479.value) {
    {
        return ((panda$core$Int64) { 32 });
    }
    }
    return ((panda$core$Int64) { 64 });
}
panda$core$Int64 org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64(org$pandalanguage$pandac$Compiler* self, panda$core$UInt64 p_value) {
    panda$core$Bit $tmp1480 = panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(p_value, ((panda$core$UInt64) { 255 }));
    if ($tmp1480.value) {
    {
        return ((panda$core$Int64) { 8 });
    }
    }
    panda$core$Bit $tmp1481 = panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(p_value, ((panda$core$UInt64) { 65535 }));
    if ($tmp1481.value) {
    {
        return ((panda$core$Int64) { 16 });
    }
    }
    panda$core$Bit $tmp1482 = panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(p_value, ((panda$core$UInt64) { 4294967295 }));
    if ($tmp1482.value) {
    {
        return ((panda$core$Int64) { 32 });
    }
    }
    return ((panda$core$Int64) { 64 });
}
panda$core$Int64$nullable org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr, org$pandalanguage$pandac$Type* p_target) {
    panda$core$Int64$nullable cost1485;
    panda$core$Int64$nullable cost11558;
    panda$core$Int64$nullable cost21562;
    panda$core$Int64 cost1570;
    panda$core$Int64$nullable cost11584;
    panda$core$Int64$nullable cost21588;
    panda$core$Int64$nullable cost31593;
    panda$collections$Array* args1600;
    org$pandalanguage$pandac$ClassDecl* targetClass1610;
    panda$collections$Iterator* m$Iter1612;
    org$pandalanguage$pandac$MethodDecl* m1624;
    panda$core$Int64$nullable cost1633;
    panda$core$Bit $tmp1483 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_expr->type, p_target);
    if ($tmp1483.value) {
    {
        return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
    }
    }
    switch (p_target->typeKind.value) {
        case 11:
        {
            panda$core$Bit $tmp1484 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1030 }));
            if ($tmp1484.value) {
            {
                return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
            }
            }
            panda$core$Object* $tmp1486 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$Int64$nullable $tmp1487 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, ((org$pandalanguage$pandac$Type*) $tmp1486));
            cost1485 = $tmp1487;
            if (((panda$core$Bit) { !cost1485.nonnull }).value) {
            {
                return ((panda$core$Int64$nullable) { .nonnull = false });
            }
            }
            panda$core$Bit $tmp1488 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->type->typeKind, ((panda$core$Int64) { 11 }));
            if ($tmp1488.value) {
            {
                return cost1485;
            }
            }
            panda$core$Int64 $tmp1489 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) cost1485.value), ((panda$core$Int64) { 1 }));
            return ((panda$core$Int64$nullable) { $tmp1489, true });
        }
        break;
        case 22:
        {
            panda$core$Int64$nullable $tmp1490 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, p_target->parameter->bound);
            return $tmp1490;
        }
        break;
    }
    switch (p_expr->kind.value) {
        case 1011:
        {
            panda$core$Bit $tmp1491 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 19 }));
            if ($tmp1491.value) {
            {
                return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
            }
            }
            panda$core$Bit $tmp1492 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_target);
            if ($tmp1492.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1493 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
                panda$core$Int64$nullable $tmp1494 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1493, p_target);
                return $tmp1494;
            }
            }
        }
        break;
        case 1004:
        {
            panda$core$Bit $tmp1497 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            bool $tmp1496 = $tmp1497.value;
            if (!$tmp1496) goto $l1498;
            panda$core$Int64 $tmp1499 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1500 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(self, $tmp1499);
            panda$core$Int64 $tmp1501 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1502 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1500, $tmp1501);
            $tmp1496 = $tmp1502.value;
            $l1498:;
            panda$core$Bit $tmp1503 = { $tmp1496 };
            bool $tmp1495 = $tmp1503.value;
            if ($tmp1495) goto $l1504;
            panda$core$Bit $tmp1506 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 13 }));
            bool $tmp1505 = $tmp1506.value;
            if (!$tmp1505) goto $l1507;
            panda$core$Int64 $tmp1508 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64(self, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1509 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1510 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1508, $tmp1509);
            $tmp1505 = $tmp1510.value;
            $l1507:;
            panda$core$Bit $tmp1511 = { $tmp1505 };
            $tmp1495 = $tmp1511.value;
            $l1504:;
            panda$core$Bit $tmp1512 = { $tmp1495 };
            if ($tmp1512.value) {
            {
                return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
            }
            }
            panda$core$Bit $tmp1513 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            panda$core$Bit $tmp1514 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1513);
            if ($tmp1514.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1515 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                panda$core$Int64$nullable $tmp1516 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1515, p_target);
                return $tmp1516;
            }
            }
        }
        break;
        case 1032:
        {
            panda$core$Bit $tmp1519 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            bool $tmp1518 = $tmp1519.value;
            if (!$tmp1518) goto $l1520;
            panda$core$Int64 $tmp1521 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1522 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp1521);
            panda$core$Int64 $tmp1523 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(self, $tmp1522);
            panda$core$Int64 $tmp1524 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1525 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1523, $tmp1524);
            $tmp1518 = $tmp1525.value;
            $l1520:;
            panda$core$Bit $tmp1526 = { $tmp1518 };
            bool $tmp1517 = $tmp1526.value;
            if ($tmp1517) goto $l1527;
            panda$core$Bit $tmp1529 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 13 }));
            bool $tmp1528 = $tmp1529.value;
            if (!$tmp1528) goto $l1530;
            panda$core$Int64 $tmp1531 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1532 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp1531);
            panda$core$Int64 $tmp1533 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(self, $tmp1532);
            panda$core$Int64 $tmp1534 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1535 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1533, $tmp1534);
            $tmp1528 = $tmp1535.value;
            $l1530:;
            panda$core$Bit $tmp1536 = { $tmp1528 };
            $tmp1517 = $tmp1536.value;
            $l1527:;
            panda$core$Bit $tmp1537 = { $tmp1517 };
            if ($tmp1537.value) {
            {
                return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
            }
            }
            panda$core$Bit $tmp1538 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            panda$core$Bit $tmp1539 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1538);
            if ($tmp1539.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1540 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                panda$core$Int64$nullable $tmp1541 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1540, p_target);
                return $tmp1541;
            }
            }
        }
        break;
        case 1031:
        {
            panda$core$Bit $tmp1542 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(p_target);
            if ($tmp1542.value) {
            {
                panda$core$Int64 $tmp1543 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_expr->children);
                panda$core$Bit $tmp1544 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1543, ((panda$core$Int64) { 2 }));
                if ($tmp1544.value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Object* $tmp1546 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Bit $tmp1547 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1546)->kind, ((panda$core$Int64) { 1030 }));
                bool $tmp1545 = $tmp1547.value;
                if (!$tmp1545) goto $l1548;
                panda$core$Object* $tmp1549 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                panda$core$Bit $tmp1550 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1549)->kind, ((panda$core$Int64) { 1030 }));
                $tmp1545 = $tmp1550.value;
                $l1548:;
                panda$core$Bit $tmp1551 = { $tmp1545 };
                if ($tmp1551.value) {
                {
                    panda$core$Object* $tmp1552 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                    panda$core$Bit $tmp1553 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1552)->typeKind, ((panda$core$Int64) { 11 }));
                    if ($tmp1553.value) {
                    {
                        panda$core$Object* $tmp1554 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                        panda$core$Object* $tmp1555 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$Type*) $tmp1554)->subtypes, ((panda$core$Int64) { 0 }));
                        panda$core$Bit $tmp1556 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1555));
                        if ($tmp1556.value) {
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
                panda$core$Bit $tmp1557 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 21 }));
                PANDA_ASSERT($tmp1557.value);
                panda$core$Object* $tmp1559 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Object* $tmp1560 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                panda$core$Int64$nullable $tmp1561 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1559), ((org$pandalanguage$pandac$Type*) $tmp1560));
                cost11558 = $tmp1561;
                if (((panda$core$Bit) { !cost11558.nonnull }).value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Object* $tmp1563 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                panda$core$Object* $tmp1564 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                panda$core$Int64$nullable $tmp1565 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1563), ((org$pandalanguage$pandac$Type*) $tmp1564));
                cost21562 = $tmp1565;
                if (((panda$core$Bit) { !cost21562.nonnull }).value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Int64 $tmp1566 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) cost11558.value), ((panda$core$Int64) cost21562.value));
                return ((panda$core$Int64$nullable) { $tmp1566, true });
            }
            }
            panda$core$Bit $tmp1567 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(p_target);
            if ($tmp1567.value) {
            {
                panda$core$Int64 $tmp1568 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_expr->children);
                panda$core$Bit $tmp1569 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1568, ((panda$core$Int64) { 3 }));
                if ($tmp1569.value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Object* $tmp1572 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Bit $tmp1573 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1572)->kind, ((panda$core$Int64) { 1030 }));
                bool $tmp1571 = $tmp1573.value;
                if (!$tmp1571) goto $l1574;
                panda$core$Object* $tmp1575 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                panda$core$Bit $tmp1576 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1575)->kind, ((panda$core$Int64) { 1030 }));
                $tmp1571 = $tmp1576.value;
                $l1574:;
                panda$core$Bit $tmp1577 = { $tmp1571 };
                if ($tmp1577.value) {
                {
                    panda$core$Object* $tmp1578 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                    panda$core$Bit $tmp1579 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1578)->typeKind, ((panda$core$Int64) { 11 }));
                    if ($tmp1579.value) {
                    {
                        panda$core$Object* $tmp1580 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                        panda$core$Object* $tmp1581 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$Type*) $tmp1580)->subtypes, ((panda$core$Int64) { 0 }));
                        panda$core$Bit $tmp1582 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1581));
                        if ($tmp1582.value) {
                        {
                            cost1570 = ((panda$core$Int64) { 0 });
                        }
                        }
                        else {
                        {
                            cost1570 = ((panda$core$Int64) { 1 });
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
                    panda$core$Bit $tmp1583 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 21 }));
                    PANDA_ASSERT($tmp1583.value);
                    panda$core$Object* $tmp1585 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                    panda$core$Object* $tmp1586 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                    panda$core$Int64$nullable $tmp1587 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1585), ((org$pandalanguage$pandac$Type*) $tmp1586));
                    cost11584 = $tmp1587;
                    if (((panda$core$Bit) { !cost11584.nonnull }).value) {
                    {
                        return ((panda$core$Int64$nullable) { .nonnull = false });
                    }
                    }
                    panda$core$Object* $tmp1589 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                    panda$core$Object* $tmp1590 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                    panda$core$Int64$nullable $tmp1591 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1589), ((org$pandalanguage$pandac$Type*) $tmp1590));
                    cost21588 = $tmp1591;
                    if (((panda$core$Bit) { !cost21588.nonnull }).value) {
                    {
                        return ((panda$core$Int64$nullable) { .nonnull = false });
                    }
                    }
                    panda$core$Int64 $tmp1592 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) cost11584.value), ((panda$core$Int64) cost21588.value));
                    cost1570 = $tmp1592;
                }
                }
                panda$core$Object* $tmp1594 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 2 }));
                panda$core$Object* $tmp1595 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 2 }));
                panda$core$Int64$nullable $tmp1596 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1594), ((org$pandalanguage$pandac$Type*) $tmp1595));
                cost31593 = $tmp1596;
                if (((panda$core$Bit) { !cost31593.nonnull }).value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Int64 $tmp1597 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(cost1570, ((panda$core$Int64) cost31593.value));
                return ((panda$core$Int64$nullable) { $tmp1597, true });
            }
            }
            org$pandalanguage$pandac$Type* $tmp1598 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
            panda$core$Int64$nullable $tmp1599 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1598, p_target);
            return $tmp1599;
        }
        break;
        case 1040:
        {
            panda$collections$Array* $tmp1601 = (panda$collections$Array*) malloc(40);
            $tmp1601->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1601->refCount.value = 1;
            panda$collections$Array$init($tmp1601);
            args1600 = $tmp1601;
            panda$core$Object* $tmp1603 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
            panda$collections$Array$add$panda$collections$Array$T(args1600, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp1603)));
            panda$core$Object* $tmp1604 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp1606 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1604), &$s1605, ((panda$collections$ListView*) args1600));
            panda$core$Int64$nullable $tmp1607 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1606, p_target);
            return $tmp1607;
        }
        break;
    }
    panda$core$Bit $tmp1608 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_target);
    panda$core$Bit $tmp1609 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1608);
    if ($tmp1609.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp1611 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_target);
    targetClass1610 = $tmp1611;
    if (((panda$core$Bit) { targetClass1610 == NULL }).value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    {
        ITable* $tmp1613 = ((panda$collections$Iterable*) targetClass1610->methods)->$class->itable;
        while ($tmp1613->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1613 = $tmp1613->next;
        }
        $fn1615 $tmp1614 = $tmp1613->methods[0];
        panda$collections$Iterator* $tmp1616 = $tmp1614(((panda$collections$Iterable*) targetClass1610->methods));
        m$Iter1612 = $tmp1616;
        $l1617:;
        ITable* $tmp1619 = m$Iter1612->$class->itable;
        while ($tmp1619->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1619 = $tmp1619->next;
        }
        $fn1621 $tmp1620 = $tmp1619->methods[0];
        panda$core$Bit $tmp1622 = $tmp1620(m$Iter1612);
        panda$core$Bit $tmp1623 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1622);
        if (!$tmp1623.value) goto $l1618;
        {
            ITable* $tmp1625 = m$Iter1612->$class->itable;
            while ($tmp1625->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1625 = $tmp1625->next;
            }
            $fn1627 $tmp1626 = $tmp1625->methods[1];
            panda$core$Object* $tmp1628 = $tmp1626(m$Iter1612);
            m1624 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1628);
            panda$core$Bit $tmp1629 = org$pandalanguage$pandac$Annotations$isImplicit$R$panda$core$Bit(m1624->annotations);
            if ($tmp1629.value) {
            {
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m1624);
                panda$core$Bit $tmp1630 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(m1624->methodKind, ((panda$core$Int64) { 59 }));
                PANDA_ASSERT($tmp1630.value);
                panda$core$Int64 $tmp1631 = panda$collections$Array$get_count$R$panda$core$Int64(m1624->parameters);
                panda$core$Bit $tmp1632 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1631, ((panda$core$Int64) { 1 }));
                PANDA_ASSERT($tmp1632.value);
                panda$core$Object* $tmp1634 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(m1624->parameters, ((panda$core$Int64) { 0 }));
                panda$core$Int64$nullable $tmp1635 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1634)->type);
                cost1633 = $tmp1635;
                if (((panda$core$Bit) { cost1633.nonnull }).value) {
                {
                    return cost1633;
                }
                }
            }
            }
        }
        goto $l1617;
        $l1618:;
    }
    PANDA_ASSERT(((panda$core$Bit) { p_expr->type != NULL }).value);
    panda$core$Int64$nullable $tmp1636 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr->type, p_target);
    return $tmp1636;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$doCoerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr, org$pandalanguage$pandac$Type* p_target) {
    panda$collections$Array* children1645;
    org$pandalanguage$pandac$IRNode* intermediate1650;
    org$pandalanguage$pandac$IRNode* coerced1678;
    org$pandalanguage$pandac$IRNode* coerced1699;
    org$pandalanguage$pandac$IRNode* varType1713;
    org$pandalanguage$pandac$Type* param1728;
    org$pandalanguage$pandac$IRNode* start1730;
    org$pandalanguage$pandac$IRNode* end1733;
    panda$collections$Array* args1736;
    org$pandalanguage$pandac$IRNode* target1742;
    org$pandalanguage$pandac$Type* endPoint1758;
    org$pandalanguage$pandac$IRNode* start1760;
    org$pandalanguage$pandac$IRNode* end1763;
    org$pandalanguage$pandac$IRNode* step1766;
    panda$collections$Array* args1770;
    org$pandalanguage$pandac$IRNode* target1776;
    panda$collections$ImmutableArray* args1784;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1785;
    panda$collections$Array* children1797;
    org$pandalanguage$pandac$IRNode* intermediate1803;
    org$pandalanguage$pandac$ClassDecl* cl1808;
    panda$collections$Iterator* m$Iter1810;
    org$pandalanguage$pandac$MethodDecl* m1822;
    org$pandalanguage$pandac$IRNode* type1833;
    panda$collections$Array* args1838;
    panda$collections$Array* children1842;
    if (((panda$core$Bit) { p_expr == NULL }).value) {
    {
        return NULL;
    }
    }
    PANDA_ASSERT(p_expr->type->resolved.value);
    PANDA_ASSERT(p_target->resolved.value);
    panda$core$Bit $tmp1637 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_expr->type, p_target);
    if ($tmp1637.value) {
    {
        return p_expr;
    }
    }
    panda$core$Bit $tmp1639 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->type->typeKind, ((panda$core$Int64) { 11 }));
    bool $tmp1638 = $tmp1639.value;
    if (!$tmp1638) goto $l1640;
    panda$core$Bit $tmp1641 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
    $tmp1638 = $tmp1641.value;
    $l1640:;
    panda$core$Bit $tmp1642 = { $tmp1638 };
    if ($tmp1642.value) {
    {
        panda$core$Object* $tmp1643 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp1644 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1643), p_target);
        if ($tmp1644.value) {
        {
            panda$collections$Array* $tmp1646 = (panda$collections$Array*) malloc(40);
            $tmp1646->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1646->refCount.value = 1;
            panda$collections$Array$init($tmp1646);
            children1645 = $tmp1646;
            panda$collections$Array$add$panda$collections$Array$T(children1645, ((panda$core$Object*) p_expr));
            org$pandalanguage$pandac$IRNode* $tmp1648 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp1648->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1648->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp1648, ((panda$core$Int64) { 1009 }), p_expr->position, p_target, ((panda$core$Object*) wrap_panda$core$Bit(((panda$core$Bit) { false }))), ((panda$collections$ListView*) children1645));
            return $tmp1648;
        }
        }
        panda$core$Object* $tmp1651 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->type->subtypes, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp1652 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, ((org$pandalanguage$pandac$Type*) $tmp1651));
        intermediate1650 = $tmp1652;
        org$pandalanguage$pandac$IRNode* $tmp1653 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, intermediate1650, p_target);
        return $tmp1653;
    }
    }
    switch (p_expr->kind.value) {
        case 1004:
        {
            panda$core$Bit $tmp1655 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
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
            else {
            panda$core$Bit $tmp1664 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 13 }));
            bool $tmp1663 = $tmp1664.value;
            if (!$tmp1663) goto $l1665;
            panda$core$Int64 $tmp1666 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64(self, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1667 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1668 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1666, $tmp1667);
            $tmp1663 = $tmp1668.value;
            $l1665:;
            panda$core$Bit $tmp1669 = { $tmp1663 };
            if ($tmp1669.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1670 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1670->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1670->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp1670, ((panda$core$Int64) { 1004 }), p_expr->position, p_target, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
                return $tmp1670;
            }
            }
            }
            panda$core$Bit $tmp1673 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 10 }));
            bool $tmp1672 = $tmp1673.value;
            if (!$tmp1672) goto $l1674;
            panda$core$Bit $tmp1675 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            panda$core$Bit $tmp1676 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1675);
            $tmp1672 = $tmp1676.value;
            $l1674:;
            panda$core$Bit $tmp1677 = { $tmp1672 };
            if ($tmp1677.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1679 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp1680 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, $tmp1679);
                coerced1678 = $tmp1680;
                if (((panda$core$Bit) { coerced1678 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$IRNode* $tmp1681 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, coerced1678, p_target);
                return $tmp1681;
            }
            }
        }
        break;
        case 1032:
        {
            panda$core$Bit $tmp1683 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            bool $tmp1682 = $tmp1683.value;
            if (!$tmp1682) goto $l1684;
            panda$core$Int64 $tmp1685 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1686 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp1685);
            panda$core$Int64 $tmp1687 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(self, $tmp1686);
            panda$core$Int64 $tmp1688 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1689 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1687, $tmp1688);
            $tmp1682 = $tmp1689.value;
            $l1684:;
            panda$core$Bit $tmp1690 = { $tmp1682 };
            if ($tmp1690.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1691 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1691->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1691->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp1691, ((panda$core$Int64) { 1032 }), p_expr->position, p_target, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
                return $tmp1691;
            }
            }
            panda$core$Bit $tmp1694 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 10 }));
            bool $tmp1693 = $tmp1694.value;
            if (!$tmp1693) goto $l1695;
            panda$core$Bit $tmp1696 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            panda$core$Bit $tmp1697 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1696);
            $tmp1693 = $tmp1697.value;
            $l1695:;
            panda$core$Bit $tmp1698 = { $tmp1693 };
            if ($tmp1698.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1700 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp1701 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, $tmp1700);
                coerced1699 = $tmp1701;
                if (((panda$core$Bit) { coerced1699 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$IRNode* $tmp1702 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, coerced1699, p_target);
                return $tmp1702;
            }
            }
        }
        break;
        case 1011:
        {
            org$pandalanguage$pandac$Type* $tmp1703 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1704 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1703);
            if ($tmp1704.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1705 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1705->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1705->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp1705, ((panda$core$Int64) { 1011 }), p_expr->position, p_target, ((panda$core$Bit$wrapper*) p_expr->payload)->value);
                return $tmp1705;
            }
            }
            panda$core$Bit $tmp1708 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_target);
            bool $tmp1707 = $tmp1708.value;
            if (!$tmp1707) goto $l1709;
            org$pandalanguage$pandac$Type* $tmp1710 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1711 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1710);
            $tmp1707 = $tmp1711.value;
            $l1709:;
            panda$core$Bit $tmp1712 = { $tmp1707 };
            if ($tmp1712.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1714 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp1715 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, $tmp1714);
                varType1713 = $tmp1715;
                if (((panda$core$Bit) { varType1713 != NULL }).value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp1716 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, varType1713, p_target);
                    return $tmp1716;
                }
                }
            }
            }
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
                    panda$core$String* $tmp1721 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1720, ((panda$core$Object*) p_target));
                    panda$core$String* $tmp1723 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1721, &$s1722);
                    panda$core$String* $tmp1724 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1723, ((panda$core$Object*) p_expr));
                    panda$core$String* $tmp1726 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1724, &$s1725);
                    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_expr->position, $tmp1726);
                    return NULL;
                }
                }
                panda$core$Bit $tmp1727 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 21 }));
                PANDA_ASSERT($tmp1727.value);
                panda$core$Object* $tmp1729 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                param1728 = ((org$pandalanguage$pandac$Type*) $tmp1729);
                panda$core$Object* $tmp1731 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$IRNode* $tmp1732 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1731), param1728);
                start1730 = $tmp1732;
                if (((panda$core$Bit) { start1730 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$core$Object* $tmp1734 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$IRNode* $tmp1735 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1734), param1728);
                end1733 = $tmp1735;
                if (((panda$core$Bit) { end1733 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp1737 = (panda$collections$Array*) malloc(40);
                $tmp1737->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp1737->refCount.value = 1;
                panda$collections$Array$init($tmp1737);
                args1736 = $tmp1737;
                panda$collections$Array$add$panda$collections$Array$T(args1736, ((panda$core$Object*) start1730));
                panda$collections$Array$add$panda$collections$Array$T(args1736, ((panda$core$Object*) end1733));
                org$pandalanguage$pandac$IRNode* $tmp1739 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1739->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1739->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1741 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp1739, ((panda$core$Int64) { 1011 }), p_expr->position, $tmp1741, ((panda$core$Bit$wrapper*) p_expr->payload)->value);
                panda$collections$Array$add$panda$collections$Array$T(args1736, ((panda$core$Object*) $tmp1739));
                org$pandalanguage$pandac$IRNode* $tmp1743 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1743->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1743->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1745 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1743, ((panda$core$Int64) { 1001 }), p_expr->position, $tmp1745, p_target);
                target1742 = $tmp1743;
                org$pandalanguage$pandac$IRNode* $tmp1746 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target1742, ((panda$collections$ListView*) args1736));
                return $tmp1746;
            }
            }
            else {
            panda$core$Bit $tmp1747 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(p_target);
            if ($tmp1747.value) {
            {
                panda$core$Int64 $tmp1748 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_expr->children);
                panda$core$Bit $tmp1749 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1748, ((panda$core$Int64) { 3 }));
                if ($tmp1749.value) {
                {
                    panda$core$String* $tmp1751 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1750, ((panda$core$Object*) p_target));
                    panda$core$String* $tmp1753 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1751, &$s1752);
                    panda$core$String* $tmp1754 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1753, ((panda$core$Object*) p_expr));
                    panda$core$String* $tmp1756 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1754, &$s1755);
                    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_expr->position, $tmp1756);
                    return NULL;
                }
                }
                panda$core$Bit $tmp1757 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 21 }));
                PANDA_ASSERT($tmp1757.value);
                panda$core$Object* $tmp1759 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                endPoint1758 = ((org$pandalanguage$pandac$Type*) $tmp1759);
                panda$core$Object* $tmp1761 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$IRNode* $tmp1762 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1761), endPoint1758);
                start1760 = $tmp1762;
                if (((panda$core$Bit) { start1760 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$core$Object* $tmp1764 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$IRNode* $tmp1765 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1764), endPoint1758);
                end1763 = $tmp1765;
                panda$core$Object* $tmp1767 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 2 }));
                panda$core$Object* $tmp1768 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 2 }));
                org$pandalanguage$pandac$IRNode* $tmp1769 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1767), ((org$pandalanguage$pandac$Type*) $tmp1768));
                step1766 = $tmp1769;
                panda$collections$Array* $tmp1771 = (panda$collections$Array*) malloc(40);
                $tmp1771->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp1771->refCount.value = 1;
                panda$collections$Array$init($tmp1771);
                args1770 = $tmp1771;
                panda$collections$Array$add$panda$collections$Array$T(args1770, ((panda$core$Object*) start1760));
                panda$collections$Array$add$panda$collections$Array$T(args1770, ((panda$core$Object*) end1763));
                panda$collections$Array$add$panda$collections$Array$T(args1770, ((panda$core$Object*) step1766));
                org$pandalanguage$pandac$IRNode* $tmp1773 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1773->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1773->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1775 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp1773, ((panda$core$Int64) { 1011 }), p_expr->position, $tmp1775, ((panda$core$Bit$wrapper*) p_expr->payload)->value);
                panda$collections$Array$add$panda$collections$Array$T(args1770, ((panda$core$Object*) $tmp1773));
                org$pandalanguage$pandac$IRNode* $tmp1777 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1777->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1777->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1779 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1777, ((panda$core$Int64) { 1001 }), p_expr->position, $tmp1779, p_target);
                target1776 = $tmp1777;
                org$pandalanguage$pandac$IRNode* $tmp1780 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target1776, ((panda$collections$ListView*) args1770));
                return $tmp1780;
            }
            }
            else {
            {
                org$pandalanguage$pandac$IRNode* $tmp1781 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp1782 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp1781, p_target);
                return $tmp1782;
            }
            }
            }
        }
        break;
        case 1039:
        {
            org$pandalanguage$pandac$IRNode* $tmp1783 = org$pandalanguage$pandac$Compiler$resolveMethodCall$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, p_target);
            return $tmp1783;
        }
        break;
        case 1040:
        {
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1785, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$collections$ImmutableArray* $tmp1786 = panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(p_expr->children, $tmp1785);
            args1784 = $tmp1786;
            panda$core$Object* $tmp1787 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp1789 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1787), &$s1788, ((panda$collections$ListView*) args1784), p_target);
            org$pandalanguage$pandac$IRNode* $tmp1790 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp1789, p_target);
            return $tmp1790;
        }
        break;
    }
    panda$core$Bit $tmp1791 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp1791.value) {
    {
        panda$core$Bit $tmp1792 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1030 }));
        if ($tmp1792.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp1793 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp1793->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1793->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp1793, ((panda$core$Int64) { 1030 }), p_expr->position, p_target);
            return $tmp1793;
        }
        }
        panda$core$Object* $tmp1795 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp1796 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_expr->type, ((org$pandalanguage$pandac$Type*) $tmp1795));
        if ($tmp1796.value) {
        {
            panda$collections$Array* $tmp1798 = (panda$collections$Array*) malloc(40);
            $tmp1798->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1798->refCount.value = 1;
            panda$collections$Array$init($tmp1798);
            children1797 = $tmp1798;
            panda$collections$Array$add$panda$collections$Array$T(children1797, ((panda$core$Object*) p_expr));
            org$pandalanguage$pandac$IRNode* $tmp1800 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp1800->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1800->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp1800, ((panda$core$Int64) { 1009 }), p_expr->position, p_target, ((panda$core$Object*) wrap_panda$core$Bit(((panda$core$Bit) { false }))), ((panda$collections$ListView*) children1797));
            return $tmp1800;
        }
        }
        panda$core$Bit $tmp1802 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_expr->type->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp1802.value) {
        {
            panda$core$Object* $tmp1804 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp1805 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, ((org$pandalanguage$pandac$Type*) $tmp1804));
            intermediate1803 = $tmp1805;
            org$pandalanguage$pandac$IRNode* $tmp1806 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, intermediate1803, p_target);
            return $tmp1806;
        }
        }
    }
    }
    panda$core$Int64$nullable $tmp1807 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, p_target);
    if (((panda$core$Bit) { $tmp1807.nonnull }).value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp1809 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_target);
        cl1808 = $tmp1809;
        if (((panda$core$Bit) { cl1808 != NULL }).value) {
        {
            {
                ITable* $tmp1811 = ((panda$collections$Iterable*) cl1808->methods)->$class->itable;
                while ($tmp1811->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1811 = $tmp1811->next;
                }
                $fn1813 $tmp1812 = $tmp1811->methods[0];
                panda$collections$Iterator* $tmp1814 = $tmp1812(((panda$collections$Iterable*) cl1808->methods));
                m$Iter1810 = $tmp1814;
                $l1815:;
                ITable* $tmp1817 = m$Iter1810->$class->itable;
                while ($tmp1817->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1817 = $tmp1817->next;
                }
                $fn1819 $tmp1818 = $tmp1817->methods[0];
                panda$core$Bit $tmp1820 = $tmp1818(m$Iter1810);
                panda$core$Bit $tmp1821 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1820);
                if (!$tmp1821.value) goto $l1816;
                {
                    ITable* $tmp1823 = m$Iter1810->$class->itable;
                    while ($tmp1823->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1823 = $tmp1823->next;
                    }
                    $fn1825 $tmp1824 = $tmp1823->methods[1];
                    panda$core$Object* $tmp1826 = $tmp1824(m$Iter1810);
                    m1822 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1826);
                    panda$core$Bit $tmp1827 = org$pandalanguage$pandac$Annotations$isImplicit$R$panda$core$Bit(m1822->annotations);
                    if ($tmp1827.value) {
                    {
                        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m1822);
                        panda$core$Bit $tmp1828 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(m1822->methodKind, ((panda$core$Int64) { 59 }));
                        PANDA_ASSERT($tmp1828.value);
                        panda$core$Int64 $tmp1829 = panda$collections$Array$get_count$R$panda$core$Int64(m1822->parameters);
                        panda$core$Bit $tmp1830 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1829, ((panda$core$Int64) { 1 }));
                        PANDA_ASSERT($tmp1830.value);
                        panda$core$Object* $tmp1831 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(m1822->parameters, ((panda$core$Int64) { 0 }));
                        panda$core$Int64$nullable $tmp1832 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1831)->type);
                        if (((panda$core$Bit) { $tmp1832.nonnull }).value) {
                        {
                            org$pandalanguage$pandac$IRNode* $tmp1834 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                            $tmp1834->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                            $tmp1834->refCount.value = 1;
                            org$pandalanguage$pandac$Type* $tmp1836 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                            org$pandalanguage$pandac$Type* $tmp1837 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl1808);
                            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1834, ((panda$core$Int64) { 1001 }), p_expr->position, $tmp1836, $tmp1837);
                            type1833 = $tmp1834;
                            panda$collections$Array* $tmp1839 = (panda$collections$Array*) malloc(40);
                            $tmp1839->$class = (panda$core$Class*) &panda$collections$Array$class;
                            $tmp1839->refCount.value = 1;
                            panda$collections$Array$init$panda$core$Int64($tmp1839, ((panda$core$Int64) { 1 }));
                            args1838 = $tmp1839;
                            panda$collections$Array$add$panda$collections$Array$T(args1838, ((panda$core$Object*) p_expr));
                            org$pandalanguage$pandac$IRNode* $tmp1841 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, type1833, ((panda$collections$ListView*) args1838));
                            return $tmp1841;
                        }
                        }
                    }
                    }
                }
                goto $l1815;
                $l1816:;
            }
        }
        }
        panda$collections$Array* $tmp1843 = (panda$collections$Array*) malloc(40);
        $tmp1843->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp1843->refCount.value = 1;
        panda$collections$Array$init$panda$core$Int64($tmp1843, ((panda$core$Int64) { 1 }));
        children1842 = $tmp1843;
        panda$collections$Array$add$panda$collections$Array$T(children1842, ((panda$core$Object*) p_expr));
        org$pandalanguage$pandac$IRNode* $tmp1845 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp1845->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp1845->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp1845, ((panda$core$Int64) { 1009 }), p_expr->position, p_target, ((panda$core$Object*) wrap_panda$core$Bit(((panda$core$Bit) { false }))), ((panda$collections$ListView*) children1842));
        return $tmp1845;
    }
    }
    panda$core$String* $tmp1848 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1847, ((panda$core$Object*) p_target));
    panda$core$String* $tmp1850 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1848, &$s1849);
    panda$core$String* $tmp1851 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1850, ((panda$core$Object*) p_expr->type));
    panda$core$String* $tmp1853 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1851, &$s1852);
    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_expr->position, $tmp1853);
    return NULL;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr, org$pandalanguage$pandac$Type* p_target) {
    org$pandalanguage$pandac$IRNode* result1854;
    org$pandalanguage$pandac$IRNode* $tmp1855 = org$pandalanguage$pandac$Compiler$doCoerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, p_target);
    result1854 = $tmp1855;
    bool $tmp1856 = ((panda$core$Bit) { result1854 == NULL }).value;
    if ($tmp1856) goto $l1857;
    panda$core$Bit $tmp1858 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(result1854->type, p_target);
    $tmp1856 = $tmp1858.value;
    $l1857:;
    panda$core$Bit $tmp1859 = { $tmp1856 };
    PANDA_ASSERT($tmp1859.value);
    return result1854;
}
panda$core$Bit org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type, org$pandalanguage$pandac$Type* p_target) {
    panda$core$Bit $tmp1861 = org$pandalanguage$pandac$Type$isPointer$R$panda$core$Bit(p_type);
    bool $tmp1860 = $tmp1861.value;
    if (!$tmp1860) goto $l1862;
    panda$core$Bit $tmp1863 = org$pandalanguage$pandac$Type$isPointer$R$panda$core$Bit(p_target);
    $tmp1860 = $tmp1863.value;
    $l1862:;
    panda$core$Bit $tmp1864 = { $tmp1860 };
    if ($tmp1864.value) {
    {
        return ((panda$core$Bit) { true });
    }
    }
    panda$core$Int64$nullable $tmp1865 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_type, p_target);
    if (((panda$core$Bit) { $tmp1865.nonnull }).value) {
    {
        return ((panda$core$Bit) { true });
    }
    }
    panda$core$Bit $tmp1867 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_type);
    bool $tmp1866 = $tmp1867.value;
    if (!$tmp1866) goto $l1868;
    panda$core$Bit $tmp1869 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_target);
    $tmp1866 = $tmp1869.value;
    $l1868:;
    panda$core$Bit $tmp1870 = { $tmp1866 };
    if ($tmp1870.value) {
    {
        return ((panda$core$Bit) { true });
    }
    }
    panda$core$Bit $tmp1871 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 16 }));
    if ($tmp1871.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Int64$nullable $tmp1872 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_target, p_type);
    return ((panda$core$Bit) { $tmp1872.nonnull });
}
panda$core$Bit org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_node, org$pandalanguage$pandac$Type* p_target) {
    panda$core$Bit result1874;
    org$pandalanguage$pandac$IRNode* resolved1881;
    panda$core$Int64$nullable $tmp1873 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_node, p_target);
    if (((panda$core$Bit) { $tmp1873.nonnull }).value) {
    {
        return ((panda$core$Bit) { true });
    }
    }
    panda$core$Bit $tmp1875 = org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_node->type, p_target);
    result1874 = $tmp1875;
    panda$core$Bit $tmp1877 = panda$core$Bit$$NOT$R$panda$core$Bit(result1874);
    bool $tmp1876 = $tmp1877.value;
    if (!$tmp1876) goto $l1878;
    panda$core$Bit $tmp1879 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_node->type->typeKind, ((panda$core$Int64) { 17 }));
    $tmp1876 = $tmp1879.value;
    $l1878:;
    panda$core$Bit $tmp1880 = { $tmp1876 };
    if ($tmp1880.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp1882 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_node);
        resolved1881 = $tmp1882;
        if (((panda$core$Bit) { resolved1881 != NULL }).value) {
        {
            panda$core$Bit $tmp1883 = org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, resolved1881, p_target);
            result1874 = $tmp1883;
        }
        }
    }
    }
    return result1874;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_node, org$pandalanguage$pandac$Position p_position, panda$core$Bit p_isExplicit, org$pandalanguage$pandac$Type* p_target) {
    org$pandalanguage$pandac$IRNode* resolved1904;
    panda$collections$Array* children1907;
    panda$core$Bit $tmp1884 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_node->type, p_target);
    if ($tmp1884.value) {
    {
        return p_node;
    }
    }
    org$pandalanguage$pandac$Type* $tmp1885 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1886 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1885);
    PANDA_ASSERT($tmp1886.value);
    bool $tmp1887 = p_isExplicit.value;
    if (!$tmp1887) goto $l1888;
    panda$core$Bit $tmp1889 = org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_node, p_target);
    panda$core$Bit $tmp1890 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1889);
    $tmp1887 = $tmp1890.value;
    $l1888:;
    panda$core$Bit $tmp1891 = { $tmp1887 };
    if ($tmp1891.value) {
    {
        panda$core$String* $tmp1893 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1892, ((panda$core$Object*) p_node->type));
        panda$core$String* $tmp1895 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1893, &$s1894);
        panda$core$String* $tmp1897 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1896, ((panda$core$Object*) p_target));
        panda$core$String* $tmp1899 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1897, &$s1898);
        panda$core$String* $tmp1900 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1895, $tmp1899);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp1900);
    }
    }
    switch (p_node->kind.value) {
        case 1004:
        case 1032:
        case 1011:
        {
            org$pandalanguage$pandac$IRNode* $tmp1901 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_node, p_target);
            return $tmp1901;
        }
        break;
        case 1039:
        case 1040:
        {
            panda$core$Int64$nullable $tmp1902 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_node, p_target);
            if (((panda$core$Bit) { $tmp1902.nonnull }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1903 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_node, p_target);
                return $tmp1903;
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp1905 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_node);
            resolved1904 = $tmp1905;
            if (((panda$core$Bit) { resolved1904 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1906 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, resolved1904, p_position, p_isExplicit, p_target);
                return $tmp1906;
            }
            }
        }
        break;
    }
    panda$collections$Array* $tmp1908 = (panda$collections$Array*) malloc(40);
    $tmp1908->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1908->refCount.value = 1;
    panda$collections$Array$init($tmp1908);
    children1907 = $tmp1908;
    panda$collections$Array$add$panda$collections$Array$T(children1907, ((panda$core$Object*) p_node));
    org$pandalanguage$pandac$IRNode* $tmp1910 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp1910->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp1910->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp1910, ((panda$core$Int64) { 1009 }), p_position, p_target, ((panda$core$Object*) wrap_panda$core$Bit(p_isExplicit)), ((panda$collections$ListView*) children1907));
    return $tmp1910;
}
panda$core$Int64$nullable org$pandalanguage$pandac$Compiler$callCost$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodRef* p_m, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedReturn) {
    panda$core$Int64 result1918;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1919;
    panda$core$Int64$nullable cost1934;
    panda$core$Int64$nullable cost1948;
    PANDA_ASSERT(p_m->value->resolved.value);
    panda$core$Int64 $tmp1912 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
    ITable* $tmp1913 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp1913->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1913 = $tmp1913->next;
    }
    $fn1915 $tmp1914 = $tmp1913->methods[0];
    panda$core$Int64 $tmp1916 = $tmp1914(((panda$collections$CollectionView*) p_args));
    panda$core$Bit $tmp1917 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1912, $tmp1916);
    if ($tmp1917.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    result1918 = ((panda$core$Int64) { 0 });
    panda$core$Int64 $tmp1920 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1919, ((panda$core$Int64) { 0 }), $tmp1920, ((panda$core$Bit) { false }));
    int64_t $tmp1922 = $tmp1919.min.value;
    panda$core$Int64 i1921 = { $tmp1922 };
    int64_t $tmp1924 = $tmp1919.max.value;
    bool $tmp1925 = $tmp1919.inclusive.value;
    if ($tmp1925) goto $l1932; else goto $l1933;
    $l1932:;
    if ($tmp1922 <= $tmp1924) goto $l1926; else goto $l1928;
    $l1933:;
    if ($tmp1922 < $tmp1924) goto $l1926; else goto $l1928;
    $l1926:;
    {
        ITable* $tmp1935 = p_args->$class->itable;
        while ($tmp1935->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1935 = $tmp1935->next;
        }
        $fn1937 $tmp1936 = $tmp1935->methods[0];
        panda$core$Object* $tmp1938 = $tmp1936(p_args, i1921);
        org$pandalanguage$pandac$Type* $tmp1939 = org$pandalanguage$pandac$MethodRef$parameter$panda$core$Int64$R$org$pandalanguage$pandac$Type(p_m, i1921);
        panda$core$Int64$nullable $tmp1940 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1938), $tmp1939);
        cost1934 = $tmp1940;
        if (((panda$core$Bit) { !cost1934.nonnull }).value) {
        {
            return ((panda$core$Int64$nullable) { .nonnull = false });
        }
        }
        panda$core$Int64 $tmp1941 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result1918, ((panda$core$Int64) cost1934.value));
        result1918 = $tmp1941;
    }
    $l1929:;
    int64_t $tmp1943 = $tmp1924 - i1921.value;
    if ($tmp1925) goto $l1944; else goto $l1945;
    $l1944:;
    if ($tmp1943 >= 1) goto $l1942; else goto $l1928;
    $l1945:;
    if ($tmp1943 > 1) goto $l1942; else goto $l1928;
    $l1942:;
    i1921.value += 1;
    goto $l1926;
    $l1928:;
    if (((panda$core$Bit) { p_expectedReturn != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp1949 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(p_m);
        panda$core$Int64$nullable $tmp1950 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1949, p_expectedReturn);
        cost1948 = $tmp1950;
        if (((panda$core$Bit) { !cost1948.nonnull }).value) {
        {
            return ((panda$core$Int64$nullable) { .nonnull = false });
        }
        }
        panda$core$Int64 $tmp1951 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result1918, ((panda$core$Int64) cost1948.value));
        result1918 = $tmp1951;
    }
    }
    org$pandalanguage$pandac$Type* $tmp1954 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->value->owner);
    panda$core$Bit $tmp1955 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit($tmp1954);
    bool $tmp1953 = $tmp1955.value;
    if (!$tmp1953) goto $l1956;
    ITable* $tmp1957 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp1957->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1957 = $tmp1957->next;
    }
    $fn1959 $tmp1958 = $tmp1957->methods[0];
    panda$core$Int64 $tmp1960 = $tmp1958(((panda$collections$CollectionView*) p_args));
    panda$core$Bit $tmp1961 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1960, ((panda$core$Int64) { 1 }));
    $tmp1953 = $tmp1961.value;
    $l1956:;
    panda$core$Bit $tmp1962 = { $tmp1953 };
    bool $tmp1952 = $tmp1962.value;
    if (!$tmp1952) goto $l1963;
    panda$core$Object* $tmp1964 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->value->parameters, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp1965 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->value->owner);
    panda$core$Bit $tmp1966 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1964)->type, $tmp1965);
    $tmp1952 = $tmp1966.value;
    $l1963:;
    panda$core$Bit $tmp1967 = { $tmp1952 };
    if ($tmp1967.value) {
    {
        panda$core$Int64 $tmp1968 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result1918, ((panda$core$Int64) { 1 }));
        result1918 = $tmp1968;
    }
    }
    return ((panda$core$Int64$nullable) { result1918, true });
}
panda$core$Int64$nullable org$pandalanguage$pandac$Compiler$matchMethods$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(org$pandalanguage$pandac$Compiler* self, panda$collections$Array* p_methods, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedReturn) {
    panda$collections$Array* result1969;
    panda$core$Int64$nullable best1972;
    panda$collections$Iterator* m$Iter1973;
    org$pandalanguage$pandac$MethodRef* m1985;
    panda$core$Int64$nullable cost1990;
    panda$collections$Array* $tmp1970 = (panda$collections$Array*) malloc(40);
    $tmp1970->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1970->refCount.value = 1;
    panda$collections$Array$init($tmp1970);
    result1969 = $tmp1970;
    best1972 = ((panda$core$Int64$nullable) { .nonnull = false });
    {
        ITable* $tmp1974 = ((panda$collections$Iterable*) p_methods)->$class->itable;
        while ($tmp1974->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1974 = $tmp1974->next;
        }
        $fn1976 $tmp1975 = $tmp1974->methods[0];
        panda$collections$Iterator* $tmp1977 = $tmp1975(((panda$collections$Iterable*) p_methods));
        m$Iter1973 = $tmp1977;
        $l1978:;
        ITable* $tmp1980 = m$Iter1973->$class->itable;
        while ($tmp1980->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1980 = $tmp1980->next;
        }
        $fn1982 $tmp1981 = $tmp1980->methods[0];
        panda$core$Bit $tmp1983 = $tmp1981(m$Iter1973);
        panda$core$Bit $tmp1984 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1983);
        if (!$tmp1984.value) goto $l1979;
        {
            ITable* $tmp1986 = m$Iter1973->$class->itable;
            while ($tmp1986->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1986 = $tmp1986->next;
            }
            $fn1988 $tmp1987 = $tmp1986->methods[1];
            panda$core$Object* $tmp1989 = $tmp1987(m$Iter1973);
            m1985 = ((org$pandalanguage$pandac$MethodRef*) $tmp1989);
            panda$core$Int64$nullable $tmp1991 = org$pandalanguage$pandac$Compiler$callCost$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(self, m1985, p_args, p_expectedReturn);
            cost1990 = $tmp1991;
            if (((panda$core$Bit) { !cost1990.nonnull }).value) {
            {
                goto $l1978;
            }
            }
            bool $tmp1992 = ((panda$core$Bit) { !best1972.nonnull }).value;
            if ($tmp1992) goto $l1993;
            panda$core$Bit $tmp1994 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost1990.value), ((panda$core$Int64) best1972.value));
            $tmp1992 = $tmp1994.value;
            $l1993:;
            panda$core$Bit $tmp1995 = { $tmp1992 };
            if ($tmp1995.value) {
            {
                panda$collections$Array$clear(result1969);
                best1972 = cost1990;
            }
            }
            panda$core$Bit $tmp1996 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost1990.value), ((panda$core$Int64) best1972.value));
            if ($tmp1996.value) {
            {
                panda$collections$Array$add$panda$collections$Array$T(result1969, ((panda$core$Object*) m1985));
            }
            }
        }
        goto $l1978;
        $l1979:;
    }
    panda$collections$Array$clear(p_methods);
    panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(p_methods, ((panda$collections$CollectionView*) result1969));
    return best1972;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$MethodRef* p_m, panda$collections$ListView* p_args) {
    panda$core$String* s2003;
    panda$collections$Array* finalArgs2028;
    org$pandalanguage$pandac$IRNode* selfNode2064;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2093;
    org$pandalanguage$pandac$IRNode* coerced2111;
    org$pandalanguage$pandac$IRNode* result2126;
    PANDA_ASSERT(p_m->value->resolved.value);
    panda$core$Int64 $tmp1997 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
    ITable* $tmp1998 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp1998->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1998 = $tmp1998->next;
    }
    $fn2000 $tmp1999 = $tmp1998->methods[0];
    panda$core$Int64 $tmp2001 = $tmp1999(((panda$collections$CollectionView*) p_args));
    panda$core$Bit $tmp2002 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1997, $tmp2001);
    if ($tmp2002.value) {
    {
        panda$core$Int64 $tmp2004 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
        panda$core$Bit $tmp2005 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2004, ((panda$core$Int64) { 1 }));
        if ($tmp2005.value) {
        {
            s2003 = &$s2006;
        }
        }
        else {
        {
            s2003 = &$s2007;
        }
        }
        panda$core$String* $tmp2008 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(p_m->value);
        panda$core$String* $tmp2009 = panda$core$String$convert$R$panda$core$String($tmp2008);
        panda$core$String* $tmp2011 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2009, &$s2010);
        panda$core$Int64 $tmp2012 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
        panda$core$String* $tmp2013 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2011, ((panda$core$Object*) wrap_panda$core$Int64($tmp2012)));
        panda$core$String* $tmp2015 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2013, &$s2014);
        panda$core$String* $tmp2016 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2015, s2003);
        panda$core$String* $tmp2018 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2016, &$s2017);
        ITable* $tmp2020 = ((panda$collections$CollectionView*) p_args)->$class->itable;
        while ($tmp2020->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp2020 = $tmp2020->next;
        }
        $fn2022 $tmp2021 = $tmp2020->methods[0];
        panda$core$Int64 $tmp2023 = $tmp2021(((panda$collections$CollectionView*) p_args));
        panda$core$String* $tmp2024 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2019, ((panda$core$Object*) wrap_panda$core$Int64($tmp2023)));
        panda$core$String* $tmp2026 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2024, &$s2025);
        panda$core$String* $tmp2027 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2018, $tmp2026);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp2027);
        return NULL;
    }
    }
    panda$collections$Array* $tmp2029 = (panda$collections$Array*) malloc(40);
    $tmp2029->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2029->refCount.value = 1;
    panda$collections$Array$init($tmp2029);
    finalArgs2028 = $tmp2029;
    bool $tmp2032 = ((panda$core$Bit) { p_target != NULL }).value;
    if (!$tmp2032) goto $l2033;
    panda$core$Bit $tmp2034 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1038 }));
    $tmp2032 = $tmp2034.value;
    $l2033:;
    panda$core$Bit $tmp2035 = { $tmp2032 };
    bool $tmp2031 = $tmp2035.value;
    if (!$tmp2031) goto $l2036;
    panda$core$Bit $tmp2037 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->value->annotations);
    panda$core$Bit $tmp2038 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2037);
    $tmp2031 = $tmp2038.value;
    $l2036:;
    panda$core$Bit $tmp2039 = { $tmp2031 };
    if ($tmp2039.value) {
    {
        org$pandalanguage$pandac$Type* $tmp2040 = org$pandalanguage$pandac$MethodRef$owner$R$org$pandalanguage$pandac$Type(p_m);
        org$pandalanguage$pandac$IRNode* $tmp2041 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, p_target, p_position, ((panda$core$Bit) { false }), $tmp2040);
        panda$collections$Array$add$panda$collections$Array$T(finalArgs2028, ((panda$core$Object*) $tmp2041));
    }
    }
    panda$core$Bit $tmp2042 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->value->methodKind, ((panda$core$Int64) { 59 }));
    if ($tmp2042.value) {
    {
        if (((panda$core$Bit) { p_target == NULL }).value) {
        {
            panda$core$Object* $tmp2043 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
            panda$core$Bit $tmp2044 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp2043)->methodKind, ((panda$core$Int64) { 59 }));
            if ($tmp2044.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2045 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2045->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2045->refCount.value = 1;
                panda$core$Object* $tmp2047 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
                org$pandalanguage$pandac$Type* $tmp2048 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp2047));
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp2045, ((panda$core$Int64) { 1025 }), p_position, $tmp2048);
                panda$collections$Array$add$panda$collections$Array$T(finalArgs2028, ((panda$core$Object*) $tmp2045));
            }
            }
            else {
            {
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s2049);
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp2052 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1025 }));
        bool $tmp2051 = $tmp2052.value;
        if (!$tmp2051) goto $l2053;
        panda$core$Bit $tmp2054 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1024 }));
        $tmp2051 = $tmp2054.value;
        $l2053:;
        panda$core$Bit $tmp2055 = { $tmp2051 };
        bool $tmp2050 = $tmp2055.value;
        if (!$tmp2050) goto $l2056;
        panda$core$Bit $tmp2057 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1038 }));
        $tmp2050 = $tmp2057.value;
        $l2056:;
        panda$core$Bit $tmp2058 = { $tmp2050 };
        if ($tmp2058.value) {
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s2059);
        }
        }
        }
    }
    }
    else {
    panda$core$Bit $tmp2061 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(p_m->value);
    bool $tmp2060 = $tmp2061.value;
    if (!$tmp2060) goto $l2062;
    $tmp2060 = ((panda$core$Bit) { p_target == NULL }).value;
    $l2062:;
    panda$core$Bit $tmp2063 = { $tmp2060 };
    if ($tmp2063.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2065 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2065->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2065->refCount.value = 1;
        panda$core$Object* $tmp2067 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
        org$pandalanguage$pandac$Type* $tmp2068 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp2067));
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp2065, ((panda$core$Int64) { 1025 }), p_position, $tmp2068);
        selfNode2064 = $tmp2065;
        org$pandalanguage$pandac$Type* $tmp2069 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->value->owner);
        org$pandalanguage$pandac$IRNode* $tmp2070 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, selfNode2064, $tmp2069);
        selfNode2064 = $tmp2070;
        PANDA_ASSERT(((panda$core$Bit) { selfNode2064 != NULL }).value);
        panda$collections$Array$add$panda$collections$Array$T(finalArgs2028, ((panda$core$Object*) selfNode2064));
        panda$core$Object* $tmp2071 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
        panda$core$Bit $tmp2072 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp2071));
        panda$core$Bit $tmp2073 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2072);
        if ($tmp2073.value) {
        {
            panda$core$String* $tmp2075 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(p_m->value);
            panda$core$String* $tmp2076 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2074, $tmp2075);
            panda$core$String* $tmp2078 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2076, &$s2077);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp2078);
        }
        }
    }
    }
    else {
    panda$core$Bit $tmp2081 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(p_m->value);
    panda$core$Bit $tmp2082 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2081);
    bool $tmp2080 = $tmp2082.value;
    if (!$tmp2080) goto $l2083;
    $tmp2080 = ((panda$core$Bit) { p_target != NULL }).value;
    $l2083:;
    panda$core$Bit $tmp2084 = { $tmp2080 };
    bool $tmp2079 = $tmp2084.value;
    if (!$tmp2079) goto $l2085;
    panda$core$Bit $tmp2086 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1001 }));
    $tmp2079 = $tmp2086.value;
    $l2085:;
    panda$core$Bit $tmp2087 = { $tmp2079 };
    if ($tmp2087.value) {
    {
        panda$core$String* $tmp2089 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(p_m->value);
        panda$core$String* $tmp2090 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2088, $tmp2089);
        panda$core$String* $tmp2092 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2090, &$s2091);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp2092);
    }
    }
    }
    }
    ITable* $tmp2094 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp2094->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2094 = $tmp2094->next;
    }
    $fn2096 $tmp2095 = $tmp2094->methods[0];
    panda$core$Int64 $tmp2097 = $tmp2095(((panda$collections$CollectionView*) p_args));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2093, ((panda$core$Int64) { 0 }), $tmp2097, ((panda$core$Bit) { false }));
    int64_t $tmp2099 = $tmp2093.min.value;
    panda$core$Int64 i2098 = { $tmp2099 };
    int64_t $tmp2101 = $tmp2093.max.value;
    bool $tmp2102 = $tmp2093.inclusive.value;
    if ($tmp2102) goto $l2109; else goto $l2110;
    $l2109:;
    if ($tmp2099 <= $tmp2101) goto $l2103; else goto $l2105;
    $l2110:;
    if ($tmp2099 < $tmp2101) goto $l2103; else goto $l2105;
    $l2103:;
    {
        ITable* $tmp2112 = p_args->$class->itable;
        while ($tmp2112->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2112 = $tmp2112->next;
        }
        $fn2114 $tmp2113 = $tmp2112->methods[0];
        panda$core$Object* $tmp2115 = $tmp2113(p_args, i2098);
        org$pandalanguage$pandac$Type* $tmp2116 = org$pandalanguage$pandac$MethodRef$parameter$panda$core$Int64$R$org$pandalanguage$pandac$Type(p_m, i2098);
        org$pandalanguage$pandac$IRNode* $tmp2117 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp2115), $tmp2116);
        coerced2111 = $tmp2117;
        if (((panda$core$Bit) { coerced2111 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Object* $tmp2118 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->value->parameters, i2098);
        org$pandalanguage$pandac$IRNode* $tmp2119 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, coerced2111, p_position, ((panda$core$Bit) { false }), ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp2118)->type);
        coerced2111 = $tmp2119;
        if (((panda$core$Bit) { coerced2111 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(finalArgs2028, ((panda$core$Object*) coerced2111));
    }
    $l2106:;
    int64_t $tmp2121 = $tmp2101 - i2098.value;
    if ($tmp2102) goto $l2122; else goto $l2123;
    $l2122:;
    if ($tmp2121 >= 1) goto $l2120; else goto $l2105;
    $l2123:;
    if ($tmp2121 > 1) goto $l2120; else goto $l2105;
    $l2120:;
    i2098.value += 1;
    goto $l2103;
    $l2105:;
    panda$core$Bit $tmp2128 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_m->value->owner)->name, &$s2127);
    if ($tmp2128.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2129 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2129->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2129->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp2131 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(p_m);
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2129, ((panda$core$Int64) { 1005 }), p_position, $tmp2131, ((panda$core$Object*) p_m), ((panda$collections$ListView*) finalArgs2028));
        result2126 = $tmp2129;
    }
    }
    else {
    {
        org$pandalanguage$pandac$IRNode* $tmp2132 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2132->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2132->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2132, ((panda$core$Int64) { 1005 }), p_position, p_m->value->returnType, ((panda$core$Object*) p_m), ((panda$collections$ListView*) finalArgs2028));
        result2126 = $tmp2132;
        org$pandalanguage$pandac$Type* $tmp2134 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(p_m);
        org$pandalanguage$pandac$IRNode* $tmp2135 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, result2126, p_position, ((panda$core$Bit) { false }), $tmp2134);
        result2126 = $tmp2135;
    }
    }
    return result2126;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_target, panda$core$String* p_name, panda$collections$ListView* p_args) {
    org$pandalanguage$pandac$IRNode* $tmp2136 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_target, p_name, p_args, NULL);
    return $tmp2136;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_target, panda$core$String* p_name, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedType) {
    org$pandalanguage$pandac$IRNode* resolved2137;
    org$pandalanguage$pandac$ClassDecl* cl2139;
    org$pandalanguage$pandac$Symbol* s2143;
    org$pandalanguage$pandac$IRNode* ref2165;
    org$pandalanguage$pandac$IRNode* $tmp2138 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_target);
    resolved2137 = $tmp2138;
    if (((panda$core$Bit) { resolved2137 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp2140 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(resolved2137->kind, ((panda$core$Int64) { 1001 }));
    if ($tmp2140.value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp2141 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Type*) resolved2137->payload));
        cl2139 = $tmp2141;
    }
    }
    else {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp2142 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, resolved2137->type);
        cl2139 = $tmp2142;
    }
    }
    if (((panda$core$Bit) { cl2139 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp2144 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl2139);
    org$pandalanguage$pandac$Symbol* $tmp2145 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp2144, p_name);
    s2143 = $tmp2145;
    if (((panda$core$Bit) { s2143 == NULL }).value) {
    {
        panda$core$String* $tmp2147 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2146, ((org$pandalanguage$pandac$Symbol*) cl2139)->name);
        panda$core$String* $tmp2149 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2147, &$s2148);
        panda$core$String* $tmp2150 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2149, p_name);
        panda$core$String* $tmp2152 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2150, &$s2151);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_target->position, $tmp2152);
        return NULL;
    }
    }
    panda$core$Bit $tmp2154 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(s2143->kind, ((panda$core$Int64) { 204 }));
    bool $tmp2153 = $tmp2154.value;
    if (!$tmp2153) goto $l2155;
    panda$core$Bit $tmp2156 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(s2143->kind, ((panda$core$Int64) { 205 }));
    $tmp2153 = $tmp2156.value;
    $l2155:;
    panda$core$Bit $tmp2157 = { $tmp2153 };
    if ($tmp2157.value) {
    {
        panda$core$String* $tmp2159 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2158, ((org$pandalanguage$pandac$Symbol*) cl2139)->name);
        panda$core$String* $tmp2161 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2159, &$s2160);
        panda$core$String* $tmp2162 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2161, p_name);
        panda$core$String* $tmp2164 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2162, &$s2163);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_target->position, $tmp2164);
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp2166 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl2139);
    org$pandalanguage$pandac$IRNode* $tmp2167 = org$pandalanguage$pandac$Compiler$symbolRef$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q(self, p_target->position, p_target, s2143, $tmp2166);
    ref2165 = $tmp2167;
    if (((panda$core$Bit) { ref2165 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp2168 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, ref2165, p_args, p_expectedType);
    return $tmp2168;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_m, panda$collections$ListView* p_args) {
    org$pandalanguage$pandac$IRNode* $tmp2169 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_m, p_args, NULL);
    return $tmp2169;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_m, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedType) {
    org$pandalanguage$pandac$IRNode* target2170;
    panda$collections$Array* methods2177;
    org$pandalanguage$pandac$MethodDecl* first2182;
    panda$core$MutableString* msg2187;
    panda$core$String* separator2198;
    panda$collections$Iterator* a$Iter2200;
    org$pandalanguage$pandac$IRNode* a2212;
    org$pandalanguage$pandac$IRNode* target2226;
    panda$collections$Array* children2234;
    panda$collections$Array* types2240;
    panda$collections$Iterator* m$Iter2243;
    org$pandalanguage$pandac$MethodRef* m2255;
    org$pandalanguage$pandac$IRNode* target2265;
    org$pandalanguage$pandac$IRNode* initCall2268;
    panda$collections$Array* children2272;
    org$pandalanguage$pandac$IRNode* resolved2277;
    switch (p_m->kind.value) {
        case 1002:
        {
            panda$core$Int64 $tmp2171 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
            panda$core$Bit $tmp2172 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2171, ((panda$core$Int64) { 0 }));
            if ($tmp2172.value) {
            {
                target2170 = NULL;
            }
            }
            else {
            {
                panda$core$Int64 $tmp2173 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
                panda$core$Bit $tmp2174 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2173, ((panda$core$Int64) { 1 }));
                PANDA_ASSERT($tmp2174.value);
                panda$core$Object* $tmp2175 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 0 }));
                target2170 = ((org$pandalanguage$pandac$IRNode*) $tmp2175);
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp2176 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, p_m->position, target2170, ((org$pandalanguage$pandac$MethodRef*) p_m->payload), p_args);
            return $tmp2176;
        }
        break;
        case 1003:
        {
            panda$collections$Array* $tmp2178 = (panda$collections$Array*) malloc(40);
            $tmp2178->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2178->refCount.value = 1;
            panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp2178, ((panda$collections$ListView*) p_m->payload));
            methods2177 = $tmp2178;
            org$pandalanguage$pandac$Compiler$matchMethods$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(self, methods2177, p_args, p_expectedType);
            panda$core$Int64 $tmp2180 = panda$collections$Array$get_count$R$panda$core$Int64(methods2177);
            panda$core$Bit $tmp2181 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2180, ((panda$core$Int64) { 0 }));
            if ($tmp2181.value) {
            {
                ITable* $tmp2183 = ((panda$collections$ListView*) p_m->payload)->$class->itable;
                while ($tmp2183->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp2183 = $tmp2183->next;
                }
                $fn2185 $tmp2184 = $tmp2183->methods[0];
                panda$core$Object* $tmp2186 = $tmp2184(((panda$collections$ListView*) p_m->payload), ((panda$core$Int64) { 0 }));
                first2182 = ((org$pandalanguage$pandac$MethodRef*) $tmp2186)->value;
                panda$core$MutableString* $tmp2188 = (panda$core$MutableString*) malloc(48);
                $tmp2188->$class = (panda$core$Class*) &panda$core$MutableString$class;
                $tmp2188->refCount.value = 1;
                panda$core$String* $tmp2191 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2190, ((org$pandalanguage$pandac$Symbol*) first2182->owner)->name);
                panda$core$String* $tmp2193 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2191, &$s2192);
                panda$core$String* $tmp2194 = panda$core$String$convert$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) first2182)->name);
                panda$core$String* $tmp2196 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2194, &$s2195);
                panda$core$String* $tmp2197 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2193, $tmp2196);
                panda$core$MutableString$init$panda$core$String($tmp2188, $tmp2197);
                msg2187 = $tmp2188;
                separator2198 = &$s2199;
                {
                    ITable* $tmp2201 = ((panda$collections$Iterable*) p_args)->$class->itable;
                    while ($tmp2201->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp2201 = $tmp2201->next;
                    }
                    $fn2203 $tmp2202 = $tmp2201->methods[0];
                    panda$collections$Iterator* $tmp2204 = $tmp2202(((panda$collections$Iterable*) p_args));
                    a$Iter2200 = $tmp2204;
                    $l2205:;
                    ITable* $tmp2207 = a$Iter2200->$class->itable;
                    while ($tmp2207->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp2207 = $tmp2207->next;
                    }
                    $fn2209 $tmp2208 = $tmp2207->methods[0];
                    panda$core$Bit $tmp2210 = $tmp2208(a$Iter2200);
                    panda$core$Bit $tmp2211 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2210);
                    if (!$tmp2211.value) goto $l2206;
                    {
                        ITable* $tmp2213 = a$Iter2200->$class->itable;
                        while ($tmp2213->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2213 = $tmp2213->next;
                        }
                        $fn2215 $tmp2214 = $tmp2213->methods[1];
                        panda$core$Object* $tmp2216 = $tmp2214(a$Iter2200);
                        a2212 = ((org$pandalanguage$pandac$IRNode*) $tmp2216);
                        panda$core$MutableString$append$panda$core$String(msg2187, separator2198);
                        panda$core$MutableString$append$panda$core$Object(msg2187, ((panda$core$Object*) a2212->type));
                        separator2198 = &$s2217;
                    }
                    goto $l2205;
                    $l2206:;
                }
                panda$core$MutableString$append$panda$core$String(msg2187, &$s2218);
                if (((panda$core$Bit) { p_expectedType != NULL }).value) {
                {
                    panda$core$String* $tmp2220 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2219, ((panda$core$Object*) p_expectedType));
                    panda$core$String* $tmp2222 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2220, &$s2221);
                    panda$core$MutableString$append$panda$core$String(msg2187, $tmp2222);
                }
                }
                panda$core$String* $tmp2223 = panda$core$MutableString$finish$R$panda$core$String(msg2187);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_m->position, $tmp2223);
                return NULL;
            }
            }
            panda$core$Int64 $tmp2224 = panda$collections$Array$get_count$R$panda$core$Int64(methods2177);
            panda$core$Bit $tmp2225 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2224, ((panda$core$Int64) { 1 }));
            if ($tmp2225.value) {
            {
                panda$core$Int64 $tmp2227 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
                panda$core$Bit $tmp2228 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2227, ((panda$core$Int64) { 1 }));
                if ($tmp2228.value) {
                {
                    panda$core$Object* $tmp2229 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 0 }));
                    target2226 = ((org$pandalanguage$pandac$IRNode*) $tmp2229);
                }
                }
                else {
                {
                    panda$core$Int64 $tmp2230 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
                    panda$core$Bit $tmp2231 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2230, ((panda$core$Int64) { 0 }));
                    PANDA_ASSERT($tmp2231.value);
                    target2226 = NULL;
                }
                }
                panda$core$Object* $tmp2232 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(methods2177, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$IRNode* $tmp2233 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, p_m->position, target2226, ((org$pandalanguage$pandac$MethodRef*) $tmp2232), p_args);
                return $tmp2233;
            }
            }
            panda$collections$Array* $tmp2235 = (panda$collections$Array*) malloc(40);
            $tmp2235->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2235->refCount.value = 1;
            panda$collections$Array$init($tmp2235);
            children2234 = $tmp2235;
            org$pandalanguage$pandac$IRNode* $tmp2237 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2237->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2237->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2239 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2237, ((panda$core$Int64) { 1003 }), p_m->position, $tmp2239, ((panda$core$Object*) methods2177), ((panda$collections$ListView*) p_m->children));
            panda$collections$Array$add$panda$collections$Array$T(children2234, ((panda$core$Object*) $tmp2237));
            panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(children2234, ((panda$collections$CollectionView*) p_args));
            panda$collections$Array* $tmp2241 = (panda$collections$Array*) malloc(40);
            $tmp2241->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2241->refCount.value = 1;
            panda$collections$Array$init($tmp2241);
            types2240 = $tmp2241;
            {
                ITable* $tmp2244 = ((panda$collections$Iterable*) methods2177)->$class->itable;
                while ($tmp2244->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp2244 = $tmp2244->next;
                }
                $fn2246 $tmp2245 = $tmp2244->methods[0];
                panda$collections$Iterator* $tmp2247 = $tmp2245(((panda$collections$Iterable*) methods2177));
                m$Iter2243 = $tmp2247;
                $l2248:;
                ITable* $tmp2250 = m$Iter2243->$class->itable;
                while ($tmp2250->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp2250 = $tmp2250->next;
                }
                $fn2252 $tmp2251 = $tmp2250->methods[0];
                panda$core$Bit $tmp2253 = $tmp2251(m$Iter2243);
                panda$core$Bit $tmp2254 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2253);
                if (!$tmp2254.value) goto $l2249;
                {
                    ITable* $tmp2256 = m$Iter2243->$class->itable;
                    while ($tmp2256->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp2256 = $tmp2256->next;
                    }
                    $fn2258 $tmp2257 = $tmp2256->methods[1];
                    panda$core$Object* $tmp2259 = $tmp2257(m$Iter2243);
                    m2255 = ((org$pandalanguage$pandac$MethodRef*) $tmp2259);
                    org$pandalanguage$pandac$Type* $tmp2260 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m2255);
                    panda$collections$Array$add$panda$collections$Array$T(types2240, ((panda$core$Object*) $tmp2260));
                }
                goto $l2248;
                $l2249:;
            }
            org$pandalanguage$pandac$IRNode* $tmp2261 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2261->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2261->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2263 = (org$pandalanguage$pandac$Type*) malloc(96);
            $tmp2263->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp2263->refCount.value = 1;
            org$pandalanguage$pandac$Type$init$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp2263, ((panda$collections$ListView*) types2240));
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2261, ((panda$core$Int64) { 1039 }), p_m->position, $tmp2263, ((panda$collections$ListView*) children2234));
            return $tmp2261;
        }
        break;
        case 1001:
        {
            org$pandalanguage$pandac$IRNode* $tmp2266 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2266->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2266->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp2266, ((panda$core$Int64) { 1038 }), p_m->position, ((org$pandalanguage$pandac$Type*) p_m->payload));
            target2265 = $tmp2266;
            org$pandalanguage$pandac$IRNode* $tmp2270 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target2265, &$s2269, p_args);
            org$pandalanguage$pandac$IRNode* $tmp2271 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp2270);
            initCall2268 = $tmp2271;
            if (((panda$core$Bit) { initCall2268 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp2273 = (panda$collections$Array*) malloc(40);
            $tmp2273->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2273->refCount.value = 1;
            panda$collections$Array$init($tmp2273);
            children2272 = $tmp2273;
            panda$collections$Array$add$panda$collections$Array$T(children2272, ((panda$core$Object*) initCall2268));
            org$pandalanguage$pandac$IRNode* $tmp2275 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2275->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2275->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2275, ((panda$core$Int64) { 1010 }), p_m->position, ((org$pandalanguage$pandac$Type*) p_m->payload), ((panda$collections$ListView*) children2272));
            return $tmp2275;
        }
        break;
        default:
        {
            org$pandalanguage$pandac$IRNode* $tmp2278 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_m);
            resolved2277 = $tmp2278;
            if (((panda$core$Bit) { resolved2277 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$String* $tmp2280 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2279, ((panda$core$Object*) resolved2277->type));
            panda$core$String* $tmp2282 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2280, &$s2281);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, resolved2277->position, $tmp2282);
        }
    }
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$collections$Array* subtypes2283;
    panda$core$MutableString* typeName2286;
    panda$core$String* separator2290;
    panda$collections$Iterator* p$Iter2292;
    org$pandalanguage$pandac$MethodDecl$Parameter* p2304;
    panda$core$Int64 kind2310;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
    panda$collections$Array* $tmp2284 = (panda$collections$Array*) malloc(40);
    $tmp2284->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2284->refCount.value = 1;
    panda$collections$Array$init($tmp2284);
    subtypes2283 = $tmp2284;
    panda$core$MutableString* $tmp2287 = (panda$core$MutableString*) malloc(48);
    $tmp2287->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp2287->refCount.value = 1;
    panda$core$MutableString$init$panda$core$String($tmp2287, &$s2289);
    typeName2286 = $tmp2287;
    separator2290 = &$s2291;
    {
        ITable* $tmp2293 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp2293->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2293 = $tmp2293->next;
        }
        $fn2295 $tmp2294 = $tmp2293->methods[0];
        panda$collections$Iterator* $tmp2296 = $tmp2294(((panda$collections$Iterable*) p_m->parameters));
        p$Iter2292 = $tmp2296;
        $l2297:;
        ITable* $tmp2299 = p$Iter2292->$class->itable;
        while ($tmp2299->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2299 = $tmp2299->next;
        }
        $fn2301 $tmp2300 = $tmp2299->methods[0];
        panda$core$Bit $tmp2302 = $tmp2300(p$Iter2292);
        panda$core$Bit $tmp2303 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2302);
        if (!$tmp2303.value) goto $l2298;
        {
            ITable* $tmp2305 = p$Iter2292->$class->itable;
            while ($tmp2305->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2305 = $tmp2305->next;
            }
            $fn2307 $tmp2306 = $tmp2305->methods[1];
            panda$core$Object* $tmp2308 = $tmp2306(p$Iter2292);
            p2304 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp2308);
            panda$core$MutableString$append$panda$core$String(typeName2286, separator2290);
            panda$core$MutableString$append$panda$core$String(typeName2286, ((org$pandalanguage$pandac$Symbol*) p2304->type)->name);
            panda$collections$Array$add$panda$collections$Array$T(subtypes2283, ((panda$core$Object*) p2304->type));
            separator2290 = &$s2309;
        }
        goto $l2297;
        $l2298:;
    }
    panda$core$Bit $tmp2311 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 58 }));
    if ($tmp2311.value) {
    {
        panda$core$MutableString$append$panda$core$String(typeName2286, &$s2312);
        kind2310 = ((panda$core$Int64) { 24 });
    }
    }
    else {
    {
        panda$core$MutableString$append$panda$core$String(typeName2286, &$s2313);
        kind2310 = ((panda$core$Int64) { 25 });
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(subtypes2283, ((panda$core$Object*) p_m->returnType));
    org$pandalanguage$pandac$Type* $tmp2314 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2315 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp2314);
    if ($tmp2315.value) {
    {
        panda$core$MutableString$append$panda$core$String(typeName2286, ((org$pandalanguage$pandac$Symbol*) p_m->returnType)->name);
    }
    }
    panda$core$MutableString$append$panda$core$String(typeName2286, &$s2316);
    org$pandalanguage$pandac$Type* $tmp2317 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp2317->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp2317->refCount.value = 1;
    panda$core$String* $tmp2319 = panda$core$MutableString$finish$R$panda$core$String(typeName2286);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp2317, $tmp2319, kind2310, ((org$pandalanguage$pandac$Symbol*) p_m)->position, ((panda$collections$ListView*) subtypes2283), ((panda$core$Bit) { true }));
    return $tmp2317;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$declaredTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m, org$pandalanguage$pandac$Type* p_selfType) {
    panda$collections$Array* subtypes2320;
    panda$core$MutableString* typeName2323;
    panda$collections$Iterator* p$Iter2327;
    org$pandalanguage$pandac$MethodDecl$Parameter* p2339;
    panda$core$Int64 kind2345;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
    panda$collections$Array* $tmp2321 = (panda$collections$Array*) malloc(40);
    $tmp2321->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2321->refCount.value = 1;
    panda$collections$Array$init($tmp2321);
    subtypes2320 = $tmp2321;
    panda$core$MutableString* $tmp2324 = (panda$core$MutableString*) malloc(48);
    $tmp2324->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp2324->refCount.value = 1;
    panda$core$MutableString$init$panda$core$String($tmp2324, &$s2326);
    typeName2323 = $tmp2324;
    panda$core$MutableString$append$panda$core$String(typeName2323, ((org$pandalanguage$pandac$Symbol*) p_selfType)->name);
    panda$collections$Array$add$panda$collections$Array$T(subtypes2320, ((panda$core$Object*) p_selfType));
    {
        ITable* $tmp2328 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp2328->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2328 = $tmp2328->next;
        }
        $fn2330 $tmp2329 = $tmp2328->methods[0];
        panda$collections$Iterator* $tmp2331 = $tmp2329(((panda$collections$Iterable*) p_m->parameters));
        p$Iter2327 = $tmp2331;
        $l2332:;
        ITable* $tmp2334 = p$Iter2327->$class->itable;
        while ($tmp2334->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2334 = $tmp2334->next;
        }
        $fn2336 $tmp2335 = $tmp2334->methods[0];
        panda$core$Bit $tmp2337 = $tmp2335(p$Iter2327);
        panda$core$Bit $tmp2338 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2337);
        if (!$tmp2338.value) goto $l2333;
        {
            ITable* $tmp2340 = p$Iter2327->$class->itable;
            while ($tmp2340->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2340 = $tmp2340->next;
            }
            $fn2342 $tmp2341 = $tmp2340->methods[1];
            panda$core$Object* $tmp2343 = $tmp2341(p$Iter2327);
            p2339 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp2343);
            panda$core$MutableString$append$panda$core$String(typeName2323, &$s2344);
            panda$core$MutableString$append$panda$core$String(typeName2323, ((org$pandalanguage$pandac$Symbol*) p2339->type)->name);
            panda$collections$Array$add$panda$collections$Array$T(subtypes2320, ((panda$core$Object*) p2339->type));
        }
        goto $l2332;
        $l2333:;
    }
    panda$core$Bit $tmp2346 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 58 }));
    if ($tmp2346.value) {
    {
        panda$core$MutableString$append$panda$core$String(typeName2323, &$s2347);
        kind2345 = ((panda$core$Int64) { 24 });
    }
    }
    else {
    {
        panda$core$MutableString$append$panda$core$String(typeName2323, &$s2348);
        kind2345 = ((panda$core$Int64) { 25 });
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(subtypes2320, ((panda$core$Object*) p_m->returnType));
    org$pandalanguage$pandac$Type* $tmp2349 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2350 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp2349);
    if ($tmp2350.value) {
    {
        panda$core$MutableString$append$panda$core$String(typeName2323, ((org$pandalanguage$pandac$Symbol*) p_m->returnType)->name);
    }
    }
    panda$core$MutableString$append$panda$core$String(typeName2323, &$s2351);
    org$pandalanguage$pandac$Type* $tmp2352 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp2352->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp2352->refCount.value = 1;
    panda$core$String* $tmp2354 = panda$core$MutableString$finish$R$panda$core$String(typeName2323);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp2352, $tmp2354, kind2345, ((org$pandalanguage$pandac$Symbol*) p_m)->position, ((panda$collections$ListView*) subtypes2320), ((panda$core$Bit) { true }));
    return $tmp2352;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$MethodDecl* inherited2355;
    org$pandalanguage$pandac$MethodDecl* $tmp2356 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(self, p_m);
    inherited2355 = $tmp2356;
    if (((panda$core$Bit) { inherited2355 == NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp2357 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, p_m);
        return $tmp2357;
    }
    }
    org$pandalanguage$pandac$Type* $tmp2358 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, inherited2355);
    return $tmp2358;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$Type* $tmp2359 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    org$pandalanguage$pandac$Type* $tmp2360 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_m, $tmp2359);
    return $tmp2360;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m, org$pandalanguage$pandac$Type* p_selfType) {
    org$pandalanguage$pandac$MethodDecl* inherited2361;
    org$pandalanguage$pandac$MethodDecl* $tmp2362 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(self, p_m);
    inherited2361 = $tmp2362;
    if (((panda$core$Bit) { inherited2361 == NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp2363 = org$pandalanguage$pandac$Compiler$declaredTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_m, p_selfType);
        return $tmp2363;
    }
    }
    org$pandalanguage$pandac$Type* $tmp2364 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, inherited2361, p_selfType);
    return $tmp2364;
}
panda$core$String* org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(panda$core$Int64 p_op) {
    switch (p_op.value) {
        case 51:
        {
            return &$s2365;
        }
        break;
        case 52:
        {
            return &$s2366;
        }
        break;
        case 53:
        {
            return &$s2367;
        }
        break;
        case 54:
        {
            return &$s2368;
        }
        break;
        case 55:
        {
            return &$s2369;
        }
        break;
        case 56:
        {
            return &$s2370;
        }
        break;
        case 57:
        {
            return &$s2371;
        }
        break;
        case 58:
        {
            return &$s2372;
        }
        break;
        case 59:
        {
            return &$s2373;
        }
        break;
        case 63:
        {
            return &$s2374;
        }
        break;
        case 62:
        {
            return &$s2375;
        }
        break;
        case 65:
        {
            return &$s2376;
        }
        break;
        case 64:
        {
            return &$s2377;
        }
        break;
        case 68:
        {
            return &$s2378;
        }
        break;
        case 69:
        {
            return &$s2379;
        }
        break;
        case 66:
        {
            return &$s2380;
        }
        break;
        case 67:
        {
            return &$s2381;
        }
        break;
        case 70:
        {
            return &$s2382;
        }
        break;
        case 71:
        {
            return &$s2383;
        }
        break;
        case 49:
        {
            return &$s2384;
        }
        break;
        case 50:
        {
            return &$s2385;
        }
        break;
        case 72:
        {
            return &$s2386;
        }
        break;
        case 1:
        {
            return &$s2387;
        }
        break;
        case 101:
        {
            return &$s2388;
        }
        break;
        case 73:
        {
            return &$s2389;
        }
        break;
        case 60:
        {
            return &$s2390;
        }
        break;
        case 61:
        {
            return &$s2391;
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
            panda$core$Int64 $tmp2392 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_expr->children);
            panda$core$Bit $tmp2393 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2392, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp2393.value);
            panda$core$Bit $tmp2394 = panda$core$Bit$$NOT$R$panda$core$Bit(((panda$core$Bit$wrapper*) p_expr->payload)->value);
            if ($tmp2394.value) {
            {
                panda$core$Object* $tmp2395 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Bit $tmp2396 = org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp2395));
                return $tmp2396;
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
            panda$core$Object* $tmp2397 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp2398 = org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp2397));
            return $tmp2398;
        }
        break;
        default:
        {
            return ((panda$core$Bit) { false });
        }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$foldInts$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_left, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_right) {
    panda$core$Int64 l2424;
    panda$core$Int64 r2426;
    panda$core$Bit $tmp2400 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_left->kind, ((panda$core$Int64) { 1004 }));
    bool $tmp2399 = $tmp2400.value;
    if ($tmp2399) goto $l2401;
    panda$core$Bit $tmp2402 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_left->kind, ((panda$core$Int64) { 1032 }));
    $tmp2399 = $tmp2402.value;
    $l2401:;
    panda$core$Bit $tmp2403 = { $tmp2399 };
    PANDA_ASSERT($tmp2403.value);
    panda$core$Bit $tmp2405 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_right->kind, ((panda$core$Int64) { 1004 }));
    bool $tmp2404 = $tmp2405.value;
    if ($tmp2404) goto $l2406;
    panda$core$Bit $tmp2407 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_right->kind, ((panda$core$Int64) { 1032 }));
    $tmp2404 = $tmp2407.value;
    $l2406:;
    panda$core$Bit $tmp2408 = { $tmp2404 };
    PANDA_ASSERT($tmp2408.value);
    panda$core$Bit $tmp2411 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_left->kind, ((panda$core$Int64) { 1032 }));
    bool $tmp2410 = $tmp2411.value;
    if ($tmp2410) goto $l2412;
    panda$core$UInt64 $tmp2414 = panda$core$Int64$convert$R$panda$core$UInt64(((panda$core$Int64) { 9223372036854775807 }));
    panda$core$Bit $tmp2415 = panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p_left->payload)->value, $tmp2414);
    bool $tmp2413 = $tmp2415.value;
    if (!$tmp2413) goto $l2416;
    panda$core$Bit $tmp2417 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_right->kind, ((panda$core$Int64) { 1032 }));
    $tmp2413 = $tmp2417.value;
    $l2416:;
    panda$core$Bit $tmp2418 = { $tmp2413 };
    $tmp2410 = $tmp2418.value;
    $l2412:;
    panda$core$Bit $tmp2419 = { $tmp2410 };
    bool $tmp2409 = $tmp2419.value;
    if ($tmp2409) goto $l2420;
    panda$core$UInt64 $tmp2421 = panda$core$Int64$convert$R$panda$core$UInt64(((panda$core$Int64) { 9223372036854775807 }));
    panda$core$Bit $tmp2422 = panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p_right->payload)->value, $tmp2421);
    $tmp2409 = $tmp2422.value;
    $l2420:;
    panda$core$Bit $tmp2423 = { $tmp2409 };
    if ($tmp2423.value) {
    {
        panda$core$Int64 $tmp2425 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_left->payload)->value);
        l2424 = $tmp2425;
        panda$core$Int64 $tmp2427 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_right->payload)->value);
        r2426 = $tmp2427;
        switch (p_op.value) {
            case 51:
            {
                org$pandalanguage$pandac$IRNode* $tmp2428 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2428->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2428->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2430 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2431 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(l2424, r2426);
                panda$core$UInt64 $tmp2432 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2431);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2428, ((panda$core$Int64) { 1004 }), p_position, $tmp2430, $tmp2432);
                return $tmp2428;
            }
            break;
            case 52:
            {
                org$pandalanguage$pandac$IRNode* $tmp2433 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2433->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2433->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2435 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2436 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(l2424, r2426);
                panda$core$UInt64 $tmp2437 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2436);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2433, ((panda$core$Int64) { 1004 }), p_position, $tmp2435, $tmp2437);
                return $tmp2433;
            }
            break;
            case 53:
            {
                org$pandalanguage$pandac$IRNode* $tmp2438 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2438->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2438->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2440 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2441 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(l2424, r2426);
                panda$core$UInt64 $tmp2442 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2441);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2438, ((panda$core$Int64) { 1004 }), p_position, $tmp2440, $tmp2442);
                return $tmp2438;
            }
            break;
            case 55:
            {
                org$pandalanguage$pandac$IRNode* $tmp2443 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2443->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2443->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2445 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2446 = panda$core$Int64$$INTDIV$panda$core$Int64$R$panda$core$Int64(l2424, r2426);
                panda$core$UInt64 $tmp2447 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2446);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2443, ((panda$core$Int64) { 1004 }), p_position, $tmp2445, $tmp2447);
                return $tmp2443;
            }
            break;
            case 56:
            {
                org$pandalanguage$pandac$IRNode* $tmp2448 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2448->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2448->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2450 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2451 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(l2424, r2426);
                panda$core$UInt64 $tmp2452 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2451);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2448, ((panda$core$Int64) { 1004 }), p_position, $tmp2450, $tmp2452);
                return $tmp2448;
            }
            break;
            case 58:
            {
                org$pandalanguage$pandac$IRNode* $tmp2453 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2453->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2453->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2455 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2456 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(l2424, r2426);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2453, ((panda$core$Int64) { 1011 }), p_position, $tmp2455, $tmp2456);
                return $tmp2453;
            }
            break;
            case 59:
            {
                org$pandalanguage$pandac$IRNode* $tmp2457 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2457->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2457->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2459 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2460 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(l2424, r2426);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2457, ((panda$core$Int64) { 1011 }), p_position, $tmp2459, $tmp2460);
                return $tmp2457;
            }
            break;
            case 62:
            {
                org$pandalanguage$pandac$IRNode* $tmp2461 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2461->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2461->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2463 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2464 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(l2424, r2426);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2461, ((panda$core$Int64) { 1011 }), p_position, $tmp2463, $tmp2464);
                return $tmp2461;
            }
            break;
            case 63:
            {
                org$pandalanguage$pandac$IRNode* $tmp2465 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2465->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2465->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2467 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2468 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(l2424, r2426);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2465, ((panda$core$Int64) { 1011 }), p_position, $tmp2467, $tmp2468);
                return $tmp2465;
            }
            break;
            case 64:
            {
                org$pandalanguage$pandac$IRNode* $tmp2469 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2469->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2469->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2471 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2472 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(l2424, r2426);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2469, ((panda$core$Int64) { 1011 }), p_position, $tmp2471, $tmp2472);
                return $tmp2469;
            }
            break;
            case 65:
            {
                org$pandalanguage$pandac$IRNode* $tmp2473 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2473->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2473->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2475 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2476 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(l2424, r2426);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2473, ((panda$core$Int64) { 1011 }), p_position, $tmp2475, $tmp2476);
                return $tmp2473;
            }
            break;
            case 67:
            {
                org$pandalanguage$pandac$IRNode* $tmp2477 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2477->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2477->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2479 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2480 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(l2424, r2426);
                panda$core$UInt64 $tmp2481 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2480);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2477, ((panda$core$Int64) { 1004 }), p_position, $tmp2479, $tmp2481);
                return $tmp2477;
            }
            break;
            case 69:
            {
                org$pandalanguage$pandac$IRNode* $tmp2482 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2482->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2482->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2484 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2485 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(l2424, r2426);
                panda$core$UInt64 $tmp2486 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2485);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2482, ((panda$core$Int64) { 1004 }), p_position, $tmp2484, $tmp2486);
                return $tmp2482;
            }
            break;
            case 71:
            {
                org$pandalanguage$pandac$IRNode* $tmp2487 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2487->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2487->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2489 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2490 = panda$core$Int64$$BXOR$panda$core$Int64$R$panda$core$Int64(l2424, r2426);
                panda$core$UInt64 $tmp2491 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2490);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2487, ((panda$core$Int64) { 1004 }), p_position, $tmp2489, $tmp2491);
                return $tmp2487;
            }
            break;
            case 72:
            {
                org$pandalanguage$pandac$IRNode* $tmp2492 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2492->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2492->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2494 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2495 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(l2424, r2426);
                panda$core$UInt64 $tmp2496 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2495);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2492, ((panda$core$Int64) { 1004 }), p_position, $tmp2494, $tmp2496);
                return $tmp2492;
            }
            break;
            case 1:
            {
                org$pandalanguage$pandac$IRNode* $tmp2497 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2497->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2497->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2499 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2500 = panda$core$Int64$$SHR$panda$core$Int64$R$panda$core$Int64(l2424, r2426);
                panda$core$UInt64 $tmp2501 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2500);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2497, ((panda$core$Int64) { 1004 }), p_position, $tmp2499, $tmp2501);
                return $tmp2497;
            }
            break;
        }
    }
    }
    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s2502);
    return NULL;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    panda$core$Bit $tmp2503 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1009 }));
    if ($tmp2503.value) {
    {
        panda$core$Object* $tmp2504 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
        return ((org$pandalanguage$pandac$IRNode*) $tmp2504);
    }
    }
    return p_expr;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIndexedAssignment$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_left, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_right) {
    panda$collections$Array* args2509;
    org$pandalanguage$pandac$IRNode* resolved2517;
    panda$collections$Array* children2522;
    panda$core$UInt64 baseId2528;
    org$pandalanguage$pandac$IRNode* base2529;
    panda$core$UInt64 indexId2536;
    org$pandalanguage$pandac$IRNode* index2537;
    org$pandalanguage$pandac$IRNode* baseRef2542;
    org$pandalanguage$pandac$IRNode* indexRef2545;
    org$pandalanguage$pandac$IRNode* rhsIndex2548;
    org$pandalanguage$pandac$IRNode* value2550;
    panda$core$Bit $tmp2505 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_left->kind, ((panda$core$Int64) { 1040 }));
    PANDA_ASSERT($tmp2505.value);
    panda$core$Int64 $tmp2506 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_left->children);
    panda$core$Bit $tmp2507 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2506, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp2507.value);
    panda$core$Bit $tmp2508 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 73 }));
    if ($tmp2508.value) {
    {
        panda$collections$Array* $tmp2510 = (panda$collections$Array*) malloc(40);
        $tmp2510->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2510->refCount.value = 1;
        panda$collections$Array$init($tmp2510);
        args2509 = $tmp2510;
        panda$core$Object* $tmp2512 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_left->children, ((panda$core$Int64) { 1 }));
        panda$collections$Array$add$panda$collections$Array$T(args2509, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp2512)));
        panda$collections$Array$add$panda$collections$Array$T(args2509, ((panda$core$Object*) p_right));
        panda$core$Object* $tmp2513 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_left->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp2515 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp2513), &$s2514, ((panda$collections$ListView*) args2509));
        return $tmp2515;
    }
    }
    panda$core$Bit $tmp2516 = org$pandalanguage$pandac$Compiler$isAssignment$panda$core$Int64$R$panda$core$Bit(p_op);
    PANDA_ASSERT($tmp2516.value);
    org$pandalanguage$pandac$IRNode* $tmp2518 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_left);
    resolved2517 = $tmp2518;
    if (((panda$core$Bit) { resolved2517 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp2519 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self, resolved2517);
    resolved2517 = $tmp2519;
    panda$core$Int64 $tmp2520 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(resolved2517->children);
    panda$core$Bit $tmp2521 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2520, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp2521.value);
    panda$collections$Array* $tmp2523 = (panda$collections$Array*) malloc(40);
    $tmp2523->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2523->refCount.value = 1;
    panda$collections$Array$init($tmp2523);
    children2522 = $tmp2523;
    panda$core$Object* $tmp2525 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(resolved2517->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp2526 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self, ((org$pandalanguage$pandac$IRNode*) $tmp2525));
    panda$collections$Array$add$panda$collections$Array$T(children2522, ((panda$core$Object*) $tmp2526));
    panda$core$UInt64 $tmp2527 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(self->reusedValueCount, ((panda$core$UInt64) { 1 }));
    self->reusedValueCount = $tmp2527;
    baseId2528 = self->reusedValueCount;
    org$pandalanguage$pandac$IRNode* $tmp2530 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp2530->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2530->refCount.value = 1;
    panda$core$Object* $tmp2532 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children2522, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp2533 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children2522, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2530, ((panda$core$Int64) { 1027 }), ((org$pandalanguage$pandac$IRNode*) $tmp2532)->position, ((org$pandalanguage$pandac$IRNode*) $tmp2533)->type, ((panda$core$Object*) wrap_panda$core$UInt64(baseId2528)), ((panda$collections$ListView*) children2522));
    base2529 = $tmp2530;
    panda$collections$Array$clear(children2522);
    panda$core$Object* $tmp2534 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(resolved2517->children, ((panda$core$Int64) { 1 }));
    panda$collections$Array$add$panda$collections$Array$T(children2522, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp2534)));
    panda$core$UInt64 $tmp2535 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(self->reusedValueCount, ((panda$core$UInt64) { 1 }));
    self->reusedValueCount = $tmp2535;
    indexId2536 = self->reusedValueCount;
    org$pandalanguage$pandac$IRNode* $tmp2538 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp2538->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2538->refCount.value = 1;
    panda$core$Object* $tmp2540 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children2522, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp2541 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children2522, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2538, ((panda$core$Int64) { 1027 }), ((org$pandalanguage$pandac$IRNode*) $tmp2540)->position, ((org$pandalanguage$pandac$IRNode*) $tmp2541)->type, ((panda$core$Object*) wrap_panda$core$UInt64(indexId2536)), ((panda$collections$ListView*) children2522));
    index2537 = $tmp2538;
    org$pandalanguage$pandac$IRNode* $tmp2543 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp2543->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2543->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2543, ((panda$core$Int64) { 1028 }), base2529->position, base2529->type, baseId2528);
    baseRef2542 = $tmp2543;
    org$pandalanguage$pandac$IRNode* $tmp2546 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp2546->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2546->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2546, ((panda$core$Int64) { 1028 }), index2537->position, index2537->type, indexId2536);
    indexRef2545 = $tmp2546;
    org$pandalanguage$pandac$IRNode* $tmp2549 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, baseRef2542, ((panda$core$Int64) { 101 }), indexRef2545);
    rhsIndex2548 = $tmp2549;
    if (((panda$core$Bit) { rhsIndex2548 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Int64 $tmp2551 = org$pandalanguage$pandac$Compiler$removeAssignment$panda$core$Int64$R$panda$core$Int64(p_op);
    org$pandalanguage$pandac$IRNode* $tmp2552 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, rhsIndex2548, $tmp2551, p_right);
    value2550 = $tmp2552;
    if (((panda$core$Bit) { value2550 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp2555 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(rhsIndex2548->type);
    bool $tmp2554 = $tmp2555.value;
    if (!$tmp2554) goto $l2556;
    panda$core$Bit $tmp2557 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_right->type);
    $tmp2554 = $tmp2557.value;
    $l2556:;
    panda$core$Bit $tmp2558 = { $tmp2554 };
    bool $tmp2553 = $tmp2558.value;
    if (!$tmp2553) goto $l2559;
    panda$core$Bit $tmp2560 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(rhsIndex2548->type, value2550->type);
    $tmp2553 = $tmp2560.value;
    $l2559:;
    panda$core$Bit $tmp2561 = { $tmp2553 };
    if ($tmp2561.value) {
    {
        panda$collections$Array* $tmp2563 = (panda$collections$Array*) malloc(40);
        $tmp2563->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2563->refCount.value = 1;
        panda$collections$Array$init($tmp2563);
        org$pandalanguage$pandac$IRNode* $tmp2565 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, value2550, &$s2562, ((panda$collections$ListView*) $tmp2563), resolved2517->type);
        value2550 = $tmp2565;
        if (((panda$core$Bit) { value2550 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$collections$Array$clear(children2522);
    panda$collections$Array$add$panda$collections$Array$T(children2522, ((panda$core$Object*) index2537));
    panda$collections$Array$add$panda$collections$Array$T(children2522, ((panda$core$Object*) value2550));
    org$pandalanguage$pandac$IRNode* $tmp2567 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, base2529, &$s2566, ((panda$collections$ListView*) children2522));
    return $tmp2567;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_rawLeft, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_rawRight) {
    org$pandalanguage$pandac$IRNode* left2568;
    org$pandalanguage$pandac$IRNode* right2569;
    panda$core$Int64 kind2593;
    org$pandalanguage$pandac$IRNode* resolved2600;
    panda$collections$Array* children2602;
    org$pandalanguage$pandac$IRNode* resolved2609;
    panda$collections$Array* children2611;
    org$pandalanguage$pandac$ClassDecl* cl2623;
    org$pandalanguage$pandac$ClassDecl* cl2640;
    org$pandalanguage$pandac$IRNode* finalLeft2656;
    org$pandalanguage$pandac$IRNode* finalRight2659;
    panda$collections$Array* children2662;
    panda$collections$Array* children2676;
    panda$collections$Array* children2688;
    org$pandalanguage$pandac$IRNode* reusedLeft2694;
    org$pandalanguage$pandac$ClassDecl* cl2711;
    panda$collections$ListView* parameters2713;
    org$pandalanguage$pandac$Symbol* methods2715;
    org$pandalanguage$pandac$Type* type2719;
    panda$collections$Array* types2720;
    org$pandalanguage$pandac$MethodDecl* m2724;
    panda$collections$Iterator* m$Iter2729;
    org$pandalanguage$pandac$MethodDecl* m2741;
    panda$collections$Array* children2752;
    panda$collections$Array* children2781;
    panda$collections$Array* children2797;
    org$pandalanguage$pandac$Type* resultType2820;
    org$pandalanguage$pandac$IRNode* result2824;
    org$pandalanguage$pandac$IRNode* resolved2827;
    org$pandalanguage$pandac$IRNode* target2833;
    left2568 = p_rawLeft;
    right2569 = p_rawRight;
    panda$core$Bit $tmp2570 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2568->type->typeKind, ((panda$core$Int64) { 15 }));
    if ($tmp2570.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2571 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, right2569);
        right2569 = $tmp2571;
        if (((panda$core$Bit) { right2569 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Int64$nullable $tmp2572 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, left2568, right2569->type);
        if (((panda$core$Bit) { $tmp2572.nonnull }).value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2573 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, left2568, right2569->type);
            left2568 = $tmp2573;
        }
        }
    }
    }
    panda$core$Bit $tmp2575 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right2569->type->typeKind, ((panda$core$Int64) { 15 }));
    bool $tmp2574 = $tmp2575.value;
    if (!$tmp2574) goto $l2576;
    panda$core$Int64$nullable $tmp2577 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, right2569, left2568->type);
    $tmp2574 = ((panda$core$Bit) { $tmp2577.nonnull }).value;
    $l2576:;
    panda$core$Bit $tmp2578 = { $tmp2574 };
    if ($tmp2578.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2579 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, right2569, left2568->type);
        right2569 = $tmp2579;
    }
    }
    panda$core$Bit $tmp2583 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 58 }));
    bool $tmp2582 = $tmp2583.value;
    if ($tmp2582) goto $l2584;
    panda$core$Bit $tmp2585 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 59 }));
    $tmp2582 = $tmp2585.value;
    $l2584:;
    panda$core$Bit $tmp2586 = { $tmp2582 };
    bool $tmp2581 = $tmp2586.value;
    if ($tmp2581) goto $l2587;
    panda$core$Bit $tmp2588 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 60 }));
    $tmp2581 = $tmp2588.value;
    $l2587:;
    panda$core$Bit $tmp2589 = { $tmp2581 };
    bool $tmp2580 = $tmp2589.value;
    if ($tmp2580) goto $l2590;
    panda$core$Bit $tmp2591 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 61 }));
    $tmp2580 = $tmp2591.value;
    $l2590:;
    panda$core$Bit $tmp2592 = { $tmp2580 };
    if ($tmp2592.value) {
    {
        panda$core$Bit $tmp2595 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 58 }));
        bool $tmp2594 = $tmp2595.value;
        if ($tmp2594) goto $l2596;
        panda$core$Bit $tmp2597 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 60 }));
        $tmp2594 = $tmp2597.value;
        $l2596:;
        panda$core$Bit $tmp2598 = { $tmp2594 };
        if ($tmp2598.value) {
        {
            kind2593 = ((panda$core$Int64) { 1035 });
        }
        }
        else {
        {
            kind2593 = ((panda$core$Int64) { 1036 });
        }
        }
        panda$core$Bit $tmp2599 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2568->kind, ((panda$core$Int64) { 1030 }));
        if ($tmp2599.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2601 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, right2569);
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
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2605, kind2593, p_position, $tmp2607, ((panda$collections$ListView*) children2602));
            return $tmp2605;
        }
        }
        panda$core$Bit $tmp2608 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right2569->kind, ((panda$core$Int64) { 1030 }));
        if ($tmp2608.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2610 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, left2568);
            resolved2609 = $tmp2610;
            if (((panda$core$Bit) { resolved2609 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp2612 = (panda$collections$Array*) malloc(40);
            $tmp2612->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2612->refCount.value = 1;
            panda$collections$Array$init($tmp2612);
            children2611 = $tmp2612;
            panda$collections$Array$add$panda$collections$Array$T(children2611, ((panda$core$Object*) resolved2609));
            org$pandalanguage$pandac$IRNode* $tmp2614 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2614->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2614->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2616 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2614, kind2593, p_position, $tmp2616, ((panda$collections$ListView*) children2611));
            return $tmp2614;
        }
        }
    }
    }
    panda$core$Bit $tmp2618 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 60 }));
    bool $tmp2617 = $tmp2618.value;
    if ($tmp2617) goto $l2619;
    panda$core$Bit $tmp2620 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 61 }));
    $tmp2617 = $tmp2620.value;
    $l2619:;
    panda$core$Bit $tmp2621 = { $tmp2617 };
    if ($tmp2621.value) {
    {
        panda$core$Bit $tmp2622 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(left2568->type);
        if ($tmp2622.value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp2624 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, left2568->type);
            cl2623 = $tmp2624;
            if (((panda$core$Bit) { cl2623 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$Bit $tmp2625 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, cl2623);
            if ($tmp2625.value) {
            {
                panda$core$String* $tmp2627 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
                panda$core$String* $tmp2628 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2626, $tmp2627);
                panda$core$String* $tmp2630 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2628, &$s2629);
                panda$core$String* $tmp2631 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2630, ((panda$core$Object*) left2568->type));
                panda$core$String* $tmp2633 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2631, &$s2632);
                panda$core$String* $tmp2635 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2634, ((panda$core$Object*) right2569->type));
                panda$core$String* $tmp2637 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2635, &$s2636);
                panda$core$String* $tmp2638 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2633, $tmp2637);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp2638);
            }
            }
        }
        }
        panda$core$Bit $tmp2639 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(right2569->type);
        if ($tmp2639.value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp2641 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, right2569->type);
            cl2640 = $tmp2641;
            if (((panda$core$Bit) { cl2640 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$Bit $tmp2642 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, cl2640);
            if ($tmp2642.value) {
            {
                panda$core$String* $tmp2644 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
                panda$core$String* $tmp2645 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2643, $tmp2644);
                panda$core$String* $tmp2647 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2645, &$s2646);
                panda$core$String* $tmp2648 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2647, ((panda$core$Object*) left2568->type));
                panda$core$String* $tmp2650 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2648, &$s2649);
                panda$core$String* $tmp2652 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2651, ((panda$core$Object*) right2569->type));
                panda$core$String* $tmp2654 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2652, &$s2653);
                panda$core$String* $tmp2655 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2650, $tmp2654);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp2655);
            }
            }
        }
        }
        org$pandalanguage$pandac$Type* $tmp2657 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp2658 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, left2568, $tmp2657);
        finalLeft2656 = $tmp2658;
        if (((panda$core$Bit) { finalLeft2656 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$Type* $tmp2660 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp2661 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, right2569, $tmp2660);
        finalRight2659 = $tmp2661;
        if (((panda$core$Bit) { finalRight2659 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp2663 = (panda$collections$Array*) malloc(40);
        $tmp2663->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2663->refCount.value = 1;
        panda$collections$Array$init($tmp2663);
        children2662 = $tmp2663;
        panda$collections$Array$add$panda$collections$Array$T(children2662, ((panda$core$Object*) finalLeft2656));
        panda$collections$Array$add$panda$collections$Array$T(children2662, ((panda$core$Object*) finalRight2659));
        org$pandalanguage$pandac$IRNode* $tmp2665 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2665->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2665->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp2667 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2665, ((panda$core$Int64) { 1023 }), p_position, $tmp2667, ((panda$core$Object*) wrap_panda$core$Int64(p_op)), ((panda$collections$ListView*) children2662));
        return $tmp2665;
    }
    }
    panda$core$Bit $tmp2668 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 73 }));
    if ($tmp2668.value) {
    {
        panda$core$Bit $tmp2669 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2568->kind, ((panda$core$Int64) { 1040 }));
        if ($tmp2669.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2670 = org$pandalanguage$pandac$Compiler$compileIndexedAssignment$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, left2568, p_op, right2569);
            return $tmp2670;
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp2671 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, left2568);
        left2568 = $tmp2671;
        if (((panda$core$Bit) { left2568 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp2672 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, right2569, left2568->type);
        right2569 = $tmp2672;
        if (((panda$core$Bit) { right2569 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp2673 = org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, left2568);
        panda$core$Bit $tmp2674 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2673);
        if ($tmp2674.value) {
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, left2568->position, &$s2675);
            return NULL;
        }
        }
        panda$collections$Array* $tmp2677 = (panda$collections$Array*) malloc(40);
        $tmp2677->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2677->refCount.value = 1;
        panda$collections$Array$init($tmp2677);
        children2676 = $tmp2677;
        panda$collections$Array$add$panda$collections$Array$T(children2676, ((panda$core$Object*) left2568));
        panda$collections$Array$add$panda$collections$Array$T(children2676, ((panda$core$Object*) right2569));
        org$pandalanguage$pandac$IRNode* $tmp2679 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2679->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2679->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2679, ((panda$core$Int64) { 1023 }), p_position, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 73 }))), ((panda$collections$ListView*) children2676));
        return $tmp2679;
    }
    }
    panda$core$Bit $tmp2681 = org$pandalanguage$pandac$Compiler$isAssignment$panda$core$Int64$R$panda$core$Bit(p_op);
    if ($tmp2681.value) {
    {
        panda$core$Bit $tmp2682 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2568->kind, ((panda$core$Int64) { 1040 }));
        if ($tmp2682.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2683 = org$pandalanguage$pandac$Compiler$compileIndexedAssignment$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, left2568, p_op, right2569);
            return $tmp2683;
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp2684 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, left2568);
        left2568 = $tmp2684;
        if (((panda$core$Bit) { left2568 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp2685 = org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, left2568);
        panda$core$Bit $tmp2686 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2685);
        if ($tmp2686.value) {
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, left2568->position, &$s2687);
            return NULL;
        }
        }
        panda$collections$Array* $tmp2689 = (panda$collections$Array*) malloc(40);
        $tmp2689->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2689->refCount.value = 1;
        panda$collections$Array$init($tmp2689);
        children2688 = $tmp2689;
        panda$collections$Array$add$panda$collections$Array$T(children2688, ((panda$core$Object*) left2568));
        panda$core$UInt64 $tmp2691 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(self->reusedValueCount, ((panda$core$UInt64) { 1 }));
        self->reusedValueCount = $tmp2691;
        org$pandalanguage$pandac$IRNode* $tmp2692 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2692->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2692->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2692, ((panda$core$Int64) { 1027 }), left2568->position, left2568->type, ((panda$core$Object*) wrap_panda$core$UInt64(self->reusedValueCount)), ((panda$collections$ListView*) children2688));
        left2568 = $tmp2692;
        org$pandalanguage$pandac$IRNode* $tmp2695 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2695->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2695->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2695, ((panda$core$Int64) { 1028 }), left2568->position, left2568->type, self->reusedValueCount);
        reusedLeft2694 = $tmp2695;
        panda$core$Int64 $tmp2697 = org$pandalanguage$pandac$Compiler$removeAssignment$panda$core$Int64$R$panda$core$Int64(p_op);
        org$pandalanguage$pandac$IRNode* $tmp2698 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, reusedLeft2694, $tmp2697, right2569);
        right2569 = $tmp2698;
        if (((panda$core$Bit) { right2569 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp2700 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(left2568->type);
        bool $tmp2699 = $tmp2700.value;
        if (!$tmp2699) goto $l2701;
        panda$core$Bit $tmp2702 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(left2568->type, right2569->type);
        $tmp2699 = $tmp2702.value;
        $l2701:;
        panda$core$Bit $tmp2703 = { $tmp2699 };
        if ($tmp2703.value) {
        {
            panda$collections$Array* $tmp2705 = (panda$collections$Array*) malloc(40);
            $tmp2705->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2705->refCount.value = 1;
            panda$collections$Array$init($tmp2705);
            org$pandalanguage$pandac$IRNode* $tmp2707 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, right2569, &$s2704, ((panda$collections$ListView*) $tmp2705), left2568->type);
            right2569 = $tmp2707;
            if (((panda$core$Bit) { right2569 == NULL }).value) {
            {
                return NULL;
            }
            }
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp2708 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, left2568, ((panda$core$Int64) { 73 }), right2569);
        return $tmp2708;
    }
    }
    panda$core$Bit $tmp2709 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 101 }));
    if ($tmp2709.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2710 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, left2568);
        left2568 = $tmp2710;
        if (((panda$core$Bit) { left2568 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$ClassDecl* $tmp2712 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, left2568->type);
        cl2711 = $tmp2712;
        if (((panda$core$Bit) { cl2711 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$ListView* $tmp2714 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, left2568->type);
        parameters2713 = $tmp2714;
        org$pandalanguage$pandac$SymbolTable* $tmp2716 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl2711);
        org$pandalanguage$pandac$Symbol* $tmp2718 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp2716, &$s2717);
        methods2715 = $tmp2718;
        if (((panda$core$Bit) { methods2715 != NULL }).value) {
        {
            panda$collections$Array* $tmp2721 = (panda$collections$Array*) malloc(40);
            $tmp2721->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2721->refCount.value = 1;
            panda$collections$Array$init($tmp2721);
            types2720 = $tmp2721;
            panda$core$Bit $tmp2723 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(methods2715->kind, ((panda$core$Int64) { 204 }));
            if ($tmp2723.value) {
            {
                m2724 = ((org$pandalanguage$pandac$MethodDecl*) methods2715);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m2724);
                org$pandalanguage$pandac$MethodRef* $tmp2725 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                $tmp2725->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                $tmp2725->refCount.value = 1;
                org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp2725, m2724, parameters2713);
                org$pandalanguage$pandac$Type* $tmp2727 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type($tmp2725);
                panda$collections$Array$add$panda$collections$Array$T(types2720, ((panda$core$Object*) $tmp2727));
            }
            }
            else {
            {
                panda$core$Bit $tmp2728 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(methods2715->kind, ((panda$core$Int64) { 205 }));
                PANDA_ASSERT($tmp2728.value);
                {
                    ITable* $tmp2730 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) methods2715)->methods)->$class->itable;
                    while ($tmp2730->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp2730 = $tmp2730->next;
                    }
                    $fn2732 $tmp2731 = $tmp2730->methods[0];
                    panda$collections$Iterator* $tmp2733 = $tmp2731(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) methods2715)->methods));
                    m$Iter2729 = $tmp2733;
                    $l2734:;
                    ITable* $tmp2736 = m$Iter2729->$class->itable;
                    while ($tmp2736->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp2736 = $tmp2736->next;
                    }
                    $fn2738 $tmp2737 = $tmp2736->methods[0];
                    panda$core$Bit $tmp2739 = $tmp2737(m$Iter2729);
                    panda$core$Bit $tmp2740 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2739);
                    if (!$tmp2740.value) goto $l2735;
                    {
                        ITable* $tmp2742 = m$Iter2729->$class->itable;
                        while ($tmp2742->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2742 = $tmp2742->next;
                        }
                        $fn2744 $tmp2743 = $tmp2742->methods[1];
                        panda$core$Object* $tmp2745 = $tmp2743(m$Iter2729);
                        m2741 = ((org$pandalanguage$pandac$MethodDecl*) $tmp2745);
                        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m2741);
                        org$pandalanguage$pandac$MethodRef* $tmp2746 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                        $tmp2746->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                        $tmp2746->refCount.value = 1;
                        org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp2746, m2741, parameters2713);
                        org$pandalanguage$pandac$Type* $tmp2748 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type($tmp2746);
                        panda$collections$Array$add$panda$collections$Array$T(types2720, ((panda$core$Object*) $tmp2748));
                    }
                    goto $l2734;
                    $l2735:;
                }
            }
            }
            org$pandalanguage$pandac$Type* $tmp2749 = (org$pandalanguage$pandac$Type*) malloc(96);
            $tmp2749->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp2749->refCount.value = 1;
            org$pandalanguage$pandac$Type$init$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp2749, ((panda$collections$ListView*) types2720));
            type2719 = $tmp2749;
        }
        }
        else {
        {
            org$pandalanguage$pandac$Type* $tmp2751 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            type2719 = $tmp2751;
        }
        }
        panda$collections$Array* $tmp2753 = (panda$collections$Array*) malloc(40);
        $tmp2753->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2753->refCount.value = 1;
        panda$collections$Array$init($tmp2753);
        children2752 = $tmp2753;
        panda$collections$Array$add$panda$collections$Array$T(children2752, ((panda$core$Object*) left2568));
        panda$collections$Array$add$panda$collections$Array$T(children2752, ((panda$core$Object*) right2569));
        org$pandalanguage$pandac$IRNode* $tmp2755 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2755->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2755->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2755, ((panda$core$Int64) { 1040 }), p_position, type2719, ((panda$collections$ListView*) children2752));
        return $tmp2755;
    }
    }
    org$pandalanguage$pandac$Type* $tmp2757 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2758 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(left2568->type, $tmp2757);
    if ($tmp2758.value) {
    {
        org$pandalanguage$pandac$Type* $tmp2760 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp2761 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(right2569->type, $tmp2760);
        bool $tmp2759 = $tmp2761.value;
        if (!$tmp2759) goto $l2762;
        panda$core$Bit $tmp2767 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 66 }));
        bool $tmp2766 = $tmp2767.value;
        if ($tmp2766) goto $l2768;
        panda$core$Bit $tmp2769 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 68 }));
        $tmp2766 = $tmp2769.value;
        $l2768:;
        panda$core$Bit $tmp2770 = { $tmp2766 };
        bool $tmp2765 = $tmp2770.value;
        if ($tmp2765) goto $l2771;
        panda$core$Bit $tmp2772 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 70 }));
        $tmp2765 = $tmp2772.value;
        $l2771:;
        panda$core$Bit $tmp2773 = { $tmp2765 };
        bool $tmp2764 = $tmp2773.value;
        if ($tmp2764) goto $l2774;
        panda$core$Bit $tmp2775 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 58 }));
        $tmp2764 = $tmp2775.value;
        $l2774:;
        panda$core$Bit $tmp2776 = { $tmp2764 };
        bool $tmp2763 = $tmp2776.value;
        if ($tmp2763) goto $l2777;
        panda$core$Bit $tmp2778 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 59 }));
        $tmp2763 = $tmp2778.value;
        $l2777:;
        panda$core$Bit $tmp2779 = { $tmp2763 };
        $tmp2759 = $tmp2779.value;
        $l2762:;
        panda$core$Bit $tmp2780 = { $tmp2759 };
        if ($tmp2780.value) {
        {
            panda$collections$Array* $tmp2782 = (panda$collections$Array*) malloc(40);
            $tmp2782->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2782->refCount.value = 1;
            panda$collections$Array$init($tmp2782);
            children2781 = $tmp2782;
            panda$collections$Array$add$panda$collections$Array$T(children2781, ((panda$core$Object*) left2568));
            panda$collections$Array$add$panda$collections$Array$T(children2781, ((panda$core$Object*) right2569));
            org$pandalanguage$pandac$IRNode* $tmp2784 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2784->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2784->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2784, ((panda$core$Int64) { 1023 }), p_position, left2568->type, ((panda$core$Object*) wrap_panda$core$Int64(p_op)), ((panda$collections$ListView*) children2781));
            return $tmp2784;
        }
        }
        panda$core$String* $tmp2787 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
        panda$core$String* $tmp2788 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2786, $tmp2787);
        panda$core$String* $tmp2790 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2788, &$s2789);
        panda$core$String* $tmp2791 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2790, ((panda$core$Object*) left2568->type));
        panda$core$String* $tmp2793 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2791, &$s2792);
        panda$core$String* $tmp2794 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2793, ((panda$core$Object*) right2569->type));
        panda$core$String* $tmp2796 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2794, &$s2795);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp2796);
        return NULL;
    }
    }
    panda$collections$Array* $tmp2798 = (panda$collections$Array*) malloc(40);
    $tmp2798->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2798->refCount.value = 1;
    panda$collections$Array$init($tmp2798);
    children2797 = $tmp2798;
    panda$core$Bit $tmp2802 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2568->kind, ((panda$core$Int64) { 1004 }));
    bool $tmp2801 = $tmp2802.value;
    if ($tmp2801) goto $l2803;
    panda$core$Bit $tmp2804 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2568->kind, ((panda$core$Int64) { 1032 }));
    $tmp2801 = $tmp2804.value;
    $l2803:;
    panda$core$Bit $tmp2805 = { $tmp2801 };
    bool $tmp2800 = $tmp2805.value;
    if (!$tmp2800) goto $l2806;
    panda$core$Bit $tmp2808 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right2569->kind, ((panda$core$Int64) { 1004 }));
    bool $tmp2807 = $tmp2808.value;
    if ($tmp2807) goto $l2809;
    panda$core$Bit $tmp2810 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right2569->kind, ((panda$core$Int64) { 1032 }));
    $tmp2807 = $tmp2810.value;
    $l2809:;
    panda$core$Bit $tmp2811 = { $tmp2807 };
    $tmp2800 = $tmp2811.value;
    $l2806:;
    panda$core$Bit $tmp2812 = { $tmp2800 };
    if ($tmp2812.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2813 = org$pandalanguage$pandac$Compiler$foldInts$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, left2568, p_op, right2569);
        return $tmp2813;
    }
    }
    panda$core$Bit $tmp2815 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(left2568->type);
    bool $tmp2814 = $tmp2815.value;
    if (!$tmp2814) goto $l2816;
    panda$core$Int64$nullable $tmp2817 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, right2569, left2568->type);
    $tmp2814 = ((panda$core$Bit) { $tmp2817.nonnull }).value;
    $l2816:;
    panda$core$Bit $tmp2818 = { $tmp2814 };
    if ($tmp2818.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2819 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, right2569, left2568->type);
        right2569 = $tmp2819;
        PANDA_ASSERT(((panda$core$Bit) { right2569 != NULL }).value);
        panda$collections$Array$add$panda$collections$Array$T(children2797, ((panda$core$Object*) left2568));
        panda$collections$Array$add$panda$collections$Array$T(children2797, ((panda$core$Object*) right2569));
        switch (p_op.value) {
            case 58:
            case 59:
            case 63:
            case 65:
            case 62:
            case 64:
            {
                org$pandalanguage$pandac$Type* $tmp2821 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
                resultType2820 = $tmp2821;
            }
            break;
            default:
            {
                resultType2820 = left2568->type;
            }
        }
        org$pandalanguage$pandac$IRNode* $tmp2822 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2822->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2822->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2822, ((panda$core$Int64) { 1023 }), p_position, resultType2820, ((panda$core$Object*) wrap_panda$core$Int64(p_op)), ((panda$collections$ListView*) children2797));
        return $tmp2822;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children2797, ((panda$core$Object*) right2569));
    PANDA_ASSERT(self->reportErrors.value);
    self->reportErrors = ((panda$core$Bit) { false });
    panda$core$String* $tmp2825 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
    org$pandalanguage$pandac$IRNode* $tmp2826 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, left2568, $tmp2825, ((panda$collections$ListView*) children2797));
    result2824 = $tmp2826;
    self->reportErrors = ((panda$core$Bit) { true });
    if (((panda$core$Bit) { result2824 == NULL }).value) {
    {
        panda$collections$Array$clear(children2797);
        panda$collections$Array$add$panda$collections$Array$T(children2797, ((panda$core$Object*) left2568));
        org$pandalanguage$pandac$IRNode* $tmp2828 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, right2569);
        resolved2827 = $tmp2828;
        bool $tmp2829 = ((panda$core$Bit) { resolved2827 != NULL }).value;
        if (!$tmp2829) goto $l2830;
        panda$core$Bit $tmp2831 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(resolved2827->type);
        $tmp2829 = $tmp2831.value;
        $l2830:;
        panda$core$Bit $tmp2832 = { $tmp2829 };
        if ($tmp2832.value) {
        {
            panda$collections$Array$add$panda$collections$Array$T(children2797, ((panda$core$Object*) resolved2827));
            org$pandalanguage$pandac$IRNode* $tmp2834 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2834->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2834->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2836 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp2834, ((panda$core$Int64) { 1001 }), resolved2827->position, $tmp2836, resolved2827->type);
            target2833 = $tmp2834;
            panda$core$String* $tmp2837 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
            org$pandalanguage$pandac$IRNode* $tmp2838 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target2833, $tmp2837, ((panda$collections$ListView*) children2797));
            result2824 = $tmp2838;
        }
        }
    }
    }
    return result2824;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_b) {
    org$pandalanguage$pandac$IRNode* left2839;
    org$pandalanguage$pandac$IRNode* right2842;
    panda$core$Object* $tmp2840 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_b->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp2841 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2840));
    left2839 = $tmp2841;
    if (((panda$core$Bit) { left2839 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Object* $tmp2843 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_b->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp2844 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2843));
    right2842 = $tmp2844;
    if (((panda$core$Bit) { right2842 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp2845 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_b->position, left2839, ((panda$core$Int64$wrapper*) p_b->payload)->value, right2842);
    return $tmp2845;
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type) {
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp2849;
    switch (p_type->typeKind.value) {
        case 22:
        {
            panda$collections$ListView* $tmp2846 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p_type->parameter->bound);
            return $tmp2846;
        }
        break;
        case 21:
        {
            panda$core$Int64 $tmp2847 = panda$collections$Array$get_count$R$panda$core$Int64(p_type->subtypes);
            panda$core$Bit $tmp2848 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp2847, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2848.value);
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp2849, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$collections$Array* $tmp2850 = panda$collections$Array$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT(p_type->subtypes, $tmp2849);
            return ((panda$collections$ListView*) $tmp2850);
        }
        break;
        case 11:
        {
            panda$core$Object* $tmp2851 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
            panda$collections$ListView* $tmp2852 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, ((org$pandalanguage$pandac$Type*) $tmp2851));
            return $tmp2852;
        }
        break;
        default:
        {
            panda$collections$Array* $tmp2853 = (panda$collections$Array*) malloc(40);
            $tmp2853->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2853->refCount.value = 1;
            panda$collections$Array$init($tmp2853);
            return ((panda$collections$ListView*) $tmp2853);
        }
    }
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$IRNode$Q$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_target) {
    if (((panda$core$Bit) { p_target != NULL }).value) {
    {
        panda$core$Bit $tmp2855 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1001 }));
        if ($tmp2855.value) {
        {
            panda$collections$ListView* $tmp2856 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, ((org$pandalanguage$pandac$Type*) p_target->payload));
            return $tmp2856;
        }
        }
        panda$collections$ListView* $tmp2857 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p_target->type);
        return $tmp2857;
    }
    }
    panda$collections$Array* $tmp2858 = (panda$collections$Array*) malloc(40);
    $tmp2858->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2858->refCount.value = 1;
    panda$collections$Array$init($tmp2858);
    return ((panda$collections$ListView*) $tmp2858);
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compilePrefix$panda$core$Int64$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_base, org$pandalanguage$pandac$Position p_position) {
    panda$core$String* name2861;
    org$pandalanguage$pandac$ClassDecl* cl2863;
    org$pandalanguage$pandac$Symbol* s2865;
    org$pandalanguage$pandac$MethodDecl* m2868;
    panda$collections$Iterator* test$Iter2873;
    org$pandalanguage$pandac$MethodDecl* test2885;
    org$pandalanguage$pandac$MethodRef* ref2897;
    panda$collections$Array* children2901;
    org$pandalanguage$pandac$IRNode* methodRef2904;
    org$pandalanguage$pandac$Position $tmp2910;
    panda$collections$Array* args2911;
    panda$collections$Array* children2920;
    panda$collections$Array* children2930;
    org$pandalanguage$pandac$IRNode* coerced2939;
    panda$collections$Array* children2942;
    panda$core$Bit $tmp2860 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_base->type);
    if ($tmp2860.value) {
    {
        panda$core$String* $tmp2862 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
        name2861 = $tmp2862;
        org$pandalanguage$pandac$ClassDecl* $tmp2864 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_base->type);
        cl2863 = $tmp2864;
        if (((panda$core$Bit) { cl2863 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$SymbolTable* $tmp2866 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl2863);
        org$pandalanguage$pandac$Symbol* $tmp2867 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp2866, name2861);
        s2865 = $tmp2867;
        if (((panda$core$Bit) { s2865 != NULL }).value) {
        {
            m2868 = NULL;
            switch (s2865->kind.value) {
                case 204:
                {
                    m2868 = ((org$pandalanguage$pandac$MethodDecl*) s2865);
                    panda$core$Int64 $tmp2869 = panda$collections$Array$get_count$R$panda$core$Int64(m2868->parameters);
                    panda$core$Bit $tmp2870 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2869, ((panda$core$Int64) { 0 }));
                    PANDA_ASSERT($tmp2870.value);
                    panda$core$Bit $tmp2871 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(m2868->annotations);
                    panda$core$Bit $tmp2872 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2871);
                    PANDA_ASSERT($tmp2872.value);
                }
                break;
                case 205:
                {
                    {
                        ITable* $tmp2874 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s2865)->methods)->$class->itable;
                        while ($tmp2874->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp2874 = $tmp2874->next;
                        }
                        $fn2876 $tmp2875 = $tmp2874->methods[0];
                        panda$collections$Iterator* $tmp2877 = $tmp2875(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s2865)->methods));
                        test$Iter2873 = $tmp2877;
                        $l2878:;
                        ITable* $tmp2880 = test$Iter2873->$class->itable;
                        while ($tmp2880->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2880 = $tmp2880->next;
                        }
                        $fn2882 $tmp2881 = $tmp2880->methods[0];
                        panda$core$Bit $tmp2883 = $tmp2881(test$Iter2873);
                        panda$core$Bit $tmp2884 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2883);
                        if (!$tmp2884.value) goto $l2879;
                        {
                            ITable* $tmp2886 = test$Iter2873->$class->itable;
                            while ($tmp2886->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp2886 = $tmp2886->next;
                            }
                            $fn2888 $tmp2887 = $tmp2886->methods[1];
                            panda$core$Object* $tmp2889 = $tmp2887(test$Iter2873);
                            test2885 = ((org$pandalanguage$pandac$MethodDecl*) $tmp2889);
                            panda$core$Bit $tmp2891 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(test2885->annotations);
                            panda$core$Bit $tmp2892 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2891);
                            bool $tmp2890 = $tmp2892.value;
                            if (!$tmp2890) goto $l2893;
                            panda$core$Int64 $tmp2894 = panda$collections$Array$get_count$R$panda$core$Int64(test2885->parameters);
                            panda$core$Bit $tmp2895 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2894, ((panda$core$Int64) { 0 }));
                            $tmp2890 = $tmp2895.value;
                            $l2893:;
                            panda$core$Bit $tmp2896 = { $tmp2890 };
                            if ($tmp2896.value) {
                            {
                                m2868 = test2885;
                                goto $l2879;
                            }
                            }
                        }
                        goto $l2878;
                        $l2879:;
                    }
                }
                break;
                default:
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
            }
            if (((panda$core$Bit) { m2868 != NULL }).value) {
            {
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m2868);
                org$pandalanguage$pandac$MethodRef* $tmp2898 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                $tmp2898->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                $tmp2898->refCount.value = 1;
                panda$collections$ListView* $tmp2900 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$IRNode$Q$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p_base);
                org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp2898, m2868, $tmp2900);
                ref2897 = $tmp2898;
                panda$collections$Array* $tmp2902 = (panda$collections$Array*) malloc(40);
                $tmp2902->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp2902->refCount.value = 1;
                panda$collections$Array$init($tmp2902);
                children2901 = $tmp2902;
                panda$collections$Array$add$panda$collections$Array$T(children2901, ((panda$core$Object*) p_base));
                org$pandalanguage$pandac$IRNode* $tmp2905 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2905->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2905->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2907 = (org$pandalanguage$pandac$Type*) malloc(96);
                $tmp2907->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
                $tmp2907->refCount.value = 1;
                org$pandalanguage$pandac$Position$init(&$tmp2910);
                org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp2907, &$s2909, ((panda$core$Int64) { 16 }), $tmp2910, ((panda$core$Bit) { true }));
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2905, ((panda$core$Int64) { 1002 }), p_position, $tmp2907, ((panda$core$Object*) ref2897), ((panda$collections$ListView*) children2901));
                methodRef2904 = $tmp2905;
                panda$collections$Array* $tmp2912 = (panda$collections$Array*) malloc(40);
                $tmp2912->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp2912->refCount.value = 1;
                panda$collections$Array$init($tmp2912);
                args2911 = $tmp2912;
                org$pandalanguage$pandac$IRNode* $tmp2914 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, methodRef2904, ((panda$collections$ListView*) args2911));
                return $tmp2914;
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
                    org$pandalanguage$pandac$IRNode* $tmp2915 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp2915->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp2915->refCount.value = 1;
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2915, ((panda$core$Int64) { 1032 }), p_position, p_base->type, ((panda$core$UInt64$wrapper*) p_base->payload)->value);
                    return $tmp2915;
                }
                break;
                case 1032:
                {
                    org$pandalanguage$pandac$IRNode* $tmp2917 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp2917->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp2917->refCount.value = 1;
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2917, ((panda$core$Int64) { 1004 }), p_position, p_base->type, ((panda$core$UInt64$wrapper*) p_base->payload)->value);
                    return $tmp2917;
                }
                break;
                default:
                {
                    panda$core$Bit $tmp2919 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_base->type);
                    if ($tmp2919.value) {
                    {
                        panda$collections$Array* $tmp2921 = (panda$collections$Array*) malloc(40);
                        $tmp2921->$class = (panda$core$Class*) &panda$collections$Array$class;
                        $tmp2921->refCount.value = 1;
                        panda$collections$Array$init($tmp2921);
                        children2920 = $tmp2921;
                        panda$collections$Array$add$panda$collections$Array$T(children2920, ((panda$core$Object*) p_base));
                        org$pandalanguage$pandac$IRNode* $tmp2923 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                        $tmp2923->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                        $tmp2923->refCount.value = 1;
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2923, ((panda$core$Int64) { 1041 }), p_base->position, p_base->type, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 52 }))), ((panda$collections$ListView*) children2920));
                        return $tmp2923;
                    }
                    }
                }
            }
            panda$core$String* $tmp2926 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2925, ((panda$core$Object*) p_base->type));
            panda$core$String* $tmp2928 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2926, &$s2927);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_base->position, $tmp2928);
            return NULL;
        }
        break;
        case 50:
        {
            panda$core$Bit $tmp2929 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_base->type);
            if ($tmp2929.value) {
            {
                panda$collections$Array* $tmp2931 = (panda$collections$Array*) malloc(40);
                $tmp2931->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp2931->refCount.value = 1;
                panda$collections$Array$init($tmp2931);
                children2930 = $tmp2931;
                panda$collections$Array$add$panda$collections$Array$T(children2930, ((panda$core$Object*) p_base));
                org$pandalanguage$pandac$IRNode* $tmp2933 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2933->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2933->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2933, ((panda$core$Int64) { 1041 }), p_base->position, p_base->type, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 50 }))), ((panda$collections$ListView*) children2930));
                return $tmp2933;
            }
            }
            else {
            {
                panda$core$String* $tmp2936 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2935, ((org$pandalanguage$pandac$Symbol*) p_base->type)->name);
                panda$core$String* $tmp2938 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2936, &$s2937);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_base->position, $tmp2938);
                return NULL;
            }
            }
        }
        break;
        case 49:
        {
            org$pandalanguage$pandac$Type* $tmp2940 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode* $tmp2941 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_base, $tmp2940);
            coerced2939 = $tmp2941;
            if (((panda$core$Bit) { coerced2939 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp2943 = (panda$collections$Array*) malloc(40);
            $tmp2943->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2943->refCount.value = 1;
            panda$collections$Array$init($tmp2943);
            children2942 = $tmp2943;
            panda$collections$Array$add$panda$collections$Array$T(children2942, ((panda$core$Object*) coerced2939));
            org$pandalanguage$pandac$IRNode* $tmp2945 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2945->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2945->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2945, ((panda$core$Int64) { 1041 }), p_base->position, p_base->type, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 49 }))), ((panda$collections$ListView*) children2942));
            return $tmp2945;
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
    org$pandalanguage$pandac$IRNode* base2950;
    panda$core$Bit $tmp2947 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_p->kind, ((panda$core$Int64) { 112 }));
    PANDA_ASSERT($tmp2947.value);
    panda$core$Int64 $tmp2948 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_p->children);
    panda$core$Bit $tmp2949 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2948, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp2949.value);
    panda$core$Object* $tmp2951 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_p->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp2952 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2951));
    base2950 = $tmp2952;
    if (((panda$core$Bit) { base2950 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp2953 = org$pandalanguage$pandac$Compiler$compilePrefix$panda$core$Int64$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$R$org$pandalanguage$pandac$IRNode$Q(self, ((panda$core$Int64$wrapper*) p_p->payload)->value, base2950, p_p->position);
    return $tmp2953;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileCall$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_c) {
    org$pandalanguage$pandac$IRNode* m2955;
    panda$collections$Array* args2958;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2961;
    org$pandalanguage$pandac$IRNode* arg2976;
    panda$core$Bit $tmp2954 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_c->kind, ((panda$core$Int64) { 107 }));
    PANDA_ASSERT($tmp2954.value);
    panda$core$Object* $tmp2956 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_c->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp2957 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2956));
    m2955 = $tmp2957;
    if (((panda$core$Bit) { m2955 != NULL }).value) {
    {
        panda$collections$Array* $tmp2959 = (panda$collections$Array*) malloc(40);
        $tmp2959->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2959->refCount.value = 1;
        panda$collections$Array$init($tmp2959);
        args2958 = $tmp2959;
        panda$core$Int64 $tmp2962 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_c->children);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2961, ((panda$core$Int64) { 1 }), $tmp2962, ((panda$core$Bit) { false }));
        int64_t $tmp2964 = $tmp2961.min.value;
        panda$core$Int64 i2963 = { $tmp2964 };
        int64_t $tmp2966 = $tmp2961.max.value;
        bool $tmp2967 = $tmp2961.inclusive.value;
        if ($tmp2967) goto $l2974; else goto $l2975;
        $l2974:;
        if ($tmp2964 <= $tmp2966) goto $l2968; else goto $l2970;
        $l2975:;
        if ($tmp2964 < $tmp2966) goto $l2968; else goto $l2970;
        $l2968:;
        {
            panda$core$Object* $tmp2977 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_c->children, i2963);
            org$pandalanguage$pandac$IRNode* $tmp2978 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2977));
            arg2976 = $tmp2978;
            if (((panda$core$Bit) { arg2976 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(args2958, ((panda$core$Object*) arg2976));
        }
        $l2971:;
        int64_t $tmp2980 = $tmp2966 - i2963.value;
        if ($tmp2967) goto $l2981; else goto $l2982;
        $l2981:;
        if ($tmp2980 >= 1) goto $l2979; else goto $l2970;
        $l2982:;
        if ($tmp2980 > 1) goto $l2979; else goto $l2970;
        $l2979:;
        i2963.value += 1;
        goto $l2968;
        $l2970:;
        org$pandalanguage$pandac$IRNode* $tmp2985 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, m2955, ((panda$collections$ListView*) args2958));
        return $tmp2985;
    }
    }
    return NULL;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_d) {
    org$pandalanguage$pandac$IRNode* base2989;
    org$pandalanguage$pandac$ClassDecl* cl2998;
    panda$core$String* name3000;
    org$pandalanguage$pandac$ClassDecl* cl3008;
    org$pandalanguage$pandac$Symbol* s3021;
    panda$core$Bit $tmp2986 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_d->kind, ((panda$core$Int64) { 108 }));
    PANDA_ASSERT($tmp2986.value);
    panda$core$Int64 $tmp2987 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp2988 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2987, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp2988.value);
    panda$core$Object* $tmp2990 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp2991 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2990));
    base2989 = $tmp2991;
    if (((panda$core$Bit) { base2989 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp2993 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(base2989->kind, ((panda$core$Int64) { 1037 }));
    bool $tmp2992 = $tmp2993.value;
    if (!$tmp2992) goto $l2994;
    panda$core$Bit $tmp2995 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(base2989->kind, ((panda$core$Int64) { 1024 }));
    $tmp2992 = $tmp2995.value;
    $l2994:;
    panda$core$Bit $tmp2996 = { $tmp2992 };
    if ($tmp2996.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2997 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, base2989);
        base2989 = $tmp2997;
    }
    }
    if (((panda$core$Bit) { base2989 == NULL }).value) {
    {
        return NULL;
    }
    }
    switch (base2989->kind.value) {
        case 1001:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp2999 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Type*) base2989->payload));
            cl2998 = $tmp2999;
        }
        break;
        case 1037:
        {
            panda$core$String* $tmp3002 = (($fn3001) base2989->payload->$class->vtable[0])(base2989->payload);
            panda$core$String* $tmp3004 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3002, &$s3003);
            panda$core$String* $tmp3005 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3004, p_d->payload);
            panda$core$String* $tmp3007 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3005, &$s3006);
            name3000 = $tmp3007;
            org$pandalanguage$pandac$ClassDecl* $tmp3009 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, name3000);
            cl3008 = $tmp3009;
            if (((panda$core$Bit) { cl3008 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp3010 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp3010->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp3010->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp3012 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$Type* $tmp3013 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl3008);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp3010, ((panda$core$Int64) { 1001 }), p_d->position, $tmp3012, $tmp3013);
                return $tmp3010;
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp3014 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3014->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3014->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3016 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$String($tmp3014, ((panda$core$Int64) { 1037 }), p_d->position, $tmp3016, name3000);
            return $tmp3014;
        }
        break;
        case 1024:
        {
            panda$core$Object* $tmp3017 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, ((org$pandalanguage$pandac$ClassDecl*) $tmp3017));
            panda$core$Object* $tmp3018 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
            org$pandalanguage$pandac$ClassDecl* $tmp3019 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$ClassDecl*) $tmp3018)->rawSuper);
            cl2998 = $tmp3019;
        }
        break;
        default:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp3020 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, base2989->type);
            cl2998 = $tmp3020;
        }
    }
    if (((panda$core$Bit) { cl2998 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp3022 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl2998);
    org$pandalanguage$pandac$Symbol* $tmp3023 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp3022, ((panda$core$String*) p_d->payload));
    s3021 = $tmp3023;
    if (((panda$core$Bit) { s3021 == NULL }).value) {
    {
        panda$core$String* $tmp3025 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3024, ((panda$core$Object*) base2989->type));
        panda$core$String* $tmp3027 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3025, &$s3026);
        panda$core$String* $tmp3029 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3028, p_d->payload);
        panda$core$String* $tmp3031 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3029, &$s3030);
        panda$core$String* $tmp3032 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3027, $tmp3031);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_d->position, $tmp3032);
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp3033 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl2998);
    org$pandalanguage$pandac$IRNode* $tmp3034 = org$pandalanguage$pandac$Compiler$symbolRef$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q(self, p_d->position, base2989, s3021, $tmp3033);
    return $tmp3034;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIdentifier$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_i) {
    org$pandalanguage$pandac$Symbol* s3036;
    panda$core$Bit $tmp3035 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_i->kind, ((panda$core$Int64) { 106 }));
    PANDA_ASSERT($tmp3035.value);
    org$pandalanguage$pandac$Symbol* $tmp3037 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(self->symbolTable, ((panda$core$String*) p_i->payload));
    s3036 = $tmp3037;
    if (((panda$core$Bit) { s3036 == NULL }).value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp3038 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((panda$core$String*) p_i->payload));
        s3036 = ((org$pandalanguage$pandac$Symbol*) $tmp3038);
    }
    }
    if (((panda$core$Bit) { s3036 != NULL }).value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3039 = org$pandalanguage$pandac$Compiler$symbolRef$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q(self, p_i->position, NULL, s3036, self->symbolTable);
        return $tmp3039;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3040 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3040->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3040->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3042 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$String($tmp3040, ((panda$core$Int64) { 1037 }), p_i->position, $tmp3042, ((panda$core$String*) p_i->payload));
    return $tmp3040;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_t) {
    org$pandalanguage$pandac$Type* resolved3043;
    org$pandalanguage$pandac$Type* $tmp3044 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, p_t);
    org$pandalanguage$pandac$Type* $tmp3045 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, $tmp3044);
    resolved3043 = $tmp3045;
    if (((panda$core$Bit) { resolved3043 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3046 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3046->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3046->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3048 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp3046, ((panda$core$Int64) { 1001 }), p_t->position, $tmp3048, resolved3043);
    return $tmp3046;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileRange$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_r) {
    org$pandalanguage$pandac$IRNode* start3056;
    org$pandalanguage$pandac$IRNode* end3064;
    org$pandalanguage$pandac$IRNode* step3072;
    panda$collections$Array* children3079;
    org$pandalanguage$pandac$Position $tmp3087;
    panda$core$Bit $tmp3050 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_r->kind, ((panda$core$Int64) { 105 }));
    bool $tmp3049 = $tmp3050.value;
    if ($tmp3049) goto $l3051;
    panda$core$Bit $tmp3052 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_r->kind, ((panda$core$Int64) { 104 }));
    $tmp3049 = $tmp3052.value;
    $l3051:;
    panda$core$Bit $tmp3053 = { $tmp3049 };
    PANDA_ASSERT($tmp3053.value);
    panda$core$Int64 $tmp3054 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_r->children);
    panda$core$Bit $tmp3055 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3054, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp3055.value);
    panda$core$Object* $tmp3057 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp3058 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp3057)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp3058.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3059 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3059->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3059->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp3061 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3059, ((panda$core$Int64) { 1030 }), p_r->position, $tmp3061);
        start3056 = $tmp3059;
    }
    }
    else {
    {
        panda$core$Object* $tmp3062 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp3063 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3062));
        start3056 = $tmp3063;
        if (((panda$core$Bit) { start3056 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$core$Object* $tmp3065 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp3066 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp3065)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp3066.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3067 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3067->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3067->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp3069 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3067, ((panda$core$Int64) { 1030 }), p_r->position, $tmp3069);
        end3064 = $tmp3067;
    }
    }
    else {
    {
        panda$core$Object* $tmp3070 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$IRNode* $tmp3071 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3070));
        end3064 = $tmp3071;
        if (((panda$core$Bit) { end3064 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$core$Object* $tmp3073 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 2 }));
    panda$core$Bit $tmp3074 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp3073)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp3074.value) {
    {
        step3072 = NULL;
    }
    }
    else {
    {
        panda$core$Object* $tmp3075 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$IRNode* $tmp3076 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3075));
        org$pandalanguage$pandac$Type* $tmp3077 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp3078 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3076, $tmp3077);
        step3072 = $tmp3078;
        if (((panda$core$Bit) { step3072 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$collections$Array* $tmp3080 = (panda$collections$Array*) malloc(40);
    $tmp3080->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3080->refCount.value = 1;
    panda$collections$Array$init($tmp3080);
    children3079 = $tmp3080;
    panda$collections$Array$add$panda$collections$Array$T(children3079, ((panda$core$Object*) start3056));
    panda$collections$Array$add$panda$collections$Array$T(children3079, ((panda$core$Object*) end3064));
    if (((panda$core$Bit) { step3072 != NULL }).value) {
    {
        panda$collections$Array$add$panda$collections$Array$T(children3079, ((panda$core$Object*) step3072));
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3082 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3082->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3082->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3084 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp3084->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp3084->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp3087);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp3084, &$s3086, ((panda$core$Int64) { 17 }), $tmp3087, ((panda$core$Bit) { true }));
    panda$core$Bit $tmp3088 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_r->kind, ((panda$core$Int64) { 104 }));
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3082, ((panda$core$Int64) { 1031 }), p_r->position, $tmp3084, ((panda$core$Object*) wrap_panda$core$Bit($tmp3088)), ((panda$collections$ListView*) children3079));
    return $tmp3082;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$IRNode* $tmp3089 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3089->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3089->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3091 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$String($tmp3089, ((panda$core$Int64) { 1033 }), p_s->position, $tmp3091, ((panda$core$String*) p_s->payload));
    return $tmp3089;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileSelf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$Type* type3096;
    org$pandalanguage$pandac$ClassDecl* cl3097;
    panda$collections$Array* subtypes3104;
    panda$core$MutableString* name3108;
    panda$core$String* separator3112;
    panda$collections$Iterator* p$Iter3114;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* p3126;
    panda$collections$Array* pType3131;
    panda$core$String* pName3134;
    panda$core$Bit $tmp3092 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_s->kind, ((panda$core$Int64) { 114 }));
    PANDA_ASSERT($tmp3092.value);
    panda$core$Object* $tmp3093 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
    panda$core$Bit $tmp3094 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp3093)->annotations);
    if ($tmp3094.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_s->position, &$s3095);
        return NULL;
    }
    }
    panda$core$Object* $tmp3098 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
    cl3097 = ((org$pandalanguage$pandac$ClassDecl*) $tmp3098);
    ITable* $tmp3099 = ((panda$collections$CollectionView*) cl3097->parameters)->$class->itable;
    while ($tmp3099->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp3099 = $tmp3099->next;
    }
    $fn3101 $tmp3100 = $tmp3099->methods[0];
    panda$core$Int64 $tmp3102 = $tmp3100(((panda$collections$CollectionView*) cl3097->parameters));
    panda$core$Bit $tmp3103 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3102, ((panda$core$Int64) { 0 }));
    if ($tmp3103.value) {
    {
        panda$collections$Array* $tmp3105 = (panda$collections$Array*) malloc(40);
        $tmp3105->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp3105->refCount.value = 1;
        panda$collections$Array$init($tmp3105);
        subtypes3104 = $tmp3105;
        org$pandalanguage$pandac$Type* $tmp3107 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl3097);
        panda$collections$Array$add$panda$collections$Array$T(subtypes3104, ((panda$core$Object*) $tmp3107));
        panda$core$MutableString* $tmp3109 = (panda$core$MutableString*) malloc(48);
        $tmp3109->$class = (panda$core$Class*) &panda$core$MutableString$class;
        $tmp3109->refCount.value = 1;
        panda$core$MutableString$init$panda$core$String($tmp3109, ((org$pandalanguage$pandac$Symbol*) cl3097)->name);
        name3108 = $tmp3109;
        panda$core$MutableString$append$panda$core$String(name3108, &$s3111);
        separator3112 = &$s3113;
        {
            ITable* $tmp3115 = ((panda$collections$Iterable*) cl3097->parameters)->$class->itable;
            while ($tmp3115->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3115 = $tmp3115->next;
            }
            $fn3117 $tmp3116 = $tmp3115->methods[0];
            panda$collections$Iterator* $tmp3118 = $tmp3116(((panda$collections$Iterable*) cl3097->parameters));
            p$Iter3114 = $tmp3118;
            $l3119:;
            ITable* $tmp3121 = p$Iter3114->$class->itable;
            while ($tmp3121->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3121 = $tmp3121->next;
            }
            $fn3123 $tmp3122 = $tmp3121->methods[0];
            panda$core$Bit $tmp3124 = $tmp3122(p$Iter3114);
            panda$core$Bit $tmp3125 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3124);
            if (!$tmp3125.value) goto $l3120;
            {
                ITable* $tmp3127 = p$Iter3114->$class->itable;
                while ($tmp3127->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3127 = $tmp3127->next;
                }
                $fn3129 $tmp3128 = $tmp3127->methods[1];
                panda$core$Object* $tmp3130 = $tmp3128(p$Iter3114);
                p3126 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp3130);
                panda$collections$Array* $tmp3132 = (panda$collections$Array*) malloc(40);
                $tmp3132->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp3132->refCount.value = 1;
                panda$collections$Array$init($tmp3132);
                pType3131 = $tmp3132;
                panda$collections$Array$add$panda$collections$Array$T(pType3131, ((panda$core$Object*) p3126->bound));
                panda$core$String* $tmp3135 = panda$core$String$convert$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) cl3097)->name);
                panda$core$String* $tmp3137 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3135, &$s3136);
                panda$core$String* $tmp3138 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3137, ((org$pandalanguage$pandac$Symbol*) p3126)->name);
                panda$core$String* $tmp3140 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3138, &$s3139);
                pName3134 = $tmp3140;
                panda$core$MutableString$append$panda$core$String(name3108, separator3112);
                panda$core$MutableString$append$panda$core$String(name3108, pName3134);
                org$pandalanguage$pandac$Type* $tmp3141 = (org$pandalanguage$pandac$Type*) malloc(96);
                $tmp3141->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
                $tmp3141->refCount.value = 1;
                org$pandalanguage$pandac$Type$init$org$pandalanguage$pandac$ClassDecl$GenericParameter($tmp3141, p3126);
                panda$collections$Array$add$panda$collections$Array$T(subtypes3104, ((panda$core$Object*) $tmp3141));
                separator3112 = &$s3143;
            }
            goto $l3119;
            $l3120:;
        }
        panda$core$MutableString$append$panda$core$String(name3108, &$s3144);
        org$pandalanguage$pandac$Type* $tmp3145 = (org$pandalanguage$pandac$Type*) malloc(96);
        $tmp3145->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
        $tmp3145->refCount.value = 1;
        panda$core$String* $tmp3147 = panda$core$MutableString$finish$R$panda$core$String(name3108);
        org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp3145, $tmp3147, ((panda$core$Int64) { 21 }), p_s->position, ((panda$collections$ListView*) subtypes3104), ((panda$core$Bit) { true }));
        type3096 = $tmp3145;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp3148 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl3097);
        type3096 = $tmp3148;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3149 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3149->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3149->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3149, ((panda$core$Int64) { 1025 }), p_s->position, type3096);
    return $tmp3149;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileSuper$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$ClassDecl* cl3155;
    panda$core$Bit $tmp3151 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_s->kind, ((panda$core$Int64) { 115 }));
    PANDA_ASSERT($tmp3151.value);
    panda$core$Object* $tmp3152 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
    panda$core$Bit $tmp3153 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp3152)->annotations);
    if ($tmp3153.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_s->position, &$s3154);
        return NULL;
    }
    }
    panda$core$Object* $tmp3156 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
    cl3155 = ((org$pandalanguage$pandac$ClassDecl*) $tmp3156);
    PANDA_ASSERT(cl3155->resolved.value);
    org$pandalanguage$pandac$IRNode* $tmp3157 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3157->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3157->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3157, ((panda$core$Int64) { 1024 }), p_s->position, cl3155->rawSuper);
    return $tmp3157;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_c) {
    org$pandalanguage$pandac$IRNode* value3162;
    org$pandalanguage$pandac$Type* type3165;
    panda$core$Bit $tmp3159 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_c->kind, ((panda$core$Int64) { 111 }));
    PANDA_ASSERT($tmp3159.value);
    panda$core$Int64 $tmp3160 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_c->children);
    panda$core$Bit $tmp3161 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3160, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp3161.value);
    panda$core$Object* $tmp3163 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_c->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3164 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3163));
    value3162 = $tmp3164;
    if (((panda$core$Bit) { value3162 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Object* $tmp3166 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_c->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Type* $tmp3167 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, ((org$pandalanguage$pandac$ASTNode*) $tmp3166));
    org$pandalanguage$pandac$Type* $tmp3168 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, $tmp3167);
    type3165 = $tmp3168;
    if (((panda$core$Bit) { type3165 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Int64$nullable $tmp3169 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, value3162, type3165);
    if (((panda$core$Bit) { $tmp3169.nonnull }).value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3170 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, value3162, type3165);
        return $tmp3170;
    }
    }
    panda$core$Bit $tmp3171 = org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, value3162, type3165);
    if ($tmp3171.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3172 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, value3162, p_c->position, ((panda$core$Bit) { true }), type3165);
        return $tmp3172;
    }
    }
    else {
    {
        panda$core$String* $tmp3174 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3173, ((panda$core$Object*) value3162->type));
        panda$core$String* $tmp3176 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3174, &$s3175);
        panda$core$String* $tmp3178 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3177, ((panda$core$Object*) type3165));
        panda$core$String* $tmp3180 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3178, &$s3179);
        panda$core$String* $tmp3181 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3176, $tmp3180);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_c->position, $tmp3181);
        return NULL;
    }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileNull$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_n) {
    panda$core$Bit $tmp3182 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_n->kind, ((panda$core$Int64) { 117 }));
    PANDA_ASSERT($tmp3182.value);
    org$pandalanguage$pandac$IRNode* $tmp3183 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3183->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3183->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3185 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3183, ((panda$core$Int64) { 1030 }), p_n->position, $tmp3185);
    return $tmp3183;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_e) {
    org$pandalanguage$pandac$IRNode* result3190;
    switch (p_e->kind.value) {
        case 103:
        {
            org$pandalanguage$pandac$IRNode* $tmp3186 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3186;
        }
        break;
        case 116:
        {
            org$pandalanguage$pandac$IRNode* $tmp3187 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3187->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3187->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3189 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp3187, ((panda$core$Int64) { 1011 }), p_e->position, $tmp3189, ((panda$core$Bit$wrapper*) p_e->payload)->value);
            return $tmp3187;
        }
        break;
        case 107:
        {
            org$pandalanguage$pandac$IRNode* $tmp3191 = org$pandalanguage$pandac$Compiler$compileCall$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            result3190 = $tmp3191;
            bool $tmp3192 = ((panda$core$Bit) { result3190 != NULL }).value;
            if (!$tmp3192) goto $l3193;
            org$pandalanguage$pandac$Type* $tmp3194 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp3195 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(result3190->type, $tmp3194);
            $tmp3192 = $tmp3195.value;
            $l3193:;
            panda$core$Bit $tmp3196 = { $tmp3192 };
            if ($tmp3196.value) {
            {
                panda$core$Bit $tmp3197 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result3190->kind, ((panda$core$Int64) { 1005 }));
                PANDA_ASSERT($tmp3197.value);
                panda$core$String* $tmp3198 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(((org$pandalanguage$pandac$MethodRef*) result3190->payload)->value);
                panda$core$String* $tmp3200 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3198, &$s3199);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, result3190->position, $tmp3200);
                return NULL;
            }
            }
            return result3190;
        }
        break;
        case 108:
        {
            org$pandalanguage$pandac$IRNode* $tmp3201 = org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3201;
        }
        break;
        case 106:
        {
            org$pandalanguage$pandac$IRNode* $tmp3202 = org$pandalanguage$pandac$Compiler$compileIdentifier$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3202;
        }
        break;
        case 102:
        {
            org$pandalanguage$pandac$IRNode* $tmp3203 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3203->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3203->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3205 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp3203, ((panda$core$Int64) { 1004 }), p_e->position, $tmp3205, ((panda$core$UInt64$wrapper*) p_e->payload)->value);
            return $tmp3203;
        }
        break;
        case 112:
        {
            org$pandalanguage$pandac$IRNode* $tmp3206 = org$pandalanguage$pandac$Compiler$compilePrefix$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3206;
        }
        break;
        case 104:
        case 105:
        {
            org$pandalanguage$pandac$IRNode* $tmp3207 = org$pandalanguage$pandac$Compiler$compileRange$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3207;
        }
        break;
        case 113:
        {
            org$pandalanguage$pandac$IRNode* $tmp3208 = org$pandalanguage$pandac$Compiler$compileString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3208;
        }
        break;
        case 109:
        case 154:
        case 110:
        {
            org$pandalanguage$pandac$IRNode* $tmp3209 = org$pandalanguage$pandac$Compiler$compileType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3209;
        }
        break;
        case 114:
        {
            org$pandalanguage$pandac$IRNode* $tmp3210 = org$pandalanguage$pandac$Compiler$compileSelf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3210;
        }
        break;
        case 115:
        {
            org$pandalanguage$pandac$IRNode* $tmp3211 = org$pandalanguage$pandac$Compiler$compileSuper$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3211;
        }
        break;
        case 111:
        {
            org$pandalanguage$pandac$IRNode* $tmp3212 = org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3212;
        }
        break;
        case 117:
        {
            org$pandalanguage$pandac$IRNode* $tmp3213 = org$pandalanguage$pandac$Compiler$compileNull$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode(self, p_e);
            return $tmp3213;
        }
        break;
    }
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBlock$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_b) {
    org$pandalanguage$pandac$SymbolTable* symbols3215;
    panda$collections$Array* result3218;
    panda$collections$Iterator* stmt$Iter3221;
    org$pandalanguage$pandac$ASTNode* stmt3233;
    org$pandalanguage$pandac$IRNode* compiled3238;
    panda$core$Bit $tmp3214 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_b->kind, ((panda$core$Int64) { 126 }));
    PANDA_ASSERT($tmp3214.value);
    org$pandalanguage$pandac$SymbolTable* $tmp3216 = (org$pandalanguage$pandac$SymbolTable*) malloc(48);
    $tmp3216->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp3216->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp3216, self->symbolTable);
    symbols3215 = $tmp3216;
    self->symbolTable = symbols3215;
    panda$collections$Array* $tmp3219 = (panda$collections$Array*) malloc(40);
    $tmp3219->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3219->refCount.value = 1;
    panda$collections$Array$init($tmp3219);
    result3218 = $tmp3219;
    if (((panda$core$Bit) { p_b->children != NULL }).value) {
    {
        {
            ITable* $tmp3222 = ((panda$collections$Iterable*) p_b->children)->$class->itable;
            while ($tmp3222->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3222 = $tmp3222->next;
            }
            $fn3224 $tmp3223 = $tmp3222->methods[0];
            panda$collections$Iterator* $tmp3225 = $tmp3223(((panda$collections$Iterable*) p_b->children));
            stmt$Iter3221 = $tmp3225;
            $l3226:;
            ITable* $tmp3228 = stmt$Iter3221->$class->itable;
            while ($tmp3228->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3228 = $tmp3228->next;
            }
            $fn3230 $tmp3229 = $tmp3228->methods[0];
            panda$core$Bit $tmp3231 = $tmp3229(stmt$Iter3221);
            panda$core$Bit $tmp3232 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3231);
            if (!$tmp3232.value) goto $l3227;
            {
                ITable* $tmp3234 = stmt$Iter3221->$class->itable;
                while ($tmp3234->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3234 = $tmp3234->next;
                }
                $fn3236 $tmp3235 = $tmp3234->methods[1];
                panda$core$Object* $tmp3237 = $tmp3235(stmt$Iter3221);
                stmt3233 = ((org$pandalanguage$pandac$ASTNode*) $tmp3237);
                org$pandalanguage$pandac$IRNode* $tmp3239 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, stmt3233);
                compiled3238 = $tmp3239;
                if (((panda$core$Bit) { compiled3238 == NULL }).value) {
                {
                    panda$core$Object* $tmp3240 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(symbols3215->parents, ((panda$core$Int64) { 0 }));
                    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp3240);
                    return NULL;
                }
                }
                panda$core$Bit $tmp3241 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(compiled3238->kind, ((panda$core$Int64) { 1039 }));
                PANDA_ASSERT($tmp3241.value);
                panda$collections$Array$add$panda$collections$Array$T(result3218, ((panda$core$Object*) compiled3238));
            }
            goto $l3226;
            $l3227:;
        }
    }
    }
    panda$core$Object* $tmp3242 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(symbols3215->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp3242);
    org$pandalanguage$pandac$IRNode* $tmp3243 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3243->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3243->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3243, ((panda$core$Int64) { 1000 }), p_b->position, ((panda$collections$ListView*) result3218));
    return $tmp3243;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_i) {
    org$pandalanguage$pandac$IRNode* test3253;
    org$pandalanguage$pandac$IRNode* ifTrue3258;
    panda$collections$Array* children3261;
    org$pandalanguage$pandac$IRNode* ifFalse3266;
    panda$core$Bit $tmp3245 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_i->kind, ((panda$core$Int64) { 118 }));
    PANDA_ASSERT($tmp3245.value);
    panda$core$Int64 $tmp3247 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_i->children);
    panda$core$Bit $tmp3248 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3247, ((panda$core$Int64) { 2 }));
    bool $tmp3246 = $tmp3248.value;
    if ($tmp3246) goto $l3249;
    panda$core$Int64 $tmp3250 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_i->children);
    panda$core$Bit $tmp3251 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3250, ((panda$core$Int64) { 3 }));
    $tmp3246 = $tmp3251.value;
    $l3249:;
    panda$core$Bit $tmp3252 = { $tmp3246 };
    PANDA_ASSERT($tmp3252.value);
    panda$core$Object* $tmp3254 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_i->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3255 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3254));
    org$pandalanguage$pandac$Type* $tmp3256 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp3257 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3255, $tmp3256);
    test3253 = $tmp3257;
    if (((panda$core$Bit) { test3253 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Object* $tmp3259 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_i->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp3260 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3259));
    ifTrue3258 = $tmp3260;
    if (((panda$core$Bit) { ifTrue3258 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3262 = (panda$collections$Array*) malloc(40);
    $tmp3262->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3262->refCount.value = 1;
    panda$collections$Array$init($tmp3262);
    children3261 = $tmp3262;
    panda$collections$Array$add$panda$collections$Array$T(children3261, ((panda$core$Object*) test3253));
    panda$collections$Array$add$panda$collections$Array$T(children3261, ((panda$core$Object*) ifTrue3258));
    panda$core$Int64 $tmp3264 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_i->children);
    panda$core$Bit $tmp3265 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3264, ((panda$core$Int64) { 3 }));
    if ($tmp3265.value) {
    {
        panda$core$Object* $tmp3267 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_i->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$IRNode* $tmp3268 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3267));
        ifFalse3266 = $tmp3268;
        if (((panda$core$Bit) { ifFalse3266 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children3261, ((panda$core$Object*) ifFalse3266));
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3269 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3269->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3269->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3269, ((panda$core$Int64) { 1012 }), p_i->position, ((panda$collections$ListView*) children3261));
    return $tmp3269;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileRangeFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, panda$core$String* p_label, org$pandalanguage$pandac$ASTNode* p_astTarget, org$pandalanguage$pandac$IRNode* p_rawList, org$pandalanguage$pandac$ASTNode* p_body) {
    org$pandalanguage$pandac$Type* elementType3271;
    org$pandalanguage$pandac$IRNode* list3272;
    org$pandalanguage$pandac$Type* t3284;
    org$pandalanguage$pandac$Compiler$CompileTargetResult* target3317;
    org$pandalanguage$pandac$IRNode* body3319;
    panda$collections$Array* children3321;
    panda$core$Bit $tmp3275 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_astTarget->kind, ((panda$core$Int64) { 106 }));
    bool $tmp3274 = $tmp3275.value;
    if (!$tmp3274) goto $l3276;
    $tmp3274 = ((panda$core$Bit) { p_astTarget->children != NULL }).value;
    $l3276:;
    panda$core$Bit $tmp3277 = { $tmp3274 };
    bool $tmp3273 = $tmp3277.value;
    if (!$tmp3273) goto $l3278;
    panda$core$Int64 $tmp3279 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_astTarget->children);
    panda$core$Bit $tmp3280 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3279, ((panda$core$Int64) { 0 }));
    $tmp3273 = $tmp3280.value;
    $l3278:;
    panda$core$Bit $tmp3281 = { $tmp3273 };
    if ($tmp3281.value) {
    {
        panda$core$Int64 $tmp3282 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_astTarget->children);
        panda$core$Bit $tmp3283 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3282, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp3283.value);
        panda$core$Object* $tmp3285 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_astTarget->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Type* $tmp3286 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, ((org$pandalanguage$pandac$ASTNode*) $tmp3285));
        org$pandalanguage$pandac$Type* $tmp3287 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, $tmp3286);
        t3284 = $tmp3287;
        panda$core$Bit $tmp3288 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_rawList->kind, ((panda$core$Int64) { 1031 }));
        if ($tmp3288.value) {
        {
            panda$core$Int64 $tmp3289 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_rawList->children);
            panda$core$Bit $tmp3290 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3289, ((panda$core$Int64) { 2 }));
            if ($tmp3290.value) {
            {
                org$pandalanguage$pandac$Type* $tmp3291 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3284);
                org$pandalanguage$pandac$IRNode* $tmp3292 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, $tmp3291);
                list3272 = $tmp3292;
            }
            }
            else {
            {
                panda$core$Int64 $tmp3293 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_rawList->children);
                panda$core$Bit $tmp3294 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3293, ((panda$core$Int64) { 3 }));
                PANDA_ASSERT($tmp3294.value);
                org$pandalanguage$pandac$Type* $tmp3295 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$Type* $tmp3296 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3284, $tmp3295);
                org$pandalanguage$pandac$IRNode* $tmp3297 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, $tmp3296);
                list3272 = $tmp3297;
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp3298 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(p_rawList->type);
        if ($tmp3298.value) {
        {
            panda$core$Object* $tmp3299 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_rawList->type->subtypes, ((panda$core$Int64) { 2 }));
            org$pandalanguage$pandac$Type* $tmp3300 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3284, ((org$pandalanguage$pandac$Type*) $tmp3299));
            org$pandalanguage$pandac$IRNode* $tmp3301 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, $tmp3300);
            list3272 = $tmp3301;
        }
        }
        else {
        org$pandalanguage$pandac$Type* $tmp3302 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3284);
        panda$core$Int64$nullable $tmp3303 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_rawList, $tmp3302);
        if (((panda$core$Bit) { $tmp3303.nonnull }).value) {
        {
            org$pandalanguage$pandac$Type* $tmp3304 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3284);
            org$pandalanguage$pandac$IRNode* $tmp3305 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, $tmp3304);
            list3272 = $tmp3305;
        }
        }
        else {
        {
            org$pandalanguage$pandac$Type* $tmp3306 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$Type* $tmp3307 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3284, $tmp3306);
            org$pandalanguage$pandac$IRNode* $tmp3308 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, $tmp3307);
            list3272 = $tmp3308;
        }
        }
        }
        }
    }
    }
    else {
    {
        org$pandalanguage$pandac$IRNode* $tmp3309 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList);
        list3272 = $tmp3309;
    }
    }
    if (((panda$core$Bit) { list3272 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp3310 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(list3272->type->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp3310.value) {
    {
        panda$core$Object* $tmp3311 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(list3272->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp3312 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3311)->typeKind, ((panda$core$Int64) { 21 }));
        PANDA_ASSERT($tmp3312.value);
        panda$core$Object* $tmp3313 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(list3272->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3314 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$Type*) $tmp3313)->subtypes, ((panda$core$Int64) { 1 }));
        elementType3271 = ((org$pandalanguage$pandac$Type*) $tmp3314);
    }
    }
    else {
    {
        panda$core$Bit $tmp3315 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(list3272->type->typeKind, ((panda$core$Int64) { 21 }));
        PANDA_ASSERT($tmp3315.value);
        panda$core$Object* $tmp3316 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(list3272->type->subtypes, ((panda$core$Int64) { 1 }));
        elementType3271 = ((org$pandalanguage$pandac$Type*) $tmp3316);
    }
    }
    org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp3318 = org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(self, p_astTarget, ((panda$core$Int64) { 10001 }), NULL, elementType3271);
    target3317 = $tmp3318;
    if (((panda$core$Bit) { target3317 == NULL }).value) {
    {
        return NULL;
    }
    }
    PANDA_ASSERT(((panda$core$Bit) { target3317->value == NULL }).value);
    org$pandalanguage$pandac$IRNode* $tmp3320 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_body);
    body3319 = $tmp3320;
    if (((panda$core$Bit) { body3319 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3322 = (panda$collections$Array*) malloc(40);
    $tmp3322->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3322->refCount.value = 1;
    panda$collections$Array$init($tmp3322);
    children3321 = $tmp3322;
    panda$collections$Array$add$panda$collections$Array$T(children3321, ((panda$core$Object*) target3317->target));
    panda$collections$Array$add$panda$collections$Array$T(children3321, ((panda$core$Object*) list3272));
    panda$collections$Array$add$panda$collections$Array$T(children3321, ((panda$core$Object*) body3319));
    org$pandalanguage$pandac$IRNode* $tmp3324 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3324->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3324->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3324, ((panda$core$Int64) { 1029 }), p_position, ((panda$core$Object*) p_label), ((panda$collections$ListView*) children3321));
    return $tmp3324;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIteratorFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, panda$core$String* p_label, org$pandalanguage$pandac$ASTNode* p_astTarget, org$pandalanguage$pandac$IRNode* p_iterator, org$pandalanguage$pandac$ASTNode* p_body) {
    org$pandalanguage$pandac$Compiler$CompileTargetResult* target3333;
    org$pandalanguage$pandac$Variable* targetVar3337;
    panda$collections$Array* subtypes3338;
    org$pandalanguage$pandac$Type* iterType3342;
    org$pandalanguage$pandac$Variable* iter3353;
    panda$collections$Array* statements3358;
    panda$collections$Array* declChildren3361;
    panda$collections$Array* varChildren3366;
    panda$collections$Array* whileChildren3373;
    org$pandalanguage$pandac$IRNode* done3376;
    org$pandalanguage$pandac$IRNode* notCall3383;
    panda$collections$Array* valueDeclChildren3388;
    org$pandalanguage$pandac$IRNode* next3393;
    panda$collections$Array* valueVarChildren3400;
    org$pandalanguage$pandac$IRNode* block3405;
    panda$collections$Array* blockChildren3407;
    panda$core$Bit $tmp3327 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_iterator->type->typeKind, ((panda$core$Int64) { 21 }));
    bool $tmp3326 = $tmp3327.value;
    if (!$tmp3326) goto $l3328;
    panda$core$Object* $tmp3329 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_iterator->type->subtypes, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp3330 = org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp3331 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3329), $tmp3330);
    $tmp3326 = $tmp3331.value;
    $l3328:;
    panda$core$Bit $tmp3332 = { $tmp3326 };
    PANDA_ASSERT($tmp3332.value);
    panda$core$Object* $tmp3334 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_iterator->type->subtypes, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp3335 = org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(self, p_astTarget, ((panda$core$Int64) { 10001 }), NULL, ((org$pandalanguage$pandac$Type*) $tmp3334));
    target3333 = $tmp3335;
    if (((panda$core$Bit) { target3333 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp3336 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(target3333->target->kind, ((panda$core$Int64) { 1016 }));
    PANDA_ASSERT($tmp3336.value);
    targetVar3337 = ((org$pandalanguage$pandac$Variable*) target3333->target->payload);
    panda$collections$Array* $tmp3339 = (panda$collections$Array*) malloc(40);
    $tmp3339->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3339->refCount.value = 1;
    panda$collections$Array$init($tmp3339);
    subtypes3338 = $tmp3339;
    org$pandalanguage$pandac$Type* $tmp3341 = org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type();
    panda$collections$Array$add$panda$collections$Array$T(subtypes3338, ((panda$core$Object*) $tmp3341));
    panda$collections$Array$add$panda$collections$Array$T(subtypes3338, ((panda$core$Object*) target3333->target->type));
    org$pandalanguage$pandac$Type* $tmp3343 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp3343->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp3343->refCount.value = 1;
    panda$core$Object* $tmp3345 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(subtypes3338, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3346 = org$pandalanguage$pandac$Type$convert$R$panda$core$String(((org$pandalanguage$pandac$Type*) $tmp3345));
    panda$core$String* $tmp3348 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3346, &$s3347);
    panda$core$Object* $tmp3349 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(subtypes3338, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp3350 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3348, ((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp3349)));
    panda$core$String* $tmp3352 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3350, &$s3351);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp3343, $tmp3352, ((panda$core$Int64) { 21 }), p_position, ((panda$collections$ListView*) subtypes3338), ((panda$core$Bit) { true }));
    iterType3342 = $tmp3343;
    org$pandalanguage$pandac$Variable* $tmp3354 = (org$pandalanguage$pandac$Variable*) malloc(88);
    $tmp3354->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
    $tmp3354->refCount.value = 1;
    panda$core$String* $tmp3357 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) targetVar3337)->name, &$s3356);
    org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type($tmp3354, p_iterator->position, ((panda$core$Int64) { 10001 }), $tmp3357, iterType3342);
    iter3353 = $tmp3354;
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->symbolTable, ((org$pandalanguage$pandac$Symbol*) iter3353));
    panda$collections$Array* $tmp3359 = (panda$collections$Array*) malloc(40);
    $tmp3359->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3359->refCount.value = 1;
    panda$collections$Array$init($tmp3359);
    statements3358 = $tmp3359;
    panda$collections$Array* $tmp3362 = (panda$collections$Array*) malloc(40);
    $tmp3362->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3362->refCount.value = 1;
    panda$collections$Array$init($tmp3362);
    declChildren3361 = $tmp3362;
    org$pandalanguage$pandac$IRNode* $tmp3364 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3364->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3364->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3364, ((panda$core$Int64) { 1016 }), p_iterator->position, iter3353->type, iter3353);
    panda$collections$Array$add$panda$collections$Array$T(declChildren3361, ((panda$core$Object*) $tmp3364));
    panda$collections$Array$add$panda$collections$Array$T(declChildren3361, ((panda$core$Object*) p_iterator));
    panda$collections$Array* $tmp3367 = (panda$collections$Array*) malloc(40);
    $tmp3367->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3367->refCount.value = 1;
    panda$collections$Array$init($tmp3367);
    varChildren3366 = $tmp3367;
    org$pandalanguage$pandac$IRNode* $tmp3369 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3369->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3369->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3369, ((panda$core$Int64) { 1021 }), ((org$pandalanguage$pandac$Symbol*) iter3353)->position, ((panda$collections$ListView*) declChildren3361));
    panda$collections$Array$add$panda$collections$Array$T(varChildren3366, ((panda$core$Object*) $tmp3369));
    org$pandalanguage$pandac$IRNode* $tmp3371 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3371->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3371->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3371, ((panda$core$Int64) { 1018 }), ((org$pandalanguage$pandac$Symbol*) iter3353)->position, ((panda$collections$ListView*) varChildren3366));
    panda$collections$Array$add$panda$collections$Array$T(statements3358, ((panda$core$Object*) $tmp3371));
    panda$collections$Array* $tmp3374 = (panda$collections$Array*) malloc(40);
    $tmp3374->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3374->refCount.value = 1;
    panda$collections$Array$init($tmp3374);
    whileChildren3373 = $tmp3374;
    org$pandalanguage$pandac$IRNode* $tmp3377 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3377->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3377->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3377, ((panda$core$Int64) { 1016 }), ((org$pandalanguage$pandac$Symbol*) iter3353)->position, iter3353->type, iter3353);
    panda$collections$Array* $tmp3380 = (panda$collections$Array*) malloc(40);
    $tmp3380->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3380->refCount.value = 1;
    panda$collections$Array$init($tmp3380);
    org$pandalanguage$pandac$IRNode* $tmp3382 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3377, &$s3379, ((panda$collections$ListView*) $tmp3380), NULL);
    done3376 = $tmp3382;
    if (((panda$core$Bit) { done3376 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3385 = (panda$collections$Array*) malloc(40);
    $tmp3385->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3385->refCount.value = 1;
    panda$collections$Array$init($tmp3385);
    org$pandalanguage$pandac$IRNode* $tmp3387 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, done3376, &$s3384, ((panda$collections$ListView*) $tmp3385), NULL);
    notCall3383 = $tmp3387;
    if (((panda$core$Bit) { notCall3383 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(whileChildren3373, ((panda$core$Object*) notCall3383));
    panda$collections$Array* $tmp3389 = (panda$collections$Array*) malloc(40);
    $tmp3389->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3389->refCount.value = 1;
    panda$collections$Array$init($tmp3389);
    valueDeclChildren3388 = $tmp3389;
    org$pandalanguage$pandac$IRNode* $tmp3391 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3391->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3391->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3391, ((panda$core$Int64) { 1016 }), p_iterator->position, targetVar3337->type, targetVar3337);
    panda$collections$Array$add$panda$collections$Array$T(valueDeclChildren3388, ((panda$core$Object*) $tmp3391));
    org$pandalanguage$pandac$IRNode* $tmp3394 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3394->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3394->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3394, ((panda$core$Int64) { 1016 }), p_iterator->position, iter3353->type, iter3353);
    panda$collections$Array* $tmp3397 = (panda$collections$Array*) malloc(40);
    $tmp3397->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3397->refCount.value = 1;
    panda$collections$Array$init($tmp3397);
    org$pandalanguage$pandac$IRNode* $tmp3399 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3394, &$s3396, ((panda$collections$ListView*) $tmp3397), NULL);
    next3393 = $tmp3399;
    PANDA_ASSERT(((panda$core$Bit) { next3393 != NULL }).value);
    panda$collections$Array$add$panda$collections$Array$T(valueDeclChildren3388, ((panda$core$Object*) next3393));
    panda$collections$Array* $tmp3401 = (panda$collections$Array*) malloc(40);
    $tmp3401->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3401->refCount.value = 1;
    panda$collections$Array$init($tmp3401);
    valueVarChildren3400 = $tmp3401;
    org$pandalanguage$pandac$IRNode* $tmp3403 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3403->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3403->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3403, ((panda$core$Int64) { 1021 }), p_iterator->position, ((panda$collections$ListView*) valueDeclChildren3388));
    panda$collections$Array$add$panda$collections$Array$T(valueVarChildren3400, ((panda$core$Object*) $tmp3403));
    org$pandalanguage$pandac$IRNode* $tmp3406 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_body);
    block3405 = $tmp3406;
    if (((panda$core$Bit) { block3405 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3408 = (panda$collections$Array*) malloc(40);
    $tmp3408->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3408->refCount.value = 1;
    panda$collections$Array$init($tmp3408);
    blockChildren3407 = $tmp3408;
    org$pandalanguage$pandac$IRNode* $tmp3410 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3410->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3410->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3410, ((panda$core$Int64) { 1018 }), p_iterator->position, ((panda$collections$ListView*) valueVarChildren3400));
    panda$collections$Array$add$panda$collections$Array$T(blockChildren3407, ((panda$core$Object*) $tmp3410));
    panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(blockChildren3407, ((panda$collections$CollectionView*) block3405->children));
    org$pandalanguage$pandac$IRNode* $tmp3412 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3412->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3412->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3412, ((panda$core$Int64) { 1000 }), block3405->position, ((panda$collections$ListView*) blockChildren3407));
    block3405 = $tmp3412;
    panda$collections$Array$add$panda$collections$Array$T(whileChildren3373, ((panda$core$Object*) block3405));
    org$pandalanguage$pandac$IRNode* $tmp3414 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3414->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3414->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3414, ((panda$core$Int64) { 1013 }), p_iterator->position, ((panda$core$Object*) p_label), ((panda$collections$ListView*) whileChildren3373));
    panda$collections$Array$add$panda$collections$Array$T(statements3358, ((panda$core$Object*) $tmp3414));
    org$pandalanguage$pandac$IRNode* $tmp3416 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3416->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3416->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3416, ((panda$core$Int64) { 1000 }), p_iterator->position, ((panda$collections$ListView*) statements3358));
    return $tmp3416;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileFor$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_f) {
    org$pandalanguage$pandac$IRNode* list3421;
    org$pandalanguage$pandac$SymbolTable* symbols3424;
    org$pandalanguage$pandac$IRNode* result3427;
    panda$core$Bit found3441;
    panda$collections$Iterator* intf$Iter3442;
    org$pandalanguage$pandac$Type* intf3455;
    org$pandalanguage$pandac$IRNode* iterator3467;
    org$pandalanguage$pandac$IRNode* iterable3479;
    org$pandalanguage$pandac$IRNode* iterator3481;
    panda$core$Bit $tmp3418 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_f->kind, ((panda$core$Int64) { 119 }));
    PANDA_ASSERT($tmp3418.value);
    panda$core$Int64 $tmp3419 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_f->children);
    panda$core$Bit $tmp3420 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3419, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp3420.value);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loops, ((panda$core$Object*) ((panda$core$String*) p_f->payload)));
    panda$core$Object* $tmp3422 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp3423 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3422));
    list3421 = $tmp3423;
    if (((panda$core$Bit) { list3421 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp3425 = (org$pandalanguage$pandac$SymbolTable*) malloc(48);
    $tmp3425->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp3425->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp3425, self->symbolTable);
    symbols3424 = $tmp3425;
    self->symbolTable = symbols3424;
    panda$core$Bit $tmp3430 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(list3421->kind, ((panda$core$Int64) { 1031 }));
    bool $tmp3429 = $tmp3430.value;
    if ($tmp3429) goto $l3431;
    panda$core$Bit $tmp3432 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(list3421->type);
    $tmp3429 = $tmp3432.value;
    $l3431:;
    panda$core$Bit $tmp3433 = { $tmp3429 };
    bool $tmp3428 = $tmp3433.value;
    if ($tmp3428) goto $l3434;
    panda$core$Bit $tmp3435 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(list3421->type);
    $tmp3428 = $tmp3435.value;
    $l3434:;
    panda$core$Bit $tmp3436 = { $tmp3428 };
    if ($tmp3436.value) {
    {
        panda$core$Object* $tmp3437 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3438 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$IRNode* $tmp3439 = org$pandalanguage$pandac$Compiler$compileRangeFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->position, ((panda$core$String*) p_f->payload), ((org$pandalanguage$pandac$ASTNode*) $tmp3437), list3421, ((org$pandalanguage$pandac$ASTNode*) $tmp3438));
        result3427 = $tmp3439;
    }
    }
    else {
    {
        org$pandalanguage$pandac$IRNode* $tmp3440 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, list3421);
        list3421 = $tmp3440;
        if (((panda$core$Bit) { list3421 == NULL }).value) {
        {
            return NULL;
        }
        }
        found3441 = ((panda$core$Bit) { false });
        {
            panda$collections$Set* $tmp3443 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self, list3421->type);
            ITable* $tmp3444 = ((panda$collections$Iterable*) $tmp3443)->$class->itable;
            while ($tmp3444->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3444 = $tmp3444->next;
            }
            $fn3446 $tmp3445 = $tmp3444->methods[0];
            panda$collections$Iterator* $tmp3447 = $tmp3445(((panda$collections$Iterable*) $tmp3443));
            intf$Iter3442 = $tmp3447;
            $l3448:;
            ITable* $tmp3450 = intf$Iter3442->$class->itable;
            while ($tmp3450->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3450 = $tmp3450->next;
            }
            $fn3452 $tmp3451 = $tmp3450->methods[0];
            panda$core$Bit $tmp3453 = $tmp3451(intf$Iter3442);
            panda$core$Bit $tmp3454 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3453);
            if (!$tmp3454.value) goto $l3449;
            {
                ITable* $tmp3456 = intf$Iter3442->$class->itable;
                while ($tmp3456->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3456 = $tmp3456->next;
                }
                $fn3458 $tmp3457 = $tmp3456->methods[1];
                panda$core$Object* $tmp3459 = $tmp3457(intf$Iter3442);
                intf3455 = ((org$pandalanguage$pandac$Type*) $tmp3459);
                panda$core$Bit $tmp3461 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(intf3455->typeKind, ((panda$core$Int64) { 21 }));
                bool $tmp3460 = $tmp3461.value;
                if (!$tmp3460) goto $l3462;
                panda$core$Object* $tmp3463 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(intf3455->subtypes, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp3464 = org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp3465 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3463), $tmp3464);
                $tmp3460 = $tmp3465.value;
                $l3462:;
                panda$core$Bit $tmp3466 = { $tmp3460 };
                if ($tmp3466.value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp3468 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, list3421, intf3455);
                    iterator3467 = $tmp3468;
                    panda$core$Object* $tmp3469 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
                    panda$core$Object* $tmp3470 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 2 }));
                    org$pandalanguage$pandac$IRNode* $tmp3471 = org$pandalanguage$pandac$Compiler$compileIteratorFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->position, ((panda$core$String*) p_f->payload), ((org$pandalanguage$pandac$ASTNode*) $tmp3469), iterator3467, ((org$pandalanguage$pandac$ASTNode*) $tmp3470));
                    result3427 = $tmp3471;
                    found3441 = ((panda$core$Bit) { true });
                    goto $l3449;
                }
                }
                panda$core$Bit $tmp3473 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(intf3455->typeKind, ((panda$core$Int64) { 21 }));
                bool $tmp3472 = $tmp3473.value;
                if (!$tmp3472) goto $l3474;
                panda$core$Object* $tmp3475 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(intf3455->subtypes, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp3476 = org$pandalanguage$pandac$Type$Iterable$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp3477 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3475), $tmp3476);
                $tmp3472 = $tmp3477.value;
                $l3474:;
                panda$core$Bit $tmp3478 = { $tmp3472 };
                if ($tmp3478.value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp3480 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, list3421, intf3455);
                    iterable3479 = $tmp3480;
                    panda$collections$Array* $tmp3483 = (panda$collections$Array*) malloc(40);
                    $tmp3483->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp3483->refCount.value = 1;
                    panda$collections$Array$init($tmp3483);
                    org$pandalanguage$pandac$IRNode* $tmp3485 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, iterable3479, &$s3482, ((panda$collections$ListView*) $tmp3483));
                    iterator3481 = $tmp3485;
                    panda$core$Object* $tmp3486 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
                    panda$core$Object* $tmp3487 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 2 }));
                    org$pandalanguage$pandac$IRNode* $tmp3488 = org$pandalanguage$pandac$Compiler$compileIteratorFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->position, ((panda$core$String*) p_f->payload), ((org$pandalanguage$pandac$ASTNode*) $tmp3486), iterator3481, ((org$pandalanguage$pandac$ASTNode*) $tmp3487));
                    result3427 = $tmp3488;
                    found3441 = ((panda$core$Bit) { true });
                    goto $l3449;
                }
                }
            }
            goto $l3448;
            $l3449:;
        }
        panda$core$Bit $tmp3489 = panda$core$Bit$$NOT$R$panda$core$Bit(found3441);
        if ($tmp3489.value) {
        {
            panda$core$String* $tmp3491 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3490, ((panda$core$Object*) list3421->type));
            panda$core$String* $tmp3493 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3491, &$s3492);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, list3421->position, $tmp3493);
            return NULL;
        }
        }
    }
    }
    panda$core$Object* $tmp3494 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(symbols3424->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp3494);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
    return result3427;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileWhile$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_w) {
    org$pandalanguage$pandac$IRNode* test3498;
    org$pandalanguage$pandac$IRNode* stmt3503;
    panda$collections$Array* children3506;
    panda$core$Bit $tmp3495 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_w->kind, ((panda$core$Int64) { 121 }));
    PANDA_ASSERT($tmp3495.value);
    panda$core$Int64 $tmp3496 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Bit $tmp3497 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3496, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp3497.value);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loops, ((panda$core$Object*) ((panda$core$String*) p_w->payload)));
    panda$core$Object* $tmp3499 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3500 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3499));
    org$pandalanguage$pandac$Type* $tmp3501 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp3502 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3500, $tmp3501);
    test3498 = $tmp3502;
    if (((panda$core$Bit) { test3498 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$core$Object* $tmp3504 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp3505 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3504));
    stmt3503 = $tmp3505;
    if (((panda$core$Bit) { stmt3503 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$collections$Array* $tmp3507 = (panda$collections$Array*) malloc(40);
    $tmp3507->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3507->refCount.value = 1;
    panda$collections$Array$init$panda$core$Int64($tmp3507, ((panda$core$Int64) { 2 }));
    children3506 = $tmp3507;
    panda$collections$Array$add$panda$collections$Array$T(children3506, ((panda$core$Object*) test3498));
    panda$collections$Array$add$panda$collections$Array$T(children3506, ((panda$core$Object*) stmt3503));
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
    org$pandalanguage$pandac$IRNode* $tmp3509 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3509->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3509->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3509, ((panda$core$Int64) { 1013 }), p_w->position, p_w->payload, ((panda$collections$ListView*) children3506));
    return $tmp3509;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileDo$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_d) {
    org$pandalanguage$pandac$IRNode* stmt3514;
    org$pandalanguage$pandac$IRNode* test3517;
    panda$collections$Array* children3522;
    panda$core$Bit $tmp3511 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_d->kind, ((panda$core$Int64) { 120 }));
    PANDA_ASSERT($tmp3511.value);
    panda$core$Int64 $tmp3512 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp3513 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3512, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp3513.value);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loops, ((panda$core$Object*) ((panda$core$String*) p_d->payload)));
    panda$core$Object* $tmp3515 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3516 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3515));
    stmt3514 = $tmp3516;
    if (((panda$core$Bit) { stmt3514 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$core$Object* $tmp3518 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp3519 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3518));
    org$pandalanguage$pandac$Type* $tmp3520 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp3521 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3519, $tmp3520);
    test3517 = $tmp3521;
    if (((panda$core$Bit) { test3517 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$collections$Array* $tmp3523 = (panda$collections$Array*) malloc(40);
    $tmp3523->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3523->refCount.value = 1;
    panda$collections$Array$init$panda$core$Int64($tmp3523, ((panda$core$Int64) { 2 }));
    children3522 = $tmp3523;
    panda$collections$Array$add$panda$collections$Array$T(children3522, ((panda$core$Object*) stmt3514));
    panda$collections$Array$add$panda$collections$Array$T(children3522, ((panda$core$Object*) test3517));
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
    org$pandalanguage$pandac$IRNode* $tmp3525 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3525->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3525->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3525, ((panda$core$Int64) { 1014 }), p_d->position, p_d->payload, ((panda$collections$ListView*) children3522));
    return $tmp3525;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileLoop$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_l) {
    org$pandalanguage$pandac$IRNode* stmt3530;
    panda$collections$Array* children3533;
    panda$core$Bit $tmp3527 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_l->kind, ((panda$core$Int64) { 122 }));
    PANDA_ASSERT($tmp3527.value);
    panda$core$Int64 $tmp3528 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_l->children);
    panda$core$Bit $tmp3529 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3528, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3529.value);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loops, ((panda$core$Object*) ((panda$core$String*) p_l->payload)));
    panda$core$Object* $tmp3531 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_l->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3532 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3531));
    stmt3530 = $tmp3532;
    if (((panda$core$Bit) { stmt3530 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$collections$Array* $tmp3534 = (panda$collections$Array*) malloc(40);
    $tmp3534->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3534->refCount.value = 1;
    panda$collections$Array$init$panda$core$Int64($tmp3534, ((panda$core$Int64) { 1 }));
    children3533 = $tmp3534;
    panda$collections$Array$add$panda$collections$Array$T(children3533, ((panda$core$Object*) stmt3530));
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
    org$pandalanguage$pandac$IRNode* $tmp3536 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3536->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3536->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3536, ((panda$core$Int64) { 1015 }), p_l->position, p_l->payload, ((panda$collections$ListView*) children3533));
    return $tmp3536;
}
org$pandalanguage$pandac$Compiler$CompileTargetResult* org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_t, panda$core$Int64 p_kind, org$pandalanguage$pandac$IRNode* p_rawValue, org$pandalanguage$pandac$Type* p_valueType) {
    org$pandalanguage$pandac$IRNode* value3538;
    org$pandalanguage$pandac$Type* type3542;
    org$pandalanguage$pandac$Variable* v3558;
    value3538 = p_rawValue;
    bool $tmp3539 = ((panda$core$Bit) { value3538 == NULL }).value;
    if ($tmp3539) goto $l3540;
    $tmp3539 = ((panda$core$Bit) { p_valueType == NULL }).value;
    $l3540:;
    panda$core$Bit $tmp3541 = { $tmp3539 };
    PANDA_ASSERT($tmp3541.value);
    switch (p_t->kind.value) {
        case 106:
        {
            bool $tmp3543 = ((panda$core$Bit) { p_t->children != NULL }).value;
            if (!$tmp3543) goto $l3544;
            panda$core$Int64 $tmp3545 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_t->children);
            panda$core$Bit $tmp3546 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp3545, ((panda$core$Int64) { 0 }));
            $tmp3543 = $tmp3546.value;
            $l3544:;
            panda$core$Bit $tmp3547 = { $tmp3543 };
            if ($tmp3547.value) {
            {
                panda$core$Int64 $tmp3548 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_t->children);
                panda$core$Bit $tmp3549 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3548, ((panda$core$Int64) { 1 }));
                PANDA_ASSERT($tmp3549.value);
                panda$core$Object* $tmp3550 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp3551 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, ((org$pandalanguage$pandac$ASTNode*) $tmp3550));
                org$pandalanguage$pandac$Type* $tmp3552 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, $tmp3551);
                type3542 = $tmp3552;
            }
            }
            else {
            if (((panda$core$Bit) { value3538 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp3553 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, value3538);
                value3538 = $tmp3553;
                if (((panda$core$Bit) { value3538 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$Type* $tmp3554 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, value3538);
                type3542 = $tmp3554;
            }
            }
            else {
            if (((panda$core$Bit) { p_valueType != NULL }).value) {
            {
                type3542 = p_valueType;
            }
            }
            else {
            {
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_t->position, &$s3555);
                return NULL;
            }
            }
            }
            }
            if (((panda$core$Bit) { value3538 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp3556 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, value3538, type3542);
                value3538 = $tmp3556;
                if (((panda$core$Bit) { value3538 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$core$Bit $tmp3557 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(value3538->type, type3542);
                PANDA_ASSERT($tmp3557.value);
            }
            }
            org$pandalanguage$pandac$Variable* $tmp3559 = (org$pandalanguage$pandac$Variable*) malloc(88);
            $tmp3559->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
            $tmp3559->refCount.value = 1;
            org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type($tmp3559, p_t->position, p_kind, ((panda$core$String*) p_t->payload), type3542);
            v3558 = $tmp3559;
            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->symbolTable, ((org$pandalanguage$pandac$Symbol*) v3558));
            org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp3561 = (org$pandalanguage$pandac$Compiler$CompileTargetResult*) malloc(32);
            $tmp3561->$class = (panda$core$Class*) &org$pandalanguage$pandac$Compiler$CompileTargetResult$class;
            $tmp3561->refCount.value = 1;
            org$pandalanguage$pandac$IRNode* $tmp3563 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3563->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3563->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3563, ((panda$core$Int64) { 1016 }), ((org$pandalanguage$pandac$Symbol*) v3558)->position, v3558->type, v3558);
            org$pandalanguage$pandac$Compiler$CompileTargetResult$init$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q($tmp3561, $tmp3563, value3538);
            return $tmp3561;
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
    org$pandalanguage$pandac$IRNode* value3573;
    org$pandalanguage$pandac$Compiler$CompileTargetResult* target3578;
    panda$collections$Array* children3581;
    org$pandalanguage$pandac$Variable* v3585;
    panda$core$Bit $tmp3565 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_d->kind, ((panda$core$Int64) { 129 }));
    PANDA_ASSERT($tmp3565.value);
    panda$core$Int64 $tmp3567 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp3568 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3567, ((panda$core$Int64) { 1 }));
    bool $tmp3566 = $tmp3568.value;
    if ($tmp3566) goto $l3569;
    panda$core$Int64 $tmp3570 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp3571 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3570, ((panda$core$Int64) { 2 }));
    $tmp3566 = $tmp3571.value;
    $l3569:;
    panda$core$Bit $tmp3572 = { $tmp3566 };
    PANDA_ASSERT($tmp3572.value);
    panda$core$Int64 $tmp3574 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp3575 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3574, ((panda$core$Int64) { 2 }));
    if ($tmp3575.value) {
    {
        panda$core$Object* $tmp3576 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$IRNode* $tmp3577 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3576));
        value3573 = $tmp3577;
        if (((panda$core$Bit) { value3573 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    else {
    {
        value3573 = NULL;
    }
    }
    panda$core$Object* $tmp3579 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp3580 = org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3579), p_varKind, value3573, NULL);
    target3578 = $tmp3580;
    if (((panda$core$Bit) { target3578 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3582 = (panda$collections$Array*) malloc(40);
    $tmp3582->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3582->refCount.value = 1;
    panda$collections$Array$init($tmp3582);
    children3581 = $tmp3582;
    panda$collections$Array$add$panda$collections$Array$T(children3581, ((panda$core$Object*) target3578->target));
    if (((panda$core$Bit) { target3578->value != NULL }).value) {
    {
        panda$core$Bit $tmp3584 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(target3578->target->kind, ((panda$core$Int64) { 1016 }));
        PANDA_ASSERT($tmp3584.value);
        v3585 = ((org$pandalanguage$pandac$Variable*) target3578->target->payload);
        v3585->initialValue = target3578->value;
        panda$collections$Array$add$panda$collections$Array$T(children3581, ((panda$core$Object*) target3578->value));
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3586 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3586->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3586->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3586, ((panda$core$Int64) { 1021 }), p_d->position, ((panda$collections$ListView*) children3581));
    return $tmp3586;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBreak$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_b) {
    panda$core$Bit found3589;
    panda$collections$Iterator* label$Iter3590;
    panda$core$String* label3602;
    panda$core$Bit $tmp3588 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_b->kind, ((panda$core$Int64) { 134 }));
    PANDA_ASSERT($tmp3588.value);
    if (((panda$core$Bit) { p_b->payload != NULL }).value) {
    {
        found3589 = ((panda$core$Bit) { false });
        {
            ITable* $tmp3591 = ((panda$collections$Iterable*) self->loops)->$class->itable;
            while ($tmp3591->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3591 = $tmp3591->next;
            }
            $fn3593 $tmp3592 = $tmp3591->methods[0];
            panda$collections$Iterator* $tmp3594 = $tmp3592(((panda$collections$Iterable*) self->loops));
            label$Iter3590 = $tmp3594;
            $l3595:;
            ITable* $tmp3597 = label$Iter3590->$class->itable;
            while ($tmp3597->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3597 = $tmp3597->next;
            }
            $fn3599 $tmp3598 = $tmp3597->methods[0];
            panda$core$Bit $tmp3600 = $tmp3598(label$Iter3590);
            panda$core$Bit $tmp3601 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3600);
            if (!$tmp3601.value) goto $l3596;
            {
                ITable* $tmp3603 = label$Iter3590->$class->itable;
                while ($tmp3603->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3603 = $tmp3603->next;
                }
                $fn3605 $tmp3604 = $tmp3603->methods[1];
                panda$core$Object* $tmp3606 = $tmp3604(label$Iter3590);
                label3602 = ((panda$core$String*) $tmp3606);
                bool $tmp3607 = ((panda$core$Bit) { label3602 != NULL }).value;
                if (!$tmp3607) goto $l3608;
                panda$core$Bit $tmp3609 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(label3602, ((panda$core$String*) p_b->payload));
                $tmp3607 = $tmp3609.value;
                $l3608:;
                panda$core$Bit $tmp3610 = { $tmp3607 };
                if ($tmp3610.value) {
                {
                    found3589 = ((panda$core$Bit) { true });
                    goto $l3596;
                }
                }
            }
            goto $l3595;
            $l3596:;
        }
        panda$core$Bit $tmp3611 = panda$core$Bit$$NOT$R$panda$core$Bit(found3589);
        if ($tmp3611.value) {
        {
            panda$core$String* $tmp3613 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3612, p_b->payload);
            panda$core$String* $tmp3615 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3613, &$s3614);
            panda$core$String* $tmp3617 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3616, p_b->payload);
            panda$core$String* $tmp3619 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3617, &$s3618);
            panda$core$String* $tmp3620 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3615, $tmp3619);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_b->position, $tmp3620);
        }
        }
    }
    }
    else {
    panda$core$Int64 $tmp3621 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loops);
    panda$core$Bit $tmp3622 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3621, ((panda$core$Int64) { 0 }));
    if ($tmp3622.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_b->position, &$s3623);
    }
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3624 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3624->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3624->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp3624, ((panda$core$Int64) { 1006 }), p_b->position, ((panda$core$String*) p_b->payload));
    return $tmp3624;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileContinue$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_c) {
    panda$core$Bit found3627;
    panda$collections$Iterator* label$Iter3628;
    panda$core$String* label3640;
    panda$core$Bit $tmp3626 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_c->kind, ((panda$core$Int64) { 135 }));
    PANDA_ASSERT($tmp3626.value);
    if (((panda$core$Bit) { p_c->payload != NULL }).value) {
    {
        found3627 = ((panda$core$Bit) { false });
        {
            ITable* $tmp3629 = ((panda$collections$Iterable*) self->loops)->$class->itable;
            while ($tmp3629->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3629 = $tmp3629->next;
            }
            $fn3631 $tmp3630 = $tmp3629->methods[0];
            panda$collections$Iterator* $tmp3632 = $tmp3630(((panda$collections$Iterable*) self->loops));
            label$Iter3628 = $tmp3632;
            $l3633:;
            ITable* $tmp3635 = label$Iter3628->$class->itable;
            while ($tmp3635->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3635 = $tmp3635->next;
            }
            $fn3637 $tmp3636 = $tmp3635->methods[0];
            panda$core$Bit $tmp3638 = $tmp3636(label$Iter3628);
            panda$core$Bit $tmp3639 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3638);
            if (!$tmp3639.value) goto $l3634;
            {
                ITable* $tmp3641 = label$Iter3628->$class->itable;
                while ($tmp3641->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3641 = $tmp3641->next;
                }
                $fn3643 $tmp3642 = $tmp3641->methods[1];
                panda$core$Object* $tmp3644 = $tmp3642(label$Iter3628);
                label3640 = ((panda$core$String*) $tmp3644);
                bool $tmp3645 = ((panda$core$Bit) { label3640 != NULL }).value;
                if (!$tmp3645) goto $l3646;
                panda$core$Bit $tmp3647 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(label3640, ((panda$core$String*) p_c->payload));
                $tmp3645 = $tmp3647.value;
                $l3646:;
                panda$core$Bit $tmp3648 = { $tmp3645 };
                if ($tmp3648.value) {
                {
                    found3627 = ((panda$core$Bit) { true });
                    goto $l3634;
                }
                }
            }
            goto $l3633;
            $l3634:;
        }
        panda$core$Bit $tmp3649 = panda$core$Bit$$NOT$R$panda$core$Bit(found3627);
        if ($tmp3649.value) {
        {
            panda$core$String* $tmp3651 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3650, p_c->payload);
            panda$core$String* $tmp3653 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3651, &$s3652);
            panda$core$String* $tmp3655 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3654, p_c->payload);
            panda$core$String* $tmp3657 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3655, &$s3656);
            panda$core$String* $tmp3658 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3653, $tmp3657);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_c->position, $tmp3658);
        }
        }
    }
    }
    else {
    panda$core$Int64 $tmp3659 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loops);
    panda$core$Bit $tmp3660 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3659, ((panda$core$Int64) { 0 }));
    if ($tmp3660.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_c->position, &$s3661);
    }
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3662 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3662->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3662->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp3662, ((panda$core$Int64) { 1007 }), p_c->position, ((panda$core$String*) p_c->payload));
    return $tmp3662;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileReturn$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_r) {
    org$pandalanguage$pandac$IRNode* value3676;
    panda$collections$Array* children3681;
    panda$core$Bit $tmp3664 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_r->kind, ((panda$core$Int64) { 136 }));
    PANDA_ASSERT($tmp3664.value);
    bool $tmp3665 = ((panda$core$Bit) { p_r->children != NULL }).value;
    if (!$tmp3665) goto $l3666;
    panda$core$Int64 $tmp3667 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_r->children);
    panda$core$Bit $tmp3668 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3667, ((panda$core$Int64) { 0 }));
    $tmp3665 = $tmp3668.value;
    $l3666:;
    panda$core$Bit $tmp3669 = { $tmp3665 };
    if ($tmp3669.value) {
    {
        panda$core$Int64 $tmp3670 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_r->children);
        panda$core$Bit $tmp3671 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3670, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp3671.value);
        panda$core$Object* $tmp3672 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
        org$pandalanguage$pandac$Type* $tmp3673 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp3674 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp3672)->returnType, $tmp3673);
        if ($tmp3674.value) {
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_r->position, &$s3675);
            return NULL;
        }
        }
        panda$core$Object* $tmp3677 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp3678 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3677));
        panda$core$Object* $tmp3679 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
        org$pandalanguage$pandac$IRNode* $tmp3680 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3678, ((org$pandalanguage$pandac$MethodDecl*) $tmp3679)->returnType);
        value3676 = $tmp3680;
        if (((panda$core$Bit) { value3676 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp3682 = (panda$collections$Array*) malloc(40);
        $tmp3682->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp3682->refCount.value = 1;
        panda$collections$Array$init($tmp3682);
        children3681 = $tmp3682;
        panda$collections$Array$add$panda$collections$Array$T(children3681, ((panda$core$Object*) value3676));
        org$pandalanguage$pandac$IRNode* $tmp3684 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3684->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3684->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3684, ((panda$core$Int64) { 1008 }), p_r->position, ((panda$collections$ListView*) children3681));
        return $tmp3684;
    }
    }
    panda$core$Object* $tmp3686 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
    org$pandalanguage$pandac$Type* $tmp3687 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp3688 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp3686)->returnType, $tmp3687);
    if ($tmp3688.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_r->position, &$s3689);
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3690 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3690->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3690->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp3690, ((panda$core$Int64) { 1008 }), p_r->position);
    return $tmp3690;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileAssert$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_a) {
    org$pandalanguage$pandac$IRNode* test3700;
    org$pandalanguage$pandac$ClassDecl* bit3705;
    org$pandalanguage$pandac$Symbol* value3708;
    panda$collections$Array* fieldChildren3711;
    panda$collections$Array* children3717;
    org$pandalanguage$pandac$IRNode* msg3722;
    panda$core$Bit $tmp3692 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_a->kind, ((panda$core$Int64) { 123 }));
    PANDA_ASSERT($tmp3692.value);
    panda$core$Int64 $tmp3694 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp3695 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3694, ((panda$core$Int64) { 1 }));
    bool $tmp3693 = $tmp3695.value;
    if ($tmp3693) goto $l3696;
    panda$core$Int64 $tmp3697 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp3698 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3697, ((panda$core$Int64) { 2 }));
    $tmp3693 = $tmp3698.value;
    $l3696:;
    panda$core$Bit $tmp3699 = { $tmp3693 };
    PANDA_ASSERT($tmp3699.value);
    panda$core$Object* $tmp3701 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_a->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3702 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3701));
    test3700 = $tmp3702;
    if (((panda$core$Bit) { test3700 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$Type* $tmp3703 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp3704 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, test3700, $tmp3703);
    test3700 = $tmp3704;
    if (((panda$core$Bit) { test3700 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$Type* $tmp3706 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$ClassDecl* $tmp3707 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, $tmp3706);
    bit3705 = $tmp3707;
    PANDA_ASSERT(((panda$core$Bit) { bit3705 != NULL }).value);
    org$pandalanguage$pandac$Symbol* $tmp3710 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(bit3705->symbolTable, &$s3709);
    value3708 = $tmp3710;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self, ((org$pandalanguage$pandac$FieldDecl*) value3708));
    panda$collections$Array* $tmp3712 = (panda$collections$Array*) malloc(40);
    $tmp3712->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3712->refCount.value = 1;
    panda$collections$Array$init($tmp3712);
    fieldChildren3711 = $tmp3712;
    panda$collections$Array$add$panda$collections$Array$T(fieldChildren3711, ((panda$core$Object*) test3700));
    org$pandalanguage$pandac$IRNode* $tmp3714 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3714->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3714->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3716 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3714, ((panda$core$Int64) { 1026 }), p_a->position, $tmp3716, ((panda$core$Object*) value3708), ((panda$collections$ListView*) fieldChildren3711));
    test3700 = $tmp3714;
    panda$collections$Array* $tmp3718 = (panda$collections$Array*) malloc(40);
    $tmp3718->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3718->refCount.value = 1;
    panda$collections$Array$init($tmp3718);
    children3717 = $tmp3718;
    panda$collections$Array$add$panda$collections$Array$T(children3717, ((panda$core$Object*) test3700));
    panda$core$Int64 $tmp3720 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp3721 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3720, ((panda$core$Int64) { 2 }));
    if ($tmp3721.value) {
    {
        panda$core$Object* $tmp3723 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_a->children, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$IRNode* $tmp3724 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3723));
        msg3722 = $tmp3724;
        if (((panda$core$Bit) { msg3722 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$Type* $tmp3725 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp3726 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, msg3722, $tmp3725);
        msg3722 = $tmp3726;
        if (((panda$core$Bit) { msg3722 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children3717, ((panda$core$Object*) msg3722));
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3727 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3727->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3727->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3727, ((panda$core$Int64) { 1034 }), p_a->position, ((panda$collections$ListView*) children3717));
    return $tmp3727;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileVar$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_v) {
    panda$core$Int64 nodeKind3742;
    panda$core$Int64 varKind3743;
    panda$collections$Array* decls3744;
    panda$collections$Iterator* astDecl$Iter3747;
    org$pandalanguage$pandac$ASTNode* astDecl3759;
    org$pandalanguage$pandac$IRNode* decl3764;
    panda$core$Bit $tmp3732 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 130 }));
    bool $tmp3731 = $tmp3732.value;
    if ($tmp3731) goto $l3733;
    panda$core$Bit $tmp3734 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 131 }));
    $tmp3731 = $tmp3734.value;
    $l3733:;
    panda$core$Bit $tmp3735 = { $tmp3731 };
    bool $tmp3730 = $tmp3735.value;
    if ($tmp3730) goto $l3736;
    panda$core$Bit $tmp3737 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 133 }));
    $tmp3730 = $tmp3737.value;
    $l3736:;
    panda$core$Bit $tmp3738 = { $tmp3730 };
    bool $tmp3729 = $tmp3738.value;
    if ($tmp3729) goto $l3739;
    panda$core$Bit $tmp3740 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 132 }));
    $tmp3729 = $tmp3740.value;
    $l3739:;
    panda$core$Bit $tmp3741 = { $tmp3729 };
    PANDA_ASSERT($tmp3741.value);
    switch (p_v->kind.value) {
        case 130:
        {
            nodeKind3742 = ((panda$core$Int64) { 1017 });
            varKind3743 = ((panda$core$Int64) { 10000 });
        }
        break;
        case 131:
        {
            nodeKind3742 = ((panda$core$Int64) { 1018 });
            varKind3743 = ((panda$core$Int64) { 10001 });
        }
        break;
        case 132:
        {
            nodeKind3742 = ((panda$core$Int64) { 1019 });
            varKind3743 = ((panda$core$Int64) { 10002 });
        }
        break;
        case 133:
        {
            nodeKind3742 = ((panda$core$Int64) { 1020 });
            varKind3743 = ((panda$core$Int64) { 10003 });
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
    panda$collections$Array* $tmp3745 = (panda$collections$Array*) malloc(40);
    $tmp3745->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3745->refCount.value = 1;
    panda$collections$Array$init($tmp3745);
    decls3744 = $tmp3745;
    {
        ITable* $tmp3748 = ((panda$collections$Iterable*) p_v->children)->$class->itable;
        while ($tmp3748->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3748 = $tmp3748->next;
        }
        $fn3750 $tmp3749 = $tmp3748->methods[0];
        panda$collections$Iterator* $tmp3751 = $tmp3749(((panda$collections$Iterable*) p_v->children));
        astDecl$Iter3747 = $tmp3751;
        $l3752:;
        ITable* $tmp3754 = astDecl$Iter3747->$class->itable;
        while ($tmp3754->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3754 = $tmp3754->next;
        }
        $fn3756 $tmp3755 = $tmp3754->methods[0];
        panda$core$Bit $tmp3757 = $tmp3755(astDecl$Iter3747);
        panda$core$Bit $tmp3758 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3757);
        if (!$tmp3758.value) goto $l3753;
        {
            ITable* $tmp3760 = astDecl$Iter3747->$class->itable;
            while ($tmp3760->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3760 = $tmp3760->next;
            }
            $fn3762 $tmp3761 = $tmp3760->methods[1];
            panda$core$Object* $tmp3763 = $tmp3761(astDecl$Iter3747);
            astDecl3759 = ((org$pandalanguage$pandac$ASTNode*) $tmp3763);
            org$pandalanguage$pandac$IRNode* $tmp3765 = org$pandalanguage$pandac$Compiler$compileDeclaration$org$pandalanguage$pandac$ASTNode$panda$core$Int64$R$org$pandalanguage$pandac$IRNode$Q(self, astDecl3759, varKind3743);
            decl3764 = $tmp3765;
            if (((panda$core$Bit) { decl3764 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(decls3744, ((panda$core$Object*) decl3764));
        }
        goto $l3752;
        $l3753:;
    }
    org$pandalanguage$pandac$IRNode* $tmp3766 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3766->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3766->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3766, nodeKind3742, p_v->position, ((panda$collections$ListView*) decls3744));
    return $tmp3766;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileWhenTest$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Variable* p_value, org$pandalanguage$pandac$ASTNode* p_test) {
    org$pandalanguage$pandac$IRNode* target3768;
    panda$collections$Array* callChildren3771;
    org$pandalanguage$pandac$IRNode* testValue3774;
    org$pandalanguage$pandac$IRNode* $tmp3769 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3769->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3769->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3769, ((panda$core$Int64) { 1016 }), p_test->position, p_value->type, p_value);
    target3768 = $tmp3769;
    panda$collections$Array* $tmp3772 = (panda$collections$Array*) malloc(40);
    $tmp3772->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3772->refCount.value = 1;
    panda$collections$Array$init($tmp3772);
    callChildren3771 = $tmp3772;
    org$pandalanguage$pandac$IRNode* $tmp3775 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_test);
    testValue3774 = $tmp3775;
    if (((panda$core$Bit) { testValue3774 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(callChildren3771, ((panda$core$Object*) testValue3774));
    org$pandalanguage$pandac$IRNode* $tmp3777 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target3768, &$s3776, ((panda$collections$ListView*) callChildren3771));
    return $tmp3777;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileChainedIfWhen$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Variable* p_value, org$pandalanguage$pandac$ASTNode* p_w) {
    org$pandalanguage$pandac$IRNode* test3786;
    panda$core$Range$LTpanda$core$Int64$GT $tmp3790;
    org$pandalanguage$pandac$IRNode* nextTest3806;
    panda$collections$Array* callChildren3810;
    panda$collections$Array* statements3823;
    panda$core$Range$LTpanda$core$Int64$GT $tmp3826;
    org$pandalanguage$pandac$IRNode* statement3841;
    panda$collections$Array* children3851;
    panda$core$Bit $tmp3778 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_w->kind, ((panda$core$Int64) { 124 }));
    PANDA_ASSERT($tmp3778.value);
    panda$core$Int64 $tmp3779 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Bit $tmp3780 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp3779, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3780.value);
    panda$core$Object* $tmp3781 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp3782 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp3781)->kind, ((panda$core$Int64) { 128 }));
    PANDA_ASSERT($tmp3782.value);
    panda$core$Object* $tmp3783 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Int64 $tmp3784 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$ASTNode*) $tmp3783)->children);
    panda$core$Bit $tmp3785 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp3784, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3785.value);
    panda$core$Object* $tmp3787 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp3788 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$ASTNode*) $tmp3787)->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3789 = org$pandalanguage$pandac$Compiler$compileWhenTest$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_value, ((org$pandalanguage$pandac$ASTNode*) $tmp3788));
    test3786 = $tmp3789;
    if (((panda$core$Bit) { test3786 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Object* $tmp3791 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Int64 $tmp3792 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$ASTNode*) $tmp3791)->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp3790, ((panda$core$Int64) { 1 }), $tmp3792, ((panda$core$Bit) { false }));
    int64_t $tmp3794 = $tmp3790.min.value;
    panda$core$Int64 i3793 = { $tmp3794 };
    int64_t $tmp3796 = $tmp3790.max.value;
    bool $tmp3797 = $tmp3790.inclusive.value;
    if ($tmp3797) goto $l3804; else goto $l3805;
    $l3804:;
    if ($tmp3794 <= $tmp3796) goto $l3798; else goto $l3800;
    $l3805:;
    if ($tmp3794 < $tmp3796) goto $l3798; else goto $l3800;
    $l3798:;
    {
        panda$core$Object* $tmp3807 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3808 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$ASTNode*) $tmp3807)->children, i3793);
        org$pandalanguage$pandac$IRNode* $tmp3809 = org$pandalanguage$pandac$Compiler$compileWhenTest$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_value, ((org$pandalanguage$pandac$ASTNode*) $tmp3808));
        nextTest3806 = $tmp3809;
        if (((panda$core$Bit) { nextTest3806 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp3811 = (panda$collections$Array*) malloc(40);
        $tmp3811->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp3811->refCount.value = 1;
        panda$collections$Array$init($tmp3811);
        callChildren3810 = $tmp3811;
        panda$collections$Array$add$panda$collections$Array$T(callChildren3810, ((panda$core$Object*) nextTest3806));
        org$pandalanguage$pandac$IRNode* $tmp3814 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, test3786, &$s3813, ((panda$collections$ListView*) callChildren3810));
        test3786 = $tmp3814;
        if (((panda$core$Bit) { test3786 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    $l3801:;
    int64_t $tmp3816 = $tmp3796 - i3793.value;
    if ($tmp3797) goto $l3817; else goto $l3818;
    $l3817:;
    if ($tmp3816 >= 1) goto $l3815; else goto $l3800;
    $l3818:;
    if ($tmp3816 > 1) goto $l3815; else goto $l3800;
    $l3815:;
    i3793.value += 1;
    goto $l3798;
    $l3800:;
    org$pandalanguage$pandac$SymbolTable* $tmp3821 = (org$pandalanguage$pandac$SymbolTable*) malloc(48);
    $tmp3821->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp3821->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp3821, self->symbolTable);
    self->symbolTable = $tmp3821;
    panda$collections$Array* $tmp3824 = (panda$collections$Array*) malloc(40);
    $tmp3824->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3824->refCount.value = 1;
    panda$collections$Array$init($tmp3824);
    statements3823 = $tmp3824;
    panda$core$Int64 $tmp3827 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
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
        panda$core$Object* $tmp3842 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, i3828);
        org$pandalanguage$pandac$IRNode* $tmp3843 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3842));
        statement3841 = $tmp3843;
        if (((panda$core$Bit) { statement3841 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(statements3823, ((panda$core$Object*) statement3841));
    }
    $l3836:;
    int64_t $tmp3845 = $tmp3831 - i3828.value;
    if ($tmp3832) goto $l3846; else goto $l3847;
    $l3846:;
    if ($tmp3845 >= 1) goto $l3844; else goto $l3835;
    $l3847:;
    if ($tmp3845 > 1) goto $l3844; else goto $l3835;
    $l3844:;
    i3828.value += 1;
    goto $l3833;
    $l3835:;
    panda$core$Object* $tmp3850 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->symbolTable->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp3850);
    panda$collections$Array* $tmp3852 = (panda$collections$Array*) malloc(40);
    $tmp3852->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3852->refCount.value = 1;
    panda$collections$Array$init($tmp3852);
    children3851 = $tmp3852;
    panda$collections$Array$add$panda$collections$Array$T(children3851, ((panda$core$Object*) test3786));
    org$pandalanguage$pandac$IRNode* $tmp3854 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3854->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3854->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3854, ((panda$core$Int64) { 1000 }), p_w->position, ((panda$collections$ListView*) statements3823));
    panda$collections$Array$add$panda$collections$Array$T(children3851, ((panda$core$Object*) $tmp3854));
    org$pandalanguage$pandac$IRNode* $tmp3856 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3856->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3856->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3856, ((panda$core$Int64) { 1012 }), p_w->position, ((panda$collections$ListView*) children3851));
    return $tmp3856;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileChainedIfMatch$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_m, org$pandalanguage$pandac$IRNode* p_value) {
    panda$collections$Array* children3858;
    org$pandalanguage$pandac$Variable* valueVar3861;
    panda$collections$Array* declChildren3871;
    panda$collections$Array* varChildren3876;
    panda$core$Range$LTpanda$core$Int64$GT $tmp3883;
    org$pandalanguage$pandac$ASTNode* c3898;
    org$pandalanguage$pandac$IRNode* w3900;
    panda$collections$Array* statements3902;
    panda$collections$Iterator* astStatement$Iter3905;
    org$pandalanguage$pandac$ASTNode* astStatement3917;
    org$pandalanguage$pandac$IRNode* stmt3922;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp3932;
    panda$collections$Array* newChildren3960;
    panda$collections$Array* $tmp3859 = (panda$collections$Array*) malloc(40);
    $tmp3859->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3859->refCount.value = 1;
    panda$collections$Array$init($tmp3859);
    children3858 = $tmp3859;
    org$pandalanguage$pandac$Variable* $tmp3862 = (org$pandalanguage$pandac$Variable*) malloc(88);
    $tmp3862->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
    $tmp3862->refCount.value = 1;
    panda$core$String* $tmp3865 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3864, ((panda$core$Object*) wrap_panda$core$Int64(p_m->position.line)));
    panda$core$String* $tmp3867 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3865, &$s3866);
    panda$core$String* $tmp3868 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3867, ((panda$core$Object*) wrap_panda$core$Int64(p_m->position.column)));
    panda$core$String* $tmp3870 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3868, &$s3869);
    org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type($tmp3862, p_m->position, ((panda$core$Int64) { 10001 }), $tmp3870, p_value->type);
    valueVar3861 = $tmp3862;
    panda$collections$Array* $tmp3872 = (panda$collections$Array*) malloc(40);
    $tmp3872->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3872->refCount.value = 1;
    panda$collections$Array$init($tmp3872);
    declChildren3871 = $tmp3872;
    org$pandalanguage$pandac$IRNode* $tmp3874 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3874->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3874->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3874, ((panda$core$Int64) { 1016 }), p_value->position, valueVar3861->type, valueVar3861);
    panda$collections$Array$add$panda$collections$Array$T(declChildren3871, ((panda$core$Object*) $tmp3874));
    panda$collections$Array$add$panda$collections$Array$T(declChildren3871, ((panda$core$Object*) p_value));
    panda$collections$Array* $tmp3877 = (panda$collections$Array*) malloc(40);
    $tmp3877->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3877->refCount.value = 1;
    panda$collections$Array$init($tmp3877);
    varChildren3876 = $tmp3877;
    org$pandalanguage$pandac$IRNode* $tmp3879 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3879->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3879->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3879, ((panda$core$Int64) { 1021 }), ((org$pandalanguage$pandac$Symbol*) valueVar3861)->position, ((panda$collections$ListView*) declChildren3871));
    panda$collections$Array$add$panda$collections$Array$T(varChildren3876, ((panda$core$Object*) $tmp3879));
    org$pandalanguage$pandac$IRNode* $tmp3881 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3881->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3881->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3881, ((panda$core$Int64) { 1018 }), ((org$pandalanguage$pandac$Symbol*) valueVar3861)->position, ((panda$collections$ListView*) varChildren3876));
    panda$collections$Array$add$panda$collections$Array$T(children3858, ((panda$core$Object*) $tmp3881));
    panda$core$Int64 $tmp3884 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp3883, ((panda$core$Int64) { 1 }), $tmp3884, ((panda$core$Bit) { false }));
    int64_t $tmp3886 = $tmp3883.min.value;
    panda$core$Int64 i3885 = { $tmp3886 };
    int64_t $tmp3888 = $tmp3883.max.value;
    bool $tmp3889 = $tmp3883.inclusive.value;
    if ($tmp3889) goto $l3896; else goto $l3897;
    $l3896:;
    if ($tmp3886 <= $tmp3888) goto $l3890; else goto $l3892;
    $l3897:;
    if ($tmp3886 < $tmp3888) goto $l3890; else goto $l3892;
    $l3890:;
    {
        panda$core$Object* $tmp3899 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, i3885);
        c3898 = ((org$pandalanguage$pandac$ASTNode*) $tmp3899);
        switch (c3898->kind.value) {
            case 124:
            {
                org$pandalanguage$pandac$IRNode* $tmp3901 = org$pandalanguage$pandac$Compiler$compileChainedIfWhen$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, valueVar3861, c3898);
                w3900 = $tmp3901;
                if (((panda$core$Bit) { w3900 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children3858, ((panda$core$Object*) w3900));
            }
            break;
            case 127:
            {
                panda$collections$Array* $tmp3903 = (panda$collections$Array*) malloc(40);
                $tmp3903->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp3903->refCount.value = 1;
                panda$collections$Array$init($tmp3903);
                statements3902 = $tmp3903;
                {
                    ITable* $tmp3906 = ((panda$collections$Iterable*) c3898->children)->$class->itable;
                    while ($tmp3906->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp3906 = $tmp3906->next;
                    }
                    $fn3908 $tmp3907 = $tmp3906->methods[0];
                    panda$collections$Iterator* $tmp3909 = $tmp3907(((panda$collections$Iterable*) c3898->children));
                    astStatement$Iter3905 = $tmp3909;
                    $l3910:;
                    ITable* $tmp3912 = astStatement$Iter3905->$class->itable;
                    while ($tmp3912->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp3912 = $tmp3912->next;
                    }
                    $fn3914 $tmp3913 = $tmp3912->methods[0];
                    panda$core$Bit $tmp3915 = $tmp3913(astStatement$Iter3905);
                    panda$core$Bit $tmp3916 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3915);
                    if (!$tmp3916.value) goto $l3911;
                    {
                        ITable* $tmp3918 = astStatement$Iter3905->$class->itable;
                        while ($tmp3918->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp3918 = $tmp3918->next;
                        }
                        $fn3920 $tmp3919 = $tmp3918->methods[1];
                        panda$core$Object* $tmp3921 = $tmp3919(astStatement$Iter3905);
                        astStatement3917 = ((org$pandalanguage$pandac$ASTNode*) $tmp3921);
                        org$pandalanguage$pandac$IRNode* $tmp3923 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, astStatement3917);
                        stmt3922 = $tmp3923;
                        if (((panda$core$Bit) { stmt3922 == NULL }).value) {
                        {
                            return NULL;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(statements3902, ((panda$core$Object*) stmt3922));
                    }
                    goto $l3910;
                    $l3911:;
                }
                org$pandalanguage$pandac$IRNode* $tmp3924 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp3924->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp3924->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3924, ((panda$core$Int64) { 1000 }), c3898->position, ((panda$collections$ListView*) statements3902));
                panda$collections$Array$add$panda$collections$Array$T(children3858, ((panda$core$Object*) $tmp3924));
            }
            break;
            default:
            {
                PANDA_ASSERT(((panda$core$Bit) { false }).value);
            }
        }
    }
    $l3893:;
    int64_t $tmp3927 = $tmp3888 - i3885.value;
    if ($tmp3889) goto $l3928; else goto $l3929;
    $l3928:;
    if ($tmp3927 >= 1) goto $l3926; else goto $l3892;
    $l3929:;
    if ($tmp3927 > 1) goto $l3926; else goto $l3892;
    $l3926:;
    i3885.value += 1;
    goto $l3890;
    $l3892:;
    panda$core$Int64 $tmp3933 = panda$collections$Array$get_count$R$panda$core$Int64(children3858);
    panda$core$Int64 $tmp3934 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp3933, ((panda$core$Int64) { 1 }));
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp3932, $tmp3934, ((panda$core$Int64) { 1 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { false }));
    int64_t $tmp3936 = $tmp3932.start.value;
    panda$core$Int64 i3935 = { $tmp3936 };
    int64_t $tmp3938 = $tmp3932.end.value;
    int64_t $tmp3939 = $tmp3932.step.value;
    bool $tmp3940 = $tmp3932.inclusive.value;
    bool $tmp3947 = $tmp3939 > 0;
    if ($tmp3947) goto $l3945; else goto $l3946;
    $l3945:;
    if ($tmp3940) goto $l3948; else goto $l3949;
    $l3948:;
    if ($tmp3936 <= $tmp3938) goto $l3941; else goto $l3943;
    $l3949:;
    if ($tmp3936 < $tmp3938) goto $l3941; else goto $l3943;
    $l3946:;
    if ($tmp3940) goto $l3950; else goto $l3951;
    $l3950:;
    if ($tmp3936 >= $tmp3938) goto $l3941; else goto $l3943;
    $l3951:;
    if ($tmp3936 > $tmp3938) goto $l3941; else goto $l3943;
    $l3941:;
    {
        panda$core$Int64 $tmp3953 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i3935, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp3954 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children3858, $tmp3953);
        panda$core$Bit $tmp3955 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp3954)->kind, ((panda$core$Int64) { 1012 }));
        PANDA_ASSERT($tmp3955.value);
        panda$core$Int64 $tmp3956 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i3935, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp3957 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children3858, $tmp3956);
        panda$core$Int64 $tmp3958 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp3957)->children);
        panda$core$Bit $tmp3959 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3958, ((panda$core$Int64) { 2 }));
        PANDA_ASSERT($tmp3959.value);
        panda$collections$Array* $tmp3961 = (panda$collections$Array*) malloc(40);
        $tmp3961->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp3961->refCount.value = 1;
        panda$core$Int64 $tmp3963 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i3935, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp3964 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children3858, $tmp3963);
        panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp3961, ((panda$collections$ListView*) ((org$pandalanguage$pandac$IRNode*) $tmp3964)->children));
        newChildren3960 = $tmp3961;
        panda$core$Object* $tmp3965 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children3858, i3935);
        panda$collections$Array$add$panda$collections$Array$T(newChildren3960, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp3965)));
        panda$core$Int64 $tmp3966 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i3935, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$IRNode* $tmp3967 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3967->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3967->refCount.value = 1;
        panda$core$Int64 $tmp3969 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i3935, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp3970 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children3858, $tmp3969);
        panda$core$Int64 $tmp3971 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i3935, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp3972 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children3858, $tmp3971);
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3967, ((org$pandalanguage$pandac$IRNode*) $tmp3970)->kind, ((org$pandalanguage$pandac$IRNode*) $tmp3972)->position, ((panda$collections$ListView*) newChildren3960));
        panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(children3858, $tmp3966, ((panda$core$Object*) $tmp3967));
        panda$core$Int64 $tmp3973 = panda$collections$Array$get_count$R$panda$core$Int64(children3858);
        panda$core$Int64 $tmp3974 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp3973, ((panda$core$Int64) { 1 }));
        panda$collections$Array$removeIndex$panda$core$Int64(children3858, $tmp3974);
    }
    $l3944:;
    if ($tmp3947) goto $l3976; else goto $l3977;
    $l3976:;
    int64_t $tmp3978 = $tmp3938 - i3935.value;
    if ($tmp3940) goto $l3979; else goto $l3980;
    $l3979:;
    if ($tmp3978 >= $tmp3939) goto $l3975; else goto $l3943;
    $l3980:;
    if ($tmp3978 > $tmp3939) goto $l3975; else goto $l3943;
    $l3977:;
    int64_t $tmp3982 = i3935.value - $tmp3938;
    if ($tmp3940) goto $l3983; else goto $l3984;
    $l3983:;
    if ($tmp3982 >= -$tmp3939) goto $l3975; else goto $l3943;
    $l3984:;
    if ($tmp3982 > -$tmp3939) goto $l3975; else goto $l3943;
    $l3975:;
    i3935.value += $tmp3939;
    goto $l3941;
    $l3943:;
    org$pandalanguage$pandac$IRNode* $tmp3986 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3986->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3986->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3986, ((panda$core$Int64) { 1000 }), p_m->position, ((panda$collections$ListView*) children3858));
    return $tmp3986;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileWhen$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type, org$pandalanguage$pandac$ASTNode* p_w) {
    panda$collections$Array* children3996;
    panda$collections$Iterator* expr$Iter3999;
    org$pandalanguage$pandac$ASTNode* expr4012;
    org$pandalanguage$pandac$IRNode* compiled4017;
    panda$collections$Array* statements4022;
    panda$core$Range$LTpanda$core$Int64$GT $tmp4025;
    org$pandalanguage$pandac$IRNode* statement4040;
    panda$core$Bit $tmp3988 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_w->kind, ((panda$core$Int64) { 124 }));
    PANDA_ASSERT($tmp3988.value);
    panda$core$Int64 $tmp3989 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Bit $tmp3990 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp3989, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3990.value);
    panda$core$Object* $tmp3991 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp3992 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp3991)->kind, ((panda$core$Int64) { 128 }));
    PANDA_ASSERT($tmp3992.value);
    panda$core$Object* $tmp3993 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Int64 $tmp3994 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$ASTNode*) $tmp3993)->children);
    panda$core$Bit $tmp3995 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp3994, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3995.value);
    panda$collections$Array* $tmp3997 = (panda$collections$Array*) malloc(40);
    $tmp3997->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3997->refCount.value = 1;
    panda$collections$Array$init($tmp3997);
    children3996 = $tmp3997;
    {
        panda$core$Object* $tmp4000 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
        ITable* $tmp4001 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp4000)->children)->$class->itable;
        while ($tmp4001->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4001 = $tmp4001->next;
        }
        $fn4003 $tmp4002 = $tmp4001->methods[0];
        panda$collections$Iterator* $tmp4004 = $tmp4002(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp4000)->children));
        expr$Iter3999 = $tmp4004;
        $l4005:;
        ITable* $tmp4007 = expr$Iter3999->$class->itable;
        while ($tmp4007->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4007 = $tmp4007->next;
        }
        $fn4009 $tmp4008 = $tmp4007->methods[0];
        panda$core$Bit $tmp4010 = $tmp4008(expr$Iter3999);
        panda$core$Bit $tmp4011 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4010);
        if (!$tmp4011.value) goto $l4006;
        {
            ITable* $tmp4013 = expr$Iter3999->$class->itable;
            while ($tmp4013->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4013 = $tmp4013->next;
            }
            $fn4015 $tmp4014 = $tmp4013->methods[1];
            panda$core$Object* $tmp4016 = $tmp4014(expr$Iter3999);
            expr4012 = ((org$pandalanguage$pandac$ASTNode*) $tmp4016);
            org$pandalanguage$pandac$IRNode* $tmp4018 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, expr4012);
            org$pandalanguage$pandac$IRNode* $tmp4019 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp4018, p_type);
            compiled4017 = $tmp4019;
            if (((panda$core$Bit) { compiled4017 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children3996, ((panda$core$Object*) compiled4017));
        }
        goto $l4005;
        $l4006:;
    }
    org$pandalanguage$pandac$SymbolTable* $tmp4020 = (org$pandalanguage$pandac$SymbolTable*) malloc(48);
    $tmp4020->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp4020->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp4020, self->symbolTable);
    self->symbolTable = $tmp4020;
    panda$collections$Array* $tmp4023 = (panda$collections$Array*) malloc(40);
    $tmp4023->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4023->refCount.value = 1;
    panda$collections$Array$init($tmp4023);
    statements4022 = $tmp4023;
    panda$core$Int64 $tmp4026 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp4025, ((panda$core$Int64) { 1 }), $tmp4026, ((panda$core$Bit) { false }));
    int64_t $tmp4028 = $tmp4025.min.value;
    panda$core$Int64 i4027 = { $tmp4028 };
    int64_t $tmp4030 = $tmp4025.max.value;
    bool $tmp4031 = $tmp4025.inclusive.value;
    if ($tmp4031) goto $l4038; else goto $l4039;
    $l4038:;
    if ($tmp4028 <= $tmp4030) goto $l4032; else goto $l4034;
    $l4039:;
    if ($tmp4028 < $tmp4030) goto $l4032; else goto $l4034;
    $l4032:;
    {
        panda$core$Object* $tmp4041 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, i4027);
        org$pandalanguage$pandac$IRNode* $tmp4042 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4041));
        statement4040 = $tmp4042;
        if (((panda$core$Bit) { statement4040 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(statements4022, ((panda$core$Object*) statement4040));
    }
    $l4035:;
    int64_t $tmp4044 = $tmp4030 - i4027.value;
    if ($tmp4031) goto $l4045; else goto $l4046;
    $l4045:;
    if ($tmp4044 >= 1) goto $l4043; else goto $l4034;
    $l4046:;
    if ($tmp4044 > 1) goto $l4043; else goto $l4034;
    $l4043:;
    i4027.value += 1;
    goto $l4032;
    $l4034:;
    panda$core$Object* $tmp4049 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->symbolTable->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp4049);
    org$pandalanguage$pandac$IRNode* $tmp4050 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4050->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4050->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4050, ((panda$core$Int64) { 1000 }), p_w->position, ((panda$collections$ListView*) statements4022));
    panda$collections$Array$add$panda$collections$Array$T(children3996, ((panda$core$Object*) $tmp4050));
    org$pandalanguage$pandac$IRNode* $tmp4052 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4052->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4052->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4052, ((panda$core$Int64) { 1042 }), p_w->position, ((panda$collections$ListView*) children3996));
    return $tmp4052;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileOtherwise$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_o) {
    panda$collections$Array* children4055;
    panda$collections$Array* statements4060;
    panda$collections$Iterator* s$Iter4063;
    org$pandalanguage$pandac$ASTNode* s4075;
    org$pandalanguage$pandac$IRNode* statement4080;
    panda$core$Bit $tmp4054 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_o->kind, ((panda$core$Int64) { 127 }));
    PANDA_ASSERT($tmp4054.value);
    panda$collections$Array* $tmp4056 = (panda$collections$Array*) malloc(40);
    $tmp4056->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4056->refCount.value = 1;
    panda$collections$Array$init($tmp4056);
    children4055 = $tmp4056;
    org$pandalanguage$pandac$SymbolTable* $tmp4058 = (org$pandalanguage$pandac$SymbolTable*) malloc(48);
    $tmp4058->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp4058->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp4058, self->symbolTable);
    self->symbolTable = $tmp4058;
    panda$collections$Array* $tmp4061 = (panda$collections$Array*) malloc(40);
    $tmp4061->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4061->refCount.value = 1;
    panda$collections$Array$init($tmp4061);
    statements4060 = $tmp4061;
    {
        ITable* $tmp4064 = ((panda$collections$Iterable*) p_o->children)->$class->itable;
        while ($tmp4064->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4064 = $tmp4064->next;
        }
        $fn4066 $tmp4065 = $tmp4064->methods[0];
        panda$collections$Iterator* $tmp4067 = $tmp4065(((panda$collections$Iterable*) p_o->children));
        s$Iter4063 = $tmp4067;
        $l4068:;
        ITable* $tmp4070 = s$Iter4063->$class->itable;
        while ($tmp4070->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4070 = $tmp4070->next;
        }
        $fn4072 $tmp4071 = $tmp4070->methods[0];
        panda$core$Bit $tmp4073 = $tmp4071(s$Iter4063);
        panda$core$Bit $tmp4074 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4073);
        if (!$tmp4074.value) goto $l4069;
        {
            ITable* $tmp4076 = s$Iter4063->$class->itable;
            while ($tmp4076->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4076 = $tmp4076->next;
            }
            $fn4078 $tmp4077 = $tmp4076->methods[1];
            panda$core$Object* $tmp4079 = $tmp4077(s$Iter4063);
            s4075 = ((org$pandalanguage$pandac$ASTNode*) $tmp4079);
            org$pandalanguage$pandac$IRNode* $tmp4081 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, s4075);
            statement4080 = $tmp4081;
            if (((panda$core$Bit) { statement4080 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(statements4060, ((panda$core$Object*) statement4080));
        }
        goto $l4068;
        $l4069:;
    }
    panda$core$Object* $tmp4082 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->symbolTable->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp4082);
    org$pandalanguage$pandac$IRNode* $tmp4083 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4083->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4083->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4083, ((panda$core$Int64) { 1000 }), p_o->position, ((panda$collections$ListView*) statements4060));
    panda$collections$Array$add$panda$collections$Array$T(children4055, ((panda$core$Object*) $tmp4083));
    org$pandalanguage$pandac$IRNode* $tmp4085 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4085->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4085->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4085, ((panda$core$Int64) { 1043 }), p_o->position, ((panda$collections$ListView*) children4055));
    return $tmp4085;
}
panda$core$Bit org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    org$pandalanguage$pandac$FieldDecl* f4094;
    org$pandalanguage$pandac$Variable* v4103;
    switch (p_expr->kind.value) {
        case 1004:
        {
            return ((panda$core$Bit) { true });
        }
        break;
        case 1010:
        {
            panda$core$Bit $tmp4088 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_expr->type);
            bool $tmp4087 = $tmp4088.value;
            if (!$tmp4087) goto $l4089;
            panda$core$Object* $tmp4090 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp4091 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$IRNode*) $tmp4090)->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp4092 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp4091));
            $tmp4087 = $tmp4092.value;
            $l4089:;
            panda$core$Bit $tmp4093 = { $tmp4087 };
            return $tmp4093;
        }
        break;
        case 1026:
        {
            f4094 = ((org$pandalanguage$pandac$FieldDecl*) p_expr->payload);
            PANDA_ASSERT(f4094->resolved.value);
            panda$core$Bit $tmp4097 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(f4094->fieldKind, ((panda$core$Int64) { 10002 }));
            bool $tmp4096 = $tmp4097.value;
            if (!$tmp4096) goto $l4098;
            $tmp4096 = ((panda$core$Bit) { f4094->value != NULL }).value;
            $l4098:;
            panda$core$Bit $tmp4099 = { $tmp4096 };
            bool $tmp4095 = $tmp4099.value;
            if (!$tmp4095) goto $l4100;
            panda$core$Bit $tmp4101 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, f4094->value);
            $tmp4095 = $tmp4101.value;
            $l4100:;
            panda$core$Bit $tmp4102 = { $tmp4095 };
            return $tmp4102;
        }
        break;
        case 1016:
        {
            v4103 = ((org$pandalanguage$pandac$Variable*) p_expr->payload);
            panda$core$Bit $tmp4105 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(v4103->varKind, ((panda$core$Int64) { 10001 }));
            bool $tmp4104 = $tmp4105.value;
            if ($tmp4104) goto $l4106;
            panda$core$Bit $tmp4109 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(v4103->varKind, ((panda$core$Int64) { 10002 }));
            bool $tmp4108 = $tmp4109.value;
            if (!$tmp4108) goto $l4110;
            $tmp4108 = ((panda$core$Bit) { v4103->initialValue != NULL }).value;
            $l4110:;
            panda$core$Bit $tmp4111 = { $tmp4108 };
            bool $tmp4107 = $tmp4111.value;
            if (!$tmp4107) goto $l4112;
            panda$core$Bit $tmp4113 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, v4103->initialValue);
            $tmp4107 = $tmp4113.value;
            $l4112:;
            panda$core$Bit $tmp4114 = { $tmp4107 };
            $tmp4104 = $tmp4114.value;
            $l4106:;
            panda$core$Bit $tmp4115 = { $tmp4104 };
            return $tmp4115;
        }
        break;
        default:
        {
            return ((panda$core$Bit) { false });
        }
    }
}
panda$core$UInt64 org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    org$pandalanguage$pandac$FieldDecl* f4120;
    org$pandalanguage$pandac$Variable* v4122;
    panda$core$Bit $tmp4116 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, p_expr);
    PANDA_ASSERT($tmp4116.value);
    switch (p_expr->kind.value) {
        case 1004:
        {
            return ((panda$core$UInt64$wrapper*) p_expr->payload)->value;
        }
        break;
        case 1010:
        {
            panda$core$Object* $tmp4117 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp4118 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$IRNode*) $tmp4117)->children, ((panda$core$Int64) { 0 }));
            panda$core$UInt64 $tmp4119 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self, ((org$pandalanguage$pandac$IRNode*) $tmp4118));
            return $tmp4119;
        }
        break;
        case 1026:
        {
            f4120 = ((org$pandalanguage$pandac$FieldDecl*) p_expr->payload);
            panda$core$UInt64 $tmp4121 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self, f4120->value);
            return $tmp4121;
        }
        break;
        case 1016:
        {
            v4122 = ((org$pandalanguage$pandac$Variable*) p_expr->payload);
            panda$core$UInt64 $tmp4123 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self, v4122->initialValue);
            return $tmp4123;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileMatch$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_m) {
    org$pandalanguage$pandac$IRNode* value4127;
    panda$collections$Array* children4134;
    panda$collections$Iterator* rawWhen$Iter4137;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp4138;
    org$pandalanguage$pandac$ASTNode* rawWhen4151;
    org$pandalanguage$pandac$IRNode* o4157;
    org$pandalanguage$pandac$IRNode* w4159;
    panda$core$Bit $tmp4124 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->kind, ((panda$core$Int64) { 125 }));
    PANDA_ASSERT($tmp4124.value);
    panda$core$Int64 $tmp4125 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
    panda$core$Bit $tmp4126 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp4125, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4126.value);
    panda$core$Object* $tmp4128 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp4129 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4128));
    org$pandalanguage$pandac$IRNode* $tmp4130 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp4129);
    value4127 = $tmp4130;
    if (((panda$core$Bit) { value4127 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp4131 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(value4127->type);
    panda$core$Bit $tmp4132 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4131);
    if ($tmp4132.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp4133 = org$pandalanguage$pandac$Compiler$compileChainedIfMatch$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_m, value4127);
        return $tmp4133;
    }
    }
    panda$collections$Array* $tmp4135 = (panda$collections$Array*) malloc(40);
    $tmp4135->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4135->refCount.value = 1;
    panda$collections$Array$init($tmp4135);
    children4134 = $tmp4135;
    panda$collections$Array$add$panda$collections$Array$T(children4134, ((panda$core$Object*) value4127));
    {
        panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp4138, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
        panda$collections$ImmutableArray* $tmp4139 = panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(p_m->children, $tmp4138);
        ITable* $tmp4140 = ((panda$collections$Iterable*) $tmp4139)->$class->itable;
        while ($tmp4140->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4140 = $tmp4140->next;
        }
        $fn4142 $tmp4141 = $tmp4140->methods[0];
        panda$collections$Iterator* $tmp4143 = $tmp4141(((panda$collections$Iterable*) $tmp4139));
        rawWhen$Iter4137 = $tmp4143;
        $l4144:;
        ITable* $tmp4146 = rawWhen$Iter4137->$class->itable;
        while ($tmp4146->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4146 = $tmp4146->next;
        }
        $fn4148 $tmp4147 = $tmp4146->methods[0];
        panda$core$Bit $tmp4149 = $tmp4147(rawWhen$Iter4137);
        panda$core$Bit $tmp4150 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4149);
        if (!$tmp4150.value) goto $l4145;
        {
            ITable* $tmp4152 = rawWhen$Iter4137->$class->itable;
            while ($tmp4152->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4152 = $tmp4152->next;
            }
            $fn4154 $tmp4153 = $tmp4152->methods[1];
            panda$core$Object* $tmp4155 = $tmp4153(rawWhen$Iter4137);
            rawWhen4151 = ((org$pandalanguage$pandac$ASTNode*) $tmp4155);
            panda$core$Bit $tmp4156 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(rawWhen4151->kind, ((panda$core$Int64) { 127 }));
            if ($tmp4156.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp4158 = org$pandalanguage$pandac$Compiler$compileOtherwise$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, rawWhen4151);
                o4157 = $tmp4158;
                if (((panda$core$Bit) { o4157 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children4134, ((panda$core$Object*) o4157));
                goto $l4144;
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp4160 = org$pandalanguage$pandac$Compiler$compileWhen$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, value4127->type, rawWhen4151);
            w4159 = $tmp4160;
            if (((panda$core$Bit) { w4159 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$Object* $tmp4161 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(w4159->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp4162 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp4161));
            panda$core$Bit $tmp4163 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4162);
            if ($tmp4163.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp4164 = org$pandalanguage$pandac$Compiler$compileChainedIfMatch$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_m, value4127);
                return $tmp4164;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children4134, ((panda$core$Object*) w4159));
        }
        goto $l4144;
        $l4145:;
    }
    org$pandalanguage$pandac$IRNode* $tmp4165 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4165->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4165->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4165, ((panda$core$Int64) { 1042 }), p_m->position, ((panda$collections$ListView*) children4134));
    return $tmp4165;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$IRNode* result4180;
    switch (p_s->kind.value) {
        case 123:
        {
            org$pandalanguage$pandac$IRNode* $tmp4167 = org$pandalanguage$pandac$Compiler$compileAssert$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4167;
        }
        break;
        case 103:
        {
            org$pandalanguage$pandac$IRNode* $tmp4168 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            org$pandalanguage$pandac$IRNode* $tmp4169 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp4168);
            return $tmp4169;
        }
        break;
        case 126:
        {
            org$pandalanguage$pandac$IRNode* $tmp4170 = org$pandalanguage$pandac$Compiler$compileBlock$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4170;
        }
        break;
        case 118:
        {
            org$pandalanguage$pandac$IRNode* $tmp4171 = org$pandalanguage$pandac$Compiler$compileIf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4171;
        }
        break;
        case 119:
        {
            org$pandalanguage$pandac$IRNode* $tmp4172 = org$pandalanguage$pandac$Compiler$compileFor$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4172;
        }
        break;
        case 121:
        {
            org$pandalanguage$pandac$IRNode* $tmp4173 = org$pandalanguage$pandac$Compiler$compileWhile$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4173;
        }
        break;
        case 120:
        {
            org$pandalanguage$pandac$IRNode* $tmp4174 = org$pandalanguage$pandac$Compiler$compileDo$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4174;
        }
        break;
        case 122:
        {
            org$pandalanguage$pandac$IRNode* $tmp4175 = org$pandalanguage$pandac$Compiler$compileLoop$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4175;
        }
        break;
        case 125:
        {
            org$pandalanguage$pandac$IRNode* $tmp4176 = org$pandalanguage$pandac$Compiler$compileMatch$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4176;
        }
        break;
        case 134:
        {
            org$pandalanguage$pandac$IRNode* $tmp4177 = org$pandalanguage$pandac$Compiler$compileBreak$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4177;
        }
        break;
        case 135:
        {
            org$pandalanguage$pandac$IRNode* $tmp4178 = org$pandalanguage$pandac$Compiler$compileContinue$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4178;
        }
        break;
        case 136:
        {
            org$pandalanguage$pandac$IRNode* $tmp4179 = org$pandalanguage$pandac$Compiler$compileReturn$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4179;
        }
        break;
        case 107:
        {
            org$pandalanguage$pandac$IRNode* $tmp4181 = org$pandalanguage$pandac$Compiler$compileCall$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            org$pandalanguage$pandac$IRNode* $tmp4182 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp4181);
            result4180 = $tmp4182;
            if (((panda$core$Bit) { result4180 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp4183 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self, result4180);
                result4180 = $tmp4183;
            }
            }
            return result4180;
        }
        break;
        case 130:
        case 131:
        case 132:
        case 133:
        {
            org$pandalanguage$pandac$IRNode* $tmp4184 = org$pandalanguage$pandac$Compiler$compileVar$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4184;
        }
        break;
    }
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBody$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$SymbolTable* old4185;
    org$pandalanguage$pandac$SymbolTable* symbols4187;
    panda$collections$Iterator* p$Iter4190;
    org$pandalanguage$pandac$MethodDecl$Parameter* p4202;
    panda$collections$Array* fieldInitializers4209;
    panda$collections$Iterator* f$Iter4213;
    org$pandalanguage$pandac$FieldDecl* f4226;
    panda$collections$Array* children4236;
    org$pandalanguage$pandac$IRNode* fieldRef4243;
    org$pandalanguage$pandac$IRNode* compiled4248;
    panda$collections$Array* children4250;
    if (((panda$core$Bit) { p_m->compiledBody != NULL }).value) {
    {
        return p_m->compiledBody;
    }
    }
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_m->owner));
    old4185 = self->symbolTable;
    org$pandalanguage$pandac$SymbolTable* $tmp4186 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, p_m->owner);
    self->symbolTable = $tmp4186;
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentMethod, ((panda$core$Object*) p_m));
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
    PANDA_ASSERT(((panda$core$Bit) { p_m->body != NULL }).value);
    org$pandalanguage$pandac$SymbolTable* $tmp4188 = (org$pandalanguage$pandac$SymbolTable*) malloc(48);
    $tmp4188->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp4188->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp4188, self->symbolTable);
    symbols4187 = $tmp4188;
    {
        ITable* $tmp4191 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp4191->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4191 = $tmp4191->next;
        }
        $fn4193 $tmp4192 = $tmp4191->methods[0];
        panda$collections$Iterator* $tmp4194 = $tmp4192(((panda$collections$Iterable*) p_m->parameters));
        p$Iter4190 = $tmp4194;
        $l4195:;
        ITable* $tmp4197 = p$Iter4190->$class->itable;
        while ($tmp4197->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4197 = $tmp4197->next;
        }
        $fn4199 $tmp4198 = $tmp4197->methods[0];
        panda$core$Bit $tmp4200 = $tmp4198(p$Iter4190);
        panda$core$Bit $tmp4201 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4200);
        if (!$tmp4201.value) goto $l4196;
        {
            ITable* $tmp4203 = p$Iter4190->$class->itable;
            while ($tmp4203->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4203 = $tmp4203->next;
            }
            $fn4205 $tmp4204 = $tmp4203->methods[1];
            panda$core$Object* $tmp4206 = $tmp4204(p$Iter4190);
            p4202 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp4206);
            org$pandalanguage$pandac$Variable* $tmp4207 = (org$pandalanguage$pandac$Variable*) malloc(88);
            $tmp4207->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
            $tmp4207->refCount.value = 1;
            org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Int64($tmp4207, ((org$pandalanguage$pandac$Symbol*) p_m)->position, ((panda$core$Int64) { 10001 }), p4202->name, p4202->type, ((panda$core$Int64) { 1820 }));
            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(symbols4187, ((org$pandalanguage$pandac$Symbol*) $tmp4207));
        }
        goto $l4195;
        $l4196:;
    }
    self->symbolTable = symbols4187;
    fieldInitializers4209 = NULL;
    panda$core$Bit $tmp4210 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 59 }));
    if ($tmp4210.value) {
    {
        panda$collections$Array* $tmp4211 = (panda$collections$Array*) malloc(40);
        $tmp4211->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp4211->refCount.value = 1;
        panda$collections$Array$init($tmp4211);
        fieldInitializers4209 = $tmp4211;
        {
            panda$core$Object* $tmp4214 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
            ITable* $tmp4215 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ClassDecl*) $tmp4214)->fields)->$class->itable;
            while ($tmp4215->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp4215 = $tmp4215->next;
            }
            $fn4217 $tmp4216 = $tmp4215->methods[0];
            panda$collections$Iterator* $tmp4218 = $tmp4216(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ClassDecl*) $tmp4214)->fields));
            f$Iter4213 = $tmp4218;
            $l4219:;
            ITable* $tmp4221 = f$Iter4213->$class->itable;
            while ($tmp4221->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4221 = $tmp4221->next;
            }
            $fn4223 $tmp4222 = $tmp4221->methods[0];
            panda$core$Bit $tmp4224 = $tmp4222(f$Iter4213);
            panda$core$Bit $tmp4225 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4224);
            if (!$tmp4225.value) goto $l4220;
            {
                ITable* $tmp4227 = f$Iter4213->$class->itable;
                while ($tmp4227->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp4227 = $tmp4227->next;
                }
                $fn4229 $tmp4228 = $tmp4227->methods[1];
                panda$core$Object* $tmp4230 = $tmp4228(f$Iter4213);
                f4226 = ((org$pandalanguage$pandac$FieldDecl*) $tmp4230);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self, f4226);
                panda$core$Bit $tmp4232 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(f4226->annotations);
                panda$core$Bit $tmp4233 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4232);
                bool $tmp4231 = $tmp4233.value;
                if (!$tmp4231) goto $l4234;
                $tmp4231 = ((panda$core$Bit) { f4226->value != NULL }).value;
                $l4234:;
                panda$core$Bit $tmp4235 = { $tmp4231 };
                if ($tmp4235.value) {
                {
                    panda$collections$Array* $tmp4237 = (panda$collections$Array*) malloc(40);
                    $tmp4237->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp4237->refCount.value = 1;
                    panda$collections$Array$init($tmp4237);
                    children4236 = $tmp4237;
                    org$pandalanguage$pandac$IRNode* $tmp4239 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp4239->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp4239->refCount.value = 1;
                    panda$core$Object* $tmp4241 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
                    org$pandalanguage$pandac$Type* $tmp4242 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp4241));
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp4239, ((panda$core$Int64) { 1025 }), ((org$pandalanguage$pandac$Symbol*) p_m)->position, $tmp4242);
                    panda$collections$Array$add$panda$collections$Array$T(children4236, ((panda$core$Object*) $tmp4239));
                    org$pandalanguage$pandac$IRNode* $tmp4244 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp4244->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp4244->refCount.value = 1;
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp4244, ((panda$core$Int64) { 1026 }), ((org$pandalanguage$pandac$Symbol*) p_m)->position, f4226->type, ((panda$core$Object*) f4226), ((panda$collections$ListView*) children4236));
                    fieldRef4243 = $tmp4244;
                    panda$collections$Array$clear(children4236);
                    panda$collections$Array$add$panda$collections$Array$T(children4236, ((panda$core$Object*) fieldRef4243));
                    panda$collections$Array$add$panda$collections$Array$T(children4236, ((panda$core$Object*) f4226->value));
                    org$pandalanguage$pandac$IRNode* $tmp4246 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp4246->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp4246->refCount.value = 1;
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4246, ((panda$core$Int64) { 1023 }), ((org$pandalanguage$pandac$Symbol*) f4226)->position, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 73 }))), ((panda$collections$ListView*) children4236));
                    panda$collections$Array$add$panda$collections$Array$T(fieldInitializers4209, ((panda$core$Object*) $tmp4246));
                }
                }
            }
            goto $l4219;
            $l4220:;
        }
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp4249 = org$pandalanguage$pandac$Compiler$compileBlock$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_m->body);
    compiled4248 = $tmp4249;
    if (((panda$core$Bit) { compiled4248 != NULL }).value) {
    {
        if (((panda$core$Bit) { fieldInitializers4209 != NULL }).value) {
        {
            panda$collections$Array* $tmp4251 = (panda$collections$Array*) malloc(40);
            $tmp4251->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp4251->refCount.value = 1;
            panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp4251, ((panda$collections$ListView*) fieldInitializers4209));
            children4250 = $tmp4251;
            panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(children4250, ((panda$collections$CollectionView*) compiled4248->children));
            org$pandalanguage$pandac$IRNode* $tmp4253 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp4253->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp4253->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4253, ((panda$core$Int64) { 1000 }), p_m->body->position, ((panda$collections$ListView*) children4250));
            compiled4248 = $tmp4253;
        }
        }
    }
    }
    PANDA_ASSERT(((panda$core$Bit) { ((panda$core$Object*) self->symbolTable) == ((panda$core$Object*) symbols4187) }).value);
    self->symbolTable = old4185;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentMethod);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    panda$core$Bit $tmp4255 = org$pandalanguage$pandac$Annotations$isInline$R$panda$core$Bit(p_m->annotations);
    if ($tmp4255.value) {
    {
        p_m->compiledBody = compiled4248;
    }
    }
    return compiled4248;
}
void org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$IRNode* compiled4256;
    if (((panda$core$Bit) { p_m->body != NULL }).value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp4257 = org$pandalanguage$pandac$Compiler$compileBody$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$IRNode$Q(self, p_m);
        compiled4256 = $tmp4257;
        if (((panda$core$Bit) { compiled4256 != NULL }).value) {
        {
            ITable* $tmp4258 = self->codeGenerator->$class->itable;
            while ($tmp4258->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
                $tmp4258 = $tmp4258->next;
            }
            $fn4260 $tmp4259 = $tmp4258->methods[3];
            $tmp4259(self->codeGenerator, p_m, compiled4256);
        }
        }
    }
    }
    else {
    {
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
        ITable* $tmp4261 = self->codeGenerator->$class->itable;
        while ($tmp4261->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
            $tmp4261 = $tmp4261->next;
        }
        $fn4263 $tmp4262 = $tmp4261->methods[2];
        $tmp4262(self->codeGenerator, p_m);
    }
    }
}
void org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Iterator* inner$Iter4264;
    org$pandalanguage$pandac$ClassDecl* inner4276;
    p_cl->external = ((panda$core$Bit) { false });
    {
        ITable* $tmp4265 = ((panda$collections$Iterable*) p_cl->classes)->$class->itable;
        while ($tmp4265->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4265 = $tmp4265->next;
        }
        $fn4267 $tmp4266 = $tmp4265->methods[0];
        panda$collections$Iterator* $tmp4268 = $tmp4266(((panda$collections$Iterable*) p_cl->classes));
        inner$Iter4264 = $tmp4268;
        $l4269:;
        ITable* $tmp4271 = inner$Iter4264->$class->itable;
        while ($tmp4271->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4271 = $tmp4271->next;
        }
        $fn4273 $tmp4272 = $tmp4271->methods[0];
        panda$core$Bit $tmp4274 = $tmp4272(inner$Iter4264);
        panda$core$Bit $tmp4275 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4274);
        if (!$tmp4275.value) goto $l4270;
        {
            ITable* $tmp4277 = inner$Iter4264->$class->itable;
            while ($tmp4277->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4277 = $tmp4277->next;
            }
            $fn4279 $tmp4278 = $tmp4277->methods[1];
            panda$core$Object* $tmp4280 = $tmp4278(inner$Iter4264);
            inner4276 = ((org$pandalanguage$pandac$ClassDecl*) $tmp4280);
            org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl(self, inner4276);
        }
        goto $l4269;
        $l4270:;
    }
}
void org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$SymbolTable* old4288;
    panda$collections$Iterator* m$Iter4293;
    org$pandalanguage$pandac$MethodDecl* m4305;
    org$pandalanguage$pandac$ClassDecl* next4315;
    PANDA_ASSERT(((panda$core$Bit) { self->compiling == NULL }).value);
    self->compiling = p_cl;
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_cl));
    org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl(self, p_cl);
    panda$core$Bit $tmp4281 = org$pandalanguage$pandac$Annotations$isSpecialize$R$panda$core$Bit(p_cl->annotations);
    if ($tmp4281.value) {
    {
        ITable* $tmp4282 = self->codeGenerator->$class->itable;
        while ($tmp4282->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
            $tmp4282 = $tmp4282->next;
        }
        $fn4284 $tmp4283 = $tmp4282->methods[1];
        $tmp4283(self->codeGenerator, p_cl);
        ITable* $tmp4285 = self->codeGenerator->$class->itable;
        while ($tmp4285->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
            $tmp4285 = $tmp4285->next;
        }
        $fn4287 $tmp4286 = $tmp4285->methods[4];
        $tmp4286(self->codeGenerator, p_cl);
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
        return;
    }
    }
    old4288 = self->symbolTable;
    org$pandalanguage$pandac$SymbolTable* $tmp4289 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, p_cl);
    self->symbolTable = $tmp4289;
    ITable* $tmp4290 = self->codeGenerator->$class->itable;
    while ($tmp4290->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
        $tmp4290 = $tmp4290->next;
    }
    $fn4292 $tmp4291 = $tmp4290->methods[1];
    $tmp4291(self->codeGenerator, p_cl);
    {
        ITable* $tmp4294 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
        while ($tmp4294->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4294 = $tmp4294->next;
        }
        $fn4296 $tmp4295 = $tmp4294->methods[0];
        panda$collections$Iterator* $tmp4297 = $tmp4295(((panda$collections$Iterable*) p_cl->methods));
        m$Iter4293 = $tmp4297;
        $l4298:;
        ITable* $tmp4300 = m$Iter4293->$class->itable;
        while ($tmp4300->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4300 = $tmp4300->next;
        }
        $fn4302 $tmp4301 = $tmp4300->methods[0];
        panda$core$Bit $tmp4303 = $tmp4301(m$Iter4293);
        panda$core$Bit $tmp4304 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4303);
        if (!$tmp4304.value) goto $l4299;
        {
            ITable* $tmp4306 = m$Iter4293->$class->itable;
            while ($tmp4306->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4306 = $tmp4306->next;
            }
            $fn4308 $tmp4307 = $tmp4306->methods[1];
            panda$core$Object* $tmp4309 = $tmp4307(m$Iter4293);
            m4305 = ((org$pandalanguage$pandac$MethodDecl*) $tmp4309);
            org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$MethodDecl(self, m4305);
        }
        goto $l4298;
        $l4299:;
    }
    ITable* $tmp4310 = self->codeGenerator->$class->itable;
    while ($tmp4310->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
        $tmp4310 = $tmp4310->next;
    }
    $fn4312 $tmp4311 = $tmp4310->methods[4];
    $tmp4311(self->codeGenerator, p_cl);
    self->symbolTable = old4288;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    self->compiling = NULL;
    panda$core$Int64 $tmp4313 = panda$collections$Array$get_count$R$panda$core$Int64(self->compilationQueue);
    panda$core$Bit $tmp4314 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp4313, ((panda$core$Int64) { 0 }));
    if ($tmp4314.value) {
    {
        panda$core$Object* $tmp4316 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->compilationQueue, ((panda$core$Int64) { 0 }));
        next4315 = ((org$pandalanguage$pandac$ClassDecl*) $tmp4316);
        panda$collections$Array$removeIndex$panda$core$Int64(self->compilationQueue, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$ClassDecl(self, next4315);
    }
    }
    panda$core$Int64 $tmp4317 = panda$collections$Array$get_count$R$panda$core$Int64(self->compilationQueue);
    panda$core$Bit $tmp4318 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4317, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp4318.value);
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Compiler* self, panda$io$File* p_file) {
    panda$collections$ListView* result4319;
    org$pandalanguage$pandac$ASTNode* parsed4323;
    panda$collections$Iterator* cl$Iter4327;
    org$pandalanguage$pandac$ClassDecl* cl4339;
    panda$core$Object* $tmp4320 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->scans, ((panda$collections$Key*) p_file));
    result4319 = ((panda$collections$ListView*) $tmp4320);
    if (((panda$core$Bit) { result4319 == NULL }).value) {
    {
        panda$core$String* $tmp4321 = panda$io$File$readFully$R$panda$core$String(p_file);
        (($fn4322) self->parser->$class->vtable[2])(self->parser, p_file, $tmp4321);
        org$pandalanguage$pandac$ASTNode* $tmp4325 = (($fn4324) self->parser->$class->vtable[67])(self->parser);
        parsed4323 = $tmp4325;
        if (((panda$core$Bit) { parsed4323 != NULL }).value) {
        {
            panda$collections$ListView* $tmp4326 = org$pandalanguage$pandac$Scanner$scan$panda$io$File$org$pandalanguage$pandac$ASTNode$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(self->scanner, p_file, parsed4323);
            result4319 = $tmp4326;
            {
                ITable* $tmp4328 = ((panda$collections$Iterable*) result4319)->$class->itable;
                while ($tmp4328->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp4328 = $tmp4328->next;
                }
                $fn4330 $tmp4329 = $tmp4328->methods[0];
                panda$collections$Iterator* $tmp4331 = $tmp4329(((panda$collections$Iterable*) result4319));
                cl$Iter4327 = $tmp4331;
                $l4332:;
                ITable* $tmp4334 = cl$Iter4327->$class->itable;
                while ($tmp4334->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp4334 = $tmp4334->next;
                }
                $fn4336 $tmp4335 = $tmp4334->methods[0];
                panda$core$Bit $tmp4337 = $tmp4335(cl$Iter4327);
                panda$core$Bit $tmp4338 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4337);
                if (!$tmp4338.value) goto $l4333;
                {
                    ITable* $tmp4340 = cl$Iter4327->$class->itable;
                    while ($tmp4340->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp4340 = $tmp4340->next;
                    }
                    $fn4342 $tmp4341 = $tmp4340->methods[1];
                    panda$core$Object* $tmp4343 = $tmp4341(cl$Iter4327);
                    cl4339 = ((org$pandalanguage$pandac$ClassDecl*) $tmp4343);
                    panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classes, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) cl4339)->name), ((panda$core$Object*) cl4339));
                }
                goto $l4332;
                $l4333:;
            }
        }
        }
        else {
        {
            panda$collections$Array* $tmp4344 = (panda$collections$Array*) malloc(40);
            $tmp4344->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp4344->refCount.value = 1;
            panda$collections$Array$init($tmp4344);
            result4319 = ((panda$collections$ListView*) $tmp4344);
        }
        }
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->scans, ((panda$collections$Key*) p_file), ((panda$core$Object*) result4319));
    }
    }
    return result4319;
}
void org$pandalanguage$pandac$Compiler$compile$panda$io$File(org$pandalanguage$pandac$Compiler* self, panda$io$File* p_file) {
    panda$collections$ListView* classes4346;
    panda$collections$Iterator* cl$Iter4348;
    org$pandalanguage$pandac$ClassDecl* cl4360;
    panda$collections$ListView* $tmp4347 = org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(self, p_file);
    classes4346 = $tmp4347;
    {
        ITable* $tmp4349 = ((panda$collections$Iterable*) classes4346)->$class->itable;
        while ($tmp4349->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4349 = $tmp4349->next;
        }
        $fn4351 $tmp4350 = $tmp4349->methods[0];
        panda$collections$Iterator* $tmp4352 = $tmp4350(((panda$collections$Iterable*) classes4346));
        cl$Iter4348 = $tmp4352;
        $l4353:;
        ITable* $tmp4355 = cl$Iter4348->$class->itable;
        while ($tmp4355->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4355 = $tmp4355->next;
        }
        $fn4357 $tmp4356 = $tmp4355->methods[0];
        panda$core$Bit $tmp4358 = $tmp4356(cl$Iter4348);
        panda$core$Bit $tmp4359 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4358);
        if (!$tmp4359.value) goto $l4354;
        {
            ITable* $tmp4361 = cl$Iter4348->$class->itable;
            while ($tmp4361->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4361 = $tmp4361->next;
            }
            $fn4363 $tmp4362 = $tmp4361->methods[1];
            panda$core$Object* $tmp4364 = $tmp4362(cl$Iter4348);
            cl4360 = ((org$pandalanguage$pandac$ClassDecl*) $tmp4364);
            org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$ClassDecl(self, cl4360);
        }
        goto $l4353;
        $l4354:;
    }
}
void org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, panda$core$String* p_msg) {
    panda$core$Object* $tmp4365 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
    org$pandalanguage$pandac$Compiler$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$ClassDecl*) $tmp4365)->source, p_position, p_msg);
}
void org$pandalanguage$pandac$Compiler$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$Compiler* self, panda$io$File* p_file, org$pandalanguage$pandac$Position p_pos, panda$core$String* p_msg) {
    if (self->reportErrors.value) {
    {
        panda$core$Int64 $tmp4366 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->errorCount, ((panda$core$Int64) { 1 }));
        self->errorCount = $tmp4366;
        panda$core$String* $tmp4367 = panda$io$File$name$R$panda$core$String(p_file);
        panda$core$String* $tmp4368 = panda$core$String$convert$R$panda$core$String($tmp4367);
        panda$core$String* $tmp4370 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4368, &$s4369);
        panda$core$String* $tmp4371 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp4370, ((panda$core$Object*) wrap_org$pandalanguage$pandac$Position(p_pos)));
        panda$core$String* $tmp4373 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4371, &$s4372);
        panda$core$String* $tmp4374 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4373, p_msg);
        panda$core$String* $tmp4376 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4374, &$s4375);
        panda$io$Console$printLine$panda$core$Object(((panda$core$Object*) $tmp4376));
    }
    }
}
void org$pandalanguage$pandac$Compiler$finish(org$pandalanguage$pandac$Compiler* self) {
    ITable* $tmp4377 = self->codeGenerator->$class->itable;
    while ($tmp4377->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
        $tmp4377 = $tmp4377->next;
    }
    $fn4379 $tmp4378 = $tmp4377->methods[5];
    $tmp4378(self->codeGenerator);
}

