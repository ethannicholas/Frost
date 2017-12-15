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
#include "panda/core/Char8.h"
#include "panda/core/UInt8.h"
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
#include "panda/core/UInt32.h"
#include "panda/core/Char32.h"
#include "panda/core/Real64.h"
#include "panda/core/Char16.h"
#include "org/pandalanguage/pandac/Compiler/CompileTargetResult.h"
#include "panda/core/SteppedRange.LTpanda/core/Int64.Cpanda/core/Int64.GT.h"


struct { panda$core$Class* cl; ITable* next; void* methods[1]; } org$pandalanguage$pandac$Compiler$_org$pandalanguage$pandac$ErrorReporter = { (panda$core$Class*) &org$pandalanguage$pandac$ErrorReporter$class, NULL, { org$pandalanguage$pandac$Compiler$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String} };

org$pandalanguage$pandac$Compiler$class_type org$pandalanguage$pandac$Compiler$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &org$pandalanguage$pandac$Compiler$_org$pandalanguage$pandac$ErrorReporter, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, org$pandalanguage$pandac$Compiler$addAlias$panda$core$String, org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q, org$pandalanguage$pandac$Compiler$checkGenericParameters$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$Type$Q, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl, org$pandalanguage$pandac$Compiler$resolveMethodCall$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT, org$pandalanguage$pandac$Compiler$exists$panda$io$File$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$getClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q, org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Position$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q, org$pandalanguage$pandac$Compiler$specialize$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q, org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT, org$pandalanguage$pandac$Compiler$signatureMatch$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q, org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q, org$pandalanguage$pandac$Compiler$interfaceMethods$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT, org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable, org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT, org$pandalanguage$pandac$Compiler$addInheritedMethods$org$pandalanguage$pandac$SymbolTable$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT, org$pandalanguage$pandac$Compiler$getMethodReference$org$pandalanguage$pandac$SymbolTable$org$pandalanguage$pandac$IRNode$Q$panda$core$String$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$Compiler$symbolRef$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q, org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64, org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64, org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q, org$pandalanguage$pandac$Compiler$doCoerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$Compiler$callCost$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q, org$pandalanguage$pandac$Compiler$matchMethods$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q, org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$declaredTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$foldInts$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$Compiler$compileIndexedAssignment$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT, org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$IRNode$Q$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT, org$pandalanguage$pandac$Compiler$compilePrefix$panda$core$Int64$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compilePrefix$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileCall$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$String$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileIdentifier$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileRange$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileSelf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileSuper$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileNull$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileBlock$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileIf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileRangeFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileIteratorFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileFor$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileWhile$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileDo$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileLoop$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q, org$pandalanguage$pandac$Compiler$compileDeclaration$org$pandalanguage$pandac$ASTNode$panda$core$Int64$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileBreak$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileContinue$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileReturn$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileAssert$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileVar$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileWhenTest$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileChainedIfWhen$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileChainedIfMatch$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileWhen$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileOtherwise$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64, org$pandalanguage$pandac$Compiler$compileMatch$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileBody$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT, org$pandalanguage$pandac$Compiler$compile$panda$io$File, org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String, org$pandalanguage$pandac$Compiler$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String, org$pandalanguage$pandac$Compiler$finish} };

typedef void (*$fn23)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$Compiler*);
typedef panda$core$Object* (*$fn127)(panda$collections$MapView*, panda$core$Object*);
typedef panda$core$Int64 (*$fn172)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn179)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn220)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn234)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn244)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn252)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn259)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn357)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn363)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn369)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn376)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn382)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn388)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn442)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn448)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn454)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn465)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn471)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn477)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn483)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn489)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn495)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn503)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn509)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn515)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn580)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn586)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn592)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn620)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn652)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn658)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn664)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn683)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn689)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn695)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn721)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn727)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn733)(panda$collections$Iterator*);
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
typedef panda$collections$Iterator* (*$fn882)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn888)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn894)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn917)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn923)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn929)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn968)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn974)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn980)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn993)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn999)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1005)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1020)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1026)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1032)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1048)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1054)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1060)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1074)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1080)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1086)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1099)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1105)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1111)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1156)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1162)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1168)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1175)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1181)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1187)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1207)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1213)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1219)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1299)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn1403)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1409)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1415)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1441)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1447)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1453)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1567)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1571)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1574)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1659)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1665)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1671)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1824)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1947)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1953)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1959)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn2056)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2078)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Int64 (*$fn2100)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn2117)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2123)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2129)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn2145)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn2167)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn2241)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2259)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn2330)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn2348)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2354)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2360)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2391)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2397)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2403)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2440)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2446)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2452)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2475)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2481)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2487)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2925)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2931)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2937)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3069)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3075)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3081)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn3189)(panda$core$Object*);
typedef panda$core$Int64 (*$fn3298)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn3314)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3320)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3326)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3444)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3450)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3456)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3663)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3669)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3675)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3810)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3816)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3822)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3852)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3858)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3864)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3975)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3981)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3987)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4133)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4139)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4145)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4228)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4234)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4240)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4291)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4297)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4303)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4367)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4373)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4379)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4418)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4424)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4430)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4442)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4448)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4454)(panda$collections$Iterator*);
typedef void (*$fn4485)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$MethodDecl*, org$pandalanguage$pandac$IRNode*);
typedef void (*$fn4488)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$collections$Iterator* (*$fn4492)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4498)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4504)(panda$collections$Iterator*);
typedef void (*$fn4509)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn4512)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn4517)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$collections$Iterator* (*$fn4521)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4527)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4533)(panda$collections$Iterator*);
typedef void (*$fn4537)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$collections$Iterator* (*$fn4553)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4559)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4565)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4574)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4580)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4586)(panda$collections$Iterator*);
typedef void (*$fn4602)(org$pandalanguage$pandac$CodeGenerator*);

static panda$core$String $s26 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x69\x6C\x74\x69\x6E\x5F\x62\x69\x74", 11, -6555968936556617710, NULL };
static panda$core$String $s39 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x49\x6E\x74", 3, 1786200, NULL };
static panda$core$String $s40 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74\x36\x34", 16, -4218233432987190369, NULL };
static panda$core$String $s44 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x55\x49\x6E\x74", 4, 192391885, NULL };
static panda$core$String $s45 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x55\x49\x6E\x74\x36\x34", 17, -1766462914121118016, NULL };
static panda$core$String $s49 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x52\x65\x61\x6C", 4, 189585289, NULL };
static panda$core$String $s50 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x52\x65\x61\x6C\x36\x34", 17, -1766462942751203812, NULL };
static panda$core$String $s52 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x41\x72\x72\x61\x79", 23, 4189143066065790879, NULL };
static panda$core$String $s53 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x43\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E", 28, 2859598962617493300, NULL };
static panda$core$String $s54 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x43\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x56\x69\x65\x77", 32, 608517271074877699, NULL };
static panda$core$String $s55 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x43\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x57\x72\x69\x74\x65\x72", 34, -9068070593840742067, NULL };
static panda$core$String $s56 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x49\x64\x65\x6E\x74\x69\x74\x79\x4D\x61\x70", 29, -1297284844070118424, NULL };
static panda$core$String $s57 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x49\x6D\x6D\x75\x74\x61\x62\x6C\x65\x41\x72\x72\x61\x79", 32, 4042060440237596131, NULL };
static panda$core$String $s58 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x49\x74\x65\x72\x61\x62\x6C\x65", 26, 1346324154505061576, NULL };
static panda$core$String $s59 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x49\x74\x65\x72\x61\x74\x6F\x72", 26, 1346324154505245510, NULL };
static panda$core$String $s60 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x4B\x65\x79", 21, -4500515327555727959, NULL };
static panda$core$String $s61 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x4C\x69\x73\x74", 22, 6616553759611337156, NULL };
static panda$core$String $s62 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x4C\x69\x73\x74\x56\x69\x65\x77", 26, 1346634265727302291, NULL };
static panda$core$String $s63 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x4C\x69\x73\x74\x57\x72\x69\x74\x65\x72", 28, -5808190217954538403, NULL };
static panda$core$String $s64 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x48\x61\x73\x68\x4D\x61\x70", 25, -7657594595818158330, NULL };
static panda$core$String $s65 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x4D\x61\x70", 21, -4500515327555707970, NULL };
static panda$core$String $s66 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x4D\x61\x70\x56\x69\x65\x77", 25, -7657589288547845907, NULL };
static panda$core$String $s67 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x4D\x61\x70\x57\x72\x69\x74\x65\x72", 27, 6892819694825741479, NULL };
static panda$core$String $s68 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x53\x65\x74", 21, -4500515327555646356, NULL };
static panda$core$String $s69 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x53\x70\x65\x63\x69\x61\x6C\x69\x7A\x65\x64\x41\x72\x72\x61\x79", 34, 3135313918436209288, NULL };
static panda$core$String $s70 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x53\x74\x61\x63\x6B", 23, 4189143067940765470, NULL };
static panda$core$String $s71 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x43\x6C\x61\x73\x73", 16, -4218233433613800972, NULL };
static panda$core$String $s72 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x42\x69\x74", 14, -8202984937925717763, NULL };
static panda$core$String $s73 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x43\x68\x61\x72\x38", 16, -4218233433617922336, NULL };
static panda$core$String $s74 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x43\x68\x61\x72\x31\x36", 17, -1766463100090469421, NULL };
static panda$core$String $s75 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x43\x68\x61\x72\x33\x32", 17, -1766463100090469223, NULL };
static panda$core$String $s76 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x43\x6F\x6D\x70\x61\x72\x61\x62\x6C\x65", 21, -5254568576296725552, NULL };
static panda$core$String $s77 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x45\x71\x75\x61\x74\x61\x62\x6C\x65", 20, 3987957135724734002, NULL };
static panda$core$String $s78 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74\x38", 15, 1602004586439591825, NULL };
static panda$core$String $s79 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74\x31\x36", 16, -4218233432987190872, NULL };
static panda$core$String $s80 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74\x33\x32", 16, -4218233432987190674, NULL };
static panda$core$String $s81 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74\x36\x34", 16, -4218233432987190369, NULL };
static panda$core$String $s82 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6D\x6D\x75\x74\x61\x62\x6C\x65", 20, 4030834267849819614, NULL };
static panda$core$String $s83 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x4D\x75\x74\x61\x62\x6C\x65\x53\x74\x72\x69\x6E\x67", 24, -1180377191894570377, NULL };
static panda$core$String $s84 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x4F\x62\x6A\x65\x63\x74", 17, -1766462974584480607, NULL };
static panda$core$String $s85 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x50\x61\x6E\x64\x61", 16, -4218233432272217990, NULL };
static panda$core$String $s86 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x52\x61\x6E\x67\x65", 16, -4218233432064096881, NULL };
static panda$core$String $s87 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x52\x65\x61\x6C\x33\x32", 17, -1766462942751204117, NULL };
static panda$core$String $s88 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x52\x65\x61\x6C\x36\x34", 17, -1766462942751203812, NULL };
static panda$core$String $s89 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x53\x69\x6D\x70\x6C\x65\x52\x61\x6E\x67\x65", 22, -5809978584159753927, NULL };
static panda$core$String $s90 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6E\x67\x65", 23, -7661850693661404164, NULL };
static panda$core$String $s91 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x53\x74\x72\x69\x6E\x67", 17, -1766462930662707075, NULL };
static panda$core$String $s92 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x53\x79\x73\x74\x65\x6D", 17, -1766462930141263461, NULL };
static panda$core$String $s93 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x55\x49\x6E\x74\x38", 16, -4218233431776641634, NULL };
static panda$core$String $s94 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x55\x49\x6E\x74\x31\x36", 17, -1766462914121118519, NULL };
static panda$core$String $s95 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x55\x49\x6E\x74\x33\x32", 17, -1766462914121118321, NULL };
static panda$core$String $s96 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x55\x49\x6E\x74\x36\x34", 17, -1766462914121118016, NULL };
static panda$core$String $s97 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x56\x61\x6C\x75\x65", 16, -4218233431647874265, NULL };
static panda$core$String $s98 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x6D\x61\x74\x68\x2E\x52\x61\x6E\x64\x6F\x6D", 17, -791852923676021540, NULL };
static panda$core$String $s99 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x6D\x61\x74\x68\x2E\x58\x6F\x72\x53\x68\x69\x66\x74\x31\x32\x38\x50\x6C\x75\x73", 26, 215641961116556169, NULL };
static panda$core$String $s100 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x69\x6F\x2E\x43\x6F\x6E\x73\x6F\x6C\x65", 16, 2336552278051400340, NULL };
static panda$core$String $s101 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x69\x6F\x2E\x46\x69\x6C\x65", 13, 4119532389314393493, NULL };
static panda$core$String $s102 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x69\x6F\x2E\x49\x6E\x64\x65\x6E\x74\x65\x64\x4F\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6D", 29, 1042140495667569485, NULL };
static panda$core$String $s103 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x69\x6F\x2E\x49\x6E\x70\x75\x74\x53\x74\x72\x65\x61\x6D", 20, -2955417606099851271, NULL };
static panda$core$String $s104 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x69\x6F\x2E\x4C\x69\x6E\x65\x4E\x75\x6D\x62\x65\x72\x49\x6E\x70\x75\x74\x53\x74\x72\x65\x61\x6D", 30, 6529214259521028726, NULL };
static panda$core$String $s105 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x69\x6F\x2E\x4D\x65\x6D\x6F\x72\x79\x49\x6E\x70\x75\x74\x53\x74\x72\x65\x61\x6D", 26, -2754778238192978458, NULL };
static panda$core$String $s106 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x69\x6F\x2E\x4D\x65\x6D\x6F\x72\x79\x4F\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6D", 27, -1871907680230610725, NULL };
static panda$core$String $s107 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x69\x6F\x2E\x4F\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6D", 21, -3689739765115213222, NULL };
static panda$core$String $s108 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x69\x6F\x2E\x50\x75\x73\x68\x62\x61\x63\x6B\x49\x6E\x70\x75\x74\x53\x74\x72\x65\x61\x6D", 28, -1415712807475310042, NULL };
static panda$core$String $s109 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s113 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s135 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s141 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s157 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s184 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s185 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, 216, NULL };
static panda$core$String $s186 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s188 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x65\x78\x70\x65\x63\x74\x65\x64\x20", 11, 5549333425848529514, NULL };
static panda$core$String $s191 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x67\x65\x6E\x65\x72\x69\x63\x20\x70\x61\x72\x61\x6D\x65\x74\x65\x72", 18, 754488464303810091, NULL };
static panda$core$String $s194 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x62\x75\x74\x20", 6, 1527396680240, NULL };
static panda$core$String $s196 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x6F\x75\x6E\x64\x20", 6, 2145222783673, NULL };
static panda$core$String $s198 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s238 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x65\x6E\x65\x72\x69\x63\x20\x70\x61\x72\x61\x6D\x65\x74\x65\x72\x20\x27", 19, -7104957698969262010, NULL };
static panda$core$String $s240 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s247 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20", 10, 5900311425897229264, NULL };
static panda$core$String $s249 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6F\x66\x20\x74\x79\x70\x65\x20\x27", 9, 2306627197047234467, NULL };
static panda$core$String $s255 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 14, 2262695563077912654, NULL };
static panda$core$String $s262 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s286 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x6B\x6E\x6F\x77\x6E\x20\x74\x79\x70\x65\x20\x27", 14, 1254433276954177894, NULL };
static panda$core$String $s288 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s301 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3F", 1, 164, NULL };
static panda$core$String $s317 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s336 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s396 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x74\x65\x72\x66\x61\x63\x65\x20\x27", 11, 2825576507357767077, NULL };
static panda$core$String $s398 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x65\x78\x74\x65\x6E\x64\x20\x63\x6C\x61\x73\x73\x20", 22, -8406128752343392811, NULL };
static panda$core$String $s400 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s402 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s407 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x75\x70\x65\x72\x63\x6C\x61\x73\x73\x20\x27", 12, 3706067405940886645, NULL };
static panda$core$String $s409 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x6F\x66\x20\x63\x6C\x61\x73\x73\x20\x27", 12, -633030867692887714, NULL };
static panda$core$String $s412 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20", 10, 5900311425897229264, NULL };
static panda$core$String $s414 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x69\x73\x74\x65\x64\x20\x62\x65\x66\x6F\x72\x65\x20\x61\x6E\x79\x20\x73\x75\x70\x65\x72\x69\x6E\x74\x65\x72\x66\x61\x63\x65\x73", 33, 4787050402069409712, NULL };
static panda$core$String $s416 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6C\x61\x73\x73\x20\x27", 7, 213449334494206, NULL };
static panda$core$String $s418 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x68\x61\x73\x20\x6D\x6F\x72\x65\x20\x74\x68\x61\x6E\x20\x6F\x6E\x65\x20\x73\x75\x70\x65\x72\x63\x6C\x61\x73\x73", 30, -759923653827872275, NULL };
static panda$core$String $s423 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x4F\x62\x6A\x65\x63\x74", 17, -1766462974584480607, NULL };
static panda$core$String $s434 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x56\x61\x6C\x75\x65", 16, -4218233431647874265, NULL };
static panda$core$String $s526 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x6F\x76\x65\x72\x72\x69\x64\x65\x73\x20", 11, 1426563750390550596, NULL };
static panda$core$String $s530 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s532 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x74\x20\x69\x73\x20\x6E\x6F\x74\x20\x6D\x61\x72\x6B\x65\x64\x20\x40\x6F\x76\x65\x72\x72\x69\x64\x65", 27, -5223536864783252703, NULL };
static panda$core$String $s541 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x6F\x76\x65\x72\x72\x69\x64\x65\x73\x20", 11, 1426563750390550596, NULL };
static panda$core$String $s545 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s547 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x74\x20\x6D\x65\x74\x68\x6F\x64\x73\x20\x63\x61\x6E\x6E\x6F\x74\x20\x6F\x76\x65\x72\x72\x69\x64\x65\x20\x66\x75\x6E\x63\x74\x69\x6F\x6E\x73", 37, 7193225585860914176, NULL };
static panda$core$String $s552 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x69\x73\x20\x6D\x61\x72\x6B\x65\x64\x20\x40\x6F\x76\x65\x72\x72\x69\x64\x65\x2C\x20\x62\x75\x74\x20\x6E\x6F\x20\x6D\x61\x74\x63\x68\x69\x6E\x67\x20", 38, -6085226934842474132, NULL };
static panda$core$String $s554 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6D\x65\x74\x68\x6F\x64\x20\x65\x78\x69\x73\x74\x73\x20\x61\x6D\x6F\x6E\x67\x20\x69\x74\x73\x20\x61\x6E\x63\x65\x73\x74\x6F\x72\x73", 33, -5331763662845728394, NULL };
static panda$core$String $s563 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x69\x65\x6C\x64\x20\x68\x61\x73\x20\x6E\x65\x69\x74\x68\x65\x72\x20\x61\x20\x74\x79\x70\x65\x20\x6E\x6F\x72\x20\x61\x20\x76\x61\x6C\x75\x65", 36, 5735293162260763604, NULL };
static panda$core$String $s614 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x6F\x20\x6F\x72\x20\x61\x6D\x62\x69\x67\x75\x6F\x75\x73\x20\x6D\x61\x74\x63\x68\x20\x6F\x6E\x20\x6D\x65\x74\x68\x6F\x64\x20\x63\x61\x6C\x6C\x20\x28", 38, 3392199122829501018, NULL };
static panda$core$String $s616 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s623 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s626 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s628 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x6B\x6E\x6F\x77\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 18, 1104129620483010492, NULL };
static panda$core$String $s630 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x73\x75\x70\x65\x72\x27\x20\x63\x61\x6E\x20\x6F\x6E\x6C\x79\x20\x62\x65\x20\x75\x73\x65\x64\x20\x61\x73\x20\x70\x61\x72\x74\x20\x6F\x66\x20\x61\x20\x6D\x65\x74\x68\x6F\x64\x20\x63\x61\x6C\x6C", 49, 5687166824689512368, NULL };
static panda$core$String $s635 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x56\x61\x6C\x75\x65", 16, -4218233431647874265, NULL };
static panda$core$String $s674 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s675 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, 148, NULL };
static panda$core$String $s677 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x70\x61\x6E\x64\x61", 6, 1556740610063, NULL };
static panda$core$String $s702 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s712 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s713 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, 148, NULL };
static panda$core$String $s715 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x70\x61\x6E\x64\x61", 6, 1556740610063, NULL };
static panda$core$String $s745 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x66\x69\x6C\x65\x20\x27", 15, -3519420271001816814, NULL };
static panda$core$String $s747 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x74\x6F\x20\x63\x6F\x6E\x74\x61\x69\x6E\x20\x61\x20\x63\x6C\x61\x73\x73\x20\x6E\x61\x6D\x65\x64\x20\x27", 28, 3445503135242247770, NULL };
static panda$core$String $s750 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s753 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x6F\x20\x66\x69\x6C\x65\x20\x6E\x61\x6D\x65\x64\x20", 14, 8876718408773305983, NULL };
static panda$core$String $s755 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x69\x6E\x20\x61\x6E\x79\x20\x69\x6D\x70\x6F\x72\x74\x20\x70\x61\x74\x68\x20\x28", 21, 3105450433703869576, NULL };
static panda$core$String $s758 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1249 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x73\x75\x70\x65\x72\x27\x20\x63\x61\x6E\x20\x6F\x6E\x6C\x79\x20\x62\x65\x20\x75\x73\x65\x64\x20\x61\x73\x20\x70\x61\x72\x74\x20\x6F\x66\x20\x61\x20\x6D\x65\x74\x68\x6F\x64\x20\x63\x61\x6C\x6C", 49, 5687166824689512368, NULL };
static panda$core$String $s1294 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s1372 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 19485, NULL };
static panda$core$String $s1649 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 19485, NULL };
static panda$core$String $s1854 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27", 10, 875040426634827830, NULL };
static panda$core$String $s1856 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 14, 2262695563077912654, NULL };
static panda$core$String $s1859 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1884 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27", 10, 875040426634827830, NULL };
static panda$core$String $s1886 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 14, 2262695563077912654, NULL };
static panda$core$String $s1889 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1922 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 19485, NULL };
static panda$core$String $s1988 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27", 10, 875040426634827830, NULL };
static panda$core$String $s1990 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 14, 2262695563077912654, NULL };
static panda$core$String $s1993 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2033 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6C\x75\x65\x20\x6F\x66\x20\x74\x79\x70\x65\x20\x27", 15, -1620219380461029456, NULL };
static panda$core$String $s2035 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x70\x6F\x73\x73\x69\x62\x6C\x79\x20\x62\x65\x20\x61\x6E\x20\x69\x6E\x73\x74\x61\x6E\x63\x65\x20\x6F\x66\x20", 36, -427166674877421096, NULL };
static panda$core$String $s2037 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2039 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2151 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2152 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, 216, NULL };
static panda$core$String $s2155 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x65\x78\x70\x65\x63\x74\x65\x64\x20", 10, -1007140463547215113, NULL };
static panda$core$String $s2159 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x61\x72\x67\x75\x6D\x65\x6E\x74", 9, 1450721239526715900, NULL };
static panda$core$String $s2162 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2164 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x74\x20\x72\x65\x63\x65\x69\x76\x65\x64\x20", 13, -1301083486074551925, NULL };
static panda$core$String $s2170 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2194 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x64\x69\x72\x65\x63\x74\x6C\x79\x20\x63\x61\x6C\x6C\x20\x27\x69\x6E\x69\x74\x27\x20\x6F\x75\x74\x73\x69\x64\x65\x20\x6F\x66\x20\x61\x6E\x20\x69\x6E\x69\x74\x20\x6D\x65\x74\x68\x6F\x64", 53, 84993564105955720, NULL };
static panda$core$String $s2204 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x69\x6E\x69\x74\x27\x20\x6D\x61\x79\x20\x6F\x6E\x6C\x79\x20\x62\x65\x20\x63\x61\x6C\x6C\x65\x64\x20\x6F\x6E\x20\x27\x73\x65\x6C\x66\x27\x20\x6F\x72\x20\x27\x73\x75\x70\x65\x72\x27", 46, 5737688576853633111, NULL };
static panda$core$String $s2219 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x63\x61\x6C\x6C\x20\x69\x6E\x73\x74\x61\x6E\x63\x65\x20", 21, -1285496544752055923, NULL };
static panda$core$String $s2222 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x66\x72\x6F\x6D\x20\x61\x20\x40\x63\x6C\x61\x73\x73\x20\x63\x6F\x6E\x74\x65\x78\x74", 22, 6236893689928691337, NULL };
static panda$core$String $s2233 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x63\x61\x6C\x6C\x20\x63\x6C\x61\x73\x73\x20", 18, 4176321021903236102, NULL };
static panda$core$String $s2236 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x6F\x6E\x20\x61\x6E\x20\x69\x6E\x73\x74\x61\x6E\x63\x65", 15, 4946791728819903386, NULL };
static panda$core$String $s2272 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s2291 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6C\x61\x73\x73\x20\x27", 7, 213449334494206, NULL };
static panda$core$String $s2293 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x64\x6F\x65\x73\x20\x6E\x6F\x74\x20\x68\x61\x76\x65\x20\x61\x20\x6D\x65\x6D\x62\x65\x72\x20\x6E\x61\x6D\x65\x64\x20\x27", 32, -5677460192622646983, NULL };
static panda$core$String $s2296 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2303 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2305 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s2308 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x69\x73\x20\x6E\x6F\x74\x20\x61\x20\x6D\x65\x74\x68\x6F\x64", 17, 1918101523522592587, NULL };
static panda$core$String $s2335 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x6F\x20\x6D\x61\x74\x63\x68\x20\x66\x6F\x72\x20\x63\x61\x6C\x6C\x20\x74\x6F\x20\x27", 22, 7814600009206081200, NULL };
static panda$core$String $s2337 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s2340 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2344 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2362 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2363 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x27", 2, 14381, NULL };
static panda$core$String $s2364 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x77\x69\x74\x68\x20\x72\x65\x74\x75\x72\x6E\x20\x74\x79\x70\x65\x20\x27", 19, -3030064837581027794, NULL };
static panda$core$String $s2366 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2414 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x69\x74", 4, 213374837, NULL };
static panda$core$String $s2424 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6C\x75\x65\x20\x6F\x66\x20\x74\x79\x70\x65\x20\x27", 15, -1620219380461029456, NULL };
static panda$core$String $s2426 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x69\x73\x20\x6E\x6F\x74\x20\x61\x20\x6D\x65\x74\x68\x6F\x64", 17, 1918101523522592587, NULL };
static panda$core$String $s2434 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2436 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2454 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2457 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x3E\x28", 4, 146931305, NULL };
static panda$core$String $s2458 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x26\x3E\x28", 5, 14839819243, NULL };
static panda$core$String $s2471 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2489 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2492 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x3E\x28", 4, 146931305, NULL };
static panda$core$String $s2493 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x26\x3E\x28", 5, 14839819243, NULL };
static panda$core$String $s2510 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2B", 1, 144, NULL };
static panda$core$String $s2511 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D", 1, 146, NULL };
static panda$core$String $s2512 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 143, NULL };
static panda$core$String $s2513 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, 148, NULL };
static panda$core$String $s2514 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F\x2F", 2, 14995, NULL };
static panda$core$String $s2515 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 138, NULL };
static panda$core$String $s2516 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5E", 1, 195, NULL };
static panda$core$String $s2517 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3D", 1, 162, NULL };
static panda$core$String $s2518 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x3D", 2, 13595, NULL };
static panda$core$String $s2519 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 163, NULL };
static panda$core$String $s2520 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 161, NULL };
static panda$core$String $s2521 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E\x3D", 2, 16524, NULL };
static panda$core$String $s2522 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x3D", 2, 16322, NULL };
static panda$core$String $s2523 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1, 225, NULL };
static panda$core$String $s2524 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C\x7C", 2, 22849, NULL };
static panda$core$String $s2525 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s2526 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26\x26", 2, 14077, NULL };
static panda$core$String $s2527 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7E", 1, 227, NULL };
static panda$core$String $s2528 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7E\x7E", 2, 23053, NULL };
static panda$core$String $s2529 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21", 1, 134, NULL };
static panda$core$String $s2530 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x21", 2, 13567, NULL };
static panda$core$String $s2531 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x3C", 2, 16321, NULL };
static panda$core$String $s2532 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E\x3E", 2, 16525, NULL };
static panda$core$String $s2533 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 19485, NULL };
static panda$core$String $s2534 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A\x3D", 2, 16120, NULL };
static panda$core$String $s2535 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3D\x3D", 2, 16423, NULL };
static panda$core$String $s2536 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x3D\x3D", 3, 1373156, NULL };
static panda$core$String $s2657 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x76\x61\x6C\x69\x64\x20\x6E\x75\x6D\x65\x72\x69\x63\x20\x6F\x70\x65\x72\x61\x74\x69\x6F\x6E", 25, 9019145596080302696, NULL };
static panda$core$String $s2669 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D\x3A\x3D", 4, 198772404, NULL };
static panda$core$String $s2717 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6F\x6E\x76\x65\x72\x74", 7, 213482220537370, NULL };
static panda$core$String $s2721 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D\x3A\x3D", 4, 198772404, NULL };
static panda$core$String $s2819 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2822 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x6F\x70\x65\x72\x61\x74\x65\x20\x6F\x6E\x20\x27", 21, -3266050109438970469, NULL };
static panda$core$String $s2825 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20", 3, 1432616, NULL };
static panda$core$String $s2827 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2829 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2836 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2839 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x6F\x70\x65\x72\x61\x74\x65\x20\x6F\x6E\x20\x27", 21, -3266050109438970469, NULL };
static panda$core$String $s2842 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20", 3, 1432616, NULL };
static panda$core$String $s2844 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2846 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2868 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x61\x73\x73\x69\x67\x6E\x20\x74\x6F\x20\x74\x68\x69\x73\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6F\x6E", 32, -4891466264852316840, NULL };
static panda$core$String $s2880 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x61\x73\x73\x69\x67\x6E\x20\x74\x6F\x20\x74\x68\x69\x73\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6F\x6E", 32, -4891466264852316840, NULL };
static panda$core$String $s2897 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6F\x6E\x76\x65\x72\x74", 7, 213482220537370, NULL };
static panda$core$String $s2910 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 19485, NULL };
static panda$core$String $s2979 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2982 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x6F\x70\x65\x72\x61\x74\x65\x20\x6F\x6E\x20\x27", 21, -3266050109438970469, NULL };
static panda$core$String $s2985 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20\x27", 4, 144694255, NULL };
static panda$core$String $s2988 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3102 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x6D\x65\x74\x68\x6F\x64\x3E", 8, 17378158564789264, NULL };
static panda$core$String $s3125 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6E\x75\x6D\x62\x65\x72\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 30, 5304221197101987767, NULL };
static panda$core$String $s3127 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3135 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6E\x75\x6D\x62\x65\x72\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 30, 5304221197101987767, NULL };
static panda$core$String $s3137 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3191 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s3194 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3213 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6C\x61\x73\x73\x20\x27", 7, 213449334494206, NULL };
static panda$core$String $s3215 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x64\x6F\x65\x73\x20\x6E\x6F\x74\x20\x68\x61\x76\x65\x20\x61\x20\x6D\x65\x6D\x62\x65\x72\x20\x6E\x61\x6D\x65\x64\x20\x27", 32, -5677460192622646983, NULL };
static panda$core$String $s3218 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3283 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x75\x6E\x72\x65\x73\x6F\x6C\x76\x65\x64\x20\x72\x61\x6E\x67\x65\x3E", 18, -1293962867859660245, NULL };
static panda$core$String $s3292 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x72\x65\x66\x65\x72\x65\x6E\x63\x65\x20\x27\x73\x65\x6C\x66\x27\x20\x66\x72\x6F\x6D\x20\x61\x20\x40\x63\x6C\x61\x73\x73\x20\x6D\x65\x74\x68\x6F\x64", 44, -511889306060728385, NULL };
static panda$core$String $s3310 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3333 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s3336 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3340 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3351 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x72\x65\x66\x65\x72\x65\x6E\x63\x65\x20\x27\x73\x75\x70\x65\x72\x27\x20\x66\x72\x6F\x6D\x20\x61\x20\x40\x63\x6C\x61\x73\x73\x20\x6D\x65\x74\x68\x6F\x64", 45, 3734810722724983720, NULL };
static panda$core$String $s3359 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s3383 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6C\x75\x65\x20\x6F\x66\x20\x74\x79\x70\x65\x20\x27", 15, -1620219380461029456, NULL };
static panda$core$String $s3385 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x70\x6F\x73\x73\x69\x62\x6C\x79\x20\x62\x65\x20\x61\x6E\x20\x69\x6E\x73\x74\x61\x6E\x63\x65\x20\x6F\x66\x20", 36, -427166674877421096, NULL };
static panda$core$String $s3387 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3389 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3416 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x64\x6F\x65\x73\x20\x6E\x6F\x74\x20\x72\x65\x74\x75\x72\x6E\x20\x61\x20\x76\x61\x6C\x75\x65", 24, -3977552604268313933, NULL };
static panda$core$String $s3564 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 161, NULL };
static panda$core$String $s3568 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 163, NULL };
static panda$core$String $s3573 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x49\x74\x65\x72", 5, 14332680541, NULL };
static panda$core$String $s3596 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x65\x74\x5F\x64\x6F\x6E\x65", 8, 21980003879763538, NULL };
static panda$core$String $s3601 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21", 1, 134, NULL };
static panda$core$String $s3613 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x65\x78\x74", 4, 218436048, NULL };
static panda$core$String $s3699 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x74\x65\x72\x61\x74\x6F\x72", 8, 22210198075044275, NULL };
static panda$core$String $s3707 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6E\x20\x49\x74\x65\x72\x61\x62\x6C\x65\x20\x6F\x72\x20\x49\x74\x65\x72\x61\x74\x6F\x72\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 45, 562271959045909027, NULL };
static panda$core$String $s3709 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3772 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x63\x6C\x61\x72\x61\x74\x69\x6F\x6E\x20\x68\x61\x73\x20\x6E\x65\x69\x74\x68\x65\x72\x20\x61\x20\x74\x79\x70\x65\x20\x6E\x6F\x72\x20\x61\x20\x76\x61\x6C\x75\x65", 42, 71025131614347466, NULL };
static panda$core$String $s3833 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x62\x72\x65\x61\x6B\x20", 7, 149654778879689, NULL };
static panda$core$String $s3835 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20\x69\x6E\x73\x69\x64\x65\x20\x61\x20\x6C\x6F\x6F\x70\x20\x6C\x61\x62\x65\x6C\x6C\x65\x64\x20", 33, 5869484791969643332, NULL };
static panda$core$String $s3837 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3839 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A\x27", 2, 16098, NULL };
static panda$core$String $s3844 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x62\x72\x65\x61\x6B\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20\x69\x6E\x73\x69\x64\x65\x20\x61\x20\x6C\x6F\x6F\x70", 29, -2107280000252113069, NULL };
static panda$core$String $s3875 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x63\x6F\x6E\x74\x69\x6E\x75\x65\x20", 10, 6626032424543403513, NULL };
static panda$core$String $s3877 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20\x69\x6E\x73\x69\x64\x65\x20\x61\x20\x6C\x6F\x6F\x70\x20\x6C\x61\x62\x65\x6C\x6C\x65\x64\x20", 33, 5869484791969643332, NULL };
static panda$core$String $s3879 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3881 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A\x27", 2, 16098, NULL };
static panda$core$String $s3886 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x63\x6F\x6E\x74\x69\x6E\x75\x65\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20\x69\x6E\x73\x69\x64\x65\x20\x61\x20\x6C\x6F\x6F\x70", 32, -6048052453244835837, NULL };
static panda$core$String $s3900 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x72\x65\x74\x75\x72\x6E\x20\x61\x20\x76\x61\x6C\x75\x65\x20\x66\x72\x6F\x6D\x20\x61\x20\x6D\x65\x74\x68\x6F\x64\x20\x77\x69\x74\x68\x20\x6E\x6F\x20\x72\x65\x74\x75\x72\x6E\x20\x74\x79\x70\x65", 55, -6755143087675264705, NULL };
static panda$core$String $s3914 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x72\x65\x74\x75\x72\x6E\x20\x76\x61\x6C\x75\x65", 23, 6159277012237708805, NULL };
static panda$core$String $s3934 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6C\x75\x65", 5, 22890280642, NULL };
static panda$core$String $s4001 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3D", 1, 162, NULL };
static panda$core$String $s4038 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1, 225, NULL };
static panda$core$String $s4089 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x6D\x61\x74\x63\x68\x24", 7, 146584075981198, NULL };
static panda$core$String $s4091 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5F", 1, 196, NULL };
static panda$core$String $s4094 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4592 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A", 1, 159, NULL };
static panda$core$String $s4595 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A\x20\x65\x72\x72\x6F\x72\x3A\x20", 9, 1725281418740475535, NULL };
static panda$core$String $s4598 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };

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
    panda$core$String* s182;
    org$pandalanguage$pandac$Type* object201;
    panda$core$Range$LTpanda$core$Int64$GT $tmp203;
    org$pandalanguage$pandac$Type* bound217;
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
        panda$core$Bit $tmp183 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(expectedCount169, ((panda$core$Int64) { 1 }));
        if ($tmp183.value) {
        {
            s182 = &$s184;
        }
        }
        else {
        {
            s182 = &$s185;
        }
        }
        panda$core$String* $tmp187 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s186, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp189 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp187, &$s188);
        panda$core$String* $tmp190 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp189, ((panda$core$Object*) wrap_panda$core$Int64(expectedCount169)));
        panda$core$String* $tmp192 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp190, &$s191);
        panda$core$String* $tmp193 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp192, s182);
        panda$core$String* $tmp195 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp193, &$s194);
        panda$core$String* $tmp197 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s196, ((panda$core$Object*) wrap_panda$core$Int64(foundCount176)));
        panda$core$String* $tmp199 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp197, &$s198);
        panda$core$String* $tmp200 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp195, $tmp199);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp200);
        return ((panda$core$Bit) { false });
    }
    }
    org$pandalanguage$pandac$Type* $tmp202 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    object201 = $tmp202;
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp203, ((panda$core$Int64) { 0 }), expectedCount169, ((panda$core$Bit) { false }));
    int64_t $tmp205 = $tmp203.min.value;
    panda$core$Int64 i204 = { $tmp205 };
    int64_t $tmp207 = $tmp203.max.value;
    bool $tmp208 = $tmp203.inclusive.value;
    if ($tmp208) goto $l215; else goto $l216;
    $l215:;
    if ($tmp205 <= $tmp207) goto $l209; else goto $l211;
    $l216:;
    if ($tmp205 < $tmp207) goto $l209; else goto $l211;
    $l209:;
    {
        ITable* $tmp218 = ((panda$collections$ListView*) p_cl->parameters)->$class->itable;
        while ($tmp218->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp218 = $tmp218->next;
        }
        $fn220 $tmp219 = $tmp218->methods[0];
        panda$core$Object* $tmp221 = $tmp219(((panda$collections$ListView*) p_cl->parameters), i204);
        bound217 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp221)->bound;
        panda$core$Bit $tmp223 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(bound217, object201);
        bool $tmp222 = $tmp223.value;
        if ($tmp222) goto $l224;
        panda$core$Bit $tmp226 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(bound217->typeKind, ((panda$core$Int64) { 11 }));
        bool $tmp225 = $tmp226.value;
        if (!$tmp225) goto $l227;
        panda$core$Object* $tmp228 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(bound217->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp229 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp228), object201);
        $tmp225 = $tmp229.value;
        $l227:;
        panda$core$Bit $tmp230 = { $tmp225 };
        $tmp222 = $tmp230.value;
        $l224:;
        panda$core$Bit $tmp231 = { $tmp222 };
        if ($tmp231.value) {
        {
            goto $l212;
        }
        }
        ITable* $tmp232 = foundTypes174->$class->itable;
        while ($tmp232->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp232 = $tmp232->next;
        }
        $fn234 $tmp233 = $tmp232->methods[0];
        panda$core$Object* $tmp235 = $tmp233(foundTypes174, i204);
        org$pandalanguage$pandac$Type* $tmp236 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_type, bound217);
        panda$core$Int64$nullable $tmp237 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$Type*) $tmp235), $tmp236);
        if (((panda$core$Bit) { !$tmp237.nonnull }).value) {
        {
            panda$core$String* $tmp239 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s238, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
            panda$core$String* $tmp241 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp239, &$s240);
            ITable* $tmp242 = ((panda$collections$ListView*) p_cl->parameters)->$class->itable;
            while ($tmp242->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp242 = $tmp242->next;
            }
            $fn244 $tmp243 = $tmp242->methods[0];
            panda$core$Object* $tmp245 = $tmp243(((panda$collections$ListView*) p_cl->parameters), i204);
            panda$core$String* $tmp246 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp241, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp245))->name);
            panda$core$String* $tmp248 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp246, &$s247);
            ITable* $tmp250 = ((panda$collections$ListView*) p_cl->parameters)->$class->itable;
            while ($tmp250->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp250 = $tmp250->next;
            }
            $fn252 $tmp251 = $tmp250->methods[0];
            panda$core$Object* $tmp253 = $tmp251(((panda$collections$ListView*) p_cl->parameters), i204);
            panda$core$String* $tmp254 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s249, ((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp253)->bound));
            panda$core$String* $tmp256 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp254, &$s255);
            ITable* $tmp257 = foundTypes174->$class->itable;
            while ($tmp257->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp257 = $tmp257->next;
            }
            $fn259 $tmp258 = $tmp257->methods[0];
            panda$core$Object* $tmp260 = $tmp258(foundTypes174, i204);
            panda$core$String* $tmp261 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp256, ((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp260)));
            panda$core$String* $tmp263 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp261, &$s262);
            panda$core$String* $tmp264 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp248, $tmp263);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp264);
            return ((panda$core$Bit) { false });
        }
        }
    }
    $l212:;
    int64_t $tmp266 = $tmp207 - i204.value;
    if ($tmp208) goto $l267; else goto $l268;
    $l267:;
    if ($tmp266 >= 1) goto $l265; else goto $l211;
    $l268:;
    if ($tmp266 > 1) goto $l265; else goto $l211;
    $l265:;
    i204.value += 1;
    goto $l209;
    $l211:;
    return ((panda$core$Bit) { true });
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$Type$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type, panda$core$Bit p_checkParameters) {
    org$pandalanguage$pandac$ClassDecl* resolved271;
    org$pandalanguage$pandac$Type* result273;
    org$pandalanguage$pandac$Symbol* s277;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* gp281;
    panda$collections$Array* subtypes292;
    org$pandalanguage$pandac$Type* sub295;
    panda$collections$Array* subtypes305;
    org$pandalanguage$pandac$Type* base308;
    panda$core$MutableString* name311;
    panda$core$Char8 $tmp315;
    panda$core$String* separator316;
    panda$core$Range$LTpanda$core$Int64$GT $tmp318;
    org$pandalanguage$pandac$Type* resolved333;
    panda$core$Char8 $tmp343;
    org$pandalanguage$pandac$Type* result344;
    if (p_type->resolved.value) {
    {
        return p_type;
    }
    }
    switch (p_type->typeKind.value) {
        case 10:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp272 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Symbol*) p_type)->name);
            resolved271 = $tmp272;
            if (((panda$core$Bit) { resolved271 != NULL }).value) {
            {
                org$pandalanguage$pandac$Type* $tmp274 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(resolved271);
                result273 = $tmp274;
                if (p_checkParameters.value) {
                {
                    panda$core$Bit $tmp275 = org$pandalanguage$pandac$Compiler$checkGenericParameters$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, ((org$pandalanguage$pandac$Symbol*) p_type)->position, resolved271, result273);
                    panda$core$Bit $tmp276 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp275);
                    if ($tmp276.value) {
                    {
                        return NULL;
                    }
                    }
                }
                }
                return result273;
            }
            }
            org$pandalanguage$pandac$Symbol* $tmp278 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(self->symbolTable, ((org$pandalanguage$pandac$Symbol*) p_type)->name);
            s277 = $tmp278;
            if (((panda$core$Bit) { s277 != NULL }).value) {
            {
                switch (s277->kind.value) {
                    case 200:
                    {
                        org$pandalanguage$pandac$Type* $tmp279 = (org$pandalanguage$pandac$Type*) malloc(96);
                        $tmp279->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
                        $tmp279->refCount.value = 1;
                        org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp279, ((org$pandalanguage$pandac$Alias*) s277)->fullName, ((panda$core$Int64) { 10 }), ((org$pandalanguage$pandac$Symbol*) p_type)->position, ((panda$core$Bit) { true }));
                        return $tmp279;
                    }
                    break;
                    case 203:
                    {
                        gp281 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) s277);
                        org$pandalanguage$pandac$ClassDecl* $tmp282 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Position$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Symbol*) p_type)->position, gp281->owner);
                        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, $tmp282);
                        org$pandalanguage$pandac$Type* $tmp283 = (org$pandalanguage$pandac$Type*) malloc(96);
                        $tmp283->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
                        $tmp283->refCount.value = 1;
                        org$pandalanguage$pandac$Type$init$org$pandalanguage$pandac$ClassDecl$GenericParameter($tmp283, gp281);
                        return $tmp283;
                    }
                    break;
                    case 207:
                    {
                        return ((org$pandalanguage$pandac$Type*) s277);
                    }
                    break;
                    case 201:
                    {
                        org$pandalanguage$pandac$Type* $tmp285 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) s277));
                        return $tmp285;
                    }
                    break;
                }
            }
            }
            panda$core$String* $tmp287 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s286, ((panda$core$Object*) p_type));
            panda$core$String* $tmp289 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp287, &$s288);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_type)->position, $tmp289);
            return NULL;
        }
        break;
        case 11:
        {
            panda$core$Int64 $tmp290 = panda$collections$Array$get_count$R$panda$core$Int64(p_type->subtypes);
            panda$core$Bit $tmp291 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp290, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp291.value);
            panda$collections$Array* $tmp293 = (panda$collections$Array*) malloc(40);
            $tmp293->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp293->refCount.value = 1;
            panda$collections$Array$init($tmp293);
            subtypes292 = $tmp293;
            panda$core$Object* $tmp296 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp297 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, ((org$pandalanguage$pandac$Type*) $tmp296));
            sub295 = $tmp297;
            if (((panda$core$Bit) { sub295 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(subtypes292, ((panda$core$Object*) sub295));
            org$pandalanguage$pandac$Type* $tmp298 = (org$pandalanguage$pandac$Type*) malloc(96);
            $tmp298->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp298->refCount.value = 1;
            panda$core$Object* $tmp300 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(subtypes292, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp302 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp300))->name, &$s301);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp298, $tmp302, ((panda$core$Int64) { 11 }), ((org$pandalanguage$pandac$Symbol*) p_type)->position, ((panda$collections$ListView*) subtypes292), ((panda$core$Bit) { true }));
            return $tmp298;
        }
        break;
        case 21:
        {
            panda$core$Int64 $tmp303 = panda$collections$Array$get_count$R$panda$core$Int64(p_type->subtypes);
            panda$core$Bit $tmp304 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp303, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp304.value);
            panda$collections$Array* $tmp306 = (panda$collections$Array*) malloc(40);
            $tmp306->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp306->refCount.value = 1;
            panda$collections$Array$init($tmp306);
            subtypes305 = $tmp306;
            panda$core$Object* $tmp309 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp310 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$Type$Q(self, ((org$pandalanguage$pandac$Type*) $tmp309), ((panda$core$Bit) { false }));
            base308 = $tmp310;
            if (((panda$core$Bit) { base308 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(subtypes305, ((panda$core$Object*) base308));
            panda$core$MutableString* $tmp312 = (panda$core$MutableString*) malloc(48);
            $tmp312->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp312->refCount.value = 1;
            panda$core$Object* $tmp314 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(subtypes305, ((panda$core$Int64) { 0 }));
            panda$core$MutableString$init$panda$core$String($tmp312, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp314))->name);
            name311 = $tmp312;
            panda$core$Char8$init$panda$core$UInt8(&$tmp315, ((panda$core$UInt8) { 60 }));
            panda$core$MutableString$append$panda$core$Char8(name311, $tmp315);
            separator316 = &$s317;
            panda$core$Int64 $tmp319 = panda$collections$Array$get_count$R$panda$core$Int64(p_type->subtypes);
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp318, ((panda$core$Int64) { 1 }), $tmp319, ((panda$core$Bit) { false }));
            int64_t $tmp321 = $tmp318.min.value;
            panda$core$Int64 i320 = { $tmp321 };
            int64_t $tmp323 = $tmp318.max.value;
            bool $tmp324 = $tmp318.inclusive.value;
            if ($tmp324) goto $l331; else goto $l332;
            $l331:;
            if ($tmp321 <= $tmp323) goto $l325; else goto $l327;
            $l332:;
            if ($tmp321 < $tmp323) goto $l325; else goto $l327;
            $l325:;
            {
                panda$core$Object* $tmp334 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, i320);
                org$pandalanguage$pandac$Type* $tmp335 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, ((org$pandalanguage$pandac$Type*) $tmp334));
                resolved333 = $tmp335;
                if (((panda$core$Bit) { resolved333 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(subtypes305, ((panda$core$Object*) resolved333));
                panda$core$MutableString$append$panda$core$String(name311, separator316);
                panda$core$MutableString$append$panda$core$String(name311, ((org$pandalanguage$pandac$Symbol*) resolved333)->name);
                separator316 = &$s336;
            }
            $l328:;
            int64_t $tmp338 = $tmp323 - i320.value;
            if ($tmp324) goto $l339; else goto $l340;
            $l339:;
            if ($tmp338 >= 1) goto $l337; else goto $l327;
            $l340:;
            if ($tmp338 > 1) goto $l337; else goto $l327;
            $l337:;
            i320.value += 1;
            goto $l325;
            $l327:;
            panda$core$Char8$init$panda$core$UInt8(&$tmp343, ((panda$core$UInt8) { 62 }));
            panda$core$MutableString$append$panda$core$Char8(name311, $tmp343);
            org$pandalanguage$pandac$Type* $tmp345 = (org$pandalanguage$pandac$Type*) malloc(96);
            $tmp345->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp345->refCount.value = 1;
            panda$core$String* $tmp347 = panda$core$MutableString$finish$R$panda$core$String(name311);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp345, $tmp347, ((panda$core$Int64) { 21 }), ((org$pandalanguage$pandac$Symbol*) p_type)->position, ((panda$collections$ListView*) subtypes305), ((panda$core$Bit) { true }));
            result344 = $tmp345;
            if (p_checkParameters.value) {
            {
                panda$core$Object* $tmp348 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(result344->subtypes, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$ClassDecl* $tmp349 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Type*) $tmp348));
                panda$core$Bit $tmp350 = org$pandalanguage$pandac$Compiler$checkGenericParameters$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, ((org$pandalanguage$pandac$Symbol*) p_type)->position, $tmp349, result344);
                panda$core$Bit $tmp351 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp350);
                if ($tmp351.value) {
                {
                    return NULL;
                }
                }
            }
            }
            return result344;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type) {
    org$pandalanguage$pandac$Type* $tmp352 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$Type$Q(self, p_type, ((panda$core$Bit) { true }));
    return $tmp352;
}
void org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$SymbolTable* old353;
    panda$collections$Iterator* p$Iter354;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* p366;
    org$pandalanguage$pandac$Type* resolved371;
    panda$collections$Iterator* rawS$Iter373;
    org$pandalanguage$pandac$Type* rawS385;
    org$pandalanguage$pandac$Type* s390;
    org$pandalanguage$pandac$ClassDecl* sClass392;
    panda$collections$Iterator* m$Iter439;
    org$pandalanguage$pandac$MethodDecl* m451;
    panda$collections$Iterator* intf$Iter462;
    org$pandalanguage$pandac$Type* intf474;
    panda$collections$Iterator* p$Iter480;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* p492;
    org$pandalanguage$pandac$ClassDecl* cl497;
    if (p_cl->resolved.value) {
    {
        return;
    }
    }
    p_cl->resolved = ((panda$core$Bit) { true });
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_cl));
    old353 = self->symbolTable;
    self->symbolTable = p_cl->symbolTable;
    {
        ITable* $tmp355 = ((panda$collections$Iterable*) p_cl->parameters)->$class->itable;
        while ($tmp355->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp355 = $tmp355->next;
        }
        $fn357 $tmp356 = $tmp355->methods[0];
        panda$collections$Iterator* $tmp358 = $tmp356(((panda$collections$Iterable*) p_cl->parameters));
        p$Iter354 = $tmp358;
        $l359:;
        ITable* $tmp361 = p$Iter354->$class->itable;
        while ($tmp361->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp361 = $tmp361->next;
        }
        $fn363 $tmp362 = $tmp361->methods[0];
        panda$core$Bit $tmp364 = $tmp362(p$Iter354);
        panda$core$Bit $tmp365 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp364);
        if (!$tmp365.value) goto $l360;
        {
            ITable* $tmp367 = p$Iter354->$class->itable;
            while ($tmp367->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp367 = $tmp367->next;
            }
            $fn369 $tmp368 = $tmp367->methods[1];
            panda$core$Object* $tmp370 = $tmp368(p$Iter354);
            p366 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp370);
            org$pandalanguage$pandac$Type* $tmp372 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$Type$Q(self, p366->bound, ((panda$core$Bit) { false }));
            resolved371 = $tmp372;
            if (((panda$core$Bit) { resolved371 != NULL }).value) {
            {
                p366->bound = resolved371;
            }
            }
        }
        goto $l359;
        $l360:;
    }
    {
        ITable* $tmp374 = ((panda$collections$Iterable*) p_cl->declaredSupers)->$class->itable;
        while ($tmp374->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp374 = $tmp374->next;
        }
        $fn376 $tmp375 = $tmp374->methods[0];
        panda$collections$Iterator* $tmp377 = $tmp375(((panda$collections$Iterable*) p_cl->declaredSupers));
        rawS$Iter373 = $tmp377;
        $l378:;
        ITable* $tmp380 = rawS$Iter373->$class->itable;
        while ($tmp380->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp380 = $tmp380->next;
        }
        $fn382 $tmp381 = $tmp380->methods[0];
        panda$core$Bit $tmp383 = $tmp381(rawS$Iter373);
        panda$core$Bit $tmp384 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp383);
        if (!$tmp384.value) goto $l379;
        {
            ITable* $tmp386 = rawS$Iter373->$class->itable;
            while ($tmp386->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp386 = $tmp386->next;
            }
            $fn388 $tmp387 = $tmp386->methods[1];
            panda$core$Object* $tmp389 = $tmp387(rawS$Iter373);
            rawS385 = ((org$pandalanguage$pandac$Type*) $tmp389);
            org$pandalanguage$pandac$Type* $tmp391 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$Type$Q(self, rawS385, ((panda$core$Bit) { false }));
            s390 = $tmp391;
            if (((panda$core$Bit) { s390 != NULL }).value) {
            {
                org$pandalanguage$pandac$ClassDecl* $tmp393 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, s390);
                sClass392 = $tmp393;
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, sClass392);
                if (((panda$core$Bit) { sClass392 != NULL }).value) {
                {
                    panda$core$Bit $tmp394 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(sClass392->classKind, ((panda$core$Int64) { 5011 }));
                    if ($tmp394.value) {
                    {
                        panda$core$Bit $tmp395 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_cl->classKind, ((panda$core$Int64) { 5012 }));
                        if ($tmp395.value) {
                        {
                            panda$core$String* $tmp397 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s396, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
                            panda$core$String* $tmp399 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp397, &$s398);
                            panda$core$String* $tmp401 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s400, ((org$pandalanguage$pandac$Symbol*) s390)->name);
                            panda$core$String* $tmp403 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp401, &$s402);
                            panda$core$String* $tmp404 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp399, $tmp403);
                            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) s390)->position, $tmp404);
                        }
                        }
                        if (((panda$core$Bit) { p_cl->rawSuper == NULL }).value) {
                        {
                            p_cl->rawSuper = s390;
                            panda$core$Int64 $tmp405 = panda$collections$Array$get_count$R$panda$core$Int64(p_cl->rawInterfaces);
                            panda$core$Bit $tmp406 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp405, ((panda$core$Int64) { 0 }));
                            if ($tmp406.value) {
                            {
                                panda$core$String* $tmp408 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s407, ((panda$core$Object*) s390));
                                panda$core$String* $tmp410 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp408, &$s409);
                                panda$core$String* $tmp411 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp410, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
                                panda$core$String* $tmp413 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp411, &$s412);
                                panda$core$String* $tmp415 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp413, &$s414);
                                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) s390)->position, $tmp415);
                            }
                            }
                        }
                        }
                        else {
                        {
                            panda$core$String* $tmp417 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s416, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
                            panda$core$String* $tmp419 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp417, &$s418);
                            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) s390)->position, $tmp419);
                        }
                        }
                    }
                    }
                    else {
                    {
                        panda$core$Bit $tmp420 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(sClass392->classKind, ((panda$core$Int64) { 5012 }));
                        PANDA_ASSERT($tmp420.value);
                        panda$collections$Array$add$panda$collections$Array$T(p_cl->rawInterfaces, ((panda$core$Object*) s390));
                    }
                    }
                }
                }
            }
            }
        }
        goto $l378;
        $l379:;
    }
    bool $tmp421 = ((panda$core$Bit) { p_cl->rawSuper == NULL }).value;
    if (!$tmp421) goto $l422;
    panda$core$Bit $tmp424 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_cl)->name, &$s423);
    $tmp421 = $tmp424.value;
    $l422:;
    panda$core$Bit $tmp425 = { $tmp421 };
    if ($tmp425.value) {
    {
        org$pandalanguage$pandac$Type* $tmp426 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
        p_cl->rawSuper = $tmp426;
    }
    }
    bool $tmp428 = ((panda$core$Bit) { p_cl->rawSuper != NULL }).value;
    if (!$tmp428) goto $l429;
    panda$core$Bit $tmp430 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_cl->annotations);
    panda$core$Bit $tmp431 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp430);
    $tmp428 = $tmp431.value;
    $l429:;
    panda$core$Bit $tmp432 = { $tmp428 };
    bool $tmp427 = $tmp432.value;
    if (!$tmp427) goto $l433;
    panda$core$Bit $tmp435 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_cl->rawSuper)->name, &$s434);
    $tmp427 = $tmp435.value;
    $l433:;
    panda$core$Bit $tmp436 = { $tmp427 };
    if ($tmp436.value) {
    {
        panda$core$Int64 $tmp437 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 8 }));
        panda$core$Int64 $tmp438 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(p_cl->annotations->flags, $tmp437);
        p_cl->annotations->flags = $tmp438;
        {
            ITable* $tmp440 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
            while ($tmp440->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp440 = $tmp440->next;
            }
            $fn442 $tmp441 = $tmp440->methods[0];
            panda$collections$Iterator* $tmp443 = $tmp441(((panda$collections$Iterable*) p_cl->methods));
            m$Iter439 = $tmp443;
            $l444:;
            ITable* $tmp446 = m$Iter439->$class->itable;
            while ($tmp446->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp446 = $tmp446->next;
            }
            $fn448 $tmp447 = $tmp446->methods[0];
            panda$core$Bit $tmp449 = $tmp447(m$Iter439);
            panda$core$Bit $tmp450 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp449);
            if (!$tmp450.value) goto $l445;
            {
                ITable* $tmp452 = m$Iter439->$class->itable;
                while ($tmp452->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp452 = $tmp452->next;
                }
                $fn454 $tmp453 = $tmp452->methods[1];
                panda$core$Object* $tmp455 = $tmp453(m$Iter439);
                m451 = ((org$pandalanguage$pandac$MethodDecl*) $tmp455);
                panda$core$Int64 $tmp456 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 8 }));
                panda$core$Int64 $tmp457 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(m451->annotations->flags, $tmp456);
                m451->annotations->flags = $tmp457;
                panda$core$Bit $tmp458 = org$pandalanguage$pandac$Scanner$shouldInline$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ASTNode$Q$R$panda$core$Bit(self->scanner, m451->annotations, m451->body);
                if ($tmp458.value) {
                {
                    panda$core$Int64 $tmp459 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 10 }));
                    panda$core$Int64 $tmp460 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(m451->annotations->flags, $tmp459);
                    m451->annotations->flags = $tmp460;
                }
                }
            }
            goto $l444;
            $l445:;
        }
    }
    }
    if (((panda$core$Bit) { p_cl->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp461 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_cl->rawSuper);
        org$pandalanguage$pandac$Compiler$checkGenericParameters$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->position, $tmp461, p_cl->rawSuper);
    }
    }
    {
        ITable* $tmp463 = ((panda$collections$Iterable*) p_cl->rawInterfaces)->$class->itable;
        while ($tmp463->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp463 = $tmp463->next;
        }
        $fn465 $tmp464 = $tmp463->methods[0];
        panda$collections$Iterator* $tmp466 = $tmp464(((panda$collections$Iterable*) p_cl->rawInterfaces));
        intf$Iter462 = $tmp466;
        $l467:;
        ITable* $tmp469 = intf$Iter462->$class->itable;
        while ($tmp469->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp469 = $tmp469->next;
        }
        $fn471 $tmp470 = $tmp469->methods[0];
        panda$core$Bit $tmp472 = $tmp470(intf$Iter462);
        panda$core$Bit $tmp473 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp472);
        if (!$tmp473.value) goto $l468;
        {
            ITable* $tmp475 = intf$Iter462->$class->itable;
            while ($tmp475->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp475 = $tmp475->next;
            }
            $fn477 $tmp476 = $tmp475->methods[1];
            panda$core$Object* $tmp478 = $tmp476(intf$Iter462);
            intf474 = ((org$pandalanguage$pandac$Type*) $tmp478);
            org$pandalanguage$pandac$ClassDecl* $tmp479 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, intf474);
            org$pandalanguage$pandac$Compiler$checkGenericParameters$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->position, $tmp479, intf474);
        }
        goto $l467;
        $l468:;
    }
    {
        ITable* $tmp481 = ((panda$collections$Iterable*) p_cl->parameters)->$class->itable;
        while ($tmp481->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp481 = $tmp481->next;
        }
        $fn483 $tmp482 = $tmp481->methods[0];
        panda$collections$Iterator* $tmp484 = $tmp482(((panda$collections$Iterable*) p_cl->parameters));
        p$Iter480 = $tmp484;
        $l485:;
        ITable* $tmp487 = p$Iter480->$class->itable;
        while ($tmp487->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp487 = $tmp487->next;
        }
        $fn489 $tmp488 = $tmp487->methods[0];
        panda$core$Bit $tmp490 = $tmp488(p$Iter480);
        panda$core$Bit $tmp491 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp490);
        if (!$tmp491.value) goto $l486;
        {
            ITable* $tmp493 = p$Iter480->$class->itable;
            while ($tmp493->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp493 = $tmp493->next;
            }
            $fn495 $tmp494 = $tmp493->methods[1];
            panda$core$Object* $tmp496 = $tmp494(p$Iter480);
            p492 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp496);
            org$pandalanguage$pandac$ClassDecl* $tmp498 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p492->bound);
            cl497 = $tmp498;
            if (((panda$core$Bit) { cl497 != NULL }).value) {
            {
                org$pandalanguage$pandac$Compiler$checkGenericParameters$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, ((org$pandalanguage$pandac$Symbol*) cl497)->position, cl497, p492->bound);
            }
            }
        }
        goto $l485;
        $l486:;
    }
    self->symbolTable = old353;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
}
void org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$SymbolTable* old499;
    panda$collections$Iterator* p$Iter500;
    org$pandalanguage$pandac$MethodDecl$Parameter* p512;
    org$pandalanguage$pandac$MethodDecl* overridden520;
    if (p_m->resolved.value) {
    {
        return;
    }
    }
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_m->owner);
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_m->owner));
    old499 = self->symbolTable;
    self->symbolTable = p_m->owner->symbolTable;
    {
        ITable* $tmp501 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp501->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp501 = $tmp501->next;
        }
        $fn503 $tmp502 = $tmp501->methods[0];
        panda$collections$Iterator* $tmp504 = $tmp502(((panda$collections$Iterable*) p_m->parameters));
        p$Iter500 = $tmp504;
        $l505:;
        ITable* $tmp507 = p$Iter500->$class->itable;
        while ($tmp507->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp507 = $tmp507->next;
        }
        $fn509 $tmp508 = $tmp507->methods[0];
        panda$core$Bit $tmp510 = $tmp508(p$Iter500);
        panda$core$Bit $tmp511 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp510);
        if (!$tmp511.value) goto $l506;
        {
            ITable* $tmp513 = p$Iter500->$class->itable;
            while ($tmp513->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp513 = $tmp513->next;
            }
            $fn515 $tmp514 = $tmp513->methods[1];
            panda$core$Object* $tmp516 = $tmp514(p$Iter500);
            p512 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp516);
            org$pandalanguage$pandac$Type* $tmp517 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, p512->type);
            p512->type = $tmp517;
        }
        goto $l505;
        $l506:;
    }
    org$pandalanguage$pandac$Type* $tmp518 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, p_m->returnType);
    p_m->returnType = $tmp518;
    p_m->resolved = ((panda$core$Bit) { true });
    panda$core$Bit $tmp519 = panda$core$Bit$$NOT$R$panda$core$Bit(p_m->owner->external);
    if ($tmp519.value) {
    {
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
    }
    }
    self->symbolTable = old499;
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
    panda$collections$ImmutableArray* args570;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp571;
    panda$collections$Array* best573;
    panda$core$Int64$nullable bestCost576;
    panda$collections$Iterator* m$Iter577;
    org$pandalanguage$pandac$MethodRef* m589;
    panda$core$Int64$nullable cost594;
    org$pandalanguage$pandac$IRNode* callTarget604;
    org$pandalanguage$pandac$IRNode* result610;
    panda$core$Bit $tmp567 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1039 }));
    PANDA_ASSERT($tmp567.value);
    panda$core$Object* $tmp569 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
    methods568 = ((panda$collections$ListView*) ((org$pandalanguage$pandac$IRNode*) $tmp569)->payload);
    panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp571, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
    panda$collections$ImmutableArray* $tmp572 = panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(p_expr->children, $tmp571);
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
            panda$core$Bit $tmp600;
            if (((panda$core$Bit) { cost594.nonnull }).value) goto $l597; else goto $l598;
            $l597:;
            panda$core$Bit $tmp601 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost594.value), ((panda$core$Int64) bestCost576.value));
            $tmp600 = $tmp601;
            goto $l599;
            $l598:;
            $tmp600 = ((panda$core$Bit) { false });
            goto $l599;
            $l599:;
            if ($tmp600.value) {
            {
                panda$collections$Array$add$panda$collections$Array$T(best573, ((panda$core$Object*) m589));
            }
            }
        }
        goto $l582;
        $l583:;
    }
    panda$core$Int64 $tmp602 = panda$collections$Array$get_count$R$panda$core$Int64(best573);
    panda$core$Bit $tmp603 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp602, ((panda$core$Int64) { 1 }));
    if ($tmp603.value) {
    {
        panda$core$Object* $tmp605 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
        panda$core$Int64 $tmp606 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp605)->children);
        panda$core$Bit $tmp607 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp606, ((panda$core$Int64) { 0 }));
        if ($tmp607.value) {
        {
            panda$core$Object* $tmp608 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp609 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$IRNode*) $tmp608)->children, ((panda$core$Int64) { 0 }));
            callTarget604 = ((org$pandalanguage$pandac$IRNode*) $tmp609);
        }
        }
        else {
        {
            callTarget604 = NULL;
        }
        }
        panda$core$Object* $tmp611 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(best573, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp612 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr->position, callTarget604, ((org$pandalanguage$pandac$MethodRef*) $tmp611), ((panda$collections$ListView*) args570));
        result610 = $tmp612;
        if (((panda$core$Bit) { p_target != NULL }).value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp613 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, result610, p_target);
            result610 = $tmp613;
        }
        }
        return result610;
    }
    }
    panda$core$String* $tmp615 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s614, ((panda$core$Object*) wrap_org$pandalanguage$pandac$Position(p_expr->position)));
    panda$core$String* $tmp617 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp615, &$s616);
    ITable* $tmp618 = methods568->$class->itable;
    while ($tmp618->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp618 = $tmp618->next;
    }
    $fn620 $tmp619 = $tmp618->methods[0];
    panda$core$Object* $tmp621 = $tmp619(methods568, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp622 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp617, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodRef*) $tmp621)->value)->name);
    panda$core$String* $tmp624 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp622, &$s623);
    panda$core$String* $tmp625 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp624, ((panda$core$Object*) best573));
    panda$core$String* $tmp627 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp625, &$s626);
    panda$io$Console$printLine$panda$core$Object(((panda$core$Object*) $tmp627));
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
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_expr->position, &$s628);
            return NULL;
        }
        break;
        case 1039:
        {
            org$pandalanguage$pandac$IRNode* $tmp629 = org$pandalanguage$pandac$Compiler$resolveMethodCall$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, NULL);
            return $tmp629;
        }
        break;
        case 1024:
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_expr->position, &$s630);
            return NULL;
        }
        break;
        default:
        {
            org$pandalanguage$pandac$Type* $tmp631 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
            org$pandalanguage$pandac$IRNode* $tmp632 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, $tmp631);
            return $tmp632;
        }
    }
}
panda$core$Bit org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
    bool $tmp633 = ((panda$core$Bit) { p_cl->rawSuper != NULL }).value;
    if (!$tmp633) goto $l634;
    panda$core$Bit $tmp636 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_cl->rawSuper)->name, &$s635);
    $tmp633 = $tmp636.value;
    $l634:;
    panda$core$Bit $tmp637 = { $tmp633 };
    return $tmp637;
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Array* result638;
    org$pandalanguage$pandac$ClassDecl* s646;
    panda$collections$Iterator* f$Iter649;
    org$pandalanguage$pandac$FieldDecl* f661;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
    panda$collections$Array* $tmp639 = (panda$collections$Array*) malloc(40);
    $tmp639->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp639->refCount.value = 1;
    panda$collections$Array$init($tmp639);
    result638 = $tmp639;
    panda$core$Bit $tmp642 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, p_cl);
    panda$core$Bit $tmp643 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp642);
    bool $tmp641 = $tmp643.value;
    if (!$tmp641) goto $l644;
    $tmp641 = ((panda$core$Bit) { p_cl->rawSuper != NULL }).value;
    $l644:;
    panda$core$Bit $tmp645 = { $tmp641 };
    if ($tmp645.value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp647 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_cl->rawSuper);
        s646 = $tmp647;
        if (((panda$core$Bit) { s646 != NULL }).value) {
        {
            panda$collections$ListView* $tmp648 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self, s646);
            panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(result638, ((panda$collections$CollectionView*) $tmp648));
        }
        }
    }
    }
    {
        ITable* $tmp650 = ((panda$collections$Iterable*) p_cl->fields)->$class->itable;
        while ($tmp650->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp650 = $tmp650->next;
        }
        $fn652 $tmp651 = $tmp650->methods[0];
        panda$collections$Iterator* $tmp653 = $tmp651(((panda$collections$Iterable*) p_cl->fields));
        f$Iter649 = $tmp653;
        $l654:;
        ITable* $tmp656 = f$Iter649->$class->itable;
        while ($tmp656->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp656 = $tmp656->next;
        }
        $fn658 $tmp657 = $tmp656->methods[0];
        panda$core$Bit $tmp659 = $tmp657(f$Iter649);
        panda$core$Bit $tmp660 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp659);
        if (!$tmp660.value) goto $l655;
        {
            ITable* $tmp662 = f$Iter649->$class->itable;
            while ($tmp662->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp662 = $tmp662->next;
            }
            $fn664 $tmp663 = $tmp662->methods[1];
            panda$core$Object* $tmp665 = $tmp663(f$Iter649);
            f661 = ((org$pandalanguage$pandac$FieldDecl*) $tmp665);
            panda$core$Bit $tmp666 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(f661->annotations);
            panda$core$Bit $tmp667 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp666);
            if ($tmp667.value) {
            {
                panda$collections$Array$add$panda$collections$Array$T(result638, ((panda$core$Object*) f661));
            }
            }
        }
        goto $l654;
        $l655:;
    }
    return ((panda$collections$ListView*) result638);
}
panda$core$Bit org$pandalanguage$pandac$Compiler$exists$panda$io$File$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, panda$io$File* p_f) {
    panda$core$Bit$nullable result668;
    panda$core$Bit $tmp670;
    panda$core$Object* $tmp669 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->existenceCache, ((panda$collections$Key*) p_f));
    result668 = ($tmp669 != NULL ? ((panda$core$Bit$nullable) { ((panda$core$Bit$wrapper*) $tmp669)->value, true }) : (panda$core$Bit$nullable) { .nonnull = 0 });
    if (((panda$core$Bit) { !result668.nonnull }).value) {
    {
        panda$io$File$exists$R$panda$core$Bit(&$tmp670, p_f);
        result668 = ((panda$core$Bit$nullable) { $tmp670, true });
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->existenceCache, ((panda$collections$Key*) p_f), ((panda$core$Object*) wrap_panda$core$Bit(((panda$core$Bit) result668.value))));
    }
    }
    return ((panda$core$Bit) result668.value);
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Compiler$getClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Compiler* self, panda$core$String* p_fullName) {
    org$pandalanguage$pandac$ClassDecl* result671;
    panda$core$String* suffix673;
    panda$core$Bit found679;
    panda$collections$Iterator* dir$Iter680;
    panda$io$File* dir692;
    panda$io$File* f697;
    panda$core$String$Index$nullable index701;
    org$pandalanguage$pandac$ClassDecl* parent704;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp705;
    panda$core$Object* $tmp672 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) p_fullName));
    result671 = ((org$pandalanguage$pandac$ClassDecl*) $tmp672);
    if (((panda$core$Bit) { result671 == NULL }).value) {
    {
        panda$core$String* $tmp676 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(p_fullName, &$s674, &$s675);
        panda$core$String* $tmp678 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp676, &$s677);
        suffix673 = $tmp678;
        found679 = ((panda$core$Bit) { false });
        {
            ITable* $tmp681 = ((panda$collections$Iterable*) self->settings->importDirs)->$class->itable;
            while ($tmp681->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp681 = $tmp681->next;
            }
            $fn683 $tmp682 = $tmp681->methods[0];
            panda$collections$Iterator* $tmp684 = $tmp682(((panda$collections$Iterable*) self->settings->importDirs));
            dir$Iter680 = $tmp684;
            $l685:;
            ITable* $tmp687 = dir$Iter680->$class->itable;
            while ($tmp687->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp687 = $tmp687->next;
            }
            $fn689 $tmp688 = $tmp687->methods[0];
            panda$core$Bit $tmp690 = $tmp688(dir$Iter680);
            panda$core$Bit $tmp691 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp690);
            if (!$tmp691.value) goto $l686;
            {
                ITable* $tmp693 = dir$Iter680->$class->itable;
                while ($tmp693->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp693 = $tmp693->next;
                }
                $fn695 $tmp694 = $tmp693->methods[1];
                panda$core$Object* $tmp696 = $tmp694(dir$Iter680);
                dir692 = ((panda$io$File*) $tmp696);
                panda$io$File* $tmp698 = panda$io$File$resolve$panda$core$String$R$panda$io$File(dir692, suffix673);
                f697 = $tmp698;
                panda$core$Bit $tmp699 = org$pandalanguage$pandac$Compiler$exists$panda$io$File$R$panda$core$Bit(self, f697);
                if ($tmp699.value) {
                {
                    found679 = ((panda$core$Bit) { true });
                    org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(self, f697);
                    panda$core$Object* $tmp700 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) p_fullName));
                    result671 = ((org$pandalanguage$pandac$ClassDecl*) $tmp700);
                }
                }
            }
            goto $l685;
            $l686:;
        }
    }
    }
    if (((panda$core$Bit) { result671 == NULL }).value) {
    {
        panda$core$String$Index$nullable $tmp703 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(p_fullName, &$s702);
        index701 = $tmp703;
        if (((panda$core$Bit) { index701.nonnull }).value) {
        {
            panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp705, ((panda$core$String$Index$nullable) { .nonnull = false }), index701, ((panda$core$Bit) { false }));
            panda$core$String* $tmp706 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(p_fullName, $tmp705);
            org$pandalanguage$pandac$ClassDecl* $tmp707 = org$pandalanguage$pandac$Compiler$getClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, $tmp706);
            parent704 = $tmp707;
            if (((panda$core$Bit) { parent704 != NULL }).value) {
            {
                panda$core$Object* $tmp708 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) p_fullName));
                result671 = ((org$pandalanguage$pandac$ClassDecl*) $tmp708);
            }
            }
        }
        }
    }
    }
    return result671;
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Position$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, panda$core$String* p_fullName) {
    org$pandalanguage$pandac$ClassDecl* result709;
    panda$core$String* suffix711;
    panda$core$Bit found717;
    panda$collections$Iterator* dir$Iter718;
    panda$io$File* dir730;
    panda$io$File* f735;
    panda$core$Int64 oldErrorCount738;
    org$pandalanguage$pandac$Position $tmp744;
    panda$core$Object* $tmp710 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) p_fullName));
    result709 = ((org$pandalanguage$pandac$ClassDecl*) $tmp710);
    if (((panda$core$Bit) { result709 == NULL }).value) {
    {
        panda$core$String* $tmp714 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(p_fullName, &$s712, &$s713);
        panda$core$String* $tmp716 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp714, &$s715);
        suffix711 = $tmp716;
        found717 = ((panda$core$Bit) { false });
        {
            ITable* $tmp719 = ((panda$collections$Iterable*) self->settings->importDirs)->$class->itable;
            while ($tmp719->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp719 = $tmp719->next;
            }
            $fn721 $tmp720 = $tmp719->methods[0];
            panda$collections$Iterator* $tmp722 = $tmp720(((panda$collections$Iterable*) self->settings->importDirs));
            dir$Iter718 = $tmp722;
            $l723:;
            ITable* $tmp725 = dir$Iter718->$class->itable;
            while ($tmp725->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp725 = $tmp725->next;
            }
            $fn727 $tmp726 = $tmp725->methods[0];
            panda$core$Bit $tmp728 = $tmp726(dir$Iter718);
            panda$core$Bit $tmp729 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp728);
            if (!$tmp729.value) goto $l724;
            {
                ITable* $tmp731 = dir$Iter718->$class->itable;
                while ($tmp731->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp731 = $tmp731->next;
                }
                $fn733 $tmp732 = $tmp731->methods[1];
                panda$core$Object* $tmp734 = $tmp732(dir$Iter718);
                dir730 = ((panda$io$File*) $tmp734);
                panda$io$File* $tmp736 = panda$io$File$resolve$panda$core$String$R$panda$io$File(dir730, suffix711);
                f735 = $tmp736;
                panda$core$Bit $tmp737 = org$pandalanguage$pandac$Compiler$exists$panda$io$File$R$panda$core$Bit(self, f735);
                if ($tmp737.value) {
                {
                    found717 = ((panda$core$Bit) { true });
                    oldErrorCount738 = self->errorCount;
                    org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(self, f735);
                    panda$core$Object* $tmp739 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) p_fullName));
                    result709 = ((org$pandalanguage$pandac$ClassDecl*) $tmp739);
                    bool $tmp740 = ((panda$core$Bit) { result709 == NULL }).value;
                    if (!$tmp740) goto $l741;
                    panda$core$Bit $tmp742 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->errorCount, oldErrorCount738);
                    $tmp740 = $tmp742.value;
                    $l741:;
                    panda$core$Bit $tmp743 = { $tmp740 };
                    if ($tmp743.value) {
                    {
                        org$pandalanguage$pandac$Position$init$panda$core$Int64$panda$core$Int64(&$tmp744, ((panda$core$Int64) { 1 }), ((panda$core$Int64) { 1 }));
                        panda$core$String* $tmp746 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s745, ((panda$core$Object*) f735));
                        panda$core$String* $tmp748 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp746, &$s747);
                        panda$core$String* $tmp749 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp748, p_fullName);
                        panda$core$String* $tmp751 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp749, &$s750);
                        org$pandalanguage$pandac$Compiler$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String(self, f735, $tmp744, $tmp751);
                    }
                    }
                }
                }
            }
            goto $l723;
            $l724:;
        }
        panda$core$Bit $tmp752 = panda$core$Bit$$NOT$R$panda$core$Bit(found717);
        if ($tmp752.value) {
        {
            panda$core$String* $tmp754 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s753, suffix711);
            panda$core$String* $tmp756 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp754, &$s755);
            panda$core$String* $tmp757 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp756, ((panda$core$Object*) self->settings->importDirs));
            panda$core$String* $tmp759 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp757, &$s758);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp759);
        }
        }
    }
    }
    return result709;
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
    panda$collections$Iterator* f$Iter879;
    org$pandalanguage$pandac$FieldDecl* f891;
    org$pandalanguage$pandac$FieldDecl* clone896;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
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
                org$pandalanguage$pandac$Type* $tmp878 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, type760, m847->returnType);
                org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp876, result767, ((org$pandalanguage$pandac$Symbol*) m847)->position, m847->doccomment, m847->annotations, m847->methodKind, ((org$pandalanguage$pandac$Symbol*) m847)->name, parameters852, $tmp878, m847->body);
                clone875 = $tmp876;
                panda$collections$Array$add$panda$collections$Array$T(result767->methods, ((panda$core$Object*) clone875));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result767->symbolTable, ((org$pandalanguage$pandac$Symbol*) clone875));
            }
            goto $l840;
            $l841:;
        }
        {
            ITable* $tmp880 = ((panda$collections$Iterable*) p_cl->fields)->$class->itable;
            while ($tmp880->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp880 = $tmp880->next;
            }
            $fn882 $tmp881 = $tmp880->methods[0];
            panda$collections$Iterator* $tmp883 = $tmp881(((panda$collections$Iterable*) p_cl->fields));
            f$Iter879 = $tmp883;
            $l884:;
            ITable* $tmp886 = f$Iter879->$class->itable;
            while ($tmp886->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp886 = $tmp886->next;
            }
            $fn888 $tmp887 = $tmp886->methods[0];
            panda$core$Bit $tmp889 = $tmp887(f$Iter879);
            panda$core$Bit $tmp890 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp889);
            if (!$tmp890.value) goto $l885;
            {
                ITable* $tmp892 = f$Iter879->$class->itable;
                while ($tmp892->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp892 = $tmp892->next;
                }
                $fn894 $tmp893 = $tmp892->methods[1];
                panda$core$Object* $tmp895 = $tmp893(f$Iter879);
                f891 = ((org$pandalanguage$pandac$FieldDecl*) $tmp895);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self, f891);
                org$pandalanguage$pandac$FieldDecl* $tmp897 = (org$pandalanguage$pandac$FieldDecl*) malloc(113);
                $tmp897->$class = (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class;
                $tmp897->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp899 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, type760, f891->type);
                org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp897, result767, ((org$pandalanguage$pandac$Symbol*) f891)->position, f891->doccomment, f891->annotations, f891->fieldKind, ((org$pandalanguage$pandac$Symbol*) f891)->name, $tmp899, f891->rawValue);
                clone896 = $tmp897;
                panda$collections$Array$add$panda$collections$Array$T(result767->fields, ((panda$core$Object*) clone896));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result767->symbolTable, ((org$pandalanguage$pandac$Symbol*) clone896));
            }
            goto $l884;
            $l885:;
        }
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classes, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) result767)->name), ((panda$core$Object*) result767));
        panda$collections$Array$add$panda$collections$Array$T(self->compilationQueue, ((panda$core$Object*) result767));
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, result767);
    }
    }
    return result767;
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type) {
    org$pandalanguage$pandac$ClassDecl* result900;
    PANDA_ASSERT(p_type->resolved.value);
    switch (p_type->typeKind.value) {
        case 10:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp901 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Position$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Symbol*) p_type)->position, ((org$pandalanguage$pandac$Symbol*) p_type)->name);
            result900 = $tmp901;
        }
        break;
        case 11:
        case 21:
        {
            panda$core$Object* $tmp902 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$ClassDecl* $tmp903 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Type*) $tmp902));
            result900 = $tmp903;
        }
        break;
        case 22:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp904 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_type->parameter->bound);
            return $tmp904;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
    panda$core$Bit $tmp905 = org$pandalanguage$pandac$Annotations$isSpecialize$R$panda$core$Bit(result900->annotations);
    if ($tmp905.value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp906 = org$pandalanguage$pandac$Compiler$specialize$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl(self, result900, p_type);
        result900 = $tmp906;
    }
    }
    return result900;
}
panda$collections$Set* org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_t) {
    org$pandalanguage$pandac$ClassDecl* cl907;
    panda$collections$Set* result909;
    panda$collections$Iterator* intf$Iter914;
    org$pandalanguage$pandac$Type* intf926;
    org$pandalanguage$pandac$ClassDecl* $tmp908 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_t);
    cl907 = $tmp908;
    PANDA_ASSERT(((panda$core$Bit) { cl907 != NULL }).value);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, cl907);
    panda$collections$Set* $tmp910 = (panda$collections$Set*) malloc(24);
    $tmp910->$class = (panda$core$Class*) &panda$collections$Set$class;
    $tmp910->refCount.value = 1;
    panda$collections$Set$init($tmp910);
    result909 = $tmp910;
    if (((panda$core$Bit) { cl907->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp912 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_t, cl907->rawSuper);
        panda$collections$Set* $tmp913 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self, $tmp912);
        panda$collections$Set$addAll$panda$collections$CollectionView$LTpanda$collections$Set$T$GT(result909, ((panda$collections$CollectionView*) $tmp913));
    }
    }
    {
        ITable* $tmp915 = ((panda$collections$Iterable*) cl907->rawInterfaces)->$class->itable;
        while ($tmp915->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp915 = $tmp915->next;
        }
        $fn917 $tmp916 = $tmp915->methods[0];
        panda$collections$Iterator* $tmp918 = $tmp916(((panda$collections$Iterable*) cl907->rawInterfaces));
        intf$Iter914 = $tmp918;
        $l919:;
        ITable* $tmp921 = intf$Iter914->$class->itable;
        while ($tmp921->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp921 = $tmp921->next;
        }
        $fn923 $tmp922 = $tmp921->methods[0];
        panda$core$Bit $tmp924 = $tmp922(intf$Iter914);
        panda$core$Bit $tmp925 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp924);
        if (!$tmp925.value) goto $l920;
        {
            ITable* $tmp927 = intf$Iter914->$class->itable;
            while ($tmp927->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp927 = $tmp927->next;
            }
            $fn929 $tmp928 = $tmp927->methods[1];
            panda$core$Object* $tmp930 = $tmp928(intf$Iter914);
            intf926 = ((org$pandalanguage$pandac$Type*) $tmp930);
            org$pandalanguage$pandac$Type* $tmp931 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_t, intf926);
            panda$collections$Set* $tmp932 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self, $tmp931);
            panda$collections$Set$addAll$panda$collections$CollectionView$LTpanda$collections$Set$T$GT(result909, ((panda$collections$CollectionView*) $tmp932));
        }
        goto $l919;
        $l920:;
    }
    panda$core$Bit $tmp933 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(cl907->classKind, ((panda$core$Int64) { 5012 }));
    if ($tmp933.value) {
    {
        panda$collections$Set$add$panda$collections$Set$T(result909, ((panda$collections$Key*) p_t));
    }
    }
    return result909;
}
panda$core$Bit org$pandalanguage$pandac$Compiler$signatureMatch$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_t1, org$pandalanguage$pandac$Type* p_t2) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp939;
    panda$core$Bit $tmp934 = org$pandalanguage$pandac$Type$isMethod$R$panda$core$Bit(p_t1);
    PANDA_ASSERT($tmp934.value);
    panda$core$Bit $tmp935 = org$pandalanguage$pandac$Type$isMethod$R$panda$core$Bit(p_t2);
    PANDA_ASSERT($tmp935.value);
    panda$core$Int64 $tmp936 = panda$collections$Array$get_count$R$panda$core$Int64(p_t1->subtypes);
    panda$core$Int64 $tmp937 = panda$collections$Array$get_count$R$panda$core$Int64(p_t2->subtypes);
    panda$core$Bit $tmp938 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp936, $tmp937);
    if ($tmp938.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Int64 $tmp940 = panda$collections$Array$get_count$R$panda$core$Int64(p_t1->subtypes);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp939, ((panda$core$Int64) { 0 }), $tmp940, ((panda$core$Bit) { false }));
    int64_t $tmp942 = $tmp939.min.value;
    panda$core$Int64 i941 = { $tmp942 };
    int64_t $tmp944 = $tmp939.max.value;
    bool $tmp945 = $tmp939.inclusive.value;
    if ($tmp945) goto $l952; else goto $l953;
    $l952:;
    if ($tmp942 <= $tmp944) goto $l946; else goto $l948;
    $l953:;
    if ($tmp942 < $tmp944) goto $l946; else goto $l948;
    $l946:;
    {
        panda$core$Object* $tmp954 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t1->subtypes, i941);
        panda$core$Object* $tmp955 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t2->subtypes, i941);
        panda$core$Bit $tmp956 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp954), ((org$pandalanguage$pandac$Type*) $tmp955));
        if ($tmp956.value) {
        {
            return ((panda$core$Bit) { false });
        }
        }
    }
    $l949:;
    int64_t $tmp958 = $tmp944 - i941.value;
    if ($tmp945) goto $l959; else goto $l960;
    $l959:;
    if ($tmp958 >= 1) goto $l957; else goto $l948;
    $l960:;
    if ($tmp958 > 1) goto $l957; else goto $l948;
    $l957:;
    i941.value += 1;
    goto $l946;
    $l948:;
    return ((panda$core$Bit) { true });
}
org$pandalanguage$pandac$MethodDecl* org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_owner, panda$core$String* p_name, org$pandalanguage$pandac$Type* p_methodType, panda$core$Bit p_checkInterfaces) {
    org$pandalanguage$pandac$ClassDecl* cl963;
    panda$collections$Iterator* test$Iter965;
    org$pandalanguage$pandac$MethodDecl* test977;
    panda$collections$Iterator* raw$Iter990;
    org$pandalanguage$pandac$Type* raw1002;
    org$pandalanguage$pandac$MethodDecl* result1007;
    org$pandalanguage$pandac$ClassDecl* $tmp964 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_owner);
    cl963 = $tmp964;
    PANDA_ASSERT(((panda$core$Bit) { cl963 != NULL }).value);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, cl963);
    {
        ITable* $tmp966 = ((panda$collections$Iterable*) cl963->methods)->$class->itable;
        while ($tmp966->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp966 = $tmp966->next;
        }
        $fn968 $tmp967 = $tmp966->methods[0];
        panda$collections$Iterator* $tmp969 = $tmp967(((panda$collections$Iterable*) cl963->methods));
        test$Iter965 = $tmp969;
        $l970:;
        ITable* $tmp972 = test$Iter965->$class->itable;
        while ($tmp972->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp972 = $tmp972->next;
        }
        $fn974 $tmp973 = $tmp972->methods[0];
        panda$core$Bit $tmp975 = $tmp973(test$Iter965);
        panda$core$Bit $tmp976 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp975);
        if (!$tmp976.value) goto $l971;
        {
            ITable* $tmp978 = test$Iter965->$class->itable;
            while ($tmp978->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp978 = $tmp978->next;
            }
            $fn980 $tmp979 = $tmp978->methods[1];
            panda$core$Object* $tmp981 = $tmp979(test$Iter965);
            test977 = ((org$pandalanguage$pandac$MethodDecl*) $tmp981);
            panda$core$Bit $tmp982 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) test977)->name, p_name);
            if ($tmp982.value) {
            {
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, test977);
                org$pandalanguage$pandac$Type* $tmp983 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, test977);
                org$pandalanguage$pandac$Type* $tmp984 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_owner, $tmp983);
                panda$core$Bit $tmp985 = org$pandalanguage$pandac$Compiler$signatureMatch$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, $tmp984, p_methodType);
                if ($tmp985.value) {
                {
                    return test977;
                }
                }
            }
            }
        }
        goto $l970;
        $l971:;
    }
    bool $tmp986 = p_checkInterfaces.value;
    if ($tmp986) goto $l987;
    panda$core$Bit $tmp988 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(cl963->classKind, ((panda$core$Int64) { 5012 }));
    $tmp986 = $tmp988.value;
    $l987:;
    panda$core$Bit $tmp989 = { $tmp986 };
    if ($tmp989.value) {
    {
        {
            ITable* $tmp991 = ((panda$collections$Iterable*) cl963->rawInterfaces)->$class->itable;
            while ($tmp991->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp991 = $tmp991->next;
            }
            $fn993 $tmp992 = $tmp991->methods[0];
            panda$collections$Iterator* $tmp994 = $tmp992(((panda$collections$Iterable*) cl963->rawInterfaces));
            raw$Iter990 = $tmp994;
            $l995:;
            ITable* $tmp997 = raw$Iter990->$class->itable;
            while ($tmp997->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp997 = $tmp997->next;
            }
            $fn999 $tmp998 = $tmp997->methods[0];
            panda$core$Bit $tmp1000 = $tmp998(raw$Iter990);
            panda$core$Bit $tmp1001 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1000);
            if (!$tmp1001.value) goto $l996;
            {
                ITable* $tmp1003 = raw$Iter990->$class->itable;
                while ($tmp1003->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1003 = $tmp1003->next;
                }
                $fn1005 $tmp1004 = $tmp1003->methods[1];
                panda$core$Object* $tmp1006 = $tmp1004(raw$Iter990);
                raw1002 = ((org$pandalanguage$pandac$Type*) $tmp1006);
                org$pandalanguage$pandac$Type* $tmp1008 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_owner, raw1002);
                org$pandalanguage$pandac$MethodDecl* $tmp1009 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp1008, p_name, p_methodType, p_checkInterfaces);
                result1007 = $tmp1009;
                if (((panda$core$Bit) { result1007 != NULL }).value) {
                {
                    return result1007;
                }
                }
            }
            goto $l995;
            $l996:;
        }
    }
    }
    if (((panda$core$Bit) { cl963->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp1010 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_owner, cl963->rawSuper);
        org$pandalanguage$pandac$MethodDecl* $tmp1011 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp1010, p_name, p_methodType, p_checkInterfaces);
        return $tmp1011;
    }
    }
    return NULL;
}
org$pandalanguage$pandac$MethodDecl* org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$Type* methodType1013;
    org$pandalanguage$pandac$Type* owner1015;
    panda$collections$Iterator* raw$Iter1017;
    org$pandalanguage$pandac$Type* raw1029;
    org$pandalanguage$pandac$MethodDecl* result1034;
    org$pandalanguage$pandac$MethodDecl* result1037;
    if (p_m->overrideKnown.value) {
    {
        return p_m->overridden;
    }
    }
    panda$core$Bit $tmp1012 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 59 }));
    if ($tmp1012.value) {
    {
        p_m->overrideKnown = ((panda$core$Bit) { true });
        return NULL;
    }
    }
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
    org$pandalanguage$pandac$Type* $tmp1014 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, p_m);
    methodType1013 = $tmp1014;
    org$pandalanguage$pandac$Type* $tmp1016 = org$pandalanguage$pandac$ClassDecl$typeWithParameters$R$org$pandalanguage$pandac$Type(p_m->owner);
    owner1015 = $tmp1016;
    {
        ITable* $tmp1018 = ((panda$collections$Iterable*) p_m->owner->rawInterfaces)->$class->itable;
        while ($tmp1018->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1018 = $tmp1018->next;
        }
        $fn1020 $tmp1019 = $tmp1018->methods[0];
        panda$collections$Iterator* $tmp1021 = $tmp1019(((panda$collections$Iterable*) p_m->owner->rawInterfaces));
        raw$Iter1017 = $tmp1021;
        $l1022:;
        ITable* $tmp1024 = raw$Iter1017->$class->itable;
        while ($tmp1024->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1024 = $tmp1024->next;
        }
        $fn1026 $tmp1025 = $tmp1024->methods[0];
        panda$core$Bit $tmp1027 = $tmp1025(raw$Iter1017);
        panda$core$Bit $tmp1028 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1027);
        if (!$tmp1028.value) goto $l1023;
        {
            ITable* $tmp1030 = raw$Iter1017->$class->itable;
            while ($tmp1030->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1030 = $tmp1030->next;
            }
            $fn1032 $tmp1031 = $tmp1030->methods[1];
            panda$core$Object* $tmp1033 = $tmp1031(raw$Iter1017);
            raw1029 = ((org$pandalanguage$pandac$Type*) $tmp1033);
            org$pandalanguage$pandac$Type* $tmp1035 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, owner1015, raw1029);
            org$pandalanguage$pandac$MethodDecl* $tmp1036 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp1035, ((org$pandalanguage$pandac$Symbol*) p_m)->name, methodType1013, ((panda$core$Bit) { true }));
            result1034 = $tmp1036;
            if (((panda$core$Bit) { result1034 != NULL }).value) {
            {
                p_m->overrideKnown = ((panda$core$Bit) { true });
                p_m->overridden = result1034;
                return result1034;
            }
            }
        }
        goto $l1022;
        $l1023:;
    }
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_m->owner);
    if (((panda$core$Bit) { p_m->owner->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp1038 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, owner1015, p_m->owner->rawSuper);
        org$pandalanguage$pandac$MethodDecl* $tmp1039 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp1038, ((org$pandalanguage$pandac$Symbol*) p_m)->name, methodType1013, ((panda$core$Bit) { true }));
        result1037 = $tmp1039;
        p_m->overrideKnown = ((panda$core$Bit) { true });
        p_m->overridden = result1037;
        return result1037;
    }
    }
    p_m->overrideKnown = ((panda$core$Bit) { true });
    return NULL;
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$interfaceMethods$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl, org$pandalanguage$pandac$Type* p_intf) {
    org$pandalanguage$pandac$ClassDecl* intfClass1040;
    panda$collections$Array* result1042;
    panda$collections$Iterator* m$Iter1045;
    org$pandalanguage$pandac$MethodDecl* m1057;
    org$pandalanguage$pandac$MethodDecl* found1062;
    org$pandalanguage$pandac$ClassDecl* $tmp1041 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_intf);
    intfClass1040 = $tmp1041;
    PANDA_ASSERT(((panda$core$Bit) { intfClass1040 != NULL }).value);
    panda$collections$Array* $tmp1043 = (panda$collections$Array*) malloc(40);
    $tmp1043->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1043->refCount.value = 1;
    panda$collections$Array$init($tmp1043);
    result1042 = $tmp1043;
    {
        ITable* $tmp1046 = ((panda$collections$Iterable*) intfClass1040->methods)->$class->itable;
        while ($tmp1046->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1046 = $tmp1046->next;
        }
        $fn1048 $tmp1047 = $tmp1046->methods[0];
        panda$collections$Iterator* $tmp1049 = $tmp1047(((panda$collections$Iterable*) intfClass1040->methods));
        m$Iter1045 = $tmp1049;
        $l1050:;
        ITable* $tmp1052 = m$Iter1045->$class->itable;
        while ($tmp1052->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1052 = $tmp1052->next;
        }
        $fn1054 $tmp1053 = $tmp1052->methods[0];
        panda$core$Bit $tmp1055 = $tmp1053(m$Iter1045);
        panda$core$Bit $tmp1056 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1055);
        if (!$tmp1056.value) goto $l1051;
        {
            ITable* $tmp1058 = m$Iter1045->$class->itable;
            while ($tmp1058->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1058 = $tmp1058->next;
            }
            $fn1060 $tmp1059 = $tmp1058->methods[1];
            panda$core$Object* $tmp1061 = $tmp1059(m$Iter1045);
            m1057 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1061);
            org$pandalanguage$pandac$Type* $tmp1063 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
            org$pandalanguage$pandac$Type* $tmp1064 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, m1057);
            org$pandalanguage$pandac$Type* $tmp1065 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_intf, $tmp1064);
            org$pandalanguage$pandac$MethodDecl* $tmp1066 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp1063, ((org$pandalanguage$pandac$Symbol*) m1057)->name, $tmp1065, ((panda$core$Bit) { false }));
            found1062 = $tmp1066;
            PANDA_ASSERT(((panda$core$Bit) { found1062 != NULL }).value);
            panda$collections$Array$add$panda$collections$Array$T(result1042, ((panda$core$Object*) found1062));
        }
        goto $l1050;
        $l1051:;
    }
    return ((panda$collections$ListView*) result1042);
}
org$pandalanguage$pandac$SymbolTable* org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$ClassDecl* superCl1068;
    panda$collections$Iterator* rawIntf$Iter1071;
    org$pandalanguage$pandac$Type* rawIntf1083;
    org$pandalanguage$pandac$ClassDecl* intf1088;
    panda$core$Bit $tmp1067 = panda$core$Bit$$NOT$R$panda$core$Bit(p_cl->symbolTableResolved);
    if ($tmp1067.value) {
    {
        p_cl->symbolTableResolved = ((panda$core$Bit) { true });
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
        if (((panda$core$Bit) { p_cl->rawSuper != NULL }).value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp1069 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_cl->rawSuper);
            superCl1068 = $tmp1069;
            if (((panda$core$Bit) { superCl1068 != NULL }).value) {
            {
                org$pandalanguage$pandac$SymbolTable* $tmp1070 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, superCl1068);
                panda$collections$Array$add$panda$collections$Array$T(p_cl->symbolTable->parents, ((panda$core$Object*) $tmp1070));
            }
            }
        }
        }
        {
            ITable* $tmp1072 = ((panda$collections$Iterable*) p_cl->rawInterfaces)->$class->itable;
            while ($tmp1072->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1072 = $tmp1072->next;
            }
            $fn1074 $tmp1073 = $tmp1072->methods[0];
            panda$collections$Iterator* $tmp1075 = $tmp1073(((panda$collections$Iterable*) p_cl->rawInterfaces));
            rawIntf$Iter1071 = $tmp1075;
            $l1076:;
            ITable* $tmp1078 = rawIntf$Iter1071->$class->itable;
            while ($tmp1078->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1078 = $tmp1078->next;
            }
            $fn1080 $tmp1079 = $tmp1078->methods[0];
            panda$core$Bit $tmp1081 = $tmp1079(rawIntf$Iter1071);
            panda$core$Bit $tmp1082 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1081);
            if (!$tmp1082.value) goto $l1077;
            {
                ITable* $tmp1084 = rawIntf$Iter1071->$class->itable;
                while ($tmp1084->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1084 = $tmp1084->next;
                }
                $fn1086 $tmp1085 = $tmp1084->methods[1];
                panda$core$Object* $tmp1087 = $tmp1085(rawIntf$Iter1071);
                rawIntf1083 = ((org$pandalanguage$pandac$Type*) $tmp1087);
                org$pandalanguage$pandac$ClassDecl* $tmp1089 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, rawIntf1083);
                intf1088 = $tmp1089;
                if (((panda$core$Bit) { intf1088 != NULL }).value) {
                {
                    org$pandalanguage$pandac$SymbolTable* $tmp1090 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, intf1088);
                    panda$collections$Array$add$panda$collections$Array$T(p_cl->symbolTable->parents, ((panda$core$Object*) $tmp1090));
                }
                }
            }
            goto $l1076;
            $l1077:;
        }
    }
    }
    return p_cl->symbolTable;
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$ClassDecl* superCl1093;
    panda$collections$Iterator* derived$Iter1096;
    org$pandalanguage$pandac$MethodDecl* derived1108;
    panda$core$Bit found1118;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1119;
    org$pandalanguage$pandac$MethodDecl* base1134;
    panda$core$Int64 $tmp1091 = panda$collections$Array$get_count$R$panda$core$Int64(p_cl->virtualMethods);
    panda$core$Bit $tmp1092 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1091, ((panda$core$Int64) { 0 }));
    if ($tmp1092.value) {
    {
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
        panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_cl));
        if (((panda$core$Bit) { p_cl->rawSuper != NULL }).value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp1094 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_cl->rawSuper);
            superCl1093 = $tmp1094;
            if (((panda$core$Bit) { superCl1093 == NULL }).value) {
            {
                panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
                return ((panda$collections$ListView*) p_cl->virtualMethods);
            }
            }
            panda$collections$ListView* $tmp1095 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self, superCl1093);
            panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(p_cl->virtualMethods, ((panda$collections$CollectionView*) $tmp1095));
        }
        }
        {
            ITable* $tmp1097 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
            while ($tmp1097->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1097 = $tmp1097->next;
            }
            $fn1099 $tmp1098 = $tmp1097->methods[0];
            panda$collections$Iterator* $tmp1100 = $tmp1098(((panda$collections$Iterable*) p_cl->methods));
            derived$Iter1096 = $tmp1100;
            $l1101:;
            ITable* $tmp1103 = derived$Iter1096->$class->itable;
            while ($tmp1103->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1103 = $tmp1103->next;
            }
            $fn1105 $tmp1104 = $tmp1103->methods[0];
            panda$core$Bit $tmp1106 = $tmp1104(derived$Iter1096);
            panda$core$Bit $tmp1107 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1106);
            if (!$tmp1107.value) goto $l1102;
            {
                ITable* $tmp1109 = derived$Iter1096->$class->itable;
                while ($tmp1109->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1109 = $tmp1109->next;
                }
                $fn1111 $tmp1110 = $tmp1109->methods[1];
                panda$core$Object* $tmp1112 = $tmp1110(derived$Iter1096);
                derived1108 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1112);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, derived1108);
                panda$core$Bit $tmp1114 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(derived1108->methodKind, ((panda$core$Int64) { 59 }));
                bool $tmp1113 = $tmp1114.value;
                if ($tmp1113) goto $l1115;
                panda$core$Bit $tmp1116 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(derived1108->annotations);
                $tmp1113 = $tmp1116.value;
                $l1115:;
                panda$core$Bit $tmp1117 = { $tmp1113 };
                if ($tmp1117.value) {
                {
                    goto $l1101;
                }
                }
                found1118 = ((panda$core$Bit) { false });
                panda$core$Int64 $tmp1120 = panda$collections$Array$get_count$R$panda$core$Int64(p_cl->virtualMethods);
                panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1119, ((panda$core$Int64) { 0 }), $tmp1120, ((panda$core$Bit) { false }));
                int64_t $tmp1122 = $tmp1119.min.value;
                panda$core$Int64 i1121 = { $tmp1122 };
                int64_t $tmp1124 = $tmp1119.max.value;
                bool $tmp1125 = $tmp1119.inclusive.value;
                if ($tmp1125) goto $l1132; else goto $l1133;
                $l1132:;
                if ($tmp1122 <= $tmp1124) goto $l1126; else goto $l1128;
                $l1133:;
                if ($tmp1122 < $tmp1124) goto $l1126; else goto $l1128;
                $l1126:;
                {
                    panda$core$Object* $tmp1135 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_cl->virtualMethods, i1121);
                    base1134 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1135);
                    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, base1134);
                    panda$core$Bit $tmp1136 = org$pandalanguage$pandac$MethodDecl$matches$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(derived1108, base1134);
                    if ($tmp1136.value) {
                    {
                        found1118 = ((panda$core$Bit) { true });
                        panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(p_cl->virtualMethods, i1121, ((panda$core$Object*) derived1108));
                        goto $l1128;
                    }
                    }
                }
                $l1129:;
                int64_t $tmp1138 = $tmp1124 - i1121.value;
                if ($tmp1125) goto $l1139; else goto $l1140;
                $l1139:;
                if ($tmp1138 >= 1) goto $l1137; else goto $l1128;
                $l1140:;
                if ($tmp1138 > 1) goto $l1137; else goto $l1128;
                $l1137:;
                i1121.value += 1;
                goto $l1126;
                $l1128:;
                panda$core$Bit $tmp1143 = panda$core$Bit$$NOT$R$panda$core$Bit(found1118);
                if ($tmp1143.value) {
                {
                    panda$collections$Array$add$panda$collections$Array$T(p_cl->virtualMethods, ((panda$core$Object*) derived1108));
                }
                }
            }
            goto $l1101;
            $l1102:;
        }
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    }
    }
    return ((panda$collections$ListView*) p_cl->virtualMethods);
}
void org$pandalanguage$pandac$Compiler$addInheritedMethods$org$pandalanguage$pandac$SymbolTable$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$SymbolTable* p_st, panda$core$String* p_name, panda$collections$Array* p_result, panda$collections$ListView* p_types) {
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$getMethodReference$org$pandalanguage$pandac$SymbolTable$org$pandalanguage$pandac$IRNode$Q$panda$core$String$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$SymbolTable* p_st, org$pandalanguage$pandac$IRNode* p_target, panda$core$String* p_name, org$pandalanguage$pandac$Position p_position, panda$collections$ListView* p_types) {
    panda$collections$Array* methods1144;
    org$pandalanguage$pandac$Symbol* s1147;
    panda$collections$Iterator* m$Iter1153;
    org$pandalanguage$pandac$MethodDecl* m1165;
    panda$collections$Iterator* p$Iter1172;
    org$pandalanguage$pandac$SymbolTable* p1184;
    panda$collections$Array* children1189;
    panda$collections$Array* types1201;
    panda$collections$Iterator* m$Iter1204;
    org$pandalanguage$pandac$MethodRef* m1216;
    panda$collections$Array* $tmp1145 = (panda$collections$Array*) malloc(40);
    $tmp1145->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1145->refCount.value = 1;
    panda$collections$Array$init($tmp1145);
    methods1144 = $tmp1145;
    org$pandalanguage$pandac$Symbol* $tmp1148 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(p_st, p_name);
    s1147 = $tmp1148;
    PANDA_ASSERT(((panda$core$Bit) { s1147 != NULL }).value);
    panda$core$Bit $tmp1149 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(s1147->kind, ((panda$core$Int64) { 204 }));
    if ($tmp1149.value) {
    {
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, ((org$pandalanguage$pandac$MethodDecl*) s1147));
        org$pandalanguage$pandac$MethodRef* $tmp1150 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
        $tmp1150->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
        $tmp1150->refCount.value = 1;
        org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp1150, ((org$pandalanguage$pandac$MethodDecl*) s1147), p_types);
        panda$collections$Array$add$panda$collections$Array$T(methods1144, ((panda$core$Object*) $tmp1150));
    }
    }
    else {
    {
        panda$core$Bit $tmp1152 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(s1147->kind, ((panda$core$Int64) { 205 }));
        PANDA_ASSERT($tmp1152.value);
        {
            ITable* $tmp1154 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s1147)->methods)->$class->itable;
            while ($tmp1154->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1154 = $tmp1154->next;
            }
            $fn1156 $tmp1155 = $tmp1154->methods[0];
            panda$collections$Iterator* $tmp1157 = $tmp1155(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s1147)->methods));
            m$Iter1153 = $tmp1157;
            $l1158:;
            ITable* $tmp1160 = m$Iter1153->$class->itable;
            while ($tmp1160->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1160 = $tmp1160->next;
            }
            $fn1162 $tmp1161 = $tmp1160->methods[0];
            panda$core$Bit $tmp1163 = $tmp1161(m$Iter1153);
            panda$core$Bit $tmp1164 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1163);
            if (!$tmp1164.value) goto $l1159;
            {
                ITable* $tmp1166 = m$Iter1153->$class->itable;
                while ($tmp1166->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1166 = $tmp1166->next;
                }
                $fn1168 $tmp1167 = $tmp1166->methods[1];
                panda$core$Object* $tmp1169 = $tmp1167(m$Iter1153);
                m1165 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1169);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m1165);
                org$pandalanguage$pandac$MethodRef* $tmp1170 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                $tmp1170->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                $tmp1170->refCount.value = 1;
                org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp1170, m1165, p_types);
                panda$collections$Array$add$panda$collections$Array$T(methods1144, ((panda$core$Object*) $tmp1170));
            }
            goto $l1158;
            $l1159:;
        }
    }
    }
    {
        ITable* $tmp1173 = ((panda$collections$Iterable*) p_st->parents)->$class->itable;
        while ($tmp1173->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1173 = $tmp1173->next;
        }
        $fn1175 $tmp1174 = $tmp1173->methods[0];
        panda$collections$Iterator* $tmp1176 = $tmp1174(((panda$collections$Iterable*) p_st->parents));
        p$Iter1172 = $tmp1176;
        $l1177:;
        ITable* $tmp1179 = p$Iter1172->$class->itable;
        while ($tmp1179->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1179 = $tmp1179->next;
        }
        $fn1181 $tmp1180 = $tmp1179->methods[0];
        panda$core$Bit $tmp1182 = $tmp1180(p$Iter1172);
        panda$core$Bit $tmp1183 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1182);
        if (!$tmp1183.value) goto $l1178;
        {
            ITable* $tmp1185 = p$Iter1172->$class->itable;
            while ($tmp1185->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1185 = $tmp1185->next;
            }
            $fn1187 $tmp1186 = $tmp1185->methods[1];
            panda$core$Object* $tmp1188 = $tmp1186(p$Iter1172);
            p1184 = ((org$pandalanguage$pandac$SymbolTable*) $tmp1188);
            org$pandalanguage$pandac$Compiler$addInheritedMethods$org$pandalanguage$pandac$SymbolTable$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p1184, p_name, methods1144, p_types);
        }
        goto $l1177;
        $l1178:;
    }
    panda$collections$Array* $tmp1190 = (panda$collections$Array*) malloc(40);
    $tmp1190->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1190->refCount.value = 1;
    panda$collections$Array$init($tmp1190);
    children1189 = $tmp1190;
    if (((panda$core$Bit) { p_target != NULL }).value) {
    {
        panda$collections$Array$add$panda$collections$Array$T(children1189, ((panda$core$Object*) p_target));
    }
    }
    panda$core$Int64 $tmp1192 = panda$collections$Array$get_count$R$panda$core$Int64(methods1144);
    panda$core$Bit $tmp1193 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1192, ((panda$core$Int64) { 1 }));
    if ($tmp1193.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp1194 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp1194->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp1194->refCount.value = 1;
        panda$core$Object* $tmp1196 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(methods1144, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Type* $tmp1197 = org$pandalanguage$pandac$MethodRef$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$MethodRef*) $tmp1196));
        panda$core$Object* $tmp1198 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(methods1144, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp1194, ((panda$core$Int64) { 1002 }), p_position, $tmp1197, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodRef*) $tmp1198)), ((panda$collections$ListView*) children1189));
        return $tmp1194;
    }
    }
    else {
    {
        panda$core$Int64 $tmp1199 = panda$collections$Array$get_count$R$panda$core$Int64(methods1144);
        panda$core$Bit $tmp1200 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1199, ((panda$core$Int64) { 0 }));
        PANDA_ASSERT($tmp1200.value);
        panda$collections$Array* $tmp1202 = (panda$collections$Array*) malloc(40);
        $tmp1202->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp1202->refCount.value = 1;
        panda$collections$Array$init($tmp1202);
        types1201 = $tmp1202;
        {
            ITable* $tmp1205 = ((panda$collections$Iterable*) methods1144)->$class->itable;
            while ($tmp1205->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1205 = $tmp1205->next;
            }
            $fn1207 $tmp1206 = $tmp1205->methods[0];
            panda$collections$Iterator* $tmp1208 = $tmp1206(((panda$collections$Iterable*) methods1144));
            m$Iter1204 = $tmp1208;
            $l1209:;
            ITable* $tmp1211 = m$Iter1204->$class->itable;
            while ($tmp1211->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1211 = $tmp1211->next;
            }
            $fn1213 $tmp1212 = $tmp1211->methods[0];
            panda$core$Bit $tmp1214 = $tmp1212(m$Iter1204);
            panda$core$Bit $tmp1215 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1214);
            if (!$tmp1215.value) goto $l1210;
            {
                ITable* $tmp1217 = m$Iter1204->$class->itable;
                while ($tmp1217->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1217 = $tmp1217->next;
                }
                $fn1219 $tmp1218 = $tmp1217->methods[1];
                panda$core$Object* $tmp1220 = $tmp1218(m$Iter1204);
                m1216 = ((org$pandalanguage$pandac$MethodRef*) $tmp1220);
                org$pandalanguage$pandac$Type* $tmp1221 = org$pandalanguage$pandac$MethodRef$type$R$org$pandalanguage$pandac$Type(m1216);
                panda$collections$Array$add$panda$collections$Array$T(types1201, ((panda$core$Object*) $tmp1221));
            }
            goto $l1209;
            $l1210:;
        }
        org$pandalanguage$pandac$IRNode* $tmp1222 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp1222->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp1222->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp1224 = (org$pandalanguage$pandac$Type*) malloc(96);
        $tmp1224->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
        $tmp1224->refCount.value = 1;
        org$pandalanguage$pandac$Type$init$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp1224, ((panda$collections$ListView*) types1201));
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp1222, ((panda$core$Int64) { 1003 }), p_position, $tmp1224, ((panda$core$Object*) methods1144), ((panda$collections$ListView*) children1189));
        return $tmp1222;
    }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$symbolRef$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$Symbol* p_s, org$pandalanguage$pandac$SymbolTable* p_st) {
    org$pandalanguage$pandac$ClassDecl* cl1226;
    org$pandalanguage$pandac$FieldDecl* f1242;
    panda$collections$Array* children1245;
    org$pandalanguage$pandac$Type* effectiveType1250;
    org$pandalanguage$pandac$IRNode* result1255;
    switch (p_s->kind.value) {
        case 200:
        {
            PANDA_ASSERT(((panda$core$Bit) { p_target == NULL }).value);
            org$pandalanguage$pandac$ClassDecl* $tmp1227 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Position$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_position, ((org$pandalanguage$pandac$Alias*) p_s)->fullName);
            cl1226 = $tmp1227;
            if (((panda$core$Bit) { cl1226 != NULL }).value) {
            {
                org$pandalanguage$pandac$Type* $tmp1228 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl1226);
                org$pandalanguage$pandac$Compiler$checkGenericParameters$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_position, cl1226, $tmp1228);
                org$pandalanguage$pandac$IRNode* $tmp1229 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1229->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1229->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1231 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$Type* $tmp1232 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl1226);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1229, ((panda$core$Int64) { 1001 }), p_position, $tmp1231, $tmp1232);
                return $tmp1229;
            }
            }
            return NULL;
        }
        break;
        case 201:
        {
            org$pandalanguage$pandac$Type* $tmp1233 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) p_s));
            org$pandalanguage$pandac$Compiler$checkGenericParameters$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_position, ((org$pandalanguage$pandac$ClassDecl*) p_s), $tmp1233);
            org$pandalanguage$pandac$IRNode* $tmp1234 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp1234->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1234->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp1236 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$Type* $tmp1237 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) p_s));
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1234, ((panda$core$Int64) { 1001 }), p_position, $tmp1236, $tmp1237);
            return $tmp1234;
        }
        break;
        case 204:
        case 205:
        {
            panda$collections$ListView* $tmp1238 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$IRNode$Q$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p_target);
            org$pandalanguage$pandac$IRNode* $tmp1239 = org$pandalanguage$pandac$Compiler$getMethodReference$org$pandalanguage$pandac$SymbolTable$org$pandalanguage$pandac$IRNode$Q$panda$core$String$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$IRNode(self, p_st, p_target, p_s->name, p_position, $tmp1238);
            return $tmp1239;
        }
        break;
        case 208:
        {
            org$pandalanguage$pandac$IRNode* $tmp1240 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp1240->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1240->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp1240, ((panda$core$Int64) { 1016 }), p_position, ((org$pandalanguage$pandac$Variable*) p_s)->type, ((org$pandalanguage$pandac$Variable*) p_s));
            return $tmp1240;
        }
        break;
        case 202:
        {
            f1242 = ((org$pandalanguage$pandac$FieldDecl*) p_s);
            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self, f1242);
            org$pandalanguage$pandac$Type* $tmp1243 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1244 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(f1242->type, $tmp1243);
            if ($tmp1244.value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp1246 = (panda$collections$Array*) malloc(40);
            $tmp1246->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1246->refCount.value = 1;
            panda$collections$Array$init($tmp1246);
            children1245 = $tmp1246;
            if (((panda$core$Bit) { p_target != NULL }).value) {
            {
                panda$core$Bit $tmp1248 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1024 }));
                if ($tmp1248.value) {
                {
                    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_target->position, &$s1249);
                    return NULL;
                }
                }
                org$pandalanguage$pandac$Type* $tmp1251 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_target->type, f1242->type);
                effectiveType1250 = $tmp1251;
                panda$core$Bit $tmp1252 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(f1242->annotations);
                if ($tmp1252.value) {
                {
                    panda$collections$Array$add$panda$collections$Array$T(children1245, ((panda$core$Object*) p_target));
                }
                }
                else {
                {
                    org$pandalanguage$pandac$Type* $tmp1253 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(f1242->owner);
                    org$pandalanguage$pandac$IRNode* $tmp1254 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_target, $tmp1253);
                    panda$collections$Array$add$panda$collections$Array$T(children1245, ((panda$core$Object*) $tmp1254));
                }
                }
                org$pandalanguage$pandac$IRNode* $tmp1256 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1256->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1256->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp1256, ((panda$core$Int64) { 1026 }), p_position, f1242->type, ((panda$core$Object*) p_s), ((panda$collections$ListView*) children1245));
                result1255 = $tmp1256;
                panda$core$Bit $tmp1258 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(effectiveType1250, result1255->type);
                if ($tmp1258.value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp1259 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, result1255, p_position, ((panda$core$Bit) { false }), effectiveType1250);
                    result1255 = $tmp1259;
                }
                }
                return result1255;
            }
            }
            else {
            {
                org$pandalanguage$pandac$IRNode* $tmp1260 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1260->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1260->refCount.value = 1;
                panda$core$Object* $tmp1262 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
                org$pandalanguage$pandac$Type* $tmp1263 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp1262));
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp1260, ((panda$core$Int64) { 1025 }), p_position, $tmp1263);
                panda$collections$Array$add$panda$collections$Array$T(children1245, ((panda$core$Object*) $tmp1260));
                org$pandalanguage$pandac$IRNode* $tmp1264 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1264->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1264->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp1264, ((panda$core$Int64) { 1026 }), p_position, f1242->type, ((panda$core$Object*) p_s), ((panda$collections$ListView*) children1245));
                return $tmp1264;
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
    panda$collections$HashMap* typeMap1272;
    org$pandalanguage$pandac$Type* base1275;
    org$pandalanguage$pandac$ClassDecl* cl1277;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1279;
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
            panda$core$Int64 $tmp1266 = panda$collections$Array$get_count$R$panda$core$Int64(p_context->subtypes);
            panda$core$Bit $tmp1267 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1266, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp1267.value);
            panda$core$Object* $tmp1268 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_context->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp1269 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$Type*) $tmp1268), p_raw);
            return $tmp1269;
        }
        break;
        case 21:
        {
            panda$core$Int64 $tmp1270 = panda$collections$Array$get_count$R$panda$core$Int64(p_context->subtypes);
            panda$core$Bit $tmp1271 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp1270, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1271.value);
            panda$collections$HashMap* $tmp1273 = (panda$collections$HashMap*) malloc(56);
            $tmp1273->$class = (panda$core$Class*) &panda$collections$HashMap$class;
            $tmp1273->refCount.value = 1;
            panda$collections$HashMap$init($tmp1273);
            typeMap1272 = $tmp1273;
            panda$core$Object* $tmp1276 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_context->subtypes, ((panda$core$Int64) { 0 }));
            base1275 = ((org$pandalanguage$pandac$Type*) $tmp1276);
            org$pandalanguage$pandac$ClassDecl* $tmp1278 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Symbol*) base1275)->name);
            cl1277 = $tmp1278;
            PANDA_ASSERT(((panda$core$Bit) { cl1277 != NULL }).value);
            panda$core$Int64 $tmp1280 = panda$collections$Array$get_count$R$panda$core$Int64(p_context->subtypes);
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1279, ((panda$core$Int64) { 1 }), $tmp1280, ((panda$core$Bit) { false }));
            int64_t $tmp1282 = $tmp1279.min.value;
            panda$core$Int64 i1281 = { $tmp1282 };
            int64_t $tmp1284 = $tmp1279.max.value;
            bool $tmp1285 = $tmp1279.inclusive.value;
            if ($tmp1285) goto $l1292; else goto $l1293;
            $l1292:;
            if ($tmp1282 <= $tmp1284) goto $l1286; else goto $l1288;
            $l1293:;
            if ($tmp1282 < $tmp1284) goto $l1286; else goto $l1288;
            $l1286:;
            {
                panda$core$String* $tmp1295 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) cl1277)->name, &$s1294);
                panda$core$Int64 $tmp1296 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i1281, ((panda$core$Int64) { 1 }));
                ITable* $tmp1297 = ((panda$collections$ListView*) cl1277->parameters)->$class->itable;
                while ($tmp1297->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp1297 = $tmp1297->next;
                }
                $fn1299 $tmp1298 = $tmp1297->methods[0];
                panda$core$Object* $tmp1300 = $tmp1298(((panda$collections$ListView*) cl1277->parameters), $tmp1296);
                panda$core$String* $tmp1301 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1295, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp1300))->name);
                panda$core$Object* $tmp1302 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_context->subtypes, i1281);
                panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(typeMap1272, ((panda$collections$Key*) $tmp1301), ((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp1302)));
            }
            $l1289:;
            int64_t $tmp1304 = $tmp1284 - i1281.value;
            if ($tmp1285) goto $l1305; else goto $l1306;
            $l1305:;
            if ($tmp1304 >= 1) goto $l1303; else goto $l1288;
            $l1306:;
            if ($tmp1304 > 1) goto $l1303; else goto $l1288;
            $l1303:;
            i1281.value += 1;
            goto $l1286;
            $l1288:;
            org$pandalanguage$pandac$Type* $tmp1309 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(p_raw, typeMap1272);
            return $tmp1309;
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
    panda$core$Bit $tmp1310 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 15 }));
    if ($tmp1310.value) {
    {
        org$pandalanguage$pandac$Type* $tmp1311 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
        return $tmp1311;
    }
    }
    panda$core$Bit $tmp1312 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 26 }));
    if ($tmp1312.value) {
    {
        org$pandalanguage$pandac$Type* $tmp1313 = org$pandalanguage$pandac$Type$Real64$R$org$pandalanguage$pandac$Type();
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
    org$pandalanguage$pandac$Type* start1319;
    org$pandalanguage$pandac$Type* end1321;
    org$pandalanguage$pandac$Type* step1343;
    panda$collections$ImmutableArray* args1367;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1368;
    org$pandalanguage$pandac$IRNode* c1370;
    switch (p_expr->kind.value) {
        case 1031:
        {
            panda$core$Object* $tmp1320 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            start1319 = ((org$pandalanguage$pandac$IRNode*) $tmp1320)->type;
            panda$core$Object* $tmp1322 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
            end1321 = ((org$pandalanguage$pandac$IRNode*) $tmp1322)->type;
            panda$core$Int64 $tmp1323 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_expr->children);
            panda$core$Bit $tmp1324 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1323, ((panda$core$Int64) { 2 }));
            if ($tmp1324.value) {
            {
                panda$core$Object* $tmp1325 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Bit $tmp1326 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1325)->kind, ((panda$core$Int64) { 1030 }));
                if ($tmp1326.value) {
                {
                    panda$core$Object* $tmp1327 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                    panda$core$Bit $tmp1328 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1327)->kind, ((panda$core$Int64) { 1030 }));
                    if ($tmp1328.value) {
                    {
                        org$pandalanguage$pandac$Type* $tmp1329 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
                        org$pandalanguage$pandac$Type* $tmp1330 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1329);
                        org$pandalanguage$pandac$Type* $tmp1331 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1330);
                        return $tmp1331;
                    }
                    }
                    org$pandalanguage$pandac$Type* $tmp1332 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, end1321);
                    org$pandalanguage$pandac$Type* $tmp1333 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1332);
                    org$pandalanguage$pandac$Type* $tmp1334 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1333);
                    return $tmp1334;
                }
                }
                panda$core$Object* $tmp1335 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                panda$core$Bit $tmp1336 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1335)->kind, ((panda$core$Int64) { 1030 }));
                if ($tmp1336.value) {
                {
                    org$pandalanguage$pandac$Type* $tmp1337 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, start1319);
                    org$pandalanguage$pandac$Type* $tmp1338 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1337);
                    org$pandalanguage$pandac$Type* $tmp1339 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1338);
                    return $tmp1339;
                }
                }
                org$pandalanguage$pandac$Type* $tmp1340 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(start1319, end1321);
                org$pandalanguage$pandac$Type* $tmp1341 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, $tmp1340);
                org$pandalanguage$pandac$Type* $tmp1342 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1341);
                return $tmp1342;
            }
            }
            panda$core$Object* $tmp1344 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 2 }));
            org$pandalanguage$pandac$Type* $tmp1345 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$IRNode*) $tmp1344)->type);
            step1343 = $tmp1345;
            panda$core$Object* $tmp1346 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp1347 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1346)->kind, ((panda$core$Int64) { 1030 }));
            if ($tmp1347.value) {
            {
                panda$core$Object* $tmp1348 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                panda$core$Bit $tmp1349 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1348)->kind, ((panda$core$Int64) { 1030 }));
                if ($tmp1349.value) {
                {
                    org$pandalanguage$pandac$Type* $tmp1350 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, step1343);
                    org$pandalanguage$pandac$Type* $tmp1351 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1350);
                    org$pandalanguage$pandac$Type* $tmp1352 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1351);
                    return $tmp1352;
                }
                }
                org$pandalanguage$pandac$Type* $tmp1353 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(end1321, step1343);
                org$pandalanguage$pandac$Type* $tmp1354 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, $tmp1353);
                org$pandalanguage$pandac$Type* $tmp1355 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1354);
                org$pandalanguage$pandac$Type* $tmp1356 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1355);
                return $tmp1356;
            }
            }
            panda$core$Object* $tmp1357 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
            panda$core$Bit $tmp1358 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1357)->kind, ((panda$core$Int64) { 1030 }));
            if ($tmp1358.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1359 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(start1319, step1343);
                org$pandalanguage$pandac$Type* $tmp1360 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, $tmp1359);
                org$pandalanguage$pandac$Type* $tmp1361 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1360);
                org$pandalanguage$pandac$Type* $tmp1362 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1361);
                return $tmp1362;
            }
            }
            org$pandalanguage$pandac$Type* $tmp1363 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(start1319, end1321);
            org$pandalanguage$pandac$Type* $tmp1364 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1363, step1343);
            org$pandalanguage$pandac$Type* $tmp1365 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, $tmp1364);
            org$pandalanguage$pandac$Type* $tmp1366 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1365);
            return $tmp1366;
        }
        break;
        case 1040:
        {
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1368, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$collections$ImmutableArray* $tmp1369 = panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(p_expr->children, $tmp1368);
            args1367 = $tmp1369;
            panda$core$Object* $tmp1371 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp1373 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1371), &$s1372, ((panda$collections$ListView*) args1367));
            c1370 = $tmp1373;
            if (((panda$core$Bit) { c1370 == NULL }).value) {
            {
                org$pandalanguage$pandac$Type* $tmp1374 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
                return $tmp1374;
            }
            }
            return c1370->type;
        }
        break;
    }
    org$pandalanguage$pandac$Type* $tmp1375 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_expr->type);
    return $tmp1375;
}
panda$core$Int64$nullable org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type, org$pandalanguage$pandac$Type* p_target) {
    panda$core$Int64$nullable result1386;
    panda$core$Int64$nullable result1390;
    panda$core$Int64$nullable best1399;
    panda$collections$Iterator* t$Iter1400;
    org$pandalanguage$pandac$Type* t1412;
    panda$core$Int64$nullable cost1417;
    org$pandalanguage$pandac$ClassDecl* cl1431;
    panda$core$Int64$nullable cost1433;
    panda$collections$Iterator* intf$Iter1438;
    org$pandalanguage$pandac$Type* intf1450;
    panda$core$Int64$nullable cost1455;
    PANDA_ASSERT(p_type->resolved.value);
    PANDA_ASSERT(p_target->resolved.value);
    panda$core$Bit $tmp1376 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_type, p_target);
    if ($tmp1376.value) {
    {
        return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
    }
    }
    org$pandalanguage$pandac$Type* $tmp1377 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1378 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_type, $tmp1377);
    if ($tmp1378.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    panda$core$Bit $tmp1379 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 23 }));
    if ($tmp1379.value) {
    {
        panda$core$Bit $tmp1380 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp1380.value) {
        {
            return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
        }
        }
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    panda$core$Bit $tmp1382 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 11 }));
    bool $tmp1381 = $tmp1382.value;
    if (!$tmp1381) goto $l1383;
    panda$core$Bit $tmp1384 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
    $tmp1381 = $tmp1384.value;
    $l1383:;
    panda$core$Bit $tmp1385 = { $tmp1381 };
    if ($tmp1385.value) {
    {
        panda$core$Object* $tmp1387 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Int64$nullable $tmp1388 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$Type*) $tmp1387), p_target);
        result1386 = $tmp1388;
        if (((panda$core$Bit) { !result1386.nonnull }).value) {
        {
            return ((panda$core$Int64$nullable) { .nonnull = false });
        }
        }
        panda$core$Int64 $tmp1389 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) result1386.value), ((panda$core$Int64) { 2 }));
        return ((panda$core$Int64$nullable) { $tmp1389, true });
    }
    }
    switch (p_target->typeKind.value) {
        case 11:
        {
            panda$core$Object* $tmp1391 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$Int64$nullable $tmp1392 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_type, ((org$pandalanguage$pandac$Type*) $tmp1391));
            result1390 = $tmp1392;
            if (((panda$core$Bit) { !result1390.nonnull }).value) {
            {
                return ((panda$core$Int64$nullable) { .nonnull = false });
            }
            }
            panda$core$Int64 $tmp1393 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) result1390.value), ((panda$core$Int64) { 1 }));
            return ((panda$core$Int64$nullable) { $tmp1393, true });
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
            panda$core$Bit $tmp1394 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 21 }));
            if ($tmp1394.value) {
            {
                panda$core$Object* $tmp1395 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
                panda$core$Int64$nullable $tmp1396 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$Type*) $tmp1395), p_target);
                return $tmp1396;
            }
            }
        }
        break;
    }
    switch (p_type->typeKind.value) {
        case 19:
        {
            org$pandalanguage$pandac$Type* $tmp1397 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            panda$core$Int64$nullable $tmp1398 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1397, p_target);
            return $tmp1398;
        }
        break;
        case 17:
        {
            best1399 = ((panda$core$Int64$nullable) { .nonnull = false });
            {
                ITable* $tmp1401 = ((panda$collections$Iterable*) p_type->subtypes)->$class->itable;
                while ($tmp1401->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1401 = $tmp1401->next;
                }
                $fn1403 $tmp1402 = $tmp1401->methods[0];
                panda$collections$Iterator* $tmp1404 = $tmp1402(((panda$collections$Iterable*) p_type->subtypes));
                t$Iter1400 = $tmp1404;
                $l1405:;
                ITable* $tmp1407 = t$Iter1400->$class->itable;
                while ($tmp1407->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1407 = $tmp1407->next;
                }
                $fn1409 $tmp1408 = $tmp1407->methods[0];
                panda$core$Bit $tmp1410 = $tmp1408(t$Iter1400);
                panda$core$Bit $tmp1411 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1410);
                if (!$tmp1411.value) goto $l1406;
                {
                    ITable* $tmp1413 = t$Iter1400->$class->itable;
                    while ($tmp1413->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1413 = $tmp1413->next;
                    }
                    $fn1415 $tmp1414 = $tmp1413->methods[1];
                    panda$core$Object* $tmp1416 = $tmp1414(t$Iter1400);
                    t1412 = ((org$pandalanguage$pandac$Type*) $tmp1416);
                    panda$core$Int64$nullable $tmp1418 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, t1412, p_target);
                    cost1417 = $tmp1418;
                    bool $tmp1419 = ((panda$core$Bit) { cost1417.nonnull }).value;
                    if (!$tmp1419) goto $l1420;
                    bool $tmp1421 = ((panda$core$Bit) { !best1399.nonnull }).value;
                    if ($tmp1421) goto $l1422;
                    panda$core$Bit $tmp1423 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost1417.value), ((panda$core$Int64) best1399.value));
                    $tmp1421 = $tmp1423.value;
                    $l1422:;
                    panda$core$Bit $tmp1424 = { $tmp1421 };
                    $tmp1419 = $tmp1424.value;
                    $l1420:;
                    panda$core$Bit $tmp1425 = { $tmp1419 };
                    if ($tmp1425.value) {
                    {
                        best1399 = cost1417;
                    }
                    }
                }
                goto $l1405;
                $l1406:;
            }
            return best1399;
        }
        break;
        case 22:
        {
            panda$core$Int64$nullable $tmp1426 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_type->parameter->bound, p_target);
            return $tmp1426;
        }
        break;
    }
    panda$core$Bit $tmp1427 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_target);
    panda$core$Bit $tmp1428 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1427);
    if ($tmp1428.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    panda$core$Bit $tmp1429 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_type);
    panda$core$Bit $tmp1430 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1429);
    if ($tmp1430.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp1432 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_type);
    cl1431 = $tmp1432;
    PANDA_ASSERT(((panda$core$Bit) { cl1431 != NULL }).value);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, cl1431);
    if (((panda$core$Bit) { cl1431->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp1434 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_type, cl1431->rawSuper);
        org$pandalanguage$pandac$Type* $tmp1435 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_type, $tmp1434);
        panda$core$Int64$nullable $tmp1436 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1435, p_target);
        cost1433 = $tmp1436;
        if (((panda$core$Bit) { cost1433.nonnull }).value) {
        {
            panda$core$Int64 $tmp1437 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) cost1433.value), ((panda$core$Int64) ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }).value));
            return ((panda$core$Int64$nullable) { $tmp1437, true });
        }
        }
    }
    }
    {
        ITable* $tmp1439 = ((panda$collections$Iterable*) cl1431->rawInterfaces)->$class->itable;
        while ($tmp1439->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1439 = $tmp1439->next;
        }
        $fn1441 $tmp1440 = $tmp1439->methods[0];
        panda$collections$Iterator* $tmp1442 = $tmp1440(((panda$collections$Iterable*) cl1431->rawInterfaces));
        intf$Iter1438 = $tmp1442;
        $l1443:;
        ITable* $tmp1445 = intf$Iter1438->$class->itable;
        while ($tmp1445->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1445 = $tmp1445->next;
        }
        $fn1447 $tmp1446 = $tmp1445->methods[0];
        panda$core$Bit $tmp1448 = $tmp1446(intf$Iter1438);
        panda$core$Bit $tmp1449 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1448);
        if (!$tmp1449.value) goto $l1444;
        {
            ITable* $tmp1451 = intf$Iter1438->$class->itable;
            while ($tmp1451->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1451 = $tmp1451->next;
            }
            $fn1453 $tmp1452 = $tmp1451->methods[1];
            panda$core$Object* $tmp1454 = $tmp1452(intf$Iter1438);
            intf1450 = ((org$pandalanguage$pandac$Type*) $tmp1454);
            org$pandalanguage$pandac$Type* $tmp1456 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_type, intf1450);
            org$pandalanguage$pandac$Type* $tmp1457 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_type, $tmp1456);
            panda$core$Int64$nullable $tmp1458 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1457, p_target);
            cost1455 = $tmp1458;
            if (((panda$core$Bit) { cost1455.nonnull }).value) {
            {
                panda$core$Int64 $tmp1459 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) cost1455.value), ((panda$core$Int64) ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }).value));
                return ((panda$core$Int64$nullable) { $tmp1459, true });
            }
            }
        }
        goto $l1443;
        $l1444:;
    }
    return ((panda$core$Int64$nullable) { .nonnull = false });
}
panda$core$Int64 org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_value) {
    panda$core$Bit $tmp1461 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { -128 }));
    bool $tmp1460 = $tmp1461.value;
    if (!$tmp1460) goto $l1462;
    panda$core$Bit $tmp1463 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { 127 }));
    $tmp1460 = $tmp1463.value;
    $l1462:;
    panda$core$Bit $tmp1464 = { $tmp1460 };
    if ($tmp1464.value) {
    {
        return ((panda$core$Int64) { 8 });
    }
    }
    panda$core$Bit $tmp1466 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { -32768 }));
    bool $tmp1465 = $tmp1466.value;
    if (!$tmp1465) goto $l1467;
    panda$core$Bit $tmp1468 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { 32767 }));
    $tmp1465 = $tmp1468.value;
    $l1467:;
    panda$core$Bit $tmp1469 = { $tmp1465 };
    if ($tmp1469.value) {
    {
        return ((panda$core$Int64) { 16 });
    }
    }
    panda$core$Bit $tmp1471 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { -2147483648 }));
    bool $tmp1470 = $tmp1471.value;
    if (!$tmp1470) goto $l1472;
    panda$core$Bit $tmp1473 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { 2147483647 }));
    $tmp1470 = $tmp1473.value;
    $l1472:;
    panda$core$Bit $tmp1474 = { $tmp1470 };
    if ($tmp1474.value) {
    {
        return ((panda$core$Int64) { 32 });
    }
    }
    return ((panda$core$Int64) { 64 });
}
panda$core$Int64 org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64(org$pandalanguage$pandac$Compiler* self, panda$core$UInt64 p_value) {
    panda$core$Bit $tmp1475 = panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(p_value, ((panda$core$UInt64) { 255 }));
    if ($tmp1475.value) {
    {
        return ((panda$core$Int64) { 8 });
    }
    }
    panda$core$Bit $tmp1476 = panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(p_value, ((panda$core$UInt64) { 65535 }));
    if ($tmp1476.value) {
    {
        return ((panda$core$Int64) { 16 });
    }
    }
    panda$core$Bit $tmp1477 = panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(p_value, ((panda$core$UInt64) { 4294967295 }));
    if ($tmp1477.value) {
    {
        return ((panda$core$Int64) { 32 });
    }
    }
    return ((panda$core$Int64) { 64 });
}
panda$core$Int64$nullable org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr, org$pandalanguage$pandac$Type* p_target) {
    panda$core$Int64 base1478;
    panda$core$Int64$nullable cost1492;
    panda$core$String* s1552;
    panda$collections$Iterator* utf161563;
    panda$core$Int64$nullable cost11599;
    panda$core$Int64$nullable cost21603;
    panda$core$Int64 cost1612;
    panda$core$Int64$nullable cost11626;
    panda$core$Int64$nullable cost21630;
    panda$core$Int64$nullable cost31635;
    panda$collections$Array* args1643;
    org$pandalanguage$pandac$ClassDecl* targetClass1654;
    panda$collections$Iterator* m$Iter1656;
    org$pandalanguage$pandac$MethodDecl* m1668;
    panda$core$Int64$nullable cost1680;
    panda$core$Int64$nullable cost1685;
    base1478 = ((panda$core$Int64) { 0 });
    panda$core$Bit $tmp1481 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1033 }));
    bool $tmp1480 = $tmp1481.value;
    if (!$tmp1480) goto $l1482;
    panda$core$Bit $tmp1483 = org$pandalanguage$pandac$Type$isChar$R$panda$core$Bit(p_target);
    panda$core$Bit $tmp1484 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1483);
    $tmp1480 = $tmp1484.value;
    $l1482:;
    panda$core$Bit $tmp1485 = { $tmp1480 };
    bool $tmp1479 = $tmp1485.value;
    if (!$tmp1479) goto $l1486;
    panda$core$Int64 $tmp1487 = panda$core$String$length$R$panda$core$Int64(((panda$core$String*) p_expr->payload));
    panda$core$Bit $tmp1488 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1487, ((panda$core$Int64) { 1 }));
    $tmp1479 = $tmp1488.value;
    $l1486:;
    panda$core$Bit $tmp1489 = { $tmp1479 };
    if ($tmp1489.value) {
    {
        base1478 = ((panda$core$Int64) { 3 });
    }
    }
    panda$core$Bit $tmp1490 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_expr->type, p_target);
    if ($tmp1490.value) {
    {
        return ((panda$core$Int64$nullable) { base1478, true });
    }
    }
    switch (p_target->typeKind.value) {
        case 11:
        {
            panda$core$Bit $tmp1491 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1030 }));
            if ($tmp1491.value) {
            {
                return ((panda$core$Int64$nullable) { base1478, true });
            }
            }
            panda$core$Object* $tmp1493 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$Int64$nullable $tmp1494 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, ((org$pandalanguage$pandac$Type*) $tmp1493));
            cost1492 = $tmp1494;
            if (((panda$core$Bit) { !cost1492.nonnull }).value) {
            {
                return ((panda$core$Int64$nullable) { .nonnull = false });
            }
            }
            panda$core$Bit $tmp1495 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->type->typeKind, ((panda$core$Int64) { 11 }));
            if ($tmp1495.value) {
            {
                panda$core$Int64 $tmp1496 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(base1478, ((panda$core$Int64) cost1492.value));
                return ((panda$core$Int64$nullable) { $tmp1496, true });
            }
            }
            panda$core$Int64 $tmp1497 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(base1478, ((panda$core$Int64) cost1492.value));
            panda$core$Int64 $tmp1498 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1497, ((panda$core$Int64) { 1 }));
            return ((panda$core$Int64$nullable) { $tmp1498, true });
        }
        break;
        case 22:
        {
            panda$core$Bit $tmp1499 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(base1478, ((panda$core$Int64) { 0 }));
            PANDA_ASSERT($tmp1499.value);
            panda$core$Int64$nullable $tmp1500 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, p_target->parameter->bound);
            return $tmp1500;
        }
        break;
    }
    switch (p_expr->kind.value) {
        case 1011:
        {
            panda$core$Bit $tmp1501 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 19 }));
            if ($tmp1501.value) {
            {
                return ((panda$core$Int64$nullable) { base1478, true });
            }
            }
            panda$core$Bit $tmp1502 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_target);
            if ($tmp1502.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1503 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
                panda$core$Int64$nullable $tmp1504 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1503, p_target);
                return $tmp1504;
            }
            }
        }
        break;
        case 1004:
        {
            panda$core$Bit $tmp1507 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            bool $tmp1506 = $tmp1507.value;
            if (!$tmp1506) goto $l1508;
            panda$core$Int64 $tmp1509 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1510 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(self, $tmp1509);
            panda$core$Int64 $tmp1511 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1512 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1510, $tmp1511);
            $tmp1506 = $tmp1512.value;
            $l1508:;
            panda$core$Bit $tmp1513 = { $tmp1506 };
            bool $tmp1505 = $tmp1513.value;
            if ($tmp1505) goto $l1514;
            panda$core$Bit $tmp1516 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 13 }));
            bool $tmp1515 = $tmp1516.value;
            if (!$tmp1515) goto $l1517;
            panda$core$Int64 $tmp1518 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64(self, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1519 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1520 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1518, $tmp1519);
            $tmp1515 = $tmp1520.value;
            $l1517:;
            panda$core$Bit $tmp1521 = { $tmp1515 };
            $tmp1505 = $tmp1521.value;
            $l1514:;
            panda$core$Bit $tmp1522 = { $tmp1505 };
            if ($tmp1522.value) {
            {
                return ((panda$core$Int64$nullable) { base1478, true });
            }
            }
            panda$core$Bit $tmp1523 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 20 }));
            if ($tmp1523.value) {
            {
                return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true });
            }
            }
            panda$core$Bit $tmp1524 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            panda$core$Bit $tmp1525 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1524);
            if ($tmp1525.value) {
            {
                panda$core$Bit $tmp1526 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(base1478, ((panda$core$Int64) { 0 }));
                PANDA_ASSERT($tmp1526.value);
                org$pandalanguage$pandac$Type* $tmp1527 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                panda$core$Int64$nullable $tmp1528 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1527, p_target);
                return $tmp1528;
            }
            }
        }
        break;
        case 1032:
        {
            panda$core$Bit $tmp1530 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            bool $tmp1529 = $tmp1530.value;
            if (!$tmp1529) goto $l1531;
            panda$core$Int64 $tmp1532 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1533 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp1532);
            panda$core$Int64 $tmp1534 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(self, $tmp1533);
            panda$core$Int64 $tmp1535 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1536 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1534, $tmp1535);
            $tmp1529 = $tmp1536.value;
            $l1531:;
            panda$core$Bit $tmp1537 = { $tmp1529 };
            if ($tmp1537.value) {
            {
                return ((panda$core$Int64$nullable) { base1478, true });
            }
            }
            panda$core$Bit $tmp1538 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 20 }));
            if ($tmp1538.value) {
            {
                return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true });
            }
            }
            panda$core$Bit $tmp1539 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            panda$core$Bit $tmp1540 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1539);
            if ($tmp1540.value) {
            {
                panda$core$Bit $tmp1541 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(base1478, ((panda$core$Int64) { 0 }));
                PANDA_ASSERT($tmp1541.value);
                org$pandalanguage$pandac$Type* $tmp1542 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                panda$core$Int64$nullable $tmp1543 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1542, p_target);
                return $tmp1543;
            }
            }
        }
        break;
        case 1045:
        {
            panda$core$Bit $tmp1544 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 20 }));
            if ($tmp1544.value) {
            {
                return ((panda$core$Int64$nullable) { base1478, true });
            }
            }
            panda$core$Bit $tmp1545 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            panda$core$Bit $tmp1546 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1545);
            if ($tmp1546.value) {
            {
                panda$core$Bit $tmp1547 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(base1478, ((panda$core$Int64) { 0 }));
                PANDA_ASSERT($tmp1547.value);
                org$pandalanguage$pandac$Type* $tmp1548 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                panda$core$Int64$nullable $tmp1549 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1548, p_target);
                return $tmp1549;
            }
            }
        }
        break;
        case 1033:
        {
            org$pandalanguage$pandac$Type* $tmp1550 = org$pandalanguage$pandac$Type$Char8$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1551 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1550);
            if ($tmp1551.value) {
            {
                s1552 = ((panda$core$String*) p_expr->payload);
                panda$core$Int64 $tmp1554 = panda$core$String$length$R$panda$core$Int64(s1552);
                panda$core$Bit $tmp1555 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1554, ((panda$core$Int64) { 1 }));
                bool $tmp1553 = $tmp1555.value;
                if (!$tmp1553) goto $l1556;
                panda$core$Char32 $tmp1557 = panda$core$String$$IDX$panda$core$Int64$R$panda$core$Char32(s1552, ((panda$core$Int64) { 0 }));
                panda$core$UInt32 $tmp1558 = panda$core$Char32$convert$R$panda$core$UInt32($tmp1557);
                panda$core$Bit $tmp1559 = panda$core$UInt32$$LE$panda$core$UInt32$R$panda$core$Bit($tmp1558, ((panda$core$UInt32) { 255 }));
                $tmp1553 = $tmp1559.value;
                $l1556:;
                panda$core$Bit $tmp1560 = { $tmp1553 };
                if ($tmp1560.value) {
                {
                    return ((panda$core$Int64$nullable) { base1478, true });
                }
                }
                return ((panda$core$Int64$nullable) { .nonnull = false });
            }
            }
            org$pandalanguage$pandac$Type* $tmp1561 = org$pandalanguage$pandac$Type$Char16$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1562 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1561);
            if ($tmp1562.value) {
            {
                panda$collections$Iterator* $tmp1564 = panda$core$String$utf16$R$panda$collections$Iterator$LTpanda$core$Char16$GT(((panda$core$String*) p_expr->payload));
                utf161563 = $tmp1564;
                ITable* $tmp1565 = utf161563->$class->itable;
                while ($tmp1565->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1565 = $tmp1565->next;
                }
                $fn1567 $tmp1566 = $tmp1565->methods[0];
                panda$core$Bit $tmp1568 = $tmp1566(utf161563);
                if ($tmp1568.value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                ITable* $tmp1569 = utf161563->$class->itable;
                while ($tmp1569->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1569 = $tmp1569->next;
                }
                $fn1571 $tmp1570 = $tmp1569->methods[1];
                $tmp1570(utf161563);
                ITable* $tmp1572 = utf161563->$class->itable;
                while ($tmp1572->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1572 = $tmp1572->next;
                }
                $fn1574 $tmp1573 = $tmp1572->methods[0];
                panda$core$Bit $tmp1575 = $tmp1573(utf161563);
                if ($tmp1575.value) {
                {
                    panda$core$Int64 $tmp1576 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(base1478, ((panda$core$Int64) { 1 }));
                    return ((panda$core$Int64$nullable) { $tmp1576, true });
                }
                }
                return ((panda$core$Int64$nullable) { .nonnull = false });
            }
            }
            org$pandalanguage$pandac$Type* $tmp1577 = org$pandalanguage$pandac$Type$Char32$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1578 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1577);
            if ($tmp1578.value) {
            {
                panda$core$Int64 $tmp1579 = panda$core$String$length$R$panda$core$Int64(((panda$core$String*) p_expr->payload));
                panda$core$Bit $tmp1580 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1579, ((panda$core$Int64) { 1 }));
                if ($tmp1580.value) {
                {
                    panda$core$Int64 $tmp1581 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(base1478, ((panda$core$Int64) { 2 }));
                    return ((panda$core$Int64$nullable) { $tmp1581, true });
                }
                }
                return ((panda$core$Int64$nullable) { .nonnull = false });
            }
            }
        }
        break;
        case 1031:
        {
            panda$core$Bit $tmp1582 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(p_target);
            if ($tmp1582.value) {
            {
                panda$core$Int64 $tmp1583 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_expr->children);
                panda$core$Bit $tmp1584 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1583, ((panda$core$Int64) { 2 }));
                if ($tmp1584.value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Object* $tmp1586 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Bit $tmp1587 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1586)->kind, ((panda$core$Int64) { 1030 }));
                bool $tmp1585 = $tmp1587.value;
                if (!$tmp1585) goto $l1588;
                panda$core$Object* $tmp1589 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                panda$core$Bit $tmp1590 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1589)->kind, ((panda$core$Int64) { 1030 }));
                $tmp1585 = $tmp1590.value;
                $l1588:;
                panda$core$Bit $tmp1591 = { $tmp1585 };
                if ($tmp1591.value) {
                {
                    panda$core$Object* $tmp1592 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                    panda$core$Bit $tmp1593 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1592)->typeKind, ((panda$core$Int64) { 11 }));
                    if ($tmp1593.value) {
                    {
                        panda$core$Object* $tmp1594 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                        panda$core$Object* $tmp1595 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$Type*) $tmp1594)->subtypes, ((panda$core$Int64) { 0 }));
                        panda$core$Bit $tmp1596 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1595));
                        if ($tmp1596.value) {
                        {
                            return ((panda$core$Int64$nullable) { base1478, true });
                        }
                        }
                        panda$core$Int64 $tmp1597 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(base1478, ((panda$core$Int64) { 1 }));
                        return ((panda$core$Int64$nullable) { $tmp1597, true });
                    }
                    }
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Bit $tmp1598 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 21 }));
                PANDA_ASSERT($tmp1598.value);
                panda$core$Object* $tmp1600 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Object* $tmp1601 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                panda$core$Int64$nullable $tmp1602 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1600), ((org$pandalanguage$pandac$Type*) $tmp1601));
                cost11599 = $tmp1602;
                if (((panda$core$Bit) { !cost11599.nonnull }).value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Object* $tmp1604 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                panda$core$Object* $tmp1605 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                panda$core$Int64$nullable $tmp1606 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1604), ((org$pandalanguage$pandac$Type*) $tmp1605));
                cost21603 = $tmp1606;
                if (((panda$core$Bit) { !cost21603.nonnull }).value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Int64 $tmp1607 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(base1478, ((panda$core$Int64) cost11599.value));
                panda$core$Int64 $tmp1608 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1607, ((panda$core$Int64) cost21603.value));
                return ((panda$core$Int64$nullable) { $tmp1608, true });
            }
            }
            panda$core$Bit $tmp1609 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(p_target);
            if ($tmp1609.value) {
            {
                panda$core$Int64 $tmp1610 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_expr->children);
                panda$core$Bit $tmp1611 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1610, ((panda$core$Int64) { 3 }));
                if ($tmp1611.value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Object* $tmp1614 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Bit $tmp1615 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1614)->kind, ((panda$core$Int64) { 1030 }));
                bool $tmp1613 = $tmp1615.value;
                if (!$tmp1613) goto $l1616;
                panda$core$Object* $tmp1617 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                panda$core$Bit $tmp1618 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1617)->kind, ((panda$core$Int64) { 1030 }));
                $tmp1613 = $tmp1618.value;
                $l1616:;
                panda$core$Bit $tmp1619 = { $tmp1613 };
                if ($tmp1619.value) {
                {
                    panda$core$Object* $tmp1620 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                    panda$core$Bit $tmp1621 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1620)->typeKind, ((panda$core$Int64) { 11 }));
                    if ($tmp1621.value) {
                    {
                        panda$core$Object* $tmp1622 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                        panda$core$Object* $tmp1623 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$Type*) $tmp1622)->subtypes, ((panda$core$Int64) { 0 }));
                        panda$core$Bit $tmp1624 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1623));
                        if ($tmp1624.value) {
                        {
                            cost1612 = ((panda$core$Int64) { 0 });
                        }
                        }
                        else {
                        {
                            cost1612 = ((panda$core$Int64) { 1 });
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
                    panda$core$Bit $tmp1625 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 21 }));
                    PANDA_ASSERT($tmp1625.value);
                    panda$core$Object* $tmp1627 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                    panda$core$Object* $tmp1628 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                    panda$core$Int64$nullable $tmp1629 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1627), ((org$pandalanguage$pandac$Type*) $tmp1628));
                    cost11626 = $tmp1629;
                    if (((panda$core$Bit) { !cost11626.nonnull }).value) {
                    {
                        return ((panda$core$Int64$nullable) { .nonnull = false });
                    }
                    }
                    panda$core$Object* $tmp1631 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                    panda$core$Object* $tmp1632 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                    panda$core$Int64$nullable $tmp1633 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1631), ((org$pandalanguage$pandac$Type*) $tmp1632));
                    cost21630 = $tmp1633;
                    if (((panda$core$Bit) { !cost21630.nonnull }).value) {
                    {
                        return ((panda$core$Int64$nullable) { .nonnull = false });
                    }
                    }
                    panda$core$Int64 $tmp1634 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) cost11626.value), ((panda$core$Int64) cost21630.value));
                    cost1612 = $tmp1634;
                }
                }
                panda$core$Object* $tmp1636 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 2 }));
                panda$core$Object* $tmp1637 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 2 }));
                panda$core$Int64$nullable $tmp1638 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1636), ((org$pandalanguage$pandac$Type*) $tmp1637));
                cost31635 = $tmp1638;
                if (((panda$core$Bit) { !cost31635.nonnull }).value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Int64 $tmp1639 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(base1478, cost1612);
                panda$core$Int64 $tmp1640 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1639, ((panda$core$Int64) cost31635.value));
                return ((panda$core$Int64$nullable) { $tmp1640, true });
            }
            }
            org$pandalanguage$pandac$Type* $tmp1641 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
            panda$core$Int64$nullable $tmp1642 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1641, p_target);
            return $tmp1642;
        }
        break;
        case 1040:
        {
            panda$collections$Array* $tmp1644 = (panda$collections$Array*) malloc(40);
            $tmp1644->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1644->refCount.value = 1;
            panda$collections$Array$init($tmp1644);
            args1643 = $tmp1644;
            panda$core$Object* $tmp1646 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
            panda$collections$Array$add$panda$collections$Array$T(args1643, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp1646)));
            panda$core$Bit $tmp1647 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(base1478, ((panda$core$Int64) { 0 }));
            PANDA_ASSERT($tmp1647.value);
            panda$core$Object* $tmp1648 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp1650 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1648), &$s1649, ((panda$collections$ListView*) args1643));
            panda$core$Int64$nullable $tmp1651 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1650, p_target);
            return $tmp1651;
        }
        break;
    }
    panda$core$Bit $tmp1652 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_target);
    panda$core$Bit $tmp1653 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1652);
    if ($tmp1653.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp1655 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_target);
    targetClass1654 = $tmp1655;
    if (((panda$core$Bit) { targetClass1654 == NULL }).value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    {
        ITable* $tmp1657 = ((panda$collections$Iterable*) targetClass1654->methods)->$class->itable;
        while ($tmp1657->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1657 = $tmp1657->next;
        }
        $fn1659 $tmp1658 = $tmp1657->methods[0];
        panda$collections$Iterator* $tmp1660 = $tmp1658(((panda$collections$Iterable*) targetClass1654->methods));
        m$Iter1656 = $tmp1660;
        $l1661:;
        ITable* $tmp1663 = m$Iter1656->$class->itable;
        while ($tmp1663->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1663 = $tmp1663->next;
        }
        $fn1665 $tmp1664 = $tmp1663->methods[0];
        panda$core$Bit $tmp1666 = $tmp1664(m$Iter1656);
        panda$core$Bit $tmp1667 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1666);
        if (!$tmp1667.value) goto $l1662;
        {
            ITable* $tmp1669 = m$Iter1656->$class->itable;
            while ($tmp1669->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1669 = $tmp1669->next;
            }
            $fn1671 $tmp1670 = $tmp1669->methods[1];
            panda$core$Object* $tmp1672 = $tmp1670(m$Iter1656);
            m1668 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1672);
            panda$core$Bit $tmp1673 = org$pandalanguage$pandac$Annotations$isImplicit$R$panda$core$Bit(m1668->annotations);
            if ($tmp1673.value) {
            {
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m1668);
                panda$core$Bit $tmp1675 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(m1668->methodKind, ((panda$core$Int64) { 59 }));
                bool $tmp1674 = $tmp1675.value;
                if (!$tmp1674) goto $l1676;
                panda$core$Int64 $tmp1677 = panda$collections$Array$get_count$R$panda$core$Int64(m1668->parameters);
                panda$core$Bit $tmp1678 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1677, ((panda$core$Int64) { 1 }));
                $tmp1674 = $tmp1678.value;
                $l1676:;
                panda$core$Bit $tmp1679 = { $tmp1674 };
                if ($tmp1679.value) {
                {
                    panda$core$Object* $tmp1681 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(m1668->parameters, ((panda$core$Int64) { 0 }));
                    panda$core$Int64$nullable $tmp1682 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1681)->type);
                    cost1680 = $tmp1682;
                    if (((panda$core$Bit) { cost1680.nonnull }).value) {
                    {
                        panda$core$Int64 $tmp1683 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(base1478, ((panda$core$Int64) cost1680.value));
                        panda$core$Int64 $tmp1684 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1683, ((panda$core$Int64) { 2 }));
                        return ((panda$core$Int64$nullable) { $tmp1684, true });
                    }
                    }
                }
                }
            }
            }
        }
        goto $l1661;
        $l1662:;
    }
    PANDA_ASSERT(((panda$core$Bit) { p_expr->type != NULL }).value);
    panda$core$Int64$nullable $tmp1686 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr->type, p_target);
    cost1685 = $tmp1686;
    if (((panda$core$Bit) { cost1685.nonnull }).value) {
    {
        panda$core$Int64 $tmp1687 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(base1478, ((panda$core$Int64) cost1685.value));
        return ((panda$core$Int64$nullable) { $tmp1687, true });
    }
    }
    return ((panda$core$Int64$nullable) { .nonnull = false });
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$doCoerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr, org$pandalanguage$pandac$Type* p_target) {
    panda$collections$Array* children1696;
    org$pandalanguage$pandac$IRNode* intermediate1701;
    org$pandalanguage$pandac$IRNode* coerced1733;
    org$pandalanguage$pandac$IRNode* coerced1759;
    org$pandalanguage$pandac$IRNode* coerced1772;
    org$pandalanguage$pandac$IRNode* varType1786;
    panda$collections$Array* args1796;
    org$pandalanguage$pandac$IRNode* target1804;
    panda$collections$Array* args1815;
    org$pandalanguage$pandac$IRNode* target1827;
    panda$collections$Array* args1838;
    org$pandalanguage$pandac$IRNode* target1846;
    org$pandalanguage$pandac$Type* param1862;
    org$pandalanguage$pandac$IRNode* start1864;
    org$pandalanguage$pandac$IRNode* end1867;
    panda$collections$Array* args1870;
    org$pandalanguage$pandac$IRNode* target1876;
    org$pandalanguage$pandac$Type* endPoint1892;
    org$pandalanguage$pandac$IRNode* start1894;
    org$pandalanguage$pandac$IRNode* end1897;
    org$pandalanguage$pandac$IRNode* step1900;
    panda$collections$Array* args1904;
    org$pandalanguage$pandac$IRNode* target1910;
    panda$collections$ImmutableArray* args1918;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1919;
    panda$collections$Array* children1931;
    org$pandalanguage$pandac$IRNode* intermediate1937;
    org$pandalanguage$pandac$ClassDecl* cl1942;
    panda$collections$Iterator* m$Iter1944;
    org$pandalanguage$pandac$MethodDecl* m1956;
    org$pandalanguage$pandac$IRNode* type1973;
    panda$collections$Array* args1978;
    panda$collections$Array* children1983;
    if (((panda$core$Bit) { p_expr == NULL }).value) {
    {
        return NULL;
    }
    }
    PANDA_ASSERT(p_expr->type->resolved.value);
    PANDA_ASSERT(p_target->resolved.value);
    panda$core$Bit $tmp1688 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_expr->type, p_target);
    if ($tmp1688.value) {
    {
        return p_expr;
    }
    }
    panda$core$Bit $tmp1690 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->type->typeKind, ((panda$core$Int64) { 11 }));
    bool $tmp1689 = $tmp1690.value;
    if (!$tmp1689) goto $l1691;
    panda$core$Bit $tmp1692 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
    $tmp1689 = $tmp1692.value;
    $l1691:;
    panda$core$Bit $tmp1693 = { $tmp1689 };
    if ($tmp1693.value) {
    {
        panda$core$Object* $tmp1694 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp1695 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1694), p_target);
        if ($tmp1695.value) {
        {
            panda$collections$Array* $tmp1697 = (panda$collections$Array*) malloc(40);
            $tmp1697->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1697->refCount.value = 1;
            panda$collections$Array$init($tmp1697);
            children1696 = $tmp1697;
            panda$collections$Array$add$panda$collections$Array$T(children1696, ((panda$core$Object*) p_expr));
            org$pandalanguage$pandac$IRNode* $tmp1699 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp1699->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1699->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp1699, ((panda$core$Int64) { 1009 }), p_expr->position, p_target, ((panda$core$Object*) wrap_panda$core$Bit(((panda$core$Bit) { false }))), ((panda$collections$ListView*) children1696));
            return $tmp1699;
        }
        }
        panda$core$Object* $tmp1702 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->type->subtypes, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp1703 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, ((org$pandalanguage$pandac$Type*) $tmp1702));
        intermediate1701 = $tmp1703;
        org$pandalanguage$pandac$IRNode* $tmp1704 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, intermediate1701, p_target);
        return $tmp1704;
    }
    }
    switch (p_expr->kind.value) {
        case 1004:
        {
            panda$core$Bit $tmp1706 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            bool $tmp1705 = $tmp1706.value;
            if (!$tmp1705) goto $l1707;
            panda$core$Int64 $tmp1708 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64(self, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1709 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1710 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1708, $tmp1709);
            $tmp1705 = $tmp1710.value;
            $l1707:;
            panda$core$Bit $tmp1711 = { $tmp1705 };
            if ($tmp1711.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1712 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1712->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1712->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp1712, ((panda$core$Int64) { 1004 }), p_expr->position, p_target, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
                return $tmp1712;
            }
            }
            else {
            panda$core$Bit $tmp1715 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 13 }));
            bool $tmp1714 = $tmp1715.value;
            if (!$tmp1714) goto $l1716;
            panda$core$Int64 $tmp1717 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64(self, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1718 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1719 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1717, $tmp1718);
            $tmp1714 = $tmp1719.value;
            $l1716:;
            panda$core$Bit $tmp1720 = { $tmp1714 };
            if ($tmp1720.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1721 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1721->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1721->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp1721, ((panda$core$Int64) { 1004 }), p_expr->position, p_target, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
                return $tmp1721;
            }
            }
            else {
            panda$core$Bit $tmp1723 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 20 }));
            if ($tmp1723.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1724 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1724->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1724->refCount.value = 1;
                panda$core$Real64 $tmp1726 = panda$core$UInt64$convert$R$panda$core$Real64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Real64($tmp1724, ((panda$core$Int64) { 1045 }), p_expr->position, p_target, $tmp1726);
                return $tmp1724;
            }
            }
            }
            }
            panda$core$Bit $tmp1728 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 10 }));
            bool $tmp1727 = $tmp1728.value;
            if (!$tmp1727) goto $l1729;
            panda$core$Bit $tmp1730 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            panda$core$Bit $tmp1731 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1730);
            $tmp1727 = $tmp1731.value;
            $l1729:;
            panda$core$Bit $tmp1732 = { $tmp1727 };
            if ($tmp1732.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1734 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp1735 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, $tmp1734);
                coerced1733 = $tmp1735;
                if (((panda$core$Bit) { coerced1733 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$IRNode* $tmp1736 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, coerced1733, p_target);
                return $tmp1736;
            }
            }
        }
        break;
        case 1032:
        {
            panda$core$Bit $tmp1738 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            bool $tmp1737 = $tmp1738.value;
            if (!$tmp1737) goto $l1739;
            panda$core$Int64 $tmp1740 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1741 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp1740);
            panda$core$Int64 $tmp1742 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(self, $tmp1741);
            panda$core$Int64 $tmp1743 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1744 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1742, $tmp1743);
            $tmp1737 = $tmp1744.value;
            $l1739:;
            panda$core$Bit $tmp1745 = { $tmp1737 };
            if ($tmp1745.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1746 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1746->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1746->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp1746, ((panda$core$Int64) { 1032 }), p_expr->position, p_target, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
                return $tmp1746;
            }
            }
            else {
            panda$core$Bit $tmp1748 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 20 }));
            if ($tmp1748.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1749 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1749->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1749->refCount.value = 1;
                panda$core$Real64 $tmp1751 = panda$core$UInt64$convert$R$panda$core$Real64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
                panda$core$Real64 $tmp1752 = panda$core$Real64$$SUB$R$panda$core$Real64($tmp1751);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Real64($tmp1749, ((panda$core$Int64) { 1045 }), p_expr->position, p_target, $tmp1752);
                return $tmp1749;
            }
            }
            }
            panda$core$Bit $tmp1754 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 10 }));
            bool $tmp1753 = $tmp1754.value;
            if (!$tmp1753) goto $l1755;
            panda$core$Bit $tmp1756 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            panda$core$Bit $tmp1757 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1756);
            $tmp1753 = $tmp1757.value;
            $l1755:;
            panda$core$Bit $tmp1758 = { $tmp1753 };
            if ($tmp1758.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1760 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp1761 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, $tmp1760);
                coerced1759 = $tmp1761;
                if (((panda$core$Bit) { coerced1759 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$IRNode* $tmp1762 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, coerced1759, p_target);
                return $tmp1762;
            }
            }
        }
        break;
        case 1045:
        {
            panda$core$Bit $tmp1763 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 20 }));
            if ($tmp1763.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1764 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1764->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1764->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Real64($tmp1764, ((panda$core$Int64) { 1045 }), p_expr->position, p_target, ((panda$core$Real64$wrapper*) p_expr->payload)->value);
                return $tmp1764;
            }
            }
            panda$core$Bit $tmp1767 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 10 }));
            bool $tmp1766 = $tmp1767.value;
            if (!$tmp1766) goto $l1768;
            panda$core$Bit $tmp1769 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            panda$core$Bit $tmp1770 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1769);
            $tmp1766 = $tmp1770.value;
            $l1768:;
            panda$core$Bit $tmp1771 = { $tmp1766 };
            if ($tmp1771.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1773 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp1774 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, $tmp1773);
                coerced1772 = $tmp1774;
                if (((panda$core$Bit) { coerced1772 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$IRNode* $tmp1775 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, coerced1772, p_target);
                return $tmp1775;
            }
            }
        }
        break;
        case 1011:
        {
            org$pandalanguage$pandac$Type* $tmp1776 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1777 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1776);
            if ($tmp1777.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1778 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1778->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1778->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp1778, ((panda$core$Int64) { 1011 }), p_expr->position, p_target, ((panda$core$Bit$wrapper*) p_expr->payload)->value);
                return $tmp1778;
            }
            }
            panda$core$Bit $tmp1781 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_target);
            bool $tmp1780 = $tmp1781.value;
            if (!$tmp1780) goto $l1782;
            org$pandalanguage$pandac$Type* $tmp1783 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1784 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1783);
            $tmp1780 = $tmp1784.value;
            $l1782:;
            panda$core$Bit $tmp1785 = { $tmp1780 };
            if ($tmp1785.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1787 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp1788 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, $tmp1787);
                varType1786 = $tmp1788;
                if (((panda$core$Bit) { varType1786 != NULL }).value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp1789 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, varType1786, p_target);
                    return $tmp1789;
                }
                }
            }
            }
        }
        break;
        case 1033:
        {
            org$pandalanguage$pandac$Type* $tmp1791 = org$pandalanguage$pandac$Type$Char8$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1792 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1791);
            bool $tmp1790 = $tmp1792.value;
            if (!$tmp1790) goto $l1793;
            panda$core$Int64$nullable $tmp1794 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, p_target);
            $tmp1790 = ((panda$core$Bit) { $tmp1794.nonnull }).value;
            $l1793:;
            panda$core$Bit $tmp1795 = { $tmp1790 };
            if ($tmp1795.value) {
            {
                panda$collections$Array* $tmp1797 = (panda$collections$Array*) malloc(40);
                $tmp1797->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp1797->refCount.value = 1;
                panda$collections$Array$init($tmp1797);
                args1796 = $tmp1797;
                org$pandalanguage$pandac$IRNode* $tmp1799 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1799->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1799->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1801 = org$pandalanguage$pandac$Type$BuiltinUInt8$R$org$pandalanguage$pandac$Type();
                panda$core$Char32 $tmp1802 = panda$core$String$$IDX$panda$core$Int64$R$panda$core$Char32(((panda$core$String*) p_expr->payload), ((panda$core$Int64) { 0 }));
                panda$core$UInt64 $tmp1803 = panda$core$Char32$convert$R$panda$core$UInt64($tmp1802);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp1799, ((panda$core$Int64) { 1004 }), p_expr->position, $tmp1801, $tmp1803);
                panda$collections$Array$add$panda$collections$Array$T(args1796, ((panda$core$Object*) $tmp1799));
                org$pandalanguage$pandac$IRNode* $tmp1805 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1805->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1805->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1807 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1805, ((panda$core$Int64) { 1001 }), p_expr->position, $tmp1807, p_target);
                target1804 = $tmp1805;
                org$pandalanguage$pandac$IRNode* $tmp1808 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target1804, ((panda$collections$ListView*) args1796));
                return $tmp1808;
            }
            }
            org$pandalanguage$pandac$Type* $tmp1810 = org$pandalanguage$pandac$Type$Char16$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1811 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1810);
            bool $tmp1809 = $tmp1811.value;
            if (!$tmp1809) goto $l1812;
            panda$core$Int64$nullable $tmp1813 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, p_target);
            $tmp1809 = ((panda$core$Bit) { $tmp1813.nonnull }).value;
            $l1812:;
            panda$core$Bit $tmp1814 = { $tmp1809 };
            if ($tmp1814.value) {
            {
                panda$collections$Array* $tmp1816 = (panda$collections$Array*) malloc(40);
                $tmp1816->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp1816->refCount.value = 1;
                panda$collections$Array$init($tmp1816);
                args1815 = $tmp1816;
                org$pandalanguage$pandac$IRNode* $tmp1818 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1818->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1818->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1820 = org$pandalanguage$pandac$Type$BuiltinUInt16$R$org$pandalanguage$pandac$Type();
                panda$collections$Iterator* $tmp1821 = panda$core$String$utf16$R$panda$collections$Iterator$LTpanda$core$Char16$GT(((panda$core$String*) p_expr->payload));
                ITable* $tmp1822 = $tmp1821->$class->itable;
                while ($tmp1822->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1822 = $tmp1822->next;
                }
                $fn1824 $tmp1823 = $tmp1822->methods[1];
                panda$core$Object* $tmp1825 = $tmp1823($tmp1821);
                panda$core$UInt64 $tmp1826 = panda$core$Char16$convert$R$panda$core$UInt64(((panda$core$Char16$wrapper*) $tmp1825)->value);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp1818, ((panda$core$Int64) { 1004 }), p_expr->position, $tmp1820, $tmp1826);
                panda$collections$Array$add$panda$collections$Array$T(args1815, ((panda$core$Object*) $tmp1818));
                org$pandalanguage$pandac$IRNode* $tmp1828 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1828->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1828->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1830 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1828, ((panda$core$Int64) { 1001 }), p_expr->position, $tmp1830, p_target);
                target1827 = $tmp1828;
                org$pandalanguage$pandac$IRNode* $tmp1831 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target1827, ((panda$collections$ListView*) args1815));
                return $tmp1831;
            }
            }
            org$pandalanguage$pandac$Type* $tmp1833 = org$pandalanguage$pandac$Type$Char32$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1834 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1833);
            bool $tmp1832 = $tmp1834.value;
            if (!$tmp1832) goto $l1835;
            panda$core$Int64$nullable $tmp1836 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, p_target);
            $tmp1832 = ((panda$core$Bit) { $tmp1836.nonnull }).value;
            $l1835:;
            panda$core$Bit $tmp1837 = { $tmp1832 };
            if ($tmp1837.value) {
            {
                panda$collections$Array* $tmp1839 = (panda$collections$Array*) malloc(40);
                $tmp1839->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp1839->refCount.value = 1;
                panda$collections$Array$init($tmp1839);
                args1838 = $tmp1839;
                org$pandalanguage$pandac$IRNode* $tmp1841 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1841->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1841->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1843 = org$pandalanguage$pandac$Type$BuiltinUInt32$R$org$pandalanguage$pandac$Type();
                panda$core$Char32 $tmp1844 = panda$core$String$$IDX$panda$core$Int64$R$panda$core$Char32(((panda$core$String*) p_expr->payload), ((panda$core$Int64) { 0 }));
                panda$core$UInt64 $tmp1845 = panda$core$Char32$convert$R$panda$core$UInt64($tmp1844);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp1841, ((panda$core$Int64) { 1004 }), p_expr->position, $tmp1843, $tmp1845);
                panda$collections$Array$add$panda$collections$Array$T(args1838, ((panda$core$Object*) $tmp1841));
                org$pandalanguage$pandac$IRNode* $tmp1847 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1847->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1847->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1849 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1847, ((panda$core$Int64) { 1001 }), p_expr->position, $tmp1849, p_target);
                target1846 = $tmp1847;
                org$pandalanguage$pandac$IRNode* $tmp1850 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target1846, ((panda$collections$ListView*) args1838));
                return $tmp1850;
            }
            }
        }
        break;
        case 1031:
        {
            panda$core$Bit $tmp1851 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(p_target);
            if ($tmp1851.value) {
            {
                panda$core$Int64 $tmp1852 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_expr->children);
                panda$core$Bit $tmp1853 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1852, ((panda$core$Int64) { 2 }));
                if ($tmp1853.value) {
                {
                    panda$core$String* $tmp1855 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1854, ((panda$core$Object*) p_target));
                    panda$core$String* $tmp1857 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1855, &$s1856);
                    panda$core$String* $tmp1858 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1857, ((panda$core$Object*) p_expr));
                    panda$core$String* $tmp1860 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1858, &$s1859);
                    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_expr->position, $tmp1860);
                    return NULL;
                }
                }
                panda$core$Bit $tmp1861 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 21 }));
                PANDA_ASSERT($tmp1861.value);
                panda$core$Object* $tmp1863 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                param1862 = ((org$pandalanguage$pandac$Type*) $tmp1863);
                panda$core$Object* $tmp1865 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$IRNode* $tmp1866 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1865), param1862);
                start1864 = $tmp1866;
                if (((panda$core$Bit) { start1864 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$core$Object* $tmp1868 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$IRNode* $tmp1869 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1868), param1862);
                end1867 = $tmp1869;
                if (((panda$core$Bit) { end1867 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp1871 = (panda$collections$Array*) malloc(40);
                $tmp1871->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp1871->refCount.value = 1;
                panda$collections$Array$init($tmp1871);
                args1870 = $tmp1871;
                panda$collections$Array$add$panda$collections$Array$T(args1870, ((panda$core$Object*) start1864));
                panda$collections$Array$add$panda$collections$Array$T(args1870, ((panda$core$Object*) end1867));
                org$pandalanguage$pandac$IRNode* $tmp1873 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1873->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1873->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1875 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp1873, ((panda$core$Int64) { 1011 }), p_expr->position, $tmp1875, ((panda$core$Bit$wrapper*) p_expr->payload)->value);
                panda$collections$Array$add$panda$collections$Array$T(args1870, ((panda$core$Object*) $tmp1873));
                org$pandalanguage$pandac$IRNode* $tmp1877 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1877->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1877->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1879 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1877, ((panda$core$Int64) { 1001 }), p_expr->position, $tmp1879, p_target);
                target1876 = $tmp1877;
                org$pandalanguage$pandac$IRNode* $tmp1880 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target1876, ((panda$collections$ListView*) args1870));
                return $tmp1880;
            }
            }
            else {
            panda$core$Bit $tmp1881 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(p_target);
            if ($tmp1881.value) {
            {
                panda$core$Int64 $tmp1882 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_expr->children);
                panda$core$Bit $tmp1883 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1882, ((panda$core$Int64) { 3 }));
                if ($tmp1883.value) {
                {
                    panda$core$String* $tmp1885 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1884, ((panda$core$Object*) p_target));
                    panda$core$String* $tmp1887 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1885, &$s1886);
                    panda$core$String* $tmp1888 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1887, ((panda$core$Object*) p_expr));
                    panda$core$String* $tmp1890 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1888, &$s1889);
                    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_expr->position, $tmp1890);
                    return NULL;
                }
                }
                panda$core$Bit $tmp1891 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 21 }));
                PANDA_ASSERT($tmp1891.value);
                panda$core$Object* $tmp1893 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                endPoint1892 = ((org$pandalanguage$pandac$Type*) $tmp1893);
                panda$core$Object* $tmp1895 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$IRNode* $tmp1896 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1895), endPoint1892);
                start1894 = $tmp1896;
                if (((panda$core$Bit) { start1894 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$core$Object* $tmp1898 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$IRNode* $tmp1899 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1898), endPoint1892);
                end1897 = $tmp1899;
                panda$core$Object* $tmp1901 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 2 }));
                panda$core$Object* $tmp1902 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 2 }));
                org$pandalanguage$pandac$IRNode* $tmp1903 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1901), ((org$pandalanguage$pandac$Type*) $tmp1902));
                step1900 = $tmp1903;
                panda$collections$Array* $tmp1905 = (panda$collections$Array*) malloc(40);
                $tmp1905->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp1905->refCount.value = 1;
                panda$collections$Array$init($tmp1905);
                args1904 = $tmp1905;
                panda$collections$Array$add$panda$collections$Array$T(args1904, ((panda$core$Object*) start1894));
                panda$collections$Array$add$panda$collections$Array$T(args1904, ((panda$core$Object*) end1897));
                panda$collections$Array$add$panda$collections$Array$T(args1904, ((panda$core$Object*) step1900));
                org$pandalanguage$pandac$IRNode* $tmp1907 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1907->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1907->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1909 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp1907, ((panda$core$Int64) { 1011 }), p_expr->position, $tmp1909, ((panda$core$Bit$wrapper*) p_expr->payload)->value);
                panda$collections$Array$add$panda$collections$Array$T(args1904, ((panda$core$Object*) $tmp1907));
                org$pandalanguage$pandac$IRNode* $tmp1911 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1911->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1911->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1913 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1911, ((panda$core$Int64) { 1001 }), p_expr->position, $tmp1913, p_target);
                target1910 = $tmp1911;
                org$pandalanguage$pandac$IRNode* $tmp1914 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target1910, ((panda$collections$ListView*) args1904));
                return $tmp1914;
            }
            }
            else {
            {
                org$pandalanguage$pandac$IRNode* $tmp1915 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp1916 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp1915, p_target);
                return $tmp1916;
            }
            }
            }
        }
        break;
        case 1039:
        {
            org$pandalanguage$pandac$IRNode* $tmp1917 = org$pandalanguage$pandac$Compiler$resolveMethodCall$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, p_target);
            return $tmp1917;
        }
        break;
        case 1040:
        {
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1919, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$collections$ImmutableArray* $tmp1920 = panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(p_expr->children, $tmp1919);
            args1918 = $tmp1920;
            panda$core$Object* $tmp1921 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp1923 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1921), &$s1922, ((panda$collections$ListView*) args1918), p_target);
            org$pandalanguage$pandac$IRNode* $tmp1924 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp1923, p_target);
            return $tmp1924;
        }
        break;
    }
    panda$core$Bit $tmp1925 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp1925.value) {
    {
        panda$core$Bit $tmp1926 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1030 }));
        if ($tmp1926.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp1927 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp1927->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1927->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp1927, ((panda$core$Int64) { 1030 }), p_expr->position, p_target);
            return $tmp1927;
        }
        }
        panda$core$Object* $tmp1929 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp1930 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_expr->type, ((org$pandalanguage$pandac$Type*) $tmp1929));
        if ($tmp1930.value) {
        {
            panda$collections$Array* $tmp1932 = (panda$collections$Array*) malloc(40);
            $tmp1932->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1932->refCount.value = 1;
            panda$collections$Array$init($tmp1932);
            children1931 = $tmp1932;
            panda$collections$Array$add$panda$collections$Array$T(children1931, ((panda$core$Object*) p_expr));
            org$pandalanguage$pandac$IRNode* $tmp1934 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp1934->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1934->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp1934, ((panda$core$Int64) { 1009 }), p_expr->position, p_target, ((panda$core$Object*) wrap_panda$core$Bit(((panda$core$Bit) { false }))), ((panda$collections$ListView*) children1931));
            return $tmp1934;
        }
        }
        panda$core$Bit $tmp1936 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_expr->type->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp1936.value) {
        {
            panda$core$Object* $tmp1938 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp1939 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, ((org$pandalanguage$pandac$Type*) $tmp1938));
            intermediate1937 = $tmp1939;
            org$pandalanguage$pandac$IRNode* $tmp1940 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, intermediate1937, p_target);
            return $tmp1940;
        }
        }
    }
    }
    panda$core$Int64$nullable $tmp1941 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, p_target);
    if (((panda$core$Bit) { $tmp1941.nonnull }).value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp1943 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_target);
        cl1942 = $tmp1943;
        if (((panda$core$Bit) { cl1942 != NULL }).value) {
        {
            {
                ITable* $tmp1945 = ((panda$collections$Iterable*) cl1942->methods)->$class->itable;
                while ($tmp1945->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1945 = $tmp1945->next;
                }
                $fn1947 $tmp1946 = $tmp1945->methods[0];
                panda$collections$Iterator* $tmp1948 = $tmp1946(((panda$collections$Iterable*) cl1942->methods));
                m$Iter1944 = $tmp1948;
                $l1949:;
                ITable* $tmp1951 = m$Iter1944->$class->itable;
                while ($tmp1951->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1951 = $tmp1951->next;
                }
                $fn1953 $tmp1952 = $tmp1951->methods[0];
                panda$core$Bit $tmp1954 = $tmp1952(m$Iter1944);
                panda$core$Bit $tmp1955 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1954);
                if (!$tmp1955.value) goto $l1950;
                {
                    ITable* $tmp1957 = m$Iter1944->$class->itable;
                    while ($tmp1957->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1957 = $tmp1957->next;
                    }
                    $fn1959 $tmp1958 = $tmp1957->methods[1];
                    panda$core$Object* $tmp1960 = $tmp1958(m$Iter1944);
                    m1956 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1960);
                    panda$core$Bit $tmp1961 = org$pandalanguage$pandac$Annotations$isImplicit$R$panda$core$Bit(m1956->annotations);
                    if ($tmp1961.value) {
                    {
                        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m1956);
                        panda$core$Bit $tmp1964 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(m1956->methodKind, ((panda$core$Int64) { 59 }));
                        bool $tmp1963 = $tmp1964.value;
                        if (!$tmp1963) goto $l1965;
                        panda$core$Int64 $tmp1966 = panda$collections$Array$get_count$R$panda$core$Int64(m1956->parameters);
                        panda$core$Bit $tmp1967 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1966, ((panda$core$Int64) { 1 }));
                        $tmp1963 = $tmp1967.value;
                        $l1965:;
                        panda$core$Bit $tmp1968 = { $tmp1963 };
                        bool $tmp1962 = $tmp1968.value;
                        if (!$tmp1962) goto $l1969;
                        panda$core$Object* $tmp1970 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(m1956->parameters, ((panda$core$Int64) { 0 }));
                        panda$core$Int64$nullable $tmp1971 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1970)->type);
                        $tmp1962 = ((panda$core$Bit) { $tmp1971.nonnull }).value;
                        $l1969:;
                        panda$core$Bit $tmp1972 = { $tmp1962 };
                        if ($tmp1972.value) {
                        {
                            org$pandalanguage$pandac$IRNode* $tmp1974 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                            $tmp1974->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                            $tmp1974->refCount.value = 1;
                            org$pandalanguage$pandac$Type* $tmp1976 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                            org$pandalanguage$pandac$Type* $tmp1977 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl1942);
                            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1974, ((panda$core$Int64) { 1001 }), p_expr->position, $tmp1976, $tmp1977);
                            type1973 = $tmp1974;
                            panda$collections$Array* $tmp1979 = (panda$collections$Array*) malloc(40);
                            $tmp1979->$class = (panda$core$Class*) &panda$collections$Array$class;
                            $tmp1979->refCount.value = 1;
                            panda$collections$Array$init$panda$core$Int64($tmp1979, ((panda$core$Int64) { 1 }));
                            args1978 = $tmp1979;
                            panda$collections$Array$add$panda$collections$Array$T(args1978, ((panda$core$Object*) p_expr));
                            org$pandalanguage$pandac$IRNode* $tmp1981 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, type1973, ((panda$collections$ListView*) args1978));
                            org$pandalanguage$pandac$IRNode* $tmp1982 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp1981, p_target);
                            return $tmp1982;
                        }
                        }
                    }
                    }
                }
                goto $l1949;
                $l1950:;
            }
        }
        }
        panda$collections$Array* $tmp1984 = (panda$collections$Array*) malloc(40);
        $tmp1984->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp1984->refCount.value = 1;
        panda$collections$Array$init$panda$core$Int64($tmp1984, ((panda$core$Int64) { 1 }));
        children1983 = $tmp1984;
        panda$collections$Array$add$panda$collections$Array$T(children1983, ((panda$core$Object*) p_expr));
        org$pandalanguage$pandac$IRNode* $tmp1986 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp1986->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp1986->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp1986, ((panda$core$Int64) { 1009 }), p_expr->position, p_target, ((panda$core$Object*) wrap_panda$core$Bit(((panda$core$Bit) { false }))), ((panda$collections$ListView*) children1983));
        return $tmp1986;
    }
    }
    panda$core$String* $tmp1989 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1988, ((panda$core$Object*) p_target));
    panda$core$String* $tmp1991 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1989, &$s1990);
    panda$core$String* $tmp1992 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1991, ((panda$core$Object*) p_expr->type));
    panda$core$String* $tmp1994 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1992, &$s1993);
    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_expr->position, $tmp1994);
    return NULL;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr, org$pandalanguage$pandac$Type* p_target) {
    org$pandalanguage$pandac$IRNode* result1995;
    org$pandalanguage$pandac$IRNode* $tmp1996 = org$pandalanguage$pandac$Compiler$doCoerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, p_target);
    result1995 = $tmp1996;
    bool $tmp1997 = ((panda$core$Bit) { result1995 == NULL }).value;
    if ($tmp1997) goto $l1998;
    panda$core$Bit $tmp1999 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(result1995->type, p_target);
    $tmp1997 = $tmp1999.value;
    $l1998:;
    panda$core$Bit $tmp2000 = { $tmp1997 };
    PANDA_ASSERT($tmp2000.value);
    return result1995;
}
panda$core$Bit org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type, org$pandalanguage$pandac$Type* p_target) {
    panda$core$Bit $tmp2002 = org$pandalanguage$pandac$Type$isPointer$R$panda$core$Bit(p_type);
    bool $tmp2001 = $tmp2002.value;
    if (!$tmp2001) goto $l2003;
    panda$core$Bit $tmp2004 = org$pandalanguage$pandac$Type$isPointer$R$panda$core$Bit(p_target);
    $tmp2001 = $tmp2004.value;
    $l2003:;
    panda$core$Bit $tmp2005 = { $tmp2001 };
    if ($tmp2005.value) {
    {
        return ((panda$core$Bit) { true });
    }
    }
    panda$core$Int64$nullable $tmp2006 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_type, p_target);
    if (((panda$core$Bit) { $tmp2006.nonnull }).value) {
    {
        return ((panda$core$Bit) { true });
    }
    }
    panda$core$Bit $tmp2008 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_type);
    bool $tmp2007 = $tmp2008.value;
    if (!$tmp2007) goto $l2009;
    panda$core$Bit $tmp2010 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_target);
    $tmp2007 = $tmp2010.value;
    $l2009:;
    panda$core$Bit $tmp2011 = { $tmp2007 };
    if ($tmp2011.value) {
    {
        return ((panda$core$Bit) { true });
    }
    }
    panda$core$Bit $tmp2012 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 16 }));
    if ($tmp2012.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Int64$nullable $tmp2013 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_target, p_type);
    return ((panda$core$Bit) { $tmp2013.nonnull });
}
panda$core$Bit org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_node, org$pandalanguage$pandac$Type* p_target) {
    panda$core$Bit result2015;
    org$pandalanguage$pandac$IRNode* resolved2022;
    panda$core$Int64$nullable $tmp2014 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_node, p_target);
    if (((panda$core$Bit) { $tmp2014.nonnull }).value) {
    {
        return ((panda$core$Bit) { true });
    }
    }
    panda$core$Bit $tmp2016 = org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_node->type, p_target);
    result2015 = $tmp2016;
    panda$core$Bit $tmp2018 = panda$core$Bit$$NOT$R$panda$core$Bit(result2015);
    bool $tmp2017 = $tmp2018.value;
    if (!$tmp2017) goto $l2019;
    panda$core$Bit $tmp2020 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_node->type->typeKind, ((panda$core$Int64) { 17 }));
    $tmp2017 = $tmp2020.value;
    $l2019:;
    panda$core$Bit $tmp2021 = { $tmp2017 };
    if ($tmp2021.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2023 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_node);
        resolved2022 = $tmp2023;
        if (((panda$core$Bit) { resolved2022 != NULL }).value) {
        {
            panda$core$Bit $tmp2024 = org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, resolved2022, p_target);
            result2015 = $tmp2024;
        }
        }
    }
    }
    return result2015;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_node, org$pandalanguage$pandac$Position p_position, panda$core$Bit p_isExplicit, org$pandalanguage$pandac$Type* p_target) {
    org$pandalanguage$pandac$IRNode* resolved2045;
    panda$collections$Array* children2048;
    panda$core$Bit $tmp2025 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_node->type, p_target);
    if ($tmp2025.value) {
    {
        return p_node;
    }
    }
    org$pandalanguage$pandac$Type* $tmp2026 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2027 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp2026);
    PANDA_ASSERT($tmp2027.value);
    bool $tmp2028 = p_isExplicit.value;
    if (!$tmp2028) goto $l2029;
    panda$core$Bit $tmp2030 = org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_node, p_target);
    panda$core$Bit $tmp2031 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2030);
    $tmp2028 = $tmp2031.value;
    $l2029:;
    panda$core$Bit $tmp2032 = { $tmp2028 };
    if ($tmp2032.value) {
    {
        panda$core$String* $tmp2034 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2033, ((panda$core$Object*) p_node->type));
        panda$core$String* $tmp2036 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2034, &$s2035);
        panda$core$String* $tmp2038 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2037, ((panda$core$Object*) p_target));
        panda$core$String* $tmp2040 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2038, &$s2039);
        panda$core$String* $tmp2041 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2036, $tmp2040);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp2041);
    }
    }
    switch (p_node->kind.value) {
        case 1004:
        case 1032:
        case 1011:
        {
            org$pandalanguage$pandac$IRNode* $tmp2042 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_node, p_target);
            return $tmp2042;
        }
        break;
        case 1039:
        case 1040:
        {
            panda$core$Int64$nullable $tmp2043 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_node, p_target);
            if (((panda$core$Bit) { $tmp2043.nonnull }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2044 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_node, p_target);
                return $tmp2044;
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp2046 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_node);
            resolved2045 = $tmp2046;
            if (((panda$core$Bit) { resolved2045 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2047 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, resolved2045, p_position, p_isExplicit, p_target);
                return $tmp2047;
            }
            }
        }
        break;
    }
    panda$collections$Array* $tmp2049 = (panda$collections$Array*) malloc(40);
    $tmp2049->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2049->refCount.value = 1;
    panda$collections$Array$init($tmp2049);
    children2048 = $tmp2049;
    panda$collections$Array$add$panda$collections$Array$T(children2048, ((panda$core$Object*) p_node));
    org$pandalanguage$pandac$IRNode* $tmp2051 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp2051->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2051->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2051, ((panda$core$Int64) { 1009 }), p_position, p_target, ((panda$core$Object*) wrap_panda$core$Bit(p_isExplicit)), ((panda$collections$ListView*) children2048));
    return $tmp2051;
}
panda$core$Int64$nullable org$pandalanguage$pandac$Compiler$callCost$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodRef* p_m, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedReturn) {
    panda$core$Int64 result2059;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2060;
    panda$core$Int64$nullable cost2075;
    panda$core$Int64$nullable cost2089;
    PANDA_ASSERT(p_m->value->resolved.value);
    panda$core$Int64 $tmp2053 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
    ITable* $tmp2054 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp2054->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2054 = $tmp2054->next;
    }
    $fn2056 $tmp2055 = $tmp2054->methods[0];
    panda$core$Int64 $tmp2057 = $tmp2055(((panda$collections$CollectionView*) p_args));
    panda$core$Bit $tmp2058 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp2053, $tmp2057);
    if ($tmp2058.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    result2059 = ((panda$core$Int64) { 0 });
    panda$core$Int64 $tmp2061 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2060, ((panda$core$Int64) { 0 }), $tmp2061, ((panda$core$Bit) { false }));
    int64_t $tmp2063 = $tmp2060.min.value;
    panda$core$Int64 i2062 = { $tmp2063 };
    int64_t $tmp2065 = $tmp2060.max.value;
    bool $tmp2066 = $tmp2060.inclusive.value;
    if ($tmp2066) goto $l2073; else goto $l2074;
    $l2073:;
    if ($tmp2063 <= $tmp2065) goto $l2067; else goto $l2069;
    $l2074:;
    if ($tmp2063 < $tmp2065) goto $l2067; else goto $l2069;
    $l2067:;
    {
        ITable* $tmp2076 = p_args->$class->itable;
        while ($tmp2076->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2076 = $tmp2076->next;
        }
        $fn2078 $tmp2077 = $tmp2076->methods[0];
        panda$core$Object* $tmp2079 = $tmp2077(p_args, i2062);
        org$pandalanguage$pandac$Type* $tmp2080 = org$pandalanguage$pandac$MethodRef$parameter$panda$core$Int64$R$org$pandalanguage$pandac$Type(p_m, i2062);
        panda$core$Int64$nullable $tmp2081 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp2079), $tmp2080);
        cost2075 = $tmp2081;
        if (((panda$core$Bit) { !cost2075.nonnull }).value) {
        {
            return ((panda$core$Int64$nullable) { .nonnull = false });
        }
        }
        panda$core$Int64 $tmp2082 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result2059, ((panda$core$Int64) cost2075.value));
        result2059 = $tmp2082;
    }
    $l2070:;
    int64_t $tmp2084 = $tmp2065 - i2062.value;
    if ($tmp2066) goto $l2085; else goto $l2086;
    $l2085:;
    if ($tmp2084 >= 1) goto $l2083; else goto $l2069;
    $l2086:;
    if ($tmp2084 > 1) goto $l2083; else goto $l2069;
    $l2083:;
    i2062.value += 1;
    goto $l2067;
    $l2069:;
    if (((panda$core$Bit) { p_expectedReturn != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp2090 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(p_m);
        panda$core$Int64$nullable $tmp2091 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp2090, p_expectedReturn);
        cost2089 = $tmp2091;
        if (((panda$core$Bit) { !cost2089.nonnull }).value) {
        {
            return ((panda$core$Int64$nullable) { .nonnull = false });
        }
        }
        panda$core$Int64 $tmp2092 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result2059, ((panda$core$Int64) cost2089.value));
        result2059 = $tmp2092;
    }
    }
    org$pandalanguage$pandac$Type* $tmp2095 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->value->owner);
    panda$core$Bit $tmp2096 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit($tmp2095);
    bool $tmp2094 = $tmp2096.value;
    if (!$tmp2094) goto $l2097;
    ITable* $tmp2098 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp2098->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2098 = $tmp2098->next;
    }
    $fn2100 $tmp2099 = $tmp2098->methods[0];
    panda$core$Int64 $tmp2101 = $tmp2099(((panda$collections$CollectionView*) p_args));
    panda$core$Bit $tmp2102 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2101, ((panda$core$Int64) { 1 }));
    $tmp2094 = $tmp2102.value;
    $l2097:;
    panda$core$Bit $tmp2103 = { $tmp2094 };
    bool $tmp2093 = $tmp2103.value;
    if (!$tmp2093) goto $l2104;
    panda$core$Object* $tmp2105 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->value->parameters, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp2106 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->value->owner);
    panda$core$Bit $tmp2107 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp2105)->type, $tmp2106);
    $tmp2093 = $tmp2107.value;
    $l2104:;
    panda$core$Bit $tmp2108 = { $tmp2093 };
    if ($tmp2108.value) {
    {
        panda$core$Int64 $tmp2109 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result2059, ((panda$core$Int64) { 1 }));
        result2059 = $tmp2109;
    }
    }
    return ((panda$core$Int64$nullable) { result2059, true });
}
panda$core$Int64$nullable org$pandalanguage$pandac$Compiler$matchMethods$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(org$pandalanguage$pandac$Compiler* self, panda$collections$Array* p_methods, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedReturn) {
    panda$collections$Array* result2110;
    panda$core$Int64$nullable best2113;
    panda$collections$Iterator* m$Iter2114;
    org$pandalanguage$pandac$MethodRef* m2126;
    panda$core$Int64$nullable cost2131;
    panda$collections$Array* $tmp2111 = (panda$collections$Array*) malloc(40);
    $tmp2111->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2111->refCount.value = 1;
    panda$collections$Array$init($tmp2111);
    result2110 = $tmp2111;
    best2113 = ((panda$core$Int64$nullable) { .nonnull = false });
    {
        ITable* $tmp2115 = ((panda$collections$Iterable*) p_methods)->$class->itable;
        while ($tmp2115->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2115 = $tmp2115->next;
        }
        $fn2117 $tmp2116 = $tmp2115->methods[0];
        panda$collections$Iterator* $tmp2118 = $tmp2116(((panda$collections$Iterable*) p_methods));
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
            m2126 = ((org$pandalanguage$pandac$MethodRef*) $tmp2130);
            panda$core$Int64$nullable $tmp2132 = org$pandalanguage$pandac$Compiler$callCost$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(self, m2126, p_args, p_expectedReturn);
            cost2131 = $tmp2132;
            if (((panda$core$Bit) { !cost2131.nonnull }).value) {
            {
                goto $l2119;
            }
            }
            bool $tmp2133 = ((panda$core$Bit) { !best2113.nonnull }).value;
            if ($tmp2133) goto $l2134;
            panda$core$Bit $tmp2135 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost2131.value), ((panda$core$Int64) best2113.value));
            $tmp2133 = $tmp2135.value;
            $l2134:;
            panda$core$Bit $tmp2136 = { $tmp2133 };
            if ($tmp2136.value) {
            {
                panda$collections$Array$clear(result2110);
                best2113 = cost2131;
            }
            }
            panda$core$Bit $tmp2140;
            if (((panda$core$Bit) { cost2131.nonnull }).value) goto $l2137; else goto $l2138;
            $l2137:;
            panda$core$Bit $tmp2141 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost2131.value), ((panda$core$Int64) best2113.value));
            $tmp2140 = $tmp2141;
            goto $l2139;
            $l2138:;
            $tmp2140 = ((panda$core$Bit) { false });
            goto $l2139;
            $l2139:;
            if ($tmp2140.value) {
            {
                panda$collections$Array$add$panda$collections$Array$T(result2110, ((panda$core$Object*) m2126));
            }
            }
        }
        goto $l2119;
        $l2120:;
    }
    panda$collections$Array$clear(p_methods);
    panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(p_methods, ((panda$collections$CollectionView*) result2110));
    return best2113;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$MethodRef* p_m, panda$collections$ListView* p_args) {
    panda$core$String* s2148;
    panda$collections$Array* finalArgs2173;
    org$pandalanguage$pandac$IRNode* selfNode2209;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2238;
    org$pandalanguage$pandac$IRNode* coerced2256;
    org$pandalanguage$pandac$IRNode* result2271;
    PANDA_ASSERT(p_m->value->resolved.value);
    panda$core$Int64 $tmp2142 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
    ITable* $tmp2143 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp2143->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2143 = $tmp2143->next;
    }
    $fn2145 $tmp2144 = $tmp2143->methods[0];
    panda$core$Int64 $tmp2146 = $tmp2144(((panda$collections$CollectionView*) p_args));
    panda$core$Bit $tmp2147 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp2142, $tmp2146);
    if ($tmp2147.value) {
    {
        panda$core$Int64 $tmp2149 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
        panda$core$Bit $tmp2150 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2149, ((panda$core$Int64) { 1 }));
        if ($tmp2150.value) {
        {
            s2148 = &$s2151;
        }
        }
        else {
        {
            s2148 = &$s2152;
        }
        }
        panda$core$String* $tmp2153 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(p_m->value);
        panda$core$String* $tmp2154 = panda$core$String$convert$R$panda$core$String($tmp2153);
        panda$core$String* $tmp2156 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2154, &$s2155);
        panda$core$Int64 $tmp2157 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
        panda$core$String* $tmp2158 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2156, ((panda$core$Object*) wrap_panda$core$Int64($tmp2157)));
        panda$core$String* $tmp2160 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2158, &$s2159);
        panda$core$String* $tmp2161 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2160, s2148);
        panda$core$String* $tmp2163 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2161, &$s2162);
        ITable* $tmp2165 = ((panda$collections$CollectionView*) p_args)->$class->itable;
        while ($tmp2165->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp2165 = $tmp2165->next;
        }
        $fn2167 $tmp2166 = $tmp2165->methods[0];
        panda$core$Int64 $tmp2168 = $tmp2166(((panda$collections$CollectionView*) p_args));
        panda$core$String* $tmp2169 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2164, ((panda$core$Object*) wrap_panda$core$Int64($tmp2168)));
        panda$core$String* $tmp2171 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2169, &$s2170);
        panda$core$String* $tmp2172 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2163, $tmp2171);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp2172);
        return NULL;
    }
    }
    panda$collections$Array* $tmp2174 = (panda$collections$Array*) malloc(40);
    $tmp2174->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2174->refCount.value = 1;
    panda$collections$Array$init($tmp2174);
    finalArgs2173 = $tmp2174;
    bool $tmp2177 = ((panda$core$Bit) { p_target != NULL }).value;
    if (!$tmp2177) goto $l2178;
    panda$core$Bit $tmp2179 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1038 }));
    $tmp2177 = $tmp2179.value;
    $l2178:;
    panda$core$Bit $tmp2180 = { $tmp2177 };
    bool $tmp2176 = $tmp2180.value;
    if (!$tmp2176) goto $l2181;
    panda$core$Bit $tmp2182 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->value->annotations);
    panda$core$Bit $tmp2183 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2182);
    $tmp2176 = $tmp2183.value;
    $l2181:;
    panda$core$Bit $tmp2184 = { $tmp2176 };
    if ($tmp2184.value) {
    {
        org$pandalanguage$pandac$Type* $tmp2185 = org$pandalanguage$pandac$MethodRef$owner$R$org$pandalanguage$pandac$Type(p_m);
        org$pandalanguage$pandac$IRNode* $tmp2186 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, p_target, p_position, ((panda$core$Bit) { false }), $tmp2185);
        panda$collections$Array$add$panda$collections$Array$T(finalArgs2173, ((panda$core$Object*) $tmp2186));
    }
    }
    panda$core$Bit $tmp2187 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->value->methodKind, ((panda$core$Int64) { 59 }));
    if ($tmp2187.value) {
    {
        if (((panda$core$Bit) { p_target == NULL }).value) {
        {
            panda$core$Object* $tmp2188 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
            panda$core$Bit $tmp2189 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp2188)->methodKind, ((panda$core$Int64) { 59 }));
            if ($tmp2189.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2190 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2190->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2190->refCount.value = 1;
                panda$core$Object* $tmp2192 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
                org$pandalanguage$pandac$Type* $tmp2193 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp2192));
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp2190, ((panda$core$Int64) { 1025 }), p_position, $tmp2193);
                panda$collections$Array$add$panda$collections$Array$T(finalArgs2173, ((panda$core$Object*) $tmp2190));
            }
            }
            else {
            {
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s2194);
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp2197 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1025 }));
        bool $tmp2196 = $tmp2197.value;
        if (!$tmp2196) goto $l2198;
        panda$core$Bit $tmp2199 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1024 }));
        $tmp2196 = $tmp2199.value;
        $l2198:;
        panda$core$Bit $tmp2200 = { $tmp2196 };
        bool $tmp2195 = $tmp2200.value;
        if (!$tmp2195) goto $l2201;
        panda$core$Bit $tmp2202 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1038 }));
        $tmp2195 = $tmp2202.value;
        $l2201:;
        panda$core$Bit $tmp2203 = { $tmp2195 };
        if ($tmp2203.value) {
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s2204);
        }
        }
        }
    }
    }
    else {
    panda$core$Bit $tmp2206 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(p_m->value);
    bool $tmp2205 = $tmp2206.value;
    if (!$tmp2205) goto $l2207;
    $tmp2205 = ((panda$core$Bit) { p_target == NULL }).value;
    $l2207:;
    panda$core$Bit $tmp2208 = { $tmp2205 };
    if ($tmp2208.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2210 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2210->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2210->refCount.value = 1;
        panda$core$Object* $tmp2212 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
        org$pandalanguage$pandac$Type* $tmp2213 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp2212));
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp2210, ((panda$core$Int64) { 1025 }), p_position, $tmp2213);
        selfNode2209 = $tmp2210;
        org$pandalanguage$pandac$Type* $tmp2214 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->value->owner);
        org$pandalanguage$pandac$IRNode* $tmp2215 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, selfNode2209, $tmp2214);
        selfNode2209 = $tmp2215;
        PANDA_ASSERT(((panda$core$Bit) { selfNode2209 != NULL }).value);
        panda$collections$Array$add$panda$collections$Array$T(finalArgs2173, ((panda$core$Object*) selfNode2209));
        panda$core$Object* $tmp2216 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
        panda$core$Bit $tmp2217 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp2216));
        panda$core$Bit $tmp2218 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2217);
        if ($tmp2218.value) {
        {
            panda$core$String* $tmp2220 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(p_m->value);
            panda$core$String* $tmp2221 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2219, $tmp2220);
            panda$core$String* $tmp2223 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2221, &$s2222);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp2223);
        }
        }
    }
    }
    else {
    panda$core$Bit $tmp2226 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(p_m->value);
    panda$core$Bit $tmp2227 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2226);
    bool $tmp2225 = $tmp2227.value;
    if (!$tmp2225) goto $l2228;
    $tmp2225 = ((panda$core$Bit) { p_target != NULL }).value;
    $l2228:;
    panda$core$Bit $tmp2229 = { $tmp2225 };
    bool $tmp2224 = $tmp2229.value;
    if (!$tmp2224) goto $l2230;
    panda$core$Bit $tmp2231 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1001 }));
    $tmp2224 = $tmp2231.value;
    $l2230:;
    panda$core$Bit $tmp2232 = { $tmp2224 };
    if ($tmp2232.value) {
    {
        panda$core$String* $tmp2234 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(p_m->value);
        panda$core$String* $tmp2235 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2233, $tmp2234);
        panda$core$String* $tmp2237 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2235, &$s2236);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp2237);
    }
    }
    }
    }
    ITable* $tmp2239 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp2239->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2239 = $tmp2239->next;
    }
    $fn2241 $tmp2240 = $tmp2239->methods[0];
    panda$core$Int64 $tmp2242 = $tmp2240(((panda$collections$CollectionView*) p_args));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2238, ((panda$core$Int64) { 0 }), $tmp2242, ((panda$core$Bit) { false }));
    int64_t $tmp2244 = $tmp2238.min.value;
    panda$core$Int64 i2243 = { $tmp2244 };
    int64_t $tmp2246 = $tmp2238.max.value;
    bool $tmp2247 = $tmp2238.inclusive.value;
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
        org$pandalanguage$pandac$IRNode* $tmp2262 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp2260), $tmp2261);
        coerced2256 = $tmp2262;
        if (((panda$core$Bit) { coerced2256 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Object* $tmp2263 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->value->parameters, i2243);
        org$pandalanguage$pandac$IRNode* $tmp2264 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, coerced2256, p_position, ((panda$core$Bit) { false }), ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp2263)->type);
        coerced2256 = $tmp2264;
        if (((panda$core$Bit) { coerced2256 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(finalArgs2173, ((panda$core$Object*) coerced2256));
    }
    $l2251:;
    int64_t $tmp2266 = $tmp2246 - i2243.value;
    if ($tmp2247) goto $l2267; else goto $l2268;
    $l2267:;
    if ($tmp2266 >= 1) goto $l2265; else goto $l2250;
    $l2268:;
    if ($tmp2266 > 1) goto $l2265; else goto $l2250;
    $l2265:;
    i2243.value += 1;
    goto $l2248;
    $l2250:;
    panda$core$Bit $tmp2273 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_m->value->owner)->name, &$s2272);
    if ($tmp2273.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2274 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2274->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2274->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp2276 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(p_m);
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2274, ((panda$core$Int64) { 1005 }), p_position, $tmp2276, ((panda$core$Object*) p_m), ((panda$collections$ListView*) finalArgs2173));
        result2271 = $tmp2274;
    }
    }
    else {
    {
        org$pandalanguage$pandac$IRNode* $tmp2277 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2277->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2277->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2277, ((panda$core$Int64) { 1005 }), p_position, p_m->value->returnType, ((panda$core$Object*) p_m), ((panda$collections$ListView*) finalArgs2173));
        result2271 = $tmp2277;
        org$pandalanguage$pandac$Type* $tmp2279 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(p_m);
        org$pandalanguage$pandac$IRNode* $tmp2280 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, result2271, p_position, ((panda$core$Bit) { false }), $tmp2279);
        result2271 = $tmp2280;
    }
    }
    return result2271;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_target, panda$core$String* p_name, panda$collections$ListView* p_args) {
    org$pandalanguage$pandac$IRNode* $tmp2281 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_target, p_name, p_args, NULL);
    return $tmp2281;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_target, panda$core$String* p_name, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedType) {
    org$pandalanguage$pandac$IRNode* resolved2282;
    org$pandalanguage$pandac$ClassDecl* cl2284;
    org$pandalanguage$pandac$Symbol* s2288;
    org$pandalanguage$pandac$IRNode* ref2310;
    org$pandalanguage$pandac$IRNode* $tmp2283 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_target);
    resolved2282 = $tmp2283;
    if (((panda$core$Bit) { resolved2282 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp2285 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(resolved2282->kind, ((panda$core$Int64) { 1001 }));
    if ($tmp2285.value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp2286 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Type*) resolved2282->payload));
        cl2284 = $tmp2286;
    }
    }
    else {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp2287 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, resolved2282->type);
        cl2284 = $tmp2287;
    }
    }
    if (((panda$core$Bit) { cl2284 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp2289 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl2284);
    org$pandalanguage$pandac$Symbol* $tmp2290 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp2289, p_name);
    s2288 = $tmp2290;
    if (((panda$core$Bit) { s2288 == NULL }).value) {
    {
        panda$core$String* $tmp2292 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2291, ((org$pandalanguage$pandac$Symbol*) cl2284)->name);
        panda$core$String* $tmp2294 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2292, &$s2293);
        panda$core$String* $tmp2295 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2294, p_name);
        panda$core$String* $tmp2297 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2295, &$s2296);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_target->position, $tmp2297);
        return NULL;
    }
    }
    panda$core$Bit $tmp2299 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(s2288->kind, ((panda$core$Int64) { 204 }));
    bool $tmp2298 = $tmp2299.value;
    if (!$tmp2298) goto $l2300;
    panda$core$Bit $tmp2301 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(s2288->kind, ((panda$core$Int64) { 205 }));
    $tmp2298 = $tmp2301.value;
    $l2300:;
    panda$core$Bit $tmp2302 = { $tmp2298 };
    if ($tmp2302.value) {
    {
        panda$core$String* $tmp2304 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2303, ((org$pandalanguage$pandac$Symbol*) cl2284)->name);
        panda$core$String* $tmp2306 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2304, &$s2305);
        panda$core$String* $tmp2307 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2306, p_name);
        panda$core$String* $tmp2309 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2307, &$s2308);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_target->position, $tmp2309);
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp2311 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl2284);
    org$pandalanguage$pandac$IRNode* $tmp2312 = org$pandalanguage$pandac$Compiler$symbolRef$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q(self, p_target->position, p_target, s2288, $tmp2311);
    ref2310 = $tmp2312;
    if (((panda$core$Bit) { ref2310 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp2313 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, ref2310, p_args, p_expectedType);
    return $tmp2313;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_m, panda$collections$ListView* p_args) {
    org$pandalanguage$pandac$IRNode* $tmp2314 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_m, p_args, NULL);
    return $tmp2314;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_m, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedType) {
    org$pandalanguage$pandac$IRNode* target2315;
    panda$collections$Array* methods2322;
    org$pandalanguage$pandac$MethodDecl* first2327;
    panda$core$MutableString* msg2332;
    panda$core$String* separator2343;
    panda$collections$Iterator* a$Iter2345;
    org$pandalanguage$pandac$IRNode* a2357;
    org$pandalanguage$pandac$IRNode* target2371;
    panda$collections$Array* children2379;
    panda$collections$Array* types2385;
    panda$collections$Iterator* m$Iter2388;
    org$pandalanguage$pandac$MethodRef* m2400;
    org$pandalanguage$pandac$IRNode* target2410;
    org$pandalanguage$pandac$IRNode* initCall2413;
    panda$collections$Array* children2417;
    org$pandalanguage$pandac$IRNode* resolved2422;
    switch (p_m->kind.value) {
        case 1002:
        {
            panda$core$Int64 $tmp2316 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
            panda$core$Bit $tmp2317 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2316, ((panda$core$Int64) { 0 }));
            if ($tmp2317.value) {
            {
                target2315 = NULL;
            }
            }
            else {
            {
                panda$core$Int64 $tmp2318 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
                panda$core$Bit $tmp2319 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2318, ((panda$core$Int64) { 1 }));
                PANDA_ASSERT($tmp2319.value);
                panda$core$Object* $tmp2320 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 0 }));
                target2315 = ((org$pandalanguage$pandac$IRNode*) $tmp2320);
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp2321 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, p_m->position, target2315, ((org$pandalanguage$pandac$MethodRef*) p_m->payload), p_args);
            return $tmp2321;
        }
        break;
        case 1003:
        {
            panda$collections$Array* $tmp2323 = (panda$collections$Array*) malloc(40);
            $tmp2323->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2323->refCount.value = 1;
            panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp2323, ((panda$collections$ListView*) p_m->payload));
            methods2322 = $tmp2323;
            org$pandalanguage$pandac$Compiler$matchMethods$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(self, methods2322, p_args, p_expectedType);
            panda$core$Int64 $tmp2325 = panda$collections$Array$get_count$R$panda$core$Int64(methods2322);
            panda$core$Bit $tmp2326 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2325, ((panda$core$Int64) { 0 }));
            if ($tmp2326.value) {
            {
                ITable* $tmp2328 = ((panda$collections$ListView*) p_m->payload)->$class->itable;
                while ($tmp2328->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp2328 = $tmp2328->next;
                }
                $fn2330 $tmp2329 = $tmp2328->methods[0];
                panda$core$Object* $tmp2331 = $tmp2329(((panda$collections$ListView*) p_m->payload), ((panda$core$Int64) { 0 }));
                first2327 = ((org$pandalanguage$pandac$MethodRef*) $tmp2331)->value;
                panda$core$MutableString* $tmp2333 = (panda$core$MutableString*) malloc(48);
                $tmp2333->$class = (panda$core$Class*) &panda$core$MutableString$class;
                $tmp2333->refCount.value = 1;
                panda$core$String* $tmp2336 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2335, ((org$pandalanguage$pandac$Symbol*) first2327->owner)->name);
                panda$core$String* $tmp2338 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2336, &$s2337);
                panda$core$String* $tmp2339 = panda$core$String$convert$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) first2327)->name);
                panda$core$String* $tmp2341 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2339, &$s2340);
                panda$core$String* $tmp2342 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2338, $tmp2341);
                panda$core$MutableString$init$panda$core$String($tmp2333, $tmp2342);
                msg2332 = $tmp2333;
                separator2343 = &$s2344;
                {
                    ITable* $tmp2346 = ((panda$collections$Iterable*) p_args)->$class->itable;
                    while ($tmp2346->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp2346 = $tmp2346->next;
                    }
                    $fn2348 $tmp2347 = $tmp2346->methods[0];
                    panda$collections$Iterator* $tmp2349 = $tmp2347(((panda$collections$Iterable*) p_args));
                    a$Iter2345 = $tmp2349;
                    $l2350:;
                    ITable* $tmp2352 = a$Iter2345->$class->itable;
                    while ($tmp2352->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp2352 = $tmp2352->next;
                    }
                    $fn2354 $tmp2353 = $tmp2352->methods[0];
                    panda$core$Bit $tmp2355 = $tmp2353(a$Iter2345);
                    panda$core$Bit $tmp2356 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2355);
                    if (!$tmp2356.value) goto $l2351;
                    {
                        ITable* $tmp2358 = a$Iter2345->$class->itable;
                        while ($tmp2358->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2358 = $tmp2358->next;
                        }
                        $fn2360 $tmp2359 = $tmp2358->methods[1];
                        panda$core$Object* $tmp2361 = $tmp2359(a$Iter2345);
                        a2357 = ((org$pandalanguage$pandac$IRNode*) $tmp2361);
                        panda$core$MutableString$append$panda$core$String(msg2332, separator2343);
                        panda$core$MutableString$append$panda$core$Object(msg2332, ((panda$core$Object*) a2357->type));
                        separator2343 = &$s2362;
                    }
                    goto $l2350;
                    $l2351:;
                }
                panda$core$MutableString$append$panda$core$String(msg2332, &$s2363);
                if (((panda$core$Bit) { p_expectedType != NULL }).value) {
                {
                    panda$core$String* $tmp2365 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2364, ((panda$core$Object*) p_expectedType));
                    panda$core$String* $tmp2367 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2365, &$s2366);
                    panda$core$MutableString$append$panda$core$String(msg2332, $tmp2367);
                }
                }
                panda$core$String* $tmp2368 = panda$core$MutableString$finish$R$panda$core$String(msg2332);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_m->position, $tmp2368);
                return NULL;
            }
            }
            panda$core$Int64 $tmp2369 = panda$collections$Array$get_count$R$panda$core$Int64(methods2322);
            panda$core$Bit $tmp2370 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2369, ((panda$core$Int64) { 1 }));
            if ($tmp2370.value) {
            {
                panda$core$Int64 $tmp2372 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
                panda$core$Bit $tmp2373 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2372, ((panda$core$Int64) { 1 }));
                if ($tmp2373.value) {
                {
                    panda$core$Object* $tmp2374 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 0 }));
                    target2371 = ((org$pandalanguage$pandac$IRNode*) $tmp2374);
                }
                }
                else {
                {
                    panda$core$Int64 $tmp2375 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
                    panda$core$Bit $tmp2376 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2375, ((panda$core$Int64) { 0 }));
                    PANDA_ASSERT($tmp2376.value);
                    target2371 = NULL;
                }
                }
                panda$core$Object* $tmp2377 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(methods2322, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$IRNode* $tmp2378 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, p_m->position, target2371, ((org$pandalanguage$pandac$MethodRef*) $tmp2377), p_args);
                return $tmp2378;
            }
            }
            panda$collections$Array* $tmp2380 = (panda$collections$Array*) malloc(40);
            $tmp2380->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2380->refCount.value = 1;
            panda$collections$Array$init($tmp2380);
            children2379 = $tmp2380;
            org$pandalanguage$pandac$IRNode* $tmp2382 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2382->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2382->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2384 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2382, ((panda$core$Int64) { 1003 }), p_m->position, $tmp2384, ((panda$core$Object*) methods2322), ((panda$collections$ListView*) p_m->children));
            panda$collections$Array$add$panda$collections$Array$T(children2379, ((panda$core$Object*) $tmp2382));
            panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(children2379, ((panda$collections$CollectionView*) p_args));
            panda$collections$Array* $tmp2386 = (panda$collections$Array*) malloc(40);
            $tmp2386->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2386->refCount.value = 1;
            panda$collections$Array$init($tmp2386);
            types2385 = $tmp2386;
            {
                ITable* $tmp2389 = ((panda$collections$Iterable*) methods2322)->$class->itable;
                while ($tmp2389->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp2389 = $tmp2389->next;
                }
                $fn2391 $tmp2390 = $tmp2389->methods[0];
                panda$collections$Iterator* $tmp2392 = $tmp2390(((panda$collections$Iterable*) methods2322));
                m$Iter2388 = $tmp2392;
                $l2393:;
                ITable* $tmp2395 = m$Iter2388->$class->itable;
                while ($tmp2395->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp2395 = $tmp2395->next;
                }
                $fn2397 $tmp2396 = $tmp2395->methods[0];
                panda$core$Bit $tmp2398 = $tmp2396(m$Iter2388);
                panda$core$Bit $tmp2399 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2398);
                if (!$tmp2399.value) goto $l2394;
                {
                    ITable* $tmp2401 = m$Iter2388->$class->itable;
                    while ($tmp2401->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp2401 = $tmp2401->next;
                    }
                    $fn2403 $tmp2402 = $tmp2401->methods[1];
                    panda$core$Object* $tmp2404 = $tmp2402(m$Iter2388);
                    m2400 = ((org$pandalanguage$pandac$MethodRef*) $tmp2404);
                    org$pandalanguage$pandac$Type* $tmp2405 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m2400);
                    panda$collections$Array$add$panda$collections$Array$T(types2385, ((panda$core$Object*) $tmp2405));
                }
                goto $l2393;
                $l2394:;
            }
            org$pandalanguage$pandac$IRNode* $tmp2406 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2406->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2406->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2408 = (org$pandalanguage$pandac$Type*) malloc(96);
            $tmp2408->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp2408->refCount.value = 1;
            org$pandalanguage$pandac$Type$init$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp2408, ((panda$collections$ListView*) types2385));
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2406, ((panda$core$Int64) { 1039 }), p_m->position, $tmp2408, ((panda$collections$ListView*) children2379));
            return $tmp2406;
        }
        break;
        case 1001:
        {
            org$pandalanguage$pandac$IRNode* $tmp2411 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2411->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2411->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp2411, ((panda$core$Int64) { 1038 }), p_m->position, ((org$pandalanguage$pandac$Type*) p_m->payload));
            target2410 = $tmp2411;
            org$pandalanguage$pandac$IRNode* $tmp2415 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target2410, &$s2414, p_args);
            org$pandalanguage$pandac$IRNode* $tmp2416 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp2415);
            initCall2413 = $tmp2416;
            if (((panda$core$Bit) { initCall2413 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp2418 = (panda$collections$Array*) malloc(40);
            $tmp2418->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2418->refCount.value = 1;
            panda$collections$Array$init($tmp2418);
            children2417 = $tmp2418;
            panda$collections$Array$add$panda$collections$Array$T(children2417, ((panda$core$Object*) initCall2413));
            org$pandalanguage$pandac$IRNode* $tmp2420 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2420->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2420->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2420, ((panda$core$Int64) { 1010 }), p_m->position, ((org$pandalanguage$pandac$Type*) p_m->payload), ((panda$collections$ListView*) children2417));
            return $tmp2420;
        }
        break;
        default:
        {
            org$pandalanguage$pandac$IRNode* $tmp2423 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_m);
            resolved2422 = $tmp2423;
            if (((panda$core$Bit) { resolved2422 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$String* $tmp2425 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2424, ((panda$core$Object*) resolved2422->type));
            panda$core$String* $tmp2427 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2425, &$s2426);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, resolved2422->position, $tmp2427);
        }
    }
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$collections$Array* subtypes2428;
    panda$core$MutableString* typeName2431;
    panda$core$String* separator2435;
    panda$collections$Iterator* p$Iter2437;
    org$pandalanguage$pandac$MethodDecl$Parameter* p2449;
    panda$core$Int64 kind2455;
    panda$core$Char8 $tmp2461;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
    panda$collections$Array* $tmp2429 = (panda$collections$Array*) malloc(40);
    $tmp2429->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2429->refCount.value = 1;
    panda$collections$Array$init($tmp2429);
    subtypes2428 = $tmp2429;
    panda$core$MutableString* $tmp2432 = (panda$core$MutableString*) malloc(48);
    $tmp2432->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp2432->refCount.value = 1;
    panda$core$MutableString$init$panda$core$String($tmp2432, &$s2434);
    typeName2431 = $tmp2432;
    separator2435 = &$s2436;
    {
        ITable* $tmp2438 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp2438->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2438 = $tmp2438->next;
        }
        $fn2440 $tmp2439 = $tmp2438->methods[0];
        panda$collections$Iterator* $tmp2441 = $tmp2439(((panda$collections$Iterable*) p_m->parameters));
        p$Iter2437 = $tmp2441;
        $l2442:;
        ITable* $tmp2444 = p$Iter2437->$class->itable;
        while ($tmp2444->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2444 = $tmp2444->next;
        }
        $fn2446 $tmp2445 = $tmp2444->methods[0];
        panda$core$Bit $tmp2447 = $tmp2445(p$Iter2437);
        panda$core$Bit $tmp2448 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2447);
        if (!$tmp2448.value) goto $l2443;
        {
            ITable* $tmp2450 = p$Iter2437->$class->itable;
            while ($tmp2450->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2450 = $tmp2450->next;
            }
            $fn2452 $tmp2451 = $tmp2450->methods[1];
            panda$core$Object* $tmp2453 = $tmp2451(p$Iter2437);
            p2449 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp2453);
            panda$core$MutableString$append$panda$core$String(typeName2431, separator2435);
            panda$core$MutableString$append$panda$core$String(typeName2431, ((org$pandalanguage$pandac$Symbol*) p2449->type)->name);
            panda$collections$Array$add$panda$collections$Array$T(subtypes2428, ((panda$core$Object*) p2449->type));
            separator2435 = &$s2454;
        }
        goto $l2442;
        $l2443:;
    }
    panda$core$Bit $tmp2456 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 58 }));
    if ($tmp2456.value) {
    {
        panda$core$MutableString$append$panda$core$String(typeName2431, &$s2457);
        kind2455 = ((panda$core$Int64) { 24 });
    }
    }
    else {
    {
        panda$core$MutableString$append$panda$core$String(typeName2431, &$s2458);
        kind2455 = ((panda$core$Int64) { 25 });
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(subtypes2428, ((panda$core$Object*) p_m->returnType));
    org$pandalanguage$pandac$Type* $tmp2459 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2460 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp2459);
    if ($tmp2460.value) {
    {
        panda$core$MutableString$append$panda$core$String(typeName2431, ((org$pandalanguage$pandac$Symbol*) p_m->returnType)->name);
    }
    }
    panda$core$Char8$init$panda$core$UInt8(&$tmp2461, ((panda$core$UInt8) { 41 }));
    panda$core$MutableString$append$panda$core$Char8(typeName2431, $tmp2461);
    org$pandalanguage$pandac$Type* $tmp2462 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp2462->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp2462->refCount.value = 1;
    panda$core$String* $tmp2464 = panda$core$MutableString$finish$R$panda$core$String(typeName2431);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp2462, $tmp2464, kind2455, ((org$pandalanguage$pandac$Symbol*) p_m)->position, ((panda$collections$ListView*) subtypes2428), ((panda$core$Bit) { true }));
    return $tmp2462;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$declaredTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m, org$pandalanguage$pandac$Type* p_selfType) {
    panda$collections$Array* subtypes2465;
    panda$core$MutableString* typeName2468;
    panda$collections$Iterator* p$Iter2472;
    org$pandalanguage$pandac$MethodDecl$Parameter* p2484;
    panda$core$Int64 kind2490;
    panda$core$Char8 $tmp2496;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
    panda$collections$Array* $tmp2466 = (panda$collections$Array*) malloc(40);
    $tmp2466->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2466->refCount.value = 1;
    panda$collections$Array$init($tmp2466);
    subtypes2465 = $tmp2466;
    panda$core$MutableString* $tmp2469 = (panda$core$MutableString*) malloc(48);
    $tmp2469->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp2469->refCount.value = 1;
    panda$core$MutableString$init$panda$core$String($tmp2469, &$s2471);
    typeName2468 = $tmp2469;
    panda$core$MutableString$append$panda$core$String(typeName2468, ((org$pandalanguage$pandac$Symbol*) p_selfType)->name);
    panda$collections$Array$add$panda$collections$Array$T(subtypes2465, ((panda$core$Object*) p_selfType));
    {
        ITable* $tmp2473 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp2473->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2473 = $tmp2473->next;
        }
        $fn2475 $tmp2474 = $tmp2473->methods[0];
        panda$collections$Iterator* $tmp2476 = $tmp2474(((panda$collections$Iterable*) p_m->parameters));
        p$Iter2472 = $tmp2476;
        $l2477:;
        ITable* $tmp2479 = p$Iter2472->$class->itable;
        while ($tmp2479->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2479 = $tmp2479->next;
        }
        $fn2481 $tmp2480 = $tmp2479->methods[0];
        panda$core$Bit $tmp2482 = $tmp2480(p$Iter2472);
        panda$core$Bit $tmp2483 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2482);
        if (!$tmp2483.value) goto $l2478;
        {
            ITable* $tmp2485 = p$Iter2472->$class->itable;
            while ($tmp2485->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2485 = $tmp2485->next;
            }
            $fn2487 $tmp2486 = $tmp2485->methods[1];
            panda$core$Object* $tmp2488 = $tmp2486(p$Iter2472);
            p2484 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp2488);
            panda$core$MutableString$append$panda$core$String(typeName2468, &$s2489);
            panda$core$MutableString$append$panda$core$String(typeName2468, ((org$pandalanguage$pandac$Symbol*) p2484->type)->name);
            panda$collections$Array$add$panda$collections$Array$T(subtypes2465, ((panda$core$Object*) p2484->type));
        }
        goto $l2477;
        $l2478:;
    }
    panda$core$Bit $tmp2491 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 58 }));
    if ($tmp2491.value) {
    {
        panda$core$MutableString$append$panda$core$String(typeName2468, &$s2492);
        kind2490 = ((panda$core$Int64) { 24 });
    }
    }
    else {
    {
        panda$core$MutableString$append$panda$core$String(typeName2468, &$s2493);
        kind2490 = ((panda$core$Int64) { 25 });
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(subtypes2465, ((panda$core$Object*) p_m->returnType));
    org$pandalanguage$pandac$Type* $tmp2494 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2495 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp2494);
    if ($tmp2495.value) {
    {
        panda$core$MutableString$append$panda$core$String(typeName2468, ((org$pandalanguage$pandac$Symbol*) p_m->returnType)->name);
    }
    }
    panda$core$Char8$init$panda$core$UInt8(&$tmp2496, ((panda$core$UInt8) { 41 }));
    panda$core$MutableString$append$panda$core$Char8(typeName2468, $tmp2496);
    org$pandalanguage$pandac$Type* $tmp2497 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp2497->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp2497->refCount.value = 1;
    panda$core$String* $tmp2499 = panda$core$MutableString$finish$R$panda$core$String(typeName2468);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp2497, $tmp2499, kind2490, ((org$pandalanguage$pandac$Symbol*) p_m)->position, ((panda$collections$ListView*) subtypes2465), ((panda$core$Bit) { true }));
    return $tmp2497;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$MethodDecl* inherited2500;
    org$pandalanguage$pandac$MethodDecl* $tmp2501 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(self, p_m);
    inherited2500 = $tmp2501;
    if (((panda$core$Bit) { inherited2500 == NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp2502 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, p_m);
        return $tmp2502;
    }
    }
    org$pandalanguage$pandac$Type* $tmp2503 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, inherited2500);
    return $tmp2503;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$Type* $tmp2504 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    org$pandalanguage$pandac$Type* $tmp2505 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_m, $tmp2504);
    return $tmp2505;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m, org$pandalanguage$pandac$Type* p_selfType) {
    org$pandalanguage$pandac$MethodDecl* inherited2506;
    org$pandalanguage$pandac$MethodDecl* $tmp2507 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(self, p_m);
    inherited2506 = $tmp2507;
    if (((panda$core$Bit) { inherited2506 == NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp2508 = org$pandalanguage$pandac$Compiler$declaredTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_m, p_selfType);
        return $tmp2508;
    }
    }
    org$pandalanguage$pandac$Type* $tmp2509 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, inherited2506, p_selfType);
    return $tmp2509;
}
panda$core$String* org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(panda$core$Int64 p_op) {
    switch (p_op.value) {
        case 51:
        {
            return &$s2510;
        }
        break;
        case 52:
        {
            return &$s2511;
        }
        break;
        case 53:
        {
            return &$s2512;
        }
        break;
        case 54:
        {
            return &$s2513;
        }
        break;
        case 55:
        {
            return &$s2514;
        }
        break;
        case 56:
        {
            return &$s2515;
        }
        break;
        case 57:
        {
            return &$s2516;
        }
        break;
        case 58:
        {
            return &$s2517;
        }
        break;
        case 59:
        {
            return &$s2518;
        }
        break;
        case 63:
        {
            return &$s2519;
        }
        break;
        case 62:
        {
            return &$s2520;
        }
        break;
        case 65:
        {
            return &$s2521;
        }
        break;
        case 64:
        {
            return &$s2522;
        }
        break;
        case 68:
        {
            return &$s2523;
        }
        break;
        case 69:
        {
            return &$s2524;
        }
        break;
        case 66:
        {
            return &$s2525;
        }
        break;
        case 67:
        {
            return &$s2526;
        }
        break;
        case 70:
        {
            return &$s2527;
        }
        break;
        case 71:
        {
            return &$s2528;
        }
        break;
        case 49:
        {
            return &$s2529;
        }
        break;
        case 50:
        {
            return &$s2530;
        }
        break;
        case 72:
        {
            return &$s2531;
        }
        break;
        case 1:
        {
            return &$s2532;
        }
        break;
        case 101:
        {
            return &$s2533;
        }
        break;
        case 73:
        {
            return &$s2534;
        }
        break;
        case 60:
        {
            return &$s2535;
        }
        break;
        case 61:
        {
            return &$s2536;
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
            panda$core$Int64 $tmp2537 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_expr->children);
            panda$core$Bit $tmp2538 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2537, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp2538.value);
            panda$core$Bit $tmp2539 = panda$core$Bit$$NOT$R$panda$core$Bit(((panda$core$Bit$wrapper*) p_expr->payload)->value);
            if ($tmp2539.value) {
            {
                panda$core$Object* $tmp2540 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Bit $tmp2541 = org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp2540));
                return $tmp2541;
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
            panda$core$Object* $tmp2542 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp2543 = org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp2542));
            return $tmp2543;
        }
        break;
        default:
        {
            return ((panda$core$Bit) { false });
        }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$foldInts$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_left, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_right) {
    panda$core$Int64 l2569;
    panda$core$Int64 r2571;
    panda$core$UInt64 v2573;
    panda$core$UInt64 v2579;
    panda$core$UInt64 v2585;
    panda$core$UInt64 v2591;
    panda$core$UInt64 v2597;
    panda$core$UInt64 v2627;
    panda$core$UInt64 v2633;
    panda$core$UInt64 v2639;
    panda$core$UInt64 v2645;
    panda$core$UInt64 v2651;
    panda$core$Bit $tmp2545 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_left->kind, ((panda$core$Int64) { 1004 }));
    bool $tmp2544 = $tmp2545.value;
    if ($tmp2544) goto $l2546;
    panda$core$Bit $tmp2547 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_left->kind, ((panda$core$Int64) { 1032 }));
    $tmp2544 = $tmp2547.value;
    $l2546:;
    panda$core$Bit $tmp2548 = { $tmp2544 };
    PANDA_ASSERT($tmp2548.value);
    panda$core$Bit $tmp2550 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_right->kind, ((panda$core$Int64) { 1004 }));
    bool $tmp2549 = $tmp2550.value;
    if ($tmp2549) goto $l2551;
    panda$core$Bit $tmp2552 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_right->kind, ((panda$core$Int64) { 1032 }));
    $tmp2549 = $tmp2552.value;
    $l2551:;
    panda$core$Bit $tmp2553 = { $tmp2549 };
    PANDA_ASSERT($tmp2553.value);
    panda$core$Bit $tmp2556 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_left->kind, ((panda$core$Int64) { 1032 }));
    bool $tmp2555 = $tmp2556.value;
    if ($tmp2555) goto $l2557;
    panda$core$UInt64 $tmp2559 = panda$core$Int64$convert$R$panda$core$UInt64(((panda$core$Int64) { 9223372036854775807 }));
    panda$core$Bit $tmp2560 = panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p_left->payload)->value, $tmp2559);
    bool $tmp2558 = $tmp2560.value;
    if (!$tmp2558) goto $l2561;
    panda$core$Bit $tmp2562 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_right->kind, ((panda$core$Int64) { 1032 }));
    $tmp2558 = $tmp2562.value;
    $l2561:;
    panda$core$Bit $tmp2563 = { $tmp2558 };
    $tmp2555 = $tmp2563.value;
    $l2557:;
    panda$core$Bit $tmp2564 = { $tmp2555 };
    bool $tmp2554 = $tmp2564.value;
    if ($tmp2554) goto $l2565;
    panda$core$UInt64 $tmp2566 = panda$core$Int64$convert$R$panda$core$UInt64(((panda$core$Int64) { 9223372036854775807 }));
    panda$core$Bit $tmp2567 = panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p_right->payload)->value, $tmp2566);
    $tmp2554 = $tmp2567.value;
    $l2565:;
    panda$core$Bit $tmp2568 = { $tmp2554 };
    if ($tmp2568.value) {
    {
        panda$core$Int64 $tmp2570 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_left->payload)->value);
        l2569 = $tmp2570;
        panda$core$Int64 $tmp2572 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_right->payload)->value);
        r2571 = $tmp2572;
        switch (p_op.value) {
            case 51:
            {
                panda$core$Int64 $tmp2574 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(l2569, r2571);
                panda$core$UInt64 $tmp2575 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2574);
                v2573 = $tmp2575;
                org$pandalanguage$pandac$IRNode* $tmp2576 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2576->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2576->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2578 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(v2573);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2576, ((panda$core$Int64) { 1004 }), p_position, $tmp2578, v2573);
                return $tmp2576;
            }
            break;
            case 52:
            {
                panda$core$Int64 $tmp2580 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(l2569, r2571);
                panda$core$UInt64 $tmp2581 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2580);
                v2579 = $tmp2581;
                org$pandalanguage$pandac$IRNode* $tmp2582 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2582->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2582->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2584 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(v2579);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2582, ((panda$core$Int64) { 1004 }), p_position, $tmp2584, v2579);
                return $tmp2582;
            }
            break;
            case 53:
            {
                panda$core$Int64 $tmp2586 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(l2569, r2571);
                panda$core$UInt64 $tmp2587 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2586);
                v2585 = $tmp2587;
                org$pandalanguage$pandac$IRNode* $tmp2588 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2588->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2588->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2590 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(v2585);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2588, ((panda$core$Int64) { 1004 }), p_position, $tmp2590, v2585);
                return $tmp2588;
            }
            break;
            case 55:
            {
                panda$core$Int64 $tmp2592 = panda$core$Int64$$INTDIV$panda$core$Int64$R$panda$core$Int64(l2569, r2571);
                panda$core$UInt64 $tmp2593 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2592);
                v2591 = $tmp2593;
                org$pandalanguage$pandac$IRNode* $tmp2594 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2594->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2594->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2596 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(v2591);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2594, ((panda$core$Int64) { 1004 }), p_position, $tmp2596, v2591);
                return $tmp2594;
            }
            break;
            case 56:
            {
                panda$core$Int64 $tmp2598 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(l2569, r2571);
                panda$core$UInt64 $tmp2599 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2598);
                v2597 = $tmp2599;
                org$pandalanguage$pandac$IRNode* $tmp2600 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2600->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2600->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2602 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(v2597);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2600, ((panda$core$Int64) { 1004 }), p_position, $tmp2602, v2597);
                return $tmp2600;
            }
            break;
            case 58:
            {
                org$pandalanguage$pandac$IRNode* $tmp2603 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2603->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2603->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2605 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2606 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(l2569, r2571);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2603, ((panda$core$Int64) { 1011 }), p_position, $tmp2605, $tmp2606);
                return $tmp2603;
            }
            break;
            case 59:
            {
                org$pandalanguage$pandac$IRNode* $tmp2607 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2607->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2607->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2609 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2610 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(l2569, r2571);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2607, ((panda$core$Int64) { 1011 }), p_position, $tmp2609, $tmp2610);
                return $tmp2607;
            }
            break;
            case 62:
            {
                org$pandalanguage$pandac$IRNode* $tmp2611 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2611->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2611->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2613 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2614 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(l2569, r2571);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2611, ((panda$core$Int64) { 1011 }), p_position, $tmp2613, $tmp2614);
                return $tmp2611;
            }
            break;
            case 63:
            {
                org$pandalanguage$pandac$IRNode* $tmp2615 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2615->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2615->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2617 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2618 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(l2569, r2571);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2615, ((panda$core$Int64) { 1011 }), p_position, $tmp2617, $tmp2618);
                return $tmp2615;
            }
            break;
            case 64:
            {
                org$pandalanguage$pandac$IRNode* $tmp2619 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2619->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2619->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2621 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2622 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(l2569, r2571);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2619, ((panda$core$Int64) { 1011 }), p_position, $tmp2621, $tmp2622);
                return $tmp2619;
            }
            break;
            case 65:
            {
                org$pandalanguage$pandac$IRNode* $tmp2623 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2623->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2623->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2625 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2626 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(l2569, r2571);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2623, ((panda$core$Int64) { 1011 }), p_position, $tmp2625, $tmp2626);
                return $tmp2623;
            }
            break;
            case 67:
            {
                panda$core$Int64 $tmp2628 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(l2569, r2571);
                panda$core$UInt64 $tmp2629 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2628);
                v2627 = $tmp2629;
                org$pandalanguage$pandac$IRNode* $tmp2630 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2630->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2630->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2632 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(v2627);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2630, ((panda$core$Int64) { 1004 }), p_position, $tmp2632, v2627);
                return $tmp2630;
            }
            break;
            case 69:
            {
                panda$core$Int64 $tmp2634 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(l2569, r2571);
                panda$core$UInt64 $tmp2635 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2634);
                v2633 = $tmp2635;
                org$pandalanguage$pandac$IRNode* $tmp2636 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2636->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2636->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2638 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(v2633);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2636, ((panda$core$Int64) { 1004 }), p_position, $tmp2638, v2633);
                return $tmp2636;
            }
            break;
            case 71:
            {
                panda$core$Int64 $tmp2640 = panda$core$Int64$$BXOR$panda$core$Int64$R$panda$core$Int64(l2569, r2571);
                panda$core$UInt64 $tmp2641 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2640);
                v2639 = $tmp2641;
                org$pandalanguage$pandac$IRNode* $tmp2642 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2642->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2642->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2644 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(v2639);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2642, ((panda$core$Int64) { 1004 }), p_position, $tmp2644, v2639);
                return $tmp2642;
            }
            break;
            case 72:
            {
                panda$core$Int64 $tmp2646 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(l2569, r2571);
                panda$core$UInt64 $tmp2647 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2646);
                v2645 = $tmp2647;
                org$pandalanguage$pandac$IRNode* $tmp2648 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2648->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2648->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2650 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(v2645);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2648, ((panda$core$Int64) { 1004 }), p_position, $tmp2650, v2645);
                return $tmp2648;
            }
            break;
            case 1:
            {
                panda$core$Int64 $tmp2652 = panda$core$Int64$$SHR$panda$core$Int64$R$panda$core$Int64(l2569, r2571);
                panda$core$UInt64 $tmp2653 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2652);
                v2651 = $tmp2653;
                org$pandalanguage$pandac$IRNode* $tmp2654 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2654->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2654->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2656 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(v2651);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2654, ((panda$core$Int64) { 1004 }), p_position, $tmp2656, v2651);
                return $tmp2654;
            }
            break;
        }
    }
    }
    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s2657);
    return NULL;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    panda$core$Bit $tmp2658 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1009 }));
    if ($tmp2658.value) {
    {
        panda$core$Object* $tmp2659 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
        return ((org$pandalanguage$pandac$IRNode*) $tmp2659);
    }
    }
    return p_expr;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIndexedAssignment$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_left, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_right) {
    panda$collections$Array* args2664;
    org$pandalanguage$pandac$IRNode* resolved2672;
    panda$collections$Array* children2677;
    panda$core$UInt64 baseId2683;
    org$pandalanguage$pandac$IRNode* base2684;
    panda$core$UInt64 indexId2691;
    org$pandalanguage$pandac$IRNode* index2692;
    org$pandalanguage$pandac$IRNode* baseRef2697;
    org$pandalanguage$pandac$IRNode* indexRef2700;
    org$pandalanguage$pandac$IRNode* rhsIndex2703;
    org$pandalanguage$pandac$IRNode* value2705;
    panda$core$Bit $tmp2660 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_left->kind, ((panda$core$Int64) { 1040 }));
    PANDA_ASSERT($tmp2660.value);
    panda$core$Int64 $tmp2661 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_left->children);
    panda$core$Bit $tmp2662 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2661, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp2662.value);
    panda$core$Bit $tmp2663 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 73 }));
    if ($tmp2663.value) {
    {
        panda$collections$Array* $tmp2665 = (panda$collections$Array*) malloc(40);
        $tmp2665->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2665->refCount.value = 1;
        panda$collections$Array$init($tmp2665);
        args2664 = $tmp2665;
        panda$core$Object* $tmp2667 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_left->children, ((panda$core$Int64) { 1 }));
        panda$collections$Array$add$panda$collections$Array$T(args2664, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp2667)));
        panda$collections$Array$add$panda$collections$Array$T(args2664, ((panda$core$Object*) p_right));
        panda$core$Object* $tmp2668 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_left->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp2670 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp2668), &$s2669, ((panda$collections$ListView*) args2664));
        return $tmp2670;
    }
    }
    panda$core$Bit $tmp2671 = org$pandalanguage$pandac$Compiler$isAssignment$panda$core$Int64$R$panda$core$Bit(p_op);
    PANDA_ASSERT($tmp2671.value);
    org$pandalanguage$pandac$IRNode* $tmp2673 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_left);
    resolved2672 = $tmp2673;
    if (((panda$core$Bit) { resolved2672 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp2674 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self, resolved2672);
    resolved2672 = $tmp2674;
    panda$core$Int64 $tmp2675 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(resolved2672->children);
    panda$core$Bit $tmp2676 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2675, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp2676.value);
    panda$collections$Array* $tmp2678 = (panda$collections$Array*) malloc(40);
    $tmp2678->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2678->refCount.value = 1;
    panda$collections$Array$init($tmp2678);
    children2677 = $tmp2678;
    panda$core$Object* $tmp2680 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(resolved2672->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp2681 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self, ((org$pandalanguage$pandac$IRNode*) $tmp2680));
    panda$collections$Array$add$panda$collections$Array$T(children2677, ((panda$core$Object*) $tmp2681));
    panda$core$UInt64 $tmp2682 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(self->reusedValueCount, ((panda$core$UInt64) { 1 }));
    self->reusedValueCount = $tmp2682;
    baseId2683 = self->reusedValueCount;
    org$pandalanguage$pandac$IRNode* $tmp2685 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp2685->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2685->refCount.value = 1;
    panda$core$Object* $tmp2687 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children2677, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp2688 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children2677, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2685, ((panda$core$Int64) { 1027 }), ((org$pandalanguage$pandac$IRNode*) $tmp2687)->position, ((org$pandalanguage$pandac$IRNode*) $tmp2688)->type, ((panda$core$Object*) wrap_panda$core$UInt64(baseId2683)), ((panda$collections$ListView*) children2677));
    base2684 = $tmp2685;
    panda$collections$Array$clear(children2677);
    panda$core$Object* $tmp2689 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(resolved2672->children, ((panda$core$Int64) { 1 }));
    panda$collections$Array$add$panda$collections$Array$T(children2677, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp2689)));
    panda$core$UInt64 $tmp2690 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(self->reusedValueCount, ((panda$core$UInt64) { 1 }));
    self->reusedValueCount = $tmp2690;
    indexId2691 = self->reusedValueCount;
    org$pandalanguage$pandac$IRNode* $tmp2693 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp2693->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2693->refCount.value = 1;
    panda$core$Object* $tmp2695 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children2677, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp2696 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children2677, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2693, ((panda$core$Int64) { 1027 }), ((org$pandalanguage$pandac$IRNode*) $tmp2695)->position, ((org$pandalanguage$pandac$IRNode*) $tmp2696)->type, ((panda$core$Object*) wrap_panda$core$UInt64(indexId2691)), ((panda$collections$ListView*) children2677));
    index2692 = $tmp2693;
    org$pandalanguage$pandac$IRNode* $tmp2698 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp2698->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2698->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2698, ((panda$core$Int64) { 1028 }), base2684->position, base2684->type, baseId2683);
    baseRef2697 = $tmp2698;
    org$pandalanguage$pandac$IRNode* $tmp2701 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp2701->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2701->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2701, ((panda$core$Int64) { 1028 }), index2692->position, index2692->type, indexId2691);
    indexRef2700 = $tmp2701;
    org$pandalanguage$pandac$IRNode* $tmp2704 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, baseRef2697, ((panda$core$Int64) { 101 }), indexRef2700);
    rhsIndex2703 = $tmp2704;
    if (((panda$core$Bit) { rhsIndex2703 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Int64 $tmp2706 = org$pandalanguage$pandac$Compiler$removeAssignment$panda$core$Int64$R$panda$core$Int64(p_op);
    org$pandalanguage$pandac$IRNode* $tmp2707 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, rhsIndex2703, $tmp2706, p_right);
    value2705 = $tmp2707;
    if (((panda$core$Bit) { value2705 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp2710 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(rhsIndex2703->type);
    bool $tmp2709 = $tmp2710.value;
    if (!$tmp2709) goto $l2711;
    panda$core$Bit $tmp2712 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_right->type);
    $tmp2709 = $tmp2712.value;
    $l2711:;
    panda$core$Bit $tmp2713 = { $tmp2709 };
    bool $tmp2708 = $tmp2713.value;
    if (!$tmp2708) goto $l2714;
    panda$core$Bit $tmp2715 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(rhsIndex2703->type, value2705->type);
    $tmp2708 = $tmp2715.value;
    $l2714:;
    panda$core$Bit $tmp2716 = { $tmp2708 };
    if ($tmp2716.value) {
    {
        panda$collections$Array* $tmp2718 = (panda$collections$Array*) malloc(40);
        $tmp2718->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2718->refCount.value = 1;
        panda$collections$Array$init($tmp2718);
        org$pandalanguage$pandac$IRNode* $tmp2720 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, value2705, &$s2717, ((panda$collections$ListView*) $tmp2718), resolved2672->type);
        value2705 = $tmp2720;
        if (((panda$core$Bit) { value2705 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$collections$Array$clear(children2677);
    panda$collections$Array$add$panda$collections$Array$T(children2677, ((panda$core$Object*) index2692));
    panda$collections$Array$add$panda$collections$Array$T(children2677, ((panda$core$Object*) value2705));
    org$pandalanguage$pandac$IRNode* $tmp2722 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, base2684, &$s2721, ((panda$collections$ListView*) children2677));
    return $tmp2722;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_rawLeft, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_rawRight) {
    org$pandalanguage$pandac$IRNode* left2723;
    org$pandalanguage$pandac$IRNode* right2724;
    panda$core$Int64 kind2748;
    org$pandalanguage$pandac$IRNode* resolved2755;
    panda$collections$Array* children2757;
    org$pandalanguage$pandac$IRNode* resolved2764;
    panda$collections$Array* children2766;
    panda$collections$Array* children2783;
    org$pandalanguage$pandac$IRNode* reusedLeft2788;
    org$pandalanguage$pandac$IRNode* toNonNullable2791;
    org$pandalanguage$pandac$IRNode* comparison2794;
    org$pandalanguage$pandac$IRNode* nullCheck2796;
    org$pandalanguage$pandac$ClassDecl* cl2816;
    org$pandalanguage$pandac$ClassDecl* cl2833;
    org$pandalanguage$pandac$IRNode* finalLeft2849;
    org$pandalanguage$pandac$IRNode* finalRight2852;
    panda$collections$Array* children2855;
    panda$collections$Array* children2869;
    panda$collections$Array* children2881;
    org$pandalanguage$pandac$IRNode* reusedLeft2887;
    org$pandalanguage$pandac$ClassDecl* cl2904;
    panda$collections$ListView* parameters2906;
    org$pandalanguage$pandac$Symbol* methods2908;
    org$pandalanguage$pandac$Type* type2912;
    panda$collections$Array* types2913;
    org$pandalanguage$pandac$MethodDecl* m2917;
    panda$collections$Iterator* m$Iter2922;
    org$pandalanguage$pandac$MethodDecl* m2934;
    panda$collections$Array* children2945;
    panda$collections$Array* children2974;
    panda$collections$Array* children2990;
    org$pandalanguage$pandac$Type* resultType3013;
    org$pandalanguage$pandac$IRNode* result3017;
    org$pandalanguage$pandac$IRNode* resolved3020;
    org$pandalanguage$pandac$IRNode* target3026;
    left2723 = p_rawLeft;
    right2724 = p_rawRight;
    panda$core$Bit $tmp2725 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2723->type->typeKind, ((panda$core$Int64) { 15 }));
    if ($tmp2725.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2726 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, right2724);
        right2724 = $tmp2726;
        if (((panda$core$Bit) { right2724 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Int64$nullable $tmp2727 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, left2723, right2724->type);
        if (((panda$core$Bit) { $tmp2727.nonnull }).value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2728 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, left2723, right2724->type);
            left2723 = $tmp2728;
        }
        }
    }
    }
    panda$core$Bit $tmp2730 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right2724->type->typeKind, ((panda$core$Int64) { 15 }));
    bool $tmp2729 = $tmp2730.value;
    if (!$tmp2729) goto $l2731;
    panda$core$Int64$nullable $tmp2732 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, right2724, left2723->type);
    $tmp2729 = ((panda$core$Bit) { $tmp2732.nonnull }).value;
    $l2731:;
    panda$core$Bit $tmp2733 = { $tmp2729 };
    if ($tmp2733.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2734 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, right2724, left2723->type);
        right2724 = $tmp2734;
    }
    }
    panda$core$Bit $tmp2738 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 58 }));
    bool $tmp2737 = $tmp2738.value;
    if ($tmp2737) goto $l2739;
    panda$core$Bit $tmp2740 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 59 }));
    $tmp2737 = $tmp2740.value;
    $l2739:;
    panda$core$Bit $tmp2741 = { $tmp2737 };
    bool $tmp2736 = $tmp2741.value;
    if ($tmp2736) goto $l2742;
    panda$core$Bit $tmp2743 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 60 }));
    $tmp2736 = $tmp2743.value;
    $l2742:;
    panda$core$Bit $tmp2744 = { $tmp2736 };
    bool $tmp2735 = $tmp2744.value;
    if ($tmp2735) goto $l2745;
    panda$core$Bit $tmp2746 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 61 }));
    $tmp2735 = $tmp2746.value;
    $l2745:;
    panda$core$Bit $tmp2747 = { $tmp2735 };
    if ($tmp2747.value) {
    {
        panda$core$Bit $tmp2750 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 58 }));
        bool $tmp2749 = $tmp2750.value;
        if ($tmp2749) goto $l2751;
        panda$core$Bit $tmp2752 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 60 }));
        $tmp2749 = $tmp2752.value;
        $l2751:;
        panda$core$Bit $tmp2753 = { $tmp2749 };
        if ($tmp2753.value) {
        {
            kind2748 = ((panda$core$Int64) { 1035 });
        }
        }
        else {
        {
            kind2748 = ((panda$core$Int64) { 1036 });
        }
        }
        panda$core$Bit $tmp2754 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2723->kind, ((panda$core$Int64) { 1030 }));
        if ($tmp2754.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2756 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, right2724);
            resolved2755 = $tmp2756;
            if (((panda$core$Bit) { resolved2755 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp2758 = (panda$collections$Array*) malloc(40);
            $tmp2758->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2758->refCount.value = 1;
            panda$collections$Array$init($tmp2758);
            children2757 = $tmp2758;
            panda$collections$Array$add$panda$collections$Array$T(children2757, ((panda$core$Object*) resolved2755));
            org$pandalanguage$pandac$IRNode* $tmp2760 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2760->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2760->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2762 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2760, kind2748, p_position, $tmp2762, ((panda$collections$ListView*) children2757));
            return $tmp2760;
        }
        }
        panda$core$Bit $tmp2763 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right2724->kind, ((panda$core$Int64) { 1030 }));
        if ($tmp2763.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2765 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, left2723);
            resolved2764 = $tmp2765;
            if (((panda$core$Bit) { resolved2764 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp2767 = (panda$collections$Array*) malloc(40);
            $tmp2767->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2767->refCount.value = 1;
            panda$collections$Array$init($tmp2767);
            children2766 = $tmp2767;
            panda$collections$Array$add$panda$collections$Array$T(children2766, ((panda$core$Object*) resolved2764));
            org$pandalanguage$pandac$IRNode* $tmp2769 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2769->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2769->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2771 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2769, kind2748, p_position, $tmp2771, ((panda$collections$ListView*) children2766));
            return $tmp2769;
        }
        }
    }
    }
    panda$core$Bit $tmp2774 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 58 }));
    bool $tmp2773 = $tmp2774.value;
    if ($tmp2773) goto $l2775;
    panda$core$Bit $tmp2776 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 59 }));
    $tmp2773 = $tmp2776.value;
    $l2775:;
    panda$core$Bit $tmp2777 = { $tmp2773 };
    bool $tmp2772 = $tmp2777.value;
    if (!$tmp2772) goto $l2778;
    panda$core$Bit $tmp2779 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2723->type->typeKind, ((panda$core$Int64) { 11 }));
    $tmp2772 = $tmp2779.value;
    $l2778:;
    panda$core$Bit $tmp2780 = { $tmp2772 };
    if ($tmp2780.value) {
    {
        panda$core$Bit $tmp2781 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(right2724->kind, ((panda$core$Int64) { 1030 }));
        PANDA_ASSERT($tmp2781.value);
        panda$core$UInt64 $tmp2782 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(self->reusedValueCount, ((panda$core$UInt64) { 1 }));
        self->reusedValueCount = $tmp2782;
        panda$collections$Array* $tmp2784 = (panda$collections$Array*) malloc(40);
        $tmp2784->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2784->refCount.value = 1;
        panda$collections$Array$init($tmp2784);
        children2783 = $tmp2784;
        panda$collections$Array$add$panda$collections$Array$T(children2783, ((panda$core$Object*) left2723));
        org$pandalanguage$pandac$IRNode* $tmp2786 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2786->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2786->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2786, ((panda$core$Int64) { 1027 }), left2723->position, left2723->type, ((panda$core$Object*) wrap_panda$core$UInt64(self->reusedValueCount)), ((panda$collections$ListView*) children2783));
        left2723 = $tmp2786;
        org$pandalanguage$pandac$IRNode* $tmp2789 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2789->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2789->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2789, ((panda$core$Int64) { 1028 }), left2723->position, left2723->type, self->reusedValueCount);
        reusedLeft2788 = $tmp2789;
        panda$core$Object* $tmp2792 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(left2723->type->subtypes, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp2793 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, reusedLeft2788, ((org$pandalanguage$pandac$Type*) $tmp2792));
        toNonNullable2791 = $tmp2793;
        org$pandalanguage$pandac$IRNode* $tmp2795 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, toNonNullable2791, p_op, right2724);
        comparison2794 = $tmp2795;
        if (((panda$core$Bit) { comparison2794 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp2797 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2797->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2797->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp2799 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp2797, ((panda$core$Int64) { 1030 }), p_position, $tmp2799);
        org$pandalanguage$pandac$IRNode* $tmp2800 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, left2723, ((panda$core$Int64) { 59 }), $tmp2797);
        nullCheck2796 = $tmp2800;
        if (((panda$core$Bit) { nullCheck2796 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$clear(children2783);
        panda$collections$Array$add$panda$collections$Array$T(children2783, ((panda$core$Object*) nullCheck2796));
        panda$collections$Array$add$panda$collections$Array$T(children2783, ((panda$core$Object*) comparison2794));
        org$pandalanguage$pandac$IRNode* $tmp2801 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2801->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2801->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp2803 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp2804 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 59 }));
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2801, ((panda$core$Int64) { 1011 }), p_position, $tmp2803, $tmp2804);
        org$pandalanguage$pandac$Type* $tmp2805 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp2806 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp2801, $tmp2805);
        panda$collections$Array$add$panda$collections$Array$T(children2783, ((panda$core$Object*) $tmp2806));
        org$pandalanguage$pandac$IRNode* $tmp2807 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2807->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2807->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp2809 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2807, ((panda$core$Int64) { 1044 }), p_position, $tmp2809, ((panda$collections$ListView*) children2783));
        return $tmp2807;
    }
    }
    panda$core$Bit $tmp2811 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 60 }));
    bool $tmp2810 = $tmp2811.value;
    if ($tmp2810) goto $l2812;
    panda$core$Bit $tmp2813 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 61 }));
    $tmp2810 = $tmp2813.value;
    $l2812:;
    panda$core$Bit $tmp2814 = { $tmp2810 };
    if ($tmp2814.value) {
    {
        panda$core$Bit $tmp2815 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(left2723->type);
        if ($tmp2815.value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp2817 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, left2723->type);
            cl2816 = $tmp2817;
            if (((panda$core$Bit) { cl2816 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$Bit $tmp2818 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, cl2816);
            if ($tmp2818.value) {
            {
                panda$core$String* $tmp2820 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
                panda$core$String* $tmp2821 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2819, $tmp2820);
                panda$core$String* $tmp2823 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2821, &$s2822);
                panda$core$String* $tmp2824 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2823, ((panda$core$Object*) left2723->type));
                panda$core$String* $tmp2826 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2824, &$s2825);
                panda$core$String* $tmp2828 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2827, ((panda$core$Object*) right2724->type));
                panda$core$String* $tmp2830 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2828, &$s2829);
                panda$core$String* $tmp2831 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2826, $tmp2830);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp2831);
            }
            }
        }
        }
        panda$core$Bit $tmp2832 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(right2724->type);
        if ($tmp2832.value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp2834 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, right2724->type);
            cl2833 = $tmp2834;
            if (((panda$core$Bit) { cl2833 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$Bit $tmp2835 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, cl2833);
            if ($tmp2835.value) {
            {
                panda$core$String* $tmp2837 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
                panda$core$String* $tmp2838 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2836, $tmp2837);
                panda$core$String* $tmp2840 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2838, &$s2839);
                panda$core$String* $tmp2841 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2840, ((panda$core$Object*) left2723->type));
                panda$core$String* $tmp2843 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2841, &$s2842);
                panda$core$String* $tmp2845 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2844, ((panda$core$Object*) right2724->type));
                panda$core$String* $tmp2847 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2845, &$s2846);
                panda$core$String* $tmp2848 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2843, $tmp2847);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp2848);
            }
            }
        }
        }
        org$pandalanguage$pandac$Type* $tmp2850 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp2851 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, left2723, $tmp2850);
        finalLeft2849 = $tmp2851;
        if (((panda$core$Bit) { finalLeft2849 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$Type* $tmp2853 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp2854 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, right2724, $tmp2853);
        finalRight2852 = $tmp2854;
        if (((panda$core$Bit) { finalRight2852 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp2856 = (panda$collections$Array*) malloc(40);
        $tmp2856->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2856->refCount.value = 1;
        panda$collections$Array$init($tmp2856);
        children2855 = $tmp2856;
        panda$collections$Array$add$panda$collections$Array$T(children2855, ((panda$core$Object*) finalLeft2849));
        panda$collections$Array$add$panda$collections$Array$T(children2855, ((panda$core$Object*) finalRight2852));
        org$pandalanguage$pandac$IRNode* $tmp2858 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2858->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2858->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp2860 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2858, ((panda$core$Int64) { 1023 }), p_position, $tmp2860, ((panda$core$Object*) wrap_panda$core$Int64(p_op)), ((panda$collections$ListView*) children2855));
        return $tmp2858;
    }
    }
    panda$core$Bit $tmp2861 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 73 }));
    if ($tmp2861.value) {
    {
        panda$core$Bit $tmp2862 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2723->kind, ((panda$core$Int64) { 1040 }));
        if ($tmp2862.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2863 = org$pandalanguage$pandac$Compiler$compileIndexedAssignment$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, left2723, p_op, right2724);
            return $tmp2863;
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp2864 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, left2723);
        left2723 = $tmp2864;
        if (((panda$core$Bit) { left2723 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp2865 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, right2724, left2723->type);
        right2724 = $tmp2865;
        if (((panda$core$Bit) { right2724 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp2866 = org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, left2723);
        panda$core$Bit $tmp2867 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2866);
        if ($tmp2867.value) {
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, left2723->position, &$s2868);
            return NULL;
        }
        }
        panda$collections$Array* $tmp2870 = (panda$collections$Array*) malloc(40);
        $tmp2870->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2870->refCount.value = 1;
        panda$collections$Array$init($tmp2870);
        children2869 = $tmp2870;
        panda$collections$Array$add$panda$collections$Array$T(children2869, ((panda$core$Object*) left2723));
        panda$collections$Array$add$panda$collections$Array$T(children2869, ((panda$core$Object*) right2724));
        org$pandalanguage$pandac$IRNode* $tmp2872 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2872->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2872->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2872, ((panda$core$Int64) { 1023 }), p_position, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 73 }))), ((panda$collections$ListView*) children2869));
        return $tmp2872;
    }
    }
    panda$core$Bit $tmp2874 = org$pandalanguage$pandac$Compiler$isAssignment$panda$core$Int64$R$panda$core$Bit(p_op);
    if ($tmp2874.value) {
    {
        panda$core$Bit $tmp2875 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2723->kind, ((panda$core$Int64) { 1040 }));
        if ($tmp2875.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2876 = org$pandalanguage$pandac$Compiler$compileIndexedAssignment$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, left2723, p_op, right2724);
            return $tmp2876;
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp2877 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, left2723);
        left2723 = $tmp2877;
        if (((panda$core$Bit) { left2723 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp2878 = org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, left2723);
        panda$core$Bit $tmp2879 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2878);
        if ($tmp2879.value) {
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, left2723->position, &$s2880);
            return NULL;
        }
        }
        panda$collections$Array* $tmp2882 = (panda$collections$Array*) malloc(40);
        $tmp2882->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2882->refCount.value = 1;
        panda$collections$Array$init($tmp2882);
        children2881 = $tmp2882;
        panda$collections$Array$add$panda$collections$Array$T(children2881, ((panda$core$Object*) left2723));
        panda$core$UInt64 $tmp2884 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(self->reusedValueCount, ((panda$core$UInt64) { 1 }));
        self->reusedValueCount = $tmp2884;
        org$pandalanguage$pandac$IRNode* $tmp2885 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2885->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2885->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2885, ((panda$core$Int64) { 1027 }), left2723->position, left2723->type, ((panda$core$Object*) wrap_panda$core$UInt64(self->reusedValueCount)), ((panda$collections$ListView*) children2881));
        left2723 = $tmp2885;
        org$pandalanguage$pandac$IRNode* $tmp2888 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2888->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2888->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2888, ((panda$core$Int64) { 1028 }), left2723->position, left2723->type, self->reusedValueCount);
        reusedLeft2887 = $tmp2888;
        panda$core$Int64 $tmp2890 = org$pandalanguage$pandac$Compiler$removeAssignment$panda$core$Int64$R$panda$core$Int64(p_op);
        org$pandalanguage$pandac$IRNode* $tmp2891 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, reusedLeft2887, $tmp2890, right2724);
        right2724 = $tmp2891;
        if (((panda$core$Bit) { right2724 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp2893 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(left2723->type);
        bool $tmp2892 = $tmp2893.value;
        if (!$tmp2892) goto $l2894;
        panda$core$Bit $tmp2895 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(left2723->type, right2724->type);
        $tmp2892 = $tmp2895.value;
        $l2894:;
        panda$core$Bit $tmp2896 = { $tmp2892 };
        if ($tmp2896.value) {
        {
            panda$collections$Array* $tmp2898 = (panda$collections$Array*) malloc(40);
            $tmp2898->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2898->refCount.value = 1;
            panda$collections$Array$init($tmp2898);
            org$pandalanguage$pandac$IRNode* $tmp2900 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, right2724, &$s2897, ((panda$collections$ListView*) $tmp2898), left2723->type);
            right2724 = $tmp2900;
            if (((panda$core$Bit) { right2724 == NULL }).value) {
            {
                return NULL;
            }
            }
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp2901 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, left2723, ((panda$core$Int64) { 73 }), right2724);
        return $tmp2901;
    }
    }
    panda$core$Bit $tmp2902 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 101 }));
    if ($tmp2902.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2903 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, left2723);
        left2723 = $tmp2903;
        if (((panda$core$Bit) { left2723 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$ClassDecl* $tmp2905 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, left2723->type);
        cl2904 = $tmp2905;
        if (((panda$core$Bit) { cl2904 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$ListView* $tmp2907 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, left2723->type);
        parameters2906 = $tmp2907;
        org$pandalanguage$pandac$SymbolTable* $tmp2909 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl2904);
        org$pandalanguage$pandac$Symbol* $tmp2911 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp2909, &$s2910);
        methods2908 = $tmp2911;
        if (((panda$core$Bit) { methods2908 != NULL }).value) {
        {
            panda$collections$Array* $tmp2914 = (panda$collections$Array*) malloc(40);
            $tmp2914->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2914->refCount.value = 1;
            panda$collections$Array$init($tmp2914);
            types2913 = $tmp2914;
            panda$core$Bit $tmp2916 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(methods2908->kind, ((panda$core$Int64) { 204 }));
            if ($tmp2916.value) {
            {
                m2917 = ((org$pandalanguage$pandac$MethodDecl*) methods2908);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m2917);
                org$pandalanguage$pandac$MethodRef* $tmp2918 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                $tmp2918->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                $tmp2918->refCount.value = 1;
                org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp2918, m2917, parameters2906);
                org$pandalanguage$pandac$Type* $tmp2920 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type($tmp2918);
                panda$collections$Array$add$panda$collections$Array$T(types2913, ((panda$core$Object*) $tmp2920));
            }
            }
            else {
            {
                panda$core$Bit $tmp2921 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(methods2908->kind, ((panda$core$Int64) { 205 }));
                PANDA_ASSERT($tmp2921.value);
                {
                    ITable* $tmp2923 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) methods2908)->methods)->$class->itable;
                    while ($tmp2923->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp2923 = $tmp2923->next;
                    }
                    $fn2925 $tmp2924 = $tmp2923->methods[0];
                    panda$collections$Iterator* $tmp2926 = $tmp2924(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) methods2908)->methods));
                    m$Iter2922 = $tmp2926;
                    $l2927:;
                    ITable* $tmp2929 = m$Iter2922->$class->itable;
                    while ($tmp2929->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp2929 = $tmp2929->next;
                    }
                    $fn2931 $tmp2930 = $tmp2929->methods[0];
                    panda$core$Bit $tmp2932 = $tmp2930(m$Iter2922);
                    panda$core$Bit $tmp2933 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2932);
                    if (!$tmp2933.value) goto $l2928;
                    {
                        ITable* $tmp2935 = m$Iter2922->$class->itable;
                        while ($tmp2935->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2935 = $tmp2935->next;
                        }
                        $fn2937 $tmp2936 = $tmp2935->methods[1];
                        panda$core$Object* $tmp2938 = $tmp2936(m$Iter2922);
                        m2934 = ((org$pandalanguage$pandac$MethodDecl*) $tmp2938);
                        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m2934);
                        org$pandalanguage$pandac$MethodRef* $tmp2939 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                        $tmp2939->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                        $tmp2939->refCount.value = 1;
                        org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp2939, m2934, parameters2906);
                        org$pandalanguage$pandac$Type* $tmp2941 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type($tmp2939);
                        panda$collections$Array$add$panda$collections$Array$T(types2913, ((panda$core$Object*) $tmp2941));
                    }
                    goto $l2927;
                    $l2928:;
                }
            }
            }
            org$pandalanguage$pandac$Type* $tmp2942 = (org$pandalanguage$pandac$Type*) malloc(96);
            $tmp2942->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp2942->refCount.value = 1;
            org$pandalanguage$pandac$Type$init$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp2942, ((panda$collections$ListView*) types2913));
            type2912 = $tmp2942;
        }
        }
        else {
        {
            org$pandalanguage$pandac$Type* $tmp2944 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            type2912 = $tmp2944;
        }
        }
        panda$collections$Array* $tmp2946 = (panda$collections$Array*) malloc(40);
        $tmp2946->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2946->refCount.value = 1;
        panda$collections$Array$init($tmp2946);
        children2945 = $tmp2946;
        panda$collections$Array$add$panda$collections$Array$T(children2945, ((panda$core$Object*) left2723));
        panda$collections$Array$add$panda$collections$Array$T(children2945, ((panda$core$Object*) right2724));
        org$pandalanguage$pandac$IRNode* $tmp2948 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2948->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2948->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2948, ((panda$core$Int64) { 1040 }), p_position, type2912, ((panda$collections$ListView*) children2945));
        return $tmp2948;
    }
    }
    org$pandalanguage$pandac$Type* $tmp2950 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2951 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(left2723->type, $tmp2950);
    if ($tmp2951.value) {
    {
        org$pandalanguage$pandac$Type* $tmp2953 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp2954 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(right2724->type, $tmp2953);
        bool $tmp2952 = $tmp2954.value;
        if (!$tmp2952) goto $l2955;
        panda$core$Bit $tmp2960 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 66 }));
        bool $tmp2959 = $tmp2960.value;
        if ($tmp2959) goto $l2961;
        panda$core$Bit $tmp2962 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 68 }));
        $tmp2959 = $tmp2962.value;
        $l2961:;
        panda$core$Bit $tmp2963 = { $tmp2959 };
        bool $tmp2958 = $tmp2963.value;
        if ($tmp2958) goto $l2964;
        panda$core$Bit $tmp2965 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 70 }));
        $tmp2958 = $tmp2965.value;
        $l2964:;
        panda$core$Bit $tmp2966 = { $tmp2958 };
        bool $tmp2957 = $tmp2966.value;
        if ($tmp2957) goto $l2967;
        panda$core$Bit $tmp2968 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 58 }));
        $tmp2957 = $tmp2968.value;
        $l2967:;
        panda$core$Bit $tmp2969 = { $tmp2957 };
        bool $tmp2956 = $tmp2969.value;
        if ($tmp2956) goto $l2970;
        panda$core$Bit $tmp2971 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 59 }));
        $tmp2956 = $tmp2971.value;
        $l2970:;
        panda$core$Bit $tmp2972 = { $tmp2956 };
        $tmp2952 = $tmp2972.value;
        $l2955:;
        panda$core$Bit $tmp2973 = { $tmp2952 };
        if ($tmp2973.value) {
        {
            panda$collections$Array* $tmp2975 = (panda$collections$Array*) malloc(40);
            $tmp2975->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2975->refCount.value = 1;
            panda$collections$Array$init($tmp2975);
            children2974 = $tmp2975;
            panda$collections$Array$add$panda$collections$Array$T(children2974, ((panda$core$Object*) left2723));
            panda$collections$Array$add$panda$collections$Array$T(children2974, ((panda$core$Object*) right2724));
            org$pandalanguage$pandac$IRNode* $tmp2977 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2977->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2977->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2977, ((panda$core$Int64) { 1023 }), p_position, left2723->type, ((panda$core$Object*) wrap_panda$core$Int64(p_op)), ((panda$collections$ListView*) children2974));
            return $tmp2977;
        }
        }
        panda$core$String* $tmp2980 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
        panda$core$String* $tmp2981 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2979, $tmp2980);
        panda$core$String* $tmp2983 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2981, &$s2982);
        panda$core$String* $tmp2984 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2983, ((panda$core$Object*) left2723->type));
        panda$core$String* $tmp2986 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2984, &$s2985);
        panda$core$String* $tmp2987 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2986, ((panda$core$Object*) right2724->type));
        panda$core$String* $tmp2989 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2987, &$s2988);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp2989);
        return NULL;
    }
    }
    panda$collections$Array* $tmp2991 = (panda$collections$Array*) malloc(40);
    $tmp2991->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2991->refCount.value = 1;
    panda$collections$Array$init($tmp2991);
    children2990 = $tmp2991;
    panda$core$Bit $tmp2995 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2723->kind, ((panda$core$Int64) { 1004 }));
    bool $tmp2994 = $tmp2995.value;
    if ($tmp2994) goto $l2996;
    panda$core$Bit $tmp2997 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2723->kind, ((panda$core$Int64) { 1032 }));
    $tmp2994 = $tmp2997.value;
    $l2996:;
    panda$core$Bit $tmp2998 = { $tmp2994 };
    bool $tmp2993 = $tmp2998.value;
    if (!$tmp2993) goto $l2999;
    panda$core$Bit $tmp3001 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right2724->kind, ((panda$core$Int64) { 1004 }));
    bool $tmp3000 = $tmp3001.value;
    if ($tmp3000) goto $l3002;
    panda$core$Bit $tmp3003 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right2724->kind, ((panda$core$Int64) { 1032 }));
    $tmp3000 = $tmp3003.value;
    $l3002:;
    panda$core$Bit $tmp3004 = { $tmp3000 };
    $tmp2993 = $tmp3004.value;
    $l2999:;
    panda$core$Bit $tmp3005 = { $tmp2993 };
    if ($tmp3005.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3006 = org$pandalanguage$pandac$Compiler$foldInts$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, left2723, p_op, right2724);
        return $tmp3006;
    }
    }
    panda$core$Bit $tmp3008 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(left2723->type);
    bool $tmp3007 = $tmp3008.value;
    if (!$tmp3007) goto $l3009;
    panda$core$Int64$nullable $tmp3010 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, right2724, left2723->type);
    $tmp3007 = ((panda$core$Bit) { $tmp3010.nonnull }).value;
    $l3009:;
    panda$core$Bit $tmp3011 = { $tmp3007 };
    if ($tmp3011.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3012 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, right2724, left2723->type);
        right2724 = $tmp3012;
        PANDA_ASSERT(((panda$core$Bit) { right2724 != NULL }).value);
        panda$collections$Array$add$panda$collections$Array$T(children2990, ((panda$core$Object*) left2723));
        panda$collections$Array$add$panda$collections$Array$T(children2990, ((panda$core$Object*) right2724));
        switch (p_op.value) {
            case 58:
            case 59:
            case 63:
            case 65:
            case 62:
            case 64:
            {
                org$pandalanguage$pandac$Type* $tmp3014 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
                resultType3013 = $tmp3014;
            }
            break;
            default:
            {
                resultType3013 = left2723->type;
            }
        }
        org$pandalanguage$pandac$IRNode* $tmp3015 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3015->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3015->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3015, ((panda$core$Int64) { 1023 }), p_position, resultType3013, ((panda$core$Object*) wrap_panda$core$Int64(p_op)), ((panda$collections$ListView*) children2990));
        return $tmp3015;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children2990, ((panda$core$Object*) right2724));
    PANDA_ASSERT(self->reportErrors.value);
    self->reportErrors = ((panda$core$Bit) { false });
    panda$core$String* $tmp3018 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
    org$pandalanguage$pandac$IRNode* $tmp3019 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, left2723, $tmp3018, ((panda$collections$ListView*) children2990));
    result3017 = $tmp3019;
    self->reportErrors = ((panda$core$Bit) { true });
    if (((panda$core$Bit) { result3017 == NULL }).value) {
    {
        panda$collections$Array$clear(children2990);
        panda$collections$Array$add$panda$collections$Array$T(children2990, ((panda$core$Object*) left2723));
        org$pandalanguage$pandac$IRNode* $tmp3021 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, right2724);
        resolved3020 = $tmp3021;
        bool $tmp3022 = ((panda$core$Bit) { resolved3020 != NULL }).value;
        if (!$tmp3022) goto $l3023;
        panda$core$Bit $tmp3024 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(resolved3020->type);
        $tmp3022 = $tmp3024.value;
        $l3023:;
        panda$core$Bit $tmp3025 = { $tmp3022 };
        if ($tmp3025.value) {
        {
            panda$collections$Array$add$panda$collections$Array$T(children2990, ((panda$core$Object*) resolved3020));
            org$pandalanguage$pandac$IRNode* $tmp3027 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3027->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3027->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3029 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp3027, ((panda$core$Int64) { 1001 }), resolved3020->position, $tmp3029, resolved3020->type);
            target3026 = $tmp3027;
            panda$core$String* $tmp3030 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
            org$pandalanguage$pandac$IRNode* $tmp3031 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target3026, $tmp3030, ((panda$collections$ListView*) children2990));
            result3017 = $tmp3031;
        }
        }
    }
    }
    return result3017;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_b) {
    org$pandalanguage$pandac$IRNode* left3032;
    org$pandalanguage$pandac$IRNode* right3035;
    panda$core$Object* $tmp3033 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_b->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3034 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3033));
    left3032 = $tmp3034;
    if (((panda$core$Bit) { left3032 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Object* $tmp3036 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_b->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp3037 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3036));
    right3035 = $tmp3037;
    if (((panda$core$Bit) { right3035 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3038 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_b->position, left3032, ((panda$core$Int64$wrapper*) p_b->payload)->value, right3035);
    return $tmp3038;
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type) {
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp3042;
    switch (p_type->typeKind.value) {
        case 22:
        {
            panda$collections$ListView* $tmp3039 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p_type->parameter->bound);
            return $tmp3039;
        }
        break;
        case 21:
        {
            panda$core$Int64 $tmp3040 = panda$collections$Array$get_count$R$panda$core$Int64(p_type->subtypes);
            panda$core$Bit $tmp3041 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp3040, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp3041.value);
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp3042, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$collections$Array* $tmp3043 = panda$collections$Array$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT(p_type->subtypes, $tmp3042);
            return ((panda$collections$ListView*) $tmp3043);
        }
        break;
        case 11:
        {
            panda$core$Object* $tmp3044 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
            panda$collections$ListView* $tmp3045 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, ((org$pandalanguage$pandac$Type*) $tmp3044));
            return $tmp3045;
        }
        break;
        default:
        {
            panda$collections$Array* $tmp3046 = (panda$collections$Array*) malloc(40);
            $tmp3046->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp3046->refCount.value = 1;
            panda$collections$Array$init($tmp3046);
            return ((panda$collections$ListView*) $tmp3046);
        }
    }
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$IRNode$Q$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_target) {
    if (((panda$core$Bit) { p_target != NULL }).value) {
    {
        panda$core$Bit $tmp3048 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1001 }));
        if ($tmp3048.value) {
        {
            panda$collections$ListView* $tmp3049 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, ((org$pandalanguage$pandac$Type*) p_target->payload));
            return $tmp3049;
        }
        }
        panda$collections$ListView* $tmp3050 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p_target->type);
        return $tmp3050;
    }
    }
    panda$collections$Array* $tmp3051 = (panda$collections$Array*) malloc(40);
    $tmp3051->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3051->refCount.value = 1;
    panda$collections$Array$init($tmp3051);
    return ((panda$collections$ListView*) $tmp3051);
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compilePrefix$panda$core$Int64$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_base, org$pandalanguage$pandac$Position p_position) {
    panda$core$String* name3054;
    org$pandalanguage$pandac$ClassDecl* cl3056;
    org$pandalanguage$pandac$Symbol* s3058;
    org$pandalanguage$pandac$MethodDecl* m3061;
    panda$collections$Iterator* test$Iter3066;
    org$pandalanguage$pandac$MethodDecl* test3078;
    org$pandalanguage$pandac$MethodRef* ref3090;
    panda$collections$Array* children3094;
    org$pandalanguage$pandac$IRNode* methodRef3097;
    org$pandalanguage$pandac$Position $tmp3103;
    panda$collections$Array* args3104;
    panda$collections$Array* children3120;
    panda$collections$Array* children3130;
    org$pandalanguage$pandac$IRNode* coerced3139;
    panda$collections$Array* children3142;
    panda$core$Bit $tmp3053 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_base->type);
    if ($tmp3053.value) {
    {
        panda$core$String* $tmp3055 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
        name3054 = $tmp3055;
        org$pandalanguage$pandac$ClassDecl* $tmp3057 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_base->type);
        cl3056 = $tmp3057;
        if (((panda$core$Bit) { cl3056 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$SymbolTable* $tmp3059 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl3056);
        org$pandalanguage$pandac$Symbol* $tmp3060 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp3059, name3054);
        s3058 = $tmp3060;
        if (((panda$core$Bit) { s3058 != NULL }).value) {
        {
            m3061 = NULL;
            switch (s3058->kind.value) {
                case 204:
                {
                    m3061 = ((org$pandalanguage$pandac$MethodDecl*) s3058);
                    panda$core$Int64 $tmp3062 = panda$collections$Array$get_count$R$panda$core$Int64(m3061->parameters);
                    panda$core$Bit $tmp3063 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3062, ((panda$core$Int64) { 0 }));
                    PANDA_ASSERT($tmp3063.value);
                    panda$core$Bit $tmp3064 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(m3061->annotations);
                    panda$core$Bit $tmp3065 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3064);
                    PANDA_ASSERT($tmp3065.value);
                }
                break;
                case 205:
                {
                    {
                        ITable* $tmp3067 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s3058)->methods)->$class->itable;
                        while ($tmp3067->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp3067 = $tmp3067->next;
                        }
                        $fn3069 $tmp3068 = $tmp3067->methods[0];
                        panda$collections$Iterator* $tmp3070 = $tmp3068(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s3058)->methods));
                        test$Iter3066 = $tmp3070;
                        $l3071:;
                        ITable* $tmp3073 = test$Iter3066->$class->itable;
                        while ($tmp3073->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp3073 = $tmp3073->next;
                        }
                        $fn3075 $tmp3074 = $tmp3073->methods[0];
                        panda$core$Bit $tmp3076 = $tmp3074(test$Iter3066);
                        panda$core$Bit $tmp3077 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3076);
                        if (!$tmp3077.value) goto $l3072;
                        {
                            ITable* $tmp3079 = test$Iter3066->$class->itable;
                            while ($tmp3079->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp3079 = $tmp3079->next;
                            }
                            $fn3081 $tmp3080 = $tmp3079->methods[1];
                            panda$core$Object* $tmp3082 = $tmp3080(test$Iter3066);
                            test3078 = ((org$pandalanguage$pandac$MethodDecl*) $tmp3082);
                            panda$core$Bit $tmp3084 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(test3078->annotations);
                            panda$core$Bit $tmp3085 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3084);
                            bool $tmp3083 = $tmp3085.value;
                            if (!$tmp3083) goto $l3086;
                            panda$core$Int64 $tmp3087 = panda$collections$Array$get_count$R$panda$core$Int64(test3078->parameters);
                            panda$core$Bit $tmp3088 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3087, ((panda$core$Int64) { 0 }));
                            $tmp3083 = $tmp3088.value;
                            $l3086:;
                            panda$core$Bit $tmp3089 = { $tmp3083 };
                            if ($tmp3089.value) {
                            {
                                m3061 = test3078;
                                goto $l3072;
                            }
                            }
                        }
                        goto $l3071;
                        $l3072:;
                    }
                }
                break;
                default:
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
            }
            if (((panda$core$Bit) { m3061 != NULL }).value) {
            {
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m3061);
                org$pandalanguage$pandac$MethodRef* $tmp3091 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                $tmp3091->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                $tmp3091->refCount.value = 1;
                panda$collections$ListView* $tmp3093 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$IRNode$Q$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p_base);
                org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp3091, m3061, $tmp3093);
                ref3090 = $tmp3091;
                panda$collections$Array* $tmp3095 = (panda$collections$Array*) malloc(40);
                $tmp3095->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp3095->refCount.value = 1;
                panda$collections$Array$init($tmp3095);
                children3094 = $tmp3095;
                panda$collections$Array$add$panda$collections$Array$T(children3094, ((panda$core$Object*) p_base));
                org$pandalanguage$pandac$IRNode* $tmp3098 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp3098->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp3098->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp3100 = (org$pandalanguage$pandac$Type*) malloc(96);
                $tmp3100->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
                $tmp3100->refCount.value = 1;
                org$pandalanguage$pandac$Position$init(&$tmp3103);
                org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp3100, &$s3102, ((panda$core$Int64) { 16 }), $tmp3103, ((panda$core$Bit) { true }));
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3098, ((panda$core$Int64) { 1002 }), p_position, $tmp3100, ((panda$core$Object*) ref3090), ((panda$collections$ListView*) children3094));
                methodRef3097 = $tmp3098;
                panda$collections$Array* $tmp3105 = (panda$collections$Array*) malloc(40);
                $tmp3105->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp3105->refCount.value = 1;
                panda$collections$Array$init($tmp3105);
                args3104 = $tmp3105;
                org$pandalanguage$pandac$IRNode* $tmp3107 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, methodRef3097, ((panda$collections$ListView*) args3104));
                return $tmp3107;
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
                    org$pandalanguage$pandac$IRNode* $tmp3108 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp3108->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp3108->refCount.value = 1;
                    org$pandalanguage$pandac$Type* $tmp3110 = org$pandalanguage$pandac$Type$NegatedIntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(((panda$core$UInt64$wrapper*) p_base->payload)->value);
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp3108, ((panda$core$Int64) { 1032 }), p_position, $tmp3110, ((panda$core$UInt64$wrapper*) p_base->payload)->value);
                    return $tmp3108;
                }
                break;
                case 1032:
                {
                    org$pandalanguage$pandac$IRNode* $tmp3111 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp3111->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp3111->refCount.value = 1;
                    org$pandalanguage$pandac$Type* $tmp3113 = org$pandalanguage$pandac$Type$NegatedIntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(((panda$core$UInt64$wrapper*) p_base->payload)->value);
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp3111, ((panda$core$Int64) { 1004 }), p_position, $tmp3113, ((panda$core$UInt64$wrapper*) p_base->payload)->value);
                    return $tmp3111;
                }
                break;
                case 1045:
                {
                    org$pandalanguage$pandac$IRNode* $tmp3114 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp3114->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp3114->refCount.value = 1;
                    panda$core$Real64 $tmp3116 = panda$core$Real64$$SUB$R$panda$core$Real64(((panda$core$Real64$wrapper*) p_base->payload)->value);
                    org$pandalanguage$pandac$Type* $tmp3117 = org$pandalanguage$pandac$Type$RealLiteral$panda$core$Real64$R$org$pandalanguage$pandac$Type($tmp3116);
                    panda$core$Real64 $tmp3118 = panda$core$Real64$$SUB$R$panda$core$Real64(((panda$core$Real64$wrapper*) p_base->payload)->value);
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Real64($tmp3114, ((panda$core$Int64) { 1045 }), p_position, $tmp3117, $tmp3118);
                    return $tmp3114;
                }
                break;
                default:
                {
                    panda$core$Bit $tmp3119 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_base->type);
                    if ($tmp3119.value) {
                    {
                        panda$collections$Array* $tmp3121 = (panda$collections$Array*) malloc(40);
                        $tmp3121->$class = (panda$core$Class*) &panda$collections$Array$class;
                        $tmp3121->refCount.value = 1;
                        panda$collections$Array$init($tmp3121);
                        children3120 = $tmp3121;
                        panda$collections$Array$add$panda$collections$Array$T(children3120, ((panda$core$Object*) p_base));
                        org$pandalanguage$pandac$IRNode* $tmp3123 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                        $tmp3123->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                        $tmp3123->refCount.value = 1;
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3123, ((panda$core$Int64) { 1041 }), p_base->position, p_base->type, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 52 }))), ((panda$collections$ListView*) children3120));
                        return $tmp3123;
                    }
                    }
                }
            }
            panda$core$String* $tmp3126 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3125, ((panda$core$Object*) p_base->type));
            panda$core$String* $tmp3128 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3126, &$s3127);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_base->position, $tmp3128);
            return NULL;
        }
        break;
        case 50:
        {
            panda$core$Bit $tmp3129 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_base->type);
            if ($tmp3129.value) {
            {
                panda$collections$Array* $tmp3131 = (panda$collections$Array*) malloc(40);
                $tmp3131->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp3131->refCount.value = 1;
                panda$collections$Array$init($tmp3131);
                children3130 = $tmp3131;
                panda$collections$Array$add$panda$collections$Array$T(children3130, ((panda$core$Object*) p_base));
                org$pandalanguage$pandac$IRNode* $tmp3133 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp3133->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp3133->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3133, ((panda$core$Int64) { 1041 }), p_base->position, p_base->type, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 50 }))), ((panda$collections$ListView*) children3130));
                return $tmp3133;
            }
            }
            else {
            {
                panda$core$String* $tmp3136 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3135, ((org$pandalanguage$pandac$Symbol*) p_base->type)->name);
                panda$core$String* $tmp3138 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3136, &$s3137);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_base->position, $tmp3138);
                return NULL;
            }
            }
        }
        break;
        case 49:
        {
            org$pandalanguage$pandac$Type* $tmp3140 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode* $tmp3141 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_base, $tmp3140);
            coerced3139 = $tmp3141;
            if (((panda$core$Bit) { coerced3139 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp3143 = (panda$collections$Array*) malloc(40);
            $tmp3143->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp3143->refCount.value = 1;
            panda$collections$Array$init($tmp3143);
            children3142 = $tmp3143;
            panda$collections$Array$add$panda$collections$Array$T(children3142, ((panda$core$Object*) coerced3139));
            org$pandalanguage$pandac$IRNode* $tmp3145 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3145->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3145->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3145, ((panda$core$Int64) { 1041 }), p_base->position, p_base->type, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 49 }))), ((panda$collections$ListView*) children3142));
            return $tmp3145;
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
    org$pandalanguage$pandac$IRNode* base3150;
    panda$core$Bit $tmp3147 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_p->kind, ((panda$core$Int64) { 112 }));
    PANDA_ASSERT($tmp3147.value);
    panda$core$Int64 $tmp3148 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_p->children);
    panda$core$Bit $tmp3149 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3148, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3149.value);
    panda$core$Object* $tmp3151 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_p->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3152 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3151));
    base3150 = $tmp3152;
    if (((panda$core$Bit) { base3150 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3153 = org$pandalanguage$pandac$Compiler$compilePrefix$panda$core$Int64$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$R$org$pandalanguage$pandac$IRNode$Q(self, ((panda$core$Int64$wrapper*) p_p->payload)->value, base3150, p_p->position);
    return $tmp3153;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileCall$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_c) {
    org$pandalanguage$pandac$IRNode* m3155;
    panda$collections$Array* args3158;
    panda$core$Range$LTpanda$core$Int64$GT $tmp3161;
    org$pandalanguage$pandac$IRNode* arg3176;
    panda$core$Bit $tmp3154 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_c->kind, ((panda$core$Int64) { 107 }));
    PANDA_ASSERT($tmp3154.value);
    panda$core$Object* $tmp3156 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_c->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3157 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3156));
    m3155 = $tmp3157;
    if (((panda$core$Bit) { m3155 != NULL }).value) {
    {
        panda$collections$Array* $tmp3159 = (panda$collections$Array*) malloc(40);
        $tmp3159->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp3159->refCount.value = 1;
        panda$collections$Array$init($tmp3159);
        args3158 = $tmp3159;
        panda$core$Int64 $tmp3162 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_c->children);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp3161, ((panda$core$Int64) { 1 }), $tmp3162, ((panda$core$Bit) { false }));
        int64_t $tmp3164 = $tmp3161.min.value;
        panda$core$Int64 i3163 = { $tmp3164 };
        int64_t $tmp3166 = $tmp3161.max.value;
        bool $tmp3167 = $tmp3161.inclusive.value;
        if ($tmp3167) goto $l3174; else goto $l3175;
        $l3174:;
        if ($tmp3164 <= $tmp3166) goto $l3168; else goto $l3170;
        $l3175:;
        if ($tmp3164 < $tmp3166) goto $l3168; else goto $l3170;
        $l3168:;
        {
            panda$core$Object* $tmp3177 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_c->children, i3163);
            org$pandalanguage$pandac$IRNode* $tmp3178 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3177));
            arg3176 = $tmp3178;
            if (((panda$core$Bit) { arg3176 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(args3158, ((panda$core$Object*) arg3176));
        }
        $l3171:;
        int64_t $tmp3180 = $tmp3166 - i3163.value;
        if ($tmp3167) goto $l3181; else goto $l3182;
        $l3181:;
        if ($tmp3180 >= 1) goto $l3179; else goto $l3170;
        $l3182:;
        if ($tmp3180 > 1) goto $l3179; else goto $l3170;
        $l3179:;
        i3163.value += 1;
        goto $l3168;
        $l3170:;
        org$pandalanguage$pandac$IRNode* $tmp3185 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, m3155, ((panda$collections$ListView*) args3158));
        return $tmp3185;
    }
    }
    return NULL;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$String$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_base, panda$core$String* p_name) {
    org$pandalanguage$pandac$ClassDecl* cl3186;
    panda$core$String* name3188;
    org$pandalanguage$pandac$ClassDecl* cl3196;
    org$pandalanguage$pandac$SymbolTable* st3209;
    org$pandalanguage$pandac$Symbol* s3211;
    switch (p_base->kind.value) {
        case 1001:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp3187 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Type*) p_base->payload));
            cl3186 = $tmp3187;
        }
        break;
        case 1037:
        {
            panda$core$String* $tmp3190 = (($fn3189) p_base->payload->$class->vtable[0])(p_base->payload);
            panda$core$String* $tmp3192 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3190, &$s3191);
            panda$core$String* $tmp3193 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3192, p_name);
            panda$core$String* $tmp3195 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3193, &$s3194);
            name3188 = $tmp3195;
            org$pandalanguage$pandac$ClassDecl* $tmp3197 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, name3188);
            cl3196 = $tmp3197;
            if (((panda$core$Bit) { cl3196 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp3198 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp3198->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp3198->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp3200 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$Type* $tmp3201 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl3196);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp3198, ((panda$core$Int64) { 1001 }), p_position, $tmp3200, $tmp3201);
                return $tmp3198;
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp3202 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3202->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3202->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3204 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$String($tmp3202, ((panda$core$Int64) { 1037 }), p_position, $tmp3204, name3188);
            return $tmp3202;
        }
        break;
        case 1024:
        {
            panda$core$Object* $tmp3205 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, ((org$pandalanguage$pandac$ClassDecl*) $tmp3205));
            panda$core$Object* $tmp3206 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
            org$pandalanguage$pandac$ClassDecl* $tmp3207 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$ClassDecl*) $tmp3206)->rawSuper);
            cl3186 = $tmp3207;
        }
        break;
        default:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp3208 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_base->type);
            cl3186 = $tmp3208;
        }
    }
    if (((panda$core$Bit) { cl3186 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp3210 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl3186);
    st3209 = $tmp3210;
    org$pandalanguage$pandac$Symbol* $tmp3212 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(st3209, p_name);
    s3211 = $tmp3212;
    if (((panda$core$Bit) { s3211 == NULL }).value) {
    {
        panda$core$String* $tmp3214 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3213, ((panda$core$Object*) p_base->type));
        panda$core$String* $tmp3216 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3214, &$s3215);
        panda$core$String* $tmp3217 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3216, p_name);
        panda$core$String* $tmp3219 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3217, &$s3218);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp3219);
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3220 = org$pandalanguage$pandac$Compiler$symbolRef$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, p_base, s3211, st3209);
    return $tmp3220;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_d) {
    org$pandalanguage$pandac$IRNode* base3224;
    panda$core$Bit $tmp3221 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_d->kind, ((panda$core$Int64) { 108 }));
    PANDA_ASSERT($tmp3221.value);
    panda$core$Int64 $tmp3222 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp3223 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3222, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3223.value);
    panda$core$Object* $tmp3225 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3226 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3225));
    base3224 = $tmp3226;
    if (((panda$core$Bit) { base3224 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp3228 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(base3224->kind, ((panda$core$Int64) { 1037 }));
    bool $tmp3227 = $tmp3228.value;
    if (!$tmp3227) goto $l3229;
    panda$core$Bit $tmp3230 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(base3224->kind, ((panda$core$Int64) { 1024 }));
    $tmp3227 = $tmp3230.value;
    $l3229:;
    panda$core$Bit $tmp3231 = { $tmp3227 };
    if ($tmp3231.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3232 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, base3224);
        base3224 = $tmp3232;
    }
    }
    if (((panda$core$Bit) { base3224 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3233 = org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$String$R$org$pandalanguage$pandac$IRNode$Q(self, p_d->position, base3224, ((panda$core$String*) p_d->payload));
    return $tmp3233;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIdentifier$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_i) {
    org$pandalanguage$pandac$Symbol* s3235;
    panda$core$Bit $tmp3234 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_i->kind, ((panda$core$Int64) { 106 }));
    PANDA_ASSERT($tmp3234.value);
    org$pandalanguage$pandac$Symbol* $tmp3236 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(self->symbolTable, ((panda$core$String*) p_i->payload));
    s3235 = $tmp3236;
    if (((panda$core$Bit) { s3235 == NULL }).value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp3237 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((panda$core$String*) p_i->payload));
        s3235 = ((org$pandalanguage$pandac$Symbol*) $tmp3237);
    }
    }
    if (((panda$core$Bit) { s3235 != NULL }).value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3238 = org$pandalanguage$pandac$Compiler$symbolRef$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q(self, p_i->position, NULL, s3235, self->symbolTable);
        return $tmp3238;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3239 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3239->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3239->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3241 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$String($tmp3239, ((panda$core$Int64) { 1037 }), p_i->position, $tmp3241, ((panda$core$String*) p_i->payload));
    return $tmp3239;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_t) {
    org$pandalanguage$pandac$Type* resolved3242;
    org$pandalanguage$pandac$Type* $tmp3243 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, p_t);
    org$pandalanguage$pandac$Type* $tmp3244 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, $tmp3243);
    resolved3242 = $tmp3244;
    if (((panda$core$Bit) { resolved3242 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3245 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3245->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3245->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3247 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp3245, ((panda$core$Int64) { 1001 }), p_t->position, $tmp3247, resolved3242);
    return $tmp3245;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileRange$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_r) {
    org$pandalanguage$pandac$IRNode* start3255;
    org$pandalanguage$pandac$IRNode* end3263;
    org$pandalanguage$pandac$IRNode* step3271;
    panda$collections$Array* children3276;
    org$pandalanguage$pandac$Position $tmp3284;
    panda$core$Bit $tmp3249 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_r->kind, ((panda$core$Int64) { 105 }));
    bool $tmp3248 = $tmp3249.value;
    if ($tmp3248) goto $l3250;
    panda$core$Bit $tmp3251 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_r->kind, ((panda$core$Int64) { 104 }));
    $tmp3248 = $tmp3251.value;
    $l3250:;
    panda$core$Bit $tmp3252 = { $tmp3248 };
    PANDA_ASSERT($tmp3252.value);
    panda$core$Int64 $tmp3253 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_r->children);
    panda$core$Bit $tmp3254 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3253, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp3254.value);
    panda$core$Object* $tmp3256 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp3257 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp3256)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp3257.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3258 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3258->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3258->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp3260 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3258, ((panda$core$Int64) { 1030 }), p_r->position, $tmp3260);
        start3255 = $tmp3258;
    }
    }
    else {
    {
        panda$core$Object* $tmp3261 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp3262 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3261));
        start3255 = $tmp3262;
        if (((panda$core$Bit) { start3255 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$core$Object* $tmp3264 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp3265 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp3264)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp3265.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3266 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3266->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3266->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp3268 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3266, ((panda$core$Int64) { 1030 }), p_r->position, $tmp3268);
        end3263 = $tmp3266;
    }
    }
    else {
    {
        panda$core$Object* $tmp3269 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$IRNode* $tmp3270 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3269));
        end3263 = $tmp3270;
        if (((panda$core$Bit) { end3263 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$core$Object* $tmp3272 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 2 }));
    panda$core$Bit $tmp3273 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp3272)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp3273.value) {
    {
        step3271 = NULL;
    }
    }
    else {
    {
        panda$core$Object* $tmp3274 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$IRNode* $tmp3275 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3274));
        step3271 = $tmp3275;
        if (((panda$core$Bit) { step3271 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$collections$Array* $tmp3277 = (panda$collections$Array*) malloc(40);
    $tmp3277->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3277->refCount.value = 1;
    panda$collections$Array$init($tmp3277);
    children3276 = $tmp3277;
    panda$collections$Array$add$panda$collections$Array$T(children3276, ((panda$core$Object*) start3255));
    panda$collections$Array$add$panda$collections$Array$T(children3276, ((panda$core$Object*) end3263));
    if (((panda$core$Bit) { step3271 != NULL }).value) {
    {
        panda$collections$Array$add$panda$collections$Array$T(children3276, ((panda$core$Object*) step3271));
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3279 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3279->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3279->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3281 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp3281->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp3281->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp3284);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp3281, &$s3283, ((panda$core$Int64) { 17 }), $tmp3284, ((panda$core$Bit) { true }));
    panda$core$Bit $tmp3285 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_r->kind, ((panda$core$Int64) { 104 }));
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3279, ((panda$core$Int64) { 1031 }), p_r->position, $tmp3281, ((panda$core$Object*) wrap_panda$core$Bit($tmp3285)), ((panda$collections$ListView*) children3276));
    return $tmp3279;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$IRNode* $tmp3286 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3286->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3286->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3288 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$String($tmp3286, ((panda$core$Int64) { 1033 }), p_s->position, $tmp3288, ((panda$core$String*) p_s->payload));
    return $tmp3286;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileSelf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$Type* type3293;
    org$pandalanguage$pandac$ClassDecl* cl3294;
    panda$collections$Array* subtypes3301;
    panda$core$MutableString* name3305;
    panda$core$Char8 $tmp3308;
    panda$core$String* separator3309;
    panda$collections$Iterator* p$Iter3311;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* p3323;
    panda$collections$Array* pType3328;
    panda$core$String* pName3331;
    panda$core$Char8 $tmp3341;
    panda$core$Bit $tmp3289 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_s->kind, ((panda$core$Int64) { 114 }));
    PANDA_ASSERT($tmp3289.value);
    panda$core$Object* $tmp3290 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
    panda$core$Bit $tmp3291 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp3290)->annotations);
    if ($tmp3291.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_s->position, &$s3292);
        return NULL;
    }
    }
    panda$core$Object* $tmp3295 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
    cl3294 = ((org$pandalanguage$pandac$ClassDecl*) $tmp3295);
    ITable* $tmp3296 = ((panda$collections$CollectionView*) cl3294->parameters)->$class->itable;
    while ($tmp3296->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp3296 = $tmp3296->next;
    }
    $fn3298 $tmp3297 = $tmp3296->methods[0];
    panda$core$Int64 $tmp3299 = $tmp3297(((panda$collections$CollectionView*) cl3294->parameters));
    panda$core$Bit $tmp3300 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3299, ((panda$core$Int64) { 0 }));
    if ($tmp3300.value) {
    {
        panda$collections$Array* $tmp3302 = (panda$collections$Array*) malloc(40);
        $tmp3302->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp3302->refCount.value = 1;
        panda$collections$Array$init($tmp3302);
        subtypes3301 = $tmp3302;
        org$pandalanguage$pandac$Type* $tmp3304 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl3294);
        panda$collections$Array$add$panda$collections$Array$T(subtypes3301, ((panda$core$Object*) $tmp3304));
        panda$core$MutableString* $tmp3306 = (panda$core$MutableString*) malloc(48);
        $tmp3306->$class = (panda$core$Class*) &panda$core$MutableString$class;
        $tmp3306->refCount.value = 1;
        panda$core$MutableString$init$panda$core$String($tmp3306, ((org$pandalanguage$pandac$Symbol*) cl3294)->name);
        name3305 = $tmp3306;
        panda$core$Char8$init$panda$core$UInt8(&$tmp3308, ((panda$core$UInt8) { 60 }));
        panda$core$MutableString$append$panda$core$Char8(name3305, $tmp3308);
        separator3309 = &$s3310;
        {
            ITable* $tmp3312 = ((panda$collections$Iterable*) cl3294->parameters)->$class->itable;
            while ($tmp3312->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3312 = $tmp3312->next;
            }
            $fn3314 $tmp3313 = $tmp3312->methods[0];
            panda$collections$Iterator* $tmp3315 = $tmp3313(((panda$collections$Iterable*) cl3294->parameters));
            p$Iter3311 = $tmp3315;
            $l3316:;
            ITable* $tmp3318 = p$Iter3311->$class->itable;
            while ($tmp3318->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3318 = $tmp3318->next;
            }
            $fn3320 $tmp3319 = $tmp3318->methods[0];
            panda$core$Bit $tmp3321 = $tmp3319(p$Iter3311);
            panda$core$Bit $tmp3322 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3321);
            if (!$tmp3322.value) goto $l3317;
            {
                ITable* $tmp3324 = p$Iter3311->$class->itable;
                while ($tmp3324->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3324 = $tmp3324->next;
                }
                $fn3326 $tmp3325 = $tmp3324->methods[1];
                panda$core$Object* $tmp3327 = $tmp3325(p$Iter3311);
                p3323 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp3327);
                panda$collections$Array* $tmp3329 = (panda$collections$Array*) malloc(40);
                $tmp3329->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp3329->refCount.value = 1;
                panda$collections$Array$init($tmp3329);
                pType3328 = $tmp3329;
                panda$collections$Array$add$panda$collections$Array$T(pType3328, ((panda$core$Object*) p3323->bound));
                panda$core$String* $tmp3332 = panda$core$String$convert$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) cl3294)->name);
                panda$core$String* $tmp3334 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3332, &$s3333);
                panda$core$String* $tmp3335 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3334, ((org$pandalanguage$pandac$Symbol*) p3323)->name);
                panda$core$String* $tmp3337 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3335, &$s3336);
                pName3331 = $tmp3337;
                panda$core$MutableString$append$panda$core$String(name3305, separator3309);
                panda$core$MutableString$append$panda$core$String(name3305, pName3331);
                org$pandalanguage$pandac$Type* $tmp3338 = (org$pandalanguage$pandac$Type*) malloc(96);
                $tmp3338->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
                $tmp3338->refCount.value = 1;
                org$pandalanguage$pandac$Type$init$org$pandalanguage$pandac$ClassDecl$GenericParameter($tmp3338, p3323);
                panda$collections$Array$add$panda$collections$Array$T(subtypes3301, ((panda$core$Object*) $tmp3338));
                separator3309 = &$s3340;
            }
            goto $l3316;
            $l3317:;
        }
        panda$core$Char8$init$panda$core$UInt8(&$tmp3341, ((panda$core$UInt8) { 62 }));
        panda$core$MutableString$append$panda$core$Char8(name3305, $tmp3341);
        org$pandalanguage$pandac$Type* $tmp3342 = (org$pandalanguage$pandac$Type*) malloc(96);
        $tmp3342->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
        $tmp3342->refCount.value = 1;
        panda$core$String* $tmp3344 = panda$core$MutableString$finish$R$panda$core$String(name3305);
        org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp3342, $tmp3344, ((panda$core$Int64) { 21 }), p_s->position, ((panda$collections$ListView*) subtypes3301), ((panda$core$Bit) { true }));
        type3293 = $tmp3342;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp3345 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl3294);
        type3293 = $tmp3345;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3346 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3346->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3346->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3346, ((panda$core$Int64) { 1025 }), p_s->position, type3293);
    return $tmp3346;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileSuper$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$ClassDecl* cl3352;
    panda$core$Bit $tmp3348 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_s->kind, ((panda$core$Int64) { 115 }));
    PANDA_ASSERT($tmp3348.value);
    panda$core$Object* $tmp3349 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
    panda$core$Bit $tmp3350 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp3349)->annotations);
    if ($tmp3350.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_s->position, &$s3351);
        return NULL;
    }
    }
    panda$core$Object* $tmp3353 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
    cl3352 = ((org$pandalanguage$pandac$ClassDecl*) $tmp3353);
    PANDA_ASSERT(cl3352->resolved.value);
    org$pandalanguage$pandac$IRNode* $tmp3354 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3354->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3354->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3354, ((panda$core$Int64) { 1024 }), p_s->position, cl3352->rawSuper);
    return $tmp3354;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_expr, org$pandalanguage$pandac$Type* p_rawType) {
    org$pandalanguage$pandac$IRNode* value3356;
    panda$core$String$Index$nullable index3358;
    org$pandalanguage$pandac$Type* type3365;
    org$pandalanguage$pandac$IRNode* base3367;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp3370;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp3373;
    org$pandalanguage$pandac$Type* type3377;
    org$pandalanguage$pandac$IRNode* $tmp3357 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr);
    value3356 = $tmp3357;
    if (((panda$core$Bit) { value3356 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$String$Index$nullable $tmp3360 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(((org$pandalanguage$pandac$Symbol*) p_rawType)->name, &$s3359);
    index3358 = $tmp3360;
    panda$core$Bit $tmp3362 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_rawType->typeKind, ((panda$core$Int64) { 10 }));
    bool $tmp3361 = $tmp3362.value;
    if (!$tmp3361) goto $l3363;
    $tmp3361 = ((panda$core$Bit) { index3358.nonnull }).value;
    $l3363:;
    panda$core$Bit $tmp3364 = { $tmp3361 };
    if ($tmp3364.value) {
    {
        PANDA_ASSERT(self->reportErrors.value);
        self->reportErrors = ((panda$core$Bit) { false });
        org$pandalanguage$pandac$Type* $tmp3366 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, p_rawType);
        type3365 = $tmp3366;
        self->reportErrors = ((panda$core$Bit) { true });
        if (((panda$core$Bit) { type3365 == NULL }).value) {
        {
            org$pandalanguage$pandac$Type* $tmp3368 = (org$pandalanguage$pandac$Type*) malloc(96);
            $tmp3368->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp3368->refCount.value = 1;
            panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp3370, ((panda$core$String$Index$nullable) { .nonnull = false }), index3358, ((panda$core$Bit) { false }));
            panda$core$String* $tmp3371 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) p_rawType)->name, $tmp3370);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position($tmp3368, $tmp3371, ((panda$core$Int64) { 10 }), p_position);
            org$pandalanguage$pandac$IRNode* $tmp3372 = org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, p_expr, $tmp3368);
            base3367 = $tmp3372;
            if (((panda$core$Bit) { base3367 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$String$Index $tmp3374 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(((org$pandalanguage$pandac$Symbol*) p_rawType)->name, ((panda$core$String$Index) index3358.value));
            panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp3373, ((panda$core$String$Index$nullable) { $tmp3374, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$core$String* $tmp3375 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) p_rawType)->name, $tmp3373);
            org$pandalanguage$pandac$IRNode* $tmp3376 = org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$String$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, base3367, $tmp3375);
            return $tmp3376;
        }
        }
    }
    }
    org$pandalanguage$pandac$Type* $tmp3378 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, p_rawType);
    type3377 = $tmp3378;
    if (((panda$core$Bit) { type3377 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Int64$nullable $tmp3379 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, value3356, type3377);
    if (((panda$core$Bit) { $tmp3379.nonnull }).value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3380 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, value3356, type3377);
        return $tmp3380;
    }
    }
    panda$core$Bit $tmp3381 = org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, value3356, type3377);
    if ($tmp3381.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3382 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, value3356, p_position, ((panda$core$Bit) { true }), type3377);
        return $tmp3382;
    }
    }
    else {
    {
        panda$core$String* $tmp3384 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3383, ((panda$core$Object*) value3356->type));
        panda$core$String* $tmp3386 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3384, &$s3385);
        panda$core$String* $tmp3388 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3387, ((panda$core$Object*) type3377));
        panda$core$String* $tmp3390 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3388, &$s3389);
        panda$core$String* $tmp3391 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3386, $tmp3390);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp3391);
        return NULL;
    }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_c) {
    panda$core$Bit $tmp3392 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_c->kind, ((panda$core$Int64) { 111 }));
    PANDA_ASSERT($tmp3392.value);
    panda$core$Int64 $tmp3393 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_c->children);
    panda$core$Bit $tmp3394 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3393, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp3394.value);
    panda$core$Object* $tmp3395 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_c->children, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp3396 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_c->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Type* $tmp3397 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, ((org$pandalanguage$pandac$ASTNode*) $tmp3396));
    org$pandalanguage$pandac$IRNode* $tmp3398 = org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_c->position, ((org$pandalanguage$pandac$ASTNode*) $tmp3395), $tmp3397);
    return $tmp3398;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileNull$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_n) {
    panda$core$Bit $tmp3399 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_n->kind, ((panda$core$Int64) { 117 }));
    PANDA_ASSERT($tmp3399.value);
    org$pandalanguage$pandac$IRNode* $tmp3400 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3400->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3400->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3402 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3400, ((panda$core$Int64) { 1030 }), p_n->position, $tmp3402);
    return $tmp3400;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_e) {
    org$pandalanguage$pandac$IRNode* result3407;
    switch (p_e->kind.value) {
        case 103:
        {
            org$pandalanguage$pandac$IRNode* $tmp3403 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3403;
        }
        break;
        case 116:
        {
            org$pandalanguage$pandac$IRNode* $tmp3404 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3404->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3404->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3406 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp3404, ((panda$core$Int64) { 1011 }), p_e->position, $tmp3406, ((panda$core$Bit$wrapper*) p_e->payload)->value);
            return $tmp3404;
        }
        break;
        case 107:
        {
            org$pandalanguage$pandac$IRNode* $tmp3408 = org$pandalanguage$pandac$Compiler$compileCall$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            result3407 = $tmp3408;
            bool $tmp3409 = ((panda$core$Bit) { result3407 != NULL }).value;
            if (!$tmp3409) goto $l3410;
            org$pandalanguage$pandac$Type* $tmp3411 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp3412 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(result3407->type, $tmp3411);
            $tmp3409 = $tmp3412.value;
            $l3410:;
            panda$core$Bit $tmp3413 = { $tmp3409 };
            if ($tmp3413.value) {
            {
                panda$core$Bit $tmp3414 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result3407->kind, ((panda$core$Int64) { 1005 }));
                PANDA_ASSERT($tmp3414.value);
                panda$core$String* $tmp3415 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(((org$pandalanguage$pandac$MethodRef*) result3407->payload)->value);
                panda$core$String* $tmp3417 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3415, &$s3416);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, result3407->position, $tmp3417);
                return NULL;
            }
            }
            return result3407;
        }
        break;
        case 108:
        {
            org$pandalanguage$pandac$IRNode* $tmp3418 = org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3418;
        }
        break;
        case 106:
        {
            org$pandalanguage$pandac$IRNode* $tmp3419 = org$pandalanguage$pandac$Compiler$compileIdentifier$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3419;
        }
        break;
        case 102:
        {
            org$pandalanguage$pandac$IRNode* $tmp3420 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3420->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3420->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3422 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(((panda$core$UInt64$wrapper*) p_e->payload)->value);
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp3420, ((panda$core$Int64) { 1004 }), p_e->position, $tmp3422, ((panda$core$UInt64$wrapper*) p_e->payload)->value);
            return $tmp3420;
        }
        break;
        case 157:
        {
            org$pandalanguage$pandac$IRNode* $tmp3423 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3423->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3423->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3425 = org$pandalanguage$pandac$Type$RealLiteral$panda$core$Real64$R$org$pandalanguage$pandac$Type(((panda$core$Real64$wrapper*) p_e->payload)->value);
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Real64($tmp3423, ((panda$core$Int64) { 1045 }), p_e->position, $tmp3425, ((panda$core$Real64$wrapper*) p_e->payload)->value);
            return $tmp3423;
        }
        break;
        case 112:
        {
            org$pandalanguage$pandac$IRNode* $tmp3426 = org$pandalanguage$pandac$Compiler$compilePrefix$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3426;
        }
        break;
        case 104:
        case 105:
        {
            org$pandalanguage$pandac$IRNode* $tmp3427 = org$pandalanguage$pandac$Compiler$compileRange$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3427;
        }
        break;
        case 113:
        {
            org$pandalanguage$pandac$IRNode* $tmp3428 = org$pandalanguage$pandac$Compiler$compileString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3428;
        }
        break;
        case 109:
        case 154:
        case 110:
        {
            org$pandalanguage$pandac$IRNode* $tmp3429 = org$pandalanguage$pandac$Compiler$compileType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3429;
        }
        break;
        case 114:
        {
            org$pandalanguage$pandac$IRNode* $tmp3430 = org$pandalanguage$pandac$Compiler$compileSelf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3430;
        }
        break;
        case 115:
        {
            org$pandalanguage$pandac$IRNode* $tmp3431 = org$pandalanguage$pandac$Compiler$compileSuper$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3431;
        }
        break;
        case 111:
        {
            org$pandalanguage$pandac$IRNode* $tmp3432 = org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3432;
        }
        break;
        case 117:
        {
            org$pandalanguage$pandac$IRNode* $tmp3433 = org$pandalanguage$pandac$Compiler$compileNull$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode(self, p_e);
            return $tmp3433;
        }
        break;
    }
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBlock$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_b) {
    org$pandalanguage$pandac$SymbolTable* symbols3435;
    panda$collections$Array* result3438;
    panda$collections$Iterator* stmt$Iter3441;
    org$pandalanguage$pandac$ASTNode* stmt3453;
    org$pandalanguage$pandac$IRNode* compiled3458;
    panda$core$Bit $tmp3434 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_b->kind, ((panda$core$Int64) { 126 }));
    PANDA_ASSERT($tmp3434.value);
    org$pandalanguage$pandac$SymbolTable* $tmp3436 = (org$pandalanguage$pandac$SymbolTable*) malloc(48);
    $tmp3436->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp3436->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp3436, self->symbolTable);
    symbols3435 = $tmp3436;
    self->symbolTable = symbols3435;
    panda$collections$Array* $tmp3439 = (panda$collections$Array*) malloc(40);
    $tmp3439->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3439->refCount.value = 1;
    panda$collections$Array$init($tmp3439);
    result3438 = $tmp3439;
    if (((panda$core$Bit) { p_b->children != NULL }).value) {
    {
        {
            ITable* $tmp3442 = ((panda$collections$Iterable*) p_b->children)->$class->itable;
            while ($tmp3442->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3442 = $tmp3442->next;
            }
            $fn3444 $tmp3443 = $tmp3442->methods[0];
            panda$collections$Iterator* $tmp3445 = $tmp3443(((panda$collections$Iterable*) p_b->children));
            stmt$Iter3441 = $tmp3445;
            $l3446:;
            ITable* $tmp3448 = stmt$Iter3441->$class->itable;
            while ($tmp3448->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3448 = $tmp3448->next;
            }
            $fn3450 $tmp3449 = $tmp3448->methods[0];
            panda$core$Bit $tmp3451 = $tmp3449(stmt$Iter3441);
            panda$core$Bit $tmp3452 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3451);
            if (!$tmp3452.value) goto $l3447;
            {
                ITable* $tmp3454 = stmt$Iter3441->$class->itable;
                while ($tmp3454->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3454 = $tmp3454->next;
                }
                $fn3456 $tmp3455 = $tmp3454->methods[1];
                panda$core$Object* $tmp3457 = $tmp3455(stmt$Iter3441);
                stmt3453 = ((org$pandalanguage$pandac$ASTNode*) $tmp3457);
                org$pandalanguage$pandac$IRNode* $tmp3459 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, stmt3453);
                compiled3458 = $tmp3459;
                if (((panda$core$Bit) { compiled3458 == NULL }).value) {
                {
                    panda$core$Object* $tmp3460 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(symbols3435->parents, ((panda$core$Int64) { 0 }));
                    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp3460);
                    return NULL;
                }
                }
                panda$core$Bit $tmp3461 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(compiled3458->kind, ((panda$core$Int64) { 1039 }));
                PANDA_ASSERT($tmp3461.value);
                panda$collections$Array$add$panda$collections$Array$T(result3438, ((panda$core$Object*) compiled3458));
            }
            goto $l3446;
            $l3447:;
        }
    }
    }
    panda$core$Object* $tmp3462 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(symbols3435->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp3462);
    org$pandalanguage$pandac$IRNode* $tmp3463 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3463->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3463->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3463, ((panda$core$Int64) { 1000 }), p_b->position, ((panda$collections$ListView*) result3438));
    return $tmp3463;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_i) {
    org$pandalanguage$pandac$IRNode* test3473;
    org$pandalanguage$pandac$IRNode* ifTrue3478;
    panda$collections$Array* children3481;
    org$pandalanguage$pandac$IRNode* ifFalse3486;
    panda$core$Bit $tmp3465 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_i->kind, ((panda$core$Int64) { 118 }));
    PANDA_ASSERT($tmp3465.value);
    panda$core$Int64 $tmp3467 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_i->children);
    panda$core$Bit $tmp3468 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3467, ((panda$core$Int64) { 2 }));
    bool $tmp3466 = $tmp3468.value;
    if ($tmp3466) goto $l3469;
    panda$core$Int64 $tmp3470 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_i->children);
    panda$core$Bit $tmp3471 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3470, ((panda$core$Int64) { 3 }));
    $tmp3466 = $tmp3471.value;
    $l3469:;
    panda$core$Bit $tmp3472 = { $tmp3466 };
    PANDA_ASSERT($tmp3472.value);
    panda$core$Object* $tmp3474 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_i->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3475 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3474));
    org$pandalanguage$pandac$Type* $tmp3476 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp3477 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3475, $tmp3476);
    test3473 = $tmp3477;
    if (((panda$core$Bit) { test3473 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Object* $tmp3479 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_i->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp3480 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3479));
    ifTrue3478 = $tmp3480;
    if (((panda$core$Bit) { ifTrue3478 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3482 = (panda$collections$Array*) malloc(40);
    $tmp3482->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3482->refCount.value = 1;
    panda$collections$Array$init($tmp3482);
    children3481 = $tmp3482;
    panda$collections$Array$add$panda$collections$Array$T(children3481, ((panda$core$Object*) test3473));
    panda$collections$Array$add$panda$collections$Array$T(children3481, ((panda$core$Object*) ifTrue3478));
    panda$core$Int64 $tmp3484 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_i->children);
    panda$core$Bit $tmp3485 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3484, ((panda$core$Int64) { 3 }));
    if ($tmp3485.value) {
    {
        panda$core$Object* $tmp3487 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_i->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$IRNode* $tmp3488 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3487));
        ifFalse3486 = $tmp3488;
        if (((panda$core$Bit) { ifFalse3486 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children3481, ((panda$core$Object*) ifFalse3486));
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3489 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3489->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3489->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3489, ((panda$core$Int64) { 1012 }), p_i->position, ((panda$collections$ListView*) children3481));
    return $tmp3489;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileRangeFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, panda$core$String* p_label, org$pandalanguage$pandac$ASTNode* p_astTarget, org$pandalanguage$pandac$IRNode* p_rawList, org$pandalanguage$pandac$ASTNode* p_body) {
    org$pandalanguage$pandac$Type* elementType3491;
    org$pandalanguage$pandac$IRNode* list3492;
    org$pandalanguage$pandac$Type* t3504;
    org$pandalanguage$pandac$Compiler$CompileTargetResult* target3534;
    org$pandalanguage$pandac$IRNode* body3536;
    panda$collections$Array* children3538;
    panda$core$Bit $tmp3495 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_astTarget->kind, ((panda$core$Int64) { 106 }));
    bool $tmp3494 = $tmp3495.value;
    if (!$tmp3494) goto $l3496;
    $tmp3494 = ((panda$core$Bit) { p_astTarget->children != NULL }).value;
    $l3496:;
    panda$core$Bit $tmp3497 = { $tmp3494 };
    bool $tmp3493 = $tmp3497.value;
    if (!$tmp3493) goto $l3498;
    panda$core$Int64 $tmp3499 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_astTarget->children);
    panda$core$Bit $tmp3500 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3499, ((panda$core$Int64) { 0 }));
    $tmp3493 = $tmp3500.value;
    $l3498:;
    panda$core$Bit $tmp3501 = { $tmp3493 };
    if ($tmp3501.value) {
    {
        panda$core$Int64 $tmp3502 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_astTarget->children);
        panda$core$Bit $tmp3503 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3502, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp3503.value);
        panda$core$Object* $tmp3505 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_astTarget->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Type* $tmp3506 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, ((org$pandalanguage$pandac$ASTNode*) $tmp3505));
        org$pandalanguage$pandac$Type* $tmp3507 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, $tmp3506);
        t3504 = $tmp3507;
        panda$core$Bit $tmp3508 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_rawList->kind, ((panda$core$Int64) { 1031 }));
        if ($tmp3508.value) {
        {
            panda$core$Int64 $tmp3509 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_rawList->children);
            panda$core$Bit $tmp3510 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3509, ((panda$core$Int64) { 2 }));
            if ($tmp3510.value) {
            {
                org$pandalanguage$pandac$Type* $tmp3511 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3504);
                org$pandalanguage$pandac$IRNode* $tmp3512 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, $tmp3511);
                list3492 = $tmp3512;
            }
            }
            else {
            {
                panda$core$Int64 $tmp3513 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_rawList->children);
                panda$core$Bit $tmp3514 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3513, ((panda$core$Int64) { 3 }));
                PANDA_ASSERT($tmp3514.value);
                org$pandalanguage$pandac$Type* $tmp3515 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3504);
                org$pandalanguage$pandac$IRNode* $tmp3516 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, $tmp3515);
                list3492 = $tmp3516;
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp3517 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(p_rawList->type);
        if ($tmp3517.value) {
        {
            org$pandalanguage$pandac$Type* $tmp3518 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3504);
            org$pandalanguage$pandac$IRNode* $tmp3519 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, $tmp3518);
            list3492 = $tmp3519;
        }
        }
        else {
        org$pandalanguage$pandac$Type* $tmp3520 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3504);
        panda$core$Int64$nullable $tmp3521 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_rawList, $tmp3520);
        if (((panda$core$Bit) { $tmp3521.nonnull }).value) {
        {
            org$pandalanguage$pandac$Type* $tmp3522 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3504);
            org$pandalanguage$pandac$IRNode* $tmp3523 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, $tmp3522);
            list3492 = $tmp3523;
        }
        }
        else {
        {
            org$pandalanguage$pandac$Type* $tmp3524 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3504);
            org$pandalanguage$pandac$IRNode* $tmp3525 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, $tmp3524);
            list3492 = $tmp3525;
        }
        }
        }
        }
    }
    }
    else {
    {
        org$pandalanguage$pandac$IRNode* $tmp3526 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList);
        list3492 = $tmp3526;
    }
    }
    if (((panda$core$Bit) { list3492 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp3527 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(list3492->type->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp3527.value) {
    {
        panda$core$Object* $tmp3528 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(list3492->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp3529 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3528)->typeKind, ((panda$core$Int64) { 21 }));
        PANDA_ASSERT($tmp3529.value);
        panda$core$Object* $tmp3530 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(list3492->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3531 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$Type*) $tmp3530)->subtypes, ((panda$core$Int64) { 1 }));
        elementType3491 = ((org$pandalanguage$pandac$Type*) $tmp3531);
    }
    }
    else {
    {
        panda$core$Bit $tmp3532 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(list3492->type->typeKind, ((panda$core$Int64) { 21 }));
        PANDA_ASSERT($tmp3532.value);
        panda$core$Object* $tmp3533 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(list3492->type->subtypes, ((panda$core$Int64) { 1 }));
        elementType3491 = ((org$pandalanguage$pandac$Type*) $tmp3533);
    }
    }
    org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp3535 = org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(self, p_astTarget, ((panda$core$Int64) { 10001 }), NULL, elementType3491);
    target3534 = $tmp3535;
    if (((panda$core$Bit) { target3534 == NULL }).value) {
    {
        return NULL;
    }
    }
    PANDA_ASSERT(((panda$core$Bit) { target3534->value == NULL }).value);
    org$pandalanguage$pandac$IRNode* $tmp3537 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_body);
    body3536 = $tmp3537;
    if (((panda$core$Bit) { body3536 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3539 = (panda$collections$Array*) malloc(40);
    $tmp3539->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3539->refCount.value = 1;
    panda$collections$Array$init($tmp3539);
    children3538 = $tmp3539;
    panda$collections$Array$add$panda$collections$Array$T(children3538, ((panda$core$Object*) target3534->target));
    panda$collections$Array$add$panda$collections$Array$T(children3538, ((panda$core$Object*) list3492));
    panda$collections$Array$add$panda$collections$Array$T(children3538, ((panda$core$Object*) body3536));
    org$pandalanguage$pandac$IRNode* $tmp3541 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3541->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3541->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3541, ((panda$core$Int64) { 1029 }), p_position, ((panda$core$Object*) p_label), ((panda$collections$ListView*) children3538));
    return $tmp3541;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIteratorFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, panda$core$String* p_label, org$pandalanguage$pandac$ASTNode* p_astTarget, org$pandalanguage$pandac$IRNode* p_iterator, org$pandalanguage$pandac$ASTNode* p_body) {
    org$pandalanguage$pandac$Compiler$CompileTargetResult* target3550;
    org$pandalanguage$pandac$Variable* targetVar3554;
    panda$collections$Array* subtypes3555;
    org$pandalanguage$pandac$Type* iterType3559;
    org$pandalanguage$pandac$Variable* iter3570;
    panda$collections$Array* statements3575;
    panda$collections$Array* declChildren3578;
    panda$collections$Array* varChildren3583;
    panda$collections$Array* whileChildren3590;
    org$pandalanguage$pandac$IRNode* done3593;
    org$pandalanguage$pandac$IRNode* notCall3600;
    panda$collections$Array* valueDeclChildren3605;
    org$pandalanguage$pandac$IRNode* next3610;
    panda$collections$Array* valueVarChildren3617;
    org$pandalanguage$pandac$IRNode* block3622;
    panda$collections$Array* blockChildren3624;
    panda$core$Bit $tmp3544 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_iterator->type->typeKind, ((panda$core$Int64) { 21 }));
    bool $tmp3543 = $tmp3544.value;
    if (!$tmp3543) goto $l3545;
    panda$core$Object* $tmp3546 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_iterator->type->subtypes, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp3547 = org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp3548 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3546), $tmp3547);
    $tmp3543 = $tmp3548.value;
    $l3545:;
    panda$core$Bit $tmp3549 = { $tmp3543 };
    PANDA_ASSERT($tmp3549.value);
    panda$core$Object* $tmp3551 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_iterator->type->subtypes, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp3552 = org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(self, p_astTarget, ((panda$core$Int64) { 10001 }), NULL, ((org$pandalanguage$pandac$Type*) $tmp3551));
    target3550 = $tmp3552;
    if (((panda$core$Bit) { target3550 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp3553 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(target3550->target->kind, ((panda$core$Int64) { 1016 }));
    PANDA_ASSERT($tmp3553.value);
    targetVar3554 = ((org$pandalanguage$pandac$Variable*) target3550->target->payload);
    panda$collections$Array* $tmp3556 = (panda$collections$Array*) malloc(40);
    $tmp3556->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3556->refCount.value = 1;
    panda$collections$Array$init($tmp3556);
    subtypes3555 = $tmp3556;
    org$pandalanguage$pandac$Type* $tmp3558 = org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type();
    panda$collections$Array$add$panda$collections$Array$T(subtypes3555, ((panda$core$Object*) $tmp3558));
    panda$collections$Array$add$panda$collections$Array$T(subtypes3555, ((panda$core$Object*) target3550->target->type));
    org$pandalanguage$pandac$Type* $tmp3560 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp3560->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp3560->refCount.value = 1;
    panda$core$Object* $tmp3562 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(subtypes3555, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3563 = org$pandalanguage$pandac$Type$convert$R$panda$core$String(((org$pandalanguage$pandac$Type*) $tmp3562));
    panda$core$String* $tmp3565 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3563, &$s3564);
    panda$core$Object* $tmp3566 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(subtypes3555, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp3567 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3565, ((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp3566)));
    panda$core$String* $tmp3569 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3567, &$s3568);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp3560, $tmp3569, ((panda$core$Int64) { 21 }), p_position, ((panda$collections$ListView*) subtypes3555), ((panda$core$Bit) { true }));
    iterType3559 = $tmp3560;
    org$pandalanguage$pandac$Variable* $tmp3571 = (org$pandalanguage$pandac$Variable*) malloc(88);
    $tmp3571->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
    $tmp3571->refCount.value = 1;
    panda$core$String* $tmp3574 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) targetVar3554)->name, &$s3573);
    org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type($tmp3571, p_iterator->position, ((panda$core$Int64) { 10001 }), $tmp3574, iterType3559);
    iter3570 = $tmp3571;
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->symbolTable, ((org$pandalanguage$pandac$Symbol*) iter3570));
    panda$collections$Array* $tmp3576 = (panda$collections$Array*) malloc(40);
    $tmp3576->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3576->refCount.value = 1;
    panda$collections$Array$init($tmp3576);
    statements3575 = $tmp3576;
    panda$collections$Array* $tmp3579 = (panda$collections$Array*) malloc(40);
    $tmp3579->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3579->refCount.value = 1;
    panda$collections$Array$init($tmp3579);
    declChildren3578 = $tmp3579;
    org$pandalanguage$pandac$IRNode* $tmp3581 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3581->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3581->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3581, ((panda$core$Int64) { 1016 }), p_iterator->position, iter3570->type, iter3570);
    panda$collections$Array$add$panda$collections$Array$T(declChildren3578, ((panda$core$Object*) $tmp3581));
    panda$collections$Array$add$panda$collections$Array$T(declChildren3578, ((panda$core$Object*) p_iterator));
    panda$collections$Array* $tmp3584 = (panda$collections$Array*) malloc(40);
    $tmp3584->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3584->refCount.value = 1;
    panda$collections$Array$init($tmp3584);
    varChildren3583 = $tmp3584;
    org$pandalanguage$pandac$IRNode* $tmp3586 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3586->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3586->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3586, ((panda$core$Int64) { 1021 }), ((org$pandalanguage$pandac$Symbol*) iter3570)->position, ((panda$collections$ListView*) declChildren3578));
    panda$collections$Array$add$panda$collections$Array$T(varChildren3583, ((panda$core$Object*) $tmp3586));
    org$pandalanguage$pandac$IRNode* $tmp3588 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3588->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3588->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3588, ((panda$core$Int64) { 1018 }), ((org$pandalanguage$pandac$Symbol*) iter3570)->position, ((panda$collections$ListView*) varChildren3583));
    panda$collections$Array$add$panda$collections$Array$T(statements3575, ((panda$core$Object*) $tmp3588));
    panda$collections$Array* $tmp3591 = (panda$collections$Array*) malloc(40);
    $tmp3591->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3591->refCount.value = 1;
    panda$collections$Array$init($tmp3591);
    whileChildren3590 = $tmp3591;
    org$pandalanguage$pandac$IRNode* $tmp3594 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3594->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3594->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3594, ((panda$core$Int64) { 1016 }), ((org$pandalanguage$pandac$Symbol*) iter3570)->position, iter3570->type, iter3570);
    panda$collections$Array* $tmp3597 = (panda$collections$Array*) malloc(40);
    $tmp3597->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3597->refCount.value = 1;
    panda$collections$Array$init($tmp3597);
    org$pandalanguage$pandac$IRNode* $tmp3599 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3594, &$s3596, ((panda$collections$ListView*) $tmp3597), NULL);
    done3593 = $tmp3599;
    if (((panda$core$Bit) { done3593 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3602 = (panda$collections$Array*) malloc(40);
    $tmp3602->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3602->refCount.value = 1;
    panda$collections$Array$init($tmp3602);
    org$pandalanguage$pandac$IRNode* $tmp3604 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, done3593, &$s3601, ((panda$collections$ListView*) $tmp3602), NULL);
    notCall3600 = $tmp3604;
    if (((panda$core$Bit) { notCall3600 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(whileChildren3590, ((panda$core$Object*) notCall3600));
    panda$collections$Array* $tmp3606 = (panda$collections$Array*) malloc(40);
    $tmp3606->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3606->refCount.value = 1;
    panda$collections$Array$init($tmp3606);
    valueDeclChildren3605 = $tmp3606;
    org$pandalanguage$pandac$IRNode* $tmp3608 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3608->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3608->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3608, ((panda$core$Int64) { 1016 }), p_iterator->position, targetVar3554->type, targetVar3554);
    panda$collections$Array$add$panda$collections$Array$T(valueDeclChildren3605, ((panda$core$Object*) $tmp3608));
    org$pandalanguage$pandac$IRNode* $tmp3611 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3611->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3611->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3611, ((panda$core$Int64) { 1016 }), p_iterator->position, iter3570->type, iter3570);
    panda$collections$Array* $tmp3614 = (panda$collections$Array*) malloc(40);
    $tmp3614->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3614->refCount.value = 1;
    panda$collections$Array$init($tmp3614);
    org$pandalanguage$pandac$IRNode* $tmp3616 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3611, &$s3613, ((panda$collections$ListView*) $tmp3614), NULL);
    next3610 = $tmp3616;
    PANDA_ASSERT(((panda$core$Bit) { next3610 != NULL }).value);
    panda$collections$Array$add$panda$collections$Array$T(valueDeclChildren3605, ((panda$core$Object*) next3610));
    panda$collections$Array* $tmp3618 = (panda$collections$Array*) malloc(40);
    $tmp3618->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3618->refCount.value = 1;
    panda$collections$Array$init($tmp3618);
    valueVarChildren3617 = $tmp3618;
    org$pandalanguage$pandac$IRNode* $tmp3620 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3620->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3620->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3620, ((panda$core$Int64) { 1021 }), p_iterator->position, ((panda$collections$ListView*) valueDeclChildren3605));
    panda$collections$Array$add$panda$collections$Array$T(valueVarChildren3617, ((panda$core$Object*) $tmp3620));
    org$pandalanguage$pandac$IRNode* $tmp3623 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_body);
    block3622 = $tmp3623;
    if (((panda$core$Bit) { block3622 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3625 = (panda$collections$Array*) malloc(40);
    $tmp3625->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3625->refCount.value = 1;
    panda$collections$Array$init($tmp3625);
    blockChildren3624 = $tmp3625;
    org$pandalanguage$pandac$IRNode* $tmp3627 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3627->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3627->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3627, ((panda$core$Int64) { 1018 }), p_iterator->position, ((panda$collections$ListView*) valueVarChildren3617));
    panda$collections$Array$add$panda$collections$Array$T(blockChildren3624, ((panda$core$Object*) $tmp3627));
    panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(blockChildren3624, ((panda$collections$CollectionView*) block3622->children));
    org$pandalanguage$pandac$IRNode* $tmp3629 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3629->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3629->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3629, ((panda$core$Int64) { 1000 }), block3622->position, ((panda$collections$ListView*) blockChildren3624));
    block3622 = $tmp3629;
    panda$collections$Array$add$panda$collections$Array$T(whileChildren3590, ((panda$core$Object*) block3622));
    org$pandalanguage$pandac$IRNode* $tmp3631 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3631->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3631->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3631, ((panda$core$Int64) { 1013 }), p_iterator->position, ((panda$core$Object*) p_label), ((panda$collections$ListView*) whileChildren3590));
    panda$collections$Array$add$panda$collections$Array$T(statements3575, ((panda$core$Object*) $tmp3631));
    org$pandalanguage$pandac$IRNode* $tmp3633 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3633->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3633->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3633, ((panda$core$Int64) { 1000 }), p_iterator->position, ((panda$collections$ListView*) statements3575));
    return $tmp3633;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileFor$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_f) {
    org$pandalanguage$pandac$IRNode* list3638;
    org$pandalanguage$pandac$SymbolTable* symbols3641;
    org$pandalanguage$pandac$IRNode* result3644;
    panda$core$Bit found3658;
    panda$collections$Iterator* intf$Iter3659;
    org$pandalanguage$pandac$Type* intf3672;
    org$pandalanguage$pandac$IRNode* iterator3684;
    org$pandalanguage$pandac$IRNode* iterable3696;
    org$pandalanguage$pandac$IRNode* iterator3698;
    panda$core$Bit $tmp3635 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_f->kind, ((panda$core$Int64) { 119 }));
    PANDA_ASSERT($tmp3635.value);
    panda$core$Int64 $tmp3636 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_f->children);
    panda$core$Bit $tmp3637 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3636, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp3637.value);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loops, ((panda$core$Object*) ((panda$core$String*) p_f->payload)));
    panda$core$Object* $tmp3639 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp3640 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3639));
    list3638 = $tmp3640;
    if (((panda$core$Bit) { list3638 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp3642 = (org$pandalanguage$pandac$SymbolTable*) malloc(48);
    $tmp3642->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp3642->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp3642, self->symbolTable);
    symbols3641 = $tmp3642;
    self->symbolTable = symbols3641;
    panda$core$Bit $tmp3647 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(list3638->kind, ((panda$core$Int64) { 1031 }));
    bool $tmp3646 = $tmp3647.value;
    if ($tmp3646) goto $l3648;
    panda$core$Bit $tmp3649 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(list3638->type);
    $tmp3646 = $tmp3649.value;
    $l3648:;
    panda$core$Bit $tmp3650 = { $tmp3646 };
    bool $tmp3645 = $tmp3650.value;
    if ($tmp3645) goto $l3651;
    panda$core$Bit $tmp3652 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(list3638->type);
    $tmp3645 = $tmp3652.value;
    $l3651:;
    panda$core$Bit $tmp3653 = { $tmp3645 };
    if ($tmp3653.value) {
    {
        panda$core$Object* $tmp3654 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3655 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$IRNode* $tmp3656 = org$pandalanguage$pandac$Compiler$compileRangeFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->position, ((panda$core$String*) p_f->payload), ((org$pandalanguage$pandac$ASTNode*) $tmp3654), list3638, ((org$pandalanguage$pandac$ASTNode*) $tmp3655));
        result3644 = $tmp3656;
    }
    }
    else {
    {
        org$pandalanguage$pandac$IRNode* $tmp3657 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, list3638);
        list3638 = $tmp3657;
        if (((panda$core$Bit) { list3638 == NULL }).value) {
        {
            return NULL;
        }
        }
        found3658 = ((panda$core$Bit) { false });
        {
            panda$collections$Set* $tmp3660 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self, list3638->type);
            ITable* $tmp3661 = ((panda$collections$Iterable*) $tmp3660)->$class->itable;
            while ($tmp3661->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3661 = $tmp3661->next;
            }
            $fn3663 $tmp3662 = $tmp3661->methods[0];
            panda$collections$Iterator* $tmp3664 = $tmp3662(((panda$collections$Iterable*) $tmp3660));
            intf$Iter3659 = $tmp3664;
            $l3665:;
            ITable* $tmp3667 = intf$Iter3659->$class->itable;
            while ($tmp3667->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3667 = $tmp3667->next;
            }
            $fn3669 $tmp3668 = $tmp3667->methods[0];
            panda$core$Bit $tmp3670 = $tmp3668(intf$Iter3659);
            panda$core$Bit $tmp3671 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3670);
            if (!$tmp3671.value) goto $l3666;
            {
                ITable* $tmp3673 = intf$Iter3659->$class->itable;
                while ($tmp3673->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3673 = $tmp3673->next;
                }
                $fn3675 $tmp3674 = $tmp3673->methods[1];
                panda$core$Object* $tmp3676 = $tmp3674(intf$Iter3659);
                intf3672 = ((org$pandalanguage$pandac$Type*) $tmp3676);
                panda$core$Bit $tmp3678 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(intf3672->typeKind, ((panda$core$Int64) { 21 }));
                bool $tmp3677 = $tmp3678.value;
                if (!$tmp3677) goto $l3679;
                panda$core$Object* $tmp3680 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(intf3672->subtypes, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp3681 = org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp3682 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3680), $tmp3681);
                $tmp3677 = $tmp3682.value;
                $l3679:;
                panda$core$Bit $tmp3683 = { $tmp3677 };
                if ($tmp3683.value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp3685 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, list3638, intf3672);
                    iterator3684 = $tmp3685;
                    panda$core$Object* $tmp3686 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
                    panda$core$Object* $tmp3687 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 2 }));
                    org$pandalanguage$pandac$IRNode* $tmp3688 = org$pandalanguage$pandac$Compiler$compileIteratorFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->position, ((panda$core$String*) p_f->payload), ((org$pandalanguage$pandac$ASTNode*) $tmp3686), iterator3684, ((org$pandalanguage$pandac$ASTNode*) $tmp3687));
                    result3644 = $tmp3688;
                    found3658 = ((panda$core$Bit) { true });
                    goto $l3666;
                }
                }
                panda$core$Bit $tmp3690 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(intf3672->typeKind, ((panda$core$Int64) { 21 }));
                bool $tmp3689 = $tmp3690.value;
                if (!$tmp3689) goto $l3691;
                panda$core$Object* $tmp3692 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(intf3672->subtypes, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp3693 = org$pandalanguage$pandac$Type$Iterable$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp3694 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3692), $tmp3693);
                $tmp3689 = $tmp3694.value;
                $l3691:;
                panda$core$Bit $tmp3695 = { $tmp3689 };
                if ($tmp3695.value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp3697 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, list3638, intf3672);
                    iterable3696 = $tmp3697;
                    panda$collections$Array* $tmp3700 = (panda$collections$Array*) malloc(40);
                    $tmp3700->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp3700->refCount.value = 1;
                    panda$collections$Array$init($tmp3700);
                    org$pandalanguage$pandac$IRNode* $tmp3702 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, iterable3696, &$s3699, ((panda$collections$ListView*) $tmp3700));
                    iterator3698 = $tmp3702;
                    panda$core$Object* $tmp3703 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
                    panda$core$Object* $tmp3704 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 2 }));
                    org$pandalanguage$pandac$IRNode* $tmp3705 = org$pandalanguage$pandac$Compiler$compileIteratorFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->position, ((panda$core$String*) p_f->payload), ((org$pandalanguage$pandac$ASTNode*) $tmp3703), iterator3698, ((org$pandalanguage$pandac$ASTNode*) $tmp3704));
                    result3644 = $tmp3705;
                    found3658 = ((panda$core$Bit) { true });
                    goto $l3666;
                }
                }
            }
            goto $l3665;
            $l3666:;
        }
        panda$core$Bit $tmp3706 = panda$core$Bit$$NOT$R$panda$core$Bit(found3658);
        if ($tmp3706.value) {
        {
            panda$core$String* $tmp3708 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3707, ((panda$core$Object*) list3638->type));
            panda$core$String* $tmp3710 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3708, &$s3709);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, list3638->position, $tmp3710);
            return NULL;
        }
        }
    }
    }
    panda$core$Object* $tmp3711 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(symbols3641->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp3711);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
    return result3644;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileWhile$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_w) {
    org$pandalanguage$pandac$IRNode* test3715;
    org$pandalanguage$pandac$IRNode* stmt3720;
    panda$collections$Array* children3723;
    panda$core$Bit $tmp3712 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_w->kind, ((panda$core$Int64) { 121 }));
    PANDA_ASSERT($tmp3712.value);
    panda$core$Int64 $tmp3713 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Bit $tmp3714 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3713, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp3714.value);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loops, ((panda$core$Object*) ((panda$core$String*) p_w->payload)));
    panda$core$Object* $tmp3716 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3717 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3716));
    org$pandalanguage$pandac$Type* $tmp3718 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp3719 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3717, $tmp3718);
    test3715 = $tmp3719;
    if (((panda$core$Bit) { test3715 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$core$Object* $tmp3721 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp3722 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3721));
    stmt3720 = $tmp3722;
    if (((panda$core$Bit) { stmt3720 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$collections$Array* $tmp3724 = (panda$collections$Array*) malloc(40);
    $tmp3724->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3724->refCount.value = 1;
    panda$collections$Array$init$panda$core$Int64($tmp3724, ((panda$core$Int64) { 2 }));
    children3723 = $tmp3724;
    panda$collections$Array$add$panda$collections$Array$T(children3723, ((panda$core$Object*) test3715));
    panda$collections$Array$add$panda$collections$Array$T(children3723, ((panda$core$Object*) stmt3720));
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
    org$pandalanguage$pandac$IRNode* $tmp3726 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3726->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3726->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3726, ((panda$core$Int64) { 1013 }), p_w->position, p_w->payload, ((panda$collections$ListView*) children3723));
    return $tmp3726;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileDo$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_d) {
    org$pandalanguage$pandac$IRNode* stmt3731;
    org$pandalanguage$pandac$IRNode* test3734;
    panda$collections$Array* children3739;
    panda$core$Bit $tmp3728 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_d->kind, ((panda$core$Int64) { 120 }));
    PANDA_ASSERT($tmp3728.value);
    panda$core$Int64 $tmp3729 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp3730 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3729, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp3730.value);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loops, ((panda$core$Object*) ((panda$core$String*) p_d->payload)));
    panda$core$Object* $tmp3732 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3733 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3732));
    stmt3731 = $tmp3733;
    if (((panda$core$Bit) { stmt3731 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$core$Object* $tmp3735 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp3736 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3735));
    org$pandalanguage$pandac$Type* $tmp3737 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp3738 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3736, $tmp3737);
    test3734 = $tmp3738;
    if (((panda$core$Bit) { test3734 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$collections$Array* $tmp3740 = (panda$collections$Array*) malloc(40);
    $tmp3740->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3740->refCount.value = 1;
    panda$collections$Array$init$panda$core$Int64($tmp3740, ((panda$core$Int64) { 2 }));
    children3739 = $tmp3740;
    panda$collections$Array$add$panda$collections$Array$T(children3739, ((panda$core$Object*) stmt3731));
    panda$collections$Array$add$panda$collections$Array$T(children3739, ((panda$core$Object*) test3734));
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
    org$pandalanguage$pandac$IRNode* $tmp3742 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3742->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3742->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3742, ((panda$core$Int64) { 1014 }), p_d->position, p_d->payload, ((panda$collections$ListView*) children3739));
    return $tmp3742;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileLoop$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_l) {
    org$pandalanguage$pandac$IRNode* stmt3747;
    panda$collections$Array* children3750;
    panda$core$Bit $tmp3744 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_l->kind, ((panda$core$Int64) { 122 }));
    PANDA_ASSERT($tmp3744.value);
    panda$core$Int64 $tmp3745 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_l->children);
    panda$core$Bit $tmp3746 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3745, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3746.value);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loops, ((panda$core$Object*) ((panda$core$String*) p_l->payload)));
    panda$core$Object* $tmp3748 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_l->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3749 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3748));
    stmt3747 = $tmp3749;
    if (((panda$core$Bit) { stmt3747 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$collections$Array* $tmp3751 = (panda$collections$Array*) malloc(40);
    $tmp3751->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3751->refCount.value = 1;
    panda$collections$Array$init$panda$core$Int64($tmp3751, ((panda$core$Int64) { 1 }));
    children3750 = $tmp3751;
    panda$collections$Array$add$panda$collections$Array$T(children3750, ((panda$core$Object*) stmt3747));
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
    org$pandalanguage$pandac$IRNode* $tmp3753 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3753->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3753->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3753, ((panda$core$Int64) { 1015 }), p_l->position, p_l->payload, ((panda$collections$ListView*) children3750));
    return $tmp3753;
}
org$pandalanguage$pandac$Compiler$CompileTargetResult* org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_t, panda$core$Int64 p_kind, org$pandalanguage$pandac$IRNode* p_rawValue, org$pandalanguage$pandac$Type* p_valueType) {
    org$pandalanguage$pandac$IRNode* value3755;
    org$pandalanguage$pandac$Type* type3759;
    org$pandalanguage$pandac$Variable* v3775;
    value3755 = p_rawValue;
    bool $tmp3756 = ((panda$core$Bit) { value3755 == NULL }).value;
    if ($tmp3756) goto $l3757;
    $tmp3756 = ((panda$core$Bit) { p_valueType == NULL }).value;
    $l3757:;
    panda$core$Bit $tmp3758 = { $tmp3756 };
    PANDA_ASSERT($tmp3758.value);
    switch (p_t->kind.value) {
        case 106:
        {
            bool $tmp3760 = ((panda$core$Bit) { p_t->children != NULL }).value;
            if (!$tmp3760) goto $l3761;
            panda$core$Int64 $tmp3762 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_t->children);
            panda$core$Bit $tmp3763 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp3762, ((panda$core$Int64) { 0 }));
            $tmp3760 = $tmp3763.value;
            $l3761:;
            panda$core$Bit $tmp3764 = { $tmp3760 };
            if ($tmp3764.value) {
            {
                panda$core$Int64 $tmp3765 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_t->children);
                panda$core$Bit $tmp3766 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3765, ((panda$core$Int64) { 1 }));
                PANDA_ASSERT($tmp3766.value);
                panda$core$Object* $tmp3767 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp3768 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, ((org$pandalanguage$pandac$ASTNode*) $tmp3767));
                org$pandalanguage$pandac$Type* $tmp3769 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, $tmp3768);
                type3759 = $tmp3769;
            }
            }
            else {
            if (((panda$core$Bit) { value3755 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp3770 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, value3755);
                value3755 = $tmp3770;
                if (((panda$core$Bit) { value3755 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$Type* $tmp3771 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, value3755);
                type3759 = $tmp3771;
            }
            }
            else {
            if (((panda$core$Bit) { p_valueType != NULL }).value) {
            {
                type3759 = p_valueType;
            }
            }
            else {
            {
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_t->position, &$s3772);
                return NULL;
            }
            }
            }
            }
            if (((panda$core$Bit) { value3755 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp3773 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, value3755, type3759);
                value3755 = $tmp3773;
                if (((panda$core$Bit) { value3755 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$core$Bit $tmp3774 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(value3755->type, type3759);
                PANDA_ASSERT($tmp3774.value);
            }
            }
            org$pandalanguage$pandac$Variable* $tmp3776 = (org$pandalanguage$pandac$Variable*) malloc(88);
            $tmp3776->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
            $tmp3776->refCount.value = 1;
            org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type($tmp3776, p_t->position, p_kind, ((panda$core$String*) p_t->payload), type3759);
            v3775 = $tmp3776;
            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->symbolTable, ((org$pandalanguage$pandac$Symbol*) v3775));
            org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp3778 = (org$pandalanguage$pandac$Compiler$CompileTargetResult*) malloc(32);
            $tmp3778->$class = (panda$core$Class*) &org$pandalanguage$pandac$Compiler$CompileTargetResult$class;
            $tmp3778->refCount.value = 1;
            org$pandalanguage$pandac$IRNode* $tmp3780 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3780->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3780->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3780, ((panda$core$Int64) { 1016 }), ((org$pandalanguage$pandac$Symbol*) v3775)->position, v3775->type, v3775);
            org$pandalanguage$pandac$Compiler$CompileTargetResult$init$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q($tmp3778, $tmp3780, value3755);
            return $tmp3778;
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
    org$pandalanguage$pandac$IRNode* value3790;
    org$pandalanguage$pandac$Compiler$CompileTargetResult* target3795;
    panda$collections$Array* children3798;
    org$pandalanguage$pandac$Variable* v3802;
    panda$core$Bit $tmp3782 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_d->kind, ((panda$core$Int64) { 129 }));
    PANDA_ASSERT($tmp3782.value);
    panda$core$Int64 $tmp3784 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp3785 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3784, ((panda$core$Int64) { 1 }));
    bool $tmp3783 = $tmp3785.value;
    if ($tmp3783) goto $l3786;
    panda$core$Int64 $tmp3787 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp3788 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3787, ((panda$core$Int64) { 2 }));
    $tmp3783 = $tmp3788.value;
    $l3786:;
    panda$core$Bit $tmp3789 = { $tmp3783 };
    PANDA_ASSERT($tmp3789.value);
    panda$core$Int64 $tmp3791 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp3792 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3791, ((panda$core$Int64) { 2 }));
    if ($tmp3792.value) {
    {
        panda$core$Object* $tmp3793 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$IRNode* $tmp3794 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3793));
        value3790 = $tmp3794;
        if (((panda$core$Bit) { value3790 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    else {
    {
        value3790 = NULL;
    }
    }
    panda$core$Object* $tmp3796 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp3797 = org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3796), p_varKind, value3790, NULL);
    target3795 = $tmp3797;
    if (((panda$core$Bit) { target3795 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3799 = (panda$collections$Array*) malloc(40);
    $tmp3799->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3799->refCount.value = 1;
    panda$collections$Array$init($tmp3799);
    children3798 = $tmp3799;
    panda$collections$Array$add$panda$collections$Array$T(children3798, ((panda$core$Object*) target3795->target));
    if (((panda$core$Bit) { target3795->value != NULL }).value) {
    {
        panda$core$Bit $tmp3801 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(target3795->target->kind, ((panda$core$Int64) { 1016 }));
        PANDA_ASSERT($tmp3801.value);
        v3802 = ((org$pandalanguage$pandac$Variable*) target3795->target->payload);
        v3802->initialValue = target3795->value;
        panda$collections$Array$add$panda$collections$Array$T(children3798, ((panda$core$Object*) target3795->value));
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3803 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3803->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3803->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3803, ((panda$core$Int64) { 1021 }), p_d->position, ((panda$collections$ListView*) children3798));
    return $tmp3803;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBreak$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_b) {
    panda$core$Bit found3806;
    panda$collections$Iterator* label$Iter3807;
    panda$core$String* label3819;
    panda$core$Bit $tmp3805 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_b->kind, ((panda$core$Int64) { 134 }));
    PANDA_ASSERT($tmp3805.value);
    if (((panda$core$Bit) { p_b->payload != NULL }).value) {
    {
        found3806 = ((panda$core$Bit) { false });
        {
            ITable* $tmp3808 = ((panda$collections$Iterable*) self->loops)->$class->itable;
            while ($tmp3808->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3808 = $tmp3808->next;
            }
            $fn3810 $tmp3809 = $tmp3808->methods[0];
            panda$collections$Iterator* $tmp3811 = $tmp3809(((panda$collections$Iterable*) self->loops));
            label$Iter3807 = $tmp3811;
            $l3812:;
            ITable* $tmp3814 = label$Iter3807->$class->itable;
            while ($tmp3814->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3814 = $tmp3814->next;
            }
            $fn3816 $tmp3815 = $tmp3814->methods[0];
            panda$core$Bit $tmp3817 = $tmp3815(label$Iter3807);
            panda$core$Bit $tmp3818 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3817);
            if (!$tmp3818.value) goto $l3813;
            {
                ITable* $tmp3820 = label$Iter3807->$class->itable;
                while ($tmp3820->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3820 = $tmp3820->next;
                }
                $fn3822 $tmp3821 = $tmp3820->methods[1];
                panda$core$Object* $tmp3823 = $tmp3821(label$Iter3807);
                label3819 = ((panda$core$String*) $tmp3823);
                bool $tmp3824 = ((panda$core$Bit) { label3819 != NULL }).value;
                if (!$tmp3824) goto $l3825;
                panda$core$Bit $tmp3829;
                if (((panda$core$Bit) { label3819 != NULL }).value) goto $l3826; else goto $l3827;
                $l3826:;
                panda$core$Bit $tmp3830 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(label3819, ((panda$core$String*) p_b->payload));
                $tmp3829 = $tmp3830;
                goto $l3828;
                $l3827:;
                $tmp3829 = ((panda$core$Bit) { false });
                goto $l3828;
                $l3828:;
                $tmp3824 = $tmp3829.value;
                $l3825:;
                panda$core$Bit $tmp3831 = { $tmp3824 };
                if ($tmp3831.value) {
                {
                    found3806 = ((panda$core$Bit) { true });
                    goto $l3813;
                }
                }
            }
            goto $l3812;
            $l3813:;
        }
        panda$core$Bit $tmp3832 = panda$core$Bit$$NOT$R$panda$core$Bit(found3806);
        if ($tmp3832.value) {
        {
            panda$core$String* $tmp3834 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3833, p_b->payload);
            panda$core$String* $tmp3836 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3834, &$s3835);
            panda$core$String* $tmp3838 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3837, p_b->payload);
            panda$core$String* $tmp3840 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3838, &$s3839);
            panda$core$String* $tmp3841 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3836, $tmp3840);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_b->position, $tmp3841);
        }
        }
    }
    }
    else {
    panda$core$Int64 $tmp3842 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loops);
    panda$core$Bit $tmp3843 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3842, ((panda$core$Int64) { 0 }));
    if ($tmp3843.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_b->position, &$s3844);
    }
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3845 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3845->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3845->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp3845, ((panda$core$Int64) { 1006 }), p_b->position, ((panda$core$String*) p_b->payload));
    return $tmp3845;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileContinue$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_c) {
    panda$core$Bit found3848;
    panda$collections$Iterator* label$Iter3849;
    panda$core$String* label3861;
    panda$core$Bit $tmp3847 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_c->kind, ((panda$core$Int64) { 135 }));
    PANDA_ASSERT($tmp3847.value);
    if (((panda$core$Bit) { p_c->payload != NULL }).value) {
    {
        found3848 = ((panda$core$Bit) { false });
        {
            ITable* $tmp3850 = ((panda$collections$Iterable*) self->loops)->$class->itable;
            while ($tmp3850->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3850 = $tmp3850->next;
            }
            $fn3852 $tmp3851 = $tmp3850->methods[0];
            panda$collections$Iterator* $tmp3853 = $tmp3851(((panda$collections$Iterable*) self->loops));
            label$Iter3849 = $tmp3853;
            $l3854:;
            ITable* $tmp3856 = label$Iter3849->$class->itable;
            while ($tmp3856->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3856 = $tmp3856->next;
            }
            $fn3858 $tmp3857 = $tmp3856->methods[0];
            panda$core$Bit $tmp3859 = $tmp3857(label$Iter3849);
            panda$core$Bit $tmp3860 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3859);
            if (!$tmp3860.value) goto $l3855;
            {
                ITable* $tmp3862 = label$Iter3849->$class->itable;
                while ($tmp3862->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3862 = $tmp3862->next;
                }
                $fn3864 $tmp3863 = $tmp3862->methods[1];
                panda$core$Object* $tmp3865 = $tmp3863(label$Iter3849);
                label3861 = ((panda$core$String*) $tmp3865);
                bool $tmp3866 = ((panda$core$Bit) { label3861 != NULL }).value;
                if (!$tmp3866) goto $l3867;
                panda$core$Bit $tmp3871;
                if (((panda$core$Bit) { label3861 != NULL }).value) goto $l3868; else goto $l3869;
                $l3868:;
                panda$core$Bit $tmp3872 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(label3861, ((panda$core$String*) p_c->payload));
                $tmp3871 = $tmp3872;
                goto $l3870;
                $l3869:;
                $tmp3871 = ((panda$core$Bit) { false });
                goto $l3870;
                $l3870:;
                $tmp3866 = $tmp3871.value;
                $l3867:;
                panda$core$Bit $tmp3873 = { $tmp3866 };
                if ($tmp3873.value) {
                {
                    found3848 = ((panda$core$Bit) { true });
                    goto $l3855;
                }
                }
            }
            goto $l3854;
            $l3855:;
        }
        panda$core$Bit $tmp3874 = panda$core$Bit$$NOT$R$panda$core$Bit(found3848);
        if ($tmp3874.value) {
        {
            panda$core$String* $tmp3876 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3875, p_c->payload);
            panda$core$String* $tmp3878 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3876, &$s3877);
            panda$core$String* $tmp3880 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3879, p_c->payload);
            panda$core$String* $tmp3882 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3880, &$s3881);
            panda$core$String* $tmp3883 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3878, $tmp3882);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_c->position, $tmp3883);
        }
        }
    }
    }
    else {
    panda$core$Int64 $tmp3884 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loops);
    panda$core$Bit $tmp3885 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3884, ((panda$core$Int64) { 0 }));
    if ($tmp3885.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_c->position, &$s3886);
    }
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3887 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3887->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3887->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp3887, ((panda$core$Int64) { 1007 }), p_c->position, ((panda$core$String*) p_c->payload));
    return $tmp3887;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileReturn$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_r) {
    org$pandalanguage$pandac$IRNode* value3901;
    panda$collections$Array* children3906;
    panda$core$Bit $tmp3889 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_r->kind, ((panda$core$Int64) { 136 }));
    PANDA_ASSERT($tmp3889.value);
    bool $tmp3890 = ((panda$core$Bit) { p_r->children != NULL }).value;
    if (!$tmp3890) goto $l3891;
    panda$core$Int64 $tmp3892 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_r->children);
    panda$core$Bit $tmp3893 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3892, ((panda$core$Int64) { 0 }));
    $tmp3890 = $tmp3893.value;
    $l3891:;
    panda$core$Bit $tmp3894 = { $tmp3890 };
    if ($tmp3894.value) {
    {
        panda$core$Int64 $tmp3895 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_r->children);
        panda$core$Bit $tmp3896 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3895, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp3896.value);
        panda$core$Object* $tmp3897 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
        org$pandalanguage$pandac$Type* $tmp3898 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp3899 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp3897)->returnType, $tmp3898);
        if ($tmp3899.value) {
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_r->position, &$s3900);
            return NULL;
        }
        }
        panda$core$Object* $tmp3902 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp3903 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3902));
        panda$core$Object* $tmp3904 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
        org$pandalanguage$pandac$IRNode* $tmp3905 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3903, ((org$pandalanguage$pandac$MethodDecl*) $tmp3904)->returnType);
        value3901 = $tmp3905;
        if (((panda$core$Bit) { value3901 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp3907 = (panda$collections$Array*) malloc(40);
        $tmp3907->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp3907->refCount.value = 1;
        panda$collections$Array$init($tmp3907);
        children3906 = $tmp3907;
        panda$collections$Array$add$panda$collections$Array$T(children3906, ((panda$core$Object*) value3901));
        org$pandalanguage$pandac$IRNode* $tmp3909 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3909->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3909->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3909, ((panda$core$Int64) { 1008 }), p_r->position, ((panda$collections$ListView*) children3906));
        return $tmp3909;
    }
    }
    panda$core$Object* $tmp3911 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
    org$pandalanguage$pandac$Type* $tmp3912 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp3913 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp3911)->returnType, $tmp3912);
    if ($tmp3913.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_r->position, &$s3914);
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3915 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3915->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3915->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp3915, ((panda$core$Int64) { 1008 }), p_r->position);
    return $tmp3915;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileAssert$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_a) {
    org$pandalanguage$pandac$IRNode* test3925;
    org$pandalanguage$pandac$ClassDecl* bit3930;
    org$pandalanguage$pandac$Symbol* value3933;
    panda$collections$Array* fieldChildren3936;
    panda$collections$Array* children3942;
    org$pandalanguage$pandac$IRNode* msg3947;
    panda$core$Bit $tmp3917 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_a->kind, ((panda$core$Int64) { 123 }));
    PANDA_ASSERT($tmp3917.value);
    panda$core$Int64 $tmp3919 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp3920 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3919, ((panda$core$Int64) { 1 }));
    bool $tmp3918 = $tmp3920.value;
    if ($tmp3918) goto $l3921;
    panda$core$Int64 $tmp3922 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp3923 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3922, ((panda$core$Int64) { 2 }));
    $tmp3918 = $tmp3923.value;
    $l3921:;
    panda$core$Bit $tmp3924 = { $tmp3918 };
    PANDA_ASSERT($tmp3924.value);
    panda$core$Object* $tmp3926 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_a->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3927 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3926));
    test3925 = $tmp3927;
    if (((panda$core$Bit) { test3925 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$Type* $tmp3928 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp3929 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, test3925, $tmp3928);
    test3925 = $tmp3929;
    if (((panda$core$Bit) { test3925 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$Type* $tmp3931 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$ClassDecl* $tmp3932 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, $tmp3931);
    bit3930 = $tmp3932;
    PANDA_ASSERT(((panda$core$Bit) { bit3930 != NULL }).value);
    org$pandalanguage$pandac$Symbol* $tmp3935 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(bit3930->symbolTable, &$s3934);
    value3933 = $tmp3935;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self, ((org$pandalanguage$pandac$FieldDecl*) value3933));
    panda$collections$Array* $tmp3937 = (panda$collections$Array*) malloc(40);
    $tmp3937->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3937->refCount.value = 1;
    panda$collections$Array$init($tmp3937);
    fieldChildren3936 = $tmp3937;
    panda$collections$Array$add$panda$collections$Array$T(fieldChildren3936, ((panda$core$Object*) test3925));
    org$pandalanguage$pandac$IRNode* $tmp3939 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3939->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3939->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3941 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3939, ((panda$core$Int64) { 1026 }), p_a->position, $tmp3941, ((panda$core$Object*) value3933), ((panda$collections$ListView*) fieldChildren3936));
    test3925 = $tmp3939;
    panda$collections$Array* $tmp3943 = (panda$collections$Array*) malloc(40);
    $tmp3943->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3943->refCount.value = 1;
    panda$collections$Array$init($tmp3943);
    children3942 = $tmp3943;
    panda$collections$Array$add$panda$collections$Array$T(children3942, ((panda$core$Object*) test3925));
    panda$core$Int64 $tmp3945 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp3946 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3945, ((panda$core$Int64) { 2 }));
    if ($tmp3946.value) {
    {
        panda$core$Object* $tmp3948 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_a->children, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$IRNode* $tmp3949 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3948));
        msg3947 = $tmp3949;
        if (((panda$core$Bit) { msg3947 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$Type* $tmp3950 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp3951 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, msg3947, $tmp3950);
        msg3947 = $tmp3951;
        if (((panda$core$Bit) { msg3947 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children3942, ((panda$core$Object*) msg3947));
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3952 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3952->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3952->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3952, ((panda$core$Int64) { 1034 }), p_a->position, ((panda$collections$ListView*) children3942));
    return $tmp3952;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileVar$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_v) {
    panda$core$Int64 nodeKind3967;
    panda$core$Int64 varKind3968;
    panda$collections$Array* decls3969;
    panda$collections$Iterator* astDecl$Iter3972;
    org$pandalanguage$pandac$ASTNode* astDecl3984;
    org$pandalanguage$pandac$IRNode* decl3989;
    panda$core$Bit $tmp3957 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 130 }));
    bool $tmp3956 = $tmp3957.value;
    if ($tmp3956) goto $l3958;
    panda$core$Bit $tmp3959 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 131 }));
    $tmp3956 = $tmp3959.value;
    $l3958:;
    panda$core$Bit $tmp3960 = { $tmp3956 };
    bool $tmp3955 = $tmp3960.value;
    if ($tmp3955) goto $l3961;
    panda$core$Bit $tmp3962 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 133 }));
    $tmp3955 = $tmp3962.value;
    $l3961:;
    panda$core$Bit $tmp3963 = { $tmp3955 };
    bool $tmp3954 = $tmp3963.value;
    if ($tmp3954) goto $l3964;
    panda$core$Bit $tmp3965 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 132 }));
    $tmp3954 = $tmp3965.value;
    $l3964:;
    panda$core$Bit $tmp3966 = { $tmp3954 };
    PANDA_ASSERT($tmp3966.value);
    switch (p_v->kind.value) {
        case 130:
        {
            nodeKind3967 = ((panda$core$Int64) { 1017 });
            varKind3968 = ((panda$core$Int64) { 10000 });
        }
        break;
        case 131:
        {
            nodeKind3967 = ((panda$core$Int64) { 1018 });
            varKind3968 = ((panda$core$Int64) { 10001 });
        }
        break;
        case 132:
        {
            nodeKind3967 = ((panda$core$Int64) { 1019 });
            varKind3968 = ((panda$core$Int64) { 10002 });
        }
        break;
        case 133:
        {
            nodeKind3967 = ((panda$core$Int64) { 1020 });
            varKind3968 = ((panda$core$Int64) { 10003 });
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
    panda$collections$Array* $tmp3970 = (panda$collections$Array*) malloc(40);
    $tmp3970->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3970->refCount.value = 1;
    panda$collections$Array$init($tmp3970);
    decls3969 = $tmp3970;
    {
        ITable* $tmp3973 = ((panda$collections$Iterable*) p_v->children)->$class->itable;
        while ($tmp3973->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3973 = $tmp3973->next;
        }
        $fn3975 $tmp3974 = $tmp3973->methods[0];
        panda$collections$Iterator* $tmp3976 = $tmp3974(((panda$collections$Iterable*) p_v->children));
        astDecl$Iter3972 = $tmp3976;
        $l3977:;
        ITable* $tmp3979 = astDecl$Iter3972->$class->itable;
        while ($tmp3979->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3979 = $tmp3979->next;
        }
        $fn3981 $tmp3980 = $tmp3979->methods[0];
        panda$core$Bit $tmp3982 = $tmp3980(astDecl$Iter3972);
        panda$core$Bit $tmp3983 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3982);
        if (!$tmp3983.value) goto $l3978;
        {
            ITable* $tmp3985 = astDecl$Iter3972->$class->itable;
            while ($tmp3985->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3985 = $tmp3985->next;
            }
            $fn3987 $tmp3986 = $tmp3985->methods[1];
            panda$core$Object* $tmp3988 = $tmp3986(astDecl$Iter3972);
            astDecl3984 = ((org$pandalanguage$pandac$ASTNode*) $tmp3988);
            org$pandalanguage$pandac$IRNode* $tmp3990 = org$pandalanguage$pandac$Compiler$compileDeclaration$org$pandalanguage$pandac$ASTNode$panda$core$Int64$R$org$pandalanguage$pandac$IRNode$Q(self, astDecl3984, varKind3968);
            decl3989 = $tmp3990;
            if (((panda$core$Bit) { decl3989 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(decls3969, ((panda$core$Object*) decl3989));
        }
        goto $l3977;
        $l3978:;
    }
    org$pandalanguage$pandac$IRNode* $tmp3991 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3991->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3991->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3991, nodeKind3967, p_v->position, ((panda$collections$ListView*) decls3969));
    return $tmp3991;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileWhenTest$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Variable* p_value, org$pandalanguage$pandac$ASTNode* p_test) {
    org$pandalanguage$pandac$IRNode* target3993;
    panda$collections$Array* callChildren3996;
    org$pandalanguage$pandac$IRNode* testValue3999;
    org$pandalanguage$pandac$IRNode* $tmp3994 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3994->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3994->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3994, ((panda$core$Int64) { 1016 }), p_test->position, p_value->type, p_value);
    target3993 = $tmp3994;
    panda$collections$Array* $tmp3997 = (panda$collections$Array*) malloc(40);
    $tmp3997->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3997->refCount.value = 1;
    panda$collections$Array$init($tmp3997);
    callChildren3996 = $tmp3997;
    org$pandalanguage$pandac$IRNode* $tmp4000 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_test);
    testValue3999 = $tmp4000;
    if (((panda$core$Bit) { testValue3999 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(callChildren3996, ((panda$core$Object*) testValue3999));
    org$pandalanguage$pandac$IRNode* $tmp4002 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target3993, &$s4001, ((panda$collections$ListView*) callChildren3996));
    return $tmp4002;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileChainedIfWhen$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Variable* p_value, org$pandalanguage$pandac$ASTNode* p_w) {
    org$pandalanguage$pandac$IRNode* test4011;
    panda$core$Range$LTpanda$core$Int64$GT $tmp4015;
    org$pandalanguage$pandac$IRNode* nextTest4031;
    panda$collections$Array* callChildren4035;
    panda$collections$Array* statements4048;
    panda$core$Range$LTpanda$core$Int64$GT $tmp4051;
    org$pandalanguage$pandac$IRNode* statement4066;
    panda$collections$Array* children4076;
    panda$core$Bit $tmp4003 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_w->kind, ((panda$core$Int64) { 124 }));
    PANDA_ASSERT($tmp4003.value);
    panda$core$Int64 $tmp4004 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Bit $tmp4005 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp4004, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4005.value);
    panda$core$Object* $tmp4006 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp4007 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp4006)->kind, ((panda$core$Int64) { 128 }));
    PANDA_ASSERT($tmp4007.value);
    panda$core$Object* $tmp4008 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Int64 $tmp4009 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$ASTNode*) $tmp4008)->children);
    panda$core$Bit $tmp4010 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp4009, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4010.value);
    panda$core$Object* $tmp4012 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp4013 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$ASTNode*) $tmp4012)->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp4014 = org$pandalanguage$pandac$Compiler$compileWhenTest$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_value, ((org$pandalanguage$pandac$ASTNode*) $tmp4013));
    test4011 = $tmp4014;
    if (((panda$core$Bit) { test4011 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Object* $tmp4016 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Int64 $tmp4017 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$ASTNode*) $tmp4016)->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp4015, ((panda$core$Int64) { 1 }), $tmp4017, ((panda$core$Bit) { false }));
    int64_t $tmp4019 = $tmp4015.min.value;
    panda$core$Int64 i4018 = { $tmp4019 };
    int64_t $tmp4021 = $tmp4015.max.value;
    bool $tmp4022 = $tmp4015.inclusive.value;
    if ($tmp4022) goto $l4029; else goto $l4030;
    $l4029:;
    if ($tmp4019 <= $tmp4021) goto $l4023; else goto $l4025;
    $l4030:;
    if ($tmp4019 < $tmp4021) goto $l4023; else goto $l4025;
    $l4023:;
    {
        panda$core$Object* $tmp4032 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp4033 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$ASTNode*) $tmp4032)->children, i4018);
        org$pandalanguage$pandac$IRNode* $tmp4034 = org$pandalanguage$pandac$Compiler$compileWhenTest$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_value, ((org$pandalanguage$pandac$ASTNode*) $tmp4033));
        nextTest4031 = $tmp4034;
        if (((panda$core$Bit) { nextTest4031 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp4036 = (panda$collections$Array*) malloc(40);
        $tmp4036->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp4036->refCount.value = 1;
        panda$collections$Array$init($tmp4036);
        callChildren4035 = $tmp4036;
        panda$collections$Array$add$panda$collections$Array$T(callChildren4035, ((panda$core$Object*) nextTest4031));
        org$pandalanguage$pandac$IRNode* $tmp4039 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, test4011, &$s4038, ((panda$collections$ListView*) callChildren4035));
        test4011 = $tmp4039;
        if (((panda$core$Bit) { test4011 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    $l4026:;
    int64_t $tmp4041 = $tmp4021 - i4018.value;
    if ($tmp4022) goto $l4042; else goto $l4043;
    $l4042:;
    if ($tmp4041 >= 1) goto $l4040; else goto $l4025;
    $l4043:;
    if ($tmp4041 > 1) goto $l4040; else goto $l4025;
    $l4040:;
    i4018.value += 1;
    goto $l4023;
    $l4025:;
    org$pandalanguage$pandac$SymbolTable* $tmp4046 = (org$pandalanguage$pandac$SymbolTable*) malloc(48);
    $tmp4046->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp4046->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp4046, self->symbolTable);
    self->symbolTable = $tmp4046;
    panda$collections$Array* $tmp4049 = (panda$collections$Array*) malloc(40);
    $tmp4049->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4049->refCount.value = 1;
    panda$collections$Array$init($tmp4049);
    statements4048 = $tmp4049;
    panda$core$Int64 $tmp4052 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp4051, ((panda$core$Int64) { 1 }), $tmp4052, ((panda$core$Bit) { false }));
    int64_t $tmp4054 = $tmp4051.min.value;
    panda$core$Int64 i4053 = { $tmp4054 };
    int64_t $tmp4056 = $tmp4051.max.value;
    bool $tmp4057 = $tmp4051.inclusive.value;
    if ($tmp4057) goto $l4064; else goto $l4065;
    $l4064:;
    if ($tmp4054 <= $tmp4056) goto $l4058; else goto $l4060;
    $l4065:;
    if ($tmp4054 < $tmp4056) goto $l4058; else goto $l4060;
    $l4058:;
    {
        panda$core$Object* $tmp4067 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, i4053);
        org$pandalanguage$pandac$IRNode* $tmp4068 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4067));
        statement4066 = $tmp4068;
        if (((panda$core$Bit) { statement4066 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(statements4048, ((panda$core$Object*) statement4066));
    }
    $l4061:;
    int64_t $tmp4070 = $tmp4056 - i4053.value;
    if ($tmp4057) goto $l4071; else goto $l4072;
    $l4071:;
    if ($tmp4070 >= 1) goto $l4069; else goto $l4060;
    $l4072:;
    if ($tmp4070 > 1) goto $l4069; else goto $l4060;
    $l4069:;
    i4053.value += 1;
    goto $l4058;
    $l4060:;
    panda$core$Object* $tmp4075 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->symbolTable->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp4075);
    panda$collections$Array* $tmp4077 = (panda$collections$Array*) malloc(40);
    $tmp4077->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4077->refCount.value = 1;
    panda$collections$Array$init($tmp4077);
    children4076 = $tmp4077;
    panda$collections$Array$add$panda$collections$Array$T(children4076, ((panda$core$Object*) test4011));
    org$pandalanguage$pandac$IRNode* $tmp4079 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4079->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4079->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4079, ((panda$core$Int64) { 1000 }), p_w->position, ((panda$collections$ListView*) statements4048));
    panda$collections$Array$add$panda$collections$Array$T(children4076, ((panda$core$Object*) $tmp4079));
    org$pandalanguage$pandac$IRNode* $tmp4081 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4081->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4081->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4081, ((panda$core$Int64) { 1012 }), p_w->position, ((panda$collections$ListView*) children4076));
    return $tmp4081;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileChainedIfMatch$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_m, org$pandalanguage$pandac$IRNode* p_value) {
    panda$collections$Array* children4083;
    org$pandalanguage$pandac$Variable* valueVar4086;
    panda$collections$Array* declChildren4096;
    panda$collections$Array* varChildren4101;
    panda$core$Range$LTpanda$core$Int64$GT $tmp4108;
    org$pandalanguage$pandac$ASTNode* c4123;
    org$pandalanguage$pandac$IRNode* w4125;
    panda$collections$Array* statements4127;
    panda$collections$Iterator* astStatement$Iter4130;
    org$pandalanguage$pandac$ASTNode* astStatement4142;
    org$pandalanguage$pandac$IRNode* stmt4147;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp4157;
    panda$collections$Array* newChildren4185;
    panda$collections$Array* $tmp4084 = (panda$collections$Array*) malloc(40);
    $tmp4084->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4084->refCount.value = 1;
    panda$collections$Array$init($tmp4084);
    children4083 = $tmp4084;
    org$pandalanguage$pandac$Variable* $tmp4087 = (org$pandalanguage$pandac$Variable*) malloc(88);
    $tmp4087->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
    $tmp4087->refCount.value = 1;
    panda$core$String* $tmp4090 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4089, ((panda$core$Object*) wrap_panda$core$Int64(p_m->position.line)));
    panda$core$String* $tmp4092 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4090, &$s4091);
    panda$core$String* $tmp4093 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp4092, ((panda$core$Object*) wrap_panda$core$Int64(p_m->position.column)));
    panda$core$String* $tmp4095 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4093, &$s4094);
    org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type($tmp4087, p_m->position, ((panda$core$Int64) { 10001 }), $tmp4095, p_value->type);
    valueVar4086 = $tmp4087;
    panda$collections$Array* $tmp4097 = (panda$collections$Array*) malloc(40);
    $tmp4097->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4097->refCount.value = 1;
    panda$collections$Array$init($tmp4097);
    declChildren4096 = $tmp4097;
    org$pandalanguage$pandac$IRNode* $tmp4099 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4099->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4099->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp4099, ((panda$core$Int64) { 1016 }), p_value->position, valueVar4086->type, valueVar4086);
    panda$collections$Array$add$panda$collections$Array$T(declChildren4096, ((panda$core$Object*) $tmp4099));
    panda$collections$Array$add$panda$collections$Array$T(declChildren4096, ((panda$core$Object*) p_value));
    panda$collections$Array* $tmp4102 = (panda$collections$Array*) malloc(40);
    $tmp4102->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4102->refCount.value = 1;
    panda$collections$Array$init($tmp4102);
    varChildren4101 = $tmp4102;
    org$pandalanguage$pandac$IRNode* $tmp4104 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4104->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4104->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4104, ((panda$core$Int64) { 1021 }), ((org$pandalanguage$pandac$Symbol*) valueVar4086)->position, ((panda$collections$ListView*) declChildren4096));
    panda$collections$Array$add$panda$collections$Array$T(varChildren4101, ((panda$core$Object*) $tmp4104));
    org$pandalanguage$pandac$IRNode* $tmp4106 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4106->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4106->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4106, ((panda$core$Int64) { 1018 }), ((org$pandalanguage$pandac$Symbol*) valueVar4086)->position, ((panda$collections$ListView*) varChildren4101));
    panda$collections$Array$add$panda$collections$Array$T(children4083, ((panda$core$Object*) $tmp4106));
    panda$core$Int64 $tmp4109 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp4108, ((panda$core$Int64) { 1 }), $tmp4109, ((panda$core$Bit) { false }));
    int64_t $tmp4111 = $tmp4108.min.value;
    panda$core$Int64 i4110 = { $tmp4111 };
    int64_t $tmp4113 = $tmp4108.max.value;
    bool $tmp4114 = $tmp4108.inclusive.value;
    if ($tmp4114) goto $l4121; else goto $l4122;
    $l4121:;
    if ($tmp4111 <= $tmp4113) goto $l4115; else goto $l4117;
    $l4122:;
    if ($tmp4111 < $tmp4113) goto $l4115; else goto $l4117;
    $l4115:;
    {
        panda$core$Object* $tmp4124 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, i4110);
        c4123 = ((org$pandalanguage$pandac$ASTNode*) $tmp4124);
        switch (c4123->kind.value) {
            case 124:
            {
                org$pandalanguage$pandac$IRNode* $tmp4126 = org$pandalanguage$pandac$Compiler$compileChainedIfWhen$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, valueVar4086, c4123);
                w4125 = $tmp4126;
                if (((panda$core$Bit) { w4125 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children4083, ((panda$core$Object*) w4125));
            }
            break;
            case 127:
            {
                panda$collections$Array* $tmp4128 = (panda$collections$Array*) malloc(40);
                $tmp4128->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp4128->refCount.value = 1;
                panda$collections$Array$init($tmp4128);
                statements4127 = $tmp4128;
                {
                    ITable* $tmp4131 = ((panda$collections$Iterable*) c4123->children)->$class->itable;
                    while ($tmp4131->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp4131 = $tmp4131->next;
                    }
                    $fn4133 $tmp4132 = $tmp4131->methods[0];
                    panda$collections$Iterator* $tmp4134 = $tmp4132(((panda$collections$Iterable*) c4123->children));
                    astStatement$Iter4130 = $tmp4134;
                    $l4135:;
                    ITable* $tmp4137 = astStatement$Iter4130->$class->itable;
                    while ($tmp4137->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp4137 = $tmp4137->next;
                    }
                    $fn4139 $tmp4138 = $tmp4137->methods[0];
                    panda$core$Bit $tmp4140 = $tmp4138(astStatement$Iter4130);
                    panda$core$Bit $tmp4141 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4140);
                    if (!$tmp4141.value) goto $l4136;
                    {
                        ITable* $tmp4143 = astStatement$Iter4130->$class->itable;
                        while ($tmp4143->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp4143 = $tmp4143->next;
                        }
                        $fn4145 $tmp4144 = $tmp4143->methods[1];
                        panda$core$Object* $tmp4146 = $tmp4144(astStatement$Iter4130);
                        astStatement4142 = ((org$pandalanguage$pandac$ASTNode*) $tmp4146);
                        org$pandalanguage$pandac$IRNode* $tmp4148 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, astStatement4142);
                        stmt4147 = $tmp4148;
                        if (((panda$core$Bit) { stmt4147 == NULL }).value) {
                        {
                            return NULL;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(statements4127, ((panda$core$Object*) stmt4147));
                    }
                    goto $l4135;
                    $l4136:;
                }
                org$pandalanguage$pandac$IRNode* $tmp4149 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp4149->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp4149->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4149, ((panda$core$Int64) { 1000 }), c4123->position, ((panda$collections$ListView*) statements4127));
                panda$collections$Array$add$panda$collections$Array$T(children4083, ((panda$core$Object*) $tmp4149));
            }
            break;
            default:
            {
                PANDA_ASSERT(((panda$core$Bit) { false }).value);
            }
        }
    }
    $l4118:;
    int64_t $tmp4152 = $tmp4113 - i4110.value;
    if ($tmp4114) goto $l4153; else goto $l4154;
    $l4153:;
    if ($tmp4152 >= 1) goto $l4151; else goto $l4117;
    $l4154:;
    if ($tmp4152 > 1) goto $l4151; else goto $l4117;
    $l4151:;
    i4110.value += 1;
    goto $l4115;
    $l4117:;
    panda$core$Int64 $tmp4158 = panda$collections$Array$get_count$R$panda$core$Int64(children4083);
    panda$core$Int64 $tmp4159 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp4158, ((panda$core$Int64) { 1 }));
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp4157, $tmp4159, ((panda$core$Int64) { 1 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { false }));
    int64_t $tmp4161 = $tmp4157.start.value;
    panda$core$Int64 i4160 = { $tmp4161 };
    int64_t $tmp4163 = $tmp4157.end.value;
    int64_t $tmp4164 = $tmp4157.step.value;
    bool $tmp4165 = $tmp4157.inclusive.value;
    bool $tmp4172 = $tmp4164 > 0;
    if ($tmp4172) goto $l4170; else goto $l4171;
    $l4170:;
    if ($tmp4165) goto $l4173; else goto $l4174;
    $l4173:;
    if ($tmp4161 <= $tmp4163) goto $l4166; else goto $l4168;
    $l4174:;
    if ($tmp4161 < $tmp4163) goto $l4166; else goto $l4168;
    $l4171:;
    if ($tmp4165) goto $l4175; else goto $l4176;
    $l4175:;
    if ($tmp4161 >= $tmp4163) goto $l4166; else goto $l4168;
    $l4176:;
    if ($tmp4161 > $tmp4163) goto $l4166; else goto $l4168;
    $l4166:;
    {
        panda$core$Int64 $tmp4178 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4160, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp4179 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children4083, $tmp4178);
        panda$core$Bit $tmp4180 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp4179)->kind, ((panda$core$Int64) { 1012 }));
        PANDA_ASSERT($tmp4180.value);
        panda$core$Int64 $tmp4181 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4160, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp4182 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children4083, $tmp4181);
        panda$core$Int64 $tmp4183 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp4182)->children);
        panda$core$Bit $tmp4184 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4183, ((panda$core$Int64) { 2 }));
        PANDA_ASSERT($tmp4184.value);
        panda$collections$Array* $tmp4186 = (panda$collections$Array*) malloc(40);
        $tmp4186->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp4186->refCount.value = 1;
        panda$core$Int64 $tmp4188 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4160, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp4189 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children4083, $tmp4188);
        panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp4186, ((panda$collections$ListView*) ((org$pandalanguage$pandac$IRNode*) $tmp4189)->children));
        newChildren4185 = $tmp4186;
        panda$core$Object* $tmp4190 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children4083, i4160);
        panda$collections$Array$add$panda$collections$Array$T(newChildren4185, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp4190)));
        panda$core$Int64 $tmp4191 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4160, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$IRNode* $tmp4192 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp4192->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp4192->refCount.value = 1;
        panda$core$Int64 $tmp4194 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4160, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp4195 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children4083, $tmp4194);
        panda$core$Int64 $tmp4196 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4160, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp4197 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children4083, $tmp4196);
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4192, ((org$pandalanguage$pandac$IRNode*) $tmp4195)->kind, ((org$pandalanguage$pandac$IRNode*) $tmp4197)->position, ((panda$collections$ListView*) newChildren4185));
        panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(children4083, $tmp4191, ((panda$core$Object*) $tmp4192));
        panda$core$Int64 $tmp4198 = panda$collections$Array$get_count$R$panda$core$Int64(children4083);
        panda$core$Int64 $tmp4199 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp4198, ((panda$core$Int64) { 1 }));
        panda$collections$Array$removeIndex$panda$core$Int64(children4083, $tmp4199);
    }
    $l4169:;
    if ($tmp4172) goto $l4201; else goto $l4202;
    $l4201:;
    int64_t $tmp4203 = $tmp4163 - i4160.value;
    if ($tmp4165) goto $l4204; else goto $l4205;
    $l4204:;
    if ($tmp4203 >= $tmp4164) goto $l4200; else goto $l4168;
    $l4205:;
    if ($tmp4203 > $tmp4164) goto $l4200; else goto $l4168;
    $l4202:;
    int64_t $tmp4207 = i4160.value - $tmp4163;
    if ($tmp4165) goto $l4208; else goto $l4209;
    $l4208:;
    if ($tmp4207 >= -$tmp4164) goto $l4200; else goto $l4168;
    $l4209:;
    if ($tmp4207 > -$tmp4164) goto $l4200; else goto $l4168;
    $l4200:;
    i4160.value += $tmp4164;
    goto $l4166;
    $l4168:;
    org$pandalanguage$pandac$IRNode* $tmp4211 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4211->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4211->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4211, ((panda$core$Int64) { 1000 }), p_m->position, ((panda$collections$ListView*) children4083));
    return $tmp4211;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileWhen$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type, org$pandalanguage$pandac$ASTNode* p_w) {
    panda$collections$Array* children4221;
    panda$collections$Iterator* expr$Iter4224;
    org$pandalanguage$pandac$ASTNode* expr4237;
    org$pandalanguage$pandac$IRNode* compiled4242;
    panda$collections$Array* statements4247;
    panda$core$Range$LTpanda$core$Int64$GT $tmp4250;
    org$pandalanguage$pandac$IRNode* statement4265;
    panda$core$Bit $tmp4213 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_w->kind, ((panda$core$Int64) { 124 }));
    PANDA_ASSERT($tmp4213.value);
    panda$core$Int64 $tmp4214 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Bit $tmp4215 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp4214, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4215.value);
    panda$core$Object* $tmp4216 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp4217 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp4216)->kind, ((panda$core$Int64) { 128 }));
    PANDA_ASSERT($tmp4217.value);
    panda$core$Object* $tmp4218 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Int64 $tmp4219 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$ASTNode*) $tmp4218)->children);
    panda$core$Bit $tmp4220 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp4219, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4220.value);
    panda$collections$Array* $tmp4222 = (panda$collections$Array*) malloc(40);
    $tmp4222->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4222->refCount.value = 1;
    panda$collections$Array$init($tmp4222);
    children4221 = $tmp4222;
    {
        panda$core$Object* $tmp4225 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
        ITable* $tmp4226 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp4225)->children)->$class->itable;
        while ($tmp4226->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4226 = $tmp4226->next;
        }
        $fn4228 $tmp4227 = $tmp4226->methods[0];
        panda$collections$Iterator* $tmp4229 = $tmp4227(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp4225)->children));
        expr$Iter4224 = $tmp4229;
        $l4230:;
        ITable* $tmp4232 = expr$Iter4224->$class->itable;
        while ($tmp4232->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4232 = $tmp4232->next;
        }
        $fn4234 $tmp4233 = $tmp4232->methods[0];
        panda$core$Bit $tmp4235 = $tmp4233(expr$Iter4224);
        panda$core$Bit $tmp4236 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4235);
        if (!$tmp4236.value) goto $l4231;
        {
            ITable* $tmp4238 = expr$Iter4224->$class->itable;
            while ($tmp4238->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4238 = $tmp4238->next;
            }
            $fn4240 $tmp4239 = $tmp4238->methods[1];
            panda$core$Object* $tmp4241 = $tmp4239(expr$Iter4224);
            expr4237 = ((org$pandalanguage$pandac$ASTNode*) $tmp4241);
            org$pandalanguage$pandac$IRNode* $tmp4243 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, expr4237);
            org$pandalanguage$pandac$IRNode* $tmp4244 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp4243, p_type);
            compiled4242 = $tmp4244;
            if (((panda$core$Bit) { compiled4242 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children4221, ((panda$core$Object*) compiled4242));
        }
        goto $l4230;
        $l4231:;
    }
    org$pandalanguage$pandac$SymbolTable* $tmp4245 = (org$pandalanguage$pandac$SymbolTable*) malloc(48);
    $tmp4245->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp4245->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp4245, self->symbolTable);
    self->symbolTable = $tmp4245;
    panda$collections$Array* $tmp4248 = (panda$collections$Array*) malloc(40);
    $tmp4248->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4248->refCount.value = 1;
    panda$collections$Array$init($tmp4248);
    statements4247 = $tmp4248;
    panda$core$Int64 $tmp4251 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp4250, ((panda$core$Int64) { 1 }), $tmp4251, ((panda$core$Bit) { false }));
    int64_t $tmp4253 = $tmp4250.min.value;
    panda$core$Int64 i4252 = { $tmp4253 };
    int64_t $tmp4255 = $tmp4250.max.value;
    bool $tmp4256 = $tmp4250.inclusive.value;
    if ($tmp4256) goto $l4263; else goto $l4264;
    $l4263:;
    if ($tmp4253 <= $tmp4255) goto $l4257; else goto $l4259;
    $l4264:;
    if ($tmp4253 < $tmp4255) goto $l4257; else goto $l4259;
    $l4257:;
    {
        panda$core$Object* $tmp4266 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, i4252);
        org$pandalanguage$pandac$IRNode* $tmp4267 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4266));
        statement4265 = $tmp4267;
        if (((panda$core$Bit) { statement4265 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(statements4247, ((panda$core$Object*) statement4265));
    }
    $l4260:;
    int64_t $tmp4269 = $tmp4255 - i4252.value;
    if ($tmp4256) goto $l4270; else goto $l4271;
    $l4270:;
    if ($tmp4269 >= 1) goto $l4268; else goto $l4259;
    $l4271:;
    if ($tmp4269 > 1) goto $l4268; else goto $l4259;
    $l4268:;
    i4252.value += 1;
    goto $l4257;
    $l4259:;
    panda$core$Object* $tmp4274 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->symbolTable->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp4274);
    org$pandalanguage$pandac$IRNode* $tmp4275 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4275->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4275->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4275, ((panda$core$Int64) { 1000 }), p_w->position, ((panda$collections$ListView*) statements4247));
    panda$collections$Array$add$panda$collections$Array$T(children4221, ((panda$core$Object*) $tmp4275));
    org$pandalanguage$pandac$IRNode* $tmp4277 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4277->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4277->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4277, ((panda$core$Int64) { 1042 }), p_w->position, ((panda$collections$ListView*) children4221));
    return $tmp4277;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileOtherwise$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_o) {
    panda$collections$Array* children4280;
    panda$collections$Array* statements4285;
    panda$collections$Iterator* s$Iter4288;
    org$pandalanguage$pandac$ASTNode* s4300;
    org$pandalanguage$pandac$IRNode* statement4305;
    panda$core$Bit $tmp4279 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_o->kind, ((panda$core$Int64) { 127 }));
    PANDA_ASSERT($tmp4279.value);
    panda$collections$Array* $tmp4281 = (panda$collections$Array*) malloc(40);
    $tmp4281->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4281->refCount.value = 1;
    panda$collections$Array$init($tmp4281);
    children4280 = $tmp4281;
    org$pandalanguage$pandac$SymbolTable* $tmp4283 = (org$pandalanguage$pandac$SymbolTable*) malloc(48);
    $tmp4283->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp4283->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp4283, self->symbolTable);
    self->symbolTable = $tmp4283;
    panda$collections$Array* $tmp4286 = (panda$collections$Array*) malloc(40);
    $tmp4286->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4286->refCount.value = 1;
    panda$collections$Array$init($tmp4286);
    statements4285 = $tmp4286;
    {
        ITable* $tmp4289 = ((panda$collections$Iterable*) p_o->children)->$class->itable;
        while ($tmp4289->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4289 = $tmp4289->next;
        }
        $fn4291 $tmp4290 = $tmp4289->methods[0];
        panda$collections$Iterator* $tmp4292 = $tmp4290(((panda$collections$Iterable*) p_o->children));
        s$Iter4288 = $tmp4292;
        $l4293:;
        ITable* $tmp4295 = s$Iter4288->$class->itable;
        while ($tmp4295->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4295 = $tmp4295->next;
        }
        $fn4297 $tmp4296 = $tmp4295->methods[0];
        panda$core$Bit $tmp4298 = $tmp4296(s$Iter4288);
        panda$core$Bit $tmp4299 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4298);
        if (!$tmp4299.value) goto $l4294;
        {
            ITable* $tmp4301 = s$Iter4288->$class->itable;
            while ($tmp4301->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4301 = $tmp4301->next;
            }
            $fn4303 $tmp4302 = $tmp4301->methods[1];
            panda$core$Object* $tmp4304 = $tmp4302(s$Iter4288);
            s4300 = ((org$pandalanguage$pandac$ASTNode*) $tmp4304);
            org$pandalanguage$pandac$IRNode* $tmp4306 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, s4300);
            statement4305 = $tmp4306;
            if (((panda$core$Bit) { statement4305 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(statements4285, ((panda$core$Object*) statement4305));
        }
        goto $l4293;
        $l4294:;
    }
    panda$core$Object* $tmp4307 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->symbolTable->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp4307);
    org$pandalanguage$pandac$IRNode* $tmp4308 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4308->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4308->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4308, ((panda$core$Int64) { 1000 }), p_o->position, ((panda$collections$ListView*) statements4285));
    panda$collections$Array$add$panda$collections$Array$T(children4280, ((panda$core$Object*) $tmp4308));
    org$pandalanguage$pandac$IRNode* $tmp4310 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4310->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4310->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4310, ((panda$core$Int64) { 1043 }), p_o->position, ((panda$collections$ListView*) children4280));
    return $tmp4310;
}
panda$core$Bit org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    org$pandalanguage$pandac$FieldDecl* f4319;
    org$pandalanguage$pandac$Variable* v4328;
    switch (p_expr->kind.value) {
        case 1004:
        {
            return ((panda$core$Bit) { true });
        }
        break;
        case 1010:
        {
            panda$core$Bit $tmp4313 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_expr->type);
            bool $tmp4312 = $tmp4313.value;
            if (!$tmp4312) goto $l4314;
            panda$core$Object* $tmp4315 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp4316 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$IRNode*) $tmp4315)->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp4317 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp4316));
            $tmp4312 = $tmp4317.value;
            $l4314:;
            panda$core$Bit $tmp4318 = { $tmp4312 };
            return $tmp4318;
        }
        break;
        case 1026:
        {
            f4319 = ((org$pandalanguage$pandac$FieldDecl*) p_expr->payload);
            PANDA_ASSERT(f4319->resolved.value);
            panda$core$Bit $tmp4322 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(f4319->fieldKind, ((panda$core$Int64) { 10002 }));
            bool $tmp4321 = $tmp4322.value;
            if (!$tmp4321) goto $l4323;
            $tmp4321 = ((panda$core$Bit) { f4319->value != NULL }).value;
            $l4323:;
            panda$core$Bit $tmp4324 = { $tmp4321 };
            bool $tmp4320 = $tmp4324.value;
            if (!$tmp4320) goto $l4325;
            panda$core$Bit $tmp4326 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, f4319->value);
            $tmp4320 = $tmp4326.value;
            $l4325:;
            panda$core$Bit $tmp4327 = { $tmp4320 };
            return $tmp4327;
        }
        break;
        case 1016:
        {
            v4328 = ((org$pandalanguage$pandac$Variable*) p_expr->payload);
            panda$core$Bit $tmp4330 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(v4328->varKind, ((panda$core$Int64) { 10001 }));
            bool $tmp4329 = $tmp4330.value;
            if ($tmp4329) goto $l4331;
            panda$core$Bit $tmp4334 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(v4328->varKind, ((panda$core$Int64) { 10002 }));
            bool $tmp4333 = $tmp4334.value;
            if (!$tmp4333) goto $l4335;
            $tmp4333 = ((panda$core$Bit) { v4328->initialValue != NULL }).value;
            $l4335:;
            panda$core$Bit $tmp4336 = { $tmp4333 };
            bool $tmp4332 = $tmp4336.value;
            if (!$tmp4332) goto $l4337;
            panda$core$Bit $tmp4338 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, v4328->initialValue);
            $tmp4332 = $tmp4338.value;
            $l4337:;
            panda$core$Bit $tmp4339 = { $tmp4332 };
            $tmp4329 = $tmp4339.value;
            $l4331:;
            panda$core$Bit $tmp4340 = { $tmp4329 };
            return $tmp4340;
        }
        break;
        default:
        {
            return ((panda$core$Bit) { false });
        }
    }
}
panda$core$UInt64 org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    org$pandalanguage$pandac$FieldDecl* f4345;
    org$pandalanguage$pandac$Variable* v4347;
    panda$core$Bit $tmp4341 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, p_expr);
    PANDA_ASSERT($tmp4341.value);
    switch (p_expr->kind.value) {
        case 1004:
        {
            return ((panda$core$UInt64$wrapper*) p_expr->payload)->value;
        }
        break;
        case 1010:
        {
            panda$core$Object* $tmp4342 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp4343 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$IRNode*) $tmp4342)->children, ((panda$core$Int64) { 0 }));
            panda$core$UInt64 $tmp4344 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self, ((org$pandalanguage$pandac$IRNode*) $tmp4343));
            return $tmp4344;
        }
        break;
        case 1026:
        {
            f4345 = ((org$pandalanguage$pandac$FieldDecl*) p_expr->payload);
            panda$core$UInt64 $tmp4346 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self, f4345->value);
            return $tmp4346;
        }
        break;
        case 1016:
        {
            v4347 = ((org$pandalanguage$pandac$Variable*) p_expr->payload);
            panda$core$UInt64 $tmp4348 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self, v4347->initialValue);
            return $tmp4348;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileMatch$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_m) {
    org$pandalanguage$pandac$IRNode* value4352;
    panda$collections$Array* children4359;
    panda$collections$Iterator* rawWhen$Iter4362;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp4363;
    org$pandalanguage$pandac$ASTNode* rawWhen4376;
    org$pandalanguage$pandac$IRNode* o4382;
    org$pandalanguage$pandac$IRNode* w4384;
    panda$core$Bit $tmp4349 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->kind, ((panda$core$Int64) { 125 }));
    PANDA_ASSERT($tmp4349.value);
    panda$core$Int64 $tmp4350 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
    panda$core$Bit $tmp4351 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp4350, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4351.value);
    panda$core$Object* $tmp4353 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp4354 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4353));
    org$pandalanguage$pandac$IRNode* $tmp4355 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp4354);
    value4352 = $tmp4355;
    if (((panda$core$Bit) { value4352 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp4356 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(value4352->type);
    panda$core$Bit $tmp4357 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4356);
    if ($tmp4357.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp4358 = org$pandalanguage$pandac$Compiler$compileChainedIfMatch$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_m, value4352);
        return $tmp4358;
    }
    }
    panda$collections$Array* $tmp4360 = (panda$collections$Array*) malloc(40);
    $tmp4360->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4360->refCount.value = 1;
    panda$collections$Array$init($tmp4360);
    children4359 = $tmp4360;
    panda$collections$Array$add$panda$collections$Array$T(children4359, ((panda$core$Object*) value4352));
    {
        panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp4363, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
        panda$collections$ImmutableArray* $tmp4364 = panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(p_m->children, $tmp4363);
        ITable* $tmp4365 = ((panda$collections$Iterable*) $tmp4364)->$class->itable;
        while ($tmp4365->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4365 = $tmp4365->next;
        }
        $fn4367 $tmp4366 = $tmp4365->methods[0];
        panda$collections$Iterator* $tmp4368 = $tmp4366(((panda$collections$Iterable*) $tmp4364));
        rawWhen$Iter4362 = $tmp4368;
        $l4369:;
        ITable* $tmp4371 = rawWhen$Iter4362->$class->itable;
        while ($tmp4371->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4371 = $tmp4371->next;
        }
        $fn4373 $tmp4372 = $tmp4371->methods[0];
        panda$core$Bit $tmp4374 = $tmp4372(rawWhen$Iter4362);
        panda$core$Bit $tmp4375 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4374);
        if (!$tmp4375.value) goto $l4370;
        {
            ITable* $tmp4377 = rawWhen$Iter4362->$class->itable;
            while ($tmp4377->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4377 = $tmp4377->next;
            }
            $fn4379 $tmp4378 = $tmp4377->methods[1];
            panda$core$Object* $tmp4380 = $tmp4378(rawWhen$Iter4362);
            rawWhen4376 = ((org$pandalanguage$pandac$ASTNode*) $tmp4380);
            panda$core$Bit $tmp4381 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(rawWhen4376->kind, ((panda$core$Int64) { 127 }));
            if ($tmp4381.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp4383 = org$pandalanguage$pandac$Compiler$compileOtherwise$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, rawWhen4376);
                o4382 = $tmp4383;
                if (((panda$core$Bit) { o4382 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children4359, ((panda$core$Object*) o4382));
                goto $l4369;
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp4385 = org$pandalanguage$pandac$Compiler$compileWhen$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, value4352->type, rawWhen4376);
            w4384 = $tmp4385;
            if (((panda$core$Bit) { w4384 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$Object* $tmp4386 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(w4384->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp4387 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp4386));
            panda$core$Bit $tmp4388 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4387);
            if ($tmp4388.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp4389 = org$pandalanguage$pandac$Compiler$compileChainedIfMatch$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_m, value4352);
                return $tmp4389;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children4359, ((panda$core$Object*) w4384));
        }
        goto $l4369;
        $l4370:;
    }
    org$pandalanguage$pandac$IRNode* $tmp4390 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4390->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4390->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4390, ((panda$core$Int64) { 1042 }), p_m->position, ((panda$collections$ListView*) children4359));
    return $tmp4390;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$IRNode* result4405;
    switch (p_s->kind.value) {
        case 123:
        {
            org$pandalanguage$pandac$IRNode* $tmp4392 = org$pandalanguage$pandac$Compiler$compileAssert$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4392;
        }
        break;
        case 103:
        {
            org$pandalanguage$pandac$IRNode* $tmp4393 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            org$pandalanguage$pandac$IRNode* $tmp4394 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp4393);
            return $tmp4394;
        }
        break;
        case 126:
        {
            org$pandalanguage$pandac$IRNode* $tmp4395 = org$pandalanguage$pandac$Compiler$compileBlock$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4395;
        }
        break;
        case 118:
        {
            org$pandalanguage$pandac$IRNode* $tmp4396 = org$pandalanguage$pandac$Compiler$compileIf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4396;
        }
        break;
        case 119:
        {
            org$pandalanguage$pandac$IRNode* $tmp4397 = org$pandalanguage$pandac$Compiler$compileFor$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4397;
        }
        break;
        case 121:
        {
            org$pandalanguage$pandac$IRNode* $tmp4398 = org$pandalanguage$pandac$Compiler$compileWhile$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4398;
        }
        break;
        case 120:
        {
            org$pandalanguage$pandac$IRNode* $tmp4399 = org$pandalanguage$pandac$Compiler$compileDo$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4399;
        }
        break;
        case 122:
        {
            org$pandalanguage$pandac$IRNode* $tmp4400 = org$pandalanguage$pandac$Compiler$compileLoop$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4400;
        }
        break;
        case 125:
        {
            org$pandalanguage$pandac$IRNode* $tmp4401 = org$pandalanguage$pandac$Compiler$compileMatch$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4401;
        }
        break;
        case 134:
        {
            org$pandalanguage$pandac$IRNode* $tmp4402 = org$pandalanguage$pandac$Compiler$compileBreak$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4402;
        }
        break;
        case 135:
        {
            org$pandalanguage$pandac$IRNode* $tmp4403 = org$pandalanguage$pandac$Compiler$compileContinue$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4403;
        }
        break;
        case 136:
        {
            org$pandalanguage$pandac$IRNode* $tmp4404 = org$pandalanguage$pandac$Compiler$compileReturn$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4404;
        }
        break;
        case 107:
        {
            org$pandalanguage$pandac$IRNode* $tmp4406 = org$pandalanguage$pandac$Compiler$compileCall$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            org$pandalanguage$pandac$IRNode* $tmp4407 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp4406);
            result4405 = $tmp4407;
            if (((panda$core$Bit) { result4405 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp4408 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self, result4405);
                result4405 = $tmp4408;
            }
            }
            return result4405;
        }
        break;
        case 130:
        case 131:
        case 132:
        case 133:
        {
            org$pandalanguage$pandac$IRNode* $tmp4409 = org$pandalanguage$pandac$Compiler$compileVar$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4409;
        }
        break;
    }
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBody$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$SymbolTable* old4410;
    org$pandalanguage$pandac$SymbolTable* symbols4412;
    panda$collections$Iterator* p$Iter4415;
    org$pandalanguage$pandac$MethodDecl$Parameter* p4427;
    panda$collections$Array* fieldInitializers4434;
    panda$collections$Iterator* f$Iter4438;
    org$pandalanguage$pandac$FieldDecl* f4451;
    panda$collections$Array* children4461;
    org$pandalanguage$pandac$IRNode* fieldRef4468;
    org$pandalanguage$pandac$IRNode* compiled4473;
    panda$collections$Array* children4475;
    if (((panda$core$Bit) { p_m->compiledBody != NULL }).value) {
    {
        return p_m->compiledBody;
    }
    }
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_m->owner));
    old4410 = self->symbolTable;
    org$pandalanguage$pandac$SymbolTable* $tmp4411 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, p_m->owner);
    self->symbolTable = $tmp4411;
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentMethod, ((panda$core$Object*) p_m));
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
    PANDA_ASSERT(((panda$core$Bit) { p_m->body != NULL }).value);
    org$pandalanguage$pandac$SymbolTable* $tmp4413 = (org$pandalanguage$pandac$SymbolTable*) malloc(48);
    $tmp4413->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp4413->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp4413, self->symbolTable);
    symbols4412 = $tmp4413;
    {
        ITable* $tmp4416 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp4416->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4416 = $tmp4416->next;
        }
        $fn4418 $tmp4417 = $tmp4416->methods[0];
        panda$collections$Iterator* $tmp4419 = $tmp4417(((panda$collections$Iterable*) p_m->parameters));
        p$Iter4415 = $tmp4419;
        $l4420:;
        ITable* $tmp4422 = p$Iter4415->$class->itable;
        while ($tmp4422->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4422 = $tmp4422->next;
        }
        $fn4424 $tmp4423 = $tmp4422->methods[0];
        panda$core$Bit $tmp4425 = $tmp4423(p$Iter4415);
        panda$core$Bit $tmp4426 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4425);
        if (!$tmp4426.value) goto $l4421;
        {
            ITable* $tmp4428 = p$Iter4415->$class->itable;
            while ($tmp4428->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4428 = $tmp4428->next;
            }
            $fn4430 $tmp4429 = $tmp4428->methods[1];
            panda$core$Object* $tmp4431 = $tmp4429(p$Iter4415);
            p4427 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp4431);
            org$pandalanguage$pandac$Variable* $tmp4432 = (org$pandalanguage$pandac$Variable*) malloc(88);
            $tmp4432->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
            $tmp4432->refCount.value = 1;
            org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Int64($tmp4432, ((org$pandalanguage$pandac$Symbol*) p_m)->position, ((panda$core$Int64) { 10001 }), p4427->name, p4427->type, ((panda$core$Int64) { 1820 }));
            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(symbols4412, ((org$pandalanguage$pandac$Symbol*) $tmp4432));
        }
        goto $l4420;
        $l4421:;
    }
    self->symbolTable = symbols4412;
    fieldInitializers4434 = NULL;
    panda$core$Bit $tmp4435 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 59 }));
    if ($tmp4435.value) {
    {
        panda$collections$Array* $tmp4436 = (panda$collections$Array*) malloc(40);
        $tmp4436->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp4436->refCount.value = 1;
        panda$collections$Array$init($tmp4436);
        fieldInitializers4434 = $tmp4436;
        {
            panda$core$Object* $tmp4439 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
            ITable* $tmp4440 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ClassDecl*) $tmp4439)->fields)->$class->itable;
            while ($tmp4440->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp4440 = $tmp4440->next;
            }
            $fn4442 $tmp4441 = $tmp4440->methods[0];
            panda$collections$Iterator* $tmp4443 = $tmp4441(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ClassDecl*) $tmp4439)->fields));
            f$Iter4438 = $tmp4443;
            $l4444:;
            ITable* $tmp4446 = f$Iter4438->$class->itable;
            while ($tmp4446->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4446 = $tmp4446->next;
            }
            $fn4448 $tmp4447 = $tmp4446->methods[0];
            panda$core$Bit $tmp4449 = $tmp4447(f$Iter4438);
            panda$core$Bit $tmp4450 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4449);
            if (!$tmp4450.value) goto $l4445;
            {
                ITable* $tmp4452 = f$Iter4438->$class->itable;
                while ($tmp4452->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp4452 = $tmp4452->next;
                }
                $fn4454 $tmp4453 = $tmp4452->methods[1];
                panda$core$Object* $tmp4455 = $tmp4453(f$Iter4438);
                f4451 = ((org$pandalanguage$pandac$FieldDecl*) $tmp4455);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self, f4451);
                panda$core$Bit $tmp4457 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(f4451->annotations);
                panda$core$Bit $tmp4458 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4457);
                bool $tmp4456 = $tmp4458.value;
                if (!$tmp4456) goto $l4459;
                $tmp4456 = ((panda$core$Bit) { f4451->value != NULL }).value;
                $l4459:;
                panda$core$Bit $tmp4460 = { $tmp4456 };
                if ($tmp4460.value) {
                {
                    panda$collections$Array* $tmp4462 = (panda$collections$Array*) malloc(40);
                    $tmp4462->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp4462->refCount.value = 1;
                    panda$collections$Array$init($tmp4462);
                    children4461 = $tmp4462;
                    org$pandalanguage$pandac$IRNode* $tmp4464 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp4464->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp4464->refCount.value = 1;
                    panda$core$Object* $tmp4466 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
                    org$pandalanguage$pandac$Type* $tmp4467 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp4466));
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp4464, ((panda$core$Int64) { 1025 }), ((org$pandalanguage$pandac$Symbol*) p_m)->position, $tmp4467);
                    panda$collections$Array$add$panda$collections$Array$T(children4461, ((panda$core$Object*) $tmp4464));
                    org$pandalanguage$pandac$IRNode* $tmp4469 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp4469->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp4469->refCount.value = 1;
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp4469, ((panda$core$Int64) { 1026 }), ((org$pandalanguage$pandac$Symbol*) p_m)->position, f4451->type, ((panda$core$Object*) f4451), ((panda$collections$ListView*) children4461));
                    fieldRef4468 = $tmp4469;
                    panda$collections$Array$clear(children4461);
                    panda$collections$Array$add$panda$collections$Array$T(children4461, ((panda$core$Object*) fieldRef4468));
                    panda$collections$Array$add$panda$collections$Array$T(children4461, ((panda$core$Object*) f4451->value));
                    org$pandalanguage$pandac$IRNode* $tmp4471 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp4471->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp4471->refCount.value = 1;
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4471, ((panda$core$Int64) { 1023 }), ((org$pandalanguage$pandac$Symbol*) f4451)->position, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 73 }))), ((panda$collections$ListView*) children4461));
                    panda$collections$Array$add$panda$collections$Array$T(fieldInitializers4434, ((panda$core$Object*) $tmp4471));
                }
                }
            }
            goto $l4444;
            $l4445:;
        }
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp4474 = org$pandalanguage$pandac$Compiler$compileBlock$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_m->body);
    compiled4473 = $tmp4474;
    if (((panda$core$Bit) { compiled4473 != NULL }).value) {
    {
        if (((panda$core$Bit) { fieldInitializers4434 != NULL }).value) {
        {
            panda$collections$Array* $tmp4476 = (panda$collections$Array*) malloc(40);
            $tmp4476->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp4476->refCount.value = 1;
            panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp4476, ((panda$collections$ListView*) fieldInitializers4434));
            children4475 = $tmp4476;
            panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(children4475, ((panda$collections$CollectionView*) compiled4473->children));
            org$pandalanguage$pandac$IRNode* $tmp4478 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp4478->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp4478->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4478, ((panda$core$Int64) { 1000 }), p_m->body->position, ((panda$collections$ListView*) children4475));
            compiled4473 = $tmp4478;
        }
        }
    }
    }
    PANDA_ASSERT(((panda$core$Bit) { ((panda$core$Object*) self->symbolTable) == ((panda$core$Object*) symbols4412) }).value);
    self->symbolTable = old4410;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentMethod);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    panda$core$Bit $tmp4480 = org$pandalanguage$pandac$Annotations$isInline$R$panda$core$Bit(p_m->annotations);
    if ($tmp4480.value) {
    {
        p_m->compiledBody = compiled4473;
    }
    }
    return compiled4473;
}
void org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$IRNode* compiled4481;
    if (((panda$core$Bit) { p_m->body != NULL }).value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp4482 = org$pandalanguage$pandac$Compiler$compileBody$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$IRNode$Q(self, p_m);
        compiled4481 = $tmp4482;
        if (((panda$core$Bit) { compiled4481 != NULL }).value) {
        {
            ITable* $tmp4483 = self->codeGenerator->$class->itable;
            while ($tmp4483->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
                $tmp4483 = $tmp4483->next;
            }
            $fn4485 $tmp4484 = $tmp4483->methods[3];
            $tmp4484(self->codeGenerator, p_m, compiled4481);
        }
        }
    }
    }
    else {
    {
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
        ITable* $tmp4486 = self->codeGenerator->$class->itable;
        while ($tmp4486->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
            $tmp4486 = $tmp4486->next;
        }
        $fn4488 $tmp4487 = $tmp4486->methods[2];
        $tmp4487(self->codeGenerator, p_m);
    }
    }
}
void org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Iterator* inner$Iter4489;
    org$pandalanguage$pandac$ClassDecl* inner4501;
    p_cl->external = ((panda$core$Bit) { false });
    {
        ITable* $tmp4490 = ((panda$collections$Iterable*) p_cl->classes)->$class->itable;
        while ($tmp4490->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4490 = $tmp4490->next;
        }
        $fn4492 $tmp4491 = $tmp4490->methods[0];
        panda$collections$Iterator* $tmp4493 = $tmp4491(((panda$collections$Iterable*) p_cl->classes));
        inner$Iter4489 = $tmp4493;
        $l4494:;
        ITable* $tmp4496 = inner$Iter4489->$class->itable;
        while ($tmp4496->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4496 = $tmp4496->next;
        }
        $fn4498 $tmp4497 = $tmp4496->methods[0];
        panda$core$Bit $tmp4499 = $tmp4497(inner$Iter4489);
        panda$core$Bit $tmp4500 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4499);
        if (!$tmp4500.value) goto $l4495;
        {
            ITable* $tmp4502 = inner$Iter4489->$class->itable;
            while ($tmp4502->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4502 = $tmp4502->next;
            }
            $fn4504 $tmp4503 = $tmp4502->methods[1];
            panda$core$Object* $tmp4505 = $tmp4503(inner$Iter4489);
            inner4501 = ((org$pandalanguage$pandac$ClassDecl*) $tmp4505);
            org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl(self, inner4501);
        }
        goto $l4494;
        $l4495:;
    }
}
void org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$SymbolTable* old4513;
    panda$collections$Iterator* m$Iter4518;
    org$pandalanguage$pandac$MethodDecl* m4530;
    org$pandalanguage$pandac$ClassDecl* next4540;
    PANDA_ASSERT(((panda$core$Bit) { self->compiling == NULL }).value);
    self->compiling = p_cl;
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_cl));
    org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl(self, p_cl);
    panda$core$Bit $tmp4506 = org$pandalanguage$pandac$Annotations$isSpecialize$R$panda$core$Bit(p_cl->annotations);
    if ($tmp4506.value) {
    {
        ITable* $tmp4507 = self->codeGenerator->$class->itable;
        while ($tmp4507->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
            $tmp4507 = $tmp4507->next;
        }
        $fn4509 $tmp4508 = $tmp4507->methods[1];
        $tmp4508(self->codeGenerator, p_cl);
        ITable* $tmp4510 = self->codeGenerator->$class->itable;
        while ($tmp4510->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
            $tmp4510 = $tmp4510->next;
        }
        $fn4512 $tmp4511 = $tmp4510->methods[4];
        $tmp4511(self->codeGenerator, p_cl);
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
        return;
    }
    }
    old4513 = self->symbolTable;
    org$pandalanguage$pandac$SymbolTable* $tmp4514 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, p_cl);
    self->symbolTable = $tmp4514;
    ITable* $tmp4515 = self->codeGenerator->$class->itable;
    while ($tmp4515->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
        $tmp4515 = $tmp4515->next;
    }
    $fn4517 $tmp4516 = $tmp4515->methods[1];
    $tmp4516(self->codeGenerator, p_cl);
    {
        ITable* $tmp4519 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
        while ($tmp4519->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4519 = $tmp4519->next;
        }
        $fn4521 $tmp4520 = $tmp4519->methods[0];
        panda$collections$Iterator* $tmp4522 = $tmp4520(((panda$collections$Iterable*) p_cl->methods));
        m$Iter4518 = $tmp4522;
        $l4523:;
        ITable* $tmp4525 = m$Iter4518->$class->itable;
        while ($tmp4525->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4525 = $tmp4525->next;
        }
        $fn4527 $tmp4526 = $tmp4525->methods[0];
        panda$core$Bit $tmp4528 = $tmp4526(m$Iter4518);
        panda$core$Bit $tmp4529 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4528);
        if (!$tmp4529.value) goto $l4524;
        {
            ITable* $tmp4531 = m$Iter4518->$class->itable;
            while ($tmp4531->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4531 = $tmp4531->next;
            }
            $fn4533 $tmp4532 = $tmp4531->methods[1];
            panda$core$Object* $tmp4534 = $tmp4532(m$Iter4518);
            m4530 = ((org$pandalanguage$pandac$MethodDecl*) $tmp4534);
            org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$MethodDecl(self, m4530);
        }
        goto $l4523;
        $l4524:;
    }
    ITable* $tmp4535 = self->codeGenerator->$class->itable;
    while ($tmp4535->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
        $tmp4535 = $tmp4535->next;
    }
    $fn4537 $tmp4536 = $tmp4535->methods[4];
    $tmp4536(self->codeGenerator, p_cl);
    self->symbolTable = old4513;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    self->compiling = NULL;
    panda$core$Int64 $tmp4538 = panda$collections$Array$get_count$R$panda$core$Int64(self->compilationQueue);
    panda$core$Bit $tmp4539 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp4538, ((panda$core$Int64) { 0 }));
    if ($tmp4539.value) {
    {
        panda$core$Object* $tmp4541 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->compilationQueue, ((panda$core$Int64) { 0 }));
        next4540 = ((org$pandalanguage$pandac$ClassDecl*) $tmp4541);
        panda$collections$Array$removeIndex$panda$core$Int64(self->compilationQueue, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$ClassDecl(self, next4540);
    }
    }
    panda$core$Int64 $tmp4542 = panda$collections$Array$get_count$R$panda$core$Int64(self->compilationQueue);
    panda$core$Bit $tmp4543 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4542, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp4543.value);
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Compiler* self, panda$io$File* p_file) {
    panda$collections$ListView* result4544;
    org$pandalanguage$pandac$ASTNode* parsed4547;
    panda$collections$Iterator* cl$Iter4550;
    org$pandalanguage$pandac$ClassDecl* cl4562;
    panda$core$Object* $tmp4545 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->scans, ((panda$collections$Key*) p_file));
    result4544 = ((panda$collections$ListView*) $tmp4545);
    if (((panda$core$Bit) { result4544 == NULL }).value) {
    {
        panda$core$String* $tmp4546 = panda$io$File$readFully$R$panda$core$String(p_file);
        org$pandalanguage$pandac$parser$Parser$start$panda$io$File$panda$core$String(self->parser, p_file, $tmp4546);
        org$pandalanguage$pandac$ASTNode* $tmp4548 = org$pandalanguage$pandac$parser$Parser$file$R$org$pandalanguage$pandac$ASTNode$Q(self->parser);
        parsed4547 = $tmp4548;
        if (((panda$core$Bit) { parsed4547 != NULL }).value) {
        {
            panda$collections$ListView* $tmp4549 = org$pandalanguage$pandac$Scanner$scan$panda$io$File$org$pandalanguage$pandac$ASTNode$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(self->scanner, p_file, parsed4547);
            result4544 = $tmp4549;
            {
                ITable* $tmp4551 = ((panda$collections$Iterable*) result4544)->$class->itable;
                while ($tmp4551->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp4551 = $tmp4551->next;
                }
                $fn4553 $tmp4552 = $tmp4551->methods[0];
                panda$collections$Iterator* $tmp4554 = $tmp4552(((panda$collections$Iterable*) result4544));
                cl$Iter4550 = $tmp4554;
                $l4555:;
                ITable* $tmp4557 = cl$Iter4550->$class->itable;
                while ($tmp4557->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp4557 = $tmp4557->next;
                }
                $fn4559 $tmp4558 = $tmp4557->methods[0];
                panda$core$Bit $tmp4560 = $tmp4558(cl$Iter4550);
                panda$core$Bit $tmp4561 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4560);
                if (!$tmp4561.value) goto $l4556;
                {
                    ITable* $tmp4563 = cl$Iter4550->$class->itable;
                    while ($tmp4563->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp4563 = $tmp4563->next;
                    }
                    $fn4565 $tmp4564 = $tmp4563->methods[1];
                    panda$core$Object* $tmp4566 = $tmp4564(cl$Iter4550);
                    cl4562 = ((org$pandalanguage$pandac$ClassDecl*) $tmp4566);
                    panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classes, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) cl4562)->name), ((panda$core$Object*) cl4562));
                }
                goto $l4555;
                $l4556:;
            }
        }
        }
        else {
        {
            panda$collections$Array* $tmp4567 = (panda$collections$Array*) malloc(40);
            $tmp4567->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp4567->refCount.value = 1;
            panda$collections$Array$init($tmp4567);
            result4544 = ((panda$collections$ListView*) $tmp4567);
        }
        }
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->scans, ((panda$collections$Key*) p_file), ((panda$core$Object*) result4544));
    }
    }
    return result4544;
}
void org$pandalanguage$pandac$Compiler$compile$panda$io$File(org$pandalanguage$pandac$Compiler* self, panda$io$File* p_file) {
    panda$collections$ListView* classes4569;
    panda$collections$Iterator* cl$Iter4571;
    org$pandalanguage$pandac$ClassDecl* cl4583;
    panda$collections$ListView* $tmp4570 = org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(self, p_file);
    classes4569 = $tmp4570;
    {
        ITable* $tmp4572 = ((panda$collections$Iterable*) classes4569)->$class->itable;
        while ($tmp4572->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4572 = $tmp4572->next;
        }
        $fn4574 $tmp4573 = $tmp4572->methods[0];
        panda$collections$Iterator* $tmp4575 = $tmp4573(((panda$collections$Iterable*) classes4569));
        cl$Iter4571 = $tmp4575;
        $l4576:;
        ITable* $tmp4578 = cl$Iter4571->$class->itable;
        while ($tmp4578->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4578 = $tmp4578->next;
        }
        $fn4580 $tmp4579 = $tmp4578->methods[0];
        panda$core$Bit $tmp4581 = $tmp4579(cl$Iter4571);
        panda$core$Bit $tmp4582 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4581);
        if (!$tmp4582.value) goto $l4577;
        {
            ITable* $tmp4584 = cl$Iter4571->$class->itable;
            while ($tmp4584->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4584 = $tmp4584->next;
            }
            $fn4586 $tmp4585 = $tmp4584->methods[1];
            panda$core$Object* $tmp4587 = $tmp4585(cl$Iter4571);
            cl4583 = ((org$pandalanguage$pandac$ClassDecl*) $tmp4587);
            org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$ClassDecl(self, cl4583);
        }
        goto $l4576;
        $l4577:;
    }
}
void org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, panda$core$String* p_msg) {
    panda$core$Object* $tmp4588 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
    org$pandalanguage$pandac$Compiler$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$ClassDecl*) $tmp4588)->source, p_position, p_msg);
}
void org$pandalanguage$pandac$Compiler$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$Compiler* self, panda$io$File* p_file, org$pandalanguage$pandac$Position p_pos, panda$core$String* p_msg) {
    if (self->reportErrors.value) {
    {
        panda$core$Int64 $tmp4589 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->errorCount, ((panda$core$Int64) { 1 }));
        self->errorCount = $tmp4589;
        panda$core$String* $tmp4590 = panda$io$File$name$R$panda$core$String(p_file);
        panda$core$String* $tmp4591 = panda$core$String$convert$R$panda$core$String($tmp4590);
        panda$core$String* $tmp4593 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4591, &$s4592);
        panda$core$String* $tmp4594 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp4593, ((panda$core$Object*) wrap_org$pandalanguage$pandac$Position(p_pos)));
        panda$core$String* $tmp4596 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4594, &$s4595);
        panda$core$String* $tmp4597 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4596, p_msg);
        panda$core$String* $tmp4599 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4597, &$s4598);
        panda$io$Console$printLine$panda$core$Object(((panda$core$Object*) $tmp4599));
    }
    }
}
void org$pandalanguage$pandac$Compiler$finish(org$pandalanguage$pandac$Compiler* self) {
    ITable* $tmp4600 = self->codeGenerator->$class->itable;
    while ($tmp4600->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
        $tmp4600 = $tmp4600->next;
    }
    $fn4602 $tmp4601 = $tmp4600->methods[5];
    $tmp4601(self->codeGenerator);
}

