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
#include "panda/core/Int32.h"
#include "panda/core/Char32.h"
#include "panda/core/UInt32.h"
#include "panda/core/Real64.h"
#include "panda/core/Char16.h"
#include "org/pandalanguage/pandac/Compiler/CompileTargetResult.h"
#include "panda/core/SteppedRange.LTpanda/core/Int64.Cpanda/core/Int64.GT.h"


struct { panda$core$Class* cl; ITable* next; void* methods[1]; } org$pandalanguage$pandac$Compiler$_org$pandalanguage$pandac$ErrorReporter = { (panda$core$Class*) &org$pandalanguage$pandac$ErrorReporter$class, NULL, { org$pandalanguage$pandac$Compiler$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String} };

org$pandalanguage$pandac$Compiler$class_type org$pandalanguage$pandac$Compiler$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &org$pandalanguage$pandac$Compiler$_org$pandalanguage$pandac$ErrorReporter, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, org$pandalanguage$pandac$Compiler$addAlias$panda$core$String, org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q, org$pandalanguage$pandac$Compiler$checkGenericParameters$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$Type$Q, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl, org$pandalanguage$pandac$Compiler$resolveMethodCall$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT, org$pandalanguage$pandac$Compiler$exists$panda$io$File$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$getClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q, org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Position$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q, org$pandalanguage$pandac$Compiler$specialize$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q, org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT, org$pandalanguage$pandac$Compiler$signatureMatch$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q, org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q, org$pandalanguage$pandac$Compiler$interfaceMethods$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT, org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable, org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT, org$pandalanguage$pandac$Compiler$addInheritedMethods$org$pandalanguage$pandac$SymbolTable$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT, org$pandalanguage$pandac$Compiler$getMethodReference$org$pandalanguage$pandac$SymbolTable$org$pandalanguage$pandac$IRNode$Q$panda$core$String$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$Compiler$symbolRef$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$smallestCharSize$org$pandalanguage$pandac$IRNode$R$panda$core$Int64, org$pandalanguage$pandac$Compiler$rangeCharType$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q, org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64, org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64, org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q, org$pandalanguage$pandac$Compiler$doCoerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$Compiler$callCost$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q, org$pandalanguage$pandac$Compiler$matchMethods$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q, org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$declaredTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$foldInts$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$Compiler$compileIndexedAssignment$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT, org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$IRNode$Q$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT, org$pandalanguage$pandac$Compiler$compilePrefix$panda$core$Int64$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compilePrefix$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileCall$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$String$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileIdentifier$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileRange$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileSelf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileSuper$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileNull$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileBlock$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileIf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$checkSteppedRangeTypes$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$compileRangeFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileIteratorFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileFor$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileWhile$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileDo$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileLoop$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q, org$pandalanguage$pandac$Compiler$compileDeclaration$org$pandalanguage$pandac$ASTNode$panda$core$Int64$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileBreak$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileContinue$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileReturn$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileAssert$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileVar$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileWhenTest$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileChainedIfWhen$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileChainedIfMatch$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileWhen$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileOtherwise$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64, org$pandalanguage$pandac$Compiler$compileMatch$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileBody$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT, org$pandalanguage$pandac$Compiler$compile$panda$io$File, org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String, org$pandalanguage$pandac$Compiler$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String, org$pandalanguage$pandac$Compiler$finish} };

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
typedef panda$collections$Iterator* (*$fn1469)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1475)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1481)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1507)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1513)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1519)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1633)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1637)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1640)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1657)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1663)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1669)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1754)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1760)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1766)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1919)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2042)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2048)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2054)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn2154)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2176)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Int64 (*$fn2198)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn2215)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2221)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2227)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn2243)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn2265)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn2339)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2357)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn2434)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn2452)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2458)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2464)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2495)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2501)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2507)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2544)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2550)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2556)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2579)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2585)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2591)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3030)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3036)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3042)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3174)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3180)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3186)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn3294)(panda$core$Object*);
typedef panda$core$Int64 (*$fn3411)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn3427)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3433)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3439)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3557)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3563)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3569)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3828)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3834)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3840)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3975)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3981)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3987)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4017)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4023)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4029)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4140)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4146)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4152)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4298)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4304)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4310)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4393)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4399)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4405)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4456)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4462)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4468)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4532)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4538)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4544)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4583)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4589)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4595)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4607)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4613)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4619)(panda$collections$Iterator*);
typedef void (*$fn4654)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$MethodDecl*, org$pandalanguage$pandac$IRNode*);
typedef void (*$fn4657)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$collections$Iterator* (*$fn4661)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4667)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4673)(panda$collections$Iterator*);
typedef void (*$fn4678)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn4681)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn4686)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$collections$Iterator* (*$fn4690)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4696)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4702)(panda$collections$Iterator*);
typedef void (*$fn4706)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$collections$Iterator* (*$fn4722)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4728)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4734)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4743)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4749)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4755)(panda$collections$Iterator*);
typedef void (*$fn4771)(org$pandalanguage$pandac$CodeGenerator*);

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
static panda$core$String $s184 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s185 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, 216, NULL };
static panda$core$String $s186 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s188 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x65\x78\x70\x65\x63\x74\x65\x64\x20", 11, 5549333425848529514, NULL };
static panda$core$String $s191 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x67\x65\x6e\x65\x72\x69\x63\x20\x70\x61\x72\x61\x6d\x65\x74\x65\x72", 18, 754488464303810091, NULL };
static panda$core$String $s194 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20\x62\x75\x74\x20", 6, 1527396680240, NULL };
static panda$core$String $s196 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x6f\x75\x6e\x64\x20", 6, 2145222783673, NULL };
static panda$core$String $s198 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s238 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x65\x6e\x65\x72\x69\x63\x20\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x20\x27", 19, -7104957698969262010, NULL };
static panda$core$String $s240 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s247 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x6d\x75\x73\x74\x20\x62\x65\x20", 10, 5900311425897229264, NULL };
static panda$core$String $s249 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6f\x66\x20\x74\x79\x70\x65\x20\x27", 9, 2306627197047234467, NULL };
static panda$core$String $s255 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 14, 2262695563077912654, NULL };
static panda$core$String $s262 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s286 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6e\x6b\x6e\x6f\x77\x6e\x20\x74\x79\x70\x65\x20\x27", 14, 1254433276954177894, NULL };
static panda$core$String $s288 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s301 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s317 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s336 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s396 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20\x27", 11, 2825576507357767077, NULL };
static panda$core$String $s398 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6e\x6e\x6f\x74\x20\x65\x78\x74\x65\x6e\x64\x20\x63\x6c\x61\x73\x73\x20", 22, -8406128752343392811, NULL };
static panda$core$String $s400 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s402 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s407 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x75\x70\x65\x72\x63\x6c\x61\x73\x73\x20\x27", 12, 3706067405940886645, NULL };
static panda$core$String $s409 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x6f\x66\x20\x63\x6c\x61\x73\x73\x20\x27", 12, -633030867692887714, NULL };
static panda$core$String $s412 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x6d\x75\x73\x74\x20\x62\x65\x20", 10, 5900311425897229264, NULL };
static panda$core$String $s414 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6c\x69\x73\x74\x65\x64\x20\x62\x65\x66\x6f\x72\x65\x20\x61\x6e\x79\x20\x73\x75\x70\x65\x72\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x73", 33, 4787050402069409712, NULL };
static panda$core$String $s416 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6c\x61\x73\x73\x20\x27", 7, 213449334494206, NULL };
static panda$core$String $s418 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x68\x61\x73\x20\x6d\x6f\x72\x65\x20\x74\x68\x61\x6e\x20\x6f\x6e\x65\x20\x73\x75\x70\x65\x72\x63\x6c\x61\x73\x73", 30, -759923653827872275, NULL };
static panda$core$String $s423 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 17, -1766462974584480607, NULL };
static panda$core$String $s434 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x56\x61\x6c\x75\x65", 16, -4218233431647874265, NULL };
static panda$core$String $s526 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x6f\x76\x65\x72\x72\x69\x64\x65\x73\x20", 11, 1426563750390550596, NULL };
static panda$core$String $s530 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s532 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x74\x20\x69\x73\x20\x6e\x6f\x74\x20\x6d\x61\x72\x6b\x65\x64\x20\x40\x6f\x76\x65\x72\x72\x69\x64\x65", 27, -5223536864783252703, NULL };
static panda$core$String $s541 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x6f\x76\x65\x72\x72\x69\x64\x65\x73\x20", 11, 1426563750390550596, NULL };
static panda$core$String $s545 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s547 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x74\x20\x6d\x65\x74\x68\x6f\x64\x73\x20\x63\x61\x6e\x6e\x6f\x74\x20\x6f\x76\x65\x72\x72\x69\x64\x65\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x73", 37, 7193225585860914176, NULL };
static panda$core$String $s552 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x69\x73\x20\x6d\x61\x72\x6b\x65\x64\x20\x40\x6f\x76\x65\x72\x72\x69\x64\x65\x2c\x20\x62\x75\x74\x20\x6e\x6f\x20\x6d\x61\x74\x63\x68\x69\x6e\x67\x20", 38, -6085226934842474132, NULL };
static panda$core$String $s554 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x73\x74\x73\x20\x61\x6d\x6f\x6e\x67\x20\x69\x74\x73\x20\x61\x6e\x63\x65\x73\x74\x6f\x72\x73", 33, -5331763662845728394, NULL };
static panda$core$String $s563 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x69\x65\x6c\x64\x20\x68\x61\x73\x20\x6e\x65\x69\x74\x68\x65\x72\x20\x61\x20\x74\x79\x70\x65\x20\x6e\x6f\x72\x20\x61\x20\x76\x61\x6c\x75\x65", 36, 5735293162260763604, NULL };
static panda$core$String $s614 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6e\x6f\x20\x6f\x72\x20\x61\x6d\x62\x69\x67\x75\x6f\x75\x73\x20\x6d\x61\x74\x63\x68\x20\x6f\x6e\x20\x6d\x65\x74\x68\x6f\x64\x20\x63\x61\x6c\x6c\x20\x28", 38, 3392199122829501018, NULL };
static panda$core$String $s616 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s623 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s626 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s628 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6e\x6b\x6e\x6f\x77\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 18, 1104129620483010492, NULL };
static panda$core$String $s630 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x73\x75\x70\x65\x72\x27\x20\x63\x61\x6e\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x75\x73\x65\x64\x20\x61\x73\x20\x70\x61\x72\x74\x20\x6f\x66\x20\x61\x20\x6d\x65\x74\x68\x6f\x64\x20\x63\x61\x6c\x6c", 49, 5687166824689512368, NULL };
static panda$core$String $s635 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x56\x61\x6c\x75\x65", 16, -4218233431647874265, NULL };
static panda$core$String $s674 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s675 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s677 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x70\x61\x6e\x64\x61", 6, 1556740610063, NULL };
static panda$core$String $s702 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s712 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s713 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s715 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x70\x61\x6e\x64\x61", 6, 1556740610063, NULL };
static panda$core$String $s745 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x66\x69\x6c\x65\x20\x27", 15, -3519420271001816814, NULL };
static panda$core$String $s747 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x74\x6f\x20\x63\x6f\x6e\x74\x61\x69\x6e\x20\x61\x20\x63\x6c\x61\x73\x73\x20\x6e\x61\x6d\x65\x64\x20\x27", 28, 3445503135242247770, NULL };
static panda$core$String $s750 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s753 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6e\x6f\x20\x66\x69\x6c\x65\x20\x6e\x61\x6d\x65\x64\x20", 14, 8876718408773305983, NULL };
static panda$core$String $s755 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x69\x6e\x20\x61\x6e\x79\x20\x69\x6d\x70\x6f\x72\x74\x20\x70\x61\x74\x68\x20\x28", 21, 3105450433703869576, NULL };
static panda$core$String $s758 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1249 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x73\x75\x70\x65\x72\x27\x20\x63\x61\x6e\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x75\x73\x65\x64\x20\x61\x73\x20\x70\x61\x72\x74\x20\x6f\x66\x20\x61\x20\x6d\x65\x74\x68\x6f\x64\x20\x63\x61\x6c\x6c", 49, 5687166824689512368, NULL };
static panda$core$String $s1294 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1438 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5b\x5d", 2, 19485, NULL };
static panda$core$String $s1744 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5b\x5d", 2, 19485, NULL };
static panda$core$String $s1949 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27", 10, 875040426634827830, NULL };
static panda$core$String $s1951 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 14, 2262695563077912654, NULL };
static panda$core$String $s1954 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1979 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27", 10, 875040426634827830, NULL };
static panda$core$String $s1981 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 14, 2262695563077912654, NULL };
static panda$core$String $s1984 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2017 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5b\x5d", 2, 19485, NULL };
static panda$core$String $s2083 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27", 10, 875040426634827830, NULL };
static panda$core$String $s2085 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 14, 2262695563077912654, NULL };
static panda$core$String $s2088 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2131 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6c\x75\x65\x20\x6f\x66\x20\x74\x79\x70\x65\x20\x27", 15, -1620219380461029456, NULL };
static panda$core$String $s2133 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6e\x6e\x6f\x74\x20\x70\x6f\x73\x73\x69\x62\x6c\x79\x20\x62\x65\x20\x61\x6e\x20\x69\x6e\x73\x74\x61\x6e\x63\x65\x20\x6f\x66\x20", 36, -427166674877421096, NULL };
static panda$core$String $s2135 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2137 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2249 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2250 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, 216, NULL };
static panda$core$String $s2253 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x65\x78\x70\x65\x63\x74\x65\x64\x20", 10, -1007140463547215113, NULL };
static panda$core$String $s2257 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x61\x72\x67\x75\x6d\x65\x6e\x74", 9, 1450721239526715900, NULL };
static panda$core$String $s2260 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s2262 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x74\x20\x72\x65\x63\x65\x69\x76\x65\x64\x20", 13, -1301083486074551925, NULL };
static panda$core$String $s2268 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2292 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x64\x69\x72\x65\x63\x74\x6c\x79\x20\x63\x61\x6c\x6c\x20\x27\x69\x6e\x69\x74\x27\x20\x6f\x75\x74\x73\x69\x64\x65\x20\x6f\x66\x20\x61\x6e\x20\x69\x6e\x69\x74\x20\x6d\x65\x74\x68\x6f\x64", 53, 84993564105955720, NULL };
static panda$core$String $s2302 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x69\x6e\x69\x74\x27\x20\x6d\x61\x79\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x63\x61\x6c\x6c\x65\x64\x20\x6f\x6e\x20\x27\x73\x65\x6c\x66\x27\x20\x6f\x72\x20\x27\x73\x75\x70\x65\x72\x27", 46, 5737688576853633111, NULL };
static panda$core$String $s2317 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x63\x61\x6c\x6c\x20\x69\x6e\x73\x74\x61\x6e\x63\x65\x20", 21, -1285496544752055923, NULL };
static panda$core$String $s2320 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x66\x72\x6f\x6d\x20\x61\x20\x40\x63\x6c\x61\x73\x73\x20\x63\x6f\x6e\x74\x65\x78\x74", 22, 6236893689928691337, NULL };
static panda$core$String $s2331 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x63\x61\x6c\x6c\x20\x63\x6c\x61\x73\x73\x20", 18, 4176321021903236102, NULL };
static panda$core$String $s2334 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x6f\x6e\x20\x61\x6e\x20\x69\x6e\x73\x74\x61\x6e\x63\x65", 15, 4946791728819903386, NULL };
static panda$core$String $s2370 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s2387 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x63\x61\x6c\x6c\x20\x61\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x6e\x20\x6e\x6f\x6e\x2d\x63\x6c\x61\x73\x73\x20\x74\x79\x70\x65\x20\x27", 40, 2057026257004143426, NULL };
static panda$core$String $s2389 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2395 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6c\x61\x73\x73\x20\x27", 7, 213449334494206, NULL };
static panda$core$String $s2397 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x64\x6f\x65\x73\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x61\x20\x6d\x65\x6d\x62\x65\x72\x20\x6e\x61\x6d\x65\x64\x20\x27", 32, -5677460192622646983, NULL };
static panda$core$String $s2400 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2407 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2409 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s2412 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x69\x73\x20\x6e\x6f\x74\x20\x61\x20\x6d\x65\x74\x68\x6f\x64", 17, 1918101523522592587, NULL };
static panda$core$String $s2439 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6e\x6f\x20\x6d\x61\x74\x63\x68\x20\x66\x6f\x72\x20\x63\x61\x6c\x6c\x20\x74\x6f\x20\x27", 22, 7814600009206081200, NULL };
static panda$core$String $s2441 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s2444 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2448 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2466 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s2467 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x27", 2, 14381, NULL };
static panda$core$String $s2468 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x77\x69\x74\x68\x20\x72\x65\x74\x75\x72\x6e\x20\x74\x79\x70\x65\x20\x27", 19, -3030064837581027794, NULL };
static panda$core$String $s2470 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2518 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s2528 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6c\x75\x65\x20\x6f\x66\x20\x74\x79\x70\x65\x20\x27", 15, -1620219380461029456, NULL };
static panda$core$String $s2530 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x69\x73\x20\x6e\x6f\x74\x20\x61\x20\x6d\x65\x74\x68\x6f\x64", 17, 1918101523522592587, NULL };
static panda$core$String $s2538 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2540 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2558 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s2561 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3d\x3e\x28", 4, 146931305, NULL };
static panda$core$String $s2562 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3d\x26\x3e\x28", 5, 14839819243, NULL };
static panda$core$String $s2575 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2593 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s2596 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3d\x3e\x28", 4, 146931305, NULL };
static panda$core$String $s2597 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3d\x26\x3e\x28", 5, 14839819243, NULL };
static panda$core$String $s2614 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2b", 1, 144, NULL };
static panda$core$String $s2615 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d", 1, 146, NULL };
static panda$core$String $s2616 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s2617 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s2618 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2f\x2f", 2, 14995, NULL };
static panda$core$String $s2619 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 138, NULL };
static panda$core$String $s2620 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5e", 1, 195, NULL };
static panda$core$String $s2621 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3d", 1, 162, NULL };
static panda$core$String $s2622 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x3d", 2, 13595, NULL };
static panda$core$String $s2623 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s2624 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s2625 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3e\x3d", 2, 16524, NULL };
static panda$core$String $s2626 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3c\x3d", 2, 16322, NULL };
static panda$core$String $s2627 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7c", 1, 225, NULL };
static panda$core$String $s2628 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7c\x7c", 2, 22849, NULL };
static panda$core$String $s2629 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s2630 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26\x26", 2, 14077, NULL };
static panda$core$String $s2631 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7e", 1, 227, NULL };
static panda$core$String $s2632 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7e\x7e", 2, 23053, NULL };
static panda$core$String $s2633 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21", 1, 134, NULL };
static panda$core$String $s2634 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x21", 2, 13567, NULL };
static panda$core$String $s2635 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3c\x3c", 2, 16321, NULL };
static panda$core$String $s2636 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3e\x3e", 2, 16525, NULL };
static panda$core$String $s2637 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5b\x5d", 2, 19485, NULL };
static panda$core$String $s2638 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3a\x3d", 2, 16120, NULL };
static panda$core$String $s2639 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3d\x3d", 2, 16423, NULL };
static panda$core$String $s2640 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x3d\x3d", 3, 1373156, NULL };
static panda$core$String $s2761 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x6e\x75\x6d\x65\x72\x69\x63\x20\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e", 25, 9019145596080302696, NULL };
static panda$core$String $s2773 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5b\x5d\x3a\x3d", 4, 198772404, NULL };
static panda$core$String $s2821 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6f\x6e\x76\x65\x72\x74", 7, 213482220537370, NULL };
static panda$core$String $s2825 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5b\x5d\x3a\x3d", 4, 198772404, NULL };
static panda$core$String $s2923 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2926 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6e\x6e\x6f\x74\x20\x6f\x70\x65\x72\x61\x74\x65\x20\x6f\x6e\x20\x27", 21, -3266050109438970469, NULL };
static panda$core$String $s2929 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2c\x20", 3, 1432616, NULL };
static panda$core$String $s2931 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2933 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2940 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2943 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6e\x6e\x6f\x74\x20\x6f\x70\x65\x72\x61\x74\x65\x20\x6f\x6e\x20\x27", 21, -3266050109438970469, NULL };
static panda$core$String $s2946 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2c\x20", 3, 1432616, NULL };
static panda$core$String $s2948 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2950 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2972 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x61\x73\x73\x69\x67\x6e\x20\x74\x6f\x20\x74\x68\x69\x73\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e", 32, -4891466264852316840, NULL };
static panda$core$String $s2984 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x61\x73\x73\x69\x67\x6e\x20\x74\x6f\x20\x74\x68\x69\x73\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e", 32, -4891466264852316840, NULL };
static panda$core$String $s3001 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6f\x6e\x76\x65\x72\x74", 7, 213482220537370, NULL };
static panda$core$String $s3015 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5b\x5d", 2, 19485, NULL };
static panda$core$String $s3084 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3087 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6e\x6e\x6f\x74\x20\x6f\x70\x65\x72\x61\x74\x65\x20\x6f\x6e\x20\x27", 21, -3266050109438970469, NULL };
static panda$core$String $s3090 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2c\x20\x27", 4, 144694255, NULL };
static panda$core$String $s3093 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3207 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3c\x6d\x65\x74\x68\x6f\x64\x3e", 8, 17378158564789264, NULL };
static panda$core$String $s3230 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 30, 5304221197101987767, NULL };
static panda$core$String $s3232 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3240 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 30, 5304221197101987767, NULL };
static panda$core$String $s3242 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3296 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s3299 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3315 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x79\x70\x65\x20\x27", 6, 2293399544522, NULL };
static panda$core$String $s3317 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x69\x73\x20\x6e\x6f\x74\x20\x61\x20\x63\x6c\x61\x73\x73", 16, 3306529650949529468, NULL };
static panda$core$String $s3324 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6c\x61\x73\x73\x20\x27", 7, 213449334494206, NULL };
static panda$core$String $s3326 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x64\x6f\x65\x73\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x61\x20\x6d\x65\x6d\x62\x65\x72\x20\x6e\x61\x6d\x65\x64\x20\x27", 32, -5677460192622646983, NULL };
static panda$core$String $s3329 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3388 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x61\x6e\x67\x65\x20\x73\x74\x65\x70\x20\x63\x61\x6e\x6e\x6f\x74\x20\x62\x65\x20\x6e\x75\x6c\x6c", 25, 4479279434458851015, NULL };
static panda$core$String $s3396 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3c\x75\x6e\x72\x65\x73\x6f\x6c\x76\x65\x64\x20\x72\x61\x6e\x67\x65\x3e", 18, -1293962867859660245, NULL };
static panda$core$String $s3405 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x27\x73\x65\x6c\x66\x27\x20\x66\x72\x6f\x6d\x20\x61\x20\x40\x63\x6c\x61\x73\x73\x20\x6d\x65\x74\x68\x6f\x64", 44, -511889306060728385, NULL };
static panda$core$String $s3423 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3446 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s3449 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3453 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s3464 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x27\x73\x75\x70\x65\x72\x27\x20\x66\x72\x6f\x6d\x20\x61\x20\x40\x63\x6c\x61\x73\x73\x20\x6d\x65\x74\x68\x6f\x64", 45, 3734810722724983720, NULL };
static panda$core$String $s3472 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s3496 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6c\x75\x65\x20\x6f\x66\x20\x74\x79\x70\x65\x20\x27", 15, -1620219380461029456, NULL };
static panda$core$String $s3498 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6e\x6e\x6f\x74\x20\x70\x6f\x73\x73\x69\x62\x6c\x79\x20\x62\x65\x20\x61\x6e\x20\x69\x6e\x73\x74\x61\x6e\x63\x65\x20\x6f\x66\x20", 36, -427166674877421096, NULL };
static panda$core$String $s3500 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3502 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3529 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x64\x6f\x65\x73\x20\x6e\x6f\x74\x20\x72\x65\x74\x75\x72\x6e\x20\x61\x20\x76\x61\x6c\x75\x65", 24, -3977552604268313933, NULL };
static panda$core$String $s3615 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x6f\x72\x20\x6c\x6f\x6f\x70\x20\x63\x61\x6e\x6e\x6f\x74\x20\x69\x74\x65\x72\x61\x74\x65\x20\x6f\x76\x65\x72\x20\x27", 30, 8038560140840973662, NULL };
static panda$core$String $s3617 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3b\x20\x65\x6e\x64\x70\x6f\x69\x6e\x74\x20\x61\x6e\x64\x20\x73\x74\x65\x70\x20\x74\x79\x70\x65\x73\x20", 27, 6843179484913102436, NULL };
static panda$core$String $s3619 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x72\x65\x20\x6e\x6f\x74\x20\x63\x6f\x6d\x70\x61\x74\x69\x62\x6c\x65", 18, -4303734005461819726, NULL };
static panda$core$String $s3639 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x6f\x72\x20\x6c\x6f\x6f\x70\x20\x76\x61\x72\x69\x61\x62\x6c\x65\x20\x63\x61\x6e\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x6e\x75\x6c\x6c\x61\x62\x6c\x65\x20\x74\x79\x70\x65\x20\x27", 45, 3211461562751374179, NULL };
static panda$core$String $s3641 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3645 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x6f\x72\x20\x6c\x6f\x6f\x70\x20\x76\x61\x72\x69\x61\x62\x6c\x65\x20\x63\x61\x6e\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x6e\x6f\x6e\x2d\x6e\x75\x6d\x65\x72\x69\x63\x20\x74\x79\x70\x65\x20\x27", 48, 6391877092008549907, NULL };
static panda$core$String $s3647 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3695 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x6f\x72\x20\x6c\x6f\x6f\x70\x20\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x65\x72\x69\x63\x20\x72\x61\x6e\x67\x65\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 46, 6859502832880265551, NULL };
static panda$core$String $s3697 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3729 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s3733 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s3738 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x49\x74\x65\x72", 5, 14332680541, NULL };
static panda$core$String $s3761 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x65\x74\x5f\x64\x6f\x6e\x65", 8, 21980003879763538, NULL };
static panda$core$String $s3766 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21", 1, 134, NULL };
static panda$core$String $s3778 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6e\x65\x78\x74", 4, 218436048, NULL };
static panda$core$String $s3864 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x74\x65\x72\x61\x74\x6f\x72", 8, 22210198075044275, NULL };
static panda$core$String $s3872 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6e\x20\x49\x74\x65\x72\x61\x62\x6c\x65\x20\x6f\x72\x20\x49\x74\x65\x72\x61\x74\x6f\x72\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 45, 562271959045909027, NULL };
static panda$core$String $s3874 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3937 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x20\x68\x61\x73\x20\x6e\x65\x69\x74\x68\x65\x72\x20\x61\x20\x74\x79\x70\x65\x20\x6e\x6f\x72\x20\x61\x20\x76\x61\x6c\x75\x65", 42, 71025131614347466, NULL };
static panda$core$String $s3998 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x62\x72\x65\x61\x6b\x20", 7, 149654778879689, NULL };
static panda$core$String $s4000 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x6d\x75\x73\x74\x20\x62\x65\x20\x69\x6e\x73\x69\x64\x65\x20\x61\x20\x6c\x6f\x6f\x70\x20\x6c\x61\x62\x65\x6c\x6c\x65\x64\x20", 33, 5869484791969643332, NULL };
static panda$core$String $s4002 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s4004 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3a\x27", 2, 16098, NULL };
static panda$core$String $s4009 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x62\x72\x65\x61\x6b\x27\x20\x6d\x75\x73\x74\x20\x62\x65\x20\x69\x6e\x73\x69\x64\x65\x20\x61\x20\x6c\x6f\x6f\x70", 29, -2107280000252113069, NULL };
static panda$core$String $s4040 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x63\x6f\x6e\x74\x69\x6e\x75\x65\x20", 10, 6626032424543403513, NULL };
static panda$core$String $s4042 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x6d\x75\x73\x74\x20\x62\x65\x20\x69\x6e\x73\x69\x64\x65\x20\x61\x20\x6c\x6f\x6f\x70\x20\x6c\x61\x62\x65\x6c\x6c\x65\x64\x20", 33, 5869484791969643332, NULL };
static panda$core$String $s4044 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s4046 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3a\x27", 2, 16098, NULL };
static panda$core$String $s4051 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x63\x6f\x6e\x74\x69\x6e\x75\x65\x27\x20\x6d\x75\x73\x74\x20\x62\x65\x20\x69\x6e\x73\x69\x64\x65\x20\x61\x20\x6c\x6f\x6f\x70", 32, -6048052453244835837, NULL };
static panda$core$String $s4065 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x72\x65\x74\x75\x72\x6e\x20\x61\x20\x76\x61\x6c\x75\x65\x20\x66\x72\x6f\x6d\x20\x61\x20\x6d\x65\x74\x68\x6f\x64\x20\x77\x69\x74\x68\x20\x6e\x6f\x20\x72\x65\x74\x75\x72\x6e\x20\x74\x79\x70\x65", 55, -6755143087675264705, NULL };
static panda$core$String $s4079 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x72\x65\x74\x75\x72\x6e\x20\x76\x61\x6c\x75\x65", 23, 6159277012237708805, NULL };
static panda$core$String $s4099 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6c\x75\x65", 5, 22890280642, NULL };
static panda$core$String $s4166 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3d", 1, 162, NULL };
static panda$core$String $s4203 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7c", 1, 225, NULL };
static panda$core$String $s4254 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x6d\x61\x74\x63\x68\x24", 7, 146584075981198, NULL };
static panda$core$String $s4256 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s4259 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4761 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s4764 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3a\x20\x65\x72\x72\x6f\x72\x3a\x20", 9, 1725281418740475535, NULL };
static panda$core$String $s4767 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };

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
panda$core$Int64 org$pandalanguage$pandac$Compiler$smallestCharSize$org$pandalanguage$pandac$IRNode$R$panda$core$Int64(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_char) {
    panda$core$Int32 c1322;
    panda$core$Bit $tmp1319 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_char->kind, ((panda$core$Int64) { 1033 }));
    PANDA_ASSERT($tmp1319.value);
    panda$core$Int64 $tmp1320 = panda$core$String$length$R$panda$core$Int64(((panda$core$String*) p_char->payload));
    panda$core$Bit $tmp1321 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1320, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp1321.value);
    panda$core$Char32 $tmp1323 = panda$core$String$$IDX$panda$core$Int64$R$panda$core$Char32(((panda$core$String*) p_char->payload), ((panda$core$Int64) { 0 }));
    panda$core$Int32 $tmp1324 = panda$core$Char32$convert$R$panda$core$Int32($tmp1323);
    c1322 = $tmp1324;
    panda$core$Bit $tmp1325 = panda$core$Int32$$LE$panda$core$Int32$R$panda$core$Bit(c1322, ((panda$core$Int32) { 255 }));
    if ($tmp1325.value) {
    {
        return ((panda$core$Int64) { 8 });
    }
    }
    panda$core$Bit $tmp1326 = panda$core$Int32$$LE$panda$core$Int32$R$panda$core$Bit(c1322, ((panda$core$Int32) { 65535 }));
    if ($tmp1326.value) {
    {
        return ((panda$core$Int64) { 16 });
    }
    }
    return ((panda$core$Int64) { 32 });
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$rangeCharType$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_char, org$pandalanguage$pandac$IRNode* p_other) {
    panda$core$Int64 result1327;
    org$pandalanguage$pandac$Type* $match$1031_91337;
    panda$core$Int64 $tmp1328 = org$pandalanguage$pandac$Compiler$smallestCharSize$org$pandalanguage$pandac$IRNode$R$panda$core$Int64(self, p_char);
    result1327 = $tmp1328;
    panda$core$Bit $tmp1330 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->kind, ((panda$core$Int64) { 1033 }));
    bool $tmp1329 = $tmp1330.value;
    if (!$tmp1329) goto $l1331;
    panda$core$Int64 $tmp1332 = panda$core$String$length$R$panda$core$Int64(((panda$core$String*) p_other->payload));
    panda$core$Bit $tmp1333 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1332, ((panda$core$Int64) { 1 }));
    $tmp1329 = $tmp1333.value;
    $l1331:;
    panda$core$Bit $tmp1334 = { $tmp1329 };
    if ($tmp1334.value) {
    {
        panda$core$Int64 $tmp1335 = org$pandalanguage$pandac$Compiler$smallestCharSize$org$pandalanguage$pandac$IRNode$R$panda$core$Int64(self, p_other);
        panda$core$Int64 $tmp1336 = panda$core$Int64$max$panda$core$Int64$R$panda$core$Int64(result1327, $tmp1335);
        result1327 = $tmp1336;
    }
    }
    {
        $match$1031_91337 = p_other->type;
        org$pandalanguage$pandac$Type* $tmp1338 = org$pandalanguage$pandac$Type$Char16$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp1339 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($match$1031_91337, $tmp1338);
        if ($tmp1339.value) {
        {
            panda$core$Int64 $tmp1340 = panda$core$Int64$max$panda$core$Int64$R$panda$core$Int64(result1327, ((panda$core$Int64) { 16 }));
            result1327 = $tmp1340;
        }
        }
        else {
        org$pandalanguage$pandac$Type* $tmp1341 = org$pandalanguage$pandac$Type$Char32$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp1342 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($match$1031_91337, $tmp1341);
        if ($tmp1342.value) {
        {
            panda$core$Int64 $tmp1343 = panda$core$Int64$max$panda$core$Int64$R$panda$core$Int64(result1327, ((panda$core$Int64) { 32 }));
            result1327 = $tmp1343;
        }
        }
        }
    }
    switch (result1327.value) {
        case 8:
        {
            org$pandalanguage$pandac$Type* $tmp1344 = org$pandalanguage$pandac$Type$Char8$R$org$pandalanguage$pandac$Type();
            return $tmp1344;
        }
        break;
        case 16:
        {
            org$pandalanguage$pandac$Type* $tmp1345 = org$pandalanguage$pandac$Type$Char16$R$org$pandalanguage$pandac$Type();
            return $tmp1345;
        }
        break;
        case 32:
        {
            org$pandalanguage$pandac$Type* $tmp1346 = org$pandalanguage$pandac$Type$Char32$R$org$pandalanguage$pandac$Type();
            return $tmp1346;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    org$pandalanguage$pandac$Type* start1347;
    org$pandalanguage$pandac$Type* end1360;
    org$pandalanguage$pandac$Type* step1393;
    panda$collections$ImmutableArray* args1433;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1434;
    org$pandalanguage$pandac$IRNode* c1436;
    switch (p_expr->kind.value) {
        case 1031:
        {
            panda$core$Object* $tmp1349 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp1350 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1349)->kind, ((panda$core$Int64) { 1033 }));
            bool $tmp1348 = $tmp1350.value;
            if (!$tmp1348) goto $l1351;
            panda$core$Object* $tmp1352 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Int64 $tmp1353 = panda$core$String$length$R$panda$core$Int64(((panda$core$String*) ((org$pandalanguage$pandac$IRNode*) $tmp1352)->payload));
            panda$core$Bit $tmp1354 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1353, ((panda$core$Int64) { 1 }));
            $tmp1348 = $tmp1354.value;
            $l1351:;
            panda$core$Bit $tmp1355 = { $tmp1348 };
            if ($tmp1355.value) {
            {
                panda$core$Object* $tmp1356 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Object* $tmp1357 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$Type* $tmp1358 = org$pandalanguage$pandac$Compiler$rangeCharType$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$IRNode*) $tmp1356), ((org$pandalanguage$pandac$IRNode*) $tmp1357));
                start1347 = $tmp1358;
            }
            }
            else {
            {
                panda$core$Object* $tmp1359 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                start1347 = ((org$pandalanguage$pandac$IRNode*) $tmp1359)->type;
            }
            }
            panda$core$Object* $tmp1362 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
            panda$core$Bit $tmp1363 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1362)->kind, ((panda$core$Int64) { 1033 }));
            bool $tmp1361 = $tmp1363.value;
            if (!$tmp1361) goto $l1364;
            panda$core$Object* $tmp1365 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
            panda$core$Int64 $tmp1366 = panda$core$String$length$R$panda$core$Int64(((panda$core$String*) ((org$pandalanguage$pandac$IRNode*) $tmp1365)->payload));
            panda$core$Bit $tmp1367 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1366, ((panda$core$Int64) { 1 }));
            $tmp1361 = $tmp1367.value;
            $l1364:;
            panda$core$Bit $tmp1368 = { $tmp1361 };
            if ($tmp1368.value) {
            {
                panda$core$Object* $tmp1369 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                panda$core$Object* $tmp1370 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp1371 = org$pandalanguage$pandac$Compiler$rangeCharType$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$IRNode*) $tmp1369), ((org$pandalanguage$pandac$IRNode*) $tmp1370));
                end1360 = $tmp1371;
            }
            }
            else {
            {
                panda$core$Object* $tmp1372 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                end1360 = ((org$pandalanguage$pandac$IRNode*) $tmp1372)->type;
            }
            }
            panda$core$Int64 $tmp1373 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_expr->children);
            panda$core$Bit $tmp1374 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1373, ((panda$core$Int64) { 2 }));
            if ($tmp1374.value) {
            {
                panda$core$Object* $tmp1375 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Bit $tmp1376 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1375)->kind, ((panda$core$Int64) { 1030 }));
                if ($tmp1376.value) {
                {
                    panda$core$Object* $tmp1377 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                    panda$core$Bit $tmp1378 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1377)->kind, ((panda$core$Int64) { 1030 }));
                    if ($tmp1378.value) {
                    {
                        org$pandalanguage$pandac$Type* $tmp1379 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
                        org$pandalanguage$pandac$Type* $tmp1380 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1379);
                        org$pandalanguage$pandac$Type* $tmp1381 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1380);
                        return $tmp1381;
                    }
                    }
                    org$pandalanguage$pandac$Type* $tmp1382 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, end1360);
                    org$pandalanguage$pandac$Type* $tmp1383 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1382);
                    org$pandalanguage$pandac$Type* $tmp1384 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1383);
                    return $tmp1384;
                }
                }
                panda$core$Object* $tmp1385 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                panda$core$Bit $tmp1386 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1385)->kind, ((panda$core$Int64) { 1030 }));
                if ($tmp1386.value) {
                {
                    org$pandalanguage$pandac$Type* $tmp1387 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, start1347);
                    org$pandalanguage$pandac$Type* $tmp1388 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1387);
                    org$pandalanguage$pandac$Type* $tmp1389 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1388);
                    return $tmp1389;
                }
                }
                org$pandalanguage$pandac$Type* $tmp1390 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(start1347, self, end1360);
                org$pandalanguage$pandac$Type* $tmp1391 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, $tmp1390);
                org$pandalanguage$pandac$Type* $tmp1392 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1391);
                return $tmp1392;
            }
            }
            panda$core$Object* $tmp1394 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 2 }));
            org$pandalanguage$pandac$Type* $tmp1395 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$IRNode*) $tmp1394)->type);
            step1393 = $tmp1395;
            panda$core$Object* $tmp1396 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp1397 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1396)->kind, ((panda$core$Int64) { 1030 }));
            if ($tmp1397.value) {
            {
                panda$core$Object* $tmp1398 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                panda$core$Bit $tmp1399 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1398)->kind, ((panda$core$Int64) { 1030 }));
                if ($tmp1399.value) {
                {
                    org$pandalanguage$pandac$Type* $tmp1400 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, step1393);
                    org$pandalanguage$pandac$Type* $tmp1401 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1400);
                    org$pandalanguage$pandac$Type* $tmp1402 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1401);
                    return $tmp1402;
                }
                }
                panda$core$Bit $tmp1403 = org$pandalanguage$pandac$Type$isChar$R$panda$core$Bit(end1360);
                if ($tmp1403.value) {
                {
                    org$pandalanguage$pandac$Type* $tmp1404 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, end1360);
                    org$pandalanguage$pandac$Type* $tmp1405 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1404);
                    org$pandalanguage$pandac$Type* $tmp1406 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1405);
                    return $tmp1406;
                }
                }
                org$pandalanguage$pandac$Type* $tmp1407 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(end1360, self, step1393);
                org$pandalanguage$pandac$Type* $tmp1408 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, $tmp1407);
                org$pandalanguage$pandac$Type* $tmp1409 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1408);
                org$pandalanguage$pandac$Type* $tmp1410 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1409);
                return $tmp1410;
            }
            }
            panda$core$Object* $tmp1411 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
            panda$core$Bit $tmp1412 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1411)->kind, ((panda$core$Int64) { 1030 }));
            if ($tmp1412.value) {
            {
                panda$core$Bit $tmp1413 = org$pandalanguage$pandac$Type$isChar$R$panda$core$Bit(start1347);
                if ($tmp1413.value) {
                {
                    org$pandalanguage$pandac$Type* $tmp1414 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, start1347);
                    org$pandalanguage$pandac$Type* $tmp1415 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1414);
                    org$pandalanguage$pandac$Type* $tmp1416 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1415);
                    return $tmp1416;
                }
                }
                org$pandalanguage$pandac$Type* $tmp1417 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(start1347, self, step1393);
                org$pandalanguage$pandac$Type* $tmp1418 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, $tmp1417);
                org$pandalanguage$pandac$Type* $tmp1419 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1418);
                org$pandalanguage$pandac$Type* $tmp1420 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1419);
                return $tmp1420;
            }
            }
            panda$core$Bit $tmp1422 = org$pandalanguage$pandac$Type$isChar$R$panda$core$Bit(start1347);
            bool $tmp1421 = $tmp1422.value;
            if (!$tmp1421) goto $l1423;
            panda$core$Bit $tmp1424 = org$pandalanguage$pandac$Type$isChar$R$panda$core$Bit(end1360);
            $tmp1421 = $tmp1424.value;
            $l1423:;
            panda$core$Bit $tmp1425 = { $tmp1421 };
            if ($tmp1425.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1426 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(start1347, self, end1360);
                org$pandalanguage$pandac$Type* $tmp1427 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, $tmp1426);
                org$pandalanguage$pandac$Type* $tmp1428 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1427);
                return $tmp1428;
            }
            }
            org$pandalanguage$pandac$Type* $tmp1429 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(start1347, self, end1360);
            org$pandalanguage$pandac$Type* $tmp1430 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1429, self, step1393);
            org$pandalanguage$pandac$Type* $tmp1431 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, $tmp1430);
            org$pandalanguage$pandac$Type* $tmp1432 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1431);
            return $tmp1432;
        }
        break;
        case 1040:
        {
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1434, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$collections$ImmutableArray* $tmp1435 = panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(p_expr->children, $tmp1434);
            args1433 = $tmp1435;
            panda$core$Object* $tmp1437 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp1439 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1437), &$s1438, ((panda$collections$ListView*) args1433));
            c1436 = $tmp1439;
            if (((panda$core$Bit) { c1436 == NULL }).value) {
            {
                org$pandalanguage$pandac$Type* $tmp1440 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
                return $tmp1440;
            }
            }
            return c1436->type;
        }
        break;
    }
    org$pandalanguage$pandac$Type* $tmp1441 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_expr->type);
    return $tmp1441;
}
panda$core$Int64$nullable org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type, org$pandalanguage$pandac$Type* p_target) {
    panda$core$Int64$nullable result1452;
    panda$core$Int64$nullable result1456;
    panda$core$Int64$nullable best1465;
    panda$collections$Iterator* t$Iter1466;
    org$pandalanguage$pandac$Type* t1478;
    panda$core$Int64$nullable cost1483;
    org$pandalanguage$pandac$ClassDecl* cl1497;
    panda$core$Int64$nullable cost1499;
    panda$collections$Iterator* intf$Iter1504;
    org$pandalanguage$pandac$Type* intf1516;
    panda$core$Int64$nullable cost1521;
    PANDA_ASSERT(p_type->resolved.value);
    PANDA_ASSERT(p_target->resolved.value);
    panda$core$Bit $tmp1442 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_type, p_target);
    if ($tmp1442.value) {
    {
        return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
    }
    }
    org$pandalanguage$pandac$Type* $tmp1443 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1444 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_type, $tmp1443);
    if ($tmp1444.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    panda$core$Bit $tmp1445 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 23 }));
    if ($tmp1445.value) {
    {
        panda$core$Bit $tmp1446 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp1446.value) {
        {
            return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
        }
        }
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    panda$core$Bit $tmp1448 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 11 }));
    bool $tmp1447 = $tmp1448.value;
    if (!$tmp1447) goto $l1449;
    panda$core$Bit $tmp1450 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
    $tmp1447 = $tmp1450.value;
    $l1449:;
    panda$core$Bit $tmp1451 = { $tmp1447 };
    if ($tmp1451.value) {
    {
        panda$core$Object* $tmp1453 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Int64$nullable $tmp1454 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$Type*) $tmp1453), p_target);
        result1452 = $tmp1454;
        if (((panda$core$Bit) { !result1452.nonnull }).value) {
        {
            return ((panda$core$Int64$nullable) { .nonnull = false });
        }
        }
        panda$core$Int64 $tmp1455 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) result1452.value), ((panda$core$Int64) { 2 }));
        return ((panda$core$Int64$nullable) { $tmp1455, true });
    }
    }
    switch (p_target->typeKind.value) {
        case 11:
        {
            panda$core$Object* $tmp1457 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$Int64$nullable $tmp1458 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_type, ((org$pandalanguage$pandac$Type*) $tmp1457));
            result1456 = $tmp1458;
            if (((panda$core$Bit) { !result1456.nonnull }).value) {
            {
                return ((panda$core$Int64$nullable) { .nonnull = false });
            }
            }
            panda$core$Int64 $tmp1459 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) result1456.value), ((panda$core$Int64) { 1 }));
            return ((panda$core$Int64$nullable) { $tmp1459, true });
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
            panda$core$Bit $tmp1460 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 21 }));
            if ($tmp1460.value) {
            {
                panda$core$Object* $tmp1461 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
                panda$core$Int64$nullable $tmp1462 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$Type*) $tmp1461), p_target);
                return $tmp1462;
            }
            }
        }
        break;
    }
    switch (p_type->typeKind.value) {
        case 19:
        {
            org$pandalanguage$pandac$Type* $tmp1463 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            panda$core$Int64$nullable $tmp1464 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1463, p_target);
            return $tmp1464;
        }
        break;
        case 17:
        {
            best1465 = ((panda$core$Int64$nullable) { .nonnull = false });
            {
                ITable* $tmp1467 = ((panda$collections$Iterable*) p_type->subtypes)->$class->itable;
                while ($tmp1467->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1467 = $tmp1467->next;
                }
                $fn1469 $tmp1468 = $tmp1467->methods[0];
                panda$collections$Iterator* $tmp1470 = $tmp1468(((panda$collections$Iterable*) p_type->subtypes));
                t$Iter1466 = $tmp1470;
                $l1471:;
                ITable* $tmp1473 = t$Iter1466->$class->itable;
                while ($tmp1473->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1473 = $tmp1473->next;
                }
                $fn1475 $tmp1474 = $tmp1473->methods[0];
                panda$core$Bit $tmp1476 = $tmp1474(t$Iter1466);
                panda$core$Bit $tmp1477 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1476);
                if (!$tmp1477.value) goto $l1472;
                {
                    ITable* $tmp1479 = t$Iter1466->$class->itable;
                    while ($tmp1479->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1479 = $tmp1479->next;
                    }
                    $fn1481 $tmp1480 = $tmp1479->methods[1];
                    panda$core$Object* $tmp1482 = $tmp1480(t$Iter1466);
                    t1478 = ((org$pandalanguage$pandac$Type*) $tmp1482);
                    panda$core$Int64$nullable $tmp1484 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, t1478, p_target);
                    cost1483 = $tmp1484;
                    bool $tmp1485 = ((panda$core$Bit) { cost1483.nonnull }).value;
                    if (!$tmp1485) goto $l1486;
                    bool $tmp1487 = ((panda$core$Bit) { !best1465.nonnull }).value;
                    if ($tmp1487) goto $l1488;
                    panda$core$Bit $tmp1489 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost1483.value), ((panda$core$Int64) best1465.value));
                    $tmp1487 = $tmp1489.value;
                    $l1488:;
                    panda$core$Bit $tmp1490 = { $tmp1487 };
                    $tmp1485 = $tmp1490.value;
                    $l1486:;
                    panda$core$Bit $tmp1491 = { $tmp1485 };
                    if ($tmp1491.value) {
                    {
                        best1465 = cost1483;
                    }
                    }
                }
                goto $l1471;
                $l1472:;
            }
            return best1465;
        }
        break;
        case 22:
        {
            panda$core$Int64$nullable $tmp1492 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_type->parameter->bound, p_target);
            return $tmp1492;
        }
        break;
    }
    panda$core$Bit $tmp1493 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_target);
    panda$core$Bit $tmp1494 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1493);
    if ($tmp1494.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    panda$core$Bit $tmp1495 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_type);
    panda$core$Bit $tmp1496 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1495);
    if ($tmp1496.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp1498 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_type);
    cl1497 = $tmp1498;
    PANDA_ASSERT(((panda$core$Bit) { cl1497 != NULL }).value);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, cl1497);
    if (((panda$core$Bit) { cl1497->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp1500 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_type, cl1497->rawSuper);
        org$pandalanguage$pandac$Type* $tmp1501 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_type, $tmp1500);
        panda$core$Int64$nullable $tmp1502 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1501, p_target);
        cost1499 = $tmp1502;
        if (((panda$core$Bit) { cost1499.nonnull }).value) {
        {
            panda$core$Int64 $tmp1503 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) cost1499.value), ((panda$core$Int64) ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }).value));
            return ((panda$core$Int64$nullable) { $tmp1503, true });
        }
        }
    }
    }
    {
        ITable* $tmp1505 = ((panda$collections$Iterable*) cl1497->rawInterfaces)->$class->itable;
        while ($tmp1505->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1505 = $tmp1505->next;
        }
        $fn1507 $tmp1506 = $tmp1505->methods[0];
        panda$collections$Iterator* $tmp1508 = $tmp1506(((panda$collections$Iterable*) cl1497->rawInterfaces));
        intf$Iter1504 = $tmp1508;
        $l1509:;
        ITable* $tmp1511 = intf$Iter1504->$class->itable;
        while ($tmp1511->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1511 = $tmp1511->next;
        }
        $fn1513 $tmp1512 = $tmp1511->methods[0];
        panda$core$Bit $tmp1514 = $tmp1512(intf$Iter1504);
        panda$core$Bit $tmp1515 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1514);
        if (!$tmp1515.value) goto $l1510;
        {
            ITable* $tmp1517 = intf$Iter1504->$class->itable;
            while ($tmp1517->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1517 = $tmp1517->next;
            }
            $fn1519 $tmp1518 = $tmp1517->methods[1];
            panda$core$Object* $tmp1520 = $tmp1518(intf$Iter1504);
            intf1516 = ((org$pandalanguage$pandac$Type*) $tmp1520);
            org$pandalanguage$pandac$Type* $tmp1522 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_type, intf1516);
            org$pandalanguage$pandac$Type* $tmp1523 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_type, $tmp1522);
            panda$core$Int64$nullable $tmp1524 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1523, p_target);
            cost1521 = $tmp1524;
            if (((panda$core$Bit) { cost1521.nonnull }).value) {
            {
                panda$core$Int64 $tmp1525 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) cost1521.value), ((panda$core$Int64) ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }).value));
                return ((panda$core$Int64$nullable) { $tmp1525, true });
            }
            }
        }
        goto $l1509;
        $l1510:;
    }
    return ((panda$core$Int64$nullable) { .nonnull = false });
}
panda$core$Int64 org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_value) {
    panda$core$Bit $tmp1527 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { -128 }));
    bool $tmp1526 = $tmp1527.value;
    if (!$tmp1526) goto $l1528;
    panda$core$Bit $tmp1529 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { 127 }));
    $tmp1526 = $tmp1529.value;
    $l1528:;
    panda$core$Bit $tmp1530 = { $tmp1526 };
    if ($tmp1530.value) {
    {
        return ((panda$core$Int64) { 8 });
    }
    }
    panda$core$Bit $tmp1532 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { -32768 }));
    bool $tmp1531 = $tmp1532.value;
    if (!$tmp1531) goto $l1533;
    panda$core$Bit $tmp1534 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { 32767 }));
    $tmp1531 = $tmp1534.value;
    $l1533:;
    panda$core$Bit $tmp1535 = { $tmp1531 };
    if ($tmp1535.value) {
    {
        return ((panda$core$Int64) { 16 });
    }
    }
    panda$core$Bit $tmp1537 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { -2147483648 }));
    bool $tmp1536 = $tmp1537.value;
    if (!$tmp1536) goto $l1538;
    panda$core$Bit $tmp1539 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { 2147483647 }));
    $tmp1536 = $tmp1539.value;
    $l1538:;
    panda$core$Bit $tmp1540 = { $tmp1536 };
    if ($tmp1540.value) {
    {
        return ((panda$core$Int64) { 32 });
    }
    }
    return ((panda$core$Int64) { 64 });
}
panda$core$Int64 org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64(org$pandalanguage$pandac$Compiler* self, panda$core$UInt64 p_value) {
    panda$core$Bit $tmp1541 = panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(p_value, ((panda$core$UInt64) { 255 }));
    if ($tmp1541.value) {
    {
        return ((panda$core$Int64) { 8 });
    }
    }
    panda$core$Bit $tmp1542 = panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(p_value, ((panda$core$UInt64) { 65535 }));
    if ($tmp1542.value) {
    {
        return ((panda$core$Int64) { 16 });
    }
    }
    panda$core$Bit $tmp1543 = panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(p_value, ((panda$core$UInt64) { 4294967295 }));
    if ($tmp1543.value) {
    {
        return ((panda$core$Int64) { 32 });
    }
    }
    return ((panda$core$Int64) { 64 });
}
panda$core$Int64$nullable org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr, org$pandalanguage$pandac$Type* p_target) {
    panda$core$Int64 base1544;
    panda$core$Int64$nullable cost1558;
    panda$core$String* s1618;
    panda$collections$Iterator* utf161629;
    panda$collections$ListView* methods1648;
    panda$collections$ImmutableArray* args1650;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1651;
    panda$core$Int64$nullable bestCost1653;
    panda$collections$Iterator* m$Iter1654;
    org$pandalanguage$pandac$MethodRef* m1666;
    panda$core$Int64$nullable cost1671;
    panda$core$Int64$nullable cost11694;
    panda$core$Int64$nullable cost21698;
    panda$core$Int64 cost1707;
    panda$core$Int64$nullable cost11721;
    panda$core$Int64$nullable cost21725;
    panda$core$Int64$nullable cost31730;
    panda$collections$Array* args1738;
    org$pandalanguage$pandac$ClassDecl* targetClass1749;
    panda$collections$Iterator* m$Iter1751;
    org$pandalanguage$pandac$MethodDecl* m1763;
    panda$core$Int64$nullable cost1775;
    panda$core$Int64$nullable cost1780;
    base1544 = ((panda$core$Int64) { 0 });
    panda$core$Bit $tmp1547 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1033 }));
    bool $tmp1546 = $tmp1547.value;
    if (!$tmp1546) goto $l1548;
    panda$core$Bit $tmp1549 = org$pandalanguage$pandac$Type$isChar$R$panda$core$Bit(p_target);
    panda$core$Bit $tmp1550 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1549);
    $tmp1546 = $tmp1550.value;
    $l1548:;
    panda$core$Bit $tmp1551 = { $tmp1546 };
    bool $tmp1545 = $tmp1551.value;
    if (!$tmp1545) goto $l1552;
    panda$core$Int64 $tmp1553 = panda$core$String$length$R$panda$core$Int64(((panda$core$String*) p_expr->payload));
    panda$core$Bit $tmp1554 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1553, ((panda$core$Int64) { 1 }));
    $tmp1545 = $tmp1554.value;
    $l1552:;
    panda$core$Bit $tmp1555 = { $tmp1545 };
    if ($tmp1555.value) {
    {
        base1544 = ((panda$core$Int64) { 3 });
    }
    }
    panda$core$Bit $tmp1556 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_expr->type, p_target);
    if ($tmp1556.value) {
    {
        return ((panda$core$Int64$nullable) { base1544, true });
    }
    }
    switch (p_target->typeKind.value) {
        case 11:
        {
            panda$core$Bit $tmp1557 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1030 }));
            if ($tmp1557.value) {
            {
                return ((panda$core$Int64$nullable) { base1544, true });
            }
            }
            panda$core$Object* $tmp1559 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$Int64$nullable $tmp1560 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, ((org$pandalanguage$pandac$Type*) $tmp1559));
            cost1558 = $tmp1560;
            if (((panda$core$Bit) { !cost1558.nonnull }).value) {
            {
                return ((panda$core$Int64$nullable) { .nonnull = false });
            }
            }
            panda$core$Bit $tmp1561 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->type->typeKind, ((panda$core$Int64) { 11 }));
            if ($tmp1561.value) {
            {
                panda$core$Int64 $tmp1562 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(base1544, ((panda$core$Int64) cost1558.value));
                return ((panda$core$Int64$nullable) { $tmp1562, true });
            }
            }
            panda$core$Int64 $tmp1563 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(base1544, ((panda$core$Int64) cost1558.value));
            panda$core$Int64 $tmp1564 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1563, ((panda$core$Int64) { 1 }));
            return ((panda$core$Int64$nullable) { $tmp1564, true });
        }
        break;
        case 22:
        {
            panda$core$Bit $tmp1565 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(base1544, ((panda$core$Int64) { 0 }));
            PANDA_ASSERT($tmp1565.value);
            panda$core$Int64$nullable $tmp1566 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, p_target->parameter->bound);
            return $tmp1566;
        }
        break;
    }
    switch (p_expr->kind.value) {
        case 1011:
        {
            panda$core$Bit $tmp1567 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 19 }));
            if ($tmp1567.value) {
            {
                return ((panda$core$Int64$nullable) { base1544, true });
            }
            }
            panda$core$Bit $tmp1568 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_target);
            if ($tmp1568.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1569 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
                panda$core$Int64$nullable $tmp1570 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1569, p_target);
                return $tmp1570;
            }
            }
        }
        break;
        case 1004:
        {
            panda$core$Bit $tmp1573 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            bool $tmp1572 = $tmp1573.value;
            if (!$tmp1572) goto $l1574;
            panda$core$Int64 $tmp1575 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1576 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(self, $tmp1575);
            panda$core$Int64 $tmp1577 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1578 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1576, $tmp1577);
            $tmp1572 = $tmp1578.value;
            $l1574:;
            panda$core$Bit $tmp1579 = { $tmp1572 };
            bool $tmp1571 = $tmp1579.value;
            if ($tmp1571) goto $l1580;
            panda$core$Bit $tmp1582 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 13 }));
            bool $tmp1581 = $tmp1582.value;
            if (!$tmp1581) goto $l1583;
            panda$core$Int64 $tmp1584 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64(self, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1585 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1586 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1584, $tmp1585);
            $tmp1581 = $tmp1586.value;
            $l1583:;
            panda$core$Bit $tmp1587 = { $tmp1581 };
            $tmp1571 = $tmp1587.value;
            $l1580:;
            panda$core$Bit $tmp1588 = { $tmp1571 };
            if ($tmp1588.value) {
            {
                return ((panda$core$Int64$nullable) { base1544, true });
            }
            }
            panda$core$Bit $tmp1589 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 20 }));
            if ($tmp1589.value) {
            {
                return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true });
            }
            }
            panda$core$Bit $tmp1590 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            panda$core$Bit $tmp1591 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1590);
            if ($tmp1591.value) {
            {
                panda$core$Bit $tmp1592 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(base1544, ((panda$core$Int64) { 0 }));
                PANDA_ASSERT($tmp1592.value);
                org$pandalanguage$pandac$Type* $tmp1593 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                panda$core$Int64$nullable $tmp1594 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1593, p_target);
                return $tmp1594;
            }
            }
        }
        break;
        case 1032:
        {
            panda$core$Bit $tmp1596 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            bool $tmp1595 = $tmp1596.value;
            if (!$tmp1595) goto $l1597;
            panda$core$Int64 $tmp1598 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1599 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp1598);
            panda$core$Int64 $tmp1600 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(self, $tmp1599);
            panda$core$Int64 $tmp1601 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1602 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1600, $tmp1601);
            $tmp1595 = $tmp1602.value;
            $l1597:;
            panda$core$Bit $tmp1603 = { $tmp1595 };
            if ($tmp1603.value) {
            {
                return ((panda$core$Int64$nullable) { base1544, true });
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
                panda$core$Bit $tmp1607 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(base1544, ((panda$core$Int64) { 0 }));
                PANDA_ASSERT($tmp1607.value);
                org$pandalanguage$pandac$Type* $tmp1608 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                panda$core$Int64$nullable $tmp1609 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1608, p_target);
                return $tmp1609;
            }
            }
        }
        break;
        case 1045:
        {
            panda$core$Bit $tmp1610 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 20 }));
            if ($tmp1610.value) {
            {
                return ((panda$core$Int64$nullable) { base1544, true });
            }
            }
            panda$core$Bit $tmp1611 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            panda$core$Bit $tmp1612 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1611);
            if ($tmp1612.value) {
            {
                panda$core$Bit $tmp1613 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(base1544, ((panda$core$Int64) { 0 }));
                PANDA_ASSERT($tmp1613.value);
                org$pandalanguage$pandac$Type* $tmp1614 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                panda$core$Int64$nullable $tmp1615 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1614, p_target);
                return $tmp1615;
            }
            }
        }
        break;
        case 1033:
        {
            org$pandalanguage$pandac$Type* $tmp1616 = org$pandalanguage$pandac$Type$Char8$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1617 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1616);
            if ($tmp1617.value) {
            {
                s1618 = ((panda$core$String*) p_expr->payload);
                panda$core$Int64 $tmp1620 = panda$core$String$length$R$panda$core$Int64(s1618);
                panda$core$Bit $tmp1621 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1620, ((panda$core$Int64) { 1 }));
                bool $tmp1619 = $tmp1621.value;
                if (!$tmp1619) goto $l1622;
                panda$core$Char32 $tmp1623 = panda$core$String$$IDX$panda$core$Int64$R$panda$core$Char32(s1618, ((panda$core$Int64) { 0 }));
                panda$core$UInt32 $tmp1624 = panda$core$Char32$convert$R$panda$core$UInt32($tmp1623);
                panda$core$Bit $tmp1625 = panda$core$UInt32$$LE$panda$core$UInt32$R$panda$core$Bit($tmp1624, ((panda$core$UInt32) { 255 }));
                $tmp1619 = $tmp1625.value;
                $l1622:;
                panda$core$Bit $tmp1626 = { $tmp1619 };
                if ($tmp1626.value) {
                {
                    return ((panda$core$Int64$nullable) { base1544, true });
                }
                }
                return ((panda$core$Int64$nullable) { .nonnull = false });
            }
            }
            org$pandalanguage$pandac$Type* $tmp1627 = org$pandalanguage$pandac$Type$Char16$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1628 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1627);
            if ($tmp1628.value) {
            {
                panda$collections$Iterator* $tmp1630 = panda$core$String$utf16$R$panda$collections$Iterator$LTpanda$core$Char16$GT(((panda$core$String*) p_expr->payload));
                utf161629 = $tmp1630;
                ITable* $tmp1631 = utf161629->$class->itable;
                while ($tmp1631->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1631 = $tmp1631->next;
                }
                $fn1633 $tmp1632 = $tmp1631->methods[0];
                panda$core$Bit $tmp1634 = $tmp1632(utf161629);
                if ($tmp1634.value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                ITable* $tmp1635 = utf161629->$class->itable;
                while ($tmp1635->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1635 = $tmp1635->next;
                }
                $fn1637 $tmp1636 = $tmp1635->methods[1];
                $tmp1636(utf161629);
                ITable* $tmp1638 = utf161629->$class->itable;
                while ($tmp1638->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1638 = $tmp1638->next;
                }
                $fn1640 $tmp1639 = $tmp1638->methods[0];
                panda$core$Bit $tmp1641 = $tmp1639(utf161629);
                if ($tmp1641.value) {
                {
                    panda$core$Int64 $tmp1642 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(base1544, ((panda$core$Int64) { 1 }));
                    return ((panda$core$Int64$nullable) { $tmp1642, true });
                }
                }
                return ((panda$core$Int64$nullable) { .nonnull = false });
            }
            }
            org$pandalanguage$pandac$Type* $tmp1643 = org$pandalanguage$pandac$Type$Char32$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1644 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1643);
            if ($tmp1644.value) {
            {
                panda$core$Int64 $tmp1645 = panda$core$String$length$R$panda$core$Int64(((panda$core$String*) p_expr->payload));
                panda$core$Bit $tmp1646 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1645, ((panda$core$Int64) { 1 }));
                if ($tmp1646.value) {
                {
                    panda$core$Int64 $tmp1647 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(base1544, ((panda$core$Int64) { 2 }));
                    return ((panda$core$Int64$nullable) { $tmp1647, true });
                }
                }
                return ((panda$core$Int64$nullable) { .nonnull = false });
            }
            }
        }
        break;
        case 1039:
        {
            panda$core$Object* $tmp1649 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            methods1648 = ((panda$collections$ListView*) ((org$pandalanguage$pandac$IRNode*) $tmp1649)->payload);
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1651, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$collections$ImmutableArray* $tmp1652 = panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(p_expr->children, $tmp1651);
            args1650 = $tmp1652;
            bestCost1653 = ((panda$core$Int64$nullable) { .nonnull = false });
            {
                ITable* $tmp1655 = ((panda$collections$Iterable*) methods1648)->$class->itable;
                while ($tmp1655->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1655 = $tmp1655->next;
                }
                $fn1657 $tmp1656 = $tmp1655->methods[0];
                panda$collections$Iterator* $tmp1658 = $tmp1656(((panda$collections$Iterable*) methods1648));
                m$Iter1654 = $tmp1658;
                $l1659:;
                ITable* $tmp1661 = m$Iter1654->$class->itable;
                while ($tmp1661->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1661 = $tmp1661->next;
                }
                $fn1663 $tmp1662 = $tmp1661->methods[0];
                panda$core$Bit $tmp1664 = $tmp1662(m$Iter1654);
                panda$core$Bit $tmp1665 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1664);
                if (!$tmp1665.value) goto $l1660;
                {
                    ITable* $tmp1667 = m$Iter1654->$class->itable;
                    while ($tmp1667->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1667 = $tmp1667->next;
                    }
                    $fn1669 $tmp1668 = $tmp1667->methods[1];
                    panda$core$Object* $tmp1670 = $tmp1668(m$Iter1654);
                    m1666 = ((org$pandalanguage$pandac$MethodRef*) $tmp1670);
                    panda$core$Int64$nullable $tmp1672 = org$pandalanguage$pandac$Compiler$callCost$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(self, m1666, ((panda$collections$ListView*) args1650), p_target);
                    cost1671 = $tmp1672;
                    if (((panda$core$Bit) { !cost1671.nonnull }).value) {
                    {
                        goto $l1659;
                    }
                    }
                    bool $tmp1673 = ((panda$core$Bit) { !bestCost1653.nonnull }).value;
                    if ($tmp1673) goto $l1674;
                    panda$core$Bit $tmp1675 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost1671.value), ((panda$core$Int64) bestCost1653.value));
                    $tmp1673 = $tmp1675.value;
                    $l1674:;
                    panda$core$Bit $tmp1676 = { $tmp1673 };
                    if ($tmp1676.value) {
                    {
                        bestCost1653 = cost1671;
                    }
                    }
                }
                goto $l1659;
                $l1660:;
            }
            return bestCost1653;
        }
        break;
        case 1031:
        {
            panda$core$Bit $tmp1677 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(p_target);
            if ($tmp1677.value) {
            {
                panda$core$Int64 $tmp1678 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_expr->children);
                panda$core$Bit $tmp1679 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1678, ((panda$core$Int64) { 2 }));
                if ($tmp1679.value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Object* $tmp1681 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Bit $tmp1682 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1681)->kind, ((panda$core$Int64) { 1030 }));
                bool $tmp1680 = $tmp1682.value;
                if (!$tmp1680) goto $l1683;
                panda$core$Object* $tmp1684 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                panda$core$Bit $tmp1685 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1684)->kind, ((panda$core$Int64) { 1030 }));
                $tmp1680 = $tmp1685.value;
                $l1683:;
                panda$core$Bit $tmp1686 = { $tmp1680 };
                if ($tmp1686.value) {
                {
                    panda$core$Object* $tmp1687 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                    panda$core$Bit $tmp1688 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1687)->typeKind, ((panda$core$Int64) { 11 }));
                    if ($tmp1688.value) {
                    {
                        panda$core$Object* $tmp1689 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                        panda$core$Object* $tmp1690 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$Type*) $tmp1689)->subtypes, ((panda$core$Int64) { 0 }));
                        panda$core$Bit $tmp1691 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1690));
                        if ($tmp1691.value) {
                        {
                            return ((panda$core$Int64$nullable) { base1544, true });
                        }
                        }
                        panda$core$Int64 $tmp1692 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(base1544, ((panda$core$Int64) { 1 }));
                        return ((panda$core$Int64$nullable) { $tmp1692, true });
                    }
                    }
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Bit $tmp1693 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 21 }));
                PANDA_ASSERT($tmp1693.value);
                panda$core$Object* $tmp1695 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Object* $tmp1696 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                panda$core$Int64$nullable $tmp1697 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1695), ((org$pandalanguage$pandac$Type*) $tmp1696));
                cost11694 = $tmp1697;
                if (((panda$core$Bit) { !cost11694.nonnull }).value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Object* $tmp1699 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                panda$core$Object* $tmp1700 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                panda$core$Int64$nullable $tmp1701 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1699), ((org$pandalanguage$pandac$Type*) $tmp1700));
                cost21698 = $tmp1701;
                if (((panda$core$Bit) { !cost21698.nonnull }).value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Int64 $tmp1702 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(base1544, ((panda$core$Int64) cost11694.value));
                panda$core$Int64 $tmp1703 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1702, ((panda$core$Int64) cost21698.value));
                return ((panda$core$Int64$nullable) { $tmp1703, true });
            }
            }
            panda$core$Bit $tmp1704 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(p_target);
            if ($tmp1704.value) {
            {
                panda$core$Int64 $tmp1705 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_expr->children);
                panda$core$Bit $tmp1706 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1705, ((panda$core$Int64) { 3 }));
                if ($tmp1706.value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Object* $tmp1709 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Bit $tmp1710 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1709)->kind, ((panda$core$Int64) { 1030 }));
                bool $tmp1708 = $tmp1710.value;
                if (!$tmp1708) goto $l1711;
                panda$core$Object* $tmp1712 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                panda$core$Bit $tmp1713 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1712)->kind, ((panda$core$Int64) { 1030 }));
                $tmp1708 = $tmp1713.value;
                $l1711:;
                panda$core$Bit $tmp1714 = { $tmp1708 };
                if ($tmp1714.value) {
                {
                    panda$core$Object* $tmp1715 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                    panda$core$Bit $tmp1716 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1715)->typeKind, ((panda$core$Int64) { 11 }));
                    if ($tmp1716.value) {
                    {
                        panda$core$Object* $tmp1717 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                        panda$core$Object* $tmp1718 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$Type*) $tmp1717)->subtypes, ((panda$core$Int64) { 0 }));
                        panda$core$Bit $tmp1719 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1718));
                        if ($tmp1719.value) {
                        {
                            cost1707 = ((panda$core$Int64) { 0 });
                        }
                        }
                        else {
                        {
                            cost1707 = ((panda$core$Int64) { 1 });
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
                    panda$core$Bit $tmp1720 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 21 }));
                    PANDA_ASSERT($tmp1720.value);
                    panda$core$Object* $tmp1722 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                    panda$core$Object* $tmp1723 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                    panda$core$Int64$nullable $tmp1724 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1722), ((org$pandalanguage$pandac$Type*) $tmp1723));
                    cost11721 = $tmp1724;
                    if (((panda$core$Bit) { !cost11721.nonnull }).value) {
                    {
                        return ((panda$core$Int64$nullable) { .nonnull = false });
                    }
                    }
                    panda$core$Object* $tmp1726 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                    panda$core$Object* $tmp1727 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                    panda$core$Int64$nullable $tmp1728 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1726), ((org$pandalanguage$pandac$Type*) $tmp1727));
                    cost21725 = $tmp1728;
                    if (((panda$core$Bit) { !cost21725.nonnull }).value) {
                    {
                        return ((panda$core$Int64$nullable) { .nonnull = false });
                    }
                    }
                    panda$core$Int64 $tmp1729 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) cost11721.value), ((panda$core$Int64) cost21725.value));
                    cost1707 = $tmp1729;
                }
                }
                panda$core$Object* $tmp1731 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 2 }));
                panda$core$Object* $tmp1732 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 2 }));
                panda$core$Int64$nullable $tmp1733 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1731), ((org$pandalanguage$pandac$Type*) $tmp1732));
                cost31730 = $tmp1733;
                if (((panda$core$Bit) { !cost31730.nonnull }).value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Int64 $tmp1734 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(base1544, cost1707);
                panda$core$Int64 $tmp1735 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1734, ((panda$core$Int64) cost31730.value));
                return ((panda$core$Int64$nullable) { $tmp1735, true });
            }
            }
            org$pandalanguage$pandac$Type* $tmp1736 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
            panda$core$Int64$nullable $tmp1737 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1736, p_target);
            return $tmp1737;
        }
        break;
        case 1040:
        {
            panda$collections$Array* $tmp1739 = (panda$collections$Array*) malloc(40);
            $tmp1739->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1739->refCount.value = 1;
            panda$collections$Array$init($tmp1739);
            args1738 = $tmp1739;
            panda$core$Object* $tmp1741 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
            panda$collections$Array$add$panda$collections$Array$T(args1738, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp1741)));
            panda$core$Bit $tmp1742 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(base1544, ((panda$core$Int64) { 0 }));
            PANDA_ASSERT($tmp1742.value);
            panda$core$Object* $tmp1743 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp1745 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1743), &$s1744, ((panda$collections$ListView*) args1738));
            panda$core$Int64$nullable $tmp1746 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1745, p_target);
            return $tmp1746;
        }
        break;
    }
    panda$core$Bit $tmp1747 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_target);
    panda$core$Bit $tmp1748 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1747);
    if ($tmp1748.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp1750 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_target);
    targetClass1749 = $tmp1750;
    if (((panda$core$Bit) { targetClass1749 == NULL }).value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    {
        ITable* $tmp1752 = ((panda$collections$Iterable*) targetClass1749->methods)->$class->itable;
        while ($tmp1752->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1752 = $tmp1752->next;
        }
        $fn1754 $tmp1753 = $tmp1752->methods[0];
        panda$collections$Iterator* $tmp1755 = $tmp1753(((panda$collections$Iterable*) targetClass1749->methods));
        m$Iter1751 = $tmp1755;
        $l1756:;
        ITable* $tmp1758 = m$Iter1751->$class->itable;
        while ($tmp1758->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1758 = $tmp1758->next;
        }
        $fn1760 $tmp1759 = $tmp1758->methods[0];
        panda$core$Bit $tmp1761 = $tmp1759(m$Iter1751);
        panda$core$Bit $tmp1762 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1761);
        if (!$tmp1762.value) goto $l1757;
        {
            ITable* $tmp1764 = m$Iter1751->$class->itable;
            while ($tmp1764->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1764 = $tmp1764->next;
            }
            $fn1766 $tmp1765 = $tmp1764->methods[1];
            panda$core$Object* $tmp1767 = $tmp1765(m$Iter1751);
            m1763 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1767);
            panda$core$Bit $tmp1768 = org$pandalanguage$pandac$Annotations$isImplicit$R$panda$core$Bit(m1763->annotations);
            if ($tmp1768.value) {
            {
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m1763);
                panda$core$Bit $tmp1770 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(m1763->methodKind, ((panda$core$Int64) { 59 }));
                bool $tmp1769 = $tmp1770.value;
                if (!$tmp1769) goto $l1771;
                panda$core$Int64 $tmp1772 = panda$collections$Array$get_count$R$panda$core$Int64(m1763->parameters);
                panda$core$Bit $tmp1773 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1772, ((panda$core$Int64) { 1 }));
                $tmp1769 = $tmp1773.value;
                $l1771:;
                panda$core$Bit $tmp1774 = { $tmp1769 };
                if ($tmp1774.value) {
                {
                    panda$core$Object* $tmp1776 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(m1763->parameters, ((panda$core$Int64) { 0 }));
                    panda$core$Int64$nullable $tmp1777 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1776)->type);
                    cost1775 = $tmp1777;
                    if (((panda$core$Bit) { cost1775.nonnull }).value) {
                    {
                        panda$core$Int64 $tmp1778 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(base1544, ((panda$core$Int64) cost1775.value));
                        panda$core$Int64 $tmp1779 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1778, ((panda$core$Int64) { 2 }));
                        return ((panda$core$Int64$nullable) { $tmp1779, true });
                    }
                    }
                }
                }
            }
            }
        }
        goto $l1756;
        $l1757:;
    }
    PANDA_ASSERT(((panda$core$Bit) { p_expr->type != NULL }).value);
    panda$core$Int64$nullable $tmp1781 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr->type, p_target);
    cost1780 = $tmp1781;
    if (((panda$core$Bit) { cost1780.nonnull }).value) {
    {
        panda$core$Int64 $tmp1782 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(base1544, ((panda$core$Int64) cost1780.value));
        return ((panda$core$Int64$nullable) { $tmp1782, true });
    }
    }
    return ((panda$core$Int64$nullable) { .nonnull = false });
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$doCoerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr, org$pandalanguage$pandac$Type* p_target) {
    panda$collections$Array* children1791;
    org$pandalanguage$pandac$IRNode* intermediate1796;
    org$pandalanguage$pandac$IRNode* coerced1828;
    org$pandalanguage$pandac$IRNode* coerced1854;
    org$pandalanguage$pandac$IRNode* coerced1867;
    org$pandalanguage$pandac$IRNode* varType1881;
    panda$collections$Array* args1891;
    org$pandalanguage$pandac$IRNode* target1899;
    panda$collections$Array* args1910;
    org$pandalanguage$pandac$IRNode* target1922;
    panda$collections$Array* args1933;
    org$pandalanguage$pandac$IRNode* target1941;
    org$pandalanguage$pandac$Type* param1957;
    org$pandalanguage$pandac$IRNode* start1959;
    org$pandalanguage$pandac$IRNode* end1962;
    panda$collections$Array* args1965;
    org$pandalanguage$pandac$IRNode* target1971;
    org$pandalanguage$pandac$Type* endPoint1987;
    org$pandalanguage$pandac$IRNode* start1989;
    org$pandalanguage$pandac$IRNode* end1992;
    org$pandalanguage$pandac$IRNode* step1995;
    panda$collections$Array* args1999;
    org$pandalanguage$pandac$IRNode* target2005;
    panda$collections$ImmutableArray* args2013;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp2014;
    panda$collections$Array* children2026;
    org$pandalanguage$pandac$IRNode* intermediate2032;
    org$pandalanguage$pandac$ClassDecl* cl2037;
    panda$collections$Iterator* m$Iter2039;
    org$pandalanguage$pandac$MethodDecl* m2051;
    org$pandalanguage$pandac$IRNode* type2068;
    panda$collections$Array* args2073;
    panda$collections$Array* children2078;
    if (((panda$core$Bit) { p_expr == NULL }).value) {
    {
        return NULL;
    }
    }
    PANDA_ASSERT(p_expr->type->resolved.value);
    PANDA_ASSERT(p_target->resolved.value);
    panda$core$Bit $tmp1783 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_expr->type, p_target);
    if ($tmp1783.value) {
    {
        return p_expr;
    }
    }
    panda$core$Bit $tmp1785 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->type->typeKind, ((panda$core$Int64) { 11 }));
    bool $tmp1784 = $tmp1785.value;
    if (!$tmp1784) goto $l1786;
    panda$core$Bit $tmp1787 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
    $tmp1784 = $tmp1787.value;
    $l1786:;
    panda$core$Bit $tmp1788 = { $tmp1784 };
    if ($tmp1788.value) {
    {
        panda$core$Object* $tmp1789 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp1790 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1789), p_target);
        if ($tmp1790.value) {
        {
            panda$collections$Array* $tmp1792 = (panda$collections$Array*) malloc(40);
            $tmp1792->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1792->refCount.value = 1;
            panda$collections$Array$init($tmp1792);
            children1791 = $tmp1792;
            panda$collections$Array$add$panda$collections$Array$T(children1791, ((panda$core$Object*) p_expr));
            org$pandalanguage$pandac$IRNode* $tmp1794 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp1794->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1794->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp1794, ((panda$core$Int64) { 1009 }), p_expr->position, p_target, ((panda$core$Object*) wrap_panda$core$Bit(((panda$core$Bit) { false }))), ((panda$collections$ListView*) children1791));
            return $tmp1794;
        }
        }
        panda$core$Object* $tmp1797 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->type->subtypes, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp1798 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, ((org$pandalanguage$pandac$Type*) $tmp1797));
        intermediate1796 = $tmp1798;
        org$pandalanguage$pandac$IRNode* $tmp1799 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, intermediate1796, p_target);
        return $tmp1799;
    }
    }
    switch (p_expr->kind.value) {
        case 1004:
        {
            panda$core$Bit $tmp1801 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            bool $tmp1800 = $tmp1801.value;
            if (!$tmp1800) goto $l1802;
            panda$core$Int64 $tmp1803 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64(self, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1804 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1805 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1803, $tmp1804);
            $tmp1800 = $tmp1805.value;
            $l1802:;
            panda$core$Bit $tmp1806 = { $tmp1800 };
            if ($tmp1806.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1807 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1807->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1807->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp1807, ((panda$core$Int64) { 1004 }), p_expr->position, p_target, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
                return $tmp1807;
            }
            }
            else {
            panda$core$Bit $tmp1810 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 13 }));
            bool $tmp1809 = $tmp1810.value;
            if (!$tmp1809) goto $l1811;
            panda$core$Int64 $tmp1812 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64(self, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1813 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1814 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1812, $tmp1813);
            $tmp1809 = $tmp1814.value;
            $l1811:;
            panda$core$Bit $tmp1815 = { $tmp1809 };
            if ($tmp1815.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1816 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1816->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1816->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp1816, ((panda$core$Int64) { 1004 }), p_expr->position, p_target, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
                return $tmp1816;
            }
            }
            else {
            panda$core$Bit $tmp1818 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 20 }));
            if ($tmp1818.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1819 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1819->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1819->refCount.value = 1;
                panda$core$Real64 $tmp1821 = panda$core$UInt64$convert$R$panda$core$Real64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Real64($tmp1819, ((panda$core$Int64) { 1045 }), p_expr->position, p_target, $tmp1821);
                return $tmp1819;
            }
            }
            }
            }
            panda$core$Bit $tmp1823 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 10 }));
            bool $tmp1822 = $tmp1823.value;
            if (!$tmp1822) goto $l1824;
            panda$core$Bit $tmp1825 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            panda$core$Bit $tmp1826 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1825);
            $tmp1822 = $tmp1826.value;
            $l1824:;
            panda$core$Bit $tmp1827 = { $tmp1822 };
            if ($tmp1827.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1829 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp1830 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, $tmp1829);
                coerced1828 = $tmp1830;
                if (((panda$core$Bit) { coerced1828 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$IRNode* $tmp1831 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, coerced1828, p_target);
                return $tmp1831;
            }
            }
        }
        break;
        case 1032:
        {
            panda$core$Bit $tmp1833 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            bool $tmp1832 = $tmp1833.value;
            if (!$tmp1832) goto $l1834;
            panda$core$Int64 $tmp1835 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1836 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp1835);
            panda$core$Int64 $tmp1837 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(self, $tmp1836);
            panda$core$Int64 $tmp1838 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1839 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1837, $tmp1838);
            $tmp1832 = $tmp1839.value;
            $l1834:;
            panda$core$Bit $tmp1840 = { $tmp1832 };
            if ($tmp1840.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1841 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1841->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1841->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp1841, ((panda$core$Int64) { 1032 }), p_expr->position, p_target, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
                return $tmp1841;
            }
            }
            else {
            panda$core$Bit $tmp1843 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 20 }));
            if ($tmp1843.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1844 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1844->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1844->refCount.value = 1;
                panda$core$Real64 $tmp1846 = panda$core$UInt64$convert$R$panda$core$Real64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
                panda$core$Real64 $tmp1847 = panda$core$Real64$$SUB$R$panda$core$Real64($tmp1846);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Real64($tmp1844, ((panda$core$Int64) { 1045 }), p_expr->position, p_target, $tmp1847);
                return $tmp1844;
            }
            }
            }
            panda$core$Bit $tmp1849 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 10 }));
            bool $tmp1848 = $tmp1849.value;
            if (!$tmp1848) goto $l1850;
            panda$core$Bit $tmp1851 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            panda$core$Bit $tmp1852 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1851);
            $tmp1848 = $tmp1852.value;
            $l1850:;
            panda$core$Bit $tmp1853 = { $tmp1848 };
            if ($tmp1853.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1855 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp1856 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, $tmp1855);
                coerced1854 = $tmp1856;
                if (((panda$core$Bit) { coerced1854 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$IRNode* $tmp1857 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, coerced1854, p_target);
                return $tmp1857;
            }
            }
        }
        break;
        case 1045:
        {
            panda$core$Bit $tmp1858 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 20 }));
            if ($tmp1858.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1859 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1859->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1859->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Real64($tmp1859, ((panda$core$Int64) { 1045 }), p_expr->position, p_target, ((panda$core$Real64$wrapper*) p_expr->payload)->value);
                return $tmp1859;
            }
            }
            panda$core$Bit $tmp1862 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 10 }));
            bool $tmp1861 = $tmp1862.value;
            if (!$tmp1861) goto $l1863;
            panda$core$Bit $tmp1864 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            panda$core$Bit $tmp1865 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1864);
            $tmp1861 = $tmp1865.value;
            $l1863:;
            panda$core$Bit $tmp1866 = { $tmp1861 };
            if ($tmp1866.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1868 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp1869 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, $tmp1868);
                coerced1867 = $tmp1869;
                if (((panda$core$Bit) { coerced1867 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$IRNode* $tmp1870 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, coerced1867, p_target);
                return $tmp1870;
            }
            }
        }
        break;
        case 1011:
        {
            org$pandalanguage$pandac$Type* $tmp1871 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1872 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1871);
            if ($tmp1872.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1873 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1873->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1873->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp1873, ((panda$core$Int64) { 1011 }), p_expr->position, p_target, ((panda$core$Bit$wrapper*) p_expr->payload)->value);
                return $tmp1873;
            }
            }
            panda$core$Bit $tmp1876 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_target);
            bool $tmp1875 = $tmp1876.value;
            if (!$tmp1875) goto $l1877;
            org$pandalanguage$pandac$Type* $tmp1878 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1879 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1878);
            $tmp1875 = $tmp1879.value;
            $l1877:;
            panda$core$Bit $tmp1880 = { $tmp1875 };
            if ($tmp1880.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1882 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp1883 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, $tmp1882);
                varType1881 = $tmp1883;
                if (((panda$core$Bit) { varType1881 != NULL }).value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp1884 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, varType1881, p_target);
                    return $tmp1884;
                }
                }
            }
            }
        }
        break;
        case 1033:
        {
            org$pandalanguage$pandac$Type* $tmp1886 = org$pandalanguage$pandac$Type$Char8$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1887 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1886);
            bool $tmp1885 = $tmp1887.value;
            if (!$tmp1885) goto $l1888;
            panda$core$Int64$nullable $tmp1889 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, p_target);
            $tmp1885 = ((panda$core$Bit) { $tmp1889.nonnull }).value;
            $l1888:;
            panda$core$Bit $tmp1890 = { $tmp1885 };
            if ($tmp1890.value) {
            {
                panda$collections$Array* $tmp1892 = (panda$collections$Array*) malloc(40);
                $tmp1892->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp1892->refCount.value = 1;
                panda$collections$Array$init($tmp1892);
                args1891 = $tmp1892;
                org$pandalanguage$pandac$IRNode* $tmp1894 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1894->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1894->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1896 = org$pandalanguage$pandac$Type$BuiltinUInt8$R$org$pandalanguage$pandac$Type();
                panda$core$Char32 $tmp1897 = panda$core$String$$IDX$panda$core$Int64$R$panda$core$Char32(((panda$core$String*) p_expr->payload), ((panda$core$Int64) { 0 }));
                panda$core$UInt64 $tmp1898 = panda$core$Char32$convert$R$panda$core$UInt64($tmp1897);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp1894, ((panda$core$Int64) { 1004 }), p_expr->position, $tmp1896, $tmp1898);
                panda$collections$Array$add$panda$collections$Array$T(args1891, ((panda$core$Object*) $tmp1894));
                org$pandalanguage$pandac$IRNode* $tmp1900 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1900->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1900->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1902 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1900, ((panda$core$Int64) { 1001 }), p_expr->position, $tmp1902, p_target);
                target1899 = $tmp1900;
                org$pandalanguage$pandac$IRNode* $tmp1903 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target1899, ((panda$collections$ListView*) args1891));
                return $tmp1903;
            }
            }
            org$pandalanguage$pandac$Type* $tmp1905 = org$pandalanguage$pandac$Type$Char16$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1906 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1905);
            bool $tmp1904 = $tmp1906.value;
            if (!$tmp1904) goto $l1907;
            panda$core$Int64$nullable $tmp1908 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, p_target);
            $tmp1904 = ((panda$core$Bit) { $tmp1908.nonnull }).value;
            $l1907:;
            panda$core$Bit $tmp1909 = { $tmp1904 };
            if ($tmp1909.value) {
            {
                panda$collections$Array* $tmp1911 = (panda$collections$Array*) malloc(40);
                $tmp1911->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp1911->refCount.value = 1;
                panda$collections$Array$init($tmp1911);
                args1910 = $tmp1911;
                org$pandalanguage$pandac$IRNode* $tmp1913 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1913->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1913->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1915 = org$pandalanguage$pandac$Type$BuiltinUInt16$R$org$pandalanguage$pandac$Type();
                panda$collections$Iterator* $tmp1916 = panda$core$String$utf16$R$panda$collections$Iterator$LTpanda$core$Char16$GT(((panda$core$String*) p_expr->payload));
                ITable* $tmp1917 = $tmp1916->$class->itable;
                while ($tmp1917->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1917 = $tmp1917->next;
                }
                $fn1919 $tmp1918 = $tmp1917->methods[1];
                panda$core$Object* $tmp1920 = $tmp1918($tmp1916);
                panda$core$UInt64 $tmp1921 = panda$core$Char16$convert$R$panda$core$UInt64(((panda$core$Char16$wrapper*) $tmp1920)->value);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp1913, ((panda$core$Int64) { 1004 }), p_expr->position, $tmp1915, $tmp1921);
                panda$collections$Array$add$panda$collections$Array$T(args1910, ((panda$core$Object*) $tmp1913));
                org$pandalanguage$pandac$IRNode* $tmp1923 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1923->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1923->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1925 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1923, ((panda$core$Int64) { 1001 }), p_expr->position, $tmp1925, p_target);
                target1922 = $tmp1923;
                org$pandalanguage$pandac$IRNode* $tmp1926 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target1922, ((panda$collections$ListView*) args1910));
                return $tmp1926;
            }
            }
            org$pandalanguage$pandac$Type* $tmp1928 = org$pandalanguage$pandac$Type$Char32$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1929 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1928);
            bool $tmp1927 = $tmp1929.value;
            if (!$tmp1927) goto $l1930;
            panda$core$Int64$nullable $tmp1931 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, p_target);
            $tmp1927 = ((panda$core$Bit) { $tmp1931.nonnull }).value;
            $l1930:;
            panda$core$Bit $tmp1932 = { $tmp1927 };
            if ($tmp1932.value) {
            {
                panda$collections$Array* $tmp1934 = (panda$collections$Array*) malloc(40);
                $tmp1934->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp1934->refCount.value = 1;
                panda$collections$Array$init($tmp1934);
                args1933 = $tmp1934;
                org$pandalanguage$pandac$IRNode* $tmp1936 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1936->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1936->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1938 = org$pandalanguage$pandac$Type$BuiltinUInt32$R$org$pandalanguage$pandac$Type();
                panda$core$Char32 $tmp1939 = panda$core$String$$IDX$panda$core$Int64$R$panda$core$Char32(((panda$core$String*) p_expr->payload), ((panda$core$Int64) { 0 }));
                panda$core$UInt64 $tmp1940 = panda$core$Char32$convert$R$panda$core$UInt64($tmp1939);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp1936, ((panda$core$Int64) { 1004 }), p_expr->position, $tmp1938, $tmp1940);
                panda$collections$Array$add$panda$collections$Array$T(args1933, ((panda$core$Object*) $tmp1936));
                org$pandalanguage$pandac$IRNode* $tmp1942 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1942->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1942->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1944 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1942, ((panda$core$Int64) { 1001 }), p_expr->position, $tmp1944, p_target);
                target1941 = $tmp1942;
                org$pandalanguage$pandac$IRNode* $tmp1945 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target1941, ((panda$collections$ListView*) args1933));
                return $tmp1945;
            }
            }
        }
        break;
        case 1031:
        {
            panda$core$Bit $tmp1946 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(p_target);
            if ($tmp1946.value) {
            {
                panda$core$Int64 $tmp1947 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_expr->children);
                panda$core$Bit $tmp1948 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1947, ((panda$core$Int64) { 2 }));
                if ($tmp1948.value) {
                {
                    panda$core$String* $tmp1950 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1949, ((panda$core$Object*) p_target));
                    panda$core$String* $tmp1952 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1950, &$s1951);
                    panda$core$String* $tmp1953 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1952, ((panda$core$Object*) p_expr));
                    panda$core$String* $tmp1955 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1953, &$s1954);
                    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_expr->position, $tmp1955);
                    return NULL;
                }
                }
                panda$core$Bit $tmp1956 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 21 }));
                PANDA_ASSERT($tmp1956.value);
                panda$core$Object* $tmp1958 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                param1957 = ((org$pandalanguage$pandac$Type*) $tmp1958);
                panda$core$Object* $tmp1960 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$IRNode* $tmp1961 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1960), param1957);
                start1959 = $tmp1961;
                if (((panda$core$Bit) { start1959 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$core$Object* $tmp1963 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$IRNode* $tmp1964 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1963), param1957);
                end1962 = $tmp1964;
                if (((panda$core$Bit) { end1962 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp1966 = (panda$collections$Array*) malloc(40);
                $tmp1966->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp1966->refCount.value = 1;
                panda$collections$Array$init($tmp1966);
                args1965 = $tmp1966;
                panda$collections$Array$add$panda$collections$Array$T(args1965, ((panda$core$Object*) start1959));
                panda$collections$Array$add$panda$collections$Array$T(args1965, ((panda$core$Object*) end1962));
                org$pandalanguage$pandac$IRNode* $tmp1968 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1968->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1968->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1970 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp1968, ((panda$core$Int64) { 1011 }), p_expr->position, $tmp1970, ((panda$core$Bit$wrapper*) p_expr->payload)->value);
                panda$collections$Array$add$panda$collections$Array$T(args1965, ((panda$core$Object*) $tmp1968));
                org$pandalanguage$pandac$IRNode* $tmp1972 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1972->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1972->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1974 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1972, ((panda$core$Int64) { 1001 }), p_expr->position, $tmp1974, p_target);
                target1971 = $tmp1972;
                org$pandalanguage$pandac$IRNode* $tmp1975 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target1971, ((panda$collections$ListView*) args1965));
                return $tmp1975;
            }
            }
            else {
            panda$core$Bit $tmp1976 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(p_target);
            if ($tmp1976.value) {
            {
                panda$core$Int64 $tmp1977 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_expr->children);
                panda$core$Bit $tmp1978 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1977, ((panda$core$Int64) { 3 }));
                if ($tmp1978.value) {
                {
                    panda$core$String* $tmp1980 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1979, ((panda$core$Object*) p_target));
                    panda$core$String* $tmp1982 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1980, &$s1981);
                    panda$core$String* $tmp1983 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1982, ((panda$core$Object*) p_expr));
                    panda$core$String* $tmp1985 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1983, &$s1984);
                    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_expr->position, $tmp1985);
                    return NULL;
                }
                }
                panda$core$Bit $tmp1986 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 21 }));
                PANDA_ASSERT($tmp1986.value);
                panda$core$Object* $tmp1988 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                endPoint1987 = ((org$pandalanguage$pandac$Type*) $tmp1988);
                panda$core$Object* $tmp1990 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$IRNode* $tmp1991 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1990), endPoint1987);
                start1989 = $tmp1991;
                if (((panda$core$Bit) { start1989 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$core$Object* $tmp1993 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$IRNode* $tmp1994 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1993), endPoint1987);
                end1992 = $tmp1994;
                panda$core$Object* $tmp1996 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 2 }));
                panda$core$Object* $tmp1997 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 2 }));
                org$pandalanguage$pandac$IRNode* $tmp1998 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1996), ((org$pandalanguage$pandac$Type*) $tmp1997));
                step1995 = $tmp1998;
                panda$collections$Array* $tmp2000 = (panda$collections$Array*) malloc(40);
                $tmp2000->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp2000->refCount.value = 1;
                panda$collections$Array$init($tmp2000);
                args1999 = $tmp2000;
                panda$collections$Array$add$panda$collections$Array$T(args1999, ((panda$core$Object*) start1989));
                panda$collections$Array$add$panda$collections$Array$T(args1999, ((panda$core$Object*) end1992));
                panda$collections$Array$add$panda$collections$Array$T(args1999, ((panda$core$Object*) step1995));
                org$pandalanguage$pandac$IRNode* $tmp2002 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2002->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2002->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2004 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2002, ((panda$core$Int64) { 1011 }), p_expr->position, $tmp2004, ((panda$core$Bit$wrapper*) p_expr->payload)->value);
                panda$collections$Array$add$panda$collections$Array$T(args1999, ((panda$core$Object*) $tmp2002));
                org$pandalanguage$pandac$IRNode* $tmp2006 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2006->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2006->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2008 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp2006, ((panda$core$Int64) { 1001 }), p_expr->position, $tmp2008, p_target);
                target2005 = $tmp2006;
                org$pandalanguage$pandac$IRNode* $tmp2009 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target2005, ((panda$collections$ListView*) args1999));
                return $tmp2009;
            }
            }
            else {
            {
                org$pandalanguage$pandac$IRNode* $tmp2010 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp2011 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp2010, p_target);
                return $tmp2011;
            }
            }
            }
        }
        break;
        case 1039:
        {
            org$pandalanguage$pandac$IRNode* $tmp2012 = org$pandalanguage$pandac$Compiler$resolveMethodCall$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, p_target);
            return $tmp2012;
        }
        break;
        case 1040:
        {
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp2014, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$collections$ImmutableArray* $tmp2015 = panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(p_expr->children, $tmp2014);
            args2013 = $tmp2015;
            panda$core$Object* $tmp2016 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp2018 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp2016), &$s2017, ((panda$collections$ListView*) args2013), p_target);
            org$pandalanguage$pandac$IRNode* $tmp2019 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp2018, p_target);
            return $tmp2019;
        }
        break;
    }
    panda$core$Bit $tmp2020 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp2020.value) {
    {
        panda$core$Bit $tmp2021 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1030 }));
        if ($tmp2021.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2022 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2022->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2022->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp2022, ((panda$core$Int64) { 1030 }), p_expr->position, p_target);
            return $tmp2022;
        }
        }
        panda$core$Object* $tmp2024 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp2025 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_expr->type, ((org$pandalanguage$pandac$Type*) $tmp2024));
        if ($tmp2025.value) {
        {
            panda$collections$Array* $tmp2027 = (panda$collections$Array*) malloc(40);
            $tmp2027->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2027->refCount.value = 1;
            panda$collections$Array$init($tmp2027);
            children2026 = $tmp2027;
            panda$collections$Array$add$panda$collections$Array$T(children2026, ((panda$core$Object*) p_expr));
            org$pandalanguage$pandac$IRNode* $tmp2029 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2029->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2029->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2029, ((panda$core$Int64) { 1009 }), p_expr->position, p_target, ((panda$core$Object*) wrap_panda$core$Bit(((panda$core$Bit) { false }))), ((panda$collections$ListView*) children2026));
            return $tmp2029;
        }
        }
        panda$core$Bit $tmp2031 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_expr->type->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp2031.value) {
        {
            panda$core$Object* $tmp2033 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp2034 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, ((org$pandalanguage$pandac$Type*) $tmp2033));
            intermediate2032 = $tmp2034;
            org$pandalanguage$pandac$IRNode* $tmp2035 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, intermediate2032, p_target);
            return $tmp2035;
        }
        }
    }
    }
    panda$core$Int64$nullable $tmp2036 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, p_target);
    if (((panda$core$Bit) { $tmp2036.nonnull }).value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp2038 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_target);
        cl2037 = $tmp2038;
        if (((panda$core$Bit) { cl2037 != NULL }).value) {
        {
            {
                ITable* $tmp2040 = ((panda$collections$Iterable*) cl2037->methods)->$class->itable;
                while ($tmp2040->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp2040 = $tmp2040->next;
                }
                $fn2042 $tmp2041 = $tmp2040->methods[0];
                panda$collections$Iterator* $tmp2043 = $tmp2041(((panda$collections$Iterable*) cl2037->methods));
                m$Iter2039 = $tmp2043;
                $l2044:;
                ITable* $tmp2046 = m$Iter2039->$class->itable;
                while ($tmp2046->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp2046 = $tmp2046->next;
                }
                $fn2048 $tmp2047 = $tmp2046->methods[0];
                panda$core$Bit $tmp2049 = $tmp2047(m$Iter2039);
                panda$core$Bit $tmp2050 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2049);
                if (!$tmp2050.value) goto $l2045;
                {
                    ITable* $tmp2052 = m$Iter2039->$class->itable;
                    while ($tmp2052->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp2052 = $tmp2052->next;
                    }
                    $fn2054 $tmp2053 = $tmp2052->methods[1];
                    panda$core$Object* $tmp2055 = $tmp2053(m$Iter2039);
                    m2051 = ((org$pandalanguage$pandac$MethodDecl*) $tmp2055);
                    panda$core$Bit $tmp2056 = org$pandalanguage$pandac$Annotations$isImplicit$R$panda$core$Bit(m2051->annotations);
                    if ($tmp2056.value) {
                    {
                        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m2051);
                        panda$core$Bit $tmp2059 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(m2051->methodKind, ((panda$core$Int64) { 59 }));
                        bool $tmp2058 = $tmp2059.value;
                        if (!$tmp2058) goto $l2060;
                        panda$core$Int64 $tmp2061 = panda$collections$Array$get_count$R$panda$core$Int64(m2051->parameters);
                        panda$core$Bit $tmp2062 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2061, ((panda$core$Int64) { 1 }));
                        $tmp2058 = $tmp2062.value;
                        $l2060:;
                        panda$core$Bit $tmp2063 = { $tmp2058 };
                        bool $tmp2057 = $tmp2063.value;
                        if (!$tmp2057) goto $l2064;
                        panda$core$Object* $tmp2065 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(m2051->parameters, ((panda$core$Int64) { 0 }));
                        panda$core$Int64$nullable $tmp2066 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp2065)->type);
                        $tmp2057 = ((panda$core$Bit) { $tmp2066.nonnull }).value;
                        $l2064:;
                        panda$core$Bit $tmp2067 = { $tmp2057 };
                        if ($tmp2067.value) {
                        {
                            org$pandalanguage$pandac$IRNode* $tmp2069 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                            $tmp2069->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                            $tmp2069->refCount.value = 1;
                            org$pandalanguage$pandac$Type* $tmp2071 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                            org$pandalanguage$pandac$Type* $tmp2072 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl2037);
                            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp2069, ((panda$core$Int64) { 1001 }), p_expr->position, $tmp2071, $tmp2072);
                            type2068 = $tmp2069;
                            panda$collections$Array* $tmp2074 = (panda$collections$Array*) malloc(40);
                            $tmp2074->$class = (panda$core$Class*) &panda$collections$Array$class;
                            $tmp2074->refCount.value = 1;
                            panda$collections$Array$init$panda$core$Int64($tmp2074, ((panda$core$Int64) { 1 }));
                            args2073 = $tmp2074;
                            panda$collections$Array$add$panda$collections$Array$T(args2073, ((panda$core$Object*) p_expr));
                            org$pandalanguage$pandac$IRNode* $tmp2076 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, type2068, ((panda$collections$ListView*) args2073));
                            org$pandalanguage$pandac$IRNode* $tmp2077 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp2076, p_target);
                            return $tmp2077;
                        }
                        }
                    }
                    }
                }
                goto $l2044;
                $l2045:;
            }
        }
        }
        panda$collections$Array* $tmp2079 = (panda$collections$Array*) malloc(40);
        $tmp2079->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2079->refCount.value = 1;
        panda$collections$Array$init$panda$core$Int64($tmp2079, ((panda$core$Int64) { 1 }));
        children2078 = $tmp2079;
        panda$collections$Array$add$panda$collections$Array$T(children2078, ((panda$core$Object*) p_expr));
        org$pandalanguage$pandac$IRNode* $tmp2081 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2081->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2081->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2081, ((panda$core$Int64) { 1009 }), p_expr->position, p_target, ((panda$core$Object*) wrap_panda$core$Bit(((panda$core$Bit) { false }))), ((panda$collections$ListView*) children2078));
        return $tmp2081;
    }
    }
    panda$core$String* $tmp2084 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2083, ((panda$core$Object*) p_target));
    panda$core$String* $tmp2086 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2084, &$s2085);
    panda$core$String* $tmp2087 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2086, ((panda$core$Object*) p_expr->type));
    panda$core$String* $tmp2089 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2087, &$s2088);
    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_expr->position, $tmp2089);
    return NULL;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr, org$pandalanguage$pandac$Type* p_target) {
    org$pandalanguage$pandac$IRNode* result2090;
    org$pandalanguage$pandac$IRNode* $tmp2091 = org$pandalanguage$pandac$Compiler$doCoerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, p_target);
    result2090 = $tmp2091;
    bool $tmp2092 = ((panda$core$Bit) { result2090 == NULL }).value;
    if ($tmp2092) goto $l2093;
    panda$core$Bit $tmp2094 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(result2090->type, p_target);
    $tmp2092 = $tmp2094.value;
    $l2093:;
    panda$core$Bit $tmp2095 = { $tmp2092 };
    PANDA_ASSERT($tmp2095.value);
    return result2090;
}
panda$core$Bit org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type, org$pandalanguage$pandac$Type* p_target) {
    panda$core$Bit $tmp2097 = org$pandalanguage$pandac$Type$isPointer$R$panda$core$Bit(p_type);
    bool $tmp2096 = $tmp2097.value;
    if (!$tmp2096) goto $l2098;
    panda$core$Bit $tmp2099 = org$pandalanguage$pandac$Type$isPointer$R$panda$core$Bit(p_target);
    $tmp2096 = $tmp2099.value;
    $l2098:;
    panda$core$Bit $tmp2100 = { $tmp2096 };
    if ($tmp2100.value) {
    {
        return ((panda$core$Bit) { true });
    }
    }
    panda$core$Int64$nullable $tmp2101 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_type, p_target);
    if (((panda$core$Bit) { $tmp2101.nonnull }).value) {
    {
        return ((panda$core$Bit) { true });
    }
    }
    panda$core$Bit $tmp2103 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_type);
    bool $tmp2102 = $tmp2103.value;
    if (!$tmp2102) goto $l2104;
    panda$core$Bit $tmp2105 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_target);
    $tmp2102 = $tmp2105.value;
    $l2104:;
    panda$core$Bit $tmp2106 = { $tmp2102 };
    if ($tmp2106.value) {
    {
        return ((panda$core$Bit) { true });
    }
    }
    panda$core$Bit $tmp2107 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 16 }));
    if ($tmp2107.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Int64$nullable $tmp2108 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_target, p_type);
    return ((panda$core$Bit) { $tmp2108.nonnull });
}
panda$core$Bit org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_node, org$pandalanguage$pandac$Type* p_target) {
    panda$core$Bit result2110;
    org$pandalanguage$pandac$IRNode* resolved2117;
    panda$core$Int64$nullable $tmp2109 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_node, p_target);
    if (((panda$core$Bit) { $tmp2109.nonnull }).value) {
    {
        return ((panda$core$Bit) { true });
    }
    }
    panda$core$Bit $tmp2111 = org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_node->type, p_target);
    result2110 = $tmp2111;
    panda$core$Bit $tmp2113 = panda$core$Bit$$NOT$R$panda$core$Bit(result2110);
    bool $tmp2112 = $tmp2113.value;
    if (!$tmp2112) goto $l2114;
    panda$core$Bit $tmp2115 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_node->type->typeKind, ((panda$core$Int64) { 17 }));
    $tmp2112 = $tmp2115.value;
    $l2114:;
    panda$core$Bit $tmp2116 = { $tmp2112 };
    if ($tmp2116.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2118 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_node);
        resolved2117 = $tmp2118;
        bool $tmp2119 = ((panda$core$Bit) { resolved2117 != NULL }).value;
        if (!$tmp2119) goto $l2120;
        $tmp2119 = ((panda$core$Bit) { ((panda$core$Object*) resolved2117) != ((panda$core$Object*) p_node) }).value;
        $l2120:;
        panda$core$Bit $tmp2121 = { $tmp2119 };
        if ($tmp2121.value) {
        {
            panda$core$Bit $tmp2122 = org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, resolved2117, p_target);
            result2110 = $tmp2122;
        }
        }
    }
    }
    return result2110;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_node, org$pandalanguage$pandac$Position p_position, panda$core$Bit p_isExplicit, org$pandalanguage$pandac$Type* p_target) {
    org$pandalanguage$pandac$IRNode* resolved2143;
    panda$collections$Array* children2146;
    panda$core$Bit $tmp2123 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_node->type, p_target);
    if ($tmp2123.value) {
    {
        return p_node;
    }
    }
    org$pandalanguage$pandac$Type* $tmp2124 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2125 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp2124);
    PANDA_ASSERT($tmp2125.value);
    bool $tmp2126 = p_isExplicit.value;
    if (!$tmp2126) goto $l2127;
    panda$core$Bit $tmp2128 = org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_node, p_target);
    panda$core$Bit $tmp2129 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2128);
    $tmp2126 = $tmp2129.value;
    $l2127:;
    panda$core$Bit $tmp2130 = { $tmp2126 };
    if ($tmp2130.value) {
    {
        panda$core$String* $tmp2132 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2131, ((panda$core$Object*) p_node->type));
        panda$core$String* $tmp2134 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2132, &$s2133);
        panda$core$String* $tmp2136 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2135, ((panda$core$Object*) p_target));
        panda$core$String* $tmp2138 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2136, &$s2137);
        panda$core$String* $tmp2139 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2134, $tmp2138);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp2139);
    }
    }
    switch (p_node->kind.value) {
        case 1004:
        case 1032:
        case 1011:
        {
            org$pandalanguage$pandac$IRNode* $tmp2140 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_node, p_target);
            return $tmp2140;
        }
        break;
        case 1039:
        case 1040:
        {
            panda$core$Int64$nullable $tmp2141 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_node, p_target);
            if (((panda$core$Bit) { $tmp2141.nonnull }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2142 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_node, p_target);
                return $tmp2142;
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp2144 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_node);
            resolved2143 = $tmp2144;
            if (((panda$core$Bit) { resolved2143 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2145 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, resolved2143, p_position, p_isExplicit, p_target);
                return $tmp2145;
            }
            }
        }
        break;
    }
    panda$collections$Array* $tmp2147 = (panda$collections$Array*) malloc(40);
    $tmp2147->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2147->refCount.value = 1;
    panda$collections$Array$init($tmp2147);
    children2146 = $tmp2147;
    panda$collections$Array$add$panda$collections$Array$T(children2146, ((panda$core$Object*) p_node));
    org$pandalanguage$pandac$IRNode* $tmp2149 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp2149->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2149->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2149, ((panda$core$Int64) { 1009 }), p_position, p_target, ((panda$core$Object*) wrap_panda$core$Bit(p_isExplicit)), ((panda$collections$ListView*) children2146));
    return $tmp2149;
}
panda$core$Int64$nullable org$pandalanguage$pandac$Compiler$callCost$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodRef* p_m, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedReturn) {
    panda$core$Int64 result2157;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2158;
    panda$core$Int64$nullable cost2173;
    panda$core$Int64$nullable cost2187;
    PANDA_ASSERT(p_m->value->resolved.value);
    panda$core$Int64 $tmp2151 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
    ITable* $tmp2152 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp2152->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2152 = $tmp2152->next;
    }
    $fn2154 $tmp2153 = $tmp2152->methods[0];
    panda$core$Int64 $tmp2155 = $tmp2153(((panda$collections$CollectionView*) p_args));
    panda$core$Bit $tmp2156 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp2151, $tmp2155);
    if ($tmp2156.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    result2157 = ((panda$core$Int64) { 0 });
    panda$core$Int64 $tmp2159 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2158, ((panda$core$Int64) { 0 }), $tmp2159, ((panda$core$Bit) { false }));
    int64_t $tmp2161 = $tmp2158.min.value;
    panda$core$Int64 i2160 = { $tmp2161 };
    int64_t $tmp2163 = $tmp2158.max.value;
    bool $tmp2164 = $tmp2158.inclusive.value;
    if ($tmp2164) goto $l2171; else goto $l2172;
    $l2171:;
    if ($tmp2161 <= $tmp2163) goto $l2165; else goto $l2167;
    $l2172:;
    if ($tmp2161 < $tmp2163) goto $l2165; else goto $l2167;
    $l2165:;
    {
        ITable* $tmp2174 = p_args->$class->itable;
        while ($tmp2174->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2174 = $tmp2174->next;
        }
        $fn2176 $tmp2175 = $tmp2174->methods[0];
        panda$core$Object* $tmp2177 = $tmp2175(p_args, i2160);
        org$pandalanguage$pandac$Type* $tmp2178 = org$pandalanguage$pandac$MethodRef$parameter$panda$core$Int64$R$org$pandalanguage$pandac$Type(p_m, i2160);
        panda$core$Int64$nullable $tmp2179 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp2177), $tmp2178);
        cost2173 = $tmp2179;
        if (((panda$core$Bit) { !cost2173.nonnull }).value) {
        {
            return ((panda$core$Int64$nullable) { .nonnull = false });
        }
        }
        panda$core$Int64 $tmp2180 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result2157, ((panda$core$Int64) cost2173.value));
        result2157 = $tmp2180;
    }
    $l2168:;
    int64_t $tmp2182 = $tmp2163 - i2160.value;
    if ($tmp2164) goto $l2183; else goto $l2184;
    $l2183:;
    if ($tmp2182 >= 1) goto $l2181; else goto $l2167;
    $l2184:;
    if ($tmp2182 > 1) goto $l2181; else goto $l2167;
    $l2181:;
    i2160.value += 1;
    goto $l2165;
    $l2167:;
    if (((panda$core$Bit) { p_expectedReturn != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp2188 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(p_m);
        panda$core$Int64$nullable $tmp2189 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp2188, p_expectedReturn);
        cost2187 = $tmp2189;
        if (((panda$core$Bit) { !cost2187.nonnull }).value) {
        {
            return ((panda$core$Int64$nullable) { .nonnull = false });
        }
        }
        panda$core$Int64 $tmp2190 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result2157, ((panda$core$Int64) cost2187.value));
        result2157 = $tmp2190;
    }
    }
    org$pandalanguage$pandac$Type* $tmp2193 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->value->owner);
    panda$core$Bit $tmp2194 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit($tmp2193);
    bool $tmp2192 = $tmp2194.value;
    if (!$tmp2192) goto $l2195;
    ITable* $tmp2196 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp2196->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2196 = $tmp2196->next;
    }
    $fn2198 $tmp2197 = $tmp2196->methods[0];
    panda$core$Int64 $tmp2199 = $tmp2197(((panda$collections$CollectionView*) p_args));
    panda$core$Bit $tmp2200 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2199, ((panda$core$Int64) { 1 }));
    $tmp2192 = $tmp2200.value;
    $l2195:;
    panda$core$Bit $tmp2201 = { $tmp2192 };
    bool $tmp2191 = $tmp2201.value;
    if (!$tmp2191) goto $l2202;
    panda$core$Object* $tmp2203 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->value->parameters, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp2204 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->value->owner);
    panda$core$Bit $tmp2205 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp2203)->type, $tmp2204);
    $tmp2191 = $tmp2205.value;
    $l2202:;
    panda$core$Bit $tmp2206 = { $tmp2191 };
    if ($tmp2206.value) {
    {
        panda$core$Int64 $tmp2207 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result2157, ((panda$core$Int64) { 1 }));
        result2157 = $tmp2207;
    }
    }
    return ((panda$core$Int64$nullable) { result2157, true });
}
panda$core$Int64$nullable org$pandalanguage$pandac$Compiler$matchMethods$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(org$pandalanguage$pandac$Compiler* self, panda$collections$Array* p_methods, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedReturn) {
    panda$collections$Array* result2208;
    panda$core$Int64$nullable best2211;
    panda$collections$Iterator* m$Iter2212;
    org$pandalanguage$pandac$MethodRef* m2224;
    panda$core$Int64$nullable cost2229;
    panda$collections$Array* $tmp2209 = (panda$collections$Array*) malloc(40);
    $tmp2209->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2209->refCount.value = 1;
    panda$collections$Array$init($tmp2209);
    result2208 = $tmp2209;
    best2211 = ((panda$core$Int64$nullable) { .nonnull = false });
    {
        ITable* $tmp2213 = ((panda$collections$Iterable*) p_methods)->$class->itable;
        while ($tmp2213->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2213 = $tmp2213->next;
        }
        $fn2215 $tmp2214 = $tmp2213->methods[0];
        panda$collections$Iterator* $tmp2216 = $tmp2214(((panda$collections$Iterable*) p_methods));
        m$Iter2212 = $tmp2216;
        $l2217:;
        ITable* $tmp2219 = m$Iter2212->$class->itable;
        while ($tmp2219->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2219 = $tmp2219->next;
        }
        $fn2221 $tmp2220 = $tmp2219->methods[0];
        panda$core$Bit $tmp2222 = $tmp2220(m$Iter2212);
        panda$core$Bit $tmp2223 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2222);
        if (!$tmp2223.value) goto $l2218;
        {
            ITable* $tmp2225 = m$Iter2212->$class->itable;
            while ($tmp2225->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2225 = $tmp2225->next;
            }
            $fn2227 $tmp2226 = $tmp2225->methods[1];
            panda$core$Object* $tmp2228 = $tmp2226(m$Iter2212);
            m2224 = ((org$pandalanguage$pandac$MethodRef*) $tmp2228);
            panda$core$Int64$nullable $tmp2230 = org$pandalanguage$pandac$Compiler$callCost$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(self, m2224, p_args, p_expectedReturn);
            cost2229 = $tmp2230;
            if (((panda$core$Bit) { !cost2229.nonnull }).value) {
            {
                goto $l2217;
            }
            }
            bool $tmp2231 = ((panda$core$Bit) { !best2211.nonnull }).value;
            if ($tmp2231) goto $l2232;
            panda$core$Bit $tmp2233 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost2229.value), ((panda$core$Int64) best2211.value));
            $tmp2231 = $tmp2233.value;
            $l2232:;
            panda$core$Bit $tmp2234 = { $tmp2231 };
            if ($tmp2234.value) {
            {
                panda$collections$Array$clear(result2208);
                best2211 = cost2229;
            }
            }
            panda$core$Bit $tmp2238;
            if (((panda$core$Bit) { cost2229.nonnull }).value) goto $l2235; else goto $l2236;
            $l2235:;
            panda$core$Bit $tmp2239 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost2229.value), ((panda$core$Int64) best2211.value));
            $tmp2238 = $tmp2239;
            goto $l2237;
            $l2236:;
            $tmp2238 = ((panda$core$Bit) { false });
            goto $l2237;
            $l2237:;
            if ($tmp2238.value) {
            {
                panda$collections$Array$add$panda$collections$Array$T(result2208, ((panda$core$Object*) m2224));
            }
            }
        }
        goto $l2217;
        $l2218:;
    }
    panda$collections$Array$clear(p_methods);
    panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(p_methods, ((panda$collections$CollectionView*) result2208));
    return best2211;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$MethodRef* p_m, panda$collections$ListView* p_args) {
    panda$core$String* s2246;
    panda$collections$Array* finalArgs2271;
    org$pandalanguage$pandac$IRNode* selfNode2307;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2336;
    org$pandalanguage$pandac$IRNode* coerced2354;
    org$pandalanguage$pandac$IRNode* result2369;
    PANDA_ASSERT(p_m->value->resolved.value);
    panda$core$Int64 $tmp2240 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
    ITable* $tmp2241 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp2241->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2241 = $tmp2241->next;
    }
    $fn2243 $tmp2242 = $tmp2241->methods[0];
    panda$core$Int64 $tmp2244 = $tmp2242(((panda$collections$CollectionView*) p_args));
    panda$core$Bit $tmp2245 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp2240, $tmp2244);
    if ($tmp2245.value) {
    {
        panda$core$Int64 $tmp2247 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
        panda$core$Bit $tmp2248 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2247, ((panda$core$Int64) { 1 }));
        if ($tmp2248.value) {
        {
            s2246 = &$s2249;
        }
        }
        else {
        {
            s2246 = &$s2250;
        }
        }
        panda$core$String* $tmp2251 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(p_m->value);
        panda$core$String* $tmp2252 = panda$core$String$convert$R$panda$core$String($tmp2251);
        panda$core$String* $tmp2254 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2252, &$s2253);
        panda$core$Int64 $tmp2255 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
        panda$core$String* $tmp2256 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2254, ((panda$core$Object*) wrap_panda$core$Int64($tmp2255)));
        panda$core$String* $tmp2258 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2256, &$s2257);
        panda$core$String* $tmp2259 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2258, s2246);
        panda$core$String* $tmp2261 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2259, &$s2260);
        ITable* $tmp2263 = ((panda$collections$CollectionView*) p_args)->$class->itable;
        while ($tmp2263->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp2263 = $tmp2263->next;
        }
        $fn2265 $tmp2264 = $tmp2263->methods[0];
        panda$core$Int64 $tmp2266 = $tmp2264(((panda$collections$CollectionView*) p_args));
        panda$core$String* $tmp2267 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2262, ((panda$core$Object*) wrap_panda$core$Int64($tmp2266)));
        panda$core$String* $tmp2269 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2267, &$s2268);
        panda$core$String* $tmp2270 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2261, $tmp2269);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp2270);
        return NULL;
    }
    }
    panda$collections$Array* $tmp2272 = (panda$collections$Array*) malloc(40);
    $tmp2272->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2272->refCount.value = 1;
    panda$collections$Array$init($tmp2272);
    finalArgs2271 = $tmp2272;
    bool $tmp2275 = ((panda$core$Bit) { p_target != NULL }).value;
    if (!$tmp2275) goto $l2276;
    panda$core$Bit $tmp2277 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1038 }));
    $tmp2275 = $tmp2277.value;
    $l2276:;
    panda$core$Bit $tmp2278 = { $tmp2275 };
    bool $tmp2274 = $tmp2278.value;
    if (!$tmp2274) goto $l2279;
    panda$core$Bit $tmp2280 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->value->annotations);
    panda$core$Bit $tmp2281 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2280);
    $tmp2274 = $tmp2281.value;
    $l2279:;
    panda$core$Bit $tmp2282 = { $tmp2274 };
    if ($tmp2282.value) {
    {
        org$pandalanguage$pandac$Type* $tmp2283 = org$pandalanguage$pandac$MethodRef$owner$R$org$pandalanguage$pandac$Type(p_m);
        org$pandalanguage$pandac$IRNode* $tmp2284 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, p_target, p_position, ((panda$core$Bit) { false }), $tmp2283);
        panda$collections$Array$add$panda$collections$Array$T(finalArgs2271, ((panda$core$Object*) $tmp2284));
    }
    }
    panda$core$Bit $tmp2285 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->value->methodKind, ((panda$core$Int64) { 59 }));
    if ($tmp2285.value) {
    {
        if (((panda$core$Bit) { p_target == NULL }).value) {
        {
            panda$core$Object* $tmp2286 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
            panda$core$Bit $tmp2287 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp2286)->methodKind, ((panda$core$Int64) { 59 }));
            if ($tmp2287.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2288 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2288->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2288->refCount.value = 1;
                panda$core$Object* $tmp2290 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
                org$pandalanguage$pandac$Type* $tmp2291 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp2290));
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp2288, ((panda$core$Int64) { 1025 }), p_position, $tmp2291);
                panda$collections$Array$add$panda$collections$Array$T(finalArgs2271, ((panda$core$Object*) $tmp2288));
            }
            }
            else {
            {
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s2292);
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp2295 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1025 }));
        bool $tmp2294 = $tmp2295.value;
        if (!$tmp2294) goto $l2296;
        panda$core$Bit $tmp2297 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1024 }));
        $tmp2294 = $tmp2297.value;
        $l2296:;
        panda$core$Bit $tmp2298 = { $tmp2294 };
        bool $tmp2293 = $tmp2298.value;
        if (!$tmp2293) goto $l2299;
        panda$core$Bit $tmp2300 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1038 }));
        $tmp2293 = $tmp2300.value;
        $l2299:;
        panda$core$Bit $tmp2301 = { $tmp2293 };
        if ($tmp2301.value) {
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s2302);
        }
        }
        }
    }
    }
    else {
    panda$core$Bit $tmp2304 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(p_m->value);
    bool $tmp2303 = $tmp2304.value;
    if (!$tmp2303) goto $l2305;
    $tmp2303 = ((panda$core$Bit) { p_target == NULL }).value;
    $l2305:;
    panda$core$Bit $tmp2306 = { $tmp2303 };
    if ($tmp2306.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2308 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2308->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2308->refCount.value = 1;
        panda$core$Object* $tmp2310 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
        org$pandalanguage$pandac$Type* $tmp2311 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp2310));
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp2308, ((panda$core$Int64) { 1025 }), p_position, $tmp2311);
        selfNode2307 = $tmp2308;
        org$pandalanguage$pandac$Type* $tmp2312 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->value->owner);
        org$pandalanguage$pandac$IRNode* $tmp2313 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, selfNode2307, $tmp2312);
        selfNode2307 = $tmp2313;
        PANDA_ASSERT(((panda$core$Bit) { selfNode2307 != NULL }).value);
        panda$collections$Array$add$panda$collections$Array$T(finalArgs2271, ((panda$core$Object*) selfNode2307));
        panda$core$Object* $tmp2314 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
        panda$core$Bit $tmp2315 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp2314));
        panda$core$Bit $tmp2316 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2315);
        if ($tmp2316.value) {
        {
            panda$core$String* $tmp2318 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(p_m->value);
            panda$core$String* $tmp2319 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2317, $tmp2318);
            panda$core$String* $tmp2321 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2319, &$s2320);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp2321);
        }
        }
    }
    }
    else {
    panda$core$Bit $tmp2324 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(p_m->value);
    panda$core$Bit $tmp2325 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2324);
    bool $tmp2323 = $tmp2325.value;
    if (!$tmp2323) goto $l2326;
    $tmp2323 = ((panda$core$Bit) { p_target != NULL }).value;
    $l2326:;
    panda$core$Bit $tmp2327 = { $tmp2323 };
    bool $tmp2322 = $tmp2327.value;
    if (!$tmp2322) goto $l2328;
    panda$core$Bit $tmp2329 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1001 }));
    $tmp2322 = $tmp2329.value;
    $l2328:;
    panda$core$Bit $tmp2330 = { $tmp2322 };
    if ($tmp2330.value) {
    {
        panda$core$String* $tmp2332 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(p_m->value);
        panda$core$String* $tmp2333 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2331, $tmp2332);
        panda$core$String* $tmp2335 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2333, &$s2334);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp2335);
    }
    }
    }
    }
    ITable* $tmp2337 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp2337->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2337 = $tmp2337->next;
    }
    $fn2339 $tmp2338 = $tmp2337->methods[0];
    panda$core$Int64 $tmp2340 = $tmp2338(((panda$collections$CollectionView*) p_args));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2336, ((panda$core$Int64) { 0 }), $tmp2340, ((panda$core$Bit) { false }));
    int64_t $tmp2342 = $tmp2336.min.value;
    panda$core$Int64 i2341 = { $tmp2342 };
    int64_t $tmp2344 = $tmp2336.max.value;
    bool $tmp2345 = $tmp2336.inclusive.value;
    if ($tmp2345) goto $l2352; else goto $l2353;
    $l2352:;
    if ($tmp2342 <= $tmp2344) goto $l2346; else goto $l2348;
    $l2353:;
    if ($tmp2342 < $tmp2344) goto $l2346; else goto $l2348;
    $l2346:;
    {
        ITable* $tmp2355 = p_args->$class->itable;
        while ($tmp2355->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2355 = $tmp2355->next;
        }
        $fn2357 $tmp2356 = $tmp2355->methods[0];
        panda$core$Object* $tmp2358 = $tmp2356(p_args, i2341);
        org$pandalanguage$pandac$Type* $tmp2359 = org$pandalanguage$pandac$MethodRef$parameter$panda$core$Int64$R$org$pandalanguage$pandac$Type(p_m, i2341);
        org$pandalanguage$pandac$IRNode* $tmp2360 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp2358), $tmp2359);
        coerced2354 = $tmp2360;
        if (((panda$core$Bit) { coerced2354 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Object* $tmp2361 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->value->parameters, i2341);
        org$pandalanguage$pandac$IRNode* $tmp2362 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, coerced2354, p_position, ((panda$core$Bit) { false }), ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp2361)->type);
        coerced2354 = $tmp2362;
        if (((panda$core$Bit) { coerced2354 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(finalArgs2271, ((panda$core$Object*) coerced2354));
    }
    $l2349:;
    int64_t $tmp2364 = $tmp2344 - i2341.value;
    if ($tmp2345) goto $l2365; else goto $l2366;
    $l2365:;
    if ($tmp2364 >= 1) goto $l2363; else goto $l2348;
    $l2366:;
    if ($tmp2364 > 1) goto $l2363; else goto $l2348;
    $l2363:;
    i2341.value += 1;
    goto $l2346;
    $l2348:;
    panda$core$Bit $tmp2371 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_m->value->owner)->name, &$s2370);
    if ($tmp2371.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2372 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2372->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2372->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp2374 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(p_m);
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2372, ((panda$core$Int64) { 1005 }), p_position, $tmp2374, ((panda$core$Object*) p_m), ((panda$collections$ListView*) finalArgs2271));
        result2369 = $tmp2372;
    }
    }
    else {
    {
        org$pandalanguage$pandac$IRNode* $tmp2375 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2375->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2375->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2375, ((panda$core$Int64) { 1005 }), p_position, p_m->value->returnType, ((panda$core$Object*) p_m), ((panda$collections$ListView*) finalArgs2271));
        result2369 = $tmp2375;
        org$pandalanguage$pandac$Type* $tmp2377 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(p_m);
        org$pandalanguage$pandac$IRNode* $tmp2378 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, result2369, p_position, ((panda$core$Bit) { false }), $tmp2377);
        result2369 = $tmp2378;
    }
    }
    return result2369;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_target, panda$core$String* p_name, panda$collections$ListView* p_args) {
    org$pandalanguage$pandac$IRNode* $tmp2379 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_target, p_name, p_args, NULL);
    return $tmp2379;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_target, panda$core$String* p_name, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedType) {
    org$pandalanguage$pandac$IRNode* resolved2380;
    org$pandalanguage$pandac$ClassDecl* cl2382;
    org$pandalanguage$pandac$Symbol* s2392;
    org$pandalanguage$pandac$IRNode* ref2414;
    org$pandalanguage$pandac$IRNode* $tmp2381 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_target);
    resolved2380 = $tmp2381;
    if (((panda$core$Bit) { resolved2380 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp2383 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(resolved2380->kind, ((panda$core$Int64) { 1001 }));
    if ($tmp2383.value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp2384 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Type*) resolved2380->payload));
        cl2382 = $tmp2384;
    }
    }
    else {
    {
        panda$core$Bit $tmp2385 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(resolved2380->type);
        panda$core$Bit $tmp2386 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2385);
        if ($tmp2386.value) {
        {
            panda$core$String* $tmp2388 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2387, ((panda$core$Object*) resolved2380->type));
            panda$core$String* $tmp2390 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2388, &$s2389);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_target->position, $tmp2390);
            return NULL;
        }
        }
        org$pandalanguage$pandac$ClassDecl* $tmp2391 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, resolved2380->type);
        cl2382 = $tmp2391;
    }
    }
    if (((panda$core$Bit) { cl2382 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp2393 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl2382);
    org$pandalanguage$pandac$Symbol* $tmp2394 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp2393, p_name);
    s2392 = $tmp2394;
    if (((panda$core$Bit) { s2392 == NULL }).value) {
    {
        panda$core$String* $tmp2396 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2395, ((org$pandalanguage$pandac$Symbol*) cl2382)->name);
        panda$core$String* $tmp2398 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2396, &$s2397);
        panda$core$String* $tmp2399 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2398, p_name);
        panda$core$String* $tmp2401 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2399, &$s2400);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_target->position, $tmp2401);
        return NULL;
    }
    }
    panda$core$Bit $tmp2403 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(s2392->kind, ((panda$core$Int64) { 204 }));
    bool $tmp2402 = $tmp2403.value;
    if (!$tmp2402) goto $l2404;
    panda$core$Bit $tmp2405 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(s2392->kind, ((panda$core$Int64) { 205 }));
    $tmp2402 = $tmp2405.value;
    $l2404:;
    panda$core$Bit $tmp2406 = { $tmp2402 };
    if ($tmp2406.value) {
    {
        panda$core$String* $tmp2408 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2407, ((org$pandalanguage$pandac$Symbol*) cl2382)->name);
        panda$core$String* $tmp2410 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2408, &$s2409);
        panda$core$String* $tmp2411 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2410, p_name);
        panda$core$String* $tmp2413 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2411, &$s2412);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_target->position, $tmp2413);
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp2415 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl2382);
    org$pandalanguage$pandac$IRNode* $tmp2416 = org$pandalanguage$pandac$Compiler$symbolRef$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q(self, p_target->position, p_target, s2392, $tmp2415);
    ref2414 = $tmp2416;
    if (((panda$core$Bit) { ref2414 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp2417 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, ref2414, p_args, p_expectedType);
    return $tmp2417;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_m, panda$collections$ListView* p_args) {
    org$pandalanguage$pandac$IRNode* $tmp2418 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_m, p_args, NULL);
    return $tmp2418;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_m, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedType) {
    org$pandalanguage$pandac$IRNode* target2419;
    panda$collections$Array* methods2426;
    org$pandalanguage$pandac$MethodDecl* first2431;
    panda$core$MutableString* msg2436;
    panda$core$String* separator2447;
    panda$collections$Iterator* a$Iter2449;
    org$pandalanguage$pandac$IRNode* a2461;
    org$pandalanguage$pandac$IRNode* target2475;
    panda$collections$Array* children2483;
    panda$collections$Array* types2489;
    panda$collections$Iterator* m$Iter2492;
    org$pandalanguage$pandac$MethodRef* m2504;
    org$pandalanguage$pandac$IRNode* target2514;
    org$pandalanguage$pandac$IRNode* initCall2517;
    panda$collections$Array* children2521;
    org$pandalanguage$pandac$IRNode* resolved2526;
    switch (p_m->kind.value) {
        case 1002:
        {
            panda$core$Int64 $tmp2420 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
            panda$core$Bit $tmp2421 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2420, ((panda$core$Int64) { 0 }));
            if ($tmp2421.value) {
            {
                target2419 = NULL;
            }
            }
            else {
            {
                panda$core$Int64 $tmp2422 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
                panda$core$Bit $tmp2423 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2422, ((panda$core$Int64) { 1 }));
                PANDA_ASSERT($tmp2423.value);
                panda$core$Object* $tmp2424 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 0 }));
                target2419 = ((org$pandalanguage$pandac$IRNode*) $tmp2424);
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp2425 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, p_m->position, target2419, ((org$pandalanguage$pandac$MethodRef*) p_m->payload), p_args);
            return $tmp2425;
        }
        break;
        case 1003:
        {
            panda$collections$Array* $tmp2427 = (panda$collections$Array*) malloc(40);
            $tmp2427->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2427->refCount.value = 1;
            panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp2427, ((panda$collections$ListView*) p_m->payload));
            methods2426 = $tmp2427;
            org$pandalanguage$pandac$Compiler$matchMethods$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(self, methods2426, p_args, p_expectedType);
            panda$core$Int64 $tmp2429 = panda$collections$Array$get_count$R$panda$core$Int64(methods2426);
            panda$core$Bit $tmp2430 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2429, ((panda$core$Int64) { 0 }));
            if ($tmp2430.value) {
            {
                ITable* $tmp2432 = ((panda$collections$ListView*) p_m->payload)->$class->itable;
                while ($tmp2432->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp2432 = $tmp2432->next;
                }
                $fn2434 $tmp2433 = $tmp2432->methods[0];
                panda$core$Object* $tmp2435 = $tmp2433(((panda$collections$ListView*) p_m->payload), ((panda$core$Int64) { 0 }));
                first2431 = ((org$pandalanguage$pandac$MethodRef*) $tmp2435)->value;
                panda$core$MutableString* $tmp2437 = (panda$core$MutableString*) malloc(48);
                $tmp2437->$class = (panda$core$Class*) &panda$core$MutableString$class;
                $tmp2437->refCount.value = 1;
                panda$core$String* $tmp2440 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2439, ((org$pandalanguage$pandac$Symbol*) first2431->owner)->name);
                panda$core$String* $tmp2442 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2440, &$s2441);
                panda$core$String* $tmp2443 = panda$core$String$convert$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) first2431)->name);
                panda$core$String* $tmp2445 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2443, &$s2444);
                panda$core$String* $tmp2446 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2442, $tmp2445);
                panda$core$MutableString$init$panda$core$String($tmp2437, $tmp2446);
                msg2436 = $tmp2437;
                separator2447 = &$s2448;
                {
                    ITable* $tmp2450 = ((panda$collections$Iterable*) p_args)->$class->itable;
                    while ($tmp2450->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp2450 = $tmp2450->next;
                    }
                    $fn2452 $tmp2451 = $tmp2450->methods[0];
                    panda$collections$Iterator* $tmp2453 = $tmp2451(((panda$collections$Iterable*) p_args));
                    a$Iter2449 = $tmp2453;
                    $l2454:;
                    ITable* $tmp2456 = a$Iter2449->$class->itable;
                    while ($tmp2456->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp2456 = $tmp2456->next;
                    }
                    $fn2458 $tmp2457 = $tmp2456->methods[0];
                    panda$core$Bit $tmp2459 = $tmp2457(a$Iter2449);
                    panda$core$Bit $tmp2460 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2459);
                    if (!$tmp2460.value) goto $l2455;
                    {
                        ITable* $tmp2462 = a$Iter2449->$class->itable;
                        while ($tmp2462->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2462 = $tmp2462->next;
                        }
                        $fn2464 $tmp2463 = $tmp2462->methods[1];
                        panda$core$Object* $tmp2465 = $tmp2463(a$Iter2449);
                        a2461 = ((org$pandalanguage$pandac$IRNode*) $tmp2465);
                        panda$core$MutableString$append$panda$core$String(msg2436, separator2447);
                        panda$core$MutableString$append$panda$core$Object(msg2436, ((panda$core$Object*) a2461->type));
                        separator2447 = &$s2466;
                    }
                    goto $l2454;
                    $l2455:;
                }
                panda$core$MutableString$append$panda$core$String(msg2436, &$s2467);
                if (((panda$core$Bit) { p_expectedType != NULL }).value) {
                {
                    panda$core$String* $tmp2469 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2468, ((panda$core$Object*) p_expectedType));
                    panda$core$String* $tmp2471 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2469, &$s2470);
                    panda$core$MutableString$append$panda$core$String(msg2436, $tmp2471);
                }
                }
                panda$core$String* $tmp2472 = panda$core$MutableString$finish$R$panda$core$String(msg2436);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_m->position, $tmp2472);
                return NULL;
            }
            }
            panda$core$Int64 $tmp2473 = panda$collections$Array$get_count$R$panda$core$Int64(methods2426);
            panda$core$Bit $tmp2474 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2473, ((panda$core$Int64) { 1 }));
            if ($tmp2474.value) {
            {
                panda$core$Int64 $tmp2476 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
                panda$core$Bit $tmp2477 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2476, ((panda$core$Int64) { 1 }));
                if ($tmp2477.value) {
                {
                    panda$core$Object* $tmp2478 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 0 }));
                    target2475 = ((org$pandalanguage$pandac$IRNode*) $tmp2478);
                }
                }
                else {
                {
                    panda$core$Int64 $tmp2479 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
                    panda$core$Bit $tmp2480 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2479, ((panda$core$Int64) { 0 }));
                    PANDA_ASSERT($tmp2480.value);
                    target2475 = NULL;
                }
                }
                panda$core$Object* $tmp2481 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(methods2426, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$IRNode* $tmp2482 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, p_m->position, target2475, ((org$pandalanguage$pandac$MethodRef*) $tmp2481), p_args);
                return $tmp2482;
            }
            }
            panda$collections$Array* $tmp2484 = (panda$collections$Array*) malloc(40);
            $tmp2484->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2484->refCount.value = 1;
            panda$collections$Array$init($tmp2484);
            children2483 = $tmp2484;
            org$pandalanguage$pandac$IRNode* $tmp2486 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2486->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2486->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2488 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2486, ((panda$core$Int64) { 1003 }), p_m->position, $tmp2488, ((panda$core$Object*) methods2426), ((panda$collections$ListView*) p_m->children));
            panda$collections$Array$add$panda$collections$Array$T(children2483, ((panda$core$Object*) $tmp2486));
            panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(children2483, ((panda$collections$CollectionView*) p_args));
            panda$collections$Array* $tmp2490 = (panda$collections$Array*) malloc(40);
            $tmp2490->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2490->refCount.value = 1;
            panda$collections$Array$init($tmp2490);
            types2489 = $tmp2490;
            {
                ITable* $tmp2493 = ((panda$collections$Iterable*) methods2426)->$class->itable;
                while ($tmp2493->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp2493 = $tmp2493->next;
                }
                $fn2495 $tmp2494 = $tmp2493->methods[0];
                panda$collections$Iterator* $tmp2496 = $tmp2494(((panda$collections$Iterable*) methods2426));
                m$Iter2492 = $tmp2496;
                $l2497:;
                ITable* $tmp2499 = m$Iter2492->$class->itable;
                while ($tmp2499->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp2499 = $tmp2499->next;
                }
                $fn2501 $tmp2500 = $tmp2499->methods[0];
                panda$core$Bit $tmp2502 = $tmp2500(m$Iter2492);
                panda$core$Bit $tmp2503 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2502);
                if (!$tmp2503.value) goto $l2498;
                {
                    ITable* $tmp2505 = m$Iter2492->$class->itable;
                    while ($tmp2505->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp2505 = $tmp2505->next;
                    }
                    $fn2507 $tmp2506 = $tmp2505->methods[1];
                    panda$core$Object* $tmp2508 = $tmp2506(m$Iter2492);
                    m2504 = ((org$pandalanguage$pandac$MethodRef*) $tmp2508);
                    org$pandalanguage$pandac$Type* $tmp2509 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m2504);
                    panda$collections$Array$add$panda$collections$Array$T(types2489, ((panda$core$Object*) $tmp2509));
                }
                goto $l2497;
                $l2498:;
            }
            org$pandalanguage$pandac$IRNode* $tmp2510 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2510->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2510->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2512 = (org$pandalanguage$pandac$Type*) malloc(96);
            $tmp2512->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp2512->refCount.value = 1;
            org$pandalanguage$pandac$Type$init$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp2512, ((panda$collections$ListView*) types2489));
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2510, ((panda$core$Int64) { 1039 }), p_m->position, $tmp2512, ((panda$collections$ListView*) children2483));
            return $tmp2510;
        }
        break;
        case 1001:
        {
            org$pandalanguage$pandac$IRNode* $tmp2515 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2515->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2515->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp2515, ((panda$core$Int64) { 1038 }), p_m->position, ((org$pandalanguage$pandac$Type*) p_m->payload));
            target2514 = $tmp2515;
            org$pandalanguage$pandac$IRNode* $tmp2519 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target2514, &$s2518, p_args);
            org$pandalanguage$pandac$IRNode* $tmp2520 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp2519);
            initCall2517 = $tmp2520;
            if (((panda$core$Bit) { initCall2517 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp2522 = (panda$collections$Array*) malloc(40);
            $tmp2522->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2522->refCount.value = 1;
            panda$collections$Array$init($tmp2522);
            children2521 = $tmp2522;
            panda$collections$Array$add$panda$collections$Array$T(children2521, ((panda$core$Object*) initCall2517));
            org$pandalanguage$pandac$IRNode* $tmp2524 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2524->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2524->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2524, ((panda$core$Int64) { 1010 }), p_m->position, ((org$pandalanguage$pandac$Type*) p_m->payload), ((panda$collections$ListView*) children2521));
            return $tmp2524;
        }
        break;
        default:
        {
            org$pandalanguage$pandac$IRNode* $tmp2527 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_m);
            resolved2526 = $tmp2527;
            if (((panda$core$Bit) { resolved2526 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$String* $tmp2529 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2528, ((panda$core$Object*) resolved2526->type));
            panda$core$String* $tmp2531 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2529, &$s2530);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, resolved2526->position, $tmp2531);
        }
    }
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$collections$Array* subtypes2532;
    panda$core$MutableString* typeName2535;
    panda$core$String* separator2539;
    panda$collections$Iterator* p$Iter2541;
    org$pandalanguage$pandac$MethodDecl$Parameter* p2553;
    panda$core$Int64 kind2559;
    panda$core$Char8 $tmp2565;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
    panda$collections$Array* $tmp2533 = (panda$collections$Array*) malloc(40);
    $tmp2533->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2533->refCount.value = 1;
    panda$collections$Array$init($tmp2533);
    subtypes2532 = $tmp2533;
    panda$core$MutableString* $tmp2536 = (panda$core$MutableString*) malloc(48);
    $tmp2536->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp2536->refCount.value = 1;
    panda$core$MutableString$init$panda$core$String($tmp2536, &$s2538);
    typeName2535 = $tmp2536;
    separator2539 = &$s2540;
    {
        ITable* $tmp2542 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp2542->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2542 = $tmp2542->next;
        }
        $fn2544 $tmp2543 = $tmp2542->methods[0];
        panda$collections$Iterator* $tmp2545 = $tmp2543(((panda$collections$Iterable*) p_m->parameters));
        p$Iter2541 = $tmp2545;
        $l2546:;
        ITable* $tmp2548 = p$Iter2541->$class->itable;
        while ($tmp2548->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2548 = $tmp2548->next;
        }
        $fn2550 $tmp2549 = $tmp2548->methods[0];
        panda$core$Bit $tmp2551 = $tmp2549(p$Iter2541);
        panda$core$Bit $tmp2552 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2551);
        if (!$tmp2552.value) goto $l2547;
        {
            ITable* $tmp2554 = p$Iter2541->$class->itable;
            while ($tmp2554->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2554 = $tmp2554->next;
            }
            $fn2556 $tmp2555 = $tmp2554->methods[1];
            panda$core$Object* $tmp2557 = $tmp2555(p$Iter2541);
            p2553 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp2557);
            panda$core$MutableString$append$panda$core$String(typeName2535, separator2539);
            panda$core$MutableString$append$panda$core$String(typeName2535, ((org$pandalanguage$pandac$Symbol*) p2553->type)->name);
            panda$collections$Array$add$panda$collections$Array$T(subtypes2532, ((panda$core$Object*) p2553->type));
            separator2539 = &$s2558;
        }
        goto $l2546;
        $l2547:;
    }
    panda$core$Bit $tmp2560 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 58 }));
    if ($tmp2560.value) {
    {
        panda$core$MutableString$append$panda$core$String(typeName2535, &$s2561);
        kind2559 = ((panda$core$Int64) { 24 });
    }
    }
    else {
    {
        panda$core$MutableString$append$panda$core$String(typeName2535, &$s2562);
        kind2559 = ((panda$core$Int64) { 25 });
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(subtypes2532, ((panda$core$Object*) p_m->returnType));
    org$pandalanguage$pandac$Type* $tmp2563 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2564 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp2563);
    if ($tmp2564.value) {
    {
        panda$core$MutableString$append$panda$core$String(typeName2535, ((org$pandalanguage$pandac$Symbol*) p_m->returnType)->name);
    }
    }
    panda$core$Char8$init$panda$core$UInt8(&$tmp2565, ((panda$core$UInt8) { 41 }));
    panda$core$MutableString$append$panda$core$Char8(typeName2535, $tmp2565);
    org$pandalanguage$pandac$Type* $tmp2566 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp2566->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp2566->refCount.value = 1;
    panda$core$String* $tmp2568 = panda$core$MutableString$finish$R$panda$core$String(typeName2535);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp2566, $tmp2568, kind2559, ((org$pandalanguage$pandac$Symbol*) p_m)->position, ((panda$collections$ListView*) subtypes2532), ((panda$core$Bit) { true }));
    return $tmp2566;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$declaredTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m, org$pandalanguage$pandac$Type* p_selfType) {
    panda$collections$Array* subtypes2569;
    panda$core$MutableString* typeName2572;
    panda$collections$Iterator* p$Iter2576;
    org$pandalanguage$pandac$MethodDecl$Parameter* p2588;
    panda$core$Int64 kind2594;
    panda$core$Char8 $tmp2600;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
    panda$collections$Array* $tmp2570 = (panda$collections$Array*) malloc(40);
    $tmp2570->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2570->refCount.value = 1;
    panda$collections$Array$init($tmp2570);
    subtypes2569 = $tmp2570;
    panda$core$MutableString* $tmp2573 = (panda$core$MutableString*) malloc(48);
    $tmp2573->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp2573->refCount.value = 1;
    panda$core$MutableString$init$panda$core$String($tmp2573, &$s2575);
    typeName2572 = $tmp2573;
    panda$core$MutableString$append$panda$core$String(typeName2572, ((org$pandalanguage$pandac$Symbol*) p_selfType)->name);
    panda$collections$Array$add$panda$collections$Array$T(subtypes2569, ((panda$core$Object*) p_selfType));
    {
        ITable* $tmp2577 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp2577->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2577 = $tmp2577->next;
        }
        $fn2579 $tmp2578 = $tmp2577->methods[0];
        panda$collections$Iterator* $tmp2580 = $tmp2578(((panda$collections$Iterable*) p_m->parameters));
        p$Iter2576 = $tmp2580;
        $l2581:;
        ITable* $tmp2583 = p$Iter2576->$class->itable;
        while ($tmp2583->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2583 = $tmp2583->next;
        }
        $fn2585 $tmp2584 = $tmp2583->methods[0];
        panda$core$Bit $tmp2586 = $tmp2584(p$Iter2576);
        panda$core$Bit $tmp2587 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2586);
        if (!$tmp2587.value) goto $l2582;
        {
            ITable* $tmp2589 = p$Iter2576->$class->itable;
            while ($tmp2589->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2589 = $tmp2589->next;
            }
            $fn2591 $tmp2590 = $tmp2589->methods[1];
            panda$core$Object* $tmp2592 = $tmp2590(p$Iter2576);
            p2588 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp2592);
            panda$core$MutableString$append$panda$core$String(typeName2572, &$s2593);
            panda$core$MutableString$append$panda$core$String(typeName2572, ((org$pandalanguage$pandac$Symbol*) p2588->type)->name);
            panda$collections$Array$add$panda$collections$Array$T(subtypes2569, ((panda$core$Object*) p2588->type));
        }
        goto $l2581;
        $l2582:;
    }
    panda$core$Bit $tmp2595 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 58 }));
    if ($tmp2595.value) {
    {
        panda$core$MutableString$append$panda$core$String(typeName2572, &$s2596);
        kind2594 = ((panda$core$Int64) { 24 });
    }
    }
    else {
    {
        panda$core$MutableString$append$panda$core$String(typeName2572, &$s2597);
        kind2594 = ((panda$core$Int64) { 25 });
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(subtypes2569, ((panda$core$Object*) p_m->returnType));
    org$pandalanguage$pandac$Type* $tmp2598 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2599 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp2598);
    if ($tmp2599.value) {
    {
        panda$core$MutableString$append$panda$core$String(typeName2572, ((org$pandalanguage$pandac$Symbol*) p_m->returnType)->name);
    }
    }
    panda$core$Char8$init$panda$core$UInt8(&$tmp2600, ((panda$core$UInt8) { 41 }));
    panda$core$MutableString$append$panda$core$Char8(typeName2572, $tmp2600);
    org$pandalanguage$pandac$Type* $tmp2601 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp2601->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp2601->refCount.value = 1;
    panda$core$String* $tmp2603 = panda$core$MutableString$finish$R$panda$core$String(typeName2572);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp2601, $tmp2603, kind2594, ((org$pandalanguage$pandac$Symbol*) p_m)->position, ((panda$collections$ListView*) subtypes2569), ((panda$core$Bit) { true }));
    return $tmp2601;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$MethodDecl* inherited2604;
    org$pandalanguage$pandac$MethodDecl* $tmp2605 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(self, p_m);
    inherited2604 = $tmp2605;
    if (((panda$core$Bit) { inherited2604 == NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp2606 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, p_m);
        return $tmp2606;
    }
    }
    org$pandalanguage$pandac$Type* $tmp2607 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, inherited2604);
    return $tmp2607;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$Type* $tmp2608 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    org$pandalanguage$pandac$Type* $tmp2609 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_m, $tmp2608);
    return $tmp2609;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m, org$pandalanguage$pandac$Type* p_selfType) {
    org$pandalanguage$pandac$MethodDecl* inherited2610;
    org$pandalanguage$pandac$MethodDecl* $tmp2611 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(self, p_m);
    inherited2610 = $tmp2611;
    if (((panda$core$Bit) { inherited2610 == NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp2612 = org$pandalanguage$pandac$Compiler$declaredTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_m, p_selfType);
        return $tmp2612;
    }
    }
    org$pandalanguage$pandac$Type* $tmp2613 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, inherited2610, p_selfType);
    return $tmp2613;
}
panda$core$String* org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(panda$core$Int64 p_op) {
    switch (p_op.value) {
        case 51:
        {
            return &$s2614;
        }
        break;
        case 52:
        {
            return &$s2615;
        }
        break;
        case 53:
        {
            return &$s2616;
        }
        break;
        case 54:
        {
            return &$s2617;
        }
        break;
        case 55:
        {
            return &$s2618;
        }
        break;
        case 56:
        {
            return &$s2619;
        }
        break;
        case 57:
        {
            return &$s2620;
        }
        break;
        case 58:
        {
            return &$s2621;
        }
        break;
        case 59:
        {
            return &$s2622;
        }
        break;
        case 63:
        {
            return &$s2623;
        }
        break;
        case 62:
        {
            return &$s2624;
        }
        break;
        case 65:
        {
            return &$s2625;
        }
        break;
        case 64:
        {
            return &$s2626;
        }
        break;
        case 68:
        {
            return &$s2627;
        }
        break;
        case 69:
        {
            return &$s2628;
        }
        break;
        case 66:
        {
            return &$s2629;
        }
        break;
        case 67:
        {
            return &$s2630;
        }
        break;
        case 70:
        {
            return &$s2631;
        }
        break;
        case 71:
        {
            return &$s2632;
        }
        break;
        case 49:
        {
            return &$s2633;
        }
        break;
        case 50:
        {
            return &$s2634;
        }
        break;
        case 72:
        {
            return &$s2635;
        }
        break;
        case 1:
        {
            return &$s2636;
        }
        break;
        case 101:
        {
            return &$s2637;
        }
        break;
        case 73:
        {
            return &$s2638;
        }
        break;
        case 60:
        {
            return &$s2639;
        }
        break;
        case 61:
        {
            return &$s2640;
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
            panda$core$Int64 $tmp2641 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_expr->children);
            panda$core$Bit $tmp2642 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2641, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp2642.value);
            panda$core$Bit $tmp2643 = panda$core$Bit$$NOT$R$panda$core$Bit(((panda$core$Bit$wrapper*) p_expr->payload)->value);
            if ($tmp2643.value) {
            {
                panda$core$Object* $tmp2644 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Bit $tmp2645 = org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp2644));
                return $tmp2645;
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
            panda$core$Object* $tmp2646 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp2647 = org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp2646));
            return $tmp2647;
        }
        break;
        default:
        {
            return ((panda$core$Bit) { false });
        }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$foldInts$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_left, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_right) {
    panda$core$Int64 l2673;
    panda$core$Int64 r2675;
    panda$core$UInt64 v2677;
    panda$core$UInt64 v2683;
    panda$core$UInt64 v2689;
    panda$core$UInt64 v2695;
    panda$core$UInt64 v2701;
    panda$core$UInt64 v2731;
    panda$core$UInt64 v2737;
    panda$core$UInt64 v2743;
    panda$core$UInt64 v2749;
    panda$core$UInt64 v2755;
    panda$core$Bit $tmp2649 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_left->kind, ((panda$core$Int64) { 1004 }));
    bool $tmp2648 = $tmp2649.value;
    if ($tmp2648) goto $l2650;
    panda$core$Bit $tmp2651 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_left->kind, ((panda$core$Int64) { 1032 }));
    $tmp2648 = $tmp2651.value;
    $l2650:;
    panda$core$Bit $tmp2652 = { $tmp2648 };
    PANDA_ASSERT($tmp2652.value);
    panda$core$Bit $tmp2654 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_right->kind, ((panda$core$Int64) { 1004 }));
    bool $tmp2653 = $tmp2654.value;
    if ($tmp2653) goto $l2655;
    panda$core$Bit $tmp2656 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_right->kind, ((panda$core$Int64) { 1032 }));
    $tmp2653 = $tmp2656.value;
    $l2655:;
    panda$core$Bit $tmp2657 = { $tmp2653 };
    PANDA_ASSERT($tmp2657.value);
    panda$core$Bit $tmp2660 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_left->kind, ((panda$core$Int64) { 1032 }));
    bool $tmp2659 = $tmp2660.value;
    if ($tmp2659) goto $l2661;
    panda$core$UInt64 $tmp2663 = panda$core$Int64$convert$R$panda$core$UInt64(((panda$core$Int64) { 9223372036854775807 }));
    panda$core$Bit $tmp2664 = panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p_left->payload)->value, $tmp2663);
    bool $tmp2662 = $tmp2664.value;
    if (!$tmp2662) goto $l2665;
    panda$core$Bit $tmp2666 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_right->kind, ((panda$core$Int64) { 1032 }));
    $tmp2662 = $tmp2666.value;
    $l2665:;
    panda$core$Bit $tmp2667 = { $tmp2662 };
    $tmp2659 = $tmp2667.value;
    $l2661:;
    panda$core$Bit $tmp2668 = { $tmp2659 };
    bool $tmp2658 = $tmp2668.value;
    if ($tmp2658) goto $l2669;
    panda$core$UInt64 $tmp2670 = panda$core$Int64$convert$R$panda$core$UInt64(((panda$core$Int64) { 9223372036854775807 }));
    panda$core$Bit $tmp2671 = panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p_right->payload)->value, $tmp2670);
    $tmp2658 = $tmp2671.value;
    $l2669:;
    panda$core$Bit $tmp2672 = { $tmp2658 };
    if ($tmp2672.value) {
    {
        panda$core$Int64 $tmp2674 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_left->payload)->value);
        l2673 = $tmp2674;
        panda$core$Int64 $tmp2676 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_right->payload)->value);
        r2675 = $tmp2676;
        switch (p_op.value) {
            case 51:
            {
                panda$core$Int64 $tmp2678 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(l2673, r2675);
                panda$core$UInt64 $tmp2679 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2678);
                v2677 = $tmp2679;
                org$pandalanguage$pandac$IRNode* $tmp2680 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2680->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2680->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2682 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(v2677);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2680, ((panda$core$Int64) { 1004 }), p_position, $tmp2682, v2677);
                return $tmp2680;
            }
            break;
            case 52:
            {
                panda$core$Int64 $tmp2684 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(l2673, r2675);
                panda$core$UInt64 $tmp2685 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2684);
                v2683 = $tmp2685;
                org$pandalanguage$pandac$IRNode* $tmp2686 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2686->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2686->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2688 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(v2683);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2686, ((panda$core$Int64) { 1004 }), p_position, $tmp2688, v2683);
                return $tmp2686;
            }
            break;
            case 53:
            {
                panda$core$Int64 $tmp2690 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(l2673, r2675);
                panda$core$UInt64 $tmp2691 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2690);
                v2689 = $tmp2691;
                org$pandalanguage$pandac$IRNode* $tmp2692 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2692->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2692->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2694 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(v2689);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2692, ((panda$core$Int64) { 1004 }), p_position, $tmp2694, v2689);
                return $tmp2692;
            }
            break;
            case 55:
            {
                panda$core$Int64 $tmp2696 = panda$core$Int64$$INTDIV$panda$core$Int64$R$panda$core$Int64(l2673, r2675);
                panda$core$UInt64 $tmp2697 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2696);
                v2695 = $tmp2697;
                org$pandalanguage$pandac$IRNode* $tmp2698 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2698->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2698->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2700 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(v2695);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2698, ((panda$core$Int64) { 1004 }), p_position, $tmp2700, v2695);
                return $tmp2698;
            }
            break;
            case 56:
            {
                panda$core$Int64 $tmp2702 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(l2673, r2675);
                panda$core$UInt64 $tmp2703 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2702);
                v2701 = $tmp2703;
                org$pandalanguage$pandac$IRNode* $tmp2704 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2704->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2704->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2706 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(v2701);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2704, ((panda$core$Int64) { 1004 }), p_position, $tmp2706, v2701);
                return $tmp2704;
            }
            break;
            case 58:
            {
                org$pandalanguage$pandac$IRNode* $tmp2707 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2707->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2707->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2709 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2710 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(l2673, r2675);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2707, ((panda$core$Int64) { 1011 }), p_position, $tmp2709, $tmp2710);
                return $tmp2707;
            }
            break;
            case 59:
            {
                org$pandalanguage$pandac$IRNode* $tmp2711 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2711->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2711->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2713 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2714 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(l2673, r2675);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2711, ((panda$core$Int64) { 1011 }), p_position, $tmp2713, $tmp2714);
                return $tmp2711;
            }
            break;
            case 62:
            {
                org$pandalanguage$pandac$IRNode* $tmp2715 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2715->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2715->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2717 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2718 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(l2673, r2675);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2715, ((panda$core$Int64) { 1011 }), p_position, $tmp2717, $tmp2718);
                return $tmp2715;
            }
            break;
            case 63:
            {
                org$pandalanguage$pandac$IRNode* $tmp2719 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2719->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2719->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2721 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2722 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(l2673, r2675);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2719, ((panda$core$Int64) { 1011 }), p_position, $tmp2721, $tmp2722);
                return $tmp2719;
            }
            break;
            case 64:
            {
                org$pandalanguage$pandac$IRNode* $tmp2723 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2723->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2723->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2725 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2726 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(l2673, r2675);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2723, ((panda$core$Int64) { 1011 }), p_position, $tmp2725, $tmp2726);
                return $tmp2723;
            }
            break;
            case 65:
            {
                org$pandalanguage$pandac$IRNode* $tmp2727 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2727->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2727->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2729 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2730 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(l2673, r2675);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2727, ((panda$core$Int64) { 1011 }), p_position, $tmp2729, $tmp2730);
                return $tmp2727;
            }
            break;
            case 67:
            {
                panda$core$Int64 $tmp2732 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(l2673, r2675);
                panda$core$UInt64 $tmp2733 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2732);
                v2731 = $tmp2733;
                org$pandalanguage$pandac$IRNode* $tmp2734 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2734->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2734->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2736 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(v2731);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2734, ((panda$core$Int64) { 1004 }), p_position, $tmp2736, v2731);
                return $tmp2734;
            }
            break;
            case 69:
            {
                panda$core$Int64 $tmp2738 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(l2673, r2675);
                panda$core$UInt64 $tmp2739 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2738);
                v2737 = $tmp2739;
                org$pandalanguage$pandac$IRNode* $tmp2740 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2740->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2740->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2742 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(v2737);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2740, ((panda$core$Int64) { 1004 }), p_position, $tmp2742, v2737);
                return $tmp2740;
            }
            break;
            case 71:
            {
                panda$core$Int64 $tmp2744 = panda$core$Int64$$BXOR$panda$core$Int64$R$panda$core$Int64(l2673, r2675);
                panda$core$UInt64 $tmp2745 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2744);
                v2743 = $tmp2745;
                org$pandalanguage$pandac$IRNode* $tmp2746 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2746->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2746->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2748 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(v2743);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2746, ((panda$core$Int64) { 1004 }), p_position, $tmp2748, v2743);
                return $tmp2746;
            }
            break;
            case 72:
            {
                panda$core$Int64 $tmp2750 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(l2673, r2675);
                panda$core$UInt64 $tmp2751 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2750);
                v2749 = $tmp2751;
                org$pandalanguage$pandac$IRNode* $tmp2752 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2752->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2752->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2754 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(v2749);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2752, ((panda$core$Int64) { 1004 }), p_position, $tmp2754, v2749);
                return $tmp2752;
            }
            break;
            case 1:
            {
                panda$core$Int64 $tmp2756 = panda$core$Int64$$SHR$panda$core$Int64$R$panda$core$Int64(l2673, r2675);
                panda$core$UInt64 $tmp2757 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2756);
                v2755 = $tmp2757;
                org$pandalanguage$pandac$IRNode* $tmp2758 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2758->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2758->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2760 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(v2755);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2758, ((panda$core$Int64) { 1004 }), p_position, $tmp2760, v2755);
                return $tmp2758;
            }
            break;
        }
    }
    }
    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s2761);
    return NULL;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    panda$core$Bit $tmp2762 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1009 }));
    if ($tmp2762.value) {
    {
        panda$core$Object* $tmp2763 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
        return ((org$pandalanguage$pandac$IRNode*) $tmp2763);
    }
    }
    return p_expr;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIndexedAssignment$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_left, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_right) {
    panda$collections$Array* args2768;
    org$pandalanguage$pandac$IRNode* resolved2776;
    panda$collections$Array* children2781;
    panda$core$UInt64 baseId2787;
    org$pandalanguage$pandac$IRNode* base2788;
    panda$core$UInt64 indexId2795;
    org$pandalanguage$pandac$IRNode* index2796;
    org$pandalanguage$pandac$IRNode* baseRef2801;
    org$pandalanguage$pandac$IRNode* indexRef2804;
    org$pandalanguage$pandac$IRNode* rhsIndex2807;
    org$pandalanguage$pandac$IRNode* value2809;
    panda$core$Bit $tmp2764 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_left->kind, ((panda$core$Int64) { 1040 }));
    PANDA_ASSERT($tmp2764.value);
    panda$core$Int64 $tmp2765 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_left->children);
    panda$core$Bit $tmp2766 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2765, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp2766.value);
    panda$core$Bit $tmp2767 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 73 }));
    if ($tmp2767.value) {
    {
        panda$collections$Array* $tmp2769 = (panda$collections$Array*) malloc(40);
        $tmp2769->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2769->refCount.value = 1;
        panda$collections$Array$init($tmp2769);
        args2768 = $tmp2769;
        panda$core$Object* $tmp2771 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_left->children, ((panda$core$Int64) { 1 }));
        panda$collections$Array$add$panda$collections$Array$T(args2768, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp2771)));
        panda$collections$Array$add$panda$collections$Array$T(args2768, ((panda$core$Object*) p_right));
        panda$core$Object* $tmp2772 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_left->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp2774 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp2772), &$s2773, ((panda$collections$ListView*) args2768));
        return $tmp2774;
    }
    }
    panda$core$Bit $tmp2775 = org$pandalanguage$pandac$Compiler$isAssignment$panda$core$Int64$R$panda$core$Bit(p_op);
    PANDA_ASSERT($tmp2775.value);
    org$pandalanguage$pandac$IRNode* $tmp2777 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_left);
    resolved2776 = $tmp2777;
    if (((panda$core$Bit) { resolved2776 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp2778 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self, resolved2776);
    resolved2776 = $tmp2778;
    panda$core$Int64 $tmp2779 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(resolved2776->children);
    panda$core$Bit $tmp2780 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2779, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp2780.value);
    panda$collections$Array* $tmp2782 = (panda$collections$Array*) malloc(40);
    $tmp2782->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2782->refCount.value = 1;
    panda$collections$Array$init($tmp2782);
    children2781 = $tmp2782;
    panda$core$Object* $tmp2784 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(resolved2776->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp2785 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self, ((org$pandalanguage$pandac$IRNode*) $tmp2784));
    panda$collections$Array$add$panda$collections$Array$T(children2781, ((panda$core$Object*) $tmp2785));
    panda$core$UInt64 $tmp2786 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(self->reusedValueCount, ((panda$core$UInt64) { 1 }));
    self->reusedValueCount = $tmp2786;
    baseId2787 = self->reusedValueCount;
    org$pandalanguage$pandac$IRNode* $tmp2789 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp2789->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2789->refCount.value = 1;
    panda$core$Object* $tmp2791 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children2781, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp2792 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children2781, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2789, ((panda$core$Int64) { 1027 }), ((org$pandalanguage$pandac$IRNode*) $tmp2791)->position, ((org$pandalanguage$pandac$IRNode*) $tmp2792)->type, ((panda$core$Object*) wrap_panda$core$UInt64(baseId2787)), ((panda$collections$ListView*) children2781));
    base2788 = $tmp2789;
    panda$collections$Array$clear(children2781);
    panda$core$Object* $tmp2793 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(resolved2776->children, ((panda$core$Int64) { 1 }));
    panda$collections$Array$add$panda$collections$Array$T(children2781, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp2793)));
    panda$core$UInt64 $tmp2794 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(self->reusedValueCount, ((panda$core$UInt64) { 1 }));
    self->reusedValueCount = $tmp2794;
    indexId2795 = self->reusedValueCount;
    org$pandalanguage$pandac$IRNode* $tmp2797 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp2797->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2797->refCount.value = 1;
    panda$core$Object* $tmp2799 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children2781, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp2800 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children2781, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2797, ((panda$core$Int64) { 1027 }), ((org$pandalanguage$pandac$IRNode*) $tmp2799)->position, ((org$pandalanguage$pandac$IRNode*) $tmp2800)->type, ((panda$core$Object*) wrap_panda$core$UInt64(indexId2795)), ((panda$collections$ListView*) children2781));
    index2796 = $tmp2797;
    org$pandalanguage$pandac$IRNode* $tmp2802 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp2802->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2802->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2802, ((panda$core$Int64) { 1028 }), base2788->position, base2788->type, baseId2787);
    baseRef2801 = $tmp2802;
    org$pandalanguage$pandac$IRNode* $tmp2805 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp2805->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2805->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2805, ((panda$core$Int64) { 1028 }), index2796->position, index2796->type, indexId2795);
    indexRef2804 = $tmp2805;
    org$pandalanguage$pandac$IRNode* $tmp2808 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, baseRef2801, ((panda$core$Int64) { 101 }), indexRef2804);
    rhsIndex2807 = $tmp2808;
    if (((panda$core$Bit) { rhsIndex2807 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Int64 $tmp2810 = org$pandalanguage$pandac$Compiler$removeAssignment$panda$core$Int64$R$panda$core$Int64(p_op);
    org$pandalanguage$pandac$IRNode* $tmp2811 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, rhsIndex2807, $tmp2810, p_right);
    value2809 = $tmp2811;
    if (((panda$core$Bit) { value2809 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp2814 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(rhsIndex2807->type);
    bool $tmp2813 = $tmp2814.value;
    if (!$tmp2813) goto $l2815;
    panda$core$Bit $tmp2816 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_right->type);
    $tmp2813 = $tmp2816.value;
    $l2815:;
    panda$core$Bit $tmp2817 = { $tmp2813 };
    bool $tmp2812 = $tmp2817.value;
    if (!$tmp2812) goto $l2818;
    panda$core$Bit $tmp2819 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(rhsIndex2807->type, value2809->type);
    $tmp2812 = $tmp2819.value;
    $l2818:;
    panda$core$Bit $tmp2820 = { $tmp2812 };
    if ($tmp2820.value) {
    {
        panda$collections$Array* $tmp2822 = (panda$collections$Array*) malloc(40);
        $tmp2822->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2822->refCount.value = 1;
        panda$collections$Array$init($tmp2822);
        org$pandalanguage$pandac$IRNode* $tmp2824 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, value2809, &$s2821, ((panda$collections$ListView*) $tmp2822), resolved2776->type);
        value2809 = $tmp2824;
        if (((panda$core$Bit) { value2809 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$collections$Array$clear(children2781);
    panda$collections$Array$add$panda$collections$Array$T(children2781, ((panda$core$Object*) index2796));
    panda$collections$Array$add$panda$collections$Array$T(children2781, ((panda$core$Object*) value2809));
    org$pandalanguage$pandac$IRNode* $tmp2826 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, base2788, &$s2825, ((panda$collections$ListView*) children2781));
    return $tmp2826;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_rawLeft, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_rawRight) {
    org$pandalanguage$pandac$IRNode* left2827;
    org$pandalanguage$pandac$IRNode* right2828;
    panda$core$Int64 kind2852;
    org$pandalanguage$pandac$IRNode* resolved2859;
    panda$collections$Array* children2861;
    org$pandalanguage$pandac$IRNode* resolved2868;
    panda$collections$Array* children2870;
    panda$collections$Array* children2887;
    org$pandalanguage$pandac$IRNode* reusedLeft2892;
    org$pandalanguage$pandac$IRNode* toNonNullable2895;
    org$pandalanguage$pandac$IRNode* comparison2898;
    org$pandalanguage$pandac$IRNode* nullCheck2900;
    org$pandalanguage$pandac$ClassDecl* cl2920;
    org$pandalanguage$pandac$ClassDecl* cl2937;
    org$pandalanguage$pandac$IRNode* finalLeft2953;
    org$pandalanguage$pandac$IRNode* finalRight2956;
    panda$collections$Array* children2959;
    panda$collections$Array* children2973;
    panda$collections$Array* children2985;
    org$pandalanguage$pandac$IRNode* reusedLeft2991;
    org$pandalanguage$pandac$ClassDecl* cl3009;
    panda$collections$ListView* parameters3011;
    org$pandalanguage$pandac$Symbol* methods3013;
    org$pandalanguage$pandac$Type* type3017;
    panda$collections$Array* types3018;
    org$pandalanguage$pandac$MethodDecl* m3022;
    panda$collections$Iterator* m$Iter3027;
    org$pandalanguage$pandac$MethodDecl* m3039;
    panda$collections$Array* children3050;
    panda$collections$Array* children3079;
    panda$collections$Array* children3095;
    org$pandalanguage$pandac$Type* resultType3118;
    org$pandalanguage$pandac$IRNode* result3122;
    org$pandalanguage$pandac$IRNode* resolved3125;
    org$pandalanguage$pandac$IRNode* target3131;
    left2827 = p_rawLeft;
    right2828 = p_rawRight;
    panda$core$Bit $tmp2829 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2827->type->typeKind, ((panda$core$Int64) { 15 }));
    if ($tmp2829.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2830 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, right2828);
        right2828 = $tmp2830;
        if (((panda$core$Bit) { right2828 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Int64$nullable $tmp2831 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, left2827, right2828->type);
        if (((panda$core$Bit) { $tmp2831.nonnull }).value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2832 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, left2827, right2828->type);
            left2827 = $tmp2832;
        }
        }
    }
    }
    panda$core$Bit $tmp2834 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right2828->type->typeKind, ((panda$core$Int64) { 15 }));
    bool $tmp2833 = $tmp2834.value;
    if (!$tmp2833) goto $l2835;
    panda$core$Int64$nullable $tmp2836 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, right2828, left2827->type);
    $tmp2833 = ((panda$core$Bit) { $tmp2836.nonnull }).value;
    $l2835:;
    panda$core$Bit $tmp2837 = { $tmp2833 };
    if ($tmp2837.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2838 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, right2828, left2827->type);
        right2828 = $tmp2838;
    }
    }
    panda$core$Bit $tmp2842 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 58 }));
    bool $tmp2841 = $tmp2842.value;
    if ($tmp2841) goto $l2843;
    panda$core$Bit $tmp2844 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 59 }));
    $tmp2841 = $tmp2844.value;
    $l2843:;
    panda$core$Bit $tmp2845 = { $tmp2841 };
    bool $tmp2840 = $tmp2845.value;
    if ($tmp2840) goto $l2846;
    panda$core$Bit $tmp2847 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 60 }));
    $tmp2840 = $tmp2847.value;
    $l2846:;
    panda$core$Bit $tmp2848 = { $tmp2840 };
    bool $tmp2839 = $tmp2848.value;
    if ($tmp2839) goto $l2849;
    panda$core$Bit $tmp2850 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 61 }));
    $tmp2839 = $tmp2850.value;
    $l2849:;
    panda$core$Bit $tmp2851 = { $tmp2839 };
    if ($tmp2851.value) {
    {
        panda$core$Bit $tmp2854 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 58 }));
        bool $tmp2853 = $tmp2854.value;
        if ($tmp2853) goto $l2855;
        panda$core$Bit $tmp2856 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 60 }));
        $tmp2853 = $tmp2856.value;
        $l2855:;
        panda$core$Bit $tmp2857 = { $tmp2853 };
        if ($tmp2857.value) {
        {
            kind2852 = ((panda$core$Int64) { 1035 });
        }
        }
        else {
        {
            kind2852 = ((panda$core$Int64) { 1036 });
        }
        }
        panda$core$Bit $tmp2858 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2827->kind, ((panda$core$Int64) { 1030 }));
        if ($tmp2858.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2860 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, right2828);
            resolved2859 = $tmp2860;
            if (((panda$core$Bit) { resolved2859 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp2862 = (panda$collections$Array*) malloc(40);
            $tmp2862->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2862->refCount.value = 1;
            panda$collections$Array$init($tmp2862);
            children2861 = $tmp2862;
            panda$collections$Array$add$panda$collections$Array$T(children2861, ((panda$core$Object*) resolved2859));
            org$pandalanguage$pandac$IRNode* $tmp2864 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2864->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2864->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2866 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2864, kind2852, p_position, $tmp2866, ((panda$collections$ListView*) children2861));
            return $tmp2864;
        }
        }
        panda$core$Bit $tmp2867 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right2828->kind, ((panda$core$Int64) { 1030 }));
        if ($tmp2867.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2869 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, left2827);
            resolved2868 = $tmp2869;
            if (((panda$core$Bit) { resolved2868 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp2871 = (panda$collections$Array*) malloc(40);
            $tmp2871->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2871->refCount.value = 1;
            panda$collections$Array$init($tmp2871);
            children2870 = $tmp2871;
            panda$collections$Array$add$panda$collections$Array$T(children2870, ((panda$core$Object*) resolved2868));
            org$pandalanguage$pandac$IRNode* $tmp2873 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2873->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2873->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2875 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2873, kind2852, p_position, $tmp2875, ((panda$collections$ListView*) children2870));
            return $tmp2873;
        }
        }
    }
    }
    panda$core$Bit $tmp2878 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 58 }));
    bool $tmp2877 = $tmp2878.value;
    if ($tmp2877) goto $l2879;
    panda$core$Bit $tmp2880 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 59 }));
    $tmp2877 = $tmp2880.value;
    $l2879:;
    panda$core$Bit $tmp2881 = { $tmp2877 };
    bool $tmp2876 = $tmp2881.value;
    if (!$tmp2876) goto $l2882;
    panda$core$Bit $tmp2883 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2827->type->typeKind, ((panda$core$Int64) { 11 }));
    $tmp2876 = $tmp2883.value;
    $l2882:;
    panda$core$Bit $tmp2884 = { $tmp2876 };
    if ($tmp2884.value) {
    {
        panda$core$Bit $tmp2885 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(right2828->kind, ((panda$core$Int64) { 1030 }));
        PANDA_ASSERT($tmp2885.value);
        panda$core$UInt64 $tmp2886 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(self->reusedValueCount, ((panda$core$UInt64) { 1 }));
        self->reusedValueCount = $tmp2886;
        panda$collections$Array* $tmp2888 = (panda$collections$Array*) malloc(40);
        $tmp2888->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2888->refCount.value = 1;
        panda$collections$Array$init($tmp2888);
        children2887 = $tmp2888;
        panda$collections$Array$add$panda$collections$Array$T(children2887, ((panda$core$Object*) left2827));
        org$pandalanguage$pandac$IRNode* $tmp2890 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2890->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2890->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2890, ((panda$core$Int64) { 1027 }), left2827->position, left2827->type, ((panda$core$Object*) wrap_panda$core$UInt64(self->reusedValueCount)), ((panda$collections$ListView*) children2887));
        left2827 = $tmp2890;
        org$pandalanguage$pandac$IRNode* $tmp2893 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2893->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2893->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2893, ((panda$core$Int64) { 1028 }), left2827->position, left2827->type, self->reusedValueCount);
        reusedLeft2892 = $tmp2893;
        panda$core$Object* $tmp2896 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(left2827->type->subtypes, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp2897 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, reusedLeft2892, ((org$pandalanguage$pandac$Type*) $tmp2896));
        toNonNullable2895 = $tmp2897;
        org$pandalanguage$pandac$IRNode* $tmp2899 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, toNonNullable2895, p_op, right2828);
        comparison2898 = $tmp2899;
        if (((panda$core$Bit) { comparison2898 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp2901 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2901->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2901->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp2903 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp2901, ((panda$core$Int64) { 1030 }), p_position, $tmp2903);
        org$pandalanguage$pandac$IRNode* $tmp2904 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, left2827, ((panda$core$Int64) { 59 }), $tmp2901);
        nullCheck2900 = $tmp2904;
        if (((panda$core$Bit) { nullCheck2900 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$clear(children2887);
        panda$collections$Array$add$panda$collections$Array$T(children2887, ((panda$core$Object*) nullCheck2900));
        panda$collections$Array$add$panda$collections$Array$T(children2887, ((panda$core$Object*) comparison2898));
        org$pandalanguage$pandac$IRNode* $tmp2905 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2905->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2905->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp2907 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp2908 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 59 }));
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2905, ((panda$core$Int64) { 1011 }), p_position, $tmp2907, $tmp2908);
        org$pandalanguage$pandac$Type* $tmp2909 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp2910 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp2905, $tmp2909);
        panda$collections$Array$add$panda$collections$Array$T(children2887, ((panda$core$Object*) $tmp2910));
        org$pandalanguage$pandac$IRNode* $tmp2911 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2911->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2911->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp2913 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2911, ((panda$core$Int64) { 1044 }), p_position, $tmp2913, ((panda$collections$ListView*) children2887));
        return $tmp2911;
    }
    }
    panda$core$Bit $tmp2915 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 60 }));
    bool $tmp2914 = $tmp2915.value;
    if ($tmp2914) goto $l2916;
    panda$core$Bit $tmp2917 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 61 }));
    $tmp2914 = $tmp2917.value;
    $l2916:;
    panda$core$Bit $tmp2918 = { $tmp2914 };
    if ($tmp2918.value) {
    {
        panda$core$Bit $tmp2919 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(left2827->type);
        if ($tmp2919.value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp2921 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, left2827->type);
            cl2920 = $tmp2921;
            if (((panda$core$Bit) { cl2920 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$Bit $tmp2922 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, cl2920);
            if ($tmp2922.value) {
            {
                panda$core$String* $tmp2924 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
                panda$core$String* $tmp2925 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2923, $tmp2924);
                panda$core$String* $tmp2927 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2925, &$s2926);
                panda$core$String* $tmp2928 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2927, ((panda$core$Object*) left2827->type));
                panda$core$String* $tmp2930 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2928, &$s2929);
                panda$core$String* $tmp2932 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2931, ((panda$core$Object*) right2828->type));
                panda$core$String* $tmp2934 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2932, &$s2933);
                panda$core$String* $tmp2935 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2930, $tmp2934);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp2935);
            }
            }
        }
        }
        panda$core$Bit $tmp2936 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(right2828->type);
        if ($tmp2936.value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp2938 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, right2828->type);
            cl2937 = $tmp2938;
            if (((panda$core$Bit) { cl2937 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$Bit $tmp2939 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, cl2937);
            if ($tmp2939.value) {
            {
                panda$core$String* $tmp2941 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
                panda$core$String* $tmp2942 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2940, $tmp2941);
                panda$core$String* $tmp2944 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2942, &$s2943);
                panda$core$String* $tmp2945 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2944, ((panda$core$Object*) left2827->type));
                panda$core$String* $tmp2947 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2945, &$s2946);
                panda$core$String* $tmp2949 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2948, ((panda$core$Object*) right2828->type));
                panda$core$String* $tmp2951 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2949, &$s2950);
                panda$core$String* $tmp2952 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2947, $tmp2951);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp2952);
            }
            }
        }
        }
        org$pandalanguage$pandac$Type* $tmp2954 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp2955 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, left2827, $tmp2954);
        finalLeft2953 = $tmp2955;
        if (((panda$core$Bit) { finalLeft2953 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$Type* $tmp2957 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp2958 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, right2828, $tmp2957);
        finalRight2956 = $tmp2958;
        if (((panda$core$Bit) { finalRight2956 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp2960 = (panda$collections$Array*) malloc(40);
        $tmp2960->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2960->refCount.value = 1;
        panda$collections$Array$init($tmp2960);
        children2959 = $tmp2960;
        panda$collections$Array$add$panda$collections$Array$T(children2959, ((panda$core$Object*) finalLeft2953));
        panda$collections$Array$add$panda$collections$Array$T(children2959, ((panda$core$Object*) finalRight2956));
        org$pandalanguage$pandac$IRNode* $tmp2962 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2962->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2962->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp2964 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2962, ((panda$core$Int64) { 1023 }), p_position, $tmp2964, ((panda$core$Object*) wrap_panda$core$Int64(p_op)), ((panda$collections$ListView*) children2959));
        return $tmp2962;
    }
    }
    panda$core$Bit $tmp2965 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 73 }));
    if ($tmp2965.value) {
    {
        panda$core$Bit $tmp2966 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2827->kind, ((panda$core$Int64) { 1040 }));
        if ($tmp2966.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2967 = org$pandalanguage$pandac$Compiler$compileIndexedAssignment$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, left2827, p_op, right2828);
            return $tmp2967;
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp2968 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, left2827);
        left2827 = $tmp2968;
        if (((panda$core$Bit) { left2827 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp2969 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, right2828, left2827->type);
        right2828 = $tmp2969;
        if (((panda$core$Bit) { right2828 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp2970 = org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, left2827);
        panda$core$Bit $tmp2971 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2970);
        if ($tmp2971.value) {
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, left2827->position, &$s2972);
            return NULL;
        }
        }
        panda$collections$Array* $tmp2974 = (panda$collections$Array*) malloc(40);
        $tmp2974->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2974->refCount.value = 1;
        panda$collections$Array$init($tmp2974);
        children2973 = $tmp2974;
        panda$collections$Array$add$panda$collections$Array$T(children2973, ((panda$core$Object*) left2827));
        panda$collections$Array$add$panda$collections$Array$T(children2973, ((panda$core$Object*) right2828));
        org$pandalanguage$pandac$IRNode* $tmp2976 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2976->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2976->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2976, ((panda$core$Int64) { 1023 }), p_position, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 73 }))), ((panda$collections$ListView*) children2973));
        return $tmp2976;
    }
    }
    panda$core$Bit $tmp2978 = org$pandalanguage$pandac$Compiler$isAssignment$panda$core$Int64$R$panda$core$Bit(p_op);
    if ($tmp2978.value) {
    {
        panda$core$Bit $tmp2979 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2827->kind, ((panda$core$Int64) { 1040 }));
        if ($tmp2979.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2980 = org$pandalanguage$pandac$Compiler$compileIndexedAssignment$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, left2827, p_op, right2828);
            return $tmp2980;
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp2981 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, left2827);
        left2827 = $tmp2981;
        if (((panda$core$Bit) { left2827 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp2982 = org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, left2827);
        panda$core$Bit $tmp2983 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2982);
        if ($tmp2983.value) {
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, left2827->position, &$s2984);
            return NULL;
        }
        }
        panda$collections$Array* $tmp2986 = (panda$collections$Array*) malloc(40);
        $tmp2986->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2986->refCount.value = 1;
        panda$collections$Array$init($tmp2986);
        children2985 = $tmp2986;
        panda$collections$Array$add$panda$collections$Array$T(children2985, ((panda$core$Object*) left2827));
        panda$core$UInt64 $tmp2988 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(self->reusedValueCount, ((panda$core$UInt64) { 1 }));
        self->reusedValueCount = $tmp2988;
        org$pandalanguage$pandac$IRNode* $tmp2989 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2989->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2989->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2989, ((panda$core$Int64) { 1027 }), left2827->position, left2827->type, ((panda$core$Object*) wrap_panda$core$UInt64(self->reusedValueCount)), ((panda$collections$ListView*) children2985));
        left2827 = $tmp2989;
        org$pandalanguage$pandac$IRNode* $tmp2992 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2992->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2992->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2992, ((panda$core$Int64) { 1028 }), left2827->position, left2827->type, self->reusedValueCount);
        reusedLeft2991 = $tmp2992;
        panda$core$Int64 $tmp2994 = org$pandalanguage$pandac$Compiler$removeAssignment$panda$core$Int64$R$panda$core$Int64(p_op);
        org$pandalanguage$pandac$IRNode* $tmp2995 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, reusedLeft2991, $tmp2994, right2828);
        right2828 = $tmp2995;
        if (((panda$core$Bit) { right2828 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp2997 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(left2827->type);
        bool $tmp2996 = $tmp2997.value;
        if (!$tmp2996) goto $l2998;
        panda$core$Bit $tmp2999 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(left2827->type, right2828->type);
        $tmp2996 = $tmp2999.value;
        $l2998:;
        panda$core$Bit $tmp3000 = { $tmp2996 };
        if ($tmp3000.value) {
        {
            panda$collections$Array* $tmp3002 = (panda$collections$Array*) malloc(40);
            $tmp3002->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp3002->refCount.value = 1;
            panda$collections$Array$init($tmp3002);
            org$pandalanguage$pandac$IRNode* $tmp3004 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, right2828, &$s3001, ((panda$collections$ListView*) $tmp3002), left2827->type);
            right2828 = $tmp3004;
            if (((panda$core$Bit) { right2828 == NULL }).value) {
            {
                return NULL;
            }
            }
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp3005 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, left2827, ((panda$core$Int64) { 73 }), right2828);
        return $tmp3005;
    }
    }
    panda$core$Bit $tmp3006 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 101 }));
    if ($tmp3006.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3007 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, left2827);
        left2827 = $tmp3007;
        if (((panda$core$Bit) { left2827 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp3008 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(left2827->type);
        if ($tmp3008.value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp3010 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, left2827->type);
            cl3009 = $tmp3010;
            if (((panda$core$Bit) { cl3009 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$ListView* $tmp3012 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, left2827->type);
            parameters3011 = $tmp3012;
            org$pandalanguage$pandac$SymbolTable* $tmp3014 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl3009);
            org$pandalanguage$pandac$Symbol* $tmp3016 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp3014, &$s3015);
            methods3013 = $tmp3016;
            if (((panda$core$Bit) { methods3013 != NULL }).value) {
            {
                panda$collections$Array* $tmp3019 = (panda$collections$Array*) malloc(40);
                $tmp3019->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp3019->refCount.value = 1;
                panda$collections$Array$init($tmp3019);
                types3018 = $tmp3019;
                panda$core$Bit $tmp3021 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(methods3013->kind, ((panda$core$Int64) { 204 }));
                if ($tmp3021.value) {
                {
                    m3022 = ((org$pandalanguage$pandac$MethodDecl*) methods3013);
                    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m3022);
                    org$pandalanguage$pandac$MethodRef* $tmp3023 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                    $tmp3023->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                    $tmp3023->refCount.value = 1;
                    org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp3023, m3022, parameters3011);
                    org$pandalanguage$pandac$Type* $tmp3025 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type($tmp3023);
                    panda$collections$Array$add$panda$collections$Array$T(types3018, ((panda$core$Object*) $tmp3025));
                }
                }
                else {
                {
                    panda$core$Bit $tmp3026 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(methods3013->kind, ((panda$core$Int64) { 205 }));
                    PANDA_ASSERT($tmp3026.value);
                    {
                        ITable* $tmp3028 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) methods3013)->methods)->$class->itable;
                        while ($tmp3028->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp3028 = $tmp3028->next;
                        }
                        $fn3030 $tmp3029 = $tmp3028->methods[0];
                        panda$collections$Iterator* $tmp3031 = $tmp3029(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) methods3013)->methods));
                        m$Iter3027 = $tmp3031;
                        $l3032:;
                        ITable* $tmp3034 = m$Iter3027->$class->itable;
                        while ($tmp3034->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp3034 = $tmp3034->next;
                        }
                        $fn3036 $tmp3035 = $tmp3034->methods[0];
                        panda$core$Bit $tmp3037 = $tmp3035(m$Iter3027);
                        panda$core$Bit $tmp3038 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3037);
                        if (!$tmp3038.value) goto $l3033;
                        {
                            ITable* $tmp3040 = m$Iter3027->$class->itable;
                            while ($tmp3040->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp3040 = $tmp3040->next;
                            }
                            $fn3042 $tmp3041 = $tmp3040->methods[1];
                            panda$core$Object* $tmp3043 = $tmp3041(m$Iter3027);
                            m3039 = ((org$pandalanguage$pandac$MethodDecl*) $tmp3043);
                            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m3039);
                            org$pandalanguage$pandac$MethodRef* $tmp3044 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                            $tmp3044->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                            $tmp3044->refCount.value = 1;
                            org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp3044, m3039, parameters3011);
                            org$pandalanguage$pandac$Type* $tmp3046 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type($tmp3044);
                            panda$collections$Array$add$panda$collections$Array$T(types3018, ((panda$core$Object*) $tmp3046));
                        }
                        goto $l3032;
                        $l3033:;
                    }
                }
                }
                org$pandalanguage$pandac$Type* $tmp3047 = (org$pandalanguage$pandac$Type*) malloc(96);
                $tmp3047->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
                $tmp3047->refCount.value = 1;
                org$pandalanguage$pandac$Type$init$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp3047, ((panda$collections$ListView*) types3018));
                type3017 = $tmp3047;
            }
            }
            else {
            {
                org$pandalanguage$pandac$Type* $tmp3049 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
                type3017 = $tmp3049;
            }
            }
            panda$collections$Array* $tmp3051 = (panda$collections$Array*) malloc(40);
            $tmp3051->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp3051->refCount.value = 1;
            panda$collections$Array$init($tmp3051);
            children3050 = $tmp3051;
            panda$collections$Array$add$panda$collections$Array$T(children3050, ((panda$core$Object*) left2827));
            panda$collections$Array$add$panda$collections$Array$T(children3050, ((panda$core$Object*) right2828));
            org$pandalanguage$pandac$IRNode* $tmp3053 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3053->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3053->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3053, ((panda$core$Int64) { 1040 }), p_position, type3017, ((panda$collections$ListView*) children3050));
            return $tmp3053;
        }
        }
    }
    }
    org$pandalanguage$pandac$Type* $tmp3055 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp3056 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(left2827->type, $tmp3055);
    if ($tmp3056.value) {
    {
        org$pandalanguage$pandac$Type* $tmp3058 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp3059 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(right2828->type, $tmp3058);
        bool $tmp3057 = $tmp3059.value;
        if (!$tmp3057) goto $l3060;
        panda$core$Bit $tmp3065 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 66 }));
        bool $tmp3064 = $tmp3065.value;
        if ($tmp3064) goto $l3066;
        panda$core$Bit $tmp3067 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 68 }));
        $tmp3064 = $tmp3067.value;
        $l3066:;
        panda$core$Bit $tmp3068 = { $tmp3064 };
        bool $tmp3063 = $tmp3068.value;
        if ($tmp3063) goto $l3069;
        panda$core$Bit $tmp3070 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 70 }));
        $tmp3063 = $tmp3070.value;
        $l3069:;
        panda$core$Bit $tmp3071 = { $tmp3063 };
        bool $tmp3062 = $tmp3071.value;
        if ($tmp3062) goto $l3072;
        panda$core$Bit $tmp3073 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 58 }));
        $tmp3062 = $tmp3073.value;
        $l3072:;
        panda$core$Bit $tmp3074 = { $tmp3062 };
        bool $tmp3061 = $tmp3074.value;
        if ($tmp3061) goto $l3075;
        panda$core$Bit $tmp3076 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 59 }));
        $tmp3061 = $tmp3076.value;
        $l3075:;
        panda$core$Bit $tmp3077 = { $tmp3061 };
        $tmp3057 = $tmp3077.value;
        $l3060:;
        panda$core$Bit $tmp3078 = { $tmp3057 };
        if ($tmp3078.value) {
        {
            panda$collections$Array* $tmp3080 = (panda$collections$Array*) malloc(40);
            $tmp3080->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp3080->refCount.value = 1;
            panda$collections$Array$init($tmp3080);
            children3079 = $tmp3080;
            panda$collections$Array$add$panda$collections$Array$T(children3079, ((panda$core$Object*) left2827));
            panda$collections$Array$add$panda$collections$Array$T(children3079, ((panda$core$Object*) right2828));
            org$pandalanguage$pandac$IRNode* $tmp3082 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3082->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3082->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3082, ((panda$core$Int64) { 1023 }), p_position, left2827->type, ((panda$core$Object*) wrap_panda$core$Int64(p_op)), ((panda$collections$ListView*) children3079));
            return $tmp3082;
        }
        }
        panda$core$String* $tmp3085 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
        panda$core$String* $tmp3086 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3084, $tmp3085);
        panda$core$String* $tmp3088 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3086, &$s3087);
        panda$core$String* $tmp3089 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3088, ((panda$core$Object*) left2827->type));
        panda$core$String* $tmp3091 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3089, &$s3090);
        panda$core$String* $tmp3092 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3091, ((panda$core$Object*) right2828->type));
        panda$core$String* $tmp3094 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3092, &$s3093);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp3094);
        return NULL;
    }
    }
    panda$collections$Array* $tmp3096 = (panda$collections$Array*) malloc(40);
    $tmp3096->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3096->refCount.value = 1;
    panda$collections$Array$init($tmp3096);
    children3095 = $tmp3096;
    panda$core$Bit $tmp3100 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2827->kind, ((panda$core$Int64) { 1004 }));
    bool $tmp3099 = $tmp3100.value;
    if ($tmp3099) goto $l3101;
    panda$core$Bit $tmp3102 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2827->kind, ((panda$core$Int64) { 1032 }));
    $tmp3099 = $tmp3102.value;
    $l3101:;
    panda$core$Bit $tmp3103 = { $tmp3099 };
    bool $tmp3098 = $tmp3103.value;
    if (!$tmp3098) goto $l3104;
    panda$core$Bit $tmp3106 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right2828->kind, ((panda$core$Int64) { 1004 }));
    bool $tmp3105 = $tmp3106.value;
    if ($tmp3105) goto $l3107;
    panda$core$Bit $tmp3108 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right2828->kind, ((panda$core$Int64) { 1032 }));
    $tmp3105 = $tmp3108.value;
    $l3107:;
    panda$core$Bit $tmp3109 = { $tmp3105 };
    $tmp3098 = $tmp3109.value;
    $l3104:;
    panda$core$Bit $tmp3110 = { $tmp3098 };
    if ($tmp3110.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3111 = org$pandalanguage$pandac$Compiler$foldInts$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, left2827, p_op, right2828);
        return $tmp3111;
    }
    }
    panda$core$Bit $tmp3113 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(left2827->type);
    bool $tmp3112 = $tmp3113.value;
    if (!$tmp3112) goto $l3114;
    panda$core$Int64$nullable $tmp3115 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, right2828, left2827->type);
    $tmp3112 = ((panda$core$Bit) { $tmp3115.nonnull }).value;
    $l3114:;
    panda$core$Bit $tmp3116 = { $tmp3112 };
    if ($tmp3116.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3117 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, right2828, left2827->type);
        right2828 = $tmp3117;
        PANDA_ASSERT(((panda$core$Bit) { right2828 != NULL }).value);
        panda$collections$Array$add$panda$collections$Array$T(children3095, ((panda$core$Object*) left2827));
        panda$collections$Array$add$panda$collections$Array$T(children3095, ((panda$core$Object*) right2828));
        switch (p_op.value) {
            case 58:
            case 59:
            case 63:
            case 65:
            case 62:
            case 64:
            {
                org$pandalanguage$pandac$Type* $tmp3119 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
                resultType3118 = $tmp3119;
            }
            break;
            default:
            {
                resultType3118 = left2827->type;
            }
        }
        org$pandalanguage$pandac$IRNode* $tmp3120 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3120->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3120->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3120, ((panda$core$Int64) { 1023 }), p_position, resultType3118, ((panda$core$Object*) wrap_panda$core$Int64(p_op)), ((panda$collections$ListView*) children3095));
        return $tmp3120;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children3095, ((panda$core$Object*) right2828));
    PANDA_ASSERT(self->reportErrors.value);
    self->reportErrors = ((panda$core$Bit) { false });
    panda$core$String* $tmp3123 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
    org$pandalanguage$pandac$IRNode* $tmp3124 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, left2827, $tmp3123, ((panda$collections$ListView*) children3095));
    result3122 = $tmp3124;
    self->reportErrors = ((panda$core$Bit) { true });
    if (((panda$core$Bit) { result3122 == NULL }).value) {
    {
        panda$collections$Array$clear(children3095);
        panda$collections$Array$add$panda$collections$Array$T(children3095, ((panda$core$Object*) left2827));
        org$pandalanguage$pandac$IRNode* $tmp3126 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, right2828);
        resolved3125 = $tmp3126;
        bool $tmp3127 = ((panda$core$Bit) { resolved3125 != NULL }).value;
        if (!$tmp3127) goto $l3128;
        panda$core$Bit $tmp3129 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(resolved3125->type);
        $tmp3127 = $tmp3129.value;
        $l3128:;
        panda$core$Bit $tmp3130 = { $tmp3127 };
        if ($tmp3130.value) {
        {
            panda$collections$Array$add$panda$collections$Array$T(children3095, ((panda$core$Object*) resolved3125));
            org$pandalanguage$pandac$IRNode* $tmp3132 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3132->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3132->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3134 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp3132, ((panda$core$Int64) { 1001 }), resolved3125->position, $tmp3134, resolved3125->type);
            target3131 = $tmp3132;
            panda$core$String* $tmp3135 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
            org$pandalanguage$pandac$IRNode* $tmp3136 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target3131, $tmp3135, ((panda$collections$ListView*) children3095));
            result3122 = $tmp3136;
        }
        }
    }
    }
    return result3122;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_b) {
    org$pandalanguage$pandac$IRNode* left3137;
    org$pandalanguage$pandac$IRNode* right3140;
    panda$core$Object* $tmp3138 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_b->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3139 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3138));
    left3137 = $tmp3139;
    if (((panda$core$Bit) { left3137 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Object* $tmp3141 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_b->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp3142 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3141));
    right3140 = $tmp3142;
    if (((panda$core$Bit) { right3140 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3143 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_b->position, left3137, ((panda$core$Int64$wrapper*) p_b->payload)->value, right3140);
    return $tmp3143;
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type) {
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp3147;
    switch (p_type->typeKind.value) {
        case 22:
        {
            panda$collections$ListView* $tmp3144 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p_type->parameter->bound);
            return $tmp3144;
        }
        break;
        case 21:
        {
            panda$core$Int64 $tmp3145 = panda$collections$Array$get_count$R$panda$core$Int64(p_type->subtypes);
            panda$core$Bit $tmp3146 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp3145, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp3146.value);
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp3147, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$collections$Array* $tmp3148 = panda$collections$Array$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT(p_type->subtypes, $tmp3147);
            return ((panda$collections$ListView*) $tmp3148);
        }
        break;
        case 11:
        {
            panda$core$Object* $tmp3149 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
            panda$collections$ListView* $tmp3150 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, ((org$pandalanguage$pandac$Type*) $tmp3149));
            return $tmp3150;
        }
        break;
        default:
        {
            panda$collections$Array* $tmp3151 = (panda$collections$Array*) malloc(40);
            $tmp3151->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp3151->refCount.value = 1;
            panda$collections$Array$init($tmp3151);
            return ((panda$collections$ListView*) $tmp3151);
        }
    }
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$IRNode$Q$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_target) {
    if (((panda$core$Bit) { p_target != NULL }).value) {
    {
        panda$core$Bit $tmp3153 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1001 }));
        if ($tmp3153.value) {
        {
            panda$collections$ListView* $tmp3154 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, ((org$pandalanguage$pandac$Type*) p_target->payload));
            return $tmp3154;
        }
        }
        panda$collections$ListView* $tmp3155 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p_target->type);
        return $tmp3155;
    }
    }
    panda$collections$Array* $tmp3156 = (panda$collections$Array*) malloc(40);
    $tmp3156->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3156->refCount.value = 1;
    panda$collections$Array$init($tmp3156);
    return ((panda$collections$ListView*) $tmp3156);
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compilePrefix$panda$core$Int64$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_base, org$pandalanguage$pandac$Position p_position) {
    panda$core$String* name3159;
    org$pandalanguage$pandac$ClassDecl* cl3161;
    org$pandalanguage$pandac$Symbol* s3163;
    org$pandalanguage$pandac$MethodDecl* m3166;
    panda$collections$Iterator* test$Iter3171;
    org$pandalanguage$pandac$MethodDecl* test3183;
    org$pandalanguage$pandac$MethodRef* ref3195;
    panda$collections$Array* children3199;
    org$pandalanguage$pandac$IRNode* methodRef3202;
    org$pandalanguage$pandac$Position $tmp3208;
    panda$collections$Array* args3209;
    panda$collections$Array* children3225;
    panda$collections$Array* children3235;
    org$pandalanguage$pandac$IRNode* coerced3244;
    panda$collections$Array* children3247;
    panda$core$Bit $tmp3158 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_base->type);
    if ($tmp3158.value) {
    {
        panda$core$String* $tmp3160 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
        name3159 = $tmp3160;
        org$pandalanguage$pandac$ClassDecl* $tmp3162 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_base->type);
        cl3161 = $tmp3162;
        if (((panda$core$Bit) { cl3161 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$SymbolTable* $tmp3164 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl3161);
        org$pandalanguage$pandac$Symbol* $tmp3165 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp3164, name3159);
        s3163 = $tmp3165;
        if (((panda$core$Bit) { s3163 != NULL }).value) {
        {
            m3166 = NULL;
            switch (s3163->kind.value) {
                case 204:
                {
                    m3166 = ((org$pandalanguage$pandac$MethodDecl*) s3163);
                    panda$core$Int64 $tmp3167 = panda$collections$Array$get_count$R$panda$core$Int64(m3166->parameters);
                    panda$core$Bit $tmp3168 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3167, ((panda$core$Int64) { 0 }));
                    PANDA_ASSERT($tmp3168.value);
                    panda$core$Bit $tmp3169 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(m3166->annotations);
                    panda$core$Bit $tmp3170 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3169);
                    PANDA_ASSERT($tmp3170.value);
                }
                break;
                case 205:
                {
                    {
                        ITable* $tmp3172 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s3163)->methods)->$class->itable;
                        while ($tmp3172->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp3172 = $tmp3172->next;
                        }
                        $fn3174 $tmp3173 = $tmp3172->methods[0];
                        panda$collections$Iterator* $tmp3175 = $tmp3173(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s3163)->methods));
                        test$Iter3171 = $tmp3175;
                        $l3176:;
                        ITable* $tmp3178 = test$Iter3171->$class->itable;
                        while ($tmp3178->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp3178 = $tmp3178->next;
                        }
                        $fn3180 $tmp3179 = $tmp3178->methods[0];
                        panda$core$Bit $tmp3181 = $tmp3179(test$Iter3171);
                        panda$core$Bit $tmp3182 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3181);
                        if (!$tmp3182.value) goto $l3177;
                        {
                            ITable* $tmp3184 = test$Iter3171->$class->itable;
                            while ($tmp3184->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp3184 = $tmp3184->next;
                            }
                            $fn3186 $tmp3185 = $tmp3184->methods[1];
                            panda$core$Object* $tmp3187 = $tmp3185(test$Iter3171);
                            test3183 = ((org$pandalanguage$pandac$MethodDecl*) $tmp3187);
                            panda$core$Bit $tmp3189 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(test3183->annotations);
                            panda$core$Bit $tmp3190 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3189);
                            bool $tmp3188 = $tmp3190.value;
                            if (!$tmp3188) goto $l3191;
                            panda$core$Int64 $tmp3192 = panda$collections$Array$get_count$R$panda$core$Int64(test3183->parameters);
                            panda$core$Bit $tmp3193 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3192, ((panda$core$Int64) { 0 }));
                            $tmp3188 = $tmp3193.value;
                            $l3191:;
                            panda$core$Bit $tmp3194 = { $tmp3188 };
                            if ($tmp3194.value) {
                            {
                                m3166 = test3183;
                                goto $l3177;
                            }
                            }
                        }
                        goto $l3176;
                        $l3177:;
                    }
                }
                break;
                default:
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
            }
            if (((panda$core$Bit) { m3166 != NULL }).value) {
            {
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m3166);
                org$pandalanguage$pandac$MethodRef* $tmp3196 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                $tmp3196->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                $tmp3196->refCount.value = 1;
                panda$collections$ListView* $tmp3198 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$IRNode$Q$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p_base);
                org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp3196, m3166, $tmp3198);
                ref3195 = $tmp3196;
                panda$collections$Array* $tmp3200 = (panda$collections$Array*) malloc(40);
                $tmp3200->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp3200->refCount.value = 1;
                panda$collections$Array$init($tmp3200);
                children3199 = $tmp3200;
                panda$collections$Array$add$panda$collections$Array$T(children3199, ((panda$core$Object*) p_base));
                org$pandalanguage$pandac$IRNode* $tmp3203 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp3203->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp3203->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp3205 = (org$pandalanguage$pandac$Type*) malloc(96);
                $tmp3205->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
                $tmp3205->refCount.value = 1;
                org$pandalanguage$pandac$Position$init(&$tmp3208);
                org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp3205, &$s3207, ((panda$core$Int64) { 16 }), $tmp3208, ((panda$core$Bit) { true }));
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3203, ((panda$core$Int64) { 1002 }), p_position, $tmp3205, ((panda$core$Object*) ref3195), ((panda$collections$ListView*) children3199));
                methodRef3202 = $tmp3203;
                panda$collections$Array* $tmp3210 = (panda$collections$Array*) malloc(40);
                $tmp3210->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp3210->refCount.value = 1;
                panda$collections$Array$init($tmp3210);
                args3209 = $tmp3210;
                org$pandalanguage$pandac$IRNode* $tmp3212 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, methodRef3202, ((panda$collections$ListView*) args3209));
                return $tmp3212;
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
                    org$pandalanguage$pandac$IRNode* $tmp3213 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp3213->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp3213->refCount.value = 1;
                    org$pandalanguage$pandac$Type* $tmp3215 = org$pandalanguage$pandac$Type$NegatedIntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(((panda$core$UInt64$wrapper*) p_base->payload)->value);
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp3213, ((panda$core$Int64) { 1032 }), p_position, $tmp3215, ((panda$core$UInt64$wrapper*) p_base->payload)->value);
                    return $tmp3213;
                }
                break;
                case 1032:
                {
                    org$pandalanguage$pandac$IRNode* $tmp3216 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp3216->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp3216->refCount.value = 1;
                    org$pandalanguage$pandac$Type* $tmp3218 = org$pandalanguage$pandac$Type$NegatedIntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(((panda$core$UInt64$wrapper*) p_base->payload)->value);
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp3216, ((panda$core$Int64) { 1004 }), p_position, $tmp3218, ((panda$core$UInt64$wrapper*) p_base->payload)->value);
                    return $tmp3216;
                }
                break;
                case 1045:
                {
                    org$pandalanguage$pandac$IRNode* $tmp3219 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp3219->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp3219->refCount.value = 1;
                    panda$core$Real64 $tmp3221 = panda$core$Real64$$SUB$R$panda$core$Real64(((panda$core$Real64$wrapper*) p_base->payload)->value);
                    org$pandalanguage$pandac$Type* $tmp3222 = org$pandalanguage$pandac$Type$RealLiteral$panda$core$Real64$R$org$pandalanguage$pandac$Type($tmp3221);
                    panda$core$Real64 $tmp3223 = panda$core$Real64$$SUB$R$panda$core$Real64(((panda$core$Real64$wrapper*) p_base->payload)->value);
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Real64($tmp3219, ((panda$core$Int64) { 1045 }), p_position, $tmp3222, $tmp3223);
                    return $tmp3219;
                }
                break;
                default:
                {
                    panda$core$Bit $tmp3224 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_base->type);
                    if ($tmp3224.value) {
                    {
                        panda$collections$Array* $tmp3226 = (panda$collections$Array*) malloc(40);
                        $tmp3226->$class = (panda$core$Class*) &panda$collections$Array$class;
                        $tmp3226->refCount.value = 1;
                        panda$collections$Array$init($tmp3226);
                        children3225 = $tmp3226;
                        panda$collections$Array$add$panda$collections$Array$T(children3225, ((panda$core$Object*) p_base));
                        org$pandalanguage$pandac$IRNode* $tmp3228 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                        $tmp3228->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                        $tmp3228->refCount.value = 1;
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3228, ((panda$core$Int64) { 1041 }), p_base->position, p_base->type, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 52 }))), ((panda$collections$ListView*) children3225));
                        return $tmp3228;
                    }
                    }
                }
            }
            panda$core$String* $tmp3231 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3230, ((panda$core$Object*) p_base->type));
            panda$core$String* $tmp3233 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3231, &$s3232);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_base->position, $tmp3233);
            return NULL;
        }
        break;
        case 50:
        {
            panda$core$Bit $tmp3234 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_base->type);
            if ($tmp3234.value) {
            {
                panda$collections$Array* $tmp3236 = (panda$collections$Array*) malloc(40);
                $tmp3236->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp3236->refCount.value = 1;
                panda$collections$Array$init($tmp3236);
                children3235 = $tmp3236;
                panda$collections$Array$add$panda$collections$Array$T(children3235, ((panda$core$Object*) p_base));
                org$pandalanguage$pandac$IRNode* $tmp3238 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp3238->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp3238->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3238, ((panda$core$Int64) { 1041 }), p_base->position, p_base->type, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 50 }))), ((panda$collections$ListView*) children3235));
                return $tmp3238;
            }
            }
            else {
            {
                panda$core$String* $tmp3241 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3240, ((org$pandalanguage$pandac$Symbol*) p_base->type)->name);
                panda$core$String* $tmp3243 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3241, &$s3242);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_base->position, $tmp3243);
                return NULL;
            }
            }
        }
        break;
        case 49:
        {
            org$pandalanguage$pandac$Type* $tmp3245 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode* $tmp3246 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_base, $tmp3245);
            coerced3244 = $tmp3246;
            if (((panda$core$Bit) { coerced3244 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp3248 = (panda$collections$Array*) malloc(40);
            $tmp3248->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp3248->refCount.value = 1;
            panda$collections$Array$init($tmp3248);
            children3247 = $tmp3248;
            panda$collections$Array$add$panda$collections$Array$T(children3247, ((panda$core$Object*) coerced3244));
            org$pandalanguage$pandac$IRNode* $tmp3250 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3250->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3250->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3250, ((panda$core$Int64) { 1041 }), p_base->position, p_base->type, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 49 }))), ((panda$collections$ListView*) children3247));
            return $tmp3250;
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
    org$pandalanguage$pandac$IRNode* base3255;
    panda$core$Bit $tmp3252 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_p->kind, ((panda$core$Int64) { 112 }));
    PANDA_ASSERT($tmp3252.value);
    panda$core$Int64 $tmp3253 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_p->children);
    panda$core$Bit $tmp3254 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3253, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3254.value);
    panda$core$Object* $tmp3256 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_p->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3257 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3256));
    base3255 = $tmp3257;
    if (((panda$core$Bit) { base3255 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3258 = org$pandalanguage$pandac$Compiler$compilePrefix$panda$core$Int64$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$R$org$pandalanguage$pandac$IRNode$Q(self, ((panda$core$Int64$wrapper*) p_p->payload)->value, base3255, p_p->position);
    return $tmp3258;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileCall$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_c) {
    org$pandalanguage$pandac$IRNode* m3260;
    panda$collections$Array* args3263;
    panda$core$Range$LTpanda$core$Int64$GT $tmp3266;
    org$pandalanguage$pandac$IRNode* arg3281;
    panda$core$Bit $tmp3259 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_c->kind, ((panda$core$Int64) { 107 }));
    PANDA_ASSERT($tmp3259.value);
    panda$core$Object* $tmp3261 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_c->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3262 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3261));
    m3260 = $tmp3262;
    if (((panda$core$Bit) { m3260 != NULL }).value) {
    {
        panda$collections$Array* $tmp3264 = (panda$collections$Array*) malloc(40);
        $tmp3264->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp3264->refCount.value = 1;
        panda$collections$Array$init($tmp3264);
        args3263 = $tmp3264;
        panda$core$Int64 $tmp3267 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_c->children);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp3266, ((panda$core$Int64) { 1 }), $tmp3267, ((panda$core$Bit) { false }));
        int64_t $tmp3269 = $tmp3266.min.value;
        panda$core$Int64 i3268 = { $tmp3269 };
        int64_t $tmp3271 = $tmp3266.max.value;
        bool $tmp3272 = $tmp3266.inclusive.value;
        if ($tmp3272) goto $l3279; else goto $l3280;
        $l3279:;
        if ($tmp3269 <= $tmp3271) goto $l3273; else goto $l3275;
        $l3280:;
        if ($tmp3269 < $tmp3271) goto $l3273; else goto $l3275;
        $l3273:;
        {
            panda$core$Object* $tmp3282 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_c->children, i3268);
            org$pandalanguage$pandac$IRNode* $tmp3283 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3282));
            arg3281 = $tmp3283;
            if (((panda$core$Bit) { arg3281 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(args3263, ((panda$core$Object*) arg3281));
        }
        $l3276:;
        int64_t $tmp3285 = $tmp3271 - i3268.value;
        if ($tmp3272) goto $l3286; else goto $l3287;
        $l3286:;
        if ($tmp3285 >= 1) goto $l3284; else goto $l3275;
        $l3287:;
        if ($tmp3285 > 1) goto $l3284; else goto $l3275;
        $l3284:;
        i3268.value += 1;
        goto $l3273;
        $l3275:;
        org$pandalanguage$pandac$IRNode* $tmp3290 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, m3260, ((panda$collections$ListView*) args3263));
        return $tmp3290;
    }
    }
    return NULL;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$String$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_base, panda$core$String* p_name) {
    org$pandalanguage$pandac$ClassDecl* cl3291;
    panda$core$String* name3293;
    org$pandalanguage$pandac$ClassDecl* cl3301;
    org$pandalanguage$pandac$SymbolTable* st3320;
    org$pandalanguage$pandac$Symbol* s3322;
    switch (p_base->kind.value) {
        case 1001:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp3292 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Type*) p_base->payload));
            cl3291 = $tmp3292;
        }
        break;
        case 1037:
        {
            panda$core$String* $tmp3295 = (($fn3294) p_base->payload->$class->vtable[0])(p_base->payload);
            panda$core$String* $tmp3297 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3295, &$s3296);
            panda$core$String* $tmp3298 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3297, p_name);
            panda$core$String* $tmp3300 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3298, &$s3299);
            name3293 = $tmp3300;
            org$pandalanguage$pandac$ClassDecl* $tmp3302 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, name3293);
            cl3301 = $tmp3302;
            if (((panda$core$Bit) { cl3301 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp3303 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp3303->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp3303->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp3305 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$Type* $tmp3306 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl3301);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp3303, ((panda$core$Int64) { 1001 }), p_position, $tmp3305, $tmp3306);
                return $tmp3303;
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp3307 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3307->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3307->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3309 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$String($tmp3307, ((panda$core$Int64) { 1037 }), p_position, $tmp3309, name3293);
            return $tmp3307;
        }
        break;
        case 1024:
        {
            panda$core$Object* $tmp3310 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, ((org$pandalanguage$pandac$ClassDecl*) $tmp3310));
            panda$core$Object* $tmp3311 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
            org$pandalanguage$pandac$ClassDecl* $tmp3312 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$ClassDecl*) $tmp3311)->rawSuper);
            cl3291 = $tmp3312;
        }
        break;
        default:
        {
            panda$core$Bit $tmp3313 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_base->type);
            panda$core$Bit $tmp3314 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3313);
            if ($tmp3314.value) {
            {
                panda$core$String* $tmp3316 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3315, ((panda$core$Object*) p_base->type));
                panda$core$String* $tmp3318 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3316, &$s3317);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp3318);
                return NULL;
            }
            }
            org$pandalanguage$pandac$ClassDecl* $tmp3319 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_base->type);
            cl3291 = $tmp3319;
        }
    }
    if (((panda$core$Bit) { cl3291 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp3321 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl3291);
    st3320 = $tmp3321;
    org$pandalanguage$pandac$Symbol* $tmp3323 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(st3320, p_name);
    s3322 = $tmp3323;
    if (((panda$core$Bit) { s3322 == NULL }).value) {
    {
        panda$core$String* $tmp3325 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3324, ((panda$core$Object*) p_base->type));
        panda$core$String* $tmp3327 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3325, &$s3326);
        panda$core$String* $tmp3328 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3327, p_name);
        panda$core$String* $tmp3330 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3328, &$s3329);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp3330);
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3331 = org$pandalanguage$pandac$Compiler$symbolRef$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, p_base, s3322, st3320);
    return $tmp3331;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_d) {
    org$pandalanguage$pandac$IRNode* base3335;
    panda$core$Bit $tmp3332 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_d->kind, ((panda$core$Int64) { 108 }));
    PANDA_ASSERT($tmp3332.value);
    panda$core$Int64 $tmp3333 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp3334 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3333, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3334.value);
    panda$core$Object* $tmp3336 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3337 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3336));
    base3335 = $tmp3337;
    if (((panda$core$Bit) { base3335 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp3339 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(base3335->kind, ((panda$core$Int64) { 1037 }));
    bool $tmp3338 = $tmp3339.value;
    if (!$tmp3338) goto $l3340;
    panda$core$Bit $tmp3341 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(base3335->kind, ((panda$core$Int64) { 1024 }));
    $tmp3338 = $tmp3341.value;
    $l3340:;
    panda$core$Bit $tmp3342 = { $tmp3338 };
    if ($tmp3342.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3343 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, base3335);
        base3335 = $tmp3343;
    }
    }
    if (((panda$core$Bit) { base3335 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3344 = org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$String$R$org$pandalanguage$pandac$IRNode$Q(self, p_d->position, base3335, ((panda$core$String*) p_d->payload));
    return $tmp3344;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIdentifier$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_i) {
    org$pandalanguage$pandac$Symbol* s3346;
    panda$core$Bit $tmp3345 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_i->kind, ((panda$core$Int64) { 106 }));
    PANDA_ASSERT($tmp3345.value);
    org$pandalanguage$pandac$Symbol* $tmp3347 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(self->symbolTable, ((panda$core$String*) p_i->payload));
    s3346 = $tmp3347;
    if (((panda$core$Bit) { s3346 == NULL }).value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp3348 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((panda$core$String*) p_i->payload));
        s3346 = ((org$pandalanguage$pandac$Symbol*) $tmp3348);
    }
    }
    if (((panda$core$Bit) { s3346 != NULL }).value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3349 = org$pandalanguage$pandac$Compiler$symbolRef$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q(self, p_i->position, NULL, s3346, self->symbolTable);
        return $tmp3349;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3350 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3350->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3350->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3352 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$String($tmp3350, ((panda$core$Int64) { 1037 }), p_i->position, $tmp3352, ((panda$core$String*) p_i->payload));
    return $tmp3350;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_t) {
    org$pandalanguage$pandac$Type* resolved3353;
    org$pandalanguage$pandac$Type* $tmp3354 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, p_t);
    org$pandalanguage$pandac$Type* $tmp3355 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, $tmp3354);
    resolved3353 = $tmp3355;
    if (((panda$core$Bit) { resolved3353 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3356 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3356->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3356->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3358 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp3356, ((panda$core$Int64) { 1001 }), p_t->position, $tmp3358, resolved3353);
    return $tmp3356;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileRange$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_r) {
    org$pandalanguage$pandac$IRNode* start3366;
    org$pandalanguage$pandac$IRNode* end3374;
    org$pandalanguage$pandac$IRNode* step3382;
    panda$collections$Array* children3389;
    org$pandalanguage$pandac$Position $tmp3397;
    panda$core$Bit $tmp3360 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_r->kind, ((panda$core$Int64) { 105 }));
    bool $tmp3359 = $tmp3360.value;
    if ($tmp3359) goto $l3361;
    panda$core$Bit $tmp3362 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_r->kind, ((panda$core$Int64) { 104 }));
    $tmp3359 = $tmp3362.value;
    $l3361:;
    panda$core$Bit $tmp3363 = { $tmp3359 };
    PANDA_ASSERT($tmp3363.value);
    panda$core$Int64 $tmp3364 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_r->children);
    panda$core$Bit $tmp3365 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3364, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp3365.value);
    panda$core$Object* $tmp3367 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp3368 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp3367)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp3368.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3369 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3369->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3369->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp3371 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3369, ((panda$core$Int64) { 1030 }), p_r->position, $tmp3371);
        start3366 = $tmp3369;
    }
    }
    else {
    {
        panda$core$Object* $tmp3372 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp3373 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3372));
        start3366 = $tmp3373;
        if (((panda$core$Bit) { start3366 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$core$Object* $tmp3375 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp3376 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp3375)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp3376.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3377 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3377->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3377->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp3379 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3377, ((panda$core$Int64) { 1030 }), p_r->position, $tmp3379);
        end3374 = $tmp3377;
    }
    }
    else {
    {
        panda$core$Object* $tmp3380 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$IRNode* $tmp3381 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3380));
        end3374 = $tmp3381;
        if (((panda$core$Bit) { end3374 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$core$Object* $tmp3383 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 2 }));
    panda$core$Bit $tmp3384 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp3383)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp3384.value) {
    {
        step3382 = NULL;
    }
    }
    else {
    {
        panda$core$Object* $tmp3385 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$IRNode* $tmp3386 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3385));
        step3382 = $tmp3386;
        if (((panda$core$Bit) { step3382 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp3387 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(step3382->kind, ((panda$core$Int64) { 1030 }));
        if ($tmp3387.value) {
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, step3382->position, &$s3388);
            return NULL;
        }
        }
    }
    }
    panda$collections$Array* $tmp3390 = (panda$collections$Array*) malloc(40);
    $tmp3390->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3390->refCount.value = 1;
    panda$collections$Array$init($tmp3390);
    children3389 = $tmp3390;
    panda$collections$Array$add$panda$collections$Array$T(children3389, ((panda$core$Object*) start3366));
    panda$collections$Array$add$panda$collections$Array$T(children3389, ((panda$core$Object*) end3374));
    if (((panda$core$Bit) { step3382 != NULL }).value) {
    {
        panda$collections$Array$add$panda$collections$Array$T(children3389, ((panda$core$Object*) step3382));
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3392 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3392->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3392->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3394 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp3394->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp3394->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp3397);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp3394, &$s3396, ((panda$core$Int64) { 17 }), $tmp3397, ((panda$core$Bit) { true }));
    panda$core$Bit $tmp3398 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_r->kind, ((panda$core$Int64) { 104 }));
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3392, ((panda$core$Int64) { 1031 }), p_r->position, $tmp3394, ((panda$core$Object*) wrap_panda$core$Bit($tmp3398)), ((panda$collections$ListView*) children3389));
    return $tmp3392;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$IRNode* $tmp3399 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3399->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3399->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3401 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$String($tmp3399, ((panda$core$Int64) { 1033 }), p_s->position, $tmp3401, ((panda$core$String*) p_s->payload));
    return $tmp3399;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileSelf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$Type* type3406;
    org$pandalanguage$pandac$ClassDecl* cl3407;
    panda$collections$Array* subtypes3414;
    panda$core$MutableString* name3418;
    panda$core$Char8 $tmp3421;
    panda$core$String* separator3422;
    panda$collections$Iterator* p$Iter3424;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* p3436;
    panda$collections$Array* pType3441;
    panda$core$String* pName3444;
    panda$core$Char8 $tmp3454;
    panda$core$Bit $tmp3402 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_s->kind, ((panda$core$Int64) { 114 }));
    PANDA_ASSERT($tmp3402.value);
    panda$core$Object* $tmp3403 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
    panda$core$Bit $tmp3404 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp3403)->annotations);
    if ($tmp3404.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_s->position, &$s3405);
        return NULL;
    }
    }
    panda$core$Object* $tmp3408 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
    cl3407 = ((org$pandalanguage$pandac$ClassDecl*) $tmp3408);
    ITable* $tmp3409 = ((panda$collections$CollectionView*) cl3407->parameters)->$class->itable;
    while ($tmp3409->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp3409 = $tmp3409->next;
    }
    $fn3411 $tmp3410 = $tmp3409->methods[0];
    panda$core$Int64 $tmp3412 = $tmp3410(((panda$collections$CollectionView*) cl3407->parameters));
    panda$core$Bit $tmp3413 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3412, ((panda$core$Int64) { 0 }));
    if ($tmp3413.value) {
    {
        panda$collections$Array* $tmp3415 = (panda$collections$Array*) malloc(40);
        $tmp3415->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp3415->refCount.value = 1;
        panda$collections$Array$init($tmp3415);
        subtypes3414 = $tmp3415;
        org$pandalanguage$pandac$Type* $tmp3417 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl3407);
        panda$collections$Array$add$panda$collections$Array$T(subtypes3414, ((panda$core$Object*) $tmp3417));
        panda$core$MutableString* $tmp3419 = (panda$core$MutableString*) malloc(48);
        $tmp3419->$class = (panda$core$Class*) &panda$core$MutableString$class;
        $tmp3419->refCount.value = 1;
        panda$core$MutableString$init$panda$core$String($tmp3419, ((org$pandalanguage$pandac$Symbol*) cl3407)->name);
        name3418 = $tmp3419;
        panda$core$Char8$init$panda$core$UInt8(&$tmp3421, ((panda$core$UInt8) { 60 }));
        panda$core$MutableString$append$panda$core$Char8(name3418, $tmp3421);
        separator3422 = &$s3423;
        {
            ITable* $tmp3425 = ((panda$collections$Iterable*) cl3407->parameters)->$class->itable;
            while ($tmp3425->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3425 = $tmp3425->next;
            }
            $fn3427 $tmp3426 = $tmp3425->methods[0];
            panda$collections$Iterator* $tmp3428 = $tmp3426(((panda$collections$Iterable*) cl3407->parameters));
            p$Iter3424 = $tmp3428;
            $l3429:;
            ITable* $tmp3431 = p$Iter3424->$class->itable;
            while ($tmp3431->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3431 = $tmp3431->next;
            }
            $fn3433 $tmp3432 = $tmp3431->methods[0];
            panda$core$Bit $tmp3434 = $tmp3432(p$Iter3424);
            panda$core$Bit $tmp3435 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3434);
            if (!$tmp3435.value) goto $l3430;
            {
                ITable* $tmp3437 = p$Iter3424->$class->itable;
                while ($tmp3437->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3437 = $tmp3437->next;
                }
                $fn3439 $tmp3438 = $tmp3437->methods[1];
                panda$core$Object* $tmp3440 = $tmp3438(p$Iter3424);
                p3436 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp3440);
                panda$collections$Array* $tmp3442 = (panda$collections$Array*) malloc(40);
                $tmp3442->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp3442->refCount.value = 1;
                panda$collections$Array$init($tmp3442);
                pType3441 = $tmp3442;
                panda$collections$Array$add$panda$collections$Array$T(pType3441, ((panda$core$Object*) p3436->bound));
                panda$core$String* $tmp3445 = panda$core$String$convert$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) cl3407)->name);
                panda$core$String* $tmp3447 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3445, &$s3446);
                panda$core$String* $tmp3448 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3447, ((org$pandalanguage$pandac$Symbol*) p3436)->name);
                panda$core$String* $tmp3450 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3448, &$s3449);
                pName3444 = $tmp3450;
                panda$core$MutableString$append$panda$core$String(name3418, separator3422);
                panda$core$MutableString$append$panda$core$String(name3418, pName3444);
                org$pandalanguage$pandac$Type* $tmp3451 = (org$pandalanguage$pandac$Type*) malloc(96);
                $tmp3451->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
                $tmp3451->refCount.value = 1;
                org$pandalanguage$pandac$Type$init$org$pandalanguage$pandac$ClassDecl$GenericParameter($tmp3451, p3436);
                panda$collections$Array$add$panda$collections$Array$T(subtypes3414, ((panda$core$Object*) $tmp3451));
                separator3422 = &$s3453;
            }
            goto $l3429;
            $l3430:;
        }
        panda$core$Char8$init$panda$core$UInt8(&$tmp3454, ((panda$core$UInt8) { 62 }));
        panda$core$MutableString$append$panda$core$Char8(name3418, $tmp3454);
        org$pandalanguage$pandac$Type* $tmp3455 = (org$pandalanguage$pandac$Type*) malloc(96);
        $tmp3455->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
        $tmp3455->refCount.value = 1;
        panda$core$String* $tmp3457 = panda$core$MutableString$finish$R$panda$core$String(name3418);
        org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp3455, $tmp3457, ((panda$core$Int64) { 21 }), p_s->position, ((panda$collections$ListView*) subtypes3414), ((panda$core$Bit) { true }));
        type3406 = $tmp3455;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp3458 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl3407);
        type3406 = $tmp3458;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3459 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3459->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3459->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3459, ((panda$core$Int64) { 1025 }), p_s->position, type3406);
    return $tmp3459;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileSuper$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$ClassDecl* cl3465;
    panda$core$Bit $tmp3461 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_s->kind, ((panda$core$Int64) { 115 }));
    PANDA_ASSERT($tmp3461.value);
    panda$core$Object* $tmp3462 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
    panda$core$Bit $tmp3463 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp3462)->annotations);
    if ($tmp3463.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_s->position, &$s3464);
        return NULL;
    }
    }
    panda$core$Object* $tmp3466 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
    cl3465 = ((org$pandalanguage$pandac$ClassDecl*) $tmp3466);
    PANDA_ASSERT(cl3465->resolved.value);
    org$pandalanguage$pandac$IRNode* $tmp3467 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3467->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3467->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3467, ((panda$core$Int64) { 1024 }), p_s->position, cl3465->rawSuper);
    return $tmp3467;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_expr, org$pandalanguage$pandac$Type* p_rawType) {
    org$pandalanguage$pandac$IRNode* value3469;
    panda$core$String$Index$nullable index3471;
    org$pandalanguage$pandac$Type* type3478;
    org$pandalanguage$pandac$IRNode* base3480;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp3483;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp3486;
    org$pandalanguage$pandac$Type* type3490;
    org$pandalanguage$pandac$IRNode* $tmp3470 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr);
    value3469 = $tmp3470;
    if (((panda$core$Bit) { value3469 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$String$Index$nullable $tmp3473 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(((org$pandalanguage$pandac$Symbol*) p_rawType)->name, &$s3472);
    index3471 = $tmp3473;
    panda$core$Bit $tmp3475 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_rawType->typeKind, ((panda$core$Int64) { 10 }));
    bool $tmp3474 = $tmp3475.value;
    if (!$tmp3474) goto $l3476;
    $tmp3474 = ((panda$core$Bit) { index3471.nonnull }).value;
    $l3476:;
    panda$core$Bit $tmp3477 = { $tmp3474 };
    if ($tmp3477.value) {
    {
        PANDA_ASSERT(self->reportErrors.value);
        self->reportErrors = ((panda$core$Bit) { false });
        org$pandalanguage$pandac$Type* $tmp3479 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, p_rawType);
        type3478 = $tmp3479;
        self->reportErrors = ((panda$core$Bit) { true });
        if (((panda$core$Bit) { type3478 == NULL }).value) {
        {
            org$pandalanguage$pandac$Type* $tmp3481 = (org$pandalanguage$pandac$Type*) malloc(96);
            $tmp3481->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp3481->refCount.value = 1;
            panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp3483, ((panda$core$String$Index$nullable) { .nonnull = false }), index3471, ((panda$core$Bit) { false }));
            panda$core$String* $tmp3484 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) p_rawType)->name, $tmp3483);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position($tmp3481, $tmp3484, ((panda$core$Int64) { 10 }), p_position);
            org$pandalanguage$pandac$IRNode* $tmp3485 = org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, p_expr, $tmp3481);
            base3480 = $tmp3485;
            if (((panda$core$Bit) { base3480 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$String$Index $tmp3487 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(((org$pandalanguage$pandac$Symbol*) p_rawType)->name, ((panda$core$String$Index) index3471.value));
            panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp3486, ((panda$core$String$Index$nullable) { $tmp3487, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$core$String* $tmp3488 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) p_rawType)->name, $tmp3486);
            org$pandalanguage$pandac$IRNode* $tmp3489 = org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$String$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, base3480, $tmp3488);
            return $tmp3489;
        }
        }
    }
    }
    org$pandalanguage$pandac$Type* $tmp3491 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, p_rawType);
    type3490 = $tmp3491;
    if (((panda$core$Bit) { type3490 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Int64$nullable $tmp3492 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, value3469, type3490);
    if (((panda$core$Bit) { $tmp3492.nonnull }).value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3493 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, value3469, type3490);
        return $tmp3493;
    }
    }
    panda$core$Bit $tmp3494 = org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, value3469, type3490);
    if ($tmp3494.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3495 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, value3469, p_position, ((panda$core$Bit) { true }), type3490);
        return $tmp3495;
    }
    }
    else {
    {
        panda$core$String* $tmp3497 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3496, ((panda$core$Object*) value3469->type));
        panda$core$String* $tmp3499 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3497, &$s3498);
        panda$core$String* $tmp3501 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3500, ((panda$core$Object*) type3490));
        panda$core$String* $tmp3503 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3501, &$s3502);
        panda$core$String* $tmp3504 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3499, $tmp3503);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp3504);
        return NULL;
    }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_c) {
    panda$core$Bit $tmp3505 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_c->kind, ((panda$core$Int64) { 111 }));
    PANDA_ASSERT($tmp3505.value);
    panda$core$Int64 $tmp3506 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_c->children);
    panda$core$Bit $tmp3507 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3506, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp3507.value);
    panda$core$Object* $tmp3508 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_c->children, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp3509 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_c->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Type* $tmp3510 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, ((org$pandalanguage$pandac$ASTNode*) $tmp3509));
    org$pandalanguage$pandac$IRNode* $tmp3511 = org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_c->position, ((org$pandalanguage$pandac$ASTNode*) $tmp3508), $tmp3510);
    return $tmp3511;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileNull$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_n) {
    panda$core$Bit $tmp3512 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_n->kind, ((panda$core$Int64) { 117 }));
    PANDA_ASSERT($tmp3512.value);
    org$pandalanguage$pandac$IRNode* $tmp3513 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3513->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3513->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3515 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3513, ((panda$core$Int64) { 1030 }), p_n->position, $tmp3515);
    return $tmp3513;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_e) {
    org$pandalanguage$pandac$IRNode* result3520;
    switch (p_e->kind.value) {
        case 103:
        {
            org$pandalanguage$pandac$IRNode* $tmp3516 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3516;
        }
        break;
        case 116:
        {
            org$pandalanguage$pandac$IRNode* $tmp3517 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3517->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3517->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3519 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp3517, ((panda$core$Int64) { 1011 }), p_e->position, $tmp3519, ((panda$core$Bit$wrapper*) p_e->payload)->value);
            return $tmp3517;
        }
        break;
        case 107:
        {
            org$pandalanguage$pandac$IRNode* $tmp3521 = org$pandalanguage$pandac$Compiler$compileCall$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            result3520 = $tmp3521;
            bool $tmp3522 = ((panda$core$Bit) { result3520 != NULL }).value;
            if (!$tmp3522) goto $l3523;
            org$pandalanguage$pandac$Type* $tmp3524 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp3525 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(result3520->type, $tmp3524);
            $tmp3522 = $tmp3525.value;
            $l3523:;
            panda$core$Bit $tmp3526 = { $tmp3522 };
            if ($tmp3526.value) {
            {
                panda$core$Bit $tmp3527 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result3520->kind, ((panda$core$Int64) { 1005 }));
                PANDA_ASSERT($tmp3527.value);
                panda$core$String* $tmp3528 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(((org$pandalanguage$pandac$MethodRef*) result3520->payload)->value);
                panda$core$String* $tmp3530 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3528, &$s3529);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, result3520->position, $tmp3530);
                return NULL;
            }
            }
            return result3520;
        }
        break;
        case 108:
        {
            org$pandalanguage$pandac$IRNode* $tmp3531 = org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3531;
        }
        break;
        case 106:
        {
            org$pandalanguage$pandac$IRNode* $tmp3532 = org$pandalanguage$pandac$Compiler$compileIdentifier$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3532;
        }
        break;
        case 102:
        {
            org$pandalanguage$pandac$IRNode* $tmp3533 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3533->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3533->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3535 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(((panda$core$UInt64$wrapper*) p_e->payload)->value);
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp3533, ((panda$core$Int64) { 1004 }), p_e->position, $tmp3535, ((panda$core$UInt64$wrapper*) p_e->payload)->value);
            return $tmp3533;
        }
        break;
        case 157:
        {
            org$pandalanguage$pandac$IRNode* $tmp3536 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3536->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3536->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3538 = org$pandalanguage$pandac$Type$RealLiteral$panda$core$Real64$R$org$pandalanguage$pandac$Type(((panda$core$Real64$wrapper*) p_e->payload)->value);
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Real64($tmp3536, ((panda$core$Int64) { 1045 }), p_e->position, $tmp3538, ((panda$core$Real64$wrapper*) p_e->payload)->value);
            return $tmp3536;
        }
        break;
        case 112:
        {
            org$pandalanguage$pandac$IRNode* $tmp3539 = org$pandalanguage$pandac$Compiler$compilePrefix$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3539;
        }
        break;
        case 104:
        case 105:
        {
            org$pandalanguage$pandac$IRNode* $tmp3540 = org$pandalanguage$pandac$Compiler$compileRange$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3540;
        }
        break;
        case 113:
        {
            org$pandalanguage$pandac$IRNode* $tmp3541 = org$pandalanguage$pandac$Compiler$compileString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3541;
        }
        break;
        case 109:
        case 154:
        case 110:
        {
            org$pandalanguage$pandac$IRNode* $tmp3542 = org$pandalanguage$pandac$Compiler$compileType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3542;
        }
        break;
        case 114:
        {
            org$pandalanguage$pandac$IRNode* $tmp3543 = org$pandalanguage$pandac$Compiler$compileSelf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3543;
        }
        break;
        case 115:
        {
            org$pandalanguage$pandac$IRNode* $tmp3544 = org$pandalanguage$pandac$Compiler$compileSuper$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3544;
        }
        break;
        case 111:
        {
            org$pandalanguage$pandac$IRNode* $tmp3545 = org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3545;
        }
        break;
        case 117:
        {
            org$pandalanguage$pandac$IRNode* $tmp3546 = org$pandalanguage$pandac$Compiler$compileNull$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode(self, p_e);
            return $tmp3546;
        }
        break;
    }
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBlock$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_b) {
    org$pandalanguage$pandac$SymbolTable* symbols3548;
    panda$collections$Array* result3551;
    panda$collections$Iterator* stmt$Iter3554;
    org$pandalanguage$pandac$ASTNode* stmt3566;
    org$pandalanguage$pandac$IRNode* compiled3571;
    panda$core$Bit $tmp3547 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_b->kind, ((panda$core$Int64) { 126 }));
    PANDA_ASSERT($tmp3547.value);
    org$pandalanguage$pandac$SymbolTable* $tmp3549 = (org$pandalanguage$pandac$SymbolTable*) malloc(48);
    $tmp3549->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp3549->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp3549, self->symbolTable);
    symbols3548 = $tmp3549;
    self->symbolTable = symbols3548;
    panda$collections$Array* $tmp3552 = (panda$collections$Array*) malloc(40);
    $tmp3552->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3552->refCount.value = 1;
    panda$collections$Array$init($tmp3552);
    result3551 = $tmp3552;
    if (((panda$core$Bit) { p_b->children != NULL }).value) {
    {
        {
            ITable* $tmp3555 = ((panda$collections$Iterable*) p_b->children)->$class->itable;
            while ($tmp3555->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3555 = $tmp3555->next;
            }
            $fn3557 $tmp3556 = $tmp3555->methods[0];
            panda$collections$Iterator* $tmp3558 = $tmp3556(((panda$collections$Iterable*) p_b->children));
            stmt$Iter3554 = $tmp3558;
            $l3559:;
            ITable* $tmp3561 = stmt$Iter3554->$class->itable;
            while ($tmp3561->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3561 = $tmp3561->next;
            }
            $fn3563 $tmp3562 = $tmp3561->methods[0];
            panda$core$Bit $tmp3564 = $tmp3562(stmt$Iter3554);
            panda$core$Bit $tmp3565 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3564);
            if (!$tmp3565.value) goto $l3560;
            {
                ITable* $tmp3567 = stmt$Iter3554->$class->itable;
                while ($tmp3567->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3567 = $tmp3567->next;
                }
                $fn3569 $tmp3568 = $tmp3567->methods[1];
                panda$core$Object* $tmp3570 = $tmp3568(stmt$Iter3554);
                stmt3566 = ((org$pandalanguage$pandac$ASTNode*) $tmp3570);
                org$pandalanguage$pandac$IRNode* $tmp3572 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, stmt3566);
                compiled3571 = $tmp3572;
                if (((panda$core$Bit) { compiled3571 == NULL }).value) {
                {
                    panda$core$Object* $tmp3573 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(symbols3548->parents, ((panda$core$Int64) { 0 }));
                    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp3573);
                    return NULL;
                }
                }
                panda$core$Bit $tmp3574 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(compiled3571->kind, ((panda$core$Int64) { 1039 }));
                PANDA_ASSERT($tmp3574.value);
                panda$collections$Array$add$panda$collections$Array$T(result3551, ((panda$core$Object*) compiled3571));
            }
            goto $l3559;
            $l3560:;
        }
    }
    }
    panda$core$Object* $tmp3575 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(symbols3548->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp3575);
    org$pandalanguage$pandac$IRNode* $tmp3576 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3576->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3576->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3576, ((panda$core$Int64) { 1000 }), p_b->position, ((panda$collections$ListView*) result3551));
    return $tmp3576;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_i) {
    org$pandalanguage$pandac$IRNode* test3586;
    org$pandalanguage$pandac$IRNode* ifTrue3591;
    panda$collections$Array* children3594;
    org$pandalanguage$pandac$IRNode* ifFalse3599;
    panda$core$Bit $tmp3578 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_i->kind, ((panda$core$Int64) { 118 }));
    PANDA_ASSERT($tmp3578.value);
    panda$core$Int64 $tmp3580 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_i->children);
    panda$core$Bit $tmp3581 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3580, ((panda$core$Int64) { 2 }));
    bool $tmp3579 = $tmp3581.value;
    if ($tmp3579) goto $l3582;
    panda$core$Int64 $tmp3583 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_i->children);
    panda$core$Bit $tmp3584 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3583, ((panda$core$Int64) { 3 }));
    $tmp3579 = $tmp3584.value;
    $l3582:;
    panda$core$Bit $tmp3585 = { $tmp3579 };
    PANDA_ASSERT($tmp3585.value);
    panda$core$Object* $tmp3587 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_i->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3588 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3587));
    org$pandalanguage$pandac$Type* $tmp3589 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp3590 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3588, $tmp3589);
    test3586 = $tmp3590;
    if (((panda$core$Bit) { test3586 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Object* $tmp3592 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_i->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp3593 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3592));
    ifTrue3591 = $tmp3593;
    if (((panda$core$Bit) { ifTrue3591 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3595 = (panda$collections$Array*) malloc(40);
    $tmp3595->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3595->refCount.value = 1;
    panda$collections$Array$init($tmp3595);
    children3594 = $tmp3595;
    panda$collections$Array$add$panda$collections$Array$T(children3594, ((panda$core$Object*) test3586));
    panda$collections$Array$add$panda$collections$Array$T(children3594, ((panda$core$Object*) ifTrue3591));
    panda$core$Int64 $tmp3597 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_i->children);
    panda$core$Bit $tmp3598 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3597, ((panda$core$Int64) { 3 }));
    if ($tmp3598.value) {
    {
        panda$core$Object* $tmp3600 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_i->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$IRNode* $tmp3601 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3600));
        ifFalse3599 = $tmp3601;
        if (((panda$core$Bit) { ifFalse3599 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children3594, ((panda$core$Object*) ifFalse3599));
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3602 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3602->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3602->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3602, ((panda$core$Int64) { 1012 }), p_i->position, ((panda$collections$ListView*) children3594));
    return $tmp3602;
}
panda$core$Bit org$pandalanguage$pandac$Compiler$checkSteppedRangeTypes$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$Type* p_type) {
    panda$core$Bit $tmp3604 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp3604.value) {
    {
        panda$core$Object* $tmp3605 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp3606 = org$pandalanguage$pandac$Compiler$checkSteppedRangeTypes$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_position, ((org$pandalanguage$pandac$Type*) $tmp3605));
        return $tmp3606;
    }
    }
    panda$core$Bit $tmp3608 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(p_type);
    bool $tmp3607 = $tmp3608.value;
    if (!$tmp3607) goto $l3609;
    panda$core$Object* $tmp3610 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Type* $tmp3611 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp3610));
    panda$core$Object* $tmp3612 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, ((panda$core$Int64) { 2 }));
    panda$core$Bit $tmp3613 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp3611, ((org$pandalanguage$pandac$Type*) $tmp3612));
    $tmp3607 = $tmp3613.value;
    $l3609:;
    panda$core$Bit $tmp3614 = { $tmp3607 };
    if ($tmp3614.value) {
    {
        panda$core$String* $tmp3616 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3615, ((panda$core$Object*) p_type));
        panda$core$String* $tmp3618 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3616, &$s3617);
        panda$core$String* $tmp3620 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3618, &$s3619);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp3620);
        return ((panda$core$Bit) { false });
    }
    }
    return ((panda$core$Bit) { true });
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileRangeFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, panda$core$String* p_label, org$pandalanguage$pandac$ASTNode* p_astTarget, org$pandalanguage$pandac$IRNode* p_rawList, org$pandalanguage$pandac$ASTNode* p_body) {
    org$pandalanguage$pandac$Type* elementType3621;
    org$pandalanguage$pandac$IRNode* list3622;
    org$pandalanguage$pandac$Type* t3634;
    org$pandalanguage$pandac$Type* listType3667;
    org$pandalanguage$pandac$Compiler$CompileTargetResult* target3699;
    org$pandalanguage$pandac$IRNode* body3701;
    panda$collections$Array* children3703;
    panda$core$Bit $tmp3625 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_astTarget->kind, ((panda$core$Int64) { 106 }));
    bool $tmp3624 = $tmp3625.value;
    if (!$tmp3624) goto $l3626;
    $tmp3624 = ((panda$core$Bit) { p_astTarget->children != NULL }).value;
    $l3626:;
    panda$core$Bit $tmp3627 = { $tmp3624 };
    bool $tmp3623 = $tmp3627.value;
    if (!$tmp3623) goto $l3628;
    panda$core$Int64 $tmp3629 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_astTarget->children);
    panda$core$Bit $tmp3630 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3629, ((panda$core$Int64) { 0 }));
    $tmp3623 = $tmp3630.value;
    $l3628:;
    panda$core$Bit $tmp3631 = { $tmp3623 };
    if ($tmp3631.value) {
    {
        panda$core$Int64 $tmp3632 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_astTarget->children);
        panda$core$Bit $tmp3633 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3632, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp3633.value);
        panda$core$Object* $tmp3635 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_astTarget->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Type* $tmp3636 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, ((org$pandalanguage$pandac$ASTNode*) $tmp3635));
        org$pandalanguage$pandac$Type* $tmp3637 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, $tmp3636);
        t3634 = $tmp3637;
        panda$core$Bit $tmp3638 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(t3634->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp3638.value) {
        {
            panda$core$String* $tmp3640 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3639, ((panda$core$Object*) t3634));
            panda$core$String* $tmp3642 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3640, &$s3641);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_astTarget->position, $tmp3642);
            return NULL;
        }
        }
        panda$core$Bit $tmp3643 = org$pandalanguage$pandac$Type$isNumeric$R$panda$core$Bit(t3634);
        panda$core$Bit $tmp3644 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3643);
        if ($tmp3644.value) {
        {
            panda$core$String* $tmp3646 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3645, ((panda$core$Object*) t3634));
            panda$core$String* $tmp3648 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3646, &$s3647);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_astTarget->position, $tmp3648);
            return NULL;
        }
        }
        panda$core$Bit $tmp3649 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_rawList->kind, ((panda$core$Int64) { 1031 }));
        if ($tmp3649.value) {
        {
            panda$core$Int64 $tmp3650 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_rawList->children);
            panda$core$Bit $tmp3651 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3650, ((panda$core$Int64) { 2 }));
            if ($tmp3651.value) {
            {
                org$pandalanguage$pandac$Type* $tmp3652 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3634);
                org$pandalanguage$pandac$IRNode* $tmp3653 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, $tmp3652);
                list3622 = $tmp3653;
            }
            }
            else {
            {
                panda$core$Int64 $tmp3654 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_rawList->children);
                panda$core$Bit $tmp3655 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3654, ((panda$core$Int64) { 3 }));
                PANDA_ASSERT($tmp3655.value);
                org$pandalanguage$pandac$Type* $tmp3656 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3634);
                org$pandalanguage$pandac$IRNode* $tmp3657 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, $tmp3656);
                list3622 = $tmp3657;
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp3658 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(p_rawList->type);
        if ($tmp3658.value) {
        {
            org$pandalanguage$pandac$Type* $tmp3659 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3634);
            org$pandalanguage$pandac$IRNode* $tmp3660 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, $tmp3659);
            list3622 = $tmp3660;
        }
        }
        else {
        org$pandalanguage$pandac$Type* $tmp3661 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3634);
        panda$core$Int64$nullable $tmp3662 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_rawList, $tmp3661);
        if (((panda$core$Bit) { $tmp3662.nonnull }).value) {
        {
            org$pandalanguage$pandac$Type* $tmp3663 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3634);
            org$pandalanguage$pandac$IRNode* $tmp3664 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, $tmp3663);
            list3622 = $tmp3664;
        }
        }
        else {
        {
            org$pandalanguage$pandac$Type* $tmp3665 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3634);
            org$pandalanguage$pandac$IRNode* $tmp3666 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, $tmp3665);
            list3622 = $tmp3666;
        }
        }
        }
        }
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp3668 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_rawList);
        listType3667 = $tmp3668;
        panda$core$Bit $tmp3670 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(listType3667);
        bool $tmp3669 = $tmp3670.value;
        if ($tmp3669) goto $l3671;
        panda$core$Bit $tmp3672 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(listType3667);
        $tmp3669 = $tmp3672.value;
        $l3671:;
        panda$core$Bit $tmp3673 = { $tmp3669 };
        PANDA_ASSERT($tmp3673.value);
        panda$core$Object* $tmp3674 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(listType3667->subtypes, ((panda$core$Int64) { 1 }));
        panda$core$Bit $tmp3675 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3674)->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp3675.value) {
        {
            panda$core$Bit $tmp3676 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(listType3667);
            if ($tmp3676.value) {
            {
                panda$core$Object* $tmp3677 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(listType3667->subtypes, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$Type* $tmp3678 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp3677));
                org$pandalanguage$pandac$Type* $tmp3679 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp3678);
                listType3667 = $tmp3679;
            }
            }
            else {
            {
                panda$core$Object* $tmp3680 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(listType3667->subtypes, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$Type* $tmp3681 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp3680));
                org$pandalanguage$pandac$Type* $tmp3682 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp3681);
                listType3667 = $tmp3682;
            }
            }
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp3683 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, listType3667);
        list3622 = $tmp3683;
    }
    }
    if (((panda$core$Bit) { list3622 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp3684 = org$pandalanguage$pandac$Compiler$checkSteppedRangeTypes$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, list3622->position, list3622->type);
    panda$core$Bit $tmp3685 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3684);
    if ($tmp3685.value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp3686 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(list3622->type->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp3686.value) {
    {
        panda$core$Object* $tmp3687 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(list3622->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp3688 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3687)->typeKind, ((panda$core$Int64) { 21 }));
        PANDA_ASSERT($tmp3688.value);
        panda$core$Object* $tmp3689 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(list3622->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3690 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$Type*) $tmp3689)->subtypes, ((panda$core$Int64) { 1 }));
        elementType3621 = ((org$pandalanguage$pandac$Type*) $tmp3690);
    }
    }
    else {
    {
        panda$core$Bit $tmp3691 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(list3622->type->typeKind, ((panda$core$Int64) { 21 }));
        PANDA_ASSERT($tmp3691.value);
        panda$core$Object* $tmp3692 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(list3622->type->subtypes, ((panda$core$Int64) { 1 }));
        elementType3621 = ((org$pandalanguage$pandac$Type*) $tmp3692);
    }
    }
    panda$core$Bit $tmp3693 = org$pandalanguage$pandac$Type$isNumeric$R$panda$core$Bit(elementType3621);
    panda$core$Bit $tmp3694 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3693);
    if ($tmp3694.value) {
    {
        panda$core$String* $tmp3696 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3695, ((panda$core$Object*) list3622->type));
        panda$core$String* $tmp3698 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3696, &$s3697);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, list3622->position, $tmp3698);
    }
    }
    org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp3700 = org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(self, p_astTarget, ((panda$core$Int64) { 10001 }), NULL, elementType3621);
    target3699 = $tmp3700;
    if (((panda$core$Bit) { target3699 == NULL }).value) {
    {
        return NULL;
    }
    }
    PANDA_ASSERT(((panda$core$Bit) { target3699->value == NULL }).value);
    org$pandalanguage$pandac$IRNode* $tmp3702 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_body);
    body3701 = $tmp3702;
    if (((panda$core$Bit) { body3701 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3704 = (panda$collections$Array*) malloc(40);
    $tmp3704->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3704->refCount.value = 1;
    panda$collections$Array$init($tmp3704);
    children3703 = $tmp3704;
    panda$collections$Array$add$panda$collections$Array$T(children3703, ((panda$core$Object*) target3699->target));
    panda$collections$Array$add$panda$collections$Array$T(children3703, ((panda$core$Object*) list3622));
    panda$collections$Array$add$panda$collections$Array$T(children3703, ((panda$core$Object*) body3701));
    org$pandalanguage$pandac$IRNode* $tmp3706 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3706->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3706->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3706, ((panda$core$Int64) { 1029 }), p_position, ((panda$core$Object*) p_label), ((panda$collections$ListView*) children3703));
    return $tmp3706;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIteratorFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, panda$core$String* p_label, org$pandalanguage$pandac$ASTNode* p_astTarget, org$pandalanguage$pandac$IRNode* p_iterator, org$pandalanguage$pandac$ASTNode* p_body) {
    org$pandalanguage$pandac$Compiler$CompileTargetResult* target3715;
    org$pandalanguage$pandac$Variable* targetVar3719;
    panda$collections$Array* subtypes3720;
    org$pandalanguage$pandac$Type* iterType3724;
    org$pandalanguage$pandac$Variable* iter3735;
    panda$collections$Array* statements3740;
    panda$collections$Array* declChildren3743;
    panda$collections$Array* varChildren3748;
    panda$collections$Array* whileChildren3755;
    org$pandalanguage$pandac$IRNode* done3758;
    org$pandalanguage$pandac$IRNode* notCall3765;
    panda$collections$Array* valueDeclChildren3770;
    org$pandalanguage$pandac$IRNode* next3775;
    panda$collections$Array* valueVarChildren3782;
    org$pandalanguage$pandac$IRNode* block3787;
    panda$collections$Array* blockChildren3789;
    panda$core$Bit $tmp3709 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_iterator->type->typeKind, ((panda$core$Int64) { 21 }));
    bool $tmp3708 = $tmp3709.value;
    if (!$tmp3708) goto $l3710;
    panda$core$Object* $tmp3711 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_iterator->type->subtypes, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp3712 = org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp3713 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3711), $tmp3712);
    $tmp3708 = $tmp3713.value;
    $l3710:;
    panda$core$Bit $tmp3714 = { $tmp3708 };
    PANDA_ASSERT($tmp3714.value);
    panda$core$Object* $tmp3716 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_iterator->type->subtypes, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp3717 = org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(self, p_astTarget, ((panda$core$Int64) { 10001 }), NULL, ((org$pandalanguage$pandac$Type*) $tmp3716));
    target3715 = $tmp3717;
    if (((panda$core$Bit) { target3715 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp3718 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(target3715->target->kind, ((panda$core$Int64) { 1016 }));
    PANDA_ASSERT($tmp3718.value);
    targetVar3719 = ((org$pandalanguage$pandac$Variable*) target3715->target->payload);
    panda$collections$Array* $tmp3721 = (panda$collections$Array*) malloc(40);
    $tmp3721->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3721->refCount.value = 1;
    panda$collections$Array$init($tmp3721);
    subtypes3720 = $tmp3721;
    org$pandalanguage$pandac$Type* $tmp3723 = org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type();
    panda$collections$Array$add$panda$collections$Array$T(subtypes3720, ((panda$core$Object*) $tmp3723));
    panda$collections$Array$add$panda$collections$Array$T(subtypes3720, ((panda$core$Object*) target3715->target->type));
    org$pandalanguage$pandac$Type* $tmp3725 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp3725->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp3725->refCount.value = 1;
    panda$core$Object* $tmp3727 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(subtypes3720, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3728 = org$pandalanguage$pandac$Type$convert$R$panda$core$String(((org$pandalanguage$pandac$Type*) $tmp3727));
    panda$core$String* $tmp3730 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3728, &$s3729);
    panda$core$Object* $tmp3731 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(subtypes3720, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp3732 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3730, ((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp3731)));
    panda$core$String* $tmp3734 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3732, &$s3733);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp3725, $tmp3734, ((panda$core$Int64) { 21 }), p_position, ((panda$collections$ListView*) subtypes3720), ((panda$core$Bit) { true }));
    iterType3724 = $tmp3725;
    org$pandalanguage$pandac$Variable* $tmp3736 = (org$pandalanguage$pandac$Variable*) malloc(88);
    $tmp3736->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
    $tmp3736->refCount.value = 1;
    panda$core$String* $tmp3739 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) targetVar3719)->name, &$s3738);
    org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type($tmp3736, p_iterator->position, ((panda$core$Int64) { 10001 }), $tmp3739, iterType3724);
    iter3735 = $tmp3736;
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->symbolTable, ((org$pandalanguage$pandac$Symbol*) iter3735));
    panda$collections$Array* $tmp3741 = (panda$collections$Array*) malloc(40);
    $tmp3741->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3741->refCount.value = 1;
    panda$collections$Array$init($tmp3741);
    statements3740 = $tmp3741;
    panda$collections$Array* $tmp3744 = (panda$collections$Array*) malloc(40);
    $tmp3744->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3744->refCount.value = 1;
    panda$collections$Array$init($tmp3744);
    declChildren3743 = $tmp3744;
    org$pandalanguage$pandac$IRNode* $tmp3746 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3746->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3746->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3746, ((panda$core$Int64) { 1016 }), p_iterator->position, iter3735->type, iter3735);
    panda$collections$Array$add$panda$collections$Array$T(declChildren3743, ((panda$core$Object*) $tmp3746));
    panda$collections$Array$add$panda$collections$Array$T(declChildren3743, ((panda$core$Object*) p_iterator));
    panda$collections$Array* $tmp3749 = (panda$collections$Array*) malloc(40);
    $tmp3749->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3749->refCount.value = 1;
    panda$collections$Array$init($tmp3749);
    varChildren3748 = $tmp3749;
    org$pandalanguage$pandac$IRNode* $tmp3751 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3751->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3751->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3751, ((panda$core$Int64) { 1021 }), ((org$pandalanguage$pandac$Symbol*) iter3735)->position, ((panda$collections$ListView*) declChildren3743));
    panda$collections$Array$add$panda$collections$Array$T(varChildren3748, ((panda$core$Object*) $tmp3751));
    org$pandalanguage$pandac$IRNode* $tmp3753 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3753->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3753->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3753, ((panda$core$Int64) { 1018 }), ((org$pandalanguage$pandac$Symbol*) iter3735)->position, ((panda$collections$ListView*) varChildren3748));
    panda$collections$Array$add$panda$collections$Array$T(statements3740, ((panda$core$Object*) $tmp3753));
    panda$collections$Array* $tmp3756 = (panda$collections$Array*) malloc(40);
    $tmp3756->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3756->refCount.value = 1;
    panda$collections$Array$init($tmp3756);
    whileChildren3755 = $tmp3756;
    org$pandalanguage$pandac$IRNode* $tmp3759 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3759->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3759->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3759, ((panda$core$Int64) { 1016 }), ((org$pandalanguage$pandac$Symbol*) iter3735)->position, iter3735->type, iter3735);
    panda$collections$Array* $tmp3762 = (panda$collections$Array*) malloc(40);
    $tmp3762->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3762->refCount.value = 1;
    panda$collections$Array$init($tmp3762);
    org$pandalanguage$pandac$IRNode* $tmp3764 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3759, &$s3761, ((panda$collections$ListView*) $tmp3762), NULL);
    done3758 = $tmp3764;
    if (((panda$core$Bit) { done3758 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3767 = (panda$collections$Array*) malloc(40);
    $tmp3767->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3767->refCount.value = 1;
    panda$collections$Array$init($tmp3767);
    org$pandalanguage$pandac$IRNode* $tmp3769 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, done3758, &$s3766, ((panda$collections$ListView*) $tmp3767), NULL);
    notCall3765 = $tmp3769;
    if (((panda$core$Bit) { notCall3765 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(whileChildren3755, ((panda$core$Object*) notCall3765));
    panda$collections$Array* $tmp3771 = (panda$collections$Array*) malloc(40);
    $tmp3771->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3771->refCount.value = 1;
    panda$collections$Array$init($tmp3771);
    valueDeclChildren3770 = $tmp3771;
    org$pandalanguage$pandac$IRNode* $tmp3773 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3773->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3773->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3773, ((panda$core$Int64) { 1016 }), p_iterator->position, targetVar3719->type, targetVar3719);
    panda$collections$Array$add$panda$collections$Array$T(valueDeclChildren3770, ((panda$core$Object*) $tmp3773));
    org$pandalanguage$pandac$IRNode* $tmp3776 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3776->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3776->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3776, ((panda$core$Int64) { 1016 }), p_iterator->position, iter3735->type, iter3735);
    panda$collections$Array* $tmp3779 = (panda$collections$Array*) malloc(40);
    $tmp3779->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3779->refCount.value = 1;
    panda$collections$Array$init($tmp3779);
    org$pandalanguage$pandac$IRNode* $tmp3781 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3776, &$s3778, ((panda$collections$ListView*) $tmp3779), NULL);
    next3775 = $tmp3781;
    PANDA_ASSERT(((panda$core$Bit) { next3775 != NULL }).value);
    panda$collections$Array$add$panda$collections$Array$T(valueDeclChildren3770, ((panda$core$Object*) next3775));
    panda$collections$Array* $tmp3783 = (panda$collections$Array*) malloc(40);
    $tmp3783->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3783->refCount.value = 1;
    panda$collections$Array$init($tmp3783);
    valueVarChildren3782 = $tmp3783;
    org$pandalanguage$pandac$IRNode* $tmp3785 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3785->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3785->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3785, ((panda$core$Int64) { 1021 }), p_iterator->position, ((panda$collections$ListView*) valueDeclChildren3770));
    panda$collections$Array$add$panda$collections$Array$T(valueVarChildren3782, ((panda$core$Object*) $tmp3785));
    org$pandalanguage$pandac$IRNode* $tmp3788 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_body);
    block3787 = $tmp3788;
    if (((panda$core$Bit) { block3787 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3790 = (panda$collections$Array*) malloc(40);
    $tmp3790->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3790->refCount.value = 1;
    panda$collections$Array$init($tmp3790);
    blockChildren3789 = $tmp3790;
    org$pandalanguage$pandac$IRNode* $tmp3792 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3792->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3792->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3792, ((panda$core$Int64) { 1018 }), p_iterator->position, ((panda$collections$ListView*) valueVarChildren3782));
    panda$collections$Array$add$panda$collections$Array$T(blockChildren3789, ((panda$core$Object*) $tmp3792));
    panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(blockChildren3789, ((panda$collections$CollectionView*) block3787->children));
    org$pandalanguage$pandac$IRNode* $tmp3794 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3794->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3794->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3794, ((panda$core$Int64) { 1000 }), block3787->position, ((panda$collections$ListView*) blockChildren3789));
    block3787 = $tmp3794;
    panda$collections$Array$add$panda$collections$Array$T(whileChildren3755, ((panda$core$Object*) block3787));
    org$pandalanguage$pandac$IRNode* $tmp3796 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3796->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3796->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3796, ((panda$core$Int64) { 1013 }), p_iterator->position, ((panda$core$Object*) p_label), ((panda$collections$ListView*) whileChildren3755));
    panda$collections$Array$add$panda$collections$Array$T(statements3740, ((panda$core$Object*) $tmp3796));
    org$pandalanguage$pandac$IRNode* $tmp3798 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3798->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3798->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3798, ((panda$core$Int64) { 1000 }), p_iterator->position, ((panda$collections$ListView*) statements3740));
    return $tmp3798;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileFor$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_f) {
    org$pandalanguage$pandac$IRNode* list3803;
    org$pandalanguage$pandac$SymbolTable* symbols3806;
    org$pandalanguage$pandac$IRNode* result3809;
    panda$core$Bit found3823;
    panda$collections$Iterator* intf$Iter3824;
    org$pandalanguage$pandac$Type* intf3837;
    org$pandalanguage$pandac$IRNode* iterator3849;
    org$pandalanguage$pandac$IRNode* iterable3861;
    org$pandalanguage$pandac$IRNode* iterator3863;
    panda$core$Bit $tmp3800 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_f->kind, ((panda$core$Int64) { 119 }));
    PANDA_ASSERT($tmp3800.value);
    panda$core$Int64 $tmp3801 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_f->children);
    panda$core$Bit $tmp3802 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3801, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp3802.value);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loops, ((panda$core$Object*) ((panda$core$String*) p_f->payload)));
    panda$core$Object* $tmp3804 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp3805 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3804));
    list3803 = $tmp3805;
    if (((panda$core$Bit) { list3803 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp3807 = (org$pandalanguage$pandac$SymbolTable*) malloc(48);
    $tmp3807->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp3807->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp3807, self->symbolTable);
    symbols3806 = $tmp3807;
    self->symbolTable = symbols3806;
    panda$core$Bit $tmp3812 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(list3803->kind, ((panda$core$Int64) { 1031 }));
    bool $tmp3811 = $tmp3812.value;
    if ($tmp3811) goto $l3813;
    panda$core$Bit $tmp3814 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(list3803->type);
    $tmp3811 = $tmp3814.value;
    $l3813:;
    panda$core$Bit $tmp3815 = { $tmp3811 };
    bool $tmp3810 = $tmp3815.value;
    if ($tmp3810) goto $l3816;
    panda$core$Bit $tmp3817 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(list3803->type);
    $tmp3810 = $tmp3817.value;
    $l3816:;
    panda$core$Bit $tmp3818 = { $tmp3810 };
    if ($tmp3818.value) {
    {
        panda$core$Object* $tmp3819 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3820 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$IRNode* $tmp3821 = org$pandalanguage$pandac$Compiler$compileRangeFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->position, ((panda$core$String*) p_f->payload), ((org$pandalanguage$pandac$ASTNode*) $tmp3819), list3803, ((org$pandalanguage$pandac$ASTNode*) $tmp3820));
        result3809 = $tmp3821;
    }
    }
    else {
    {
        org$pandalanguage$pandac$IRNode* $tmp3822 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, list3803);
        list3803 = $tmp3822;
        if (((panda$core$Bit) { list3803 == NULL }).value) {
        {
            return NULL;
        }
        }
        found3823 = ((panda$core$Bit) { false });
        {
            panda$collections$Set* $tmp3825 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self, list3803->type);
            ITable* $tmp3826 = ((panda$collections$Iterable*) $tmp3825)->$class->itable;
            while ($tmp3826->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3826 = $tmp3826->next;
            }
            $fn3828 $tmp3827 = $tmp3826->methods[0];
            panda$collections$Iterator* $tmp3829 = $tmp3827(((panda$collections$Iterable*) $tmp3825));
            intf$Iter3824 = $tmp3829;
            $l3830:;
            ITable* $tmp3832 = intf$Iter3824->$class->itable;
            while ($tmp3832->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3832 = $tmp3832->next;
            }
            $fn3834 $tmp3833 = $tmp3832->methods[0];
            panda$core$Bit $tmp3835 = $tmp3833(intf$Iter3824);
            panda$core$Bit $tmp3836 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3835);
            if (!$tmp3836.value) goto $l3831;
            {
                ITable* $tmp3838 = intf$Iter3824->$class->itable;
                while ($tmp3838->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3838 = $tmp3838->next;
                }
                $fn3840 $tmp3839 = $tmp3838->methods[1];
                panda$core$Object* $tmp3841 = $tmp3839(intf$Iter3824);
                intf3837 = ((org$pandalanguage$pandac$Type*) $tmp3841);
                panda$core$Bit $tmp3843 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(intf3837->typeKind, ((panda$core$Int64) { 21 }));
                bool $tmp3842 = $tmp3843.value;
                if (!$tmp3842) goto $l3844;
                panda$core$Object* $tmp3845 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(intf3837->subtypes, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp3846 = org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp3847 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3845), $tmp3846);
                $tmp3842 = $tmp3847.value;
                $l3844:;
                panda$core$Bit $tmp3848 = { $tmp3842 };
                if ($tmp3848.value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp3850 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, list3803, intf3837);
                    iterator3849 = $tmp3850;
                    panda$core$Object* $tmp3851 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
                    panda$core$Object* $tmp3852 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 2 }));
                    org$pandalanguage$pandac$IRNode* $tmp3853 = org$pandalanguage$pandac$Compiler$compileIteratorFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->position, ((panda$core$String*) p_f->payload), ((org$pandalanguage$pandac$ASTNode*) $tmp3851), iterator3849, ((org$pandalanguage$pandac$ASTNode*) $tmp3852));
                    result3809 = $tmp3853;
                    found3823 = ((panda$core$Bit) { true });
                    goto $l3831;
                }
                }
                panda$core$Bit $tmp3855 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(intf3837->typeKind, ((panda$core$Int64) { 21 }));
                bool $tmp3854 = $tmp3855.value;
                if (!$tmp3854) goto $l3856;
                panda$core$Object* $tmp3857 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(intf3837->subtypes, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp3858 = org$pandalanguage$pandac$Type$Iterable$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp3859 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3857), $tmp3858);
                $tmp3854 = $tmp3859.value;
                $l3856:;
                panda$core$Bit $tmp3860 = { $tmp3854 };
                if ($tmp3860.value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp3862 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, list3803, intf3837);
                    iterable3861 = $tmp3862;
                    panda$collections$Array* $tmp3865 = (panda$collections$Array*) malloc(40);
                    $tmp3865->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp3865->refCount.value = 1;
                    panda$collections$Array$init($tmp3865);
                    org$pandalanguage$pandac$IRNode* $tmp3867 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, iterable3861, &$s3864, ((panda$collections$ListView*) $tmp3865));
                    iterator3863 = $tmp3867;
                    panda$core$Object* $tmp3868 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
                    panda$core$Object* $tmp3869 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 2 }));
                    org$pandalanguage$pandac$IRNode* $tmp3870 = org$pandalanguage$pandac$Compiler$compileIteratorFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->position, ((panda$core$String*) p_f->payload), ((org$pandalanguage$pandac$ASTNode*) $tmp3868), iterator3863, ((org$pandalanguage$pandac$ASTNode*) $tmp3869));
                    result3809 = $tmp3870;
                    found3823 = ((panda$core$Bit) { true });
                    goto $l3831;
                }
                }
            }
            goto $l3830;
            $l3831:;
        }
        panda$core$Bit $tmp3871 = panda$core$Bit$$NOT$R$panda$core$Bit(found3823);
        if ($tmp3871.value) {
        {
            panda$core$String* $tmp3873 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3872, ((panda$core$Object*) list3803->type));
            panda$core$String* $tmp3875 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3873, &$s3874);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, list3803->position, $tmp3875);
            return NULL;
        }
        }
    }
    }
    panda$core$Object* $tmp3876 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(symbols3806->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp3876);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
    return result3809;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileWhile$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_w) {
    org$pandalanguage$pandac$IRNode* test3880;
    org$pandalanguage$pandac$IRNode* stmt3885;
    panda$collections$Array* children3888;
    panda$core$Bit $tmp3877 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_w->kind, ((panda$core$Int64) { 121 }));
    PANDA_ASSERT($tmp3877.value);
    panda$core$Int64 $tmp3878 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Bit $tmp3879 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3878, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp3879.value);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loops, ((panda$core$Object*) ((panda$core$String*) p_w->payload)));
    panda$core$Object* $tmp3881 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3882 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3881));
    org$pandalanguage$pandac$Type* $tmp3883 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp3884 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3882, $tmp3883);
    test3880 = $tmp3884;
    if (((panda$core$Bit) { test3880 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$core$Object* $tmp3886 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp3887 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3886));
    stmt3885 = $tmp3887;
    if (((panda$core$Bit) { stmt3885 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$collections$Array* $tmp3889 = (panda$collections$Array*) malloc(40);
    $tmp3889->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3889->refCount.value = 1;
    panda$collections$Array$init$panda$core$Int64($tmp3889, ((panda$core$Int64) { 2 }));
    children3888 = $tmp3889;
    panda$collections$Array$add$panda$collections$Array$T(children3888, ((panda$core$Object*) test3880));
    panda$collections$Array$add$panda$collections$Array$T(children3888, ((panda$core$Object*) stmt3885));
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
    org$pandalanguage$pandac$IRNode* $tmp3891 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3891->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3891->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3891, ((panda$core$Int64) { 1013 }), p_w->position, p_w->payload, ((panda$collections$ListView*) children3888));
    return $tmp3891;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileDo$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_d) {
    org$pandalanguage$pandac$IRNode* stmt3896;
    org$pandalanguage$pandac$IRNode* test3899;
    panda$collections$Array* children3904;
    panda$core$Bit $tmp3893 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_d->kind, ((panda$core$Int64) { 120 }));
    PANDA_ASSERT($tmp3893.value);
    panda$core$Int64 $tmp3894 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp3895 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3894, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp3895.value);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loops, ((panda$core$Object*) ((panda$core$String*) p_d->payload)));
    panda$core$Object* $tmp3897 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3898 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3897));
    stmt3896 = $tmp3898;
    if (((panda$core$Bit) { stmt3896 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$core$Object* $tmp3900 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp3901 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3900));
    org$pandalanguage$pandac$Type* $tmp3902 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp3903 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3901, $tmp3902);
    test3899 = $tmp3903;
    if (((panda$core$Bit) { test3899 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$collections$Array* $tmp3905 = (panda$collections$Array*) malloc(40);
    $tmp3905->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3905->refCount.value = 1;
    panda$collections$Array$init$panda$core$Int64($tmp3905, ((panda$core$Int64) { 2 }));
    children3904 = $tmp3905;
    panda$collections$Array$add$panda$collections$Array$T(children3904, ((panda$core$Object*) stmt3896));
    panda$collections$Array$add$panda$collections$Array$T(children3904, ((panda$core$Object*) test3899));
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
    org$pandalanguage$pandac$IRNode* $tmp3907 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3907->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3907->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3907, ((panda$core$Int64) { 1014 }), p_d->position, p_d->payload, ((panda$collections$ListView*) children3904));
    return $tmp3907;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileLoop$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_l) {
    org$pandalanguage$pandac$IRNode* stmt3912;
    panda$collections$Array* children3915;
    panda$core$Bit $tmp3909 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_l->kind, ((panda$core$Int64) { 122 }));
    PANDA_ASSERT($tmp3909.value);
    panda$core$Int64 $tmp3910 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_l->children);
    panda$core$Bit $tmp3911 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3910, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3911.value);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loops, ((panda$core$Object*) ((panda$core$String*) p_l->payload)));
    panda$core$Object* $tmp3913 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_l->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3914 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3913));
    stmt3912 = $tmp3914;
    if (((panda$core$Bit) { stmt3912 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$collections$Array* $tmp3916 = (panda$collections$Array*) malloc(40);
    $tmp3916->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3916->refCount.value = 1;
    panda$collections$Array$init$panda$core$Int64($tmp3916, ((panda$core$Int64) { 1 }));
    children3915 = $tmp3916;
    panda$collections$Array$add$panda$collections$Array$T(children3915, ((panda$core$Object*) stmt3912));
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
    org$pandalanguage$pandac$IRNode* $tmp3918 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3918->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3918->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3918, ((panda$core$Int64) { 1015 }), p_l->position, p_l->payload, ((panda$collections$ListView*) children3915));
    return $tmp3918;
}
org$pandalanguage$pandac$Compiler$CompileTargetResult* org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_t, panda$core$Int64 p_kind, org$pandalanguage$pandac$IRNode* p_rawValue, org$pandalanguage$pandac$Type* p_valueType) {
    org$pandalanguage$pandac$IRNode* value3920;
    org$pandalanguage$pandac$Type* type3924;
    org$pandalanguage$pandac$Variable* v3940;
    value3920 = p_rawValue;
    bool $tmp3921 = ((panda$core$Bit) { value3920 == NULL }).value;
    if ($tmp3921) goto $l3922;
    $tmp3921 = ((panda$core$Bit) { p_valueType == NULL }).value;
    $l3922:;
    panda$core$Bit $tmp3923 = { $tmp3921 };
    PANDA_ASSERT($tmp3923.value);
    switch (p_t->kind.value) {
        case 106:
        {
            bool $tmp3925 = ((panda$core$Bit) { p_t->children != NULL }).value;
            if (!$tmp3925) goto $l3926;
            panda$core$Int64 $tmp3927 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_t->children);
            panda$core$Bit $tmp3928 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp3927, ((panda$core$Int64) { 0 }));
            $tmp3925 = $tmp3928.value;
            $l3926:;
            panda$core$Bit $tmp3929 = { $tmp3925 };
            if ($tmp3929.value) {
            {
                panda$core$Int64 $tmp3930 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_t->children);
                panda$core$Bit $tmp3931 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3930, ((panda$core$Int64) { 1 }));
                PANDA_ASSERT($tmp3931.value);
                panda$core$Object* $tmp3932 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp3933 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, ((org$pandalanguage$pandac$ASTNode*) $tmp3932));
                org$pandalanguage$pandac$Type* $tmp3934 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, $tmp3933);
                type3924 = $tmp3934;
            }
            }
            else {
            if (((panda$core$Bit) { value3920 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp3935 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, value3920);
                value3920 = $tmp3935;
                if (((panda$core$Bit) { value3920 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$Type* $tmp3936 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, value3920);
                type3924 = $tmp3936;
            }
            }
            else {
            if (((panda$core$Bit) { p_valueType != NULL }).value) {
            {
                type3924 = p_valueType;
            }
            }
            else {
            {
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_t->position, &$s3937);
                return NULL;
            }
            }
            }
            }
            if (((panda$core$Bit) { value3920 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp3938 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, value3920, type3924);
                value3920 = $tmp3938;
                if (((panda$core$Bit) { value3920 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$core$Bit $tmp3939 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(value3920->type, type3924);
                PANDA_ASSERT($tmp3939.value);
            }
            }
            org$pandalanguage$pandac$Variable* $tmp3941 = (org$pandalanguage$pandac$Variable*) malloc(88);
            $tmp3941->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
            $tmp3941->refCount.value = 1;
            org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type($tmp3941, p_t->position, p_kind, ((panda$core$String*) p_t->payload), type3924);
            v3940 = $tmp3941;
            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->symbolTable, ((org$pandalanguage$pandac$Symbol*) v3940));
            org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp3943 = (org$pandalanguage$pandac$Compiler$CompileTargetResult*) malloc(32);
            $tmp3943->$class = (panda$core$Class*) &org$pandalanguage$pandac$Compiler$CompileTargetResult$class;
            $tmp3943->refCount.value = 1;
            org$pandalanguage$pandac$IRNode* $tmp3945 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3945->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3945->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3945, ((panda$core$Int64) { 1016 }), ((org$pandalanguage$pandac$Symbol*) v3940)->position, v3940->type, v3940);
            org$pandalanguage$pandac$Compiler$CompileTargetResult$init$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q($tmp3943, $tmp3945, value3920);
            return $tmp3943;
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
    org$pandalanguage$pandac$IRNode* value3955;
    org$pandalanguage$pandac$Compiler$CompileTargetResult* target3960;
    panda$collections$Array* children3963;
    org$pandalanguage$pandac$Variable* v3967;
    panda$core$Bit $tmp3947 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_d->kind, ((panda$core$Int64) { 129 }));
    PANDA_ASSERT($tmp3947.value);
    panda$core$Int64 $tmp3949 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp3950 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3949, ((panda$core$Int64) { 1 }));
    bool $tmp3948 = $tmp3950.value;
    if ($tmp3948) goto $l3951;
    panda$core$Int64 $tmp3952 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp3953 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3952, ((panda$core$Int64) { 2 }));
    $tmp3948 = $tmp3953.value;
    $l3951:;
    panda$core$Bit $tmp3954 = { $tmp3948 };
    PANDA_ASSERT($tmp3954.value);
    panda$core$Int64 $tmp3956 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp3957 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3956, ((panda$core$Int64) { 2 }));
    if ($tmp3957.value) {
    {
        panda$core$Object* $tmp3958 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$IRNode* $tmp3959 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3958));
        value3955 = $tmp3959;
        if (((panda$core$Bit) { value3955 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    else {
    {
        value3955 = NULL;
    }
    }
    panda$core$Object* $tmp3961 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp3962 = org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3961), p_varKind, value3955, NULL);
    target3960 = $tmp3962;
    if (((panda$core$Bit) { target3960 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3964 = (panda$collections$Array*) malloc(40);
    $tmp3964->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3964->refCount.value = 1;
    panda$collections$Array$init($tmp3964);
    children3963 = $tmp3964;
    panda$collections$Array$add$panda$collections$Array$T(children3963, ((panda$core$Object*) target3960->target));
    if (((panda$core$Bit) { target3960->value != NULL }).value) {
    {
        panda$core$Bit $tmp3966 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(target3960->target->kind, ((panda$core$Int64) { 1016 }));
        PANDA_ASSERT($tmp3966.value);
        v3967 = ((org$pandalanguage$pandac$Variable*) target3960->target->payload);
        v3967->initialValue = target3960->value;
        panda$collections$Array$add$panda$collections$Array$T(children3963, ((panda$core$Object*) target3960->value));
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3968 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3968->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3968->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3968, ((panda$core$Int64) { 1021 }), p_d->position, ((panda$collections$ListView*) children3963));
    return $tmp3968;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBreak$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_b) {
    panda$core$Bit found3971;
    panda$collections$Iterator* label$Iter3972;
    panda$core$String* label3984;
    panda$core$Bit $tmp3970 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_b->kind, ((panda$core$Int64) { 134 }));
    PANDA_ASSERT($tmp3970.value);
    if (((panda$core$Bit) { p_b->payload != NULL }).value) {
    {
        found3971 = ((panda$core$Bit) { false });
        {
            ITable* $tmp3973 = ((panda$collections$Iterable*) self->loops)->$class->itable;
            while ($tmp3973->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3973 = $tmp3973->next;
            }
            $fn3975 $tmp3974 = $tmp3973->methods[0];
            panda$collections$Iterator* $tmp3976 = $tmp3974(((panda$collections$Iterable*) self->loops));
            label$Iter3972 = $tmp3976;
            $l3977:;
            ITable* $tmp3979 = label$Iter3972->$class->itable;
            while ($tmp3979->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3979 = $tmp3979->next;
            }
            $fn3981 $tmp3980 = $tmp3979->methods[0];
            panda$core$Bit $tmp3982 = $tmp3980(label$Iter3972);
            panda$core$Bit $tmp3983 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3982);
            if (!$tmp3983.value) goto $l3978;
            {
                ITable* $tmp3985 = label$Iter3972->$class->itable;
                while ($tmp3985->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3985 = $tmp3985->next;
                }
                $fn3987 $tmp3986 = $tmp3985->methods[1];
                panda$core$Object* $tmp3988 = $tmp3986(label$Iter3972);
                label3984 = ((panda$core$String*) $tmp3988);
                bool $tmp3989 = ((panda$core$Bit) { label3984 != NULL }).value;
                if (!$tmp3989) goto $l3990;
                panda$core$Bit $tmp3994;
                if (((panda$core$Bit) { label3984 != NULL }).value) goto $l3991; else goto $l3992;
                $l3991:;
                panda$core$Bit $tmp3995 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(label3984, ((panda$core$String*) p_b->payload));
                $tmp3994 = $tmp3995;
                goto $l3993;
                $l3992:;
                $tmp3994 = ((panda$core$Bit) { false });
                goto $l3993;
                $l3993:;
                $tmp3989 = $tmp3994.value;
                $l3990:;
                panda$core$Bit $tmp3996 = { $tmp3989 };
                if ($tmp3996.value) {
                {
                    found3971 = ((panda$core$Bit) { true });
                    goto $l3978;
                }
                }
            }
            goto $l3977;
            $l3978:;
        }
        panda$core$Bit $tmp3997 = panda$core$Bit$$NOT$R$panda$core$Bit(found3971);
        if ($tmp3997.value) {
        {
            panda$core$String* $tmp3999 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3998, p_b->payload);
            panda$core$String* $tmp4001 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3999, &$s4000);
            panda$core$String* $tmp4003 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4002, p_b->payload);
            panda$core$String* $tmp4005 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4003, &$s4004);
            panda$core$String* $tmp4006 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4001, $tmp4005);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_b->position, $tmp4006);
        }
        }
    }
    }
    else {
    panda$core$Int64 $tmp4007 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loops);
    panda$core$Bit $tmp4008 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4007, ((panda$core$Int64) { 0 }));
    if ($tmp4008.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_b->position, &$s4009);
    }
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp4010 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4010->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4010->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp4010, ((panda$core$Int64) { 1006 }), p_b->position, ((panda$core$String*) p_b->payload));
    return $tmp4010;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileContinue$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_c) {
    panda$core$Bit found4013;
    panda$collections$Iterator* label$Iter4014;
    panda$core$String* label4026;
    panda$core$Bit $tmp4012 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_c->kind, ((panda$core$Int64) { 135 }));
    PANDA_ASSERT($tmp4012.value);
    if (((panda$core$Bit) { p_c->payload != NULL }).value) {
    {
        found4013 = ((panda$core$Bit) { false });
        {
            ITable* $tmp4015 = ((panda$collections$Iterable*) self->loops)->$class->itable;
            while ($tmp4015->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp4015 = $tmp4015->next;
            }
            $fn4017 $tmp4016 = $tmp4015->methods[0];
            panda$collections$Iterator* $tmp4018 = $tmp4016(((panda$collections$Iterable*) self->loops));
            label$Iter4014 = $tmp4018;
            $l4019:;
            ITable* $tmp4021 = label$Iter4014->$class->itable;
            while ($tmp4021->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4021 = $tmp4021->next;
            }
            $fn4023 $tmp4022 = $tmp4021->methods[0];
            panda$core$Bit $tmp4024 = $tmp4022(label$Iter4014);
            panda$core$Bit $tmp4025 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4024);
            if (!$tmp4025.value) goto $l4020;
            {
                ITable* $tmp4027 = label$Iter4014->$class->itable;
                while ($tmp4027->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp4027 = $tmp4027->next;
                }
                $fn4029 $tmp4028 = $tmp4027->methods[1];
                panda$core$Object* $tmp4030 = $tmp4028(label$Iter4014);
                label4026 = ((panda$core$String*) $tmp4030);
                bool $tmp4031 = ((panda$core$Bit) { label4026 != NULL }).value;
                if (!$tmp4031) goto $l4032;
                panda$core$Bit $tmp4036;
                if (((panda$core$Bit) { label4026 != NULL }).value) goto $l4033; else goto $l4034;
                $l4033:;
                panda$core$Bit $tmp4037 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(label4026, ((panda$core$String*) p_c->payload));
                $tmp4036 = $tmp4037;
                goto $l4035;
                $l4034:;
                $tmp4036 = ((panda$core$Bit) { false });
                goto $l4035;
                $l4035:;
                $tmp4031 = $tmp4036.value;
                $l4032:;
                panda$core$Bit $tmp4038 = { $tmp4031 };
                if ($tmp4038.value) {
                {
                    found4013 = ((panda$core$Bit) { true });
                    goto $l4020;
                }
                }
            }
            goto $l4019;
            $l4020:;
        }
        panda$core$Bit $tmp4039 = panda$core$Bit$$NOT$R$panda$core$Bit(found4013);
        if ($tmp4039.value) {
        {
            panda$core$String* $tmp4041 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4040, p_c->payload);
            panda$core$String* $tmp4043 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4041, &$s4042);
            panda$core$String* $tmp4045 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4044, p_c->payload);
            panda$core$String* $tmp4047 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4045, &$s4046);
            panda$core$String* $tmp4048 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4043, $tmp4047);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_c->position, $tmp4048);
        }
        }
    }
    }
    else {
    panda$core$Int64 $tmp4049 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loops);
    panda$core$Bit $tmp4050 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4049, ((panda$core$Int64) { 0 }));
    if ($tmp4050.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_c->position, &$s4051);
    }
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp4052 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4052->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4052->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp4052, ((panda$core$Int64) { 1007 }), p_c->position, ((panda$core$String*) p_c->payload));
    return $tmp4052;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileReturn$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_r) {
    org$pandalanguage$pandac$IRNode* value4066;
    panda$collections$Array* children4071;
    panda$core$Bit $tmp4054 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_r->kind, ((panda$core$Int64) { 136 }));
    PANDA_ASSERT($tmp4054.value);
    bool $tmp4055 = ((panda$core$Bit) { p_r->children != NULL }).value;
    if (!$tmp4055) goto $l4056;
    panda$core$Int64 $tmp4057 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_r->children);
    panda$core$Bit $tmp4058 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp4057, ((panda$core$Int64) { 0 }));
    $tmp4055 = $tmp4058.value;
    $l4056:;
    panda$core$Bit $tmp4059 = { $tmp4055 };
    if ($tmp4059.value) {
    {
        panda$core$Int64 $tmp4060 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_r->children);
        panda$core$Bit $tmp4061 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4060, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp4061.value);
        panda$core$Object* $tmp4062 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
        org$pandalanguage$pandac$Type* $tmp4063 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp4064 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp4062)->returnType, $tmp4063);
        if ($tmp4064.value) {
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_r->position, &$s4065);
            return NULL;
        }
        }
        panda$core$Object* $tmp4067 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp4068 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4067));
        panda$core$Object* $tmp4069 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
        org$pandalanguage$pandac$IRNode* $tmp4070 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp4068, ((org$pandalanguage$pandac$MethodDecl*) $tmp4069)->returnType);
        value4066 = $tmp4070;
        if (((panda$core$Bit) { value4066 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp4072 = (panda$collections$Array*) malloc(40);
        $tmp4072->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp4072->refCount.value = 1;
        panda$collections$Array$init($tmp4072);
        children4071 = $tmp4072;
        panda$collections$Array$add$panda$collections$Array$T(children4071, ((panda$core$Object*) value4066));
        org$pandalanguage$pandac$IRNode* $tmp4074 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp4074->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp4074->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4074, ((panda$core$Int64) { 1008 }), p_r->position, ((panda$collections$ListView*) children4071));
        return $tmp4074;
    }
    }
    panda$core$Object* $tmp4076 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
    org$pandalanguage$pandac$Type* $tmp4077 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp4078 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp4076)->returnType, $tmp4077);
    if ($tmp4078.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_r->position, &$s4079);
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp4080 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4080->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4080->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp4080, ((panda$core$Int64) { 1008 }), p_r->position);
    return $tmp4080;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileAssert$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_a) {
    org$pandalanguage$pandac$IRNode* test4090;
    org$pandalanguage$pandac$ClassDecl* bit4095;
    org$pandalanguage$pandac$Symbol* value4098;
    panda$collections$Array* fieldChildren4101;
    panda$collections$Array* children4107;
    org$pandalanguage$pandac$IRNode* msg4112;
    panda$core$Bit $tmp4082 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_a->kind, ((panda$core$Int64) { 123 }));
    PANDA_ASSERT($tmp4082.value);
    panda$core$Int64 $tmp4084 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp4085 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4084, ((panda$core$Int64) { 1 }));
    bool $tmp4083 = $tmp4085.value;
    if ($tmp4083) goto $l4086;
    panda$core$Int64 $tmp4087 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp4088 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4087, ((panda$core$Int64) { 2 }));
    $tmp4083 = $tmp4088.value;
    $l4086:;
    panda$core$Bit $tmp4089 = { $tmp4083 };
    PANDA_ASSERT($tmp4089.value);
    panda$core$Object* $tmp4091 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_a->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp4092 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4091));
    test4090 = $tmp4092;
    if (((panda$core$Bit) { test4090 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$Type* $tmp4093 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp4094 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, test4090, $tmp4093);
    test4090 = $tmp4094;
    if (((panda$core$Bit) { test4090 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$Type* $tmp4096 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$ClassDecl* $tmp4097 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, $tmp4096);
    bit4095 = $tmp4097;
    PANDA_ASSERT(((panda$core$Bit) { bit4095 != NULL }).value);
    org$pandalanguage$pandac$Symbol* $tmp4100 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(bit4095->symbolTable, &$s4099);
    value4098 = $tmp4100;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self, ((org$pandalanguage$pandac$FieldDecl*) value4098));
    panda$collections$Array* $tmp4102 = (panda$collections$Array*) malloc(40);
    $tmp4102->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4102->refCount.value = 1;
    panda$collections$Array$init($tmp4102);
    fieldChildren4101 = $tmp4102;
    panda$collections$Array$add$panda$collections$Array$T(fieldChildren4101, ((panda$core$Object*) test4090));
    org$pandalanguage$pandac$IRNode* $tmp4104 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4104->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4104->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp4106 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp4104, ((panda$core$Int64) { 1026 }), p_a->position, $tmp4106, ((panda$core$Object*) value4098), ((panda$collections$ListView*) fieldChildren4101));
    test4090 = $tmp4104;
    panda$collections$Array* $tmp4108 = (panda$collections$Array*) malloc(40);
    $tmp4108->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4108->refCount.value = 1;
    panda$collections$Array$init($tmp4108);
    children4107 = $tmp4108;
    panda$collections$Array$add$panda$collections$Array$T(children4107, ((panda$core$Object*) test4090));
    panda$core$Int64 $tmp4110 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp4111 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4110, ((panda$core$Int64) { 2 }));
    if ($tmp4111.value) {
    {
        panda$core$Object* $tmp4113 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_a->children, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$IRNode* $tmp4114 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4113));
        msg4112 = $tmp4114;
        if (((panda$core$Bit) { msg4112 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$Type* $tmp4115 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp4116 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, msg4112, $tmp4115);
        msg4112 = $tmp4116;
        if (((panda$core$Bit) { msg4112 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children4107, ((panda$core$Object*) msg4112));
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp4117 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4117->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4117->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4117, ((panda$core$Int64) { 1034 }), p_a->position, ((panda$collections$ListView*) children4107));
    return $tmp4117;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileVar$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_v) {
    panda$core$Int64 nodeKind4132;
    panda$core$Int64 varKind4133;
    panda$collections$Array* decls4134;
    panda$collections$Iterator* astDecl$Iter4137;
    org$pandalanguage$pandac$ASTNode* astDecl4149;
    org$pandalanguage$pandac$IRNode* decl4154;
    panda$core$Bit $tmp4122 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 130 }));
    bool $tmp4121 = $tmp4122.value;
    if ($tmp4121) goto $l4123;
    panda$core$Bit $tmp4124 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 131 }));
    $tmp4121 = $tmp4124.value;
    $l4123:;
    panda$core$Bit $tmp4125 = { $tmp4121 };
    bool $tmp4120 = $tmp4125.value;
    if ($tmp4120) goto $l4126;
    panda$core$Bit $tmp4127 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 133 }));
    $tmp4120 = $tmp4127.value;
    $l4126:;
    panda$core$Bit $tmp4128 = { $tmp4120 };
    bool $tmp4119 = $tmp4128.value;
    if ($tmp4119) goto $l4129;
    panda$core$Bit $tmp4130 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 132 }));
    $tmp4119 = $tmp4130.value;
    $l4129:;
    panda$core$Bit $tmp4131 = { $tmp4119 };
    PANDA_ASSERT($tmp4131.value);
    switch (p_v->kind.value) {
        case 130:
        {
            nodeKind4132 = ((panda$core$Int64) { 1017 });
            varKind4133 = ((panda$core$Int64) { 10000 });
        }
        break;
        case 131:
        {
            nodeKind4132 = ((panda$core$Int64) { 1018 });
            varKind4133 = ((panda$core$Int64) { 10001 });
        }
        break;
        case 132:
        {
            nodeKind4132 = ((panda$core$Int64) { 1019 });
            varKind4133 = ((panda$core$Int64) { 10002 });
        }
        break;
        case 133:
        {
            nodeKind4132 = ((panda$core$Int64) { 1020 });
            varKind4133 = ((panda$core$Int64) { 10003 });
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
    panda$collections$Array* $tmp4135 = (panda$collections$Array*) malloc(40);
    $tmp4135->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4135->refCount.value = 1;
    panda$collections$Array$init($tmp4135);
    decls4134 = $tmp4135;
    {
        ITable* $tmp4138 = ((panda$collections$Iterable*) p_v->children)->$class->itable;
        while ($tmp4138->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4138 = $tmp4138->next;
        }
        $fn4140 $tmp4139 = $tmp4138->methods[0];
        panda$collections$Iterator* $tmp4141 = $tmp4139(((panda$collections$Iterable*) p_v->children));
        astDecl$Iter4137 = $tmp4141;
        $l4142:;
        ITable* $tmp4144 = astDecl$Iter4137->$class->itable;
        while ($tmp4144->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4144 = $tmp4144->next;
        }
        $fn4146 $tmp4145 = $tmp4144->methods[0];
        panda$core$Bit $tmp4147 = $tmp4145(astDecl$Iter4137);
        panda$core$Bit $tmp4148 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4147);
        if (!$tmp4148.value) goto $l4143;
        {
            ITable* $tmp4150 = astDecl$Iter4137->$class->itable;
            while ($tmp4150->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4150 = $tmp4150->next;
            }
            $fn4152 $tmp4151 = $tmp4150->methods[1];
            panda$core$Object* $tmp4153 = $tmp4151(astDecl$Iter4137);
            astDecl4149 = ((org$pandalanguage$pandac$ASTNode*) $tmp4153);
            org$pandalanguage$pandac$IRNode* $tmp4155 = org$pandalanguage$pandac$Compiler$compileDeclaration$org$pandalanguage$pandac$ASTNode$panda$core$Int64$R$org$pandalanguage$pandac$IRNode$Q(self, astDecl4149, varKind4133);
            decl4154 = $tmp4155;
            if (((panda$core$Bit) { decl4154 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(decls4134, ((panda$core$Object*) decl4154));
        }
        goto $l4142;
        $l4143:;
    }
    org$pandalanguage$pandac$IRNode* $tmp4156 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4156->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4156->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4156, nodeKind4132, p_v->position, ((panda$collections$ListView*) decls4134));
    return $tmp4156;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileWhenTest$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Variable* p_value, org$pandalanguage$pandac$ASTNode* p_test) {
    org$pandalanguage$pandac$IRNode* target4158;
    panda$collections$Array* callChildren4161;
    org$pandalanguage$pandac$IRNode* testValue4164;
    org$pandalanguage$pandac$IRNode* $tmp4159 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4159->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4159->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp4159, ((panda$core$Int64) { 1016 }), p_test->position, p_value->type, p_value);
    target4158 = $tmp4159;
    panda$collections$Array* $tmp4162 = (panda$collections$Array*) malloc(40);
    $tmp4162->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4162->refCount.value = 1;
    panda$collections$Array$init($tmp4162);
    callChildren4161 = $tmp4162;
    org$pandalanguage$pandac$IRNode* $tmp4165 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_test);
    testValue4164 = $tmp4165;
    if (((panda$core$Bit) { testValue4164 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(callChildren4161, ((panda$core$Object*) testValue4164));
    org$pandalanguage$pandac$IRNode* $tmp4167 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target4158, &$s4166, ((panda$collections$ListView*) callChildren4161));
    return $tmp4167;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileChainedIfWhen$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Variable* p_value, org$pandalanguage$pandac$ASTNode* p_w) {
    org$pandalanguage$pandac$IRNode* test4176;
    panda$core$Range$LTpanda$core$Int64$GT $tmp4180;
    org$pandalanguage$pandac$IRNode* nextTest4196;
    panda$collections$Array* callChildren4200;
    panda$collections$Array* statements4213;
    panda$core$Range$LTpanda$core$Int64$GT $tmp4216;
    org$pandalanguage$pandac$IRNode* statement4231;
    panda$collections$Array* children4241;
    panda$core$Bit $tmp4168 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_w->kind, ((panda$core$Int64) { 124 }));
    PANDA_ASSERT($tmp4168.value);
    panda$core$Int64 $tmp4169 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Bit $tmp4170 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp4169, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4170.value);
    panda$core$Object* $tmp4171 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp4172 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp4171)->kind, ((panda$core$Int64) { 128 }));
    PANDA_ASSERT($tmp4172.value);
    panda$core$Object* $tmp4173 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Int64 $tmp4174 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$ASTNode*) $tmp4173)->children);
    panda$core$Bit $tmp4175 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp4174, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4175.value);
    panda$core$Object* $tmp4177 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp4178 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$ASTNode*) $tmp4177)->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp4179 = org$pandalanguage$pandac$Compiler$compileWhenTest$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_value, ((org$pandalanguage$pandac$ASTNode*) $tmp4178));
    test4176 = $tmp4179;
    if (((panda$core$Bit) { test4176 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Object* $tmp4181 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Int64 $tmp4182 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$ASTNode*) $tmp4181)->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp4180, ((panda$core$Int64) { 1 }), $tmp4182, ((panda$core$Bit) { false }));
    int64_t $tmp4184 = $tmp4180.min.value;
    panda$core$Int64 i4183 = { $tmp4184 };
    int64_t $tmp4186 = $tmp4180.max.value;
    bool $tmp4187 = $tmp4180.inclusive.value;
    if ($tmp4187) goto $l4194; else goto $l4195;
    $l4194:;
    if ($tmp4184 <= $tmp4186) goto $l4188; else goto $l4190;
    $l4195:;
    if ($tmp4184 < $tmp4186) goto $l4188; else goto $l4190;
    $l4188:;
    {
        panda$core$Object* $tmp4197 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp4198 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$ASTNode*) $tmp4197)->children, i4183);
        org$pandalanguage$pandac$IRNode* $tmp4199 = org$pandalanguage$pandac$Compiler$compileWhenTest$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_value, ((org$pandalanguage$pandac$ASTNode*) $tmp4198));
        nextTest4196 = $tmp4199;
        if (((panda$core$Bit) { nextTest4196 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp4201 = (panda$collections$Array*) malloc(40);
        $tmp4201->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp4201->refCount.value = 1;
        panda$collections$Array$init($tmp4201);
        callChildren4200 = $tmp4201;
        panda$collections$Array$add$panda$collections$Array$T(callChildren4200, ((panda$core$Object*) nextTest4196));
        org$pandalanguage$pandac$IRNode* $tmp4204 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, test4176, &$s4203, ((panda$collections$ListView*) callChildren4200));
        test4176 = $tmp4204;
        if (((panda$core$Bit) { test4176 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    $l4191:;
    int64_t $tmp4206 = $tmp4186 - i4183.value;
    if ($tmp4187) goto $l4207; else goto $l4208;
    $l4207:;
    if ($tmp4206 >= 1) goto $l4205; else goto $l4190;
    $l4208:;
    if ($tmp4206 > 1) goto $l4205; else goto $l4190;
    $l4205:;
    i4183.value += 1;
    goto $l4188;
    $l4190:;
    org$pandalanguage$pandac$SymbolTable* $tmp4211 = (org$pandalanguage$pandac$SymbolTable*) malloc(48);
    $tmp4211->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp4211->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp4211, self->symbolTable);
    self->symbolTable = $tmp4211;
    panda$collections$Array* $tmp4214 = (panda$collections$Array*) malloc(40);
    $tmp4214->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4214->refCount.value = 1;
    panda$collections$Array$init($tmp4214);
    statements4213 = $tmp4214;
    panda$core$Int64 $tmp4217 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp4216, ((panda$core$Int64) { 1 }), $tmp4217, ((panda$core$Bit) { false }));
    int64_t $tmp4219 = $tmp4216.min.value;
    panda$core$Int64 i4218 = { $tmp4219 };
    int64_t $tmp4221 = $tmp4216.max.value;
    bool $tmp4222 = $tmp4216.inclusive.value;
    if ($tmp4222) goto $l4229; else goto $l4230;
    $l4229:;
    if ($tmp4219 <= $tmp4221) goto $l4223; else goto $l4225;
    $l4230:;
    if ($tmp4219 < $tmp4221) goto $l4223; else goto $l4225;
    $l4223:;
    {
        panda$core$Object* $tmp4232 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, i4218);
        org$pandalanguage$pandac$IRNode* $tmp4233 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4232));
        statement4231 = $tmp4233;
        if (((panda$core$Bit) { statement4231 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(statements4213, ((panda$core$Object*) statement4231));
    }
    $l4226:;
    int64_t $tmp4235 = $tmp4221 - i4218.value;
    if ($tmp4222) goto $l4236; else goto $l4237;
    $l4236:;
    if ($tmp4235 >= 1) goto $l4234; else goto $l4225;
    $l4237:;
    if ($tmp4235 > 1) goto $l4234; else goto $l4225;
    $l4234:;
    i4218.value += 1;
    goto $l4223;
    $l4225:;
    panda$core$Object* $tmp4240 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->symbolTable->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp4240);
    panda$collections$Array* $tmp4242 = (panda$collections$Array*) malloc(40);
    $tmp4242->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4242->refCount.value = 1;
    panda$collections$Array$init($tmp4242);
    children4241 = $tmp4242;
    panda$collections$Array$add$panda$collections$Array$T(children4241, ((panda$core$Object*) test4176));
    org$pandalanguage$pandac$IRNode* $tmp4244 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4244->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4244->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4244, ((panda$core$Int64) { 1000 }), p_w->position, ((panda$collections$ListView*) statements4213));
    panda$collections$Array$add$panda$collections$Array$T(children4241, ((panda$core$Object*) $tmp4244));
    org$pandalanguage$pandac$IRNode* $tmp4246 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4246->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4246->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4246, ((panda$core$Int64) { 1012 }), p_w->position, ((panda$collections$ListView*) children4241));
    return $tmp4246;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileChainedIfMatch$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_m, org$pandalanguage$pandac$IRNode* p_value) {
    panda$collections$Array* children4248;
    org$pandalanguage$pandac$Variable* valueVar4251;
    panda$collections$Array* declChildren4261;
    panda$collections$Array* varChildren4266;
    panda$core$Range$LTpanda$core$Int64$GT $tmp4273;
    org$pandalanguage$pandac$ASTNode* c4288;
    org$pandalanguage$pandac$IRNode* w4290;
    panda$collections$Array* statements4292;
    panda$collections$Iterator* astStatement$Iter4295;
    org$pandalanguage$pandac$ASTNode* astStatement4307;
    org$pandalanguage$pandac$IRNode* stmt4312;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp4322;
    panda$collections$Array* newChildren4350;
    panda$collections$Array* $tmp4249 = (panda$collections$Array*) malloc(40);
    $tmp4249->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4249->refCount.value = 1;
    panda$collections$Array$init($tmp4249);
    children4248 = $tmp4249;
    org$pandalanguage$pandac$Variable* $tmp4252 = (org$pandalanguage$pandac$Variable*) malloc(88);
    $tmp4252->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
    $tmp4252->refCount.value = 1;
    panda$core$String* $tmp4255 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4254, ((panda$core$Object*) wrap_panda$core$Int64(p_m->position.line)));
    panda$core$String* $tmp4257 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4255, &$s4256);
    panda$core$String* $tmp4258 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp4257, ((panda$core$Object*) wrap_panda$core$Int64(p_m->position.column)));
    panda$core$String* $tmp4260 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4258, &$s4259);
    org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type($tmp4252, p_m->position, ((panda$core$Int64) { 10001 }), $tmp4260, p_value->type);
    valueVar4251 = $tmp4252;
    panda$collections$Array* $tmp4262 = (panda$collections$Array*) malloc(40);
    $tmp4262->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4262->refCount.value = 1;
    panda$collections$Array$init($tmp4262);
    declChildren4261 = $tmp4262;
    org$pandalanguage$pandac$IRNode* $tmp4264 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4264->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4264->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp4264, ((panda$core$Int64) { 1016 }), p_value->position, valueVar4251->type, valueVar4251);
    panda$collections$Array$add$panda$collections$Array$T(declChildren4261, ((panda$core$Object*) $tmp4264));
    panda$collections$Array$add$panda$collections$Array$T(declChildren4261, ((panda$core$Object*) p_value));
    panda$collections$Array* $tmp4267 = (panda$collections$Array*) malloc(40);
    $tmp4267->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4267->refCount.value = 1;
    panda$collections$Array$init($tmp4267);
    varChildren4266 = $tmp4267;
    org$pandalanguage$pandac$IRNode* $tmp4269 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4269->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4269->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4269, ((panda$core$Int64) { 1021 }), ((org$pandalanguage$pandac$Symbol*) valueVar4251)->position, ((panda$collections$ListView*) declChildren4261));
    panda$collections$Array$add$panda$collections$Array$T(varChildren4266, ((panda$core$Object*) $tmp4269));
    org$pandalanguage$pandac$IRNode* $tmp4271 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4271->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4271->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4271, ((panda$core$Int64) { 1018 }), ((org$pandalanguage$pandac$Symbol*) valueVar4251)->position, ((panda$collections$ListView*) varChildren4266));
    panda$collections$Array$add$panda$collections$Array$T(children4248, ((panda$core$Object*) $tmp4271));
    panda$core$Int64 $tmp4274 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp4273, ((panda$core$Int64) { 1 }), $tmp4274, ((panda$core$Bit) { false }));
    int64_t $tmp4276 = $tmp4273.min.value;
    panda$core$Int64 i4275 = { $tmp4276 };
    int64_t $tmp4278 = $tmp4273.max.value;
    bool $tmp4279 = $tmp4273.inclusive.value;
    if ($tmp4279) goto $l4286; else goto $l4287;
    $l4286:;
    if ($tmp4276 <= $tmp4278) goto $l4280; else goto $l4282;
    $l4287:;
    if ($tmp4276 < $tmp4278) goto $l4280; else goto $l4282;
    $l4280:;
    {
        panda$core$Object* $tmp4289 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, i4275);
        c4288 = ((org$pandalanguage$pandac$ASTNode*) $tmp4289);
        switch (c4288->kind.value) {
            case 124:
            {
                org$pandalanguage$pandac$IRNode* $tmp4291 = org$pandalanguage$pandac$Compiler$compileChainedIfWhen$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, valueVar4251, c4288);
                w4290 = $tmp4291;
                if (((panda$core$Bit) { w4290 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children4248, ((panda$core$Object*) w4290));
            }
            break;
            case 127:
            {
                panda$collections$Array* $tmp4293 = (panda$collections$Array*) malloc(40);
                $tmp4293->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp4293->refCount.value = 1;
                panda$collections$Array$init($tmp4293);
                statements4292 = $tmp4293;
                {
                    ITable* $tmp4296 = ((panda$collections$Iterable*) c4288->children)->$class->itable;
                    while ($tmp4296->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp4296 = $tmp4296->next;
                    }
                    $fn4298 $tmp4297 = $tmp4296->methods[0];
                    panda$collections$Iterator* $tmp4299 = $tmp4297(((panda$collections$Iterable*) c4288->children));
                    astStatement$Iter4295 = $tmp4299;
                    $l4300:;
                    ITable* $tmp4302 = astStatement$Iter4295->$class->itable;
                    while ($tmp4302->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp4302 = $tmp4302->next;
                    }
                    $fn4304 $tmp4303 = $tmp4302->methods[0];
                    panda$core$Bit $tmp4305 = $tmp4303(astStatement$Iter4295);
                    panda$core$Bit $tmp4306 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4305);
                    if (!$tmp4306.value) goto $l4301;
                    {
                        ITable* $tmp4308 = astStatement$Iter4295->$class->itable;
                        while ($tmp4308->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp4308 = $tmp4308->next;
                        }
                        $fn4310 $tmp4309 = $tmp4308->methods[1];
                        panda$core$Object* $tmp4311 = $tmp4309(astStatement$Iter4295);
                        astStatement4307 = ((org$pandalanguage$pandac$ASTNode*) $tmp4311);
                        org$pandalanguage$pandac$IRNode* $tmp4313 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, astStatement4307);
                        stmt4312 = $tmp4313;
                        if (((panda$core$Bit) { stmt4312 == NULL }).value) {
                        {
                            return NULL;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(statements4292, ((panda$core$Object*) stmt4312));
                    }
                    goto $l4300;
                    $l4301:;
                }
                org$pandalanguage$pandac$IRNode* $tmp4314 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp4314->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp4314->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4314, ((panda$core$Int64) { 1000 }), c4288->position, ((panda$collections$ListView*) statements4292));
                panda$collections$Array$add$panda$collections$Array$T(children4248, ((panda$core$Object*) $tmp4314));
            }
            break;
            default:
            {
                PANDA_ASSERT(((panda$core$Bit) { false }).value);
            }
        }
    }
    $l4283:;
    int64_t $tmp4317 = $tmp4278 - i4275.value;
    if ($tmp4279) goto $l4318; else goto $l4319;
    $l4318:;
    if ($tmp4317 >= 1) goto $l4316; else goto $l4282;
    $l4319:;
    if ($tmp4317 > 1) goto $l4316; else goto $l4282;
    $l4316:;
    i4275.value += 1;
    goto $l4280;
    $l4282:;
    panda$core$Int64 $tmp4323 = panda$collections$Array$get_count$R$panda$core$Int64(children4248);
    panda$core$Int64 $tmp4324 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp4323, ((panda$core$Int64) { 1 }));
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp4322, $tmp4324, ((panda$core$Int64) { 1 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { false }));
    int64_t $tmp4326 = $tmp4322.start.value;
    panda$core$Int64 i4325 = { $tmp4326 };
    int64_t $tmp4328 = $tmp4322.end.value;
    int64_t $tmp4329 = $tmp4322.step.value;
    bool $tmp4330 = $tmp4322.inclusive.value;
    bool $tmp4337 = $tmp4329 > 0;
    if ($tmp4337) goto $l4335; else goto $l4336;
    $l4335:;
    if ($tmp4330) goto $l4338; else goto $l4339;
    $l4338:;
    if ($tmp4326 <= $tmp4328) goto $l4331; else goto $l4333;
    $l4339:;
    if ($tmp4326 < $tmp4328) goto $l4331; else goto $l4333;
    $l4336:;
    if ($tmp4330) goto $l4340; else goto $l4341;
    $l4340:;
    if ($tmp4326 >= $tmp4328) goto $l4331; else goto $l4333;
    $l4341:;
    if ($tmp4326 > $tmp4328) goto $l4331; else goto $l4333;
    $l4331:;
    {
        panda$core$Int64 $tmp4343 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4325, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp4344 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children4248, $tmp4343);
        panda$core$Bit $tmp4345 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp4344)->kind, ((panda$core$Int64) { 1012 }));
        PANDA_ASSERT($tmp4345.value);
        panda$core$Int64 $tmp4346 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4325, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp4347 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children4248, $tmp4346);
        panda$core$Int64 $tmp4348 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp4347)->children);
        panda$core$Bit $tmp4349 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4348, ((panda$core$Int64) { 2 }));
        PANDA_ASSERT($tmp4349.value);
        panda$collections$Array* $tmp4351 = (panda$collections$Array*) malloc(40);
        $tmp4351->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp4351->refCount.value = 1;
        panda$core$Int64 $tmp4353 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4325, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp4354 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children4248, $tmp4353);
        panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp4351, ((panda$collections$ListView*) ((org$pandalanguage$pandac$IRNode*) $tmp4354)->children));
        newChildren4350 = $tmp4351;
        panda$core$Object* $tmp4355 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children4248, i4325);
        panda$collections$Array$add$panda$collections$Array$T(newChildren4350, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp4355)));
        panda$core$Int64 $tmp4356 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4325, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$IRNode* $tmp4357 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp4357->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp4357->refCount.value = 1;
        panda$core$Int64 $tmp4359 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4325, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp4360 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children4248, $tmp4359);
        panda$core$Int64 $tmp4361 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4325, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp4362 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children4248, $tmp4361);
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4357, ((org$pandalanguage$pandac$IRNode*) $tmp4360)->kind, ((org$pandalanguage$pandac$IRNode*) $tmp4362)->position, ((panda$collections$ListView*) newChildren4350));
        panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(children4248, $tmp4356, ((panda$core$Object*) $tmp4357));
        panda$core$Int64 $tmp4363 = panda$collections$Array$get_count$R$panda$core$Int64(children4248);
        panda$core$Int64 $tmp4364 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp4363, ((panda$core$Int64) { 1 }));
        panda$collections$Array$removeIndex$panda$core$Int64(children4248, $tmp4364);
    }
    $l4334:;
    if ($tmp4337) goto $l4366; else goto $l4367;
    $l4366:;
    int64_t $tmp4368 = $tmp4328 - i4325.value;
    if ($tmp4330) goto $l4369; else goto $l4370;
    $l4369:;
    if ($tmp4368 >= $tmp4329) goto $l4365; else goto $l4333;
    $l4370:;
    if ($tmp4368 > $tmp4329) goto $l4365; else goto $l4333;
    $l4367:;
    int64_t $tmp4372 = i4325.value - $tmp4328;
    if ($tmp4330) goto $l4373; else goto $l4374;
    $l4373:;
    if ($tmp4372 >= -$tmp4329) goto $l4365; else goto $l4333;
    $l4374:;
    if ($tmp4372 > -$tmp4329) goto $l4365; else goto $l4333;
    $l4365:;
    i4325.value += $tmp4329;
    goto $l4331;
    $l4333:;
    org$pandalanguage$pandac$IRNode* $tmp4376 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4376->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4376->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4376, ((panda$core$Int64) { 1000 }), p_m->position, ((panda$collections$ListView*) children4248));
    return $tmp4376;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileWhen$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type, org$pandalanguage$pandac$ASTNode* p_w) {
    panda$collections$Array* children4386;
    panda$collections$Iterator* expr$Iter4389;
    org$pandalanguage$pandac$ASTNode* expr4402;
    org$pandalanguage$pandac$IRNode* compiled4407;
    panda$collections$Array* statements4412;
    panda$core$Range$LTpanda$core$Int64$GT $tmp4415;
    org$pandalanguage$pandac$IRNode* statement4430;
    panda$core$Bit $tmp4378 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_w->kind, ((panda$core$Int64) { 124 }));
    PANDA_ASSERT($tmp4378.value);
    panda$core$Int64 $tmp4379 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Bit $tmp4380 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp4379, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4380.value);
    panda$core$Object* $tmp4381 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp4382 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp4381)->kind, ((panda$core$Int64) { 128 }));
    PANDA_ASSERT($tmp4382.value);
    panda$core$Object* $tmp4383 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Int64 $tmp4384 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$ASTNode*) $tmp4383)->children);
    panda$core$Bit $tmp4385 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp4384, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4385.value);
    panda$collections$Array* $tmp4387 = (panda$collections$Array*) malloc(40);
    $tmp4387->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4387->refCount.value = 1;
    panda$collections$Array$init($tmp4387);
    children4386 = $tmp4387;
    {
        panda$core$Object* $tmp4390 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
        ITable* $tmp4391 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp4390)->children)->$class->itable;
        while ($tmp4391->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4391 = $tmp4391->next;
        }
        $fn4393 $tmp4392 = $tmp4391->methods[0];
        panda$collections$Iterator* $tmp4394 = $tmp4392(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp4390)->children));
        expr$Iter4389 = $tmp4394;
        $l4395:;
        ITable* $tmp4397 = expr$Iter4389->$class->itable;
        while ($tmp4397->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4397 = $tmp4397->next;
        }
        $fn4399 $tmp4398 = $tmp4397->methods[0];
        panda$core$Bit $tmp4400 = $tmp4398(expr$Iter4389);
        panda$core$Bit $tmp4401 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4400);
        if (!$tmp4401.value) goto $l4396;
        {
            ITable* $tmp4403 = expr$Iter4389->$class->itable;
            while ($tmp4403->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4403 = $tmp4403->next;
            }
            $fn4405 $tmp4404 = $tmp4403->methods[1];
            panda$core$Object* $tmp4406 = $tmp4404(expr$Iter4389);
            expr4402 = ((org$pandalanguage$pandac$ASTNode*) $tmp4406);
            org$pandalanguage$pandac$IRNode* $tmp4408 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, expr4402);
            org$pandalanguage$pandac$IRNode* $tmp4409 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp4408, p_type);
            compiled4407 = $tmp4409;
            if (((panda$core$Bit) { compiled4407 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children4386, ((panda$core$Object*) compiled4407));
        }
        goto $l4395;
        $l4396:;
    }
    org$pandalanguage$pandac$SymbolTable* $tmp4410 = (org$pandalanguage$pandac$SymbolTable*) malloc(48);
    $tmp4410->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp4410->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp4410, self->symbolTable);
    self->symbolTable = $tmp4410;
    panda$collections$Array* $tmp4413 = (panda$collections$Array*) malloc(40);
    $tmp4413->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4413->refCount.value = 1;
    panda$collections$Array$init($tmp4413);
    statements4412 = $tmp4413;
    panda$core$Int64 $tmp4416 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp4415, ((panda$core$Int64) { 1 }), $tmp4416, ((panda$core$Bit) { false }));
    int64_t $tmp4418 = $tmp4415.min.value;
    panda$core$Int64 i4417 = { $tmp4418 };
    int64_t $tmp4420 = $tmp4415.max.value;
    bool $tmp4421 = $tmp4415.inclusive.value;
    if ($tmp4421) goto $l4428; else goto $l4429;
    $l4428:;
    if ($tmp4418 <= $tmp4420) goto $l4422; else goto $l4424;
    $l4429:;
    if ($tmp4418 < $tmp4420) goto $l4422; else goto $l4424;
    $l4422:;
    {
        panda$core$Object* $tmp4431 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, i4417);
        org$pandalanguage$pandac$IRNode* $tmp4432 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4431));
        statement4430 = $tmp4432;
        if (((panda$core$Bit) { statement4430 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(statements4412, ((panda$core$Object*) statement4430));
    }
    $l4425:;
    int64_t $tmp4434 = $tmp4420 - i4417.value;
    if ($tmp4421) goto $l4435; else goto $l4436;
    $l4435:;
    if ($tmp4434 >= 1) goto $l4433; else goto $l4424;
    $l4436:;
    if ($tmp4434 > 1) goto $l4433; else goto $l4424;
    $l4433:;
    i4417.value += 1;
    goto $l4422;
    $l4424:;
    panda$core$Object* $tmp4439 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->symbolTable->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp4439);
    org$pandalanguage$pandac$IRNode* $tmp4440 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4440->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4440->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4440, ((panda$core$Int64) { 1000 }), p_w->position, ((panda$collections$ListView*) statements4412));
    panda$collections$Array$add$panda$collections$Array$T(children4386, ((panda$core$Object*) $tmp4440));
    org$pandalanguage$pandac$IRNode* $tmp4442 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4442->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4442->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4442, ((panda$core$Int64) { 1042 }), p_w->position, ((panda$collections$ListView*) children4386));
    return $tmp4442;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileOtherwise$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_o) {
    panda$collections$Array* children4445;
    panda$collections$Array* statements4450;
    panda$collections$Iterator* s$Iter4453;
    org$pandalanguage$pandac$ASTNode* s4465;
    org$pandalanguage$pandac$IRNode* statement4470;
    panda$core$Bit $tmp4444 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_o->kind, ((panda$core$Int64) { 127 }));
    PANDA_ASSERT($tmp4444.value);
    panda$collections$Array* $tmp4446 = (panda$collections$Array*) malloc(40);
    $tmp4446->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4446->refCount.value = 1;
    panda$collections$Array$init($tmp4446);
    children4445 = $tmp4446;
    org$pandalanguage$pandac$SymbolTable* $tmp4448 = (org$pandalanguage$pandac$SymbolTable*) malloc(48);
    $tmp4448->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp4448->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp4448, self->symbolTable);
    self->symbolTable = $tmp4448;
    panda$collections$Array* $tmp4451 = (panda$collections$Array*) malloc(40);
    $tmp4451->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4451->refCount.value = 1;
    panda$collections$Array$init($tmp4451);
    statements4450 = $tmp4451;
    {
        ITable* $tmp4454 = ((panda$collections$Iterable*) p_o->children)->$class->itable;
        while ($tmp4454->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4454 = $tmp4454->next;
        }
        $fn4456 $tmp4455 = $tmp4454->methods[0];
        panda$collections$Iterator* $tmp4457 = $tmp4455(((panda$collections$Iterable*) p_o->children));
        s$Iter4453 = $tmp4457;
        $l4458:;
        ITable* $tmp4460 = s$Iter4453->$class->itable;
        while ($tmp4460->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4460 = $tmp4460->next;
        }
        $fn4462 $tmp4461 = $tmp4460->methods[0];
        panda$core$Bit $tmp4463 = $tmp4461(s$Iter4453);
        panda$core$Bit $tmp4464 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4463);
        if (!$tmp4464.value) goto $l4459;
        {
            ITable* $tmp4466 = s$Iter4453->$class->itable;
            while ($tmp4466->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4466 = $tmp4466->next;
            }
            $fn4468 $tmp4467 = $tmp4466->methods[1];
            panda$core$Object* $tmp4469 = $tmp4467(s$Iter4453);
            s4465 = ((org$pandalanguage$pandac$ASTNode*) $tmp4469);
            org$pandalanguage$pandac$IRNode* $tmp4471 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, s4465);
            statement4470 = $tmp4471;
            if (((panda$core$Bit) { statement4470 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(statements4450, ((panda$core$Object*) statement4470));
        }
        goto $l4458;
        $l4459:;
    }
    panda$core$Object* $tmp4472 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->symbolTable->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp4472);
    org$pandalanguage$pandac$IRNode* $tmp4473 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4473->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4473->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4473, ((panda$core$Int64) { 1000 }), p_o->position, ((panda$collections$ListView*) statements4450));
    panda$collections$Array$add$panda$collections$Array$T(children4445, ((panda$core$Object*) $tmp4473));
    org$pandalanguage$pandac$IRNode* $tmp4475 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4475->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4475->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4475, ((panda$core$Int64) { 1043 }), p_o->position, ((panda$collections$ListView*) children4445));
    return $tmp4475;
}
panda$core$Bit org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    org$pandalanguage$pandac$FieldDecl* f4484;
    org$pandalanguage$pandac$Variable* v4493;
    switch (p_expr->kind.value) {
        case 1004:
        {
            return ((panda$core$Bit) { true });
        }
        break;
        case 1010:
        {
            panda$core$Bit $tmp4478 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_expr->type);
            bool $tmp4477 = $tmp4478.value;
            if (!$tmp4477) goto $l4479;
            panda$core$Object* $tmp4480 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp4481 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$IRNode*) $tmp4480)->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp4482 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp4481));
            $tmp4477 = $tmp4482.value;
            $l4479:;
            panda$core$Bit $tmp4483 = { $tmp4477 };
            return $tmp4483;
        }
        break;
        case 1026:
        {
            f4484 = ((org$pandalanguage$pandac$FieldDecl*) p_expr->payload);
            PANDA_ASSERT(f4484->resolved.value);
            panda$core$Bit $tmp4487 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(f4484->fieldKind, ((panda$core$Int64) { 10002 }));
            bool $tmp4486 = $tmp4487.value;
            if (!$tmp4486) goto $l4488;
            $tmp4486 = ((panda$core$Bit) { f4484->value != NULL }).value;
            $l4488:;
            panda$core$Bit $tmp4489 = { $tmp4486 };
            bool $tmp4485 = $tmp4489.value;
            if (!$tmp4485) goto $l4490;
            panda$core$Bit $tmp4491 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, f4484->value);
            $tmp4485 = $tmp4491.value;
            $l4490:;
            panda$core$Bit $tmp4492 = { $tmp4485 };
            return $tmp4492;
        }
        break;
        case 1016:
        {
            v4493 = ((org$pandalanguage$pandac$Variable*) p_expr->payload);
            panda$core$Bit $tmp4495 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(v4493->varKind, ((panda$core$Int64) { 10001 }));
            bool $tmp4494 = $tmp4495.value;
            if ($tmp4494) goto $l4496;
            panda$core$Bit $tmp4499 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(v4493->varKind, ((panda$core$Int64) { 10002 }));
            bool $tmp4498 = $tmp4499.value;
            if (!$tmp4498) goto $l4500;
            $tmp4498 = ((panda$core$Bit) { v4493->initialValue != NULL }).value;
            $l4500:;
            panda$core$Bit $tmp4501 = { $tmp4498 };
            bool $tmp4497 = $tmp4501.value;
            if (!$tmp4497) goto $l4502;
            panda$core$Bit $tmp4503 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, v4493->initialValue);
            $tmp4497 = $tmp4503.value;
            $l4502:;
            panda$core$Bit $tmp4504 = { $tmp4497 };
            $tmp4494 = $tmp4504.value;
            $l4496:;
            panda$core$Bit $tmp4505 = { $tmp4494 };
            return $tmp4505;
        }
        break;
        default:
        {
            return ((panda$core$Bit) { false });
        }
    }
}
panda$core$UInt64 org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    org$pandalanguage$pandac$FieldDecl* f4510;
    org$pandalanguage$pandac$Variable* v4512;
    panda$core$Bit $tmp4506 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, p_expr);
    PANDA_ASSERT($tmp4506.value);
    switch (p_expr->kind.value) {
        case 1004:
        {
            return ((panda$core$UInt64$wrapper*) p_expr->payload)->value;
        }
        break;
        case 1010:
        {
            panda$core$Object* $tmp4507 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp4508 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$IRNode*) $tmp4507)->children, ((panda$core$Int64) { 0 }));
            panda$core$UInt64 $tmp4509 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self, ((org$pandalanguage$pandac$IRNode*) $tmp4508));
            return $tmp4509;
        }
        break;
        case 1026:
        {
            f4510 = ((org$pandalanguage$pandac$FieldDecl*) p_expr->payload);
            panda$core$UInt64 $tmp4511 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self, f4510->value);
            return $tmp4511;
        }
        break;
        case 1016:
        {
            v4512 = ((org$pandalanguage$pandac$Variable*) p_expr->payload);
            panda$core$UInt64 $tmp4513 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self, v4512->initialValue);
            return $tmp4513;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileMatch$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_m) {
    org$pandalanguage$pandac$IRNode* value4517;
    panda$collections$Array* children4524;
    panda$collections$Iterator* rawWhen$Iter4527;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp4528;
    org$pandalanguage$pandac$ASTNode* rawWhen4541;
    org$pandalanguage$pandac$IRNode* o4547;
    org$pandalanguage$pandac$IRNode* w4549;
    panda$core$Bit $tmp4514 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->kind, ((panda$core$Int64) { 125 }));
    PANDA_ASSERT($tmp4514.value);
    panda$core$Int64 $tmp4515 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
    panda$core$Bit $tmp4516 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp4515, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4516.value);
    panda$core$Object* $tmp4518 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp4519 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4518));
    org$pandalanguage$pandac$IRNode* $tmp4520 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp4519);
    value4517 = $tmp4520;
    if (((panda$core$Bit) { value4517 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp4521 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(value4517->type);
    panda$core$Bit $tmp4522 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4521);
    if ($tmp4522.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp4523 = org$pandalanguage$pandac$Compiler$compileChainedIfMatch$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_m, value4517);
        return $tmp4523;
    }
    }
    panda$collections$Array* $tmp4525 = (panda$collections$Array*) malloc(40);
    $tmp4525->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4525->refCount.value = 1;
    panda$collections$Array$init($tmp4525);
    children4524 = $tmp4525;
    panda$collections$Array$add$panda$collections$Array$T(children4524, ((panda$core$Object*) value4517));
    {
        panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp4528, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
        panda$collections$ImmutableArray* $tmp4529 = panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(p_m->children, $tmp4528);
        ITable* $tmp4530 = ((panda$collections$Iterable*) $tmp4529)->$class->itable;
        while ($tmp4530->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4530 = $tmp4530->next;
        }
        $fn4532 $tmp4531 = $tmp4530->methods[0];
        panda$collections$Iterator* $tmp4533 = $tmp4531(((panda$collections$Iterable*) $tmp4529));
        rawWhen$Iter4527 = $tmp4533;
        $l4534:;
        ITable* $tmp4536 = rawWhen$Iter4527->$class->itable;
        while ($tmp4536->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4536 = $tmp4536->next;
        }
        $fn4538 $tmp4537 = $tmp4536->methods[0];
        panda$core$Bit $tmp4539 = $tmp4537(rawWhen$Iter4527);
        panda$core$Bit $tmp4540 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4539);
        if (!$tmp4540.value) goto $l4535;
        {
            ITable* $tmp4542 = rawWhen$Iter4527->$class->itable;
            while ($tmp4542->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4542 = $tmp4542->next;
            }
            $fn4544 $tmp4543 = $tmp4542->methods[1];
            panda$core$Object* $tmp4545 = $tmp4543(rawWhen$Iter4527);
            rawWhen4541 = ((org$pandalanguage$pandac$ASTNode*) $tmp4545);
            panda$core$Bit $tmp4546 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(rawWhen4541->kind, ((panda$core$Int64) { 127 }));
            if ($tmp4546.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp4548 = org$pandalanguage$pandac$Compiler$compileOtherwise$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, rawWhen4541);
                o4547 = $tmp4548;
                if (((panda$core$Bit) { o4547 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children4524, ((panda$core$Object*) o4547));
                goto $l4534;
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp4550 = org$pandalanguage$pandac$Compiler$compileWhen$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, value4517->type, rawWhen4541);
            w4549 = $tmp4550;
            if (((panda$core$Bit) { w4549 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$Object* $tmp4551 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(w4549->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp4552 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp4551));
            panda$core$Bit $tmp4553 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4552);
            if ($tmp4553.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp4554 = org$pandalanguage$pandac$Compiler$compileChainedIfMatch$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_m, value4517);
                return $tmp4554;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children4524, ((panda$core$Object*) w4549));
        }
        goto $l4534;
        $l4535:;
    }
    org$pandalanguage$pandac$IRNode* $tmp4555 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4555->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4555->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4555, ((panda$core$Int64) { 1042 }), p_m->position, ((panda$collections$ListView*) children4524));
    return $tmp4555;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$IRNode* result4570;
    switch (p_s->kind.value) {
        case 123:
        {
            org$pandalanguage$pandac$IRNode* $tmp4557 = org$pandalanguage$pandac$Compiler$compileAssert$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4557;
        }
        break;
        case 103:
        {
            org$pandalanguage$pandac$IRNode* $tmp4558 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            org$pandalanguage$pandac$IRNode* $tmp4559 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp4558);
            return $tmp4559;
        }
        break;
        case 126:
        {
            org$pandalanguage$pandac$IRNode* $tmp4560 = org$pandalanguage$pandac$Compiler$compileBlock$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4560;
        }
        break;
        case 118:
        {
            org$pandalanguage$pandac$IRNode* $tmp4561 = org$pandalanguage$pandac$Compiler$compileIf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4561;
        }
        break;
        case 119:
        {
            org$pandalanguage$pandac$IRNode* $tmp4562 = org$pandalanguage$pandac$Compiler$compileFor$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4562;
        }
        break;
        case 121:
        {
            org$pandalanguage$pandac$IRNode* $tmp4563 = org$pandalanguage$pandac$Compiler$compileWhile$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4563;
        }
        break;
        case 120:
        {
            org$pandalanguage$pandac$IRNode* $tmp4564 = org$pandalanguage$pandac$Compiler$compileDo$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4564;
        }
        break;
        case 122:
        {
            org$pandalanguage$pandac$IRNode* $tmp4565 = org$pandalanguage$pandac$Compiler$compileLoop$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4565;
        }
        break;
        case 125:
        {
            org$pandalanguage$pandac$IRNode* $tmp4566 = org$pandalanguage$pandac$Compiler$compileMatch$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4566;
        }
        break;
        case 134:
        {
            org$pandalanguage$pandac$IRNode* $tmp4567 = org$pandalanguage$pandac$Compiler$compileBreak$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4567;
        }
        break;
        case 135:
        {
            org$pandalanguage$pandac$IRNode* $tmp4568 = org$pandalanguage$pandac$Compiler$compileContinue$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4568;
        }
        break;
        case 136:
        {
            org$pandalanguage$pandac$IRNode* $tmp4569 = org$pandalanguage$pandac$Compiler$compileReturn$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4569;
        }
        break;
        case 107:
        {
            org$pandalanguage$pandac$IRNode* $tmp4571 = org$pandalanguage$pandac$Compiler$compileCall$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            org$pandalanguage$pandac$IRNode* $tmp4572 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp4571);
            result4570 = $tmp4572;
            if (((panda$core$Bit) { result4570 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp4573 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self, result4570);
                result4570 = $tmp4573;
            }
            }
            return result4570;
        }
        break;
        case 130:
        case 131:
        case 132:
        case 133:
        {
            org$pandalanguage$pandac$IRNode* $tmp4574 = org$pandalanguage$pandac$Compiler$compileVar$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4574;
        }
        break;
    }
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBody$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$SymbolTable* old4575;
    org$pandalanguage$pandac$SymbolTable* symbols4577;
    panda$collections$Iterator* p$Iter4580;
    org$pandalanguage$pandac$MethodDecl$Parameter* p4592;
    panda$collections$Array* fieldInitializers4599;
    panda$collections$Iterator* f$Iter4603;
    org$pandalanguage$pandac$FieldDecl* f4616;
    panda$collections$Array* children4626;
    org$pandalanguage$pandac$IRNode* fieldRef4633;
    org$pandalanguage$pandac$IRNode* compiled4638;
    panda$collections$Array* children4640;
    if (((panda$core$Bit) { p_m->compiledBody != NULL }).value) {
    {
        return p_m->compiledBody;
    }
    }
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_m->owner));
    old4575 = self->symbolTable;
    org$pandalanguage$pandac$SymbolTable* $tmp4576 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, p_m->owner);
    self->symbolTable = $tmp4576;
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentMethod, ((panda$core$Object*) p_m));
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
    PANDA_ASSERT(((panda$core$Bit) { p_m->body != NULL }).value);
    org$pandalanguage$pandac$SymbolTable* $tmp4578 = (org$pandalanguage$pandac$SymbolTable*) malloc(48);
    $tmp4578->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp4578->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp4578, self->symbolTable);
    symbols4577 = $tmp4578;
    {
        ITable* $tmp4581 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp4581->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4581 = $tmp4581->next;
        }
        $fn4583 $tmp4582 = $tmp4581->methods[0];
        panda$collections$Iterator* $tmp4584 = $tmp4582(((panda$collections$Iterable*) p_m->parameters));
        p$Iter4580 = $tmp4584;
        $l4585:;
        ITable* $tmp4587 = p$Iter4580->$class->itable;
        while ($tmp4587->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4587 = $tmp4587->next;
        }
        $fn4589 $tmp4588 = $tmp4587->methods[0];
        panda$core$Bit $tmp4590 = $tmp4588(p$Iter4580);
        panda$core$Bit $tmp4591 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4590);
        if (!$tmp4591.value) goto $l4586;
        {
            ITable* $tmp4593 = p$Iter4580->$class->itable;
            while ($tmp4593->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4593 = $tmp4593->next;
            }
            $fn4595 $tmp4594 = $tmp4593->methods[1];
            panda$core$Object* $tmp4596 = $tmp4594(p$Iter4580);
            p4592 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp4596);
            org$pandalanguage$pandac$Variable* $tmp4597 = (org$pandalanguage$pandac$Variable*) malloc(88);
            $tmp4597->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
            $tmp4597->refCount.value = 1;
            org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Int64($tmp4597, ((org$pandalanguage$pandac$Symbol*) p_m)->position, ((panda$core$Int64) { 10001 }), p4592->name, p4592->type, ((panda$core$Int64) { 1820 }));
            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(symbols4577, ((org$pandalanguage$pandac$Symbol*) $tmp4597));
        }
        goto $l4585;
        $l4586:;
    }
    self->symbolTable = symbols4577;
    fieldInitializers4599 = NULL;
    panda$core$Bit $tmp4600 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 59 }));
    if ($tmp4600.value) {
    {
        panda$collections$Array* $tmp4601 = (panda$collections$Array*) malloc(40);
        $tmp4601->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp4601->refCount.value = 1;
        panda$collections$Array$init($tmp4601);
        fieldInitializers4599 = $tmp4601;
        {
            panda$core$Object* $tmp4604 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
            ITable* $tmp4605 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ClassDecl*) $tmp4604)->fields)->$class->itable;
            while ($tmp4605->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp4605 = $tmp4605->next;
            }
            $fn4607 $tmp4606 = $tmp4605->methods[0];
            panda$collections$Iterator* $tmp4608 = $tmp4606(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ClassDecl*) $tmp4604)->fields));
            f$Iter4603 = $tmp4608;
            $l4609:;
            ITable* $tmp4611 = f$Iter4603->$class->itable;
            while ($tmp4611->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4611 = $tmp4611->next;
            }
            $fn4613 $tmp4612 = $tmp4611->methods[0];
            panda$core$Bit $tmp4614 = $tmp4612(f$Iter4603);
            panda$core$Bit $tmp4615 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4614);
            if (!$tmp4615.value) goto $l4610;
            {
                ITable* $tmp4617 = f$Iter4603->$class->itable;
                while ($tmp4617->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp4617 = $tmp4617->next;
                }
                $fn4619 $tmp4618 = $tmp4617->methods[1];
                panda$core$Object* $tmp4620 = $tmp4618(f$Iter4603);
                f4616 = ((org$pandalanguage$pandac$FieldDecl*) $tmp4620);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self, f4616);
                panda$core$Bit $tmp4622 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(f4616->annotations);
                panda$core$Bit $tmp4623 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4622);
                bool $tmp4621 = $tmp4623.value;
                if (!$tmp4621) goto $l4624;
                $tmp4621 = ((panda$core$Bit) { f4616->value != NULL }).value;
                $l4624:;
                panda$core$Bit $tmp4625 = { $tmp4621 };
                if ($tmp4625.value) {
                {
                    panda$collections$Array* $tmp4627 = (panda$collections$Array*) malloc(40);
                    $tmp4627->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp4627->refCount.value = 1;
                    panda$collections$Array$init($tmp4627);
                    children4626 = $tmp4627;
                    org$pandalanguage$pandac$IRNode* $tmp4629 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp4629->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp4629->refCount.value = 1;
                    panda$core$Object* $tmp4631 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
                    org$pandalanguage$pandac$Type* $tmp4632 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp4631));
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp4629, ((panda$core$Int64) { 1025 }), ((org$pandalanguage$pandac$Symbol*) p_m)->position, $tmp4632);
                    panda$collections$Array$add$panda$collections$Array$T(children4626, ((panda$core$Object*) $tmp4629));
                    org$pandalanguage$pandac$IRNode* $tmp4634 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp4634->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp4634->refCount.value = 1;
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp4634, ((panda$core$Int64) { 1026 }), ((org$pandalanguage$pandac$Symbol*) p_m)->position, f4616->type, ((panda$core$Object*) f4616), ((panda$collections$ListView*) children4626));
                    fieldRef4633 = $tmp4634;
                    panda$collections$Array$clear(children4626);
                    panda$collections$Array$add$panda$collections$Array$T(children4626, ((panda$core$Object*) fieldRef4633));
                    panda$collections$Array$add$panda$collections$Array$T(children4626, ((panda$core$Object*) f4616->value));
                    org$pandalanguage$pandac$IRNode* $tmp4636 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp4636->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp4636->refCount.value = 1;
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4636, ((panda$core$Int64) { 1023 }), ((org$pandalanguage$pandac$Symbol*) f4616)->position, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 73 }))), ((panda$collections$ListView*) children4626));
                    panda$collections$Array$add$panda$collections$Array$T(fieldInitializers4599, ((panda$core$Object*) $tmp4636));
                }
                }
            }
            goto $l4609;
            $l4610:;
        }
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp4639 = org$pandalanguage$pandac$Compiler$compileBlock$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_m->body);
    compiled4638 = $tmp4639;
    if (((panda$core$Bit) { compiled4638 != NULL }).value) {
    {
        if (((panda$core$Bit) { fieldInitializers4599 != NULL }).value) {
        {
            panda$collections$Array* $tmp4641 = (panda$collections$Array*) malloc(40);
            $tmp4641->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp4641->refCount.value = 1;
            panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp4641, ((panda$collections$ListView*) fieldInitializers4599));
            children4640 = $tmp4641;
            panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(children4640, ((panda$collections$CollectionView*) compiled4638->children));
            org$pandalanguage$pandac$IRNode* $tmp4643 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp4643->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp4643->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4643, ((panda$core$Int64) { 1000 }), p_m->body->position, ((panda$collections$ListView*) children4640));
            compiled4638 = $tmp4643;
        }
        }
    }
    }
    PANDA_ASSERT(((panda$core$Bit) { ((panda$core$Object*) self->symbolTable) == ((panda$core$Object*) symbols4577) }).value);
    self->symbolTable = old4575;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentMethod);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    panda$core$Bit $tmp4645 = org$pandalanguage$pandac$Annotations$isInline$R$panda$core$Bit(p_m->annotations);
    if ($tmp4645.value) {
    {
        p_m->compiledBody = compiled4638;
    }
    }
    return compiled4638;
}
void org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$IRNode* compiled4646;
    if (((panda$core$Bit) { p_m->body != NULL }).value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp4647 = org$pandalanguage$pandac$Compiler$compileBody$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$IRNode$Q(self, p_m);
        compiled4646 = $tmp4647;
        panda$core$Bit $tmp4649 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->errorCount, ((panda$core$Int64) { 0 }));
        bool $tmp4648 = $tmp4649.value;
        if (!$tmp4648) goto $l4650;
        $tmp4648 = ((panda$core$Bit) { compiled4646 != NULL }).value;
        $l4650:;
        panda$core$Bit $tmp4651 = { $tmp4648 };
        if ($tmp4651.value) {
        {
            ITable* $tmp4652 = self->codeGenerator->$class->itable;
            while ($tmp4652->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
                $tmp4652 = $tmp4652->next;
            }
            $fn4654 $tmp4653 = $tmp4652->methods[3];
            $tmp4653(self->codeGenerator, p_m, compiled4646);
        }
        }
    }
    }
    else {
    {
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
        ITable* $tmp4655 = self->codeGenerator->$class->itable;
        while ($tmp4655->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
            $tmp4655 = $tmp4655->next;
        }
        $fn4657 $tmp4656 = $tmp4655->methods[2];
        $tmp4656(self->codeGenerator, p_m);
    }
    }
}
void org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Iterator* inner$Iter4658;
    org$pandalanguage$pandac$ClassDecl* inner4670;
    p_cl->external = ((panda$core$Bit) { false });
    {
        ITable* $tmp4659 = ((panda$collections$Iterable*) p_cl->classes)->$class->itable;
        while ($tmp4659->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4659 = $tmp4659->next;
        }
        $fn4661 $tmp4660 = $tmp4659->methods[0];
        panda$collections$Iterator* $tmp4662 = $tmp4660(((panda$collections$Iterable*) p_cl->classes));
        inner$Iter4658 = $tmp4662;
        $l4663:;
        ITable* $tmp4665 = inner$Iter4658->$class->itable;
        while ($tmp4665->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4665 = $tmp4665->next;
        }
        $fn4667 $tmp4666 = $tmp4665->methods[0];
        panda$core$Bit $tmp4668 = $tmp4666(inner$Iter4658);
        panda$core$Bit $tmp4669 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4668);
        if (!$tmp4669.value) goto $l4664;
        {
            ITable* $tmp4671 = inner$Iter4658->$class->itable;
            while ($tmp4671->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4671 = $tmp4671->next;
            }
            $fn4673 $tmp4672 = $tmp4671->methods[1];
            panda$core$Object* $tmp4674 = $tmp4672(inner$Iter4658);
            inner4670 = ((org$pandalanguage$pandac$ClassDecl*) $tmp4674);
            org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl(self, inner4670);
        }
        goto $l4663;
        $l4664:;
    }
}
void org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$SymbolTable* old4682;
    panda$collections$Iterator* m$Iter4687;
    org$pandalanguage$pandac$MethodDecl* m4699;
    org$pandalanguage$pandac$ClassDecl* next4709;
    PANDA_ASSERT(((panda$core$Bit) { self->compiling == NULL }).value);
    self->compiling = p_cl;
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_cl));
    org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl(self, p_cl);
    panda$core$Bit $tmp4675 = org$pandalanguage$pandac$Annotations$isSpecialize$R$panda$core$Bit(p_cl->annotations);
    if ($tmp4675.value) {
    {
        ITable* $tmp4676 = self->codeGenerator->$class->itable;
        while ($tmp4676->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
            $tmp4676 = $tmp4676->next;
        }
        $fn4678 $tmp4677 = $tmp4676->methods[1];
        $tmp4677(self->codeGenerator, p_cl);
        ITable* $tmp4679 = self->codeGenerator->$class->itable;
        while ($tmp4679->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
            $tmp4679 = $tmp4679->next;
        }
        $fn4681 $tmp4680 = $tmp4679->methods[4];
        $tmp4680(self->codeGenerator, p_cl);
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
        return;
    }
    }
    old4682 = self->symbolTable;
    org$pandalanguage$pandac$SymbolTable* $tmp4683 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, p_cl);
    self->symbolTable = $tmp4683;
    ITable* $tmp4684 = self->codeGenerator->$class->itable;
    while ($tmp4684->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
        $tmp4684 = $tmp4684->next;
    }
    $fn4686 $tmp4685 = $tmp4684->methods[1];
    $tmp4685(self->codeGenerator, p_cl);
    {
        ITable* $tmp4688 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
        while ($tmp4688->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4688 = $tmp4688->next;
        }
        $fn4690 $tmp4689 = $tmp4688->methods[0];
        panda$collections$Iterator* $tmp4691 = $tmp4689(((panda$collections$Iterable*) p_cl->methods));
        m$Iter4687 = $tmp4691;
        $l4692:;
        ITable* $tmp4694 = m$Iter4687->$class->itable;
        while ($tmp4694->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4694 = $tmp4694->next;
        }
        $fn4696 $tmp4695 = $tmp4694->methods[0];
        panda$core$Bit $tmp4697 = $tmp4695(m$Iter4687);
        panda$core$Bit $tmp4698 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4697);
        if (!$tmp4698.value) goto $l4693;
        {
            ITable* $tmp4700 = m$Iter4687->$class->itable;
            while ($tmp4700->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4700 = $tmp4700->next;
            }
            $fn4702 $tmp4701 = $tmp4700->methods[1];
            panda$core$Object* $tmp4703 = $tmp4701(m$Iter4687);
            m4699 = ((org$pandalanguage$pandac$MethodDecl*) $tmp4703);
            org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$MethodDecl(self, m4699);
        }
        goto $l4692;
        $l4693:;
    }
    ITable* $tmp4704 = self->codeGenerator->$class->itable;
    while ($tmp4704->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
        $tmp4704 = $tmp4704->next;
    }
    $fn4706 $tmp4705 = $tmp4704->methods[4];
    $tmp4705(self->codeGenerator, p_cl);
    self->symbolTable = old4682;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    self->compiling = NULL;
    panda$core$Int64 $tmp4707 = panda$collections$Array$get_count$R$panda$core$Int64(self->compilationQueue);
    panda$core$Bit $tmp4708 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp4707, ((panda$core$Int64) { 0 }));
    if ($tmp4708.value) {
    {
        panda$core$Object* $tmp4710 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->compilationQueue, ((panda$core$Int64) { 0 }));
        next4709 = ((org$pandalanguage$pandac$ClassDecl*) $tmp4710);
        panda$collections$Array$removeIndex$panda$core$Int64(self->compilationQueue, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$ClassDecl(self, next4709);
    }
    }
    panda$core$Int64 $tmp4711 = panda$collections$Array$get_count$R$panda$core$Int64(self->compilationQueue);
    panda$core$Bit $tmp4712 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4711, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp4712.value);
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Compiler* self, panda$io$File* p_file) {
    panda$collections$ListView* result4713;
    org$pandalanguage$pandac$ASTNode* parsed4716;
    panda$collections$Iterator* cl$Iter4719;
    org$pandalanguage$pandac$ClassDecl* cl4731;
    panda$core$Object* $tmp4714 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->scans, ((panda$collections$Key*) p_file));
    result4713 = ((panda$collections$ListView*) $tmp4714);
    if (((panda$core$Bit) { result4713 == NULL }).value) {
    {
        panda$core$String* $tmp4715 = panda$io$File$readFully$R$panda$core$String(p_file);
        org$pandalanguage$pandac$parser$Parser$start$panda$io$File$panda$core$String(self->parser, p_file, $tmp4715);
        org$pandalanguage$pandac$ASTNode* $tmp4717 = org$pandalanguage$pandac$parser$Parser$file$R$org$pandalanguage$pandac$ASTNode$Q(self->parser);
        parsed4716 = $tmp4717;
        if (((panda$core$Bit) { parsed4716 != NULL }).value) {
        {
            panda$collections$ListView* $tmp4718 = org$pandalanguage$pandac$Scanner$scan$panda$io$File$org$pandalanguage$pandac$ASTNode$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(self->scanner, p_file, parsed4716);
            result4713 = $tmp4718;
            {
                ITable* $tmp4720 = ((panda$collections$Iterable*) result4713)->$class->itable;
                while ($tmp4720->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp4720 = $tmp4720->next;
                }
                $fn4722 $tmp4721 = $tmp4720->methods[0];
                panda$collections$Iterator* $tmp4723 = $tmp4721(((panda$collections$Iterable*) result4713));
                cl$Iter4719 = $tmp4723;
                $l4724:;
                ITable* $tmp4726 = cl$Iter4719->$class->itable;
                while ($tmp4726->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp4726 = $tmp4726->next;
                }
                $fn4728 $tmp4727 = $tmp4726->methods[0];
                panda$core$Bit $tmp4729 = $tmp4727(cl$Iter4719);
                panda$core$Bit $tmp4730 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4729);
                if (!$tmp4730.value) goto $l4725;
                {
                    ITable* $tmp4732 = cl$Iter4719->$class->itable;
                    while ($tmp4732->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp4732 = $tmp4732->next;
                    }
                    $fn4734 $tmp4733 = $tmp4732->methods[1];
                    panda$core$Object* $tmp4735 = $tmp4733(cl$Iter4719);
                    cl4731 = ((org$pandalanguage$pandac$ClassDecl*) $tmp4735);
                    panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classes, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) cl4731)->name), ((panda$core$Object*) cl4731));
                }
                goto $l4724;
                $l4725:;
            }
        }
        }
        else {
        {
            panda$collections$Array* $tmp4736 = (panda$collections$Array*) malloc(40);
            $tmp4736->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp4736->refCount.value = 1;
            panda$collections$Array$init($tmp4736);
            result4713 = ((panda$collections$ListView*) $tmp4736);
        }
        }
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->scans, ((panda$collections$Key*) p_file), ((panda$core$Object*) result4713));
    }
    }
    return result4713;
}
void org$pandalanguage$pandac$Compiler$compile$panda$io$File(org$pandalanguage$pandac$Compiler* self, panda$io$File* p_file) {
    panda$collections$ListView* classes4738;
    panda$collections$Iterator* cl$Iter4740;
    org$pandalanguage$pandac$ClassDecl* cl4752;
    panda$collections$ListView* $tmp4739 = org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(self, p_file);
    classes4738 = $tmp4739;
    {
        ITable* $tmp4741 = ((panda$collections$Iterable*) classes4738)->$class->itable;
        while ($tmp4741->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4741 = $tmp4741->next;
        }
        $fn4743 $tmp4742 = $tmp4741->methods[0];
        panda$collections$Iterator* $tmp4744 = $tmp4742(((panda$collections$Iterable*) classes4738));
        cl$Iter4740 = $tmp4744;
        $l4745:;
        ITable* $tmp4747 = cl$Iter4740->$class->itable;
        while ($tmp4747->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4747 = $tmp4747->next;
        }
        $fn4749 $tmp4748 = $tmp4747->methods[0];
        panda$core$Bit $tmp4750 = $tmp4748(cl$Iter4740);
        panda$core$Bit $tmp4751 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4750);
        if (!$tmp4751.value) goto $l4746;
        {
            ITable* $tmp4753 = cl$Iter4740->$class->itable;
            while ($tmp4753->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4753 = $tmp4753->next;
            }
            $fn4755 $tmp4754 = $tmp4753->methods[1];
            panda$core$Object* $tmp4756 = $tmp4754(cl$Iter4740);
            cl4752 = ((org$pandalanguage$pandac$ClassDecl*) $tmp4756);
            org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$ClassDecl(self, cl4752);
        }
        goto $l4745;
        $l4746:;
    }
}
void org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, panda$core$String* p_msg) {
    panda$core$Object* $tmp4757 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
    org$pandalanguage$pandac$Compiler$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$ClassDecl*) $tmp4757)->source, p_position, p_msg);
}
void org$pandalanguage$pandac$Compiler$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$Compiler* self, panda$io$File* p_file, org$pandalanguage$pandac$Position p_pos, panda$core$String* p_msg) {
    if (self->reportErrors.value) {
    {
        panda$core$Int64 $tmp4758 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->errorCount, ((panda$core$Int64) { 1 }));
        self->errorCount = $tmp4758;
        panda$core$String* $tmp4759 = panda$io$File$name$R$panda$core$String(p_file);
        panda$core$String* $tmp4760 = panda$core$String$convert$R$panda$core$String($tmp4759);
        panda$core$String* $tmp4762 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4760, &$s4761);
        panda$core$String* $tmp4763 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp4762, ((panda$core$Object*) wrap_org$pandalanguage$pandac$Position(p_pos)));
        panda$core$String* $tmp4765 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4763, &$s4764);
        panda$core$String* $tmp4766 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4765, p_msg);
        panda$core$String* $tmp4768 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4766, &$s4767);
        panda$io$Console$printLine$panda$core$Object(((panda$core$Object*) $tmp4768));
    }
    }
}
void org$pandalanguage$pandac$Compiler$finish(org$pandalanguage$pandac$Compiler* self) {
    ITable* $tmp4769 = self->codeGenerator->$class->itable;
    while ($tmp4769->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
        $tmp4769 = $tmp4769->next;
    }
    $fn4771 $tmp4770 = $tmp4769->methods[5];
    $tmp4770(self->codeGenerator);
}

