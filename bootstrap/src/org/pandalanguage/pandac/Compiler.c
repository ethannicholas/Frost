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
#include "panda/core/Panda.h"
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
typedef panda$core$String* (*$fn3204)(panda$core$Object*);
typedef panda$core$Int64 (*$fn3315)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn3331)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3337)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3343)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3461)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3467)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3473)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3683)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3689)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3695)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3830)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3836)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3842)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3872)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3878)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3884)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3995)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4001)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4007)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4153)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4159)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4165)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4248)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4254)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4260)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4311)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4317)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4323)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4387)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4393)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4399)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4438)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4444)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4450)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4462)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4468)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4474)(panda$collections$Iterator*);
typedef void (*$fn4505)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$MethodDecl*, org$pandalanguage$pandac$IRNode*);
typedef void (*$fn4508)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$collections$Iterator* (*$fn4512)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4518)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4524)(panda$collections$Iterator*);
typedef void (*$fn4529)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn4532)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn4537)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$collections$Iterator* (*$fn4541)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4547)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4553)(panda$collections$Iterator*);
typedef void (*$fn4557)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$collections$Iterator* (*$fn4573)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4579)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4585)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4594)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4600)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4606)(panda$collections$Iterator*);
typedef void (*$fn4622)(org$pandalanguage$pandac$CodeGenerator*);

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
static panda$core$String $s3113 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x65\x67\x61\x74\x69\x76\x65\x20\x72\x65\x61\x6C\x20\x28", 15, -4804210401981926784, NULL };
static panda$core$String $s3115 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3119 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s3121 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x6F\x74\x20\x28", 5, 21343871803, NULL };
static panda$core$String $s3124 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3129 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s3140 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6E\x75\x6D\x62\x65\x72\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 30, 5304221197101987767, NULL };
static panda$core$String $s3142 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3150 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6E\x75\x6D\x62\x65\x72\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 30, 5304221197101987767, NULL };
static panda$core$String $s3152 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3206 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s3209 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3228 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6C\x61\x73\x73\x20\x27", 7, 213449334494206, NULL };
static panda$core$String $s3230 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x64\x6F\x65\x73\x20\x6E\x6F\x74\x20\x68\x61\x76\x65\x20\x61\x20\x6D\x65\x6D\x62\x65\x72\x20\x6E\x61\x6D\x65\x64\x20\x27", 32, -5677460192622646983, NULL };
static panda$core$String $s3233 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3300 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x75\x6E\x72\x65\x73\x6F\x6C\x76\x65\x64\x20\x72\x61\x6E\x67\x65\x3E", 18, -1293962867859660245, NULL };
static panda$core$String $s3309 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x72\x65\x66\x65\x72\x65\x6E\x63\x65\x20\x27\x73\x65\x6C\x66\x27\x20\x66\x72\x6F\x6D\x20\x61\x20\x40\x63\x6C\x61\x73\x73\x20\x6D\x65\x74\x68\x6F\x64", 44, -511889306060728385, NULL };
static panda$core$String $s3327 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3350 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s3353 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3357 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3368 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x72\x65\x66\x65\x72\x65\x6E\x63\x65\x20\x27\x73\x75\x70\x65\x72\x27\x20\x66\x72\x6F\x6D\x20\x61\x20\x40\x63\x6C\x61\x73\x73\x20\x6D\x65\x74\x68\x6F\x64", 45, 3734810722724983720, NULL };
static panda$core$String $s3376 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s3400 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6C\x75\x65\x20\x6F\x66\x20\x74\x79\x70\x65\x20\x27", 15, -1620219380461029456, NULL };
static panda$core$String $s3402 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x70\x6F\x73\x73\x69\x62\x6C\x79\x20\x62\x65\x20\x61\x6E\x20\x69\x6E\x73\x74\x61\x6E\x63\x65\x20\x6F\x66\x20", 36, -427166674877421096, NULL };
static panda$core$String $s3404 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3406 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3433 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x64\x6F\x65\x73\x20\x6E\x6F\x74\x20\x72\x65\x74\x75\x72\x6E\x20\x61\x20\x76\x61\x6C\x75\x65", 24, -3977552604268313933, NULL };
static panda$core$String $s3584 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 161, NULL };
static panda$core$String $s3588 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 163, NULL };
static panda$core$String $s3593 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x49\x74\x65\x72", 5, 14332680541, NULL };
static panda$core$String $s3616 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x65\x74\x5F\x64\x6F\x6E\x65", 8, 21980003879763538, NULL };
static panda$core$String $s3621 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21", 1, 134, NULL };
static panda$core$String $s3633 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x65\x78\x74", 4, 218436048, NULL };
static panda$core$String $s3719 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x74\x65\x72\x61\x74\x6F\x72", 8, 22210198075044275, NULL };
static panda$core$String $s3727 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6E\x20\x49\x74\x65\x72\x61\x62\x6C\x65\x20\x6F\x72\x20\x49\x74\x65\x72\x61\x74\x6F\x72\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 45, 562271959045909027, NULL };
static panda$core$String $s3729 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3792 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x63\x6C\x61\x72\x61\x74\x69\x6F\x6E\x20\x68\x61\x73\x20\x6E\x65\x69\x74\x68\x65\x72\x20\x61\x20\x74\x79\x70\x65\x20\x6E\x6F\x72\x20\x61\x20\x76\x61\x6C\x75\x65", 42, 71025131614347466, NULL };
static panda$core$String $s3853 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x62\x72\x65\x61\x6B\x20", 7, 149654778879689, NULL };
static panda$core$String $s3855 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20\x69\x6E\x73\x69\x64\x65\x20\x61\x20\x6C\x6F\x6F\x70\x20\x6C\x61\x62\x65\x6C\x6C\x65\x64\x20", 33, 5869484791969643332, NULL };
static panda$core$String $s3857 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3859 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A\x27", 2, 16098, NULL };
static panda$core$String $s3864 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x62\x72\x65\x61\x6B\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20\x69\x6E\x73\x69\x64\x65\x20\x61\x20\x6C\x6F\x6F\x70", 29, -2107280000252113069, NULL };
static panda$core$String $s3895 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x63\x6F\x6E\x74\x69\x6E\x75\x65\x20", 10, 6626032424543403513, NULL };
static panda$core$String $s3897 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20\x69\x6E\x73\x69\x64\x65\x20\x61\x20\x6C\x6F\x6F\x70\x20\x6C\x61\x62\x65\x6C\x6C\x65\x64\x20", 33, 5869484791969643332, NULL };
static panda$core$String $s3899 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3901 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A\x27", 2, 16098, NULL };
static panda$core$String $s3906 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x63\x6F\x6E\x74\x69\x6E\x75\x65\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20\x69\x6E\x73\x69\x64\x65\x20\x61\x20\x6C\x6F\x6F\x70", 32, -6048052453244835837, NULL };
static panda$core$String $s3920 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x72\x65\x74\x75\x72\x6E\x20\x61\x20\x76\x61\x6C\x75\x65\x20\x66\x72\x6F\x6D\x20\x61\x20\x6D\x65\x74\x68\x6F\x64\x20\x77\x69\x74\x68\x20\x6E\x6F\x20\x72\x65\x74\x75\x72\x6E\x20\x74\x79\x70\x65", 55, -6755143087675264705, NULL };
static panda$core$String $s3934 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x72\x65\x74\x75\x72\x6E\x20\x76\x61\x6C\x75\x65", 23, 6159277012237708805, NULL };
static panda$core$String $s3954 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6C\x75\x65", 5, 22890280642, NULL };
static panda$core$String $s4021 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3D", 1, 162, NULL };
static panda$core$String $s4058 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1, 225, NULL };
static panda$core$String $s4109 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x6D\x61\x74\x63\x68\x24", 7, 146584075981198, NULL };
static panda$core$String $s4111 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5F", 1, 196, NULL };
static panda$core$String $s4114 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4612 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A", 1, 159, NULL };
static panda$core$String $s4615 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A\x20\x65\x72\x72\x6F\x72\x3A\x20", 9, 1725281418740475535, NULL };
static panda$core$String $s4618 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };

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
    panda$core$Int64 $tmp3117;
    panda$core$Int64 $tmp3127;
    panda$collections$Array* children3135;
    panda$collections$Array* children3145;
    org$pandalanguage$pandac$IRNode* coerced3154;
    panda$collections$Array* children3157;
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
                case 1045:
                {
                    panda$core$String* $tmp3114 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3113, p_base->payload);
                    panda$core$String* $tmp3116 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3114, &$s3115);
                    panda$core$Panda$floatToIntBits$panda$core$Real64$R$panda$core$Int64(&$tmp3117, ((panda$core$Real64$wrapper*) p_base->payload)->value);
                    panda$core$String* $tmp3118 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3116, ((panda$core$Object*) wrap_panda$core$Int64($tmp3117)));
                    panda$core$String* $tmp3120 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3118, &$s3119);
                    panda$io$Console$printLine$panda$core$Object(((panda$core$Object*) $tmp3120));
                    panda$core$Real64 $tmp3122 = panda$core$Real64$$SUB$R$panda$core$Real64(((panda$core$Real64$wrapper*) p_base->payload)->value);
                    panda$core$String* $tmp3123 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3121, ((panda$core$Object*) wrap_panda$core$Real64($tmp3122)));
                    panda$core$String* $tmp3125 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3123, &$s3124);
                    panda$core$Real64 $tmp3126 = panda$core$Real64$$SUB$R$panda$core$Real64(((panda$core$Real64$wrapper*) p_base->payload)->value);
                    panda$core$Panda$floatToIntBits$panda$core$Real64$R$panda$core$Int64(&$tmp3127, $tmp3126);
                    panda$core$String* $tmp3128 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3125, ((panda$core$Object*) wrap_panda$core$Int64($tmp3127)));
                    panda$core$String* $tmp3130 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3128, &$s3129);
                    panda$io$Console$printLine$panda$core$Object(((panda$core$Object*) $tmp3130));
                    org$pandalanguage$pandac$IRNode* $tmp3131 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp3131->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp3131->refCount.value = 1;
                    panda$core$Real64 $tmp3133 = panda$core$Real64$$SUB$R$panda$core$Real64(((panda$core$Real64$wrapper*) p_base->payload)->value);
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Real64($tmp3131, ((panda$core$Int64) { 1045 }), p_position, p_base->type, $tmp3133);
                    return $tmp3131;
                }
                break;
                default:
                {
                    panda$core$Bit $tmp3134 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_base->type);
                    if ($tmp3134.value) {
                    {
                        panda$collections$Array* $tmp3136 = (panda$collections$Array*) malloc(40);
                        $tmp3136->$class = (panda$core$Class*) &panda$collections$Array$class;
                        $tmp3136->refCount.value = 1;
                        panda$collections$Array$init($tmp3136);
                        children3135 = $tmp3136;
                        panda$collections$Array$add$panda$collections$Array$T(children3135, ((panda$core$Object*) p_base));
                        org$pandalanguage$pandac$IRNode* $tmp3138 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                        $tmp3138->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                        $tmp3138->refCount.value = 1;
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3138, ((panda$core$Int64) { 1041 }), p_base->position, p_base->type, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 52 }))), ((panda$collections$ListView*) children3135));
                        return $tmp3138;
                    }
                    }
                }
            }
            panda$core$String* $tmp3141 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3140, ((panda$core$Object*) p_base->type));
            panda$core$String* $tmp3143 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3141, &$s3142);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_base->position, $tmp3143);
            return NULL;
        }
        break;
        case 50:
        {
            panda$core$Bit $tmp3144 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_base->type);
            if ($tmp3144.value) {
            {
                panda$collections$Array* $tmp3146 = (panda$collections$Array*) malloc(40);
                $tmp3146->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp3146->refCount.value = 1;
                panda$collections$Array$init($tmp3146);
                children3145 = $tmp3146;
                panda$collections$Array$add$panda$collections$Array$T(children3145, ((panda$core$Object*) p_base));
                org$pandalanguage$pandac$IRNode* $tmp3148 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp3148->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp3148->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3148, ((panda$core$Int64) { 1041 }), p_base->position, p_base->type, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 50 }))), ((panda$collections$ListView*) children3145));
                return $tmp3148;
            }
            }
            else {
            {
                panda$core$String* $tmp3151 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3150, ((org$pandalanguage$pandac$Symbol*) p_base->type)->name);
                panda$core$String* $tmp3153 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3151, &$s3152);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_base->position, $tmp3153);
                return NULL;
            }
            }
        }
        break;
        case 49:
        {
            org$pandalanguage$pandac$Type* $tmp3155 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode* $tmp3156 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_base, $tmp3155);
            coerced3154 = $tmp3156;
            if (((panda$core$Bit) { coerced3154 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp3158 = (panda$collections$Array*) malloc(40);
            $tmp3158->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp3158->refCount.value = 1;
            panda$collections$Array$init($tmp3158);
            children3157 = $tmp3158;
            panda$collections$Array$add$panda$collections$Array$T(children3157, ((panda$core$Object*) coerced3154));
            org$pandalanguage$pandac$IRNode* $tmp3160 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3160->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3160->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3160, ((panda$core$Int64) { 1041 }), p_base->position, p_base->type, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 49 }))), ((panda$collections$ListView*) children3157));
            return $tmp3160;
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
    org$pandalanguage$pandac$IRNode* base3165;
    panda$core$Bit $tmp3162 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_p->kind, ((panda$core$Int64) { 112 }));
    PANDA_ASSERT($tmp3162.value);
    panda$core$Int64 $tmp3163 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_p->children);
    panda$core$Bit $tmp3164 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3163, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3164.value);
    panda$core$Object* $tmp3166 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_p->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3167 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3166));
    base3165 = $tmp3167;
    if (((panda$core$Bit) { base3165 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3168 = org$pandalanguage$pandac$Compiler$compilePrefix$panda$core$Int64$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$R$org$pandalanguage$pandac$IRNode$Q(self, ((panda$core$Int64$wrapper*) p_p->payload)->value, base3165, p_p->position);
    return $tmp3168;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileCall$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_c) {
    org$pandalanguage$pandac$IRNode* m3170;
    panda$collections$Array* args3173;
    panda$core$Range$LTpanda$core$Int64$GT $tmp3176;
    org$pandalanguage$pandac$IRNode* arg3191;
    panda$core$Bit $tmp3169 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_c->kind, ((panda$core$Int64) { 107 }));
    PANDA_ASSERT($tmp3169.value);
    panda$core$Object* $tmp3171 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_c->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3172 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3171));
    m3170 = $tmp3172;
    if (((panda$core$Bit) { m3170 != NULL }).value) {
    {
        panda$collections$Array* $tmp3174 = (panda$collections$Array*) malloc(40);
        $tmp3174->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp3174->refCount.value = 1;
        panda$collections$Array$init($tmp3174);
        args3173 = $tmp3174;
        panda$core$Int64 $tmp3177 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_c->children);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp3176, ((panda$core$Int64) { 1 }), $tmp3177, ((panda$core$Bit) { false }));
        int64_t $tmp3179 = $tmp3176.min.value;
        panda$core$Int64 i3178 = { $tmp3179 };
        int64_t $tmp3181 = $tmp3176.max.value;
        bool $tmp3182 = $tmp3176.inclusive.value;
        if ($tmp3182) goto $l3189; else goto $l3190;
        $l3189:;
        if ($tmp3179 <= $tmp3181) goto $l3183; else goto $l3185;
        $l3190:;
        if ($tmp3179 < $tmp3181) goto $l3183; else goto $l3185;
        $l3183:;
        {
            panda$core$Object* $tmp3192 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_c->children, i3178);
            org$pandalanguage$pandac$IRNode* $tmp3193 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3192));
            arg3191 = $tmp3193;
            if (((panda$core$Bit) { arg3191 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(args3173, ((panda$core$Object*) arg3191));
        }
        $l3186:;
        int64_t $tmp3195 = $tmp3181 - i3178.value;
        if ($tmp3182) goto $l3196; else goto $l3197;
        $l3196:;
        if ($tmp3195 >= 1) goto $l3194; else goto $l3185;
        $l3197:;
        if ($tmp3195 > 1) goto $l3194; else goto $l3185;
        $l3194:;
        i3178.value += 1;
        goto $l3183;
        $l3185:;
        org$pandalanguage$pandac$IRNode* $tmp3200 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, m3170, ((panda$collections$ListView*) args3173));
        return $tmp3200;
    }
    }
    return NULL;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$String$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_base, panda$core$String* p_name) {
    org$pandalanguage$pandac$ClassDecl* cl3201;
    panda$core$String* name3203;
    org$pandalanguage$pandac$ClassDecl* cl3211;
    org$pandalanguage$pandac$SymbolTable* st3224;
    org$pandalanguage$pandac$Symbol* s3226;
    switch (p_base->kind.value) {
        case 1001:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp3202 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Type*) p_base->payload));
            cl3201 = $tmp3202;
        }
        break;
        case 1037:
        {
            panda$core$String* $tmp3205 = (($fn3204) p_base->payload->$class->vtable[0])(p_base->payload);
            panda$core$String* $tmp3207 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3205, &$s3206);
            panda$core$String* $tmp3208 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3207, p_name);
            panda$core$String* $tmp3210 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3208, &$s3209);
            name3203 = $tmp3210;
            org$pandalanguage$pandac$ClassDecl* $tmp3212 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, name3203);
            cl3211 = $tmp3212;
            if (((panda$core$Bit) { cl3211 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp3213 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp3213->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp3213->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp3215 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$Type* $tmp3216 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl3211);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp3213, ((panda$core$Int64) { 1001 }), p_position, $tmp3215, $tmp3216);
                return $tmp3213;
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp3217 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3217->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3217->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3219 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$String($tmp3217, ((panda$core$Int64) { 1037 }), p_position, $tmp3219, name3203);
            return $tmp3217;
        }
        break;
        case 1024:
        {
            panda$core$Object* $tmp3220 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, ((org$pandalanguage$pandac$ClassDecl*) $tmp3220));
            panda$core$Object* $tmp3221 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
            org$pandalanguage$pandac$ClassDecl* $tmp3222 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$ClassDecl*) $tmp3221)->rawSuper);
            cl3201 = $tmp3222;
        }
        break;
        default:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp3223 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_base->type);
            cl3201 = $tmp3223;
        }
    }
    if (((panda$core$Bit) { cl3201 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp3225 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl3201);
    st3224 = $tmp3225;
    org$pandalanguage$pandac$Symbol* $tmp3227 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(st3224, p_name);
    s3226 = $tmp3227;
    if (((panda$core$Bit) { s3226 == NULL }).value) {
    {
        panda$core$String* $tmp3229 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3228, ((panda$core$Object*) p_base->type));
        panda$core$String* $tmp3231 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3229, &$s3230);
        panda$core$String* $tmp3232 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3231, p_name);
        panda$core$String* $tmp3234 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3232, &$s3233);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp3234);
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3235 = org$pandalanguage$pandac$Compiler$symbolRef$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, p_base, s3226, st3224);
    return $tmp3235;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_d) {
    org$pandalanguage$pandac$IRNode* base3239;
    panda$core$Bit $tmp3236 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_d->kind, ((panda$core$Int64) { 108 }));
    PANDA_ASSERT($tmp3236.value);
    panda$core$Int64 $tmp3237 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp3238 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3237, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3238.value);
    panda$core$Object* $tmp3240 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3241 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3240));
    base3239 = $tmp3241;
    if (((panda$core$Bit) { base3239 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp3243 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(base3239->kind, ((panda$core$Int64) { 1037 }));
    bool $tmp3242 = $tmp3243.value;
    if (!$tmp3242) goto $l3244;
    panda$core$Bit $tmp3245 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(base3239->kind, ((panda$core$Int64) { 1024 }));
    $tmp3242 = $tmp3245.value;
    $l3244:;
    panda$core$Bit $tmp3246 = { $tmp3242 };
    if ($tmp3246.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3247 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, base3239);
        base3239 = $tmp3247;
    }
    }
    if (((panda$core$Bit) { base3239 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3248 = org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$String$R$org$pandalanguage$pandac$IRNode$Q(self, p_d->position, base3239, ((panda$core$String*) p_d->payload));
    return $tmp3248;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIdentifier$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_i) {
    org$pandalanguage$pandac$Symbol* s3250;
    panda$core$Bit $tmp3249 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_i->kind, ((panda$core$Int64) { 106 }));
    PANDA_ASSERT($tmp3249.value);
    org$pandalanguage$pandac$Symbol* $tmp3251 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(self->symbolTable, ((panda$core$String*) p_i->payload));
    s3250 = $tmp3251;
    if (((panda$core$Bit) { s3250 == NULL }).value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp3252 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((panda$core$String*) p_i->payload));
        s3250 = ((org$pandalanguage$pandac$Symbol*) $tmp3252);
    }
    }
    if (((panda$core$Bit) { s3250 != NULL }).value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3253 = org$pandalanguage$pandac$Compiler$symbolRef$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q(self, p_i->position, NULL, s3250, self->symbolTable);
        return $tmp3253;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3254 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3254->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3254->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3256 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$String($tmp3254, ((panda$core$Int64) { 1037 }), p_i->position, $tmp3256, ((panda$core$String*) p_i->payload));
    return $tmp3254;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_t) {
    org$pandalanguage$pandac$Type* resolved3257;
    org$pandalanguage$pandac$Type* $tmp3258 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, p_t);
    org$pandalanguage$pandac$Type* $tmp3259 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, $tmp3258);
    resolved3257 = $tmp3259;
    if (((panda$core$Bit) { resolved3257 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3260 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3260->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3260->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3262 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp3260, ((panda$core$Int64) { 1001 }), p_t->position, $tmp3262, resolved3257);
    return $tmp3260;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileRange$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_r) {
    org$pandalanguage$pandac$IRNode* start3270;
    org$pandalanguage$pandac$IRNode* end3278;
    org$pandalanguage$pandac$IRNode* step3286;
    panda$collections$Array* children3293;
    org$pandalanguage$pandac$Position $tmp3301;
    panda$core$Bit $tmp3264 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_r->kind, ((panda$core$Int64) { 105 }));
    bool $tmp3263 = $tmp3264.value;
    if ($tmp3263) goto $l3265;
    panda$core$Bit $tmp3266 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_r->kind, ((panda$core$Int64) { 104 }));
    $tmp3263 = $tmp3266.value;
    $l3265:;
    panda$core$Bit $tmp3267 = { $tmp3263 };
    PANDA_ASSERT($tmp3267.value);
    panda$core$Int64 $tmp3268 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_r->children);
    panda$core$Bit $tmp3269 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3268, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp3269.value);
    panda$core$Object* $tmp3271 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp3272 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp3271)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp3272.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3273 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3273->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3273->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp3275 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3273, ((panda$core$Int64) { 1030 }), p_r->position, $tmp3275);
        start3270 = $tmp3273;
    }
    }
    else {
    {
        panda$core$Object* $tmp3276 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp3277 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3276));
        start3270 = $tmp3277;
        if (((panda$core$Bit) { start3270 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$core$Object* $tmp3279 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp3280 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp3279)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp3280.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3281 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3281->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3281->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp3283 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3281, ((panda$core$Int64) { 1030 }), p_r->position, $tmp3283);
        end3278 = $tmp3281;
    }
    }
    else {
    {
        panda$core$Object* $tmp3284 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$IRNode* $tmp3285 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3284));
        end3278 = $tmp3285;
        if (((panda$core$Bit) { end3278 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$core$Object* $tmp3287 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 2 }));
    panda$core$Bit $tmp3288 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp3287)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp3288.value) {
    {
        step3286 = NULL;
    }
    }
    else {
    {
        panda$core$Object* $tmp3289 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$IRNode* $tmp3290 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3289));
        org$pandalanguage$pandac$Type* $tmp3291 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp3292 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3290, $tmp3291);
        step3286 = $tmp3292;
        if (((panda$core$Bit) { step3286 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$collections$Array* $tmp3294 = (panda$collections$Array*) malloc(40);
    $tmp3294->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3294->refCount.value = 1;
    panda$collections$Array$init($tmp3294);
    children3293 = $tmp3294;
    panda$collections$Array$add$panda$collections$Array$T(children3293, ((panda$core$Object*) start3270));
    panda$collections$Array$add$panda$collections$Array$T(children3293, ((panda$core$Object*) end3278));
    if (((panda$core$Bit) { step3286 != NULL }).value) {
    {
        panda$collections$Array$add$panda$collections$Array$T(children3293, ((panda$core$Object*) step3286));
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3296 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3296->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3296->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3298 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp3298->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp3298->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp3301);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp3298, &$s3300, ((panda$core$Int64) { 17 }), $tmp3301, ((panda$core$Bit) { true }));
    panda$core$Bit $tmp3302 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_r->kind, ((panda$core$Int64) { 104 }));
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3296, ((panda$core$Int64) { 1031 }), p_r->position, $tmp3298, ((panda$core$Object*) wrap_panda$core$Bit($tmp3302)), ((panda$collections$ListView*) children3293));
    return $tmp3296;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$IRNode* $tmp3303 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3303->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3303->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3305 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$String($tmp3303, ((panda$core$Int64) { 1033 }), p_s->position, $tmp3305, ((panda$core$String*) p_s->payload));
    return $tmp3303;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileSelf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$Type* type3310;
    org$pandalanguage$pandac$ClassDecl* cl3311;
    panda$collections$Array* subtypes3318;
    panda$core$MutableString* name3322;
    panda$core$Char8 $tmp3325;
    panda$core$String* separator3326;
    panda$collections$Iterator* p$Iter3328;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* p3340;
    panda$collections$Array* pType3345;
    panda$core$String* pName3348;
    panda$core$Char8 $tmp3358;
    panda$core$Bit $tmp3306 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_s->kind, ((panda$core$Int64) { 114 }));
    PANDA_ASSERT($tmp3306.value);
    panda$core$Object* $tmp3307 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
    panda$core$Bit $tmp3308 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp3307)->annotations);
    if ($tmp3308.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_s->position, &$s3309);
        return NULL;
    }
    }
    panda$core$Object* $tmp3312 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
    cl3311 = ((org$pandalanguage$pandac$ClassDecl*) $tmp3312);
    ITable* $tmp3313 = ((panda$collections$CollectionView*) cl3311->parameters)->$class->itable;
    while ($tmp3313->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp3313 = $tmp3313->next;
    }
    $fn3315 $tmp3314 = $tmp3313->methods[0];
    panda$core$Int64 $tmp3316 = $tmp3314(((panda$collections$CollectionView*) cl3311->parameters));
    panda$core$Bit $tmp3317 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3316, ((panda$core$Int64) { 0 }));
    if ($tmp3317.value) {
    {
        panda$collections$Array* $tmp3319 = (panda$collections$Array*) malloc(40);
        $tmp3319->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp3319->refCount.value = 1;
        panda$collections$Array$init($tmp3319);
        subtypes3318 = $tmp3319;
        org$pandalanguage$pandac$Type* $tmp3321 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl3311);
        panda$collections$Array$add$panda$collections$Array$T(subtypes3318, ((panda$core$Object*) $tmp3321));
        panda$core$MutableString* $tmp3323 = (panda$core$MutableString*) malloc(48);
        $tmp3323->$class = (panda$core$Class*) &panda$core$MutableString$class;
        $tmp3323->refCount.value = 1;
        panda$core$MutableString$init$panda$core$String($tmp3323, ((org$pandalanguage$pandac$Symbol*) cl3311)->name);
        name3322 = $tmp3323;
        panda$core$Char8$init$panda$core$UInt8(&$tmp3325, ((panda$core$UInt8) { 60 }));
        panda$core$MutableString$append$panda$core$Char8(name3322, $tmp3325);
        separator3326 = &$s3327;
        {
            ITable* $tmp3329 = ((panda$collections$Iterable*) cl3311->parameters)->$class->itable;
            while ($tmp3329->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3329 = $tmp3329->next;
            }
            $fn3331 $tmp3330 = $tmp3329->methods[0];
            panda$collections$Iterator* $tmp3332 = $tmp3330(((panda$collections$Iterable*) cl3311->parameters));
            p$Iter3328 = $tmp3332;
            $l3333:;
            ITable* $tmp3335 = p$Iter3328->$class->itable;
            while ($tmp3335->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3335 = $tmp3335->next;
            }
            $fn3337 $tmp3336 = $tmp3335->methods[0];
            panda$core$Bit $tmp3338 = $tmp3336(p$Iter3328);
            panda$core$Bit $tmp3339 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3338);
            if (!$tmp3339.value) goto $l3334;
            {
                ITable* $tmp3341 = p$Iter3328->$class->itable;
                while ($tmp3341->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3341 = $tmp3341->next;
                }
                $fn3343 $tmp3342 = $tmp3341->methods[1];
                panda$core$Object* $tmp3344 = $tmp3342(p$Iter3328);
                p3340 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp3344);
                panda$collections$Array* $tmp3346 = (panda$collections$Array*) malloc(40);
                $tmp3346->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp3346->refCount.value = 1;
                panda$collections$Array$init($tmp3346);
                pType3345 = $tmp3346;
                panda$collections$Array$add$panda$collections$Array$T(pType3345, ((panda$core$Object*) p3340->bound));
                panda$core$String* $tmp3349 = panda$core$String$convert$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) cl3311)->name);
                panda$core$String* $tmp3351 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3349, &$s3350);
                panda$core$String* $tmp3352 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3351, ((org$pandalanguage$pandac$Symbol*) p3340)->name);
                panda$core$String* $tmp3354 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3352, &$s3353);
                pName3348 = $tmp3354;
                panda$core$MutableString$append$panda$core$String(name3322, separator3326);
                panda$core$MutableString$append$panda$core$String(name3322, pName3348);
                org$pandalanguage$pandac$Type* $tmp3355 = (org$pandalanguage$pandac$Type*) malloc(96);
                $tmp3355->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
                $tmp3355->refCount.value = 1;
                org$pandalanguage$pandac$Type$init$org$pandalanguage$pandac$ClassDecl$GenericParameter($tmp3355, p3340);
                panda$collections$Array$add$panda$collections$Array$T(subtypes3318, ((panda$core$Object*) $tmp3355));
                separator3326 = &$s3357;
            }
            goto $l3333;
            $l3334:;
        }
        panda$core$Char8$init$panda$core$UInt8(&$tmp3358, ((panda$core$UInt8) { 62 }));
        panda$core$MutableString$append$panda$core$Char8(name3322, $tmp3358);
        org$pandalanguage$pandac$Type* $tmp3359 = (org$pandalanguage$pandac$Type*) malloc(96);
        $tmp3359->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
        $tmp3359->refCount.value = 1;
        panda$core$String* $tmp3361 = panda$core$MutableString$finish$R$panda$core$String(name3322);
        org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp3359, $tmp3361, ((panda$core$Int64) { 21 }), p_s->position, ((panda$collections$ListView*) subtypes3318), ((panda$core$Bit) { true }));
        type3310 = $tmp3359;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp3362 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl3311);
        type3310 = $tmp3362;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3363 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3363->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3363->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3363, ((panda$core$Int64) { 1025 }), p_s->position, type3310);
    return $tmp3363;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileSuper$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$ClassDecl* cl3369;
    panda$core$Bit $tmp3365 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_s->kind, ((panda$core$Int64) { 115 }));
    PANDA_ASSERT($tmp3365.value);
    panda$core$Object* $tmp3366 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
    panda$core$Bit $tmp3367 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp3366)->annotations);
    if ($tmp3367.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_s->position, &$s3368);
        return NULL;
    }
    }
    panda$core$Object* $tmp3370 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
    cl3369 = ((org$pandalanguage$pandac$ClassDecl*) $tmp3370);
    PANDA_ASSERT(cl3369->resolved.value);
    org$pandalanguage$pandac$IRNode* $tmp3371 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3371->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3371->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3371, ((panda$core$Int64) { 1024 }), p_s->position, cl3369->rawSuper);
    return $tmp3371;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_expr, org$pandalanguage$pandac$Type* p_rawType) {
    org$pandalanguage$pandac$IRNode* value3373;
    panda$core$String$Index$nullable index3375;
    org$pandalanguage$pandac$Type* type3382;
    org$pandalanguage$pandac$IRNode* base3384;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp3387;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp3390;
    org$pandalanguage$pandac$Type* type3394;
    org$pandalanguage$pandac$IRNode* $tmp3374 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr);
    value3373 = $tmp3374;
    if (((panda$core$Bit) { value3373 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$String$Index$nullable $tmp3377 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(((org$pandalanguage$pandac$Symbol*) p_rawType)->name, &$s3376);
    index3375 = $tmp3377;
    panda$core$Bit $tmp3379 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_rawType->typeKind, ((panda$core$Int64) { 10 }));
    bool $tmp3378 = $tmp3379.value;
    if (!$tmp3378) goto $l3380;
    $tmp3378 = ((panda$core$Bit) { index3375.nonnull }).value;
    $l3380:;
    panda$core$Bit $tmp3381 = { $tmp3378 };
    if ($tmp3381.value) {
    {
        PANDA_ASSERT(self->reportErrors.value);
        self->reportErrors = ((panda$core$Bit) { false });
        org$pandalanguage$pandac$Type* $tmp3383 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, p_rawType);
        type3382 = $tmp3383;
        self->reportErrors = ((panda$core$Bit) { true });
        if (((panda$core$Bit) { type3382 == NULL }).value) {
        {
            org$pandalanguage$pandac$Type* $tmp3385 = (org$pandalanguage$pandac$Type*) malloc(96);
            $tmp3385->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp3385->refCount.value = 1;
            panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp3387, ((panda$core$String$Index$nullable) { .nonnull = false }), index3375, ((panda$core$Bit) { false }));
            panda$core$String* $tmp3388 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) p_rawType)->name, $tmp3387);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position($tmp3385, $tmp3388, ((panda$core$Int64) { 10 }), p_position);
            org$pandalanguage$pandac$IRNode* $tmp3389 = org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, p_expr, $tmp3385);
            base3384 = $tmp3389;
            if (((panda$core$Bit) { base3384 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$String$Index $tmp3391 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(((org$pandalanguage$pandac$Symbol*) p_rawType)->name, ((panda$core$String$Index) index3375.value));
            panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp3390, ((panda$core$String$Index$nullable) { $tmp3391, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$core$String* $tmp3392 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) p_rawType)->name, $tmp3390);
            org$pandalanguage$pandac$IRNode* $tmp3393 = org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$String$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, base3384, $tmp3392);
            return $tmp3393;
        }
        }
    }
    }
    org$pandalanguage$pandac$Type* $tmp3395 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, p_rawType);
    type3394 = $tmp3395;
    if (((panda$core$Bit) { type3394 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Int64$nullable $tmp3396 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, value3373, type3394);
    if (((panda$core$Bit) { $tmp3396.nonnull }).value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3397 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, value3373, type3394);
        return $tmp3397;
    }
    }
    panda$core$Bit $tmp3398 = org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, value3373, type3394);
    if ($tmp3398.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3399 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, value3373, p_position, ((panda$core$Bit) { true }), type3394);
        return $tmp3399;
    }
    }
    else {
    {
        panda$core$String* $tmp3401 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3400, ((panda$core$Object*) value3373->type));
        panda$core$String* $tmp3403 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3401, &$s3402);
        panda$core$String* $tmp3405 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3404, ((panda$core$Object*) type3394));
        panda$core$String* $tmp3407 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3405, &$s3406);
        panda$core$String* $tmp3408 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3403, $tmp3407);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp3408);
        return NULL;
    }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_c) {
    panda$core$Bit $tmp3409 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_c->kind, ((panda$core$Int64) { 111 }));
    PANDA_ASSERT($tmp3409.value);
    panda$core$Int64 $tmp3410 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_c->children);
    panda$core$Bit $tmp3411 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3410, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp3411.value);
    panda$core$Object* $tmp3412 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_c->children, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp3413 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_c->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Type* $tmp3414 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, ((org$pandalanguage$pandac$ASTNode*) $tmp3413));
    org$pandalanguage$pandac$IRNode* $tmp3415 = org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_c->position, ((org$pandalanguage$pandac$ASTNode*) $tmp3412), $tmp3414);
    return $tmp3415;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileNull$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_n) {
    panda$core$Bit $tmp3416 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_n->kind, ((panda$core$Int64) { 117 }));
    PANDA_ASSERT($tmp3416.value);
    org$pandalanguage$pandac$IRNode* $tmp3417 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3417->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3417->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3419 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3417, ((panda$core$Int64) { 1030 }), p_n->position, $tmp3419);
    return $tmp3417;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_e) {
    org$pandalanguage$pandac$IRNode* result3424;
    switch (p_e->kind.value) {
        case 103:
        {
            org$pandalanguage$pandac$IRNode* $tmp3420 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3420;
        }
        break;
        case 116:
        {
            org$pandalanguage$pandac$IRNode* $tmp3421 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3421->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3421->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3423 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp3421, ((panda$core$Int64) { 1011 }), p_e->position, $tmp3423, ((panda$core$Bit$wrapper*) p_e->payload)->value);
            return $tmp3421;
        }
        break;
        case 107:
        {
            org$pandalanguage$pandac$IRNode* $tmp3425 = org$pandalanguage$pandac$Compiler$compileCall$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            result3424 = $tmp3425;
            bool $tmp3426 = ((panda$core$Bit) { result3424 != NULL }).value;
            if (!$tmp3426) goto $l3427;
            org$pandalanguage$pandac$Type* $tmp3428 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp3429 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(result3424->type, $tmp3428);
            $tmp3426 = $tmp3429.value;
            $l3427:;
            panda$core$Bit $tmp3430 = { $tmp3426 };
            if ($tmp3430.value) {
            {
                panda$core$Bit $tmp3431 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result3424->kind, ((panda$core$Int64) { 1005 }));
                PANDA_ASSERT($tmp3431.value);
                panda$core$String* $tmp3432 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(((org$pandalanguage$pandac$MethodRef*) result3424->payload)->value);
                panda$core$String* $tmp3434 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3432, &$s3433);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, result3424->position, $tmp3434);
                return NULL;
            }
            }
            return result3424;
        }
        break;
        case 108:
        {
            org$pandalanguage$pandac$IRNode* $tmp3435 = org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3435;
        }
        break;
        case 106:
        {
            org$pandalanguage$pandac$IRNode* $tmp3436 = org$pandalanguage$pandac$Compiler$compileIdentifier$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3436;
        }
        break;
        case 102:
        {
            org$pandalanguage$pandac$IRNode* $tmp3437 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3437->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3437->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3439 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp3437, ((panda$core$Int64) { 1004 }), p_e->position, $tmp3439, ((panda$core$UInt64$wrapper*) p_e->payload)->value);
            return $tmp3437;
        }
        break;
        case 157:
        {
            org$pandalanguage$pandac$IRNode* $tmp3440 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3440->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3440->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3442 = org$pandalanguage$pandac$Type$RealLiteral$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Real64($tmp3440, ((panda$core$Int64) { 1045 }), p_e->position, $tmp3442, ((panda$core$Real64$wrapper*) p_e->payload)->value);
            return $tmp3440;
        }
        break;
        case 112:
        {
            org$pandalanguage$pandac$IRNode* $tmp3443 = org$pandalanguage$pandac$Compiler$compilePrefix$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3443;
        }
        break;
        case 104:
        case 105:
        {
            org$pandalanguage$pandac$IRNode* $tmp3444 = org$pandalanguage$pandac$Compiler$compileRange$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3444;
        }
        break;
        case 113:
        {
            org$pandalanguage$pandac$IRNode* $tmp3445 = org$pandalanguage$pandac$Compiler$compileString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3445;
        }
        break;
        case 109:
        case 154:
        case 110:
        {
            org$pandalanguage$pandac$IRNode* $tmp3446 = org$pandalanguage$pandac$Compiler$compileType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3446;
        }
        break;
        case 114:
        {
            org$pandalanguage$pandac$IRNode* $tmp3447 = org$pandalanguage$pandac$Compiler$compileSelf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3447;
        }
        break;
        case 115:
        {
            org$pandalanguage$pandac$IRNode* $tmp3448 = org$pandalanguage$pandac$Compiler$compileSuper$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3448;
        }
        break;
        case 111:
        {
            org$pandalanguage$pandac$IRNode* $tmp3449 = org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3449;
        }
        break;
        case 117:
        {
            org$pandalanguage$pandac$IRNode* $tmp3450 = org$pandalanguage$pandac$Compiler$compileNull$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode(self, p_e);
            return $tmp3450;
        }
        break;
    }
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBlock$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_b) {
    org$pandalanguage$pandac$SymbolTable* symbols3452;
    panda$collections$Array* result3455;
    panda$collections$Iterator* stmt$Iter3458;
    org$pandalanguage$pandac$ASTNode* stmt3470;
    org$pandalanguage$pandac$IRNode* compiled3475;
    panda$core$Bit $tmp3451 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_b->kind, ((panda$core$Int64) { 126 }));
    PANDA_ASSERT($tmp3451.value);
    org$pandalanguage$pandac$SymbolTable* $tmp3453 = (org$pandalanguage$pandac$SymbolTable*) malloc(48);
    $tmp3453->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp3453->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp3453, self->symbolTable);
    symbols3452 = $tmp3453;
    self->symbolTable = symbols3452;
    panda$collections$Array* $tmp3456 = (panda$collections$Array*) malloc(40);
    $tmp3456->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3456->refCount.value = 1;
    panda$collections$Array$init($tmp3456);
    result3455 = $tmp3456;
    if (((panda$core$Bit) { p_b->children != NULL }).value) {
    {
        {
            ITable* $tmp3459 = ((panda$collections$Iterable*) p_b->children)->$class->itable;
            while ($tmp3459->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3459 = $tmp3459->next;
            }
            $fn3461 $tmp3460 = $tmp3459->methods[0];
            panda$collections$Iterator* $tmp3462 = $tmp3460(((panda$collections$Iterable*) p_b->children));
            stmt$Iter3458 = $tmp3462;
            $l3463:;
            ITable* $tmp3465 = stmt$Iter3458->$class->itable;
            while ($tmp3465->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3465 = $tmp3465->next;
            }
            $fn3467 $tmp3466 = $tmp3465->methods[0];
            panda$core$Bit $tmp3468 = $tmp3466(stmt$Iter3458);
            panda$core$Bit $tmp3469 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3468);
            if (!$tmp3469.value) goto $l3464;
            {
                ITable* $tmp3471 = stmt$Iter3458->$class->itable;
                while ($tmp3471->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3471 = $tmp3471->next;
                }
                $fn3473 $tmp3472 = $tmp3471->methods[1];
                panda$core$Object* $tmp3474 = $tmp3472(stmt$Iter3458);
                stmt3470 = ((org$pandalanguage$pandac$ASTNode*) $tmp3474);
                org$pandalanguage$pandac$IRNode* $tmp3476 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, stmt3470);
                compiled3475 = $tmp3476;
                if (((panda$core$Bit) { compiled3475 == NULL }).value) {
                {
                    panda$core$Object* $tmp3477 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(symbols3452->parents, ((panda$core$Int64) { 0 }));
                    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp3477);
                    return NULL;
                }
                }
                panda$core$Bit $tmp3478 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(compiled3475->kind, ((panda$core$Int64) { 1039 }));
                PANDA_ASSERT($tmp3478.value);
                panda$collections$Array$add$panda$collections$Array$T(result3455, ((panda$core$Object*) compiled3475));
            }
            goto $l3463;
            $l3464:;
        }
    }
    }
    panda$core$Object* $tmp3479 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(symbols3452->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp3479);
    org$pandalanguage$pandac$IRNode* $tmp3480 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3480->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3480->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3480, ((panda$core$Int64) { 1000 }), p_b->position, ((panda$collections$ListView*) result3455));
    return $tmp3480;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_i) {
    org$pandalanguage$pandac$IRNode* test3490;
    org$pandalanguage$pandac$IRNode* ifTrue3495;
    panda$collections$Array* children3498;
    org$pandalanguage$pandac$IRNode* ifFalse3503;
    panda$core$Bit $tmp3482 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_i->kind, ((panda$core$Int64) { 118 }));
    PANDA_ASSERT($tmp3482.value);
    panda$core$Int64 $tmp3484 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_i->children);
    panda$core$Bit $tmp3485 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3484, ((panda$core$Int64) { 2 }));
    bool $tmp3483 = $tmp3485.value;
    if ($tmp3483) goto $l3486;
    panda$core$Int64 $tmp3487 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_i->children);
    panda$core$Bit $tmp3488 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3487, ((panda$core$Int64) { 3 }));
    $tmp3483 = $tmp3488.value;
    $l3486:;
    panda$core$Bit $tmp3489 = { $tmp3483 };
    PANDA_ASSERT($tmp3489.value);
    panda$core$Object* $tmp3491 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_i->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3492 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3491));
    org$pandalanguage$pandac$Type* $tmp3493 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp3494 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3492, $tmp3493);
    test3490 = $tmp3494;
    if (((panda$core$Bit) { test3490 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Object* $tmp3496 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_i->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp3497 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3496));
    ifTrue3495 = $tmp3497;
    if (((panda$core$Bit) { ifTrue3495 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3499 = (panda$collections$Array*) malloc(40);
    $tmp3499->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3499->refCount.value = 1;
    panda$collections$Array$init($tmp3499);
    children3498 = $tmp3499;
    panda$collections$Array$add$panda$collections$Array$T(children3498, ((panda$core$Object*) test3490));
    panda$collections$Array$add$panda$collections$Array$T(children3498, ((panda$core$Object*) ifTrue3495));
    panda$core$Int64 $tmp3501 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_i->children);
    panda$core$Bit $tmp3502 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3501, ((panda$core$Int64) { 3 }));
    if ($tmp3502.value) {
    {
        panda$core$Object* $tmp3504 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_i->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$IRNode* $tmp3505 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3504));
        ifFalse3503 = $tmp3505;
        if (((panda$core$Bit) { ifFalse3503 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children3498, ((panda$core$Object*) ifFalse3503));
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3506 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3506->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3506->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3506, ((panda$core$Int64) { 1012 }), p_i->position, ((panda$collections$ListView*) children3498));
    return $tmp3506;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileRangeFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, panda$core$String* p_label, org$pandalanguage$pandac$ASTNode* p_astTarget, org$pandalanguage$pandac$IRNode* p_rawList, org$pandalanguage$pandac$ASTNode* p_body) {
    org$pandalanguage$pandac$Type* elementType3508;
    org$pandalanguage$pandac$IRNode* list3509;
    org$pandalanguage$pandac$Type* t3521;
    org$pandalanguage$pandac$Compiler$CompileTargetResult* target3554;
    org$pandalanguage$pandac$IRNode* body3556;
    panda$collections$Array* children3558;
    panda$core$Bit $tmp3512 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_astTarget->kind, ((panda$core$Int64) { 106 }));
    bool $tmp3511 = $tmp3512.value;
    if (!$tmp3511) goto $l3513;
    $tmp3511 = ((panda$core$Bit) { p_astTarget->children != NULL }).value;
    $l3513:;
    panda$core$Bit $tmp3514 = { $tmp3511 };
    bool $tmp3510 = $tmp3514.value;
    if (!$tmp3510) goto $l3515;
    panda$core$Int64 $tmp3516 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_astTarget->children);
    panda$core$Bit $tmp3517 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3516, ((panda$core$Int64) { 0 }));
    $tmp3510 = $tmp3517.value;
    $l3515:;
    panda$core$Bit $tmp3518 = { $tmp3510 };
    if ($tmp3518.value) {
    {
        panda$core$Int64 $tmp3519 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_astTarget->children);
        panda$core$Bit $tmp3520 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3519, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp3520.value);
        panda$core$Object* $tmp3522 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_astTarget->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Type* $tmp3523 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, ((org$pandalanguage$pandac$ASTNode*) $tmp3522));
        org$pandalanguage$pandac$Type* $tmp3524 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, $tmp3523);
        t3521 = $tmp3524;
        panda$core$Bit $tmp3525 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_rawList->kind, ((panda$core$Int64) { 1031 }));
        if ($tmp3525.value) {
        {
            panda$core$Int64 $tmp3526 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_rawList->children);
            panda$core$Bit $tmp3527 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3526, ((panda$core$Int64) { 2 }));
            if ($tmp3527.value) {
            {
                org$pandalanguage$pandac$Type* $tmp3528 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3521);
                org$pandalanguage$pandac$IRNode* $tmp3529 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, $tmp3528);
                list3509 = $tmp3529;
            }
            }
            else {
            {
                panda$core$Int64 $tmp3530 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_rawList->children);
                panda$core$Bit $tmp3531 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3530, ((panda$core$Int64) { 3 }));
                PANDA_ASSERT($tmp3531.value);
                org$pandalanguage$pandac$Type* $tmp3532 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$Type* $tmp3533 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3521, $tmp3532);
                org$pandalanguage$pandac$IRNode* $tmp3534 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, $tmp3533);
                list3509 = $tmp3534;
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp3535 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(p_rawList->type);
        if ($tmp3535.value) {
        {
            panda$core$Object* $tmp3536 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_rawList->type->subtypes, ((panda$core$Int64) { 2 }));
            org$pandalanguage$pandac$Type* $tmp3537 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3521, ((org$pandalanguage$pandac$Type*) $tmp3536));
            org$pandalanguage$pandac$IRNode* $tmp3538 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, $tmp3537);
            list3509 = $tmp3538;
        }
        }
        else {
        org$pandalanguage$pandac$Type* $tmp3539 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3521);
        panda$core$Int64$nullable $tmp3540 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_rawList, $tmp3539);
        if (((panda$core$Bit) { $tmp3540.nonnull }).value) {
        {
            org$pandalanguage$pandac$Type* $tmp3541 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3521);
            org$pandalanguage$pandac$IRNode* $tmp3542 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, $tmp3541);
            list3509 = $tmp3542;
        }
        }
        else {
        {
            org$pandalanguage$pandac$Type* $tmp3543 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$Type* $tmp3544 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3521, $tmp3543);
            org$pandalanguage$pandac$IRNode* $tmp3545 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, $tmp3544);
            list3509 = $tmp3545;
        }
        }
        }
        }
    }
    }
    else {
    {
        org$pandalanguage$pandac$IRNode* $tmp3546 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList);
        list3509 = $tmp3546;
    }
    }
    if (((panda$core$Bit) { list3509 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp3547 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(list3509->type->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp3547.value) {
    {
        panda$core$Object* $tmp3548 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(list3509->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp3549 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3548)->typeKind, ((panda$core$Int64) { 21 }));
        PANDA_ASSERT($tmp3549.value);
        panda$core$Object* $tmp3550 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(list3509->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3551 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$Type*) $tmp3550)->subtypes, ((panda$core$Int64) { 1 }));
        elementType3508 = ((org$pandalanguage$pandac$Type*) $tmp3551);
    }
    }
    else {
    {
        panda$core$Bit $tmp3552 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(list3509->type->typeKind, ((panda$core$Int64) { 21 }));
        PANDA_ASSERT($tmp3552.value);
        panda$core$Object* $tmp3553 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(list3509->type->subtypes, ((panda$core$Int64) { 1 }));
        elementType3508 = ((org$pandalanguage$pandac$Type*) $tmp3553);
    }
    }
    org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp3555 = org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(self, p_astTarget, ((panda$core$Int64) { 10001 }), NULL, elementType3508);
    target3554 = $tmp3555;
    if (((panda$core$Bit) { target3554 == NULL }).value) {
    {
        return NULL;
    }
    }
    PANDA_ASSERT(((panda$core$Bit) { target3554->value == NULL }).value);
    org$pandalanguage$pandac$IRNode* $tmp3557 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_body);
    body3556 = $tmp3557;
    if (((panda$core$Bit) { body3556 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3559 = (panda$collections$Array*) malloc(40);
    $tmp3559->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3559->refCount.value = 1;
    panda$collections$Array$init($tmp3559);
    children3558 = $tmp3559;
    panda$collections$Array$add$panda$collections$Array$T(children3558, ((panda$core$Object*) target3554->target));
    panda$collections$Array$add$panda$collections$Array$T(children3558, ((panda$core$Object*) list3509));
    panda$collections$Array$add$panda$collections$Array$T(children3558, ((panda$core$Object*) body3556));
    org$pandalanguage$pandac$IRNode* $tmp3561 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3561->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3561->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3561, ((panda$core$Int64) { 1029 }), p_position, ((panda$core$Object*) p_label), ((panda$collections$ListView*) children3558));
    return $tmp3561;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIteratorFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, panda$core$String* p_label, org$pandalanguage$pandac$ASTNode* p_astTarget, org$pandalanguage$pandac$IRNode* p_iterator, org$pandalanguage$pandac$ASTNode* p_body) {
    org$pandalanguage$pandac$Compiler$CompileTargetResult* target3570;
    org$pandalanguage$pandac$Variable* targetVar3574;
    panda$collections$Array* subtypes3575;
    org$pandalanguage$pandac$Type* iterType3579;
    org$pandalanguage$pandac$Variable* iter3590;
    panda$collections$Array* statements3595;
    panda$collections$Array* declChildren3598;
    panda$collections$Array* varChildren3603;
    panda$collections$Array* whileChildren3610;
    org$pandalanguage$pandac$IRNode* done3613;
    org$pandalanguage$pandac$IRNode* notCall3620;
    panda$collections$Array* valueDeclChildren3625;
    org$pandalanguage$pandac$IRNode* next3630;
    panda$collections$Array* valueVarChildren3637;
    org$pandalanguage$pandac$IRNode* block3642;
    panda$collections$Array* blockChildren3644;
    panda$core$Bit $tmp3564 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_iterator->type->typeKind, ((panda$core$Int64) { 21 }));
    bool $tmp3563 = $tmp3564.value;
    if (!$tmp3563) goto $l3565;
    panda$core$Object* $tmp3566 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_iterator->type->subtypes, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp3567 = org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp3568 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3566), $tmp3567);
    $tmp3563 = $tmp3568.value;
    $l3565:;
    panda$core$Bit $tmp3569 = { $tmp3563 };
    PANDA_ASSERT($tmp3569.value);
    panda$core$Object* $tmp3571 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_iterator->type->subtypes, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp3572 = org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(self, p_astTarget, ((panda$core$Int64) { 10001 }), NULL, ((org$pandalanguage$pandac$Type*) $tmp3571));
    target3570 = $tmp3572;
    if (((panda$core$Bit) { target3570 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp3573 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(target3570->target->kind, ((panda$core$Int64) { 1016 }));
    PANDA_ASSERT($tmp3573.value);
    targetVar3574 = ((org$pandalanguage$pandac$Variable*) target3570->target->payload);
    panda$collections$Array* $tmp3576 = (panda$collections$Array*) malloc(40);
    $tmp3576->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3576->refCount.value = 1;
    panda$collections$Array$init($tmp3576);
    subtypes3575 = $tmp3576;
    org$pandalanguage$pandac$Type* $tmp3578 = org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type();
    panda$collections$Array$add$panda$collections$Array$T(subtypes3575, ((panda$core$Object*) $tmp3578));
    panda$collections$Array$add$panda$collections$Array$T(subtypes3575, ((panda$core$Object*) target3570->target->type));
    org$pandalanguage$pandac$Type* $tmp3580 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp3580->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp3580->refCount.value = 1;
    panda$core$Object* $tmp3582 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(subtypes3575, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3583 = org$pandalanguage$pandac$Type$convert$R$panda$core$String(((org$pandalanguage$pandac$Type*) $tmp3582));
    panda$core$String* $tmp3585 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3583, &$s3584);
    panda$core$Object* $tmp3586 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(subtypes3575, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp3587 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3585, ((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp3586)));
    panda$core$String* $tmp3589 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3587, &$s3588);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp3580, $tmp3589, ((panda$core$Int64) { 21 }), p_position, ((panda$collections$ListView*) subtypes3575), ((panda$core$Bit) { true }));
    iterType3579 = $tmp3580;
    org$pandalanguage$pandac$Variable* $tmp3591 = (org$pandalanguage$pandac$Variable*) malloc(88);
    $tmp3591->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
    $tmp3591->refCount.value = 1;
    panda$core$String* $tmp3594 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) targetVar3574)->name, &$s3593);
    org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type($tmp3591, p_iterator->position, ((panda$core$Int64) { 10001 }), $tmp3594, iterType3579);
    iter3590 = $tmp3591;
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->symbolTable, ((org$pandalanguage$pandac$Symbol*) iter3590));
    panda$collections$Array* $tmp3596 = (panda$collections$Array*) malloc(40);
    $tmp3596->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3596->refCount.value = 1;
    panda$collections$Array$init($tmp3596);
    statements3595 = $tmp3596;
    panda$collections$Array* $tmp3599 = (panda$collections$Array*) malloc(40);
    $tmp3599->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3599->refCount.value = 1;
    panda$collections$Array$init($tmp3599);
    declChildren3598 = $tmp3599;
    org$pandalanguage$pandac$IRNode* $tmp3601 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3601->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3601->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3601, ((panda$core$Int64) { 1016 }), p_iterator->position, iter3590->type, iter3590);
    panda$collections$Array$add$panda$collections$Array$T(declChildren3598, ((panda$core$Object*) $tmp3601));
    panda$collections$Array$add$panda$collections$Array$T(declChildren3598, ((panda$core$Object*) p_iterator));
    panda$collections$Array* $tmp3604 = (panda$collections$Array*) malloc(40);
    $tmp3604->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3604->refCount.value = 1;
    panda$collections$Array$init($tmp3604);
    varChildren3603 = $tmp3604;
    org$pandalanguage$pandac$IRNode* $tmp3606 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3606->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3606->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3606, ((panda$core$Int64) { 1021 }), ((org$pandalanguage$pandac$Symbol*) iter3590)->position, ((panda$collections$ListView*) declChildren3598));
    panda$collections$Array$add$panda$collections$Array$T(varChildren3603, ((panda$core$Object*) $tmp3606));
    org$pandalanguage$pandac$IRNode* $tmp3608 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3608->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3608->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3608, ((panda$core$Int64) { 1018 }), ((org$pandalanguage$pandac$Symbol*) iter3590)->position, ((panda$collections$ListView*) varChildren3603));
    panda$collections$Array$add$panda$collections$Array$T(statements3595, ((panda$core$Object*) $tmp3608));
    panda$collections$Array* $tmp3611 = (panda$collections$Array*) malloc(40);
    $tmp3611->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3611->refCount.value = 1;
    panda$collections$Array$init($tmp3611);
    whileChildren3610 = $tmp3611;
    org$pandalanguage$pandac$IRNode* $tmp3614 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3614->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3614->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3614, ((panda$core$Int64) { 1016 }), ((org$pandalanguage$pandac$Symbol*) iter3590)->position, iter3590->type, iter3590);
    panda$collections$Array* $tmp3617 = (panda$collections$Array*) malloc(40);
    $tmp3617->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3617->refCount.value = 1;
    panda$collections$Array$init($tmp3617);
    org$pandalanguage$pandac$IRNode* $tmp3619 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3614, &$s3616, ((panda$collections$ListView*) $tmp3617), NULL);
    done3613 = $tmp3619;
    if (((panda$core$Bit) { done3613 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3622 = (panda$collections$Array*) malloc(40);
    $tmp3622->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3622->refCount.value = 1;
    panda$collections$Array$init($tmp3622);
    org$pandalanguage$pandac$IRNode* $tmp3624 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, done3613, &$s3621, ((panda$collections$ListView*) $tmp3622), NULL);
    notCall3620 = $tmp3624;
    if (((panda$core$Bit) { notCall3620 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(whileChildren3610, ((panda$core$Object*) notCall3620));
    panda$collections$Array* $tmp3626 = (panda$collections$Array*) malloc(40);
    $tmp3626->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3626->refCount.value = 1;
    panda$collections$Array$init($tmp3626);
    valueDeclChildren3625 = $tmp3626;
    org$pandalanguage$pandac$IRNode* $tmp3628 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3628->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3628->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3628, ((panda$core$Int64) { 1016 }), p_iterator->position, targetVar3574->type, targetVar3574);
    panda$collections$Array$add$panda$collections$Array$T(valueDeclChildren3625, ((panda$core$Object*) $tmp3628));
    org$pandalanguage$pandac$IRNode* $tmp3631 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3631->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3631->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3631, ((panda$core$Int64) { 1016 }), p_iterator->position, iter3590->type, iter3590);
    panda$collections$Array* $tmp3634 = (panda$collections$Array*) malloc(40);
    $tmp3634->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3634->refCount.value = 1;
    panda$collections$Array$init($tmp3634);
    org$pandalanguage$pandac$IRNode* $tmp3636 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3631, &$s3633, ((panda$collections$ListView*) $tmp3634), NULL);
    next3630 = $tmp3636;
    PANDA_ASSERT(((panda$core$Bit) { next3630 != NULL }).value);
    panda$collections$Array$add$panda$collections$Array$T(valueDeclChildren3625, ((panda$core$Object*) next3630));
    panda$collections$Array* $tmp3638 = (panda$collections$Array*) malloc(40);
    $tmp3638->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3638->refCount.value = 1;
    panda$collections$Array$init($tmp3638);
    valueVarChildren3637 = $tmp3638;
    org$pandalanguage$pandac$IRNode* $tmp3640 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3640->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3640->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3640, ((panda$core$Int64) { 1021 }), p_iterator->position, ((panda$collections$ListView*) valueDeclChildren3625));
    panda$collections$Array$add$panda$collections$Array$T(valueVarChildren3637, ((panda$core$Object*) $tmp3640));
    org$pandalanguage$pandac$IRNode* $tmp3643 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_body);
    block3642 = $tmp3643;
    if (((panda$core$Bit) { block3642 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3645 = (panda$collections$Array*) malloc(40);
    $tmp3645->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3645->refCount.value = 1;
    panda$collections$Array$init($tmp3645);
    blockChildren3644 = $tmp3645;
    org$pandalanguage$pandac$IRNode* $tmp3647 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3647->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3647->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3647, ((panda$core$Int64) { 1018 }), p_iterator->position, ((panda$collections$ListView*) valueVarChildren3637));
    panda$collections$Array$add$panda$collections$Array$T(blockChildren3644, ((panda$core$Object*) $tmp3647));
    panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(blockChildren3644, ((panda$collections$CollectionView*) block3642->children));
    org$pandalanguage$pandac$IRNode* $tmp3649 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3649->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3649->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3649, ((panda$core$Int64) { 1000 }), block3642->position, ((panda$collections$ListView*) blockChildren3644));
    block3642 = $tmp3649;
    panda$collections$Array$add$panda$collections$Array$T(whileChildren3610, ((panda$core$Object*) block3642));
    org$pandalanguage$pandac$IRNode* $tmp3651 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3651->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3651->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3651, ((panda$core$Int64) { 1013 }), p_iterator->position, ((panda$core$Object*) p_label), ((panda$collections$ListView*) whileChildren3610));
    panda$collections$Array$add$panda$collections$Array$T(statements3595, ((panda$core$Object*) $tmp3651));
    org$pandalanguage$pandac$IRNode* $tmp3653 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3653->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3653->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3653, ((panda$core$Int64) { 1000 }), p_iterator->position, ((panda$collections$ListView*) statements3595));
    return $tmp3653;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileFor$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_f) {
    org$pandalanguage$pandac$IRNode* list3658;
    org$pandalanguage$pandac$SymbolTable* symbols3661;
    org$pandalanguage$pandac$IRNode* result3664;
    panda$core$Bit found3678;
    panda$collections$Iterator* intf$Iter3679;
    org$pandalanguage$pandac$Type* intf3692;
    org$pandalanguage$pandac$IRNode* iterator3704;
    org$pandalanguage$pandac$IRNode* iterable3716;
    org$pandalanguage$pandac$IRNode* iterator3718;
    panda$core$Bit $tmp3655 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_f->kind, ((panda$core$Int64) { 119 }));
    PANDA_ASSERT($tmp3655.value);
    panda$core$Int64 $tmp3656 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_f->children);
    panda$core$Bit $tmp3657 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3656, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp3657.value);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loops, ((panda$core$Object*) ((panda$core$String*) p_f->payload)));
    panda$core$Object* $tmp3659 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp3660 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3659));
    list3658 = $tmp3660;
    if (((panda$core$Bit) { list3658 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp3662 = (org$pandalanguage$pandac$SymbolTable*) malloc(48);
    $tmp3662->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp3662->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp3662, self->symbolTable);
    symbols3661 = $tmp3662;
    self->symbolTable = symbols3661;
    panda$core$Bit $tmp3667 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(list3658->kind, ((panda$core$Int64) { 1031 }));
    bool $tmp3666 = $tmp3667.value;
    if ($tmp3666) goto $l3668;
    panda$core$Bit $tmp3669 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(list3658->type);
    $tmp3666 = $tmp3669.value;
    $l3668:;
    panda$core$Bit $tmp3670 = { $tmp3666 };
    bool $tmp3665 = $tmp3670.value;
    if ($tmp3665) goto $l3671;
    panda$core$Bit $tmp3672 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(list3658->type);
    $tmp3665 = $tmp3672.value;
    $l3671:;
    panda$core$Bit $tmp3673 = { $tmp3665 };
    if ($tmp3673.value) {
    {
        panda$core$Object* $tmp3674 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3675 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$IRNode* $tmp3676 = org$pandalanguage$pandac$Compiler$compileRangeFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->position, ((panda$core$String*) p_f->payload), ((org$pandalanguage$pandac$ASTNode*) $tmp3674), list3658, ((org$pandalanguage$pandac$ASTNode*) $tmp3675));
        result3664 = $tmp3676;
    }
    }
    else {
    {
        org$pandalanguage$pandac$IRNode* $tmp3677 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, list3658);
        list3658 = $tmp3677;
        if (((panda$core$Bit) { list3658 == NULL }).value) {
        {
            return NULL;
        }
        }
        found3678 = ((panda$core$Bit) { false });
        {
            panda$collections$Set* $tmp3680 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self, list3658->type);
            ITable* $tmp3681 = ((panda$collections$Iterable*) $tmp3680)->$class->itable;
            while ($tmp3681->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3681 = $tmp3681->next;
            }
            $fn3683 $tmp3682 = $tmp3681->methods[0];
            panda$collections$Iterator* $tmp3684 = $tmp3682(((panda$collections$Iterable*) $tmp3680));
            intf$Iter3679 = $tmp3684;
            $l3685:;
            ITable* $tmp3687 = intf$Iter3679->$class->itable;
            while ($tmp3687->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3687 = $tmp3687->next;
            }
            $fn3689 $tmp3688 = $tmp3687->methods[0];
            panda$core$Bit $tmp3690 = $tmp3688(intf$Iter3679);
            panda$core$Bit $tmp3691 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3690);
            if (!$tmp3691.value) goto $l3686;
            {
                ITable* $tmp3693 = intf$Iter3679->$class->itable;
                while ($tmp3693->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3693 = $tmp3693->next;
                }
                $fn3695 $tmp3694 = $tmp3693->methods[1];
                panda$core$Object* $tmp3696 = $tmp3694(intf$Iter3679);
                intf3692 = ((org$pandalanguage$pandac$Type*) $tmp3696);
                panda$core$Bit $tmp3698 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(intf3692->typeKind, ((panda$core$Int64) { 21 }));
                bool $tmp3697 = $tmp3698.value;
                if (!$tmp3697) goto $l3699;
                panda$core$Object* $tmp3700 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(intf3692->subtypes, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp3701 = org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp3702 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3700), $tmp3701);
                $tmp3697 = $tmp3702.value;
                $l3699:;
                panda$core$Bit $tmp3703 = { $tmp3697 };
                if ($tmp3703.value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp3705 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, list3658, intf3692);
                    iterator3704 = $tmp3705;
                    panda$core$Object* $tmp3706 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
                    panda$core$Object* $tmp3707 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 2 }));
                    org$pandalanguage$pandac$IRNode* $tmp3708 = org$pandalanguage$pandac$Compiler$compileIteratorFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->position, ((panda$core$String*) p_f->payload), ((org$pandalanguage$pandac$ASTNode*) $tmp3706), iterator3704, ((org$pandalanguage$pandac$ASTNode*) $tmp3707));
                    result3664 = $tmp3708;
                    found3678 = ((panda$core$Bit) { true });
                    goto $l3686;
                }
                }
                panda$core$Bit $tmp3710 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(intf3692->typeKind, ((panda$core$Int64) { 21 }));
                bool $tmp3709 = $tmp3710.value;
                if (!$tmp3709) goto $l3711;
                panda$core$Object* $tmp3712 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(intf3692->subtypes, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp3713 = org$pandalanguage$pandac$Type$Iterable$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp3714 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3712), $tmp3713);
                $tmp3709 = $tmp3714.value;
                $l3711:;
                panda$core$Bit $tmp3715 = { $tmp3709 };
                if ($tmp3715.value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp3717 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, list3658, intf3692);
                    iterable3716 = $tmp3717;
                    panda$collections$Array* $tmp3720 = (panda$collections$Array*) malloc(40);
                    $tmp3720->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp3720->refCount.value = 1;
                    panda$collections$Array$init($tmp3720);
                    org$pandalanguage$pandac$IRNode* $tmp3722 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, iterable3716, &$s3719, ((panda$collections$ListView*) $tmp3720));
                    iterator3718 = $tmp3722;
                    panda$core$Object* $tmp3723 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
                    panda$core$Object* $tmp3724 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 2 }));
                    org$pandalanguage$pandac$IRNode* $tmp3725 = org$pandalanguage$pandac$Compiler$compileIteratorFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->position, ((panda$core$String*) p_f->payload), ((org$pandalanguage$pandac$ASTNode*) $tmp3723), iterator3718, ((org$pandalanguage$pandac$ASTNode*) $tmp3724));
                    result3664 = $tmp3725;
                    found3678 = ((panda$core$Bit) { true });
                    goto $l3686;
                }
                }
            }
            goto $l3685;
            $l3686:;
        }
        panda$core$Bit $tmp3726 = panda$core$Bit$$NOT$R$panda$core$Bit(found3678);
        if ($tmp3726.value) {
        {
            panda$core$String* $tmp3728 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3727, ((panda$core$Object*) list3658->type));
            panda$core$String* $tmp3730 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3728, &$s3729);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, list3658->position, $tmp3730);
            return NULL;
        }
        }
    }
    }
    panda$core$Object* $tmp3731 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(symbols3661->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp3731);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
    return result3664;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileWhile$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_w) {
    org$pandalanguage$pandac$IRNode* test3735;
    org$pandalanguage$pandac$IRNode* stmt3740;
    panda$collections$Array* children3743;
    panda$core$Bit $tmp3732 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_w->kind, ((panda$core$Int64) { 121 }));
    PANDA_ASSERT($tmp3732.value);
    panda$core$Int64 $tmp3733 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Bit $tmp3734 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3733, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp3734.value);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loops, ((panda$core$Object*) ((panda$core$String*) p_w->payload)));
    panda$core$Object* $tmp3736 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3737 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3736));
    org$pandalanguage$pandac$Type* $tmp3738 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp3739 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3737, $tmp3738);
    test3735 = $tmp3739;
    if (((panda$core$Bit) { test3735 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$core$Object* $tmp3741 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp3742 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3741));
    stmt3740 = $tmp3742;
    if (((panda$core$Bit) { stmt3740 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$collections$Array* $tmp3744 = (panda$collections$Array*) malloc(40);
    $tmp3744->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3744->refCount.value = 1;
    panda$collections$Array$init$panda$core$Int64($tmp3744, ((panda$core$Int64) { 2 }));
    children3743 = $tmp3744;
    panda$collections$Array$add$panda$collections$Array$T(children3743, ((panda$core$Object*) test3735));
    panda$collections$Array$add$panda$collections$Array$T(children3743, ((panda$core$Object*) stmt3740));
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
    org$pandalanguage$pandac$IRNode* $tmp3746 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3746->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3746->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3746, ((panda$core$Int64) { 1013 }), p_w->position, p_w->payload, ((panda$collections$ListView*) children3743));
    return $tmp3746;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileDo$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_d) {
    org$pandalanguage$pandac$IRNode* stmt3751;
    org$pandalanguage$pandac$IRNode* test3754;
    panda$collections$Array* children3759;
    panda$core$Bit $tmp3748 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_d->kind, ((panda$core$Int64) { 120 }));
    PANDA_ASSERT($tmp3748.value);
    panda$core$Int64 $tmp3749 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp3750 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3749, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp3750.value);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loops, ((panda$core$Object*) ((panda$core$String*) p_d->payload)));
    panda$core$Object* $tmp3752 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3753 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3752));
    stmt3751 = $tmp3753;
    if (((panda$core$Bit) { stmt3751 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$core$Object* $tmp3755 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp3756 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3755));
    org$pandalanguage$pandac$Type* $tmp3757 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp3758 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3756, $tmp3757);
    test3754 = $tmp3758;
    if (((panda$core$Bit) { test3754 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$collections$Array* $tmp3760 = (panda$collections$Array*) malloc(40);
    $tmp3760->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3760->refCount.value = 1;
    panda$collections$Array$init$panda$core$Int64($tmp3760, ((panda$core$Int64) { 2 }));
    children3759 = $tmp3760;
    panda$collections$Array$add$panda$collections$Array$T(children3759, ((panda$core$Object*) stmt3751));
    panda$collections$Array$add$panda$collections$Array$T(children3759, ((panda$core$Object*) test3754));
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
    org$pandalanguage$pandac$IRNode* $tmp3762 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3762->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3762->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3762, ((panda$core$Int64) { 1014 }), p_d->position, p_d->payload, ((panda$collections$ListView*) children3759));
    return $tmp3762;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileLoop$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_l) {
    org$pandalanguage$pandac$IRNode* stmt3767;
    panda$collections$Array* children3770;
    panda$core$Bit $tmp3764 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_l->kind, ((panda$core$Int64) { 122 }));
    PANDA_ASSERT($tmp3764.value);
    panda$core$Int64 $tmp3765 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_l->children);
    panda$core$Bit $tmp3766 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3765, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3766.value);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loops, ((panda$core$Object*) ((panda$core$String*) p_l->payload)));
    panda$core$Object* $tmp3768 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_l->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3769 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3768));
    stmt3767 = $tmp3769;
    if (((panda$core$Bit) { stmt3767 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$collections$Array* $tmp3771 = (panda$collections$Array*) malloc(40);
    $tmp3771->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3771->refCount.value = 1;
    panda$collections$Array$init$panda$core$Int64($tmp3771, ((panda$core$Int64) { 1 }));
    children3770 = $tmp3771;
    panda$collections$Array$add$panda$collections$Array$T(children3770, ((panda$core$Object*) stmt3767));
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
    org$pandalanguage$pandac$IRNode* $tmp3773 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3773->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3773->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3773, ((panda$core$Int64) { 1015 }), p_l->position, p_l->payload, ((panda$collections$ListView*) children3770));
    return $tmp3773;
}
org$pandalanguage$pandac$Compiler$CompileTargetResult* org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_t, panda$core$Int64 p_kind, org$pandalanguage$pandac$IRNode* p_rawValue, org$pandalanguage$pandac$Type* p_valueType) {
    org$pandalanguage$pandac$IRNode* value3775;
    org$pandalanguage$pandac$Type* type3779;
    org$pandalanguage$pandac$Variable* v3795;
    value3775 = p_rawValue;
    bool $tmp3776 = ((panda$core$Bit) { value3775 == NULL }).value;
    if ($tmp3776) goto $l3777;
    $tmp3776 = ((panda$core$Bit) { p_valueType == NULL }).value;
    $l3777:;
    panda$core$Bit $tmp3778 = { $tmp3776 };
    PANDA_ASSERT($tmp3778.value);
    switch (p_t->kind.value) {
        case 106:
        {
            bool $tmp3780 = ((panda$core$Bit) { p_t->children != NULL }).value;
            if (!$tmp3780) goto $l3781;
            panda$core$Int64 $tmp3782 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_t->children);
            panda$core$Bit $tmp3783 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp3782, ((panda$core$Int64) { 0 }));
            $tmp3780 = $tmp3783.value;
            $l3781:;
            panda$core$Bit $tmp3784 = { $tmp3780 };
            if ($tmp3784.value) {
            {
                panda$core$Int64 $tmp3785 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_t->children);
                panda$core$Bit $tmp3786 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3785, ((panda$core$Int64) { 1 }));
                PANDA_ASSERT($tmp3786.value);
                panda$core$Object* $tmp3787 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp3788 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, ((org$pandalanguage$pandac$ASTNode*) $tmp3787));
                org$pandalanguage$pandac$Type* $tmp3789 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, $tmp3788);
                type3779 = $tmp3789;
            }
            }
            else {
            if (((panda$core$Bit) { value3775 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp3790 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, value3775);
                value3775 = $tmp3790;
                if (((panda$core$Bit) { value3775 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$Type* $tmp3791 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, value3775);
                type3779 = $tmp3791;
            }
            }
            else {
            if (((panda$core$Bit) { p_valueType != NULL }).value) {
            {
                type3779 = p_valueType;
            }
            }
            else {
            {
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_t->position, &$s3792);
                return NULL;
            }
            }
            }
            }
            if (((panda$core$Bit) { value3775 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp3793 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, value3775, type3779);
                value3775 = $tmp3793;
                if (((panda$core$Bit) { value3775 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$core$Bit $tmp3794 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(value3775->type, type3779);
                PANDA_ASSERT($tmp3794.value);
            }
            }
            org$pandalanguage$pandac$Variable* $tmp3796 = (org$pandalanguage$pandac$Variable*) malloc(88);
            $tmp3796->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
            $tmp3796->refCount.value = 1;
            org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type($tmp3796, p_t->position, p_kind, ((panda$core$String*) p_t->payload), type3779);
            v3795 = $tmp3796;
            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->symbolTable, ((org$pandalanguage$pandac$Symbol*) v3795));
            org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp3798 = (org$pandalanguage$pandac$Compiler$CompileTargetResult*) malloc(32);
            $tmp3798->$class = (panda$core$Class*) &org$pandalanguage$pandac$Compiler$CompileTargetResult$class;
            $tmp3798->refCount.value = 1;
            org$pandalanguage$pandac$IRNode* $tmp3800 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3800->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3800->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3800, ((panda$core$Int64) { 1016 }), ((org$pandalanguage$pandac$Symbol*) v3795)->position, v3795->type, v3795);
            org$pandalanguage$pandac$Compiler$CompileTargetResult$init$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q($tmp3798, $tmp3800, value3775);
            return $tmp3798;
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
    org$pandalanguage$pandac$IRNode* value3810;
    org$pandalanguage$pandac$Compiler$CompileTargetResult* target3815;
    panda$collections$Array* children3818;
    org$pandalanguage$pandac$Variable* v3822;
    panda$core$Bit $tmp3802 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_d->kind, ((panda$core$Int64) { 129 }));
    PANDA_ASSERT($tmp3802.value);
    panda$core$Int64 $tmp3804 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp3805 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3804, ((panda$core$Int64) { 1 }));
    bool $tmp3803 = $tmp3805.value;
    if ($tmp3803) goto $l3806;
    panda$core$Int64 $tmp3807 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp3808 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3807, ((panda$core$Int64) { 2 }));
    $tmp3803 = $tmp3808.value;
    $l3806:;
    panda$core$Bit $tmp3809 = { $tmp3803 };
    PANDA_ASSERT($tmp3809.value);
    panda$core$Int64 $tmp3811 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp3812 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3811, ((panda$core$Int64) { 2 }));
    if ($tmp3812.value) {
    {
        panda$core$Object* $tmp3813 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$IRNode* $tmp3814 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3813));
        value3810 = $tmp3814;
        if (((panda$core$Bit) { value3810 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    else {
    {
        value3810 = NULL;
    }
    }
    panda$core$Object* $tmp3816 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp3817 = org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3816), p_varKind, value3810, NULL);
    target3815 = $tmp3817;
    if (((panda$core$Bit) { target3815 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3819 = (panda$collections$Array*) malloc(40);
    $tmp3819->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3819->refCount.value = 1;
    panda$collections$Array$init($tmp3819);
    children3818 = $tmp3819;
    panda$collections$Array$add$panda$collections$Array$T(children3818, ((panda$core$Object*) target3815->target));
    if (((panda$core$Bit) { target3815->value != NULL }).value) {
    {
        panda$core$Bit $tmp3821 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(target3815->target->kind, ((panda$core$Int64) { 1016 }));
        PANDA_ASSERT($tmp3821.value);
        v3822 = ((org$pandalanguage$pandac$Variable*) target3815->target->payload);
        v3822->initialValue = target3815->value;
        panda$collections$Array$add$panda$collections$Array$T(children3818, ((panda$core$Object*) target3815->value));
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3823 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3823->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3823->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3823, ((panda$core$Int64) { 1021 }), p_d->position, ((panda$collections$ListView*) children3818));
    return $tmp3823;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBreak$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_b) {
    panda$core$Bit found3826;
    panda$collections$Iterator* label$Iter3827;
    panda$core$String* label3839;
    panda$core$Bit $tmp3825 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_b->kind, ((panda$core$Int64) { 134 }));
    PANDA_ASSERT($tmp3825.value);
    if (((panda$core$Bit) { p_b->payload != NULL }).value) {
    {
        found3826 = ((panda$core$Bit) { false });
        {
            ITable* $tmp3828 = ((panda$collections$Iterable*) self->loops)->$class->itable;
            while ($tmp3828->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3828 = $tmp3828->next;
            }
            $fn3830 $tmp3829 = $tmp3828->methods[0];
            panda$collections$Iterator* $tmp3831 = $tmp3829(((panda$collections$Iterable*) self->loops));
            label$Iter3827 = $tmp3831;
            $l3832:;
            ITable* $tmp3834 = label$Iter3827->$class->itable;
            while ($tmp3834->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3834 = $tmp3834->next;
            }
            $fn3836 $tmp3835 = $tmp3834->methods[0];
            panda$core$Bit $tmp3837 = $tmp3835(label$Iter3827);
            panda$core$Bit $tmp3838 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3837);
            if (!$tmp3838.value) goto $l3833;
            {
                ITable* $tmp3840 = label$Iter3827->$class->itable;
                while ($tmp3840->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3840 = $tmp3840->next;
                }
                $fn3842 $tmp3841 = $tmp3840->methods[1];
                panda$core$Object* $tmp3843 = $tmp3841(label$Iter3827);
                label3839 = ((panda$core$String*) $tmp3843);
                bool $tmp3844 = ((panda$core$Bit) { label3839 != NULL }).value;
                if (!$tmp3844) goto $l3845;
                panda$core$Bit $tmp3849;
                if (((panda$core$Bit) { label3839 != NULL }).value) goto $l3846; else goto $l3847;
                $l3846:;
                panda$core$Bit $tmp3850 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(label3839, ((panda$core$String*) p_b->payload));
                $tmp3849 = $tmp3850;
                goto $l3848;
                $l3847:;
                $tmp3849 = ((panda$core$Bit) { false });
                goto $l3848;
                $l3848:;
                $tmp3844 = $tmp3849.value;
                $l3845:;
                panda$core$Bit $tmp3851 = { $tmp3844 };
                if ($tmp3851.value) {
                {
                    found3826 = ((panda$core$Bit) { true });
                    goto $l3833;
                }
                }
            }
            goto $l3832;
            $l3833:;
        }
        panda$core$Bit $tmp3852 = panda$core$Bit$$NOT$R$panda$core$Bit(found3826);
        if ($tmp3852.value) {
        {
            panda$core$String* $tmp3854 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3853, p_b->payload);
            panda$core$String* $tmp3856 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3854, &$s3855);
            panda$core$String* $tmp3858 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3857, p_b->payload);
            panda$core$String* $tmp3860 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3858, &$s3859);
            panda$core$String* $tmp3861 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3856, $tmp3860);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_b->position, $tmp3861);
        }
        }
    }
    }
    else {
    panda$core$Int64 $tmp3862 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loops);
    panda$core$Bit $tmp3863 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3862, ((panda$core$Int64) { 0 }));
    if ($tmp3863.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_b->position, &$s3864);
    }
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3865 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3865->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3865->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp3865, ((panda$core$Int64) { 1006 }), p_b->position, ((panda$core$String*) p_b->payload));
    return $tmp3865;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileContinue$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_c) {
    panda$core$Bit found3868;
    panda$collections$Iterator* label$Iter3869;
    panda$core$String* label3881;
    panda$core$Bit $tmp3867 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_c->kind, ((panda$core$Int64) { 135 }));
    PANDA_ASSERT($tmp3867.value);
    if (((panda$core$Bit) { p_c->payload != NULL }).value) {
    {
        found3868 = ((panda$core$Bit) { false });
        {
            ITable* $tmp3870 = ((panda$collections$Iterable*) self->loops)->$class->itable;
            while ($tmp3870->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3870 = $tmp3870->next;
            }
            $fn3872 $tmp3871 = $tmp3870->methods[0];
            panda$collections$Iterator* $tmp3873 = $tmp3871(((panda$collections$Iterable*) self->loops));
            label$Iter3869 = $tmp3873;
            $l3874:;
            ITable* $tmp3876 = label$Iter3869->$class->itable;
            while ($tmp3876->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3876 = $tmp3876->next;
            }
            $fn3878 $tmp3877 = $tmp3876->methods[0];
            panda$core$Bit $tmp3879 = $tmp3877(label$Iter3869);
            panda$core$Bit $tmp3880 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3879);
            if (!$tmp3880.value) goto $l3875;
            {
                ITable* $tmp3882 = label$Iter3869->$class->itable;
                while ($tmp3882->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3882 = $tmp3882->next;
                }
                $fn3884 $tmp3883 = $tmp3882->methods[1];
                panda$core$Object* $tmp3885 = $tmp3883(label$Iter3869);
                label3881 = ((panda$core$String*) $tmp3885);
                bool $tmp3886 = ((panda$core$Bit) { label3881 != NULL }).value;
                if (!$tmp3886) goto $l3887;
                panda$core$Bit $tmp3891;
                if (((panda$core$Bit) { label3881 != NULL }).value) goto $l3888; else goto $l3889;
                $l3888:;
                panda$core$Bit $tmp3892 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(label3881, ((panda$core$String*) p_c->payload));
                $tmp3891 = $tmp3892;
                goto $l3890;
                $l3889:;
                $tmp3891 = ((panda$core$Bit) { false });
                goto $l3890;
                $l3890:;
                $tmp3886 = $tmp3891.value;
                $l3887:;
                panda$core$Bit $tmp3893 = { $tmp3886 };
                if ($tmp3893.value) {
                {
                    found3868 = ((panda$core$Bit) { true });
                    goto $l3875;
                }
                }
            }
            goto $l3874;
            $l3875:;
        }
        panda$core$Bit $tmp3894 = panda$core$Bit$$NOT$R$panda$core$Bit(found3868);
        if ($tmp3894.value) {
        {
            panda$core$String* $tmp3896 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3895, p_c->payload);
            panda$core$String* $tmp3898 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3896, &$s3897);
            panda$core$String* $tmp3900 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3899, p_c->payload);
            panda$core$String* $tmp3902 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3900, &$s3901);
            panda$core$String* $tmp3903 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3898, $tmp3902);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_c->position, $tmp3903);
        }
        }
    }
    }
    else {
    panda$core$Int64 $tmp3904 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loops);
    panda$core$Bit $tmp3905 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3904, ((panda$core$Int64) { 0 }));
    if ($tmp3905.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_c->position, &$s3906);
    }
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3907 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3907->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3907->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp3907, ((panda$core$Int64) { 1007 }), p_c->position, ((panda$core$String*) p_c->payload));
    return $tmp3907;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileReturn$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_r) {
    org$pandalanguage$pandac$IRNode* value3921;
    panda$collections$Array* children3926;
    panda$core$Bit $tmp3909 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_r->kind, ((panda$core$Int64) { 136 }));
    PANDA_ASSERT($tmp3909.value);
    bool $tmp3910 = ((panda$core$Bit) { p_r->children != NULL }).value;
    if (!$tmp3910) goto $l3911;
    panda$core$Int64 $tmp3912 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_r->children);
    panda$core$Bit $tmp3913 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3912, ((panda$core$Int64) { 0 }));
    $tmp3910 = $tmp3913.value;
    $l3911:;
    panda$core$Bit $tmp3914 = { $tmp3910 };
    if ($tmp3914.value) {
    {
        panda$core$Int64 $tmp3915 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_r->children);
        panda$core$Bit $tmp3916 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3915, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp3916.value);
        panda$core$Object* $tmp3917 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
        org$pandalanguage$pandac$Type* $tmp3918 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp3919 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp3917)->returnType, $tmp3918);
        if ($tmp3919.value) {
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_r->position, &$s3920);
            return NULL;
        }
        }
        panda$core$Object* $tmp3922 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp3923 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3922));
        panda$core$Object* $tmp3924 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
        org$pandalanguage$pandac$IRNode* $tmp3925 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3923, ((org$pandalanguage$pandac$MethodDecl*) $tmp3924)->returnType);
        value3921 = $tmp3925;
        if (((panda$core$Bit) { value3921 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp3927 = (panda$collections$Array*) malloc(40);
        $tmp3927->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp3927->refCount.value = 1;
        panda$collections$Array$init($tmp3927);
        children3926 = $tmp3927;
        panda$collections$Array$add$panda$collections$Array$T(children3926, ((panda$core$Object*) value3921));
        org$pandalanguage$pandac$IRNode* $tmp3929 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3929->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3929->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3929, ((panda$core$Int64) { 1008 }), p_r->position, ((panda$collections$ListView*) children3926));
        return $tmp3929;
    }
    }
    panda$core$Object* $tmp3931 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
    org$pandalanguage$pandac$Type* $tmp3932 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp3933 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp3931)->returnType, $tmp3932);
    if ($tmp3933.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_r->position, &$s3934);
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3935 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3935->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3935->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp3935, ((panda$core$Int64) { 1008 }), p_r->position);
    return $tmp3935;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileAssert$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_a) {
    org$pandalanguage$pandac$IRNode* test3945;
    org$pandalanguage$pandac$ClassDecl* bit3950;
    org$pandalanguage$pandac$Symbol* value3953;
    panda$collections$Array* fieldChildren3956;
    panda$collections$Array* children3962;
    org$pandalanguage$pandac$IRNode* msg3967;
    panda$core$Bit $tmp3937 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_a->kind, ((panda$core$Int64) { 123 }));
    PANDA_ASSERT($tmp3937.value);
    panda$core$Int64 $tmp3939 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp3940 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3939, ((panda$core$Int64) { 1 }));
    bool $tmp3938 = $tmp3940.value;
    if ($tmp3938) goto $l3941;
    panda$core$Int64 $tmp3942 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp3943 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3942, ((panda$core$Int64) { 2 }));
    $tmp3938 = $tmp3943.value;
    $l3941:;
    panda$core$Bit $tmp3944 = { $tmp3938 };
    PANDA_ASSERT($tmp3944.value);
    panda$core$Object* $tmp3946 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_a->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3947 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3946));
    test3945 = $tmp3947;
    if (((panda$core$Bit) { test3945 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$Type* $tmp3948 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp3949 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, test3945, $tmp3948);
    test3945 = $tmp3949;
    if (((panda$core$Bit) { test3945 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$Type* $tmp3951 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$ClassDecl* $tmp3952 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, $tmp3951);
    bit3950 = $tmp3952;
    PANDA_ASSERT(((panda$core$Bit) { bit3950 != NULL }).value);
    org$pandalanguage$pandac$Symbol* $tmp3955 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(bit3950->symbolTable, &$s3954);
    value3953 = $tmp3955;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self, ((org$pandalanguage$pandac$FieldDecl*) value3953));
    panda$collections$Array* $tmp3957 = (panda$collections$Array*) malloc(40);
    $tmp3957->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3957->refCount.value = 1;
    panda$collections$Array$init($tmp3957);
    fieldChildren3956 = $tmp3957;
    panda$collections$Array$add$panda$collections$Array$T(fieldChildren3956, ((panda$core$Object*) test3945));
    org$pandalanguage$pandac$IRNode* $tmp3959 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3959->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3959->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3961 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3959, ((panda$core$Int64) { 1026 }), p_a->position, $tmp3961, ((panda$core$Object*) value3953), ((panda$collections$ListView*) fieldChildren3956));
    test3945 = $tmp3959;
    panda$collections$Array* $tmp3963 = (panda$collections$Array*) malloc(40);
    $tmp3963->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3963->refCount.value = 1;
    panda$collections$Array$init($tmp3963);
    children3962 = $tmp3963;
    panda$collections$Array$add$panda$collections$Array$T(children3962, ((panda$core$Object*) test3945));
    panda$core$Int64 $tmp3965 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp3966 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3965, ((panda$core$Int64) { 2 }));
    if ($tmp3966.value) {
    {
        panda$core$Object* $tmp3968 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_a->children, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$IRNode* $tmp3969 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3968));
        msg3967 = $tmp3969;
        if (((panda$core$Bit) { msg3967 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$Type* $tmp3970 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp3971 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, msg3967, $tmp3970);
        msg3967 = $tmp3971;
        if (((panda$core$Bit) { msg3967 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children3962, ((panda$core$Object*) msg3967));
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3972 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3972->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3972->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3972, ((panda$core$Int64) { 1034 }), p_a->position, ((panda$collections$ListView*) children3962));
    return $tmp3972;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileVar$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_v) {
    panda$core$Int64 nodeKind3987;
    panda$core$Int64 varKind3988;
    panda$collections$Array* decls3989;
    panda$collections$Iterator* astDecl$Iter3992;
    org$pandalanguage$pandac$ASTNode* astDecl4004;
    org$pandalanguage$pandac$IRNode* decl4009;
    panda$core$Bit $tmp3977 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 130 }));
    bool $tmp3976 = $tmp3977.value;
    if ($tmp3976) goto $l3978;
    panda$core$Bit $tmp3979 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 131 }));
    $tmp3976 = $tmp3979.value;
    $l3978:;
    panda$core$Bit $tmp3980 = { $tmp3976 };
    bool $tmp3975 = $tmp3980.value;
    if ($tmp3975) goto $l3981;
    panda$core$Bit $tmp3982 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 133 }));
    $tmp3975 = $tmp3982.value;
    $l3981:;
    panda$core$Bit $tmp3983 = { $tmp3975 };
    bool $tmp3974 = $tmp3983.value;
    if ($tmp3974) goto $l3984;
    panda$core$Bit $tmp3985 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 132 }));
    $tmp3974 = $tmp3985.value;
    $l3984:;
    panda$core$Bit $tmp3986 = { $tmp3974 };
    PANDA_ASSERT($tmp3986.value);
    switch (p_v->kind.value) {
        case 130:
        {
            nodeKind3987 = ((panda$core$Int64) { 1017 });
            varKind3988 = ((panda$core$Int64) { 10000 });
        }
        break;
        case 131:
        {
            nodeKind3987 = ((panda$core$Int64) { 1018 });
            varKind3988 = ((panda$core$Int64) { 10001 });
        }
        break;
        case 132:
        {
            nodeKind3987 = ((panda$core$Int64) { 1019 });
            varKind3988 = ((panda$core$Int64) { 10002 });
        }
        break;
        case 133:
        {
            nodeKind3987 = ((panda$core$Int64) { 1020 });
            varKind3988 = ((panda$core$Int64) { 10003 });
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
    panda$collections$Array* $tmp3990 = (panda$collections$Array*) malloc(40);
    $tmp3990->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3990->refCount.value = 1;
    panda$collections$Array$init($tmp3990);
    decls3989 = $tmp3990;
    {
        ITable* $tmp3993 = ((panda$collections$Iterable*) p_v->children)->$class->itable;
        while ($tmp3993->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3993 = $tmp3993->next;
        }
        $fn3995 $tmp3994 = $tmp3993->methods[0];
        panda$collections$Iterator* $tmp3996 = $tmp3994(((panda$collections$Iterable*) p_v->children));
        astDecl$Iter3992 = $tmp3996;
        $l3997:;
        ITable* $tmp3999 = astDecl$Iter3992->$class->itable;
        while ($tmp3999->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3999 = $tmp3999->next;
        }
        $fn4001 $tmp4000 = $tmp3999->methods[0];
        panda$core$Bit $tmp4002 = $tmp4000(astDecl$Iter3992);
        panda$core$Bit $tmp4003 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4002);
        if (!$tmp4003.value) goto $l3998;
        {
            ITable* $tmp4005 = astDecl$Iter3992->$class->itable;
            while ($tmp4005->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4005 = $tmp4005->next;
            }
            $fn4007 $tmp4006 = $tmp4005->methods[1];
            panda$core$Object* $tmp4008 = $tmp4006(astDecl$Iter3992);
            astDecl4004 = ((org$pandalanguage$pandac$ASTNode*) $tmp4008);
            org$pandalanguage$pandac$IRNode* $tmp4010 = org$pandalanguage$pandac$Compiler$compileDeclaration$org$pandalanguage$pandac$ASTNode$panda$core$Int64$R$org$pandalanguage$pandac$IRNode$Q(self, astDecl4004, varKind3988);
            decl4009 = $tmp4010;
            if (((panda$core$Bit) { decl4009 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(decls3989, ((panda$core$Object*) decl4009));
        }
        goto $l3997;
        $l3998:;
    }
    org$pandalanguage$pandac$IRNode* $tmp4011 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4011->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4011->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4011, nodeKind3987, p_v->position, ((panda$collections$ListView*) decls3989));
    return $tmp4011;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileWhenTest$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Variable* p_value, org$pandalanguage$pandac$ASTNode* p_test) {
    org$pandalanguage$pandac$IRNode* target4013;
    panda$collections$Array* callChildren4016;
    org$pandalanguage$pandac$IRNode* testValue4019;
    org$pandalanguage$pandac$IRNode* $tmp4014 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4014->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4014->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp4014, ((panda$core$Int64) { 1016 }), p_test->position, p_value->type, p_value);
    target4013 = $tmp4014;
    panda$collections$Array* $tmp4017 = (panda$collections$Array*) malloc(40);
    $tmp4017->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4017->refCount.value = 1;
    panda$collections$Array$init($tmp4017);
    callChildren4016 = $tmp4017;
    org$pandalanguage$pandac$IRNode* $tmp4020 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_test);
    testValue4019 = $tmp4020;
    if (((panda$core$Bit) { testValue4019 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(callChildren4016, ((panda$core$Object*) testValue4019));
    org$pandalanguage$pandac$IRNode* $tmp4022 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target4013, &$s4021, ((panda$collections$ListView*) callChildren4016));
    return $tmp4022;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileChainedIfWhen$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Variable* p_value, org$pandalanguage$pandac$ASTNode* p_w) {
    org$pandalanguage$pandac$IRNode* test4031;
    panda$core$Range$LTpanda$core$Int64$GT $tmp4035;
    org$pandalanguage$pandac$IRNode* nextTest4051;
    panda$collections$Array* callChildren4055;
    panda$collections$Array* statements4068;
    panda$core$Range$LTpanda$core$Int64$GT $tmp4071;
    org$pandalanguage$pandac$IRNode* statement4086;
    panda$collections$Array* children4096;
    panda$core$Bit $tmp4023 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_w->kind, ((panda$core$Int64) { 124 }));
    PANDA_ASSERT($tmp4023.value);
    panda$core$Int64 $tmp4024 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Bit $tmp4025 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp4024, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4025.value);
    panda$core$Object* $tmp4026 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp4027 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp4026)->kind, ((panda$core$Int64) { 128 }));
    PANDA_ASSERT($tmp4027.value);
    panda$core$Object* $tmp4028 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Int64 $tmp4029 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$ASTNode*) $tmp4028)->children);
    panda$core$Bit $tmp4030 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp4029, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4030.value);
    panda$core$Object* $tmp4032 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp4033 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$ASTNode*) $tmp4032)->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp4034 = org$pandalanguage$pandac$Compiler$compileWhenTest$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_value, ((org$pandalanguage$pandac$ASTNode*) $tmp4033));
    test4031 = $tmp4034;
    if (((panda$core$Bit) { test4031 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Object* $tmp4036 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Int64 $tmp4037 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$ASTNode*) $tmp4036)->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp4035, ((panda$core$Int64) { 1 }), $tmp4037, ((panda$core$Bit) { false }));
    int64_t $tmp4039 = $tmp4035.min.value;
    panda$core$Int64 i4038 = { $tmp4039 };
    int64_t $tmp4041 = $tmp4035.max.value;
    bool $tmp4042 = $tmp4035.inclusive.value;
    if ($tmp4042) goto $l4049; else goto $l4050;
    $l4049:;
    if ($tmp4039 <= $tmp4041) goto $l4043; else goto $l4045;
    $l4050:;
    if ($tmp4039 < $tmp4041) goto $l4043; else goto $l4045;
    $l4043:;
    {
        panda$core$Object* $tmp4052 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp4053 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$ASTNode*) $tmp4052)->children, i4038);
        org$pandalanguage$pandac$IRNode* $tmp4054 = org$pandalanguage$pandac$Compiler$compileWhenTest$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_value, ((org$pandalanguage$pandac$ASTNode*) $tmp4053));
        nextTest4051 = $tmp4054;
        if (((panda$core$Bit) { nextTest4051 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp4056 = (panda$collections$Array*) malloc(40);
        $tmp4056->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp4056->refCount.value = 1;
        panda$collections$Array$init($tmp4056);
        callChildren4055 = $tmp4056;
        panda$collections$Array$add$panda$collections$Array$T(callChildren4055, ((panda$core$Object*) nextTest4051));
        org$pandalanguage$pandac$IRNode* $tmp4059 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, test4031, &$s4058, ((panda$collections$ListView*) callChildren4055));
        test4031 = $tmp4059;
        if (((panda$core$Bit) { test4031 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    $l4046:;
    int64_t $tmp4061 = $tmp4041 - i4038.value;
    if ($tmp4042) goto $l4062; else goto $l4063;
    $l4062:;
    if ($tmp4061 >= 1) goto $l4060; else goto $l4045;
    $l4063:;
    if ($tmp4061 > 1) goto $l4060; else goto $l4045;
    $l4060:;
    i4038.value += 1;
    goto $l4043;
    $l4045:;
    org$pandalanguage$pandac$SymbolTable* $tmp4066 = (org$pandalanguage$pandac$SymbolTable*) malloc(48);
    $tmp4066->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp4066->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp4066, self->symbolTable);
    self->symbolTable = $tmp4066;
    panda$collections$Array* $tmp4069 = (panda$collections$Array*) malloc(40);
    $tmp4069->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4069->refCount.value = 1;
    panda$collections$Array$init($tmp4069);
    statements4068 = $tmp4069;
    panda$core$Int64 $tmp4072 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp4071, ((panda$core$Int64) { 1 }), $tmp4072, ((panda$core$Bit) { false }));
    int64_t $tmp4074 = $tmp4071.min.value;
    panda$core$Int64 i4073 = { $tmp4074 };
    int64_t $tmp4076 = $tmp4071.max.value;
    bool $tmp4077 = $tmp4071.inclusive.value;
    if ($tmp4077) goto $l4084; else goto $l4085;
    $l4084:;
    if ($tmp4074 <= $tmp4076) goto $l4078; else goto $l4080;
    $l4085:;
    if ($tmp4074 < $tmp4076) goto $l4078; else goto $l4080;
    $l4078:;
    {
        panda$core$Object* $tmp4087 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, i4073);
        org$pandalanguage$pandac$IRNode* $tmp4088 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4087));
        statement4086 = $tmp4088;
        if (((panda$core$Bit) { statement4086 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(statements4068, ((panda$core$Object*) statement4086));
    }
    $l4081:;
    int64_t $tmp4090 = $tmp4076 - i4073.value;
    if ($tmp4077) goto $l4091; else goto $l4092;
    $l4091:;
    if ($tmp4090 >= 1) goto $l4089; else goto $l4080;
    $l4092:;
    if ($tmp4090 > 1) goto $l4089; else goto $l4080;
    $l4089:;
    i4073.value += 1;
    goto $l4078;
    $l4080:;
    panda$core$Object* $tmp4095 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->symbolTable->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp4095);
    panda$collections$Array* $tmp4097 = (panda$collections$Array*) malloc(40);
    $tmp4097->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4097->refCount.value = 1;
    panda$collections$Array$init($tmp4097);
    children4096 = $tmp4097;
    panda$collections$Array$add$panda$collections$Array$T(children4096, ((panda$core$Object*) test4031));
    org$pandalanguage$pandac$IRNode* $tmp4099 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4099->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4099->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4099, ((panda$core$Int64) { 1000 }), p_w->position, ((panda$collections$ListView*) statements4068));
    panda$collections$Array$add$panda$collections$Array$T(children4096, ((panda$core$Object*) $tmp4099));
    org$pandalanguage$pandac$IRNode* $tmp4101 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4101->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4101->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4101, ((panda$core$Int64) { 1012 }), p_w->position, ((panda$collections$ListView*) children4096));
    return $tmp4101;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileChainedIfMatch$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_m, org$pandalanguage$pandac$IRNode* p_value) {
    panda$collections$Array* children4103;
    org$pandalanguage$pandac$Variable* valueVar4106;
    panda$collections$Array* declChildren4116;
    panda$collections$Array* varChildren4121;
    panda$core$Range$LTpanda$core$Int64$GT $tmp4128;
    org$pandalanguage$pandac$ASTNode* c4143;
    org$pandalanguage$pandac$IRNode* w4145;
    panda$collections$Array* statements4147;
    panda$collections$Iterator* astStatement$Iter4150;
    org$pandalanguage$pandac$ASTNode* astStatement4162;
    org$pandalanguage$pandac$IRNode* stmt4167;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp4177;
    panda$collections$Array* newChildren4205;
    panda$collections$Array* $tmp4104 = (panda$collections$Array*) malloc(40);
    $tmp4104->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4104->refCount.value = 1;
    panda$collections$Array$init($tmp4104);
    children4103 = $tmp4104;
    org$pandalanguage$pandac$Variable* $tmp4107 = (org$pandalanguage$pandac$Variable*) malloc(88);
    $tmp4107->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
    $tmp4107->refCount.value = 1;
    panda$core$String* $tmp4110 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4109, ((panda$core$Object*) wrap_panda$core$Int64(p_m->position.line)));
    panda$core$String* $tmp4112 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4110, &$s4111);
    panda$core$String* $tmp4113 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp4112, ((panda$core$Object*) wrap_panda$core$Int64(p_m->position.column)));
    panda$core$String* $tmp4115 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4113, &$s4114);
    org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type($tmp4107, p_m->position, ((panda$core$Int64) { 10001 }), $tmp4115, p_value->type);
    valueVar4106 = $tmp4107;
    panda$collections$Array* $tmp4117 = (panda$collections$Array*) malloc(40);
    $tmp4117->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4117->refCount.value = 1;
    panda$collections$Array$init($tmp4117);
    declChildren4116 = $tmp4117;
    org$pandalanguage$pandac$IRNode* $tmp4119 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4119->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4119->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp4119, ((panda$core$Int64) { 1016 }), p_value->position, valueVar4106->type, valueVar4106);
    panda$collections$Array$add$panda$collections$Array$T(declChildren4116, ((panda$core$Object*) $tmp4119));
    panda$collections$Array$add$panda$collections$Array$T(declChildren4116, ((panda$core$Object*) p_value));
    panda$collections$Array* $tmp4122 = (panda$collections$Array*) malloc(40);
    $tmp4122->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4122->refCount.value = 1;
    panda$collections$Array$init($tmp4122);
    varChildren4121 = $tmp4122;
    org$pandalanguage$pandac$IRNode* $tmp4124 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4124->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4124->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4124, ((panda$core$Int64) { 1021 }), ((org$pandalanguage$pandac$Symbol*) valueVar4106)->position, ((panda$collections$ListView*) declChildren4116));
    panda$collections$Array$add$panda$collections$Array$T(varChildren4121, ((panda$core$Object*) $tmp4124));
    org$pandalanguage$pandac$IRNode* $tmp4126 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4126->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4126->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4126, ((panda$core$Int64) { 1018 }), ((org$pandalanguage$pandac$Symbol*) valueVar4106)->position, ((panda$collections$ListView*) varChildren4121));
    panda$collections$Array$add$panda$collections$Array$T(children4103, ((panda$core$Object*) $tmp4126));
    panda$core$Int64 $tmp4129 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp4128, ((panda$core$Int64) { 1 }), $tmp4129, ((panda$core$Bit) { false }));
    int64_t $tmp4131 = $tmp4128.min.value;
    panda$core$Int64 i4130 = { $tmp4131 };
    int64_t $tmp4133 = $tmp4128.max.value;
    bool $tmp4134 = $tmp4128.inclusive.value;
    if ($tmp4134) goto $l4141; else goto $l4142;
    $l4141:;
    if ($tmp4131 <= $tmp4133) goto $l4135; else goto $l4137;
    $l4142:;
    if ($tmp4131 < $tmp4133) goto $l4135; else goto $l4137;
    $l4135:;
    {
        panda$core$Object* $tmp4144 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, i4130);
        c4143 = ((org$pandalanguage$pandac$ASTNode*) $tmp4144);
        switch (c4143->kind.value) {
            case 124:
            {
                org$pandalanguage$pandac$IRNode* $tmp4146 = org$pandalanguage$pandac$Compiler$compileChainedIfWhen$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, valueVar4106, c4143);
                w4145 = $tmp4146;
                if (((panda$core$Bit) { w4145 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children4103, ((panda$core$Object*) w4145));
            }
            break;
            case 127:
            {
                panda$collections$Array* $tmp4148 = (panda$collections$Array*) malloc(40);
                $tmp4148->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp4148->refCount.value = 1;
                panda$collections$Array$init($tmp4148);
                statements4147 = $tmp4148;
                {
                    ITable* $tmp4151 = ((panda$collections$Iterable*) c4143->children)->$class->itable;
                    while ($tmp4151->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp4151 = $tmp4151->next;
                    }
                    $fn4153 $tmp4152 = $tmp4151->methods[0];
                    panda$collections$Iterator* $tmp4154 = $tmp4152(((panda$collections$Iterable*) c4143->children));
                    astStatement$Iter4150 = $tmp4154;
                    $l4155:;
                    ITable* $tmp4157 = astStatement$Iter4150->$class->itable;
                    while ($tmp4157->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp4157 = $tmp4157->next;
                    }
                    $fn4159 $tmp4158 = $tmp4157->methods[0];
                    panda$core$Bit $tmp4160 = $tmp4158(astStatement$Iter4150);
                    panda$core$Bit $tmp4161 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4160);
                    if (!$tmp4161.value) goto $l4156;
                    {
                        ITable* $tmp4163 = astStatement$Iter4150->$class->itable;
                        while ($tmp4163->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp4163 = $tmp4163->next;
                        }
                        $fn4165 $tmp4164 = $tmp4163->methods[1];
                        panda$core$Object* $tmp4166 = $tmp4164(astStatement$Iter4150);
                        astStatement4162 = ((org$pandalanguage$pandac$ASTNode*) $tmp4166);
                        org$pandalanguage$pandac$IRNode* $tmp4168 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, astStatement4162);
                        stmt4167 = $tmp4168;
                        if (((panda$core$Bit) { stmt4167 == NULL }).value) {
                        {
                            return NULL;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(statements4147, ((panda$core$Object*) stmt4167));
                    }
                    goto $l4155;
                    $l4156:;
                }
                org$pandalanguage$pandac$IRNode* $tmp4169 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp4169->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp4169->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4169, ((panda$core$Int64) { 1000 }), c4143->position, ((panda$collections$ListView*) statements4147));
                panda$collections$Array$add$panda$collections$Array$T(children4103, ((panda$core$Object*) $tmp4169));
            }
            break;
            default:
            {
                PANDA_ASSERT(((panda$core$Bit) { false }).value);
            }
        }
    }
    $l4138:;
    int64_t $tmp4172 = $tmp4133 - i4130.value;
    if ($tmp4134) goto $l4173; else goto $l4174;
    $l4173:;
    if ($tmp4172 >= 1) goto $l4171; else goto $l4137;
    $l4174:;
    if ($tmp4172 > 1) goto $l4171; else goto $l4137;
    $l4171:;
    i4130.value += 1;
    goto $l4135;
    $l4137:;
    panda$core$Int64 $tmp4178 = panda$collections$Array$get_count$R$panda$core$Int64(children4103);
    panda$core$Int64 $tmp4179 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp4178, ((panda$core$Int64) { 1 }));
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp4177, $tmp4179, ((panda$core$Int64) { 1 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { false }));
    int64_t $tmp4181 = $tmp4177.start.value;
    panda$core$Int64 i4180 = { $tmp4181 };
    int64_t $tmp4183 = $tmp4177.end.value;
    int64_t $tmp4184 = $tmp4177.step.value;
    bool $tmp4185 = $tmp4177.inclusive.value;
    bool $tmp4192 = $tmp4184 > 0;
    if ($tmp4192) goto $l4190; else goto $l4191;
    $l4190:;
    if ($tmp4185) goto $l4193; else goto $l4194;
    $l4193:;
    if ($tmp4181 <= $tmp4183) goto $l4186; else goto $l4188;
    $l4194:;
    if ($tmp4181 < $tmp4183) goto $l4186; else goto $l4188;
    $l4191:;
    if ($tmp4185) goto $l4195; else goto $l4196;
    $l4195:;
    if ($tmp4181 >= $tmp4183) goto $l4186; else goto $l4188;
    $l4196:;
    if ($tmp4181 > $tmp4183) goto $l4186; else goto $l4188;
    $l4186:;
    {
        panda$core$Int64 $tmp4198 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4180, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp4199 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children4103, $tmp4198);
        panda$core$Bit $tmp4200 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp4199)->kind, ((panda$core$Int64) { 1012 }));
        PANDA_ASSERT($tmp4200.value);
        panda$core$Int64 $tmp4201 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4180, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp4202 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children4103, $tmp4201);
        panda$core$Int64 $tmp4203 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp4202)->children);
        panda$core$Bit $tmp4204 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4203, ((panda$core$Int64) { 2 }));
        PANDA_ASSERT($tmp4204.value);
        panda$collections$Array* $tmp4206 = (panda$collections$Array*) malloc(40);
        $tmp4206->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp4206->refCount.value = 1;
        panda$core$Int64 $tmp4208 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4180, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp4209 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children4103, $tmp4208);
        panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp4206, ((panda$collections$ListView*) ((org$pandalanguage$pandac$IRNode*) $tmp4209)->children));
        newChildren4205 = $tmp4206;
        panda$core$Object* $tmp4210 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children4103, i4180);
        panda$collections$Array$add$panda$collections$Array$T(newChildren4205, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp4210)));
        panda$core$Int64 $tmp4211 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4180, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$IRNode* $tmp4212 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp4212->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp4212->refCount.value = 1;
        panda$core$Int64 $tmp4214 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4180, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp4215 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children4103, $tmp4214);
        panda$core$Int64 $tmp4216 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4180, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp4217 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children4103, $tmp4216);
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4212, ((org$pandalanguage$pandac$IRNode*) $tmp4215)->kind, ((org$pandalanguage$pandac$IRNode*) $tmp4217)->position, ((panda$collections$ListView*) newChildren4205));
        panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(children4103, $tmp4211, ((panda$core$Object*) $tmp4212));
        panda$core$Int64 $tmp4218 = panda$collections$Array$get_count$R$panda$core$Int64(children4103);
        panda$core$Int64 $tmp4219 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp4218, ((panda$core$Int64) { 1 }));
        panda$collections$Array$removeIndex$panda$core$Int64(children4103, $tmp4219);
    }
    $l4189:;
    if ($tmp4192) goto $l4221; else goto $l4222;
    $l4221:;
    int64_t $tmp4223 = $tmp4183 - i4180.value;
    if ($tmp4185) goto $l4224; else goto $l4225;
    $l4224:;
    if ($tmp4223 >= $tmp4184) goto $l4220; else goto $l4188;
    $l4225:;
    if ($tmp4223 > $tmp4184) goto $l4220; else goto $l4188;
    $l4222:;
    int64_t $tmp4227 = i4180.value - $tmp4183;
    if ($tmp4185) goto $l4228; else goto $l4229;
    $l4228:;
    if ($tmp4227 >= -$tmp4184) goto $l4220; else goto $l4188;
    $l4229:;
    if ($tmp4227 > -$tmp4184) goto $l4220; else goto $l4188;
    $l4220:;
    i4180.value += $tmp4184;
    goto $l4186;
    $l4188:;
    org$pandalanguage$pandac$IRNode* $tmp4231 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4231->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4231->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4231, ((panda$core$Int64) { 1000 }), p_m->position, ((panda$collections$ListView*) children4103));
    return $tmp4231;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileWhen$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type, org$pandalanguage$pandac$ASTNode* p_w) {
    panda$collections$Array* children4241;
    panda$collections$Iterator* expr$Iter4244;
    org$pandalanguage$pandac$ASTNode* expr4257;
    org$pandalanguage$pandac$IRNode* compiled4262;
    panda$collections$Array* statements4267;
    panda$core$Range$LTpanda$core$Int64$GT $tmp4270;
    org$pandalanguage$pandac$IRNode* statement4285;
    panda$core$Bit $tmp4233 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_w->kind, ((panda$core$Int64) { 124 }));
    PANDA_ASSERT($tmp4233.value);
    panda$core$Int64 $tmp4234 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Bit $tmp4235 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp4234, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4235.value);
    panda$core$Object* $tmp4236 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp4237 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp4236)->kind, ((panda$core$Int64) { 128 }));
    PANDA_ASSERT($tmp4237.value);
    panda$core$Object* $tmp4238 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Int64 $tmp4239 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$ASTNode*) $tmp4238)->children);
    panda$core$Bit $tmp4240 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp4239, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4240.value);
    panda$collections$Array* $tmp4242 = (panda$collections$Array*) malloc(40);
    $tmp4242->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4242->refCount.value = 1;
    panda$collections$Array$init($tmp4242);
    children4241 = $tmp4242;
    {
        panda$core$Object* $tmp4245 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
        ITable* $tmp4246 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp4245)->children)->$class->itable;
        while ($tmp4246->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4246 = $tmp4246->next;
        }
        $fn4248 $tmp4247 = $tmp4246->methods[0];
        panda$collections$Iterator* $tmp4249 = $tmp4247(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp4245)->children));
        expr$Iter4244 = $tmp4249;
        $l4250:;
        ITable* $tmp4252 = expr$Iter4244->$class->itable;
        while ($tmp4252->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4252 = $tmp4252->next;
        }
        $fn4254 $tmp4253 = $tmp4252->methods[0];
        panda$core$Bit $tmp4255 = $tmp4253(expr$Iter4244);
        panda$core$Bit $tmp4256 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4255);
        if (!$tmp4256.value) goto $l4251;
        {
            ITable* $tmp4258 = expr$Iter4244->$class->itable;
            while ($tmp4258->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4258 = $tmp4258->next;
            }
            $fn4260 $tmp4259 = $tmp4258->methods[1];
            panda$core$Object* $tmp4261 = $tmp4259(expr$Iter4244);
            expr4257 = ((org$pandalanguage$pandac$ASTNode*) $tmp4261);
            org$pandalanguage$pandac$IRNode* $tmp4263 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, expr4257);
            org$pandalanguage$pandac$IRNode* $tmp4264 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp4263, p_type);
            compiled4262 = $tmp4264;
            if (((panda$core$Bit) { compiled4262 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children4241, ((panda$core$Object*) compiled4262));
        }
        goto $l4250;
        $l4251:;
    }
    org$pandalanguage$pandac$SymbolTable* $tmp4265 = (org$pandalanguage$pandac$SymbolTable*) malloc(48);
    $tmp4265->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp4265->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp4265, self->symbolTable);
    self->symbolTable = $tmp4265;
    panda$collections$Array* $tmp4268 = (panda$collections$Array*) malloc(40);
    $tmp4268->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4268->refCount.value = 1;
    panda$collections$Array$init($tmp4268);
    statements4267 = $tmp4268;
    panda$core$Int64 $tmp4271 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp4270, ((panda$core$Int64) { 1 }), $tmp4271, ((panda$core$Bit) { false }));
    int64_t $tmp4273 = $tmp4270.min.value;
    panda$core$Int64 i4272 = { $tmp4273 };
    int64_t $tmp4275 = $tmp4270.max.value;
    bool $tmp4276 = $tmp4270.inclusive.value;
    if ($tmp4276) goto $l4283; else goto $l4284;
    $l4283:;
    if ($tmp4273 <= $tmp4275) goto $l4277; else goto $l4279;
    $l4284:;
    if ($tmp4273 < $tmp4275) goto $l4277; else goto $l4279;
    $l4277:;
    {
        panda$core$Object* $tmp4286 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, i4272);
        org$pandalanguage$pandac$IRNode* $tmp4287 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4286));
        statement4285 = $tmp4287;
        if (((panda$core$Bit) { statement4285 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(statements4267, ((panda$core$Object*) statement4285));
    }
    $l4280:;
    int64_t $tmp4289 = $tmp4275 - i4272.value;
    if ($tmp4276) goto $l4290; else goto $l4291;
    $l4290:;
    if ($tmp4289 >= 1) goto $l4288; else goto $l4279;
    $l4291:;
    if ($tmp4289 > 1) goto $l4288; else goto $l4279;
    $l4288:;
    i4272.value += 1;
    goto $l4277;
    $l4279:;
    panda$core$Object* $tmp4294 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->symbolTable->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp4294);
    org$pandalanguage$pandac$IRNode* $tmp4295 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4295->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4295->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4295, ((panda$core$Int64) { 1000 }), p_w->position, ((panda$collections$ListView*) statements4267));
    panda$collections$Array$add$panda$collections$Array$T(children4241, ((panda$core$Object*) $tmp4295));
    org$pandalanguage$pandac$IRNode* $tmp4297 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4297->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4297->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4297, ((panda$core$Int64) { 1042 }), p_w->position, ((panda$collections$ListView*) children4241));
    return $tmp4297;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileOtherwise$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_o) {
    panda$collections$Array* children4300;
    panda$collections$Array* statements4305;
    panda$collections$Iterator* s$Iter4308;
    org$pandalanguage$pandac$ASTNode* s4320;
    org$pandalanguage$pandac$IRNode* statement4325;
    panda$core$Bit $tmp4299 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_o->kind, ((panda$core$Int64) { 127 }));
    PANDA_ASSERT($tmp4299.value);
    panda$collections$Array* $tmp4301 = (panda$collections$Array*) malloc(40);
    $tmp4301->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4301->refCount.value = 1;
    panda$collections$Array$init($tmp4301);
    children4300 = $tmp4301;
    org$pandalanguage$pandac$SymbolTable* $tmp4303 = (org$pandalanguage$pandac$SymbolTable*) malloc(48);
    $tmp4303->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp4303->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp4303, self->symbolTable);
    self->symbolTable = $tmp4303;
    panda$collections$Array* $tmp4306 = (panda$collections$Array*) malloc(40);
    $tmp4306->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4306->refCount.value = 1;
    panda$collections$Array$init($tmp4306);
    statements4305 = $tmp4306;
    {
        ITable* $tmp4309 = ((panda$collections$Iterable*) p_o->children)->$class->itable;
        while ($tmp4309->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4309 = $tmp4309->next;
        }
        $fn4311 $tmp4310 = $tmp4309->methods[0];
        panda$collections$Iterator* $tmp4312 = $tmp4310(((panda$collections$Iterable*) p_o->children));
        s$Iter4308 = $tmp4312;
        $l4313:;
        ITable* $tmp4315 = s$Iter4308->$class->itable;
        while ($tmp4315->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4315 = $tmp4315->next;
        }
        $fn4317 $tmp4316 = $tmp4315->methods[0];
        panda$core$Bit $tmp4318 = $tmp4316(s$Iter4308);
        panda$core$Bit $tmp4319 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4318);
        if (!$tmp4319.value) goto $l4314;
        {
            ITable* $tmp4321 = s$Iter4308->$class->itable;
            while ($tmp4321->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4321 = $tmp4321->next;
            }
            $fn4323 $tmp4322 = $tmp4321->methods[1];
            panda$core$Object* $tmp4324 = $tmp4322(s$Iter4308);
            s4320 = ((org$pandalanguage$pandac$ASTNode*) $tmp4324);
            org$pandalanguage$pandac$IRNode* $tmp4326 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, s4320);
            statement4325 = $tmp4326;
            if (((panda$core$Bit) { statement4325 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(statements4305, ((panda$core$Object*) statement4325));
        }
        goto $l4313;
        $l4314:;
    }
    panda$core$Object* $tmp4327 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->symbolTable->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp4327);
    org$pandalanguage$pandac$IRNode* $tmp4328 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4328->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4328->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4328, ((panda$core$Int64) { 1000 }), p_o->position, ((panda$collections$ListView*) statements4305));
    panda$collections$Array$add$panda$collections$Array$T(children4300, ((panda$core$Object*) $tmp4328));
    org$pandalanguage$pandac$IRNode* $tmp4330 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4330->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4330->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4330, ((panda$core$Int64) { 1043 }), p_o->position, ((panda$collections$ListView*) children4300));
    return $tmp4330;
}
panda$core$Bit org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    org$pandalanguage$pandac$FieldDecl* f4339;
    org$pandalanguage$pandac$Variable* v4348;
    switch (p_expr->kind.value) {
        case 1004:
        {
            return ((panda$core$Bit) { true });
        }
        break;
        case 1010:
        {
            panda$core$Bit $tmp4333 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_expr->type);
            bool $tmp4332 = $tmp4333.value;
            if (!$tmp4332) goto $l4334;
            panda$core$Object* $tmp4335 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp4336 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$IRNode*) $tmp4335)->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp4337 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp4336));
            $tmp4332 = $tmp4337.value;
            $l4334:;
            panda$core$Bit $tmp4338 = { $tmp4332 };
            return $tmp4338;
        }
        break;
        case 1026:
        {
            f4339 = ((org$pandalanguage$pandac$FieldDecl*) p_expr->payload);
            PANDA_ASSERT(f4339->resolved.value);
            panda$core$Bit $tmp4342 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(f4339->fieldKind, ((panda$core$Int64) { 10002 }));
            bool $tmp4341 = $tmp4342.value;
            if (!$tmp4341) goto $l4343;
            $tmp4341 = ((panda$core$Bit) { f4339->value != NULL }).value;
            $l4343:;
            panda$core$Bit $tmp4344 = { $tmp4341 };
            bool $tmp4340 = $tmp4344.value;
            if (!$tmp4340) goto $l4345;
            panda$core$Bit $tmp4346 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, f4339->value);
            $tmp4340 = $tmp4346.value;
            $l4345:;
            panda$core$Bit $tmp4347 = { $tmp4340 };
            return $tmp4347;
        }
        break;
        case 1016:
        {
            v4348 = ((org$pandalanguage$pandac$Variable*) p_expr->payload);
            panda$core$Bit $tmp4350 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(v4348->varKind, ((panda$core$Int64) { 10001 }));
            bool $tmp4349 = $tmp4350.value;
            if ($tmp4349) goto $l4351;
            panda$core$Bit $tmp4354 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(v4348->varKind, ((panda$core$Int64) { 10002 }));
            bool $tmp4353 = $tmp4354.value;
            if (!$tmp4353) goto $l4355;
            $tmp4353 = ((panda$core$Bit) { v4348->initialValue != NULL }).value;
            $l4355:;
            panda$core$Bit $tmp4356 = { $tmp4353 };
            bool $tmp4352 = $tmp4356.value;
            if (!$tmp4352) goto $l4357;
            panda$core$Bit $tmp4358 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, v4348->initialValue);
            $tmp4352 = $tmp4358.value;
            $l4357:;
            panda$core$Bit $tmp4359 = { $tmp4352 };
            $tmp4349 = $tmp4359.value;
            $l4351:;
            panda$core$Bit $tmp4360 = { $tmp4349 };
            return $tmp4360;
        }
        break;
        default:
        {
            return ((panda$core$Bit) { false });
        }
    }
}
panda$core$UInt64 org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    org$pandalanguage$pandac$FieldDecl* f4365;
    org$pandalanguage$pandac$Variable* v4367;
    panda$core$Bit $tmp4361 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, p_expr);
    PANDA_ASSERT($tmp4361.value);
    switch (p_expr->kind.value) {
        case 1004:
        {
            return ((panda$core$UInt64$wrapper*) p_expr->payload)->value;
        }
        break;
        case 1010:
        {
            panda$core$Object* $tmp4362 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp4363 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$IRNode*) $tmp4362)->children, ((panda$core$Int64) { 0 }));
            panda$core$UInt64 $tmp4364 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self, ((org$pandalanguage$pandac$IRNode*) $tmp4363));
            return $tmp4364;
        }
        break;
        case 1026:
        {
            f4365 = ((org$pandalanguage$pandac$FieldDecl*) p_expr->payload);
            panda$core$UInt64 $tmp4366 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self, f4365->value);
            return $tmp4366;
        }
        break;
        case 1016:
        {
            v4367 = ((org$pandalanguage$pandac$Variable*) p_expr->payload);
            panda$core$UInt64 $tmp4368 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self, v4367->initialValue);
            return $tmp4368;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileMatch$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_m) {
    org$pandalanguage$pandac$IRNode* value4372;
    panda$collections$Array* children4379;
    panda$collections$Iterator* rawWhen$Iter4382;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp4383;
    org$pandalanguage$pandac$ASTNode* rawWhen4396;
    org$pandalanguage$pandac$IRNode* o4402;
    org$pandalanguage$pandac$IRNode* w4404;
    panda$core$Bit $tmp4369 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->kind, ((panda$core$Int64) { 125 }));
    PANDA_ASSERT($tmp4369.value);
    panda$core$Int64 $tmp4370 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
    panda$core$Bit $tmp4371 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp4370, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4371.value);
    panda$core$Object* $tmp4373 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp4374 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4373));
    org$pandalanguage$pandac$IRNode* $tmp4375 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp4374);
    value4372 = $tmp4375;
    if (((panda$core$Bit) { value4372 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp4376 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(value4372->type);
    panda$core$Bit $tmp4377 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4376);
    if ($tmp4377.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp4378 = org$pandalanguage$pandac$Compiler$compileChainedIfMatch$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_m, value4372);
        return $tmp4378;
    }
    }
    panda$collections$Array* $tmp4380 = (panda$collections$Array*) malloc(40);
    $tmp4380->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4380->refCount.value = 1;
    panda$collections$Array$init($tmp4380);
    children4379 = $tmp4380;
    panda$collections$Array$add$panda$collections$Array$T(children4379, ((panda$core$Object*) value4372));
    {
        panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp4383, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
        panda$collections$ImmutableArray* $tmp4384 = panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(p_m->children, $tmp4383);
        ITable* $tmp4385 = ((panda$collections$Iterable*) $tmp4384)->$class->itable;
        while ($tmp4385->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4385 = $tmp4385->next;
        }
        $fn4387 $tmp4386 = $tmp4385->methods[0];
        panda$collections$Iterator* $tmp4388 = $tmp4386(((panda$collections$Iterable*) $tmp4384));
        rawWhen$Iter4382 = $tmp4388;
        $l4389:;
        ITable* $tmp4391 = rawWhen$Iter4382->$class->itable;
        while ($tmp4391->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4391 = $tmp4391->next;
        }
        $fn4393 $tmp4392 = $tmp4391->methods[0];
        panda$core$Bit $tmp4394 = $tmp4392(rawWhen$Iter4382);
        panda$core$Bit $tmp4395 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4394);
        if (!$tmp4395.value) goto $l4390;
        {
            ITable* $tmp4397 = rawWhen$Iter4382->$class->itable;
            while ($tmp4397->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4397 = $tmp4397->next;
            }
            $fn4399 $tmp4398 = $tmp4397->methods[1];
            panda$core$Object* $tmp4400 = $tmp4398(rawWhen$Iter4382);
            rawWhen4396 = ((org$pandalanguage$pandac$ASTNode*) $tmp4400);
            panda$core$Bit $tmp4401 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(rawWhen4396->kind, ((panda$core$Int64) { 127 }));
            if ($tmp4401.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp4403 = org$pandalanguage$pandac$Compiler$compileOtherwise$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, rawWhen4396);
                o4402 = $tmp4403;
                if (((panda$core$Bit) { o4402 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children4379, ((panda$core$Object*) o4402));
                goto $l4389;
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp4405 = org$pandalanguage$pandac$Compiler$compileWhen$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, value4372->type, rawWhen4396);
            w4404 = $tmp4405;
            if (((panda$core$Bit) { w4404 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$Object* $tmp4406 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(w4404->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp4407 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp4406));
            panda$core$Bit $tmp4408 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4407);
            if ($tmp4408.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp4409 = org$pandalanguage$pandac$Compiler$compileChainedIfMatch$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_m, value4372);
                return $tmp4409;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children4379, ((panda$core$Object*) w4404));
        }
        goto $l4389;
        $l4390:;
    }
    org$pandalanguage$pandac$IRNode* $tmp4410 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4410->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4410->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4410, ((panda$core$Int64) { 1042 }), p_m->position, ((panda$collections$ListView*) children4379));
    return $tmp4410;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$IRNode* result4425;
    switch (p_s->kind.value) {
        case 123:
        {
            org$pandalanguage$pandac$IRNode* $tmp4412 = org$pandalanguage$pandac$Compiler$compileAssert$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4412;
        }
        break;
        case 103:
        {
            org$pandalanguage$pandac$IRNode* $tmp4413 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            org$pandalanguage$pandac$IRNode* $tmp4414 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp4413);
            return $tmp4414;
        }
        break;
        case 126:
        {
            org$pandalanguage$pandac$IRNode* $tmp4415 = org$pandalanguage$pandac$Compiler$compileBlock$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4415;
        }
        break;
        case 118:
        {
            org$pandalanguage$pandac$IRNode* $tmp4416 = org$pandalanguage$pandac$Compiler$compileIf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4416;
        }
        break;
        case 119:
        {
            org$pandalanguage$pandac$IRNode* $tmp4417 = org$pandalanguage$pandac$Compiler$compileFor$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4417;
        }
        break;
        case 121:
        {
            org$pandalanguage$pandac$IRNode* $tmp4418 = org$pandalanguage$pandac$Compiler$compileWhile$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4418;
        }
        break;
        case 120:
        {
            org$pandalanguage$pandac$IRNode* $tmp4419 = org$pandalanguage$pandac$Compiler$compileDo$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4419;
        }
        break;
        case 122:
        {
            org$pandalanguage$pandac$IRNode* $tmp4420 = org$pandalanguage$pandac$Compiler$compileLoop$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4420;
        }
        break;
        case 125:
        {
            org$pandalanguage$pandac$IRNode* $tmp4421 = org$pandalanguage$pandac$Compiler$compileMatch$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4421;
        }
        break;
        case 134:
        {
            org$pandalanguage$pandac$IRNode* $tmp4422 = org$pandalanguage$pandac$Compiler$compileBreak$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4422;
        }
        break;
        case 135:
        {
            org$pandalanguage$pandac$IRNode* $tmp4423 = org$pandalanguage$pandac$Compiler$compileContinue$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4423;
        }
        break;
        case 136:
        {
            org$pandalanguage$pandac$IRNode* $tmp4424 = org$pandalanguage$pandac$Compiler$compileReturn$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4424;
        }
        break;
        case 107:
        {
            org$pandalanguage$pandac$IRNode* $tmp4426 = org$pandalanguage$pandac$Compiler$compileCall$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            org$pandalanguage$pandac$IRNode* $tmp4427 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp4426);
            result4425 = $tmp4427;
            if (((panda$core$Bit) { result4425 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp4428 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self, result4425);
                result4425 = $tmp4428;
            }
            }
            return result4425;
        }
        break;
        case 130:
        case 131:
        case 132:
        case 133:
        {
            org$pandalanguage$pandac$IRNode* $tmp4429 = org$pandalanguage$pandac$Compiler$compileVar$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4429;
        }
        break;
    }
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBody$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$SymbolTable* old4430;
    org$pandalanguage$pandac$SymbolTable* symbols4432;
    panda$collections$Iterator* p$Iter4435;
    org$pandalanguage$pandac$MethodDecl$Parameter* p4447;
    panda$collections$Array* fieldInitializers4454;
    panda$collections$Iterator* f$Iter4458;
    org$pandalanguage$pandac$FieldDecl* f4471;
    panda$collections$Array* children4481;
    org$pandalanguage$pandac$IRNode* fieldRef4488;
    org$pandalanguage$pandac$IRNode* compiled4493;
    panda$collections$Array* children4495;
    if (((panda$core$Bit) { p_m->compiledBody != NULL }).value) {
    {
        return p_m->compiledBody;
    }
    }
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_m->owner));
    old4430 = self->symbolTable;
    org$pandalanguage$pandac$SymbolTable* $tmp4431 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, p_m->owner);
    self->symbolTable = $tmp4431;
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentMethod, ((panda$core$Object*) p_m));
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
    PANDA_ASSERT(((panda$core$Bit) { p_m->body != NULL }).value);
    org$pandalanguage$pandac$SymbolTable* $tmp4433 = (org$pandalanguage$pandac$SymbolTable*) malloc(48);
    $tmp4433->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp4433->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp4433, self->symbolTable);
    symbols4432 = $tmp4433;
    {
        ITable* $tmp4436 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp4436->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4436 = $tmp4436->next;
        }
        $fn4438 $tmp4437 = $tmp4436->methods[0];
        panda$collections$Iterator* $tmp4439 = $tmp4437(((panda$collections$Iterable*) p_m->parameters));
        p$Iter4435 = $tmp4439;
        $l4440:;
        ITable* $tmp4442 = p$Iter4435->$class->itable;
        while ($tmp4442->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4442 = $tmp4442->next;
        }
        $fn4444 $tmp4443 = $tmp4442->methods[0];
        panda$core$Bit $tmp4445 = $tmp4443(p$Iter4435);
        panda$core$Bit $tmp4446 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4445);
        if (!$tmp4446.value) goto $l4441;
        {
            ITable* $tmp4448 = p$Iter4435->$class->itable;
            while ($tmp4448->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4448 = $tmp4448->next;
            }
            $fn4450 $tmp4449 = $tmp4448->methods[1];
            panda$core$Object* $tmp4451 = $tmp4449(p$Iter4435);
            p4447 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp4451);
            org$pandalanguage$pandac$Variable* $tmp4452 = (org$pandalanguage$pandac$Variable*) malloc(88);
            $tmp4452->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
            $tmp4452->refCount.value = 1;
            org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Int64($tmp4452, ((org$pandalanguage$pandac$Symbol*) p_m)->position, ((panda$core$Int64) { 10001 }), p4447->name, p4447->type, ((panda$core$Int64) { 1820 }));
            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(symbols4432, ((org$pandalanguage$pandac$Symbol*) $tmp4452));
        }
        goto $l4440;
        $l4441:;
    }
    self->symbolTable = symbols4432;
    fieldInitializers4454 = NULL;
    panda$core$Bit $tmp4455 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 59 }));
    if ($tmp4455.value) {
    {
        panda$collections$Array* $tmp4456 = (panda$collections$Array*) malloc(40);
        $tmp4456->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp4456->refCount.value = 1;
        panda$collections$Array$init($tmp4456);
        fieldInitializers4454 = $tmp4456;
        {
            panda$core$Object* $tmp4459 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
            ITable* $tmp4460 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ClassDecl*) $tmp4459)->fields)->$class->itable;
            while ($tmp4460->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp4460 = $tmp4460->next;
            }
            $fn4462 $tmp4461 = $tmp4460->methods[0];
            panda$collections$Iterator* $tmp4463 = $tmp4461(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ClassDecl*) $tmp4459)->fields));
            f$Iter4458 = $tmp4463;
            $l4464:;
            ITable* $tmp4466 = f$Iter4458->$class->itable;
            while ($tmp4466->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4466 = $tmp4466->next;
            }
            $fn4468 $tmp4467 = $tmp4466->methods[0];
            panda$core$Bit $tmp4469 = $tmp4467(f$Iter4458);
            panda$core$Bit $tmp4470 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4469);
            if (!$tmp4470.value) goto $l4465;
            {
                ITable* $tmp4472 = f$Iter4458->$class->itable;
                while ($tmp4472->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp4472 = $tmp4472->next;
                }
                $fn4474 $tmp4473 = $tmp4472->methods[1];
                panda$core$Object* $tmp4475 = $tmp4473(f$Iter4458);
                f4471 = ((org$pandalanguage$pandac$FieldDecl*) $tmp4475);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self, f4471);
                panda$core$Bit $tmp4477 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(f4471->annotations);
                panda$core$Bit $tmp4478 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4477);
                bool $tmp4476 = $tmp4478.value;
                if (!$tmp4476) goto $l4479;
                $tmp4476 = ((panda$core$Bit) { f4471->value != NULL }).value;
                $l4479:;
                panda$core$Bit $tmp4480 = { $tmp4476 };
                if ($tmp4480.value) {
                {
                    panda$collections$Array* $tmp4482 = (panda$collections$Array*) malloc(40);
                    $tmp4482->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp4482->refCount.value = 1;
                    panda$collections$Array$init($tmp4482);
                    children4481 = $tmp4482;
                    org$pandalanguage$pandac$IRNode* $tmp4484 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp4484->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp4484->refCount.value = 1;
                    panda$core$Object* $tmp4486 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
                    org$pandalanguage$pandac$Type* $tmp4487 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp4486));
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp4484, ((panda$core$Int64) { 1025 }), ((org$pandalanguage$pandac$Symbol*) p_m)->position, $tmp4487);
                    panda$collections$Array$add$panda$collections$Array$T(children4481, ((panda$core$Object*) $tmp4484));
                    org$pandalanguage$pandac$IRNode* $tmp4489 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp4489->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp4489->refCount.value = 1;
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp4489, ((panda$core$Int64) { 1026 }), ((org$pandalanguage$pandac$Symbol*) p_m)->position, f4471->type, ((panda$core$Object*) f4471), ((panda$collections$ListView*) children4481));
                    fieldRef4488 = $tmp4489;
                    panda$collections$Array$clear(children4481);
                    panda$collections$Array$add$panda$collections$Array$T(children4481, ((panda$core$Object*) fieldRef4488));
                    panda$collections$Array$add$panda$collections$Array$T(children4481, ((panda$core$Object*) f4471->value));
                    org$pandalanguage$pandac$IRNode* $tmp4491 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp4491->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp4491->refCount.value = 1;
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4491, ((panda$core$Int64) { 1023 }), ((org$pandalanguage$pandac$Symbol*) f4471)->position, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 73 }))), ((panda$collections$ListView*) children4481));
                    panda$collections$Array$add$panda$collections$Array$T(fieldInitializers4454, ((panda$core$Object*) $tmp4491));
                }
                }
            }
            goto $l4464;
            $l4465:;
        }
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp4494 = org$pandalanguage$pandac$Compiler$compileBlock$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_m->body);
    compiled4493 = $tmp4494;
    if (((panda$core$Bit) { compiled4493 != NULL }).value) {
    {
        if (((panda$core$Bit) { fieldInitializers4454 != NULL }).value) {
        {
            panda$collections$Array* $tmp4496 = (panda$collections$Array*) malloc(40);
            $tmp4496->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp4496->refCount.value = 1;
            panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp4496, ((panda$collections$ListView*) fieldInitializers4454));
            children4495 = $tmp4496;
            panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(children4495, ((panda$collections$CollectionView*) compiled4493->children));
            org$pandalanguage$pandac$IRNode* $tmp4498 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp4498->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp4498->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4498, ((panda$core$Int64) { 1000 }), p_m->body->position, ((panda$collections$ListView*) children4495));
            compiled4493 = $tmp4498;
        }
        }
    }
    }
    PANDA_ASSERT(((panda$core$Bit) { ((panda$core$Object*) self->symbolTable) == ((panda$core$Object*) symbols4432) }).value);
    self->symbolTable = old4430;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentMethod);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    panda$core$Bit $tmp4500 = org$pandalanguage$pandac$Annotations$isInline$R$panda$core$Bit(p_m->annotations);
    if ($tmp4500.value) {
    {
        p_m->compiledBody = compiled4493;
    }
    }
    return compiled4493;
}
void org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$IRNode* compiled4501;
    if (((panda$core$Bit) { p_m->body != NULL }).value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp4502 = org$pandalanguage$pandac$Compiler$compileBody$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$IRNode$Q(self, p_m);
        compiled4501 = $tmp4502;
        if (((panda$core$Bit) { compiled4501 != NULL }).value) {
        {
            ITable* $tmp4503 = self->codeGenerator->$class->itable;
            while ($tmp4503->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
                $tmp4503 = $tmp4503->next;
            }
            $fn4505 $tmp4504 = $tmp4503->methods[3];
            $tmp4504(self->codeGenerator, p_m, compiled4501);
        }
        }
    }
    }
    else {
    {
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
        ITable* $tmp4506 = self->codeGenerator->$class->itable;
        while ($tmp4506->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
            $tmp4506 = $tmp4506->next;
        }
        $fn4508 $tmp4507 = $tmp4506->methods[2];
        $tmp4507(self->codeGenerator, p_m);
    }
    }
}
void org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Iterator* inner$Iter4509;
    org$pandalanguage$pandac$ClassDecl* inner4521;
    p_cl->external = ((panda$core$Bit) { false });
    {
        ITable* $tmp4510 = ((panda$collections$Iterable*) p_cl->classes)->$class->itable;
        while ($tmp4510->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4510 = $tmp4510->next;
        }
        $fn4512 $tmp4511 = $tmp4510->methods[0];
        panda$collections$Iterator* $tmp4513 = $tmp4511(((panda$collections$Iterable*) p_cl->classes));
        inner$Iter4509 = $tmp4513;
        $l4514:;
        ITable* $tmp4516 = inner$Iter4509->$class->itable;
        while ($tmp4516->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4516 = $tmp4516->next;
        }
        $fn4518 $tmp4517 = $tmp4516->methods[0];
        panda$core$Bit $tmp4519 = $tmp4517(inner$Iter4509);
        panda$core$Bit $tmp4520 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4519);
        if (!$tmp4520.value) goto $l4515;
        {
            ITable* $tmp4522 = inner$Iter4509->$class->itable;
            while ($tmp4522->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4522 = $tmp4522->next;
            }
            $fn4524 $tmp4523 = $tmp4522->methods[1];
            panda$core$Object* $tmp4525 = $tmp4523(inner$Iter4509);
            inner4521 = ((org$pandalanguage$pandac$ClassDecl*) $tmp4525);
            org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl(self, inner4521);
        }
        goto $l4514;
        $l4515:;
    }
}
void org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$SymbolTable* old4533;
    panda$collections$Iterator* m$Iter4538;
    org$pandalanguage$pandac$MethodDecl* m4550;
    org$pandalanguage$pandac$ClassDecl* next4560;
    PANDA_ASSERT(((panda$core$Bit) { self->compiling == NULL }).value);
    self->compiling = p_cl;
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_cl));
    org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl(self, p_cl);
    panda$core$Bit $tmp4526 = org$pandalanguage$pandac$Annotations$isSpecialize$R$panda$core$Bit(p_cl->annotations);
    if ($tmp4526.value) {
    {
        ITable* $tmp4527 = self->codeGenerator->$class->itable;
        while ($tmp4527->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
            $tmp4527 = $tmp4527->next;
        }
        $fn4529 $tmp4528 = $tmp4527->methods[1];
        $tmp4528(self->codeGenerator, p_cl);
        ITable* $tmp4530 = self->codeGenerator->$class->itable;
        while ($tmp4530->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
            $tmp4530 = $tmp4530->next;
        }
        $fn4532 $tmp4531 = $tmp4530->methods[4];
        $tmp4531(self->codeGenerator, p_cl);
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
        return;
    }
    }
    old4533 = self->symbolTable;
    org$pandalanguage$pandac$SymbolTable* $tmp4534 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, p_cl);
    self->symbolTable = $tmp4534;
    ITable* $tmp4535 = self->codeGenerator->$class->itable;
    while ($tmp4535->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
        $tmp4535 = $tmp4535->next;
    }
    $fn4537 $tmp4536 = $tmp4535->methods[1];
    $tmp4536(self->codeGenerator, p_cl);
    {
        ITable* $tmp4539 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
        while ($tmp4539->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4539 = $tmp4539->next;
        }
        $fn4541 $tmp4540 = $tmp4539->methods[0];
        panda$collections$Iterator* $tmp4542 = $tmp4540(((panda$collections$Iterable*) p_cl->methods));
        m$Iter4538 = $tmp4542;
        $l4543:;
        ITable* $tmp4545 = m$Iter4538->$class->itable;
        while ($tmp4545->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4545 = $tmp4545->next;
        }
        $fn4547 $tmp4546 = $tmp4545->methods[0];
        panda$core$Bit $tmp4548 = $tmp4546(m$Iter4538);
        panda$core$Bit $tmp4549 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4548);
        if (!$tmp4549.value) goto $l4544;
        {
            ITable* $tmp4551 = m$Iter4538->$class->itable;
            while ($tmp4551->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4551 = $tmp4551->next;
            }
            $fn4553 $tmp4552 = $tmp4551->methods[1];
            panda$core$Object* $tmp4554 = $tmp4552(m$Iter4538);
            m4550 = ((org$pandalanguage$pandac$MethodDecl*) $tmp4554);
            org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$MethodDecl(self, m4550);
        }
        goto $l4543;
        $l4544:;
    }
    ITable* $tmp4555 = self->codeGenerator->$class->itable;
    while ($tmp4555->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
        $tmp4555 = $tmp4555->next;
    }
    $fn4557 $tmp4556 = $tmp4555->methods[4];
    $tmp4556(self->codeGenerator, p_cl);
    self->symbolTable = old4533;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    self->compiling = NULL;
    panda$core$Int64 $tmp4558 = panda$collections$Array$get_count$R$panda$core$Int64(self->compilationQueue);
    panda$core$Bit $tmp4559 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp4558, ((panda$core$Int64) { 0 }));
    if ($tmp4559.value) {
    {
        panda$core$Object* $tmp4561 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->compilationQueue, ((panda$core$Int64) { 0 }));
        next4560 = ((org$pandalanguage$pandac$ClassDecl*) $tmp4561);
        panda$collections$Array$removeIndex$panda$core$Int64(self->compilationQueue, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$ClassDecl(self, next4560);
    }
    }
    panda$core$Int64 $tmp4562 = panda$collections$Array$get_count$R$panda$core$Int64(self->compilationQueue);
    panda$core$Bit $tmp4563 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4562, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp4563.value);
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Compiler* self, panda$io$File* p_file) {
    panda$collections$ListView* result4564;
    org$pandalanguage$pandac$ASTNode* parsed4567;
    panda$collections$Iterator* cl$Iter4570;
    org$pandalanguage$pandac$ClassDecl* cl4582;
    panda$core$Object* $tmp4565 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->scans, ((panda$collections$Key*) p_file));
    result4564 = ((panda$collections$ListView*) $tmp4565);
    if (((panda$core$Bit) { result4564 == NULL }).value) {
    {
        panda$core$String* $tmp4566 = panda$io$File$readFully$R$panda$core$String(p_file);
        org$pandalanguage$pandac$parser$Parser$start$panda$io$File$panda$core$String(self->parser, p_file, $tmp4566);
        org$pandalanguage$pandac$ASTNode* $tmp4568 = org$pandalanguage$pandac$parser$Parser$file$R$org$pandalanguage$pandac$ASTNode$Q(self->parser);
        parsed4567 = $tmp4568;
        if (((panda$core$Bit) { parsed4567 != NULL }).value) {
        {
            panda$collections$ListView* $tmp4569 = org$pandalanguage$pandac$Scanner$scan$panda$io$File$org$pandalanguage$pandac$ASTNode$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(self->scanner, p_file, parsed4567);
            result4564 = $tmp4569;
            {
                ITable* $tmp4571 = ((panda$collections$Iterable*) result4564)->$class->itable;
                while ($tmp4571->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp4571 = $tmp4571->next;
                }
                $fn4573 $tmp4572 = $tmp4571->methods[0];
                panda$collections$Iterator* $tmp4574 = $tmp4572(((panda$collections$Iterable*) result4564));
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
                    panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classes, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) cl4582)->name), ((panda$core$Object*) cl4582));
                }
                goto $l4575;
                $l4576:;
            }
        }
        }
        else {
        {
            panda$collections$Array* $tmp4587 = (panda$collections$Array*) malloc(40);
            $tmp4587->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp4587->refCount.value = 1;
            panda$collections$Array$init($tmp4587);
            result4564 = ((panda$collections$ListView*) $tmp4587);
        }
        }
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->scans, ((panda$collections$Key*) p_file), ((panda$core$Object*) result4564));
    }
    }
    return result4564;
}
void org$pandalanguage$pandac$Compiler$compile$panda$io$File(org$pandalanguage$pandac$Compiler* self, panda$io$File* p_file) {
    panda$collections$ListView* classes4589;
    panda$collections$Iterator* cl$Iter4591;
    org$pandalanguage$pandac$ClassDecl* cl4603;
    panda$collections$ListView* $tmp4590 = org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(self, p_file);
    classes4589 = $tmp4590;
    {
        ITable* $tmp4592 = ((panda$collections$Iterable*) classes4589)->$class->itable;
        while ($tmp4592->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4592 = $tmp4592->next;
        }
        $fn4594 $tmp4593 = $tmp4592->methods[0];
        panda$collections$Iterator* $tmp4595 = $tmp4593(((panda$collections$Iterable*) classes4589));
        cl$Iter4591 = $tmp4595;
        $l4596:;
        ITable* $tmp4598 = cl$Iter4591->$class->itable;
        while ($tmp4598->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4598 = $tmp4598->next;
        }
        $fn4600 $tmp4599 = $tmp4598->methods[0];
        panda$core$Bit $tmp4601 = $tmp4599(cl$Iter4591);
        panda$core$Bit $tmp4602 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4601);
        if (!$tmp4602.value) goto $l4597;
        {
            ITable* $tmp4604 = cl$Iter4591->$class->itable;
            while ($tmp4604->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4604 = $tmp4604->next;
            }
            $fn4606 $tmp4605 = $tmp4604->methods[1];
            panda$core$Object* $tmp4607 = $tmp4605(cl$Iter4591);
            cl4603 = ((org$pandalanguage$pandac$ClassDecl*) $tmp4607);
            org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$ClassDecl(self, cl4603);
        }
        goto $l4596;
        $l4597:;
    }
}
void org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, panda$core$String* p_msg) {
    panda$core$Object* $tmp4608 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
    org$pandalanguage$pandac$Compiler$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$ClassDecl*) $tmp4608)->source, p_position, p_msg);
}
void org$pandalanguage$pandac$Compiler$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$Compiler* self, panda$io$File* p_file, org$pandalanguage$pandac$Position p_pos, panda$core$String* p_msg) {
    if (self->reportErrors.value) {
    {
        panda$core$Int64 $tmp4609 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->errorCount, ((panda$core$Int64) { 1 }));
        self->errorCount = $tmp4609;
        panda$core$String* $tmp4610 = panda$io$File$name$R$panda$core$String(p_file);
        panda$core$String* $tmp4611 = panda$core$String$convert$R$panda$core$String($tmp4610);
        panda$core$String* $tmp4613 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4611, &$s4612);
        panda$core$String* $tmp4614 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp4613, ((panda$core$Object*) wrap_org$pandalanguage$pandac$Position(p_pos)));
        panda$core$String* $tmp4616 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4614, &$s4615);
        panda$core$String* $tmp4617 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4616, p_msg);
        panda$core$String* $tmp4619 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4617, &$s4618);
        panda$io$Console$printLine$panda$core$Object(((panda$core$Object*) $tmp4619));
    }
    }
}
void org$pandalanguage$pandac$Compiler$finish(org$pandalanguage$pandac$Compiler* self) {
    ITable* $tmp4620 = self->codeGenerator->$class->itable;
    while ($tmp4620->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
        $tmp4620 = $tmp4620->next;
    }
    $fn4622 $tmp4621 = $tmp4620->methods[5];
    $tmp4621(self->codeGenerator);
}

