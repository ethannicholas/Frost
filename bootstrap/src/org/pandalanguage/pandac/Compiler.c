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
typedef panda$collections$Iterator* (*$fn785)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn791)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn797)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn806)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn823)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn841)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn847)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn853)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn861)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn867)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn873)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn885)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn891)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn897)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn920)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn926)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn932)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn971)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn977)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn983)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn996)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1002)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1008)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1023)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1029)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1035)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1051)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1057)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1063)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1077)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1083)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1089)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1102)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1108)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1114)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1159)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1165)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1171)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1178)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1184)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1190)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1210)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1216)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1222)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1302)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn1413)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1419)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1425)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1451)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1457)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1463)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1589)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1593)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1596)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1681)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1687)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1693)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1842)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1965)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1971)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1977)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn2067)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2089)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Int64 (*$fn2111)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn2128)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2134)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2140)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn2156)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn2178)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn2252)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2270)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn2341)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn2359)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2365)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2371)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2402)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2408)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2414)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2451)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2457)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2463)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2486)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2492)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2498)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2926)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2932)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2938)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3070)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3076)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3082)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn3183)(panda$core$Object*);
typedef panda$core$Int64 (*$fn3294)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn3310)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3316)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3322)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3440)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3446)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3452)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3662)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3668)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3674)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3809)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3815)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3821)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3851)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3857)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3863)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3974)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3980)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3986)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4132)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4138)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4144)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4227)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4233)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4239)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4290)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4296)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4302)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4366)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4372)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4378)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4417)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4423)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4429)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4441)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4447)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4453)(panda$collections$Iterator*);
typedef void (*$fn4484)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$MethodDecl*, org$pandalanguage$pandac$IRNode*);
typedef void (*$fn4487)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$collections$Iterator* (*$fn4491)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4497)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4503)(panda$collections$Iterator*);
typedef void (*$fn4508)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn4511)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn4516)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$collections$Iterator* (*$fn4520)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4526)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4532)(panda$collections$Iterator*);
typedef void (*$fn4536)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$collections$Iterator* (*$fn4552)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4558)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4564)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4573)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4579)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4585)(panda$collections$Iterator*);
typedef void (*$fn4601)(org$pandalanguage$pandac$CodeGenerator*);

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
static panda$core$String $s760 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x69\x6E\x74\x5F\x6C\x69\x74\x65\x72\x61\x6C", 12, -6710647184408424492, NULL };
static panda$core$String $s1252 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x73\x75\x70\x65\x72\x27\x20\x63\x61\x6E\x20\x6F\x6E\x6C\x79\x20\x62\x65\x20\x75\x73\x65\x64\x20\x61\x73\x20\x70\x61\x72\x74\x20\x6F\x66\x20\x61\x20\x6D\x65\x74\x68\x6F\x64\x20\x63\x61\x6C\x6C", 49, 5687166824689512368, NULL };
static panda$core$String $s1297 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s1382 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 19485, NULL };
static panda$core$String $s1671 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 19485, NULL };
static panda$core$String $s1872 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27", 10, 875040426634827830, NULL };
static panda$core$String $s1874 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 14, 2262695563077912654, NULL };
static panda$core$String $s1877 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1902 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27", 10, 875040426634827830, NULL };
static panda$core$String $s1904 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 14, 2262695563077912654, NULL };
static panda$core$String $s1907 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1940 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 19485, NULL };
static panda$core$String $s1999 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27", 10, 875040426634827830, NULL };
static panda$core$String $s2001 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 14, 2262695563077912654, NULL };
static panda$core$String $s2004 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2044 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6C\x75\x65\x20\x6F\x66\x20\x74\x79\x70\x65\x20\x27", 15, -1620219380461029456, NULL };
static panda$core$String $s2046 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x70\x6F\x73\x73\x69\x62\x6C\x79\x20\x62\x65\x20\x61\x6E\x20\x69\x6E\x73\x74\x61\x6E\x63\x65\x20\x6F\x66\x20", 36, -427166674877421096, NULL };
static panda$core$String $s2048 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2050 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2162 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2163 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, 216, NULL };
static panda$core$String $s2166 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x65\x78\x70\x65\x63\x74\x65\x64\x20", 10, -1007140463547215113, NULL };
static panda$core$String $s2170 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x61\x72\x67\x75\x6D\x65\x6E\x74", 9, 1450721239526715900, NULL };
static panda$core$String $s2173 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2175 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x74\x20\x72\x65\x63\x65\x69\x76\x65\x64\x20", 13, -1301083486074551925, NULL };
static panda$core$String $s2181 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2205 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x64\x69\x72\x65\x63\x74\x6C\x79\x20\x63\x61\x6C\x6C\x20\x27\x69\x6E\x69\x74\x27\x20\x6F\x75\x74\x73\x69\x64\x65\x20\x6F\x66\x20\x61\x6E\x20\x69\x6E\x69\x74\x20\x6D\x65\x74\x68\x6F\x64", 53, 84993564105955720, NULL };
static panda$core$String $s2215 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x69\x6E\x69\x74\x27\x20\x6D\x61\x79\x20\x6F\x6E\x6C\x79\x20\x62\x65\x20\x63\x61\x6C\x6C\x65\x64\x20\x6F\x6E\x20\x27\x73\x65\x6C\x66\x27\x20\x6F\x72\x20\x27\x73\x75\x70\x65\x72\x27", 46, 5737688576853633111, NULL };
static panda$core$String $s2230 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x63\x61\x6C\x6C\x20\x69\x6E\x73\x74\x61\x6E\x63\x65\x20", 21, -1285496544752055923, NULL };
static panda$core$String $s2233 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x66\x72\x6F\x6D\x20\x61\x20\x40\x63\x6C\x61\x73\x73\x20\x63\x6F\x6E\x74\x65\x78\x74", 22, 6236893689928691337, NULL };
static panda$core$String $s2244 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x63\x61\x6C\x6C\x20\x63\x6C\x61\x73\x73\x20", 18, 4176321021903236102, NULL };
static panda$core$String $s2247 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x6F\x6E\x20\x61\x6E\x20\x69\x6E\x73\x74\x61\x6E\x63\x65", 15, 4946791728819903386, NULL };
static panda$core$String $s2283 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s2302 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6C\x61\x73\x73\x20\x27", 7, 213449334494206, NULL };
static panda$core$String $s2304 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x64\x6F\x65\x73\x20\x6E\x6F\x74\x20\x68\x61\x76\x65\x20\x61\x20\x6D\x65\x6D\x62\x65\x72\x20\x6E\x61\x6D\x65\x64\x20\x27", 32, -5677460192622646983, NULL };
static panda$core$String $s2307 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2314 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2316 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s2319 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x69\x73\x20\x6E\x6F\x74\x20\x61\x20\x6D\x65\x74\x68\x6F\x64", 17, 1918101523522592587, NULL };
static panda$core$String $s2346 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x6F\x20\x6D\x61\x74\x63\x68\x20\x66\x6F\x72\x20\x63\x61\x6C\x6C\x20\x74\x6F\x20\x27", 22, 7814600009206081200, NULL };
static panda$core$String $s2348 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s2351 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2355 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2373 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2374 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x27", 2, 14381, NULL };
static panda$core$String $s2375 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x77\x69\x74\x68\x20\x72\x65\x74\x75\x72\x6E\x20\x74\x79\x70\x65\x20\x27", 19, -3030064837581027794, NULL };
static panda$core$String $s2377 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2425 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x69\x74", 4, 213374837, NULL };
static panda$core$String $s2435 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6C\x75\x65\x20\x6F\x66\x20\x74\x79\x70\x65\x20\x27", 15, -1620219380461029456, NULL };
static panda$core$String $s2437 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x69\x73\x20\x6E\x6F\x74\x20\x61\x20\x6D\x65\x74\x68\x6F\x64", 17, 1918101523522592587, NULL };
static panda$core$String $s2445 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2447 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2465 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2468 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x3E\x28", 4, 146931305, NULL };
static panda$core$String $s2469 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x26\x3E\x28", 5, 14839819243, NULL };
static panda$core$String $s2482 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2500 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2503 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x3E\x28", 4, 146931305, NULL };
static panda$core$String $s2504 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x26\x3E\x28", 5, 14839819243, NULL };
static panda$core$String $s2521 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2B", 1, 144, NULL };
static panda$core$String $s2522 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D", 1, 146, NULL };
static panda$core$String $s2523 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 143, NULL };
static panda$core$String $s2524 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, 148, NULL };
static panda$core$String $s2525 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F\x2F", 2, 14995, NULL };
static panda$core$String $s2526 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 138, NULL };
static panda$core$String $s2527 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5E", 1, 195, NULL };
static panda$core$String $s2528 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3D", 1, 162, NULL };
static panda$core$String $s2529 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x3D", 2, 13595, NULL };
static panda$core$String $s2530 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 163, NULL };
static panda$core$String $s2531 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 161, NULL };
static panda$core$String $s2532 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E\x3D", 2, 16524, NULL };
static panda$core$String $s2533 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x3D", 2, 16322, NULL };
static panda$core$String $s2534 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1, 225, NULL };
static panda$core$String $s2535 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C\x7C", 2, 22849, NULL };
static panda$core$String $s2536 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s2537 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26\x26", 2, 14077, NULL };
static panda$core$String $s2538 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7E", 1, 227, NULL };
static panda$core$String $s2539 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7E\x7E", 2, 23053, NULL };
static panda$core$String $s2540 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21", 1, 134, NULL };
static panda$core$String $s2541 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x21", 2, 13567, NULL };
static panda$core$String $s2542 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x3C", 2, 16321, NULL };
static panda$core$String $s2543 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E\x3E", 2, 16525, NULL };
static panda$core$String $s2544 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 19485, NULL };
static panda$core$String $s2545 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A\x3D", 2, 16120, NULL };
static panda$core$String $s2546 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3D\x3D", 2, 16423, NULL };
static panda$core$String $s2547 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x3D\x3D", 3, 1373156, NULL };
static panda$core$String $s2658 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x76\x61\x6C\x69\x64\x20\x6E\x75\x6D\x65\x72\x69\x63\x20\x6F\x70\x65\x72\x61\x74\x69\x6F\x6E", 25, 9019145596080302696, NULL };
static panda$core$String $s2670 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D\x3A\x3D", 4, 198772404, NULL };
static panda$core$String $s2718 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6F\x6E\x76\x65\x72\x74", 7, 213482220537370, NULL };
static panda$core$String $s2722 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D\x3A\x3D", 4, 198772404, NULL };
static panda$core$String $s2820 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2823 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x6F\x70\x65\x72\x61\x74\x65\x20\x6F\x6E\x20\x27", 21, -3266050109438970469, NULL };
static panda$core$String $s2826 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20", 3, 1432616, NULL };
static panda$core$String $s2828 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2830 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2837 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2840 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x6F\x70\x65\x72\x61\x74\x65\x20\x6F\x6E\x20\x27", 21, -3266050109438970469, NULL };
static panda$core$String $s2843 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20", 3, 1432616, NULL };
static panda$core$String $s2845 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2847 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2869 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x61\x73\x73\x69\x67\x6E\x20\x74\x6F\x20\x74\x68\x69\x73\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6F\x6E", 32, -4891466264852316840, NULL };
static panda$core$String $s2881 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x61\x73\x73\x69\x67\x6E\x20\x74\x6F\x20\x74\x68\x69\x73\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6F\x6E", 32, -4891466264852316840, NULL };
static panda$core$String $s2898 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6F\x6E\x76\x65\x72\x74", 7, 213482220537370, NULL };
static panda$core$String $s2911 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 19485, NULL };
static panda$core$String $s2980 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2983 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x6F\x70\x65\x72\x61\x74\x65\x20\x6F\x6E\x20\x27", 21, -3266050109438970469, NULL };
static panda$core$String $s2986 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20\x27", 4, 144694255, NULL };
static panda$core$String $s2989 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3103 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x6D\x65\x74\x68\x6F\x64\x3E", 8, 17378158564789264, NULL };
static panda$core$String $s3119 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6E\x75\x6D\x62\x65\x72\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 30, 5304221197101987767, NULL };
static panda$core$String $s3121 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3129 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6E\x75\x6D\x62\x65\x72\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 30, 5304221197101987767, NULL };
static panda$core$String $s3131 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3185 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s3188 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3207 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6C\x61\x73\x73\x20\x27", 7, 213449334494206, NULL };
static panda$core$String $s3209 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x64\x6F\x65\x73\x20\x6E\x6F\x74\x20\x68\x61\x76\x65\x20\x61\x20\x6D\x65\x6D\x62\x65\x72\x20\x6E\x61\x6D\x65\x64\x20\x27", 32, -5677460192622646983, NULL };
static panda$core$String $s3212 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3279 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x75\x6E\x72\x65\x73\x6F\x6C\x76\x65\x64\x20\x72\x61\x6E\x67\x65\x3E", 18, -1293962867859660245, NULL };
static panda$core$String $s3288 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x72\x65\x66\x65\x72\x65\x6E\x63\x65\x20\x27\x73\x65\x6C\x66\x27\x20\x66\x72\x6F\x6D\x20\x61\x20\x40\x63\x6C\x61\x73\x73\x20\x6D\x65\x74\x68\x6F\x64", 44, -511889306060728385, NULL };
static panda$core$String $s3306 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3329 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s3332 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3336 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3347 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x72\x65\x66\x65\x72\x65\x6E\x63\x65\x20\x27\x73\x75\x70\x65\x72\x27\x20\x66\x72\x6F\x6D\x20\x61\x20\x40\x63\x6C\x61\x73\x73\x20\x6D\x65\x74\x68\x6F\x64", 45, 3734810722724983720, NULL };
static panda$core$String $s3355 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s3379 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6C\x75\x65\x20\x6F\x66\x20\x74\x79\x70\x65\x20\x27", 15, -1620219380461029456, NULL };
static panda$core$String $s3381 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x70\x6F\x73\x73\x69\x62\x6C\x79\x20\x62\x65\x20\x61\x6E\x20\x69\x6E\x73\x74\x61\x6E\x63\x65\x20\x6F\x66\x20", 36, -427166674877421096, NULL };
static panda$core$String $s3383 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3385 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3412 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x64\x6F\x65\x73\x20\x6E\x6F\x74\x20\x72\x65\x74\x75\x72\x6E\x20\x61\x20\x76\x61\x6C\x75\x65", 24, -3977552604268313933, NULL };
static panda$core$String $s3563 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 161, NULL };
static panda$core$String $s3567 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 163, NULL };
static panda$core$String $s3572 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x49\x74\x65\x72", 5, 14332680541, NULL };
static panda$core$String $s3595 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x65\x74\x5F\x64\x6F\x6E\x65", 8, 21980003879763538, NULL };
static panda$core$String $s3600 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21", 1, 134, NULL };
static panda$core$String $s3612 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x65\x78\x74", 4, 218436048, NULL };
static panda$core$String $s3698 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x74\x65\x72\x61\x74\x6F\x72", 8, 22210198075044275, NULL };
static panda$core$String $s3706 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6E\x20\x49\x74\x65\x72\x61\x62\x6C\x65\x20\x6F\x72\x20\x49\x74\x65\x72\x61\x74\x6F\x72\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 45, 562271959045909027, NULL };
static panda$core$String $s3708 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3771 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x63\x6C\x61\x72\x61\x74\x69\x6F\x6E\x20\x68\x61\x73\x20\x6E\x65\x69\x74\x68\x65\x72\x20\x61\x20\x74\x79\x70\x65\x20\x6E\x6F\x72\x20\x61\x20\x76\x61\x6C\x75\x65", 42, 71025131614347466, NULL };
static panda$core$String $s3832 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x62\x72\x65\x61\x6B\x20", 7, 149654778879689, NULL };
static panda$core$String $s3834 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20\x69\x6E\x73\x69\x64\x65\x20\x61\x20\x6C\x6F\x6F\x70\x20\x6C\x61\x62\x65\x6C\x6C\x65\x64\x20", 33, 5869484791969643332, NULL };
static panda$core$String $s3836 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3838 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A\x27", 2, 16098, NULL };
static panda$core$String $s3843 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x62\x72\x65\x61\x6B\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20\x69\x6E\x73\x69\x64\x65\x20\x61\x20\x6C\x6F\x6F\x70", 29, -2107280000252113069, NULL };
static panda$core$String $s3874 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x63\x6F\x6E\x74\x69\x6E\x75\x65\x20", 10, 6626032424543403513, NULL };
static panda$core$String $s3876 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20\x69\x6E\x73\x69\x64\x65\x20\x61\x20\x6C\x6F\x6F\x70\x20\x6C\x61\x62\x65\x6C\x6C\x65\x64\x20", 33, 5869484791969643332, NULL };
static panda$core$String $s3878 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3880 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A\x27", 2, 16098, NULL };
static panda$core$String $s3885 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x63\x6F\x6E\x74\x69\x6E\x75\x65\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20\x69\x6E\x73\x69\x64\x65\x20\x61\x20\x6C\x6F\x6F\x70", 32, -6048052453244835837, NULL };
static panda$core$String $s3899 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x72\x65\x74\x75\x72\x6E\x20\x61\x20\x76\x61\x6C\x75\x65\x20\x66\x72\x6F\x6D\x20\x61\x20\x6D\x65\x74\x68\x6F\x64\x20\x77\x69\x74\x68\x20\x6E\x6F\x20\x72\x65\x74\x75\x72\x6E\x20\x74\x79\x70\x65", 55, -6755143087675264705, NULL };
static panda$core$String $s3913 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x72\x65\x74\x75\x72\x6E\x20\x76\x61\x6C\x75\x65", 23, 6159277012237708805, NULL };
static panda$core$String $s3933 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6C\x75\x65", 5, 22890280642, NULL };
static panda$core$String $s4000 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3D", 1, 162, NULL };
static panda$core$String $s4037 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1, 225, NULL };
static panda$core$String $s4088 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x6D\x61\x74\x63\x68\x24", 7, 146584075981198, NULL };
static panda$core$String $s4090 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5F", 1, 196, NULL };
static panda$core$String $s4093 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4591 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A", 1, 159, NULL };
static panda$core$String $s4594 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A\x20\x65\x72\x72\x6F\x72\x3A\x20", 9, 1725281418740475535, NULL };
static panda$core$String $s4597 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };

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
    org$pandalanguage$pandac$Type* type763;
    org$pandalanguage$pandac$ClassDecl* result770;
    org$pandalanguage$pandac$Annotations* annotations772;
    panda$collections$Array* supertypes778;
    panda$collections$Iterator* intf$Iter782;
    org$pandalanguage$pandac$Type* intf794;
    panda$collections$HashMap* aliases800;
    panda$core$Range$LTpanda$core$Int64$GT $tmp803;
    panda$collections$Iterator* m$Iter838;
    org$pandalanguage$pandac$MethodDecl* m850;
    panda$collections$Array* parameters855;
    panda$collections$Iterator* p$Iter858;
    org$pandalanguage$pandac$MethodDecl$Parameter* p870;
    org$pandalanguage$pandac$MethodDecl* clone878;
    panda$collections$Iterator* f$Iter882;
    org$pandalanguage$pandac$FieldDecl* f894;
    org$pandalanguage$pandac$FieldDecl* clone899;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
    panda$core$Bit $tmp761 = panda$core$String$contains$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_rawType)->name, &$s760);
    panda$core$Bit $tmp762 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp761);
    PANDA_ASSERT($tmp762.value);
    org$pandalanguage$pandac$Type* $tmp764 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, p_rawType);
    type763 = $tmp764;
    panda$core$Bit $tmp765 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(type763->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp765.value) {
    {
        panda$core$Object* $tmp766 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(type763->subtypes, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$ClassDecl* $tmp767 = org$pandalanguage$pandac$Compiler$specialize$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl(self, p_cl, ((org$pandalanguage$pandac$Type*) $tmp766));
        return $tmp767;
    }
    }
    panda$core$Bit $tmp768 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(type763->typeKind, ((panda$core$Int64) { 10 }));
    if ($tmp768.value) {
    {
        return p_cl;
    }
    }
    panda$core$Bit $tmp769 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(type763->typeKind, ((panda$core$Int64) { 21 }));
    PANDA_ASSERT($tmp769.value);
    panda$core$Object* $tmp771 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) type763)->name));
    result770 = ((org$pandalanguage$pandac$ClassDecl*) $tmp771);
    if (((panda$core$Bit) { result770 == NULL }).value) {
    {
        panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_cl));
        org$pandalanguage$pandac$Annotations* $tmp773 = (org$pandalanguage$pandac$Annotations*) malloc(24);
        $tmp773->$class = (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class;
        $tmp773->refCount.value = 1;
        panda$core$Int64 $tmp775 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 11 }));
        panda$core$Int64 $tmp776 = panda$core$Int64$$BNOT$R$panda$core$Int64($tmp775);
        panda$core$Int64 $tmp777 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(p_cl->annotations->flags, $tmp776);
        org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp773, $tmp777);
        annotations772 = $tmp773;
        panda$collections$Array* $tmp779 = (panda$collections$Array*) malloc(40);
        $tmp779->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp779->refCount.value = 1;
        panda$collections$Array$init($tmp779);
        supertypes778 = $tmp779;
        org$pandalanguage$pandac$Type* $tmp781 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, type763, p_cl->rawSuper);
        panda$collections$Array$add$panda$collections$Array$T(supertypes778, ((panda$core$Object*) $tmp781));
        {
            ITable* $tmp783 = ((panda$collections$Iterable*) p_cl->rawInterfaces)->$class->itable;
            while ($tmp783->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp783 = $tmp783->next;
            }
            $fn785 $tmp784 = $tmp783->methods[0];
            panda$collections$Iterator* $tmp786 = $tmp784(((panda$collections$Iterable*) p_cl->rawInterfaces));
            intf$Iter782 = $tmp786;
            $l787:;
            ITable* $tmp789 = intf$Iter782->$class->itable;
            while ($tmp789->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp789 = $tmp789->next;
            }
            $fn791 $tmp790 = $tmp789->methods[0];
            panda$core$Bit $tmp792 = $tmp790(intf$Iter782);
            panda$core$Bit $tmp793 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp792);
            if (!$tmp793.value) goto $l788;
            {
                ITable* $tmp795 = intf$Iter782->$class->itable;
                while ($tmp795->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp795 = $tmp795->next;
                }
                $fn797 $tmp796 = $tmp795->methods[1];
                panda$core$Object* $tmp798 = $tmp796(intf$Iter782);
                intf794 = ((org$pandalanguage$pandac$Type*) $tmp798);
                org$pandalanguage$pandac$Type* $tmp799 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, type763, intf794);
                panda$collections$Array$add$panda$collections$Array$T(supertypes778, ((panda$core$Object*) $tmp799));
            }
            goto $l787;
            $l788:;
        }
        panda$collections$HashMap* $tmp801 = (panda$collections$HashMap*) malloc(56);
        $tmp801->$class = (panda$core$Class*) &panda$collections$HashMap$class;
        $tmp801->refCount.value = 1;
        panda$collections$HashMap$init$panda$collections$MapView$LTpanda$collections$HashMap$K$Cpanda$collections$HashMap$V$GT($tmp801, p_cl->aliases);
        aliases800 = $tmp801;
        ITable* $tmp804 = ((panda$collections$CollectionView*) p_cl->parameters)->$class->itable;
        while ($tmp804->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp804 = $tmp804->next;
        }
        $fn806 $tmp805 = $tmp804->methods[0];
        panda$core$Int64 $tmp807 = $tmp805(((panda$collections$CollectionView*) p_cl->parameters));
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp803, ((panda$core$Int64) { 0 }), $tmp807, ((panda$core$Bit) { false }));
        int64_t $tmp809 = $tmp803.min.value;
        panda$core$Int64 i808 = { $tmp809 };
        int64_t $tmp811 = $tmp803.max.value;
        bool $tmp812 = $tmp803.inclusive.value;
        if ($tmp812) goto $l819; else goto $l820;
        $l819:;
        if ($tmp809 <= $tmp811) goto $l813; else goto $l815;
        $l820:;
        if ($tmp809 < $tmp811) goto $l813; else goto $l815;
        $l813:;
        {
            ITable* $tmp821 = ((panda$collections$ListView*) p_cl->parameters)->$class->itable;
            while ($tmp821->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp821 = $tmp821->next;
            }
            $fn823 $tmp822 = $tmp821->methods[0];
            panda$core$Object* $tmp824 = $tmp822(((panda$collections$ListView*) p_cl->parameters), i808);
            panda$core$Int64 $tmp825 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i808, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp826 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(type763->subtypes, $tmp825);
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(aliases800, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp824))->name), ((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp826))->name));
        }
        $l816:;
        int64_t $tmp828 = $tmp811 - i808.value;
        if ($tmp812) goto $l829; else goto $l830;
        $l829:;
        if ($tmp828 >= 1) goto $l827; else goto $l815;
        $l830:;
        if ($tmp828 > 1) goto $l827; else goto $l815;
        $l827:;
        i808.value += 1;
        goto $l813;
        $l815:;
        org$pandalanguage$pandac$ClassDecl* $tmp833 = (org$pandalanguage$pandac$ClassDecl*) malloc(193);
        $tmp833->$class = (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$class;
        $tmp833->refCount.value = 1;
        panda$collections$Array* $tmp835 = (panda$collections$Array*) malloc(40);
        $tmp835->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp835->refCount.value = 1;
        panda$collections$Array$init($tmp835);
        panda$core$Object* $tmp837 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_cl->symbolTable->parents, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$ClassDecl$init$panda$io$File$org$pandalanguage$pandac$Position$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable($tmp833, p_cl->source, ((org$pandalanguage$pandac$Symbol*) p_cl)->position, ((panda$collections$MapView*) aliases800), p_cl->doccomment, annotations772, p_cl->classKind, ((org$pandalanguage$pandac$Symbol*) type763)->name, ((panda$collections$ListView*) supertypes778), $tmp835, ((org$pandalanguage$pandac$SymbolTable*) $tmp837));
        result770 = $tmp833;
        result770->external = ((panda$core$Bit) { false });
        {
            ITable* $tmp839 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
            while ($tmp839->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp839 = $tmp839->next;
            }
            $fn841 $tmp840 = $tmp839->methods[0];
            panda$collections$Iterator* $tmp842 = $tmp840(((panda$collections$Iterable*) p_cl->methods));
            m$Iter838 = $tmp842;
            $l843:;
            ITable* $tmp845 = m$Iter838->$class->itable;
            while ($tmp845->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp845 = $tmp845->next;
            }
            $fn847 $tmp846 = $tmp845->methods[0];
            panda$core$Bit $tmp848 = $tmp846(m$Iter838);
            panda$core$Bit $tmp849 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp848);
            if (!$tmp849.value) goto $l844;
            {
                ITable* $tmp851 = m$Iter838->$class->itable;
                while ($tmp851->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp851 = $tmp851->next;
                }
                $fn853 $tmp852 = $tmp851->methods[1];
                panda$core$Object* $tmp854 = $tmp852(m$Iter838);
                m850 = ((org$pandalanguage$pandac$MethodDecl*) $tmp854);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m850);
                panda$collections$Array* $tmp856 = (panda$collections$Array*) malloc(40);
                $tmp856->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp856->refCount.value = 1;
                panda$collections$Array$init($tmp856);
                parameters855 = $tmp856;
                {
                    ITable* $tmp859 = ((panda$collections$Iterable*) m850->parameters)->$class->itable;
                    while ($tmp859->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp859 = $tmp859->next;
                    }
                    $fn861 $tmp860 = $tmp859->methods[0];
                    panda$collections$Iterator* $tmp862 = $tmp860(((panda$collections$Iterable*) m850->parameters));
                    p$Iter858 = $tmp862;
                    $l863:;
                    ITable* $tmp865 = p$Iter858->$class->itable;
                    while ($tmp865->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp865 = $tmp865->next;
                    }
                    $fn867 $tmp866 = $tmp865->methods[0];
                    panda$core$Bit $tmp868 = $tmp866(p$Iter858);
                    panda$core$Bit $tmp869 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp868);
                    if (!$tmp869.value) goto $l864;
                    {
                        ITable* $tmp871 = p$Iter858->$class->itable;
                        while ($tmp871->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp871 = $tmp871->next;
                        }
                        $fn873 $tmp872 = $tmp871->methods[1];
                        panda$core$Object* $tmp874 = $tmp872(p$Iter858);
                        p870 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp874);
                        org$pandalanguage$pandac$MethodDecl$Parameter* $tmp875 = (org$pandalanguage$pandac$MethodDecl$Parameter*) malloc(32);
                        $tmp875->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class;
                        $tmp875->refCount.value = 1;
                        org$pandalanguage$pandac$Type* $tmp877 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, type763, p870->type);
                        org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp875, p870->name, $tmp877);
                        panda$collections$Array$add$panda$collections$Array$T(parameters855, ((panda$core$Object*) $tmp875));
                    }
                    goto $l863;
                    $l864:;
                }
                org$pandalanguage$pandac$MethodDecl* $tmp879 = (org$pandalanguage$pandac$MethodDecl*) malloc(136);
                $tmp879->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class;
                $tmp879->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp881 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, type763, m850->returnType);
                org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp879, result770, ((org$pandalanguage$pandac$Symbol*) m850)->position, m850->doccomment, m850->annotations, m850->methodKind, ((org$pandalanguage$pandac$Symbol*) m850)->name, parameters855, $tmp881, m850->body);
                clone878 = $tmp879;
                panda$collections$Array$add$panda$collections$Array$T(result770->methods, ((panda$core$Object*) clone878));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result770->symbolTable, ((org$pandalanguage$pandac$Symbol*) clone878));
            }
            goto $l843;
            $l844:;
        }
        {
            ITable* $tmp883 = ((panda$collections$Iterable*) p_cl->fields)->$class->itable;
            while ($tmp883->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp883 = $tmp883->next;
            }
            $fn885 $tmp884 = $tmp883->methods[0];
            panda$collections$Iterator* $tmp886 = $tmp884(((panda$collections$Iterable*) p_cl->fields));
            f$Iter882 = $tmp886;
            $l887:;
            ITable* $tmp889 = f$Iter882->$class->itable;
            while ($tmp889->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp889 = $tmp889->next;
            }
            $fn891 $tmp890 = $tmp889->methods[0];
            panda$core$Bit $tmp892 = $tmp890(f$Iter882);
            panda$core$Bit $tmp893 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp892);
            if (!$tmp893.value) goto $l888;
            {
                ITable* $tmp895 = f$Iter882->$class->itable;
                while ($tmp895->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp895 = $tmp895->next;
                }
                $fn897 $tmp896 = $tmp895->methods[1];
                panda$core$Object* $tmp898 = $tmp896(f$Iter882);
                f894 = ((org$pandalanguage$pandac$FieldDecl*) $tmp898);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self, f894);
                org$pandalanguage$pandac$FieldDecl* $tmp900 = (org$pandalanguage$pandac$FieldDecl*) malloc(113);
                $tmp900->$class = (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class;
                $tmp900->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp902 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, type763, f894->type);
                org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp900, result770, ((org$pandalanguage$pandac$Symbol*) f894)->position, f894->doccomment, f894->annotations, f894->fieldKind, ((org$pandalanguage$pandac$Symbol*) f894)->name, $tmp902, f894->rawValue);
                clone899 = $tmp900;
                panda$collections$Array$add$panda$collections$Array$T(result770->fields, ((panda$core$Object*) clone899));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result770->symbolTable, ((org$pandalanguage$pandac$Symbol*) clone899));
            }
            goto $l887;
            $l888:;
        }
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classes, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) result770)->name), ((panda$core$Object*) result770));
        panda$collections$Array$add$panda$collections$Array$T(self->compilationQueue, ((panda$core$Object*) result770));
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, result770);
    }
    }
    return result770;
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type) {
    org$pandalanguage$pandac$ClassDecl* result903;
    PANDA_ASSERT(p_type->resolved.value);
    switch (p_type->typeKind.value) {
        case 10:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp904 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Position$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Symbol*) p_type)->position, ((org$pandalanguage$pandac$Symbol*) p_type)->name);
            result903 = $tmp904;
        }
        break;
        case 11:
        case 21:
        {
            panda$core$Object* $tmp905 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$ClassDecl* $tmp906 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Type*) $tmp905));
            result903 = $tmp906;
        }
        break;
        case 22:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp907 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_type->parameter->bound);
            return $tmp907;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
    panda$core$Bit $tmp908 = org$pandalanguage$pandac$Annotations$isSpecialize$R$panda$core$Bit(result903->annotations);
    if ($tmp908.value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp909 = org$pandalanguage$pandac$Compiler$specialize$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl(self, result903, p_type);
        result903 = $tmp909;
    }
    }
    return result903;
}
panda$collections$Set* org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_t) {
    org$pandalanguage$pandac$ClassDecl* cl910;
    panda$collections$Set* result912;
    panda$collections$Iterator* intf$Iter917;
    org$pandalanguage$pandac$Type* intf929;
    org$pandalanguage$pandac$ClassDecl* $tmp911 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_t);
    cl910 = $tmp911;
    PANDA_ASSERT(((panda$core$Bit) { cl910 != NULL }).value);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, cl910);
    panda$collections$Set* $tmp913 = (panda$collections$Set*) malloc(24);
    $tmp913->$class = (panda$core$Class*) &panda$collections$Set$class;
    $tmp913->refCount.value = 1;
    panda$collections$Set$init($tmp913);
    result912 = $tmp913;
    if (((panda$core$Bit) { cl910->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp915 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_t, cl910->rawSuper);
        panda$collections$Set* $tmp916 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self, $tmp915);
        panda$collections$Set$addAll$panda$collections$CollectionView$LTpanda$collections$Set$T$GT(result912, ((panda$collections$CollectionView*) $tmp916));
    }
    }
    {
        ITable* $tmp918 = ((panda$collections$Iterable*) cl910->rawInterfaces)->$class->itable;
        while ($tmp918->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp918 = $tmp918->next;
        }
        $fn920 $tmp919 = $tmp918->methods[0];
        panda$collections$Iterator* $tmp921 = $tmp919(((panda$collections$Iterable*) cl910->rawInterfaces));
        intf$Iter917 = $tmp921;
        $l922:;
        ITable* $tmp924 = intf$Iter917->$class->itable;
        while ($tmp924->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp924 = $tmp924->next;
        }
        $fn926 $tmp925 = $tmp924->methods[0];
        panda$core$Bit $tmp927 = $tmp925(intf$Iter917);
        panda$core$Bit $tmp928 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp927);
        if (!$tmp928.value) goto $l923;
        {
            ITable* $tmp930 = intf$Iter917->$class->itable;
            while ($tmp930->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp930 = $tmp930->next;
            }
            $fn932 $tmp931 = $tmp930->methods[1];
            panda$core$Object* $tmp933 = $tmp931(intf$Iter917);
            intf929 = ((org$pandalanguage$pandac$Type*) $tmp933);
            org$pandalanguage$pandac$Type* $tmp934 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_t, intf929);
            panda$collections$Set* $tmp935 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self, $tmp934);
            panda$collections$Set$addAll$panda$collections$CollectionView$LTpanda$collections$Set$T$GT(result912, ((panda$collections$CollectionView*) $tmp935));
        }
        goto $l922;
        $l923:;
    }
    panda$core$Bit $tmp936 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(cl910->classKind, ((panda$core$Int64) { 5012 }));
    if ($tmp936.value) {
    {
        panda$collections$Set$add$panda$collections$Set$T(result912, ((panda$collections$Key*) p_t));
    }
    }
    return result912;
}
panda$core$Bit org$pandalanguage$pandac$Compiler$signatureMatch$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_t1, org$pandalanguage$pandac$Type* p_t2) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp942;
    panda$core$Bit $tmp937 = org$pandalanguage$pandac$Type$isMethod$R$panda$core$Bit(p_t1);
    PANDA_ASSERT($tmp937.value);
    panda$core$Bit $tmp938 = org$pandalanguage$pandac$Type$isMethod$R$panda$core$Bit(p_t2);
    PANDA_ASSERT($tmp938.value);
    panda$core$Int64 $tmp939 = panda$collections$Array$get_count$R$panda$core$Int64(p_t1->subtypes);
    panda$core$Int64 $tmp940 = panda$collections$Array$get_count$R$panda$core$Int64(p_t2->subtypes);
    panda$core$Bit $tmp941 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp939, $tmp940);
    if ($tmp941.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Int64 $tmp943 = panda$collections$Array$get_count$R$panda$core$Int64(p_t1->subtypes);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp942, ((panda$core$Int64) { 0 }), $tmp943, ((panda$core$Bit) { false }));
    int64_t $tmp945 = $tmp942.min.value;
    panda$core$Int64 i944 = { $tmp945 };
    int64_t $tmp947 = $tmp942.max.value;
    bool $tmp948 = $tmp942.inclusive.value;
    if ($tmp948) goto $l955; else goto $l956;
    $l955:;
    if ($tmp945 <= $tmp947) goto $l949; else goto $l951;
    $l956:;
    if ($tmp945 < $tmp947) goto $l949; else goto $l951;
    $l949:;
    {
        panda$core$Object* $tmp957 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t1->subtypes, i944);
        panda$core$Object* $tmp958 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t2->subtypes, i944);
        panda$core$Bit $tmp959 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp957), ((org$pandalanguage$pandac$Type*) $tmp958));
        if ($tmp959.value) {
        {
            return ((panda$core$Bit) { false });
        }
        }
    }
    $l952:;
    int64_t $tmp961 = $tmp947 - i944.value;
    if ($tmp948) goto $l962; else goto $l963;
    $l962:;
    if ($tmp961 >= 1) goto $l960; else goto $l951;
    $l963:;
    if ($tmp961 > 1) goto $l960; else goto $l951;
    $l960:;
    i944.value += 1;
    goto $l949;
    $l951:;
    return ((panda$core$Bit) { true });
}
org$pandalanguage$pandac$MethodDecl* org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_owner, panda$core$String* p_name, org$pandalanguage$pandac$Type* p_methodType, panda$core$Bit p_checkInterfaces) {
    org$pandalanguage$pandac$ClassDecl* cl966;
    panda$collections$Iterator* test$Iter968;
    org$pandalanguage$pandac$MethodDecl* test980;
    panda$collections$Iterator* raw$Iter993;
    org$pandalanguage$pandac$Type* raw1005;
    org$pandalanguage$pandac$MethodDecl* result1010;
    org$pandalanguage$pandac$ClassDecl* $tmp967 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_owner);
    cl966 = $tmp967;
    PANDA_ASSERT(((panda$core$Bit) { cl966 != NULL }).value);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, cl966);
    {
        ITable* $tmp969 = ((panda$collections$Iterable*) cl966->methods)->$class->itable;
        while ($tmp969->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp969 = $tmp969->next;
        }
        $fn971 $tmp970 = $tmp969->methods[0];
        panda$collections$Iterator* $tmp972 = $tmp970(((panda$collections$Iterable*) cl966->methods));
        test$Iter968 = $tmp972;
        $l973:;
        ITable* $tmp975 = test$Iter968->$class->itable;
        while ($tmp975->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp975 = $tmp975->next;
        }
        $fn977 $tmp976 = $tmp975->methods[0];
        panda$core$Bit $tmp978 = $tmp976(test$Iter968);
        panda$core$Bit $tmp979 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp978);
        if (!$tmp979.value) goto $l974;
        {
            ITable* $tmp981 = test$Iter968->$class->itable;
            while ($tmp981->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp981 = $tmp981->next;
            }
            $fn983 $tmp982 = $tmp981->methods[1];
            panda$core$Object* $tmp984 = $tmp982(test$Iter968);
            test980 = ((org$pandalanguage$pandac$MethodDecl*) $tmp984);
            panda$core$Bit $tmp985 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) test980)->name, p_name);
            if ($tmp985.value) {
            {
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, test980);
                org$pandalanguage$pandac$Type* $tmp986 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, test980);
                org$pandalanguage$pandac$Type* $tmp987 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_owner, $tmp986);
                panda$core$Bit $tmp988 = org$pandalanguage$pandac$Compiler$signatureMatch$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, $tmp987, p_methodType);
                if ($tmp988.value) {
                {
                    return test980;
                }
                }
            }
            }
        }
        goto $l973;
        $l974:;
    }
    bool $tmp989 = p_checkInterfaces.value;
    if ($tmp989) goto $l990;
    panda$core$Bit $tmp991 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(cl966->classKind, ((panda$core$Int64) { 5012 }));
    $tmp989 = $tmp991.value;
    $l990:;
    panda$core$Bit $tmp992 = { $tmp989 };
    if ($tmp992.value) {
    {
        {
            ITable* $tmp994 = ((panda$collections$Iterable*) cl966->rawInterfaces)->$class->itable;
            while ($tmp994->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp994 = $tmp994->next;
            }
            $fn996 $tmp995 = $tmp994->methods[0];
            panda$collections$Iterator* $tmp997 = $tmp995(((panda$collections$Iterable*) cl966->rawInterfaces));
            raw$Iter993 = $tmp997;
            $l998:;
            ITable* $tmp1000 = raw$Iter993->$class->itable;
            while ($tmp1000->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1000 = $tmp1000->next;
            }
            $fn1002 $tmp1001 = $tmp1000->methods[0];
            panda$core$Bit $tmp1003 = $tmp1001(raw$Iter993);
            panda$core$Bit $tmp1004 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1003);
            if (!$tmp1004.value) goto $l999;
            {
                ITable* $tmp1006 = raw$Iter993->$class->itable;
                while ($tmp1006->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1006 = $tmp1006->next;
                }
                $fn1008 $tmp1007 = $tmp1006->methods[1];
                panda$core$Object* $tmp1009 = $tmp1007(raw$Iter993);
                raw1005 = ((org$pandalanguage$pandac$Type*) $tmp1009);
                org$pandalanguage$pandac$Type* $tmp1011 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_owner, raw1005);
                org$pandalanguage$pandac$MethodDecl* $tmp1012 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp1011, p_name, p_methodType, p_checkInterfaces);
                result1010 = $tmp1012;
                if (((panda$core$Bit) { result1010 != NULL }).value) {
                {
                    return result1010;
                }
                }
            }
            goto $l998;
            $l999:;
        }
    }
    }
    if (((panda$core$Bit) { cl966->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp1013 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_owner, cl966->rawSuper);
        org$pandalanguage$pandac$MethodDecl* $tmp1014 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp1013, p_name, p_methodType, p_checkInterfaces);
        return $tmp1014;
    }
    }
    return NULL;
}
org$pandalanguage$pandac$MethodDecl* org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$Type* methodType1016;
    org$pandalanguage$pandac$Type* owner1018;
    panda$collections$Iterator* raw$Iter1020;
    org$pandalanguage$pandac$Type* raw1032;
    org$pandalanguage$pandac$MethodDecl* result1037;
    org$pandalanguage$pandac$MethodDecl* result1040;
    if (p_m->overrideKnown.value) {
    {
        return p_m->overridden;
    }
    }
    panda$core$Bit $tmp1015 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 59 }));
    if ($tmp1015.value) {
    {
        p_m->overrideKnown = ((panda$core$Bit) { true });
        return NULL;
    }
    }
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
    org$pandalanguage$pandac$Type* $tmp1017 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, p_m);
    methodType1016 = $tmp1017;
    org$pandalanguage$pandac$Type* $tmp1019 = org$pandalanguage$pandac$ClassDecl$typeWithParameters$R$org$pandalanguage$pandac$Type(p_m->owner);
    owner1018 = $tmp1019;
    {
        ITable* $tmp1021 = ((panda$collections$Iterable*) p_m->owner->rawInterfaces)->$class->itable;
        while ($tmp1021->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1021 = $tmp1021->next;
        }
        $fn1023 $tmp1022 = $tmp1021->methods[0];
        panda$collections$Iterator* $tmp1024 = $tmp1022(((panda$collections$Iterable*) p_m->owner->rawInterfaces));
        raw$Iter1020 = $tmp1024;
        $l1025:;
        ITable* $tmp1027 = raw$Iter1020->$class->itable;
        while ($tmp1027->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1027 = $tmp1027->next;
        }
        $fn1029 $tmp1028 = $tmp1027->methods[0];
        panda$core$Bit $tmp1030 = $tmp1028(raw$Iter1020);
        panda$core$Bit $tmp1031 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1030);
        if (!$tmp1031.value) goto $l1026;
        {
            ITable* $tmp1033 = raw$Iter1020->$class->itable;
            while ($tmp1033->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1033 = $tmp1033->next;
            }
            $fn1035 $tmp1034 = $tmp1033->methods[1];
            panda$core$Object* $tmp1036 = $tmp1034(raw$Iter1020);
            raw1032 = ((org$pandalanguage$pandac$Type*) $tmp1036);
            org$pandalanguage$pandac$Type* $tmp1038 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, owner1018, raw1032);
            org$pandalanguage$pandac$MethodDecl* $tmp1039 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp1038, ((org$pandalanguage$pandac$Symbol*) p_m)->name, methodType1016, ((panda$core$Bit) { true }));
            result1037 = $tmp1039;
            if (((panda$core$Bit) { result1037 != NULL }).value) {
            {
                p_m->overrideKnown = ((panda$core$Bit) { true });
                p_m->overridden = result1037;
                return result1037;
            }
            }
        }
        goto $l1025;
        $l1026:;
    }
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_m->owner);
    if (((panda$core$Bit) { p_m->owner->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp1041 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, owner1018, p_m->owner->rawSuper);
        org$pandalanguage$pandac$MethodDecl* $tmp1042 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp1041, ((org$pandalanguage$pandac$Symbol*) p_m)->name, methodType1016, ((panda$core$Bit) { true }));
        result1040 = $tmp1042;
        p_m->overrideKnown = ((panda$core$Bit) { true });
        p_m->overridden = result1040;
        return result1040;
    }
    }
    p_m->overrideKnown = ((panda$core$Bit) { true });
    return NULL;
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$interfaceMethods$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl, org$pandalanguage$pandac$Type* p_intf) {
    org$pandalanguage$pandac$ClassDecl* intfClass1043;
    panda$collections$Array* result1045;
    panda$collections$Iterator* m$Iter1048;
    org$pandalanguage$pandac$MethodDecl* m1060;
    org$pandalanguage$pandac$MethodDecl* found1065;
    org$pandalanguage$pandac$ClassDecl* $tmp1044 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_intf);
    intfClass1043 = $tmp1044;
    PANDA_ASSERT(((panda$core$Bit) { intfClass1043 != NULL }).value);
    panda$collections$Array* $tmp1046 = (panda$collections$Array*) malloc(40);
    $tmp1046->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1046->refCount.value = 1;
    panda$collections$Array$init($tmp1046);
    result1045 = $tmp1046;
    {
        ITable* $tmp1049 = ((panda$collections$Iterable*) intfClass1043->methods)->$class->itable;
        while ($tmp1049->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1049 = $tmp1049->next;
        }
        $fn1051 $tmp1050 = $tmp1049->methods[0];
        panda$collections$Iterator* $tmp1052 = $tmp1050(((panda$collections$Iterable*) intfClass1043->methods));
        m$Iter1048 = $tmp1052;
        $l1053:;
        ITable* $tmp1055 = m$Iter1048->$class->itable;
        while ($tmp1055->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1055 = $tmp1055->next;
        }
        $fn1057 $tmp1056 = $tmp1055->methods[0];
        panda$core$Bit $tmp1058 = $tmp1056(m$Iter1048);
        panda$core$Bit $tmp1059 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1058);
        if (!$tmp1059.value) goto $l1054;
        {
            ITable* $tmp1061 = m$Iter1048->$class->itable;
            while ($tmp1061->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1061 = $tmp1061->next;
            }
            $fn1063 $tmp1062 = $tmp1061->methods[1];
            panda$core$Object* $tmp1064 = $tmp1062(m$Iter1048);
            m1060 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1064);
            org$pandalanguage$pandac$Type* $tmp1066 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
            org$pandalanguage$pandac$Type* $tmp1067 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, m1060);
            org$pandalanguage$pandac$Type* $tmp1068 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_intf, $tmp1067);
            org$pandalanguage$pandac$MethodDecl* $tmp1069 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp1066, ((org$pandalanguage$pandac$Symbol*) m1060)->name, $tmp1068, ((panda$core$Bit) { false }));
            found1065 = $tmp1069;
            PANDA_ASSERT(((panda$core$Bit) { found1065 != NULL }).value);
            panda$collections$Array$add$panda$collections$Array$T(result1045, ((panda$core$Object*) found1065));
        }
        goto $l1053;
        $l1054:;
    }
    return ((panda$collections$ListView*) result1045);
}
org$pandalanguage$pandac$SymbolTable* org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$ClassDecl* superCl1071;
    panda$collections$Iterator* rawIntf$Iter1074;
    org$pandalanguage$pandac$Type* rawIntf1086;
    org$pandalanguage$pandac$ClassDecl* intf1091;
    panda$core$Bit $tmp1070 = panda$core$Bit$$NOT$R$panda$core$Bit(p_cl->symbolTableResolved);
    if ($tmp1070.value) {
    {
        p_cl->symbolTableResolved = ((panda$core$Bit) { true });
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
        if (((panda$core$Bit) { p_cl->rawSuper != NULL }).value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp1072 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_cl->rawSuper);
            superCl1071 = $tmp1072;
            if (((panda$core$Bit) { superCl1071 != NULL }).value) {
            {
                org$pandalanguage$pandac$SymbolTable* $tmp1073 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, superCl1071);
                panda$collections$Array$add$panda$collections$Array$T(p_cl->symbolTable->parents, ((panda$core$Object*) $tmp1073));
            }
            }
        }
        }
        {
            ITable* $tmp1075 = ((panda$collections$Iterable*) p_cl->rawInterfaces)->$class->itable;
            while ($tmp1075->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1075 = $tmp1075->next;
            }
            $fn1077 $tmp1076 = $tmp1075->methods[0];
            panda$collections$Iterator* $tmp1078 = $tmp1076(((panda$collections$Iterable*) p_cl->rawInterfaces));
            rawIntf$Iter1074 = $tmp1078;
            $l1079:;
            ITable* $tmp1081 = rawIntf$Iter1074->$class->itable;
            while ($tmp1081->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1081 = $tmp1081->next;
            }
            $fn1083 $tmp1082 = $tmp1081->methods[0];
            panda$core$Bit $tmp1084 = $tmp1082(rawIntf$Iter1074);
            panda$core$Bit $tmp1085 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1084);
            if (!$tmp1085.value) goto $l1080;
            {
                ITable* $tmp1087 = rawIntf$Iter1074->$class->itable;
                while ($tmp1087->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1087 = $tmp1087->next;
                }
                $fn1089 $tmp1088 = $tmp1087->methods[1];
                panda$core$Object* $tmp1090 = $tmp1088(rawIntf$Iter1074);
                rawIntf1086 = ((org$pandalanguage$pandac$Type*) $tmp1090);
                org$pandalanguage$pandac$ClassDecl* $tmp1092 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, rawIntf1086);
                intf1091 = $tmp1092;
                if (((panda$core$Bit) { intf1091 != NULL }).value) {
                {
                    org$pandalanguage$pandac$SymbolTable* $tmp1093 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, intf1091);
                    panda$collections$Array$add$panda$collections$Array$T(p_cl->symbolTable->parents, ((panda$core$Object*) $tmp1093));
                }
                }
            }
            goto $l1079;
            $l1080:;
        }
    }
    }
    return p_cl->symbolTable;
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$ClassDecl* superCl1096;
    panda$collections$Iterator* derived$Iter1099;
    org$pandalanguage$pandac$MethodDecl* derived1111;
    panda$core$Bit found1121;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1122;
    org$pandalanguage$pandac$MethodDecl* base1137;
    panda$core$Int64 $tmp1094 = panda$collections$Array$get_count$R$panda$core$Int64(p_cl->virtualMethods);
    panda$core$Bit $tmp1095 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1094, ((panda$core$Int64) { 0 }));
    if ($tmp1095.value) {
    {
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
        panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_cl));
        if (((panda$core$Bit) { p_cl->rawSuper != NULL }).value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp1097 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_cl->rawSuper);
            superCl1096 = $tmp1097;
            if (((panda$core$Bit) { superCl1096 == NULL }).value) {
            {
                panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
                return ((panda$collections$ListView*) p_cl->virtualMethods);
            }
            }
            panda$collections$ListView* $tmp1098 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self, superCl1096);
            panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(p_cl->virtualMethods, ((panda$collections$CollectionView*) $tmp1098));
        }
        }
        {
            ITable* $tmp1100 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
            while ($tmp1100->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1100 = $tmp1100->next;
            }
            $fn1102 $tmp1101 = $tmp1100->methods[0];
            panda$collections$Iterator* $tmp1103 = $tmp1101(((panda$collections$Iterable*) p_cl->methods));
            derived$Iter1099 = $tmp1103;
            $l1104:;
            ITable* $tmp1106 = derived$Iter1099->$class->itable;
            while ($tmp1106->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1106 = $tmp1106->next;
            }
            $fn1108 $tmp1107 = $tmp1106->methods[0];
            panda$core$Bit $tmp1109 = $tmp1107(derived$Iter1099);
            panda$core$Bit $tmp1110 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1109);
            if (!$tmp1110.value) goto $l1105;
            {
                ITable* $tmp1112 = derived$Iter1099->$class->itable;
                while ($tmp1112->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1112 = $tmp1112->next;
                }
                $fn1114 $tmp1113 = $tmp1112->methods[1];
                panda$core$Object* $tmp1115 = $tmp1113(derived$Iter1099);
                derived1111 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1115);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, derived1111);
                panda$core$Bit $tmp1117 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(derived1111->methodKind, ((panda$core$Int64) { 59 }));
                bool $tmp1116 = $tmp1117.value;
                if ($tmp1116) goto $l1118;
                panda$core$Bit $tmp1119 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(derived1111->annotations);
                $tmp1116 = $tmp1119.value;
                $l1118:;
                panda$core$Bit $tmp1120 = { $tmp1116 };
                if ($tmp1120.value) {
                {
                    goto $l1104;
                }
                }
                found1121 = ((panda$core$Bit) { false });
                panda$core$Int64 $tmp1123 = panda$collections$Array$get_count$R$panda$core$Int64(p_cl->virtualMethods);
                panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1122, ((panda$core$Int64) { 0 }), $tmp1123, ((panda$core$Bit) { false }));
                int64_t $tmp1125 = $tmp1122.min.value;
                panda$core$Int64 i1124 = { $tmp1125 };
                int64_t $tmp1127 = $tmp1122.max.value;
                bool $tmp1128 = $tmp1122.inclusive.value;
                if ($tmp1128) goto $l1135; else goto $l1136;
                $l1135:;
                if ($tmp1125 <= $tmp1127) goto $l1129; else goto $l1131;
                $l1136:;
                if ($tmp1125 < $tmp1127) goto $l1129; else goto $l1131;
                $l1129:;
                {
                    panda$core$Object* $tmp1138 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_cl->virtualMethods, i1124);
                    base1137 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1138);
                    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, base1137);
                    panda$core$Bit $tmp1139 = org$pandalanguage$pandac$MethodDecl$matches$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(derived1111, base1137);
                    if ($tmp1139.value) {
                    {
                        found1121 = ((panda$core$Bit) { true });
                        panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(p_cl->virtualMethods, i1124, ((panda$core$Object*) derived1111));
                        goto $l1131;
                    }
                    }
                }
                $l1132:;
                int64_t $tmp1141 = $tmp1127 - i1124.value;
                if ($tmp1128) goto $l1142; else goto $l1143;
                $l1142:;
                if ($tmp1141 >= 1) goto $l1140; else goto $l1131;
                $l1143:;
                if ($tmp1141 > 1) goto $l1140; else goto $l1131;
                $l1140:;
                i1124.value += 1;
                goto $l1129;
                $l1131:;
                panda$core$Bit $tmp1146 = panda$core$Bit$$NOT$R$panda$core$Bit(found1121);
                if ($tmp1146.value) {
                {
                    panda$collections$Array$add$panda$collections$Array$T(p_cl->virtualMethods, ((panda$core$Object*) derived1111));
                }
                }
            }
            goto $l1104;
            $l1105:;
        }
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    }
    }
    return ((panda$collections$ListView*) p_cl->virtualMethods);
}
void org$pandalanguage$pandac$Compiler$addInheritedMethods$org$pandalanguage$pandac$SymbolTable$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$SymbolTable* p_st, panda$core$String* p_name, panda$collections$Array* p_result, panda$collections$ListView* p_types) {
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$getMethodReference$org$pandalanguage$pandac$SymbolTable$org$pandalanguage$pandac$IRNode$Q$panda$core$String$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$SymbolTable* p_st, org$pandalanguage$pandac$IRNode* p_target, panda$core$String* p_name, org$pandalanguage$pandac$Position p_position, panda$collections$ListView* p_types) {
    panda$collections$Array* methods1147;
    org$pandalanguage$pandac$Symbol* s1150;
    panda$collections$Iterator* m$Iter1156;
    org$pandalanguage$pandac$MethodDecl* m1168;
    panda$collections$Iterator* p$Iter1175;
    org$pandalanguage$pandac$SymbolTable* p1187;
    panda$collections$Array* children1192;
    panda$collections$Array* types1204;
    panda$collections$Iterator* m$Iter1207;
    org$pandalanguage$pandac$MethodRef* m1219;
    panda$collections$Array* $tmp1148 = (panda$collections$Array*) malloc(40);
    $tmp1148->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1148->refCount.value = 1;
    panda$collections$Array$init($tmp1148);
    methods1147 = $tmp1148;
    org$pandalanguage$pandac$Symbol* $tmp1151 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(p_st, p_name);
    s1150 = $tmp1151;
    PANDA_ASSERT(((panda$core$Bit) { s1150 != NULL }).value);
    panda$core$Bit $tmp1152 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(s1150->kind, ((panda$core$Int64) { 204 }));
    if ($tmp1152.value) {
    {
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, ((org$pandalanguage$pandac$MethodDecl*) s1150));
        org$pandalanguage$pandac$MethodRef* $tmp1153 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
        $tmp1153->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
        $tmp1153->refCount.value = 1;
        org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp1153, ((org$pandalanguage$pandac$MethodDecl*) s1150), p_types);
        panda$collections$Array$add$panda$collections$Array$T(methods1147, ((panda$core$Object*) $tmp1153));
    }
    }
    else {
    {
        panda$core$Bit $tmp1155 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(s1150->kind, ((panda$core$Int64) { 205 }));
        PANDA_ASSERT($tmp1155.value);
        {
            ITable* $tmp1157 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s1150)->methods)->$class->itable;
            while ($tmp1157->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1157 = $tmp1157->next;
            }
            $fn1159 $tmp1158 = $tmp1157->methods[0];
            panda$collections$Iterator* $tmp1160 = $tmp1158(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s1150)->methods));
            m$Iter1156 = $tmp1160;
            $l1161:;
            ITable* $tmp1163 = m$Iter1156->$class->itable;
            while ($tmp1163->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1163 = $tmp1163->next;
            }
            $fn1165 $tmp1164 = $tmp1163->methods[0];
            panda$core$Bit $tmp1166 = $tmp1164(m$Iter1156);
            panda$core$Bit $tmp1167 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1166);
            if (!$tmp1167.value) goto $l1162;
            {
                ITable* $tmp1169 = m$Iter1156->$class->itable;
                while ($tmp1169->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1169 = $tmp1169->next;
                }
                $fn1171 $tmp1170 = $tmp1169->methods[1];
                panda$core$Object* $tmp1172 = $tmp1170(m$Iter1156);
                m1168 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1172);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m1168);
                org$pandalanguage$pandac$MethodRef* $tmp1173 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                $tmp1173->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                $tmp1173->refCount.value = 1;
                org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp1173, m1168, p_types);
                panda$collections$Array$add$panda$collections$Array$T(methods1147, ((panda$core$Object*) $tmp1173));
            }
            goto $l1161;
            $l1162:;
        }
    }
    }
    {
        ITable* $tmp1176 = ((panda$collections$Iterable*) p_st->parents)->$class->itable;
        while ($tmp1176->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1176 = $tmp1176->next;
        }
        $fn1178 $tmp1177 = $tmp1176->methods[0];
        panda$collections$Iterator* $tmp1179 = $tmp1177(((panda$collections$Iterable*) p_st->parents));
        p$Iter1175 = $tmp1179;
        $l1180:;
        ITable* $tmp1182 = p$Iter1175->$class->itable;
        while ($tmp1182->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1182 = $tmp1182->next;
        }
        $fn1184 $tmp1183 = $tmp1182->methods[0];
        panda$core$Bit $tmp1185 = $tmp1183(p$Iter1175);
        panda$core$Bit $tmp1186 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1185);
        if (!$tmp1186.value) goto $l1181;
        {
            ITable* $tmp1188 = p$Iter1175->$class->itable;
            while ($tmp1188->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1188 = $tmp1188->next;
            }
            $fn1190 $tmp1189 = $tmp1188->methods[1];
            panda$core$Object* $tmp1191 = $tmp1189(p$Iter1175);
            p1187 = ((org$pandalanguage$pandac$SymbolTable*) $tmp1191);
            org$pandalanguage$pandac$Compiler$addInheritedMethods$org$pandalanguage$pandac$SymbolTable$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p1187, p_name, methods1147, p_types);
        }
        goto $l1180;
        $l1181:;
    }
    panda$collections$Array* $tmp1193 = (panda$collections$Array*) malloc(40);
    $tmp1193->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1193->refCount.value = 1;
    panda$collections$Array$init($tmp1193);
    children1192 = $tmp1193;
    if (((panda$core$Bit) { p_target != NULL }).value) {
    {
        panda$collections$Array$add$panda$collections$Array$T(children1192, ((panda$core$Object*) p_target));
    }
    }
    panda$core$Int64 $tmp1195 = panda$collections$Array$get_count$R$panda$core$Int64(methods1147);
    panda$core$Bit $tmp1196 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1195, ((panda$core$Int64) { 1 }));
    if ($tmp1196.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp1197 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp1197->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp1197->refCount.value = 1;
        panda$core$Object* $tmp1199 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(methods1147, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Type* $tmp1200 = org$pandalanguage$pandac$MethodRef$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$MethodRef*) $tmp1199));
        panda$core$Object* $tmp1201 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(methods1147, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp1197, ((panda$core$Int64) { 1002 }), p_position, $tmp1200, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodRef*) $tmp1201)), ((panda$collections$ListView*) children1192));
        return $tmp1197;
    }
    }
    else {
    {
        panda$core$Int64 $tmp1202 = panda$collections$Array$get_count$R$panda$core$Int64(methods1147);
        panda$core$Bit $tmp1203 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1202, ((panda$core$Int64) { 0 }));
        PANDA_ASSERT($tmp1203.value);
        panda$collections$Array* $tmp1205 = (panda$collections$Array*) malloc(40);
        $tmp1205->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp1205->refCount.value = 1;
        panda$collections$Array$init($tmp1205);
        types1204 = $tmp1205;
        {
            ITable* $tmp1208 = ((panda$collections$Iterable*) methods1147)->$class->itable;
            while ($tmp1208->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1208 = $tmp1208->next;
            }
            $fn1210 $tmp1209 = $tmp1208->methods[0];
            panda$collections$Iterator* $tmp1211 = $tmp1209(((panda$collections$Iterable*) methods1147));
            m$Iter1207 = $tmp1211;
            $l1212:;
            ITable* $tmp1214 = m$Iter1207->$class->itable;
            while ($tmp1214->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1214 = $tmp1214->next;
            }
            $fn1216 $tmp1215 = $tmp1214->methods[0];
            panda$core$Bit $tmp1217 = $tmp1215(m$Iter1207);
            panda$core$Bit $tmp1218 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1217);
            if (!$tmp1218.value) goto $l1213;
            {
                ITable* $tmp1220 = m$Iter1207->$class->itable;
                while ($tmp1220->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1220 = $tmp1220->next;
                }
                $fn1222 $tmp1221 = $tmp1220->methods[1];
                panda$core$Object* $tmp1223 = $tmp1221(m$Iter1207);
                m1219 = ((org$pandalanguage$pandac$MethodRef*) $tmp1223);
                org$pandalanguage$pandac$Type* $tmp1224 = org$pandalanguage$pandac$MethodRef$type$R$org$pandalanguage$pandac$Type(m1219);
                panda$collections$Array$add$panda$collections$Array$T(types1204, ((panda$core$Object*) $tmp1224));
            }
            goto $l1212;
            $l1213:;
        }
        org$pandalanguage$pandac$IRNode* $tmp1225 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp1225->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp1225->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp1227 = (org$pandalanguage$pandac$Type*) malloc(96);
        $tmp1227->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
        $tmp1227->refCount.value = 1;
        org$pandalanguage$pandac$Type$init$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp1227, ((panda$collections$ListView*) types1204));
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp1225, ((panda$core$Int64) { 1003 }), p_position, $tmp1227, ((panda$core$Object*) methods1147), ((panda$collections$ListView*) children1192));
        return $tmp1225;
    }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$symbolRef$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$Symbol* p_s, org$pandalanguage$pandac$SymbolTable* p_st) {
    org$pandalanguage$pandac$ClassDecl* cl1229;
    org$pandalanguage$pandac$FieldDecl* f1245;
    panda$collections$Array* children1248;
    org$pandalanguage$pandac$Type* effectiveType1253;
    org$pandalanguage$pandac$IRNode* result1258;
    switch (p_s->kind.value) {
        case 200:
        {
            PANDA_ASSERT(((panda$core$Bit) { p_target == NULL }).value);
            org$pandalanguage$pandac$ClassDecl* $tmp1230 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Position$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_position, ((org$pandalanguage$pandac$Alias*) p_s)->fullName);
            cl1229 = $tmp1230;
            if (((panda$core$Bit) { cl1229 != NULL }).value) {
            {
                org$pandalanguage$pandac$Type* $tmp1231 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl1229);
                org$pandalanguage$pandac$Compiler$checkGenericParameters$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_position, cl1229, $tmp1231);
                org$pandalanguage$pandac$IRNode* $tmp1232 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1232->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1232->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1234 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$Type* $tmp1235 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl1229);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1232, ((panda$core$Int64) { 1001 }), p_position, $tmp1234, $tmp1235);
                return $tmp1232;
            }
            }
            return NULL;
        }
        break;
        case 201:
        {
            org$pandalanguage$pandac$Type* $tmp1236 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) p_s));
            org$pandalanguage$pandac$Compiler$checkGenericParameters$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_position, ((org$pandalanguage$pandac$ClassDecl*) p_s), $tmp1236);
            org$pandalanguage$pandac$IRNode* $tmp1237 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp1237->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1237->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp1239 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$Type* $tmp1240 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) p_s));
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1237, ((panda$core$Int64) { 1001 }), p_position, $tmp1239, $tmp1240);
            return $tmp1237;
        }
        break;
        case 204:
        case 205:
        {
            panda$collections$ListView* $tmp1241 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$IRNode$Q$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p_target);
            org$pandalanguage$pandac$IRNode* $tmp1242 = org$pandalanguage$pandac$Compiler$getMethodReference$org$pandalanguage$pandac$SymbolTable$org$pandalanguage$pandac$IRNode$Q$panda$core$String$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$IRNode(self, p_st, p_target, p_s->name, p_position, $tmp1241);
            return $tmp1242;
        }
        break;
        case 208:
        {
            org$pandalanguage$pandac$IRNode* $tmp1243 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp1243->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1243->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp1243, ((panda$core$Int64) { 1016 }), p_position, ((org$pandalanguage$pandac$Variable*) p_s)->type, ((org$pandalanguage$pandac$Variable*) p_s));
            return $tmp1243;
        }
        break;
        case 202:
        {
            f1245 = ((org$pandalanguage$pandac$FieldDecl*) p_s);
            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self, f1245);
            org$pandalanguage$pandac$Type* $tmp1246 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1247 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(f1245->type, $tmp1246);
            if ($tmp1247.value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp1249 = (panda$collections$Array*) malloc(40);
            $tmp1249->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1249->refCount.value = 1;
            panda$collections$Array$init($tmp1249);
            children1248 = $tmp1249;
            if (((panda$core$Bit) { p_target != NULL }).value) {
            {
                panda$core$Bit $tmp1251 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1024 }));
                if ($tmp1251.value) {
                {
                    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_target->position, &$s1252);
                    return NULL;
                }
                }
                org$pandalanguage$pandac$Type* $tmp1254 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_target->type, f1245->type);
                effectiveType1253 = $tmp1254;
                panda$core$Bit $tmp1255 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(f1245->annotations);
                if ($tmp1255.value) {
                {
                    panda$collections$Array$add$panda$collections$Array$T(children1248, ((panda$core$Object*) p_target));
                }
                }
                else {
                {
                    org$pandalanguage$pandac$Type* $tmp1256 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(f1245->owner);
                    org$pandalanguage$pandac$IRNode* $tmp1257 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_target, $tmp1256);
                    panda$collections$Array$add$panda$collections$Array$T(children1248, ((panda$core$Object*) $tmp1257));
                }
                }
                org$pandalanguage$pandac$IRNode* $tmp1259 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1259->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1259->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp1259, ((panda$core$Int64) { 1026 }), p_position, f1245->type, ((panda$core$Object*) p_s), ((panda$collections$ListView*) children1248));
                result1258 = $tmp1259;
                panda$core$Bit $tmp1261 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(effectiveType1253, result1258->type);
                if ($tmp1261.value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp1262 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, result1258, p_position, ((panda$core$Bit) { false }), effectiveType1253);
                    result1258 = $tmp1262;
                }
                }
                return result1258;
            }
            }
            else {
            {
                org$pandalanguage$pandac$IRNode* $tmp1263 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1263->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1263->refCount.value = 1;
                panda$core$Object* $tmp1265 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
                org$pandalanguage$pandac$Type* $tmp1266 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp1265));
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp1263, ((panda$core$Int64) { 1025 }), p_position, $tmp1266);
                panda$collections$Array$add$panda$collections$Array$T(children1248, ((panda$core$Object*) $tmp1263));
                org$pandalanguage$pandac$IRNode* $tmp1267 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1267->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1267->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp1267, ((panda$core$Int64) { 1026 }), p_position, f1245->type, ((panda$core$Object*) p_s), ((panda$collections$ListView*) children1248));
                return $tmp1267;
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
    panda$collections$HashMap* typeMap1275;
    org$pandalanguage$pandac$Type* base1278;
    org$pandalanguage$pandac$ClassDecl* cl1280;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1282;
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
            panda$core$Int64 $tmp1269 = panda$collections$Array$get_count$R$panda$core$Int64(p_context->subtypes);
            panda$core$Bit $tmp1270 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1269, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp1270.value);
            panda$core$Object* $tmp1271 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_context->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp1272 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$Type*) $tmp1271), p_raw);
            return $tmp1272;
        }
        break;
        case 21:
        {
            panda$core$Int64 $tmp1273 = panda$collections$Array$get_count$R$panda$core$Int64(p_context->subtypes);
            panda$core$Bit $tmp1274 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp1273, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1274.value);
            panda$collections$HashMap* $tmp1276 = (panda$collections$HashMap*) malloc(56);
            $tmp1276->$class = (panda$core$Class*) &panda$collections$HashMap$class;
            $tmp1276->refCount.value = 1;
            panda$collections$HashMap$init($tmp1276);
            typeMap1275 = $tmp1276;
            panda$core$Object* $tmp1279 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_context->subtypes, ((panda$core$Int64) { 0 }));
            base1278 = ((org$pandalanguage$pandac$Type*) $tmp1279);
            org$pandalanguage$pandac$ClassDecl* $tmp1281 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Symbol*) base1278)->name);
            cl1280 = $tmp1281;
            PANDA_ASSERT(((panda$core$Bit) { cl1280 != NULL }).value);
            panda$core$Int64 $tmp1283 = panda$collections$Array$get_count$R$panda$core$Int64(p_context->subtypes);
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1282, ((panda$core$Int64) { 1 }), $tmp1283, ((panda$core$Bit) { false }));
            int64_t $tmp1285 = $tmp1282.min.value;
            panda$core$Int64 i1284 = { $tmp1285 };
            int64_t $tmp1287 = $tmp1282.max.value;
            bool $tmp1288 = $tmp1282.inclusive.value;
            if ($tmp1288) goto $l1295; else goto $l1296;
            $l1295:;
            if ($tmp1285 <= $tmp1287) goto $l1289; else goto $l1291;
            $l1296:;
            if ($tmp1285 < $tmp1287) goto $l1289; else goto $l1291;
            $l1289:;
            {
                panda$core$String* $tmp1298 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) cl1280)->name, &$s1297);
                panda$core$Int64 $tmp1299 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i1284, ((panda$core$Int64) { 1 }));
                ITable* $tmp1300 = ((panda$collections$ListView*) cl1280->parameters)->$class->itable;
                while ($tmp1300->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp1300 = $tmp1300->next;
                }
                $fn1302 $tmp1301 = $tmp1300->methods[0];
                panda$core$Object* $tmp1303 = $tmp1301(((panda$collections$ListView*) cl1280->parameters), $tmp1299);
                panda$core$String* $tmp1304 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1298, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp1303))->name);
                panda$core$Object* $tmp1305 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_context->subtypes, i1284);
                panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(typeMap1275, ((panda$collections$Key*) $tmp1304), ((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp1305)));
            }
            $l1292:;
            int64_t $tmp1307 = $tmp1287 - i1284.value;
            if ($tmp1288) goto $l1308; else goto $l1309;
            $l1308:;
            if ($tmp1307 >= 1) goto $l1306; else goto $l1291;
            $l1309:;
            if ($tmp1307 > 1) goto $l1306; else goto $l1291;
            $l1306:;
            i1284.value += 1;
            goto $l1289;
            $l1291:;
            org$pandalanguage$pandac$Type* $tmp1312 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(p_raw, typeMap1275);
            return $tmp1312;
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
    org$pandalanguage$pandac$Type* $tmp1313 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1314 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_type, $tmp1313);
    if ($tmp1314.value) {
    {
        org$pandalanguage$pandac$Type* $tmp1315 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
        return $tmp1315;
    }
    }
    org$pandalanguage$pandac$Type* $tmp1316 = org$pandalanguage$pandac$Type$RealLiteral$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1317 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_type, $tmp1316);
    if ($tmp1317.value) {
    {
        org$pandalanguage$pandac$Type* $tmp1318 = org$pandalanguage$pandac$Type$Real64$R$org$pandalanguage$pandac$Type();
        return $tmp1318;
    }
    }
    org$pandalanguage$pandac$Type* $tmp1319 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1320 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_type, $tmp1319);
    if ($tmp1320.value) {
    {
        org$pandalanguage$pandac$Type* $tmp1321 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
        return $tmp1321;
    }
    }
    panda$core$Bit $tmp1322 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 23 }));
    if ($tmp1322.value) {
    {
        org$pandalanguage$pandac$Type* $tmp1323 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
        return $tmp1323;
    }
    }
    return p_type;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    org$pandalanguage$pandac$Type* step1350;
    panda$collections$ImmutableArray* args1377;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1378;
    org$pandalanguage$pandac$IRNode* c1380;
    switch (p_expr->kind.value) {
        case 1031:
        {
            panda$core$Int64 $tmp1324 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_expr->children);
            panda$core$Bit $tmp1325 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1324, ((panda$core$Int64) { 2 }));
            if ($tmp1325.value) {
            {
                panda$core$Object* $tmp1326 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Bit $tmp1327 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1326)->kind, ((panda$core$Int64) { 1030 }));
                if ($tmp1327.value) {
                {
                    panda$core$Object* $tmp1328 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                    panda$core$Bit $tmp1329 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1328)->kind, ((panda$core$Int64) { 1030 }));
                    if ($tmp1329.value) {
                    {
                        org$pandalanguage$pandac$Type* $tmp1330 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
                        org$pandalanguage$pandac$Type* $tmp1331 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1330);
                        org$pandalanguage$pandac$Type* $tmp1332 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1331);
                        return $tmp1332;
                    }
                    }
                    panda$core$Object* $tmp1333 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                    org$pandalanguage$pandac$Type* $tmp1334 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$IRNode*) $tmp1333)->type);
                    org$pandalanguage$pandac$Type* $tmp1335 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1334);
                    org$pandalanguage$pandac$Type* $tmp1336 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1335);
                    return $tmp1336;
                }
                }
                panda$core$Object* $tmp1337 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                panda$core$Bit $tmp1338 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1337)->kind, ((panda$core$Int64) { 1030 }));
                if ($tmp1338.value) {
                {
                    panda$core$Object* $tmp1339 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                    org$pandalanguage$pandac$Type* $tmp1340 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$IRNode*) $tmp1339)->type);
                    org$pandalanguage$pandac$Type* $tmp1341 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1340);
                    org$pandalanguage$pandac$Type* $tmp1342 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1341);
                    return $tmp1342;
                }
                }
                panda$core$Object* $tmp1343 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp1344 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$IRNode*) $tmp1343)->type);
                panda$core$Object* $tmp1345 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$Type* $tmp1346 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$IRNode*) $tmp1345)->type);
                org$pandalanguage$pandac$Type* $tmp1347 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1344, $tmp1346);
                org$pandalanguage$pandac$Type* $tmp1348 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, $tmp1347);
                org$pandalanguage$pandac$Type* $tmp1349 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1348);
                return $tmp1349;
            }
            }
            panda$core$Object* $tmp1351 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 2 }));
            org$pandalanguage$pandac$Type* $tmp1352 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$IRNode*) $tmp1351)->type);
            step1350 = $tmp1352;
            panda$core$Object* $tmp1353 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp1354 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1353)->kind, ((panda$core$Int64) { 1030 }));
            if ($tmp1354.value) {
            {
                panda$core$Object* $tmp1355 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                panda$core$Bit $tmp1356 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1355)->kind, ((panda$core$Int64) { 1030 }));
                if ($tmp1356.value) {
                {
                    org$pandalanguage$pandac$Type* $tmp1357 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
                    org$pandalanguage$pandac$Type* $tmp1358 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1357);
                    org$pandalanguage$pandac$Type* $tmp1359 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1358, step1350);
                    return $tmp1359;
                }
                }
                panda$core$Object* $tmp1360 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$Type* $tmp1361 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$IRNode*) $tmp1360)->type);
                org$pandalanguage$pandac$Type* $tmp1362 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1361);
                org$pandalanguage$pandac$Type* $tmp1363 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1362, step1350);
                return $tmp1363;
            }
            }
            panda$core$Object* $tmp1364 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
            panda$core$Bit $tmp1365 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1364)->kind, ((panda$core$Int64) { 1030 }));
            if ($tmp1365.value) {
            {
                panda$core$Object* $tmp1366 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp1367 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$IRNode*) $tmp1366)->type);
                org$pandalanguage$pandac$Type* $tmp1368 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1367);
                org$pandalanguage$pandac$Type* $tmp1369 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1368, step1350);
                return $tmp1369;
            }
            }
            panda$core$Object* $tmp1370 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp1371 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$IRNode*) $tmp1370)->type);
            panda$core$Object* $tmp1372 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
            org$pandalanguage$pandac$Type* $tmp1373 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$IRNode*) $tmp1372)->type);
            org$pandalanguage$pandac$Type* $tmp1374 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1371, $tmp1373);
            org$pandalanguage$pandac$Type* $tmp1375 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, $tmp1374);
            org$pandalanguage$pandac$Type* $tmp1376 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1375, step1350);
            return $tmp1376;
        }
        break;
        case 1040:
        {
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1378, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$collections$ImmutableArray* $tmp1379 = panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(p_expr->children, $tmp1378);
            args1377 = $tmp1379;
            panda$core$Object* $tmp1381 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp1383 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1381), &$s1382, ((panda$collections$ListView*) args1377));
            c1380 = $tmp1383;
            if (((panda$core$Bit) { c1380 == NULL }).value) {
            {
                org$pandalanguage$pandac$Type* $tmp1384 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
                return $tmp1384;
            }
            }
            return c1380->type;
        }
        break;
    }
    org$pandalanguage$pandac$Type* $tmp1385 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_expr->type);
    return $tmp1385;
}
panda$core$Int64$nullable org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type, org$pandalanguage$pandac$Type* p_target) {
    panda$core$Int64$nullable result1396;
    panda$core$Int64$nullable result1400;
    panda$core$Int64$nullable best1409;
    panda$collections$Iterator* t$Iter1410;
    org$pandalanguage$pandac$Type* t1422;
    panda$core$Int64$nullable cost1427;
    org$pandalanguage$pandac$ClassDecl* cl1441;
    panda$core$Int64$nullable cost1443;
    panda$collections$Iterator* intf$Iter1448;
    org$pandalanguage$pandac$Type* intf1460;
    panda$core$Int64$nullable cost1465;
    PANDA_ASSERT(p_type->resolved.value);
    PANDA_ASSERT(p_target->resolved.value);
    panda$core$Bit $tmp1386 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_type, p_target);
    if ($tmp1386.value) {
    {
        return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
    }
    }
    org$pandalanguage$pandac$Type* $tmp1387 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1388 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_type, $tmp1387);
    if ($tmp1388.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    panda$core$Bit $tmp1389 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 23 }));
    if ($tmp1389.value) {
    {
        panda$core$Bit $tmp1390 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp1390.value) {
        {
            return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
        }
        }
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    panda$core$Bit $tmp1392 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 11 }));
    bool $tmp1391 = $tmp1392.value;
    if (!$tmp1391) goto $l1393;
    panda$core$Bit $tmp1394 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
    $tmp1391 = $tmp1394.value;
    $l1393:;
    panda$core$Bit $tmp1395 = { $tmp1391 };
    if ($tmp1395.value) {
    {
        panda$core$Object* $tmp1397 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Int64$nullable $tmp1398 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$Type*) $tmp1397), p_target);
        result1396 = $tmp1398;
        if (((panda$core$Bit) { !result1396.nonnull }).value) {
        {
            return ((panda$core$Int64$nullable) { .nonnull = false });
        }
        }
        panda$core$Int64 $tmp1399 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) result1396.value), ((panda$core$Int64) { 2 }));
        return ((panda$core$Int64$nullable) { $tmp1399, true });
    }
    }
    switch (p_target->typeKind.value) {
        case 11:
        {
            panda$core$Object* $tmp1401 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$Int64$nullable $tmp1402 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_type, ((org$pandalanguage$pandac$Type*) $tmp1401));
            result1400 = $tmp1402;
            if (((panda$core$Bit) { !result1400.nonnull }).value) {
            {
                return ((panda$core$Int64$nullable) { .nonnull = false });
            }
            }
            panda$core$Int64 $tmp1403 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) result1400.value), ((panda$core$Int64) { 1 }));
            return ((panda$core$Int64$nullable) { $tmp1403, true });
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
            panda$core$Bit $tmp1404 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 21 }));
            if ($tmp1404.value) {
            {
                panda$core$Object* $tmp1405 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
                panda$core$Int64$nullable $tmp1406 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$Type*) $tmp1405), p_target);
                return $tmp1406;
            }
            }
        }
        break;
    }
    switch (p_type->typeKind.value) {
        case 19:
        {
            org$pandalanguage$pandac$Type* $tmp1407 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            panda$core$Int64$nullable $tmp1408 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1407, p_target);
            return $tmp1408;
        }
        break;
        case 17:
        {
            best1409 = ((panda$core$Int64$nullable) { .nonnull = false });
            {
                ITable* $tmp1411 = ((panda$collections$Iterable*) p_type->subtypes)->$class->itable;
                while ($tmp1411->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1411 = $tmp1411->next;
                }
                $fn1413 $tmp1412 = $tmp1411->methods[0];
                panda$collections$Iterator* $tmp1414 = $tmp1412(((panda$collections$Iterable*) p_type->subtypes));
                t$Iter1410 = $tmp1414;
                $l1415:;
                ITable* $tmp1417 = t$Iter1410->$class->itable;
                while ($tmp1417->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1417 = $tmp1417->next;
                }
                $fn1419 $tmp1418 = $tmp1417->methods[0];
                panda$core$Bit $tmp1420 = $tmp1418(t$Iter1410);
                panda$core$Bit $tmp1421 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1420);
                if (!$tmp1421.value) goto $l1416;
                {
                    ITable* $tmp1423 = t$Iter1410->$class->itable;
                    while ($tmp1423->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1423 = $tmp1423->next;
                    }
                    $fn1425 $tmp1424 = $tmp1423->methods[1];
                    panda$core$Object* $tmp1426 = $tmp1424(t$Iter1410);
                    t1422 = ((org$pandalanguage$pandac$Type*) $tmp1426);
                    panda$core$Int64$nullable $tmp1428 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, t1422, p_target);
                    cost1427 = $tmp1428;
                    bool $tmp1429 = ((panda$core$Bit) { cost1427.nonnull }).value;
                    if (!$tmp1429) goto $l1430;
                    bool $tmp1431 = ((panda$core$Bit) { !best1409.nonnull }).value;
                    if ($tmp1431) goto $l1432;
                    panda$core$Bit $tmp1433 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost1427.value), ((panda$core$Int64) best1409.value));
                    $tmp1431 = $tmp1433.value;
                    $l1432:;
                    panda$core$Bit $tmp1434 = { $tmp1431 };
                    $tmp1429 = $tmp1434.value;
                    $l1430:;
                    panda$core$Bit $tmp1435 = { $tmp1429 };
                    if ($tmp1435.value) {
                    {
                        best1409 = cost1427;
                    }
                    }
                }
                goto $l1415;
                $l1416:;
            }
            return best1409;
        }
        break;
        case 22:
        {
            panda$core$Int64$nullable $tmp1436 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_type->parameter->bound, p_target);
            return $tmp1436;
        }
        break;
    }
    panda$core$Bit $tmp1437 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_target);
    panda$core$Bit $tmp1438 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1437);
    if ($tmp1438.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    panda$core$Bit $tmp1439 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_type);
    panda$core$Bit $tmp1440 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1439);
    if ($tmp1440.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp1442 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_type);
    cl1441 = $tmp1442;
    PANDA_ASSERT(((panda$core$Bit) { cl1441 != NULL }).value);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, cl1441);
    if (((panda$core$Bit) { cl1441->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp1444 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_type, cl1441->rawSuper);
        org$pandalanguage$pandac$Type* $tmp1445 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_type, $tmp1444);
        panda$core$Int64$nullable $tmp1446 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1445, p_target);
        cost1443 = $tmp1446;
        if (((panda$core$Bit) { cost1443.nonnull }).value) {
        {
            panda$core$Int64 $tmp1447 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) cost1443.value), ((panda$core$Int64) ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }).value));
            return ((panda$core$Int64$nullable) { $tmp1447, true });
        }
        }
    }
    }
    {
        ITable* $tmp1449 = ((panda$collections$Iterable*) cl1441->rawInterfaces)->$class->itable;
        while ($tmp1449->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1449 = $tmp1449->next;
        }
        $fn1451 $tmp1450 = $tmp1449->methods[0];
        panda$collections$Iterator* $tmp1452 = $tmp1450(((panda$collections$Iterable*) cl1441->rawInterfaces));
        intf$Iter1448 = $tmp1452;
        $l1453:;
        ITable* $tmp1455 = intf$Iter1448->$class->itable;
        while ($tmp1455->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1455 = $tmp1455->next;
        }
        $fn1457 $tmp1456 = $tmp1455->methods[0];
        panda$core$Bit $tmp1458 = $tmp1456(intf$Iter1448);
        panda$core$Bit $tmp1459 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1458);
        if (!$tmp1459.value) goto $l1454;
        {
            ITable* $tmp1461 = intf$Iter1448->$class->itable;
            while ($tmp1461->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1461 = $tmp1461->next;
            }
            $fn1463 $tmp1462 = $tmp1461->methods[1];
            panda$core$Object* $tmp1464 = $tmp1462(intf$Iter1448);
            intf1460 = ((org$pandalanguage$pandac$Type*) $tmp1464);
            org$pandalanguage$pandac$Type* $tmp1466 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_type, intf1460);
            org$pandalanguage$pandac$Type* $tmp1467 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_type, $tmp1466);
            panda$core$Int64$nullable $tmp1468 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1467, p_target);
            cost1465 = $tmp1468;
            if (((panda$core$Bit) { cost1465.nonnull }).value) {
            {
                panda$core$Int64 $tmp1469 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) cost1465.value), ((panda$core$Int64) ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }).value));
                return ((panda$core$Int64$nullable) { $tmp1469, true });
            }
            }
        }
        goto $l1453;
        $l1454:;
    }
    return ((panda$core$Int64$nullable) { .nonnull = false });
}
panda$core$Int64 org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_value) {
    panda$core$Bit $tmp1471 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { -128 }));
    bool $tmp1470 = $tmp1471.value;
    if (!$tmp1470) goto $l1472;
    panda$core$Bit $tmp1473 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { 127 }));
    $tmp1470 = $tmp1473.value;
    $l1472:;
    panda$core$Bit $tmp1474 = { $tmp1470 };
    if ($tmp1474.value) {
    {
        return ((panda$core$Int64) { 8 });
    }
    }
    panda$core$Bit $tmp1476 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { -32768 }));
    bool $tmp1475 = $tmp1476.value;
    if (!$tmp1475) goto $l1477;
    panda$core$Bit $tmp1478 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { 32767 }));
    $tmp1475 = $tmp1478.value;
    $l1477:;
    panda$core$Bit $tmp1479 = { $tmp1475 };
    if ($tmp1479.value) {
    {
        return ((panda$core$Int64) { 16 });
    }
    }
    panda$core$Bit $tmp1481 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { -2147483648 }));
    bool $tmp1480 = $tmp1481.value;
    if (!$tmp1480) goto $l1482;
    panda$core$Bit $tmp1483 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { 2147483647 }));
    $tmp1480 = $tmp1483.value;
    $l1482:;
    panda$core$Bit $tmp1484 = { $tmp1480 };
    if ($tmp1484.value) {
    {
        return ((panda$core$Int64) { 32 });
    }
    }
    return ((panda$core$Int64) { 64 });
}
panda$core$Int64 org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64(org$pandalanguage$pandac$Compiler* self, panda$core$UInt64 p_value) {
    panda$core$Bit $tmp1485 = panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(p_value, ((panda$core$UInt64) { 255 }));
    if ($tmp1485.value) {
    {
        return ((panda$core$Int64) { 8 });
    }
    }
    panda$core$Bit $tmp1486 = panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(p_value, ((panda$core$UInt64) { 65535 }));
    if ($tmp1486.value) {
    {
        return ((panda$core$Int64) { 16 });
    }
    }
    panda$core$Bit $tmp1487 = panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(p_value, ((panda$core$UInt64) { 4294967295 }));
    if ($tmp1487.value) {
    {
        return ((panda$core$Int64) { 32 });
    }
    }
    return ((panda$core$Int64) { 64 });
}
panda$core$Int64$nullable org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr, org$pandalanguage$pandac$Type* p_target) {
    panda$core$Int64 base1488;
    panda$core$Int64$nullable cost1502;
    panda$core$String* s1574;
    panda$collections$Iterator* utf161585;
    panda$core$Int64$nullable cost11621;
    panda$core$Int64$nullable cost21625;
    panda$core$Int64 cost1634;
    panda$core$Int64$nullable cost11648;
    panda$core$Int64$nullable cost21652;
    panda$core$Int64$nullable cost31657;
    panda$collections$Array* args1665;
    org$pandalanguage$pandac$ClassDecl* targetClass1676;
    panda$collections$Iterator* m$Iter1678;
    org$pandalanguage$pandac$MethodDecl* m1690;
    panda$core$Int64$nullable cost1699;
    panda$core$Int64$nullable cost1703;
    base1488 = ((panda$core$Int64) { 0 });
    panda$core$Bit $tmp1491 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1033 }));
    bool $tmp1490 = $tmp1491.value;
    if (!$tmp1490) goto $l1492;
    panda$core$Bit $tmp1493 = org$pandalanguage$pandac$Type$isChar$R$panda$core$Bit(p_target);
    panda$core$Bit $tmp1494 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1493);
    $tmp1490 = $tmp1494.value;
    $l1492:;
    panda$core$Bit $tmp1495 = { $tmp1490 };
    bool $tmp1489 = $tmp1495.value;
    if (!$tmp1489) goto $l1496;
    panda$core$Int64 $tmp1497 = panda$core$String$length$R$panda$core$Int64(((panda$core$String*) p_expr->payload));
    panda$core$Bit $tmp1498 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1497, ((panda$core$Int64) { 1 }));
    $tmp1489 = $tmp1498.value;
    $l1496:;
    panda$core$Bit $tmp1499 = { $tmp1489 };
    if ($tmp1499.value) {
    {
        base1488 = ((panda$core$Int64) { 3 });
    }
    }
    panda$core$Bit $tmp1500 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_expr->type, p_target);
    if ($tmp1500.value) {
    {
        return ((panda$core$Int64$nullable) { base1488, true });
    }
    }
    switch (p_target->typeKind.value) {
        case 11:
        {
            panda$core$Bit $tmp1501 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1030 }));
            if ($tmp1501.value) {
            {
                return ((panda$core$Int64$nullable) { base1488, true });
            }
            }
            panda$core$Object* $tmp1503 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$Int64$nullable $tmp1504 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, ((org$pandalanguage$pandac$Type*) $tmp1503));
            cost1502 = $tmp1504;
            if (((panda$core$Bit) { !cost1502.nonnull }).value) {
            {
                return ((panda$core$Int64$nullable) { .nonnull = false });
            }
            }
            panda$core$Bit $tmp1505 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->type->typeKind, ((panda$core$Int64) { 11 }));
            if ($tmp1505.value) {
            {
                panda$core$Int64 $tmp1506 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(base1488, ((panda$core$Int64) cost1502.value));
                return ((panda$core$Int64$nullable) { $tmp1506, true });
            }
            }
            panda$core$Int64 $tmp1507 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(base1488, ((panda$core$Int64) cost1502.value));
            panda$core$Int64 $tmp1508 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1507, ((panda$core$Int64) { 1 }));
            return ((panda$core$Int64$nullable) { $tmp1508, true });
        }
        break;
        case 22:
        {
            panda$core$Bit $tmp1509 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(base1488, ((panda$core$Int64) { 0 }));
            PANDA_ASSERT($tmp1509.value);
            panda$core$Int64$nullable $tmp1510 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, p_target->parameter->bound);
            return $tmp1510;
        }
        break;
    }
    switch (p_expr->kind.value) {
        case 1011:
        {
            panda$core$Bit $tmp1511 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 19 }));
            if ($tmp1511.value) {
            {
                return ((panda$core$Int64$nullable) { base1488, true });
            }
            }
            panda$core$Bit $tmp1512 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_target);
            if ($tmp1512.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1513 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
                panda$core$Int64$nullable $tmp1514 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1513, p_target);
                return $tmp1514;
            }
            }
        }
        break;
        case 1004:
        {
            panda$core$Bit $tmp1517 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            bool $tmp1516 = $tmp1517.value;
            if (!$tmp1516) goto $l1518;
            panda$core$Int64 $tmp1519 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1520 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(self, $tmp1519);
            panda$core$Int64 $tmp1521 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1522 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1520, $tmp1521);
            $tmp1516 = $tmp1522.value;
            $l1518:;
            panda$core$Bit $tmp1523 = { $tmp1516 };
            bool $tmp1515 = $tmp1523.value;
            if ($tmp1515) goto $l1524;
            panda$core$Bit $tmp1526 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 13 }));
            bool $tmp1525 = $tmp1526.value;
            if (!$tmp1525) goto $l1527;
            panda$core$Int64 $tmp1528 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64(self, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1529 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1530 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1528, $tmp1529);
            $tmp1525 = $tmp1530.value;
            $l1527:;
            panda$core$Bit $tmp1531 = { $tmp1525 };
            $tmp1515 = $tmp1531.value;
            $l1524:;
            panda$core$Bit $tmp1532 = { $tmp1515 };
            if ($tmp1532.value) {
            {
                return ((panda$core$Int64$nullable) { base1488, true });
            }
            }
            panda$core$Bit $tmp1533 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 20 }));
            if ($tmp1533.value) {
            {
                return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true });
            }
            }
            panda$core$Bit $tmp1534 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            panda$core$Bit $tmp1535 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1534);
            if ($tmp1535.value) {
            {
                panda$core$Bit $tmp1536 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(base1488, ((panda$core$Int64) { 0 }));
                PANDA_ASSERT($tmp1536.value);
                org$pandalanguage$pandac$Type* $tmp1537 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                panda$core$Int64$nullable $tmp1538 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1537, p_target);
                return $tmp1538;
            }
            }
        }
        break;
        case 1032:
        {
            panda$core$Bit $tmp1541 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            bool $tmp1540 = $tmp1541.value;
            if (!$tmp1540) goto $l1542;
            panda$core$Int64 $tmp1543 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1544 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp1543);
            panda$core$Int64 $tmp1545 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(self, $tmp1544);
            panda$core$Int64 $tmp1546 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1547 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1545, $tmp1546);
            $tmp1540 = $tmp1547.value;
            $l1542:;
            panda$core$Bit $tmp1548 = { $tmp1540 };
            bool $tmp1539 = $tmp1548.value;
            if ($tmp1539) goto $l1549;
            panda$core$Bit $tmp1551 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 13 }));
            bool $tmp1550 = $tmp1551.value;
            if (!$tmp1550) goto $l1552;
            panda$core$Int64 $tmp1553 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1554 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp1553);
            panda$core$Int64 $tmp1555 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(self, $tmp1554);
            panda$core$Int64 $tmp1556 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1557 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1555, $tmp1556);
            $tmp1550 = $tmp1557.value;
            $l1552:;
            panda$core$Bit $tmp1558 = { $tmp1550 };
            $tmp1539 = $tmp1558.value;
            $l1549:;
            panda$core$Bit $tmp1559 = { $tmp1539 };
            if ($tmp1559.value) {
            {
                return ((panda$core$Int64$nullable) { base1488, true });
            }
            }
            panda$core$Bit $tmp1560 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 20 }));
            if ($tmp1560.value) {
            {
                return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true });
            }
            }
            panda$core$Bit $tmp1561 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            panda$core$Bit $tmp1562 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1561);
            if ($tmp1562.value) {
            {
                panda$core$Bit $tmp1563 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(base1488, ((panda$core$Int64) { 0 }));
                PANDA_ASSERT($tmp1563.value);
                org$pandalanguage$pandac$Type* $tmp1564 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                panda$core$Int64$nullable $tmp1565 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1564, p_target);
                return $tmp1565;
            }
            }
        }
        break;
        case 1045:
        {
            panda$core$Bit $tmp1566 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 20 }));
            if ($tmp1566.value) {
            {
                return ((panda$core$Int64$nullable) { base1488, true });
            }
            }
            panda$core$Bit $tmp1567 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            panda$core$Bit $tmp1568 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1567);
            if ($tmp1568.value) {
            {
                panda$core$Bit $tmp1569 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(base1488, ((panda$core$Int64) { 0 }));
                PANDA_ASSERT($tmp1569.value);
                org$pandalanguage$pandac$Type* $tmp1570 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                panda$core$Int64$nullable $tmp1571 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1570, p_target);
                return $tmp1571;
            }
            }
        }
        break;
        case 1033:
        {
            org$pandalanguage$pandac$Type* $tmp1572 = org$pandalanguage$pandac$Type$Char8$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1573 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1572);
            if ($tmp1573.value) {
            {
                s1574 = ((panda$core$String*) p_expr->payload);
                panda$core$Int64 $tmp1576 = panda$core$String$length$R$panda$core$Int64(s1574);
                panda$core$Bit $tmp1577 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1576, ((panda$core$Int64) { 1 }));
                bool $tmp1575 = $tmp1577.value;
                if (!$tmp1575) goto $l1578;
                panda$core$Char32 $tmp1579 = panda$core$String$$IDX$panda$core$Int64$R$panda$core$Char32(s1574, ((panda$core$Int64) { 0 }));
                panda$core$UInt32 $tmp1580 = panda$core$Char32$convert$R$panda$core$UInt32($tmp1579);
                panda$core$Bit $tmp1581 = panda$core$UInt32$$LE$panda$core$UInt32$R$panda$core$Bit($tmp1580, ((panda$core$UInt32) { 255 }));
                $tmp1575 = $tmp1581.value;
                $l1578:;
                panda$core$Bit $tmp1582 = { $tmp1575 };
                if ($tmp1582.value) {
                {
                    return ((panda$core$Int64$nullable) { base1488, true });
                }
                }
                return ((panda$core$Int64$nullable) { .nonnull = false });
            }
            }
            org$pandalanguage$pandac$Type* $tmp1583 = org$pandalanguage$pandac$Type$Char16$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1584 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1583);
            if ($tmp1584.value) {
            {
                panda$collections$Iterator* $tmp1586 = panda$core$String$utf16$R$panda$collections$Iterator$LTpanda$core$Char16$GT(((panda$core$String*) p_expr->payload));
                utf161585 = $tmp1586;
                ITable* $tmp1587 = utf161585->$class->itable;
                while ($tmp1587->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1587 = $tmp1587->next;
                }
                $fn1589 $tmp1588 = $tmp1587->methods[0];
                panda$core$Bit $tmp1590 = $tmp1588(utf161585);
                if ($tmp1590.value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                ITable* $tmp1591 = utf161585->$class->itable;
                while ($tmp1591->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1591 = $tmp1591->next;
                }
                $fn1593 $tmp1592 = $tmp1591->methods[1];
                $tmp1592(utf161585);
                ITable* $tmp1594 = utf161585->$class->itable;
                while ($tmp1594->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1594 = $tmp1594->next;
                }
                $fn1596 $tmp1595 = $tmp1594->methods[0];
                panda$core$Bit $tmp1597 = $tmp1595(utf161585);
                if ($tmp1597.value) {
                {
                    panda$core$Int64 $tmp1598 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(base1488, ((panda$core$Int64) { 1 }));
                    return ((panda$core$Int64$nullable) { $tmp1598, true });
                }
                }
                return ((panda$core$Int64$nullable) { .nonnull = false });
            }
            }
            org$pandalanguage$pandac$Type* $tmp1599 = org$pandalanguage$pandac$Type$Char32$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1600 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1599);
            if ($tmp1600.value) {
            {
                panda$core$Int64 $tmp1601 = panda$core$String$length$R$panda$core$Int64(((panda$core$String*) p_expr->payload));
                panda$core$Bit $tmp1602 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1601, ((panda$core$Int64) { 1 }));
                if ($tmp1602.value) {
                {
                    panda$core$Int64 $tmp1603 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(base1488, ((panda$core$Int64) { 2 }));
                    return ((panda$core$Int64$nullable) { $tmp1603, true });
                }
                }
                return ((panda$core$Int64$nullable) { .nonnull = false });
            }
            }
        }
        break;
        case 1031:
        {
            panda$core$Bit $tmp1604 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(p_target);
            if ($tmp1604.value) {
            {
                panda$core$Int64 $tmp1605 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_expr->children);
                panda$core$Bit $tmp1606 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1605, ((panda$core$Int64) { 2 }));
                if ($tmp1606.value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Object* $tmp1608 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Bit $tmp1609 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1608)->kind, ((panda$core$Int64) { 1030 }));
                bool $tmp1607 = $tmp1609.value;
                if (!$tmp1607) goto $l1610;
                panda$core$Object* $tmp1611 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                panda$core$Bit $tmp1612 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1611)->kind, ((panda$core$Int64) { 1030 }));
                $tmp1607 = $tmp1612.value;
                $l1610:;
                panda$core$Bit $tmp1613 = { $tmp1607 };
                if ($tmp1613.value) {
                {
                    panda$core$Object* $tmp1614 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                    panda$core$Bit $tmp1615 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1614)->typeKind, ((panda$core$Int64) { 11 }));
                    if ($tmp1615.value) {
                    {
                        panda$core$Object* $tmp1616 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                        panda$core$Object* $tmp1617 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$Type*) $tmp1616)->subtypes, ((panda$core$Int64) { 0 }));
                        panda$core$Bit $tmp1618 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1617));
                        if ($tmp1618.value) {
                        {
                            return ((panda$core$Int64$nullable) { base1488, true });
                        }
                        }
                        panda$core$Int64 $tmp1619 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(base1488, ((panda$core$Int64) { 1 }));
                        return ((panda$core$Int64$nullable) { $tmp1619, true });
                    }
                    }
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Bit $tmp1620 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 21 }));
                PANDA_ASSERT($tmp1620.value);
                panda$core$Object* $tmp1622 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Object* $tmp1623 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                panda$core$Int64$nullable $tmp1624 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1622), ((org$pandalanguage$pandac$Type*) $tmp1623));
                cost11621 = $tmp1624;
                if (((panda$core$Bit) { !cost11621.nonnull }).value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Object* $tmp1626 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                panda$core$Object* $tmp1627 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                panda$core$Int64$nullable $tmp1628 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1626), ((org$pandalanguage$pandac$Type*) $tmp1627));
                cost21625 = $tmp1628;
                if (((panda$core$Bit) { !cost21625.nonnull }).value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Int64 $tmp1629 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(base1488, ((panda$core$Int64) cost11621.value));
                panda$core$Int64 $tmp1630 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1629, ((panda$core$Int64) cost21625.value));
                return ((panda$core$Int64$nullable) { $tmp1630, true });
            }
            }
            panda$core$Bit $tmp1631 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(p_target);
            if ($tmp1631.value) {
            {
                panda$core$Int64 $tmp1632 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_expr->children);
                panda$core$Bit $tmp1633 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1632, ((panda$core$Int64) { 3 }));
                if ($tmp1633.value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Object* $tmp1636 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Bit $tmp1637 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1636)->kind, ((panda$core$Int64) { 1030 }));
                bool $tmp1635 = $tmp1637.value;
                if (!$tmp1635) goto $l1638;
                panda$core$Object* $tmp1639 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                panda$core$Bit $tmp1640 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1639)->kind, ((panda$core$Int64) { 1030 }));
                $tmp1635 = $tmp1640.value;
                $l1638:;
                panda$core$Bit $tmp1641 = { $tmp1635 };
                if ($tmp1641.value) {
                {
                    panda$core$Object* $tmp1642 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                    panda$core$Bit $tmp1643 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1642)->typeKind, ((panda$core$Int64) { 11 }));
                    if ($tmp1643.value) {
                    {
                        panda$core$Object* $tmp1644 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                        panda$core$Object* $tmp1645 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$Type*) $tmp1644)->subtypes, ((panda$core$Int64) { 0 }));
                        panda$core$Bit $tmp1646 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1645));
                        if ($tmp1646.value) {
                        {
                            cost1634 = ((panda$core$Int64) { 0 });
                        }
                        }
                        else {
                        {
                            cost1634 = ((panda$core$Int64) { 1 });
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
                    panda$core$Bit $tmp1647 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 21 }));
                    PANDA_ASSERT($tmp1647.value);
                    panda$core$Object* $tmp1649 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                    panda$core$Object* $tmp1650 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                    panda$core$Int64$nullable $tmp1651 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1649), ((org$pandalanguage$pandac$Type*) $tmp1650));
                    cost11648 = $tmp1651;
                    if (((panda$core$Bit) { !cost11648.nonnull }).value) {
                    {
                        return ((panda$core$Int64$nullable) { .nonnull = false });
                    }
                    }
                    panda$core$Object* $tmp1653 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                    panda$core$Object* $tmp1654 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                    panda$core$Int64$nullable $tmp1655 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1653), ((org$pandalanguage$pandac$Type*) $tmp1654));
                    cost21652 = $tmp1655;
                    if (((panda$core$Bit) { !cost21652.nonnull }).value) {
                    {
                        return ((panda$core$Int64$nullable) { .nonnull = false });
                    }
                    }
                    panda$core$Int64 $tmp1656 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) cost11648.value), ((panda$core$Int64) cost21652.value));
                    cost1634 = $tmp1656;
                }
                }
                panda$core$Object* $tmp1658 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 2 }));
                panda$core$Object* $tmp1659 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 2 }));
                panda$core$Int64$nullable $tmp1660 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1658), ((org$pandalanguage$pandac$Type*) $tmp1659));
                cost31657 = $tmp1660;
                if (((panda$core$Bit) { !cost31657.nonnull }).value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Int64 $tmp1661 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(base1488, cost1634);
                panda$core$Int64 $tmp1662 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1661, ((panda$core$Int64) cost31657.value));
                return ((panda$core$Int64$nullable) { $tmp1662, true });
            }
            }
            org$pandalanguage$pandac$Type* $tmp1663 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
            panda$core$Int64$nullable $tmp1664 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1663, p_target);
            return $tmp1664;
        }
        break;
        case 1040:
        {
            panda$collections$Array* $tmp1666 = (panda$collections$Array*) malloc(40);
            $tmp1666->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1666->refCount.value = 1;
            panda$collections$Array$init($tmp1666);
            args1665 = $tmp1666;
            panda$core$Object* $tmp1668 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
            panda$collections$Array$add$panda$collections$Array$T(args1665, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp1668)));
            panda$core$Bit $tmp1669 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(base1488, ((panda$core$Int64) { 0 }));
            PANDA_ASSERT($tmp1669.value);
            panda$core$Object* $tmp1670 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp1672 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1670), &$s1671, ((panda$collections$ListView*) args1665));
            panda$core$Int64$nullable $tmp1673 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1672, p_target);
            return $tmp1673;
        }
        break;
    }
    panda$core$Bit $tmp1674 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_target);
    panda$core$Bit $tmp1675 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1674);
    if ($tmp1675.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp1677 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_target);
    targetClass1676 = $tmp1677;
    if (((panda$core$Bit) { targetClass1676 == NULL }).value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    {
        ITable* $tmp1679 = ((panda$collections$Iterable*) targetClass1676->methods)->$class->itable;
        while ($tmp1679->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1679 = $tmp1679->next;
        }
        $fn1681 $tmp1680 = $tmp1679->methods[0];
        panda$collections$Iterator* $tmp1682 = $tmp1680(((panda$collections$Iterable*) targetClass1676->methods));
        m$Iter1678 = $tmp1682;
        $l1683:;
        ITable* $tmp1685 = m$Iter1678->$class->itable;
        while ($tmp1685->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1685 = $tmp1685->next;
        }
        $fn1687 $tmp1686 = $tmp1685->methods[0];
        panda$core$Bit $tmp1688 = $tmp1686(m$Iter1678);
        panda$core$Bit $tmp1689 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1688);
        if (!$tmp1689.value) goto $l1684;
        {
            ITable* $tmp1691 = m$Iter1678->$class->itable;
            while ($tmp1691->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1691 = $tmp1691->next;
            }
            $fn1693 $tmp1692 = $tmp1691->methods[1];
            panda$core$Object* $tmp1694 = $tmp1692(m$Iter1678);
            m1690 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1694);
            panda$core$Bit $tmp1695 = org$pandalanguage$pandac$Annotations$isImplicit$R$panda$core$Bit(m1690->annotations);
            if ($tmp1695.value) {
            {
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m1690);
                panda$core$Bit $tmp1696 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(m1690->methodKind, ((panda$core$Int64) { 59 }));
                PANDA_ASSERT($tmp1696.value);
                panda$core$Int64 $tmp1697 = panda$collections$Array$get_count$R$panda$core$Int64(m1690->parameters);
                panda$core$Bit $tmp1698 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1697, ((panda$core$Int64) { 1 }));
                PANDA_ASSERT($tmp1698.value);
                panda$core$Object* $tmp1700 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(m1690->parameters, ((panda$core$Int64) { 0 }));
                panda$core$Int64$nullable $tmp1701 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1700)->type);
                cost1699 = $tmp1701;
                if (((panda$core$Bit) { cost1699.nonnull }).value) {
                {
                    panda$core$Int64 $tmp1702 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(base1488, ((panda$core$Int64) cost1699.value));
                    return ((panda$core$Int64$nullable) { $tmp1702, true });
                }
                }
            }
            }
        }
        goto $l1683;
        $l1684:;
    }
    PANDA_ASSERT(((panda$core$Bit) { p_expr->type != NULL }).value);
    panda$core$Int64$nullable $tmp1704 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr->type, p_target);
    cost1703 = $tmp1704;
    if (((panda$core$Bit) { cost1703.nonnull }).value) {
    {
        panda$core$Int64 $tmp1705 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(base1488, ((panda$core$Int64) cost1703.value));
        return ((panda$core$Int64$nullable) { $tmp1705, true });
    }
    }
    return ((panda$core$Int64$nullable) { .nonnull = false });
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$doCoerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr, org$pandalanguage$pandac$Type* p_target) {
    panda$collections$Array* children1714;
    org$pandalanguage$pandac$IRNode* intermediate1719;
    org$pandalanguage$pandac$IRNode* coerced1751;
    org$pandalanguage$pandac$IRNode* coerced1777;
    org$pandalanguage$pandac$IRNode* coerced1790;
    org$pandalanguage$pandac$IRNode* varType1804;
    panda$collections$Array* args1814;
    org$pandalanguage$pandac$IRNode* target1822;
    panda$collections$Array* args1833;
    org$pandalanguage$pandac$IRNode* target1845;
    panda$collections$Array* args1856;
    org$pandalanguage$pandac$IRNode* target1864;
    org$pandalanguage$pandac$Type* param1880;
    org$pandalanguage$pandac$IRNode* start1882;
    org$pandalanguage$pandac$IRNode* end1885;
    panda$collections$Array* args1888;
    org$pandalanguage$pandac$IRNode* target1894;
    org$pandalanguage$pandac$Type* endPoint1910;
    org$pandalanguage$pandac$IRNode* start1912;
    org$pandalanguage$pandac$IRNode* end1915;
    org$pandalanguage$pandac$IRNode* step1918;
    panda$collections$Array* args1922;
    org$pandalanguage$pandac$IRNode* target1928;
    panda$collections$ImmutableArray* args1936;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1937;
    panda$collections$Array* children1949;
    org$pandalanguage$pandac$IRNode* intermediate1955;
    org$pandalanguage$pandac$ClassDecl* cl1960;
    panda$collections$Iterator* m$Iter1962;
    org$pandalanguage$pandac$MethodDecl* m1974;
    org$pandalanguage$pandac$IRNode* type1985;
    panda$collections$Array* args1990;
    panda$collections$Array* children1994;
    if (((panda$core$Bit) { p_expr == NULL }).value) {
    {
        return NULL;
    }
    }
    PANDA_ASSERT(p_expr->type->resolved.value);
    PANDA_ASSERT(p_target->resolved.value);
    panda$core$Bit $tmp1706 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_expr->type, p_target);
    if ($tmp1706.value) {
    {
        return p_expr;
    }
    }
    panda$core$Bit $tmp1708 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->type->typeKind, ((panda$core$Int64) { 11 }));
    bool $tmp1707 = $tmp1708.value;
    if (!$tmp1707) goto $l1709;
    panda$core$Bit $tmp1710 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
    $tmp1707 = $tmp1710.value;
    $l1709:;
    panda$core$Bit $tmp1711 = { $tmp1707 };
    if ($tmp1711.value) {
    {
        panda$core$Object* $tmp1712 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp1713 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1712), p_target);
        if ($tmp1713.value) {
        {
            panda$collections$Array* $tmp1715 = (panda$collections$Array*) malloc(40);
            $tmp1715->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1715->refCount.value = 1;
            panda$collections$Array$init($tmp1715);
            children1714 = $tmp1715;
            panda$collections$Array$add$panda$collections$Array$T(children1714, ((panda$core$Object*) p_expr));
            org$pandalanguage$pandac$IRNode* $tmp1717 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp1717->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1717->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp1717, ((panda$core$Int64) { 1009 }), p_expr->position, p_target, ((panda$core$Object*) wrap_panda$core$Bit(((panda$core$Bit) { false }))), ((panda$collections$ListView*) children1714));
            return $tmp1717;
        }
        }
        panda$core$Object* $tmp1720 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->type->subtypes, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp1721 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, ((org$pandalanguage$pandac$Type*) $tmp1720));
        intermediate1719 = $tmp1721;
        org$pandalanguage$pandac$IRNode* $tmp1722 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, intermediate1719, p_target);
        return $tmp1722;
    }
    }
    switch (p_expr->kind.value) {
        case 1004:
        {
            panda$core$Bit $tmp1724 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            bool $tmp1723 = $tmp1724.value;
            if (!$tmp1723) goto $l1725;
            panda$core$Int64 $tmp1726 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64(self, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1727 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1728 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1726, $tmp1727);
            $tmp1723 = $tmp1728.value;
            $l1725:;
            panda$core$Bit $tmp1729 = { $tmp1723 };
            if ($tmp1729.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1730 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1730->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1730->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp1730, ((panda$core$Int64) { 1004 }), p_expr->position, p_target, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
                return $tmp1730;
            }
            }
            else {
            panda$core$Bit $tmp1733 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 13 }));
            bool $tmp1732 = $tmp1733.value;
            if (!$tmp1732) goto $l1734;
            panda$core$Int64 $tmp1735 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64(self, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1736 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1737 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1735, $tmp1736);
            $tmp1732 = $tmp1737.value;
            $l1734:;
            panda$core$Bit $tmp1738 = { $tmp1732 };
            if ($tmp1738.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1739 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1739->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1739->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp1739, ((panda$core$Int64) { 1004 }), p_expr->position, p_target, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
                return $tmp1739;
            }
            }
            else {
            panda$core$Bit $tmp1741 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 20 }));
            if ($tmp1741.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1742 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1742->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1742->refCount.value = 1;
                panda$core$Real64 $tmp1744 = panda$core$UInt64$convert$R$panda$core$Real64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Real64($tmp1742, ((panda$core$Int64) { 1045 }), p_expr->position, p_target, $tmp1744);
                return $tmp1742;
            }
            }
            }
            }
            panda$core$Bit $tmp1746 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 10 }));
            bool $tmp1745 = $tmp1746.value;
            if (!$tmp1745) goto $l1747;
            panda$core$Bit $tmp1748 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            panda$core$Bit $tmp1749 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1748);
            $tmp1745 = $tmp1749.value;
            $l1747:;
            panda$core$Bit $tmp1750 = { $tmp1745 };
            if ($tmp1750.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1752 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp1753 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, $tmp1752);
                coerced1751 = $tmp1753;
                if (((panda$core$Bit) { coerced1751 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$IRNode* $tmp1754 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, coerced1751, p_target);
                return $tmp1754;
            }
            }
        }
        break;
        case 1032:
        {
            panda$core$Bit $tmp1756 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            bool $tmp1755 = $tmp1756.value;
            if (!$tmp1755) goto $l1757;
            panda$core$Int64 $tmp1758 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1759 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp1758);
            panda$core$Int64 $tmp1760 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(self, $tmp1759);
            panda$core$Int64 $tmp1761 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1762 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1760, $tmp1761);
            $tmp1755 = $tmp1762.value;
            $l1757:;
            panda$core$Bit $tmp1763 = { $tmp1755 };
            if ($tmp1763.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1764 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1764->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1764->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp1764, ((panda$core$Int64) { 1032 }), p_expr->position, p_target, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
                return $tmp1764;
            }
            }
            else {
            panda$core$Bit $tmp1766 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 20 }));
            if ($tmp1766.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1767 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1767->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1767->refCount.value = 1;
                panda$core$Real64 $tmp1769 = panda$core$UInt64$convert$R$panda$core$Real64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
                panda$core$Real64 $tmp1770 = panda$core$Real64$$SUB$R$panda$core$Real64($tmp1769);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Real64($tmp1767, ((panda$core$Int64) { 1045 }), p_expr->position, p_target, $tmp1770);
                return $tmp1767;
            }
            }
            }
            panda$core$Bit $tmp1772 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 10 }));
            bool $tmp1771 = $tmp1772.value;
            if (!$tmp1771) goto $l1773;
            panda$core$Bit $tmp1774 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            panda$core$Bit $tmp1775 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1774);
            $tmp1771 = $tmp1775.value;
            $l1773:;
            panda$core$Bit $tmp1776 = { $tmp1771 };
            if ($tmp1776.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1778 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp1779 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, $tmp1778);
                coerced1777 = $tmp1779;
                if (((panda$core$Bit) { coerced1777 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$IRNode* $tmp1780 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, coerced1777, p_target);
                return $tmp1780;
            }
            }
        }
        break;
        case 1045:
        {
            panda$core$Bit $tmp1781 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 20 }));
            if ($tmp1781.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1782 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1782->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1782->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Real64($tmp1782, ((panda$core$Int64) { 1045 }), p_expr->position, p_target, ((panda$core$Real64$wrapper*) p_expr->payload)->value);
                return $tmp1782;
            }
            }
            panda$core$Bit $tmp1785 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 10 }));
            bool $tmp1784 = $tmp1785.value;
            if (!$tmp1784) goto $l1786;
            panda$core$Bit $tmp1787 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            panda$core$Bit $tmp1788 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1787);
            $tmp1784 = $tmp1788.value;
            $l1786:;
            panda$core$Bit $tmp1789 = { $tmp1784 };
            if ($tmp1789.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1791 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp1792 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, $tmp1791);
                coerced1790 = $tmp1792;
                if (((panda$core$Bit) { coerced1790 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$IRNode* $tmp1793 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, coerced1790, p_target);
                return $tmp1793;
            }
            }
        }
        break;
        case 1011:
        {
            org$pandalanguage$pandac$Type* $tmp1794 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1795 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1794);
            if ($tmp1795.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1796 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1796->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1796->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp1796, ((panda$core$Int64) { 1011 }), p_expr->position, p_target, ((panda$core$Bit$wrapper*) p_expr->payload)->value);
                return $tmp1796;
            }
            }
            panda$core$Bit $tmp1799 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_target);
            bool $tmp1798 = $tmp1799.value;
            if (!$tmp1798) goto $l1800;
            org$pandalanguage$pandac$Type* $tmp1801 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1802 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1801);
            $tmp1798 = $tmp1802.value;
            $l1800:;
            panda$core$Bit $tmp1803 = { $tmp1798 };
            if ($tmp1803.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1805 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp1806 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, $tmp1805);
                varType1804 = $tmp1806;
                if (((panda$core$Bit) { varType1804 != NULL }).value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp1807 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, varType1804, p_target);
                    return $tmp1807;
                }
                }
            }
            }
        }
        break;
        case 1033:
        {
            org$pandalanguage$pandac$Type* $tmp1809 = org$pandalanguage$pandac$Type$Char8$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1810 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1809);
            bool $tmp1808 = $tmp1810.value;
            if (!$tmp1808) goto $l1811;
            panda$core$Int64$nullable $tmp1812 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, p_target);
            $tmp1808 = ((panda$core$Bit) { $tmp1812.nonnull }).value;
            $l1811:;
            panda$core$Bit $tmp1813 = { $tmp1808 };
            if ($tmp1813.value) {
            {
                panda$collections$Array* $tmp1815 = (panda$collections$Array*) malloc(40);
                $tmp1815->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp1815->refCount.value = 1;
                panda$collections$Array$init($tmp1815);
                args1814 = $tmp1815;
                org$pandalanguage$pandac$IRNode* $tmp1817 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1817->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1817->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1819 = org$pandalanguage$pandac$Type$BuiltinUInt8$R$org$pandalanguage$pandac$Type();
                panda$core$Char32 $tmp1820 = panda$core$String$$IDX$panda$core$Int64$R$panda$core$Char32(((panda$core$String*) p_expr->payload), ((panda$core$Int64) { 0 }));
                panda$core$UInt64 $tmp1821 = panda$core$Char32$convert$R$panda$core$UInt64($tmp1820);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp1817, ((panda$core$Int64) { 1004 }), p_expr->position, $tmp1819, $tmp1821);
                panda$collections$Array$add$panda$collections$Array$T(args1814, ((panda$core$Object*) $tmp1817));
                org$pandalanguage$pandac$IRNode* $tmp1823 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1823->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1823->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1825 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1823, ((panda$core$Int64) { 1001 }), p_expr->position, $tmp1825, p_target);
                target1822 = $tmp1823;
                org$pandalanguage$pandac$IRNode* $tmp1826 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target1822, ((panda$collections$ListView*) args1814));
                return $tmp1826;
            }
            }
            org$pandalanguage$pandac$Type* $tmp1828 = org$pandalanguage$pandac$Type$Char16$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1829 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1828);
            bool $tmp1827 = $tmp1829.value;
            if (!$tmp1827) goto $l1830;
            panda$core$Int64$nullable $tmp1831 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, p_target);
            $tmp1827 = ((panda$core$Bit) { $tmp1831.nonnull }).value;
            $l1830:;
            panda$core$Bit $tmp1832 = { $tmp1827 };
            if ($tmp1832.value) {
            {
                panda$collections$Array* $tmp1834 = (panda$collections$Array*) malloc(40);
                $tmp1834->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp1834->refCount.value = 1;
                panda$collections$Array$init($tmp1834);
                args1833 = $tmp1834;
                org$pandalanguage$pandac$IRNode* $tmp1836 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1836->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1836->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1838 = org$pandalanguage$pandac$Type$BuiltinUInt16$R$org$pandalanguage$pandac$Type();
                panda$collections$Iterator* $tmp1839 = panda$core$String$utf16$R$panda$collections$Iterator$LTpanda$core$Char16$GT(((panda$core$String*) p_expr->payload));
                ITable* $tmp1840 = $tmp1839->$class->itable;
                while ($tmp1840->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1840 = $tmp1840->next;
                }
                $fn1842 $tmp1841 = $tmp1840->methods[1];
                panda$core$Object* $tmp1843 = $tmp1841($tmp1839);
                panda$core$UInt64 $tmp1844 = panda$core$Char16$convert$R$panda$core$UInt64(((panda$core$Char16$wrapper*) $tmp1843)->value);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp1836, ((panda$core$Int64) { 1004 }), p_expr->position, $tmp1838, $tmp1844);
                panda$collections$Array$add$panda$collections$Array$T(args1833, ((panda$core$Object*) $tmp1836));
                org$pandalanguage$pandac$IRNode* $tmp1846 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1846->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1846->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1848 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1846, ((panda$core$Int64) { 1001 }), p_expr->position, $tmp1848, p_target);
                target1845 = $tmp1846;
                org$pandalanguage$pandac$IRNode* $tmp1849 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target1845, ((panda$collections$ListView*) args1833));
                return $tmp1849;
            }
            }
            org$pandalanguage$pandac$Type* $tmp1851 = org$pandalanguage$pandac$Type$Char32$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1852 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1851);
            bool $tmp1850 = $tmp1852.value;
            if (!$tmp1850) goto $l1853;
            panda$core$Int64$nullable $tmp1854 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, p_target);
            $tmp1850 = ((panda$core$Bit) { $tmp1854.nonnull }).value;
            $l1853:;
            panda$core$Bit $tmp1855 = { $tmp1850 };
            if ($tmp1855.value) {
            {
                panda$collections$Array* $tmp1857 = (panda$collections$Array*) malloc(40);
                $tmp1857->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp1857->refCount.value = 1;
                panda$collections$Array$init($tmp1857);
                args1856 = $tmp1857;
                org$pandalanguage$pandac$IRNode* $tmp1859 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1859->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1859->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1861 = org$pandalanguage$pandac$Type$BuiltinUInt32$R$org$pandalanguage$pandac$Type();
                panda$core$Char32 $tmp1862 = panda$core$String$$IDX$panda$core$Int64$R$panda$core$Char32(((panda$core$String*) p_expr->payload), ((panda$core$Int64) { 0 }));
                panda$core$UInt64 $tmp1863 = panda$core$Char32$convert$R$panda$core$UInt64($tmp1862);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp1859, ((panda$core$Int64) { 1004 }), p_expr->position, $tmp1861, $tmp1863);
                panda$collections$Array$add$panda$collections$Array$T(args1856, ((panda$core$Object*) $tmp1859));
                org$pandalanguage$pandac$IRNode* $tmp1865 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1865->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1865->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1867 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1865, ((panda$core$Int64) { 1001 }), p_expr->position, $tmp1867, p_target);
                target1864 = $tmp1865;
                org$pandalanguage$pandac$IRNode* $tmp1868 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target1864, ((panda$collections$ListView*) args1856));
                return $tmp1868;
            }
            }
        }
        break;
        case 1031:
        {
            panda$core$Bit $tmp1869 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(p_target);
            if ($tmp1869.value) {
            {
                panda$core$Int64 $tmp1870 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_expr->children);
                panda$core$Bit $tmp1871 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1870, ((panda$core$Int64) { 2 }));
                if ($tmp1871.value) {
                {
                    panda$core$String* $tmp1873 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1872, ((panda$core$Object*) p_target));
                    panda$core$String* $tmp1875 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1873, &$s1874);
                    panda$core$String* $tmp1876 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1875, ((panda$core$Object*) p_expr));
                    panda$core$String* $tmp1878 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1876, &$s1877);
                    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_expr->position, $tmp1878);
                    return NULL;
                }
                }
                panda$core$Bit $tmp1879 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 21 }));
                PANDA_ASSERT($tmp1879.value);
                panda$core$Object* $tmp1881 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                param1880 = ((org$pandalanguage$pandac$Type*) $tmp1881);
                panda$core$Object* $tmp1883 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$IRNode* $tmp1884 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1883), param1880);
                start1882 = $tmp1884;
                if (((panda$core$Bit) { start1882 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$core$Object* $tmp1886 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$IRNode* $tmp1887 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1886), param1880);
                end1885 = $tmp1887;
                if (((panda$core$Bit) { end1885 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp1889 = (panda$collections$Array*) malloc(40);
                $tmp1889->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp1889->refCount.value = 1;
                panda$collections$Array$init($tmp1889);
                args1888 = $tmp1889;
                panda$collections$Array$add$panda$collections$Array$T(args1888, ((panda$core$Object*) start1882));
                panda$collections$Array$add$panda$collections$Array$T(args1888, ((panda$core$Object*) end1885));
                org$pandalanguage$pandac$IRNode* $tmp1891 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1891->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1891->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1893 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp1891, ((panda$core$Int64) { 1011 }), p_expr->position, $tmp1893, ((panda$core$Bit$wrapper*) p_expr->payload)->value);
                panda$collections$Array$add$panda$collections$Array$T(args1888, ((panda$core$Object*) $tmp1891));
                org$pandalanguage$pandac$IRNode* $tmp1895 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1895->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1895->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1897 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1895, ((panda$core$Int64) { 1001 }), p_expr->position, $tmp1897, p_target);
                target1894 = $tmp1895;
                org$pandalanguage$pandac$IRNode* $tmp1898 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target1894, ((panda$collections$ListView*) args1888));
                return $tmp1898;
            }
            }
            else {
            panda$core$Bit $tmp1899 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(p_target);
            if ($tmp1899.value) {
            {
                panda$core$Int64 $tmp1900 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_expr->children);
                panda$core$Bit $tmp1901 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1900, ((panda$core$Int64) { 3 }));
                if ($tmp1901.value) {
                {
                    panda$core$String* $tmp1903 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1902, ((panda$core$Object*) p_target));
                    panda$core$String* $tmp1905 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1903, &$s1904);
                    panda$core$String* $tmp1906 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1905, ((panda$core$Object*) p_expr));
                    panda$core$String* $tmp1908 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1906, &$s1907);
                    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_expr->position, $tmp1908);
                    return NULL;
                }
                }
                panda$core$Bit $tmp1909 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 21 }));
                PANDA_ASSERT($tmp1909.value);
                panda$core$Object* $tmp1911 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                endPoint1910 = ((org$pandalanguage$pandac$Type*) $tmp1911);
                panda$core$Object* $tmp1913 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$IRNode* $tmp1914 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1913), endPoint1910);
                start1912 = $tmp1914;
                if (((panda$core$Bit) { start1912 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$core$Object* $tmp1916 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$IRNode* $tmp1917 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1916), endPoint1910);
                end1915 = $tmp1917;
                panda$core$Object* $tmp1919 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 2 }));
                panda$core$Object* $tmp1920 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 2 }));
                org$pandalanguage$pandac$IRNode* $tmp1921 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1919), ((org$pandalanguage$pandac$Type*) $tmp1920));
                step1918 = $tmp1921;
                panda$collections$Array* $tmp1923 = (panda$collections$Array*) malloc(40);
                $tmp1923->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp1923->refCount.value = 1;
                panda$collections$Array$init($tmp1923);
                args1922 = $tmp1923;
                panda$collections$Array$add$panda$collections$Array$T(args1922, ((panda$core$Object*) start1912));
                panda$collections$Array$add$panda$collections$Array$T(args1922, ((panda$core$Object*) end1915));
                panda$collections$Array$add$panda$collections$Array$T(args1922, ((panda$core$Object*) step1918));
                org$pandalanguage$pandac$IRNode* $tmp1925 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1925->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1925->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1927 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp1925, ((panda$core$Int64) { 1011 }), p_expr->position, $tmp1927, ((panda$core$Bit$wrapper*) p_expr->payload)->value);
                panda$collections$Array$add$panda$collections$Array$T(args1922, ((panda$core$Object*) $tmp1925));
                org$pandalanguage$pandac$IRNode* $tmp1929 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1929->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1929->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1931 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1929, ((panda$core$Int64) { 1001 }), p_expr->position, $tmp1931, p_target);
                target1928 = $tmp1929;
                org$pandalanguage$pandac$IRNode* $tmp1932 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target1928, ((panda$collections$ListView*) args1922));
                return $tmp1932;
            }
            }
            else {
            {
                org$pandalanguage$pandac$IRNode* $tmp1933 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp1934 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp1933, p_target);
                return $tmp1934;
            }
            }
            }
        }
        break;
        case 1039:
        {
            org$pandalanguage$pandac$IRNode* $tmp1935 = org$pandalanguage$pandac$Compiler$resolveMethodCall$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, p_target);
            return $tmp1935;
        }
        break;
        case 1040:
        {
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1937, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$collections$ImmutableArray* $tmp1938 = panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(p_expr->children, $tmp1937);
            args1936 = $tmp1938;
            panda$core$Object* $tmp1939 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp1941 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1939), &$s1940, ((panda$collections$ListView*) args1936), p_target);
            org$pandalanguage$pandac$IRNode* $tmp1942 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp1941, p_target);
            return $tmp1942;
        }
        break;
    }
    panda$core$Bit $tmp1943 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp1943.value) {
    {
        panda$core$Bit $tmp1944 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1030 }));
        if ($tmp1944.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp1945 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp1945->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1945->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp1945, ((panda$core$Int64) { 1030 }), p_expr->position, p_target);
            return $tmp1945;
        }
        }
        panda$core$Object* $tmp1947 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp1948 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_expr->type, ((org$pandalanguage$pandac$Type*) $tmp1947));
        if ($tmp1948.value) {
        {
            panda$collections$Array* $tmp1950 = (panda$collections$Array*) malloc(40);
            $tmp1950->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1950->refCount.value = 1;
            panda$collections$Array$init($tmp1950);
            children1949 = $tmp1950;
            panda$collections$Array$add$panda$collections$Array$T(children1949, ((panda$core$Object*) p_expr));
            org$pandalanguage$pandac$IRNode* $tmp1952 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp1952->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1952->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp1952, ((panda$core$Int64) { 1009 }), p_expr->position, p_target, ((panda$core$Object*) wrap_panda$core$Bit(((panda$core$Bit) { false }))), ((panda$collections$ListView*) children1949));
            return $tmp1952;
        }
        }
        panda$core$Bit $tmp1954 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_expr->type->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp1954.value) {
        {
            panda$core$Object* $tmp1956 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp1957 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, ((org$pandalanguage$pandac$Type*) $tmp1956));
            intermediate1955 = $tmp1957;
            org$pandalanguage$pandac$IRNode* $tmp1958 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, intermediate1955, p_target);
            return $tmp1958;
        }
        }
    }
    }
    panda$core$Int64$nullable $tmp1959 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, p_target);
    if (((panda$core$Bit) { $tmp1959.nonnull }).value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp1961 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_target);
        cl1960 = $tmp1961;
        if (((panda$core$Bit) { cl1960 != NULL }).value) {
        {
            {
                ITable* $tmp1963 = ((panda$collections$Iterable*) cl1960->methods)->$class->itable;
                while ($tmp1963->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1963 = $tmp1963->next;
                }
                $fn1965 $tmp1964 = $tmp1963->methods[0];
                panda$collections$Iterator* $tmp1966 = $tmp1964(((panda$collections$Iterable*) cl1960->methods));
                m$Iter1962 = $tmp1966;
                $l1967:;
                ITable* $tmp1969 = m$Iter1962->$class->itable;
                while ($tmp1969->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1969 = $tmp1969->next;
                }
                $fn1971 $tmp1970 = $tmp1969->methods[0];
                panda$core$Bit $tmp1972 = $tmp1970(m$Iter1962);
                panda$core$Bit $tmp1973 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1972);
                if (!$tmp1973.value) goto $l1968;
                {
                    ITable* $tmp1975 = m$Iter1962->$class->itable;
                    while ($tmp1975->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1975 = $tmp1975->next;
                    }
                    $fn1977 $tmp1976 = $tmp1975->methods[1];
                    panda$core$Object* $tmp1978 = $tmp1976(m$Iter1962);
                    m1974 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1978);
                    panda$core$Bit $tmp1979 = org$pandalanguage$pandac$Annotations$isImplicit$R$panda$core$Bit(m1974->annotations);
                    if ($tmp1979.value) {
                    {
                        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m1974);
                        panda$core$Bit $tmp1980 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(m1974->methodKind, ((panda$core$Int64) { 59 }));
                        PANDA_ASSERT($tmp1980.value);
                        panda$core$Int64 $tmp1981 = panda$collections$Array$get_count$R$panda$core$Int64(m1974->parameters);
                        panda$core$Bit $tmp1982 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1981, ((panda$core$Int64) { 1 }));
                        PANDA_ASSERT($tmp1982.value);
                        panda$core$Object* $tmp1983 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(m1974->parameters, ((panda$core$Int64) { 0 }));
                        panda$core$Int64$nullable $tmp1984 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1983)->type);
                        if (((panda$core$Bit) { $tmp1984.nonnull }).value) {
                        {
                            org$pandalanguage$pandac$IRNode* $tmp1986 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                            $tmp1986->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                            $tmp1986->refCount.value = 1;
                            org$pandalanguage$pandac$Type* $tmp1988 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                            org$pandalanguage$pandac$Type* $tmp1989 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl1960);
                            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1986, ((panda$core$Int64) { 1001 }), p_expr->position, $tmp1988, $tmp1989);
                            type1985 = $tmp1986;
                            panda$collections$Array* $tmp1991 = (panda$collections$Array*) malloc(40);
                            $tmp1991->$class = (panda$core$Class*) &panda$collections$Array$class;
                            $tmp1991->refCount.value = 1;
                            panda$collections$Array$init$panda$core$Int64($tmp1991, ((panda$core$Int64) { 1 }));
                            args1990 = $tmp1991;
                            panda$collections$Array$add$panda$collections$Array$T(args1990, ((panda$core$Object*) p_expr));
                            org$pandalanguage$pandac$IRNode* $tmp1993 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, type1985, ((panda$collections$ListView*) args1990));
                            return $tmp1993;
                        }
                        }
                    }
                    }
                }
                goto $l1967;
                $l1968:;
            }
        }
        }
        panda$collections$Array* $tmp1995 = (panda$collections$Array*) malloc(40);
        $tmp1995->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp1995->refCount.value = 1;
        panda$collections$Array$init$panda$core$Int64($tmp1995, ((panda$core$Int64) { 1 }));
        children1994 = $tmp1995;
        panda$collections$Array$add$panda$collections$Array$T(children1994, ((panda$core$Object*) p_expr));
        org$pandalanguage$pandac$IRNode* $tmp1997 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp1997->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp1997->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp1997, ((panda$core$Int64) { 1009 }), p_expr->position, p_target, ((panda$core$Object*) wrap_panda$core$Bit(((panda$core$Bit) { false }))), ((panda$collections$ListView*) children1994));
        return $tmp1997;
    }
    }
    panda$core$String* $tmp2000 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1999, ((panda$core$Object*) p_target));
    panda$core$String* $tmp2002 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2000, &$s2001);
    panda$core$String* $tmp2003 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2002, ((panda$core$Object*) p_expr->type));
    panda$core$String* $tmp2005 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2003, &$s2004);
    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_expr->position, $tmp2005);
    return NULL;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr, org$pandalanguage$pandac$Type* p_target) {
    org$pandalanguage$pandac$IRNode* result2006;
    org$pandalanguage$pandac$IRNode* $tmp2007 = org$pandalanguage$pandac$Compiler$doCoerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, p_target);
    result2006 = $tmp2007;
    bool $tmp2008 = ((panda$core$Bit) { result2006 == NULL }).value;
    if ($tmp2008) goto $l2009;
    panda$core$Bit $tmp2010 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(result2006->type, p_target);
    $tmp2008 = $tmp2010.value;
    $l2009:;
    panda$core$Bit $tmp2011 = { $tmp2008 };
    PANDA_ASSERT($tmp2011.value);
    return result2006;
}
panda$core$Bit org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type, org$pandalanguage$pandac$Type* p_target) {
    panda$core$Bit $tmp2013 = org$pandalanguage$pandac$Type$isPointer$R$panda$core$Bit(p_type);
    bool $tmp2012 = $tmp2013.value;
    if (!$tmp2012) goto $l2014;
    panda$core$Bit $tmp2015 = org$pandalanguage$pandac$Type$isPointer$R$panda$core$Bit(p_target);
    $tmp2012 = $tmp2015.value;
    $l2014:;
    panda$core$Bit $tmp2016 = { $tmp2012 };
    if ($tmp2016.value) {
    {
        return ((panda$core$Bit) { true });
    }
    }
    panda$core$Int64$nullable $tmp2017 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_type, p_target);
    if (((panda$core$Bit) { $tmp2017.nonnull }).value) {
    {
        return ((panda$core$Bit) { true });
    }
    }
    panda$core$Bit $tmp2019 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_type);
    bool $tmp2018 = $tmp2019.value;
    if (!$tmp2018) goto $l2020;
    panda$core$Bit $tmp2021 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_target);
    $tmp2018 = $tmp2021.value;
    $l2020:;
    panda$core$Bit $tmp2022 = { $tmp2018 };
    if ($tmp2022.value) {
    {
        return ((panda$core$Bit) { true });
    }
    }
    panda$core$Bit $tmp2023 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 16 }));
    if ($tmp2023.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Int64$nullable $tmp2024 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_target, p_type);
    return ((panda$core$Bit) { $tmp2024.nonnull });
}
panda$core$Bit org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_node, org$pandalanguage$pandac$Type* p_target) {
    panda$core$Bit result2026;
    org$pandalanguage$pandac$IRNode* resolved2033;
    panda$core$Int64$nullable $tmp2025 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_node, p_target);
    if (((panda$core$Bit) { $tmp2025.nonnull }).value) {
    {
        return ((panda$core$Bit) { true });
    }
    }
    panda$core$Bit $tmp2027 = org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_node->type, p_target);
    result2026 = $tmp2027;
    panda$core$Bit $tmp2029 = panda$core$Bit$$NOT$R$panda$core$Bit(result2026);
    bool $tmp2028 = $tmp2029.value;
    if (!$tmp2028) goto $l2030;
    panda$core$Bit $tmp2031 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_node->type->typeKind, ((panda$core$Int64) { 17 }));
    $tmp2028 = $tmp2031.value;
    $l2030:;
    panda$core$Bit $tmp2032 = { $tmp2028 };
    if ($tmp2032.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2034 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_node);
        resolved2033 = $tmp2034;
        if (((panda$core$Bit) { resolved2033 != NULL }).value) {
        {
            panda$core$Bit $tmp2035 = org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, resolved2033, p_target);
            result2026 = $tmp2035;
        }
        }
    }
    }
    return result2026;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_node, org$pandalanguage$pandac$Position p_position, panda$core$Bit p_isExplicit, org$pandalanguage$pandac$Type* p_target) {
    org$pandalanguage$pandac$IRNode* resolved2056;
    panda$collections$Array* children2059;
    panda$core$Bit $tmp2036 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_node->type, p_target);
    if ($tmp2036.value) {
    {
        return p_node;
    }
    }
    org$pandalanguage$pandac$Type* $tmp2037 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2038 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp2037);
    PANDA_ASSERT($tmp2038.value);
    bool $tmp2039 = p_isExplicit.value;
    if (!$tmp2039) goto $l2040;
    panda$core$Bit $tmp2041 = org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_node, p_target);
    panda$core$Bit $tmp2042 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2041);
    $tmp2039 = $tmp2042.value;
    $l2040:;
    panda$core$Bit $tmp2043 = { $tmp2039 };
    if ($tmp2043.value) {
    {
        panda$core$String* $tmp2045 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2044, ((panda$core$Object*) p_node->type));
        panda$core$String* $tmp2047 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2045, &$s2046);
        panda$core$String* $tmp2049 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2048, ((panda$core$Object*) p_target));
        panda$core$String* $tmp2051 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2049, &$s2050);
        panda$core$String* $tmp2052 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2047, $tmp2051);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp2052);
    }
    }
    switch (p_node->kind.value) {
        case 1004:
        case 1032:
        case 1011:
        {
            org$pandalanguage$pandac$IRNode* $tmp2053 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_node, p_target);
            return $tmp2053;
        }
        break;
        case 1039:
        case 1040:
        {
            panda$core$Int64$nullable $tmp2054 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_node, p_target);
            if (((panda$core$Bit) { $tmp2054.nonnull }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2055 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_node, p_target);
                return $tmp2055;
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp2057 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_node);
            resolved2056 = $tmp2057;
            if (((panda$core$Bit) { resolved2056 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2058 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, resolved2056, p_position, p_isExplicit, p_target);
                return $tmp2058;
            }
            }
        }
        break;
    }
    panda$collections$Array* $tmp2060 = (panda$collections$Array*) malloc(40);
    $tmp2060->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2060->refCount.value = 1;
    panda$collections$Array$init($tmp2060);
    children2059 = $tmp2060;
    panda$collections$Array$add$panda$collections$Array$T(children2059, ((panda$core$Object*) p_node));
    org$pandalanguage$pandac$IRNode* $tmp2062 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp2062->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2062->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2062, ((panda$core$Int64) { 1009 }), p_position, p_target, ((panda$core$Object*) wrap_panda$core$Bit(p_isExplicit)), ((panda$collections$ListView*) children2059));
    return $tmp2062;
}
panda$core$Int64$nullable org$pandalanguage$pandac$Compiler$callCost$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodRef* p_m, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedReturn) {
    panda$core$Int64 result2070;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2071;
    panda$core$Int64$nullable cost2086;
    panda$core$Int64$nullable cost2100;
    PANDA_ASSERT(p_m->value->resolved.value);
    panda$core$Int64 $tmp2064 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
    ITable* $tmp2065 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp2065->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2065 = $tmp2065->next;
    }
    $fn2067 $tmp2066 = $tmp2065->methods[0];
    panda$core$Int64 $tmp2068 = $tmp2066(((panda$collections$CollectionView*) p_args));
    panda$core$Bit $tmp2069 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp2064, $tmp2068);
    if ($tmp2069.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    result2070 = ((panda$core$Int64) { 0 });
    panda$core$Int64 $tmp2072 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2071, ((panda$core$Int64) { 0 }), $tmp2072, ((panda$core$Bit) { false }));
    int64_t $tmp2074 = $tmp2071.min.value;
    panda$core$Int64 i2073 = { $tmp2074 };
    int64_t $tmp2076 = $tmp2071.max.value;
    bool $tmp2077 = $tmp2071.inclusive.value;
    if ($tmp2077) goto $l2084; else goto $l2085;
    $l2084:;
    if ($tmp2074 <= $tmp2076) goto $l2078; else goto $l2080;
    $l2085:;
    if ($tmp2074 < $tmp2076) goto $l2078; else goto $l2080;
    $l2078:;
    {
        ITable* $tmp2087 = p_args->$class->itable;
        while ($tmp2087->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2087 = $tmp2087->next;
        }
        $fn2089 $tmp2088 = $tmp2087->methods[0];
        panda$core$Object* $tmp2090 = $tmp2088(p_args, i2073);
        org$pandalanguage$pandac$Type* $tmp2091 = org$pandalanguage$pandac$MethodRef$parameter$panda$core$Int64$R$org$pandalanguage$pandac$Type(p_m, i2073);
        panda$core$Int64$nullable $tmp2092 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp2090), $tmp2091);
        cost2086 = $tmp2092;
        if (((panda$core$Bit) { !cost2086.nonnull }).value) {
        {
            return ((panda$core$Int64$nullable) { .nonnull = false });
        }
        }
        panda$core$Int64 $tmp2093 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result2070, ((panda$core$Int64) cost2086.value));
        result2070 = $tmp2093;
    }
    $l2081:;
    int64_t $tmp2095 = $tmp2076 - i2073.value;
    if ($tmp2077) goto $l2096; else goto $l2097;
    $l2096:;
    if ($tmp2095 >= 1) goto $l2094; else goto $l2080;
    $l2097:;
    if ($tmp2095 > 1) goto $l2094; else goto $l2080;
    $l2094:;
    i2073.value += 1;
    goto $l2078;
    $l2080:;
    if (((panda$core$Bit) { p_expectedReturn != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp2101 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(p_m);
        panda$core$Int64$nullable $tmp2102 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp2101, p_expectedReturn);
        cost2100 = $tmp2102;
        if (((panda$core$Bit) { !cost2100.nonnull }).value) {
        {
            return ((panda$core$Int64$nullable) { .nonnull = false });
        }
        }
        panda$core$Int64 $tmp2103 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result2070, ((panda$core$Int64) cost2100.value));
        result2070 = $tmp2103;
    }
    }
    org$pandalanguage$pandac$Type* $tmp2106 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->value->owner);
    panda$core$Bit $tmp2107 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit($tmp2106);
    bool $tmp2105 = $tmp2107.value;
    if (!$tmp2105) goto $l2108;
    ITable* $tmp2109 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp2109->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2109 = $tmp2109->next;
    }
    $fn2111 $tmp2110 = $tmp2109->methods[0];
    panda$core$Int64 $tmp2112 = $tmp2110(((panda$collections$CollectionView*) p_args));
    panda$core$Bit $tmp2113 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2112, ((panda$core$Int64) { 1 }));
    $tmp2105 = $tmp2113.value;
    $l2108:;
    panda$core$Bit $tmp2114 = { $tmp2105 };
    bool $tmp2104 = $tmp2114.value;
    if (!$tmp2104) goto $l2115;
    panda$core$Object* $tmp2116 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->value->parameters, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp2117 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->value->owner);
    panda$core$Bit $tmp2118 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp2116)->type, $tmp2117);
    $tmp2104 = $tmp2118.value;
    $l2115:;
    panda$core$Bit $tmp2119 = { $tmp2104 };
    if ($tmp2119.value) {
    {
        panda$core$Int64 $tmp2120 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result2070, ((panda$core$Int64) { 1 }));
        result2070 = $tmp2120;
    }
    }
    return ((panda$core$Int64$nullable) { result2070, true });
}
panda$core$Int64$nullable org$pandalanguage$pandac$Compiler$matchMethods$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(org$pandalanguage$pandac$Compiler* self, panda$collections$Array* p_methods, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedReturn) {
    panda$collections$Array* result2121;
    panda$core$Int64$nullable best2124;
    panda$collections$Iterator* m$Iter2125;
    org$pandalanguage$pandac$MethodRef* m2137;
    panda$core$Int64$nullable cost2142;
    panda$collections$Array* $tmp2122 = (panda$collections$Array*) malloc(40);
    $tmp2122->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2122->refCount.value = 1;
    panda$collections$Array$init($tmp2122);
    result2121 = $tmp2122;
    best2124 = ((panda$core$Int64$nullable) { .nonnull = false });
    {
        ITable* $tmp2126 = ((panda$collections$Iterable*) p_methods)->$class->itable;
        while ($tmp2126->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2126 = $tmp2126->next;
        }
        $fn2128 $tmp2127 = $tmp2126->methods[0];
        panda$collections$Iterator* $tmp2129 = $tmp2127(((panda$collections$Iterable*) p_methods));
        m$Iter2125 = $tmp2129;
        $l2130:;
        ITable* $tmp2132 = m$Iter2125->$class->itable;
        while ($tmp2132->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2132 = $tmp2132->next;
        }
        $fn2134 $tmp2133 = $tmp2132->methods[0];
        panda$core$Bit $tmp2135 = $tmp2133(m$Iter2125);
        panda$core$Bit $tmp2136 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2135);
        if (!$tmp2136.value) goto $l2131;
        {
            ITable* $tmp2138 = m$Iter2125->$class->itable;
            while ($tmp2138->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2138 = $tmp2138->next;
            }
            $fn2140 $tmp2139 = $tmp2138->methods[1];
            panda$core$Object* $tmp2141 = $tmp2139(m$Iter2125);
            m2137 = ((org$pandalanguage$pandac$MethodRef*) $tmp2141);
            panda$core$Int64$nullable $tmp2143 = org$pandalanguage$pandac$Compiler$callCost$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(self, m2137, p_args, p_expectedReturn);
            cost2142 = $tmp2143;
            if (((panda$core$Bit) { !cost2142.nonnull }).value) {
            {
                goto $l2130;
            }
            }
            bool $tmp2144 = ((panda$core$Bit) { !best2124.nonnull }).value;
            if ($tmp2144) goto $l2145;
            panda$core$Bit $tmp2146 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost2142.value), ((panda$core$Int64) best2124.value));
            $tmp2144 = $tmp2146.value;
            $l2145:;
            panda$core$Bit $tmp2147 = { $tmp2144 };
            if ($tmp2147.value) {
            {
                panda$collections$Array$clear(result2121);
                best2124 = cost2142;
            }
            }
            panda$core$Bit $tmp2151;
            if (((panda$core$Bit) { cost2142.nonnull }).value) goto $l2148; else goto $l2149;
            $l2148:;
            panda$core$Bit $tmp2152 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost2142.value), ((panda$core$Int64) best2124.value));
            $tmp2151 = $tmp2152;
            goto $l2150;
            $l2149:;
            $tmp2151 = ((panda$core$Bit) { false });
            goto $l2150;
            $l2150:;
            if ($tmp2151.value) {
            {
                panda$collections$Array$add$panda$collections$Array$T(result2121, ((panda$core$Object*) m2137));
            }
            }
        }
        goto $l2130;
        $l2131:;
    }
    panda$collections$Array$clear(p_methods);
    panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(p_methods, ((panda$collections$CollectionView*) result2121));
    return best2124;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$MethodRef* p_m, panda$collections$ListView* p_args) {
    panda$core$String* s2159;
    panda$collections$Array* finalArgs2184;
    org$pandalanguage$pandac$IRNode* selfNode2220;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2249;
    org$pandalanguage$pandac$IRNode* coerced2267;
    org$pandalanguage$pandac$IRNode* result2282;
    PANDA_ASSERT(p_m->value->resolved.value);
    panda$core$Int64 $tmp2153 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
    ITable* $tmp2154 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp2154->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2154 = $tmp2154->next;
    }
    $fn2156 $tmp2155 = $tmp2154->methods[0];
    panda$core$Int64 $tmp2157 = $tmp2155(((panda$collections$CollectionView*) p_args));
    panda$core$Bit $tmp2158 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp2153, $tmp2157);
    if ($tmp2158.value) {
    {
        panda$core$Int64 $tmp2160 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
        panda$core$Bit $tmp2161 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2160, ((panda$core$Int64) { 1 }));
        if ($tmp2161.value) {
        {
            s2159 = &$s2162;
        }
        }
        else {
        {
            s2159 = &$s2163;
        }
        }
        panda$core$String* $tmp2164 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(p_m->value);
        panda$core$String* $tmp2165 = panda$core$String$convert$R$panda$core$String($tmp2164);
        panda$core$String* $tmp2167 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2165, &$s2166);
        panda$core$Int64 $tmp2168 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
        panda$core$String* $tmp2169 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2167, ((panda$core$Object*) wrap_panda$core$Int64($tmp2168)));
        panda$core$String* $tmp2171 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2169, &$s2170);
        panda$core$String* $tmp2172 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2171, s2159);
        panda$core$String* $tmp2174 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2172, &$s2173);
        ITable* $tmp2176 = ((panda$collections$CollectionView*) p_args)->$class->itable;
        while ($tmp2176->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp2176 = $tmp2176->next;
        }
        $fn2178 $tmp2177 = $tmp2176->methods[0];
        panda$core$Int64 $tmp2179 = $tmp2177(((panda$collections$CollectionView*) p_args));
        panda$core$String* $tmp2180 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2175, ((panda$core$Object*) wrap_panda$core$Int64($tmp2179)));
        panda$core$String* $tmp2182 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2180, &$s2181);
        panda$core$String* $tmp2183 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2174, $tmp2182);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp2183);
        return NULL;
    }
    }
    panda$collections$Array* $tmp2185 = (panda$collections$Array*) malloc(40);
    $tmp2185->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2185->refCount.value = 1;
    panda$collections$Array$init($tmp2185);
    finalArgs2184 = $tmp2185;
    bool $tmp2188 = ((panda$core$Bit) { p_target != NULL }).value;
    if (!$tmp2188) goto $l2189;
    panda$core$Bit $tmp2190 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1038 }));
    $tmp2188 = $tmp2190.value;
    $l2189:;
    panda$core$Bit $tmp2191 = { $tmp2188 };
    bool $tmp2187 = $tmp2191.value;
    if (!$tmp2187) goto $l2192;
    panda$core$Bit $tmp2193 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->value->annotations);
    panda$core$Bit $tmp2194 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2193);
    $tmp2187 = $tmp2194.value;
    $l2192:;
    panda$core$Bit $tmp2195 = { $tmp2187 };
    if ($tmp2195.value) {
    {
        org$pandalanguage$pandac$Type* $tmp2196 = org$pandalanguage$pandac$MethodRef$owner$R$org$pandalanguage$pandac$Type(p_m);
        org$pandalanguage$pandac$IRNode* $tmp2197 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, p_target, p_position, ((panda$core$Bit) { false }), $tmp2196);
        panda$collections$Array$add$panda$collections$Array$T(finalArgs2184, ((panda$core$Object*) $tmp2197));
    }
    }
    panda$core$Bit $tmp2198 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->value->methodKind, ((panda$core$Int64) { 59 }));
    if ($tmp2198.value) {
    {
        if (((panda$core$Bit) { p_target == NULL }).value) {
        {
            panda$core$Object* $tmp2199 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
            panda$core$Bit $tmp2200 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp2199)->methodKind, ((panda$core$Int64) { 59 }));
            if ($tmp2200.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2201 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2201->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2201->refCount.value = 1;
                panda$core$Object* $tmp2203 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
                org$pandalanguage$pandac$Type* $tmp2204 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp2203));
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp2201, ((panda$core$Int64) { 1025 }), p_position, $tmp2204);
                panda$collections$Array$add$panda$collections$Array$T(finalArgs2184, ((panda$core$Object*) $tmp2201));
            }
            }
            else {
            {
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s2205);
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp2208 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1025 }));
        bool $tmp2207 = $tmp2208.value;
        if (!$tmp2207) goto $l2209;
        panda$core$Bit $tmp2210 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1024 }));
        $tmp2207 = $tmp2210.value;
        $l2209:;
        panda$core$Bit $tmp2211 = { $tmp2207 };
        bool $tmp2206 = $tmp2211.value;
        if (!$tmp2206) goto $l2212;
        panda$core$Bit $tmp2213 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1038 }));
        $tmp2206 = $tmp2213.value;
        $l2212:;
        panda$core$Bit $tmp2214 = { $tmp2206 };
        if ($tmp2214.value) {
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s2215);
        }
        }
        }
    }
    }
    else {
    panda$core$Bit $tmp2217 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(p_m->value);
    bool $tmp2216 = $tmp2217.value;
    if (!$tmp2216) goto $l2218;
    $tmp2216 = ((panda$core$Bit) { p_target == NULL }).value;
    $l2218:;
    panda$core$Bit $tmp2219 = { $tmp2216 };
    if ($tmp2219.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2221 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2221->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2221->refCount.value = 1;
        panda$core$Object* $tmp2223 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
        org$pandalanguage$pandac$Type* $tmp2224 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp2223));
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp2221, ((panda$core$Int64) { 1025 }), p_position, $tmp2224);
        selfNode2220 = $tmp2221;
        org$pandalanguage$pandac$Type* $tmp2225 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->value->owner);
        org$pandalanguage$pandac$IRNode* $tmp2226 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, selfNode2220, $tmp2225);
        selfNode2220 = $tmp2226;
        PANDA_ASSERT(((panda$core$Bit) { selfNode2220 != NULL }).value);
        panda$collections$Array$add$panda$collections$Array$T(finalArgs2184, ((panda$core$Object*) selfNode2220));
        panda$core$Object* $tmp2227 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
        panda$core$Bit $tmp2228 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp2227));
        panda$core$Bit $tmp2229 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2228);
        if ($tmp2229.value) {
        {
            panda$core$String* $tmp2231 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(p_m->value);
            panda$core$String* $tmp2232 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2230, $tmp2231);
            panda$core$String* $tmp2234 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2232, &$s2233);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp2234);
        }
        }
    }
    }
    else {
    panda$core$Bit $tmp2237 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(p_m->value);
    panda$core$Bit $tmp2238 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2237);
    bool $tmp2236 = $tmp2238.value;
    if (!$tmp2236) goto $l2239;
    $tmp2236 = ((panda$core$Bit) { p_target != NULL }).value;
    $l2239:;
    panda$core$Bit $tmp2240 = { $tmp2236 };
    bool $tmp2235 = $tmp2240.value;
    if (!$tmp2235) goto $l2241;
    panda$core$Bit $tmp2242 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1001 }));
    $tmp2235 = $tmp2242.value;
    $l2241:;
    panda$core$Bit $tmp2243 = { $tmp2235 };
    if ($tmp2243.value) {
    {
        panda$core$String* $tmp2245 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(p_m->value);
        panda$core$String* $tmp2246 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2244, $tmp2245);
        panda$core$String* $tmp2248 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2246, &$s2247);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp2248);
    }
    }
    }
    }
    ITable* $tmp2250 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp2250->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2250 = $tmp2250->next;
    }
    $fn2252 $tmp2251 = $tmp2250->methods[0];
    panda$core$Int64 $tmp2253 = $tmp2251(((panda$collections$CollectionView*) p_args));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2249, ((panda$core$Int64) { 0 }), $tmp2253, ((panda$core$Bit) { false }));
    int64_t $tmp2255 = $tmp2249.min.value;
    panda$core$Int64 i2254 = { $tmp2255 };
    int64_t $tmp2257 = $tmp2249.max.value;
    bool $tmp2258 = $tmp2249.inclusive.value;
    if ($tmp2258) goto $l2265; else goto $l2266;
    $l2265:;
    if ($tmp2255 <= $tmp2257) goto $l2259; else goto $l2261;
    $l2266:;
    if ($tmp2255 < $tmp2257) goto $l2259; else goto $l2261;
    $l2259:;
    {
        ITable* $tmp2268 = p_args->$class->itable;
        while ($tmp2268->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2268 = $tmp2268->next;
        }
        $fn2270 $tmp2269 = $tmp2268->methods[0];
        panda$core$Object* $tmp2271 = $tmp2269(p_args, i2254);
        org$pandalanguage$pandac$Type* $tmp2272 = org$pandalanguage$pandac$MethodRef$parameter$panda$core$Int64$R$org$pandalanguage$pandac$Type(p_m, i2254);
        org$pandalanguage$pandac$IRNode* $tmp2273 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp2271), $tmp2272);
        coerced2267 = $tmp2273;
        if (((panda$core$Bit) { coerced2267 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Object* $tmp2274 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->value->parameters, i2254);
        org$pandalanguage$pandac$IRNode* $tmp2275 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, coerced2267, p_position, ((panda$core$Bit) { false }), ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp2274)->type);
        coerced2267 = $tmp2275;
        if (((panda$core$Bit) { coerced2267 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(finalArgs2184, ((panda$core$Object*) coerced2267));
    }
    $l2262:;
    int64_t $tmp2277 = $tmp2257 - i2254.value;
    if ($tmp2258) goto $l2278; else goto $l2279;
    $l2278:;
    if ($tmp2277 >= 1) goto $l2276; else goto $l2261;
    $l2279:;
    if ($tmp2277 > 1) goto $l2276; else goto $l2261;
    $l2276:;
    i2254.value += 1;
    goto $l2259;
    $l2261:;
    panda$core$Bit $tmp2284 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_m->value->owner)->name, &$s2283);
    if ($tmp2284.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2285 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2285->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2285->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp2287 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(p_m);
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2285, ((panda$core$Int64) { 1005 }), p_position, $tmp2287, ((panda$core$Object*) p_m), ((panda$collections$ListView*) finalArgs2184));
        result2282 = $tmp2285;
    }
    }
    else {
    {
        org$pandalanguage$pandac$IRNode* $tmp2288 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2288->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2288->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2288, ((panda$core$Int64) { 1005 }), p_position, p_m->value->returnType, ((panda$core$Object*) p_m), ((panda$collections$ListView*) finalArgs2184));
        result2282 = $tmp2288;
        org$pandalanguage$pandac$Type* $tmp2290 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(p_m);
        org$pandalanguage$pandac$IRNode* $tmp2291 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, result2282, p_position, ((panda$core$Bit) { false }), $tmp2290);
        result2282 = $tmp2291;
    }
    }
    return result2282;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_target, panda$core$String* p_name, panda$collections$ListView* p_args) {
    org$pandalanguage$pandac$IRNode* $tmp2292 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_target, p_name, p_args, NULL);
    return $tmp2292;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_target, panda$core$String* p_name, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedType) {
    org$pandalanguage$pandac$IRNode* resolved2293;
    org$pandalanguage$pandac$ClassDecl* cl2295;
    org$pandalanguage$pandac$Symbol* s2299;
    org$pandalanguage$pandac$IRNode* ref2321;
    org$pandalanguage$pandac$IRNode* $tmp2294 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_target);
    resolved2293 = $tmp2294;
    if (((panda$core$Bit) { resolved2293 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp2296 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(resolved2293->kind, ((panda$core$Int64) { 1001 }));
    if ($tmp2296.value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp2297 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Type*) resolved2293->payload));
        cl2295 = $tmp2297;
    }
    }
    else {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp2298 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, resolved2293->type);
        cl2295 = $tmp2298;
    }
    }
    if (((panda$core$Bit) { cl2295 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp2300 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl2295);
    org$pandalanguage$pandac$Symbol* $tmp2301 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp2300, p_name);
    s2299 = $tmp2301;
    if (((panda$core$Bit) { s2299 == NULL }).value) {
    {
        panda$core$String* $tmp2303 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2302, ((org$pandalanguage$pandac$Symbol*) cl2295)->name);
        panda$core$String* $tmp2305 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2303, &$s2304);
        panda$core$String* $tmp2306 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2305, p_name);
        panda$core$String* $tmp2308 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2306, &$s2307);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_target->position, $tmp2308);
        return NULL;
    }
    }
    panda$core$Bit $tmp2310 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(s2299->kind, ((panda$core$Int64) { 204 }));
    bool $tmp2309 = $tmp2310.value;
    if (!$tmp2309) goto $l2311;
    panda$core$Bit $tmp2312 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(s2299->kind, ((panda$core$Int64) { 205 }));
    $tmp2309 = $tmp2312.value;
    $l2311:;
    panda$core$Bit $tmp2313 = { $tmp2309 };
    if ($tmp2313.value) {
    {
        panda$core$String* $tmp2315 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2314, ((org$pandalanguage$pandac$Symbol*) cl2295)->name);
        panda$core$String* $tmp2317 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2315, &$s2316);
        panda$core$String* $tmp2318 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2317, p_name);
        panda$core$String* $tmp2320 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2318, &$s2319);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_target->position, $tmp2320);
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp2322 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl2295);
    org$pandalanguage$pandac$IRNode* $tmp2323 = org$pandalanguage$pandac$Compiler$symbolRef$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q(self, p_target->position, p_target, s2299, $tmp2322);
    ref2321 = $tmp2323;
    if (((panda$core$Bit) { ref2321 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp2324 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, ref2321, p_args, p_expectedType);
    return $tmp2324;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_m, panda$collections$ListView* p_args) {
    org$pandalanguage$pandac$IRNode* $tmp2325 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_m, p_args, NULL);
    return $tmp2325;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_m, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedType) {
    org$pandalanguage$pandac$IRNode* target2326;
    panda$collections$Array* methods2333;
    org$pandalanguage$pandac$MethodDecl* first2338;
    panda$core$MutableString* msg2343;
    panda$core$String* separator2354;
    panda$collections$Iterator* a$Iter2356;
    org$pandalanguage$pandac$IRNode* a2368;
    org$pandalanguage$pandac$IRNode* target2382;
    panda$collections$Array* children2390;
    panda$collections$Array* types2396;
    panda$collections$Iterator* m$Iter2399;
    org$pandalanguage$pandac$MethodRef* m2411;
    org$pandalanguage$pandac$IRNode* target2421;
    org$pandalanguage$pandac$IRNode* initCall2424;
    panda$collections$Array* children2428;
    org$pandalanguage$pandac$IRNode* resolved2433;
    switch (p_m->kind.value) {
        case 1002:
        {
            panda$core$Int64 $tmp2327 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
            panda$core$Bit $tmp2328 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2327, ((panda$core$Int64) { 0 }));
            if ($tmp2328.value) {
            {
                target2326 = NULL;
            }
            }
            else {
            {
                panda$core$Int64 $tmp2329 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
                panda$core$Bit $tmp2330 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2329, ((panda$core$Int64) { 1 }));
                PANDA_ASSERT($tmp2330.value);
                panda$core$Object* $tmp2331 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 0 }));
                target2326 = ((org$pandalanguage$pandac$IRNode*) $tmp2331);
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp2332 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, p_m->position, target2326, ((org$pandalanguage$pandac$MethodRef*) p_m->payload), p_args);
            return $tmp2332;
        }
        break;
        case 1003:
        {
            panda$collections$Array* $tmp2334 = (panda$collections$Array*) malloc(40);
            $tmp2334->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2334->refCount.value = 1;
            panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp2334, ((panda$collections$ListView*) p_m->payload));
            methods2333 = $tmp2334;
            org$pandalanguage$pandac$Compiler$matchMethods$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(self, methods2333, p_args, p_expectedType);
            panda$core$Int64 $tmp2336 = panda$collections$Array$get_count$R$panda$core$Int64(methods2333);
            panda$core$Bit $tmp2337 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2336, ((panda$core$Int64) { 0 }));
            if ($tmp2337.value) {
            {
                ITable* $tmp2339 = ((panda$collections$ListView*) p_m->payload)->$class->itable;
                while ($tmp2339->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp2339 = $tmp2339->next;
                }
                $fn2341 $tmp2340 = $tmp2339->methods[0];
                panda$core$Object* $tmp2342 = $tmp2340(((panda$collections$ListView*) p_m->payload), ((panda$core$Int64) { 0 }));
                first2338 = ((org$pandalanguage$pandac$MethodRef*) $tmp2342)->value;
                panda$core$MutableString* $tmp2344 = (panda$core$MutableString*) malloc(48);
                $tmp2344->$class = (panda$core$Class*) &panda$core$MutableString$class;
                $tmp2344->refCount.value = 1;
                panda$core$String* $tmp2347 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2346, ((org$pandalanguage$pandac$Symbol*) first2338->owner)->name);
                panda$core$String* $tmp2349 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2347, &$s2348);
                panda$core$String* $tmp2350 = panda$core$String$convert$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) first2338)->name);
                panda$core$String* $tmp2352 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2350, &$s2351);
                panda$core$String* $tmp2353 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2349, $tmp2352);
                panda$core$MutableString$init$panda$core$String($tmp2344, $tmp2353);
                msg2343 = $tmp2344;
                separator2354 = &$s2355;
                {
                    ITable* $tmp2357 = ((panda$collections$Iterable*) p_args)->$class->itable;
                    while ($tmp2357->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp2357 = $tmp2357->next;
                    }
                    $fn2359 $tmp2358 = $tmp2357->methods[0];
                    panda$collections$Iterator* $tmp2360 = $tmp2358(((panda$collections$Iterable*) p_args));
                    a$Iter2356 = $tmp2360;
                    $l2361:;
                    ITable* $tmp2363 = a$Iter2356->$class->itable;
                    while ($tmp2363->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp2363 = $tmp2363->next;
                    }
                    $fn2365 $tmp2364 = $tmp2363->methods[0];
                    panda$core$Bit $tmp2366 = $tmp2364(a$Iter2356);
                    panda$core$Bit $tmp2367 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2366);
                    if (!$tmp2367.value) goto $l2362;
                    {
                        ITable* $tmp2369 = a$Iter2356->$class->itable;
                        while ($tmp2369->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2369 = $tmp2369->next;
                        }
                        $fn2371 $tmp2370 = $tmp2369->methods[1];
                        panda$core$Object* $tmp2372 = $tmp2370(a$Iter2356);
                        a2368 = ((org$pandalanguage$pandac$IRNode*) $tmp2372);
                        panda$core$MutableString$append$panda$core$String(msg2343, separator2354);
                        panda$core$MutableString$append$panda$core$Object(msg2343, ((panda$core$Object*) a2368->type));
                        separator2354 = &$s2373;
                    }
                    goto $l2361;
                    $l2362:;
                }
                panda$core$MutableString$append$panda$core$String(msg2343, &$s2374);
                if (((panda$core$Bit) { p_expectedType != NULL }).value) {
                {
                    panda$core$String* $tmp2376 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2375, ((panda$core$Object*) p_expectedType));
                    panda$core$String* $tmp2378 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2376, &$s2377);
                    panda$core$MutableString$append$panda$core$String(msg2343, $tmp2378);
                }
                }
                panda$core$String* $tmp2379 = panda$core$MutableString$finish$R$panda$core$String(msg2343);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_m->position, $tmp2379);
                return NULL;
            }
            }
            panda$core$Int64 $tmp2380 = panda$collections$Array$get_count$R$panda$core$Int64(methods2333);
            panda$core$Bit $tmp2381 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2380, ((panda$core$Int64) { 1 }));
            if ($tmp2381.value) {
            {
                panda$core$Int64 $tmp2383 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
                panda$core$Bit $tmp2384 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2383, ((panda$core$Int64) { 1 }));
                if ($tmp2384.value) {
                {
                    panda$core$Object* $tmp2385 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 0 }));
                    target2382 = ((org$pandalanguage$pandac$IRNode*) $tmp2385);
                }
                }
                else {
                {
                    panda$core$Int64 $tmp2386 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
                    panda$core$Bit $tmp2387 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2386, ((panda$core$Int64) { 0 }));
                    PANDA_ASSERT($tmp2387.value);
                    target2382 = NULL;
                }
                }
                panda$core$Object* $tmp2388 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(methods2333, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$IRNode* $tmp2389 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, p_m->position, target2382, ((org$pandalanguage$pandac$MethodRef*) $tmp2388), p_args);
                return $tmp2389;
            }
            }
            panda$collections$Array* $tmp2391 = (panda$collections$Array*) malloc(40);
            $tmp2391->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2391->refCount.value = 1;
            panda$collections$Array$init($tmp2391);
            children2390 = $tmp2391;
            org$pandalanguage$pandac$IRNode* $tmp2393 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2393->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2393->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2395 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2393, ((panda$core$Int64) { 1003 }), p_m->position, $tmp2395, ((panda$core$Object*) methods2333), ((panda$collections$ListView*) p_m->children));
            panda$collections$Array$add$panda$collections$Array$T(children2390, ((panda$core$Object*) $tmp2393));
            panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(children2390, ((panda$collections$CollectionView*) p_args));
            panda$collections$Array* $tmp2397 = (panda$collections$Array*) malloc(40);
            $tmp2397->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2397->refCount.value = 1;
            panda$collections$Array$init($tmp2397);
            types2396 = $tmp2397;
            {
                ITable* $tmp2400 = ((panda$collections$Iterable*) methods2333)->$class->itable;
                while ($tmp2400->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp2400 = $tmp2400->next;
                }
                $fn2402 $tmp2401 = $tmp2400->methods[0];
                panda$collections$Iterator* $tmp2403 = $tmp2401(((panda$collections$Iterable*) methods2333));
                m$Iter2399 = $tmp2403;
                $l2404:;
                ITable* $tmp2406 = m$Iter2399->$class->itable;
                while ($tmp2406->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp2406 = $tmp2406->next;
                }
                $fn2408 $tmp2407 = $tmp2406->methods[0];
                panda$core$Bit $tmp2409 = $tmp2407(m$Iter2399);
                panda$core$Bit $tmp2410 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2409);
                if (!$tmp2410.value) goto $l2405;
                {
                    ITable* $tmp2412 = m$Iter2399->$class->itable;
                    while ($tmp2412->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp2412 = $tmp2412->next;
                    }
                    $fn2414 $tmp2413 = $tmp2412->methods[1];
                    panda$core$Object* $tmp2415 = $tmp2413(m$Iter2399);
                    m2411 = ((org$pandalanguage$pandac$MethodRef*) $tmp2415);
                    org$pandalanguage$pandac$Type* $tmp2416 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m2411);
                    panda$collections$Array$add$panda$collections$Array$T(types2396, ((panda$core$Object*) $tmp2416));
                }
                goto $l2404;
                $l2405:;
            }
            org$pandalanguage$pandac$IRNode* $tmp2417 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2417->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2417->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2419 = (org$pandalanguage$pandac$Type*) malloc(96);
            $tmp2419->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp2419->refCount.value = 1;
            org$pandalanguage$pandac$Type$init$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp2419, ((panda$collections$ListView*) types2396));
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2417, ((panda$core$Int64) { 1039 }), p_m->position, $tmp2419, ((panda$collections$ListView*) children2390));
            return $tmp2417;
        }
        break;
        case 1001:
        {
            org$pandalanguage$pandac$IRNode* $tmp2422 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2422->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2422->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp2422, ((panda$core$Int64) { 1038 }), p_m->position, ((org$pandalanguage$pandac$Type*) p_m->payload));
            target2421 = $tmp2422;
            org$pandalanguage$pandac$IRNode* $tmp2426 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target2421, &$s2425, p_args);
            org$pandalanguage$pandac$IRNode* $tmp2427 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp2426);
            initCall2424 = $tmp2427;
            if (((panda$core$Bit) { initCall2424 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp2429 = (panda$collections$Array*) malloc(40);
            $tmp2429->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2429->refCount.value = 1;
            panda$collections$Array$init($tmp2429);
            children2428 = $tmp2429;
            panda$collections$Array$add$panda$collections$Array$T(children2428, ((panda$core$Object*) initCall2424));
            org$pandalanguage$pandac$IRNode* $tmp2431 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2431->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2431->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2431, ((panda$core$Int64) { 1010 }), p_m->position, ((org$pandalanguage$pandac$Type*) p_m->payload), ((panda$collections$ListView*) children2428));
            return $tmp2431;
        }
        break;
        default:
        {
            org$pandalanguage$pandac$IRNode* $tmp2434 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_m);
            resolved2433 = $tmp2434;
            if (((panda$core$Bit) { resolved2433 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$String* $tmp2436 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2435, ((panda$core$Object*) resolved2433->type));
            panda$core$String* $tmp2438 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2436, &$s2437);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, resolved2433->position, $tmp2438);
        }
    }
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$collections$Array* subtypes2439;
    panda$core$MutableString* typeName2442;
    panda$core$String* separator2446;
    panda$collections$Iterator* p$Iter2448;
    org$pandalanguage$pandac$MethodDecl$Parameter* p2460;
    panda$core$Int64 kind2466;
    panda$core$Char8 $tmp2472;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
    panda$collections$Array* $tmp2440 = (panda$collections$Array*) malloc(40);
    $tmp2440->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2440->refCount.value = 1;
    panda$collections$Array$init($tmp2440);
    subtypes2439 = $tmp2440;
    panda$core$MutableString* $tmp2443 = (panda$core$MutableString*) malloc(48);
    $tmp2443->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp2443->refCount.value = 1;
    panda$core$MutableString$init$panda$core$String($tmp2443, &$s2445);
    typeName2442 = $tmp2443;
    separator2446 = &$s2447;
    {
        ITable* $tmp2449 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp2449->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2449 = $tmp2449->next;
        }
        $fn2451 $tmp2450 = $tmp2449->methods[0];
        panda$collections$Iterator* $tmp2452 = $tmp2450(((panda$collections$Iterable*) p_m->parameters));
        p$Iter2448 = $tmp2452;
        $l2453:;
        ITable* $tmp2455 = p$Iter2448->$class->itable;
        while ($tmp2455->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2455 = $tmp2455->next;
        }
        $fn2457 $tmp2456 = $tmp2455->methods[0];
        panda$core$Bit $tmp2458 = $tmp2456(p$Iter2448);
        panda$core$Bit $tmp2459 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2458);
        if (!$tmp2459.value) goto $l2454;
        {
            ITable* $tmp2461 = p$Iter2448->$class->itable;
            while ($tmp2461->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2461 = $tmp2461->next;
            }
            $fn2463 $tmp2462 = $tmp2461->methods[1];
            panda$core$Object* $tmp2464 = $tmp2462(p$Iter2448);
            p2460 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp2464);
            panda$core$MutableString$append$panda$core$String(typeName2442, separator2446);
            panda$core$MutableString$append$panda$core$String(typeName2442, ((org$pandalanguage$pandac$Symbol*) p2460->type)->name);
            panda$collections$Array$add$panda$collections$Array$T(subtypes2439, ((panda$core$Object*) p2460->type));
            separator2446 = &$s2465;
        }
        goto $l2453;
        $l2454:;
    }
    panda$core$Bit $tmp2467 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 58 }));
    if ($tmp2467.value) {
    {
        panda$core$MutableString$append$panda$core$String(typeName2442, &$s2468);
        kind2466 = ((panda$core$Int64) { 24 });
    }
    }
    else {
    {
        panda$core$MutableString$append$panda$core$String(typeName2442, &$s2469);
        kind2466 = ((panda$core$Int64) { 25 });
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(subtypes2439, ((panda$core$Object*) p_m->returnType));
    org$pandalanguage$pandac$Type* $tmp2470 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2471 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp2470);
    if ($tmp2471.value) {
    {
        panda$core$MutableString$append$panda$core$String(typeName2442, ((org$pandalanguage$pandac$Symbol*) p_m->returnType)->name);
    }
    }
    panda$core$Char8$init$panda$core$UInt8(&$tmp2472, ((panda$core$UInt8) { 41 }));
    panda$core$MutableString$append$panda$core$Char8(typeName2442, $tmp2472);
    org$pandalanguage$pandac$Type* $tmp2473 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp2473->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp2473->refCount.value = 1;
    panda$core$String* $tmp2475 = panda$core$MutableString$finish$R$panda$core$String(typeName2442);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp2473, $tmp2475, kind2466, ((org$pandalanguage$pandac$Symbol*) p_m)->position, ((panda$collections$ListView*) subtypes2439), ((panda$core$Bit) { true }));
    return $tmp2473;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$declaredTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m, org$pandalanguage$pandac$Type* p_selfType) {
    panda$collections$Array* subtypes2476;
    panda$core$MutableString* typeName2479;
    panda$collections$Iterator* p$Iter2483;
    org$pandalanguage$pandac$MethodDecl$Parameter* p2495;
    panda$core$Int64 kind2501;
    panda$core$Char8 $tmp2507;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
    panda$collections$Array* $tmp2477 = (panda$collections$Array*) malloc(40);
    $tmp2477->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2477->refCount.value = 1;
    panda$collections$Array$init($tmp2477);
    subtypes2476 = $tmp2477;
    panda$core$MutableString* $tmp2480 = (panda$core$MutableString*) malloc(48);
    $tmp2480->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp2480->refCount.value = 1;
    panda$core$MutableString$init$panda$core$String($tmp2480, &$s2482);
    typeName2479 = $tmp2480;
    panda$core$MutableString$append$panda$core$String(typeName2479, ((org$pandalanguage$pandac$Symbol*) p_selfType)->name);
    panda$collections$Array$add$panda$collections$Array$T(subtypes2476, ((panda$core$Object*) p_selfType));
    {
        ITable* $tmp2484 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp2484->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2484 = $tmp2484->next;
        }
        $fn2486 $tmp2485 = $tmp2484->methods[0];
        panda$collections$Iterator* $tmp2487 = $tmp2485(((panda$collections$Iterable*) p_m->parameters));
        p$Iter2483 = $tmp2487;
        $l2488:;
        ITable* $tmp2490 = p$Iter2483->$class->itable;
        while ($tmp2490->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2490 = $tmp2490->next;
        }
        $fn2492 $tmp2491 = $tmp2490->methods[0];
        panda$core$Bit $tmp2493 = $tmp2491(p$Iter2483);
        panda$core$Bit $tmp2494 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2493);
        if (!$tmp2494.value) goto $l2489;
        {
            ITable* $tmp2496 = p$Iter2483->$class->itable;
            while ($tmp2496->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2496 = $tmp2496->next;
            }
            $fn2498 $tmp2497 = $tmp2496->methods[1];
            panda$core$Object* $tmp2499 = $tmp2497(p$Iter2483);
            p2495 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp2499);
            panda$core$MutableString$append$panda$core$String(typeName2479, &$s2500);
            panda$core$MutableString$append$panda$core$String(typeName2479, ((org$pandalanguage$pandac$Symbol*) p2495->type)->name);
            panda$collections$Array$add$panda$collections$Array$T(subtypes2476, ((panda$core$Object*) p2495->type));
        }
        goto $l2488;
        $l2489:;
    }
    panda$core$Bit $tmp2502 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 58 }));
    if ($tmp2502.value) {
    {
        panda$core$MutableString$append$panda$core$String(typeName2479, &$s2503);
        kind2501 = ((panda$core$Int64) { 24 });
    }
    }
    else {
    {
        panda$core$MutableString$append$panda$core$String(typeName2479, &$s2504);
        kind2501 = ((panda$core$Int64) { 25 });
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(subtypes2476, ((panda$core$Object*) p_m->returnType));
    org$pandalanguage$pandac$Type* $tmp2505 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2506 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp2505);
    if ($tmp2506.value) {
    {
        panda$core$MutableString$append$panda$core$String(typeName2479, ((org$pandalanguage$pandac$Symbol*) p_m->returnType)->name);
    }
    }
    panda$core$Char8$init$panda$core$UInt8(&$tmp2507, ((panda$core$UInt8) { 41 }));
    panda$core$MutableString$append$panda$core$Char8(typeName2479, $tmp2507);
    org$pandalanguage$pandac$Type* $tmp2508 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp2508->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp2508->refCount.value = 1;
    panda$core$String* $tmp2510 = panda$core$MutableString$finish$R$panda$core$String(typeName2479);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp2508, $tmp2510, kind2501, ((org$pandalanguage$pandac$Symbol*) p_m)->position, ((panda$collections$ListView*) subtypes2476), ((panda$core$Bit) { true }));
    return $tmp2508;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$MethodDecl* inherited2511;
    org$pandalanguage$pandac$MethodDecl* $tmp2512 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(self, p_m);
    inherited2511 = $tmp2512;
    if (((panda$core$Bit) { inherited2511 == NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp2513 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, p_m);
        return $tmp2513;
    }
    }
    org$pandalanguage$pandac$Type* $tmp2514 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, inherited2511);
    return $tmp2514;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$Type* $tmp2515 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    org$pandalanguage$pandac$Type* $tmp2516 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_m, $tmp2515);
    return $tmp2516;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m, org$pandalanguage$pandac$Type* p_selfType) {
    org$pandalanguage$pandac$MethodDecl* inherited2517;
    org$pandalanguage$pandac$MethodDecl* $tmp2518 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(self, p_m);
    inherited2517 = $tmp2518;
    if (((panda$core$Bit) { inherited2517 == NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp2519 = org$pandalanguage$pandac$Compiler$declaredTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_m, p_selfType);
        return $tmp2519;
    }
    }
    org$pandalanguage$pandac$Type* $tmp2520 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, inherited2517, p_selfType);
    return $tmp2520;
}
panda$core$String* org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(panda$core$Int64 p_op) {
    switch (p_op.value) {
        case 51:
        {
            return &$s2521;
        }
        break;
        case 52:
        {
            return &$s2522;
        }
        break;
        case 53:
        {
            return &$s2523;
        }
        break;
        case 54:
        {
            return &$s2524;
        }
        break;
        case 55:
        {
            return &$s2525;
        }
        break;
        case 56:
        {
            return &$s2526;
        }
        break;
        case 57:
        {
            return &$s2527;
        }
        break;
        case 58:
        {
            return &$s2528;
        }
        break;
        case 59:
        {
            return &$s2529;
        }
        break;
        case 63:
        {
            return &$s2530;
        }
        break;
        case 62:
        {
            return &$s2531;
        }
        break;
        case 65:
        {
            return &$s2532;
        }
        break;
        case 64:
        {
            return &$s2533;
        }
        break;
        case 68:
        {
            return &$s2534;
        }
        break;
        case 69:
        {
            return &$s2535;
        }
        break;
        case 66:
        {
            return &$s2536;
        }
        break;
        case 67:
        {
            return &$s2537;
        }
        break;
        case 70:
        {
            return &$s2538;
        }
        break;
        case 71:
        {
            return &$s2539;
        }
        break;
        case 49:
        {
            return &$s2540;
        }
        break;
        case 50:
        {
            return &$s2541;
        }
        break;
        case 72:
        {
            return &$s2542;
        }
        break;
        case 1:
        {
            return &$s2543;
        }
        break;
        case 101:
        {
            return &$s2544;
        }
        break;
        case 73:
        {
            return &$s2545;
        }
        break;
        case 60:
        {
            return &$s2546;
        }
        break;
        case 61:
        {
            return &$s2547;
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
            panda$core$Int64 $tmp2548 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_expr->children);
            panda$core$Bit $tmp2549 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2548, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp2549.value);
            panda$core$Bit $tmp2550 = panda$core$Bit$$NOT$R$panda$core$Bit(((panda$core$Bit$wrapper*) p_expr->payload)->value);
            if ($tmp2550.value) {
            {
                panda$core$Object* $tmp2551 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Bit $tmp2552 = org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp2551));
                return $tmp2552;
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
            panda$core$Object* $tmp2553 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp2554 = org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp2553));
            return $tmp2554;
        }
        break;
        default:
        {
            return ((panda$core$Bit) { false });
        }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$foldInts$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_left, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_right) {
    panda$core$Int64 l2580;
    panda$core$Int64 r2582;
    panda$core$Bit $tmp2556 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_left->kind, ((panda$core$Int64) { 1004 }));
    bool $tmp2555 = $tmp2556.value;
    if ($tmp2555) goto $l2557;
    panda$core$Bit $tmp2558 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_left->kind, ((panda$core$Int64) { 1032 }));
    $tmp2555 = $tmp2558.value;
    $l2557:;
    panda$core$Bit $tmp2559 = { $tmp2555 };
    PANDA_ASSERT($tmp2559.value);
    panda$core$Bit $tmp2561 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_right->kind, ((panda$core$Int64) { 1004 }));
    bool $tmp2560 = $tmp2561.value;
    if ($tmp2560) goto $l2562;
    panda$core$Bit $tmp2563 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_right->kind, ((panda$core$Int64) { 1032 }));
    $tmp2560 = $tmp2563.value;
    $l2562:;
    panda$core$Bit $tmp2564 = { $tmp2560 };
    PANDA_ASSERT($tmp2564.value);
    panda$core$Bit $tmp2567 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_left->kind, ((panda$core$Int64) { 1032 }));
    bool $tmp2566 = $tmp2567.value;
    if ($tmp2566) goto $l2568;
    panda$core$UInt64 $tmp2570 = panda$core$Int64$convert$R$panda$core$UInt64(((panda$core$Int64) { 9223372036854775807 }));
    panda$core$Bit $tmp2571 = panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p_left->payload)->value, $tmp2570);
    bool $tmp2569 = $tmp2571.value;
    if (!$tmp2569) goto $l2572;
    panda$core$Bit $tmp2573 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_right->kind, ((panda$core$Int64) { 1032 }));
    $tmp2569 = $tmp2573.value;
    $l2572:;
    panda$core$Bit $tmp2574 = { $tmp2569 };
    $tmp2566 = $tmp2574.value;
    $l2568:;
    panda$core$Bit $tmp2575 = { $tmp2566 };
    bool $tmp2565 = $tmp2575.value;
    if ($tmp2565) goto $l2576;
    panda$core$UInt64 $tmp2577 = panda$core$Int64$convert$R$panda$core$UInt64(((panda$core$Int64) { 9223372036854775807 }));
    panda$core$Bit $tmp2578 = panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p_right->payload)->value, $tmp2577);
    $tmp2565 = $tmp2578.value;
    $l2576:;
    panda$core$Bit $tmp2579 = { $tmp2565 };
    if ($tmp2579.value) {
    {
        panda$core$Int64 $tmp2581 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_left->payload)->value);
        l2580 = $tmp2581;
        panda$core$Int64 $tmp2583 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_right->payload)->value);
        r2582 = $tmp2583;
        switch (p_op.value) {
            case 51:
            {
                org$pandalanguage$pandac$IRNode* $tmp2584 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2584->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2584->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2586 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2587 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(l2580, r2582);
                panda$core$UInt64 $tmp2588 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2587);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2584, ((panda$core$Int64) { 1004 }), p_position, $tmp2586, $tmp2588);
                return $tmp2584;
            }
            break;
            case 52:
            {
                org$pandalanguage$pandac$IRNode* $tmp2589 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2589->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2589->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2591 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2592 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(l2580, r2582);
                panda$core$UInt64 $tmp2593 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2592);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2589, ((panda$core$Int64) { 1004 }), p_position, $tmp2591, $tmp2593);
                return $tmp2589;
            }
            break;
            case 53:
            {
                org$pandalanguage$pandac$IRNode* $tmp2594 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2594->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2594->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2596 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2597 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(l2580, r2582);
                panda$core$UInt64 $tmp2598 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2597);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2594, ((panda$core$Int64) { 1004 }), p_position, $tmp2596, $tmp2598);
                return $tmp2594;
            }
            break;
            case 55:
            {
                org$pandalanguage$pandac$IRNode* $tmp2599 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2599->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2599->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2601 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2602 = panda$core$Int64$$INTDIV$panda$core$Int64$R$panda$core$Int64(l2580, r2582);
                panda$core$UInt64 $tmp2603 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2602);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2599, ((panda$core$Int64) { 1004 }), p_position, $tmp2601, $tmp2603);
                return $tmp2599;
            }
            break;
            case 56:
            {
                org$pandalanguage$pandac$IRNode* $tmp2604 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2604->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2604->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2606 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2607 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(l2580, r2582);
                panda$core$UInt64 $tmp2608 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2607);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2604, ((panda$core$Int64) { 1004 }), p_position, $tmp2606, $tmp2608);
                return $tmp2604;
            }
            break;
            case 58:
            {
                org$pandalanguage$pandac$IRNode* $tmp2609 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2609->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2609->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2611 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2612 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(l2580, r2582);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2609, ((panda$core$Int64) { 1011 }), p_position, $tmp2611, $tmp2612);
                return $tmp2609;
            }
            break;
            case 59:
            {
                org$pandalanguage$pandac$IRNode* $tmp2613 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2613->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2613->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2615 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2616 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(l2580, r2582);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2613, ((panda$core$Int64) { 1011 }), p_position, $tmp2615, $tmp2616);
                return $tmp2613;
            }
            break;
            case 62:
            {
                org$pandalanguage$pandac$IRNode* $tmp2617 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2617->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2617->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2619 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2620 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(l2580, r2582);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2617, ((panda$core$Int64) { 1011 }), p_position, $tmp2619, $tmp2620);
                return $tmp2617;
            }
            break;
            case 63:
            {
                org$pandalanguage$pandac$IRNode* $tmp2621 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2621->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2621->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2623 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2624 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(l2580, r2582);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2621, ((panda$core$Int64) { 1011 }), p_position, $tmp2623, $tmp2624);
                return $tmp2621;
            }
            break;
            case 64:
            {
                org$pandalanguage$pandac$IRNode* $tmp2625 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2625->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2625->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2627 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2628 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(l2580, r2582);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2625, ((panda$core$Int64) { 1011 }), p_position, $tmp2627, $tmp2628);
                return $tmp2625;
            }
            break;
            case 65:
            {
                org$pandalanguage$pandac$IRNode* $tmp2629 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2629->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2629->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2631 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2632 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(l2580, r2582);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2629, ((panda$core$Int64) { 1011 }), p_position, $tmp2631, $tmp2632);
                return $tmp2629;
            }
            break;
            case 67:
            {
                org$pandalanguage$pandac$IRNode* $tmp2633 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2633->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2633->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2635 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2636 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(l2580, r2582);
                panda$core$UInt64 $tmp2637 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2636);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2633, ((panda$core$Int64) { 1004 }), p_position, $tmp2635, $tmp2637);
                return $tmp2633;
            }
            break;
            case 69:
            {
                org$pandalanguage$pandac$IRNode* $tmp2638 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2638->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2638->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2640 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2641 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(l2580, r2582);
                panda$core$UInt64 $tmp2642 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2641);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2638, ((panda$core$Int64) { 1004 }), p_position, $tmp2640, $tmp2642);
                return $tmp2638;
            }
            break;
            case 71:
            {
                org$pandalanguage$pandac$IRNode* $tmp2643 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2643->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2643->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2645 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2646 = panda$core$Int64$$BXOR$panda$core$Int64$R$panda$core$Int64(l2580, r2582);
                panda$core$UInt64 $tmp2647 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2646);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2643, ((panda$core$Int64) { 1004 }), p_position, $tmp2645, $tmp2647);
                return $tmp2643;
            }
            break;
            case 72:
            {
                org$pandalanguage$pandac$IRNode* $tmp2648 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2648->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2648->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2650 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2651 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(l2580, r2582);
                panda$core$UInt64 $tmp2652 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2651);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2648, ((panda$core$Int64) { 1004 }), p_position, $tmp2650, $tmp2652);
                return $tmp2648;
            }
            break;
            case 1:
            {
                org$pandalanguage$pandac$IRNode* $tmp2653 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2653->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2653->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2655 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2656 = panda$core$Int64$$SHR$panda$core$Int64$R$panda$core$Int64(l2580, r2582);
                panda$core$UInt64 $tmp2657 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2656);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2653, ((panda$core$Int64) { 1004 }), p_position, $tmp2655, $tmp2657);
                return $tmp2653;
            }
            break;
        }
    }
    }
    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s2658);
    return NULL;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    panda$core$Bit $tmp2659 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1009 }));
    if ($tmp2659.value) {
    {
        panda$core$Object* $tmp2660 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
        return ((org$pandalanguage$pandac$IRNode*) $tmp2660);
    }
    }
    return p_expr;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIndexedAssignment$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_left, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_right) {
    panda$collections$Array* args2665;
    org$pandalanguage$pandac$IRNode* resolved2673;
    panda$collections$Array* children2678;
    panda$core$UInt64 baseId2684;
    org$pandalanguage$pandac$IRNode* base2685;
    panda$core$UInt64 indexId2692;
    org$pandalanguage$pandac$IRNode* index2693;
    org$pandalanguage$pandac$IRNode* baseRef2698;
    org$pandalanguage$pandac$IRNode* indexRef2701;
    org$pandalanguage$pandac$IRNode* rhsIndex2704;
    org$pandalanguage$pandac$IRNode* value2706;
    panda$core$Bit $tmp2661 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_left->kind, ((panda$core$Int64) { 1040 }));
    PANDA_ASSERT($tmp2661.value);
    panda$core$Int64 $tmp2662 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_left->children);
    panda$core$Bit $tmp2663 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2662, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp2663.value);
    panda$core$Bit $tmp2664 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 73 }));
    if ($tmp2664.value) {
    {
        panda$collections$Array* $tmp2666 = (panda$collections$Array*) malloc(40);
        $tmp2666->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2666->refCount.value = 1;
        panda$collections$Array$init($tmp2666);
        args2665 = $tmp2666;
        panda$core$Object* $tmp2668 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_left->children, ((panda$core$Int64) { 1 }));
        panda$collections$Array$add$panda$collections$Array$T(args2665, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp2668)));
        panda$collections$Array$add$panda$collections$Array$T(args2665, ((panda$core$Object*) p_right));
        panda$core$Object* $tmp2669 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_left->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp2671 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp2669), &$s2670, ((panda$collections$ListView*) args2665));
        return $tmp2671;
    }
    }
    panda$core$Bit $tmp2672 = org$pandalanguage$pandac$Compiler$isAssignment$panda$core$Int64$R$panda$core$Bit(p_op);
    PANDA_ASSERT($tmp2672.value);
    org$pandalanguage$pandac$IRNode* $tmp2674 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_left);
    resolved2673 = $tmp2674;
    if (((panda$core$Bit) { resolved2673 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp2675 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self, resolved2673);
    resolved2673 = $tmp2675;
    panda$core$Int64 $tmp2676 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(resolved2673->children);
    panda$core$Bit $tmp2677 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2676, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp2677.value);
    panda$collections$Array* $tmp2679 = (panda$collections$Array*) malloc(40);
    $tmp2679->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2679->refCount.value = 1;
    panda$collections$Array$init($tmp2679);
    children2678 = $tmp2679;
    panda$core$Object* $tmp2681 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(resolved2673->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp2682 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self, ((org$pandalanguage$pandac$IRNode*) $tmp2681));
    panda$collections$Array$add$panda$collections$Array$T(children2678, ((panda$core$Object*) $tmp2682));
    panda$core$UInt64 $tmp2683 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(self->reusedValueCount, ((panda$core$UInt64) { 1 }));
    self->reusedValueCount = $tmp2683;
    baseId2684 = self->reusedValueCount;
    org$pandalanguage$pandac$IRNode* $tmp2686 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp2686->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2686->refCount.value = 1;
    panda$core$Object* $tmp2688 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children2678, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp2689 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children2678, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2686, ((panda$core$Int64) { 1027 }), ((org$pandalanguage$pandac$IRNode*) $tmp2688)->position, ((org$pandalanguage$pandac$IRNode*) $tmp2689)->type, ((panda$core$Object*) wrap_panda$core$UInt64(baseId2684)), ((panda$collections$ListView*) children2678));
    base2685 = $tmp2686;
    panda$collections$Array$clear(children2678);
    panda$core$Object* $tmp2690 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(resolved2673->children, ((panda$core$Int64) { 1 }));
    panda$collections$Array$add$panda$collections$Array$T(children2678, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp2690)));
    panda$core$UInt64 $tmp2691 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(self->reusedValueCount, ((panda$core$UInt64) { 1 }));
    self->reusedValueCount = $tmp2691;
    indexId2692 = self->reusedValueCount;
    org$pandalanguage$pandac$IRNode* $tmp2694 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp2694->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2694->refCount.value = 1;
    panda$core$Object* $tmp2696 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children2678, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp2697 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children2678, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2694, ((panda$core$Int64) { 1027 }), ((org$pandalanguage$pandac$IRNode*) $tmp2696)->position, ((org$pandalanguage$pandac$IRNode*) $tmp2697)->type, ((panda$core$Object*) wrap_panda$core$UInt64(indexId2692)), ((panda$collections$ListView*) children2678));
    index2693 = $tmp2694;
    org$pandalanguage$pandac$IRNode* $tmp2699 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp2699->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2699->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2699, ((panda$core$Int64) { 1028 }), base2685->position, base2685->type, baseId2684);
    baseRef2698 = $tmp2699;
    org$pandalanguage$pandac$IRNode* $tmp2702 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp2702->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2702->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2702, ((panda$core$Int64) { 1028 }), index2693->position, index2693->type, indexId2692);
    indexRef2701 = $tmp2702;
    org$pandalanguage$pandac$IRNode* $tmp2705 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, baseRef2698, ((panda$core$Int64) { 101 }), indexRef2701);
    rhsIndex2704 = $tmp2705;
    if (((panda$core$Bit) { rhsIndex2704 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Int64 $tmp2707 = org$pandalanguage$pandac$Compiler$removeAssignment$panda$core$Int64$R$panda$core$Int64(p_op);
    org$pandalanguage$pandac$IRNode* $tmp2708 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, rhsIndex2704, $tmp2707, p_right);
    value2706 = $tmp2708;
    if (((panda$core$Bit) { value2706 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp2711 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(rhsIndex2704->type);
    bool $tmp2710 = $tmp2711.value;
    if (!$tmp2710) goto $l2712;
    panda$core$Bit $tmp2713 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_right->type);
    $tmp2710 = $tmp2713.value;
    $l2712:;
    panda$core$Bit $tmp2714 = { $tmp2710 };
    bool $tmp2709 = $tmp2714.value;
    if (!$tmp2709) goto $l2715;
    panda$core$Bit $tmp2716 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(rhsIndex2704->type, value2706->type);
    $tmp2709 = $tmp2716.value;
    $l2715:;
    panda$core$Bit $tmp2717 = { $tmp2709 };
    if ($tmp2717.value) {
    {
        panda$collections$Array* $tmp2719 = (panda$collections$Array*) malloc(40);
        $tmp2719->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2719->refCount.value = 1;
        panda$collections$Array$init($tmp2719);
        org$pandalanguage$pandac$IRNode* $tmp2721 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, value2706, &$s2718, ((panda$collections$ListView*) $tmp2719), resolved2673->type);
        value2706 = $tmp2721;
        if (((panda$core$Bit) { value2706 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$collections$Array$clear(children2678);
    panda$collections$Array$add$panda$collections$Array$T(children2678, ((panda$core$Object*) index2693));
    panda$collections$Array$add$panda$collections$Array$T(children2678, ((panda$core$Object*) value2706));
    org$pandalanguage$pandac$IRNode* $tmp2723 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, base2685, &$s2722, ((panda$collections$ListView*) children2678));
    return $tmp2723;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_rawLeft, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_rawRight) {
    org$pandalanguage$pandac$IRNode* left2724;
    org$pandalanguage$pandac$IRNode* right2725;
    panda$core$Int64 kind2749;
    org$pandalanguage$pandac$IRNode* resolved2756;
    panda$collections$Array* children2758;
    org$pandalanguage$pandac$IRNode* resolved2765;
    panda$collections$Array* children2767;
    panda$collections$Array* children2784;
    org$pandalanguage$pandac$IRNode* reusedLeft2789;
    org$pandalanguage$pandac$IRNode* toNonNullable2792;
    org$pandalanguage$pandac$IRNode* comparison2795;
    org$pandalanguage$pandac$IRNode* nullCheck2797;
    org$pandalanguage$pandac$ClassDecl* cl2817;
    org$pandalanguage$pandac$ClassDecl* cl2834;
    org$pandalanguage$pandac$IRNode* finalLeft2850;
    org$pandalanguage$pandac$IRNode* finalRight2853;
    panda$collections$Array* children2856;
    panda$collections$Array* children2870;
    panda$collections$Array* children2882;
    org$pandalanguage$pandac$IRNode* reusedLeft2888;
    org$pandalanguage$pandac$ClassDecl* cl2905;
    panda$collections$ListView* parameters2907;
    org$pandalanguage$pandac$Symbol* methods2909;
    org$pandalanguage$pandac$Type* type2913;
    panda$collections$Array* types2914;
    org$pandalanguage$pandac$MethodDecl* m2918;
    panda$collections$Iterator* m$Iter2923;
    org$pandalanguage$pandac$MethodDecl* m2935;
    panda$collections$Array* children2946;
    panda$collections$Array* children2975;
    panda$collections$Array* children2991;
    org$pandalanguage$pandac$Type* resultType3014;
    org$pandalanguage$pandac$IRNode* result3018;
    org$pandalanguage$pandac$IRNode* resolved3021;
    org$pandalanguage$pandac$IRNode* target3027;
    left2724 = p_rawLeft;
    right2725 = p_rawRight;
    panda$core$Bit $tmp2726 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2724->type->typeKind, ((panda$core$Int64) { 15 }));
    if ($tmp2726.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2727 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, right2725);
        right2725 = $tmp2727;
        if (((panda$core$Bit) { right2725 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Int64$nullable $tmp2728 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, left2724, right2725->type);
        if (((panda$core$Bit) { $tmp2728.nonnull }).value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2729 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, left2724, right2725->type);
            left2724 = $tmp2729;
        }
        }
    }
    }
    panda$core$Bit $tmp2731 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right2725->type->typeKind, ((panda$core$Int64) { 15 }));
    bool $tmp2730 = $tmp2731.value;
    if (!$tmp2730) goto $l2732;
    panda$core$Int64$nullable $tmp2733 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, right2725, left2724->type);
    $tmp2730 = ((panda$core$Bit) { $tmp2733.nonnull }).value;
    $l2732:;
    panda$core$Bit $tmp2734 = { $tmp2730 };
    if ($tmp2734.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2735 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, right2725, left2724->type);
        right2725 = $tmp2735;
    }
    }
    panda$core$Bit $tmp2739 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 58 }));
    bool $tmp2738 = $tmp2739.value;
    if ($tmp2738) goto $l2740;
    panda$core$Bit $tmp2741 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 59 }));
    $tmp2738 = $tmp2741.value;
    $l2740:;
    panda$core$Bit $tmp2742 = { $tmp2738 };
    bool $tmp2737 = $tmp2742.value;
    if ($tmp2737) goto $l2743;
    panda$core$Bit $tmp2744 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 60 }));
    $tmp2737 = $tmp2744.value;
    $l2743:;
    panda$core$Bit $tmp2745 = { $tmp2737 };
    bool $tmp2736 = $tmp2745.value;
    if ($tmp2736) goto $l2746;
    panda$core$Bit $tmp2747 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 61 }));
    $tmp2736 = $tmp2747.value;
    $l2746:;
    panda$core$Bit $tmp2748 = { $tmp2736 };
    if ($tmp2748.value) {
    {
        panda$core$Bit $tmp2751 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 58 }));
        bool $tmp2750 = $tmp2751.value;
        if ($tmp2750) goto $l2752;
        panda$core$Bit $tmp2753 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 60 }));
        $tmp2750 = $tmp2753.value;
        $l2752:;
        panda$core$Bit $tmp2754 = { $tmp2750 };
        if ($tmp2754.value) {
        {
            kind2749 = ((panda$core$Int64) { 1035 });
        }
        }
        else {
        {
            kind2749 = ((panda$core$Int64) { 1036 });
        }
        }
        panda$core$Bit $tmp2755 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2724->kind, ((panda$core$Int64) { 1030 }));
        if ($tmp2755.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2757 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, right2725);
            resolved2756 = $tmp2757;
            if (((panda$core$Bit) { resolved2756 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp2759 = (panda$collections$Array*) malloc(40);
            $tmp2759->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2759->refCount.value = 1;
            panda$collections$Array$init($tmp2759);
            children2758 = $tmp2759;
            panda$collections$Array$add$panda$collections$Array$T(children2758, ((panda$core$Object*) resolved2756));
            org$pandalanguage$pandac$IRNode* $tmp2761 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2761->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2761->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2763 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2761, kind2749, p_position, $tmp2763, ((panda$collections$ListView*) children2758));
            return $tmp2761;
        }
        }
        panda$core$Bit $tmp2764 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right2725->kind, ((panda$core$Int64) { 1030 }));
        if ($tmp2764.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2766 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, left2724);
            resolved2765 = $tmp2766;
            if (((panda$core$Bit) { resolved2765 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp2768 = (panda$collections$Array*) malloc(40);
            $tmp2768->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2768->refCount.value = 1;
            panda$collections$Array$init($tmp2768);
            children2767 = $tmp2768;
            panda$collections$Array$add$panda$collections$Array$T(children2767, ((panda$core$Object*) resolved2765));
            org$pandalanguage$pandac$IRNode* $tmp2770 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2770->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2770->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2772 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2770, kind2749, p_position, $tmp2772, ((panda$collections$ListView*) children2767));
            return $tmp2770;
        }
        }
    }
    }
    panda$core$Bit $tmp2775 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 58 }));
    bool $tmp2774 = $tmp2775.value;
    if ($tmp2774) goto $l2776;
    panda$core$Bit $tmp2777 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 59 }));
    $tmp2774 = $tmp2777.value;
    $l2776:;
    panda$core$Bit $tmp2778 = { $tmp2774 };
    bool $tmp2773 = $tmp2778.value;
    if (!$tmp2773) goto $l2779;
    panda$core$Bit $tmp2780 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2724->type->typeKind, ((panda$core$Int64) { 11 }));
    $tmp2773 = $tmp2780.value;
    $l2779:;
    panda$core$Bit $tmp2781 = { $tmp2773 };
    if ($tmp2781.value) {
    {
        panda$core$Bit $tmp2782 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(right2725->kind, ((panda$core$Int64) { 1030 }));
        PANDA_ASSERT($tmp2782.value);
        panda$core$UInt64 $tmp2783 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(self->reusedValueCount, ((panda$core$UInt64) { 1 }));
        self->reusedValueCount = $tmp2783;
        panda$collections$Array* $tmp2785 = (panda$collections$Array*) malloc(40);
        $tmp2785->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2785->refCount.value = 1;
        panda$collections$Array$init($tmp2785);
        children2784 = $tmp2785;
        panda$collections$Array$add$panda$collections$Array$T(children2784, ((panda$core$Object*) left2724));
        org$pandalanguage$pandac$IRNode* $tmp2787 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2787->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2787->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2787, ((panda$core$Int64) { 1027 }), left2724->position, left2724->type, ((panda$core$Object*) wrap_panda$core$UInt64(self->reusedValueCount)), ((panda$collections$ListView*) children2784));
        left2724 = $tmp2787;
        org$pandalanguage$pandac$IRNode* $tmp2790 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2790->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2790->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2790, ((panda$core$Int64) { 1028 }), left2724->position, left2724->type, self->reusedValueCount);
        reusedLeft2789 = $tmp2790;
        panda$core$Object* $tmp2793 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(left2724->type->subtypes, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp2794 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, reusedLeft2789, ((org$pandalanguage$pandac$Type*) $tmp2793));
        toNonNullable2792 = $tmp2794;
        org$pandalanguage$pandac$IRNode* $tmp2796 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, toNonNullable2792, p_op, right2725);
        comparison2795 = $tmp2796;
        if (((panda$core$Bit) { comparison2795 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp2798 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2798->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2798->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp2800 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp2798, ((panda$core$Int64) { 1030 }), p_position, $tmp2800);
        org$pandalanguage$pandac$IRNode* $tmp2801 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, left2724, ((panda$core$Int64) { 59 }), $tmp2798);
        nullCheck2797 = $tmp2801;
        if (((panda$core$Bit) { nullCheck2797 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$clear(children2784);
        panda$collections$Array$add$panda$collections$Array$T(children2784, ((panda$core$Object*) nullCheck2797));
        panda$collections$Array$add$panda$collections$Array$T(children2784, ((panda$core$Object*) comparison2795));
        org$pandalanguage$pandac$IRNode* $tmp2802 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2802->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2802->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp2804 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp2805 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 59 }));
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2802, ((panda$core$Int64) { 1011 }), p_position, $tmp2804, $tmp2805);
        org$pandalanguage$pandac$Type* $tmp2806 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp2807 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp2802, $tmp2806);
        panda$collections$Array$add$panda$collections$Array$T(children2784, ((panda$core$Object*) $tmp2807));
        org$pandalanguage$pandac$IRNode* $tmp2808 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2808->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2808->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp2810 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2808, ((panda$core$Int64) { 1044 }), p_position, $tmp2810, ((panda$collections$ListView*) children2784));
        return $tmp2808;
    }
    }
    panda$core$Bit $tmp2812 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 60 }));
    bool $tmp2811 = $tmp2812.value;
    if ($tmp2811) goto $l2813;
    panda$core$Bit $tmp2814 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 61 }));
    $tmp2811 = $tmp2814.value;
    $l2813:;
    panda$core$Bit $tmp2815 = { $tmp2811 };
    if ($tmp2815.value) {
    {
        panda$core$Bit $tmp2816 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(left2724->type);
        if ($tmp2816.value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp2818 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, left2724->type);
            cl2817 = $tmp2818;
            if (((panda$core$Bit) { cl2817 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$Bit $tmp2819 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, cl2817);
            if ($tmp2819.value) {
            {
                panda$core$String* $tmp2821 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
                panda$core$String* $tmp2822 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2820, $tmp2821);
                panda$core$String* $tmp2824 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2822, &$s2823);
                panda$core$String* $tmp2825 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2824, ((panda$core$Object*) left2724->type));
                panda$core$String* $tmp2827 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2825, &$s2826);
                panda$core$String* $tmp2829 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2828, ((panda$core$Object*) right2725->type));
                panda$core$String* $tmp2831 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2829, &$s2830);
                panda$core$String* $tmp2832 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2827, $tmp2831);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp2832);
            }
            }
        }
        }
        panda$core$Bit $tmp2833 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(right2725->type);
        if ($tmp2833.value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp2835 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, right2725->type);
            cl2834 = $tmp2835;
            if (((panda$core$Bit) { cl2834 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$Bit $tmp2836 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, cl2834);
            if ($tmp2836.value) {
            {
                panda$core$String* $tmp2838 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
                panda$core$String* $tmp2839 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2837, $tmp2838);
                panda$core$String* $tmp2841 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2839, &$s2840);
                panda$core$String* $tmp2842 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2841, ((panda$core$Object*) left2724->type));
                panda$core$String* $tmp2844 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2842, &$s2843);
                panda$core$String* $tmp2846 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2845, ((panda$core$Object*) right2725->type));
                panda$core$String* $tmp2848 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2846, &$s2847);
                panda$core$String* $tmp2849 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2844, $tmp2848);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp2849);
            }
            }
        }
        }
        org$pandalanguage$pandac$Type* $tmp2851 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp2852 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, left2724, $tmp2851);
        finalLeft2850 = $tmp2852;
        if (((panda$core$Bit) { finalLeft2850 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$Type* $tmp2854 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp2855 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, right2725, $tmp2854);
        finalRight2853 = $tmp2855;
        if (((panda$core$Bit) { finalRight2853 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp2857 = (panda$collections$Array*) malloc(40);
        $tmp2857->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2857->refCount.value = 1;
        panda$collections$Array$init($tmp2857);
        children2856 = $tmp2857;
        panda$collections$Array$add$panda$collections$Array$T(children2856, ((panda$core$Object*) finalLeft2850));
        panda$collections$Array$add$panda$collections$Array$T(children2856, ((panda$core$Object*) finalRight2853));
        org$pandalanguage$pandac$IRNode* $tmp2859 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2859->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2859->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp2861 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2859, ((panda$core$Int64) { 1023 }), p_position, $tmp2861, ((panda$core$Object*) wrap_panda$core$Int64(p_op)), ((panda$collections$ListView*) children2856));
        return $tmp2859;
    }
    }
    panda$core$Bit $tmp2862 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 73 }));
    if ($tmp2862.value) {
    {
        panda$core$Bit $tmp2863 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2724->kind, ((panda$core$Int64) { 1040 }));
        if ($tmp2863.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2864 = org$pandalanguage$pandac$Compiler$compileIndexedAssignment$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, left2724, p_op, right2725);
            return $tmp2864;
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp2865 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, left2724);
        left2724 = $tmp2865;
        if (((panda$core$Bit) { left2724 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp2866 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, right2725, left2724->type);
        right2725 = $tmp2866;
        if (((panda$core$Bit) { right2725 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp2867 = org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, left2724);
        panda$core$Bit $tmp2868 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2867);
        if ($tmp2868.value) {
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, left2724->position, &$s2869);
            return NULL;
        }
        }
        panda$collections$Array* $tmp2871 = (panda$collections$Array*) malloc(40);
        $tmp2871->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2871->refCount.value = 1;
        panda$collections$Array$init($tmp2871);
        children2870 = $tmp2871;
        panda$collections$Array$add$panda$collections$Array$T(children2870, ((panda$core$Object*) left2724));
        panda$collections$Array$add$panda$collections$Array$T(children2870, ((panda$core$Object*) right2725));
        org$pandalanguage$pandac$IRNode* $tmp2873 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2873->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2873->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2873, ((panda$core$Int64) { 1023 }), p_position, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 73 }))), ((panda$collections$ListView*) children2870));
        return $tmp2873;
    }
    }
    panda$core$Bit $tmp2875 = org$pandalanguage$pandac$Compiler$isAssignment$panda$core$Int64$R$panda$core$Bit(p_op);
    if ($tmp2875.value) {
    {
        panda$core$Bit $tmp2876 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2724->kind, ((panda$core$Int64) { 1040 }));
        if ($tmp2876.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2877 = org$pandalanguage$pandac$Compiler$compileIndexedAssignment$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, left2724, p_op, right2725);
            return $tmp2877;
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp2878 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, left2724);
        left2724 = $tmp2878;
        if (((panda$core$Bit) { left2724 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp2879 = org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, left2724);
        panda$core$Bit $tmp2880 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2879);
        if ($tmp2880.value) {
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, left2724->position, &$s2881);
            return NULL;
        }
        }
        panda$collections$Array* $tmp2883 = (panda$collections$Array*) malloc(40);
        $tmp2883->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2883->refCount.value = 1;
        panda$collections$Array$init($tmp2883);
        children2882 = $tmp2883;
        panda$collections$Array$add$panda$collections$Array$T(children2882, ((panda$core$Object*) left2724));
        panda$core$UInt64 $tmp2885 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(self->reusedValueCount, ((panda$core$UInt64) { 1 }));
        self->reusedValueCount = $tmp2885;
        org$pandalanguage$pandac$IRNode* $tmp2886 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2886->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2886->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2886, ((panda$core$Int64) { 1027 }), left2724->position, left2724->type, ((panda$core$Object*) wrap_panda$core$UInt64(self->reusedValueCount)), ((panda$collections$ListView*) children2882));
        left2724 = $tmp2886;
        org$pandalanguage$pandac$IRNode* $tmp2889 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2889->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2889->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2889, ((panda$core$Int64) { 1028 }), left2724->position, left2724->type, self->reusedValueCount);
        reusedLeft2888 = $tmp2889;
        panda$core$Int64 $tmp2891 = org$pandalanguage$pandac$Compiler$removeAssignment$panda$core$Int64$R$panda$core$Int64(p_op);
        org$pandalanguage$pandac$IRNode* $tmp2892 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, reusedLeft2888, $tmp2891, right2725);
        right2725 = $tmp2892;
        if (((panda$core$Bit) { right2725 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp2894 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(left2724->type);
        bool $tmp2893 = $tmp2894.value;
        if (!$tmp2893) goto $l2895;
        panda$core$Bit $tmp2896 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(left2724->type, right2725->type);
        $tmp2893 = $tmp2896.value;
        $l2895:;
        panda$core$Bit $tmp2897 = { $tmp2893 };
        if ($tmp2897.value) {
        {
            panda$collections$Array* $tmp2899 = (panda$collections$Array*) malloc(40);
            $tmp2899->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2899->refCount.value = 1;
            panda$collections$Array$init($tmp2899);
            org$pandalanguage$pandac$IRNode* $tmp2901 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, right2725, &$s2898, ((panda$collections$ListView*) $tmp2899), left2724->type);
            right2725 = $tmp2901;
            if (((panda$core$Bit) { right2725 == NULL }).value) {
            {
                return NULL;
            }
            }
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp2902 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, left2724, ((panda$core$Int64) { 73 }), right2725);
        return $tmp2902;
    }
    }
    panda$core$Bit $tmp2903 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 101 }));
    if ($tmp2903.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2904 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, left2724);
        left2724 = $tmp2904;
        if (((panda$core$Bit) { left2724 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$ClassDecl* $tmp2906 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, left2724->type);
        cl2905 = $tmp2906;
        if (((panda$core$Bit) { cl2905 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$ListView* $tmp2908 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, left2724->type);
        parameters2907 = $tmp2908;
        org$pandalanguage$pandac$SymbolTable* $tmp2910 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl2905);
        org$pandalanguage$pandac$Symbol* $tmp2912 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp2910, &$s2911);
        methods2909 = $tmp2912;
        if (((panda$core$Bit) { methods2909 != NULL }).value) {
        {
            panda$collections$Array* $tmp2915 = (panda$collections$Array*) malloc(40);
            $tmp2915->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2915->refCount.value = 1;
            panda$collections$Array$init($tmp2915);
            types2914 = $tmp2915;
            panda$core$Bit $tmp2917 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(methods2909->kind, ((panda$core$Int64) { 204 }));
            if ($tmp2917.value) {
            {
                m2918 = ((org$pandalanguage$pandac$MethodDecl*) methods2909);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m2918);
                org$pandalanguage$pandac$MethodRef* $tmp2919 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                $tmp2919->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                $tmp2919->refCount.value = 1;
                org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp2919, m2918, parameters2907);
                org$pandalanguage$pandac$Type* $tmp2921 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type($tmp2919);
                panda$collections$Array$add$panda$collections$Array$T(types2914, ((panda$core$Object*) $tmp2921));
            }
            }
            else {
            {
                panda$core$Bit $tmp2922 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(methods2909->kind, ((panda$core$Int64) { 205 }));
                PANDA_ASSERT($tmp2922.value);
                {
                    ITable* $tmp2924 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) methods2909)->methods)->$class->itable;
                    while ($tmp2924->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp2924 = $tmp2924->next;
                    }
                    $fn2926 $tmp2925 = $tmp2924->methods[0];
                    panda$collections$Iterator* $tmp2927 = $tmp2925(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) methods2909)->methods));
                    m$Iter2923 = $tmp2927;
                    $l2928:;
                    ITable* $tmp2930 = m$Iter2923->$class->itable;
                    while ($tmp2930->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp2930 = $tmp2930->next;
                    }
                    $fn2932 $tmp2931 = $tmp2930->methods[0];
                    panda$core$Bit $tmp2933 = $tmp2931(m$Iter2923);
                    panda$core$Bit $tmp2934 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2933);
                    if (!$tmp2934.value) goto $l2929;
                    {
                        ITable* $tmp2936 = m$Iter2923->$class->itable;
                        while ($tmp2936->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2936 = $tmp2936->next;
                        }
                        $fn2938 $tmp2937 = $tmp2936->methods[1];
                        panda$core$Object* $tmp2939 = $tmp2937(m$Iter2923);
                        m2935 = ((org$pandalanguage$pandac$MethodDecl*) $tmp2939);
                        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m2935);
                        org$pandalanguage$pandac$MethodRef* $tmp2940 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                        $tmp2940->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                        $tmp2940->refCount.value = 1;
                        org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp2940, m2935, parameters2907);
                        org$pandalanguage$pandac$Type* $tmp2942 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type($tmp2940);
                        panda$collections$Array$add$panda$collections$Array$T(types2914, ((panda$core$Object*) $tmp2942));
                    }
                    goto $l2928;
                    $l2929:;
                }
            }
            }
            org$pandalanguage$pandac$Type* $tmp2943 = (org$pandalanguage$pandac$Type*) malloc(96);
            $tmp2943->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp2943->refCount.value = 1;
            org$pandalanguage$pandac$Type$init$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp2943, ((panda$collections$ListView*) types2914));
            type2913 = $tmp2943;
        }
        }
        else {
        {
            org$pandalanguage$pandac$Type* $tmp2945 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            type2913 = $tmp2945;
        }
        }
        panda$collections$Array* $tmp2947 = (panda$collections$Array*) malloc(40);
        $tmp2947->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2947->refCount.value = 1;
        panda$collections$Array$init($tmp2947);
        children2946 = $tmp2947;
        panda$collections$Array$add$panda$collections$Array$T(children2946, ((panda$core$Object*) left2724));
        panda$collections$Array$add$panda$collections$Array$T(children2946, ((panda$core$Object*) right2725));
        org$pandalanguage$pandac$IRNode* $tmp2949 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2949->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2949->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2949, ((panda$core$Int64) { 1040 }), p_position, type2913, ((panda$collections$ListView*) children2946));
        return $tmp2949;
    }
    }
    org$pandalanguage$pandac$Type* $tmp2951 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2952 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(left2724->type, $tmp2951);
    if ($tmp2952.value) {
    {
        org$pandalanguage$pandac$Type* $tmp2954 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp2955 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(right2725->type, $tmp2954);
        bool $tmp2953 = $tmp2955.value;
        if (!$tmp2953) goto $l2956;
        panda$core$Bit $tmp2961 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 66 }));
        bool $tmp2960 = $tmp2961.value;
        if ($tmp2960) goto $l2962;
        panda$core$Bit $tmp2963 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 68 }));
        $tmp2960 = $tmp2963.value;
        $l2962:;
        panda$core$Bit $tmp2964 = { $tmp2960 };
        bool $tmp2959 = $tmp2964.value;
        if ($tmp2959) goto $l2965;
        panda$core$Bit $tmp2966 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 70 }));
        $tmp2959 = $tmp2966.value;
        $l2965:;
        panda$core$Bit $tmp2967 = { $tmp2959 };
        bool $tmp2958 = $tmp2967.value;
        if ($tmp2958) goto $l2968;
        panda$core$Bit $tmp2969 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 58 }));
        $tmp2958 = $tmp2969.value;
        $l2968:;
        panda$core$Bit $tmp2970 = { $tmp2958 };
        bool $tmp2957 = $tmp2970.value;
        if ($tmp2957) goto $l2971;
        panda$core$Bit $tmp2972 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 59 }));
        $tmp2957 = $tmp2972.value;
        $l2971:;
        panda$core$Bit $tmp2973 = { $tmp2957 };
        $tmp2953 = $tmp2973.value;
        $l2956:;
        panda$core$Bit $tmp2974 = { $tmp2953 };
        if ($tmp2974.value) {
        {
            panda$collections$Array* $tmp2976 = (panda$collections$Array*) malloc(40);
            $tmp2976->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2976->refCount.value = 1;
            panda$collections$Array$init($tmp2976);
            children2975 = $tmp2976;
            panda$collections$Array$add$panda$collections$Array$T(children2975, ((panda$core$Object*) left2724));
            panda$collections$Array$add$panda$collections$Array$T(children2975, ((panda$core$Object*) right2725));
            org$pandalanguage$pandac$IRNode* $tmp2978 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2978->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2978->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2978, ((panda$core$Int64) { 1023 }), p_position, left2724->type, ((panda$core$Object*) wrap_panda$core$Int64(p_op)), ((panda$collections$ListView*) children2975));
            return $tmp2978;
        }
        }
        panda$core$String* $tmp2981 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
        panda$core$String* $tmp2982 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2980, $tmp2981);
        panda$core$String* $tmp2984 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2982, &$s2983);
        panda$core$String* $tmp2985 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2984, ((panda$core$Object*) left2724->type));
        panda$core$String* $tmp2987 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2985, &$s2986);
        panda$core$String* $tmp2988 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2987, ((panda$core$Object*) right2725->type));
        panda$core$String* $tmp2990 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2988, &$s2989);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp2990);
        return NULL;
    }
    }
    panda$collections$Array* $tmp2992 = (panda$collections$Array*) malloc(40);
    $tmp2992->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2992->refCount.value = 1;
    panda$collections$Array$init($tmp2992);
    children2991 = $tmp2992;
    panda$core$Bit $tmp2996 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2724->kind, ((panda$core$Int64) { 1004 }));
    bool $tmp2995 = $tmp2996.value;
    if ($tmp2995) goto $l2997;
    panda$core$Bit $tmp2998 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2724->kind, ((panda$core$Int64) { 1032 }));
    $tmp2995 = $tmp2998.value;
    $l2997:;
    panda$core$Bit $tmp2999 = { $tmp2995 };
    bool $tmp2994 = $tmp2999.value;
    if (!$tmp2994) goto $l3000;
    panda$core$Bit $tmp3002 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right2725->kind, ((panda$core$Int64) { 1004 }));
    bool $tmp3001 = $tmp3002.value;
    if ($tmp3001) goto $l3003;
    panda$core$Bit $tmp3004 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right2725->kind, ((panda$core$Int64) { 1032 }));
    $tmp3001 = $tmp3004.value;
    $l3003:;
    panda$core$Bit $tmp3005 = { $tmp3001 };
    $tmp2994 = $tmp3005.value;
    $l3000:;
    panda$core$Bit $tmp3006 = { $tmp2994 };
    if ($tmp3006.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3007 = org$pandalanguage$pandac$Compiler$foldInts$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, left2724, p_op, right2725);
        return $tmp3007;
    }
    }
    panda$core$Bit $tmp3009 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(left2724->type);
    bool $tmp3008 = $tmp3009.value;
    if (!$tmp3008) goto $l3010;
    panda$core$Int64$nullable $tmp3011 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, right2725, left2724->type);
    $tmp3008 = ((panda$core$Bit) { $tmp3011.nonnull }).value;
    $l3010:;
    panda$core$Bit $tmp3012 = { $tmp3008 };
    if ($tmp3012.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3013 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, right2725, left2724->type);
        right2725 = $tmp3013;
        PANDA_ASSERT(((panda$core$Bit) { right2725 != NULL }).value);
        panda$collections$Array$add$panda$collections$Array$T(children2991, ((panda$core$Object*) left2724));
        panda$collections$Array$add$panda$collections$Array$T(children2991, ((panda$core$Object*) right2725));
        switch (p_op.value) {
            case 58:
            case 59:
            case 63:
            case 65:
            case 62:
            case 64:
            {
                org$pandalanguage$pandac$Type* $tmp3015 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
                resultType3014 = $tmp3015;
            }
            break;
            default:
            {
                resultType3014 = left2724->type;
            }
        }
        org$pandalanguage$pandac$IRNode* $tmp3016 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3016->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3016->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3016, ((panda$core$Int64) { 1023 }), p_position, resultType3014, ((panda$core$Object*) wrap_panda$core$Int64(p_op)), ((panda$collections$ListView*) children2991));
        return $tmp3016;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children2991, ((panda$core$Object*) right2725));
    PANDA_ASSERT(self->reportErrors.value);
    self->reportErrors = ((panda$core$Bit) { false });
    panda$core$String* $tmp3019 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
    org$pandalanguage$pandac$IRNode* $tmp3020 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, left2724, $tmp3019, ((panda$collections$ListView*) children2991));
    result3018 = $tmp3020;
    self->reportErrors = ((panda$core$Bit) { true });
    if (((panda$core$Bit) { result3018 == NULL }).value) {
    {
        panda$collections$Array$clear(children2991);
        panda$collections$Array$add$panda$collections$Array$T(children2991, ((panda$core$Object*) left2724));
        org$pandalanguage$pandac$IRNode* $tmp3022 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, right2725);
        resolved3021 = $tmp3022;
        bool $tmp3023 = ((panda$core$Bit) { resolved3021 != NULL }).value;
        if (!$tmp3023) goto $l3024;
        panda$core$Bit $tmp3025 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(resolved3021->type);
        $tmp3023 = $tmp3025.value;
        $l3024:;
        panda$core$Bit $tmp3026 = { $tmp3023 };
        if ($tmp3026.value) {
        {
            panda$collections$Array$add$panda$collections$Array$T(children2991, ((panda$core$Object*) resolved3021));
            org$pandalanguage$pandac$IRNode* $tmp3028 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3028->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3028->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3030 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp3028, ((panda$core$Int64) { 1001 }), resolved3021->position, $tmp3030, resolved3021->type);
            target3027 = $tmp3028;
            panda$core$String* $tmp3031 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
            org$pandalanguage$pandac$IRNode* $tmp3032 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target3027, $tmp3031, ((panda$collections$ListView*) children2991));
            result3018 = $tmp3032;
        }
        }
    }
    }
    return result3018;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_b) {
    org$pandalanguage$pandac$IRNode* left3033;
    org$pandalanguage$pandac$IRNode* right3036;
    panda$core$Object* $tmp3034 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_b->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3035 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3034));
    left3033 = $tmp3035;
    if (((panda$core$Bit) { left3033 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Object* $tmp3037 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_b->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp3038 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3037));
    right3036 = $tmp3038;
    if (((panda$core$Bit) { right3036 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3039 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_b->position, left3033, ((panda$core$Int64$wrapper*) p_b->payload)->value, right3036);
    return $tmp3039;
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type) {
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp3043;
    switch (p_type->typeKind.value) {
        case 22:
        {
            panda$collections$ListView* $tmp3040 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p_type->parameter->bound);
            return $tmp3040;
        }
        break;
        case 21:
        {
            panda$core$Int64 $tmp3041 = panda$collections$Array$get_count$R$panda$core$Int64(p_type->subtypes);
            panda$core$Bit $tmp3042 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp3041, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp3042.value);
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp3043, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$collections$Array* $tmp3044 = panda$collections$Array$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT(p_type->subtypes, $tmp3043);
            return ((panda$collections$ListView*) $tmp3044);
        }
        break;
        case 11:
        {
            panda$core$Object* $tmp3045 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
            panda$collections$ListView* $tmp3046 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, ((org$pandalanguage$pandac$Type*) $tmp3045));
            return $tmp3046;
        }
        break;
        default:
        {
            panda$collections$Array* $tmp3047 = (panda$collections$Array*) malloc(40);
            $tmp3047->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp3047->refCount.value = 1;
            panda$collections$Array$init($tmp3047);
            return ((panda$collections$ListView*) $tmp3047);
        }
    }
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$IRNode$Q$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_target) {
    if (((panda$core$Bit) { p_target != NULL }).value) {
    {
        panda$core$Bit $tmp3049 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1001 }));
        if ($tmp3049.value) {
        {
            panda$collections$ListView* $tmp3050 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, ((org$pandalanguage$pandac$Type*) p_target->payload));
            return $tmp3050;
        }
        }
        panda$collections$ListView* $tmp3051 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p_target->type);
        return $tmp3051;
    }
    }
    panda$collections$Array* $tmp3052 = (panda$collections$Array*) malloc(40);
    $tmp3052->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3052->refCount.value = 1;
    panda$collections$Array$init($tmp3052);
    return ((panda$collections$ListView*) $tmp3052);
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compilePrefix$panda$core$Int64$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_base, org$pandalanguage$pandac$Position p_position) {
    panda$core$String* name3055;
    org$pandalanguage$pandac$ClassDecl* cl3057;
    org$pandalanguage$pandac$Symbol* s3059;
    org$pandalanguage$pandac$MethodDecl* m3062;
    panda$collections$Iterator* test$Iter3067;
    org$pandalanguage$pandac$MethodDecl* test3079;
    org$pandalanguage$pandac$MethodRef* ref3091;
    panda$collections$Array* children3095;
    org$pandalanguage$pandac$IRNode* methodRef3098;
    org$pandalanguage$pandac$Position $tmp3104;
    panda$collections$Array* args3105;
    panda$collections$Array* children3114;
    panda$collections$Array* children3124;
    org$pandalanguage$pandac$IRNode* coerced3133;
    panda$collections$Array* children3136;
    panda$core$Bit $tmp3054 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_base->type);
    if ($tmp3054.value) {
    {
        panda$core$String* $tmp3056 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
        name3055 = $tmp3056;
        org$pandalanguage$pandac$ClassDecl* $tmp3058 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_base->type);
        cl3057 = $tmp3058;
        if (((panda$core$Bit) { cl3057 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$SymbolTable* $tmp3060 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl3057);
        org$pandalanguage$pandac$Symbol* $tmp3061 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp3060, name3055);
        s3059 = $tmp3061;
        if (((panda$core$Bit) { s3059 != NULL }).value) {
        {
            m3062 = NULL;
            switch (s3059->kind.value) {
                case 204:
                {
                    m3062 = ((org$pandalanguage$pandac$MethodDecl*) s3059);
                    panda$core$Int64 $tmp3063 = panda$collections$Array$get_count$R$panda$core$Int64(m3062->parameters);
                    panda$core$Bit $tmp3064 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3063, ((panda$core$Int64) { 0 }));
                    PANDA_ASSERT($tmp3064.value);
                    panda$core$Bit $tmp3065 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(m3062->annotations);
                    panda$core$Bit $tmp3066 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3065);
                    PANDA_ASSERT($tmp3066.value);
                }
                break;
                case 205:
                {
                    {
                        ITable* $tmp3068 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s3059)->methods)->$class->itable;
                        while ($tmp3068->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp3068 = $tmp3068->next;
                        }
                        $fn3070 $tmp3069 = $tmp3068->methods[0];
                        panda$collections$Iterator* $tmp3071 = $tmp3069(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s3059)->methods));
                        test$Iter3067 = $tmp3071;
                        $l3072:;
                        ITable* $tmp3074 = test$Iter3067->$class->itable;
                        while ($tmp3074->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp3074 = $tmp3074->next;
                        }
                        $fn3076 $tmp3075 = $tmp3074->methods[0];
                        panda$core$Bit $tmp3077 = $tmp3075(test$Iter3067);
                        panda$core$Bit $tmp3078 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3077);
                        if (!$tmp3078.value) goto $l3073;
                        {
                            ITable* $tmp3080 = test$Iter3067->$class->itable;
                            while ($tmp3080->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp3080 = $tmp3080->next;
                            }
                            $fn3082 $tmp3081 = $tmp3080->methods[1];
                            panda$core$Object* $tmp3083 = $tmp3081(test$Iter3067);
                            test3079 = ((org$pandalanguage$pandac$MethodDecl*) $tmp3083);
                            panda$core$Bit $tmp3085 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(test3079->annotations);
                            panda$core$Bit $tmp3086 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3085);
                            bool $tmp3084 = $tmp3086.value;
                            if (!$tmp3084) goto $l3087;
                            panda$core$Int64 $tmp3088 = panda$collections$Array$get_count$R$panda$core$Int64(test3079->parameters);
                            panda$core$Bit $tmp3089 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3088, ((panda$core$Int64) { 0 }));
                            $tmp3084 = $tmp3089.value;
                            $l3087:;
                            panda$core$Bit $tmp3090 = { $tmp3084 };
                            if ($tmp3090.value) {
                            {
                                m3062 = test3079;
                                goto $l3073;
                            }
                            }
                        }
                        goto $l3072;
                        $l3073:;
                    }
                }
                break;
                default:
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
            }
            if (((panda$core$Bit) { m3062 != NULL }).value) {
            {
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m3062);
                org$pandalanguage$pandac$MethodRef* $tmp3092 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                $tmp3092->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                $tmp3092->refCount.value = 1;
                panda$collections$ListView* $tmp3094 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$IRNode$Q$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p_base);
                org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp3092, m3062, $tmp3094);
                ref3091 = $tmp3092;
                panda$collections$Array* $tmp3096 = (panda$collections$Array*) malloc(40);
                $tmp3096->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp3096->refCount.value = 1;
                panda$collections$Array$init($tmp3096);
                children3095 = $tmp3096;
                panda$collections$Array$add$panda$collections$Array$T(children3095, ((panda$core$Object*) p_base));
                org$pandalanguage$pandac$IRNode* $tmp3099 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp3099->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp3099->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp3101 = (org$pandalanguage$pandac$Type*) malloc(96);
                $tmp3101->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
                $tmp3101->refCount.value = 1;
                org$pandalanguage$pandac$Position$init(&$tmp3104);
                org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp3101, &$s3103, ((panda$core$Int64) { 16 }), $tmp3104, ((panda$core$Bit) { true }));
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3099, ((panda$core$Int64) { 1002 }), p_position, $tmp3101, ((panda$core$Object*) ref3091), ((panda$collections$ListView*) children3095));
                methodRef3098 = $tmp3099;
                panda$collections$Array* $tmp3106 = (panda$collections$Array*) malloc(40);
                $tmp3106->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp3106->refCount.value = 1;
                panda$collections$Array$init($tmp3106);
                args3105 = $tmp3106;
                org$pandalanguage$pandac$IRNode* $tmp3108 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, methodRef3098, ((panda$collections$ListView*) args3105));
                return $tmp3108;
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
                    org$pandalanguage$pandac$IRNode* $tmp3109 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp3109->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp3109->refCount.value = 1;
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp3109, ((panda$core$Int64) { 1032 }), p_position, p_base->type, ((panda$core$UInt64$wrapper*) p_base->payload)->value);
                    return $tmp3109;
                }
                break;
                case 1032:
                {
                    org$pandalanguage$pandac$IRNode* $tmp3111 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp3111->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp3111->refCount.value = 1;
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp3111, ((panda$core$Int64) { 1004 }), p_position, p_base->type, ((panda$core$UInt64$wrapper*) p_base->payload)->value);
                    return $tmp3111;
                }
                break;
                default:
                {
                    panda$core$Bit $tmp3113 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_base->type);
                    if ($tmp3113.value) {
                    {
                        panda$collections$Array* $tmp3115 = (panda$collections$Array*) malloc(40);
                        $tmp3115->$class = (panda$core$Class*) &panda$collections$Array$class;
                        $tmp3115->refCount.value = 1;
                        panda$collections$Array$init($tmp3115);
                        children3114 = $tmp3115;
                        panda$collections$Array$add$panda$collections$Array$T(children3114, ((panda$core$Object*) p_base));
                        org$pandalanguage$pandac$IRNode* $tmp3117 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                        $tmp3117->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                        $tmp3117->refCount.value = 1;
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3117, ((panda$core$Int64) { 1041 }), p_base->position, p_base->type, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 52 }))), ((panda$collections$ListView*) children3114));
                        return $tmp3117;
                    }
                    }
                }
            }
            panda$core$String* $tmp3120 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3119, ((panda$core$Object*) p_base->type));
            panda$core$String* $tmp3122 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3120, &$s3121);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_base->position, $tmp3122);
            return NULL;
        }
        break;
        case 50:
        {
            panda$core$Bit $tmp3123 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_base->type);
            if ($tmp3123.value) {
            {
                panda$collections$Array* $tmp3125 = (panda$collections$Array*) malloc(40);
                $tmp3125->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp3125->refCount.value = 1;
                panda$collections$Array$init($tmp3125);
                children3124 = $tmp3125;
                panda$collections$Array$add$panda$collections$Array$T(children3124, ((panda$core$Object*) p_base));
                org$pandalanguage$pandac$IRNode* $tmp3127 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp3127->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp3127->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3127, ((panda$core$Int64) { 1041 }), p_base->position, p_base->type, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 50 }))), ((panda$collections$ListView*) children3124));
                return $tmp3127;
            }
            }
            else {
            {
                panda$core$String* $tmp3130 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3129, ((org$pandalanguage$pandac$Symbol*) p_base->type)->name);
                panda$core$String* $tmp3132 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3130, &$s3131);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_base->position, $tmp3132);
                return NULL;
            }
            }
        }
        break;
        case 49:
        {
            org$pandalanguage$pandac$Type* $tmp3134 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode* $tmp3135 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_base, $tmp3134);
            coerced3133 = $tmp3135;
            if (((panda$core$Bit) { coerced3133 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp3137 = (panda$collections$Array*) malloc(40);
            $tmp3137->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp3137->refCount.value = 1;
            panda$collections$Array$init($tmp3137);
            children3136 = $tmp3137;
            panda$collections$Array$add$panda$collections$Array$T(children3136, ((panda$core$Object*) coerced3133));
            org$pandalanguage$pandac$IRNode* $tmp3139 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3139->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3139->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3139, ((panda$core$Int64) { 1041 }), p_base->position, p_base->type, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 49 }))), ((panda$collections$ListView*) children3136));
            return $tmp3139;
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
    org$pandalanguage$pandac$IRNode* base3144;
    panda$core$Bit $tmp3141 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_p->kind, ((panda$core$Int64) { 112 }));
    PANDA_ASSERT($tmp3141.value);
    panda$core$Int64 $tmp3142 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_p->children);
    panda$core$Bit $tmp3143 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3142, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3143.value);
    panda$core$Object* $tmp3145 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_p->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3146 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3145));
    base3144 = $tmp3146;
    if (((panda$core$Bit) { base3144 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3147 = org$pandalanguage$pandac$Compiler$compilePrefix$panda$core$Int64$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$R$org$pandalanguage$pandac$IRNode$Q(self, ((panda$core$Int64$wrapper*) p_p->payload)->value, base3144, p_p->position);
    return $tmp3147;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileCall$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_c) {
    org$pandalanguage$pandac$IRNode* m3149;
    panda$collections$Array* args3152;
    panda$core$Range$LTpanda$core$Int64$GT $tmp3155;
    org$pandalanguage$pandac$IRNode* arg3170;
    panda$core$Bit $tmp3148 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_c->kind, ((panda$core$Int64) { 107 }));
    PANDA_ASSERT($tmp3148.value);
    panda$core$Object* $tmp3150 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_c->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3151 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3150));
    m3149 = $tmp3151;
    if (((panda$core$Bit) { m3149 != NULL }).value) {
    {
        panda$collections$Array* $tmp3153 = (panda$collections$Array*) malloc(40);
        $tmp3153->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp3153->refCount.value = 1;
        panda$collections$Array$init($tmp3153);
        args3152 = $tmp3153;
        panda$core$Int64 $tmp3156 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_c->children);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp3155, ((panda$core$Int64) { 1 }), $tmp3156, ((panda$core$Bit) { false }));
        int64_t $tmp3158 = $tmp3155.min.value;
        panda$core$Int64 i3157 = { $tmp3158 };
        int64_t $tmp3160 = $tmp3155.max.value;
        bool $tmp3161 = $tmp3155.inclusive.value;
        if ($tmp3161) goto $l3168; else goto $l3169;
        $l3168:;
        if ($tmp3158 <= $tmp3160) goto $l3162; else goto $l3164;
        $l3169:;
        if ($tmp3158 < $tmp3160) goto $l3162; else goto $l3164;
        $l3162:;
        {
            panda$core$Object* $tmp3171 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_c->children, i3157);
            org$pandalanguage$pandac$IRNode* $tmp3172 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3171));
            arg3170 = $tmp3172;
            if (((panda$core$Bit) { arg3170 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(args3152, ((panda$core$Object*) arg3170));
        }
        $l3165:;
        int64_t $tmp3174 = $tmp3160 - i3157.value;
        if ($tmp3161) goto $l3175; else goto $l3176;
        $l3175:;
        if ($tmp3174 >= 1) goto $l3173; else goto $l3164;
        $l3176:;
        if ($tmp3174 > 1) goto $l3173; else goto $l3164;
        $l3173:;
        i3157.value += 1;
        goto $l3162;
        $l3164:;
        org$pandalanguage$pandac$IRNode* $tmp3179 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, m3149, ((panda$collections$ListView*) args3152));
        return $tmp3179;
    }
    }
    return NULL;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$String$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_base, panda$core$String* p_name) {
    org$pandalanguage$pandac$ClassDecl* cl3180;
    panda$core$String* name3182;
    org$pandalanguage$pandac$ClassDecl* cl3190;
    org$pandalanguage$pandac$SymbolTable* st3203;
    org$pandalanguage$pandac$Symbol* s3205;
    switch (p_base->kind.value) {
        case 1001:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp3181 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Type*) p_base->payload));
            cl3180 = $tmp3181;
        }
        break;
        case 1037:
        {
            panda$core$String* $tmp3184 = (($fn3183) p_base->payload->$class->vtable[0])(p_base->payload);
            panda$core$String* $tmp3186 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3184, &$s3185);
            panda$core$String* $tmp3187 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3186, p_name);
            panda$core$String* $tmp3189 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3187, &$s3188);
            name3182 = $tmp3189;
            org$pandalanguage$pandac$ClassDecl* $tmp3191 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, name3182);
            cl3190 = $tmp3191;
            if (((panda$core$Bit) { cl3190 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp3192 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp3192->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp3192->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp3194 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$Type* $tmp3195 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl3190);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp3192, ((panda$core$Int64) { 1001 }), p_position, $tmp3194, $tmp3195);
                return $tmp3192;
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp3196 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3196->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3196->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3198 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$String($tmp3196, ((panda$core$Int64) { 1037 }), p_position, $tmp3198, name3182);
            return $tmp3196;
        }
        break;
        case 1024:
        {
            panda$core$Object* $tmp3199 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, ((org$pandalanguage$pandac$ClassDecl*) $tmp3199));
            panda$core$Object* $tmp3200 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
            org$pandalanguage$pandac$ClassDecl* $tmp3201 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$ClassDecl*) $tmp3200)->rawSuper);
            cl3180 = $tmp3201;
        }
        break;
        default:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp3202 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_base->type);
            cl3180 = $tmp3202;
        }
    }
    if (((panda$core$Bit) { cl3180 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp3204 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl3180);
    st3203 = $tmp3204;
    org$pandalanguage$pandac$Symbol* $tmp3206 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(st3203, p_name);
    s3205 = $tmp3206;
    if (((panda$core$Bit) { s3205 == NULL }).value) {
    {
        panda$core$String* $tmp3208 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3207, ((panda$core$Object*) p_base->type));
        panda$core$String* $tmp3210 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3208, &$s3209);
        panda$core$String* $tmp3211 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3210, p_name);
        panda$core$String* $tmp3213 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3211, &$s3212);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp3213);
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3214 = org$pandalanguage$pandac$Compiler$symbolRef$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, p_base, s3205, st3203);
    return $tmp3214;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_d) {
    org$pandalanguage$pandac$IRNode* base3218;
    panda$core$Bit $tmp3215 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_d->kind, ((panda$core$Int64) { 108 }));
    PANDA_ASSERT($tmp3215.value);
    panda$core$Int64 $tmp3216 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp3217 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3216, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3217.value);
    panda$core$Object* $tmp3219 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3220 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3219));
    base3218 = $tmp3220;
    if (((panda$core$Bit) { base3218 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp3222 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(base3218->kind, ((panda$core$Int64) { 1037 }));
    bool $tmp3221 = $tmp3222.value;
    if (!$tmp3221) goto $l3223;
    panda$core$Bit $tmp3224 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(base3218->kind, ((panda$core$Int64) { 1024 }));
    $tmp3221 = $tmp3224.value;
    $l3223:;
    panda$core$Bit $tmp3225 = { $tmp3221 };
    if ($tmp3225.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3226 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, base3218);
        base3218 = $tmp3226;
    }
    }
    if (((panda$core$Bit) { base3218 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3227 = org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$String$R$org$pandalanguage$pandac$IRNode$Q(self, p_d->position, base3218, ((panda$core$String*) p_d->payload));
    return $tmp3227;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIdentifier$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_i) {
    org$pandalanguage$pandac$Symbol* s3229;
    panda$core$Bit $tmp3228 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_i->kind, ((panda$core$Int64) { 106 }));
    PANDA_ASSERT($tmp3228.value);
    org$pandalanguage$pandac$Symbol* $tmp3230 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(self->symbolTable, ((panda$core$String*) p_i->payload));
    s3229 = $tmp3230;
    if (((panda$core$Bit) { s3229 == NULL }).value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp3231 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((panda$core$String*) p_i->payload));
        s3229 = ((org$pandalanguage$pandac$Symbol*) $tmp3231);
    }
    }
    if (((panda$core$Bit) { s3229 != NULL }).value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3232 = org$pandalanguage$pandac$Compiler$symbolRef$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q(self, p_i->position, NULL, s3229, self->symbolTable);
        return $tmp3232;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3233 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3233->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3233->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3235 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$String($tmp3233, ((panda$core$Int64) { 1037 }), p_i->position, $tmp3235, ((panda$core$String*) p_i->payload));
    return $tmp3233;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_t) {
    org$pandalanguage$pandac$Type* resolved3236;
    org$pandalanguage$pandac$Type* $tmp3237 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, p_t);
    org$pandalanguage$pandac$Type* $tmp3238 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, $tmp3237);
    resolved3236 = $tmp3238;
    if (((panda$core$Bit) { resolved3236 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3239 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3239->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3239->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3241 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp3239, ((panda$core$Int64) { 1001 }), p_t->position, $tmp3241, resolved3236);
    return $tmp3239;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileRange$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_r) {
    org$pandalanguage$pandac$IRNode* start3249;
    org$pandalanguage$pandac$IRNode* end3257;
    org$pandalanguage$pandac$IRNode* step3265;
    panda$collections$Array* children3272;
    org$pandalanguage$pandac$Position $tmp3280;
    panda$core$Bit $tmp3243 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_r->kind, ((panda$core$Int64) { 105 }));
    bool $tmp3242 = $tmp3243.value;
    if ($tmp3242) goto $l3244;
    panda$core$Bit $tmp3245 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_r->kind, ((panda$core$Int64) { 104 }));
    $tmp3242 = $tmp3245.value;
    $l3244:;
    panda$core$Bit $tmp3246 = { $tmp3242 };
    PANDA_ASSERT($tmp3246.value);
    panda$core$Int64 $tmp3247 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_r->children);
    panda$core$Bit $tmp3248 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3247, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp3248.value);
    panda$core$Object* $tmp3250 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp3251 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp3250)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp3251.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3252 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3252->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3252->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp3254 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3252, ((panda$core$Int64) { 1030 }), p_r->position, $tmp3254);
        start3249 = $tmp3252;
    }
    }
    else {
    {
        panda$core$Object* $tmp3255 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp3256 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3255));
        start3249 = $tmp3256;
        if (((panda$core$Bit) { start3249 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$core$Object* $tmp3258 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp3259 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp3258)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp3259.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3260 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3260->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3260->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp3262 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3260, ((panda$core$Int64) { 1030 }), p_r->position, $tmp3262);
        end3257 = $tmp3260;
    }
    }
    else {
    {
        panda$core$Object* $tmp3263 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$IRNode* $tmp3264 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3263));
        end3257 = $tmp3264;
        if (((panda$core$Bit) { end3257 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$core$Object* $tmp3266 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 2 }));
    panda$core$Bit $tmp3267 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp3266)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp3267.value) {
    {
        step3265 = NULL;
    }
    }
    else {
    {
        panda$core$Object* $tmp3268 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$IRNode* $tmp3269 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3268));
        org$pandalanguage$pandac$Type* $tmp3270 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp3271 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3269, $tmp3270);
        step3265 = $tmp3271;
        if (((panda$core$Bit) { step3265 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$collections$Array* $tmp3273 = (panda$collections$Array*) malloc(40);
    $tmp3273->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3273->refCount.value = 1;
    panda$collections$Array$init($tmp3273);
    children3272 = $tmp3273;
    panda$collections$Array$add$panda$collections$Array$T(children3272, ((panda$core$Object*) start3249));
    panda$collections$Array$add$panda$collections$Array$T(children3272, ((panda$core$Object*) end3257));
    if (((panda$core$Bit) { step3265 != NULL }).value) {
    {
        panda$collections$Array$add$panda$collections$Array$T(children3272, ((panda$core$Object*) step3265));
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3275 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3275->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3275->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3277 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp3277->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp3277->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp3280);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp3277, &$s3279, ((panda$core$Int64) { 17 }), $tmp3280, ((panda$core$Bit) { true }));
    panda$core$Bit $tmp3281 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_r->kind, ((panda$core$Int64) { 104 }));
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3275, ((panda$core$Int64) { 1031 }), p_r->position, $tmp3277, ((panda$core$Object*) wrap_panda$core$Bit($tmp3281)), ((panda$collections$ListView*) children3272));
    return $tmp3275;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$IRNode* $tmp3282 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3282->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3282->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3284 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$String($tmp3282, ((panda$core$Int64) { 1033 }), p_s->position, $tmp3284, ((panda$core$String*) p_s->payload));
    return $tmp3282;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileSelf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$Type* type3289;
    org$pandalanguage$pandac$ClassDecl* cl3290;
    panda$collections$Array* subtypes3297;
    panda$core$MutableString* name3301;
    panda$core$Char8 $tmp3304;
    panda$core$String* separator3305;
    panda$collections$Iterator* p$Iter3307;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* p3319;
    panda$collections$Array* pType3324;
    panda$core$String* pName3327;
    panda$core$Char8 $tmp3337;
    panda$core$Bit $tmp3285 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_s->kind, ((panda$core$Int64) { 114 }));
    PANDA_ASSERT($tmp3285.value);
    panda$core$Object* $tmp3286 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
    panda$core$Bit $tmp3287 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp3286)->annotations);
    if ($tmp3287.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_s->position, &$s3288);
        return NULL;
    }
    }
    panda$core$Object* $tmp3291 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
    cl3290 = ((org$pandalanguage$pandac$ClassDecl*) $tmp3291);
    ITable* $tmp3292 = ((panda$collections$CollectionView*) cl3290->parameters)->$class->itable;
    while ($tmp3292->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp3292 = $tmp3292->next;
    }
    $fn3294 $tmp3293 = $tmp3292->methods[0];
    panda$core$Int64 $tmp3295 = $tmp3293(((panda$collections$CollectionView*) cl3290->parameters));
    panda$core$Bit $tmp3296 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3295, ((panda$core$Int64) { 0 }));
    if ($tmp3296.value) {
    {
        panda$collections$Array* $tmp3298 = (panda$collections$Array*) malloc(40);
        $tmp3298->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp3298->refCount.value = 1;
        panda$collections$Array$init($tmp3298);
        subtypes3297 = $tmp3298;
        org$pandalanguage$pandac$Type* $tmp3300 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl3290);
        panda$collections$Array$add$panda$collections$Array$T(subtypes3297, ((panda$core$Object*) $tmp3300));
        panda$core$MutableString* $tmp3302 = (panda$core$MutableString*) malloc(48);
        $tmp3302->$class = (panda$core$Class*) &panda$core$MutableString$class;
        $tmp3302->refCount.value = 1;
        panda$core$MutableString$init$panda$core$String($tmp3302, ((org$pandalanguage$pandac$Symbol*) cl3290)->name);
        name3301 = $tmp3302;
        panda$core$Char8$init$panda$core$UInt8(&$tmp3304, ((panda$core$UInt8) { 60 }));
        panda$core$MutableString$append$panda$core$Char8(name3301, $tmp3304);
        separator3305 = &$s3306;
        {
            ITable* $tmp3308 = ((panda$collections$Iterable*) cl3290->parameters)->$class->itable;
            while ($tmp3308->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3308 = $tmp3308->next;
            }
            $fn3310 $tmp3309 = $tmp3308->methods[0];
            panda$collections$Iterator* $tmp3311 = $tmp3309(((panda$collections$Iterable*) cl3290->parameters));
            p$Iter3307 = $tmp3311;
            $l3312:;
            ITable* $tmp3314 = p$Iter3307->$class->itable;
            while ($tmp3314->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3314 = $tmp3314->next;
            }
            $fn3316 $tmp3315 = $tmp3314->methods[0];
            panda$core$Bit $tmp3317 = $tmp3315(p$Iter3307);
            panda$core$Bit $tmp3318 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3317);
            if (!$tmp3318.value) goto $l3313;
            {
                ITable* $tmp3320 = p$Iter3307->$class->itable;
                while ($tmp3320->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3320 = $tmp3320->next;
                }
                $fn3322 $tmp3321 = $tmp3320->methods[1];
                panda$core$Object* $tmp3323 = $tmp3321(p$Iter3307);
                p3319 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp3323);
                panda$collections$Array* $tmp3325 = (panda$collections$Array*) malloc(40);
                $tmp3325->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp3325->refCount.value = 1;
                panda$collections$Array$init($tmp3325);
                pType3324 = $tmp3325;
                panda$collections$Array$add$panda$collections$Array$T(pType3324, ((panda$core$Object*) p3319->bound));
                panda$core$String* $tmp3328 = panda$core$String$convert$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) cl3290)->name);
                panda$core$String* $tmp3330 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3328, &$s3329);
                panda$core$String* $tmp3331 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3330, ((org$pandalanguage$pandac$Symbol*) p3319)->name);
                panda$core$String* $tmp3333 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3331, &$s3332);
                pName3327 = $tmp3333;
                panda$core$MutableString$append$panda$core$String(name3301, separator3305);
                panda$core$MutableString$append$panda$core$String(name3301, pName3327);
                org$pandalanguage$pandac$Type* $tmp3334 = (org$pandalanguage$pandac$Type*) malloc(96);
                $tmp3334->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
                $tmp3334->refCount.value = 1;
                org$pandalanguage$pandac$Type$init$org$pandalanguage$pandac$ClassDecl$GenericParameter($tmp3334, p3319);
                panda$collections$Array$add$panda$collections$Array$T(subtypes3297, ((panda$core$Object*) $tmp3334));
                separator3305 = &$s3336;
            }
            goto $l3312;
            $l3313:;
        }
        panda$core$Char8$init$panda$core$UInt8(&$tmp3337, ((panda$core$UInt8) { 62 }));
        panda$core$MutableString$append$panda$core$Char8(name3301, $tmp3337);
        org$pandalanguage$pandac$Type* $tmp3338 = (org$pandalanguage$pandac$Type*) malloc(96);
        $tmp3338->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
        $tmp3338->refCount.value = 1;
        panda$core$String* $tmp3340 = panda$core$MutableString$finish$R$panda$core$String(name3301);
        org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp3338, $tmp3340, ((panda$core$Int64) { 21 }), p_s->position, ((panda$collections$ListView*) subtypes3297), ((panda$core$Bit) { true }));
        type3289 = $tmp3338;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp3341 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl3290);
        type3289 = $tmp3341;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3342 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3342->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3342->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3342, ((panda$core$Int64) { 1025 }), p_s->position, type3289);
    return $tmp3342;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileSuper$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$ClassDecl* cl3348;
    panda$core$Bit $tmp3344 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_s->kind, ((panda$core$Int64) { 115 }));
    PANDA_ASSERT($tmp3344.value);
    panda$core$Object* $tmp3345 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
    panda$core$Bit $tmp3346 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp3345)->annotations);
    if ($tmp3346.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_s->position, &$s3347);
        return NULL;
    }
    }
    panda$core$Object* $tmp3349 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
    cl3348 = ((org$pandalanguage$pandac$ClassDecl*) $tmp3349);
    PANDA_ASSERT(cl3348->resolved.value);
    org$pandalanguage$pandac$IRNode* $tmp3350 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3350->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3350->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3350, ((panda$core$Int64) { 1024 }), p_s->position, cl3348->rawSuper);
    return $tmp3350;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_expr, org$pandalanguage$pandac$Type* p_rawType) {
    org$pandalanguage$pandac$IRNode* value3352;
    panda$core$String$Index$nullable index3354;
    org$pandalanguage$pandac$Type* type3361;
    org$pandalanguage$pandac$IRNode* base3363;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp3366;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp3369;
    org$pandalanguage$pandac$Type* type3373;
    org$pandalanguage$pandac$IRNode* $tmp3353 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr);
    value3352 = $tmp3353;
    if (((panda$core$Bit) { value3352 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$String$Index$nullable $tmp3356 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(((org$pandalanguage$pandac$Symbol*) p_rawType)->name, &$s3355);
    index3354 = $tmp3356;
    panda$core$Bit $tmp3358 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_rawType->typeKind, ((panda$core$Int64) { 10 }));
    bool $tmp3357 = $tmp3358.value;
    if (!$tmp3357) goto $l3359;
    $tmp3357 = ((panda$core$Bit) { index3354.nonnull }).value;
    $l3359:;
    panda$core$Bit $tmp3360 = { $tmp3357 };
    if ($tmp3360.value) {
    {
        PANDA_ASSERT(self->reportErrors.value);
        self->reportErrors = ((panda$core$Bit) { false });
        org$pandalanguage$pandac$Type* $tmp3362 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, p_rawType);
        type3361 = $tmp3362;
        self->reportErrors = ((panda$core$Bit) { true });
        if (((panda$core$Bit) { type3361 == NULL }).value) {
        {
            org$pandalanguage$pandac$Type* $tmp3364 = (org$pandalanguage$pandac$Type*) malloc(96);
            $tmp3364->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp3364->refCount.value = 1;
            panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp3366, ((panda$core$String$Index$nullable) { .nonnull = false }), index3354, ((panda$core$Bit) { false }));
            panda$core$String* $tmp3367 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) p_rawType)->name, $tmp3366);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position($tmp3364, $tmp3367, ((panda$core$Int64) { 10 }), p_position);
            org$pandalanguage$pandac$IRNode* $tmp3368 = org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, p_expr, $tmp3364);
            base3363 = $tmp3368;
            if (((panda$core$Bit) { base3363 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$String$Index $tmp3370 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(((org$pandalanguage$pandac$Symbol*) p_rawType)->name, ((panda$core$String$Index) index3354.value));
            panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp3369, ((panda$core$String$Index$nullable) { $tmp3370, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$core$String* $tmp3371 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) p_rawType)->name, $tmp3369);
            org$pandalanguage$pandac$IRNode* $tmp3372 = org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$String$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, base3363, $tmp3371);
            return $tmp3372;
        }
        }
    }
    }
    org$pandalanguage$pandac$Type* $tmp3374 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, p_rawType);
    type3373 = $tmp3374;
    if (((panda$core$Bit) { type3373 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Int64$nullable $tmp3375 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, value3352, type3373);
    if (((panda$core$Bit) { $tmp3375.nonnull }).value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3376 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, value3352, type3373);
        return $tmp3376;
    }
    }
    panda$core$Bit $tmp3377 = org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, value3352, type3373);
    if ($tmp3377.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3378 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, value3352, p_position, ((panda$core$Bit) { true }), type3373);
        return $tmp3378;
    }
    }
    else {
    {
        panda$core$String* $tmp3380 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3379, ((panda$core$Object*) value3352->type));
        panda$core$String* $tmp3382 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3380, &$s3381);
        panda$core$String* $tmp3384 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3383, ((panda$core$Object*) type3373));
        panda$core$String* $tmp3386 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3384, &$s3385);
        panda$core$String* $tmp3387 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3382, $tmp3386);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp3387);
        return NULL;
    }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_c) {
    panda$core$Bit $tmp3388 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_c->kind, ((panda$core$Int64) { 111 }));
    PANDA_ASSERT($tmp3388.value);
    panda$core$Int64 $tmp3389 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_c->children);
    panda$core$Bit $tmp3390 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3389, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp3390.value);
    panda$core$Object* $tmp3391 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_c->children, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp3392 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_c->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Type* $tmp3393 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, ((org$pandalanguage$pandac$ASTNode*) $tmp3392));
    org$pandalanguage$pandac$IRNode* $tmp3394 = org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_c->position, ((org$pandalanguage$pandac$ASTNode*) $tmp3391), $tmp3393);
    return $tmp3394;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileNull$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_n) {
    panda$core$Bit $tmp3395 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_n->kind, ((panda$core$Int64) { 117 }));
    PANDA_ASSERT($tmp3395.value);
    org$pandalanguage$pandac$IRNode* $tmp3396 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3396->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3396->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3398 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3396, ((panda$core$Int64) { 1030 }), p_n->position, $tmp3398);
    return $tmp3396;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_e) {
    org$pandalanguage$pandac$IRNode* result3403;
    switch (p_e->kind.value) {
        case 103:
        {
            org$pandalanguage$pandac$IRNode* $tmp3399 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3399;
        }
        break;
        case 116:
        {
            org$pandalanguage$pandac$IRNode* $tmp3400 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3400->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3400->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3402 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp3400, ((panda$core$Int64) { 1011 }), p_e->position, $tmp3402, ((panda$core$Bit$wrapper*) p_e->payload)->value);
            return $tmp3400;
        }
        break;
        case 107:
        {
            org$pandalanguage$pandac$IRNode* $tmp3404 = org$pandalanguage$pandac$Compiler$compileCall$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            result3403 = $tmp3404;
            bool $tmp3405 = ((panda$core$Bit) { result3403 != NULL }).value;
            if (!$tmp3405) goto $l3406;
            org$pandalanguage$pandac$Type* $tmp3407 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp3408 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(result3403->type, $tmp3407);
            $tmp3405 = $tmp3408.value;
            $l3406:;
            panda$core$Bit $tmp3409 = { $tmp3405 };
            if ($tmp3409.value) {
            {
                panda$core$Bit $tmp3410 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result3403->kind, ((panda$core$Int64) { 1005 }));
                PANDA_ASSERT($tmp3410.value);
                panda$core$String* $tmp3411 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(((org$pandalanguage$pandac$MethodRef*) result3403->payload)->value);
                panda$core$String* $tmp3413 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3411, &$s3412);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, result3403->position, $tmp3413);
                return NULL;
            }
            }
            return result3403;
        }
        break;
        case 108:
        {
            org$pandalanguage$pandac$IRNode* $tmp3414 = org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3414;
        }
        break;
        case 106:
        {
            org$pandalanguage$pandac$IRNode* $tmp3415 = org$pandalanguage$pandac$Compiler$compileIdentifier$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3415;
        }
        break;
        case 102:
        {
            org$pandalanguage$pandac$IRNode* $tmp3416 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3416->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3416->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3418 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp3416, ((panda$core$Int64) { 1004 }), p_e->position, $tmp3418, ((panda$core$UInt64$wrapper*) p_e->payload)->value);
            return $tmp3416;
        }
        break;
        case 157:
        {
            org$pandalanguage$pandac$IRNode* $tmp3419 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3419->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3419->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3421 = org$pandalanguage$pandac$Type$RealLiteral$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Real64($tmp3419, ((panda$core$Int64) { 1045 }), p_e->position, $tmp3421, ((panda$core$Real64$wrapper*) p_e->payload)->value);
            return $tmp3419;
        }
        break;
        case 112:
        {
            org$pandalanguage$pandac$IRNode* $tmp3422 = org$pandalanguage$pandac$Compiler$compilePrefix$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3422;
        }
        break;
        case 104:
        case 105:
        {
            org$pandalanguage$pandac$IRNode* $tmp3423 = org$pandalanguage$pandac$Compiler$compileRange$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3423;
        }
        break;
        case 113:
        {
            org$pandalanguage$pandac$IRNode* $tmp3424 = org$pandalanguage$pandac$Compiler$compileString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3424;
        }
        break;
        case 109:
        case 154:
        case 110:
        {
            org$pandalanguage$pandac$IRNode* $tmp3425 = org$pandalanguage$pandac$Compiler$compileType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3425;
        }
        break;
        case 114:
        {
            org$pandalanguage$pandac$IRNode* $tmp3426 = org$pandalanguage$pandac$Compiler$compileSelf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3426;
        }
        break;
        case 115:
        {
            org$pandalanguage$pandac$IRNode* $tmp3427 = org$pandalanguage$pandac$Compiler$compileSuper$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3427;
        }
        break;
        case 111:
        {
            org$pandalanguage$pandac$IRNode* $tmp3428 = org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3428;
        }
        break;
        case 117:
        {
            org$pandalanguage$pandac$IRNode* $tmp3429 = org$pandalanguage$pandac$Compiler$compileNull$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode(self, p_e);
            return $tmp3429;
        }
        break;
    }
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBlock$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_b) {
    org$pandalanguage$pandac$SymbolTable* symbols3431;
    panda$collections$Array* result3434;
    panda$collections$Iterator* stmt$Iter3437;
    org$pandalanguage$pandac$ASTNode* stmt3449;
    org$pandalanguage$pandac$IRNode* compiled3454;
    panda$core$Bit $tmp3430 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_b->kind, ((panda$core$Int64) { 126 }));
    PANDA_ASSERT($tmp3430.value);
    org$pandalanguage$pandac$SymbolTable* $tmp3432 = (org$pandalanguage$pandac$SymbolTable*) malloc(48);
    $tmp3432->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp3432->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp3432, self->symbolTable);
    symbols3431 = $tmp3432;
    self->symbolTable = symbols3431;
    panda$collections$Array* $tmp3435 = (panda$collections$Array*) malloc(40);
    $tmp3435->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3435->refCount.value = 1;
    panda$collections$Array$init($tmp3435);
    result3434 = $tmp3435;
    if (((panda$core$Bit) { p_b->children != NULL }).value) {
    {
        {
            ITable* $tmp3438 = ((panda$collections$Iterable*) p_b->children)->$class->itable;
            while ($tmp3438->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3438 = $tmp3438->next;
            }
            $fn3440 $tmp3439 = $tmp3438->methods[0];
            panda$collections$Iterator* $tmp3441 = $tmp3439(((panda$collections$Iterable*) p_b->children));
            stmt$Iter3437 = $tmp3441;
            $l3442:;
            ITable* $tmp3444 = stmt$Iter3437->$class->itable;
            while ($tmp3444->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3444 = $tmp3444->next;
            }
            $fn3446 $tmp3445 = $tmp3444->methods[0];
            panda$core$Bit $tmp3447 = $tmp3445(stmt$Iter3437);
            panda$core$Bit $tmp3448 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3447);
            if (!$tmp3448.value) goto $l3443;
            {
                ITable* $tmp3450 = stmt$Iter3437->$class->itable;
                while ($tmp3450->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3450 = $tmp3450->next;
                }
                $fn3452 $tmp3451 = $tmp3450->methods[1];
                panda$core$Object* $tmp3453 = $tmp3451(stmt$Iter3437);
                stmt3449 = ((org$pandalanguage$pandac$ASTNode*) $tmp3453);
                org$pandalanguage$pandac$IRNode* $tmp3455 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, stmt3449);
                compiled3454 = $tmp3455;
                if (((panda$core$Bit) { compiled3454 == NULL }).value) {
                {
                    panda$core$Object* $tmp3456 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(symbols3431->parents, ((panda$core$Int64) { 0 }));
                    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp3456);
                    return NULL;
                }
                }
                panda$core$Bit $tmp3457 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(compiled3454->kind, ((panda$core$Int64) { 1039 }));
                PANDA_ASSERT($tmp3457.value);
                panda$collections$Array$add$panda$collections$Array$T(result3434, ((panda$core$Object*) compiled3454));
            }
            goto $l3442;
            $l3443:;
        }
    }
    }
    panda$core$Object* $tmp3458 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(symbols3431->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp3458);
    org$pandalanguage$pandac$IRNode* $tmp3459 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3459->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3459->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3459, ((panda$core$Int64) { 1000 }), p_b->position, ((panda$collections$ListView*) result3434));
    return $tmp3459;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_i) {
    org$pandalanguage$pandac$IRNode* test3469;
    org$pandalanguage$pandac$IRNode* ifTrue3474;
    panda$collections$Array* children3477;
    org$pandalanguage$pandac$IRNode* ifFalse3482;
    panda$core$Bit $tmp3461 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_i->kind, ((panda$core$Int64) { 118 }));
    PANDA_ASSERT($tmp3461.value);
    panda$core$Int64 $tmp3463 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_i->children);
    panda$core$Bit $tmp3464 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3463, ((panda$core$Int64) { 2 }));
    bool $tmp3462 = $tmp3464.value;
    if ($tmp3462) goto $l3465;
    panda$core$Int64 $tmp3466 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_i->children);
    panda$core$Bit $tmp3467 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3466, ((panda$core$Int64) { 3 }));
    $tmp3462 = $tmp3467.value;
    $l3465:;
    panda$core$Bit $tmp3468 = { $tmp3462 };
    PANDA_ASSERT($tmp3468.value);
    panda$core$Object* $tmp3470 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_i->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3471 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3470));
    org$pandalanguage$pandac$Type* $tmp3472 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp3473 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3471, $tmp3472);
    test3469 = $tmp3473;
    if (((panda$core$Bit) { test3469 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Object* $tmp3475 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_i->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp3476 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3475));
    ifTrue3474 = $tmp3476;
    if (((panda$core$Bit) { ifTrue3474 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3478 = (panda$collections$Array*) malloc(40);
    $tmp3478->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3478->refCount.value = 1;
    panda$collections$Array$init($tmp3478);
    children3477 = $tmp3478;
    panda$collections$Array$add$panda$collections$Array$T(children3477, ((panda$core$Object*) test3469));
    panda$collections$Array$add$panda$collections$Array$T(children3477, ((panda$core$Object*) ifTrue3474));
    panda$core$Int64 $tmp3480 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_i->children);
    panda$core$Bit $tmp3481 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3480, ((panda$core$Int64) { 3 }));
    if ($tmp3481.value) {
    {
        panda$core$Object* $tmp3483 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_i->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$IRNode* $tmp3484 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3483));
        ifFalse3482 = $tmp3484;
        if (((panda$core$Bit) { ifFalse3482 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children3477, ((panda$core$Object*) ifFalse3482));
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3485 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3485->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3485->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3485, ((panda$core$Int64) { 1012 }), p_i->position, ((panda$collections$ListView*) children3477));
    return $tmp3485;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileRangeFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, panda$core$String* p_label, org$pandalanguage$pandac$ASTNode* p_astTarget, org$pandalanguage$pandac$IRNode* p_rawList, org$pandalanguage$pandac$ASTNode* p_body) {
    org$pandalanguage$pandac$Type* elementType3487;
    org$pandalanguage$pandac$IRNode* list3488;
    org$pandalanguage$pandac$Type* t3500;
    org$pandalanguage$pandac$Compiler$CompileTargetResult* target3533;
    org$pandalanguage$pandac$IRNode* body3535;
    panda$collections$Array* children3537;
    panda$core$Bit $tmp3491 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_astTarget->kind, ((panda$core$Int64) { 106 }));
    bool $tmp3490 = $tmp3491.value;
    if (!$tmp3490) goto $l3492;
    $tmp3490 = ((panda$core$Bit) { p_astTarget->children != NULL }).value;
    $l3492:;
    panda$core$Bit $tmp3493 = { $tmp3490 };
    bool $tmp3489 = $tmp3493.value;
    if (!$tmp3489) goto $l3494;
    panda$core$Int64 $tmp3495 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_astTarget->children);
    panda$core$Bit $tmp3496 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3495, ((panda$core$Int64) { 0 }));
    $tmp3489 = $tmp3496.value;
    $l3494:;
    panda$core$Bit $tmp3497 = { $tmp3489 };
    if ($tmp3497.value) {
    {
        panda$core$Int64 $tmp3498 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_astTarget->children);
        panda$core$Bit $tmp3499 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3498, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp3499.value);
        panda$core$Object* $tmp3501 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_astTarget->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Type* $tmp3502 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, ((org$pandalanguage$pandac$ASTNode*) $tmp3501));
        org$pandalanguage$pandac$Type* $tmp3503 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, $tmp3502);
        t3500 = $tmp3503;
        panda$core$Bit $tmp3504 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_rawList->kind, ((panda$core$Int64) { 1031 }));
        if ($tmp3504.value) {
        {
            panda$core$Int64 $tmp3505 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_rawList->children);
            panda$core$Bit $tmp3506 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3505, ((panda$core$Int64) { 2 }));
            if ($tmp3506.value) {
            {
                org$pandalanguage$pandac$Type* $tmp3507 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3500);
                org$pandalanguage$pandac$IRNode* $tmp3508 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, $tmp3507);
                list3488 = $tmp3508;
            }
            }
            else {
            {
                panda$core$Int64 $tmp3509 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_rawList->children);
                panda$core$Bit $tmp3510 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3509, ((panda$core$Int64) { 3 }));
                PANDA_ASSERT($tmp3510.value);
                org$pandalanguage$pandac$Type* $tmp3511 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$Type* $tmp3512 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3500, $tmp3511);
                org$pandalanguage$pandac$IRNode* $tmp3513 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, $tmp3512);
                list3488 = $tmp3513;
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp3514 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(p_rawList->type);
        if ($tmp3514.value) {
        {
            panda$core$Object* $tmp3515 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_rawList->type->subtypes, ((panda$core$Int64) { 2 }));
            org$pandalanguage$pandac$Type* $tmp3516 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3500, ((org$pandalanguage$pandac$Type*) $tmp3515));
            org$pandalanguage$pandac$IRNode* $tmp3517 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, $tmp3516);
            list3488 = $tmp3517;
        }
        }
        else {
        org$pandalanguage$pandac$Type* $tmp3518 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3500);
        panda$core$Int64$nullable $tmp3519 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_rawList, $tmp3518);
        if (((panda$core$Bit) { $tmp3519.nonnull }).value) {
        {
            org$pandalanguage$pandac$Type* $tmp3520 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3500);
            org$pandalanguage$pandac$IRNode* $tmp3521 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, $tmp3520);
            list3488 = $tmp3521;
        }
        }
        else {
        {
            org$pandalanguage$pandac$Type* $tmp3522 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$Type* $tmp3523 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3500, $tmp3522);
            org$pandalanguage$pandac$IRNode* $tmp3524 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, $tmp3523);
            list3488 = $tmp3524;
        }
        }
        }
        }
    }
    }
    else {
    {
        org$pandalanguage$pandac$IRNode* $tmp3525 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList);
        list3488 = $tmp3525;
    }
    }
    if (((panda$core$Bit) { list3488 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp3526 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(list3488->type->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp3526.value) {
    {
        panda$core$Object* $tmp3527 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(list3488->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp3528 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3527)->typeKind, ((panda$core$Int64) { 21 }));
        PANDA_ASSERT($tmp3528.value);
        panda$core$Object* $tmp3529 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(list3488->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3530 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$Type*) $tmp3529)->subtypes, ((panda$core$Int64) { 1 }));
        elementType3487 = ((org$pandalanguage$pandac$Type*) $tmp3530);
    }
    }
    else {
    {
        panda$core$Bit $tmp3531 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(list3488->type->typeKind, ((panda$core$Int64) { 21 }));
        PANDA_ASSERT($tmp3531.value);
        panda$core$Object* $tmp3532 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(list3488->type->subtypes, ((panda$core$Int64) { 1 }));
        elementType3487 = ((org$pandalanguage$pandac$Type*) $tmp3532);
    }
    }
    org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp3534 = org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(self, p_astTarget, ((panda$core$Int64) { 10001 }), NULL, elementType3487);
    target3533 = $tmp3534;
    if (((panda$core$Bit) { target3533 == NULL }).value) {
    {
        return NULL;
    }
    }
    PANDA_ASSERT(((panda$core$Bit) { target3533->value == NULL }).value);
    org$pandalanguage$pandac$IRNode* $tmp3536 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_body);
    body3535 = $tmp3536;
    if (((panda$core$Bit) { body3535 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3538 = (panda$collections$Array*) malloc(40);
    $tmp3538->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3538->refCount.value = 1;
    panda$collections$Array$init($tmp3538);
    children3537 = $tmp3538;
    panda$collections$Array$add$panda$collections$Array$T(children3537, ((panda$core$Object*) target3533->target));
    panda$collections$Array$add$panda$collections$Array$T(children3537, ((panda$core$Object*) list3488));
    panda$collections$Array$add$panda$collections$Array$T(children3537, ((panda$core$Object*) body3535));
    org$pandalanguage$pandac$IRNode* $tmp3540 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3540->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3540->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3540, ((panda$core$Int64) { 1029 }), p_position, ((panda$core$Object*) p_label), ((panda$collections$ListView*) children3537));
    return $tmp3540;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIteratorFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, panda$core$String* p_label, org$pandalanguage$pandac$ASTNode* p_astTarget, org$pandalanguage$pandac$IRNode* p_iterator, org$pandalanguage$pandac$ASTNode* p_body) {
    org$pandalanguage$pandac$Compiler$CompileTargetResult* target3549;
    org$pandalanguage$pandac$Variable* targetVar3553;
    panda$collections$Array* subtypes3554;
    org$pandalanguage$pandac$Type* iterType3558;
    org$pandalanguage$pandac$Variable* iter3569;
    panda$collections$Array* statements3574;
    panda$collections$Array* declChildren3577;
    panda$collections$Array* varChildren3582;
    panda$collections$Array* whileChildren3589;
    org$pandalanguage$pandac$IRNode* done3592;
    org$pandalanguage$pandac$IRNode* notCall3599;
    panda$collections$Array* valueDeclChildren3604;
    org$pandalanguage$pandac$IRNode* next3609;
    panda$collections$Array* valueVarChildren3616;
    org$pandalanguage$pandac$IRNode* block3621;
    panda$collections$Array* blockChildren3623;
    panda$core$Bit $tmp3543 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_iterator->type->typeKind, ((panda$core$Int64) { 21 }));
    bool $tmp3542 = $tmp3543.value;
    if (!$tmp3542) goto $l3544;
    panda$core$Object* $tmp3545 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_iterator->type->subtypes, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp3546 = org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp3547 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3545), $tmp3546);
    $tmp3542 = $tmp3547.value;
    $l3544:;
    panda$core$Bit $tmp3548 = { $tmp3542 };
    PANDA_ASSERT($tmp3548.value);
    panda$core$Object* $tmp3550 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_iterator->type->subtypes, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp3551 = org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(self, p_astTarget, ((panda$core$Int64) { 10001 }), NULL, ((org$pandalanguage$pandac$Type*) $tmp3550));
    target3549 = $tmp3551;
    if (((panda$core$Bit) { target3549 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp3552 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(target3549->target->kind, ((panda$core$Int64) { 1016 }));
    PANDA_ASSERT($tmp3552.value);
    targetVar3553 = ((org$pandalanguage$pandac$Variable*) target3549->target->payload);
    panda$collections$Array* $tmp3555 = (panda$collections$Array*) malloc(40);
    $tmp3555->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3555->refCount.value = 1;
    panda$collections$Array$init($tmp3555);
    subtypes3554 = $tmp3555;
    org$pandalanguage$pandac$Type* $tmp3557 = org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type();
    panda$collections$Array$add$panda$collections$Array$T(subtypes3554, ((panda$core$Object*) $tmp3557));
    panda$collections$Array$add$panda$collections$Array$T(subtypes3554, ((panda$core$Object*) target3549->target->type));
    org$pandalanguage$pandac$Type* $tmp3559 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp3559->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp3559->refCount.value = 1;
    panda$core$Object* $tmp3561 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(subtypes3554, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3562 = org$pandalanguage$pandac$Type$convert$R$panda$core$String(((org$pandalanguage$pandac$Type*) $tmp3561));
    panda$core$String* $tmp3564 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3562, &$s3563);
    panda$core$Object* $tmp3565 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(subtypes3554, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp3566 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3564, ((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp3565)));
    panda$core$String* $tmp3568 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3566, &$s3567);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp3559, $tmp3568, ((panda$core$Int64) { 21 }), p_position, ((panda$collections$ListView*) subtypes3554), ((panda$core$Bit) { true }));
    iterType3558 = $tmp3559;
    org$pandalanguage$pandac$Variable* $tmp3570 = (org$pandalanguage$pandac$Variable*) malloc(88);
    $tmp3570->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
    $tmp3570->refCount.value = 1;
    panda$core$String* $tmp3573 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) targetVar3553)->name, &$s3572);
    org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type($tmp3570, p_iterator->position, ((panda$core$Int64) { 10001 }), $tmp3573, iterType3558);
    iter3569 = $tmp3570;
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->symbolTable, ((org$pandalanguage$pandac$Symbol*) iter3569));
    panda$collections$Array* $tmp3575 = (panda$collections$Array*) malloc(40);
    $tmp3575->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3575->refCount.value = 1;
    panda$collections$Array$init($tmp3575);
    statements3574 = $tmp3575;
    panda$collections$Array* $tmp3578 = (panda$collections$Array*) malloc(40);
    $tmp3578->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3578->refCount.value = 1;
    panda$collections$Array$init($tmp3578);
    declChildren3577 = $tmp3578;
    org$pandalanguage$pandac$IRNode* $tmp3580 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3580->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3580->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3580, ((panda$core$Int64) { 1016 }), p_iterator->position, iter3569->type, iter3569);
    panda$collections$Array$add$panda$collections$Array$T(declChildren3577, ((panda$core$Object*) $tmp3580));
    panda$collections$Array$add$panda$collections$Array$T(declChildren3577, ((panda$core$Object*) p_iterator));
    panda$collections$Array* $tmp3583 = (panda$collections$Array*) malloc(40);
    $tmp3583->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3583->refCount.value = 1;
    panda$collections$Array$init($tmp3583);
    varChildren3582 = $tmp3583;
    org$pandalanguage$pandac$IRNode* $tmp3585 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3585->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3585->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3585, ((panda$core$Int64) { 1021 }), ((org$pandalanguage$pandac$Symbol*) iter3569)->position, ((panda$collections$ListView*) declChildren3577));
    panda$collections$Array$add$panda$collections$Array$T(varChildren3582, ((panda$core$Object*) $tmp3585));
    org$pandalanguage$pandac$IRNode* $tmp3587 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3587->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3587->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3587, ((panda$core$Int64) { 1018 }), ((org$pandalanguage$pandac$Symbol*) iter3569)->position, ((panda$collections$ListView*) varChildren3582));
    panda$collections$Array$add$panda$collections$Array$T(statements3574, ((panda$core$Object*) $tmp3587));
    panda$collections$Array* $tmp3590 = (panda$collections$Array*) malloc(40);
    $tmp3590->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3590->refCount.value = 1;
    panda$collections$Array$init($tmp3590);
    whileChildren3589 = $tmp3590;
    org$pandalanguage$pandac$IRNode* $tmp3593 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3593->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3593->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3593, ((panda$core$Int64) { 1016 }), ((org$pandalanguage$pandac$Symbol*) iter3569)->position, iter3569->type, iter3569);
    panda$collections$Array* $tmp3596 = (panda$collections$Array*) malloc(40);
    $tmp3596->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3596->refCount.value = 1;
    panda$collections$Array$init($tmp3596);
    org$pandalanguage$pandac$IRNode* $tmp3598 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3593, &$s3595, ((panda$collections$ListView*) $tmp3596), NULL);
    done3592 = $tmp3598;
    if (((panda$core$Bit) { done3592 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3601 = (panda$collections$Array*) malloc(40);
    $tmp3601->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3601->refCount.value = 1;
    panda$collections$Array$init($tmp3601);
    org$pandalanguage$pandac$IRNode* $tmp3603 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, done3592, &$s3600, ((panda$collections$ListView*) $tmp3601), NULL);
    notCall3599 = $tmp3603;
    if (((panda$core$Bit) { notCall3599 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(whileChildren3589, ((panda$core$Object*) notCall3599));
    panda$collections$Array* $tmp3605 = (panda$collections$Array*) malloc(40);
    $tmp3605->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3605->refCount.value = 1;
    panda$collections$Array$init($tmp3605);
    valueDeclChildren3604 = $tmp3605;
    org$pandalanguage$pandac$IRNode* $tmp3607 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3607->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3607->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3607, ((panda$core$Int64) { 1016 }), p_iterator->position, targetVar3553->type, targetVar3553);
    panda$collections$Array$add$panda$collections$Array$T(valueDeclChildren3604, ((panda$core$Object*) $tmp3607));
    org$pandalanguage$pandac$IRNode* $tmp3610 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3610->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3610->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3610, ((panda$core$Int64) { 1016 }), p_iterator->position, iter3569->type, iter3569);
    panda$collections$Array* $tmp3613 = (panda$collections$Array*) malloc(40);
    $tmp3613->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3613->refCount.value = 1;
    panda$collections$Array$init($tmp3613);
    org$pandalanguage$pandac$IRNode* $tmp3615 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3610, &$s3612, ((panda$collections$ListView*) $tmp3613), NULL);
    next3609 = $tmp3615;
    PANDA_ASSERT(((panda$core$Bit) { next3609 != NULL }).value);
    panda$collections$Array$add$panda$collections$Array$T(valueDeclChildren3604, ((panda$core$Object*) next3609));
    panda$collections$Array* $tmp3617 = (panda$collections$Array*) malloc(40);
    $tmp3617->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3617->refCount.value = 1;
    panda$collections$Array$init($tmp3617);
    valueVarChildren3616 = $tmp3617;
    org$pandalanguage$pandac$IRNode* $tmp3619 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3619->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3619->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3619, ((panda$core$Int64) { 1021 }), p_iterator->position, ((panda$collections$ListView*) valueDeclChildren3604));
    panda$collections$Array$add$panda$collections$Array$T(valueVarChildren3616, ((panda$core$Object*) $tmp3619));
    org$pandalanguage$pandac$IRNode* $tmp3622 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_body);
    block3621 = $tmp3622;
    if (((panda$core$Bit) { block3621 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3624 = (panda$collections$Array*) malloc(40);
    $tmp3624->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3624->refCount.value = 1;
    panda$collections$Array$init($tmp3624);
    blockChildren3623 = $tmp3624;
    org$pandalanguage$pandac$IRNode* $tmp3626 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3626->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3626->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3626, ((panda$core$Int64) { 1018 }), p_iterator->position, ((panda$collections$ListView*) valueVarChildren3616));
    panda$collections$Array$add$panda$collections$Array$T(blockChildren3623, ((panda$core$Object*) $tmp3626));
    panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(blockChildren3623, ((panda$collections$CollectionView*) block3621->children));
    org$pandalanguage$pandac$IRNode* $tmp3628 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3628->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3628->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3628, ((panda$core$Int64) { 1000 }), block3621->position, ((panda$collections$ListView*) blockChildren3623));
    block3621 = $tmp3628;
    panda$collections$Array$add$panda$collections$Array$T(whileChildren3589, ((panda$core$Object*) block3621));
    org$pandalanguage$pandac$IRNode* $tmp3630 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3630->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3630->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3630, ((panda$core$Int64) { 1013 }), p_iterator->position, ((panda$core$Object*) p_label), ((panda$collections$ListView*) whileChildren3589));
    panda$collections$Array$add$panda$collections$Array$T(statements3574, ((panda$core$Object*) $tmp3630));
    org$pandalanguage$pandac$IRNode* $tmp3632 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3632->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3632->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3632, ((panda$core$Int64) { 1000 }), p_iterator->position, ((panda$collections$ListView*) statements3574));
    return $tmp3632;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileFor$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_f) {
    org$pandalanguage$pandac$IRNode* list3637;
    org$pandalanguage$pandac$SymbolTable* symbols3640;
    org$pandalanguage$pandac$IRNode* result3643;
    panda$core$Bit found3657;
    panda$collections$Iterator* intf$Iter3658;
    org$pandalanguage$pandac$Type* intf3671;
    org$pandalanguage$pandac$IRNode* iterator3683;
    org$pandalanguage$pandac$IRNode* iterable3695;
    org$pandalanguage$pandac$IRNode* iterator3697;
    panda$core$Bit $tmp3634 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_f->kind, ((panda$core$Int64) { 119 }));
    PANDA_ASSERT($tmp3634.value);
    panda$core$Int64 $tmp3635 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_f->children);
    panda$core$Bit $tmp3636 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3635, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp3636.value);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loops, ((panda$core$Object*) ((panda$core$String*) p_f->payload)));
    panda$core$Object* $tmp3638 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp3639 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3638));
    list3637 = $tmp3639;
    if (((panda$core$Bit) { list3637 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp3641 = (org$pandalanguage$pandac$SymbolTable*) malloc(48);
    $tmp3641->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp3641->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp3641, self->symbolTable);
    symbols3640 = $tmp3641;
    self->symbolTable = symbols3640;
    panda$core$Bit $tmp3646 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(list3637->kind, ((panda$core$Int64) { 1031 }));
    bool $tmp3645 = $tmp3646.value;
    if ($tmp3645) goto $l3647;
    panda$core$Bit $tmp3648 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(list3637->type);
    $tmp3645 = $tmp3648.value;
    $l3647:;
    panda$core$Bit $tmp3649 = { $tmp3645 };
    bool $tmp3644 = $tmp3649.value;
    if ($tmp3644) goto $l3650;
    panda$core$Bit $tmp3651 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(list3637->type);
    $tmp3644 = $tmp3651.value;
    $l3650:;
    panda$core$Bit $tmp3652 = { $tmp3644 };
    if ($tmp3652.value) {
    {
        panda$core$Object* $tmp3653 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3654 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$IRNode* $tmp3655 = org$pandalanguage$pandac$Compiler$compileRangeFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->position, ((panda$core$String*) p_f->payload), ((org$pandalanguage$pandac$ASTNode*) $tmp3653), list3637, ((org$pandalanguage$pandac$ASTNode*) $tmp3654));
        result3643 = $tmp3655;
    }
    }
    else {
    {
        org$pandalanguage$pandac$IRNode* $tmp3656 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, list3637);
        list3637 = $tmp3656;
        if (((panda$core$Bit) { list3637 == NULL }).value) {
        {
            return NULL;
        }
        }
        found3657 = ((panda$core$Bit) { false });
        {
            panda$collections$Set* $tmp3659 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self, list3637->type);
            ITable* $tmp3660 = ((panda$collections$Iterable*) $tmp3659)->$class->itable;
            while ($tmp3660->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3660 = $tmp3660->next;
            }
            $fn3662 $tmp3661 = $tmp3660->methods[0];
            panda$collections$Iterator* $tmp3663 = $tmp3661(((panda$collections$Iterable*) $tmp3659));
            intf$Iter3658 = $tmp3663;
            $l3664:;
            ITable* $tmp3666 = intf$Iter3658->$class->itable;
            while ($tmp3666->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3666 = $tmp3666->next;
            }
            $fn3668 $tmp3667 = $tmp3666->methods[0];
            panda$core$Bit $tmp3669 = $tmp3667(intf$Iter3658);
            panda$core$Bit $tmp3670 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3669);
            if (!$tmp3670.value) goto $l3665;
            {
                ITable* $tmp3672 = intf$Iter3658->$class->itable;
                while ($tmp3672->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3672 = $tmp3672->next;
                }
                $fn3674 $tmp3673 = $tmp3672->methods[1];
                panda$core$Object* $tmp3675 = $tmp3673(intf$Iter3658);
                intf3671 = ((org$pandalanguage$pandac$Type*) $tmp3675);
                panda$core$Bit $tmp3677 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(intf3671->typeKind, ((panda$core$Int64) { 21 }));
                bool $tmp3676 = $tmp3677.value;
                if (!$tmp3676) goto $l3678;
                panda$core$Object* $tmp3679 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(intf3671->subtypes, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp3680 = org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp3681 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3679), $tmp3680);
                $tmp3676 = $tmp3681.value;
                $l3678:;
                panda$core$Bit $tmp3682 = { $tmp3676 };
                if ($tmp3682.value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp3684 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, list3637, intf3671);
                    iterator3683 = $tmp3684;
                    panda$core$Object* $tmp3685 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
                    panda$core$Object* $tmp3686 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 2 }));
                    org$pandalanguage$pandac$IRNode* $tmp3687 = org$pandalanguage$pandac$Compiler$compileIteratorFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->position, ((panda$core$String*) p_f->payload), ((org$pandalanguage$pandac$ASTNode*) $tmp3685), iterator3683, ((org$pandalanguage$pandac$ASTNode*) $tmp3686));
                    result3643 = $tmp3687;
                    found3657 = ((panda$core$Bit) { true });
                    goto $l3665;
                }
                }
                panda$core$Bit $tmp3689 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(intf3671->typeKind, ((panda$core$Int64) { 21 }));
                bool $tmp3688 = $tmp3689.value;
                if (!$tmp3688) goto $l3690;
                panda$core$Object* $tmp3691 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(intf3671->subtypes, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp3692 = org$pandalanguage$pandac$Type$Iterable$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp3693 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3691), $tmp3692);
                $tmp3688 = $tmp3693.value;
                $l3690:;
                panda$core$Bit $tmp3694 = { $tmp3688 };
                if ($tmp3694.value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp3696 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, list3637, intf3671);
                    iterable3695 = $tmp3696;
                    panda$collections$Array* $tmp3699 = (panda$collections$Array*) malloc(40);
                    $tmp3699->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp3699->refCount.value = 1;
                    panda$collections$Array$init($tmp3699);
                    org$pandalanguage$pandac$IRNode* $tmp3701 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, iterable3695, &$s3698, ((panda$collections$ListView*) $tmp3699));
                    iterator3697 = $tmp3701;
                    panda$core$Object* $tmp3702 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
                    panda$core$Object* $tmp3703 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 2 }));
                    org$pandalanguage$pandac$IRNode* $tmp3704 = org$pandalanguage$pandac$Compiler$compileIteratorFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->position, ((panda$core$String*) p_f->payload), ((org$pandalanguage$pandac$ASTNode*) $tmp3702), iterator3697, ((org$pandalanguage$pandac$ASTNode*) $tmp3703));
                    result3643 = $tmp3704;
                    found3657 = ((panda$core$Bit) { true });
                    goto $l3665;
                }
                }
            }
            goto $l3664;
            $l3665:;
        }
        panda$core$Bit $tmp3705 = panda$core$Bit$$NOT$R$panda$core$Bit(found3657);
        if ($tmp3705.value) {
        {
            panda$core$String* $tmp3707 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3706, ((panda$core$Object*) list3637->type));
            panda$core$String* $tmp3709 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3707, &$s3708);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, list3637->position, $tmp3709);
            return NULL;
        }
        }
    }
    }
    panda$core$Object* $tmp3710 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(symbols3640->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp3710);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
    return result3643;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileWhile$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_w) {
    org$pandalanguage$pandac$IRNode* test3714;
    org$pandalanguage$pandac$IRNode* stmt3719;
    panda$collections$Array* children3722;
    panda$core$Bit $tmp3711 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_w->kind, ((panda$core$Int64) { 121 }));
    PANDA_ASSERT($tmp3711.value);
    panda$core$Int64 $tmp3712 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Bit $tmp3713 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3712, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp3713.value);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loops, ((panda$core$Object*) ((panda$core$String*) p_w->payload)));
    panda$core$Object* $tmp3715 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3716 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3715));
    org$pandalanguage$pandac$Type* $tmp3717 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp3718 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3716, $tmp3717);
    test3714 = $tmp3718;
    if (((panda$core$Bit) { test3714 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$core$Object* $tmp3720 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp3721 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3720));
    stmt3719 = $tmp3721;
    if (((panda$core$Bit) { stmt3719 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$collections$Array* $tmp3723 = (panda$collections$Array*) malloc(40);
    $tmp3723->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3723->refCount.value = 1;
    panda$collections$Array$init$panda$core$Int64($tmp3723, ((panda$core$Int64) { 2 }));
    children3722 = $tmp3723;
    panda$collections$Array$add$panda$collections$Array$T(children3722, ((panda$core$Object*) test3714));
    panda$collections$Array$add$panda$collections$Array$T(children3722, ((panda$core$Object*) stmt3719));
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
    org$pandalanguage$pandac$IRNode* $tmp3725 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3725->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3725->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3725, ((panda$core$Int64) { 1013 }), p_w->position, p_w->payload, ((panda$collections$ListView*) children3722));
    return $tmp3725;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileDo$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_d) {
    org$pandalanguage$pandac$IRNode* stmt3730;
    org$pandalanguage$pandac$IRNode* test3733;
    panda$collections$Array* children3738;
    panda$core$Bit $tmp3727 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_d->kind, ((panda$core$Int64) { 120 }));
    PANDA_ASSERT($tmp3727.value);
    panda$core$Int64 $tmp3728 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp3729 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3728, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp3729.value);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loops, ((panda$core$Object*) ((panda$core$String*) p_d->payload)));
    panda$core$Object* $tmp3731 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3732 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3731));
    stmt3730 = $tmp3732;
    if (((panda$core$Bit) { stmt3730 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$core$Object* $tmp3734 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp3735 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3734));
    org$pandalanguage$pandac$Type* $tmp3736 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp3737 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3735, $tmp3736);
    test3733 = $tmp3737;
    if (((panda$core$Bit) { test3733 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$collections$Array* $tmp3739 = (panda$collections$Array*) malloc(40);
    $tmp3739->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3739->refCount.value = 1;
    panda$collections$Array$init$panda$core$Int64($tmp3739, ((panda$core$Int64) { 2 }));
    children3738 = $tmp3739;
    panda$collections$Array$add$panda$collections$Array$T(children3738, ((panda$core$Object*) stmt3730));
    panda$collections$Array$add$panda$collections$Array$T(children3738, ((panda$core$Object*) test3733));
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
    org$pandalanguage$pandac$IRNode* $tmp3741 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3741->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3741->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3741, ((panda$core$Int64) { 1014 }), p_d->position, p_d->payload, ((panda$collections$ListView*) children3738));
    return $tmp3741;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileLoop$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_l) {
    org$pandalanguage$pandac$IRNode* stmt3746;
    panda$collections$Array* children3749;
    panda$core$Bit $tmp3743 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_l->kind, ((panda$core$Int64) { 122 }));
    PANDA_ASSERT($tmp3743.value);
    panda$core$Int64 $tmp3744 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_l->children);
    panda$core$Bit $tmp3745 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3744, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3745.value);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loops, ((panda$core$Object*) ((panda$core$String*) p_l->payload)));
    panda$core$Object* $tmp3747 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_l->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3748 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3747));
    stmt3746 = $tmp3748;
    if (((panda$core$Bit) { stmt3746 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$collections$Array* $tmp3750 = (panda$collections$Array*) malloc(40);
    $tmp3750->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3750->refCount.value = 1;
    panda$collections$Array$init$panda$core$Int64($tmp3750, ((panda$core$Int64) { 1 }));
    children3749 = $tmp3750;
    panda$collections$Array$add$panda$collections$Array$T(children3749, ((panda$core$Object*) stmt3746));
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
    org$pandalanguage$pandac$IRNode* $tmp3752 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3752->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3752->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3752, ((panda$core$Int64) { 1015 }), p_l->position, p_l->payload, ((panda$collections$ListView*) children3749));
    return $tmp3752;
}
org$pandalanguage$pandac$Compiler$CompileTargetResult* org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_t, panda$core$Int64 p_kind, org$pandalanguage$pandac$IRNode* p_rawValue, org$pandalanguage$pandac$Type* p_valueType) {
    org$pandalanguage$pandac$IRNode* value3754;
    org$pandalanguage$pandac$Type* type3758;
    org$pandalanguage$pandac$Variable* v3774;
    value3754 = p_rawValue;
    bool $tmp3755 = ((panda$core$Bit) { value3754 == NULL }).value;
    if ($tmp3755) goto $l3756;
    $tmp3755 = ((panda$core$Bit) { p_valueType == NULL }).value;
    $l3756:;
    panda$core$Bit $tmp3757 = { $tmp3755 };
    PANDA_ASSERT($tmp3757.value);
    switch (p_t->kind.value) {
        case 106:
        {
            bool $tmp3759 = ((panda$core$Bit) { p_t->children != NULL }).value;
            if (!$tmp3759) goto $l3760;
            panda$core$Int64 $tmp3761 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_t->children);
            panda$core$Bit $tmp3762 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp3761, ((panda$core$Int64) { 0 }));
            $tmp3759 = $tmp3762.value;
            $l3760:;
            panda$core$Bit $tmp3763 = { $tmp3759 };
            if ($tmp3763.value) {
            {
                panda$core$Int64 $tmp3764 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_t->children);
                panda$core$Bit $tmp3765 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3764, ((panda$core$Int64) { 1 }));
                PANDA_ASSERT($tmp3765.value);
                panda$core$Object* $tmp3766 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp3767 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, ((org$pandalanguage$pandac$ASTNode*) $tmp3766));
                org$pandalanguage$pandac$Type* $tmp3768 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, $tmp3767);
                type3758 = $tmp3768;
            }
            }
            else {
            if (((panda$core$Bit) { value3754 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp3769 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, value3754);
                value3754 = $tmp3769;
                if (((panda$core$Bit) { value3754 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$Type* $tmp3770 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, value3754);
                type3758 = $tmp3770;
            }
            }
            else {
            if (((panda$core$Bit) { p_valueType != NULL }).value) {
            {
                type3758 = p_valueType;
            }
            }
            else {
            {
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_t->position, &$s3771);
                return NULL;
            }
            }
            }
            }
            if (((panda$core$Bit) { value3754 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp3772 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, value3754, type3758);
                value3754 = $tmp3772;
                if (((panda$core$Bit) { value3754 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$core$Bit $tmp3773 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(value3754->type, type3758);
                PANDA_ASSERT($tmp3773.value);
            }
            }
            org$pandalanguage$pandac$Variable* $tmp3775 = (org$pandalanguage$pandac$Variable*) malloc(88);
            $tmp3775->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
            $tmp3775->refCount.value = 1;
            org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type($tmp3775, p_t->position, p_kind, ((panda$core$String*) p_t->payload), type3758);
            v3774 = $tmp3775;
            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->symbolTable, ((org$pandalanguage$pandac$Symbol*) v3774));
            org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp3777 = (org$pandalanguage$pandac$Compiler$CompileTargetResult*) malloc(32);
            $tmp3777->$class = (panda$core$Class*) &org$pandalanguage$pandac$Compiler$CompileTargetResult$class;
            $tmp3777->refCount.value = 1;
            org$pandalanguage$pandac$IRNode* $tmp3779 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3779->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3779->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3779, ((panda$core$Int64) { 1016 }), ((org$pandalanguage$pandac$Symbol*) v3774)->position, v3774->type, v3774);
            org$pandalanguage$pandac$Compiler$CompileTargetResult$init$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q($tmp3777, $tmp3779, value3754);
            return $tmp3777;
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
    org$pandalanguage$pandac$IRNode* value3789;
    org$pandalanguage$pandac$Compiler$CompileTargetResult* target3794;
    panda$collections$Array* children3797;
    org$pandalanguage$pandac$Variable* v3801;
    panda$core$Bit $tmp3781 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_d->kind, ((panda$core$Int64) { 129 }));
    PANDA_ASSERT($tmp3781.value);
    panda$core$Int64 $tmp3783 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp3784 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3783, ((panda$core$Int64) { 1 }));
    bool $tmp3782 = $tmp3784.value;
    if ($tmp3782) goto $l3785;
    panda$core$Int64 $tmp3786 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp3787 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3786, ((panda$core$Int64) { 2 }));
    $tmp3782 = $tmp3787.value;
    $l3785:;
    panda$core$Bit $tmp3788 = { $tmp3782 };
    PANDA_ASSERT($tmp3788.value);
    panda$core$Int64 $tmp3790 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp3791 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3790, ((panda$core$Int64) { 2 }));
    if ($tmp3791.value) {
    {
        panda$core$Object* $tmp3792 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$IRNode* $tmp3793 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3792));
        value3789 = $tmp3793;
        if (((panda$core$Bit) { value3789 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    else {
    {
        value3789 = NULL;
    }
    }
    panda$core$Object* $tmp3795 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp3796 = org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3795), p_varKind, value3789, NULL);
    target3794 = $tmp3796;
    if (((panda$core$Bit) { target3794 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3798 = (panda$collections$Array*) malloc(40);
    $tmp3798->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3798->refCount.value = 1;
    panda$collections$Array$init($tmp3798);
    children3797 = $tmp3798;
    panda$collections$Array$add$panda$collections$Array$T(children3797, ((panda$core$Object*) target3794->target));
    if (((panda$core$Bit) { target3794->value != NULL }).value) {
    {
        panda$core$Bit $tmp3800 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(target3794->target->kind, ((panda$core$Int64) { 1016 }));
        PANDA_ASSERT($tmp3800.value);
        v3801 = ((org$pandalanguage$pandac$Variable*) target3794->target->payload);
        v3801->initialValue = target3794->value;
        panda$collections$Array$add$panda$collections$Array$T(children3797, ((panda$core$Object*) target3794->value));
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3802 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3802->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3802->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3802, ((panda$core$Int64) { 1021 }), p_d->position, ((panda$collections$ListView*) children3797));
    return $tmp3802;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBreak$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_b) {
    panda$core$Bit found3805;
    panda$collections$Iterator* label$Iter3806;
    panda$core$String* label3818;
    panda$core$Bit $tmp3804 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_b->kind, ((panda$core$Int64) { 134 }));
    PANDA_ASSERT($tmp3804.value);
    if (((panda$core$Bit) { p_b->payload != NULL }).value) {
    {
        found3805 = ((panda$core$Bit) { false });
        {
            ITable* $tmp3807 = ((panda$collections$Iterable*) self->loops)->$class->itable;
            while ($tmp3807->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3807 = $tmp3807->next;
            }
            $fn3809 $tmp3808 = $tmp3807->methods[0];
            panda$collections$Iterator* $tmp3810 = $tmp3808(((panda$collections$Iterable*) self->loops));
            label$Iter3806 = $tmp3810;
            $l3811:;
            ITable* $tmp3813 = label$Iter3806->$class->itable;
            while ($tmp3813->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3813 = $tmp3813->next;
            }
            $fn3815 $tmp3814 = $tmp3813->methods[0];
            panda$core$Bit $tmp3816 = $tmp3814(label$Iter3806);
            panda$core$Bit $tmp3817 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3816);
            if (!$tmp3817.value) goto $l3812;
            {
                ITable* $tmp3819 = label$Iter3806->$class->itable;
                while ($tmp3819->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3819 = $tmp3819->next;
                }
                $fn3821 $tmp3820 = $tmp3819->methods[1];
                panda$core$Object* $tmp3822 = $tmp3820(label$Iter3806);
                label3818 = ((panda$core$String*) $tmp3822);
                bool $tmp3823 = ((panda$core$Bit) { label3818 != NULL }).value;
                if (!$tmp3823) goto $l3824;
                panda$core$Bit $tmp3828;
                if (((panda$core$Bit) { label3818 != NULL }).value) goto $l3825; else goto $l3826;
                $l3825:;
                panda$core$Bit $tmp3829 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(label3818, ((panda$core$String*) p_b->payload));
                $tmp3828 = $tmp3829;
                goto $l3827;
                $l3826:;
                $tmp3828 = ((panda$core$Bit) { false });
                goto $l3827;
                $l3827:;
                $tmp3823 = $tmp3828.value;
                $l3824:;
                panda$core$Bit $tmp3830 = { $tmp3823 };
                if ($tmp3830.value) {
                {
                    found3805 = ((panda$core$Bit) { true });
                    goto $l3812;
                }
                }
            }
            goto $l3811;
            $l3812:;
        }
        panda$core$Bit $tmp3831 = panda$core$Bit$$NOT$R$panda$core$Bit(found3805);
        if ($tmp3831.value) {
        {
            panda$core$String* $tmp3833 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3832, p_b->payload);
            panda$core$String* $tmp3835 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3833, &$s3834);
            panda$core$String* $tmp3837 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3836, p_b->payload);
            panda$core$String* $tmp3839 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3837, &$s3838);
            panda$core$String* $tmp3840 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3835, $tmp3839);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_b->position, $tmp3840);
        }
        }
    }
    }
    else {
    panda$core$Int64 $tmp3841 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loops);
    panda$core$Bit $tmp3842 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3841, ((panda$core$Int64) { 0 }));
    if ($tmp3842.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_b->position, &$s3843);
    }
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3844 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3844->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3844->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp3844, ((panda$core$Int64) { 1006 }), p_b->position, ((panda$core$String*) p_b->payload));
    return $tmp3844;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileContinue$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_c) {
    panda$core$Bit found3847;
    panda$collections$Iterator* label$Iter3848;
    panda$core$String* label3860;
    panda$core$Bit $tmp3846 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_c->kind, ((panda$core$Int64) { 135 }));
    PANDA_ASSERT($tmp3846.value);
    if (((panda$core$Bit) { p_c->payload != NULL }).value) {
    {
        found3847 = ((panda$core$Bit) { false });
        {
            ITable* $tmp3849 = ((panda$collections$Iterable*) self->loops)->$class->itable;
            while ($tmp3849->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3849 = $tmp3849->next;
            }
            $fn3851 $tmp3850 = $tmp3849->methods[0];
            panda$collections$Iterator* $tmp3852 = $tmp3850(((panda$collections$Iterable*) self->loops));
            label$Iter3848 = $tmp3852;
            $l3853:;
            ITable* $tmp3855 = label$Iter3848->$class->itable;
            while ($tmp3855->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3855 = $tmp3855->next;
            }
            $fn3857 $tmp3856 = $tmp3855->methods[0];
            panda$core$Bit $tmp3858 = $tmp3856(label$Iter3848);
            panda$core$Bit $tmp3859 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3858);
            if (!$tmp3859.value) goto $l3854;
            {
                ITable* $tmp3861 = label$Iter3848->$class->itable;
                while ($tmp3861->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3861 = $tmp3861->next;
                }
                $fn3863 $tmp3862 = $tmp3861->methods[1];
                panda$core$Object* $tmp3864 = $tmp3862(label$Iter3848);
                label3860 = ((panda$core$String*) $tmp3864);
                bool $tmp3865 = ((panda$core$Bit) { label3860 != NULL }).value;
                if (!$tmp3865) goto $l3866;
                panda$core$Bit $tmp3870;
                if (((panda$core$Bit) { label3860 != NULL }).value) goto $l3867; else goto $l3868;
                $l3867:;
                panda$core$Bit $tmp3871 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(label3860, ((panda$core$String*) p_c->payload));
                $tmp3870 = $tmp3871;
                goto $l3869;
                $l3868:;
                $tmp3870 = ((panda$core$Bit) { false });
                goto $l3869;
                $l3869:;
                $tmp3865 = $tmp3870.value;
                $l3866:;
                panda$core$Bit $tmp3872 = { $tmp3865 };
                if ($tmp3872.value) {
                {
                    found3847 = ((panda$core$Bit) { true });
                    goto $l3854;
                }
                }
            }
            goto $l3853;
            $l3854:;
        }
        panda$core$Bit $tmp3873 = panda$core$Bit$$NOT$R$panda$core$Bit(found3847);
        if ($tmp3873.value) {
        {
            panda$core$String* $tmp3875 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3874, p_c->payload);
            panda$core$String* $tmp3877 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3875, &$s3876);
            panda$core$String* $tmp3879 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3878, p_c->payload);
            panda$core$String* $tmp3881 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3879, &$s3880);
            panda$core$String* $tmp3882 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3877, $tmp3881);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_c->position, $tmp3882);
        }
        }
    }
    }
    else {
    panda$core$Int64 $tmp3883 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loops);
    panda$core$Bit $tmp3884 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3883, ((panda$core$Int64) { 0 }));
    if ($tmp3884.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_c->position, &$s3885);
    }
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3886 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3886->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3886->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp3886, ((panda$core$Int64) { 1007 }), p_c->position, ((panda$core$String*) p_c->payload));
    return $tmp3886;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileReturn$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_r) {
    org$pandalanguage$pandac$IRNode* value3900;
    panda$collections$Array* children3905;
    panda$core$Bit $tmp3888 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_r->kind, ((panda$core$Int64) { 136 }));
    PANDA_ASSERT($tmp3888.value);
    bool $tmp3889 = ((panda$core$Bit) { p_r->children != NULL }).value;
    if (!$tmp3889) goto $l3890;
    panda$core$Int64 $tmp3891 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_r->children);
    panda$core$Bit $tmp3892 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3891, ((panda$core$Int64) { 0 }));
    $tmp3889 = $tmp3892.value;
    $l3890:;
    panda$core$Bit $tmp3893 = { $tmp3889 };
    if ($tmp3893.value) {
    {
        panda$core$Int64 $tmp3894 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_r->children);
        panda$core$Bit $tmp3895 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3894, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp3895.value);
        panda$core$Object* $tmp3896 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
        org$pandalanguage$pandac$Type* $tmp3897 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp3898 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp3896)->returnType, $tmp3897);
        if ($tmp3898.value) {
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_r->position, &$s3899);
            return NULL;
        }
        }
        panda$core$Object* $tmp3901 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp3902 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3901));
        panda$core$Object* $tmp3903 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
        org$pandalanguage$pandac$IRNode* $tmp3904 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3902, ((org$pandalanguage$pandac$MethodDecl*) $tmp3903)->returnType);
        value3900 = $tmp3904;
        if (((panda$core$Bit) { value3900 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp3906 = (panda$collections$Array*) malloc(40);
        $tmp3906->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp3906->refCount.value = 1;
        panda$collections$Array$init($tmp3906);
        children3905 = $tmp3906;
        panda$collections$Array$add$panda$collections$Array$T(children3905, ((panda$core$Object*) value3900));
        org$pandalanguage$pandac$IRNode* $tmp3908 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3908->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3908->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3908, ((panda$core$Int64) { 1008 }), p_r->position, ((panda$collections$ListView*) children3905));
        return $tmp3908;
    }
    }
    panda$core$Object* $tmp3910 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
    org$pandalanguage$pandac$Type* $tmp3911 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp3912 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp3910)->returnType, $tmp3911);
    if ($tmp3912.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_r->position, &$s3913);
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3914 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3914->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3914->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp3914, ((panda$core$Int64) { 1008 }), p_r->position);
    return $tmp3914;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileAssert$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_a) {
    org$pandalanguage$pandac$IRNode* test3924;
    org$pandalanguage$pandac$ClassDecl* bit3929;
    org$pandalanguage$pandac$Symbol* value3932;
    panda$collections$Array* fieldChildren3935;
    panda$collections$Array* children3941;
    org$pandalanguage$pandac$IRNode* msg3946;
    panda$core$Bit $tmp3916 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_a->kind, ((panda$core$Int64) { 123 }));
    PANDA_ASSERT($tmp3916.value);
    panda$core$Int64 $tmp3918 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp3919 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3918, ((panda$core$Int64) { 1 }));
    bool $tmp3917 = $tmp3919.value;
    if ($tmp3917) goto $l3920;
    panda$core$Int64 $tmp3921 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp3922 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3921, ((panda$core$Int64) { 2 }));
    $tmp3917 = $tmp3922.value;
    $l3920:;
    panda$core$Bit $tmp3923 = { $tmp3917 };
    PANDA_ASSERT($tmp3923.value);
    panda$core$Object* $tmp3925 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_a->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3926 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3925));
    test3924 = $tmp3926;
    if (((panda$core$Bit) { test3924 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$Type* $tmp3927 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp3928 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, test3924, $tmp3927);
    test3924 = $tmp3928;
    if (((panda$core$Bit) { test3924 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$Type* $tmp3930 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$ClassDecl* $tmp3931 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, $tmp3930);
    bit3929 = $tmp3931;
    PANDA_ASSERT(((panda$core$Bit) { bit3929 != NULL }).value);
    org$pandalanguage$pandac$Symbol* $tmp3934 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(bit3929->symbolTable, &$s3933);
    value3932 = $tmp3934;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self, ((org$pandalanguage$pandac$FieldDecl*) value3932));
    panda$collections$Array* $tmp3936 = (panda$collections$Array*) malloc(40);
    $tmp3936->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3936->refCount.value = 1;
    panda$collections$Array$init($tmp3936);
    fieldChildren3935 = $tmp3936;
    panda$collections$Array$add$panda$collections$Array$T(fieldChildren3935, ((panda$core$Object*) test3924));
    org$pandalanguage$pandac$IRNode* $tmp3938 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3938->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3938->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3940 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3938, ((panda$core$Int64) { 1026 }), p_a->position, $tmp3940, ((panda$core$Object*) value3932), ((panda$collections$ListView*) fieldChildren3935));
    test3924 = $tmp3938;
    panda$collections$Array* $tmp3942 = (panda$collections$Array*) malloc(40);
    $tmp3942->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3942->refCount.value = 1;
    panda$collections$Array$init($tmp3942);
    children3941 = $tmp3942;
    panda$collections$Array$add$panda$collections$Array$T(children3941, ((panda$core$Object*) test3924));
    panda$core$Int64 $tmp3944 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp3945 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3944, ((panda$core$Int64) { 2 }));
    if ($tmp3945.value) {
    {
        panda$core$Object* $tmp3947 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_a->children, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$IRNode* $tmp3948 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3947));
        msg3946 = $tmp3948;
        if (((panda$core$Bit) { msg3946 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$Type* $tmp3949 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp3950 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, msg3946, $tmp3949);
        msg3946 = $tmp3950;
        if (((panda$core$Bit) { msg3946 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children3941, ((panda$core$Object*) msg3946));
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3951 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3951->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3951->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3951, ((panda$core$Int64) { 1034 }), p_a->position, ((panda$collections$ListView*) children3941));
    return $tmp3951;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileVar$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_v) {
    panda$core$Int64 nodeKind3966;
    panda$core$Int64 varKind3967;
    panda$collections$Array* decls3968;
    panda$collections$Iterator* astDecl$Iter3971;
    org$pandalanguage$pandac$ASTNode* astDecl3983;
    org$pandalanguage$pandac$IRNode* decl3988;
    panda$core$Bit $tmp3956 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 130 }));
    bool $tmp3955 = $tmp3956.value;
    if ($tmp3955) goto $l3957;
    panda$core$Bit $tmp3958 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 131 }));
    $tmp3955 = $tmp3958.value;
    $l3957:;
    panda$core$Bit $tmp3959 = { $tmp3955 };
    bool $tmp3954 = $tmp3959.value;
    if ($tmp3954) goto $l3960;
    panda$core$Bit $tmp3961 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 133 }));
    $tmp3954 = $tmp3961.value;
    $l3960:;
    panda$core$Bit $tmp3962 = { $tmp3954 };
    bool $tmp3953 = $tmp3962.value;
    if ($tmp3953) goto $l3963;
    panda$core$Bit $tmp3964 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 132 }));
    $tmp3953 = $tmp3964.value;
    $l3963:;
    panda$core$Bit $tmp3965 = { $tmp3953 };
    PANDA_ASSERT($tmp3965.value);
    switch (p_v->kind.value) {
        case 130:
        {
            nodeKind3966 = ((panda$core$Int64) { 1017 });
            varKind3967 = ((panda$core$Int64) { 10000 });
        }
        break;
        case 131:
        {
            nodeKind3966 = ((panda$core$Int64) { 1018 });
            varKind3967 = ((panda$core$Int64) { 10001 });
        }
        break;
        case 132:
        {
            nodeKind3966 = ((panda$core$Int64) { 1019 });
            varKind3967 = ((panda$core$Int64) { 10002 });
        }
        break;
        case 133:
        {
            nodeKind3966 = ((panda$core$Int64) { 1020 });
            varKind3967 = ((panda$core$Int64) { 10003 });
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
    panda$collections$Array* $tmp3969 = (panda$collections$Array*) malloc(40);
    $tmp3969->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3969->refCount.value = 1;
    panda$collections$Array$init($tmp3969);
    decls3968 = $tmp3969;
    {
        ITable* $tmp3972 = ((panda$collections$Iterable*) p_v->children)->$class->itable;
        while ($tmp3972->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3972 = $tmp3972->next;
        }
        $fn3974 $tmp3973 = $tmp3972->methods[0];
        panda$collections$Iterator* $tmp3975 = $tmp3973(((panda$collections$Iterable*) p_v->children));
        astDecl$Iter3971 = $tmp3975;
        $l3976:;
        ITable* $tmp3978 = astDecl$Iter3971->$class->itable;
        while ($tmp3978->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3978 = $tmp3978->next;
        }
        $fn3980 $tmp3979 = $tmp3978->methods[0];
        panda$core$Bit $tmp3981 = $tmp3979(astDecl$Iter3971);
        panda$core$Bit $tmp3982 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3981);
        if (!$tmp3982.value) goto $l3977;
        {
            ITable* $tmp3984 = astDecl$Iter3971->$class->itable;
            while ($tmp3984->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3984 = $tmp3984->next;
            }
            $fn3986 $tmp3985 = $tmp3984->methods[1];
            panda$core$Object* $tmp3987 = $tmp3985(astDecl$Iter3971);
            astDecl3983 = ((org$pandalanguage$pandac$ASTNode*) $tmp3987);
            org$pandalanguage$pandac$IRNode* $tmp3989 = org$pandalanguage$pandac$Compiler$compileDeclaration$org$pandalanguage$pandac$ASTNode$panda$core$Int64$R$org$pandalanguage$pandac$IRNode$Q(self, astDecl3983, varKind3967);
            decl3988 = $tmp3989;
            if (((panda$core$Bit) { decl3988 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(decls3968, ((panda$core$Object*) decl3988));
        }
        goto $l3976;
        $l3977:;
    }
    org$pandalanguage$pandac$IRNode* $tmp3990 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3990->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3990->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3990, nodeKind3966, p_v->position, ((panda$collections$ListView*) decls3968));
    return $tmp3990;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileWhenTest$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Variable* p_value, org$pandalanguage$pandac$ASTNode* p_test) {
    org$pandalanguage$pandac$IRNode* target3992;
    panda$collections$Array* callChildren3995;
    org$pandalanguage$pandac$IRNode* testValue3998;
    org$pandalanguage$pandac$IRNode* $tmp3993 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3993->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3993->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3993, ((panda$core$Int64) { 1016 }), p_test->position, p_value->type, p_value);
    target3992 = $tmp3993;
    panda$collections$Array* $tmp3996 = (panda$collections$Array*) malloc(40);
    $tmp3996->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3996->refCount.value = 1;
    panda$collections$Array$init($tmp3996);
    callChildren3995 = $tmp3996;
    org$pandalanguage$pandac$IRNode* $tmp3999 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_test);
    testValue3998 = $tmp3999;
    if (((panda$core$Bit) { testValue3998 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(callChildren3995, ((panda$core$Object*) testValue3998));
    org$pandalanguage$pandac$IRNode* $tmp4001 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target3992, &$s4000, ((panda$collections$ListView*) callChildren3995));
    return $tmp4001;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileChainedIfWhen$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Variable* p_value, org$pandalanguage$pandac$ASTNode* p_w) {
    org$pandalanguage$pandac$IRNode* test4010;
    panda$core$Range$LTpanda$core$Int64$GT $tmp4014;
    org$pandalanguage$pandac$IRNode* nextTest4030;
    panda$collections$Array* callChildren4034;
    panda$collections$Array* statements4047;
    panda$core$Range$LTpanda$core$Int64$GT $tmp4050;
    org$pandalanguage$pandac$IRNode* statement4065;
    panda$collections$Array* children4075;
    panda$core$Bit $tmp4002 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_w->kind, ((panda$core$Int64) { 124 }));
    PANDA_ASSERT($tmp4002.value);
    panda$core$Int64 $tmp4003 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Bit $tmp4004 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp4003, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4004.value);
    panda$core$Object* $tmp4005 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp4006 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp4005)->kind, ((panda$core$Int64) { 128 }));
    PANDA_ASSERT($tmp4006.value);
    panda$core$Object* $tmp4007 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Int64 $tmp4008 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$ASTNode*) $tmp4007)->children);
    panda$core$Bit $tmp4009 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp4008, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4009.value);
    panda$core$Object* $tmp4011 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp4012 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$ASTNode*) $tmp4011)->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp4013 = org$pandalanguage$pandac$Compiler$compileWhenTest$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_value, ((org$pandalanguage$pandac$ASTNode*) $tmp4012));
    test4010 = $tmp4013;
    if (((panda$core$Bit) { test4010 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Object* $tmp4015 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Int64 $tmp4016 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$ASTNode*) $tmp4015)->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp4014, ((panda$core$Int64) { 1 }), $tmp4016, ((panda$core$Bit) { false }));
    int64_t $tmp4018 = $tmp4014.min.value;
    panda$core$Int64 i4017 = { $tmp4018 };
    int64_t $tmp4020 = $tmp4014.max.value;
    bool $tmp4021 = $tmp4014.inclusive.value;
    if ($tmp4021) goto $l4028; else goto $l4029;
    $l4028:;
    if ($tmp4018 <= $tmp4020) goto $l4022; else goto $l4024;
    $l4029:;
    if ($tmp4018 < $tmp4020) goto $l4022; else goto $l4024;
    $l4022:;
    {
        panda$core$Object* $tmp4031 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp4032 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$ASTNode*) $tmp4031)->children, i4017);
        org$pandalanguage$pandac$IRNode* $tmp4033 = org$pandalanguage$pandac$Compiler$compileWhenTest$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_value, ((org$pandalanguage$pandac$ASTNode*) $tmp4032));
        nextTest4030 = $tmp4033;
        if (((panda$core$Bit) { nextTest4030 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp4035 = (panda$collections$Array*) malloc(40);
        $tmp4035->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp4035->refCount.value = 1;
        panda$collections$Array$init($tmp4035);
        callChildren4034 = $tmp4035;
        panda$collections$Array$add$panda$collections$Array$T(callChildren4034, ((panda$core$Object*) nextTest4030));
        org$pandalanguage$pandac$IRNode* $tmp4038 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, test4010, &$s4037, ((panda$collections$ListView*) callChildren4034));
        test4010 = $tmp4038;
        if (((panda$core$Bit) { test4010 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    $l4025:;
    int64_t $tmp4040 = $tmp4020 - i4017.value;
    if ($tmp4021) goto $l4041; else goto $l4042;
    $l4041:;
    if ($tmp4040 >= 1) goto $l4039; else goto $l4024;
    $l4042:;
    if ($tmp4040 > 1) goto $l4039; else goto $l4024;
    $l4039:;
    i4017.value += 1;
    goto $l4022;
    $l4024:;
    org$pandalanguage$pandac$SymbolTable* $tmp4045 = (org$pandalanguage$pandac$SymbolTable*) malloc(48);
    $tmp4045->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp4045->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp4045, self->symbolTable);
    self->symbolTable = $tmp4045;
    panda$collections$Array* $tmp4048 = (panda$collections$Array*) malloc(40);
    $tmp4048->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4048->refCount.value = 1;
    panda$collections$Array$init($tmp4048);
    statements4047 = $tmp4048;
    panda$core$Int64 $tmp4051 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp4050, ((panda$core$Int64) { 1 }), $tmp4051, ((panda$core$Bit) { false }));
    int64_t $tmp4053 = $tmp4050.min.value;
    panda$core$Int64 i4052 = { $tmp4053 };
    int64_t $tmp4055 = $tmp4050.max.value;
    bool $tmp4056 = $tmp4050.inclusive.value;
    if ($tmp4056) goto $l4063; else goto $l4064;
    $l4063:;
    if ($tmp4053 <= $tmp4055) goto $l4057; else goto $l4059;
    $l4064:;
    if ($tmp4053 < $tmp4055) goto $l4057; else goto $l4059;
    $l4057:;
    {
        panda$core$Object* $tmp4066 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, i4052);
        org$pandalanguage$pandac$IRNode* $tmp4067 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4066));
        statement4065 = $tmp4067;
        if (((panda$core$Bit) { statement4065 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(statements4047, ((panda$core$Object*) statement4065));
    }
    $l4060:;
    int64_t $tmp4069 = $tmp4055 - i4052.value;
    if ($tmp4056) goto $l4070; else goto $l4071;
    $l4070:;
    if ($tmp4069 >= 1) goto $l4068; else goto $l4059;
    $l4071:;
    if ($tmp4069 > 1) goto $l4068; else goto $l4059;
    $l4068:;
    i4052.value += 1;
    goto $l4057;
    $l4059:;
    panda$core$Object* $tmp4074 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->symbolTable->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp4074);
    panda$collections$Array* $tmp4076 = (panda$collections$Array*) malloc(40);
    $tmp4076->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4076->refCount.value = 1;
    panda$collections$Array$init($tmp4076);
    children4075 = $tmp4076;
    panda$collections$Array$add$panda$collections$Array$T(children4075, ((panda$core$Object*) test4010));
    org$pandalanguage$pandac$IRNode* $tmp4078 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4078->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4078->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4078, ((panda$core$Int64) { 1000 }), p_w->position, ((panda$collections$ListView*) statements4047));
    panda$collections$Array$add$panda$collections$Array$T(children4075, ((panda$core$Object*) $tmp4078));
    org$pandalanguage$pandac$IRNode* $tmp4080 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4080->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4080->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4080, ((panda$core$Int64) { 1012 }), p_w->position, ((panda$collections$ListView*) children4075));
    return $tmp4080;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileChainedIfMatch$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_m, org$pandalanguage$pandac$IRNode* p_value) {
    panda$collections$Array* children4082;
    org$pandalanguage$pandac$Variable* valueVar4085;
    panda$collections$Array* declChildren4095;
    panda$collections$Array* varChildren4100;
    panda$core$Range$LTpanda$core$Int64$GT $tmp4107;
    org$pandalanguage$pandac$ASTNode* c4122;
    org$pandalanguage$pandac$IRNode* w4124;
    panda$collections$Array* statements4126;
    panda$collections$Iterator* astStatement$Iter4129;
    org$pandalanguage$pandac$ASTNode* astStatement4141;
    org$pandalanguage$pandac$IRNode* stmt4146;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp4156;
    panda$collections$Array* newChildren4184;
    panda$collections$Array* $tmp4083 = (panda$collections$Array*) malloc(40);
    $tmp4083->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4083->refCount.value = 1;
    panda$collections$Array$init($tmp4083);
    children4082 = $tmp4083;
    org$pandalanguage$pandac$Variable* $tmp4086 = (org$pandalanguage$pandac$Variable*) malloc(88);
    $tmp4086->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
    $tmp4086->refCount.value = 1;
    panda$core$String* $tmp4089 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4088, ((panda$core$Object*) wrap_panda$core$Int64(p_m->position.line)));
    panda$core$String* $tmp4091 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4089, &$s4090);
    panda$core$String* $tmp4092 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp4091, ((panda$core$Object*) wrap_panda$core$Int64(p_m->position.column)));
    panda$core$String* $tmp4094 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4092, &$s4093);
    org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type($tmp4086, p_m->position, ((panda$core$Int64) { 10001 }), $tmp4094, p_value->type);
    valueVar4085 = $tmp4086;
    panda$collections$Array* $tmp4096 = (panda$collections$Array*) malloc(40);
    $tmp4096->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4096->refCount.value = 1;
    panda$collections$Array$init($tmp4096);
    declChildren4095 = $tmp4096;
    org$pandalanguage$pandac$IRNode* $tmp4098 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4098->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4098->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp4098, ((panda$core$Int64) { 1016 }), p_value->position, valueVar4085->type, valueVar4085);
    panda$collections$Array$add$panda$collections$Array$T(declChildren4095, ((panda$core$Object*) $tmp4098));
    panda$collections$Array$add$panda$collections$Array$T(declChildren4095, ((panda$core$Object*) p_value));
    panda$collections$Array* $tmp4101 = (panda$collections$Array*) malloc(40);
    $tmp4101->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4101->refCount.value = 1;
    panda$collections$Array$init($tmp4101);
    varChildren4100 = $tmp4101;
    org$pandalanguage$pandac$IRNode* $tmp4103 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4103->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4103->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4103, ((panda$core$Int64) { 1021 }), ((org$pandalanguage$pandac$Symbol*) valueVar4085)->position, ((panda$collections$ListView*) declChildren4095));
    panda$collections$Array$add$panda$collections$Array$T(varChildren4100, ((panda$core$Object*) $tmp4103));
    org$pandalanguage$pandac$IRNode* $tmp4105 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4105->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4105->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4105, ((panda$core$Int64) { 1018 }), ((org$pandalanguage$pandac$Symbol*) valueVar4085)->position, ((panda$collections$ListView*) varChildren4100));
    panda$collections$Array$add$panda$collections$Array$T(children4082, ((panda$core$Object*) $tmp4105));
    panda$core$Int64 $tmp4108 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp4107, ((panda$core$Int64) { 1 }), $tmp4108, ((panda$core$Bit) { false }));
    int64_t $tmp4110 = $tmp4107.min.value;
    panda$core$Int64 i4109 = { $tmp4110 };
    int64_t $tmp4112 = $tmp4107.max.value;
    bool $tmp4113 = $tmp4107.inclusive.value;
    if ($tmp4113) goto $l4120; else goto $l4121;
    $l4120:;
    if ($tmp4110 <= $tmp4112) goto $l4114; else goto $l4116;
    $l4121:;
    if ($tmp4110 < $tmp4112) goto $l4114; else goto $l4116;
    $l4114:;
    {
        panda$core$Object* $tmp4123 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, i4109);
        c4122 = ((org$pandalanguage$pandac$ASTNode*) $tmp4123);
        switch (c4122->kind.value) {
            case 124:
            {
                org$pandalanguage$pandac$IRNode* $tmp4125 = org$pandalanguage$pandac$Compiler$compileChainedIfWhen$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, valueVar4085, c4122);
                w4124 = $tmp4125;
                if (((panda$core$Bit) { w4124 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children4082, ((panda$core$Object*) w4124));
            }
            break;
            case 127:
            {
                panda$collections$Array* $tmp4127 = (panda$collections$Array*) malloc(40);
                $tmp4127->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp4127->refCount.value = 1;
                panda$collections$Array$init($tmp4127);
                statements4126 = $tmp4127;
                {
                    ITable* $tmp4130 = ((panda$collections$Iterable*) c4122->children)->$class->itable;
                    while ($tmp4130->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp4130 = $tmp4130->next;
                    }
                    $fn4132 $tmp4131 = $tmp4130->methods[0];
                    panda$collections$Iterator* $tmp4133 = $tmp4131(((panda$collections$Iterable*) c4122->children));
                    astStatement$Iter4129 = $tmp4133;
                    $l4134:;
                    ITable* $tmp4136 = astStatement$Iter4129->$class->itable;
                    while ($tmp4136->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp4136 = $tmp4136->next;
                    }
                    $fn4138 $tmp4137 = $tmp4136->methods[0];
                    panda$core$Bit $tmp4139 = $tmp4137(astStatement$Iter4129);
                    panda$core$Bit $tmp4140 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4139);
                    if (!$tmp4140.value) goto $l4135;
                    {
                        ITable* $tmp4142 = astStatement$Iter4129->$class->itable;
                        while ($tmp4142->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp4142 = $tmp4142->next;
                        }
                        $fn4144 $tmp4143 = $tmp4142->methods[1];
                        panda$core$Object* $tmp4145 = $tmp4143(astStatement$Iter4129);
                        astStatement4141 = ((org$pandalanguage$pandac$ASTNode*) $tmp4145);
                        org$pandalanguage$pandac$IRNode* $tmp4147 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, astStatement4141);
                        stmt4146 = $tmp4147;
                        if (((panda$core$Bit) { stmt4146 == NULL }).value) {
                        {
                            return NULL;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(statements4126, ((panda$core$Object*) stmt4146));
                    }
                    goto $l4134;
                    $l4135:;
                }
                org$pandalanguage$pandac$IRNode* $tmp4148 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp4148->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp4148->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4148, ((panda$core$Int64) { 1000 }), c4122->position, ((panda$collections$ListView*) statements4126));
                panda$collections$Array$add$panda$collections$Array$T(children4082, ((panda$core$Object*) $tmp4148));
            }
            break;
            default:
            {
                PANDA_ASSERT(((panda$core$Bit) { false }).value);
            }
        }
    }
    $l4117:;
    int64_t $tmp4151 = $tmp4112 - i4109.value;
    if ($tmp4113) goto $l4152; else goto $l4153;
    $l4152:;
    if ($tmp4151 >= 1) goto $l4150; else goto $l4116;
    $l4153:;
    if ($tmp4151 > 1) goto $l4150; else goto $l4116;
    $l4150:;
    i4109.value += 1;
    goto $l4114;
    $l4116:;
    panda$core$Int64 $tmp4157 = panda$collections$Array$get_count$R$panda$core$Int64(children4082);
    panda$core$Int64 $tmp4158 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp4157, ((panda$core$Int64) { 1 }));
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp4156, $tmp4158, ((panda$core$Int64) { 1 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { false }));
    int64_t $tmp4160 = $tmp4156.start.value;
    panda$core$Int64 i4159 = { $tmp4160 };
    int64_t $tmp4162 = $tmp4156.end.value;
    int64_t $tmp4163 = $tmp4156.step.value;
    bool $tmp4164 = $tmp4156.inclusive.value;
    bool $tmp4171 = $tmp4163 > 0;
    if ($tmp4171) goto $l4169; else goto $l4170;
    $l4169:;
    if ($tmp4164) goto $l4172; else goto $l4173;
    $l4172:;
    if ($tmp4160 <= $tmp4162) goto $l4165; else goto $l4167;
    $l4173:;
    if ($tmp4160 < $tmp4162) goto $l4165; else goto $l4167;
    $l4170:;
    if ($tmp4164) goto $l4174; else goto $l4175;
    $l4174:;
    if ($tmp4160 >= $tmp4162) goto $l4165; else goto $l4167;
    $l4175:;
    if ($tmp4160 > $tmp4162) goto $l4165; else goto $l4167;
    $l4165:;
    {
        panda$core$Int64 $tmp4177 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4159, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp4178 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children4082, $tmp4177);
        panda$core$Bit $tmp4179 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp4178)->kind, ((panda$core$Int64) { 1012 }));
        PANDA_ASSERT($tmp4179.value);
        panda$core$Int64 $tmp4180 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4159, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp4181 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children4082, $tmp4180);
        panda$core$Int64 $tmp4182 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp4181)->children);
        panda$core$Bit $tmp4183 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4182, ((panda$core$Int64) { 2 }));
        PANDA_ASSERT($tmp4183.value);
        panda$collections$Array* $tmp4185 = (panda$collections$Array*) malloc(40);
        $tmp4185->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp4185->refCount.value = 1;
        panda$core$Int64 $tmp4187 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4159, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp4188 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children4082, $tmp4187);
        panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp4185, ((panda$collections$ListView*) ((org$pandalanguage$pandac$IRNode*) $tmp4188)->children));
        newChildren4184 = $tmp4185;
        panda$core$Object* $tmp4189 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children4082, i4159);
        panda$collections$Array$add$panda$collections$Array$T(newChildren4184, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp4189)));
        panda$core$Int64 $tmp4190 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4159, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$IRNode* $tmp4191 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp4191->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp4191->refCount.value = 1;
        panda$core$Int64 $tmp4193 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4159, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp4194 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children4082, $tmp4193);
        panda$core$Int64 $tmp4195 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4159, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp4196 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children4082, $tmp4195);
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4191, ((org$pandalanguage$pandac$IRNode*) $tmp4194)->kind, ((org$pandalanguage$pandac$IRNode*) $tmp4196)->position, ((panda$collections$ListView*) newChildren4184));
        panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(children4082, $tmp4190, ((panda$core$Object*) $tmp4191));
        panda$core$Int64 $tmp4197 = panda$collections$Array$get_count$R$panda$core$Int64(children4082);
        panda$core$Int64 $tmp4198 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp4197, ((panda$core$Int64) { 1 }));
        panda$collections$Array$removeIndex$panda$core$Int64(children4082, $tmp4198);
    }
    $l4168:;
    if ($tmp4171) goto $l4200; else goto $l4201;
    $l4200:;
    int64_t $tmp4202 = $tmp4162 - i4159.value;
    if ($tmp4164) goto $l4203; else goto $l4204;
    $l4203:;
    if ($tmp4202 >= $tmp4163) goto $l4199; else goto $l4167;
    $l4204:;
    if ($tmp4202 > $tmp4163) goto $l4199; else goto $l4167;
    $l4201:;
    int64_t $tmp4206 = i4159.value - $tmp4162;
    if ($tmp4164) goto $l4207; else goto $l4208;
    $l4207:;
    if ($tmp4206 >= -$tmp4163) goto $l4199; else goto $l4167;
    $l4208:;
    if ($tmp4206 > -$tmp4163) goto $l4199; else goto $l4167;
    $l4199:;
    i4159.value += $tmp4163;
    goto $l4165;
    $l4167:;
    org$pandalanguage$pandac$IRNode* $tmp4210 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4210->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4210->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4210, ((panda$core$Int64) { 1000 }), p_m->position, ((panda$collections$ListView*) children4082));
    return $tmp4210;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileWhen$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type, org$pandalanguage$pandac$ASTNode* p_w) {
    panda$collections$Array* children4220;
    panda$collections$Iterator* expr$Iter4223;
    org$pandalanguage$pandac$ASTNode* expr4236;
    org$pandalanguage$pandac$IRNode* compiled4241;
    panda$collections$Array* statements4246;
    panda$core$Range$LTpanda$core$Int64$GT $tmp4249;
    org$pandalanguage$pandac$IRNode* statement4264;
    panda$core$Bit $tmp4212 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_w->kind, ((panda$core$Int64) { 124 }));
    PANDA_ASSERT($tmp4212.value);
    panda$core$Int64 $tmp4213 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Bit $tmp4214 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp4213, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4214.value);
    panda$core$Object* $tmp4215 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp4216 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp4215)->kind, ((panda$core$Int64) { 128 }));
    PANDA_ASSERT($tmp4216.value);
    panda$core$Object* $tmp4217 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Int64 $tmp4218 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$ASTNode*) $tmp4217)->children);
    panda$core$Bit $tmp4219 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp4218, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4219.value);
    panda$collections$Array* $tmp4221 = (panda$collections$Array*) malloc(40);
    $tmp4221->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4221->refCount.value = 1;
    panda$collections$Array$init($tmp4221);
    children4220 = $tmp4221;
    {
        panda$core$Object* $tmp4224 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
        ITable* $tmp4225 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp4224)->children)->$class->itable;
        while ($tmp4225->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4225 = $tmp4225->next;
        }
        $fn4227 $tmp4226 = $tmp4225->methods[0];
        panda$collections$Iterator* $tmp4228 = $tmp4226(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp4224)->children));
        expr$Iter4223 = $tmp4228;
        $l4229:;
        ITable* $tmp4231 = expr$Iter4223->$class->itable;
        while ($tmp4231->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4231 = $tmp4231->next;
        }
        $fn4233 $tmp4232 = $tmp4231->methods[0];
        panda$core$Bit $tmp4234 = $tmp4232(expr$Iter4223);
        panda$core$Bit $tmp4235 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4234);
        if (!$tmp4235.value) goto $l4230;
        {
            ITable* $tmp4237 = expr$Iter4223->$class->itable;
            while ($tmp4237->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4237 = $tmp4237->next;
            }
            $fn4239 $tmp4238 = $tmp4237->methods[1];
            panda$core$Object* $tmp4240 = $tmp4238(expr$Iter4223);
            expr4236 = ((org$pandalanguage$pandac$ASTNode*) $tmp4240);
            org$pandalanguage$pandac$IRNode* $tmp4242 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, expr4236);
            org$pandalanguage$pandac$IRNode* $tmp4243 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp4242, p_type);
            compiled4241 = $tmp4243;
            if (((panda$core$Bit) { compiled4241 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children4220, ((panda$core$Object*) compiled4241));
        }
        goto $l4229;
        $l4230:;
    }
    org$pandalanguage$pandac$SymbolTable* $tmp4244 = (org$pandalanguage$pandac$SymbolTable*) malloc(48);
    $tmp4244->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp4244->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp4244, self->symbolTable);
    self->symbolTable = $tmp4244;
    panda$collections$Array* $tmp4247 = (panda$collections$Array*) malloc(40);
    $tmp4247->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4247->refCount.value = 1;
    panda$collections$Array$init($tmp4247);
    statements4246 = $tmp4247;
    panda$core$Int64 $tmp4250 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp4249, ((panda$core$Int64) { 1 }), $tmp4250, ((panda$core$Bit) { false }));
    int64_t $tmp4252 = $tmp4249.min.value;
    panda$core$Int64 i4251 = { $tmp4252 };
    int64_t $tmp4254 = $tmp4249.max.value;
    bool $tmp4255 = $tmp4249.inclusive.value;
    if ($tmp4255) goto $l4262; else goto $l4263;
    $l4262:;
    if ($tmp4252 <= $tmp4254) goto $l4256; else goto $l4258;
    $l4263:;
    if ($tmp4252 < $tmp4254) goto $l4256; else goto $l4258;
    $l4256:;
    {
        panda$core$Object* $tmp4265 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, i4251);
        org$pandalanguage$pandac$IRNode* $tmp4266 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4265));
        statement4264 = $tmp4266;
        if (((panda$core$Bit) { statement4264 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(statements4246, ((panda$core$Object*) statement4264));
    }
    $l4259:;
    int64_t $tmp4268 = $tmp4254 - i4251.value;
    if ($tmp4255) goto $l4269; else goto $l4270;
    $l4269:;
    if ($tmp4268 >= 1) goto $l4267; else goto $l4258;
    $l4270:;
    if ($tmp4268 > 1) goto $l4267; else goto $l4258;
    $l4267:;
    i4251.value += 1;
    goto $l4256;
    $l4258:;
    panda$core$Object* $tmp4273 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->symbolTable->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp4273);
    org$pandalanguage$pandac$IRNode* $tmp4274 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4274->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4274->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4274, ((panda$core$Int64) { 1000 }), p_w->position, ((panda$collections$ListView*) statements4246));
    panda$collections$Array$add$panda$collections$Array$T(children4220, ((panda$core$Object*) $tmp4274));
    org$pandalanguage$pandac$IRNode* $tmp4276 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4276->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4276->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4276, ((panda$core$Int64) { 1042 }), p_w->position, ((panda$collections$ListView*) children4220));
    return $tmp4276;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileOtherwise$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_o) {
    panda$collections$Array* children4279;
    panda$collections$Array* statements4284;
    panda$collections$Iterator* s$Iter4287;
    org$pandalanguage$pandac$ASTNode* s4299;
    org$pandalanguage$pandac$IRNode* statement4304;
    panda$core$Bit $tmp4278 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_o->kind, ((panda$core$Int64) { 127 }));
    PANDA_ASSERT($tmp4278.value);
    panda$collections$Array* $tmp4280 = (panda$collections$Array*) malloc(40);
    $tmp4280->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4280->refCount.value = 1;
    panda$collections$Array$init($tmp4280);
    children4279 = $tmp4280;
    org$pandalanguage$pandac$SymbolTable* $tmp4282 = (org$pandalanguage$pandac$SymbolTable*) malloc(48);
    $tmp4282->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp4282->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp4282, self->symbolTable);
    self->symbolTable = $tmp4282;
    panda$collections$Array* $tmp4285 = (panda$collections$Array*) malloc(40);
    $tmp4285->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4285->refCount.value = 1;
    panda$collections$Array$init($tmp4285);
    statements4284 = $tmp4285;
    {
        ITable* $tmp4288 = ((panda$collections$Iterable*) p_o->children)->$class->itable;
        while ($tmp4288->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4288 = $tmp4288->next;
        }
        $fn4290 $tmp4289 = $tmp4288->methods[0];
        panda$collections$Iterator* $tmp4291 = $tmp4289(((panda$collections$Iterable*) p_o->children));
        s$Iter4287 = $tmp4291;
        $l4292:;
        ITable* $tmp4294 = s$Iter4287->$class->itable;
        while ($tmp4294->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4294 = $tmp4294->next;
        }
        $fn4296 $tmp4295 = $tmp4294->methods[0];
        panda$core$Bit $tmp4297 = $tmp4295(s$Iter4287);
        panda$core$Bit $tmp4298 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4297);
        if (!$tmp4298.value) goto $l4293;
        {
            ITable* $tmp4300 = s$Iter4287->$class->itable;
            while ($tmp4300->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4300 = $tmp4300->next;
            }
            $fn4302 $tmp4301 = $tmp4300->methods[1];
            panda$core$Object* $tmp4303 = $tmp4301(s$Iter4287);
            s4299 = ((org$pandalanguage$pandac$ASTNode*) $tmp4303);
            org$pandalanguage$pandac$IRNode* $tmp4305 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, s4299);
            statement4304 = $tmp4305;
            if (((panda$core$Bit) { statement4304 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(statements4284, ((panda$core$Object*) statement4304));
        }
        goto $l4292;
        $l4293:;
    }
    panda$core$Object* $tmp4306 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->symbolTable->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp4306);
    org$pandalanguage$pandac$IRNode* $tmp4307 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4307->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4307->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4307, ((panda$core$Int64) { 1000 }), p_o->position, ((panda$collections$ListView*) statements4284));
    panda$collections$Array$add$panda$collections$Array$T(children4279, ((panda$core$Object*) $tmp4307));
    org$pandalanguage$pandac$IRNode* $tmp4309 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4309->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4309->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4309, ((panda$core$Int64) { 1043 }), p_o->position, ((panda$collections$ListView*) children4279));
    return $tmp4309;
}
panda$core$Bit org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    org$pandalanguage$pandac$FieldDecl* f4318;
    org$pandalanguage$pandac$Variable* v4327;
    switch (p_expr->kind.value) {
        case 1004:
        {
            return ((panda$core$Bit) { true });
        }
        break;
        case 1010:
        {
            panda$core$Bit $tmp4312 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_expr->type);
            bool $tmp4311 = $tmp4312.value;
            if (!$tmp4311) goto $l4313;
            panda$core$Object* $tmp4314 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp4315 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$IRNode*) $tmp4314)->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp4316 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp4315));
            $tmp4311 = $tmp4316.value;
            $l4313:;
            panda$core$Bit $tmp4317 = { $tmp4311 };
            return $tmp4317;
        }
        break;
        case 1026:
        {
            f4318 = ((org$pandalanguage$pandac$FieldDecl*) p_expr->payload);
            PANDA_ASSERT(f4318->resolved.value);
            panda$core$Bit $tmp4321 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(f4318->fieldKind, ((panda$core$Int64) { 10002 }));
            bool $tmp4320 = $tmp4321.value;
            if (!$tmp4320) goto $l4322;
            $tmp4320 = ((panda$core$Bit) { f4318->value != NULL }).value;
            $l4322:;
            panda$core$Bit $tmp4323 = { $tmp4320 };
            bool $tmp4319 = $tmp4323.value;
            if (!$tmp4319) goto $l4324;
            panda$core$Bit $tmp4325 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, f4318->value);
            $tmp4319 = $tmp4325.value;
            $l4324:;
            panda$core$Bit $tmp4326 = { $tmp4319 };
            return $tmp4326;
        }
        break;
        case 1016:
        {
            v4327 = ((org$pandalanguage$pandac$Variable*) p_expr->payload);
            panda$core$Bit $tmp4329 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(v4327->varKind, ((panda$core$Int64) { 10001 }));
            bool $tmp4328 = $tmp4329.value;
            if ($tmp4328) goto $l4330;
            panda$core$Bit $tmp4333 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(v4327->varKind, ((panda$core$Int64) { 10002 }));
            bool $tmp4332 = $tmp4333.value;
            if (!$tmp4332) goto $l4334;
            $tmp4332 = ((panda$core$Bit) { v4327->initialValue != NULL }).value;
            $l4334:;
            panda$core$Bit $tmp4335 = { $tmp4332 };
            bool $tmp4331 = $tmp4335.value;
            if (!$tmp4331) goto $l4336;
            panda$core$Bit $tmp4337 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, v4327->initialValue);
            $tmp4331 = $tmp4337.value;
            $l4336:;
            panda$core$Bit $tmp4338 = { $tmp4331 };
            $tmp4328 = $tmp4338.value;
            $l4330:;
            panda$core$Bit $tmp4339 = { $tmp4328 };
            return $tmp4339;
        }
        break;
        default:
        {
            return ((panda$core$Bit) { false });
        }
    }
}
panda$core$UInt64 org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    org$pandalanguage$pandac$FieldDecl* f4344;
    org$pandalanguage$pandac$Variable* v4346;
    panda$core$Bit $tmp4340 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, p_expr);
    PANDA_ASSERT($tmp4340.value);
    switch (p_expr->kind.value) {
        case 1004:
        {
            return ((panda$core$UInt64$wrapper*) p_expr->payload)->value;
        }
        break;
        case 1010:
        {
            panda$core$Object* $tmp4341 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp4342 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$IRNode*) $tmp4341)->children, ((panda$core$Int64) { 0 }));
            panda$core$UInt64 $tmp4343 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self, ((org$pandalanguage$pandac$IRNode*) $tmp4342));
            return $tmp4343;
        }
        break;
        case 1026:
        {
            f4344 = ((org$pandalanguage$pandac$FieldDecl*) p_expr->payload);
            panda$core$UInt64 $tmp4345 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self, f4344->value);
            return $tmp4345;
        }
        break;
        case 1016:
        {
            v4346 = ((org$pandalanguage$pandac$Variable*) p_expr->payload);
            panda$core$UInt64 $tmp4347 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self, v4346->initialValue);
            return $tmp4347;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileMatch$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_m) {
    org$pandalanguage$pandac$IRNode* value4351;
    panda$collections$Array* children4358;
    panda$collections$Iterator* rawWhen$Iter4361;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp4362;
    org$pandalanguage$pandac$ASTNode* rawWhen4375;
    org$pandalanguage$pandac$IRNode* o4381;
    org$pandalanguage$pandac$IRNode* w4383;
    panda$core$Bit $tmp4348 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->kind, ((panda$core$Int64) { 125 }));
    PANDA_ASSERT($tmp4348.value);
    panda$core$Int64 $tmp4349 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
    panda$core$Bit $tmp4350 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp4349, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4350.value);
    panda$core$Object* $tmp4352 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp4353 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4352));
    org$pandalanguage$pandac$IRNode* $tmp4354 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp4353);
    value4351 = $tmp4354;
    if (((panda$core$Bit) { value4351 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp4355 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(value4351->type);
    panda$core$Bit $tmp4356 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4355);
    if ($tmp4356.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp4357 = org$pandalanguage$pandac$Compiler$compileChainedIfMatch$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_m, value4351);
        return $tmp4357;
    }
    }
    panda$collections$Array* $tmp4359 = (panda$collections$Array*) malloc(40);
    $tmp4359->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4359->refCount.value = 1;
    panda$collections$Array$init($tmp4359);
    children4358 = $tmp4359;
    panda$collections$Array$add$panda$collections$Array$T(children4358, ((panda$core$Object*) value4351));
    {
        panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp4362, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
        panda$collections$ImmutableArray* $tmp4363 = panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(p_m->children, $tmp4362);
        ITable* $tmp4364 = ((panda$collections$Iterable*) $tmp4363)->$class->itable;
        while ($tmp4364->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4364 = $tmp4364->next;
        }
        $fn4366 $tmp4365 = $tmp4364->methods[0];
        panda$collections$Iterator* $tmp4367 = $tmp4365(((panda$collections$Iterable*) $tmp4363));
        rawWhen$Iter4361 = $tmp4367;
        $l4368:;
        ITable* $tmp4370 = rawWhen$Iter4361->$class->itable;
        while ($tmp4370->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4370 = $tmp4370->next;
        }
        $fn4372 $tmp4371 = $tmp4370->methods[0];
        panda$core$Bit $tmp4373 = $tmp4371(rawWhen$Iter4361);
        panda$core$Bit $tmp4374 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4373);
        if (!$tmp4374.value) goto $l4369;
        {
            ITable* $tmp4376 = rawWhen$Iter4361->$class->itable;
            while ($tmp4376->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4376 = $tmp4376->next;
            }
            $fn4378 $tmp4377 = $tmp4376->methods[1];
            panda$core$Object* $tmp4379 = $tmp4377(rawWhen$Iter4361);
            rawWhen4375 = ((org$pandalanguage$pandac$ASTNode*) $tmp4379);
            panda$core$Bit $tmp4380 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(rawWhen4375->kind, ((panda$core$Int64) { 127 }));
            if ($tmp4380.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp4382 = org$pandalanguage$pandac$Compiler$compileOtherwise$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, rawWhen4375);
                o4381 = $tmp4382;
                if (((panda$core$Bit) { o4381 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children4358, ((panda$core$Object*) o4381));
                goto $l4368;
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp4384 = org$pandalanguage$pandac$Compiler$compileWhen$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, value4351->type, rawWhen4375);
            w4383 = $tmp4384;
            if (((panda$core$Bit) { w4383 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$Object* $tmp4385 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(w4383->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp4386 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp4385));
            panda$core$Bit $tmp4387 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4386);
            if ($tmp4387.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp4388 = org$pandalanguage$pandac$Compiler$compileChainedIfMatch$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_m, value4351);
                return $tmp4388;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children4358, ((panda$core$Object*) w4383));
        }
        goto $l4368;
        $l4369:;
    }
    org$pandalanguage$pandac$IRNode* $tmp4389 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4389->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4389->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4389, ((panda$core$Int64) { 1042 }), p_m->position, ((panda$collections$ListView*) children4358));
    return $tmp4389;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$IRNode* result4404;
    switch (p_s->kind.value) {
        case 123:
        {
            org$pandalanguage$pandac$IRNode* $tmp4391 = org$pandalanguage$pandac$Compiler$compileAssert$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4391;
        }
        break;
        case 103:
        {
            org$pandalanguage$pandac$IRNode* $tmp4392 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            org$pandalanguage$pandac$IRNode* $tmp4393 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp4392);
            return $tmp4393;
        }
        break;
        case 126:
        {
            org$pandalanguage$pandac$IRNode* $tmp4394 = org$pandalanguage$pandac$Compiler$compileBlock$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4394;
        }
        break;
        case 118:
        {
            org$pandalanguage$pandac$IRNode* $tmp4395 = org$pandalanguage$pandac$Compiler$compileIf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4395;
        }
        break;
        case 119:
        {
            org$pandalanguage$pandac$IRNode* $tmp4396 = org$pandalanguage$pandac$Compiler$compileFor$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4396;
        }
        break;
        case 121:
        {
            org$pandalanguage$pandac$IRNode* $tmp4397 = org$pandalanguage$pandac$Compiler$compileWhile$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4397;
        }
        break;
        case 120:
        {
            org$pandalanguage$pandac$IRNode* $tmp4398 = org$pandalanguage$pandac$Compiler$compileDo$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4398;
        }
        break;
        case 122:
        {
            org$pandalanguage$pandac$IRNode* $tmp4399 = org$pandalanguage$pandac$Compiler$compileLoop$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4399;
        }
        break;
        case 125:
        {
            org$pandalanguage$pandac$IRNode* $tmp4400 = org$pandalanguage$pandac$Compiler$compileMatch$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4400;
        }
        break;
        case 134:
        {
            org$pandalanguage$pandac$IRNode* $tmp4401 = org$pandalanguage$pandac$Compiler$compileBreak$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4401;
        }
        break;
        case 135:
        {
            org$pandalanguage$pandac$IRNode* $tmp4402 = org$pandalanguage$pandac$Compiler$compileContinue$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4402;
        }
        break;
        case 136:
        {
            org$pandalanguage$pandac$IRNode* $tmp4403 = org$pandalanguage$pandac$Compiler$compileReturn$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4403;
        }
        break;
        case 107:
        {
            org$pandalanguage$pandac$IRNode* $tmp4405 = org$pandalanguage$pandac$Compiler$compileCall$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            org$pandalanguage$pandac$IRNode* $tmp4406 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp4405);
            result4404 = $tmp4406;
            if (((panda$core$Bit) { result4404 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp4407 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self, result4404);
                result4404 = $tmp4407;
            }
            }
            return result4404;
        }
        break;
        case 130:
        case 131:
        case 132:
        case 133:
        {
            org$pandalanguage$pandac$IRNode* $tmp4408 = org$pandalanguage$pandac$Compiler$compileVar$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4408;
        }
        break;
    }
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBody$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$SymbolTable* old4409;
    org$pandalanguage$pandac$SymbolTable* symbols4411;
    panda$collections$Iterator* p$Iter4414;
    org$pandalanguage$pandac$MethodDecl$Parameter* p4426;
    panda$collections$Array* fieldInitializers4433;
    panda$collections$Iterator* f$Iter4437;
    org$pandalanguage$pandac$FieldDecl* f4450;
    panda$collections$Array* children4460;
    org$pandalanguage$pandac$IRNode* fieldRef4467;
    org$pandalanguage$pandac$IRNode* compiled4472;
    panda$collections$Array* children4474;
    if (((panda$core$Bit) { p_m->compiledBody != NULL }).value) {
    {
        return p_m->compiledBody;
    }
    }
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_m->owner));
    old4409 = self->symbolTable;
    org$pandalanguage$pandac$SymbolTable* $tmp4410 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, p_m->owner);
    self->symbolTable = $tmp4410;
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentMethod, ((panda$core$Object*) p_m));
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
    PANDA_ASSERT(((panda$core$Bit) { p_m->body != NULL }).value);
    org$pandalanguage$pandac$SymbolTable* $tmp4412 = (org$pandalanguage$pandac$SymbolTable*) malloc(48);
    $tmp4412->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp4412->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp4412, self->symbolTable);
    symbols4411 = $tmp4412;
    {
        ITable* $tmp4415 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp4415->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4415 = $tmp4415->next;
        }
        $fn4417 $tmp4416 = $tmp4415->methods[0];
        panda$collections$Iterator* $tmp4418 = $tmp4416(((panda$collections$Iterable*) p_m->parameters));
        p$Iter4414 = $tmp4418;
        $l4419:;
        ITable* $tmp4421 = p$Iter4414->$class->itable;
        while ($tmp4421->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4421 = $tmp4421->next;
        }
        $fn4423 $tmp4422 = $tmp4421->methods[0];
        panda$core$Bit $tmp4424 = $tmp4422(p$Iter4414);
        panda$core$Bit $tmp4425 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4424);
        if (!$tmp4425.value) goto $l4420;
        {
            ITable* $tmp4427 = p$Iter4414->$class->itable;
            while ($tmp4427->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4427 = $tmp4427->next;
            }
            $fn4429 $tmp4428 = $tmp4427->methods[1];
            panda$core$Object* $tmp4430 = $tmp4428(p$Iter4414);
            p4426 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp4430);
            org$pandalanguage$pandac$Variable* $tmp4431 = (org$pandalanguage$pandac$Variable*) malloc(88);
            $tmp4431->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
            $tmp4431->refCount.value = 1;
            org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Int64($tmp4431, ((org$pandalanguage$pandac$Symbol*) p_m)->position, ((panda$core$Int64) { 10001 }), p4426->name, p4426->type, ((panda$core$Int64) { 1820 }));
            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(symbols4411, ((org$pandalanguage$pandac$Symbol*) $tmp4431));
        }
        goto $l4419;
        $l4420:;
    }
    self->symbolTable = symbols4411;
    fieldInitializers4433 = NULL;
    panda$core$Bit $tmp4434 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 59 }));
    if ($tmp4434.value) {
    {
        panda$collections$Array* $tmp4435 = (panda$collections$Array*) malloc(40);
        $tmp4435->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp4435->refCount.value = 1;
        panda$collections$Array$init($tmp4435);
        fieldInitializers4433 = $tmp4435;
        {
            panda$core$Object* $tmp4438 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
            ITable* $tmp4439 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ClassDecl*) $tmp4438)->fields)->$class->itable;
            while ($tmp4439->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp4439 = $tmp4439->next;
            }
            $fn4441 $tmp4440 = $tmp4439->methods[0];
            panda$collections$Iterator* $tmp4442 = $tmp4440(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ClassDecl*) $tmp4438)->fields));
            f$Iter4437 = $tmp4442;
            $l4443:;
            ITable* $tmp4445 = f$Iter4437->$class->itable;
            while ($tmp4445->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4445 = $tmp4445->next;
            }
            $fn4447 $tmp4446 = $tmp4445->methods[0];
            panda$core$Bit $tmp4448 = $tmp4446(f$Iter4437);
            panda$core$Bit $tmp4449 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4448);
            if (!$tmp4449.value) goto $l4444;
            {
                ITable* $tmp4451 = f$Iter4437->$class->itable;
                while ($tmp4451->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp4451 = $tmp4451->next;
                }
                $fn4453 $tmp4452 = $tmp4451->methods[1];
                panda$core$Object* $tmp4454 = $tmp4452(f$Iter4437);
                f4450 = ((org$pandalanguage$pandac$FieldDecl*) $tmp4454);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self, f4450);
                panda$core$Bit $tmp4456 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(f4450->annotations);
                panda$core$Bit $tmp4457 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4456);
                bool $tmp4455 = $tmp4457.value;
                if (!$tmp4455) goto $l4458;
                $tmp4455 = ((panda$core$Bit) { f4450->value != NULL }).value;
                $l4458:;
                panda$core$Bit $tmp4459 = { $tmp4455 };
                if ($tmp4459.value) {
                {
                    panda$collections$Array* $tmp4461 = (panda$collections$Array*) malloc(40);
                    $tmp4461->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp4461->refCount.value = 1;
                    panda$collections$Array$init($tmp4461);
                    children4460 = $tmp4461;
                    org$pandalanguage$pandac$IRNode* $tmp4463 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp4463->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp4463->refCount.value = 1;
                    panda$core$Object* $tmp4465 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
                    org$pandalanguage$pandac$Type* $tmp4466 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp4465));
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp4463, ((panda$core$Int64) { 1025 }), ((org$pandalanguage$pandac$Symbol*) p_m)->position, $tmp4466);
                    panda$collections$Array$add$panda$collections$Array$T(children4460, ((panda$core$Object*) $tmp4463));
                    org$pandalanguage$pandac$IRNode* $tmp4468 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp4468->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp4468->refCount.value = 1;
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp4468, ((panda$core$Int64) { 1026 }), ((org$pandalanguage$pandac$Symbol*) p_m)->position, f4450->type, ((panda$core$Object*) f4450), ((panda$collections$ListView*) children4460));
                    fieldRef4467 = $tmp4468;
                    panda$collections$Array$clear(children4460);
                    panda$collections$Array$add$panda$collections$Array$T(children4460, ((panda$core$Object*) fieldRef4467));
                    panda$collections$Array$add$panda$collections$Array$T(children4460, ((panda$core$Object*) f4450->value));
                    org$pandalanguage$pandac$IRNode* $tmp4470 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp4470->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp4470->refCount.value = 1;
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4470, ((panda$core$Int64) { 1023 }), ((org$pandalanguage$pandac$Symbol*) f4450)->position, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 73 }))), ((panda$collections$ListView*) children4460));
                    panda$collections$Array$add$panda$collections$Array$T(fieldInitializers4433, ((panda$core$Object*) $tmp4470));
                }
                }
            }
            goto $l4443;
            $l4444:;
        }
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp4473 = org$pandalanguage$pandac$Compiler$compileBlock$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_m->body);
    compiled4472 = $tmp4473;
    if (((panda$core$Bit) { compiled4472 != NULL }).value) {
    {
        if (((panda$core$Bit) { fieldInitializers4433 != NULL }).value) {
        {
            panda$collections$Array* $tmp4475 = (panda$collections$Array*) malloc(40);
            $tmp4475->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp4475->refCount.value = 1;
            panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp4475, ((panda$collections$ListView*) fieldInitializers4433));
            children4474 = $tmp4475;
            panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(children4474, ((panda$collections$CollectionView*) compiled4472->children));
            org$pandalanguage$pandac$IRNode* $tmp4477 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp4477->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp4477->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4477, ((panda$core$Int64) { 1000 }), p_m->body->position, ((panda$collections$ListView*) children4474));
            compiled4472 = $tmp4477;
        }
        }
    }
    }
    PANDA_ASSERT(((panda$core$Bit) { ((panda$core$Object*) self->symbolTable) == ((panda$core$Object*) symbols4411) }).value);
    self->symbolTable = old4409;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentMethod);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    panda$core$Bit $tmp4479 = org$pandalanguage$pandac$Annotations$isInline$R$panda$core$Bit(p_m->annotations);
    if ($tmp4479.value) {
    {
        p_m->compiledBody = compiled4472;
    }
    }
    return compiled4472;
}
void org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$IRNode* compiled4480;
    if (((panda$core$Bit) { p_m->body != NULL }).value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp4481 = org$pandalanguage$pandac$Compiler$compileBody$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$IRNode$Q(self, p_m);
        compiled4480 = $tmp4481;
        if (((panda$core$Bit) { compiled4480 != NULL }).value) {
        {
            ITable* $tmp4482 = self->codeGenerator->$class->itable;
            while ($tmp4482->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
                $tmp4482 = $tmp4482->next;
            }
            $fn4484 $tmp4483 = $tmp4482->methods[3];
            $tmp4483(self->codeGenerator, p_m, compiled4480);
        }
        }
    }
    }
    else {
    {
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
        ITable* $tmp4485 = self->codeGenerator->$class->itable;
        while ($tmp4485->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
            $tmp4485 = $tmp4485->next;
        }
        $fn4487 $tmp4486 = $tmp4485->methods[2];
        $tmp4486(self->codeGenerator, p_m);
    }
    }
}
void org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Iterator* inner$Iter4488;
    org$pandalanguage$pandac$ClassDecl* inner4500;
    p_cl->external = ((panda$core$Bit) { false });
    {
        ITable* $tmp4489 = ((panda$collections$Iterable*) p_cl->classes)->$class->itable;
        while ($tmp4489->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4489 = $tmp4489->next;
        }
        $fn4491 $tmp4490 = $tmp4489->methods[0];
        panda$collections$Iterator* $tmp4492 = $tmp4490(((panda$collections$Iterable*) p_cl->classes));
        inner$Iter4488 = $tmp4492;
        $l4493:;
        ITable* $tmp4495 = inner$Iter4488->$class->itable;
        while ($tmp4495->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4495 = $tmp4495->next;
        }
        $fn4497 $tmp4496 = $tmp4495->methods[0];
        panda$core$Bit $tmp4498 = $tmp4496(inner$Iter4488);
        panda$core$Bit $tmp4499 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4498);
        if (!$tmp4499.value) goto $l4494;
        {
            ITable* $tmp4501 = inner$Iter4488->$class->itable;
            while ($tmp4501->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4501 = $tmp4501->next;
            }
            $fn4503 $tmp4502 = $tmp4501->methods[1];
            panda$core$Object* $tmp4504 = $tmp4502(inner$Iter4488);
            inner4500 = ((org$pandalanguage$pandac$ClassDecl*) $tmp4504);
            org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl(self, inner4500);
        }
        goto $l4493;
        $l4494:;
    }
}
void org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$SymbolTable* old4512;
    panda$collections$Iterator* m$Iter4517;
    org$pandalanguage$pandac$MethodDecl* m4529;
    org$pandalanguage$pandac$ClassDecl* next4539;
    PANDA_ASSERT(((panda$core$Bit) { self->compiling == NULL }).value);
    self->compiling = p_cl;
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_cl));
    org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl(self, p_cl);
    panda$core$Bit $tmp4505 = org$pandalanguage$pandac$Annotations$isSpecialize$R$panda$core$Bit(p_cl->annotations);
    if ($tmp4505.value) {
    {
        ITable* $tmp4506 = self->codeGenerator->$class->itable;
        while ($tmp4506->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
            $tmp4506 = $tmp4506->next;
        }
        $fn4508 $tmp4507 = $tmp4506->methods[1];
        $tmp4507(self->codeGenerator, p_cl);
        ITable* $tmp4509 = self->codeGenerator->$class->itable;
        while ($tmp4509->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
            $tmp4509 = $tmp4509->next;
        }
        $fn4511 $tmp4510 = $tmp4509->methods[4];
        $tmp4510(self->codeGenerator, p_cl);
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
        return;
    }
    }
    old4512 = self->symbolTable;
    org$pandalanguage$pandac$SymbolTable* $tmp4513 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, p_cl);
    self->symbolTable = $tmp4513;
    ITable* $tmp4514 = self->codeGenerator->$class->itable;
    while ($tmp4514->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
        $tmp4514 = $tmp4514->next;
    }
    $fn4516 $tmp4515 = $tmp4514->methods[1];
    $tmp4515(self->codeGenerator, p_cl);
    {
        ITable* $tmp4518 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
        while ($tmp4518->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4518 = $tmp4518->next;
        }
        $fn4520 $tmp4519 = $tmp4518->methods[0];
        panda$collections$Iterator* $tmp4521 = $tmp4519(((panda$collections$Iterable*) p_cl->methods));
        m$Iter4517 = $tmp4521;
        $l4522:;
        ITable* $tmp4524 = m$Iter4517->$class->itable;
        while ($tmp4524->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4524 = $tmp4524->next;
        }
        $fn4526 $tmp4525 = $tmp4524->methods[0];
        panda$core$Bit $tmp4527 = $tmp4525(m$Iter4517);
        panda$core$Bit $tmp4528 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4527);
        if (!$tmp4528.value) goto $l4523;
        {
            ITable* $tmp4530 = m$Iter4517->$class->itable;
            while ($tmp4530->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4530 = $tmp4530->next;
            }
            $fn4532 $tmp4531 = $tmp4530->methods[1];
            panda$core$Object* $tmp4533 = $tmp4531(m$Iter4517);
            m4529 = ((org$pandalanguage$pandac$MethodDecl*) $tmp4533);
            org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$MethodDecl(self, m4529);
        }
        goto $l4522;
        $l4523:;
    }
    ITable* $tmp4534 = self->codeGenerator->$class->itable;
    while ($tmp4534->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
        $tmp4534 = $tmp4534->next;
    }
    $fn4536 $tmp4535 = $tmp4534->methods[4];
    $tmp4535(self->codeGenerator, p_cl);
    self->symbolTable = old4512;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    self->compiling = NULL;
    panda$core$Int64 $tmp4537 = panda$collections$Array$get_count$R$panda$core$Int64(self->compilationQueue);
    panda$core$Bit $tmp4538 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp4537, ((panda$core$Int64) { 0 }));
    if ($tmp4538.value) {
    {
        panda$core$Object* $tmp4540 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->compilationQueue, ((panda$core$Int64) { 0 }));
        next4539 = ((org$pandalanguage$pandac$ClassDecl*) $tmp4540);
        panda$collections$Array$removeIndex$panda$core$Int64(self->compilationQueue, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$ClassDecl(self, next4539);
    }
    }
    panda$core$Int64 $tmp4541 = panda$collections$Array$get_count$R$panda$core$Int64(self->compilationQueue);
    panda$core$Bit $tmp4542 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4541, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp4542.value);
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Compiler* self, panda$io$File* p_file) {
    panda$collections$ListView* result4543;
    org$pandalanguage$pandac$ASTNode* parsed4546;
    panda$collections$Iterator* cl$Iter4549;
    org$pandalanguage$pandac$ClassDecl* cl4561;
    panda$core$Object* $tmp4544 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->scans, ((panda$collections$Key*) p_file));
    result4543 = ((panda$collections$ListView*) $tmp4544);
    if (((panda$core$Bit) { result4543 == NULL }).value) {
    {
        panda$core$String* $tmp4545 = panda$io$File$readFully$R$panda$core$String(p_file);
        org$pandalanguage$pandac$parser$Parser$start$panda$io$File$panda$core$String(self->parser, p_file, $tmp4545);
        org$pandalanguage$pandac$ASTNode* $tmp4547 = org$pandalanguage$pandac$parser$Parser$file$R$org$pandalanguage$pandac$ASTNode$Q(self->parser);
        parsed4546 = $tmp4547;
        if (((panda$core$Bit) { parsed4546 != NULL }).value) {
        {
            panda$collections$ListView* $tmp4548 = org$pandalanguage$pandac$Scanner$scan$panda$io$File$org$pandalanguage$pandac$ASTNode$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(self->scanner, p_file, parsed4546);
            result4543 = $tmp4548;
            {
                ITable* $tmp4550 = ((panda$collections$Iterable*) result4543)->$class->itable;
                while ($tmp4550->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp4550 = $tmp4550->next;
                }
                $fn4552 $tmp4551 = $tmp4550->methods[0];
                panda$collections$Iterator* $tmp4553 = $tmp4551(((panda$collections$Iterable*) result4543));
                cl$Iter4549 = $tmp4553;
                $l4554:;
                ITable* $tmp4556 = cl$Iter4549->$class->itable;
                while ($tmp4556->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp4556 = $tmp4556->next;
                }
                $fn4558 $tmp4557 = $tmp4556->methods[0];
                panda$core$Bit $tmp4559 = $tmp4557(cl$Iter4549);
                panda$core$Bit $tmp4560 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4559);
                if (!$tmp4560.value) goto $l4555;
                {
                    ITable* $tmp4562 = cl$Iter4549->$class->itable;
                    while ($tmp4562->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp4562 = $tmp4562->next;
                    }
                    $fn4564 $tmp4563 = $tmp4562->methods[1];
                    panda$core$Object* $tmp4565 = $tmp4563(cl$Iter4549);
                    cl4561 = ((org$pandalanguage$pandac$ClassDecl*) $tmp4565);
                    panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classes, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) cl4561)->name), ((panda$core$Object*) cl4561));
                }
                goto $l4554;
                $l4555:;
            }
        }
        }
        else {
        {
            panda$collections$Array* $tmp4566 = (panda$collections$Array*) malloc(40);
            $tmp4566->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp4566->refCount.value = 1;
            panda$collections$Array$init($tmp4566);
            result4543 = ((panda$collections$ListView*) $tmp4566);
        }
        }
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->scans, ((panda$collections$Key*) p_file), ((panda$core$Object*) result4543));
    }
    }
    return result4543;
}
void org$pandalanguage$pandac$Compiler$compile$panda$io$File(org$pandalanguage$pandac$Compiler* self, panda$io$File* p_file) {
    panda$collections$ListView* classes4568;
    panda$collections$Iterator* cl$Iter4570;
    org$pandalanguage$pandac$ClassDecl* cl4582;
    panda$collections$ListView* $tmp4569 = org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(self, p_file);
    classes4568 = $tmp4569;
    {
        ITable* $tmp4571 = ((panda$collections$Iterable*) classes4568)->$class->itable;
        while ($tmp4571->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4571 = $tmp4571->next;
        }
        $fn4573 $tmp4572 = $tmp4571->methods[0];
        panda$collections$Iterator* $tmp4574 = $tmp4572(((panda$collections$Iterable*) classes4568));
        cl$Iter4570 = $tmp4574;
        $l4575:;
        ITable* $tmp4577 = cl$Iter4570->$class->itable;
        while ($tmp4577->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4577 = $tmp4577->next;
        }
        $fn4579 $tmp4578 = $tmp4577->methods[0];
        panda$core$Bit $tmp4580 = $tmp4578(cl$Iter4570);
        panda$core$Bit $tmp4581 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4580);
        if (!$tmp4581.value) goto $l4576;
        {
            ITable* $tmp4583 = cl$Iter4570->$class->itable;
            while ($tmp4583->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4583 = $tmp4583->next;
            }
            $fn4585 $tmp4584 = $tmp4583->methods[1];
            panda$core$Object* $tmp4586 = $tmp4584(cl$Iter4570);
            cl4582 = ((org$pandalanguage$pandac$ClassDecl*) $tmp4586);
            org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$ClassDecl(self, cl4582);
        }
        goto $l4575;
        $l4576:;
    }
}
void org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, panda$core$String* p_msg) {
    panda$core$Object* $tmp4587 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
    org$pandalanguage$pandac$Compiler$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$ClassDecl*) $tmp4587)->source, p_position, p_msg);
}
void org$pandalanguage$pandac$Compiler$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$Compiler* self, panda$io$File* p_file, org$pandalanguage$pandac$Position p_pos, panda$core$String* p_msg) {
    if (self->reportErrors.value) {
    {
        panda$core$Int64 $tmp4588 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->errorCount, ((panda$core$Int64) { 1 }));
        self->errorCount = $tmp4588;
        panda$core$String* $tmp4589 = panda$io$File$name$R$panda$core$String(p_file);
        panda$core$String* $tmp4590 = panda$core$String$convert$R$panda$core$String($tmp4589);
        panda$core$String* $tmp4592 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4590, &$s4591);
        panda$core$String* $tmp4593 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp4592, ((panda$core$Object*) wrap_org$pandalanguage$pandac$Position(p_pos)));
        panda$core$String* $tmp4595 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4593, &$s4594);
        panda$core$String* $tmp4596 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4595, p_msg);
        panda$core$String* $tmp4598 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4596, &$s4597);
        panda$io$Console$printLine$panda$core$Object(((panda$core$Object*) $tmp4598));
    }
    }
}
void org$pandalanguage$pandac$Compiler$finish(org$pandalanguage$pandac$Compiler* self) {
    ITable* $tmp4599 = self->codeGenerator->$class->itable;
    while ($tmp4599->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
        $tmp4599 = $tmp4599->next;
    }
    $fn4601 $tmp4600 = $tmp4599->methods[5];
    $tmp4600(self->codeGenerator);
}

