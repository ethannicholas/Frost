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

org$pandalanguage$pandac$Compiler$class_type org$pandalanguage$pandac$Compiler$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &org$pandalanguage$pandac$Compiler$_org$pandalanguage$pandac$ErrorReporter, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, org$pandalanguage$pandac$Compiler$addAlias$panda$core$String, org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q, org$pandalanguage$pandac$Compiler$checkGenericParameters$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$Type$Q, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl, org$pandalanguage$pandac$Compiler$resolveMethodCall$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT, org$pandalanguage$pandac$Compiler$exists$panda$io$File$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$getClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q, org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Position$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q, org$pandalanguage$pandac$Compiler$specialize$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q, org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT, org$pandalanguage$pandac$Compiler$signatureMatch$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q, org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q, org$pandalanguage$pandac$Compiler$interfaceMethods$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT, org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable, org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT, org$pandalanguage$pandac$Compiler$addInheritedMethods$org$pandalanguage$pandac$SymbolTable$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT, org$pandalanguage$pandac$Compiler$getMethodReference$org$pandalanguage$pandac$SymbolTable$org$pandalanguage$pandac$IRNode$Q$panda$core$String$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$Compiler$symbolRef$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$smallestCharSize$org$pandalanguage$pandac$IRNode$R$panda$core$Int64, org$pandalanguage$pandac$Compiler$rangeCharType$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q, org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64, org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64, org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q, org$pandalanguage$pandac$Compiler$doCoerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$Compiler$callCost$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q, org$pandalanguage$pandac$Compiler$matchMethods$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q, org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$declaredTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$foldInts$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$Compiler$compileIndexedAssignment$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT, org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$IRNode$Q$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT, org$pandalanguage$pandac$Compiler$compilePrefix$panda$core$Int64$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compilePrefix$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileCall$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$String$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileIdentifier$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileRange$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileSelf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileSuper$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileNull$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileBlock$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileIf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileRangeFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileIteratorFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileFor$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileWhile$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileDo$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileLoop$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q, org$pandalanguage$pandac$Compiler$compileDeclaration$org$pandalanguage$pandac$ASTNode$panda$core$Int64$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileBreak$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileContinue$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileReturn$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileAssert$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileVar$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileWhenTest$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileChainedIfWhen$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileChainedIfMatch$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileWhen$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileOtherwise$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64, org$pandalanguage$pandac$Compiler$compileMatch$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileBody$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT, org$pandalanguage$pandac$Compiler$compile$panda$io$File, org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String, org$pandalanguage$pandac$Compiler$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String, org$pandalanguage$pandac$Compiler$finish} };

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
typedef panda$collections$Iterator* (*$fn1725)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1731)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1737)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1890)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2013)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2019)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2025)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn2122)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2144)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Int64 (*$fn2166)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn2183)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2189)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2195)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn2211)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn2233)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn2307)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2325)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn2396)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn2414)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2420)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2426)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2457)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2463)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2469)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2506)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2512)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2518)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2541)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2547)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2553)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2991)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2997)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3003)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3135)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3141)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3147)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn3255)(panda$core$Object*);
typedef panda$core$Int64 (*$fn3364)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn3380)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3386)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3392)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3510)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3516)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3522)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3735)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3741)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3747)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3882)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3888)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3894)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3924)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3930)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3936)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4047)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4053)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4059)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4205)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4211)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4217)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4300)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4306)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4312)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4363)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4369)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4375)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4439)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4445)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4451)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4490)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4496)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4502)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4514)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4520)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4526)(panda$collections$Iterator*);
typedef void (*$fn4561)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$MethodDecl*, org$pandalanguage$pandac$IRNode*);
typedef void (*$fn4564)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$collections$Iterator* (*$fn4568)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4574)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4580)(panda$collections$Iterator*);
typedef void (*$fn4585)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn4588)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn4593)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$collections$Iterator* (*$fn4597)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4603)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4609)(panda$collections$Iterator*);
typedef void (*$fn4613)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$collections$Iterator* (*$fn4629)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4635)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4641)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4650)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4656)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4662)(panda$collections$Iterator*);
typedef void (*$fn4678)(org$pandalanguage$pandac$CodeGenerator*);

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
static panda$core$String $s1438 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 19485, NULL };
static panda$core$String $s1715 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 19485, NULL };
static panda$core$String $s1920 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27", 10, 875040426634827830, NULL };
static panda$core$String $s1922 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 14, 2262695563077912654, NULL };
static panda$core$String $s1925 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1950 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27", 10, 875040426634827830, NULL };
static panda$core$String $s1952 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 14, 2262695563077912654, NULL };
static panda$core$String $s1955 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1988 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 19485, NULL };
static panda$core$String $s2054 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27", 10, 875040426634827830, NULL };
static panda$core$String $s2056 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 14, 2262695563077912654, NULL };
static panda$core$String $s2059 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2099 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6C\x75\x65\x20\x6F\x66\x20\x74\x79\x70\x65\x20\x27", 15, -1620219380461029456, NULL };
static panda$core$String $s2101 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x70\x6F\x73\x73\x69\x62\x6C\x79\x20\x62\x65\x20\x61\x6E\x20\x69\x6E\x73\x74\x61\x6E\x63\x65\x20\x6F\x66\x20", 36, -427166674877421096, NULL };
static panda$core$String $s2103 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2105 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2217 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2218 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, 216, NULL };
static panda$core$String $s2221 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x65\x78\x70\x65\x63\x74\x65\x64\x20", 10, -1007140463547215113, NULL };
static panda$core$String $s2225 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x61\x72\x67\x75\x6D\x65\x6E\x74", 9, 1450721239526715900, NULL };
static panda$core$String $s2228 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2230 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x74\x20\x72\x65\x63\x65\x69\x76\x65\x64\x20", 13, -1301083486074551925, NULL };
static panda$core$String $s2236 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2260 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x64\x69\x72\x65\x63\x74\x6C\x79\x20\x63\x61\x6C\x6C\x20\x27\x69\x6E\x69\x74\x27\x20\x6F\x75\x74\x73\x69\x64\x65\x20\x6F\x66\x20\x61\x6E\x20\x69\x6E\x69\x74\x20\x6D\x65\x74\x68\x6F\x64", 53, 84993564105955720, NULL };
static panda$core$String $s2270 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x69\x6E\x69\x74\x27\x20\x6D\x61\x79\x20\x6F\x6E\x6C\x79\x20\x62\x65\x20\x63\x61\x6C\x6C\x65\x64\x20\x6F\x6E\x20\x27\x73\x65\x6C\x66\x27\x20\x6F\x72\x20\x27\x73\x75\x70\x65\x72\x27", 46, 5737688576853633111, NULL };
static panda$core$String $s2285 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x63\x61\x6C\x6C\x20\x69\x6E\x73\x74\x61\x6E\x63\x65\x20", 21, -1285496544752055923, NULL };
static panda$core$String $s2288 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x66\x72\x6F\x6D\x20\x61\x20\x40\x63\x6C\x61\x73\x73\x20\x63\x6F\x6E\x74\x65\x78\x74", 22, 6236893689928691337, NULL };
static panda$core$String $s2299 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x63\x61\x6C\x6C\x20\x63\x6C\x61\x73\x73\x20", 18, 4176321021903236102, NULL };
static panda$core$String $s2302 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x6F\x6E\x20\x61\x6E\x20\x69\x6E\x73\x74\x61\x6E\x63\x65", 15, 4946791728819903386, NULL };
static panda$core$String $s2338 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s2357 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6C\x61\x73\x73\x20\x27", 7, 213449334494206, NULL };
static panda$core$String $s2359 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x64\x6F\x65\x73\x20\x6E\x6F\x74\x20\x68\x61\x76\x65\x20\x61\x20\x6D\x65\x6D\x62\x65\x72\x20\x6E\x61\x6D\x65\x64\x20\x27", 32, -5677460192622646983, NULL };
static panda$core$String $s2362 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2369 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2371 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s2374 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x69\x73\x20\x6E\x6F\x74\x20\x61\x20\x6D\x65\x74\x68\x6F\x64", 17, 1918101523522592587, NULL };
static panda$core$String $s2401 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x6F\x20\x6D\x61\x74\x63\x68\x20\x66\x6F\x72\x20\x63\x61\x6C\x6C\x20\x74\x6F\x20\x27", 22, 7814600009206081200, NULL };
static panda$core$String $s2403 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s2406 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2410 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2428 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2429 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x27", 2, 14381, NULL };
static panda$core$String $s2430 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x77\x69\x74\x68\x20\x72\x65\x74\x75\x72\x6E\x20\x74\x79\x70\x65\x20\x27", 19, -3030064837581027794, NULL };
static panda$core$String $s2432 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2480 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x69\x74", 4, 213374837, NULL };
static panda$core$String $s2490 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6C\x75\x65\x20\x6F\x66\x20\x74\x79\x70\x65\x20\x27", 15, -1620219380461029456, NULL };
static panda$core$String $s2492 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x69\x73\x20\x6E\x6F\x74\x20\x61\x20\x6D\x65\x74\x68\x6F\x64", 17, 1918101523522592587, NULL };
static panda$core$String $s2500 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2502 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2520 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2523 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x3E\x28", 4, 146931305, NULL };
static panda$core$String $s2524 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x26\x3E\x28", 5, 14839819243, NULL };
static panda$core$String $s2537 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2555 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2558 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x3E\x28", 4, 146931305, NULL };
static panda$core$String $s2559 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x26\x3E\x28", 5, 14839819243, NULL };
static panda$core$String $s2576 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2B", 1, 144, NULL };
static panda$core$String $s2577 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D", 1, 146, NULL };
static panda$core$String $s2578 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 143, NULL };
static panda$core$String $s2579 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, 148, NULL };
static panda$core$String $s2580 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F\x2F", 2, 14995, NULL };
static panda$core$String $s2581 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 138, NULL };
static panda$core$String $s2582 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5E", 1, 195, NULL };
static panda$core$String $s2583 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3D", 1, 162, NULL };
static panda$core$String $s2584 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x3D", 2, 13595, NULL };
static panda$core$String $s2585 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 163, NULL };
static panda$core$String $s2586 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 161, NULL };
static panda$core$String $s2587 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E\x3D", 2, 16524, NULL };
static panda$core$String $s2588 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x3D", 2, 16322, NULL };
static panda$core$String $s2589 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1, 225, NULL };
static panda$core$String $s2590 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C\x7C", 2, 22849, NULL };
static panda$core$String $s2591 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s2592 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26\x26", 2, 14077, NULL };
static panda$core$String $s2593 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7E", 1, 227, NULL };
static panda$core$String $s2594 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7E\x7E", 2, 23053, NULL };
static panda$core$String $s2595 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21", 1, 134, NULL };
static panda$core$String $s2596 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x21", 2, 13567, NULL };
static panda$core$String $s2597 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x3C", 2, 16321, NULL };
static panda$core$String $s2598 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E\x3E", 2, 16525, NULL };
static panda$core$String $s2599 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 19485, NULL };
static panda$core$String $s2600 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A\x3D", 2, 16120, NULL };
static panda$core$String $s2601 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3D\x3D", 2, 16423, NULL };
static panda$core$String $s2602 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x3D\x3D", 3, 1373156, NULL };
static panda$core$String $s2723 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x76\x61\x6C\x69\x64\x20\x6E\x75\x6D\x65\x72\x69\x63\x20\x6F\x70\x65\x72\x61\x74\x69\x6F\x6E", 25, 9019145596080302696, NULL };
static panda$core$String $s2735 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D\x3A\x3D", 4, 198772404, NULL };
static panda$core$String $s2783 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6F\x6E\x76\x65\x72\x74", 7, 213482220537370, NULL };
static panda$core$String $s2787 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D\x3A\x3D", 4, 198772404, NULL };
static panda$core$String $s2885 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2888 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x6F\x70\x65\x72\x61\x74\x65\x20\x6F\x6E\x20\x27", 21, -3266050109438970469, NULL };
static panda$core$String $s2891 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20", 3, 1432616, NULL };
static panda$core$String $s2893 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2895 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2902 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2905 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x6F\x70\x65\x72\x61\x74\x65\x20\x6F\x6E\x20\x27", 21, -3266050109438970469, NULL };
static panda$core$String $s2908 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20", 3, 1432616, NULL };
static panda$core$String $s2910 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2912 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2934 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x61\x73\x73\x69\x67\x6E\x20\x74\x6F\x20\x74\x68\x69\x73\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6F\x6E", 32, -4891466264852316840, NULL };
static panda$core$String $s2946 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x61\x73\x73\x69\x67\x6E\x20\x74\x6F\x20\x74\x68\x69\x73\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6F\x6E", 32, -4891466264852316840, NULL };
static panda$core$String $s2963 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6F\x6E\x76\x65\x72\x74", 7, 213482220537370, NULL };
static panda$core$String $s2976 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 19485, NULL };
static panda$core$String $s3045 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3048 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x6F\x70\x65\x72\x61\x74\x65\x20\x6F\x6E\x20\x27", 21, -3266050109438970469, NULL };
static panda$core$String $s3051 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20\x27", 4, 144694255, NULL };
static panda$core$String $s3054 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3168 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x6D\x65\x74\x68\x6F\x64\x3E", 8, 17378158564789264, NULL };
static panda$core$String $s3191 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6E\x75\x6D\x62\x65\x72\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 30, 5304221197101987767, NULL };
static panda$core$String $s3193 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3201 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6E\x75\x6D\x62\x65\x72\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 30, 5304221197101987767, NULL };
static panda$core$String $s3203 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3257 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s3260 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3279 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6C\x61\x73\x73\x20\x27", 7, 213449334494206, NULL };
static panda$core$String $s3281 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x64\x6F\x65\x73\x20\x6E\x6F\x74\x20\x68\x61\x76\x65\x20\x61\x20\x6D\x65\x6D\x62\x65\x72\x20\x6E\x61\x6D\x65\x64\x20\x27", 32, -5677460192622646983, NULL };
static panda$core$String $s3284 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3349 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x75\x6E\x72\x65\x73\x6F\x6C\x76\x65\x64\x20\x72\x61\x6E\x67\x65\x3E", 18, -1293962867859660245, NULL };
static panda$core$String $s3358 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x72\x65\x66\x65\x72\x65\x6E\x63\x65\x20\x27\x73\x65\x6C\x66\x27\x20\x66\x72\x6F\x6D\x20\x61\x20\x40\x63\x6C\x61\x73\x73\x20\x6D\x65\x74\x68\x6F\x64", 44, -511889306060728385, NULL };
static panda$core$String $s3376 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3399 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s3402 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3406 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3417 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x72\x65\x66\x65\x72\x65\x6E\x63\x65\x20\x27\x73\x75\x70\x65\x72\x27\x20\x66\x72\x6F\x6D\x20\x61\x20\x40\x63\x6C\x61\x73\x73\x20\x6D\x65\x74\x68\x6F\x64", 45, 3734810722724983720, NULL };
static panda$core$String $s3425 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s3449 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6C\x75\x65\x20\x6F\x66\x20\x74\x79\x70\x65\x20\x27", 15, -1620219380461029456, NULL };
static panda$core$String $s3451 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x70\x6F\x73\x73\x69\x62\x6C\x79\x20\x62\x65\x20\x61\x6E\x20\x69\x6E\x73\x74\x61\x6E\x63\x65\x20\x6F\x66\x20", 36, -427166674877421096, NULL };
static panda$core$String $s3453 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3455 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3482 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x64\x6F\x65\x73\x20\x6E\x6F\x74\x20\x72\x65\x74\x75\x72\x6E\x20\x61\x20\x76\x61\x6C\x75\x65", 24, -3977552604268313933, NULL };
static panda$core$String $s3602 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x6F\x72\x20\x6C\x6F\x6F\x70\x20\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6E\x75\x6D\x65\x72\x69\x63\x20\x72\x61\x6E\x67\x65\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 46, 6859502832880265551, NULL };
static panda$core$String $s3604 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3636 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 161, NULL };
static panda$core$String $s3640 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 163, NULL };
static panda$core$String $s3645 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x49\x74\x65\x72", 5, 14332680541, NULL };
static panda$core$String $s3668 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x65\x74\x5F\x64\x6F\x6E\x65", 8, 21980003879763538, NULL };
static panda$core$String $s3673 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21", 1, 134, NULL };
static panda$core$String $s3685 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x65\x78\x74", 4, 218436048, NULL };
static panda$core$String $s3771 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x74\x65\x72\x61\x74\x6F\x72", 8, 22210198075044275, NULL };
static panda$core$String $s3779 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6E\x20\x49\x74\x65\x72\x61\x62\x6C\x65\x20\x6F\x72\x20\x49\x74\x65\x72\x61\x74\x6F\x72\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 45, 562271959045909027, NULL };
static panda$core$String $s3781 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3844 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x63\x6C\x61\x72\x61\x74\x69\x6F\x6E\x20\x68\x61\x73\x20\x6E\x65\x69\x74\x68\x65\x72\x20\x61\x20\x74\x79\x70\x65\x20\x6E\x6F\x72\x20\x61\x20\x76\x61\x6C\x75\x65", 42, 71025131614347466, NULL };
static panda$core$String $s3905 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x62\x72\x65\x61\x6B\x20", 7, 149654778879689, NULL };
static panda$core$String $s3907 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20\x69\x6E\x73\x69\x64\x65\x20\x61\x20\x6C\x6F\x6F\x70\x20\x6C\x61\x62\x65\x6C\x6C\x65\x64\x20", 33, 5869484791969643332, NULL };
static panda$core$String $s3909 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3911 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A\x27", 2, 16098, NULL };
static panda$core$String $s3916 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x62\x72\x65\x61\x6B\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20\x69\x6E\x73\x69\x64\x65\x20\x61\x20\x6C\x6F\x6F\x70", 29, -2107280000252113069, NULL };
static panda$core$String $s3947 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x63\x6F\x6E\x74\x69\x6E\x75\x65\x20", 10, 6626032424543403513, NULL };
static panda$core$String $s3949 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20\x69\x6E\x73\x69\x64\x65\x20\x61\x20\x6C\x6F\x6F\x70\x20\x6C\x61\x62\x65\x6C\x6C\x65\x64\x20", 33, 5869484791969643332, NULL };
static panda$core$String $s3951 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3953 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A\x27", 2, 16098, NULL };
static panda$core$String $s3958 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x63\x6F\x6E\x74\x69\x6E\x75\x65\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20\x69\x6E\x73\x69\x64\x65\x20\x61\x20\x6C\x6F\x6F\x70", 32, -6048052453244835837, NULL };
static panda$core$String $s3972 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x72\x65\x74\x75\x72\x6E\x20\x61\x20\x76\x61\x6C\x75\x65\x20\x66\x72\x6F\x6D\x20\x61\x20\x6D\x65\x74\x68\x6F\x64\x20\x77\x69\x74\x68\x20\x6E\x6F\x20\x72\x65\x74\x75\x72\x6E\x20\x74\x79\x70\x65", 55, -6755143087675264705, NULL };
static panda$core$String $s3986 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x72\x65\x74\x75\x72\x6E\x20\x76\x61\x6C\x75\x65", 23, 6159277012237708805, NULL };
static panda$core$String $s4006 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6C\x75\x65", 5, 22890280642, NULL };
static panda$core$String $s4073 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3D", 1, 162, NULL };
static panda$core$String $s4110 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1, 225, NULL };
static panda$core$String $s4161 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x6D\x61\x74\x63\x68\x24", 7, 146584075981198, NULL };
static panda$core$String $s4163 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5F", 1, 196, NULL };
static panda$core$String $s4166 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4668 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A", 1, 159, NULL };
static panda$core$String $s4671 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A\x20\x65\x72\x72\x6F\x72\x3A\x20", 9, 1725281418740475535, NULL };
static panda$core$String $s4674 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };

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
    panda$core$Int64$nullable cost11665;
    panda$core$Int64$nullable cost21669;
    panda$core$Int64 cost1678;
    panda$core$Int64$nullable cost11692;
    panda$core$Int64$nullable cost21696;
    panda$core$Int64$nullable cost31701;
    panda$collections$Array* args1709;
    org$pandalanguage$pandac$ClassDecl* targetClass1720;
    panda$collections$Iterator* m$Iter1722;
    org$pandalanguage$pandac$MethodDecl* m1734;
    panda$core$Int64$nullable cost1746;
    panda$core$Int64$nullable cost1751;
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
        case 1031:
        {
            panda$core$Bit $tmp1648 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(p_target);
            if ($tmp1648.value) {
            {
                panda$core$Int64 $tmp1649 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_expr->children);
                panda$core$Bit $tmp1650 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1649, ((panda$core$Int64) { 2 }));
                if ($tmp1650.value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Object* $tmp1652 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Bit $tmp1653 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1652)->kind, ((panda$core$Int64) { 1030 }));
                bool $tmp1651 = $tmp1653.value;
                if (!$tmp1651) goto $l1654;
                panda$core$Object* $tmp1655 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                panda$core$Bit $tmp1656 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1655)->kind, ((panda$core$Int64) { 1030 }));
                $tmp1651 = $tmp1656.value;
                $l1654:;
                panda$core$Bit $tmp1657 = { $tmp1651 };
                if ($tmp1657.value) {
                {
                    panda$core$Object* $tmp1658 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                    panda$core$Bit $tmp1659 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1658)->typeKind, ((panda$core$Int64) { 11 }));
                    if ($tmp1659.value) {
                    {
                        panda$core$Object* $tmp1660 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                        panda$core$Object* $tmp1661 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$Type*) $tmp1660)->subtypes, ((panda$core$Int64) { 0 }));
                        panda$core$Bit $tmp1662 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1661));
                        if ($tmp1662.value) {
                        {
                            return ((panda$core$Int64$nullable) { base1544, true });
                        }
                        }
                        panda$core$Int64 $tmp1663 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(base1544, ((panda$core$Int64) { 1 }));
                        return ((panda$core$Int64$nullable) { $tmp1663, true });
                    }
                    }
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Bit $tmp1664 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 21 }));
                PANDA_ASSERT($tmp1664.value);
                panda$core$Object* $tmp1666 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Object* $tmp1667 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                panda$core$Int64$nullable $tmp1668 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1666), ((org$pandalanguage$pandac$Type*) $tmp1667));
                cost11665 = $tmp1668;
                if (((panda$core$Bit) { !cost11665.nonnull }).value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Object* $tmp1670 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                panda$core$Object* $tmp1671 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                panda$core$Int64$nullable $tmp1672 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1670), ((org$pandalanguage$pandac$Type*) $tmp1671));
                cost21669 = $tmp1672;
                if (((panda$core$Bit) { !cost21669.nonnull }).value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Int64 $tmp1673 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(base1544, ((panda$core$Int64) cost11665.value));
                panda$core$Int64 $tmp1674 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1673, ((panda$core$Int64) cost21669.value));
                return ((panda$core$Int64$nullable) { $tmp1674, true });
            }
            }
            panda$core$Bit $tmp1675 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(p_target);
            if ($tmp1675.value) {
            {
                panda$core$Int64 $tmp1676 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_expr->children);
                panda$core$Bit $tmp1677 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1676, ((panda$core$Int64) { 3 }));
                if ($tmp1677.value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Object* $tmp1680 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Bit $tmp1681 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1680)->kind, ((panda$core$Int64) { 1030 }));
                bool $tmp1679 = $tmp1681.value;
                if (!$tmp1679) goto $l1682;
                panda$core$Object* $tmp1683 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                panda$core$Bit $tmp1684 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1683)->kind, ((panda$core$Int64) { 1030 }));
                $tmp1679 = $tmp1684.value;
                $l1682:;
                panda$core$Bit $tmp1685 = { $tmp1679 };
                if ($tmp1685.value) {
                {
                    panda$core$Object* $tmp1686 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                    panda$core$Bit $tmp1687 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1686)->typeKind, ((panda$core$Int64) { 11 }));
                    if ($tmp1687.value) {
                    {
                        panda$core$Object* $tmp1688 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                        panda$core$Object* $tmp1689 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$Type*) $tmp1688)->subtypes, ((panda$core$Int64) { 0 }));
                        panda$core$Bit $tmp1690 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1689));
                        if ($tmp1690.value) {
                        {
                            cost1678 = ((panda$core$Int64) { 0 });
                        }
                        }
                        else {
                        {
                            cost1678 = ((panda$core$Int64) { 1 });
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
                    panda$core$Bit $tmp1691 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 21 }));
                    PANDA_ASSERT($tmp1691.value);
                    panda$core$Object* $tmp1693 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                    panda$core$Object* $tmp1694 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                    panda$core$Int64$nullable $tmp1695 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1693), ((org$pandalanguage$pandac$Type*) $tmp1694));
                    cost11692 = $tmp1695;
                    if (((panda$core$Bit) { !cost11692.nonnull }).value) {
                    {
                        return ((panda$core$Int64$nullable) { .nonnull = false });
                    }
                    }
                    panda$core$Object* $tmp1697 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                    panda$core$Object* $tmp1698 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                    panda$core$Int64$nullable $tmp1699 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1697), ((org$pandalanguage$pandac$Type*) $tmp1698));
                    cost21696 = $tmp1699;
                    if (((panda$core$Bit) { !cost21696.nonnull }).value) {
                    {
                        return ((panda$core$Int64$nullable) { .nonnull = false });
                    }
                    }
                    panda$core$Int64 $tmp1700 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) cost11692.value), ((panda$core$Int64) cost21696.value));
                    cost1678 = $tmp1700;
                }
                }
                panda$core$Object* $tmp1702 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 2 }));
                panda$core$Object* $tmp1703 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 2 }));
                panda$core$Int64$nullable $tmp1704 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1702), ((org$pandalanguage$pandac$Type*) $tmp1703));
                cost31701 = $tmp1704;
                if (((panda$core$Bit) { !cost31701.nonnull }).value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Int64 $tmp1705 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(base1544, cost1678);
                panda$core$Int64 $tmp1706 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1705, ((panda$core$Int64) cost31701.value));
                return ((panda$core$Int64$nullable) { $tmp1706, true });
            }
            }
            org$pandalanguage$pandac$Type* $tmp1707 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
            panda$core$Int64$nullable $tmp1708 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1707, p_target);
            return $tmp1708;
        }
        break;
        case 1040:
        {
            panda$collections$Array* $tmp1710 = (panda$collections$Array*) malloc(40);
            $tmp1710->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1710->refCount.value = 1;
            panda$collections$Array$init($tmp1710);
            args1709 = $tmp1710;
            panda$core$Object* $tmp1712 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
            panda$collections$Array$add$panda$collections$Array$T(args1709, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp1712)));
            panda$core$Bit $tmp1713 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(base1544, ((panda$core$Int64) { 0 }));
            PANDA_ASSERT($tmp1713.value);
            panda$core$Object* $tmp1714 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp1716 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1714), &$s1715, ((panda$collections$ListView*) args1709));
            panda$core$Int64$nullable $tmp1717 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1716, p_target);
            return $tmp1717;
        }
        break;
    }
    panda$core$Bit $tmp1718 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_target);
    panda$core$Bit $tmp1719 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1718);
    if ($tmp1719.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp1721 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_target);
    targetClass1720 = $tmp1721;
    if (((panda$core$Bit) { targetClass1720 == NULL }).value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    {
        ITable* $tmp1723 = ((panda$collections$Iterable*) targetClass1720->methods)->$class->itable;
        while ($tmp1723->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1723 = $tmp1723->next;
        }
        $fn1725 $tmp1724 = $tmp1723->methods[0];
        panda$collections$Iterator* $tmp1726 = $tmp1724(((panda$collections$Iterable*) targetClass1720->methods));
        m$Iter1722 = $tmp1726;
        $l1727:;
        ITable* $tmp1729 = m$Iter1722->$class->itable;
        while ($tmp1729->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1729 = $tmp1729->next;
        }
        $fn1731 $tmp1730 = $tmp1729->methods[0];
        panda$core$Bit $tmp1732 = $tmp1730(m$Iter1722);
        panda$core$Bit $tmp1733 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1732);
        if (!$tmp1733.value) goto $l1728;
        {
            ITable* $tmp1735 = m$Iter1722->$class->itable;
            while ($tmp1735->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1735 = $tmp1735->next;
            }
            $fn1737 $tmp1736 = $tmp1735->methods[1];
            panda$core$Object* $tmp1738 = $tmp1736(m$Iter1722);
            m1734 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1738);
            panda$core$Bit $tmp1739 = org$pandalanguage$pandac$Annotations$isImplicit$R$panda$core$Bit(m1734->annotations);
            if ($tmp1739.value) {
            {
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m1734);
                panda$core$Bit $tmp1741 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(m1734->methodKind, ((panda$core$Int64) { 59 }));
                bool $tmp1740 = $tmp1741.value;
                if (!$tmp1740) goto $l1742;
                panda$core$Int64 $tmp1743 = panda$collections$Array$get_count$R$panda$core$Int64(m1734->parameters);
                panda$core$Bit $tmp1744 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1743, ((panda$core$Int64) { 1 }));
                $tmp1740 = $tmp1744.value;
                $l1742:;
                panda$core$Bit $tmp1745 = { $tmp1740 };
                if ($tmp1745.value) {
                {
                    panda$core$Object* $tmp1747 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(m1734->parameters, ((panda$core$Int64) { 0 }));
                    panda$core$Int64$nullable $tmp1748 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1747)->type);
                    cost1746 = $tmp1748;
                    if (((panda$core$Bit) { cost1746.nonnull }).value) {
                    {
                        panda$core$Int64 $tmp1749 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(base1544, ((panda$core$Int64) cost1746.value));
                        panda$core$Int64 $tmp1750 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1749, ((panda$core$Int64) { 2 }));
                        return ((panda$core$Int64$nullable) { $tmp1750, true });
                    }
                    }
                }
                }
            }
            }
        }
        goto $l1727;
        $l1728:;
    }
    PANDA_ASSERT(((panda$core$Bit) { p_expr->type != NULL }).value);
    panda$core$Int64$nullable $tmp1752 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr->type, p_target);
    cost1751 = $tmp1752;
    if (((panda$core$Bit) { cost1751.nonnull }).value) {
    {
        panda$core$Int64 $tmp1753 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(base1544, ((panda$core$Int64) cost1751.value));
        return ((panda$core$Int64$nullable) { $tmp1753, true });
    }
    }
    return ((panda$core$Int64$nullable) { .nonnull = false });
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$doCoerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr, org$pandalanguage$pandac$Type* p_target) {
    panda$collections$Array* children1762;
    org$pandalanguage$pandac$IRNode* intermediate1767;
    org$pandalanguage$pandac$IRNode* coerced1799;
    org$pandalanguage$pandac$IRNode* coerced1825;
    org$pandalanguage$pandac$IRNode* coerced1838;
    org$pandalanguage$pandac$IRNode* varType1852;
    panda$collections$Array* args1862;
    org$pandalanguage$pandac$IRNode* target1870;
    panda$collections$Array* args1881;
    org$pandalanguage$pandac$IRNode* target1893;
    panda$collections$Array* args1904;
    org$pandalanguage$pandac$IRNode* target1912;
    org$pandalanguage$pandac$Type* param1928;
    org$pandalanguage$pandac$IRNode* start1930;
    org$pandalanguage$pandac$IRNode* end1933;
    panda$collections$Array* args1936;
    org$pandalanguage$pandac$IRNode* target1942;
    org$pandalanguage$pandac$Type* endPoint1958;
    org$pandalanguage$pandac$IRNode* start1960;
    org$pandalanguage$pandac$IRNode* end1963;
    org$pandalanguage$pandac$IRNode* step1966;
    panda$collections$Array* args1970;
    org$pandalanguage$pandac$IRNode* target1976;
    panda$collections$ImmutableArray* args1984;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1985;
    panda$collections$Array* children1997;
    org$pandalanguage$pandac$IRNode* intermediate2003;
    org$pandalanguage$pandac$ClassDecl* cl2008;
    panda$collections$Iterator* m$Iter2010;
    org$pandalanguage$pandac$MethodDecl* m2022;
    org$pandalanguage$pandac$IRNode* type2039;
    panda$collections$Array* args2044;
    panda$collections$Array* children2049;
    if (((panda$core$Bit) { p_expr == NULL }).value) {
    {
        return NULL;
    }
    }
    PANDA_ASSERT(p_expr->type->resolved.value);
    PANDA_ASSERT(p_target->resolved.value);
    panda$core$Bit $tmp1754 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_expr->type, p_target);
    if ($tmp1754.value) {
    {
        return p_expr;
    }
    }
    panda$core$Bit $tmp1756 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->type->typeKind, ((panda$core$Int64) { 11 }));
    bool $tmp1755 = $tmp1756.value;
    if (!$tmp1755) goto $l1757;
    panda$core$Bit $tmp1758 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
    $tmp1755 = $tmp1758.value;
    $l1757:;
    panda$core$Bit $tmp1759 = { $tmp1755 };
    if ($tmp1759.value) {
    {
        panda$core$Object* $tmp1760 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp1761 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1760), p_target);
        if ($tmp1761.value) {
        {
            panda$collections$Array* $tmp1763 = (panda$collections$Array*) malloc(40);
            $tmp1763->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1763->refCount.value = 1;
            panda$collections$Array$init($tmp1763);
            children1762 = $tmp1763;
            panda$collections$Array$add$panda$collections$Array$T(children1762, ((panda$core$Object*) p_expr));
            org$pandalanguage$pandac$IRNode* $tmp1765 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp1765->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1765->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp1765, ((panda$core$Int64) { 1009 }), p_expr->position, p_target, ((panda$core$Object*) wrap_panda$core$Bit(((panda$core$Bit) { false }))), ((panda$collections$ListView*) children1762));
            return $tmp1765;
        }
        }
        panda$core$Object* $tmp1768 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->type->subtypes, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp1769 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, ((org$pandalanguage$pandac$Type*) $tmp1768));
        intermediate1767 = $tmp1769;
        org$pandalanguage$pandac$IRNode* $tmp1770 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, intermediate1767, p_target);
        return $tmp1770;
    }
    }
    switch (p_expr->kind.value) {
        case 1004:
        {
            panda$core$Bit $tmp1772 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            bool $tmp1771 = $tmp1772.value;
            if (!$tmp1771) goto $l1773;
            panda$core$Int64 $tmp1774 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64(self, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1775 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1776 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1774, $tmp1775);
            $tmp1771 = $tmp1776.value;
            $l1773:;
            panda$core$Bit $tmp1777 = { $tmp1771 };
            if ($tmp1777.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1778 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1778->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1778->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp1778, ((panda$core$Int64) { 1004 }), p_expr->position, p_target, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
                return $tmp1778;
            }
            }
            else {
            panda$core$Bit $tmp1781 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 13 }));
            bool $tmp1780 = $tmp1781.value;
            if (!$tmp1780) goto $l1782;
            panda$core$Int64 $tmp1783 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64(self, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1784 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1785 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1783, $tmp1784);
            $tmp1780 = $tmp1785.value;
            $l1782:;
            panda$core$Bit $tmp1786 = { $tmp1780 };
            if ($tmp1786.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1787 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1787->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1787->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp1787, ((panda$core$Int64) { 1004 }), p_expr->position, p_target, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
                return $tmp1787;
            }
            }
            else {
            panda$core$Bit $tmp1789 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 20 }));
            if ($tmp1789.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1790 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1790->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1790->refCount.value = 1;
                panda$core$Real64 $tmp1792 = panda$core$UInt64$convert$R$panda$core$Real64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Real64($tmp1790, ((panda$core$Int64) { 1045 }), p_expr->position, p_target, $tmp1792);
                return $tmp1790;
            }
            }
            }
            }
            panda$core$Bit $tmp1794 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 10 }));
            bool $tmp1793 = $tmp1794.value;
            if (!$tmp1793) goto $l1795;
            panda$core$Bit $tmp1796 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            panda$core$Bit $tmp1797 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1796);
            $tmp1793 = $tmp1797.value;
            $l1795:;
            panda$core$Bit $tmp1798 = { $tmp1793 };
            if ($tmp1798.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1800 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp1801 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, $tmp1800);
                coerced1799 = $tmp1801;
                if (((panda$core$Bit) { coerced1799 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$IRNode* $tmp1802 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, coerced1799, p_target);
                return $tmp1802;
            }
            }
        }
        break;
        case 1032:
        {
            panda$core$Bit $tmp1804 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            bool $tmp1803 = $tmp1804.value;
            if (!$tmp1803) goto $l1805;
            panda$core$Int64 $tmp1806 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1807 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp1806);
            panda$core$Int64 $tmp1808 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(self, $tmp1807);
            panda$core$Int64 $tmp1809 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1810 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1808, $tmp1809);
            $tmp1803 = $tmp1810.value;
            $l1805:;
            panda$core$Bit $tmp1811 = { $tmp1803 };
            if ($tmp1811.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1812 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1812->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1812->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp1812, ((panda$core$Int64) { 1032 }), p_expr->position, p_target, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
                return $tmp1812;
            }
            }
            else {
            panda$core$Bit $tmp1814 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 20 }));
            if ($tmp1814.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1815 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1815->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1815->refCount.value = 1;
                panda$core$Real64 $tmp1817 = panda$core$UInt64$convert$R$panda$core$Real64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
                panda$core$Real64 $tmp1818 = panda$core$Real64$$SUB$R$panda$core$Real64($tmp1817);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Real64($tmp1815, ((panda$core$Int64) { 1045 }), p_expr->position, p_target, $tmp1818);
                return $tmp1815;
            }
            }
            }
            panda$core$Bit $tmp1820 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 10 }));
            bool $tmp1819 = $tmp1820.value;
            if (!$tmp1819) goto $l1821;
            panda$core$Bit $tmp1822 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            panda$core$Bit $tmp1823 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1822);
            $tmp1819 = $tmp1823.value;
            $l1821:;
            panda$core$Bit $tmp1824 = { $tmp1819 };
            if ($tmp1824.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1826 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp1827 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, $tmp1826);
                coerced1825 = $tmp1827;
                if (((panda$core$Bit) { coerced1825 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$IRNode* $tmp1828 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, coerced1825, p_target);
                return $tmp1828;
            }
            }
        }
        break;
        case 1045:
        {
            panda$core$Bit $tmp1829 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 20 }));
            if ($tmp1829.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1830 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1830->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1830->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Real64($tmp1830, ((panda$core$Int64) { 1045 }), p_expr->position, p_target, ((panda$core$Real64$wrapper*) p_expr->payload)->value);
                return $tmp1830;
            }
            }
            panda$core$Bit $tmp1833 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 10 }));
            bool $tmp1832 = $tmp1833.value;
            if (!$tmp1832) goto $l1834;
            panda$core$Bit $tmp1835 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            panda$core$Bit $tmp1836 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1835);
            $tmp1832 = $tmp1836.value;
            $l1834:;
            panda$core$Bit $tmp1837 = { $tmp1832 };
            if ($tmp1837.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1839 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp1840 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, $tmp1839);
                coerced1838 = $tmp1840;
                if (((panda$core$Bit) { coerced1838 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$IRNode* $tmp1841 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, coerced1838, p_target);
                return $tmp1841;
            }
            }
        }
        break;
        case 1011:
        {
            org$pandalanguage$pandac$Type* $tmp1842 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1843 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1842);
            if ($tmp1843.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1844 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1844->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1844->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp1844, ((panda$core$Int64) { 1011 }), p_expr->position, p_target, ((panda$core$Bit$wrapper*) p_expr->payload)->value);
                return $tmp1844;
            }
            }
            panda$core$Bit $tmp1847 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_target);
            bool $tmp1846 = $tmp1847.value;
            if (!$tmp1846) goto $l1848;
            org$pandalanguage$pandac$Type* $tmp1849 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1850 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1849);
            $tmp1846 = $tmp1850.value;
            $l1848:;
            panda$core$Bit $tmp1851 = { $tmp1846 };
            if ($tmp1851.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1853 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp1854 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, $tmp1853);
                varType1852 = $tmp1854;
                if (((panda$core$Bit) { varType1852 != NULL }).value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp1855 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, varType1852, p_target);
                    return $tmp1855;
                }
                }
            }
            }
        }
        break;
        case 1033:
        {
            org$pandalanguage$pandac$Type* $tmp1857 = org$pandalanguage$pandac$Type$Char8$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1858 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1857);
            bool $tmp1856 = $tmp1858.value;
            if (!$tmp1856) goto $l1859;
            panda$core$Int64$nullable $tmp1860 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, p_target);
            $tmp1856 = ((panda$core$Bit) { $tmp1860.nonnull }).value;
            $l1859:;
            panda$core$Bit $tmp1861 = { $tmp1856 };
            if ($tmp1861.value) {
            {
                panda$collections$Array* $tmp1863 = (panda$collections$Array*) malloc(40);
                $tmp1863->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp1863->refCount.value = 1;
                panda$collections$Array$init($tmp1863);
                args1862 = $tmp1863;
                org$pandalanguage$pandac$IRNode* $tmp1865 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1865->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1865->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1867 = org$pandalanguage$pandac$Type$BuiltinUInt8$R$org$pandalanguage$pandac$Type();
                panda$core$Char32 $tmp1868 = panda$core$String$$IDX$panda$core$Int64$R$panda$core$Char32(((panda$core$String*) p_expr->payload), ((panda$core$Int64) { 0 }));
                panda$core$UInt64 $tmp1869 = panda$core$Char32$convert$R$panda$core$UInt64($tmp1868);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp1865, ((panda$core$Int64) { 1004 }), p_expr->position, $tmp1867, $tmp1869);
                panda$collections$Array$add$panda$collections$Array$T(args1862, ((panda$core$Object*) $tmp1865));
                org$pandalanguage$pandac$IRNode* $tmp1871 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1871->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1871->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1873 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1871, ((panda$core$Int64) { 1001 }), p_expr->position, $tmp1873, p_target);
                target1870 = $tmp1871;
                org$pandalanguage$pandac$IRNode* $tmp1874 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target1870, ((panda$collections$ListView*) args1862));
                return $tmp1874;
            }
            }
            org$pandalanguage$pandac$Type* $tmp1876 = org$pandalanguage$pandac$Type$Char16$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1877 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1876);
            bool $tmp1875 = $tmp1877.value;
            if (!$tmp1875) goto $l1878;
            panda$core$Int64$nullable $tmp1879 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, p_target);
            $tmp1875 = ((panda$core$Bit) { $tmp1879.nonnull }).value;
            $l1878:;
            panda$core$Bit $tmp1880 = { $tmp1875 };
            if ($tmp1880.value) {
            {
                panda$collections$Array* $tmp1882 = (panda$collections$Array*) malloc(40);
                $tmp1882->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp1882->refCount.value = 1;
                panda$collections$Array$init($tmp1882);
                args1881 = $tmp1882;
                org$pandalanguage$pandac$IRNode* $tmp1884 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1884->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1884->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1886 = org$pandalanguage$pandac$Type$BuiltinUInt16$R$org$pandalanguage$pandac$Type();
                panda$collections$Iterator* $tmp1887 = panda$core$String$utf16$R$panda$collections$Iterator$LTpanda$core$Char16$GT(((panda$core$String*) p_expr->payload));
                ITable* $tmp1888 = $tmp1887->$class->itable;
                while ($tmp1888->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1888 = $tmp1888->next;
                }
                $fn1890 $tmp1889 = $tmp1888->methods[1];
                panda$core$Object* $tmp1891 = $tmp1889($tmp1887);
                panda$core$UInt64 $tmp1892 = panda$core$Char16$convert$R$panda$core$UInt64(((panda$core$Char16$wrapper*) $tmp1891)->value);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp1884, ((panda$core$Int64) { 1004 }), p_expr->position, $tmp1886, $tmp1892);
                panda$collections$Array$add$panda$collections$Array$T(args1881, ((panda$core$Object*) $tmp1884));
                org$pandalanguage$pandac$IRNode* $tmp1894 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1894->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1894->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1896 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1894, ((panda$core$Int64) { 1001 }), p_expr->position, $tmp1896, p_target);
                target1893 = $tmp1894;
                org$pandalanguage$pandac$IRNode* $tmp1897 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target1893, ((panda$collections$ListView*) args1881));
                return $tmp1897;
            }
            }
            org$pandalanguage$pandac$Type* $tmp1899 = org$pandalanguage$pandac$Type$Char32$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1900 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1899);
            bool $tmp1898 = $tmp1900.value;
            if (!$tmp1898) goto $l1901;
            panda$core$Int64$nullable $tmp1902 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, p_target);
            $tmp1898 = ((panda$core$Bit) { $tmp1902.nonnull }).value;
            $l1901:;
            panda$core$Bit $tmp1903 = { $tmp1898 };
            if ($tmp1903.value) {
            {
                panda$collections$Array* $tmp1905 = (panda$collections$Array*) malloc(40);
                $tmp1905->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp1905->refCount.value = 1;
                panda$collections$Array$init($tmp1905);
                args1904 = $tmp1905;
                org$pandalanguage$pandac$IRNode* $tmp1907 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1907->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1907->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1909 = org$pandalanguage$pandac$Type$BuiltinUInt32$R$org$pandalanguage$pandac$Type();
                panda$core$Char32 $tmp1910 = panda$core$String$$IDX$panda$core$Int64$R$panda$core$Char32(((panda$core$String*) p_expr->payload), ((panda$core$Int64) { 0 }));
                panda$core$UInt64 $tmp1911 = panda$core$Char32$convert$R$panda$core$UInt64($tmp1910);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp1907, ((panda$core$Int64) { 1004 }), p_expr->position, $tmp1909, $tmp1911);
                panda$collections$Array$add$panda$collections$Array$T(args1904, ((panda$core$Object*) $tmp1907));
                org$pandalanguage$pandac$IRNode* $tmp1913 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1913->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1913->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1915 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1913, ((panda$core$Int64) { 1001 }), p_expr->position, $tmp1915, p_target);
                target1912 = $tmp1913;
                org$pandalanguage$pandac$IRNode* $tmp1916 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target1912, ((panda$collections$ListView*) args1904));
                return $tmp1916;
            }
            }
        }
        break;
        case 1031:
        {
            panda$core$Bit $tmp1917 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(p_target);
            if ($tmp1917.value) {
            {
                panda$core$Int64 $tmp1918 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_expr->children);
                panda$core$Bit $tmp1919 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1918, ((panda$core$Int64) { 2 }));
                if ($tmp1919.value) {
                {
                    panda$core$String* $tmp1921 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1920, ((panda$core$Object*) p_target));
                    panda$core$String* $tmp1923 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1921, &$s1922);
                    panda$core$String* $tmp1924 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1923, ((panda$core$Object*) p_expr));
                    panda$core$String* $tmp1926 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1924, &$s1925);
                    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_expr->position, $tmp1926);
                    return NULL;
                }
                }
                panda$core$Bit $tmp1927 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 21 }));
                PANDA_ASSERT($tmp1927.value);
                panda$core$Object* $tmp1929 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                param1928 = ((org$pandalanguage$pandac$Type*) $tmp1929);
                panda$core$Object* $tmp1931 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$IRNode* $tmp1932 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1931), param1928);
                start1930 = $tmp1932;
                if (((panda$core$Bit) { start1930 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$core$Object* $tmp1934 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$IRNode* $tmp1935 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1934), param1928);
                end1933 = $tmp1935;
                if (((panda$core$Bit) { end1933 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp1937 = (panda$collections$Array*) malloc(40);
                $tmp1937->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp1937->refCount.value = 1;
                panda$collections$Array$init($tmp1937);
                args1936 = $tmp1937;
                panda$collections$Array$add$panda$collections$Array$T(args1936, ((panda$core$Object*) start1930));
                panda$collections$Array$add$panda$collections$Array$T(args1936, ((panda$core$Object*) end1933));
                org$pandalanguage$pandac$IRNode* $tmp1939 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1939->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1939->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1941 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp1939, ((panda$core$Int64) { 1011 }), p_expr->position, $tmp1941, ((panda$core$Bit$wrapper*) p_expr->payload)->value);
                panda$collections$Array$add$panda$collections$Array$T(args1936, ((panda$core$Object*) $tmp1939));
                org$pandalanguage$pandac$IRNode* $tmp1943 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1943->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1943->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1945 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1943, ((panda$core$Int64) { 1001 }), p_expr->position, $tmp1945, p_target);
                target1942 = $tmp1943;
                org$pandalanguage$pandac$IRNode* $tmp1946 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target1942, ((panda$collections$ListView*) args1936));
                return $tmp1946;
            }
            }
            else {
            panda$core$Bit $tmp1947 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(p_target);
            if ($tmp1947.value) {
            {
                panda$core$Int64 $tmp1948 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_expr->children);
                panda$core$Bit $tmp1949 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1948, ((panda$core$Int64) { 3 }));
                if ($tmp1949.value) {
                {
                    panda$core$String* $tmp1951 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1950, ((panda$core$Object*) p_target));
                    panda$core$String* $tmp1953 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1951, &$s1952);
                    panda$core$String* $tmp1954 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1953, ((panda$core$Object*) p_expr));
                    panda$core$String* $tmp1956 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1954, &$s1955);
                    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_expr->position, $tmp1956);
                    return NULL;
                }
                }
                panda$core$Bit $tmp1957 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 21 }));
                PANDA_ASSERT($tmp1957.value);
                panda$core$Object* $tmp1959 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                endPoint1958 = ((org$pandalanguage$pandac$Type*) $tmp1959);
                panda$core$Object* $tmp1961 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$IRNode* $tmp1962 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1961), endPoint1958);
                start1960 = $tmp1962;
                if (((panda$core$Bit) { start1960 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$core$Object* $tmp1964 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$IRNode* $tmp1965 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1964), endPoint1958);
                end1963 = $tmp1965;
                panda$core$Object* $tmp1967 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 2 }));
                panda$core$Object* $tmp1968 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 2 }));
                org$pandalanguage$pandac$IRNode* $tmp1969 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1967), ((org$pandalanguage$pandac$Type*) $tmp1968));
                step1966 = $tmp1969;
                panda$collections$Array* $tmp1971 = (panda$collections$Array*) malloc(40);
                $tmp1971->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp1971->refCount.value = 1;
                panda$collections$Array$init($tmp1971);
                args1970 = $tmp1971;
                panda$collections$Array$add$panda$collections$Array$T(args1970, ((panda$core$Object*) start1960));
                panda$collections$Array$add$panda$collections$Array$T(args1970, ((panda$core$Object*) end1963));
                panda$collections$Array$add$panda$collections$Array$T(args1970, ((panda$core$Object*) step1966));
                org$pandalanguage$pandac$IRNode* $tmp1973 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1973->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1973->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1975 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp1973, ((panda$core$Int64) { 1011 }), p_expr->position, $tmp1975, ((panda$core$Bit$wrapper*) p_expr->payload)->value);
                panda$collections$Array$add$panda$collections$Array$T(args1970, ((panda$core$Object*) $tmp1973));
                org$pandalanguage$pandac$IRNode* $tmp1977 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1977->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1977->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1979 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1977, ((panda$core$Int64) { 1001 }), p_expr->position, $tmp1979, p_target);
                target1976 = $tmp1977;
                org$pandalanguage$pandac$IRNode* $tmp1980 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target1976, ((panda$collections$ListView*) args1970));
                return $tmp1980;
            }
            }
            else {
            {
                org$pandalanguage$pandac$IRNode* $tmp1981 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp1982 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp1981, p_target);
                return $tmp1982;
            }
            }
            }
        }
        break;
        case 1039:
        {
            org$pandalanguage$pandac$IRNode* $tmp1983 = org$pandalanguage$pandac$Compiler$resolveMethodCall$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, p_target);
            return $tmp1983;
        }
        break;
        case 1040:
        {
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1985, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$collections$ImmutableArray* $tmp1986 = panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(p_expr->children, $tmp1985);
            args1984 = $tmp1986;
            panda$core$Object* $tmp1987 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp1989 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1987), &$s1988, ((panda$collections$ListView*) args1984), p_target);
            org$pandalanguage$pandac$IRNode* $tmp1990 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp1989, p_target);
            return $tmp1990;
        }
        break;
    }
    panda$core$Bit $tmp1991 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp1991.value) {
    {
        panda$core$Bit $tmp1992 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1030 }));
        if ($tmp1992.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp1993 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp1993->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1993->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp1993, ((panda$core$Int64) { 1030 }), p_expr->position, p_target);
            return $tmp1993;
        }
        }
        panda$core$Object* $tmp1995 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp1996 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_expr->type, ((org$pandalanguage$pandac$Type*) $tmp1995));
        if ($tmp1996.value) {
        {
            panda$collections$Array* $tmp1998 = (panda$collections$Array*) malloc(40);
            $tmp1998->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1998->refCount.value = 1;
            panda$collections$Array$init($tmp1998);
            children1997 = $tmp1998;
            panda$collections$Array$add$panda$collections$Array$T(children1997, ((panda$core$Object*) p_expr));
            org$pandalanguage$pandac$IRNode* $tmp2000 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2000->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2000->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2000, ((panda$core$Int64) { 1009 }), p_expr->position, p_target, ((panda$core$Object*) wrap_panda$core$Bit(((panda$core$Bit) { false }))), ((panda$collections$ListView*) children1997));
            return $tmp2000;
        }
        }
        panda$core$Bit $tmp2002 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_expr->type->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp2002.value) {
        {
            panda$core$Object* $tmp2004 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp2005 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, ((org$pandalanguage$pandac$Type*) $tmp2004));
            intermediate2003 = $tmp2005;
            org$pandalanguage$pandac$IRNode* $tmp2006 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, intermediate2003, p_target);
            return $tmp2006;
        }
        }
    }
    }
    panda$core$Int64$nullable $tmp2007 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, p_target);
    if (((panda$core$Bit) { $tmp2007.nonnull }).value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp2009 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_target);
        cl2008 = $tmp2009;
        if (((panda$core$Bit) { cl2008 != NULL }).value) {
        {
            {
                ITable* $tmp2011 = ((panda$collections$Iterable*) cl2008->methods)->$class->itable;
                while ($tmp2011->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp2011 = $tmp2011->next;
                }
                $fn2013 $tmp2012 = $tmp2011->methods[0];
                panda$collections$Iterator* $tmp2014 = $tmp2012(((panda$collections$Iterable*) cl2008->methods));
                m$Iter2010 = $tmp2014;
                $l2015:;
                ITable* $tmp2017 = m$Iter2010->$class->itable;
                while ($tmp2017->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp2017 = $tmp2017->next;
                }
                $fn2019 $tmp2018 = $tmp2017->methods[0];
                panda$core$Bit $tmp2020 = $tmp2018(m$Iter2010);
                panda$core$Bit $tmp2021 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2020);
                if (!$tmp2021.value) goto $l2016;
                {
                    ITable* $tmp2023 = m$Iter2010->$class->itable;
                    while ($tmp2023->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp2023 = $tmp2023->next;
                    }
                    $fn2025 $tmp2024 = $tmp2023->methods[1];
                    panda$core$Object* $tmp2026 = $tmp2024(m$Iter2010);
                    m2022 = ((org$pandalanguage$pandac$MethodDecl*) $tmp2026);
                    panda$core$Bit $tmp2027 = org$pandalanguage$pandac$Annotations$isImplicit$R$panda$core$Bit(m2022->annotations);
                    if ($tmp2027.value) {
                    {
                        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m2022);
                        panda$core$Bit $tmp2030 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(m2022->methodKind, ((panda$core$Int64) { 59 }));
                        bool $tmp2029 = $tmp2030.value;
                        if (!$tmp2029) goto $l2031;
                        panda$core$Int64 $tmp2032 = panda$collections$Array$get_count$R$panda$core$Int64(m2022->parameters);
                        panda$core$Bit $tmp2033 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2032, ((panda$core$Int64) { 1 }));
                        $tmp2029 = $tmp2033.value;
                        $l2031:;
                        panda$core$Bit $tmp2034 = { $tmp2029 };
                        bool $tmp2028 = $tmp2034.value;
                        if (!$tmp2028) goto $l2035;
                        panda$core$Object* $tmp2036 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(m2022->parameters, ((panda$core$Int64) { 0 }));
                        panda$core$Int64$nullable $tmp2037 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp2036)->type);
                        $tmp2028 = ((panda$core$Bit) { $tmp2037.nonnull }).value;
                        $l2035:;
                        panda$core$Bit $tmp2038 = { $tmp2028 };
                        if ($tmp2038.value) {
                        {
                            org$pandalanguage$pandac$IRNode* $tmp2040 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                            $tmp2040->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                            $tmp2040->refCount.value = 1;
                            org$pandalanguage$pandac$Type* $tmp2042 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                            org$pandalanguage$pandac$Type* $tmp2043 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl2008);
                            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp2040, ((panda$core$Int64) { 1001 }), p_expr->position, $tmp2042, $tmp2043);
                            type2039 = $tmp2040;
                            panda$collections$Array* $tmp2045 = (panda$collections$Array*) malloc(40);
                            $tmp2045->$class = (panda$core$Class*) &panda$collections$Array$class;
                            $tmp2045->refCount.value = 1;
                            panda$collections$Array$init$panda$core$Int64($tmp2045, ((panda$core$Int64) { 1 }));
                            args2044 = $tmp2045;
                            panda$collections$Array$add$panda$collections$Array$T(args2044, ((panda$core$Object*) p_expr));
                            org$pandalanguage$pandac$IRNode* $tmp2047 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, type2039, ((panda$collections$ListView*) args2044));
                            org$pandalanguage$pandac$IRNode* $tmp2048 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp2047, p_target);
                            return $tmp2048;
                        }
                        }
                    }
                    }
                }
                goto $l2015;
                $l2016:;
            }
        }
        }
        panda$collections$Array* $tmp2050 = (panda$collections$Array*) malloc(40);
        $tmp2050->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2050->refCount.value = 1;
        panda$collections$Array$init$panda$core$Int64($tmp2050, ((panda$core$Int64) { 1 }));
        children2049 = $tmp2050;
        panda$collections$Array$add$panda$collections$Array$T(children2049, ((panda$core$Object*) p_expr));
        org$pandalanguage$pandac$IRNode* $tmp2052 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2052->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2052->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2052, ((panda$core$Int64) { 1009 }), p_expr->position, p_target, ((panda$core$Object*) wrap_panda$core$Bit(((panda$core$Bit) { false }))), ((panda$collections$ListView*) children2049));
        return $tmp2052;
    }
    }
    panda$core$String* $tmp2055 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2054, ((panda$core$Object*) p_target));
    panda$core$String* $tmp2057 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2055, &$s2056);
    panda$core$String* $tmp2058 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2057, ((panda$core$Object*) p_expr->type));
    panda$core$String* $tmp2060 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2058, &$s2059);
    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_expr->position, $tmp2060);
    return NULL;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr, org$pandalanguage$pandac$Type* p_target) {
    org$pandalanguage$pandac$IRNode* result2061;
    org$pandalanguage$pandac$IRNode* $tmp2062 = org$pandalanguage$pandac$Compiler$doCoerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, p_target);
    result2061 = $tmp2062;
    bool $tmp2063 = ((panda$core$Bit) { result2061 == NULL }).value;
    if ($tmp2063) goto $l2064;
    panda$core$Bit $tmp2065 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(result2061->type, p_target);
    $tmp2063 = $tmp2065.value;
    $l2064:;
    panda$core$Bit $tmp2066 = { $tmp2063 };
    PANDA_ASSERT($tmp2066.value);
    return result2061;
}
panda$core$Bit org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type, org$pandalanguage$pandac$Type* p_target) {
    panda$core$Bit $tmp2068 = org$pandalanguage$pandac$Type$isPointer$R$panda$core$Bit(p_type);
    bool $tmp2067 = $tmp2068.value;
    if (!$tmp2067) goto $l2069;
    panda$core$Bit $tmp2070 = org$pandalanguage$pandac$Type$isPointer$R$panda$core$Bit(p_target);
    $tmp2067 = $tmp2070.value;
    $l2069:;
    panda$core$Bit $tmp2071 = { $tmp2067 };
    if ($tmp2071.value) {
    {
        return ((panda$core$Bit) { true });
    }
    }
    panda$core$Int64$nullable $tmp2072 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_type, p_target);
    if (((panda$core$Bit) { $tmp2072.nonnull }).value) {
    {
        return ((panda$core$Bit) { true });
    }
    }
    panda$core$Bit $tmp2074 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_type);
    bool $tmp2073 = $tmp2074.value;
    if (!$tmp2073) goto $l2075;
    panda$core$Bit $tmp2076 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_target);
    $tmp2073 = $tmp2076.value;
    $l2075:;
    panda$core$Bit $tmp2077 = { $tmp2073 };
    if ($tmp2077.value) {
    {
        return ((panda$core$Bit) { true });
    }
    }
    panda$core$Bit $tmp2078 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 16 }));
    if ($tmp2078.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Int64$nullable $tmp2079 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_target, p_type);
    return ((panda$core$Bit) { $tmp2079.nonnull });
}
panda$core$Bit org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_node, org$pandalanguage$pandac$Type* p_target) {
    panda$core$Bit result2081;
    org$pandalanguage$pandac$IRNode* resolved2088;
    panda$core$Int64$nullable $tmp2080 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_node, p_target);
    if (((panda$core$Bit) { $tmp2080.nonnull }).value) {
    {
        return ((panda$core$Bit) { true });
    }
    }
    panda$core$Bit $tmp2082 = org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_node->type, p_target);
    result2081 = $tmp2082;
    panda$core$Bit $tmp2084 = panda$core$Bit$$NOT$R$panda$core$Bit(result2081);
    bool $tmp2083 = $tmp2084.value;
    if (!$tmp2083) goto $l2085;
    panda$core$Bit $tmp2086 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_node->type->typeKind, ((panda$core$Int64) { 17 }));
    $tmp2083 = $tmp2086.value;
    $l2085:;
    panda$core$Bit $tmp2087 = { $tmp2083 };
    if ($tmp2087.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2089 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_node);
        resolved2088 = $tmp2089;
        if (((panda$core$Bit) { resolved2088 != NULL }).value) {
        {
            panda$core$Bit $tmp2090 = org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, resolved2088, p_target);
            result2081 = $tmp2090;
        }
        }
    }
    }
    return result2081;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_node, org$pandalanguage$pandac$Position p_position, panda$core$Bit p_isExplicit, org$pandalanguage$pandac$Type* p_target) {
    org$pandalanguage$pandac$IRNode* resolved2111;
    panda$collections$Array* children2114;
    panda$core$Bit $tmp2091 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_node->type, p_target);
    if ($tmp2091.value) {
    {
        return p_node;
    }
    }
    org$pandalanguage$pandac$Type* $tmp2092 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2093 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp2092);
    PANDA_ASSERT($tmp2093.value);
    bool $tmp2094 = p_isExplicit.value;
    if (!$tmp2094) goto $l2095;
    panda$core$Bit $tmp2096 = org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_node, p_target);
    panda$core$Bit $tmp2097 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2096);
    $tmp2094 = $tmp2097.value;
    $l2095:;
    panda$core$Bit $tmp2098 = { $tmp2094 };
    if ($tmp2098.value) {
    {
        panda$core$String* $tmp2100 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2099, ((panda$core$Object*) p_node->type));
        panda$core$String* $tmp2102 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2100, &$s2101);
        panda$core$String* $tmp2104 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2103, ((panda$core$Object*) p_target));
        panda$core$String* $tmp2106 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2104, &$s2105);
        panda$core$String* $tmp2107 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2102, $tmp2106);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp2107);
    }
    }
    switch (p_node->kind.value) {
        case 1004:
        case 1032:
        case 1011:
        {
            org$pandalanguage$pandac$IRNode* $tmp2108 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_node, p_target);
            return $tmp2108;
        }
        break;
        case 1039:
        case 1040:
        {
            panda$core$Int64$nullable $tmp2109 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_node, p_target);
            if (((panda$core$Bit) { $tmp2109.nonnull }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2110 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_node, p_target);
                return $tmp2110;
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp2112 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_node);
            resolved2111 = $tmp2112;
            if (((panda$core$Bit) { resolved2111 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2113 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, resolved2111, p_position, p_isExplicit, p_target);
                return $tmp2113;
            }
            }
        }
        break;
    }
    panda$collections$Array* $tmp2115 = (panda$collections$Array*) malloc(40);
    $tmp2115->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2115->refCount.value = 1;
    panda$collections$Array$init($tmp2115);
    children2114 = $tmp2115;
    panda$collections$Array$add$panda$collections$Array$T(children2114, ((panda$core$Object*) p_node));
    org$pandalanguage$pandac$IRNode* $tmp2117 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp2117->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2117->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2117, ((panda$core$Int64) { 1009 }), p_position, p_target, ((panda$core$Object*) wrap_panda$core$Bit(p_isExplicit)), ((panda$collections$ListView*) children2114));
    return $tmp2117;
}
panda$core$Int64$nullable org$pandalanguage$pandac$Compiler$callCost$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodRef* p_m, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedReturn) {
    panda$core$Int64 result2125;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2126;
    panda$core$Int64$nullable cost2141;
    panda$core$Int64$nullable cost2155;
    PANDA_ASSERT(p_m->value->resolved.value);
    panda$core$Int64 $tmp2119 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
    ITable* $tmp2120 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp2120->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2120 = $tmp2120->next;
    }
    $fn2122 $tmp2121 = $tmp2120->methods[0];
    panda$core$Int64 $tmp2123 = $tmp2121(((panda$collections$CollectionView*) p_args));
    panda$core$Bit $tmp2124 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp2119, $tmp2123);
    if ($tmp2124.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    result2125 = ((panda$core$Int64) { 0 });
    panda$core$Int64 $tmp2127 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2126, ((panda$core$Int64) { 0 }), $tmp2127, ((panda$core$Bit) { false }));
    int64_t $tmp2129 = $tmp2126.min.value;
    panda$core$Int64 i2128 = { $tmp2129 };
    int64_t $tmp2131 = $tmp2126.max.value;
    bool $tmp2132 = $tmp2126.inclusive.value;
    if ($tmp2132) goto $l2139; else goto $l2140;
    $l2139:;
    if ($tmp2129 <= $tmp2131) goto $l2133; else goto $l2135;
    $l2140:;
    if ($tmp2129 < $tmp2131) goto $l2133; else goto $l2135;
    $l2133:;
    {
        ITable* $tmp2142 = p_args->$class->itable;
        while ($tmp2142->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2142 = $tmp2142->next;
        }
        $fn2144 $tmp2143 = $tmp2142->methods[0];
        panda$core$Object* $tmp2145 = $tmp2143(p_args, i2128);
        org$pandalanguage$pandac$Type* $tmp2146 = org$pandalanguage$pandac$MethodRef$parameter$panda$core$Int64$R$org$pandalanguage$pandac$Type(p_m, i2128);
        panda$core$Int64$nullable $tmp2147 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp2145), $tmp2146);
        cost2141 = $tmp2147;
        if (((panda$core$Bit) { !cost2141.nonnull }).value) {
        {
            return ((panda$core$Int64$nullable) { .nonnull = false });
        }
        }
        panda$core$Int64 $tmp2148 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result2125, ((panda$core$Int64) cost2141.value));
        result2125 = $tmp2148;
    }
    $l2136:;
    int64_t $tmp2150 = $tmp2131 - i2128.value;
    if ($tmp2132) goto $l2151; else goto $l2152;
    $l2151:;
    if ($tmp2150 >= 1) goto $l2149; else goto $l2135;
    $l2152:;
    if ($tmp2150 > 1) goto $l2149; else goto $l2135;
    $l2149:;
    i2128.value += 1;
    goto $l2133;
    $l2135:;
    if (((panda$core$Bit) { p_expectedReturn != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp2156 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(p_m);
        panda$core$Int64$nullable $tmp2157 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp2156, p_expectedReturn);
        cost2155 = $tmp2157;
        if (((panda$core$Bit) { !cost2155.nonnull }).value) {
        {
            return ((panda$core$Int64$nullable) { .nonnull = false });
        }
        }
        panda$core$Int64 $tmp2158 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result2125, ((panda$core$Int64) cost2155.value));
        result2125 = $tmp2158;
    }
    }
    org$pandalanguage$pandac$Type* $tmp2161 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->value->owner);
    panda$core$Bit $tmp2162 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit($tmp2161);
    bool $tmp2160 = $tmp2162.value;
    if (!$tmp2160) goto $l2163;
    ITable* $tmp2164 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp2164->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2164 = $tmp2164->next;
    }
    $fn2166 $tmp2165 = $tmp2164->methods[0];
    panda$core$Int64 $tmp2167 = $tmp2165(((panda$collections$CollectionView*) p_args));
    panda$core$Bit $tmp2168 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2167, ((panda$core$Int64) { 1 }));
    $tmp2160 = $tmp2168.value;
    $l2163:;
    panda$core$Bit $tmp2169 = { $tmp2160 };
    bool $tmp2159 = $tmp2169.value;
    if (!$tmp2159) goto $l2170;
    panda$core$Object* $tmp2171 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->value->parameters, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp2172 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->value->owner);
    panda$core$Bit $tmp2173 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp2171)->type, $tmp2172);
    $tmp2159 = $tmp2173.value;
    $l2170:;
    panda$core$Bit $tmp2174 = { $tmp2159 };
    if ($tmp2174.value) {
    {
        panda$core$Int64 $tmp2175 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result2125, ((panda$core$Int64) { 1 }));
        result2125 = $tmp2175;
    }
    }
    return ((panda$core$Int64$nullable) { result2125, true });
}
panda$core$Int64$nullable org$pandalanguage$pandac$Compiler$matchMethods$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(org$pandalanguage$pandac$Compiler* self, panda$collections$Array* p_methods, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedReturn) {
    panda$collections$Array* result2176;
    panda$core$Int64$nullable best2179;
    panda$collections$Iterator* m$Iter2180;
    org$pandalanguage$pandac$MethodRef* m2192;
    panda$core$Int64$nullable cost2197;
    panda$collections$Array* $tmp2177 = (panda$collections$Array*) malloc(40);
    $tmp2177->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2177->refCount.value = 1;
    panda$collections$Array$init($tmp2177);
    result2176 = $tmp2177;
    best2179 = ((panda$core$Int64$nullable) { .nonnull = false });
    {
        ITable* $tmp2181 = ((panda$collections$Iterable*) p_methods)->$class->itable;
        while ($tmp2181->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2181 = $tmp2181->next;
        }
        $fn2183 $tmp2182 = $tmp2181->methods[0];
        panda$collections$Iterator* $tmp2184 = $tmp2182(((panda$collections$Iterable*) p_methods));
        m$Iter2180 = $tmp2184;
        $l2185:;
        ITable* $tmp2187 = m$Iter2180->$class->itable;
        while ($tmp2187->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2187 = $tmp2187->next;
        }
        $fn2189 $tmp2188 = $tmp2187->methods[0];
        panda$core$Bit $tmp2190 = $tmp2188(m$Iter2180);
        panda$core$Bit $tmp2191 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2190);
        if (!$tmp2191.value) goto $l2186;
        {
            ITable* $tmp2193 = m$Iter2180->$class->itable;
            while ($tmp2193->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2193 = $tmp2193->next;
            }
            $fn2195 $tmp2194 = $tmp2193->methods[1];
            panda$core$Object* $tmp2196 = $tmp2194(m$Iter2180);
            m2192 = ((org$pandalanguage$pandac$MethodRef*) $tmp2196);
            panda$core$Int64$nullable $tmp2198 = org$pandalanguage$pandac$Compiler$callCost$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(self, m2192, p_args, p_expectedReturn);
            cost2197 = $tmp2198;
            if (((panda$core$Bit) { !cost2197.nonnull }).value) {
            {
                goto $l2185;
            }
            }
            bool $tmp2199 = ((panda$core$Bit) { !best2179.nonnull }).value;
            if ($tmp2199) goto $l2200;
            panda$core$Bit $tmp2201 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost2197.value), ((panda$core$Int64) best2179.value));
            $tmp2199 = $tmp2201.value;
            $l2200:;
            panda$core$Bit $tmp2202 = { $tmp2199 };
            if ($tmp2202.value) {
            {
                panda$collections$Array$clear(result2176);
                best2179 = cost2197;
            }
            }
            panda$core$Bit $tmp2206;
            if (((panda$core$Bit) { cost2197.nonnull }).value) goto $l2203; else goto $l2204;
            $l2203:;
            panda$core$Bit $tmp2207 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost2197.value), ((panda$core$Int64) best2179.value));
            $tmp2206 = $tmp2207;
            goto $l2205;
            $l2204:;
            $tmp2206 = ((panda$core$Bit) { false });
            goto $l2205;
            $l2205:;
            if ($tmp2206.value) {
            {
                panda$collections$Array$add$panda$collections$Array$T(result2176, ((panda$core$Object*) m2192));
            }
            }
        }
        goto $l2185;
        $l2186:;
    }
    panda$collections$Array$clear(p_methods);
    panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(p_methods, ((panda$collections$CollectionView*) result2176));
    return best2179;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$MethodRef* p_m, panda$collections$ListView* p_args) {
    panda$core$String* s2214;
    panda$collections$Array* finalArgs2239;
    org$pandalanguage$pandac$IRNode* selfNode2275;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2304;
    org$pandalanguage$pandac$IRNode* coerced2322;
    org$pandalanguage$pandac$IRNode* result2337;
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
        panda$core$Int64 $tmp2215 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
        panda$core$Bit $tmp2216 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2215, ((panda$core$Int64) { 1 }));
        if ($tmp2216.value) {
        {
            s2214 = &$s2217;
        }
        }
        else {
        {
            s2214 = &$s2218;
        }
        }
        panda$core$String* $tmp2219 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(p_m->value);
        panda$core$String* $tmp2220 = panda$core$String$convert$R$panda$core$String($tmp2219);
        panda$core$String* $tmp2222 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2220, &$s2221);
        panda$core$Int64 $tmp2223 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
        panda$core$String* $tmp2224 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2222, ((panda$core$Object*) wrap_panda$core$Int64($tmp2223)));
        panda$core$String* $tmp2226 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2224, &$s2225);
        panda$core$String* $tmp2227 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2226, s2214);
        panda$core$String* $tmp2229 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2227, &$s2228);
        ITable* $tmp2231 = ((panda$collections$CollectionView*) p_args)->$class->itable;
        while ($tmp2231->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp2231 = $tmp2231->next;
        }
        $fn2233 $tmp2232 = $tmp2231->methods[0];
        panda$core$Int64 $tmp2234 = $tmp2232(((panda$collections$CollectionView*) p_args));
        panda$core$String* $tmp2235 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2230, ((panda$core$Object*) wrap_panda$core$Int64($tmp2234)));
        panda$core$String* $tmp2237 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2235, &$s2236);
        panda$core$String* $tmp2238 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2229, $tmp2237);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp2238);
        return NULL;
    }
    }
    panda$collections$Array* $tmp2240 = (panda$collections$Array*) malloc(40);
    $tmp2240->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2240->refCount.value = 1;
    panda$collections$Array$init($tmp2240);
    finalArgs2239 = $tmp2240;
    bool $tmp2243 = ((panda$core$Bit) { p_target != NULL }).value;
    if (!$tmp2243) goto $l2244;
    panda$core$Bit $tmp2245 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1038 }));
    $tmp2243 = $tmp2245.value;
    $l2244:;
    panda$core$Bit $tmp2246 = { $tmp2243 };
    bool $tmp2242 = $tmp2246.value;
    if (!$tmp2242) goto $l2247;
    panda$core$Bit $tmp2248 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->value->annotations);
    panda$core$Bit $tmp2249 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2248);
    $tmp2242 = $tmp2249.value;
    $l2247:;
    panda$core$Bit $tmp2250 = { $tmp2242 };
    if ($tmp2250.value) {
    {
        org$pandalanguage$pandac$Type* $tmp2251 = org$pandalanguage$pandac$MethodRef$owner$R$org$pandalanguage$pandac$Type(p_m);
        org$pandalanguage$pandac$IRNode* $tmp2252 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, p_target, p_position, ((panda$core$Bit) { false }), $tmp2251);
        panda$collections$Array$add$panda$collections$Array$T(finalArgs2239, ((panda$core$Object*) $tmp2252));
    }
    }
    panda$core$Bit $tmp2253 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->value->methodKind, ((panda$core$Int64) { 59 }));
    if ($tmp2253.value) {
    {
        if (((panda$core$Bit) { p_target == NULL }).value) {
        {
            panda$core$Object* $tmp2254 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
            panda$core$Bit $tmp2255 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp2254)->methodKind, ((panda$core$Int64) { 59 }));
            if ($tmp2255.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2256 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2256->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2256->refCount.value = 1;
                panda$core$Object* $tmp2258 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
                org$pandalanguage$pandac$Type* $tmp2259 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp2258));
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp2256, ((panda$core$Int64) { 1025 }), p_position, $tmp2259);
                panda$collections$Array$add$panda$collections$Array$T(finalArgs2239, ((panda$core$Object*) $tmp2256));
            }
            }
            else {
            {
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s2260);
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp2263 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1025 }));
        bool $tmp2262 = $tmp2263.value;
        if (!$tmp2262) goto $l2264;
        panda$core$Bit $tmp2265 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1024 }));
        $tmp2262 = $tmp2265.value;
        $l2264:;
        panda$core$Bit $tmp2266 = { $tmp2262 };
        bool $tmp2261 = $tmp2266.value;
        if (!$tmp2261) goto $l2267;
        panda$core$Bit $tmp2268 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1038 }));
        $tmp2261 = $tmp2268.value;
        $l2267:;
        panda$core$Bit $tmp2269 = { $tmp2261 };
        if ($tmp2269.value) {
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s2270);
        }
        }
        }
    }
    }
    else {
    panda$core$Bit $tmp2272 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(p_m->value);
    bool $tmp2271 = $tmp2272.value;
    if (!$tmp2271) goto $l2273;
    $tmp2271 = ((panda$core$Bit) { p_target == NULL }).value;
    $l2273:;
    panda$core$Bit $tmp2274 = { $tmp2271 };
    if ($tmp2274.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2276 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2276->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2276->refCount.value = 1;
        panda$core$Object* $tmp2278 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
        org$pandalanguage$pandac$Type* $tmp2279 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp2278));
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp2276, ((panda$core$Int64) { 1025 }), p_position, $tmp2279);
        selfNode2275 = $tmp2276;
        org$pandalanguage$pandac$Type* $tmp2280 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->value->owner);
        org$pandalanguage$pandac$IRNode* $tmp2281 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, selfNode2275, $tmp2280);
        selfNode2275 = $tmp2281;
        PANDA_ASSERT(((panda$core$Bit) { selfNode2275 != NULL }).value);
        panda$collections$Array$add$panda$collections$Array$T(finalArgs2239, ((panda$core$Object*) selfNode2275));
        panda$core$Object* $tmp2282 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
        panda$core$Bit $tmp2283 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp2282));
        panda$core$Bit $tmp2284 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2283);
        if ($tmp2284.value) {
        {
            panda$core$String* $tmp2286 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(p_m->value);
            panda$core$String* $tmp2287 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2285, $tmp2286);
            panda$core$String* $tmp2289 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2287, &$s2288);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp2289);
        }
        }
    }
    }
    else {
    panda$core$Bit $tmp2292 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(p_m->value);
    panda$core$Bit $tmp2293 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2292);
    bool $tmp2291 = $tmp2293.value;
    if (!$tmp2291) goto $l2294;
    $tmp2291 = ((panda$core$Bit) { p_target != NULL }).value;
    $l2294:;
    panda$core$Bit $tmp2295 = { $tmp2291 };
    bool $tmp2290 = $tmp2295.value;
    if (!$tmp2290) goto $l2296;
    panda$core$Bit $tmp2297 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1001 }));
    $tmp2290 = $tmp2297.value;
    $l2296:;
    panda$core$Bit $tmp2298 = { $tmp2290 };
    if ($tmp2298.value) {
    {
        panda$core$String* $tmp2300 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(p_m->value);
        panda$core$String* $tmp2301 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2299, $tmp2300);
        panda$core$String* $tmp2303 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2301, &$s2302);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp2303);
    }
    }
    }
    }
    ITable* $tmp2305 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp2305->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2305 = $tmp2305->next;
    }
    $fn2307 $tmp2306 = $tmp2305->methods[0];
    panda$core$Int64 $tmp2308 = $tmp2306(((panda$collections$CollectionView*) p_args));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2304, ((panda$core$Int64) { 0 }), $tmp2308, ((panda$core$Bit) { false }));
    int64_t $tmp2310 = $tmp2304.min.value;
    panda$core$Int64 i2309 = { $tmp2310 };
    int64_t $tmp2312 = $tmp2304.max.value;
    bool $tmp2313 = $tmp2304.inclusive.value;
    if ($tmp2313) goto $l2320; else goto $l2321;
    $l2320:;
    if ($tmp2310 <= $tmp2312) goto $l2314; else goto $l2316;
    $l2321:;
    if ($tmp2310 < $tmp2312) goto $l2314; else goto $l2316;
    $l2314:;
    {
        ITable* $tmp2323 = p_args->$class->itable;
        while ($tmp2323->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2323 = $tmp2323->next;
        }
        $fn2325 $tmp2324 = $tmp2323->methods[0];
        panda$core$Object* $tmp2326 = $tmp2324(p_args, i2309);
        org$pandalanguage$pandac$Type* $tmp2327 = org$pandalanguage$pandac$MethodRef$parameter$panda$core$Int64$R$org$pandalanguage$pandac$Type(p_m, i2309);
        org$pandalanguage$pandac$IRNode* $tmp2328 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp2326), $tmp2327);
        coerced2322 = $tmp2328;
        if (((panda$core$Bit) { coerced2322 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Object* $tmp2329 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->value->parameters, i2309);
        org$pandalanguage$pandac$IRNode* $tmp2330 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, coerced2322, p_position, ((panda$core$Bit) { false }), ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp2329)->type);
        coerced2322 = $tmp2330;
        if (((panda$core$Bit) { coerced2322 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(finalArgs2239, ((panda$core$Object*) coerced2322));
    }
    $l2317:;
    int64_t $tmp2332 = $tmp2312 - i2309.value;
    if ($tmp2313) goto $l2333; else goto $l2334;
    $l2333:;
    if ($tmp2332 >= 1) goto $l2331; else goto $l2316;
    $l2334:;
    if ($tmp2332 > 1) goto $l2331; else goto $l2316;
    $l2331:;
    i2309.value += 1;
    goto $l2314;
    $l2316:;
    panda$core$Bit $tmp2339 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_m->value->owner)->name, &$s2338);
    if ($tmp2339.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2340 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2340->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2340->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp2342 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(p_m);
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2340, ((panda$core$Int64) { 1005 }), p_position, $tmp2342, ((panda$core$Object*) p_m), ((panda$collections$ListView*) finalArgs2239));
        result2337 = $tmp2340;
    }
    }
    else {
    {
        org$pandalanguage$pandac$IRNode* $tmp2343 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2343->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2343->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2343, ((panda$core$Int64) { 1005 }), p_position, p_m->value->returnType, ((panda$core$Object*) p_m), ((panda$collections$ListView*) finalArgs2239));
        result2337 = $tmp2343;
        org$pandalanguage$pandac$Type* $tmp2345 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(p_m);
        org$pandalanguage$pandac$IRNode* $tmp2346 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, result2337, p_position, ((panda$core$Bit) { false }), $tmp2345);
        result2337 = $tmp2346;
    }
    }
    return result2337;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_target, panda$core$String* p_name, panda$collections$ListView* p_args) {
    org$pandalanguage$pandac$IRNode* $tmp2347 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_target, p_name, p_args, NULL);
    return $tmp2347;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_target, panda$core$String* p_name, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedType) {
    org$pandalanguage$pandac$IRNode* resolved2348;
    org$pandalanguage$pandac$ClassDecl* cl2350;
    org$pandalanguage$pandac$Symbol* s2354;
    org$pandalanguage$pandac$IRNode* ref2376;
    org$pandalanguage$pandac$IRNode* $tmp2349 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_target);
    resolved2348 = $tmp2349;
    if (((panda$core$Bit) { resolved2348 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp2351 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(resolved2348->kind, ((panda$core$Int64) { 1001 }));
    if ($tmp2351.value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp2352 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Type*) resolved2348->payload));
        cl2350 = $tmp2352;
    }
    }
    else {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp2353 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, resolved2348->type);
        cl2350 = $tmp2353;
    }
    }
    if (((panda$core$Bit) { cl2350 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp2355 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl2350);
    org$pandalanguage$pandac$Symbol* $tmp2356 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp2355, p_name);
    s2354 = $tmp2356;
    if (((panda$core$Bit) { s2354 == NULL }).value) {
    {
        panda$core$String* $tmp2358 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2357, ((org$pandalanguage$pandac$Symbol*) cl2350)->name);
        panda$core$String* $tmp2360 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2358, &$s2359);
        panda$core$String* $tmp2361 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2360, p_name);
        panda$core$String* $tmp2363 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2361, &$s2362);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_target->position, $tmp2363);
        return NULL;
    }
    }
    panda$core$Bit $tmp2365 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(s2354->kind, ((panda$core$Int64) { 204 }));
    bool $tmp2364 = $tmp2365.value;
    if (!$tmp2364) goto $l2366;
    panda$core$Bit $tmp2367 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(s2354->kind, ((panda$core$Int64) { 205 }));
    $tmp2364 = $tmp2367.value;
    $l2366:;
    panda$core$Bit $tmp2368 = { $tmp2364 };
    if ($tmp2368.value) {
    {
        panda$core$String* $tmp2370 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2369, ((org$pandalanguage$pandac$Symbol*) cl2350)->name);
        panda$core$String* $tmp2372 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2370, &$s2371);
        panda$core$String* $tmp2373 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2372, p_name);
        panda$core$String* $tmp2375 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2373, &$s2374);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_target->position, $tmp2375);
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp2377 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl2350);
    org$pandalanguage$pandac$IRNode* $tmp2378 = org$pandalanguage$pandac$Compiler$symbolRef$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q(self, p_target->position, p_target, s2354, $tmp2377);
    ref2376 = $tmp2378;
    if (((panda$core$Bit) { ref2376 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp2379 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, ref2376, p_args, p_expectedType);
    return $tmp2379;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_m, panda$collections$ListView* p_args) {
    org$pandalanguage$pandac$IRNode* $tmp2380 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_m, p_args, NULL);
    return $tmp2380;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_m, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedType) {
    org$pandalanguage$pandac$IRNode* target2381;
    panda$collections$Array* methods2388;
    org$pandalanguage$pandac$MethodDecl* first2393;
    panda$core$MutableString* msg2398;
    panda$core$String* separator2409;
    panda$collections$Iterator* a$Iter2411;
    org$pandalanguage$pandac$IRNode* a2423;
    org$pandalanguage$pandac$IRNode* target2437;
    panda$collections$Array* children2445;
    panda$collections$Array* types2451;
    panda$collections$Iterator* m$Iter2454;
    org$pandalanguage$pandac$MethodRef* m2466;
    org$pandalanguage$pandac$IRNode* target2476;
    org$pandalanguage$pandac$IRNode* initCall2479;
    panda$collections$Array* children2483;
    org$pandalanguage$pandac$IRNode* resolved2488;
    switch (p_m->kind.value) {
        case 1002:
        {
            panda$core$Int64 $tmp2382 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
            panda$core$Bit $tmp2383 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2382, ((panda$core$Int64) { 0 }));
            if ($tmp2383.value) {
            {
                target2381 = NULL;
            }
            }
            else {
            {
                panda$core$Int64 $tmp2384 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
                panda$core$Bit $tmp2385 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2384, ((panda$core$Int64) { 1 }));
                PANDA_ASSERT($tmp2385.value);
                panda$core$Object* $tmp2386 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 0 }));
                target2381 = ((org$pandalanguage$pandac$IRNode*) $tmp2386);
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp2387 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, p_m->position, target2381, ((org$pandalanguage$pandac$MethodRef*) p_m->payload), p_args);
            return $tmp2387;
        }
        break;
        case 1003:
        {
            panda$collections$Array* $tmp2389 = (panda$collections$Array*) malloc(40);
            $tmp2389->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2389->refCount.value = 1;
            panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp2389, ((panda$collections$ListView*) p_m->payload));
            methods2388 = $tmp2389;
            org$pandalanguage$pandac$Compiler$matchMethods$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(self, methods2388, p_args, p_expectedType);
            panda$core$Int64 $tmp2391 = panda$collections$Array$get_count$R$panda$core$Int64(methods2388);
            panda$core$Bit $tmp2392 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2391, ((panda$core$Int64) { 0 }));
            if ($tmp2392.value) {
            {
                ITable* $tmp2394 = ((panda$collections$ListView*) p_m->payload)->$class->itable;
                while ($tmp2394->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp2394 = $tmp2394->next;
                }
                $fn2396 $tmp2395 = $tmp2394->methods[0];
                panda$core$Object* $tmp2397 = $tmp2395(((panda$collections$ListView*) p_m->payload), ((panda$core$Int64) { 0 }));
                first2393 = ((org$pandalanguage$pandac$MethodRef*) $tmp2397)->value;
                panda$core$MutableString* $tmp2399 = (panda$core$MutableString*) malloc(48);
                $tmp2399->$class = (panda$core$Class*) &panda$core$MutableString$class;
                $tmp2399->refCount.value = 1;
                panda$core$String* $tmp2402 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2401, ((org$pandalanguage$pandac$Symbol*) first2393->owner)->name);
                panda$core$String* $tmp2404 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2402, &$s2403);
                panda$core$String* $tmp2405 = panda$core$String$convert$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) first2393)->name);
                panda$core$String* $tmp2407 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2405, &$s2406);
                panda$core$String* $tmp2408 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2404, $tmp2407);
                panda$core$MutableString$init$panda$core$String($tmp2399, $tmp2408);
                msg2398 = $tmp2399;
                separator2409 = &$s2410;
                {
                    ITable* $tmp2412 = ((panda$collections$Iterable*) p_args)->$class->itable;
                    while ($tmp2412->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp2412 = $tmp2412->next;
                    }
                    $fn2414 $tmp2413 = $tmp2412->methods[0];
                    panda$collections$Iterator* $tmp2415 = $tmp2413(((panda$collections$Iterable*) p_args));
                    a$Iter2411 = $tmp2415;
                    $l2416:;
                    ITable* $tmp2418 = a$Iter2411->$class->itable;
                    while ($tmp2418->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp2418 = $tmp2418->next;
                    }
                    $fn2420 $tmp2419 = $tmp2418->methods[0];
                    panda$core$Bit $tmp2421 = $tmp2419(a$Iter2411);
                    panda$core$Bit $tmp2422 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2421);
                    if (!$tmp2422.value) goto $l2417;
                    {
                        ITable* $tmp2424 = a$Iter2411->$class->itable;
                        while ($tmp2424->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2424 = $tmp2424->next;
                        }
                        $fn2426 $tmp2425 = $tmp2424->methods[1];
                        panda$core$Object* $tmp2427 = $tmp2425(a$Iter2411);
                        a2423 = ((org$pandalanguage$pandac$IRNode*) $tmp2427);
                        panda$core$MutableString$append$panda$core$String(msg2398, separator2409);
                        panda$core$MutableString$append$panda$core$Object(msg2398, ((panda$core$Object*) a2423->type));
                        separator2409 = &$s2428;
                    }
                    goto $l2416;
                    $l2417:;
                }
                panda$core$MutableString$append$panda$core$String(msg2398, &$s2429);
                if (((panda$core$Bit) { p_expectedType != NULL }).value) {
                {
                    panda$core$String* $tmp2431 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2430, ((panda$core$Object*) p_expectedType));
                    panda$core$String* $tmp2433 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2431, &$s2432);
                    panda$core$MutableString$append$panda$core$String(msg2398, $tmp2433);
                }
                }
                panda$core$String* $tmp2434 = panda$core$MutableString$finish$R$panda$core$String(msg2398);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_m->position, $tmp2434);
                return NULL;
            }
            }
            panda$core$Int64 $tmp2435 = panda$collections$Array$get_count$R$panda$core$Int64(methods2388);
            panda$core$Bit $tmp2436 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2435, ((panda$core$Int64) { 1 }));
            if ($tmp2436.value) {
            {
                panda$core$Int64 $tmp2438 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
                panda$core$Bit $tmp2439 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2438, ((panda$core$Int64) { 1 }));
                if ($tmp2439.value) {
                {
                    panda$core$Object* $tmp2440 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 0 }));
                    target2437 = ((org$pandalanguage$pandac$IRNode*) $tmp2440);
                }
                }
                else {
                {
                    panda$core$Int64 $tmp2441 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
                    panda$core$Bit $tmp2442 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2441, ((panda$core$Int64) { 0 }));
                    PANDA_ASSERT($tmp2442.value);
                    target2437 = NULL;
                }
                }
                panda$core$Object* $tmp2443 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(methods2388, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$IRNode* $tmp2444 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, p_m->position, target2437, ((org$pandalanguage$pandac$MethodRef*) $tmp2443), p_args);
                return $tmp2444;
            }
            }
            panda$collections$Array* $tmp2446 = (panda$collections$Array*) malloc(40);
            $tmp2446->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2446->refCount.value = 1;
            panda$collections$Array$init($tmp2446);
            children2445 = $tmp2446;
            org$pandalanguage$pandac$IRNode* $tmp2448 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2448->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2448->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2450 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2448, ((panda$core$Int64) { 1003 }), p_m->position, $tmp2450, ((panda$core$Object*) methods2388), ((panda$collections$ListView*) p_m->children));
            panda$collections$Array$add$panda$collections$Array$T(children2445, ((panda$core$Object*) $tmp2448));
            panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(children2445, ((panda$collections$CollectionView*) p_args));
            panda$collections$Array* $tmp2452 = (panda$collections$Array*) malloc(40);
            $tmp2452->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2452->refCount.value = 1;
            panda$collections$Array$init($tmp2452);
            types2451 = $tmp2452;
            {
                ITable* $tmp2455 = ((panda$collections$Iterable*) methods2388)->$class->itable;
                while ($tmp2455->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp2455 = $tmp2455->next;
                }
                $fn2457 $tmp2456 = $tmp2455->methods[0];
                panda$collections$Iterator* $tmp2458 = $tmp2456(((panda$collections$Iterable*) methods2388));
                m$Iter2454 = $tmp2458;
                $l2459:;
                ITable* $tmp2461 = m$Iter2454->$class->itable;
                while ($tmp2461->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp2461 = $tmp2461->next;
                }
                $fn2463 $tmp2462 = $tmp2461->methods[0];
                panda$core$Bit $tmp2464 = $tmp2462(m$Iter2454);
                panda$core$Bit $tmp2465 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2464);
                if (!$tmp2465.value) goto $l2460;
                {
                    ITable* $tmp2467 = m$Iter2454->$class->itable;
                    while ($tmp2467->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp2467 = $tmp2467->next;
                    }
                    $fn2469 $tmp2468 = $tmp2467->methods[1];
                    panda$core$Object* $tmp2470 = $tmp2468(m$Iter2454);
                    m2466 = ((org$pandalanguage$pandac$MethodRef*) $tmp2470);
                    org$pandalanguage$pandac$Type* $tmp2471 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m2466);
                    panda$collections$Array$add$panda$collections$Array$T(types2451, ((panda$core$Object*) $tmp2471));
                }
                goto $l2459;
                $l2460:;
            }
            org$pandalanguage$pandac$IRNode* $tmp2472 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2472->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2472->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2474 = (org$pandalanguage$pandac$Type*) malloc(96);
            $tmp2474->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp2474->refCount.value = 1;
            org$pandalanguage$pandac$Type$init$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp2474, ((panda$collections$ListView*) types2451));
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2472, ((panda$core$Int64) { 1039 }), p_m->position, $tmp2474, ((panda$collections$ListView*) children2445));
            return $tmp2472;
        }
        break;
        case 1001:
        {
            org$pandalanguage$pandac$IRNode* $tmp2477 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2477->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2477->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp2477, ((panda$core$Int64) { 1038 }), p_m->position, ((org$pandalanguage$pandac$Type*) p_m->payload));
            target2476 = $tmp2477;
            org$pandalanguage$pandac$IRNode* $tmp2481 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target2476, &$s2480, p_args);
            org$pandalanguage$pandac$IRNode* $tmp2482 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp2481);
            initCall2479 = $tmp2482;
            if (((panda$core$Bit) { initCall2479 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp2484 = (panda$collections$Array*) malloc(40);
            $tmp2484->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2484->refCount.value = 1;
            panda$collections$Array$init($tmp2484);
            children2483 = $tmp2484;
            panda$collections$Array$add$panda$collections$Array$T(children2483, ((panda$core$Object*) initCall2479));
            org$pandalanguage$pandac$IRNode* $tmp2486 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2486->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2486->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2486, ((panda$core$Int64) { 1010 }), p_m->position, ((org$pandalanguage$pandac$Type*) p_m->payload), ((panda$collections$ListView*) children2483));
            return $tmp2486;
        }
        break;
        default:
        {
            org$pandalanguage$pandac$IRNode* $tmp2489 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_m);
            resolved2488 = $tmp2489;
            if (((panda$core$Bit) { resolved2488 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$String* $tmp2491 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2490, ((panda$core$Object*) resolved2488->type));
            panda$core$String* $tmp2493 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2491, &$s2492);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, resolved2488->position, $tmp2493);
        }
    }
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$collections$Array* subtypes2494;
    panda$core$MutableString* typeName2497;
    panda$core$String* separator2501;
    panda$collections$Iterator* p$Iter2503;
    org$pandalanguage$pandac$MethodDecl$Parameter* p2515;
    panda$core$Int64 kind2521;
    panda$core$Char8 $tmp2527;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
    panda$collections$Array* $tmp2495 = (panda$collections$Array*) malloc(40);
    $tmp2495->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2495->refCount.value = 1;
    panda$collections$Array$init($tmp2495);
    subtypes2494 = $tmp2495;
    panda$core$MutableString* $tmp2498 = (panda$core$MutableString*) malloc(48);
    $tmp2498->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp2498->refCount.value = 1;
    panda$core$MutableString$init$panda$core$String($tmp2498, &$s2500);
    typeName2497 = $tmp2498;
    separator2501 = &$s2502;
    {
        ITable* $tmp2504 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp2504->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2504 = $tmp2504->next;
        }
        $fn2506 $tmp2505 = $tmp2504->methods[0];
        panda$collections$Iterator* $tmp2507 = $tmp2505(((panda$collections$Iterable*) p_m->parameters));
        p$Iter2503 = $tmp2507;
        $l2508:;
        ITable* $tmp2510 = p$Iter2503->$class->itable;
        while ($tmp2510->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2510 = $tmp2510->next;
        }
        $fn2512 $tmp2511 = $tmp2510->methods[0];
        panda$core$Bit $tmp2513 = $tmp2511(p$Iter2503);
        panda$core$Bit $tmp2514 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2513);
        if (!$tmp2514.value) goto $l2509;
        {
            ITable* $tmp2516 = p$Iter2503->$class->itable;
            while ($tmp2516->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2516 = $tmp2516->next;
            }
            $fn2518 $tmp2517 = $tmp2516->methods[1];
            panda$core$Object* $tmp2519 = $tmp2517(p$Iter2503);
            p2515 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp2519);
            panda$core$MutableString$append$panda$core$String(typeName2497, separator2501);
            panda$core$MutableString$append$panda$core$String(typeName2497, ((org$pandalanguage$pandac$Symbol*) p2515->type)->name);
            panda$collections$Array$add$panda$collections$Array$T(subtypes2494, ((panda$core$Object*) p2515->type));
            separator2501 = &$s2520;
        }
        goto $l2508;
        $l2509:;
    }
    panda$core$Bit $tmp2522 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 58 }));
    if ($tmp2522.value) {
    {
        panda$core$MutableString$append$panda$core$String(typeName2497, &$s2523);
        kind2521 = ((panda$core$Int64) { 24 });
    }
    }
    else {
    {
        panda$core$MutableString$append$panda$core$String(typeName2497, &$s2524);
        kind2521 = ((panda$core$Int64) { 25 });
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(subtypes2494, ((panda$core$Object*) p_m->returnType));
    org$pandalanguage$pandac$Type* $tmp2525 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2526 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp2525);
    if ($tmp2526.value) {
    {
        panda$core$MutableString$append$panda$core$String(typeName2497, ((org$pandalanguage$pandac$Symbol*) p_m->returnType)->name);
    }
    }
    panda$core$Char8$init$panda$core$UInt8(&$tmp2527, ((panda$core$UInt8) { 41 }));
    panda$core$MutableString$append$panda$core$Char8(typeName2497, $tmp2527);
    org$pandalanguage$pandac$Type* $tmp2528 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp2528->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp2528->refCount.value = 1;
    panda$core$String* $tmp2530 = panda$core$MutableString$finish$R$panda$core$String(typeName2497);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp2528, $tmp2530, kind2521, ((org$pandalanguage$pandac$Symbol*) p_m)->position, ((panda$collections$ListView*) subtypes2494), ((panda$core$Bit) { true }));
    return $tmp2528;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$declaredTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m, org$pandalanguage$pandac$Type* p_selfType) {
    panda$collections$Array* subtypes2531;
    panda$core$MutableString* typeName2534;
    panda$collections$Iterator* p$Iter2538;
    org$pandalanguage$pandac$MethodDecl$Parameter* p2550;
    panda$core$Int64 kind2556;
    panda$core$Char8 $tmp2562;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
    panda$collections$Array* $tmp2532 = (panda$collections$Array*) malloc(40);
    $tmp2532->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2532->refCount.value = 1;
    panda$collections$Array$init($tmp2532);
    subtypes2531 = $tmp2532;
    panda$core$MutableString* $tmp2535 = (panda$core$MutableString*) malloc(48);
    $tmp2535->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp2535->refCount.value = 1;
    panda$core$MutableString$init$panda$core$String($tmp2535, &$s2537);
    typeName2534 = $tmp2535;
    panda$core$MutableString$append$panda$core$String(typeName2534, ((org$pandalanguage$pandac$Symbol*) p_selfType)->name);
    panda$collections$Array$add$panda$collections$Array$T(subtypes2531, ((panda$core$Object*) p_selfType));
    {
        ITable* $tmp2539 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp2539->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2539 = $tmp2539->next;
        }
        $fn2541 $tmp2540 = $tmp2539->methods[0];
        panda$collections$Iterator* $tmp2542 = $tmp2540(((panda$collections$Iterable*) p_m->parameters));
        p$Iter2538 = $tmp2542;
        $l2543:;
        ITable* $tmp2545 = p$Iter2538->$class->itable;
        while ($tmp2545->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2545 = $tmp2545->next;
        }
        $fn2547 $tmp2546 = $tmp2545->methods[0];
        panda$core$Bit $tmp2548 = $tmp2546(p$Iter2538);
        panda$core$Bit $tmp2549 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2548);
        if (!$tmp2549.value) goto $l2544;
        {
            ITable* $tmp2551 = p$Iter2538->$class->itable;
            while ($tmp2551->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2551 = $tmp2551->next;
            }
            $fn2553 $tmp2552 = $tmp2551->methods[1];
            panda$core$Object* $tmp2554 = $tmp2552(p$Iter2538);
            p2550 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp2554);
            panda$core$MutableString$append$panda$core$String(typeName2534, &$s2555);
            panda$core$MutableString$append$panda$core$String(typeName2534, ((org$pandalanguage$pandac$Symbol*) p2550->type)->name);
            panda$collections$Array$add$panda$collections$Array$T(subtypes2531, ((panda$core$Object*) p2550->type));
        }
        goto $l2543;
        $l2544:;
    }
    panda$core$Bit $tmp2557 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 58 }));
    if ($tmp2557.value) {
    {
        panda$core$MutableString$append$panda$core$String(typeName2534, &$s2558);
        kind2556 = ((panda$core$Int64) { 24 });
    }
    }
    else {
    {
        panda$core$MutableString$append$panda$core$String(typeName2534, &$s2559);
        kind2556 = ((panda$core$Int64) { 25 });
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(subtypes2531, ((panda$core$Object*) p_m->returnType));
    org$pandalanguage$pandac$Type* $tmp2560 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2561 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp2560);
    if ($tmp2561.value) {
    {
        panda$core$MutableString$append$panda$core$String(typeName2534, ((org$pandalanguage$pandac$Symbol*) p_m->returnType)->name);
    }
    }
    panda$core$Char8$init$panda$core$UInt8(&$tmp2562, ((panda$core$UInt8) { 41 }));
    panda$core$MutableString$append$panda$core$Char8(typeName2534, $tmp2562);
    org$pandalanguage$pandac$Type* $tmp2563 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp2563->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp2563->refCount.value = 1;
    panda$core$String* $tmp2565 = panda$core$MutableString$finish$R$panda$core$String(typeName2534);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp2563, $tmp2565, kind2556, ((org$pandalanguage$pandac$Symbol*) p_m)->position, ((panda$collections$ListView*) subtypes2531), ((panda$core$Bit) { true }));
    return $tmp2563;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$MethodDecl* inherited2566;
    org$pandalanguage$pandac$MethodDecl* $tmp2567 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(self, p_m);
    inherited2566 = $tmp2567;
    if (((panda$core$Bit) { inherited2566 == NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp2568 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, p_m);
        return $tmp2568;
    }
    }
    org$pandalanguage$pandac$Type* $tmp2569 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, inherited2566);
    return $tmp2569;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$Type* $tmp2570 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    org$pandalanguage$pandac$Type* $tmp2571 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_m, $tmp2570);
    return $tmp2571;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m, org$pandalanguage$pandac$Type* p_selfType) {
    org$pandalanguage$pandac$MethodDecl* inherited2572;
    org$pandalanguage$pandac$MethodDecl* $tmp2573 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(self, p_m);
    inherited2572 = $tmp2573;
    if (((panda$core$Bit) { inherited2572 == NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp2574 = org$pandalanguage$pandac$Compiler$declaredTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_m, p_selfType);
        return $tmp2574;
    }
    }
    org$pandalanguage$pandac$Type* $tmp2575 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, inherited2572, p_selfType);
    return $tmp2575;
}
panda$core$String* org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(panda$core$Int64 p_op) {
    switch (p_op.value) {
        case 51:
        {
            return &$s2576;
        }
        break;
        case 52:
        {
            return &$s2577;
        }
        break;
        case 53:
        {
            return &$s2578;
        }
        break;
        case 54:
        {
            return &$s2579;
        }
        break;
        case 55:
        {
            return &$s2580;
        }
        break;
        case 56:
        {
            return &$s2581;
        }
        break;
        case 57:
        {
            return &$s2582;
        }
        break;
        case 58:
        {
            return &$s2583;
        }
        break;
        case 59:
        {
            return &$s2584;
        }
        break;
        case 63:
        {
            return &$s2585;
        }
        break;
        case 62:
        {
            return &$s2586;
        }
        break;
        case 65:
        {
            return &$s2587;
        }
        break;
        case 64:
        {
            return &$s2588;
        }
        break;
        case 68:
        {
            return &$s2589;
        }
        break;
        case 69:
        {
            return &$s2590;
        }
        break;
        case 66:
        {
            return &$s2591;
        }
        break;
        case 67:
        {
            return &$s2592;
        }
        break;
        case 70:
        {
            return &$s2593;
        }
        break;
        case 71:
        {
            return &$s2594;
        }
        break;
        case 49:
        {
            return &$s2595;
        }
        break;
        case 50:
        {
            return &$s2596;
        }
        break;
        case 72:
        {
            return &$s2597;
        }
        break;
        case 1:
        {
            return &$s2598;
        }
        break;
        case 101:
        {
            return &$s2599;
        }
        break;
        case 73:
        {
            return &$s2600;
        }
        break;
        case 60:
        {
            return &$s2601;
        }
        break;
        case 61:
        {
            return &$s2602;
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
            panda$core$Int64 $tmp2603 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_expr->children);
            panda$core$Bit $tmp2604 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2603, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp2604.value);
            panda$core$Bit $tmp2605 = panda$core$Bit$$NOT$R$panda$core$Bit(((panda$core$Bit$wrapper*) p_expr->payload)->value);
            if ($tmp2605.value) {
            {
                panda$core$Object* $tmp2606 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Bit $tmp2607 = org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp2606));
                return $tmp2607;
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
            panda$core$Object* $tmp2608 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp2609 = org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp2608));
            return $tmp2609;
        }
        break;
        default:
        {
            return ((panda$core$Bit) { false });
        }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$foldInts$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_left, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_right) {
    panda$core$Int64 l2635;
    panda$core$Int64 r2637;
    panda$core$UInt64 v2639;
    panda$core$UInt64 v2645;
    panda$core$UInt64 v2651;
    panda$core$UInt64 v2657;
    panda$core$UInt64 v2663;
    panda$core$UInt64 v2693;
    panda$core$UInt64 v2699;
    panda$core$UInt64 v2705;
    panda$core$UInt64 v2711;
    panda$core$UInt64 v2717;
    panda$core$Bit $tmp2611 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_left->kind, ((panda$core$Int64) { 1004 }));
    bool $tmp2610 = $tmp2611.value;
    if ($tmp2610) goto $l2612;
    panda$core$Bit $tmp2613 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_left->kind, ((panda$core$Int64) { 1032 }));
    $tmp2610 = $tmp2613.value;
    $l2612:;
    panda$core$Bit $tmp2614 = { $tmp2610 };
    PANDA_ASSERT($tmp2614.value);
    panda$core$Bit $tmp2616 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_right->kind, ((panda$core$Int64) { 1004 }));
    bool $tmp2615 = $tmp2616.value;
    if ($tmp2615) goto $l2617;
    panda$core$Bit $tmp2618 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_right->kind, ((panda$core$Int64) { 1032 }));
    $tmp2615 = $tmp2618.value;
    $l2617:;
    panda$core$Bit $tmp2619 = { $tmp2615 };
    PANDA_ASSERT($tmp2619.value);
    panda$core$Bit $tmp2622 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_left->kind, ((panda$core$Int64) { 1032 }));
    bool $tmp2621 = $tmp2622.value;
    if ($tmp2621) goto $l2623;
    panda$core$UInt64 $tmp2625 = panda$core$Int64$convert$R$panda$core$UInt64(((panda$core$Int64) { 9223372036854775807 }));
    panda$core$Bit $tmp2626 = panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p_left->payload)->value, $tmp2625);
    bool $tmp2624 = $tmp2626.value;
    if (!$tmp2624) goto $l2627;
    panda$core$Bit $tmp2628 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_right->kind, ((panda$core$Int64) { 1032 }));
    $tmp2624 = $tmp2628.value;
    $l2627:;
    panda$core$Bit $tmp2629 = { $tmp2624 };
    $tmp2621 = $tmp2629.value;
    $l2623:;
    panda$core$Bit $tmp2630 = { $tmp2621 };
    bool $tmp2620 = $tmp2630.value;
    if ($tmp2620) goto $l2631;
    panda$core$UInt64 $tmp2632 = panda$core$Int64$convert$R$panda$core$UInt64(((panda$core$Int64) { 9223372036854775807 }));
    panda$core$Bit $tmp2633 = panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p_right->payload)->value, $tmp2632);
    $tmp2620 = $tmp2633.value;
    $l2631:;
    panda$core$Bit $tmp2634 = { $tmp2620 };
    if ($tmp2634.value) {
    {
        panda$core$Int64 $tmp2636 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_left->payload)->value);
        l2635 = $tmp2636;
        panda$core$Int64 $tmp2638 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_right->payload)->value);
        r2637 = $tmp2638;
        switch (p_op.value) {
            case 51:
            {
                panda$core$Int64 $tmp2640 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(l2635, r2637);
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
            case 52:
            {
                panda$core$Int64 $tmp2646 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(l2635, r2637);
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
            case 53:
            {
                panda$core$Int64 $tmp2652 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(l2635, r2637);
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
            case 55:
            {
                panda$core$Int64 $tmp2658 = panda$core$Int64$$INTDIV$panda$core$Int64$R$panda$core$Int64(l2635, r2637);
                panda$core$UInt64 $tmp2659 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2658);
                v2657 = $tmp2659;
                org$pandalanguage$pandac$IRNode* $tmp2660 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2660->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2660->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2662 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(v2657);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2660, ((panda$core$Int64) { 1004 }), p_position, $tmp2662, v2657);
                return $tmp2660;
            }
            break;
            case 56:
            {
                panda$core$Int64 $tmp2664 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(l2635, r2637);
                panda$core$UInt64 $tmp2665 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2664);
                v2663 = $tmp2665;
                org$pandalanguage$pandac$IRNode* $tmp2666 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2666->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2666->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2668 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(v2663);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2666, ((panda$core$Int64) { 1004 }), p_position, $tmp2668, v2663);
                return $tmp2666;
            }
            break;
            case 58:
            {
                org$pandalanguage$pandac$IRNode* $tmp2669 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2669->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2669->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2671 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2672 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(l2635, r2637);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2669, ((panda$core$Int64) { 1011 }), p_position, $tmp2671, $tmp2672);
                return $tmp2669;
            }
            break;
            case 59:
            {
                org$pandalanguage$pandac$IRNode* $tmp2673 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2673->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2673->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2675 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2676 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(l2635, r2637);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2673, ((panda$core$Int64) { 1011 }), p_position, $tmp2675, $tmp2676);
                return $tmp2673;
            }
            break;
            case 62:
            {
                org$pandalanguage$pandac$IRNode* $tmp2677 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2677->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2677->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2679 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2680 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(l2635, r2637);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2677, ((panda$core$Int64) { 1011 }), p_position, $tmp2679, $tmp2680);
                return $tmp2677;
            }
            break;
            case 63:
            {
                org$pandalanguage$pandac$IRNode* $tmp2681 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2681->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2681->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2683 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2684 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(l2635, r2637);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2681, ((panda$core$Int64) { 1011 }), p_position, $tmp2683, $tmp2684);
                return $tmp2681;
            }
            break;
            case 64:
            {
                org$pandalanguage$pandac$IRNode* $tmp2685 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2685->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2685->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2687 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2688 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(l2635, r2637);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2685, ((panda$core$Int64) { 1011 }), p_position, $tmp2687, $tmp2688);
                return $tmp2685;
            }
            break;
            case 65:
            {
                org$pandalanguage$pandac$IRNode* $tmp2689 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2689->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2689->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2691 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2692 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(l2635, r2637);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2689, ((panda$core$Int64) { 1011 }), p_position, $tmp2691, $tmp2692);
                return $tmp2689;
            }
            break;
            case 67:
            {
                panda$core$Int64 $tmp2694 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(l2635, r2637);
                panda$core$UInt64 $tmp2695 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2694);
                v2693 = $tmp2695;
                org$pandalanguage$pandac$IRNode* $tmp2696 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2696->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2696->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2698 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(v2693);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2696, ((panda$core$Int64) { 1004 }), p_position, $tmp2698, v2693);
                return $tmp2696;
            }
            break;
            case 69:
            {
                panda$core$Int64 $tmp2700 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(l2635, r2637);
                panda$core$UInt64 $tmp2701 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2700);
                v2699 = $tmp2701;
                org$pandalanguage$pandac$IRNode* $tmp2702 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2702->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2702->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2704 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(v2699);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2702, ((panda$core$Int64) { 1004 }), p_position, $tmp2704, v2699);
                return $tmp2702;
            }
            break;
            case 71:
            {
                panda$core$Int64 $tmp2706 = panda$core$Int64$$BXOR$panda$core$Int64$R$panda$core$Int64(l2635, r2637);
                panda$core$UInt64 $tmp2707 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2706);
                v2705 = $tmp2707;
                org$pandalanguage$pandac$IRNode* $tmp2708 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2708->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2708->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2710 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(v2705);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2708, ((panda$core$Int64) { 1004 }), p_position, $tmp2710, v2705);
                return $tmp2708;
            }
            break;
            case 72:
            {
                panda$core$Int64 $tmp2712 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(l2635, r2637);
                panda$core$UInt64 $tmp2713 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2712);
                v2711 = $tmp2713;
                org$pandalanguage$pandac$IRNode* $tmp2714 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2714->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2714->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2716 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(v2711);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2714, ((panda$core$Int64) { 1004 }), p_position, $tmp2716, v2711);
                return $tmp2714;
            }
            break;
            case 1:
            {
                panda$core$Int64 $tmp2718 = panda$core$Int64$$SHR$panda$core$Int64$R$panda$core$Int64(l2635, r2637);
                panda$core$UInt64 $tmp2719 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2718);
                v2717 = $tmp2719;
                org$pandalanguage$pandac$IRNode* $tmp2720 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2720->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2720->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2722 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(v2717);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2720, ((panda$core$Int64) { 1004 }), p_position, $tmp2722, v2717);
                return $tmp2720;
            }
            break;
        }
    }
    }
    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s2723);
    return NULL;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    panda$core$Bit $tmp2724 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1009 }));
    if ($tmp2724.value) {
    {
        panda$core$Object* $tmp2725 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
        return ((org$pandalanguage$pandac$IRNode*) $tmp2725);
    }
    }
    return p_expr;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIndexedAssignment$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_left, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_right) {
    panda$collections$Array* args2730;
    org$pandalanguage$pandac$IRNode* resolved2738;
    panda$collections$Array* children2743;
    panda$core$UInt64 baseId2749;
    org$pandalanguage$pandac$IRNode* base2750;
    panda$core$UInt64 indexId2757;
    org$pandalanguage$pandac$IRNode* index2758;
    org$pandalanguage$pandac$IRNode* baseRef2763;
    org$pandalanguage$pandac$IRNode* indexRef2766;
    org$pandalanguage$pandac$IRNode* rhsIndex2769;
    org$pandalanguage$pandac$IRNode* value2771;
    panda$core$Bit $tmp2726 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_left->kind, ((panda$core$Int64) { 1040 }));
    PANDA_ASSERT($tmp2726.value);
    panda$core$Int64 $tmp2727 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_left->children);
    panda$core$Bit $tmp2728 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2727, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp2728.value);
    panda$core$Bit $tmp2729 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 73 }));
    if ($tmp2729.value) {
    {
        panda$collections$Array* $tmp2731 = (panda$collections$Array*) malloc(40);
        $tmp2731->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2731->refCount.value = 1;
        panda$collections$Array$init($tmp2731);
        args2730 = $tmp2731;
        panda$core$Object* $tmp2733 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_left->children, ((panda$core$Int64) { 1 }));
        panda$collections$Array$add$panda$collections$Array$T(args2730, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp2733)));
        panda$collections$Array$add$panda$collections$Array$T(args2730, ((panda$core$Object*) p_right));
        panda$core$Object* $tmp2734 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_left->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp2736 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp2734), &$s2735, ((panda$collections$ListView*) args2730));
        return $tmp2736;
    }
    }
    panda$core$Bit $tmp2737 = org$pandalanguage$pandac$Compiler$isAssignment$panda$core$Int64$R$panda$core$Bit(p_op);
    PANDA_ASSERT($tmp2737.value);
    org$pandalanguage$pandac$IRNode* $tmp2739 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_left);
    resolved2738 = $tmp2739;
    if (((panda$core$Bit) { resolved2738 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp2740 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self, resolved2738);
    resolved2738 = $tmp2740;
    panda$core$Int64 $tmp2741 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(resolved2738->children);
    panda$core$Bit $tmp2742 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2741, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp2742.value);
    panda$collections$Array* $tmp2744 = (panda$collections$Array*) malloc(40);
    $tmp2744->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2744->refCount.value = 1;
    panda$collections$Array$init($tmp2744);
    children2743 = $tmp2744;
    panda$core$Object* $tmp2746 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(resolved2738->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp2747 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self, ((org$pandalanguage$pandac$IRNode*) $tmp2746));
    panda$collections$Array$add$panda$collections$Array$T(children2743, ((panda$core$Object*) $tmp2747));
    panda$core$UInt64 $tmp2748 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(self->reusedValueCount, ((panda$core$UInt64) { 1 }));
    self->reusedValueCount = $tmp2748;
    baseId2749 = self->reusedValueCount;
    org$pandalanguage$pandac$IRNode* $tmp2751 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp2751->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2751->refCount.value = 1;
    panda$core$Object* $tmp2753 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children2743, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp2754 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children2743, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2751, ((panda$core$Int64) { 1027 }), ((org$pandalanguage$pandac$IRNode*) $tmp2753)->position, ((org$pandalanguage$pandac$IRNode*) $tmp2754)->type, ((panda$core$Object*) wrap_panda$core$UInt64(baseId2749)), ((panda$collections$ListView*) children2743));
    base2750 = $tmp2751;
    panda$collections$Array$clear(children2743);
    panda$core$Object* $tmp2755 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(resolved2738->children, ((panda$core$Int64) { 1 }));
    panda$collections$Array$add$panda$collections$Array$T(children2743, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp2755)));
    panda$core$UInt64 $tmp2756 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(self->reusedValueCount, ((panda$core$UInt64) { 1 }));
    self->reusedValueCount = $tmp2756;
    indexId2757 = self->reusedValueCount;
    org$pandalanguage$pandac$IRNode* $tmp2759 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp2759->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2759->refCount.value = 1;
    panda$core$Object* $tmp2761 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children2743, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp2762 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children2743, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2759, ((panda$core$Int64) { 1027 }), ((org$pandalanguage$pandac$IRNode*) $tmp2761)->position, ((org$pandalanguage$pandac$IRNode*) $tmp2762)->type, ((panda$core$Object*) wrap_panda$core$UInt64(indexId2757)), ((panda$collections$ListView*) children2743));
    index2758 = $tmp2759;
    org$pandalanguage$pandac$IRNode* $tmp2764 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp2764->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2764->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2764, ((panda$core$Int64) { 1028 }), base2750->position, base2750->type, baseId2749);
    baseRef2763 = $tmp2764;
    org$pandalanguage$pandac$IRNode* $tmp2767 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp2767->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2767->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2767, ((panda$core$Int64) { 1028 }), index2758->position, index2758->type, indexId2757);
    indexRef2766 = $tmp2767;
    org$pandalanguage$pandac$IRNode* $tmp2770 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, baseRef2763, ((panda$core$Int64) { 101 }), indexRef2766);
    rhsIndex2769 = $tmp2770;
    if (((panda$core$Bit) { rhsIndex2769 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Int64 $tmp2772 = org$pandalanguage$pandac$Compiler$removeAssignment$panda$core$Int64$R$panda$core$Int64(p_op);
    org$pandalanguage$pandac$IRNode* $tmp2773 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, rhsIndex2769, $tmp2772, p_right);
    value2771 = $tmp2773;
    if (((panda$core$Bit) { value2771 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp2776 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(rhsIndex2769->type);
    bool $tmp2775 = $tmp2776.value;
    if (!$tmp2775) goto $l2777;
    panda$core$Bit $tmp2778 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_right->type);
    $tmp2775 = $tmp2778.value;
    $l2777:;
    panda$core$Bit $tmp2779 = { $tmp2775 };
    bool $tmp2774 = $tmp2779.value;
    if (!$tmp2774) goto $l2780;
    panda$core$Bit $tmp2781 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(rhsIndex2769->type, value2771->type);
    $tmp2774 = $tmp2781.value;
    $l2780:;
    panda$core$Bit $tmp2782 = { $tmp2774 };
    if ($tmp2782.value) {
    {
        panda$collections$Array* $tmp2784 = (panda$collections$Array*) malloc(40);
        $tmp2784->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2784->refCount.value = 1;
        panda$collections$Array$init($tmp2784);
        org$pandalanguage$pandac$IRNode* $tmp2786 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, value2771, &$s2783, ((panda$collections$ListView*) $tmp2784), resolved2738->type);
        value2771 = $tmp2786;
        if (((panda$core$Bit) { value2771 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$collections$Array$clear(children2743);
    panda$collections$Array$add$panda$collections$Array$T(children2743, ((panda$core$Object*) index2758));
    panda$collections$Array$add$panda$collections$Array$T(children2743, ((panda$core$Object*) value2771));
    org$pandalanguage$pandac$IRNode* $tmp2788 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, base2750, &$s2787, ((panda$collections$ListView*) children2743));
    return $tmp2788;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_rawLeft, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_rawRight) {
    org$pandalanguage$pandac$IRNode* left2789;
    org$pandalanguage$pandac$IRNode* right2790;
    panda$core$Int64 kind2814;
    org$pandalanguage$pandac$IRNode* resolved2821;
    panda$collections$Array* children2823;
    org$pandalanguage$pandac$IRNode* resolved2830;
    panda$collections$Array* children2832;
    panda$collections$Array* children2849;
    org$pandalanguage$pandac$IRNode* reusedLeft2854;
    org$pandalanguage$pandac$IRNode* toNonNullable2857;
    org$pandalanguage$pandac$IRNode* comparison2860;
    org$pandalanguage$pandac$IRNode* nullCheck2862;
    org$pandalanguage$pandac$ClassDecl* cl2882;
    org$pandalanguage$pandac$ClassDecl* cl2899;
    org$pandalanguage$pandac$IRNode* finalLeft2915;
    org$pandalanguage$pandac$IRNode* finalRight2918;
    panda$collections$Array* children2921;
    panda$collections$Array* children2935;
    panda$collections$Array* children2947;
    org$pandalanguage$pandac$IRNode* reusedLeft2953;
    org$pandalanguage$pandac$ClassDecl* cl2970;
    panda$collections$ListView* parameters2972;
    org$pandalanguage$pandac$Symbol* methods2974;
    org$pandalanguage$pandac$Type* type2978;
    panda$collections$Array* types2979;
    org$pandalanguage$pandac$MethodDecl* m2983;
    panda$collections$Iterator* m$Iter2988;
    org$pandalanguage$pandac$MethodDecl* m3000;
    panda$collections$Array* children3011;
    panda$collections$Array* children3040;
    panda$collections$Array* children3056;
    org$pandalanguage$pandac$Type* resultType3079;
    org$pandalanguage$pandac$IRNode* result3083;
    org$pandalanguage$pandac$IRNode* resolved3086;
    org$pandalanguage$pandac$IRNode* target3092;
    left2789 = p_rawLeft;
    right2790 = p_rawRight;
    panda$core$Bit $tmp2791 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2789->type->typeKind, ((panda$core$Int64) { 15 }));
    if ($tmp2791.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2792 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, right2790);
        right2790 = $tmp2792;
        if (((panda$core$Bit) { right2790 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Int64$nullable $tmp2793 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, left2789, right2790->type);
        if (((panda$core$Bit) { $tmp2793.nonnull }).value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2794 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, left2789, right2790->type);
            left2789 = $tmp2794;
        }
        }
    }
    }
    panda$core$Bit $tmp2796 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right2790->type->typeKind, ((panda$core$Int64) { 15 }));
    bool $tmp2795 = $tmp2796.value;
    if (!$tmp2795) goto $l2797;
    panda$core$Int64$nullable $tmp2798 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, right2790, left2789->type);
    $tmp2795 = ((panda$core$Bit) { $tmp2798.nonnull }).value;
    $l2797:;
    panda$core$Bit $tmp2799 = { $tmp2795 };
    if ($tmp2799.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2800 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, right2790, left2789->type);
        right2790 = $tmp2800;
    }
    }
    panda$core$Bit $tmp2804 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 58 }));
    bool $tmp2803 = $tmp2804.value;
    if ($tmp2803) goto $l2805;
    panda$core$Bit $tmp2806 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 59 }));
    $tmp2803 = $tmp2806.value;
    $l2805:;
    panda$core$Bit $tmp2807 = { $tmp2803 };
    bool $tmp2802 = $tmp2807.value;
    if ($tmp2802) goto $l2808;
    panda$core$Bit $tmp2809 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 60 }));
    $tmp2802 = $tmp2809.value;
    $l2808:;
    panda$core$Bit $tmp2810 = { $tmp2802 };
    bool $tmp2801 = $tmp2810.value;
    if ($tmp2801) goto $l2811;
    panda$core$Bit $tmp2812 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 61 }));
    $tmp2801 = $tmp2812.value;
    $l2811:;
    panda$core$Bit $tmp2813 = { $tmp2801 };
    if ($tmp2813.value) {
    {
        panda$core$Bit $tmp2816 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 58 }));
        bool $tmp2815 = $tmp2816.value;
        if ($tmp2815) goto $l2817;
        panda$core$Bit $tmp2818 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 60 }));
        $tmp2815 = $tmp2818.value;
        $l2817:;
        panda$core$Bit $tmp2819 = { $tmp2815 };
        if ($tmp2819.value) {
        {
            kind2814 = ((panda$core$Int64) { 1035 });
        }
        }
        else {
        {
            kind2814 = ((panda$core$Int64) { 1036 });
        }
        }
        panda$core$Bit $tmp2820 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2789->kind, ((panda$core$Int64) { 1030 }));
        if ($tmp2820.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2822 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, right2790);
            resolved2821 = $tmp2822;
            if (((panda$core$Bit) { resolved2821 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp2824 = (panda$collections$Array*) malloc(40);
            $tmp2824->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2824->refCount.value = 1;
            panda$collections$Array$init($tmp2824);
            children2823 = $tmp2824;
            panda$collections$Array$add$panda$collections$Array$T(children2823, ((panda$core$Object*) resolved2821));
            org$pandalanguage$pandac$IRNode* $tmp2826 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2826->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2826->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2828 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2826, kind2814, p_position, $tmp2828, ((panda$collections$ListView*) children2823));
            return $tmp2826;
        }
        }
        panda$core$Bit $tmp2829 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right2790->kind, ((panda$core$Int64) { 1030 }));
        if ($tmp2829.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2831 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, left2789);
            resolved2830 = $tmp2831;
            if (((panda$core$Bit) { resolved2830 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp2833 = (panda$collections$Array*) malloc(40);
            $tmp2833->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2833->refCount.value = 1;
            panda$collections$Array$init($tmp2833);
            children2832 = $tmp2833;
            panda$collections$Array$add$panda$collections$Array$T(children2832, ((panda$core$Object*) resolved2830));
            org$pandalanguage$pandac$IRNode* $tmp2835 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2835->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2835->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2837 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2835, kind2814, p_position, $tmp2837, ((panda$collections$ListView*) children2832));
            return $tmp2835;
        }
        }
    }
    }
    panda$core$Bit $tmp2840 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 58 }));
    bool $tmp2839 = $tmp2840.value;
    if ($tmp2839) goto $l2841;
    panda$core$Bit $tmp2842 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 59 }));
    $tmp2839 = $tmp2842.value;
    $l2841:;
    panda$core$Bit $tmp2843 = { $tmp2839 };
    bool $tmp2838 = $tmp2843.value;
    if (!$tmp2838) goto $l2844;
    panda$core$Bit $tmp2845 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2789->type->typeKind, ((panda$core$Int64) { 11 }));
    $tmp2838 = $tmp2845.value;
    $l2844:;
    panda$core$Bit $tmp2846 = { $tmp2838 };
    if ($tmp2846.value) {
    {
        panda$core$Bit $tmp2847 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(right2790->kind, ((panda$core$Int64) { 1030 }));
        PANDA_ASSERT($tmp2847.value);
        panda$core$UInt64 $tmp2848 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(self->reusedValueCount, ((panda$core$UInt64) { 1 }));
        self->reusedValueCount = $tmp2848;
        panda$collections$Array* $tmp2850 = (panda$collections$Array*) malloc(40);
        $tmp2850->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2850->refCount.value = 1;
        panda$collections$Array$init($tmp2850);
        children2849 = $tmp2850;
        panda$collections$Array$add$panda$collections$Array$T(children2849, ((panda$core$Object*) left2789));
        org$pandalanguage$pandac$IRNode* $tmp2852 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2852->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2852->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2852, ((panda$core$Int64) { 1027 }), left2789->position, left2789->type, ((panda$core$Object*) wrap_panda$core$UInt64(self->reusedValueCount)), ((panda$collections$ListView*) children2849));
        left2789 = $tmp2852;
        org$pandalanguage$pandac$IRNode* $tmp2855 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2855->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2855->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2855, ((panda$core$Int64) { 1028 }), left2789->position, left2789->type, self->reusedValueCount);
        reusedLeft2854 = $tmp2855;
        panda$core$Object* $tmp2858 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(left2789->type->subtypes, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp2859 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, reusedLeft2854, ((org$pandalanguage$pandac$Type*) $tmp2858));
        toNonNullable2857 = $tmp2859;
        org$pandalanguage$pandac$IRNode* $tmp2861 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, toNonNullable2857, p_op, right2790);
        comparison2860 = $tmp2861;
        if (((panda$core$Bit) { comparison2860 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp2863 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2863->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2863->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp2865 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp2863, ((panda$core$Int64) { 1030 }), p_position, $tmp2865);
        org$pandalanguage$pandac$IRNode* $tmp2866 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, left2789, ((panda$core$Int64) { 59 }), $tmp2863);
        nullCheck2862 = $tmp2866;
        if (((panda$core$Bit) { nullCheck2862 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$clear(children2849);
        panda$collections$Array$add$panda$collections$Array$T(children2849, ((panda$core$Object*) nullCheck2862));
        panda$collections$Array$add$panda$collections$Array$T(children2849, ((panda$core$Object*) comparison2860));
        org$pandalanguage$pandac$IRNode* $tmp2867 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2867->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2867->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp2869 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp2870 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 59 }));
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2867, ((panda$core$Int64) { 1011 }), p_position, $tmp2869, $tmp2870);
        org$pandalanguage$pandac$Type* $tmp2871 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp2872 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp2867, $tmp2871);
        panda$collections$Array$add$panda$collections$Array$T(children2849, ((panda$core$Object*) $tmp2872));
        org$pandalanguage$pandac$IRNode* $tmp2873 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2873->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2873->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp2875 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2873, ((panda$core$Int64) { 1044 }), p_position, $tmp2875, ((panda$collections$ListView*) children2849));
        return $tmp2873;
    }
    }
    panda$core$Bit $tmp2877 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 60 }));
    bool $tmp2876 = $tmp2877.value;
    if ($tmp2876) goto $l2878;
    panda$core$Bit $tmp2879 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 61 }));
    $tmp2876 = $tmp2879.value;
    $l2878:;
    panda$core$Bit $tmp2880 = { $tmp2876 };
    if ($tmp2880.value) {
    {
        panda$core$Bit $tmp2881 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(left2789->type);
        if ($tmp2881.value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp2883 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, left2789->type);
            cl2882 = $tmp2883;
            if (((panda$core$Bit) { cl2882 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$Bit $tmp2884 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, cl2882);
            if ($tmp2884.value) {
            {
                panda$core$String* $tmp2886 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
                panda$core$String* $tmp2887 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2885, $tmp2886);
                panda$core$String* $tmp2889 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2887, &$s2888);
                panda$core$String* $tmp2890 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2889, ((panda$core$Object*) left2789->type));
                panda$core$String* $tmp2892 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2890, &$s2891);
                panda$core$String* $tmp2894 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2893, ((panda$core$Object*) right2790->type));
                panda$core$String* $tmp2896 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2894, &$s2895);
                panda$core$String* $tmp2897 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2892, $tmp2896);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp2897);
            }
            }
        }
        }
        panda$core$Bit $tmp2898 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(right2790->type);
        if ($tmp2898.value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp2900 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, right2790->type);
            cl2899 = $tmp2900;
            if (((panda$core$Bit) { cl2899 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$Bit $tmp2901 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, cl2899);
            if ($tmp2901.value) {
            {
                panda$core$String* $tmp2903 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
                panda$core$String* $tmp2904 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2902, $tmp2903);
                panda$core$String* $tmp2906 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2904, &$s2905);
                panda$core$String* $tmp2907 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2906, ((panda$core$Object*) left2789->type));
                panda$core$String* $tmp2909 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2907, &$s2908);
                panda$core$String* $tmp2911 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2910, ((panda$core$Object*) right2790->type));
                panda$core$String* $tmp2913 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2911, &$s2912);
                panda$core$String* $tmp2914 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2909, $tmp2913);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp2914);
            }
            }
        }
        }
        org$pandalanguage$pandac$Type* $tmp2916 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp2917 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, left2789, $tmp2916);
        finalLeft2915 = $tmp2917;
        if (((panda$core$Bit) { finalLeft2915 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$Type* $tmp2919 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp2920 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, right2790, $tmp2919);
        finalRight2918 = $tmp2920;
        if (((panda$core$Bit) { finalRight2918 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp2922 = (panda$collections$Array*) malloc(40);
        $tmp2922->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2922->refCount.value = 1;
        panda$collections$Array$init($tmp2922);
        children2921 = $tmp2922;
        panda$collections$Array$add$panda$collections$Array$T(children2921, ((panda$core$Object*) finalLeft2915));
        panda$collections$Array$add$panda$collections$Array$T(children2921, ((panda$core$Object*) finalRight2918));
        org$pandalanguage$pandac$IRNode* $tmp2924 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2924->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2924->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp2926 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2924, ((panda$core$Int64) { 1023 }), p_position, $tmp2926, ((panda$core$Object*) wrap_panda$core$Int64(p_op)), ((panda$collections$ListView*) children2921));
        return $tmp2924;
    }
    }
    panda$core$Bit $tmp2927 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 73 }));
    if ($tmp2927.value) {
    {
        panda$core$Bit $tmp2928 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2789->kind, ((panda$core$Int64) { 1040 }));
        if ($tmp2928.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2929 = org$pandalanguage$pandac$Compiler$compileIndexedAssignment$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, left2789, p_op, right2790);
            return $tmp2929;
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp2930 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, left2789);
        left2789 = $tmp2930;
        if (((panda$core$Bit) { left2789 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp2931 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, right2790, left2789->type);
        right2790 = $tmp2931;
        if (((panda$core$Bit) { right2790 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp2932 = org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, left2789);
        panda$core$Bit $tmp2933 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2932);
        if ($tmp2933.value) {
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, left2789->position, &$s2934);
            return NULL;
        }
        }
        panda$collections$Array* $tmp2936 = (panda$collections$Array*) malloc(40);
        $tmp2936->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2936->refCount.value = 1;
        panda$collections$Array$init($tmp2936);
        children2935 = $tmp2936;
        panda$collections$Array$add$panda$collections$Array$T(children2935, ((panda$core$Object*) left2789));
        panda$collections$Array$add$panda$collections$Array$T(children2935, ((panda$core$Object*) right2790));
        org$pandalanguage$pandac$IRNode* $tmp2938 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2938->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2938->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2938, ((panda$core$Int64) { 1023 }), p_position, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 73 }))), ((panda$collections$ListView*) children2935));
        return $tmp2938;
    }
    }
    panda$core$Bit $tmp2940 = org$pandalanguage$pandac$Compiler$isAssignment$panda$core$Int64$R$panda$core$Bit(p_op);
    if ($tmp2940.value) {
    {
        panda$core$Bit $tmp2941 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2789->kind, ((panda$core$Int64) { 1040 }));
        if ($tmp2941.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2942 = org$pandalanguage$pandac$Compiler$compileIndexedAssignment$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, left2789, p_op, right2790);
            return $tmp2942;
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp2943 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, left2789);
        left2789 = $tmp2943;
        if (((panda$core$Bit) { left2789 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp2944 = org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, left2789);
        panda$core$Bit $tmp2945 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2944);
        if ($tmp2945.value) {
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, left2789->position, &$s2946);
            return NULL;
        }
        }
        panda$collections$Array* $tmp2948 = (panda$collections$Array*) malloc(40);
        $tmp2948->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2948->refCount.value = 1;
        panda$collections$Array$init($tmp2948);
        children2947 = $tmp2948;
        panda$collections$Array$add$panda$collections$Array$T(children2947, ((panda$core$Object*) left2789));
        panda$core$UInt64 $tmp2950 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(self->reusedValueCount, ((panda$core$UInt64) { 1 }));
        self->reusedValueCount = $tmp2950;
        org$pandalanguage$pandac$IRNode* $tmp2951 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2951->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2951->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2951, ((panda$core$Int64) { 1027 }), left2789->position, left2789->type, ((panda$core$Object*) wrap_panda$core$UInt64(self->reusedValueCount)), ((panda$collections$ListView*) children2947));
        left2789 = $tmp2951;
        org$pandalanguage$pandac$IRNode* $tmp2954 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2954->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2954->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2954, ((panda$core$Int64) { 1028 }), left2789->position, left2789->type, self->reusedValueCount);
        reusedLeft2953 = $tmp2954;
        panda$core$Int64 $tmp2956 = org$pandalanguage$pandac$Compiler$removeAssignment$panda$core$Int64$R$panda$core$Int64(p_op);
        org$pandalanguage$pandac$IRNode* $tmp2957 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, reusedLeft2953, $tmp2956, right2790);
        right2790 = $tmp2957;
        if (((panda$core$Bit) { right2790 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp2959 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(left2789->type);
        bool $tmp2958 = $tmp2959.value;
        if (!$tmp2958) goto $l2960;
        panda$core$Bit $tmp2961 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(left2789->type, right2790->type);
        $tmp2958 = $tmp2961.value;
        $l2960:;
        panda$core$Bit $tmp2962 = { $tmp2958 };
        if ($tmp2962.value) {
        {
            panda$collections$Array* $tmp2964 = (panda$collections$Array*) malloc(40);
            $tmp2964->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2964->refCount.value = 1;
            panda$collections$Array$init($tmp2964);
            org$pandalanguage$pandac$IRNode* $tmp2966 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, right2790, &$s2963, ((panda$collections$ListView*) $tmp2964), left2789->type);
            right2790 = $tmp2966;
            if (((panda$core$Bit) { right2790 == NULL }).value) {
            {
                return NULL;
            }
            }
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp2967 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, left2789, ((panda$core$Int64) { 73 }), right2790);
        return $tmp2967;
    }
    }
    panda$core$Bit $tmp2968 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 101 }));
    if ($tmp2968.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2969 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, left2789);
        left2789 = $tmp2969;
        if (((panda$core$Bit) { left2789 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$ClassDecl* $tmp2971 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, left2789->type);
        cl2970 = $tmp2971;
        if (((panda$core$Bit) { cl2970 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$ListView* $tmp2973 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, left2789->type);
        parameters2972 = $tmp2973;
        org$pandalanguage$pandac$SymbolTable* $tmp2975 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl2970);
        org$pandalanguage$pandac$Symbol* $tmp2977 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp2975, &$s2976);
        methods2974 = $tmp2977;
        if (((panda$core$Bit) { methods2974 != NULL }).value) {
        {
            panda$collections$Array* $tmp2980 = (panda$collections$Array*) malloc(40);
            $tmp2980->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2980->refCount.value = 1;
            panda$collections$Array$init($tmp2980);
            types2979 = $tmp2980;
            panda$core$Bit $tmp2982 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(methods2974->kind, ((panda$core$Int64) { 204 }));
            if ($tmp2982.value) {
            {
                m2983 = ((org$pandalanguage$pandac$MethodDecl*) methods2974);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m2983);
                org$pandalanguage$pandac$MethodRef* $tmp2984 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                $tmp2984->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                $tmp2984->refCount.value = 1;
                org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp2984, m2983, parameters2972);
                org$pandalanguage$pandac$Type* $tmp2986 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type($tmp2984);
                panda$collections$Array$add$panda$collections$Array$T(types2979, ((panda$core$Object*) $tmp2986));
            }
            }
            else {
            {
                panda$core$Bit $tmp2987 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(methods2974->kind, ((panda$core$Int64) { 205 }));
                PANDA_ASSERT($tmp2987.value);
                {
                    ITable* $tmp2989 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) methods2974)->methods)->$class->itable;
                    while ($tmp2989->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp2989 = $tmp2989->next;
                    }
                    $fn2991 $tmp2990 = $tmp2989->methods[0];
                    panda$collections$Iterator* $tmp2992 = $tmp2990(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) methods2974)->methods));
                    m$Iter2988 = $tmp2992;
                    $l2993:;
                    ITable* $tmp2995 = m$Iter2988->$class->itable;
                    while ($tmp2995->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp2995 = $tmp2995->next;
                    }
                    $fn2997 $tmp2996 = $tmp2995->methods[0];
                    panda$core$Bit $tmp2998 = $tmp2996(m$Iter2988);
                    panda$core$Bit $tmp2999 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2998);
                    if (!$tmp2999.value) goto $l2994;
                    {
                        ITable* $tmp3001 = m$Iter2988->$class->itable;
                        while ($tmp3001->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp3001 = $tmp3001->next;
                        }
                        $fn3003 $tmp3002 = $tmp3001->methods[1];
                        panda$core$Object* $tmp3004 = $tmp3002(m$Iter2988);
                        m3000 = ((org$pandalanguage$pandac$MethodDecl*) $tmp3004);
                        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m3000);
                        org$pandalanguage$pandac$MethodRef* $tmp3005 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                        $tmp3005->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                        $tmp3005->refCount.value = 1;
                        org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp3005, m3000, parameters2972);
                        org$pandalanguage$pandac$Type* $tmp3007 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type($tmp3005);
                        panda$collections$Array$add$panda$collections$Array$T(types2979, ((panda$core$Object*) $tmp3007));
                    }
                    goto $l2993;
                    $l2994:;
                }
            }
            }
            org$pandalanguage$pandac$Type* $tmp3008 = (org$pandalanguage$pandac$Type*) malloc(96);
            $tmp3008->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp3008->refCount.value = 1;
            org$pandalanguage$pandac$Type$init$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp3008, ((panda$collections$ListView*) types2979));
            type2978 = $tmp3008;
        }
        }
        else {
        {
            org$pandalanguage$pandac$Type* $tmp3010 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            type2978 = $tmp3010;
        }
        }
        panda$collections$Array* $tmp3012 = (panda$collections$Array*) malloc(40);
        $tmp3012->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp3012->refCount.value = 1;
        panda$collections$Array$init($tmp3012);
        children3011 = $tmp3012;
        panda$collections$Array$add$panda$collections$Array$T(children3011, ((panda$core$Object*) left2789));
        panda$collections$Array$add$panda$collections$Array$T(children3011, ((panda$core$Object*) right2790));
        org$pandalanguage$pandac$IRNode* $tmp3014 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3014->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3014->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3014, ((panda$core$Int64) { 1040 }), p_position, type2978, ((panda$collections$ListView*) children3011));
        return $tmp3014;
    }
    }
    org$pandalanguage$pandac$Type* $tmp3016 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp3017 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(left2789->type, $tmp3016);
    if ($tmp3017.value) {
    {
        org$pandalanguage$pandac$Type* $tmp3019 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp3020 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(right2790->type, $tmp3019);
        bool $tmp3018 = $tmp3020.value;
        if (!$tmp3018) goto $l3021;
        panda$core$Bit $tmp3026 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 66 }));
        bool $tmp3025 = $tmp3026.value;
        if ($tmp3025) goto $l3027;
        panda$core$Bit $tmp3028 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 68 }));
        $tmp3025 = $tmp3028.value;
        $l3027:;
        panda$core$Bit $tmp3029 = { $tmp3025 };
        bool $tmp3024 = $tmp3029.value;
        if ($tmp3024) goto $l3030;
        panda$core$Bit $tmp3031 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 70 }));
        $tmp3024 = $tmp3031.value;
        $l3030:;
        panda$core$Bit $tmp3032 = { $tmp3024 };
        bool $tmp3023 = $tmp3032.value;
        if ($tmp3023) goto $l3033;
        panda$core$Bit $tmp3034 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 58 }));
        $tmp3023 = $tmp3034.value;
        $l3033:;
        panda$core$Bit $tmp3035 = { $tmp3023 };
        bool $tmp3022 = $tmp3035.value;
        if ($tmp3022) goto $l3036;
        panda$core$Bit $tmp3037 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 59 }));
        $tmp3022 = $tmp3037.value;
        $l3036:;
        panda$core$Bit $tmp3038 = { $tmp3022 };
        $tmp3018 = $tmp3038.value;
        $l3021:;
        panda$core$Bit $tmp3039 = { $tmp3018 };
        if ($tmp3039.value) {
        {
            panda$collections$Array* $tmp3041 = (panda$collections$Array*) malloc(40);
            $tmp3041->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp3041->refCount.value = 1;
            panda$collections$Array$init($tmp3041);
            children3040 = $tmp3041;
            panda$collections$Array$add$panda$collections$Array$T(children3040, ((panda$core$Object*) left2789));
            panda$collections$Array$add$panda$collections$Array$T(children3040, ((panda$core$Object*) right2790));
            org$pandalanguage$pandac$IRNode* $tmp3043 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3043->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3043->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3043, ((panda$core$Int64) { 1023 }), p_position, left2789->type, ((panda$core$Object*) wrap_panda$core$Int64(p_op)), ((panda$collections$ListView*) children3040));
            return $tmp3043;
        }
        }
        panda$core$String* $tmp3046 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
        panda$core$String* $tmp3047 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3045, $tmp3046);
        panda$core$String* $tmp3049 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3047, &$s3048);
        panda$core$String* $tmp3050 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3049, ((panda$core$Object*) left2789->type));
        panda$core$String* $tmp3052 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3050, &$s3051);
        panda$core$String* $tmp3053 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3052, ((panda$core$Object*) right2790->type));
        panda$core$String* $tmp3055 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3053, &$s3054);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp3055);
        return NULL;
    }
    }
    panda$collections$Array* $tmp3057 = (panda$collections$Array*) malloc(40);
    $tmp3057->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3057->refCount.value = 1;
    panda$collections$Array$init($tmp3057);
    children3056 = $tmp3057;
    panda$core$Bit $tmp3061 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2789->kind, ((panda$core$Int64) { 1004 }));
    bool $tmp3060 = $tmp3061.value;
    if ($tmp3060) goto $l3062;
    panda$core$Bit $tmp3063 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2789->kind, ((panda$core$Int64) { 1032 }));
    $tmp3060 = $tmp3063.value;
    $l3062:;
    panda$core$Bit $tmp3064 = { $tmp3060 };
    bool $tmp3059 = $tmp3064.value;
    if (!$tmp3059) goto $l3065;
    panda$core$Bit $tmp3067 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right2790->kind, ((panda$core$Int64) { 1004 }));
    bool $tmp3066 = $tmp3067.value;
    if ($tmp3066) goto $l3068;
    panda$core$Bit $tmp3069 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right2790->kind, ((panda$core$Int64) { 1032 }));
    $tmp3066 = $tmp3069.value;
    $l3068:;
    panda$core$Bit $tmp3070 = { $tmp3066 };
    $tmp3059 = $tmp3070.value;
    $l3065:;
    panda$core$Bit $tmp3071 = { $tmp3059 };
    if ($tmp3071.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3072 = org$pandalanguage$pandac$Compiler$foldInts$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, left2789, p_op, right2790);
        return $tmp3072;
    }
    }
    panda$core$Bit $tmp3074 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(left2789->type);
    bool $tmp3073 = $tmp3074.value;
    if (!$tmp3073) goto $l3075;
    panda$core$Int64$nullable $tmp3076 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, right2790, left2789->type);
    $tmp3073 = ((panda$core$Bit) { $tmp3076.nonnull }).value;
    $l3075:;
    panda$core$Bit $tmp3077 = { $tmp3073 };
    if ($tmp3077.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3078 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, right2790, left2789->type);
        right2790 = $tmp3078;
        PANDA_ASSERT(((panda$core$Bit) { right2790 != NULL }).value);
        panda$collections$Array$add$panda$collections$Array$T(children3056, ((panda$core$Object*) left2789));
        panda$collections$Array$add$panda$collections$Array$T(children3056, ((panda$core$Object*) right2790));
        switch (p_op.value) {
            case 58:
            case 59:
            case 63:
            case 65:
            case 62:
            case 64:
            {
                org$pandalanguage$pandac$Type* $tmp3080 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
                resultType3079 = $tmp3080;
            }
            break;
            default:
            {
                resultType3079 = left2789->type;
            }
        }
        org$pandalanguage$pandac$IRNode* $tmp3081 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3081->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3081->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3081, ((panda$core$Int64) { 1023 }), p_position, resultType3079, ((panda$core$Object*) wrap_panda$core$Int64(p_op)), ((panda$collections$ListView*) children3056));
        return $tmp3081;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children3056, ((panda$core$Object*) right2790));
    PANDA_ASSERT(self->reportErrors.value);
    self->reportErrors = ((panda$core$Bit) { false });
    panda$core$String* $tmp3084 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
    org$pandalanguage$pandac$IRNode* $tmp3085 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, left2789, $tmp3084, ((panda$collections$ListView*) children3056));
    result3083 = $tmp3085;
    self->reportErrors = ((panda$core$Bit) { true });
    if (((panda$core$Bit) { result3083 == NULL }).value) {
    {
        panda$collections$Array$clear(children3056);
        panda$collections$Array$add$panda$collections$Array$T(children3056, ((panda$core$Object*) left2789));
        org$pandalanguage$pandac$IRNode* $tmp3087 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, right2790);
        resolved3086 = $tmp3087;
        bool $tmp3088 = ((panda$core$Bit) { resolved3086 != NULL }).value;
        if (!$tmp3088) goto $l3089;
        panda$core$Bit $tmp3090 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(resolved3086->type);
        $tmp3088 = $tmp3090.value;
        $l3089:;
        panda$core$Bit $tmp3091 = { $tmp3088 };
        if ($tmp3091.value) {
        {
            panda$collections$Array$add$panda$collections$Array$T(children3056, ((panda$core$Object*) resolved3086));
            org$pandalanguage$pandac$IRNode* $tmp3093 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3093->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3093->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3095 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp3093, ((panda$core$Int64) { 1001 }), resolved3086->position, $tmp3095, resolved3086->type);
            target3092 = $tmp3093;
            panda$core$String* $tmp3096 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
            org$pandalanguage$pandac$IRNode* $tmp3097 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target3092, $tmp3096, ((panda$collections$ListView*) children3056));
            result3083 = $tmp3097;
        }
        }
    }
    }
    return result3083;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_b) {
    org$pandalanguage$pandac$IRNode* left3098;
    org$pandalanguage$pandac$IRNode* right3101;
    panda$core$Object* $tmp3099 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_b->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3100 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3099));
    left3098 = $tmp3100;
    if (((panda$core$Bit) { left3098 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Object* $tmp3102 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_b->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp3103 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3102));
    right3101 = $tmp3103;
    if (((panda$core$Bit) { right3101 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3104 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_b->position, left3098, ((panda$core$Int64$wrapper*) p_b->payload)->value, right3101);
    return $tmp3104;
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type) {
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp3108;
    switch (p_type->typeKind.value) {
        case 22:
        {
            panda$collections$ListView* $tmp3105 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p_type->parameter->bound);
            return $tmp3105;
        }
        break;
        case 21:
        {
            panda$core$Int64 $tmp3106 = panda$collections$Array$get_count$R$panda$core$Int64(p_type->subtypes);
            panda$core$Bit $tmp3107 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp3106, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp3107.value);
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp3108, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$collections$Array* $tmp3109 = panda$collections$Array$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT(p_type->subtypes, $tmp3108);
            return ((panda$collections$ListView*) $tmp3109);
        }
        break;
        case 11:
        {
            panda$core$Object* $tmp3110 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
            panda$collections$ListView* $tmp3111 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, ((org$pandalanguage$pandac$Type*) $tmp3110));
            return $tmp3111;
        }
        break;
        default:
        {
            panda$collections$Array* $tmp3112 = (panda$collections$Array*) malloc(40);
            $tmp3112->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp3112->refCount.value = 1;
            panda$collections$Array$init($tmp3112);
            return ((panda$collections$ListView*) $tmp3112);
        }
    }
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$IRNode$Q$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_target) {
    if (((panda$core$Bit) { p_target != NULL }).value) {
    {
        panda$core$Bit $tmp3114 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1001 }));
        if ($tmp3114.value) {
        {
            panda$collections$ListView* $tmp3115 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, ((org$pandalanguage$pandac$Type*) p_target->payload));
            return $tmp3115;
        }
        }
        panda$collections$ListView* $tmp3116 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p_target->type);
        return $tmp3116;
    }
    }
    panda$collections$Array* $tmp3117 = (panda$collections$Array*) malloc(40);
    $tmp3117->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3117->refCount.value = 1;
    panda$collections$Array$init($tmp3117);
    return ((panda$collections$ListView*) $tmp3117);
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compilePrefix$panda$core$Int64$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_base, org$pandalanguage$pandac$Position p_position) {
    panda$core$String* name3120;
    org$pandalanguage$pandac$ClassDecl* cl3122;
    org$pandalanguage$pandac$Symbol* s3124;
    org$pandalanguage$pandac$MethodDecl* m3127;
    panda$collections$Iterator* test$Iter3132;
    org$pandalanguage$pandac$MethodDecl* test3144;
    org$pandalanguage$pandac$MethodRef* ref3156;
    panda$collections$Array* children3160;
    org$pandalanguage$pandac$IRNode* methodRef3163;
    org$pandalanguage$pandac$Position $tmp3169;
    panda$collections$Array* args3170;
    panda$collections$Array* children3186;
    panda$collections$Array* children3196;
    org$pandalanguage$pandac$IRNode* coerced3205;
    panda$collections$Array* children3208;
    panda$core$Bit $tmp3119 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_base->type);
    if ($tmp3119.value) {
    {
        panda$core$String* $tmp3121 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
        name3120 = $tmp3121;
        org$pandalanguage$pandac$ClassDecl* $tmp3123 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_base->type);
        cl3122 = $tmp3123;
        if (((panda$core$Bit) { cl3122 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$SymbolTable* $tmp3125 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl3122);
        org$pandalanguage$pandac$Symbol* $tmp3126 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp3125, name3120);
        s3124 = $tmp3126;
        if (((panda$core$Bit) { s3124 != NULL }).value) {
        {
            m3127 = NULL;
            switch (s3124->kind.value) {
                case 204:
                {
                    m3127 = ((org$pandalanguage$pandac$MethodDecl*) s3124);
                    panda$core$Int64 $tmp3128 = panda$collections$Array$get_count$R$panda$core$Int64(m3127->parameters);
                    panda$core$Bit $tmp3129 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3128, ((panda$core$Int64) { 0 }));
                    PANDA_ASSERT($tmp3129.value);
                    panda$core$Bit $tmp3130 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(m3127->annotations);
                    panda$core$Bit $tmp3131 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3130);
                    PANDA_ASSERT($tmp3131.value);
                }
                break;
                case 205:
                {
                    {
                        ITable* $tmp3133 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s3124)->methods)->$class->itable;
                        while ($tmp3133->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp3133 = $tmp3133->next;
                        }
                        $fn3135 $tmp3134 = $tmp3133->methods[0];
                        panda$collections$Iterator* $tmp3136 = $tmp3134(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s3124)->methods));
                        test$Iter3132 = $tmp3136;
                        $l3137:;
                        ITable* $tmp3139 = test$Iter3132->$class->itable;
                        while ($tmp3139->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp3139 = $tmp3139->next;
                        }
                        $fn3141 $tmp3140 = $tmp3139->methods[0];
                        panda$core$Bit $tmp3142 = $tmp3140(test$Iter3132);
                        panda$core$Bit $tmp3143 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3142);
                        if (!$tmp3143.value) goto $l3138;
                        {
                            ITable* $tmp3145 = test$Iter3132->$class->itable;
                            while ($tmp3145->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp3145 = $tmp3145->next;
                            }
                            $fn3147 $tmp3146 = $tmp3145->methods[1];
                            panda$core$Object* $tmp3148 = $tmp3146(test$Iter3132);
                            test3144 = ((org$pandalanguage$pandac$MethodDecl*) $tmp3148);
                            panda$core$Bit $tmp3150 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(test3144->annotations);
                            panda$core$Bit $tmp3151 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3150);
                            bool $tmp3149 = $tmp3151.value;
                            if (!$tmp3149) goto $l3152;
                            panda$core$Int64 $tmp3153 = panda$collections$Array$get_count$R$panda$core$Int64(test3144->parameters);
                            panda$core$Bit $tmp3154 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3153, ((panda$core$Int64) { 0 }));
                            $tmp3149 = $tmp3154.value;
                            $l3152:;
                            panda$core$Bit $tmp3155 = { $tmp3149 };
                            if ($tmp3155.value) {
                            {
                                m3127 = test3144;
                                goto $l3138;
                            }
                            }
                        }
                        goto $l3137;
                        $l3138:;
                    }
                }
                break;
                default:
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
            }
            if (((panda$core$Bit) { m3127 != NULL }).value) {
            {
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m3127);
                org$pandalanguage$pandac$MethodRef* $tmp3157 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                $tmp3157->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                $tmp3157->refCount.value = 1;
                panda$collections$ListView* $tmp3159 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$IRNode$Q$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p_base);
                org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp3157, m3127, $tmp3159);
                ref3156 = $tmp3157;
                panda$collections$Array* $tmp3161 = (panda$collections$Array*) malloc(40);
                $tmp3161->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp3161->refCount.value = 1;
                panda$collections$Array$init($tmp3161);
                children3160 = $tmp3161;
                panda$collections$Array$add$panda$collections$Array$T(children3160, ((panda$core$Object*) p_base));
                org$pandalanguage$pandac$IRNode* $tmp3164 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp3164->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp3164->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp3166 = (org$pandalanguage$pandac$Type*) malloc(96);
                $tmp3166->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
                $tmp3166->refCount.value = 1;
                org$pandalanguage$pandac$Position$init(&$tmp3169);
                org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp3166, &$s3168, ((panda$core$Int64) { 16 }), $tmp3169, ((panda$core$Bit) { true }));
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3164, ((panda$core$Int64) { 1002 }), p_position, $tmp3166, ((panda$core$Object*) ref3156), ((panda$collections$ListView*) children3160));
                methodRef3163 = $tmp3164;
                panda$collections$Array* $tmp3171 = (panda$collections$Array*) malloc(40);
                $tmp3171->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp3171->refCount.value = 1;
                panda$collections$Array$init($tmp3171);
                args3170 = $tmp3171;
                org$pandalanguage$pandac$IRNode* $tmp3173 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, methodRef3163, ((panda$collections$ListView*) args3170));
                return $tmp3173;
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
                    org$pandalanguage$pandac$IRNode* $tmp3174 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp3174->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp3174->refCount.value = 1;
                    org$pandalanguage$pandac$Type* $tmp3176 = org$pandalanguage$pandac$Type$NegatedIntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(((panda$core$UInt64$wrapper*) p_base->payload)->value);
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp3174, ((panda$core$Int64) { 1032 }), p_position, $tmp3176, ((panda$core$UInt64$wrapper*) p_base->payload)->value);
                    return $tmp3174;
                }
                break;
                case 1032:
                {
                    org$pandalanguage$pandac$IRNode* $tmp3177 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp3177->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp3177->refCount.value = 1;
                    org$pandalanguage$pandac$Type* $tmp3179 = org$pandalanguage$pandac$Type$NegatedIntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(((panda$core$UInt64$wrapper*) p_base->payload)->value);
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp3177, ((panda$core$Int64) { 1004 }), p_position, $tmp3179, ((panda$core$UInt64$wrapper*) p_base->payload)->value);
                    return $tmp3177;
                }
                break;
                case 1045:
                {
                    org$pandalanguage$pandac$IRNode* $tmp3180 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp3180->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp3180->refCount.value = 1;
                    panda$core$Real64 $tmp3182 = panda$core$Real64$$SUB$R$panda$core$Real64(((panda$core$Real64$wrapper*) p_base->payload)->value);
                    org$pandalanguage$pandac$Type* $tmp3183 = org$pandalanguage$pandac$Type$RealLiteral$panda$core$Real64$R$org$pandalanguage$pandac$Type($tmp3182);
                    panda$core$Real64 $tmp3184 = panda$core$Real64$$SUB$R$panda$core$Real64(((panda$core$Real64$wrapper*) p_base->payload)->value);
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Real64($tmp3180, ((panda$core$Int64) { 1045 }), p_position, $tmp3183, $tmp3184);
                    return $tmp3180;
                }
                break;
                default:
                {
                    panda$core$Bit $tmp3185 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_base->type);
                    if ($tmp3185.value) {
                    {
                        panda$collections$Array* $tmp3187 = (panda$collections$Array*) malloc(40);
                        $tmp3187->$class = (panda$core$Class*) &panda$collections$Array$class;
                        $tmp3187->refCount.value = 1;
                        panda$collections$Array$init($tmp3187);
                        children3186 = $tmp3187;
                        panda$collections$Array$add$panda$collections$Array$T(children3186, ((panda$core$Object*) p_base));
                        org$pandalanguage$pandac$IRNode* $tmp3189 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                        $tmp3189->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                        $tmp3189->refCount.value = 1;
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3189, ((panda$core$Int64) { 1041 }), p_base->position, p_base->type, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 52 }))), ((panda$collections$ListView*) children3186));
                        return $tmp3189;
                    }
                    }
                }
            }
            panda$core$String* $tmp3192 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3191, ((panda$core$Object*) p_base->type));
            panda$core$String* $tmp3194 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3192, &$s3193);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_base->position, $tmp3194);
            return NULL;
        }
        break;
        case 50:
        {
            panda$core$Bit $tmp3195 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_base->type);
            if ($tmp3195.value) {
            {
                panda$collections$Array* $tmp3197 = (panda$collections$Array*) malloc(40);
                $tmp3197->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp3197->refCount.value = 1;
                panda$collections$Array$init($tmp3197);
                children3196 = $tmp3197;
                panda$collections$Array$add$panda$collections$Array$T(children3196, ((panda$core$Object*) p_base));
                org$pandalanguage$pandac$IRNode* $tmp3199 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp3199->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp3199->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3199, ((panda$core$Int64) { 1041 }), p_base->position, p_base->type, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 50 }))), ((panda$collections$ListView*) children3196));
                return $tmp3199;
            }
            }
            else {
            {
                panda$core$String* $tmp3202 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3201, ((org$pandalanguage$pandac$Symbol*) p_base->type)->name);
                panda$core$String* $tmp3204 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3202, &$s3203);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_base->position, $tmp3204);
                return NULL;
            }
            }
        }
        break;
        case 49:
        {
            org$pandalanguage$pandac$Type* $tmp3206 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode* $tmp3207 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_base, $tmp3206);
            coerced3205 = $tmp3207;
            if (((panda$core$Bit) { coerced3205 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp3209 = (panda$collections$Array*) malloc(40);
            $tmp3209->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp3209->refCount.value = 1;
            panda$collections$Array$init($tmp3209);
            children3208 = $tmp3209;
            panda$collections$Array$add$panda$collections$Array$T(children3208, ((panda$core$Object*) coerced3205));
            org$pandalanguage$pandac$IRNode* $tmp3211 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3211->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3211->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3211, ((panda$core$Int64) { 1041 }), p_base->position, p_base->type, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 49 }))), ((panda$collections$ListView*) children3208));
            return $tmp3211;
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
    org$pandalanguage$pandac$IRNode* base3216;
    panda$core$Bit $tmp3213 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_p->kind, ((panda$core$Int64) { 112 }));
    PANDA_ASSERT($tmp3213.value);
    panda$core$Int64 $tmp3214 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_p->children);
    panda$core$Bit $tmp3215 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3214, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3215.value);
    panda$core$Object* $tmp3217 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_p->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3218 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3217));
    base3216 = $tmp3218;
    if (((panda$core$Bit) { base3216 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3219 = org$pandalanguage$pandac$Compiler$compilePrefix$panda$core$Int64$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$R$org$pandalanguage$pandac$IRNode$Q(self, ((panda$core$Int64$wrapper*) p_p->payload)->value, base3216, p_p->position);
    return $tmp3219;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileCall$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_c) {
    org$pandalanguage$pandac$IRNode* m3221;
    panda$collections$Array* args3224;
    panda$core$Range$LTpanda$core$Int64$GT $tmp3227;
    org$pandalanguage$pandac$IRNode* arg3242;
    panda$core$Bit $tmp3220 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_c->kind, ((panda$core$Int64) { 107 }));
    PANDA_ASSERT($tmp3220.value);
    panda$core$Object* $tmp3222 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_c->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3223 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3222));
    m3221 = $tmp3223;
    if (((panda$core$Bit) { m3221 != NULL }).value) {
    {
        panda$collections$Array* $tmp3225 = (panda$collections$Array*) malloc(40);
        $tmp3225->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp3225->refCount.value = 1;
        panda$collections$Array$init($tmp3225);
        args3224 = $tmp3225;
        panda$core$Int64 $tmp3228 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_c->children);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp3227, ((panda$core$Int64) { 1 }), $tmp3228, ((panda$core$Bit) { false }));
        int64_t $tmp3230 = $tmp3227.min.value;
        panda$core$Int64 i3229 = { $tmp3230 };
        int64_t $tmp3232 = $tmp3227.max.value;
        bool $tmp3233 = $tmp3227.inclusive.value;
        if ($tmp3233) goto $l3240; else goto $l3241;
        $l3240:;
        if ($tmp3230 <= $tmp3232) goto $l3234; else goto $l3236;
        $l3241:;
        if ($tmp3230 < $tmp3232) goto $l3234; else goto $l3236;
        $l3234:;
        {
            panda$core$Object* $tmp3243 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_c->children, i3229);
            org$pandalanguage$pandac$IRNode* $tmp3244 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3243));
            arg3242 = $tmp3244;
            if (((panda$core$Bit) { arg3242 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(args3224, ((panda$core$Object*) arg3242));
        }
        $l3237:;
        int64_t $tmp3246 = $tmp3232 - i3229.value;
        if ($tmp3233) goto $l3247; else goto $l3248;
        $l3247:;
        if ($tmp3246 >= 1) goto $l3245; else goto $l3236;
        $l3248:;
        if ($tmp3246 > 1) goto $l3245; else goto $l3236;
        $l3245:;
        i3229.value += 1;
        goto $l3234;
        $l3236:;
        org$pandalanguage$pandac$IRNode* $tmp3251 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, m3221, ((panda$collections$ListView*) args3224));
        return $tmp3251;
    }
    }
    return NULL;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$String$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_base, panda$core$String* p_name) {
    org$pandalanguage$pandac$ClassDecl* cl3252;
    panda$core$String* name3254;
    org$pandalanguage$pandac$ClassDecl* cl3262;
    org$pandalanguage$pandac$SymbolTable* st3275;
    org$pandalanguage$pandac$Symbol* s3277;
    switch (p_base->kind.value) {
        case 1001:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp3253 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Type*) p_base->payload));
            cl3252 = $tmp3253;
        }
        break;
        case 1037:
        {
            panda$core$String* $tmp3256 = (($fn3255) p_base->payload->$class->vtable[0])(p_base->payload);
            panda$core$String* $tmp3258 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3256, &$s3257);
            panda$core$String* $tmp3259 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3258, p_name);
            panda$core$String* $tmp3261 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3259, &$s3260);
            name3254 = $tmp3261;
            org$pandalanguage$pandac$ClassDecl* $tmp3263 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, name3254);
            cl3262 = $tmp3263;
            if (((panda$core$Bit) { cl3262 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp3264 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp3264->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp3264->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp3266 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$Type* $tmp3267 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl3262);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp3264, ((panda$core$Int64) { 1001 }), p_position, $tmp3266, $tmp3267);
                return $tmp3264;
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp3268 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3268->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3268->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3270 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$String($tmp3268, ((panda$core$Int64) { 1037 }), p_position, $tmp3270, name3254);
            return $tmp3268;
        }
        break;
        case 1024:
        {
            panda$core$Object* $tmp3271 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, ((org$pandalanguage$pandac$ClassDecl*) $tmp3271));
            panda$core$Object* $tmp3272 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
            org$pandalanguage$pandac$ClassDecl* $tmp3273 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$ClassDecl*) $tmp3272)->rawSuper);
            cl3252 = $tmp3273;
        }
        break;
        default:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp3274 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_base->type);
            cl3252 = $tmp3274;
        }
    }
    if (((panda$core$Bit) { cl3252 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp3276 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl3252);
    st3275 = $tmp3276;
    org$pandalanguage$pandac$Symbol* $tmp3278 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(st3275, p_name);
    s3277 = $tmp3278;
    if (((panda$core$Bit) { s3277 == NULL }).value) {
    {
        panda$core$String* $tmp3280 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3279, ((panda$core$Object*) p_base->type));
        panda$core$String* $tmp3282 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3280, &$s3281);
        panda$core$String* $tmp3283 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3282, p_name);
        panda$core$String* $tmp3285 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3283, &$s3284);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp3285);
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3286 = org$pandalanguage$pandac$Compiler$symbolRef$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, p_base, s3277, st3275);
    return $tmp3286;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_d) {
    org$pandalanguage$pandac$IRNode* base3290;
    panda$core$Bit $tmp3287 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_d->kind, ((panda$core$Int64) { 108 }));
    PANDA_ASSERT($tmp3287.value);
    panda$core$Int64 $tmp3288 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp3289 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3288, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3289.value);
    panda$core$Object* $tmp3291 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3292 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3291));
    base3290 = $tmp3292;
    if (((panda$core$Bit) { base3290 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp3294 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(base3290->kind, ((panda$core$Int64) { 1037 }));
    bool $tmp3293 = $tmp3294.value;
    if (!$tmp3293) goto $l3295;
    panda$core$Bit $tmp3296 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(base3290->kind, ((panda$core$Int64) { 1024 }));
    $tmp3293 = $tmp3296.value;
    $l3295:;
    panda$core$Bit $tmp3297 = { $tmp3293 };
    if ($tmp3297.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3298 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, base3290);
        base3290 = $tmp3298;
    }
    }
    if (((panda$core$Bit) { base3290 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3299 = org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$String$R$org$pandalanguage$pandac$IRNode$Q(self, p_d->position, base3290, ((panda$core$String*) p_d->payload));
    return $tmp3299;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIdentifier$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_i) {
    org$pandalanguage$pandac$Symbol* s3301;
    panda$core$Bit $tmp3300 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_i->kind, ((panda$core$Int64) { 106 }));
    PANDA_ASSERT($tmp3300.value);
    org$pandalanguage$pandac$Symbol* $tmp3302 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(self->symbolTable, ((panda$core$String*) p_i->payload));
    s3301 = $tmp3302;
    if (((panda$core$Bit) { s3301 == NULL }).value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp3303 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((panda$core$String*) p_i->payload));
        s3301 = ((org$pandalanguage$pandac$Symbol*) $tmp3303);
    }
    }
    if (((panda$core$Bit) { s3301 != NULL }).value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3304 = org$pandalanguage$pandac$Compiler$symbolRef$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q(self, p_i->position, NULL, s3301, self->symbolTable);
        return $tmp3304;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3305 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3305->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3305->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3307 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$String($tmp3305, ((panda$core$Int64) { 1037 }), p_i->position, $tmp3307, ((panda$core$String*) p_i->payload));
    return $tmp3305;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_t) {
    org$pandalanguage$pandac$Type* resolved3308;
    org$pandalanguage$pandac$Type* $tmp3309 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, p_t);
    org$pandalanguage$pandac$Type* $tmp3310 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, $tmp3309);
    resolved3308 = $tmp3310;
    if (((panda$core$Bit) { resolved3308 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3311 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3311->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3311->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3313 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp3311, ((panda$core$Int64) { 1001 }), p_t->position, $tmp3313, resolved3308);
    return $tmp3311;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileRange$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_r) {
    org$pandalanguage$pandac$IRNode* start3321;
    org$pandalanguage$pandac$IRNode* end3329;
    org$pandalanguage$pandac$IRNode* step3337;
    panda$collections$Array* children3342;
    org$pandalanguage$pandac$Position $tmp3350;
    panda$core$Bit $tmp3315 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_r->kind, ((panda$core$Int64) { 105 }));
    bool $tmp3314 = $tmp3315.value;
    if ($tmp3314) goto $l3316;
    panda$core$Bit $tmp3317 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_r->kind, ((panda$core$Int64) { 104 }));
    $tmp3314 = $tmp3317.value;
    $l3316:;
    panda$core$Bit $tmp3318 = { $tmp3314 };
    PANDA_ASSERT($tmp3318.value);
    panda$core$Int64 $tmp3319 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_r->children);
    panda$core$Bit $tmp3320 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3319, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp3320.value);
    panda$core$Object* $tmp3322 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp3323 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp3322)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp3323.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3324 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3324->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3324->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp3326 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3324, ((panda$core$Int64) { 1030 }), p_r->position, $tmp3326);
        start3321 = $tmp3324;
    }
    }
    else {
    {
        panda$core$Object* $tmp3327 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp3328 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3327));
        start3321 = $tmp3328;
        if (((panda$core$Bit) { start3321 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$core$Object* $tmp3330 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp3331 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp3330)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp3331.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3332 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3332->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3332->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp3334 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3332, ((panda$core$Int64) { 1030 }), p_r->position, $tmp3334);
        end3329 = $tmp3332;
    }
    }
    else {
    {
        panda$core$Object* $tmp3335 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$IRNode* $tmp3336 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3335));
        end3329 = $tmp3336;
        if (((panda$core$Bit) { end3329 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$core$Object* $tmp3338 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 2 }));
    panda$core$Bit $tmp3339 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp3338)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp3339.value) {
    {
        step3337 = NULL;
    }
    }
    else {
    {
        panda$core$Object* $tmp3340 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$IRNode* $tmp3341 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3340));
        step3337 = $tmp3341;
        if (((panda$core$Bit) { step3337 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$collections$Array* $tmp3343 = (panda$collections$Array*) malloc(40);
    $tmp3343->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3343->refCount.value = 1;
    panda$collections$Array$init($tmp3343);
    children3342 = $tmp3343;
    panda$collections$Array$add$panda$collections$Array$T(children3342, ((panda$core$Object*) start3321));
    panda$collections$Array$add$panda$collections$Array$T(children3342, ((panda$core$Object*) end3329));
    if (((panda$core$Bit) { step3337 != NULL }).value) {
    {
        panda$collections$Array$add$panda$collections$Array$T(children3342, ((panda$core$Object*) step3337));
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3345 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3345->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3345->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3347 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp3347->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp3347->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp3350);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp3347, &$s3349, ((panda$core$Int64) { 17 }), $tmp3350, ((panda$core$Bit) { true }));
    panda$core$Bit $tmp3351 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_r->kind, ((panda$core$Int64) { 104 }));
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3345, ((panda$core$Int64) { 1031 }), p_r->position, $tmp3347, ((panda$core$Object*) wrap_panda$core$Bit($tmp3351)), ((panda$collections$ListView*) children3342));
    return $tmp3345;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$IRNode* $tmp3352 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3352->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3352->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3354 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$String($tmp3352, ((panda$core$Int64) { 1033 }), p_s->position, $tmp3354, ((panda$core$String*) p_s->payload));
    return $tmp3352;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileSelf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$Type* type3359;
    org$pandalanguage$pandac$ClassDecl* cl3360;
    panda$collections$Array* subtypes3367;
    panda$core$MutableString* name3371;
    panda$core$Char8 $tmp3374;
    panda$core$String* separator3375;
    panda$collections$Iterator* p$Iter3377;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* p3389;
    panda$collections$Array* pType3394;
    panda$core$String* pName3397;
    panda$core$Char8 $tmp3407;
    panda$core$Bit $tmp3355 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_s->kind, ((panda$core$Int64) { 114 }));
    PANDA_ASSERT($tmp3355.value);
    panda$core$Object* $tmp3356 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
    panda$core$Bit $tmp3357 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp3356)->annotations);
    if ($tmp3357.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_s->position, &$s3358);
        return NULL;
    }
    }
    panda$core$Object* $tmp3361 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
    cl3360 = ((org$pandalanguage$pandac$ClassDecl*) $tmp3361);
    ITable* $tmp3362 = ((panda$collections$CollectionView*) cl3360->parameters)->$class->itable;
    while ($tmp3362->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp3362 = $tmp3362->next;
    }
    $fn3364 $tmp3363 = $tmp3362->methods[0];
    panda$core$Int64 $tmp3365 = $tmp3363(((panda$collections$CollectionView*) cl3360->parameters));
    panda$core$Bit $tmp3366 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3365, ((panda$core$Int64) { 0 }));
    if ($tmp3366.value) {
    {
        panda$collections$Array* $tmp3368 = (panda$collections$Array*) malloc(40);
        $tmp3368->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp3368->refCount.value = 1;
        panda$collections$Array$init($tmp3368);
        subtypes3367 = $tmp3368;
        org$pandalanguage$pandac$Type* $tmp3370 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl3360);
        panda$collections$Array$add$panda$collections$Array$T(subtypes3367, ((panda$core$Object*) $tmp3370));
        panda$core$MutableString* $tmp3372 = (panda$core$MutableString*) malloc(48);
        $tmp3372->$class = (panda$core$Class*) &panda$core$MutableString$class;
        $tmp3372->refCount.value = 1;
        panda$core$MutableString$init$panda$core$String($tmp3372, ((org$pandalanguage$pandac$Symbol*) cl3360)->name);
        name3371 = $tmp3372;
        panda$core$Char8$init$panda$core$UInt8(&$tmp3374, ((panda$core$UInt8) { 60 }));
        panda$core$MutableString$append$panda$core$Char8(name3371, $tmp3374);
        separator3375 = &$s3376;
        {
            ITable* $tmp3378 = ((panda$collections$Iterable*) cl3360->parameters)->$class->itable;
            while ($tmp3378->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3378 = $tmp3378->next;
            }
            $fn3380 $tmp3379 = $tmp3378->methods[0];
            panda$collections$Iterator* $tmp3381 = $tmp3379(((panda$collections$Iterable*) cl3360->parameters));
            p$Iter3377 = $tmp3381;
            $l3382:;
            ITable* $tmp3384 = p$Iter3377->$class->itable;
            while ($tmp3384->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3384 = $tmp3384->next;
            }
            $fn3386 $tmp3385 = $tmp3384->methods[0];
            panda$core$Bit $tmp3387 = $tmp3385(p$Iter3377);
            panda$core$Bit $tmp3388 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3387);
            if (!$tmp3388.value) goto $l3383;
            {
                ITable* $tmp3390 = p$Iter3377->$class->itable;
                while ($tmp3390->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3390 = $tmp3390->next;
                }
                $fn3392 $tmp3391 = $tmp3390->methods[1];
                panda$core$Object* $tmp3393 = $tmp3391(p$Iter3377);
                p3389 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp3393);
                panda$collections$Array* $tmp3395 = (panda$collections$Array*) malloc(40);
                $tmp3395->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp3395->refCount.value = 1;
                panda$collections$Array$init($tmp3395);
                pType3394 = $tmp3395;
                panda$collections$Array$add$panda$collections$Array$T(pType3394, ((panda$core$Object*) p3389->bound));
                panda$core$String* $tmp3398 = panda$core$String$convert$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) cl3360)->name);
                panda$core$String* $tmp3400 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3398, &$s3399);
                panda$core$String* $tmp3401 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3400, ((org$pandalanguage$pandac$Symbol*) p3389)->name);
                panda$core$String* $tmp3403 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3401, &$s3402);
                pName3397 = $tmp3403;
                panda$core$MutableString$append$panda$core$String(name3371, separator3375);
                panda$core$MutableString$append$panda$core$String(name3371, pName3397);
                org$pandalanguage$pandac$Type* $tmp3404 = (org$pandalanguage$pandac$Type*) malloc(96);
                $tmp3404->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
                $tmp3404->refCount.value = 1;
                org$pandalanguage$pandac$Type$init$org$pandalanguage$pandac$ClassDecl$GenericParameter($tmp3404, p3389);
                panda$collections$Array$add$panda$collections$Array$T(subtypes3367, ((panda$core$Object*) $tmp3404));
                separator3375 = &$s3406;
            }
            goto $l3382;
            $l3383:;
        }
        panda$core$Char8$init$panda$core$UInt8(&$tmp3407, ((panda$core$UInt8) { 62 }));
        panda$core$MutableString$append$panda$core$Char8(name3371, $tmp3407);
        org$pandalanguage$pandac$Type* $tmp3408 = (org$pandalanguage$pandac$Type*) malloc(96);
        $tmp3408->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
        $tmp3408->refCount.value = 1;
        panda$core$String* $tmp3410 = panda$core$MutableString$finish$R$panda$core$String(name3371);
        org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp3408, $tmp3410, ((panda$core$Int64) { 21 }), p_s->position, ((panda$collections$ListView*) subtypes3367), ((panda$core$Bit) { true }));
        type3359 = $tmp3408;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp3411 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl3360);
        type3359 = $tmp3411;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3412 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3412->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3412->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3412, ((panda$core$Int64) { 1025 }), p_s->position, type3359);
    return $tmp3412;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileSuper$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$ClassDecl* cl3418;
    panda$core$Bit $tmp3414 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_s->kind, ((panda$core$Int64) { 115 }));
    PANDA_ASSERT($tmp3414.value);
    panda$core$Object* $tmp3415 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
    panda$core$Bit $tmp3416 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp3415)->annotations);
    if ($tmp3416.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_s->position, &$s3417);
        return NULL;
    }
    }
    panda$core$Object* $tmp3419 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
    cl3418 = ((org$pandalanguage$pandac$ClassDecl*) $tmp3419);
    PANDA_ASSERT(cl3418->resolved.value);
    org$pandalanguage$pandac$IRNode* $tmp3420 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3420->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3420->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3420, ((panda$core$Int64) { 1024 }), p_s->position, cl3418->rawSuper);
    return $tmp3420;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_expr, org$pandalanguage$pandac$Type* p_rawType) {
    org$pandalanguage$pandac$IRNode* value3422;
    panda$core$String$Index$nullable index3424;
    org$pandalanguage$pandac$Type* type3431;
    org$pandalanguage$pandac$IRNode* base3433;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp3436;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp3439;
    org$pandalanguage$pandac$Type* type3443;
    org$pandalanguage$pandac$IRNode* $tmp3423 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr);
    value3422 = $tmp3423;
    if (((panda$core$Bit) { value3422 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$String$Index$nullable $tmp3426 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(((org$pandalanguage$pandac$Symbol*) p_rawType)->name, &$s3425);
    index3424 = $tmp3426;
    panda$core$Bit $tmp3428 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_rawType->typeKind, ((panda$core$Int64) { 10 }));
    bool $tmp3427 = $tmp3428.value;
    if (!$tmp3427) goto $l3429;
    $tmp3427 = ((panda$core$Bit) { index3424.nonnull }).value;
    $l3429:;
    panda$core$Bit $tmp3430 = { $tmp3427 };
    if ($tmp3430.value) {
    {
        PANDA_ASSERT(self->reportErrors.value);
        self->reportErrors = ((panda$core$Bit) { false });
        org$pandalanguage$pandac$Type* $tmp3432 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, p_rawType);
        type3431 = $tmp3432;
        self->reportErrors = ((panda$core$Bit) { true });
        if (((panda$core$Bit) { type3431 == NULL }).value) {
        {
            org$pandalanguage$pandac$Type* $tmp3434 = (org$pandalanguage$pandac$Type*) malloc(96);
            $tmp3434->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp3434->refCount.value = 1;
            panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp3436, ((panda$core$String$Index$nullable) { .nonnull = false }), index3424, ((panda$core$Bit) { false }));
            panda$core$String* $tmp3437 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) p_rawType)->name, $tmp3436);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position($tmp3434, $tmp3437, ((panda$core$Int64) { 10 }), p_position);
            org$pandalanguage$pandac$IRNode* $tmp3438 = org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, p_expr, $tmp3434);
            base3433 = $tmp3438;
            if (((panda$core$Bit) { base3433 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$String$Index $tmp3440 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(((org$pandalanguage$pandac$Symbol*) p_rawType)->name, ((panda$core$String$Index) index3424.value));
            panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp3439, ((panda$core$String$Index$nullable) { $tmp3440, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$core$String* $tmp3441 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) p_rawType)->name, $tmp3439);
            org$pandalanguage$pandac$IRNode* $tmp3442 = org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$String$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, base3433, $tmp3441);
            return $tmp3442;
        }
        }
    }
    }
    org$pandalanguage$pandac$Type* $tmp3444 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, p_rawType);
    type3443 = $tmp3444;
    if (((panda$core$Bit) { type3443 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Int64$nullable $tmp3445 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, value3422, type3443);
    if (((panda$core$Bit) { $tmp3445.nonnull }).value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3446 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, value3422, type3443);
        return $tmp3446;
    }
    }
    panda$core$Bit $tmp3447 = org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, value3422, type3443);
    if ($tmp3447.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3448 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, value3422, p_position, ((panda$core$Bit) { true }), type3443);
        return $tmp3448;
    }
    }
    else {
    {
        panda$core$String* $tmp3450 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3449, ((panda$core$Object*) value3422->type));
        panda$core$String* $tmp3452 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3450, &$s3451);
        panda$core$String* $tmp3454 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3453, ((panda$core$Object*) type3443));
        panda$core$String* $tmp3456 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3454, &$s3455);
        panda$core$String* $tmp3457 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3452, $tmp3456);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp3457);
        return NULL;
    }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_c) {
    panda$core$Bit $tmp3458 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_c->kind, ((panda$core$Int64) { 111 }));
    PANDA_ASSERT($tmp3458.value);
    panda$core$Int64 $tmp3459 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_c->children);
    panda$core$Bit $tmp3460 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3459, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp3460.value);
    panda$core$Object* $tmp3461 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_c->children, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp3462 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_c->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Type* $tmp3463 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, ((org$pandalanguage$pandac$ASTNode*) $tmp3462));
    org$pandalanguage$pandac$IRNode* $tmp3464 = org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_c->position, ((org$pandalanguage$pandac$ASTNode*) $tmp3461), $tmp3463);
    return $tmp3464;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileNull$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_n) {
    panda$core$Bit $tmp3465 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_n->kind, ((panda$core$Int64) { 117 }));
    PANDA_ASSERT($tmp3465.value);
    org$pandalanguage$pandac$IRNode* $tmp3466 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3466->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3466->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3468 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3466, ((panda$core$Int64) { 1030 }), p_n->position, $tmp3468);
    return $tmp3466;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_e) {
    org$pandalanguage$pandac$IRNode* result3473;
    switch (p_e->kind.value) {
        case 103:
        {
            org$pandalanguage$pandac$IRNode* $tmp3469 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3469;
        }
        break;
        case 116:
        {
            org$pandalanguage$pandac$IRNode* $tmp3470 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3470->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3470->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3472 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp3470, ((panda$core$Int64) { 1011 }), p_e->position, $tmp3472, ((panda$core$Bit$wrapper*) p_e->payload)->value);
            return $tmp3470;
        }
        break;
        case 107:
        {
            org$pandalanguage$pandac$IRNode* $tmp3474 = org$pandalanguage$pandac$Compiler$compileCall$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            result3473 = $tmp3474;
            bool $tmp3475 = ((panda$core$Bit) { result3473 != NULL }).value;
            if (!$tmp3475) goto $l3476;
            org$pandalanguage$pandac$Type* $tmp3477 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp3478 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(result3473->type, $tmp3477);
            $tmp3475 = $tmp3478.value;
            $l3476:;
            panda$core$Bit $tmp3479 = { $tmp3475 };
            if ($tmp3479.value) {
            {
                panda$core$Bit $tmp3480 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result3473->kind, ((panda$core$Int64) { 1005 }));
                PANDA_ASSERT($tmp3480.value);
                panda$core$String* $tmp3481 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(((org$pandalanguage$pandac$MethodRef*) result3473->payload)->value);
                panda$core$String* $tmp3483 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3481, &$s3482);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, result3473->position, $tmp3483);
                return NULL;
            }
            }
            return result3473;
        }
        break;
        case 108:
        {
            org$pandalanguage$pandac$IRNode* $tmp3484 = org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3484;
        }
        break;
        case 106:
        {
            org$pandalanguage$pandac$IRNode* $tmp3485 = org$pandalanguage$pandac$Compiler$compileIdentifier$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3485;
        }
        break;
        case 102:
        {
            org$pandalanguage$pandac$IRNode* $tmp3486 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3486->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3486->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3488 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(((panda$core$UInt64$wrapper*) p_e->payload)->value);
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp3486, ((panda$core$Int64) { 1004 }), p_e->position, $tmp3488, ((panda$core$UInt64$wrapper*) p_e->payload)->value);
            return $tmp3486;
        }
        break;
        case 157:
        {
            org$pandalanguage$pandac$IRNode* $tmp3489 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3489->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3489->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3491 = org$pandalanguage$pandac$Type$RealLiteral$panda$core$Real64$R$org$pandalanguage$pandac$Type(((panda$core$Real64$wrapper*) p_e->payload)->value);
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Real64($tmp3489, ((panda$core$Int64) { 1045 }), p_e->position, $tmp3491, ((panda$core$Real64$wrapper*) p_e->payload)->value);
            return $tmp3489;
        }
        break;
        case 112:
        {
            org$pandalanguage$pandac$IRNode* $tmp3492 = org$pandalanguage$pandac$Compiler$compilePrefix$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3492;
        }
        break;
        case 104:
        case 105:
        {
            org$pandalanguage$pandac$IRNode* $tmp3493 = org$pandalanguage$pandac$Compiler$compileRange$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3493;
        }
        break;
        case 113:
        {
            org$pandalanguage$pandac$IRNode* $tmp3494 = org$pandalanguage$pandac$Compiler$compileString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3494;
        }
        break;
        case 109:
        case 154:
        case 110:
        {
            org$pandalanguage$pandac$IRNode* $tmp3495 = org$pandalanguage$pandac$Compiler$compileType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3495;
        }
        break;
        case 114:
        {
            org$pandalanguage$pandac$IRNode* $tmp3496 = org$pandalanguage$pandac$Compiler$compileSelf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3496;
        }
        break;
        case 115:
        {
            org$pandalanguage$pandac$IRNode* $tmp3497 = org$pandalanguage$pandac$Compiler$compileSuper$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3497;
        }
        break;
        case 111:
        {
            org$pandalanguage$pandac$IRNode* $tmp3498 = org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3498;
        }
        break;
        case 117:
        {
            org$pandalanguage$pandac$IRNode* $tmp3499 = org$pandalanguage$pandac$Compiler$compileNull$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode(self, p_e);
            return $tmp3499;
        }
        break;
    }
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBlock$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_b) {
    org$pandalanguage$pandac$SymbolTable* symbols3501;
    panda$collections$Array* result3504;
    panda$collections$Iterator* stmt$Iter3507;
    org$pandalanguage$pandac$ASTNode* stmt3519;
    org$pandalanguage$pandac$IRNode* compiled3524;
    panda$core$Bit $tmp3500 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_b->kind, ((panda$core$Int64) { 126 }));
    PANDA_ASSERT($tmp3500.value);
    org$pandalanguage$pandac$SymbolTable* $tmp3502 = (org$pandalanguage$pandac$SymbolTable*) malloc(48);
    $tmp3502->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp3502->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp3502, self->symbolTable);
    symbols3501 = $tmp3502;
    self->symbolTable = symbols3501;
    panda$collections$Array* $tmp3505 = (panda$collections$Array*) malloc(40);
    $tmp3505->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3505->refCount.value = 1;
    panda$collections$Array$init($tmp3505);
    result3504 = $tmp3505;
    if (((panda$core$Bit) { p_b->children != NULL }).value) {
    {
        {
            ITable* $tmp3508 = ((panda$collections$Iterable*) p_b->children)->$class->itable;
            while ($tmp3508->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3508 = $tmp3508->next;
            }
            $fn3510 $tmp3509 = $tmp3508->methods[0];
            panda$collections$Iterator* $tmp3511 = $tmp3509(((panda$collections$Iterable*) p_b->children));
            stmt$Iter3507 = $tmp3511;
            $l3512:;
            ITable* $tmp3514 = stmt$Iter3507->$class->itable;
            while ($tmp3514->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3514 = $tmp3514->next;
            }
            $fn3516 $tmp3515 = $tmp3514->methods[0];
            panda$core$Bit $tmp3517 = $tmp3515(stmt$Iter3507);
            panda$core$Bit $tmp3518 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3517);
            if (!$tmp3518.value) goto $l3513;
            {
                ITable* $tmp3520 = stmt$Iter3507->$class->itable;
                while ($tmp3520->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3520 = $tmp3520->next;
                }
                $fn3522 $tmp3521 = $tmp3520->methods[1];
                panda$core$Object* $tmp3523 = $tmp3521(stmt$Iter3507);
                stmt3519 = ((org$pandalanguage$pandac$ASTNode*) $tmp3523);
                org$pandalanguage$pandac$IRNode* $tmp3525 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, stmt3519);
                compiled3524 = $tmp3525;
                if (((panda$core$Bit) { compiled3524 == NULL }).value) {
                {
                    panda$core$Object* $tmp3526 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(symbols3501->parents, ((panda$core$Int64) { 0 }));
                    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp3526);
                    return NULL;
                }
                }
                panda$core$Bit $tmp3527 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(compiled3524->kind, ((panda$core$Int64) { 1039 }));
                PANDA_ASSERT($tmp3527.value);
                panda$collections$Array$add$panda$collections$Array$T(result3504, ((panda$core$Object*) compiled3524));
            }
            goto $l3512;
            $l3513:;
        }
    }
    }
    panda$core$Object* $tmp3528 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(symbols3501->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp3528);
    org$pandalanguage$pandac$IRNode* $tmp3529 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3529->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3529->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3529, ((panda$core$Int64) { 1000 }), p_b->position, ((panda$collections$ListView*) result3504));
    return $tmp3529;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_i) {
    org$pandalanguage$pandac$IRNode* test3539;
    org$pandalanguage$pandac$IRNode* ifTrue3544;
    panda$collections$Array* children3547;
    org$pandalanguage$pandac$IRNode* ifFalse3552;
    panda$core$Bit $tmp3531 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_i->kind, ((panda$core$Int64) { 118 }));
    PANDA_ASSERT($tmp3531.value);
    panda$core$Int64 $tmp3533 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_i->children);
    panda$core$Bit $tmp3534 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3533, ((panda$core$Int64) { 2 }));
    bool $tmp3532 = $tmp3534.value;
    if ($tmp3532) goto $l3535;
    panda$core$Int64 $tmp3536 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_i->children);
    panda$core$Bit $tmp3537 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3536, ((panda$core$Int64) { 3 }));
    $tmp3532 = $tmp3537.value;
    $l3535:;
    panda$core$Bit $tmp3538 = { $tmp3532 };
    PANDA_ASSERT($tmp3538.value);
    panda$core$Object* $tmp3540 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_i->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3541 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3540));
    org$pandalanguage$pandac$Type* $tmp3542 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp3543 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3541, $tmp3542);
    test3539 = $tmp3543;
    if (((panda$core$Bit) { test3539 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Object* $tmp3545 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_i->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp3546 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3545));
    ifTrue3544 = $tmp3546;
    if (((panda$core$Bit) { ifTrue3544 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3548 = (panda$collections$Array*) malloc(40);
    $tmp3548->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3548->refCount.value = 1;
    panda$collections$Array$init($tmp3548);
    children3547 = $tmp3548;
    panda$collections$Array$add$panda$collections$Array$T(children3547, ((panda$core$Object*) test3539));
    panda$collections$Array$add$panda$collections$Array$T(children3547, ((panda$core$Object*) ifTrue3544));
    panda$core$Int64 $tmp3550 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_i->children);
    panda$core$Bit $tmp3551 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3550, ((panda$core$Int64) { 3 }));
    if ($tmp3551.value) {
    {
        panda$core$Object* $tmp3553 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_i->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$IRNode* $tmp3554 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3553));
        ifFalse3552 = $tmp3554;
        if (((panda$core$Bit) { ifFalse3552 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children3547, ((panda$core$Object*) ifFalse3552));
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3555 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3555->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3555->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3555, ((panda$core$Int64) { 1012 }), p_i->position, ((panda$collections$ListView*) children3547));
    return $tmp3555;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileRangeFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, panda$core$String* p_label, org$pandalanguage$pandac$ASTNode* p_astTarget, org$pandalanguage$pandac$IRNode* p_rawList, org$pandalanguage$pandac$ASTNode* p_body) {
    org$pandalanguage$pandac$Type* elementType3557;
    org$pandalanguage$pandac$IRNode* list3558;
    org$pandalanguage$pandac$Type* t3570;
    org$pandalanguage$pandac$Compiler$CompileTargetResult* target3606;
    org$pandalanguage$pandac$IRNode* body3608;
    panda$collections$Array* children3610;
    panda$core$Bit $tmp3561 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_astTarget->kind, ((panda$core$Int64) { 106 }));
    bool $tmp3560 = $tmp3561.value;
    if (!$tmp3560) goto $l3562;
    $tmp3560 = ((panda$core$Bit) { p_astTarget->children != NULL }).value;
    $l3562:;
    panda$core$Bit $tmp3563 = { $tmp3560 };
    bool $tmp3559 = $tmp3563.value;
    if (!$tmp3559) goto $l3564;
    panda$core$Int64 $tmp3565 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_astTarget->children);
    panda$core$Bit $tmp3566 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3565, ((panda$core$Int64) { 0 }));
    $tmp3559 = $tmp3566.value;
    $l3564:;
    panda$core$Bit $tmp3567 = { $tmp3559 };
    if ($tmp3567.value) {
    {
        panda$core$Int64 $tmp3568 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_astTarget->children);
        panda$core$Bit $tmp3569 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3568, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp3569.value);
        panda$core$Object* $tmp3571 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_astTarget->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Type* $tmp3572 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, ((org$pandalanguage$pandac$ASTNode*) $tmp3571));
        org$pandalanguage$pandac$Type* $tmp3573 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, $tmp3572);
        t3570 = $tmp3573;
        panda$core$Bit $tmp3574 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_rawList->kind, ((panda$core$Int64) { 1031 }));
        if ($tmp3574.value) {
        {
            panda$core$Int64 $tmp3575 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_rawList->children);
            panda$core$Bit $tmp3576 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3575, ((panda$core$Int64) { 2 }));
            if ($tmp3576.value) {
            {
                org$pandalanguage$pandac$Type* $tmp3577 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3570);
                org$pandalanguage$pandac$IRNode* $tmp3578 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, $tmp3577);
                list3558 = $tmp3578;
            }
            }
            else {
            {
                panda$core$Int64 $tmp3579 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_rawList->children);
                panda$core$Bit $tmp3580 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3579, ((panda$core$Int64) { 3 }));
                PANDA_ASSERT($tmp3580.value);
                org$pandalanguage$pandac$Type* $tmp3581 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3570);
                org$pandalanguage$pandac$IRNode* $tmp3582 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, $tmp3581);
                list3558 = $tmp3582;
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp3583 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(p_rawList->type);
        if ($tmp3583.value) {
        {
            org$pandalanguage$pandac$Type* $tmp3584 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3570);
            org$pandalanguage$pandac$IRNode* $tmp3585 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, $tmp3584);
            list3558 = $tmp3585;
        }
        }
        else {
        org$pandalanguage$pandac$Type* $tmp3586 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3570);
        panda$core$Int64$nullable $tmp3587 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_rawList, $tmp3586);
        if (((panda$core$Bit) { $tmp3587.nonnull }).value) {
        {
            org$pandalanguage$pandac$Type* $tmp3588 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3570);
            org$pandalanguage$pandac$IRNode* $tmp3589 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, $tmp3588);
            list3558 = $tmp3589;
        }
        }
        else {
        {
            org$pandalanguage$pandac$Type* $tmp3590 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3570);
            org$pandalanguage$pandac$IRNode* $tmp3591 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, $tmp3590);
            list3558 = $tmp3591;
        }
        }
        }
        }
    }
    }
    else {
    {
        org$pandalanguage$pandac$IRNode* $tmp3592 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList);
        list3558 = $tmp3592;
    }
    }
    if (((panda$core$Bit) { list3558 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp3593 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(list3558->type->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp3593.value) {
    {
        panda$core$Object* $tmp3594 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(list3558->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp3595 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3594)->typeKind, ((panda$core$Int64) { 21 }));
        PANDA_ASSERT($tmp3595.value);
        panda$core$Object* $tmp3596 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(list3558->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3597 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$Type*) $tmp3596)->subtypes, ((panda$core$Int64) { 1 }));
        elementType3557 = ((org$pandalanguage$pandac$Type*) $tmp3597);
    }
    }
    else {
    {
        panda$core$Bit $tmp3598 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(list3558->type->typeKind, ((panda$core$Int64) { 21 }));
        PANDA_ASSERT($tmp3598.value);
        panda$core$Object* $tmp3599 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(list3558->type->subtypes, ((panda$core$Int64) { 1 }));
        elementType3557 = ((org$pandalanguage$pandac$Type*) $tmp3599);
    }
    }
    panda$core$Bit $tmp3600 = org$pandalanguage$pandac$Type$isNumeric$R$panda$core$Bit(elementType3557);
    panda$core$Bit $tmp3601 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3600);
    if ($tmp3601.value) {
    {
        panda$core$String* $tmp3603 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3602, ((panda$core$Object*) list3558->type));
        panda$core$String* $tmp3605 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3603, &$s3604);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, list3558->position, $tmp3605);
    }
    }
    org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp3607 = org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(self, p_astTarget, ((panda$core$Int64) { 10001 }), NULL, elementType3557);
    target3606 = $tmp3607;
    if (((panda$core$Bit) { target3606 == NULL }).value) {
    {
        return NULL;
    }
    }
    PANDA_ASSERT(((panda$core$Bit) { target3606->value == NULL }).value);
    org$pandalanguage$pandac$IRNode* $tmp3609 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_body);
    body3608 = $tmp3609;
    if (((panda$core$Bit) { body3608 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3611 = (panda$collections$Array*) malloc(40);
    $tmp3611->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3611->refCount.value = 1;
    panda$collections$Array$init($tmp3611);
    children3610 = $tmp3611;
    panda$collections$Array$add$panda$collections$Array$T(children3610, ((panda$core$Object*) target3606->target));
    panda$collections$Array$add$panda$collections$Array$T(children3610, ((panda$core$Object*) list3558));
    panda$collections$Array$add$panda$collections$Array$T(children3610, ((panda$core$Object*) body3608));
    org$pandalanguage$pandac$IRNode* $tmp3613 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3613->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3613->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3613, ((panda$core$Int64) { 1029 }), p_position, ((panda$core$Object*) p_label), ((panda$collections$ListView*) children3610));
    return $tmp3613;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIteratorFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, panda$core$String* p_label, org$pandalanguage$pandac$ASTNode* p_astTarget, org$pandalanguage$pandac$IRNode* p_iterator, org$pandalanguage$pandac$ASTNode* p_body) {
    org$pandalanguage$pandac$Compiler$CompileTargetResult* target3622;
    org$pandalanguage$pandac$Variable* targetVar3626;
    panda$collections$Array* subtypes3627;
    org$pandalanguage$pandac$Type* iterType3631;
    org$pandalanguage$pandac$Variable* iter3642;
    panda$collections$Array* statements3647;
    panda$collections$Array* declChildren3650;
    panda$collections$Array* varChildren3655;
    panda$collections$Array* whileChildren3662;
    org$pandalanguage$pandac$IRNode* done3665;
    org$pandalanguage$pandac$IRNode* notCall3672;
    panda$collections$Array* valueDeclChildren3677;
    org$pandalanguage$pandac$IRNode* next3682;
    panda$collections$Array* valueVarChildren3689;
    org$pandalanguage$pandac$IRNode* block3694;
    panda$collections$Array* blockChildren3696;
    panda$core$Bit $tmp3616 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_iterator->type->typeKind, ((panda$core$Int64) { 21 }));
    bool $tmp3615 = $tmp3616.value;
    if (!$tmp3615) goto $l3617;
    panda$core$Object* $tmp3618 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_iterator->type->subtypes, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp3619 = org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp3620 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3618), $tmp3619);
    $tmp3615 = $tmp3620.value;
    $l3617:;
    panda$core$Bit $tmp3621 = { $tmp3615 };
    PANDA_ASSERT($tmp3621.value);
    panda$core$Object* $tmp3623 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_iterator->type->subtypes, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp3624 = org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(self, p_astTarget, ((panda$core$Int64) { 10001 }), NULL, ((org$pandalanguage$pandac$Type*) $tmp3623));
    target3622 = $tmp3624;
    if (((panda$core$Bit) { target3622 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp3625 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(target3622->target->kind, ((panda$core$Int64) { 1016 }));
    PANDA_ASSERT($tmp3625.value);
    targetVar3626 = ((org$pandalanguage$pandac$Variable*) target3622->target->payload);
    panda$collections$Array* $tmp3628 = (panda$collections$Array*) malloc(40);
    $tmp3628->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3628->refCount.value = 1;
    panda$collections$Array$init($tmp3628);
    subtypes3627 = $tmp3628;
    org$pandalanguage$pandac$Type* $tmp3630 = org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type();
    panda$collections$Array$add$panda$collections$Array$T(subtypes3627, ((panda$core$Object*) $tmp3630));
    panda$collections$Array$add$panda$collections$Array$T(subtypes3627, ((panda$core$Object*) target3622->target->type));
    org$pandalanguage$pandac$Type* $tmp3632 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp3632->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp3632->refCount.value = 1;
    panda$core$Object* $tmp3634 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(subtypes3627, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3635 = org$pandalanguage$pandac$Type$convert$R$panda$core$String(((org$pandalanguage$pandac$Type*) $tmp3634));
    panda$core$String* $tmp3637 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3635, &$s3636);
    panda$core$Object* $tmp3638 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(subtypes3627, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp3639 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3637, ((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp3638)));
    panda$core$String* $tmp3641 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3639, &$s3640);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp3632, $tmp3641, ((panda$core$Int64) { 21 }), p_position, ((panda$collections$ListView*) subtypes3627), ((panda$core$Bit) { true }));
    iterType3631 = $tmp3632;
    org$pandalanguage$pandac$Variable* $tmp3643 = (org$pandalanguage$pandac$Variable*) malloc(88);
    $tmp3643->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
    $tmp3643->refCount.value = 1;
    panda$core$String* $tmp3646 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) targetVar3626)->name, &$s3645);
    org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type($tmp3643, p_iterator->position, ((panda$core$Int64) { 10001 }), $tmp3646, iterType3631);
    iter3642 = $tmp3643;
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->symbolTable, ((org$pandalanguage$pandac$Symbol*) iter3642));
    panda$collections$Array* $tmp3648 = (panda$collections$Array*) malloc(40);
    $tmp3648->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3648->refCount.value = 1;
    panda$collections$Array$init($tmp3648);
    statements3647 = $tmp3648;
    panda$collections$Array* $tmp3651 = (panda$collections$Array*) malloc(40);
    $tmp3651->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3651->refCount.value = 1;
    panda$collections$Array$init($tmp3651);
    declChildren3650 = $tmp3651;
    org$pandalanguage$pandac$IRNode* $tmp3653 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3653->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3653->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3653, ((panda$core$Int64) { 1016 }), p_iterator->position, iter3642->type, iter3642);
    panda$collections$Array$add$panda$collections$Array$T(declChildren3650, ((panda$core$Object*) $tmp3653));
    panda$collections$Array$add$panda$collections$Array$T(declChildren3650, ((panda$core$Object*) p_iterator));
    panda$collections$Array* $tmp3656 = (panda$collections$Array*) malloc(40);
    $tmp3656->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3656->refCount.value = 1;
    panda$collections$Array$init($tmp3656);
    varChildren3655 = $tmp3656;
    org$pandalanguage$pandac$IRNode* $tmp3658 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3658->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3658->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3658, ((panda$core$Int64) { 1021 }), ((org$pandalanguage$pandac$Symbol*) iter3642)->position, ((panda$collections$ListView*) declChildren3650));
    panda$collections$Array$add$panda$collections$Array$T(varChildren3655, ((panda$core$Object*) $tmp3658));
    org$pandalanguage$pandac$IRNode* $tmp3660 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3660->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3660->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3660, ((panda$core$Int64) { 1018 }), ((org$pandalanguage$pandac$Symbol*) iter3642)->position, ((panda$collections$ListView*) varChildren3655));
    panda$collections$Array$add$panda$collections$Array$T(statements3647, ((panda$core$Object*) $tmp3660));
    panda$collections$Array* $tmp3663 = (panda$collections$Array*) malloc(40);
    $tmp3663->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3663->refCount.value = 1;
    panda$collections$Array$init($tmp3663);
    whileChildren3662 = $tmp3663;
    org$pandalanguage$pandac$IRNode* $tmp3666 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3666->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3666->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3666, ((panda$core$Int64) { 1016 }), ((org$pandalanguage$pandac$Symbol*) iter3642)->position, iter3642->type, iter3642);
    panda$collections$Array* $tmp3669 = (panda$collections$Array*) malloc(40);
    $tmp3669->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3669->refCount.value = 1;
    panda$collections$Array$init($tmp3669);
    org$pandalanguage$pandac$IRNode* $tmp3671 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3666, &$s3668, ((panda$collections$ListView*) $tmp3669), NULL);
    done3665 = $tmp3671;
    if (((panda$core$Bit) { done3665 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3674 = (panda$collections$Array*) malloc(40);
    $tmp3674->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3674->refCount.value = 1;
    panda$collections$Array$init($tmp3674);
    org$pandalanguage$pandac$IRNode* $tmp3676 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, done3665, &$s3673, ((panda$collections$ListView*) $tmp3674), NULL);
    notCall3672 = $tmp3676;
    if (((panda$core$Bit) { notCall3672 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(whileChildren3662, ((panda$core$Object*) notCall3672));
    panda$collections$Array* $tmp3678 = (panda$collections$Array*) malloc(40);
    $tmp3678->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3678->refCount.value = 1;
    panda$collections$Array$init($tmp3678);
    valueDeclChildren3677 = $tmp3678;
    org$pandalanguage$pandac$IRNode* $tmp3680 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3680->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3680->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3680, ((panda$core$Int64) { 1016 }), p_iterator->position, targetVar3626->type, targetVar3626);
    panda$collections$Array$add$panda$collections$Array$T(valueDeclChildren3677, ((panda$core$Object*) $tmp3680));
    org$pandalanguage$pandac$IRNode* $tmp3683 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3683->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3683->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3683, ((panda$core$Int64) { 1016 }), p_iterator->position, iter3642->type, iter3642);
    panda$collections$Array* $tmp3686 = (panda$collections$Array*) malloc(40);
    $tmp3686->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3686->refCount.value = 1;
    panda$collections$Array$init($tmp3686);
    org$pandalanguage$pandac$IRNode* $tmp3688 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3683, &$s3685, ((panda$collections$ListView*) $tmp3686), NULL);
    next3682 = $tmp3688;
    PANDA_ASSERT(((panda$core$Bit) { next3682 != NULL }).value);
    panda$collections$Array$add$panda$collections$Array$T(valueDeclChildren3677, ((panda$core$Object*) next3682));
    panda$collections$Array* $tmp3690 = (panda$collections$Array*) malloc(40);
    $tmp3690->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3690->refCount.value = 1;
    panda$collections$Array$init($tmp3690);
    valueVarChildren3689 = $tmp3690;
    org$pandalanguage$pandac$IRNode* $tmp3692 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3692->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3692->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3692, ((panda$core$Int64) { 1021 }), p_iterator->position, ((panda$collections$ListView*) valueDeclChildren3677));
    panda$collections$Array$add$panda$collections$Array$T(valueVarChildren3689, ((panda$core$Object*) $tmp3692));
    org$pandalanguage$pandac$IRNode* $tmp3695 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_body);
    block3694 = $tmp3695;
    if (((panda$core$Bit) { block3694 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3697 = (panda$collections$Array*) malloc(40);
    $tmp3697->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3697->refCount.value = 1;
    panda$collections$Array$init($tmp3697);
    blockChildren3696 = $tmp3697;
    org$pandalanguage$pandac$IRNode* $tmp3699 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3699->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3699->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3699, ((panda$core$Int64) { 1018 }), p_iterator->position, ((panda$collections$ListView*) valueVarChildren3689));
    panda$collections$Array$add$panda$collections$Array$T(blockChildren3696, ((panda$core$Object*) $tmp3699));
    panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(blockChildren3696, ((panda$collections$CollectionView*) block3694->children));
    org$pandalanguage$pandac$IRNode* $tmp3701 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3701->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3701->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3701, ((panda$core$Int64) { 1000 }), block3694->position, ((panda$collections$ListView*) blockChildren3696));
    block3694 = $tmp3701;
    panda$collections$Array$add$panda$collections$Array$T(whileChildren3662, ((panda$core$Object*) block3694));
    org$pandalanguage$pandac$IRNode* $tmp3703 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3703->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3703->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3703, ((panda$core$Int64) { 1013 }), p_iterator->position, ((panda$core$Object*) p_label), ((panda$collections$ListView*) whileChildren3662));
    panda$collections$Array$add$panda$collections$Array$T(statements3647, ((panda$core$Object*) $tmp3703));
    org$pandalanguage$pandac$IRNode* $tmp3705 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3705->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3705->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3705, ((panda$core$Int64) { 1000 }), p_iterator->position, ((panda$collections$ListView*) statements3647));
    return $tmp3705;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileFor$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_f) {
    org$pandalanguage$pandac$IRNode* list3710;
    org$pandalanguage$pandac$SymbolTable* symbols3713;
    org$pandalanguage$pandac$IRNode* result3716;
    panda$core$Bit found3730;
    panda$collections$Iterator* intf$Iter3731;
    org$pandalanguage$pandac$Type* intf3744;
    org$pandalanguage$pandac$IRNode* iterator3756;
    org$pandalanguage$pandac$IRNode* iterable3768;
    org$pandalanguage$pandac$IRNode* iterator3770;
    panda$core$Bit $tmp3707 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_f->kind, ((panda$core$Int64) { 119 }));
    PANDA_ASSERT($tmp3707.value);
    panda$core$Int64 $tmp3708 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_f->children);
    panda$core$Bit $tmp3709 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3708, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp3709.value);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loops, ((panda$core$Object*) ((panda$core$String*) p_f->payload)));
    panda$core$Object* $tmp3711 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp3712 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3711));
    list3710 = $tmp3712;
    if (((panda$core$Bit) { list3710 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp3714 = (org$pandalanguage$pandac$SymbolTable*) malloc(48);
    $tmp3714->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp3714->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp3714, self->symbolTable);
    symbols3713 = $tmp3714;
    self->symbolTable = symbols3713;
    panda$core$Bit $tmp3719 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(list3710->kind, ((panda$core$Int64) { 1031 }));
    bool $tmp3718 = $tmp3719.value;
    if ($tmp3718) goto $l3720;
    panda$core$Bit $tmp3721 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(list3710->type);
    $tmp3718 = $tmp3721.value;
    $l3720:;
    panda$core$Bit $tmp3722 = { $tmp3718 };
    bool $tmp3717 = $tmp3722.value;
    if ($tmp3717) goto $l3723;
    panda$core$Bit $tmp3724 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(list3710->type);
    $tmp3717 = $tmp3724.value;
    $l3723:;
    panda$core$Bit $tmp3725 = { $tmp3717 };
    if ($tmp3725.value) {
    {
        panda$core$Object* $tmp3726 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3727 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$IRNode* $tmp3728 = org$pandalanguage$pandac$Compiler$compileRangeFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->position, ((panda$core$String*) p_f->payload), ((org$pandalanguage$pandac$ASTNode*) $tmp3726), list3710, ((org$pandalanguage$pandac$ASTNode*) $tmp3727));
        result3716 = $tmp3728;
    }
    }
    else {
    {
        org$pandalanguage$pandac$IRNode* $tmp3729 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, list3710);
        list3710 = $tmp3729;
        if (((panda$core$Bit) { list3710 == NULL }).value) {
        {
            return NULL;
        }
        }
        found3730 = ((panda$core$Bit) { false });
        {
            panda$collections$Set* $tmp3732 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self, list3710->type);
            ITable* $tmp3733 = ((panda$collections$Iterable*) $tmp3732)->$class->itable;
            while ($tmp3733->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3733 = $tmp3733->next;
            }
            $fn3735 $tmp3734 = $tmp3733->methods[0];
            panda$collections$Iterator* $tmp3736 = $tmp3734(((panda$collections$Iterable*) $tmp3732));
            intf$Iter3731 = $tmp3736;
            $l3737:;
            ITable* $tmp3739 = intf$Iter3731->$class->itable;
            while ($tmp3739->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3739 = $tmp3739->next;
            }
            $fn3741 $tmp3740 = $tmp3739->methods[0];
            panda$core$Bit $tmp3742 = $tmp3740(intf$Iter3731);
            panda$core$Bit $tmp3743 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3742);
            if (!$tmp3743.value) goto $l3738;
            {
                ITable* $tmp3745 = intf$Iter3731->$class->itable;
                while ($tmp3745->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3745 = $tmp3745->next;
                }
                $fn3747 $tmp3746 = $tmp3745->methods[1];
                panda$core$Object* $tmp3748 = $tmp3746(intf$Iter3731);
                intf3744 = ((org$pandalanguage$pandac$Type*) $tmp3748);
                panda$core$Bit $tmp3750 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(intf3744->typeKind, ((panda$core$Int64) { 21 }));
                bool $tmp3749 = $tmp3750.value;
                if (!$tmp3749) goto $l3751;
                panda$core$Object* $tmp3752 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(intf3744->subtypes, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp3753 = org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp3754 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3752), $tmp3753);
                $tmp3749 = $tmp3754.value;
                $l3751:;
                panda$core$Bit $tmp3755 = { $tmp3749 };
                if ($tmp3755.value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp3757 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, list3710, intf3744);
                    iterator3756 = $tmp3757;
                    panda$core$Object* $tmp3758 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
                    panda$core$Object* $tmp3759 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 2 }));
                    org$pandalanguage$pandac$IRNode* $tmp3760 = org$pandalanguage$pandac$Compiler$compileIteratorFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->position, ((panda$core$String*) p_f->payload), ((org$pandalanguage$pandac$ASTNode*) $tmp3758), iterator3756, ((org$pandalanguage$pandac$ASTNode*) $tmp3759));
                    result3716 = $tmp3760;
                    found3730 = ((panda$core$Bit) { true });
                    goto $l3738;
                }
                }
                panda$core$Bit $tmp3762 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(intf3744->typeKind, ((panda$core$Int64) { 21 }));
                bool $tmp3761 = $tmp3762.value;
                if (!$tmp3761) goto $l3763;
                panda$core$Object* $tmp3764 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(intf3744->subtypes, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp3765 = org$pandalanguage$pandac$Type$Iterable$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp3766 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3764), $tmp3765);
                $tmp3761 = $tmp3766.value;
                $l3763:;
                panda$core$Bit $tmp3767 = { $tmp3761 };
                if ($tmp3767.value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp3769 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, list3710, intf3744);
                    iterable3768 = $tmp3769;
                    panda$collections$Array* $tmp3772 = (panda$collections$Array*) malloc(40);
                    $tmp3772->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp3772->refCount.value = 1;
                    panda$collections$Array$init($tmp3772);
                    org$pandalanguage$pandac$IRNode* $tmp3774 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, iterable3768, &$s3771, ((panda$collections$ListView*) $tmp3772));
                    iterator3770 = $tmp3774;
                    panda$core$Object* $tmp3775 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
                    panda$core$Object* $tmp3776 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 2 }));
                    org$pandalanguage$pandac$IRNode* $tmp3777 = org$pandalanguage$pandac$Compiler$compileIteratorFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->position, ((panda$core$String*) p_f->payload), ((org$pandalanguage$pandac$ASTNode*) $tmp3775), iterator3770, ((org$pandalanguage$pandac$ASTNode*) $tmp3776));
                    result3716 = $tmp3777;
                    found3730 = ((panda$core$Bit) { true });
                    goto $l3738;
                }
                }
            }
            goto $l3737;
            $l3738:;
        }
        panda$core$Bit $tmp3778 = panda$core$Bit$$NOT$R$panda$core$Bit(found3730);
        if ($tmp3778.value) {
        {
            panda$core$String* $tmp3780 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3779, ((panda$core$Object*) list3710->type));
            panda$core$String* $tmp3782 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3780, &$s3781);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, list3710->position, $tmp3782);
            return NULL;
        }
        }
    }
    }
    panda$core$Object* $tmp3783 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(symbols3713->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp3783);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
    return result3716;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileWhile$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_w) {
    org$pandalanguage$pandac$IRNode* test3787;
    org$pandalanguage$pandac$IRNode* stmt3792;
    panda$collections$Array* children3795;
    panda$core$Bit $tmp3784 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_w->kind, ((panda$core$Int64) { 121 }));
    PANDA_ASSERT($tmp3784.value);
    panda$core$Int64 $tmp3785 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Bit $tmp3786 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3785, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp3786.value);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loops, ((panda$core$Object*) ((panda$core$String*) p_w->payload)));
    panda$core$Object* $tmp3788 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3789 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3788));
    org$pandalanguage$pandac$Type* $tmp3790 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp3791 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3789, $tmp3790);
    test3787 = $tmp3791;
    if (((panda$core$Bit) { test3787 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$core$Object* $tmp3793 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp3794 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3793));
    stmt3792 = $tmp3794;
    if (((panda$core$Bit) { stmt3792 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$collections$Array* $tmp3796 = (panda$collections$Array*) malloc(40);
    $tmp3796->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3796->refCount.value = 1;
    panda$collections$Array$init$panda$core$Int64($tmp3796, ((panda$core$Int64) { 2 }));
    children3795 = $tmp3796;
    panda$collections$Array$add$panda$collections$Array$T(children3795, ((panda$core$Object*) test3787));
    panda$collections$Array$add$panda$collections$Array$T(children3795, ((panda$core$Object*) stmt3792));
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
    org$pandalanguage$pandac$IRNode* $tmp3798 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3798->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3798->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3798, ((panda$core$Int64) { 1013 }), p_w->position, p_w->payload, ((panda$collections$ListView*) children3795));
    return $tmp3798;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileDo$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_d) {
    org$pandalanguage$pandac$IRNode* stmt3803;
    org$pandalanguage$pandac$IRNode* test3806;
    panda$collections$Array* children3811;
    panda$core$Bit $tmp3800 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_d->kind, ((panda$core$Int64) { 120 }));
    PANDA_ASSERT($tmp3800.value);
    panda$core$Int64 $tmp3801 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp3802 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3801, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp3802.value);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loops, ((panda$core$Object*) ((panda$core$String*) p_d->payload)));
    panda$core$Object* $tmp3804 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3805 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3804));
    stmt3803 = $tmp3805;
    if (((panda$core$Bit) { stmt3803 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$core$Object* $tmp3807 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp3808 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3807));
    org$pandalanguage$pandac$Type* $tmp3809 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp3810 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3808, $tmp3809);
    test3806 = $tmp3810;
    if (((panda$core$Bit) { test3806 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$collections$Array* $tmp3812 = (panda$collections$Array*) malloc(40);
    $tmp3812->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3812->refCount.value = 1;
    panda$collections$Array$init$panda$core$Int64($tmp3812, ((panda$core$Int64) { 2 }));
    children3811 = $tmp3812;
    panda$collections$Array$add$panda$collections$Array$T(children3811, ((panda$core$Object*) stmt3803));
    panda$collections$Array$add$panda$collections$Array$T(children3811, ((panda$core$Object*) test3806));
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
    org$pandalanguage$pandac$IRNode* $tmp3814 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3814->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3814->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3814, ((panda$core$Int64) { 1014 }), p_d->position, p_d->payload, ((panda$collections$ListView*) children3811));
    return $tmp3814;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileLoop$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_l) {
    org$pandalanguage$pandac$IRNode* stmt3819;
    panda$collections$Array* children3822;
    panda$core$Bit $tmp3816 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_l->kind, ((panda$core$Int64) { 122 }));
    PANDA_ASSERT($tmp3816.value);
    panda$core$Int64 $tmp3817 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_l->children);
    panda$core$Bit $tmp3818 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3817, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3818.value);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loops, ((panda$core$Object*) ((panda$core$String*) p_l->payload)));
    panda$core$Object* $tmp3820 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_l->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3821 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3820));
    stmt3819 = $tmp3821;
    if (((panda$core$Bit) { stmt3819 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$collections$Array* $tmp3823 = (panda$collections$Array*) malloc(40);
    $tmp3823->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3823->refCount.value = 1;
    panda$collections$Array$init$panda$core$Int64($tmp3823, ((panda$core$Int64) { 1 }));
    children3822 = $tmp3823;
    panda$collections$Array$add$panda$collections$Array$T(children3822, ((panda$core$Object*) stmt3819));
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
    org$pandalanguage$pandac$IRNode* $tmp3825 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3825->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3825->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3825, ((panda$core$Int64) { 1015 }), p_l->position, p_l->payload, ((panda$collections$ListView*) children3822));
    return $tmp3825;
}
org$pandalanguage$pandac$Compiler$CompileTargetResult* org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_t, panda$core$Int64 p_kind, org$pandalanguage$pandac$IRNode* p_rawValue, org$pandalanguage$pandac$Type* p_valueType) {
    org$pandalanguage$pandac$IRNode* value3827;
    org$pandalanguage$pandac$Type* type3831;
    org$pandalanguage$pandac$Variable* v3847;
    value3827 = p_rawValue;
    bool $tmp3828 = ((panda$core$Bit) { value3827 == NULL }).value;
    if ($tmp3828) goto $l3829;
    $tmp3828 = ((panda$core$Bit) { p_valueType == NULL }).value;
    $l3829:;
    panda$core$Bit $tmp3830 = { $tmp3828 };
    PANDA_ASSERT($tmp3830.value);
    switch (p_t->kind.value) {
        case 106:
        {
            bool $tmp3832 = ((panda$core$Bit) { p_t->children != NULL }).value;
            if (!$tmp3832) goto $l3833;
            panda$core$Int64 $tmp3834 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_t->children);
            panda$core$Bit $tmp3835 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp3834, ((panda$core$Int64) { 0 }));
            $tmp3832 = $tmp3835.value;
            $l3833:;
            panda$core$Bit $tmp3836 = { $tmp3832 };
            if ($tmp3836.value) {
            {
                panda$core$Int64 $tmp3837 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_t->children);
                panda$core$Bit $tmp3838 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3837, ((panda$core$Int64) { 1 }));
                PANDA_ASSERT($tmp3838.value);
                panda$core$Object* $tmp3839 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp3840 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, ((org$pandalanguage$pandac$ASTNode*) $tmp3839));
                org$pandalanguage$pandac$Type* $tmp3841 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, $tmp3840);
                type3831 = $tmp3841;
            }
            }
            else {
            if (((panda$core$Bit) { value3827 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp3842 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, value3827);
                value3827 = $tmp3842;
                if (((panda$core$Bit) { value3827 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$Type* $tmp3843 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, value3827);
                type3831 = $tmp3843;
            }
            }
            else {
            if (((panda$core$Bit) { p_valueType != NULL }).value) {
            {
                type3831 = p_valueType;
            }
            }
            else {
            {
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_t->position, &$s3844);
                return NULL;
            }
            }
            }
            }
            if (((panda$core$Bit) { value3827 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp3845 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, value3827, type3831);
                value3827 = $tmp3845;
                if (((panda$core$Bit) { value3827 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$core$Bit $tmp3846 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(value3827->type, type3831);
                PANDA_ASSERT($tmp3846.value);
            }
            }
            org$pandalanguage$pandac$Variable* $tmp3848 = (org$pandalanguage$pandac$Variable*) malloc(88);
            $tmp3848->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
            $tmp3848->refCount.value = 1;
            org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type($tmp3848, p_t->position, p_kind, ((panda$core$String*) p_t->payload), type3831);
            v3847 = $tmp3848;
            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->symbolTable, ((org$pandalanguage$pandac$Symbol*) v3847));
            org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp3850 = (org$pandalanguage$pandac$Compiler$CompileTargetResult*) malloc(32);
            $tmp3850->$class = (panda$core$Class*) &org$pandalanguage$pandac$Compiler$CompileTargetResult$class;
            $tmp3850->refCount.value = 1;
            org$pandalanguage$pandac$IRNode* $tmp3852 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3852->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3852->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3852, ((panda$core$Int64) { 1016 }), ((org$pandalanguage$pandac$Symbol*) v3847)->position, v3847->type, v3847);
            org$pandalanguage$pandac$Compiler$CompileTargetResult$init$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q($tmp3850, $tmp3852, value3827);
            return $tmp3850;
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
    org$pandalanguage$pandac$IRNode* value3862;
    org$pandalanguage$pandac$Compiler$CompileTargetResult* target3867;
    panda$collections$Array* children3870;
    org$pandalanguage$pandac$Variable* v3874;
    panda$core$Bit $tmp3854 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_d->kind, ((panda$core$Int64) { 129 }));
    PANDA_ASSERT($tmp3854.value);
    panda$core$Int64 $tmp3856 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp3857 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3856, ((panda$core$Int64) { 1 }));
    bool $tmp3855 = $tmp3857.value;
    if ($tmp3855) goto $l3858;
    panda$core$Int64 $tmp3859 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp3860 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3859, ((panda$core$Int64) { 2 }));
    $tmp3855 = $tmp3860.value;
    $l3858:;
    panda$core$Bit $tmp3861 = { $tmp3855 };
    PANDA_ASSERT($tmp3861.value);
    panda$core$Int64 $tmp3863 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp3864 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3863, ((panda$core$Int64) { 2 }));
    if ($tmp3864.value) {
    {
        panda$core$Object* $tmp3865 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$IRNode* $tmp3866 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3865));
        value3862 = $tmp3866;
        if (((panda$core$Bit) { value3862 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    else {
    {
        value3862 = NULL;
    }
    }
    panda$core$Object* $tmp3868 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp3869 = org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3868), p_varKind, value3862, NULL);
    target3867 = $tmp3869;
    if (((panda$core$Bit) { target3867 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3871 = (panda$collections$Array*) malloc(40);
    $tmp3871->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3871->refCount.value = 1;
    panda$collections$Array$init($tmp3871);
    children3870 = $tmp3871;
    panda$collections$Array$add$panda$collections$Array$T(children3870, ((panda$core$Object*) target3867->target));
    if (((panda$core$Bit) { target3867->value != NULL }).value) {
    {
        panda$core$Bit $tmp3873 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(target3867->target->kind, ((panda$core$Int64) { 1016 }));
        PANDA_ASSERT($tmp3873.value);
        v3874 = ((org$pandalanguage$pandac$Variable*) target3867->target->payload);
        v3874->initialValue = target3867->value;
        panda$collections$Array$add$panda$collections$Array$T(children3870, ((panda$core$Object*) target3867->value));
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3875 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3875->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3875->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3875, ((panda$core$Int64) { 1021 }), p_d->position, ((panda$collections$ListView*) children3870));
    return $tmp3875;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBreak$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_b) {
    panda$core$Bit found3878;
    panda$collections$Iterator* label$Iter3879;
    panda$core$String* label3891;
    panda$core$Bit $tmp3877 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_b->kind, ((panda$core$Int64) { 134 }));
    PANDA_ASSERT($tmp3877.value);
    if (((panda$core$Bit) { p_b->payload != NULL }).value) {
    {
        found3878 = ((panda$core$Bit) { false });
        {
            ITable* $tmp3880 = ((panda$collections$Iterable*) self->loops)->$class->itable;
            while ($tmp3880->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3880 = $tmp3880->next;
            }
            $fn3882 $tmp3881 = $tmp3880->methods[0];
            panda$collections$Iterator* $tmp3883 = $tmp3881(((panda$collections$Iterable*) self->loops));
            label$Iter3879 = $tmp3883;
            $l3884:;
            ITable* $tmp3886 = label$Iter3879->$class->itable;
            while ($tmp3886->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3886 = $tmp3886->next;
            }
            $fn3888 $tmp3887 = $tmp3886->methods[0];
            panda$core$Bit $tmp3889 = $tmp3887(label$Iter3879);
            panda$core$Bit $tmp3890 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3889);
            if (!$tmp3890.value) goto $l3885;
            {
                ITable* $tmp3892 = label$Iter3879->$class->itable;
                while ($tmp3892->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3892 = $tmp3892->next;
                }
                $fn3894 $tmp3893 = $tmp3892->methods[1];
                panda$core$Object* $tmp3895 = $tmp3893(label$Iter3879);
                label3891 = ((panda$core$String*) $tmp3895);
                bool $tmp3896 = ((panda$core$Bit) { label3891 != NULL }).value;
                if (!$tmp3896) goto $l3897;
                panda$core$Bit $tmp3901;
                if (((panda$core$Bit) { label3891 != NULL }).value) goto $l3898; else goto $l3899;
                $l3898:;
                panda$core$Bit $tmp3902 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(label3891, ((panda$core$String*) p_b->payload));
                $tmp3901 = $tmp3902;
                goto $l3900;
                $l3899:;
                $tmp3901 = ((panda$core$Bit) { false });
                goto $l3900;
                $l3900:;
                $tmp3896 = $tmp3901.value;
                $l3897:;
                panda$core$Bit $tmp3903 = { $tmp3896 };
                if ($tmp3903.value) {
                {
                    found3878 = ((panda$core$Bit) { true });
                    goto $l3885;
                }
                }
            }
            goto $l3884;
            $l3885:;
        }
        panda$core$Bit $tmp3904 = panda$core$Bit$$NOT$R$panda$core$Bit(found3878);
        if ($tmp3904.value) {
        {
            panda$core$String* $tmp3906 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3905, p_b->payload);
            panda$core$String* $tmp3908 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3906, &$s3907);
            panda$core$String* $tmp3910 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3909, p_b->payload);
            panda$core$String* $tmp3912 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3910, &$s3911);
            panda$core$String* $tmp3913 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3908, $tmp3912);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_b->position, $tmp3913);
        }
        }
    }
    }
    else {
    panda$core$Int64 $tmp3914 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loops);
    panda$core$Bit $tmp3915 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3914, ((panda$core$Int64) { 0 }));
    if ($tmp3915.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_b->position, &$s3916);
    }
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3917 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3917->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3917->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp3917, ((panda$core$Int64) { 1006 }), p_b->position, ((panda$core$String*) p_b->payload));
    return $tmp3917;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileContinue$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_c) {
    panda$core$Bit found3920;
    panda$collections$Iterator* label$Iter3921;
    panda$core$String* label3933;
    panda$core$Bit $tmp3919 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_c->kind, ((panda$core$Int64) { 135 }));
    PANDA_ASSERT($tmp3919.value);
    if (((panda$core$Bit) { p_c->payload != NULL }).value) {
    {
        found3920 = ((panda$core$Bit) { false });
        {
            ITable* $tmp3922 = ((panda$collections$Iterable*) self->loops)->$class->itable;
            while ($tmp3922->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3922 = $tmp3922->next;
            }
            $fn3924 $tmp3923 = $tmp3922->methods[0];
            panda$collections$Iterator* $tmp3925 = $tmp3923(((panda$collections$Iterable*) self->loops));
            label$Iter3921 = $tmp3925;
            $l3926:;
            ITable* $tmp3928 = label$Iter3921->$class->itable;
            while ($tmp3928->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3928 = $tmp3928->next;
            }
            $fn3930 $tmp3929 = $tmp3928->methods[0];
            panda$core$Bit $tmp3931 = $tmp3929(label$Iter3921);
            panda$core$Bit $tmp3932 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3931);
            if (!$tmp3932.value) goto $l3927;
            {
                ITable* $tmp3934 = label$Iter3921->$class->itable;
                while ($tmp3934->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3934 = $tmp3934->next;
                }
                $fn3936 $tmp3935 = $tmp3934->methods[1];
                panda$core$Object* $tmp3937 = $tmp3935(label$Iter3921);
                label3933 = ((panda$core$String*) $tmp3937);
                bool $tmp3938 = ((panda$core$Bit) { label3933 != NULL }).value;
                if (!$tmp3938) goto $l3939;
                panda$core$Bit $tmp3943;
                if (((panda$core$Bit) { label3933 != NULL }).value) goto $l3940; else goto $l3941;
                $l3940:;
                panda$core$Bit $tmp3944 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(label3933, ((panda$core$String*) p_c->payload));
                $tmp3943 = $tmp3944;
                goto $l3942;
                $l3941:;
                $tmp3943 = ((panda$core$Bit) { false });
                goto $l3942;
                $l3942:;
                $tmp3938 = $tmp3943.value;
                $l3939:;
                panda$core$Bit $tmp3945 = { $tmp3938 };
                if ($tmp3945.value) {
                {
                    found3920 = ((panda$core$Bit) { true });
                    goto $l3927;
                }
                }
            }
            goto $l3926;
            $l3927:;
        }
        panda$core$Bit $tmp3946 = panda$core$Bit$$NOT$R$panda$core$Bit(found3920);
        if ($tmp3946.value) {
        {
            panda$core$String* $tmp3948 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3947, p_c->payload);
            panda$core$String* $tmp3950 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3948, &$s3949);
            panda$core$String* $tmp3952 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3951, p_c->payload);
            panda$core$String* $tmp3954 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3952, &$s3953);
            panda$core$String* $tmp3955 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3950, $tmp3954);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_c->position, $tmp3955);
        }
        }
    }
    }
    else {
    panda$core$Int64 $tmp3956 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loops);
    panda$core$Bit $tmp3957 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3956, ((panda$core$Int64) { 0 }));
    if ($tmp3957.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_c->position, &$s3958);
    }
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3959 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3959->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3959->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp3959, ((panda$core$Int64) { 1007 }), p_c->position, ((panda$core$String*) p_c->payload));
    return $tmp3959;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileReturn$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_r) {
    org$pandalanguage$pandac$IRNode* value3973;
    panda$collections$Array* children3978;
    panda$core$Bit $tmp3961 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_r->kind, ((panda$core$Int64) { 136 }));
    PANDA_ASSERT($tmp3961.value);
    bool $tmp3962 = ((panda$core$Bit) { p_r->children != NULL }).value;
    if (!$tmp3962) goto $l3963;
    panda$core$Int64 $tmp3964 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_r->children);
    panda$core$Bit $tmp3965 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3964, ((panda$core$Int64) { 0 }));
    $tmp3962 = $tmp3965.value;
    $l3963:;
    panda$core$Bit $tmp3966 = { $tmp3962 };
    if ($tmp3966.value) {
    {
        panda$core$Int64 $tmp3967 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_r->children);
        panda$core$Bit $tmp3968 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3967, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp3968.value);
        panda$core$Object* $tmp3969 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
        org$pandalanguage$pandac$Type* $tmp3970 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp3971 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp3969)->returnType, $tmp3970);
        if ($tmp3971.value) {
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_r->position, &$s3972);
            return NULL;
        }
        }
        panda$core$Object* $tmp3974 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp3975 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3974));
        panda$core$Object* $tmp3976 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
        org$pandalanguage$pandac$IRNode* $tmp3977 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3975, ((org$pandalanguage$pandac$MethodDecl*) $tmp3976)->returnType);
        value3973 = $tmp3977;
        if (((panda$core$Bit) { value3973 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp3979 = (panda$collections$Array*) malloc(40);
        $tmp3979->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp3979->refCount.value = 1;
        panda$collections$Array$init($tmp3979);
        children3978 = $tmp3979;
        panda$collections$Array$add$panda$collections$Array$T(children3978, ((panda$core$Object*) value3973));
        org$pandalanguage$pandac$IRNode* $tmp3981 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3981->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3981->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3981, ((panda$core$Int64) { 1008 }), p_r->position, ((panda$collections$ListView*) children3978));
        return $tmp3981;
    }
    }
    panda$core$Object* $tmp3983 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
    org$pandalanguage$pandac$Type* $tmp3984 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp3985 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp3983)->returnType, $tmp3984);
    if ($tmp3985.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_r->position, &$s3986);
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3987 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3987->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3987->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp3987, ((panda$core$Int64) { 1008 }), p_r->position);
    return $tmp3987;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileAssert$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_a) {
    org$pandalanguage$pandac$IRNode* test3997;
    org$pandalanguage$pandac$ClassDecl* bit4002;
    org$pandalanguage$pandac$Symbol* value4005;
    panda$collections$Array* fieldChildren4008;
    panda$collections$Array* children4014;
    org$pandalanguage$pandac$IRNode* msg4019;
    panda$core$Bit $tmp3989 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_a->kind, ((panda$core$Int64) { 123 }));
    PANDA_ASSERT($tmp3989.value);
    panda$core$Int64 $tmp3991 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp3992 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3991, ((panda$core$Int64) { 1 }));
    bool $tmp3990 = $tmp3992.value;
    if ($tmp3990) goto $l3993;
    panda$core$Int64 $tmp3994 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp3995 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3994, ((panda$core$Int64) { 2 }));
    $tmp3990 = $tmp3995.value;
    $l3993:;
    panda$core$Bit $tmp3996 = { $tmp3990 };
    PANDA_ASSERT($tmp3996.value);
    panda$core$Object* $tmp3998 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_a->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3999 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3998));
    test3997 = $tmp3999;
    if (((panda$core$Bit) { test3997 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$Type* $tmp4000 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp4001 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, test3997, $tmp4000);
    test3997 = $tmp4001;
    if (((panda$core$Bit) { test3997 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$Type* $tmp4003 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$ClassDecl* $tmp4004 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, $tmp4003);
    bit4002 = $tmp4004;
    PANDA_ASSERT(((panda$core$Bit) { bit4002 != NULL }).value);
    org$pandalanguage$pandac$Symbol* $tmp4007 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(bit4002->symbolTable, &$s4006);
    value4005 = $tmp4007;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self, ((org$pandalanguage$pandac$FieldDecl*) value4005));
    panda$collections$Array* $tmp4009 = (panda$collections$Array*) malloc(40);
    $tmp4009->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4009->refCount.value = 1;
    panda$collections$Array$init($tmp4009);
    fieldChildren4008 = $tmp4009;
    panda$collections$Array$add$panda$collections$Array$T(fieldChildren4008, ((panda$core$Object*) test3997));
    org$pandalanguage$pandac$IRNode* $tmp4011 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4011->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4011->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp4013 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp4011, ((panda$core$Int64) { 1026 }), p_a->position, $tmp4013, ((panda$core$Object*) value4005), ((panda$collections$ListView*) fieldChildren4008));
    test3997 = $tmp4011;
    panda$collections$Array* $tmp4015 = (panda$collections$Array*) malloc(40);
    $tmp4015->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4015->refCount.value = 1;
    panda$collections$Array$init($tmp4015);
    children4014 = $tmp4015;
    panda$collections$Array$add$panda$collections$Array$T(children4014, ((panda$core$Object*) test3997));
    panda$core$Int64 $tmp4017 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp4018 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4017, ((panda$core$Int64) { 2 }));
    if ($tmp4018.value) {
    {
        panda$core$Object* $tmp4020 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_a->children, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$IRNode* $tmp4021 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4020));
        msg4019 = $tmp4021;
        if (((panda$core$Bit) { msg4019 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$Type* $tmp4022 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp4023 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, msg4019, $tmp4022);
        msg4019 = $tmp4023;
        if (((panda$core$Bit) { msg4019 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children4014, ((panda$core$Object*) msg4019));
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp4024 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4024->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4024->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4024, ((panda$core$Int64) { 1034 }), p_a->position, ((panda$collections$ListView*) children4014));
    return $tmp4024;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileVar$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_v) {
    panda$core$Int64 nodeKind4039;
    panda$core$Int64 varKind4040;
    panda$collections$Array* decls4041;
    panda$collections$Iterator* astDecl$Iter4044;
    org$pandalanguage$pandac$ASTNode* astDecl4056;
    org$pandalanguage$pandac$IRNode* decl4061;
    panda$core$Bit $tmp4029 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 130 }));
    bool $tmp4028 = $tmp4029.value;
    if ($tmp4028) goto $l4030;
    panda$core$Bit $tmp4031 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 131 }));
    $tmp4028 = $tmp4031.value;
    $l4030:;
    panda$core$Bit $tmp4032 = { $tmp4028 };
    bool $tmp4027 = $tmp4032.value;
    if ($tmp4027) goto $l4033;
    panda$core$Bit $tmp4034 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 133 }));
    $tmp4027 = $tmp4034.value;
    $l4033:;
    panda$core$Bit $tmp4035 = { $tmp4027 };
    bool $tmp4026 = $tmp4035.value;
    if ($tmp4026) goto $l4036;
    panda$core$Bit $tmp4037 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 132 }));
    $tmp4026 = $tmp4037.value;
    $l4036:;
    panda$core$Bit $tmp4038 = { $tmp4026 };
    PANDA_ASSERT($tmp4038.value);
    switch (p_v->kind.value) {
        case 130:
        {
            nodeKind4039 = ((panda$core$Int64) { 1017 });
            varKind4040 = ((panda$core$Int64) { 10000 });
        }
        break;
        case 131:
        {
            nodeKind4039 = ((panda$core$Int64) { 1018 });
            varKind4040 = ((panda$core$Int64) { 10001 });
        }
        break;
        case 132:
        {
            nodeKind4039 = ((panda$core$Int64) { 1019 });
            varKind4040 = ((panda$core$Int64) { 10002 });
        }
        break;
        case 133:
        {
            nodeKind4039 = ((panda$core$Int64) { 1020 });
            varKind4040 = ((panda$core$Int64) { 10003 });
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
    panda$collections$Array* $tmp4042 = (panda$collections$Array*) malloc(40);
    $tmp4042->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4042->refCount.value = 1;
    panda$collections$Array$init($tmp4042);
    decls4041 = $tmp4042;
    {
        ITable* $tmp4045 = ((panda$collections$Iterable*) p_v->children)->$class->itable;
        while ($tmp4045->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4045 = $tmp4045->next;
        }
        $fn4047 $tmp4046 = $tmp4045->methods[0];
        panda$collections$Iterator* $tmp4048 = $tmp4046(((panda$collections$Iterable*) p_v->children));
        astDecl$Iter4044 = $tmp4048;
        $l4049:;
        ITable* $tmp4051 = astDecl$Iter4044->$class->itable;
        while ($tmp4051->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4051 = $tmp4051->next;
        }
        $fn4053 $tmp4052 = $tmp4051->methods[0];
        panda$core$Bit $tmp4054 = $tmp4052(astDecl$Iter4044);
        panda$core$Bit $tmp4055 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4054);
        if (!$tmp4055.value) goto $l4050;
        {
            ITable* $tmp4057 = astDecl$Iter4044->$class->itable;
            while ($tmp4057->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4057 = $tmp4057->next;
            }
            $fn4059 $tmp4058 = $tmp4057->methods[1];
            panda$core$Object* $tmp4060 = $tmp4058(astDecl$Iter4044);
            astDecl4056 = ((org$pandalanguage$pandac$ASTNode*) $tmp4060);
            org$pandalanguage$pandac$IRNode* $tmp4062 = org$pandalanguage$pandac$Compiler$compileDeclaration$org$pandalanguage$pandac$ASTNode$panda$core$Int64$R$org$pandalanguage$pandac$IRNode$Q(self, astDecl4056, varKind4040);
            decl4061 = $tmp4062;
            if (((panda$core$Bit) { decl4061 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(decls4041, ((panda$core$Object*) decl4061));
        }
        goto $l4049;
        $l4050:;
    }
    org$pandalanguage$pandac$IRNode* $tmp4063 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4063->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4063->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4063, nodeKind4039, p_v->position, ((panda$collections$ListView*) decls4041));
    return $tmp4063;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileWhenTest$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Variable* p_value, org$pandalanguage$pandac$ASTNode* p_test) {
    org$pandalanguage$pandac$IRNode* target4065;
    panda$collections$Array* callChildren4068;
    org$pandalanguage$pandac$IRNode* testValue4071;
    org$pandalanguage$pandac$IRNode* $tmp4066 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4066->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4066->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp4066, ((panda$core$Int64) { 1016 }), p_test->position, p_value->type, p_value);
    target4065 = $tmp4066;
    panda$collections$Array* $tmp4069 = (panda$collections$Array*) malloc(40);
    $tmp4069->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4069->refCount.value = 1;
    panda$collections$Array$init($tmp4069);
    callChildren4068 = $tmp4069;
    org$pandalanguage$pandac$IRNode* $tmp4072 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_test);
    testValue4071 = $tmp4072;
    if (((panda$core$Bit) { testValue4071 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(callChildren4068, ((panda$core$Object*) testValue4071));
    org$pandalanguage$pandac$IRNode* $tmp4074 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target4065, &$s4073, ((panda$collections$ListView*) callChildren4068));
    return $tmp4074;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileChainedIfWhen$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Variable* p_value, org$pandalanguage$pandac$ASTNode* p_w) {
    org$pandalanguage$pandac$IRNode* test4083;
    panda$core$Range$LTpanda$core$Int64$GT $tmp4087;
    org$pandalanguage$pandac$IRNode* nextTest4103;
    panda$collections$Array* callChildren4107;
    panda$collections$Array* statements4120;
    panda$core$Range$LTpanda$core$Int64$GT $tmp4123;
    org$pandalanguage$pandac$IRNode* statement4138;
    panda$collections$Array* children4148;
    panda$core$Bit $tmp4075 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_w->kind, ((panda$core$Int64) { 124 }));
    PANDA_ASSERT($tmp4075.value);
    panda$core$Int64 $tmp4076 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Bit $tmp4077 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp4076, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4077.value);
    panda$core$Object* $tmp4078 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp4079 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp4078)->kind, ((panda$core$Int64) { 128 }));
    PANDA_ASSERT($tmp4079.value);
    panda$core$Object* $tmp4080 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Int64 $tmp4081 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$ASTNode*) $tmp4080)->children);
    panda$core$Bit $tmp4082 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp4081, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4082.value);
    panda$core$Object* $tmp4084 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp4085 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$ASTNode*) $tmp4084)->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp4086 = org$pandalanguage$pandac$Compiler$compileWhenTest$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_value, ((org$pandalanguage$pandac$ASTNode*) $tmp4085));
    test4083 = $tmp4086;
    if (((panda$core$Bit) { test4083 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Object* $tmp4088 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Int64 $tmp4089 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$ASTNode*) $tmp4088)->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp4087, ((panda$core$Int64) { 1 }), $tmp4089, ((panda$core$Bit) { false }));
    int64_t $tmp4091 = $tmp4087.min.value;
    panda$core$Int64 i4090 = { $tmp4091 };
    int64_t $tmp4093 = $tmp4087.max.value;
    bool $tmp4094 = $tmp4087.inclusive.value;
    if ($tmp4094) goto $l4101; else goto $l4102;
    $l4101:;
    if ($tmp4091 <= $tmp4093) goto $l4095; else goto $l4097;
    $l4102:;
    if ($tmp4091 < $tmp4093) goto $l4095; else goto $l4097;
    $l4095:;
    {
        panda$core$Object* $tmp4104 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp4105 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$ASTNode*) $tmp4104)->children, i4090);
        org$pandalanguage$pandac$IRNode* $tmp4106 = org$pandalanguage$pandac$Compiler$compileWhenTest$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_value, ((org$pandalanguage$pandac$ASTNode*) $tmp4105));
        nextTest4103 = $tmp4106;
        if (((panda$core$Bit) { nextTest4103 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp4108 = (panda$collections$Array*) malloc(40);
        $tmp4108->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp4108->refCount.value = 1;
        panda$collections$Array$init($tmp4108);
        callChildren4107 = $tmp4108;
        panda$collections$Array$add$panda$collections$Array$T(callChildren4107, ((panda$core$Object*) nextTest4103));
        org$pandalanguage$pandac$IRNode* $tmp4111 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, test4083, &$s4110, ((panda$collections$ListView*) callChildren4107));
        test4083 = $tmp4111;
        if (((panda$core$Bit) { test4083 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    $l4098:;
    int64_t $tmp4113 = $tmp4093 - i4090.value;
    if ($tmp4094) goto $l4114; else goto $l4115;
    $l4114:;
    if ($tmp4113 >= 1) goto $l4112; else goto $l4097;
    $l4115:;
    if ($tmp4113 > 1) goto $l4112; else goto $l4097;
    $l4112:;
    i4090.value += 1;
    goto $l4095;
    $l4097:;
    org$pandalanguage$pandac$SymbolTable* $tmp4118 = (org$pandalanguage$pandac$SymbolTable*) malloc(48);
    $tmp4118->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp4118->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp4118, self->symbolTable);
    self->symbolTable = $tmp4118;
    panda$collections$Array* $tmp4121 = (panda$collections$Array*) malloc(40);
    $tmp4121->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4121->refCount.value = 1;
    panda$collections$Array$init($tmp4121);
    statements4120 = $tmp4121;
    panda$core$Int64 $tmp4124 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp4123, ((panda$core$Int64) { 1 }), $tmp4124, ((panda$core$Bit) { false }));
    int64_t $tmp4126 = $tmp4123.min.value;
    panda$core$Int64 i4125 = { $tmp4126 };
    int64_t $tmp4128 = $tmp4123.max.value;
    bool $tmp4129 = $tmp4123.inclusive.value;
    if ($tmp4129) goto $l4136; else goto $l4137;
    $l4136:;
    if ($tmp4126 <= $tmp4128) goto $l4130; else goto $l4132;
    $l4137:;
    if ($tmp4126 < $tmp4128) goto $l4130; else goto $l4132;
    $l4130:;
    {
        panda$core$Object* $tmp4139 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, i4125);
        org$pandalanguage$pandac$IRNode* $tmp4140 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4139));
        statement4138 = $tmp4140;
        if (((panda$core$Bit) { statement4138 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(statements4120, ((panda$core$Object*) statement4138));
    }
    $l4133:;
    int64_t $tmp4142 = $tmp4128 - i4125.value;
    if ($tmp4129) goto $l4143; else goto $l4144;
    $l4143:;
    if ($tmp4142 >= 1) goto $l4141; else goto $l4132;
    $l4144:;
    if ($tmp4142 > 1) goto $l4141; else goto $l4132;
    $l4141:;
    i4125.value += 1;
    goto $l4130;
    $l4132:;
    panda$core$Object* $tmp4147 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->symbolTable->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp4147);
    panda$collections$Array* $tmp4149 = (panda$collections$Array*) malloc(40);
    $tmp4149->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4149->refCount.value = 1;
    panda$collections$Array$init($tmp4149);
    children4148 = $tmp4149;
    panda$collections$Array$add$panda$collections$Array$T(children4148, ((panda$core$Object*) test4083));
    org$pandalanguage$pandac$IRNode* $tmp4151 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4151->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4151->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4151, ((panda$core$Int64) { 1000 }), p_w->position, ((panda$collections$ListView*) statements4120));
    panda$collections$Array$add$panda$collections$Array$T(children4148, ((panda$core$Object*) $tmp4151));
    org$pandalanguage$pandac$IRNode* $tmp4153 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4153->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4153->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4153, ((panda$core$Int64) { 1012 }), p_w->position, ((panda$collections$ListView*) children4148));
    return $tmp4153;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileChainedIfMatch$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_m, org$pandalanguage$pandac$IRNode* p_value) {
    panda$collections$Array* children4155;
    org$pandalanguage$pandac$Variable* valueVar4158;
    panda$collections$Array* declChildren4168;
    panda$collections$Array* varChildren4173;
    panda$core$Range$LTpanda$core$Int64$GT $tmp4180;
    org$pandalanguage$pandac$ASTNode* c4195;
    org$pandalanguage$pandac$IRNode* w4197;
    panda$collections$Array* statements4199;
    panda$collections$Iterator* astStatement$Iter4202;
    org$pandalanguage$pandac$ASTNode* astStatement4214;
    org$pandalanguage$pandac$IRNode* stmt4219;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp4229;
    panda$collections$Array* newChildren4257;
    panda$collections$Array* $tmp4156 = (panda$collections$Array*) malloc(40);
    $tmp4156->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4156->refCount.value = 1;
    panda$collections$Array$init($tmp4156);
    children4155 = $tmp4156;
    org$pandalanguage$pandac$Variable* $tmp4159 = (org$pandalanguage$pandac$Variable*) malloc(88);
    $tmp4159->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
    $tmp4159->refCount.value = 1;
    panda$core$String* $tmp4162 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4161, ((panda$core$Object*) wrap_panda$core$Int64(p_m->position.line)));
    panda$core$String* $tmp4164 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4162, &$s4163);
    panda$core$String* $tmp4165 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp4164, ((panda$core$Object*) wrap_panda$core$Int64(p_m->position.column)));
    panda$core$String* $tmp4167 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4165, &$s4166);
    org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type($tmp4159, p_m->position, ((panda$core$Int64) { 10001 }), $tmp4167, p_value->type);
    valueVar4158 = $tmp4159;
    panda$collections$Array* $tmp4169 = (panda$collections$Array*) malloc(40);
    $tmp4169->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4169->refCount.value = 1;
    panda$collections$Array$init($tmp4169);
    declChildren4168 = $tmp4169;
    org$pandalanguage$pandac$IRNode* $tmp4171 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4171->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4171->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp4171, ((panda$core$Int64) { 1016 }), p_value->position, valueVar4158->type, valueVar4158);
    panda$collections$Array$add$panda$collections$Array$T(declChildren4168, ((panda$core$Object*) $tmp4171));
    panda$collections$Array$add$panda$collections$Array$T(declChildren4168, ((panda$core$Object*) p_value));
    panda$collections$Array* $tmp4174 = (panda$collections$Array*) malloc(40);
    $tmp4174->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4174->refCount.value = 1;
    panda$collections$Array$init($tmp4174);
    varChildren4173 = $tmp4174;
    org$pandalanguage$pandac$IRNode* $tmp4176 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4176->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4176->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4176, ((panda$core$Int64) { 1021 }), ((org$pandalanguage$pandac$Symbol*) valueVar4158)->position, ((panda$collections$ListView*) declChildren4168));
    panda$collections$Array$add$panda$collections$Array$T(varChildren4173, ((panda$core$Object*) $tmp4176));
    org$pandalanguage$pandac$IRNode* $tmp4178 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4178->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4178->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4178, ((panda$core$Int64) { 1018 }), ((org$pandalanguage$pandac$Symbol*) valueVar4158)->position, ((panda$collections$ListView*) varChildren4173));
    panda$collections$Array$add$panda$collections$Array$T(children4155, ((panda$core$Object*) $tmp4178));
    panda$core$Int64 $tmp4181 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp4180, ((panda$core$Int64) { 1 }), $tmp4181, ((panda$core$Bit) { false }));
    int64_t $tmp4183 = $tmp4180.min.value;
    panda$core$Int64 i4182 = { $tmp4183 };
    int64_t $tmp4185 = $tmp4180.max.value;
    bool $tmp4186 = $tmp4180.inclusive.value;
    if ($tmp4186) goto $l4193; else goto $l4194;
    $l4193:;
    if ($tmp4183 <= $tmp4185) goto $l4187; else goto $l4189;
    $l4194:;
    if ($tmp4183 < $tmp4185) goto $l4187; else goto $l4189;
    $l4187:;
    {
        panda$core$Object* $tmp4196 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, i4182);
        c4195 = ((org$pandalanguage$pandac$ASTNode*) $tmp4196);
        switch (c4195->kind.value) {
            case 124:
            {
                org$pandalanguage$pandac$IRNode* $tmp4198 = org$pandalanguage$pandac$Compiler$compileChainedIfWhen$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, valueVar4158, c4195);
                w4197 = $tmp4198;
                if (((panda$core$Bit) { w4197 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children4155, ((panda$core$Object*) w4197));
            }
            break;
            case 127:
            {
                panda$collections$Array* $tmp4200 = (panda$collections$Array*) malloc(40);
                $tmp4200->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp4200->refCount.value = 1;
                panda$collections$Array$init($tmp4200);
                statements4199 = $tmp4200;
                {
                    ITable* $tmp4203 = ((panda$collections$Iterable*) c4195->children)->$class->itable;
                    while ($tmp4203->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp4203 = $tmp4203->next;
                    }
                    $fn4205 $tmp4204 = $tmp4203->methods[0];
                    panda$collections$Iterator* $tmp4206 = $tmp4204(((panda$collections$Iterable*) c4195->children));
                    astStatement$Iter4202 = $tmp4206;
                    $l4207:;
                    ITable* $tmp4209 = astStatement$Iter4202->$class->itable;
                    while ($tmp4209->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp4209 = $tmp4209->next;
                    }
                    $fn4211 $tmp4210 = $tmp4209->methods[0];
                    panda$core$Bit $tmp4212 = $tmp4210(astStatement$Iter4202);
                    panda$core$Bit $tmp4213 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4212);
                    if (!$tmp4213.value) goto $l4208;
                    {
                        ITable* $tmp4215 = astStatement$Iter4202->$class->itable;
                        while ($tmp4215->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp4215 = $tmp4215->next;
                        }
                        $fn4217 $tmp4216 = $tmp4215->methods[1];
                        panda$core$Object* $tmp4218 = $tmp4216(astStatement$Iter4202);
                        astStatement4214 = ((org$pandalanguage$pandac$ASTNode*) $tmp4218);
                        org$pandalanguage$pandac$IRNode* $tmp4220 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, astStatement4214);
                        stmt4219 = $tmp4220;
                        if (((panda$core$Bit) { stmt4219 == NULL }).value) {
                        {
                            return NULL;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(statements4199, ((panda$core$Object*) stmt4219));
                    }
                    goto $l4207;
                    $l4208:;
                }
                org$pandalanguage$pandac$IRNode* $tmp4221 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp4221->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp4221->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4221, ((panda$core$Int64) { 1000 }), c4195->position, ((panda$collections$ListView*) statements4199));
                panda$collections$Array$add$panda$collections$Array$T(children4155, ((panda$core$Object*) $tmp4221));
            }
            break;
            default:
            {
                PANDA_ASSERT(((panda$core$Bit) { false }).value);
            }
        }
    }
    $l4190:;
    int64_t $tmp4224 = $tmp4185 - i4182.value;
    if ($tmp4186) goto $l4225; else goto $l4226;
    $l4225:;
    if ($tmp4224 >= 1) goto $l4223; else goto $l4189;
    $l4226:;
    if ($tmp4224 > 1) goto $l4223; else goto $l4189;
    $l4223:;
    i4182.value += 1;
    goto $l4187;
    $l4189:;
    panda$core$Int64 $tmp4230 = panda$collections$Array$get_count$R$panda$core$Int64(children4155);
    panda$core$Int64 $tmp4231 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp4230, ((panda$core$Int64) { 1 }));
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp4229, $tmp4231, ((panda$core$Int64) { 1 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { false }));
    int64_t $tmp4233 = $tmp4229.start.value;
    panda$core$Int64 i4232 = { $tmp4233 };
    int64_t $tmp4235 = $tmp4229.end.value;
    int64_t $tmp4236 = $tmp4229.step.value;
    bool $tmp4237 = $tmp4229.inclusive.value;
    bool $tmp4244 = $tmp4236 > 0;
    if ($tmp4244) goto $l4242; else goto $l4243;
    $l4242:;
    if ($tmp4237) goto $l4245; else goto $l4246;
    $l4245:;
    if ($tmp4233 <= $tmp4235) goto $l4238; else goto $l4240;
    $l4246:;
    if ($tmp4233 < $tmp4235) goto $l4238; else goto $l4240;
    $l4243:;
    if ($tmp4237) goto $l4247; else goto $l4248;
    $l4247:;
    if ($tmp4233 >= $tmp4235) goto $l4238; else goto $l4240;
    $l4248:;
    if ($tmp4233 > $tmp4235) goto $l4238; else goto $l4240;
    $l4238:;
    {
        panda$core$Int64 $tmp4250 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4232, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp4251 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children4155, $tmp4250);
        panda$core$Bit $tmp4252 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp4251)->kind, ((panda$core$Int64) { 1012 }));
        PANDA_ASSERT($tmp4252.value);
        panda$core$Int64 $tmp4253 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4232, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp4254 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children4155, $tmp4253);
        panda$core$Int64 $tmp4255 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp4254)->children);
        panda$core$Bit $tmp4256 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4255, ((panda$core$Int64) { 2 }));
        PANDA_ASSERT($tmp4256.value);
        panda$collections$Array* $tmp4258 = (panda$collections$Array*) malloc(40);
        $tmp4258->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp4258->refCount.value = 1;
        panda$core$Int64 $tmp4260 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4232, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp4261 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children4155, $tmp4260);
        panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp4258, ((panda$collections$ListView*) ((org$pandalanguage$pandac$IRNode*) $tmp4261)->children));
        newChildren4257 = $tmp4258;
        panda$core$Object* $tmp4262 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children4155, i4232);
        panda$collections$Array$add$panda$collections$Array$T(newChildren4257, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp4262)));
        panda$core$Int64 $tmp4263 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4232, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$IRNode* $tmp4264 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp4264->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp4264->refCount.value = 1;
        panda$core$Int64 $tmp4266 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4232, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp4267 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children4155, $tmp4266);
        panda$core$Int64 $tmp4268 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4232, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp4269 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children4155, $tmp4268);
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4264, ((org$pandalanguage$pandac$IRNode*) $tmp4267)->kind, ((org$pandalanguage$pandac$IRNode*) $tmp4269)->position, ((panda$collections$ListView*) newChildren4257));
        panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(children4155, $tmp4263, ((panda$core$Object*) $tmp4264));
        panda$core$Int64 $tmp4270 = panda$collections$Array$get_count$R$panda$core$Int64(children4155);
        panda$core$Int64 $tmp4271 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp4270, ((panda$core$Int64) { 1 }));
        panda$collections$Array$removeIndex$panda$core$Int64(children4155, $tmp4271);
    }
    $l4241:;
    if ($tmp4244) goto $l4273; else goto $l4274;
    $l4273:;
    int64_t $tmp4275 = $tmp4235 - i4232.value;
    if ($tmp4237) goto $l4276; else goto $l4277;
    $l4276:;
    if ($tmp4275 >= $tmp4236) goto $l4272; else goto $l4240;
    $l4277:;
    if ($tmp4275 > $tmp4236) goto $l4272; else goto $l4240;
    $l4274:;
    int64_t $tmp4279 = i4232.value - $tmp4235;
    if ($tmp4237) goto $l4280; else goto $l4281;
    $l4280:;
    if ($tmp4279 >= -$tmp4236) goto $l4272; else goto $l4240;
    $l4281:;
    if ($tmp4279 > -$tmp4236) goto $l4272; else goto $l4240;
    $l4272:;
    i4232.value += $tmp4236;
    goto $l4238;
    $l4240:;
    org$pandalanguage$pandac$IRNode* $tmp4283 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4283->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4283->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4283, ((panda$core$Int64) { 1000 }), p_m->position, ((panda$collections$ListView*) children4155));
    return $tmp4283;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileWhen$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type, org$pandalanguage$pandac$ASTNode* p_w) {
    panda$collections$Array* children4293;
    panda$collections$Iterator* expr$Iter4296;
    org$pandalanguage$pandac$ASTNode* expr4309;
    org$pandalanguage$pandac$IRNode* compiled4314;
    panda$collections$Array* statements4319;
    panda$core$Range$LTpanda$core$Int64$GT $tmp4322;
    org$pandalanguage$pandac$IRNode* statement4337;
    panda$core$Bit $tmp4285 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_w->kind, ((panda$core$Int64) { 124 }));
    PANDA_ASSERT($tmp4285.value);
    panda$core$Int64 $tmp4286 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Bit $tmp4287 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp4286, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4287.value);
    panda$core$Object* $tmp4288 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp4289 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp4288)->kind, ((panda$core$Int64) { 128 }));
    PANDA_ASSERT($tmp4289.value);
    panda$core$Object* $tmp4290 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Int64 $tmp4291 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$ASTNode*) $tmp4290)->children);
    panda$core$Bit $tmp4292 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp4291, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4292.value);
    panda$collections$Array* $tmp4294 = (panda$collections$Array*) malloc(40);
    $tmp4294->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4294->refCount.value = 1;
    panda$collections$Array$init($tmp4294);
    children4293 = $tmp4294;
    {
        panda$core$Object* $tmp4297 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
        ITable* $tmp4298 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp4297)->children)->$class->itable;
        while ($tmp4298->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4298 = $tmp4298->next;
        }
        $fn4300 $tmp4299 = $tmp4298->methods[0];
        panda$collections$Iterator* $tmp4301 = $tmp4299(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp4297)->children));
        expr$Iter4296 = $tmp4301;
        $l4302:;
        ITable* $tmp4304 = expr$Iter4296->$class->itable;
        while ($tmp4304->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4304 = $tmp4304->next;
        }
        $fn4306 $tmp4305 = $tmp4304->methods[0];
        panda$core$Bit $tmp4307 = $tmp4305(expr$Iter4296);
        panda$core$Bit $tmp4308 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4307);
        if (!$tmp4308.value) goto $l4303;
        {
            ITable* $tmp4310 = expr$Iter4296->$class->itable;
            while ($tmp4310->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4310 = $tmp4310->next;
            }
            $fn4312 $tmp4311 = $tmp4310->methods[1];
            panda$core$Object* $tmp4313 = $tmp4311(expr$Iter4296);
            expr4309 = ((org$pandalanguage$pandac$ASTNode*) $tmp4313);
            org$pandalanguage$pandac$IRNode* $tmp4315 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, expr4309);
            org$pandalanguage$pandac$IRNode* $tmp4316 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp4315, p_type);
            compiled4314 = $tmp4316;
            if (((panda$core$Bit) { compiled4314 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children4293, ((panda$core$Object*) compiled4314));
        }
        goto $l4302;
        $l4303:;
    }
    org$pandalanguage$pandac$SymbolTable* $tmp4317 = (org$pandalanguage$pandac$SymbolTable*) malloc(48);
    $tmp4317->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp4317->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp4317, self->symbolTable);
    self->symbolTable = $tmp4317;
    panda$collections$Array* $tmp4320 = (panda$collections$Array*) malloc(40);
    $tmp4320->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4320->refCount.value = 1;
    panda$collections$Array$init($tmp4320);
    statements4319 = $tmp4320;
    panda$core$Int64 $tmp4323 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp4322, ((panda$core$Int64) { 1 }), $tmp4323, ((panda$core$Bit) { false }));
    int64_t $tmp4325 = $tmp4322.min.value;
    panda$core$Int64 i4324 = { $tmp4325 };
    int64_t $tmp4327 = $tmp4322.max.value;
    bool $tmp4328 = $tmp4322.inclusive.value;
    if ($tmp4328) goto $l4335; else goto $l4336;
    $l4335:;
    if ($tmp4325 <= $tmp4327) goto $l4329; else goto $l4331;
    $l4336:;
    if ($tmp4325 < $tmp4327) goto $l4329; else goto $l4331;
    $l4329:;
    {
        panda$core$Object* $tmp4338 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, i4324);
        org$pandalanguage$pandac$IRNode* $tmp4339 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4338));
        statement4337 = $tmp4339;
        if (((panda$core$Bit) { statement4337 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(statements4319, ((panda$core$Object*) statement4337));
    }
    $l4332:;
    int64_t $tmp4341 = $tmp4327 - i4324.value;
    if ($tmp4328) goto $l4342; else goto $l4343;
    $l4342:;
    if ($tmp4341 >= 1) goto $l4340; else goto $l4331;
    $l4343:;
    if ($tmp4341 > 1) goto $l4340; else goto $l4331;
    $l4340:;
    i4324.value += 1;
    goto $l4329;
    $l4331:;
    panda$core$Object* $tmp4346 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->symbolTable->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp4346);
    org$pandalanguage$pandac$IRNode* $tmp4347 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4347->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4347->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4347, ((panda$core$Int64) { 1000 }), p_w->position, ((panda$collections$ListView*) statements4319));
    panda$collections$Array$add$panda$collections$Array$T(children4293, ((panda$core$Object*) $tmp4347));
    org$pandalanguage$pandac$IRNode* $tmp4349 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4349->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4349->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4349, ((panda$core$Int64) { 1042 }), p_w->position, ((panda$collections$ListView*) children4293));
    return $tmp4349;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileOtherwise$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_o) {
    panda$collections$Array* children4352;
    panda$collections$Array* statements4357;
    panda$collections$Iterator* s$Iter4360;
    org$pandalanguage$pandac$ASTNode* s4372;
    org$pandalanguage$pandac$IRNode* statement4377;
    panda$core$Bit $tmp4351 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_o->kind, ((panda$core$Int64) { 127 }));
    PANDA_ASSERT($tmp4351.value);
    panda$collections$Array* $tmp4353 = (panda$collections$Array*) malloc(40);
    $tmp4353->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4353->refCount.value = 1;
    panda$collections$Array$init($tmp4353);
    children4352 = $tmp4353;
    org$pandalanguage$pandac$SymbolTable* $tmp4355 = (org$pandalanguage$pandac$SymbolTable*) malloc(48);
    $tmp4355->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp4355->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp4355, self->symbolTable);
    self->symbolTable = $tmp4355;
    panda$collections$Array* $tmp4358 = (panda$collections$Array*) malloc(40);
    $tmp4358->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4358->refCount.value = 1;
    panda$collections$Array$init($tmp4358);
    statements4357 = $tmp4358;
    {
        ITable* $tmp4361 = ((panda$collections$Iterable*) p_o->children)->$class->itable;
        while ($tmp4361->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4361 = $tmp4361->next;
        }
        $fn4363 $tmp4362 = $tmp4361->methods[0];
        panda$collections$Iterator* $tmp4364 = $tmp4362(((panda$collections$Iterable*) p_o->children));
        s$Iter4360 = $tmp4364;
        $l4365:;
        ITable* $tmp4367 = s$Iter4360->$class->itable;
        while ($tmp4367->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4367 = $tmp4367->next;
        }
        $fn4369 $tmp4368 = $tmp4367->methods[0];
        panda$core$Bit $tmp4370 = $tmp4368(s$Iter4360);
        panda$core$Bit $tmp4371 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4370);
        if (!$tmp4371.value) goto $l4366;
        {
            ITable* $tmp4373 = s$Iter4360->$class->itable;
            while ($tmp4373->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4373 = $tmp4373->next;
            }
            $fn4375 $tmp4374 = $tmp4373->methods[1];
            panda$core$Object* $tmp4376 = $tmp4374(s$Iter4360);
            s4372 = ((org$pandalanguage$pandac$ASTNode*) $tmp4376);
            org$pandalanguage$pandac$IRNode* $tmp4378 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, s4372);
            statement4377 = $tmp4378;
            if (((panda$core$Bit) { statement4377 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(statements4357, ((panda$core$Object*) statement4377));
        }
        goto $l4365;
        $l4366:;
    }
    panda$core$Object* $tmp4379 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->symbolTable->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp4379);
    org$pandalanguage$pandac$IRNode* $tmp4380 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4380->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4380->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4380, ((panda$core$Int64) { 1000 }), p_o->position, ((panda$collections$ListView*) statements4357));
    panda$collections$Array$add$panda$collections$Array$T(children4352, ((panda$core$Object*) $tmp4380));
    org$pandalanguage$pandac$IRNode* $tmp4382 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4382->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4382->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4382, ((panda$core$Int64) { 1043 }), p_o->position, ((panda$collections$ListView*) children4352));
    return $tmp4382;
}
panda$core$Bit org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    org$pandalanguage$pandac$FieldDecl* f4391;
    org$pandalanguage$pandac$Variable* v4400;
    switch (p_expr->kind.value) {
        case 1004:
        {
            return ((panda$core$Bit) { true });
        }
        break;
        case 1010:
        {
            panda$core$Bit $tmp4385 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_expr->type);
            bool $tmp4384 = $tmp4385.value;
            if (!$tmp4384) goto $l4386;
            panda$core$Object* $tmp4387 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp4388 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$IRNode*) $tmp4387)->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp4389 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp4388));
            $tmp4384 = $tmp4389.value;
            $l4386:;
            panda$core$Bit $tmp4390 = { $tmp4384 };
            return $tmp4390;
        }
        break;
        case 1026:
        {
            f4391 = ((org$pandalanguage$pandac$FieldDecl*) p_expr->payload);
            PANDA_ASSERT(f4391->resolved.value);
            panda$core$Bit $tmp4394 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(f4391->fieldKind, ((panda$core$Int64) { 10002 }));
            bool $tmp4393 = $tmp4394.value;
            if (!$tmp4393) goto $l4395;
            $tmp4393 = ((panda$core$Bit) { f4391->value != NULL }).value;
            $l4395:;
            panda$core$Bit $tmp4396 = { $tmp4393 };
            bool $tmp4392 = $tmp4396.value;
            if (!$tmp4392) goto $l4397;
            panda$core$Bit $tmp4398 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, f4391->value);
            $tmp4392 = $tmp4398.value;
            $l4397:;
            panda$core$Bit $tmp4399 = { $tmp4392 };
            return $tmp4399;
        }
        break;
        case 1016:
        {
            v4400 = ((org$pandalanguage$pandac$Variable*) p_expr->payload);
            panda$core$Bit $tmp4402 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(v4400->varKind, ((panda$core$Int64) { 10001 }));
            bool $tmp4401 = $tmp4402.value;
            if ($tmp4401) goto $l4403;
            panda$core$Bit $tmp4406 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(v4400->varKind, ((panda$core$Int64) { 10002 }));
            bool $tmp4405 = $tmp4406.value;
            if (!$tmp4405) goto $l4407;
            $tmp4405 = ((panda$core$Bit) { v4400->initialValue != NULL }).value;
            $l4407:;
            panda$core$Bit $tmp4408 = { $tmp4405 };
            bool $tmp4404 = $tmp4408.value;
            if (!$tmp4404) goto $l4409;
            panda$core$Bit $tmp4410 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, v4400->initialValue);
            $tmp4404 = $tmp4410.value;
            $l4409:;
            panda$core$Bit $tmp4411 = { $tmp4404 };
            $tmp4401 = $tmp4411.value;
            $l4403:;
            panda$core$Bit $tmp4412 = { $tmp4401 };
            return $tmp4412;
        }
        break;
        default:
        {
            return ((panda$core$Bit) { false });
        }
    }
}
panda$core$UInt64 org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    org$pandalanguage$pandac$FieldDecl* f4417;
    org$pandalanguage$pandac$Variable* v4419;
    panda$core$Bit $tmp4413 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, p_expr);
    PANDA_ASSERT($tmp4413.value);
    switch (p_expr->kind.value) {
        case 1004:
        {
            return ((panda$core$UInt64$wrapper*) p_expr->payload)->value;
        }
        break;
        case 1010:
        {
            panda$core$Object* $tmp4414 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp4415 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$IRNode*) $tmp4414)->children, ((panda$core$Int64) { 0 }));
            panda$core$UInt64 $tmp4416 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self, ((org$pandalanguage$pandac$IRNode*) $tmp4415));
            return $tmp4416;
        }
        break;
        case 1026:
        {
            f4417 = ((org$pandalanguage$pandac$FieldDecl*) p_expr->payload);
            panda$core$UInt64 $tmp4418 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self, f4417->value);
            return $tmp4418;
        }
        break;
        case 1016:
        {
            v4419 = ((org$pandalanguage$pandac$Variable*) p_expr->payload);
            panda$core$UInt64 $tmp4420 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self, v4419->initialValue);
            return $tmp4420;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileMatch$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_m) {
    org$pandalanguage$pandac$IRNode* value4424;
    panda$collections$Array* children4431;
    panda$collections$Iterator* rawWhen$Iter4434;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp4435;
    org$pandalanguage$pandac$ASTNode* rawWhen4448;
    org$pandalanguage$pandac$IRNode* o4454;
    org$pandalanguage$pandac$IRNode* w4456;
    panda$core$Bit $tmp4421 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->kind, ((panda$core$Int64) { 125 }));
    PANDA_ASSERT($tmp4421.value);
    panda$core$Int64 $tmp4422 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
    panda$core$Bit $tmp4423 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp4422, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4423.value);
    panda$core$Object* $tmp4425 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp4426 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4425));
    org$pandalanguage$pandac$IRNode* $tmp4427 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp4426);
    value4424 = $tmp4427;
    if (((panda$core$Bit) { value4424 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp4428 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(value4424->type);
    panda$core$Bit $tmp4429 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4428);
    if ($tmp4429.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp4430 = org$pandalanguage$pandac$Compiler$compileChainedIfMatch$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_m, value4424);
        return $tmp4430;
    }
    }
    panda$collections$Array* $tmp4432 = (panda$collections$Array*) malloc(40);
    $tmp4432->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4432->refCount.value = 1;
    panda$collections$Array$init($tmp4432);
    children4431 = $tmp4432;
    panda$collections$Array$add$panda$collections$Array$T(children4431, ((panda$core$Object*) value4424));
    {
        panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp4435, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
        panda$collections$ImmutableArray* $tmp4436 = panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(p_m->children, $tmp4435);
        ITable* $tmp4437 = ((panda$collections$Iterable*) $tmp4436)->$class->itable;
        while ($tmp4437->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4437 = $tmp4437->next;
        }
        $fn4439 $tmp4438 = $tmp4437->methods[0];
        panda$collections$Iterator* $tmp4440 = $tmp4438(((panda$collections$Iterable*) $tmp4436));
        rawWhen$Iter4434 = $tmp4440;
        $l4441:;
        ITable* $tmp4443 = rawWhen$Iter4434->$class->itable;
        while ($tmp4443->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4443 = $tmp4443->next;
        }
        $fn4445 $tmp4444 = $tmp4443->methods[0];
        panda$core$Bit $tmp4446 = $tmp4444(rawWhen$Iter4434);
        panda$core$Bit $tmp4447 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4446);
        if (!$tmp4447.value) goto $l4442;
        {
            ITable* $tmp4449 = rawWhen$Iter4434->$class->itable;
            while ($tmp4449->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4449 = $tmp4449->next;
            }
            $fn4451 $tmp4450 = $tmp4449->methods[1];
            panda$core$Object* $tmp4452 = $tmp4450(rawWhen$Iter4434);
            rawWhen4448 = ((org$pandalanguage$pandac$ASTNode*) $tmp4452);
            panda$core$Bit $tmp4453 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(rawWhen4448->kind, ((panda$core$Int64) { 127 }));
            if ($tmp4453.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp4455 = org$pandalanguage$pandac$Compiler$compileOtherwise$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, rawWhen4448);
                o4454 = $tmp4455;
                if (((panda$core$Bit) { o4454 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children4431, ((panda$core$Object*) o4454));
                goto $l4441;
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp4457 = org$pandalanguage$pandac$Compiler$compileWhen$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, value4424->type, rawWhen4448);
            w4456 = $tmp4457;
            if (((panda$core$Bit) { w4456 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$Object* $tmp4458 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(w4456->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp4459 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp4458));
            panda$core$Bit $tmp4460 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4459);
            if ($tmp4460.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp4461 = org$pandalanguage$pandac$Compiler$compileChainedIfMatch$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_m, value4424);
                return $tmp4461;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children4431, ((panda$core$Object*) w4456));
        }
        goto $l4441;
        $l4442:;
    }
    org$pandalanguage$pandac$IRNode* $tmp4462 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4462->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4462->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4462, ((panda$core$Int64) { 1042 }), p_m->position, ((panda$collections$ListView*) children4431));
    return $tmp4462;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$IRNode* result4477;
    switch (p_s->kind.value) {
        case 123:
        {
            org$pandalanguage$pandac$IRNode* $tmp4464 = org$pandalanguage$pandac$Compiler$compileAssert$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4464;
        }
        break;
        case 103:
        {
            org$pandalanguage$pandac$IRNode* $tmp4465 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            org$pandalanguage$pandac$IRNode* $tmp4466 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp4465);
            return $tmp4466;
        }
        break;
        case 126:
        {
            org$pandalanguage$pandac$IRNode* $tmp4467 = org$pandalanguage$pandac$Compiler$compileBlock$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4467;
        }
        break;
        case 118:
        {
            org$pandalanguage$pandac$IRNode* $tmp4468 = org$pandalanguage$pandac$Compiler$compileIf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4468;
        }
        break;
        case 119:
        {
            org$pandalanguage$pandac$IRNode* $tmp4469 = org$pandalanguage$pandac$Compiler$compileFor$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4469;
        }
        break;
        case 121:
        {
            org$pandalanguage$pandac$IRNode* $tmp4470 = org$pandalanguage$pandac$Compiler$compileWhile$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4470;
        }
        break;
        case 120:
        {
            org$pandalanguage$pandac$IRNode* $tmp4471 = org$pandalanguage$pandac$Compiler$compileDo$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4471;
        }
        break;
        case 122:
        {
            org$pandalanguage$pandac$IRNode* $tmp4472 = org$pandalanguage$pandac$Compiler$compileLoop$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4472;
        }
        break;
        case 125:
        {
            org$pandalanguage$pandac$IRNode* $tmp4473 = org$pandalanguage$pandac$Compiler$compileMatch$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4473;
        }
        break;
        case 134:
        {
            org$pandalanguage$pandac$IRNode* $tmp4474 = org$pandalanguage$pandac$Compiler$compileBreak$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4474;
        }
        break;
        case 135:
        {
            org$pandalanguage$pandac$IRNode* $tmp4475 = org$pandalanguage$pandac$Compiler$compileContinue$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4475;
        }
        break;
        case 136:
        {
            org$pandalanguage$pandac$IRNode* $tmp4476 = org$pandalanguage$pandac$Compiler$compileReturn$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4476;
        }
        break;
        case 107:
        {
            org$pandalanguage$pandac$IRNode* $tmp4478 = org$pandalanguage$pandac$Compiler$compileCall$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            org$pandalanguage$pandac$IRNode* $tmp4479 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp4478);
            result4477 = $tmp4479;
            if (((panda$core$Bit) { result4477 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp4480 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self, result4477);
                result4477 = $tmp4480;
            }
            }
            return result4477;
        }
        break;
        case 130:
        case 131:
        case 132:
        case 133:
        {
            org$pandalanguage$pandac$IRNode* $tmp4481 = org$pandalanguage$pandac$Compiler$compileVar$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4481;
        }
        break;
    }
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBody$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$SymbolTable* old4482;
    org$pandalanguage$pandac$SymbolTable* symbols4484;
    panda$collections$Iterator* p$Iter4487;
    org$pandalanguage$pandac$MethodDecl$Parameter* p4499;
    panda$collections$Array* fieldInitializers4506;
    panda$collections$Iterator* f$Iter4510;
    org$pandalanguage$pandac$FieldDecl* f4523;
    panda$collections$Array* children4533;
    org$pandalanguage$pandac$IRNode* fieldRef4540;
    org$pandalanguage$pandac$IRNode* compiled4545;
    panda$collections$Array* children4547;
    if (((panda$core$Bit) { p_m->compiledBody != NULL }).value) {
    {
        return p_m->compiledBody;
    }
    }
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_m->owner));
    old4482 = self->symbolTable;
    org$pandalanguage$pandac$SymbolTable* $tmp4483 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, p_m->owner);
    self->symbolTable = $tmp4483;
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentMethod, ((panda$core$Object*) p_m));
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
    PANDA_ASSERT(((panda$core$Bit) { p_m->body != NULL }).value);
    org$pandalanguage$pandac$SymbolTable* $tmp4485 = (org$pandalanguage$pandac$SymbolTable*) malloc(48);
    $tmp4485->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp4485->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp4485, self->symbolTable);
    symbols4484 = $tmp4485;
    {
        ITable* $tmp4488 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp4488->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4488 = $tmp4488->next;
        }
        $fn4490 $tmp4489 = $tmp4488->methods[0];
        panda$collections$Iterator* $tmp4491 = $tmp4489(((panda$collections$Iterable*) p_m->parameters));
        p$Iter4487 = $tmp4491;
        $l4492:;
        ITable* $tmp4494 = p$Iter4487->$class->itable;
        while ($tmp4494->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4494 = $tmp4494->next;
        }
        $fn4496 $tmp4495 = $tmp4494->methods[0];
        panda$core$Bit $tmp4497 = $tmp4495(p$Iter4487);
        panda$core$Bit $tmp4498 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4497);
        if (!$tmp4498.value) goto $l4493;
        {
            ITable* $tmp4500 = p$Iter4487->$class->itable;
            while ($tmp4500->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4500 = $tmp4500->next;
            }
            $fn4502 $tmp4501 = $tmp4500->methods[1];
            panda$core$Object* $tmp4503 = $tmp4501(p$Iter4487);
            p4499 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp4503);
            org$pandalanguage$pandac$Variable* $tmp4504 = (org$pandalanguage$pandac$Variable*) malloc(88);
            $tmp4504->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
            $tmp4504->refCount.value = 1;
            org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Int64($tmp4504, ((org$pandalanguage$pandac$Symbol*) p_m)->position, ((panda$core$Int64) { 10001 }), p4499->name, p4499->type, ((panda$core$Int64) { 1820 }));
            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(symbols4484, ((org$pandalanguage$pandac$Symbol*) $tmp4504));
        }
        goto $l4492;
        $l4493:;
    }
    self->symbolTable = symbols4484;
    fieldInitializers4506 = NULL;
    panda$core$Bit $tmp4507 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 59 }));
    if ($tmp4507.value) {
    {
        panda$collections$Array* $tmp4508 = (panda$collections$Array*) malloc(40);
        $tmp4508->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp4508->refCount.value = 1;
        panda$collections$Array$init($tmp4508);
        fieldInitializers4506 = $tmp4508;
        {
            panda$core$Object* $tmp4511 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
            ITable* $tmp4512 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ClassDecl*) $tmp4511)->fields)->$class->itable;
            while ($tmp4512->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp4512 = $tmp4512->next;
            }
            $fn4514 $tmp4513 = $tmp4512->methods[0];
            panda$collections$Iterator* $tmp4515 = $tmp4513(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ClassDecl*) $tmp4511)->fields));
            f$Iter4510 = $tmp4515;
            $l4516:;
            ITable* $tmp4518 = f$Iter4510->$class->itable;
            while ($tmp4518->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4518 = $tmp4518->next;
            }
            $fn4520 $tmp4519 = $tmp4518->methods[0];
            panda$core$Bit $tmp4521 = $tmp4519(f$Iter4510);
            panda$core$Bit $tmp4522 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4521);
            if (!$tmp4522.value) goto $l4517;
            {
                ITable* $tmp4524 = f$Iter4510->$class->itable;
                while ($tmp4524->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp4524 = $tmp4524->next;
                }
                $fn4526 $tmp4525 = $tmp4524->methods[1];
                panda$core$Object* $tmp4527 = $tmp4525(f$Iter4510);
                f4523 = ((org$pandalanguage$pandac$FieldDecl*) $tmp4527);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self, f4523);
                panda$core$Bit $tmp4529 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(f4523->annotations);
                panda$core$Bit $tmp4530 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4529);
                bool $tmp4528 = $tmp4530.value;
                if (!$tmp4528) goto $l4531;
                $tmp4528 = ((panda$core$Bit) { f4523->value != NULL }).value;
                $l4531:;
                panda$core$Bit $tmp4532 = { $tmp4528 };
                if ($tmp4532.value) {
                {
                    panda$collections$Array* $tmp4534 = (panda$collections$Array*) malloc(40);
                    $tmp4534->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp4534->refCount.value = 1;
                    panda$collections$Array$init($tmp4534);
                    children4533 = $tmp4534;
                    org$pandalanguage$pandac$IRNode* $tmp4536 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp4536->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp4536->refCount.value = 1;
                    panda$core$Object* $tmp4538 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
                    org$pandalanguage$pandac$Type* $tmp4539 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp4538));
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp4536, ((panda$core$Int64) { 1025 }), ((org$pandalanguage$pandac$Symbol*) p_m)->position, $tmp4539);
                    panda$collections$Array$add$panda$collections$Array$T(children4533, ((panda$core$Object*) $tmp4536));
                    org$pandalanguage$pandac$IRNode* $tmp4541 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp4541->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp4541->refCount.value = 1;
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp4541, ((panda$core$Int64) { 1026 }), ((org$pandalanguage$pandac$Symbol*) p_m)->position, f4523->type, ((panda$core$Object*) f4523), ((panda$collections$ListView*) children4533));
                    fieldRef4540 = $tmp4541;
                    panda$collections$Array$clear(children4533);
                    panda$collections$Array$add$panda$collections$Array$T(children4533, ((panda$core$Object*) fieldRef4540));
                    panda$collections$Array$add$panda$collections$Array$T(children4533, ((panda$core$Object*) f4523->value));
                    org$pandalanguage$pandac$IRNode* $tmp4543 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp4543->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp4543->refCount.value = 1;
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4543, ((panda$core$Int64) { 1023 }), ((org$pandalanguage$pandac$Symbol*) f4523)->position, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 73 }))), ((panda$collections$ListView*) children4533));
                    panda$collections$Array$add$panda$collections$Array$T(fieldInitializers4506, ((panda$core$Object*) $tmp4543));
                }
                }
            }
            goto $l4516;
            $l4517:;
        }
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp4546 = org$pandalanguage$pandac$Compiler$compileBlock$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_m->body);
    compiled4545 = $tmp4546;
    if (((panda$core$Bit) { compiled4545 != NULL }).value) {
    {
        if (((panda$core$Bit) { fieldInitializers4506 != NULL }).value) {
        {
            panda$collections$Array* $tmp4548 = (panda$collections$Array*) malloc(40);
            $tmp4548->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp4548->refCount.value = 1;
            panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp4548, ((panda$collections$ListView*) fieldInitializers4506));
            children4547 = $tmp4548;
            panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(children4547, ((panda$collections$CollectionView*) compiled4545->children));
            org$pandalanguage$pandac$IRNode* $tmp4550 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp4550->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp4550->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4550, ((panda$core$Int64) { 1000 }), p_m->body->position, ((panda$collections$ListView*) children4547));
            compiled4545 = $tmp4550;
        }
        }
    }
    }
    PANDA_ASSERT(((panda$core$Bit) { ((panda$core$Object*) self->symbolTable) == ((panda$core$Object*) symbols4484) }).value);
    self->symbolTable = old4482;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentMethod);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    panda$core$Bit $tmp4552 = org$pandalanguage$pandac$Annotations$isInline$R$panda$core$Bit(p_m->annotations);
    if ($tmp4552.value) {
    {
        p_m->compiledBody = compiled4545;
    }
    }
    return compiled4545;
}
void org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$IRNode* compiled4553;
    if (((panda$core$Bit) { p_m->body != NULL }).value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp4554 = org$pandalanguage$pandac$Compiler$compileBody$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$IRNode$Q(self, p_m);
        compiled4553 = $tmp4554;
        panda$core$Bit $tmp4556 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->errorCount, ((panda$core$Int64) { 0 }));
        bool $tmp4555 = $tmp4556.value;
        if (!$tmp4555) goto $l4557;
        $tmp4555 = ((panda$core$Bit) { compiled4553 != NULL }).value;
        $l4557:;
        panda$core$Bit $tmp4558 = { $tmp4555 };
        if ($tmp4558.value) {
        {
            ITable* $tmp4559 = self->codeGenerator->$class->itable;
            while ($tmp4559->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
                $tmp4559 = $tmp4559->next;
            }
            $fn4561 $tmp4560 = $tmp4559->methods[3];
            $tmp4560(self->codeGenerator, p_m, compiled4553);
        }
        }
    }
    }
    else {
    {
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
        ITable* $tmp4562 = self->codeGenerator->$class->itable;
        while ($tmp4562->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
            $tmp4562 = $tmp4562->next;
        }
        $fn4564 $tmp4563 = $tmp4562->methods[2];
        $tmp4563(self->codeGenerator, p_m);
    }
    }
}
void org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Iterator* inner$Iter4565;
    org$pandalanguage$pandac$ClassDecl* inner4577;
    p_cl->external = ((panda$core$Bit) { false });
    {
        ITable* $tmp4566 = ((panda$collections$Iterable*) p_cl->classes)->$class->itable;
        while ($tmp4566->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4566 = $tmp4566->next;
        }
        $fn4568 $tmp4567 = $tmp4566->methods[0];
        panda$collections$Iterator* $tmp4569 = $tmp4567(((panda$collections$Iterable*) p_cl->classes));
        inner$Iter4565 = $tmp4569;
        $l4570:;
        ITable* $tmp4572 = inner$Iter4565->$class->itable;
        while ($tmp4572->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4572 = $tmp4572->next;
        }
        $fn4574 $tmp4573 = $tmp4572->methods[0];
        panda$core$Bit $tmp4575 = $tmp4573(inner$Iter4565);
        panda$core$Bit $tmp4576 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4575);
        if (!$tmp4576.value) goto $l4571;
        {
            ITable* $tmp4578 = inner$Iter4565->$class->itable;
            while ($tmp4578->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4578 = $tmp4578->next;
            }
            $fn4580 $tmp4579 = $tmp4578->methods[1];
            panda$core$Object* $tmp4581 = $tmp4579(inner$Iter4565);
            inner4577 = ((org$pandalanguage$pandac$ClassDecl*) $tmp4581);
            org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl(self, inner4577);
        }
        goto $l4570;
        $l4571:;
    }
}
void org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$SymbolTable* old4589;
    panda$collections$Iterator* m$Iter4594;
    org$pandalanguage$pandac$MethodDecl* m4606;
    org$pandalanguage$pandac$ClassDecl* next4616;
    PANDA_ASSERT(((panda$core$Bit) { self->compiling == NULL }).value);
    self->compiling = p_cl;
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_cl));
    org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl(self, p_cl);
    panda$core$Bit $tmp4582 = org$pandalanguage$pandac$Annotations$isSpecialize$R$panda$core$Bit(p_cl->annotations);
    if ($tmp4582.value) {
    {
        ITable* $tmp4583 = self->codeGenerator->$class->itable;
        while ($tmp4583->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
            $tmp4583 = $tmp4583->next;
        }
        $fn4585 $tmp4584 = $tmp4583->methods[1];
        $tmp4584(self->codeGenerator, p_cl);
        ITable* $tmp4586 = self->codeGenerator->$class->itable;
        while ($tmp4586->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
            $tmp4586 = $tmp4586->next;
        }
        $fn4588 $tmp4587 = $tmp4586->methods[4];
        $tmp4587(self->codeGenerator, p_cl);
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
        return;
    }
    }
    old4589 = self->symbolTable;
    org$pandalanguage$pandac$SymbolTable* $tmp4590 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, p_cl);
    self->symbolTable = $tmp4590;
    ITable* $tmp4591 = self->codeGenerator->$class->itable;
    while ($tmp4591->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
        $tmp4591 = $tmp4591->next;
    }
    $fn4593 $tmp4592 = $tmp4591->methods[1];
    $tmp4592(self->codeGenerator, p_cl);
    {
        ITable* $tmp4595 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
        while ($tmp4595->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4595 = $tmp4595->next;
        }
        $fn4597 $tmp4596 = $tmp4595->methods[0];
        panda$collections$Iterator* $tmp4598 = $tmp4596(((panda$collections$Iterable*) p_cl->methods));
        m$Iter4594 = $tmp4598;
        $l4599:;
        ITable* $tmp4601 = m$Iter4594->$class->itable;
        while ($tmp4601->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4601 = $tmp4601->next;
        }
        $fn4603 $tmp4602 = $tmp4601->methods[0];
        panda$core$Bit $tmp4604 = $tmp4602(m$Iter4594);
        panda$core$Bit $tmp4605 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4604);
        if (!$tmp4605.value) goto $l4600;
        {
            ITable* $tmp4607 = m$Iter4594->$class->itable;
            while ($tmp4607->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4607 = $tmp4607->next;
            }
            $fn4609 $tmp4608 = $tmp4607->methods[1];
            panda$core$Object* $tmp4610 = $tmp4608(m$Iter4594);
            m4606 = ((org$pandalanguage$pandac$MethodDecl*) $tmp4610);
            org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$MethodDecl(self, m4606);
        }
        goto $l4599;
        $l4600:;
    }
    ITable* $tmp4611 = self->codeGenerator->$class->itable;
    while ($tmp4611->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
        $tmp4611 = $tmp4611->next;
    }
    $fn4613 $tmp4612 = $tmp4611->methods[4];
    $tmp4612(self->codeGenerator, p_cl);
    self->symbolTable = old4589;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    self->compiling = NULL;
    panda$core$Int64 $tmp4614 = panda$collections$Array$get_count$R$panda$core$Int64(self->compilationQueue);
    panda$core$Bit $tmp4615 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp4614, ((panda$core$Int64) { 0 }));
    if ($tmp4615.value) {
    {
        panda$core$Object* $tmp4617 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->compilationQueue, ((panda$core$Int64) { 0 }));
        next4616 = ((org$pandalanguage$pandac$ClassDecl*) $tmp4617);
        panda$collections$Array$removeIndex$panda$core$Int64(self->compilationQueue, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$ClassDecl(self, next4616);
    }
    }
    panda$core$Int64 $tmp4618 = panda$collections$Array$get_count$R$panda$core$Int64(self->compilationQueue);
    panda$core$Bit $tmp4619 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4618, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp4619.value);
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Compiler* self, panda$io$File* p_file) {
    panda$collections$ListView* result4620;
    org$pandalanguage$pandac$ASTNode* parsed4623;
    panda$collections$Iterator* cl$Iter4626;
    org$pandalanguage$pandac$ClassDecl* cl4638;
    panda$core$Object* $tmp4621 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->scans, ((panda$collections$Key*) p_file));
    result4620 = ((panda$collections$ListView*) $tmp4621);
    if (((panda$core$Bit) { result4620 == NULL }).value) {
    {
        panda$core$String* $tmp4622 = panda$io$File$readFully$R$panda$core$String(p_file);
        org$pandalanguage$pandac$parser$Parser$start$panda$io$File$panda$core$String(self->parser, p_file, $tmp4622);
        org$pandalanguage$pandac$ASTNode* $tmp4624 = org$pandalanguage$pandac$parser$Parser$file$R$org$pandalanguage$pandac$ASTNode$Q(self->parser);
        parsed4623 = $tmp4624;
        if (((panda$core$Bit) { parsed4623 != NULL }).value) {
        {
            panda$collections$ListView* $tmp4625 = org$pandalanguage$pandac$Scanner$scan$panda$io$File$org$pandalanguage$pandac$ASTNode$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(self->scanner, p_file, parsed4623);
            result4620 = $tmp4625;
            {
                ITable* $tmp4627 = ((panda$collections$Iterable*) result4620)->$class->itable;
                while ($tmp4627->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp4627 = $tmp4627->next;
                }
                $fn4629 $tmp4628 = $tmp4627->methods[0];
                panda$collections$Iterator* $tmp4630 = $tmp4628(((panda$collections$Iterable*) result4620));
                cl$Iter4626 = $tmp4630;
                $l4631:;
                ITable* $tmp4633 = cl$Iter4626->$class->itable;
                while ($tmp4633->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp4633 = $tmp4633->next;
                }
                $fn4635 $tmp4634 = $tmp4633->methods[0];
                panda$core$Bit $tmp4636 = $tmp4634(cl$Iter4626);
                panda$core$Bit $tmp4637 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4636);
                if (!$tmp4637.value) goto $l4632;
                {
                    ITable* $tmp4639 = cl$Iter4626->$class->itable;
                    while ($tmp4639->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp4639 = $tmp4639->next;
                    }
                    $fn4641 $tmp4640 = $tmp4639->methods[1];
                    panda$core$Object* $tmp4642 = $tmp4640(cl$Iter4626);
                    cl4638 = ((org$pandalanguage$pandac$ClassDecl*) $tmp4642);
                    panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classes, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) cl4638)->name), ((panda$core$Object*) cl4638));
                }
                goto $l4631;
                $l4632:;
            }
        }
        }
        else {
        {
            panda$collections$Array* $tmp4643 = (panda$collections$Array*) malloc(40);
            $tmp4643->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp4643->refCount.value = 1;
            panda$collections$Array$init($tmp4643);
            result4620 = ((panda$collections$ListView*) $tmp4643);
        }
        }
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->scans, ((panda$collections$Key*) p_file), ((panda$core$Object*) result4620));
    }
    }
    return result4620;
}
void org$pandalanguage$pandac$Compiler$compile$panda$io$File(org$pandalanguage$pandac$Compiler* self, panda$io$File* p_file) {
    panda$collections$ListView* classes4645;
    panda$collections$Iterator* cl$Iter4647;
    org$pandalanguage$pandac$ClassDecl* cl4659;
    panda$collections$ListView* $tmp4646 = org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(self, p_file);
    classes4645 = $tmp4646;
    {
        ITable* $tmp4648 = ((panda$collections$Iterable*) classes4645)->$class->itable;
        while ($tmp4648->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4648 = $tmp4648->next;
        }
        $fn4650 $tmp4649 = $tmp4648->methods[0];
        panda$collections$Iterator* $tmp4651 = $tmp4649(((panda$collections$Iterable*) classes4645));
        cl$Iter4647 = $tmp4651;
        $l4652:;
        ITable* $tmp4654 = cl$Iter4647->$class->itable;
        while ($tmp4654->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4654 = $tmp4654->next;
        }
        $fn4656 $tmp4655 = $tmp4654->methods[0];
        panda$core$Bit $tmp4657 = $tmp4655(cl$Iter4647);
        panda$core$Bit $tmp4658 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4657);
        if (!$tmp4658.value) goto $l4653;
        {
            ITable* $tmp4660 = cl$Iter4647->$class->itable;
            while ($tmp4660->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4660 = $tmp4660->next;
            }
            $fn4662 $tmp4661 = $tmp4660->methods[1];
            panda$core$Object* $tmp4663 = $tmp4661(cl$Iter4647);
            cl4659 = ((org$pandalanguage$pandac$ClassDecl*) $tmp4663);
            org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$ClassDecl(self, cl4659);
        }
        goto $l4652;
        $l4653:;
    }
}
void org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, panda$core$String* p_msg) {
    panda$core$Object* $tmp4664 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
    org$pandalanguage$pandac$Compiler$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$ClassDecl*) $tmp4664)->source, p_position, p_msg);
}
void org$pandalanguage$pandac$Compiler$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$Compiler* self, panda$io$File* p_file, org$pandalanguage$pandac$Position p_pos, panda$core$String* p_msg) {
    if (self->reportErrors.value) {
    {
        panda$core$Int64 $tmp4665 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->errorCount, ((panda$core$Int64) { 1 }));
        self->errorCount = $tmp4665;
        panda$core$String* $tmp4666 = panda$io$File$name$R$panda$core$String(p_file);
        panda$core$String* $tmp4667 = panda$core$String$convert$R$panda$core$String($tmp4666);
        panda$core$String* $tmp4669 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4667, &$s4668);
        panda$core$String* $tmp4670 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp4669, ((panda$core$Object*) wrap_org$pandalanguage$pandac$Position(p_pos)));
        panda$core$String* $tmp4672 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4670, &$s4671);
        panda$core$String* $tmp4673 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4672, p_msg);
        panda$core$String* $tmp4675 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4673, &$s4674);
        panda$io$Console$printLine$panda$core$Object(((panda$core$Object*) $tmp4675));
    }
    }
}
void org$pandalanguage$pandac$Compiler$finish(org$pandalanguage$pandac$Compiler* self) {
    ITable* $tmp4676 = self->codeGenerator->$class->itable;
    while ($tmp4676->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
        $tmp4676 = $tmp4676->next;
    }
    $fn4678 $tmp4677 = $tmp4676->methods[5];
    $tmp4677(self->codeGenerator);
}

