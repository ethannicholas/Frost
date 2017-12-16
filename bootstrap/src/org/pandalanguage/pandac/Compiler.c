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
typedef panda$core$Int64 (*$fn2151)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2173)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Int64 (*$fn2195)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn2212)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2218)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2224)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn2240)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn2262)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn2336)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2354)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn2431)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn2449)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2455)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2461)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2492)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2498)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2504)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2541)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2547)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2553)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2576)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2582)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2588)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3027)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3033)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3039)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3171)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3177)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3183)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn3291)(panda$core$Object*);
typedef panda$core$Int64 (*$fn3402)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn3418)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3424)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3430)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3548)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3554)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3560)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3800)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3806)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3812)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3947)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3953)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3959)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3989)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3995)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4001)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4112)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4118)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4124)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4270)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4276)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4282)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4365)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4371)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4377)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4428)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4434)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4440)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4504)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4510)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4516)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4555)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4561)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4567)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4579)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4585)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4591)(panda$collections$Iterator*);
typedef void (*$fn4626)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$MethodDecl*, org$pandalanguage$pandac$IRNode*);
typedef void (*$fn4629)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$collections$Iterator* (*$fn4633)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4639)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4645)(panda$collections$Iterator*);
typedef void (*$fn4650)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn4653)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn4658)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$collections$Iterator* (*$fn4662)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4668)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4674)(panda$collections$Iterator*);
typedef void (*$fn4678)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$collections$Iterator* (*$fn4694)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4700)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4706)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4715)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4721)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4727)(panda$collections$Iterator*);
typedef void (*$fn4743)(org$pandalanguage$pandac$CodeGenerator*);

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
static panda$core$String $s1744 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 19485, NULL };
static panda$core$String $s1949 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27", 10, 875040426634827830, NULL };
static panda$core$String $s1951 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 14, 2262695563077912654, NULL };
static panda$core$String $s1954 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1979 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27", 10, 875040426634827830, NULL };
static panda$core$String $s1981 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 14, 2262695563077912654, NULL };
static panda$core$String $s1984 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2017 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 19485, NULL };
static panda$core$String $s2083 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27", 10, 875040426634827830, NULL };
static panda$core$String $s2085 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 14, 2262695563077912654, NULL };
static panda$core$String $s2088 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2128 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6C\x75\x65\x20\x6F\x66\x20\x74\x79\x70\x65\x20\x27", 15, -1620219380461029456, NULL };
static panda$core$String $s2130 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x70\x6F\x73\x73\x69\x62\x6C\x79\x20\x62\x65\x20\x61\x6E\x20\x69\x6E\x73\x74\x61\x6E\x63\x65\x20\x6F\x66\x20", 36, -427166674877421096, NULL };
static panda$core$String $s2132 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2134 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2246 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2247 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, 216, NULL };
static panda$core$String $s2250 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x65\x78\x70\x65\x63\x74\x65\x64\x20", 10, -1007140463547215113, NULL };
static panda$core$String $s2254 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x61\x72\x67\x75\x6D\x65\x6E\x74", 9, 1450721239526715900, NULL };
static panda$core$String $s2257 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2259 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x74\x20\x72\x65\x63\x65\x69\x76\x65\x64\x20", 13, -1301083486074551925, NULL };
static panda$core$String $s2265 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2289 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x64\x69\x72\x65\x63\x74\x6C\x79\x20\x63\x61\x6C\x6C\x20\x27\x69\x6E\x69\x74\x27\x20\x6F\x75\x74\x73\x69\x64\x65\x20\x6F\x66\x20\x61\x6E\x20\x69\x6E\x69\x74\x20\x6D\x65\x74\x68\x6F\x64", 53, 84993564105955720, NULL };
static panda$core$String $s2299 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x69\x6E\x69\x74\x27\x20\x6D\x61\x79\x20\x6F\x6E\x6C\x79\x20\x62\x65\x20\x63\x61\x6C\x6C\x65\x64\x20\x6F\x6E\x20\x27\x73\x65\x6C\x66\x27\x20\x6F\x72\x20\x27\x73\x75\x70\x65\x72\x27", 46, 5737688576853633111, NULL };
static panda$core$String $s2314 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x63\x61\x6C\x6C\x20\x69\x6E\x73\x74\x61\x6E\x63\x65\x20", 21, -1285496544752055923, NULL };
static panda$core$String $s2317 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x66\x72\x6F\x6D\x20\x61\x20\x40\x63\x6C\x61\x73\x73\x20\x63\x6F\x6E\x74\x65\x78\x74", 22, 6236893689928691337, NULL };
static panda$core$String $s2328 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x63\x61\x6C\x6C\x20\x63\x6C\x61\x73\x73\x20", 18, 4176321021903236102, NULL };
static panda$core$String $s2331 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x6F\x6E\x20\x61\x6E\x20\x69\x6E\x73\x74\x61\x6E\x63\x65", 15, 4946791728819903386, NULL };
static panda$core$String $s2367 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s2384 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x63\x61\x6C\x6C\x20\x61\x20\x6D\x65\x74\x68\x6F\x64\x20\x6F\x6E\x20\x6E\x6F\x6E\x2D\x63\x6C\x61\x73\x73\x20\x74\x79\x70\x65\x20\x27", 40, 2057026257004143426, NULL };
static panda$core$String $s2386 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2392 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6C\x61\x73\x73\x20\x27", 7, 213449334494206, NULL };
static panda$core$String $s2394 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x64\x6F\x65\x73\x20\x6E\x6F\x74\x20\x68\x61\x76\x65\x20\x61\x20\x6D\x65\x6D\x62\x65\x72\x20\x6E\x61\x6D\x65\x64\x20\x27", 32, -5677460192622646983, NULL };
static panda$core$String $s2397 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2404 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2406 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s2409 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x69\x73\x20\x6E\x6F\x74\x20\x61\x20\x6D\x65\x74\x68\x6F\x64", 17, 1918101523522592587, NULL };
static panda$core$String $s2436 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x6F\x20\x6D\x61\x74\x63\x68\x20\x66\x6F\x72\x20\x63\x61\x6C\x6C\x20\x74\x6F\x20\x27", 22, 7814600009206081200, NULL };
static panda$core$String $s2438 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s2441 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2445 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2463 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2464 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x27", 2, 14381, NULL };
static panda$core$String $s2465 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x77\x69\x74\x68\x20\x72\x65\x74\x75\x72\x6E\x20\x74\x79\x70\x65\x20\x27", 19, -3030064837581027794, NULL };
static panda$core$String $s2467 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2515 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x69\x74", 4, 213374837, NULL };
static panda$core$String $s2525 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6C\x75\x65\x20\x6F\x66\x20\x74\x79\x70\x65\x20\x27", 15, -1620219380461029456, NULL };
static panda$core$String $s2527 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x69\x73\x20\x6E\x6F\x74\x20\x61\x20\x6D\x65\x74\x68\x6F\x64", 17, 1918101523522592587, NULL };
static panda$core$String $s2535 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2537 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2555 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2558 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x3E\x28", 4, 146931305, NULL };
static panda$core$String $s2559 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x26\x3E\x28", 5, 14839819243, NULL };
static panda$core$String $s2572 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2590 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2593 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x3E\x28", 4, 146931305, NULL };
static panda$core$String $s2594 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x26\x3E\x28", 5, 14839819243, NULL };
static panda$core$String $s2611 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2B", 1, 144, NULL };
static panda$core$String $s2612 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D", 1, 146, NULL };
static panda$core$String $s2613 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 143, NULL };
static panda$core$String $s2614 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, 148, NULL };
static panda$core$String $s2615 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F\x2F", 2, 14995, NULL };
static panda$core$String $s2616 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 138, NULL };
static panda$core$String $s2617 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5E", 1, 195, NULL };
static panda$core$String $s2618 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3D", 1, 162, NULL };
static panda$core$String $s2619 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x3D", 2, 13595, NULL };
static panda$core$String $s2620 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 163, NULL };
static panda$core$String $s2621 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 161, NULL };
static panda$core$String $s2622 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E\x3D", 2, 16524, NULL };
static panda$core$String $s2623 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x3D", 2, 16322, NULL };
static panda$core$String $s2624 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1, 225, NULL };
static panda$core$String $s2625 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C\x7C", 2, 22849, NULL };
static panda$core$String $s2626 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s2627 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26\x26", 2, 14077, NULL };
static panda$core$String $s2628 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7E", 1, 227, NULL };
static panda$core$String $s2629 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7E\x7E", 2, 23053, NULL };
static panda$core$String $s2630 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21", 1, 134, NULL };
static panda$core$String $s2631 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x21", 2, 13567, NULL };
static panda$core$String $s2632 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x3C", 2, 16321, NULL };
static panda$core$String $s2633 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E\x3E", 2, 16525, NULL };
static panda$core$String $s2634 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 19485, NULL };
static panda$core$String $s2635 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A\x3D", 2, 16120, NULL };
static panda$core$String $s2636 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3D\x3D", 2, 16423, NULL };
static panda$core$String $s2637 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x3D\x3D", 3, 1373156, NULL };
static panda$core$String $s2758 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x76\x61\x6C\x69\x64\x20\x6E\x75\x6D\x65\x72\x69\x63\x20\x6F\x70\x65\x72\x61\x74\x69\x6F\x6E", 25, 9019145596080302696, NULL };
static panda$core$String $s2770 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D\x3A\x3D", 4, 198772404, NULL };
static panda$core$String $s2818 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6F\x6E\x76\x65\x72\x74", 7, 213482220537370, NULL };
static panda$core$String $s2822 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D\x3A\x3D", 4, 198772404, NULL };
static panda$core$String $s2920 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2923 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x6F\x70\x65\x72\x61\x74\x65\x20\x6F\x6E\x20\x27", 21, -3266050109438970469, NULL };
static panda$core$String $s2926 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20", 3, 1432616, NULL };
static panda$core$String $s2928 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2930 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2937 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2940 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x6F\x70\x65\x72\x61\x74\x65\x20\x6F\x6E\x20\x27", 21, -3266050109438970469, NULL };
static panda$core$String $s2943 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20", 3, 1432616, NULL };
static panda$core$String $s2945 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2947 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2969 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x61\x73\x73\x69\x67\x6E\x20\x74\x6F\x20\x74\x68\x69\x73\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6F\x6E", 32, -4891466264852316840, NULL };
static panda$core$String $s2981 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x61\x73\x73\x69\x67\x6E\x20\x74\x6F\x20\x74\x68\x69\x73\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6F\x6E", 32, -4891466264852316840, NULL };
static panda$core$String $s2998 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6F\x6E\x76\x65\x72\x74", 7, 213482220537370, NULL };
static panda$core$String $s3012 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 19485, NULL };
static panda$core$String $s3081 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3084 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x6F\x70\x65\x72\x61\x74\x65\x20\x6F\x6E\x20\x27", 21, -3266050109438970469, NULL };
static panda$core$String $s3087 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20\x27", 4, 144694255, NULL };
static panda$core$String $s3090 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3204 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x6D\x65\x74\x68\x6F\x64\x3E", 8, 17378158564789264, NULL };
static panda$core$String $s3227 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6E\x75\x6D\x62\x65\x72\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 30, 5304221197101987767, NULL };
static panda$core$String $s3229 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3237 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6E\x75\x6D\x62\x65\x72\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 30, 5304221197101987767, NULL };
static panda$core$String $s3239 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3293 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s3296 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3315 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6C\x61\x73\x73\x20\x27", 7, 213449334494206, NULL };
static panda$core$String $s3317 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x64\x6F\x65\x73\x20\x6E\x6F\x74\x20\x68\x61\x76\x65\x20\x61\x20\x6D\x65\x6D\x62\x65\x72\x20\x6E\x61\x6D\x65\x64\x20\x27", 32, -5677460192622646983, NULL };
static panda$core$String $s3320 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3379 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x61\x6E\x67\x65\x20\x73\x74\x65\x70\x20\x63\x61\x6E\x6E\x6F\x74\x20\x62\x65\x20\x6E\x75\x6C\x6C", 25, 4479279434458851015, NULL };
static panda$core$String $s3387 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x75\x6E\x72\x65\x73\x6F\x6C\x76\x65\x64\x20\x72\x61\x6E\x67\x65\x3E", 18, -1293962867859660245, NULL };
static panda$core$String $s3396 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x72\x65\x66\x65\x72\x65\x6E\x63\x65\x20\x27\x73\x65\x6C\x66\x27\x20\x66\x72\x6F\x6D\x20\x61\x20\x40\x63\x6C\x61\x73\x73\x20\x6D\x65\x74\x68\x6F\x64", 44, -511889306060728385, NULL };
static panda$core$String $s3414 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3437 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s3440 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3444 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3455 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x72\x65\x66\x65\x72\x65\x6E\x63\x65\x20\x27\x73\x75\x70\x65\x72\x27\x20\x66\x72\x6F\x6D\x20\x61\x20\x40\x63\x6C\x61\x73\x73\x20\x6D\x65\x74\x68\x6F\x64", 45, 3734810722724983720, NULL };
static panda$core$String $s3463 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s3487 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6C\x75\x65\x20\x6F\x66\x20\x74\x79\x70\x65\x20\x27", 15, -1620219380461029456, NULL };
static panda$core$String $s3489 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x70\x6F\x73\x73\x69\x62\x6C\x79\x20\x62\x65\x20\x61\x6E\x20\x69\x6E\x73\x74\x61\x6E\x63\x65\x20\x6F\x66\x20", 36, -427166674877421096, NULL };
static panda$core$String $s3491 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3493 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3520 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x64\x6F\x65\x73\x20\x6E\x6F\x74\x20\x72\x65\x74\x75\x72\x6E\x20\x61\x20\x76\x61\x6C\x75\x65", 24, -3977552604268313933, NULL };
static panda$core$String $s3613 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x6F\x72\x20\x6C\x6F\x6F\x70\x20\x76\x61\x72\x69\x61\x62\x6C\x65\x20\x63\x61\x6E\x6E\x6F\x74\x20\x68\x61\x76\x65\x20\x6E\x75\x6C\x6C\x61\x62\x6C\x65\x20\x74\x79\x70\x65\x20\x27", 45, 3211461562751374179, NULL };
static panda$core$String $s3615 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3619 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x6F\x72\x20\x6C\x6F\x6F\x70\x20\x76\x61\x72\x69\x61\x62\x6C\x65\x20\x63\x61\x6E\x6E\x6F\x74\x20\x68\x61\x76\x65\x20\x6E\x6F\x6E\x2D\x6E\x75\x6D\x65\x72\x69\x63\x20\x74\x79\x70\x65\x20\x27", 48, 6391877092008549907, NULL };
static panda$core$String $s3621 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3667 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x6F\x72\x20\x6C\x6F\x6F\x70\x20\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6E\x75\x6D\x65\x72\x69\x63\x20\x72\x61\x6E\x67\x65\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 46, 6859502832880265551, NULL };
static panda$core$String $s3669 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3701 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 161, NULL };
static panda$core$String $s3705 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 163, NULL };
static panda$core$String $s3710 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x49\x74\x65\x72", 5, 14332680541, NULL };
static panda$core$String $s3733 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x65\x74\x5F\x64\x6F\x6E\x65", 8, 21980003879763538, NULL };
static panda$core$String $s3738 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21", 1, 134, NULL };
static panda$core$String $s3750 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x65\x78\x74", 4, 218436048, NULL };
static panda$core$String $s3836 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x74\x65\x72\x61\x74\x6F\x72", 8, 22210198075044275, NULL };
static panda$core$String $s3844 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6E\x20\x49\x74\x65\x72\x61\x62\x6C\x65\x20\x6F\x72\x20\x49\x74\x65\x72\x61\x74\x6F\x72\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 45, 562271959045909027, NULL };
static panda$core$String $s3846 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3909 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x63\x6C\x61\x72\x61\x74\x69\x6F\x6E\x20\x68\x61\x73\x20\x6E\x65\x69\x74\x68\x65\x72\x20\x61\x20\x74\x79\x70\x65\x20\x6E\x6F\x72\x20\x61\x20\x76\x61\x6C\x75\x65", 42, 71025131614347466, NULL };
static panda$core$String $s3970 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x62\x72\x65\x61\x6B\x20", 7, 149654778879689, NULL };
static panda$core$String $s3972 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20\x69\x6E\x73\x69\x64\x65\x20\x61\x20\x6C\x6F\x6F\x70\x20\x6C\x61\x62\x65\x6C\x6C\x65\x64\x20", 33, 5869484791969643332, NULL };
static panda$core$String $s3974 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3976 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A\x27", 2, 16098, NULL };
static panda$core$String $s3981 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x62\x72\x65\x61\x6B\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20\x69\x6E\x73\x69\x64\x65\x20\x61\x20\x6C\x6F\x6F\x70", 29, -2107280000252113069, NULL };
static panda$core$String $s4012 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x63\x6F\x6E\x74\x69\x6E\x75\x65\x20", 10, 6626032424543403513, NULL };
static panda$core$String $s4014 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20\x69\x6E\x73\x69\x64\x65\x20\x61\x20\x6C\x6F\x6F\x70\x20\x6C\x61\x62\x65\x6C\x6C\x65\x64\x20", 33, 5869484791969643332, NULL };
static panda$core$String $s4016 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s4018 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A\x27", 2, 16098, NULL };
static panda$core$String $s4023 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x63\x6F\x6E\x74\x69\x6E\x75\x65\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20\x69\x6E\x73\x69\x64\x65\x20\x61\x20\x6C\x6F\x6F\x70", 32, -6048052453244835837, NULL };
static panda$core$String $s4037 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x72\x65\x74\x75\x72\x6E\x20\x61\x20\x76\x61\x6C\x75\x65\x20\x66\x72\x6F\x6D\x20\x61\x20\x6D\x65\x74\x68\x6F\x64\x20\x77\x69\x74\x68\x20\x6E\x6F\x20\x72\x65\x74\x75\x72\x6E\x20\x74\x79\x70\x65", 55, -6755143087675264705, NULL };
static panda$core$String $s4051 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x72\x65\x74\x75\x72\x6E\x20\x76\x61\x6C\x75\x65", 23, 6159277012237708805, NULL };
static panda$core$String $s4071 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6C\x75\x65", 5, 22890280642, NULL };
static panda$core$String $s4138 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3D", 1, 162, NULL };
static panda$core$String $s4175 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1, 225, NULL };
static panda$core$String $s4226 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x6D\x61\x74\x63\x68\x24", 7, 146584075981198, NULL };
static panda$core$String $s4228 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5F", 1, 196, NULL };
static panda$core$String $s4231 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4733 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A", 1, 159, NULL };
static panda$core$String $s4736 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A\x20\x65\x72\x72\x6F\x72\x3A\x20", 9, 1725281418740475535, NULL };
static panda$core$String $s4739 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };

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
        if (((panda$core$Bit) { resolved2117 != NULL }).value) {
        {
            panda$core$Bit $tmp2119 = org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, resolved2117, p_target);
            result2110 = $tmp2119;
        }
        }
    }
    }
    return result2110;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_node, org$pandalanguage$pandac$Position p_position, panda$core$Bit p_isExplicit, org$pandalanguage$pandac$Type* p_target) {
    org$pandalanguage$pandac$IRNode* resolved2140;
    panda$collections$Array* children2143;
    panda$core$Bit $tmp2120 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_node->type, p_target);
    if ($tmp2120.value) {
    {
        return p_node;
    }
    }
    org$pandalanguage$pandac$Type* $tmp2121 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2122 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp2121);
    PANDA_ASSERT($tmp2122.value);
    bool $tmp2123 = p_isExplicit.value;
    if (!$tmp2123) goto $l2124;
    panda$core$Bit $tmp2125 = org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_node, p_target);
    panda$core$Bit $tmp2126 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2125);
    $tmp2123 = $tmp2126.value;
    $l2124:;
    panda$core$Bit $tmp2127 = { $tmp2123 };
    if ($tmp2127.value) {
    {
        panda$core$String* $tmp2129 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2128, ((panda$core$Object*) p_node->type));
        panda$core$String* $tmp2131 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2129, &$s2130);
        panda$core$String* $tmp2133 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2132, ((panda$core$Object*) p_target));
        panda$core$String* $tmp2135 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2133, &$s2134);
        panda$core$String* $tmp2136 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2131, $tmp2135);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp2136);
    }
    }
    switch (p_node->kind.value) {
        case 1004:
        case 1032:
        case 1011:
        {
            org$pandalanguage$pandac$IRNode* $tmp2137 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_node, p_target);
            return $tmp2137;
        }
        break;
        case 1039:
        case 1040:
        {
            panda$core$Int64$nullable $tmp2138 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_node, p_target);
            if (((panda$core$Bit) { $tmp2138.nonnull }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2139 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_node, p_target);
                return $tmp2139;
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp2141 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_node);
            resolved2140 = $tmp2141;
            if (((panda$core$Bit) { resolved2140 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2142 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, resolved2140, p_position, p_isExplicit, p_target);
                return $tmp2142;
            }
            }
        }
        break;
    }
    panda$collections$Array* $tmp2144 = (panda$collections$Array*) malloc(40);
    $tmp2144->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2144->refCount.value = 1;
    panda$collections$Array$init($tmp2144);
    children2143 = $tmp2144;
    panda$collections$Array$add$panda$collections$Array$T(children2143, ((panda$core$Object*) p_node));
    org$pandalanguage$pandac$IRNode* $tmp2146 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp2146->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2146->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2146, ((panda$core$Int64) { 1009 }), p_position, p_target, ((panda$core$Object*) wrap_panda$core$Bit(p_isExplicit)), ((panda$collections$ListView*) children2143));
    return $tmp2146;
}
panda$core$Int64$nullable org$pandalanguage$pandac$Compiler$callCost$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodRef* p_m, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedReturn) {
    panda$core$Int64 result2154;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2155;
    panda$core$Int64$nullable cost2170;
    panda$core$Int64$nullable cost2184;
    PANDA_ASSERT(p_m->value->resolved.value);
    panda$core$Int64 $tmp2148 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
    ITable* $tmp2149 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp2149->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2149 = $tmp2149->next;
    }
    $fn2151 $tmp2150 = $tmp2149->methods[0];
    panda$core$Int64 $tmp2152 = $tmp2150(((panda$collections$CollectionView*) p_args));
    panda$core$Bit $tmp2153 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp2148, $tmp2152);
    if ($tmp2153.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    result2154 = ((panda$core$Int64) { 0 });
    panda$core$Int64 $tmp2156 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2155, ((panda$core$Int64) { 0 }), $tmp2156, ((panda$core$Bit) { false }));
    int64_t $tmp2158 = $tmp2155.min.value;
    panda$core$Int64 i2157 = { $tmp2158 };
    int64_t $tmp2160 = $tmp2155.max.value;
    bool $tmp2161 = $tmp2155.inclusive.value;
    if ($tmp2161) goto $l2168; else goto $l2169;
    $l2168:;
    if ($tmp2158 <= $tmp2160) goto $l2162; else goto $l2164;
    $l2169:;
    if ($tmp2158 < $tmp2160) goto $l2162; else goto $l2164;
    $l2162:;
    {
        ITable* $tmp2171 = p_args->$class->itable;
        while ($tmp2171->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2171 = $tmp2171->next;
        }
        $fn2173 $tmp2172 = $tmp2171->methods[0];
        panda$core$Object* $tmp2174 = $tmp2172(p_args, i2157);
        org$pandalanguage$pandac$Type* $tmp2175 = org$pandalanguage$pandac$MethodRef$parameter$panda$core$Int64$R$org$pandalanguage$pandac$Type(p_m, i2157);
        panda$core$Int64$nullable $tmp2176 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp2174), $tmp2175);
        cost2170 = $tmp2176;
        if (((panda$core$Bit) { !cost2170.nonnull }).value) {
        {
            return ((panda$core$Int64$nullable) { .nonnull = false });
        }
        }
        panda$core$Int64 $tmp2177 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result2154, ((panda$core$Int64) cost2170.value));
        result2154 = $tmp2177;
    }
    $l2165:;
    int64_t $tmp2179 = $tmp2160 - i2157.value;
    if ($tmp2161) goto $l2180; else goto $l2181;
    $l2180:;
    if ($tmp2179 >= 1) goto $l2178; else goto $l2164;
    $l2181:;
    if ($tmp2179 > 1) goto $l2178; else goto $l2164;
    $l2178:;
    i2157.value += 1;
    goto $l2162;
    $l2164:;
    if (((panda$core$Bit) { p_expectedReturn != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp2185 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(p_m);
        panda$core$Int64$nullable $tmp2186 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp2185, p_expectedReturn);
        cost2184 = $tmp2186;
        if (((panda$core$Bit) { !cost2184.nonnull }).value) {
        {
            return ((panda$core$Int64$nullable) { .nonnull = false });
        }
        }
        panda$core$Int64 $tmp2187 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result2154, ((panda$core$Int64) cost2184.value));
        result2154 = $tmp2187;
    }
    }
    org$pandalanguage$pandac$Type* $tmp2190 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->value->owner);
    panda$core$Bit $tmp2191 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit($tmp2190);
    bool $tmp2189 = $tmp2191.value;
    if (!$tmp2189) goto $l2192;
    ITable* $tmp2193 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp2193->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2193 = $tmp2193->next;
    }
    $fn2195 $tmp2194 = $tmp2193->methods[0];
    panda$core$Int64 $tmp2196 = $tmp2194(((panda$collections$CollectionView*) p_args));
    panda$core$Bit $tmp2197 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2196, ((panda$core$Int64) { 1 }));
    $tmp2189 = $tmp2197.value;
    $l2192:;
    panda$core$Bit $tmp2198 = { $tmp2189 };
    bool $tmp2188 = $tmp2198.value;
    if (!$tmp2188) goto $l2199;
    panda$core$Object* $tmp2200 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->value->parameters, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp2201 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->value->owner);
    panda$core$Bit $tmp2202 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp2200)->type, $tmp2201);
    $tmp2188 = $tmp2202.value;
    $l2199:;
    panda$core$Bit $tmp2203 = { $tmp2188 };
    if ($tmp2203.value) {
    {
        panda$core$Int64 $tmp2204 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result2154, ((panda$core$Int64) { 1 }));
        result2154 = $tmp2204;
    }
    }
    return ((panda$core$Int64$nullable) { result2154, true });
}
panda$core$Int64$nullable org$pandalanguage$pandac$Compiler$matchMethods$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(org$pandalanguage$pandac$Compiler* self, panda$collections$Array* p_methods, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedReturn) {
    panda$collections$Array* result2205;
    panda$core$Int64$nullable best2208;
    panda$collections$Iterator* m$Iter2209;
    org$pandalanguage$pandac$MethodRef* m2221;
    panda$core$Int64$nullable cost2226;
    panda$collections$Array* $tmp2206 = (panda$collections$Array*) malloc(40);
    $tmp2206->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2206->refCount.value = 1;
    panda$collections$Array$init($tmp2206);
    result2205 = $tmp2206;
    best2208 = ((panda$core$Int64$nullable) { .nonnull = false });
    {
        ITable* $tmp2210 = ((panda$collections$Iterable*) p_methods)->$class->itable;
        while ($tmp2210->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2210 = $tmp2210->next;
        }
        $fn2212 $tmp2211 = $tmp2210->methods[0];
        panda$collections$Iterator* $tmp2213 = $tmp2211(((panda$collections$Iterable*) p_methods));
        m$Iter2209 = $tmp2213;
        $l2214:;
        ITable* $tmp2216 = m$Iter2209->$class->itable;
        while ($tmp2216->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2216 = $tmp2216->next;
        }
        $fn2218 $tmp2217 = $tmp2216->methods[0];
        panda$core$Bit $tmp2219 = $tmp2217(m$Iter2209);
        panda$core$Bit $tmp2220 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2219);
        if (!$tmp2220.value) goto $l2215;
        {
            ITable* $tmp2222 = m$Iter2209->$class->itable;
            while ($tmp2222->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2222 = $tmp2222->next;
            }
            $fn2224 $tmp2223 = $tmp2222->methods[1];
            panda$core$Object* $tmp2225 = $tmp2223(m$Iter2209);
            m2221 = ((org$pandalanguage$pandac$MethodRef*) $tmp2225);
            panda$core$Int64$nullable $tmp2227 = org$pandalanguage$pandac$Compiler$callCost$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(self, m2221, p_args, p_expectedReturn);
            cost2226 = $tmp2227;
            if (((panda$core$Bit) { !cost2226.nonnull }).value) {
            {
                goto $l2214;
            }
            }
            bool $tmp2228 = ((panda$core$Bit) { !best2208.nonnull }).value;
            if ($tmp2228) goto $l2229;
            panda$core$Bit $tmp2230 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost2226.value), ((panda$core$Int64) best2208.value));
            $tmp2228 = $tmp2230.value;
            $l2229:;
            panda$core$Bit $tmp2231 = { $tmp2228 };
            if ($tmp2231.value) {
            {
                panda$collections$Array$clear(result2205);
                best2208 = cost2226;
            }
            }
            panda$core$Bit $tmp2235;
            if (((panda$core$Bit) { cost2226.nonnull }).value) goto $l2232; else goto $l2233;
            $l2232:;
            panda$core$Bit $tmp2236 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost2226.value), ((panda$core$Int64) best2208.value));
            $tmp2235 = $tmp2236;
            goto $l2234;
            $l2233:;
            $tmp2235 = ((panda$core$Bit) { false });
            goto $l2234;
            $l2234:;
            if ($tmp2235.value) {
            {
                panda$collections$Array$add$panda$collections$Array$T(result2205, ((panda$core$Object*) m2221));
            }
            }
        }
        goto $l2214;
        $l2215:;
    }
    panda$collections$Array$clear(p_methods);
    panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(p_methods, ((panda$collections$CollectionView*) result2205));
    return best2208;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$MethodRef* p_m, panda$collections$ListView* p_args) {
    panda$core$String* s2243;
    panda$collections$Array* finalArgs2268;
    org$pandalanguage$pandac$IRNode* selfNode2304;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2333;
    org$pandalanguage$pandac$IRNode* coerced2351;
    org$pandalanguage$pandac$IRNode* result2366;
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
        panda$core$Int64 $tmp2244 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
        panda$core$Bit $tmp2245 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2244, ((panda$core$Int64) { 1 }));
        if ($tmp2245.value) {
        {
            s2243 = &$s2246;
        }
        }
        else {
        {
            s2243 = &$s2247;
        }
        }
        panda$core$String* $tmp2248 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(p_m->value);
        panda$core$String* $tmp2249 = panda$core$String$convert$R$panda$core$String($tmp2248);
        panda$core$String* $tmp2251 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2249, &$s2250);
        panda$core$Int64 $tmp2252 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
        panda$core$String* $tmp2253 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2251, ((panda$core$Object*) wrap_panda$core$Int64($tmp2252)));
        panda$core$String* $tmp2255 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2253, &$s2254);
        panda$core$String* $tmp2256 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2255, s2243);
        panda$core$String* $tmp2258 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2256, &$s2257);
        ITable* $tmp2260 = ((panda$collections$CollectionView*) p_args)->$class->itable;
        while ($tmp2260->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp2260 = $tmp2260->next;
        }
        $fn2262 $tmp2261 = $tmp2260->methods[0];
        panda$core$Int64 $tmp2263 = $tmp2261(((panda$collections$CollectionView*) p_args));
        panda$core$String* $tmp2264 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2259, ((panda$core$Object*) wrap_panda$core$Int64($tmp2263)));
        panda$core$String* $tmp2266 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2264, &$s2265);
        panda$core$String* $tmp2267 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2258, $tmp2266);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp2267);
        return NULL;
    }
    }
    panda$collections$Array* $tmp2269 = (panda$collections$Array*) malloc(40);
    $tmp2269->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2269->refCount.value = 1;
    panda$collections$Array$init($tmp2269);
    finalArgs2268 = $tmp2269;
    bool $tmp2272 = ((panda$core$Bit) { p_target != NULL }).value;
    if (!$tmp2272) goto $l2273;
    panda$core$Bit $tmp2274 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1038 }));
    $tmp2272 = $tmp2274.value;
    $l2273:;
    panda$core$Bit $tmp2275 = { $tmp2272 };
    bool $tmp2271 = $tmp2275.value;
    if (!$tmp2271) goto $l2276;
    panda$core$Bit $tmp2277 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->value->annotations);
    panda$core$Bit $tmp2278 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2277);
    $tmp2271 = $tmp2278.value;
    $l2276:;
    panda$core$Bit $tmp2279 = { $tmp2271 };
    if ($tmp2279.value) {
    {
        org$pandalanguage$pandac$Type* $tmp2280 = org$pandalanguage$pandac$MethodRef$owner$R$org$pandalanguage$pandac$Type(p_m);
        org$pandalanguage$pandac$IRNode* $tmp2281 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, p_target, p_position, ((panda$core$Bit) { false }), $tmp2280);
        panda$collections$Array$add$panda$collections$Array$T(finalArgs2268, ((panda$core$Object*) $tmp2281));
    }
    }
    panda$core$Bit $tmp2282 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->value->methodKind, ((panda$core$Int64) { 59 }));
    if ($tmp2282.value) {
    {
        if (((panda$core$Bit) { p_target == NULL }).value) {
        {
            panda$core$Object* $tmp2283 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
            panda$core$Bit $tmp2284 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp2283)->methodKind, ((panda$core$Int64) { 59 }));
            if ($tmp2284.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2285 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2285->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2285->refCount.value = 1;
                panda$core$Object* $tmp2287 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
                org$pandalanguage$pandac$Type* $tmp2288 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp2287));
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp2285, ((panda$core$Int64) { 1025 }), p_position, $tmp2288);
                panda$collections$Array$add$panda$collections$Array$T(finalArgs2268, ((panda$core$Object*) $tmp2285));
            }
            }
            else {
            {
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s2289);
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp2292 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1025 }));
        bool $tmp2291 = $tmp2292.value;
        if (!$tmp2291) goto $l2293;
        panda$core$Bit $tmp2294 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1024 }));
        $tmp2291 = $tmp2294.value;
        $l2293:;
        panda$core$Bit $tmp2295 = { $tmp2291 };
        bool $tmp2290 = $tmp2295.value;
        if (!$tmp2290) goto $l2296;
        panda$core$Bit $tmp2297 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1038 }));
        $tmp2290 = $tmp2297.value;
        $l2296:;
        panda$core$Bit $tmp2298 = { $tmp2290 };
        if ($tmp2298.value) {
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s2299);
        }
        }
        }
    }
    }
    else {
    panda$core$Bit $tmp2301 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(p_m->value);
    bool $tmp2300 = $tmp2301.value;
    if (!$tmp2300) goto $l2302;
    $tmp2300 = ((panda$core$Bit) { p_target == NULL }).value;
    $l2302:;
    panda$core$Bit $tmp2303 = { $tmp2300 };
    if ($tmp2303.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2305 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2305->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2305->refCount.value = 1;
        panda$core$Object* $tmp2307 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
        org$pandalanguage$pandac$Type* $tmp2308 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp2307));
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp2305, ((panda$core$Int64) { 1025 }), p_position, $tmp2308);
        selfNode2304 = $tmp2305;
        org$pandalanguage$pandac$Type* $tmp2309 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->value->owner);
        org$pandalanguage$pandac$IRNode* $tmp2310 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, selfNode2304, $tmp2309);
        selfNode2304 = $tmp2310;
        PANDA_ASSERT(((panda$core$Bit) { selfNode2304 != NULL }).value);
        panda$collections$Array$add$panda$collections$Array$T(finalArgs2268, ((panda$core$Object*) selfNode2304));
        panda$core$Object* $tmp2311 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
        panda$core$Bit $tmp2312 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp2311));
        panda$core$Bit $tmp2313 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2312);
        if ($tmp2313.value) {
        {
            panda$core$String* $tmp2315 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(p_m->value);
            panda$core$String* $tmp2316 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2314, $tmp2315);
            panda$core$String* $tmp2318 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2316, &$s2317);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp2318);
        }
        }
    }
    }
    else {
    panda$core$Bit $tmp2321 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(p_m->value);
    panda$core$Bit $tmp2322 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2321);
    bool $tmp2320 = $tmp2322.value;
    if (!$tmp2320) goto $l2323;
    $tmp2320 = ((panda$core$Bit) { p_target != NULL }).value;
    $l2323:;
    panda$core$Bit $tmp2324 = { $tmp2320 };
    bool $tmp2319 = $tmp2324.value;
    if (!$tmp2319) goto $l2325;
    panda$core$Bit $tmp2326 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1001 }));
    $tmp2319 = $tmp2326.value;
    $l2325:;
    panda$core$Bit $tmp2327 = { $tmp2319 };
    if ($tmp2327.value) {
    {
        panda$core$String* $tmp2329 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(p_m->value);
        panda$core$String* $tmp2330 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2328, $tmp2329);
        panda$core$String* $tmp2332 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2330, &$s2331);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp2332);
    }
    }
    }
    }
    ITable* $tmp2334 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp2334->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2334 = $tmp2334->next;
    }
    $fn2336 $tmp2335 = $tmp2334->methods[0];
    panda$core$Int64 $tmp2337 = $tmp2335(((panda$collections$CollectionView*) p_args));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2333, ((panda$core$Int64) { 0 }), $tmp2337, ((panda$core$Bit) { false }));
    int64_t $tmp2339 = $tmp2333.min.value;
    panda$core$Int64 i2338 = { $tmp2339 };
    int64_t $tmp2341 = $tmp2333.max.value;
    bool $tmp2342 = $tmp2333.inclusive.value;
    if ($tmp2342) goto $l2349; else goto $l2350;
    $l2349:;
    if ($tmp2339 <= $tmp2341) goto $l2343; else goto $l2345;
    $l2350:;
    if ($tmp2339 < $tmp2341) goto $l2343; else goto $l2345;
    $l2343:;
    {
        ITable* $tmp2352 = p_args->$class->itable;
        while ($tmp2352->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2352 = $tmp2352->next;
        }
        $fn2354 $tmp2353 = $tmp2352->methods[0];
        panda$core$Object* $tmp2355 = $tmp2353(p_args, i2338);
        org$pandalanguage$pandac$Type* $tmp2356 = org$pandalanguage$pandac$MethodRef$parameter$panda$core$Int64$R$org$pandalanguage$pandac$Type(p_m, i2338);
        org$pandalanguage$pandac$IRNode* $tmp2357 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp2355), $tmp2356);
        coerced2351 = $tmp2357;
        if (((panda$core$Bit) { coerced2351 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Object* $tmp2358 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->value->parameters, i2338);
        org$pandalanguage$pandac$IRNode* $tmp2359 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, coerced2351, p_position, ((panda$core$Bit) { false }), ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp2358)->type);
        coerced2351 = $tmp2359;
        if (((panda$core$Bit) { coerced2351 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(finalArgs2268, ((panda$core$Object*) coerced2351));
    }
    $l2346:;
    int64_t $tmp2361 = $tmp2341 - i2338.value;
    if ($tmp2342) goto $l2362; else goto $l2363;
    $l2362:;
    if ($tmp2361 >= 1) goto $l2360; else goto $l2345;
    $l2363:;
    if ($tmp2361 > 1) goto $l2360; else goto $l2345;
    $l2360:;
    i2338.value += 1;
    goto $l2343;
    $l2345:;
    panda$core$Bit $tmp2368 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_m->value->owner)->name, &$s2367);
    if ($tmp2368.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2369 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2369->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2369->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp2371 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(p_m);
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2369, ((panda$core$Int64) { 1005 }), p_position, $tmp2371, ((panda$core$Object*) p_m), ((panda$collections$ListView*) finalArgs2268));
        result2366 = $tmp2369;
    }
    }
    else {
    {
        org$pandalanguage$pandac$IRNode* $tmp2372 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2372->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2372->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2372, ((panda$core$Int64) { 1005 }), p_position, p_m->value->returnType, ((panda$core$Object*) p_m), ((panda$collections$ListView*) finalArgs2268));
        result2366 = $tmp2372;
        org$pandalanguage$pandac$Type* $tmp2374 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(p_m);
        org$pandalanguage$pandac$IRNode* $tmp2375 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, result2366, p_position, ((panda$core$Bit) { false }), $tmp2374);
        result2366 = $tmp2375;
    }
    }
    return result2366;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_target, panda$core$String* p_name, panda$collections$ListView* p_args) {
    org$pandalanguage$pandac$IRNode* $tmp2376 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_target, p_name, p_args, NULL);
    return $tmp2376;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_target, panda$core$String* p_name, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedType) {
    org$pandalanguage$pandac$IRNode* resolved2377;
    org$pandalanguage$pandac$ClassDecl* cl2379;
    org$pandalanguage$pandac$Symbol* s2389;
    org$pandalanguage$pandac$IRNode* ref2411;
    org$pandalanguage$pandac$IRNode* $tmp2378 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_target);
    resolved2377 = $tmp2378;
    if (((panda$core$Bit) { resolved2377 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp2380 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(resolved2377->kind, ((panda$core$Int64) { 1001 }));
    if ($tmp2380.value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp2381 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Type*) resolved2377->payload));
        cl2379 = $tmp2381;
    }
    }
    else {
    {
        panda$core$Bit $tmp2382 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(resolved2377->type);
        panda$core$Bit $tmp2383 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2382);
        if ($tmp2383.value) {
        {
            panda$core$String* $tmp2385 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2384, ((panda$core$Object*) resolved2377->type));
            panda$core$String* $tmp2387 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2385, &$s2386);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_target->position, $tmp2387);
            return NULL;
        }
        }
        org$pandalanguage$pandac$ClassDecl* $tmp2388 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, resolved2377->type);
        cl2379 = $tmp2388;
    }
    }
    if (((panda$core$Bit) { cl2379 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp2390 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl2379);
    org$pandalanguage$pandac$Symbol* $tmp2391 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp2390, p_name);
    s2389 = $tmp2391;
    if (((panda$core$Bit) { s2389 == NULL }).value) {
    {
        panda$core$String* $tmp2393 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2392, ((org$pandalanguage$pandac$Symbol*) cl2379)->name);
        panda$core$String* $tmp2395 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2393, &$s2394);
        panda$core$String* $tmp2396 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2395, p_name);
        panda$core$String* $tmp2398 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2396, &$s2397);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_target->position, $tmp2398);
        return NULL;
    }
    }
    panda$core$Bit $tmp2400 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(s2389->kind, ((panda$core$Int64) { 204 }));
    bool $tmp2399 = $tmp2400.value;
    if (!$tmp2399) goto $l2401;
    panda$core$Bit $tmp2402 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(s2389->kind, ((panda$core$Int64) { 205 }));
    $tmp2399 = $tmp2402.value;
    $l2401:;
    panda$core$Bit $tmp2403 = { $tmp2399 };
    if ($tmp2403.value) {
    {
        panda$core$String* $tmp2405 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2404, ((org$pandalanguage$pandac$Symbol*) cl2379)->name);
        panda$core$String* $tmp2407 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2405, &$s2406);
        panda$core$String* $tmp2408 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2407, p_name);
        panda$core$String* $tmp2410 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2408, &$s2409);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_target->position, $tmp2410);
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp2412 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl2379);
    org$pandalanguage$pandac$IRNode* $tmp2413 = org$pandalanguage$pandac$Compiler$symbolRef$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q(self, p_target->position, p_target, s2389, $tmp2412);
    ref2411 = $tmp2413;
    if (((panda$core$Bit) { ref2411 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp2414 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, ref2411, p_args, p_expectedType);
    return $tmp2414;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_m, panda$collections$ListView* p_args) {
    org$pandalanguage$pandac$IRNode* $tmp2415 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_m, p_args, NULL);
    return $tmp2415;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_m, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedType) {
    org$pandalanguage$pandac$IRNode* target2416;
    panda$collections$Array* methods2423;
    org$pandalanguage$pandac$MethodDecl* first2428;
    panda$core$MutableString* msg2433;
    panda$core$String* separator2444;
    panda$collections$Iterator* a$Iter2446;
    org$pandalanguage$pandac$IRNode* a2458;
    org$pandalanguage$pandac$IRNode* target2472;
    panda$collections$Array* children2480;
    panda$collections$Array* types2486;
    panda$collections$Iterator* m$Iter2489;
    org$pandalanguage$pandac$MethodRef* m2501;
    org$pandalanguage$pandac$IRNode* target2511;
    org$pandalanguage$pandac$IRNode* initCall2514;
    panda$collections$Array* children2518;
    org$pandalanguage$pandac$IRNode* resolved2523;
    switch (p_m->kind.value) {
        case 1002:
        {
            panda$core$Int64 $tmp2417 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
            panda$core$Bit $tmp2418 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2417, ((panda$core$Int64) { 0 }));
            if ($tmp2418.value) {
            {
                target2416 = NULL;
            }
            }
            else {
            {
                panda$core$Int64 $tmp2419 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
                panda$core$Bit $tmp2420 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2419, ((panda$core$Int64) { 1 }));
                PANDA_ASSERT($tmp2420.value);
                panda$core$Object* $tmp2421 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 0 }));
                target2416 = ((org$pandalanguage$pandac$IRNode*) $tmp2421);
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp2422 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, p_m->position, target2416, ((org$pandalanguage$pandac$MethodRef*) p_m->payload), p_args);
            return $tmp2422;
        }
        break;
        case 1003:
        {
            panda$collections$Array* $tmp2424 = (panda$collections$Array*) malloc(40);
            $tmp2424->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2424->refCount.value = 1;
            panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp2424, ((panda$collections$ListView*) p_m->payload));
            methods2423 = $tmp2424;
            org$pandalanguage$pandac$Compiler$matchMethods$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(self, methods2423, p_args, p_expectedType);
            panda$core$Int64 $tmp2426 = panda$collections$Array$get_count$R$panda$core$Int64(methods2423);
            panda$core$Bit $tmp2427 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2426, ((panda$core$Int64) { 0 }));
            if ($tmp2427.value) {
            {
                ITable* $tmp2429 = ((panda$collections$ListView*) p_m->payload)->$class->itable;
                while ($tmp2429->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp2429 = $tmp2429->next;
                }
                $fn2431 $tmp2430 = $tmp2429->methods[0];
                panda$core$Object* $tmp2432 = $tmp2430(((panda$collections$ListView*) p_m->payload), ((panda$core$Int64) { 0 }));
                first2428 = ((org$pandalanguage$pandac$MethodRef*) $tmp2432)->value;
                panda$core$MutableString* $tmp2434 = (panda$core$MutableString*) malloc(48);
                $tmp2434->$class = (panda$core$Class*) &panda$core$MutableString$class;
                $tmp2434->refCount.value = 1;
                panda$core$String* $tmp2437 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2436, ((org$pandalanguage$pandac$Symbol*) first2428->owner)->name);
                panda$core$String* $tmp2439 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2437, &$s2438);
                panda$core$String* $tmp2440 = panda$core$String$convert$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) first2428)->name);
                panda$core$String* $tmp2442 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2440, &$s2441);
                panda$core$String* $tmp2443 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2439, $tmp2442);
                panda$core$MutableString$init$panda$core$String($tmp2434, $tmp2443);
                msg2433 = $tmp2434;
                separator2444 = &$s2445;
                {
                    ITable* $tmp2447 = ((panda$collections$Iterable*) p_args)->$class->itable;
                    while ($tmp2447->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp2447 = $tmp2447->next;
                    }
                    $fn2449 $tmp2448 = $tmp2447->methods[0];
                    panda$collections$Iterator* $tmp2450 = $tmp2448(((panda$collections$Iterable*) p_args));
                    a$Iter2446 = $tmp2450;
                    $l2451:;
                    ITable* $tmp2453 = a$Iter2446->$class->itable;
                    while ($tmp2453->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp2453 = $tmp2453->next;
                    }
                    $fn2455 $tmp2454 = $tmp2453->methods[0];
                    panda$core$Bit $tmp2456 = $tmp2454(a$Iter2446);
                    panda$core$Bit $tmp2457 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2456);
                    if (!$tmp2457.value) goto $l2452;
                    {
                        ITable* $tmp2459 = a$Iter2446->$class->itable;
                        while ($tmp2459->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2459 = $tmp2459->next;
                        }
                        $fn2461 $tmp2460 = $tmp2459->methods[1];
                        panda$core$Object* $tmp2462 = $tmp2460(a$Iter2446);
                        a2458 = ((org$pandalanguage$pandac$IRNode*) $tmp2462);
                        panda$core$MutableString$append$panda$core$String(msg2433, separator2444);
                        panda$core$MutableString$append$panda$core$Object(msg2433, ((panda$core$Object*) a2458->type));
                        separator2444 = &$s2463;
                    }
                    goto $l2451;
                    $l2452:;
                }
                panda$core$MutableString$append$panda$core$String(msg2433, &$s2464);
                if (((panda$core$Bit) { p_expectedType != NULL }).value) {
                {
                    panda$core$String* $tmp2466 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2465, ((panda$core$Object*) p_expectedType));
                    panda$core$String* $tmp2468 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2466, &$s2467);
                    panda$core$MutableString$append$panda$core$String(msg2433, $tmp2468);
                }
                }
                panda$core$String* $tmp2469 = panda$core$MutableString$finish$R$panda$core$String(msg2433);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_m->position, $tmp2469);
                return NULL;
            }
            }
            panda$core$Int64 $tmp2470 = panda$collections$Array$get_count$R$panda$core$Int64(methods2423);
            panda$core$Bit $tmp2471 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2470, ((panda$core$Int64) { 1 }));
            if ($tmp2471.value) {
            {
                panda$core$Int64 $tmp2473 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
                panda$core$Bit $tmp2474 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2473, ((panda$core$Int64) { 1 }));
                if ($tmp2474.value) {
                {
                    panda$core$Object* $tmp2475 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 0 }));
                    target2472 = ((org$pandalanguage$pandac$IRNode*) $tmp2475);
                }
                }
                else {
                {
                    panda$core$Int64 $tmp2476 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
                    panda$core$Bit $tmp2477 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2476, ((panda$core$Int64) { 0 }));
                    PANDA_ASSERT($tmp2477.value);
                    target2472 = NULL;
                }
                }
                panda$core$Object* $tmp2478 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(methods2423, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$IRNode* $tmp2479 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, p_m->position, target2472, ((org$pandalanguage$pandac$MethodRef*) $tmp2478), p_args);
                return $tmp2479;
            }
            }
            panda$collections$Array* $tmp2481 = (panda$collections$Array*) malloc(40);
            $tmp2481->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2481->refCount.value = 1;
            panda$collections$Array$init($tmp2481);
            children2480 = $tmp2481;
            org$pandalanguage$pandac$IRNode* $tmp2483 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2483->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2483->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2485 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2483, ((panda$core$Int64) { 1003 }), p_m->position, $tmp2485, ((panda$core$Object*) methods2423), ((panda$collections$ListView*) p_m->children));
            panda$collections$Array$add$panda$collections$Array$T(children2480, ((panda$core$Object*) $tmp2483));
            panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(children2480, ((panda$collections$CollectionView*) p_args));
            panda$collections$Array* $tmp2487 = (panda$collections$Array*) malloc(40);
            $tmp2487->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2487->refCount.value = 1;
            panda$collections$Array$init($tmp2487);
            types2486 = $tmp2487;
            {
                ITable* $tmp2490 = ((panda$collections$Iterable*) methods2423)->$class->itable;
                while ($tmp2490->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp2490 = $tmp2490->next;
                }
                $fn2492 $tmp2491 = $tmp2490->methods[0];
                panda$collections$Iterator* $tmp2493 = $tmp2491(((panda$collections$Iterable*) methods2423));
                m$Iter2489 = $tmp2493;
                $l2494:;
                ITable* $tmp2496 = m$Iter2489->$class->itable;
                while ($tmp2496->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp2496 = $tmp2496->next;
                }
                $fn2498 $tmp2497 = $tmp2496->methods[0];
                panda$core$Bit $tmp2499 = $tmp2497(m$Iter2489);
                panda$core$Bit $tmp2500 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2499);
                if (!$tmp2500.value) goto $l2495;
                {
                    ITable* $tmp2502 = m$Iter2489->$class->itable;
                    while ($tmp2502->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp2502 = $tmp2502->next;
                    }
                    $fn2504 $tmp2503 = $tmp2502->methods[1];
                    panda$core$Object* $tmp2505 = $tmp2503(m$Iter2489);
                    m2501 = ((org$pandalanguage$pandac$MethodRef*) $tmp2505);
                    org$pandalanguage$pandac$Type* $tmp2506 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m2501);
                    panda$collections$Array$add$panda$collections$Array$T(types2486, ((panda$core$Object*) $tmp2506));
                }
                goto $l2494;
                $l2495:;
            }
            org$pandalanguage$pandac$IRNode* $tmp2507 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2507->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2507->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2509 = (org$pandalanguage$pandac$Type*) malloc(96);
            $tmp2509->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp2509->refCount.value = 1;
            org$pandalanguage$pandac$Type$init$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp2509, ((panda$collections$ListView*) types2486));
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2507, ((panda$core$Int64) { 1039 }), p_m->position, $tmp2509, ((panda$collections$ListView*) children2480));
            return $tmp2507;
        }
        break;
        case 1001:
        {
            org$pandalanguage$pandac$IRNode* $tmp2512 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2512->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2512->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp2512, ((panda$core$Int64) { 1038 }), p_m->position, ((org$pandalanguage$pandac$Type*) p_m->payload));
            target2511 = $tmp2512;
            org$pandalanguage$pandac$IRNode* $tmp2516 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target2511, &$s2515, p_args);
            org$pandalanguage$pandac$IRNode* $tmp2517 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp2516);
            initCall2514 = $tmp2517;
            if (((panda$core$Bit) { initCall2514 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp2519 = (panda$collections$Array*) malloc(40);
            $tmp2519->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2519->refCount.value = 1;
            panda$collections$Array$init($tmp2519);
            children2518 = $tmp2519;
            panda$collections$Array$add$panda$collections$Array$T(children2518, ((panda$core$Object*) initCall2514));
            org$pandalanguage$pandac$IRNode* $tmp2521 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2521->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2521->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2521, ((panda$core$Int64) { 1010 }), p_m->position, ((org$pandalanguage$pandac$Type*) p_m->payload), ((panda$collections$ListView*) children2518));
            return $tmp2521;
        }
        break;
        default:
        {
            org$pandalanguage$pandac$IRNode* $tmp2524 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_m);
            resolved2523 = $tmp2524;
            if (((panda$core$Bit) { resolved2523 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$String* $tmp2526 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2525, ((panda$core$Object*) resolved2523->type));
            panda$core$String* $tmp2528 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2526, &$s2527);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, resolved2523->position, $tmp2528);
        }
    }
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$collections$Array* subtypes2529;
    panda$core$MutableString* typeName2532;
    panda$core$String* separator2536;
    panda$collections$Iterator* p$Iter2538;
    org$pandalanguage$pandac$MethodDecl$Parameter* p2550;
    panda$core$Int64 kind2556;
    panda$core$Char8 $tmp2562;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
    panda$collections$Array* $tmp2530 = (panda$collections$Array*) malloc(40);
    $tmp2530->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2530->refCount.value = 1;
    panda$collections$Array$init($tmp2530);
    subtypes2529 = $tmp2530;
    panda$core$MutableString* $tmp2533 = (panda$core$MutableString*) malloc(48);
    $tmp2533->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp2533->refCount.value = 1;
    panda$core$MutableString$init$panda$core$String($tmp2533, &$s2535);
    typeName2532 = $tmp2533;
    separator2536 = &$s2537;
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
            panda$core$MutableString$append$panda$core$String(typeName2532, separator2536);
            panda$core$MutableString$append$panda$core$String(typeName2532, ((org$pandalanguage$pandac$Symbol*) p2550->type)->name);
            panda$collections$Array$add$panda$collections$Array$T(subtypes2529, ((panda$core$Object*) p2550->type));
            separator2536 = &$s2555;
        }
        goto $l2543;
        $l2544:;
    }
    panda$core$Bit $tmp2557 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 58 }));
    if ($tmp2557.value) {
    {
        panda$core$MutableString$append$panda$core$String(typeName2532, &$s2558);
        kind2556 = ((panda$core$Int64) { 24 });
    }
    }
    else {
    {
        panda$core$MutableString$append$panda$core$String(typeName2532, &$s2559);
        kind2556 = ((panda$core$Int64) { 25 });
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(subtypes2529, ((panda$core$Object*) p_m->returnType));
    org$pandalanguage$pandac$Type* $tmp2560 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2561 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp2560);
    if ($tmp2561.value) {
    {
        panda$core$MutableString$append$panda$core$String(typeName2532, ((org$pandalanguage$pandac$Symbol*) p_m->returnType)->name);
    }
    }
    panda$core$Char8$init$panda$core$UInt8(&$tmp2562, ((panda$core$UInt8) { 41 }));
    panda$core$MutableString$append$panda$core$Char8(typeName2532, $tmp2562);
    org$pandalanguage$pandac$Type* $tmp2563 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp2563->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp2563->refCount.value = 1;
    panda$core$String* $tmp2565 = panda$core$MutableString$finish$R$panda$core$String(typeName2532);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp2563, $tmp2565, kind2556, ((org$pandalanguage$pandac$Symbol*) p_m)->position, ((panda$collections$ListView*) subtypes2529), ((panda$core$Bit) { true }));
    return $tmp2563;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$declaredTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m, org$pandalanguage$pandac$Type* p_selfType) {
    panda$collections$Array* subtypes2566;
    panda$core$MutableString* typeName2569;
    panda$collections$Iterator* p$Iter2573;
    org$pandalanguage$pandac$MethodDecl$Parameter* p2585;
    panda$core$Int64 kind2591;
    panda$core$Char8 $tmp2597;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
    panda$collections$Array* $tmp2567 = (panda$collections$Array*) malloc(40);
    $tmp2567->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2567->refCount.value = 1;
    panda$collections$Array$init($tmp2567);
    subtypes2566 = $tmp2567;
    panda$core$MutableString* $tmp2570 = (panda$core$MutableString*) malloc(48);
    $tmp2570->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp2570->refCount.value = 1;
    panda$core$MutableString$init$panda$core$String($tmp2570, &$s2572);
    typeName2569 = $tmp2570;
    panda$core$MutableString$append$panda$core$String(typeName2569, ((org$pandalanguage$pandac$Symbol*) p_selfType)->name);
    panda$collections$Array$add$panda$collections$Array$T(subtypes2566, ((panda$core$Object*) p_selfType));
    {
        ITable* $tmp2574 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp2574->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2574 = $tmp2574->next;
        }
        $fn2576 $tmp2575 = $tmp2574->methods[0];
        panda$collections$Iterator* $tmp2577 = $tmp2575(((panda$collections$Iterable*) p_m->parameters));
        p$Iter2573 = $tmp2577;
        $l2578:;
        ITable* $tmp2580 = p$Iter2573->$class->itable;
        while ($tmp2580->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2580 = $tmp2580->next;
        }
        $fn2582 $tmp2581 = $tmp2580->methods[0];
        panda$core$Bit $tmp2583 = $tmp2581(p$Iter2573);
        panda$core$Bit $tmp2584 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2583);
        if (!$tmp2584.value) goto $l2579;
        {
            ITable* $tmp2586 = p$Iter2573->$class->itable;
            while ($tmp2586->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2586 = $tmp2586->next;
            }
            $fn2588 $tmp2587 = $tmp2586->methods[1];
            panda$core$Object* $tmp2589 = $tmp2587(p$Iter2573);
            p2585 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp2589);
            panda$core$MutableString$append$panda$core$String(typeName2569, &$s2590);
            panda$core$MutableString$append$panda$core$String(typeName2569, ((org$pandalanguage$pandac$Symbol*) p2585->type)->name);
            panda$collections$Array$add$panda$collections$Array$T(subtypes2566, ((panda$core$Object*) p2585->type));
        }
        goto $l2578;
        $l2579:;
    }
    panda$core$Bit $tmp2592 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 58 }));
    if ($tmp2592.value) {
    {
        panda$core$MutableString$append$panda$core$String(typeName2569, &$s2593);
        kind2591 = ((panda$core$Int64) { 24 });
    }
    }
    else {
    {
        panda$core$MutableString$append$panda$core$String(typeName2569, &$s2594);
        kind2591 = ((panda$core$Int64) { 25 });
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(subtypes2566, ((panda$core$Object*) p_m->returnType));
    org$pandalanguage$pandac$Type* $tmp2595 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2596 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp2595);
    if ($tmp2596.value) {
    {
        panda$core$MutableString$append$panda$core$String(typeName2569, ((org$pandalanguage$pandac$Symbol*) p_m->returnType)->name);
    }
    }
    panda$core$Char8$init$panda$core$UInt8(&$tmp2597, ((panda$core$UInt8) { 41 }));
    panda$core$MutableString$append$panda$core$Char8(typeName2569, $tmp2597);
    org$pandalanguage$pandac$Type* $tmp2598 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp2598->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp2598->refCount.value = 1;
    panda$core$String* $tmp2600 = panda$core$MutableString$finish$R$panda$core$String(typeName2569);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp2598, $tmp2600, kind2591, ((org$pandalanguage$pandac$Symbol*) p_m)->position, ((panda$collections$ListView*) subtypes2566), ((panda$core$Bit) { true }));
    return $tmp2598;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$MethodDecl* inherited2601;
    org$pandalanguage$pandac$MethodDecl* $tmp2602 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(self, p_m);
    inherited2601 = $tmp2602;
    if (((panda$core$Bit) { inherited2601 == NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp2603 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, p_m);
        return $tmp2603;
    }
    }
    org$pandalanguage$pandac$Type* $tmp2604 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, inherited2601);
    return $tmp2604;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$Type* $tmp2605 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    org$pandalanguage$pandac$Type* $tmp2606 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_m, $tmp2605);
    return $tmp2606;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m, org$pandalanguage$pandac$Type* p_selfType) {
    org$pandalanguage$pandac$MethodDecl* inherited2607;
    org$pandalanguage$pandac$MethodDecl* $tmp2608 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(self, p_m);
    inherited2607 = $tmp2608;
    if (((panda$core$Bit) { inherited2607 == NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp2609 = org$pandalanguage$pandac$Compiler$declaredTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_m, p_selfType);
        return $tmp2609;
    }
    }
    org$pandalanguage$pandac$Type* $tmp2610 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, inherited2607, p_selfType);
    return $tmp2610;
}
panda$core$String* org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(panda$core$Int64 p_op) {
    switch (p_op.value) {
        case 51:
        {
            return &$s2611;
        }
        break;
        case 52:
        {
            return &$s2612;
        }
        break;
        case 53:
        {
            return &$s2613;
        }
        break;
        case 54:
        {
            return &$s2614;
        }
        break;
        case 55:
        {
            return &$s2615;
        }
        break;
        case 56:
        {
            return &$s2616;
        }
        break;
        case 57:
        {
            return &$s2617;
        }
        break;
        case 58:
        {
            return &$s2618;
        }
        break;
        case 59:
        {
            return &$s2619;
        }
        break;
        case 63:
        {
            return &$s2620;
        }
        break;
        case 62:
        {
            return &$s2621;
        }
        break;
        case 65:
        {
            return &$s2622;
        }
        break;
        case 64:
        {
            return &$s2623;
        }
        break;
        case 68:
        {
            return &$s2624;
        }
        break;
        case 69:
        {
            return &$s2625;
        }
        break;
        case 66:
        {
            return &$s2626;
        }
        break;
        case 67:
        {
            return &$s2627;
        }
        break;
        case 70:
        {
            return &$s2628;
        }
        break;
        case 71:
        {
            return &$s2629;
        }
        break;
        case 49:
        {
            return &$s2630;
        }
        break;
        case 50:
        {
            return &$s2631;
        }
        break;
        case 72:
        {
            return &$s2632;
        }
        break;
        case 1:
        {
            return &$s2633;
        }
        break;
        case 101:
        {
            return &$s2634;
        }
        break;
        case 73:
        {
            return &$s2635;
        }
        break;
        case 60:
        {
            return &$s2636;
        }
        break;
        case 61:
        {
            return &$s2637;
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
            panda$core$Int64 $tmp2638 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_expr->children);
            panda$core$Bit $tmp2639 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2638, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp2639.value);
            panda$core$Bit $tmp2640 = panda$core$Bit$$NOT$R$panda$core$Bit(((panda$core$Bit$wrapper*) p_expr->payload)->value);
            if ($tmp2640.value) {
            {
                panda$core$Object* $tmp2641 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Bit $tmp2642 = org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp2641));
                return $tmp2642;
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
            panda$core$Object* $tmp2643 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp2644 = org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp2643));
            return $tmp2644;
        }
        break;
        default:
        {
            return ((panda$core$Bit) { false });
        }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$foldInts$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_left, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_right) {
    panda$core$Int64 l2670;
    panda$core$Int64 r2672;
    panda$core$UInt64 v2674;
    panda$core$UInt64 v2680;
    panda$core$UInt64 v2686;
    panda$core$UInt64 v2692;
    panda$core$UInt64 v2698;
    panda$core$UInt64 v2728;
    panda$core$UInt64 v2734;
    panda$core$UInt64 v2740;
    panda$core$UInt64 v2746;
    panda$core$UInt64 v2752;
    panda$core$Bit $tmp2646 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_left->kind, ((panda$core$Int64) { 1004 }));
    bool $tmp2645 = $tmp2646.value;
    if ($tmp2645) goto $l2647;
    panda$core$Bit $tmp2648 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_left->kind, ((panda$core$Int64) { 1032 }));
    $tmp2645 = $tmp2648.value;
    $l2647:;
    panda$core$Bit $tmp2649 = { $tmp2645 };
    PANDA_ASSERT($tmp2649.value);
    panda$core$Bit $tmp2651 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_right->kind, ((panda$core$Int64) { 1004 }));
    bool $tmp2650 = $tmp2651.value;
    if ($tmp2650) goto $l2652;
    panda$core$Bit $tmp2653 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_right->kind, ((panda$core$Int64) { 1032 }));
    $tmp2650 = $tmp2653.value;
    $l2652:;
    panda$core$Bit $tmp2654 = { $tmp2650 };
    PANDA_ASSERT($tmp2654.value);
    panda$core$Bit $tmp2657 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_left->kind, ((panda$core$Int64) { 1032 }));
    bool $tmp2656 = $tmp2657.value;
    if ($tmp2656) goto $l2658;
    panda$core$UInt64 $tmp2660 = panda$core$Int64$convert$R$panda$core$UInt64(((panda$core$Int64) { 9223372036854775807 }));
    panda$core$Bit $tmp2661 = panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p_left->payload)->value, $tmp2660);
    bool $tmp2659 = $tmp2661.value;
    if (!$tmp2659) goto $l2662;
    panda$core$Bit $tmp2663 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_right->kind, ((panda$core$Int64) { 1032 }));
    $tmp2659 = $tmp2663.value;
    $l2662:;
    panda$core$Bit $tmp2664 = { $tmp2659 };
    $tmp2656 = $tmp2664.value;
    $l2658:;
    panda$core$Bit $tmp2665 = { $tmp2656 };
    bool $tmp2655 = $tmp2665.value;
    if ($tmp2655) goto $l2666;
    panda$core$UInt64 $tmp2667 = panda$core$Int64$convert$R$panda$core$UInt64(((panda$core$Int64) { 9223372036854775807 }));
    panda$core$Bit $tmp2668 = panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p_right->payload)->value, $tmp2667);
    $tmp2655 = $tmp2668.value;
    $l2666:;
    panda$core$Bit $tmp2669 = { $tmp2655 };
    if ($tmp2669.value) {
    {
        panda$core$Int64 $tmp2671 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_left->payload)->value);
        l2670 = $tmp2671;
        panda$core$Int64 $tmp2673 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_right->payload)->value);
        r2672 = $tmp2673;
        switch (p_op.value) {
            case 51:
            {
                panda$core$Int64 $tmp2675 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(l2670, r2672);
                panda$core$UInt64 $tmp2676 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2675);
                v2674 = $tmp2676;
                org$pandalanguage$pandac$IRNode* $tmp2677 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2677->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2677->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2679 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(v2674);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2677, ((panda$core$Int64) { 1004 }), p_position, $tmp2679, v2674);
                return $tmp2677;
            }
            break;
            case 52:
            {
                panda$core$Int64 $tmp2681 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(l2670, r2672);
                panda$core$UInt64 $tmp2682 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2681);
                v2680 = $tmp2682;
                org$pandalanguage$pandac$IRNode* $tmp2683 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2683->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2683->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2685 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(v2680);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2683, ((panda$core$Int64) { 1004 }), p_position, $tmp2685, v2680);
                return $tmp2683;
            }
            break;
            case 53:
            {
                panda$core$Int64 $tmp2687 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(l2670, r2672);
                panda$core$UInt64 $tmp2688 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2687);
                v2686 = $tmp2688;
                org$pandalanguage$pandac$IRNode* $tmp2689 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2689->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2689->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2691 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(v2686);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2689, ((panda$core$Int64) { 1004 }), p_position, $tmp2691, v2686);
                return $tmp2689;
            }
            break;
            case 55:
            {
                panda$core$Int64 $tmp2693 = panda$core$Int64$$INTDIV$panda$core$Int64$R$panda$core$Int64(l2670, r2672);
                panda$core$UInt64 $tmp2694 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2693);
                v2692 = $tmp2694;
                org$pandalanguage$pandac$IRNode* $tmp2695 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2695->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2695->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2697 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(v2692);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2695, ((panda$core$Int64) { 1004 }), p_position, $tmp2697, v2692);
                return $tmp2695;
            }
            break;
            case 56:
            {
                panda$core$Int64 $tmp2699 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(l2670, r2672);
                panda$core$UInt64 $tmp2700 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2699);
                v2698 = $tmp2700;
                org$pandalanguage$pandac$IRNode* $tmp2701 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2701->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2701->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2703 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(v2698);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2701, ((panda$core$Int64) { 1004 }), p_position, $tmp2703, v2698);
                return $tmp2701;
            }
            break;
            case 58:
            {
                org$pandalanguage$pandac$IRNode* $tmp2704 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2704->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2704->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2706 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2707 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(l2670, r2672);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2704, ((panda$core$Int64) { 1011 }), p_position, $tmp2706, $tmp2707);
                return $tmp2704;
            }
            break;
            case 59:
            {
                org$pandalanguage$pandac$IRNode* $tmp2708 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2708->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2708->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2710 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2711 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(l2670, r2672);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2708, ((panda$core$Int64) { 1011 }), p_position, $tmp2710, $tmp2711);
                return $tmp2708;
            }
            break;
            case 62:
            {
                org$pandalanguage$pandac$IRNode* $tmp2712 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2712->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2712->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2714 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2715 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(l2670, r2672);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2712, ((panda$core$Int64) { 1011 }), p_position, $tmp2714, $tmp2715);
                return $tmp2712;
            }
            break;
            case 63:
            {
                org$pandalanguage$pandac$IRNode* $tmp2716 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2716->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2716->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2718 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2719 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(l2670, r2672);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2716, ((panda$core$Int64) { 1011 }), p_position, $tmp2718, $tmp2719);
                return $tmp2716;
            }
            break;
            case 64:
            {
                org$pandalanguage$pandac$IRNode* $tmp2720 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2720->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2720->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2722 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2723 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(l2670, r2672);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2720, ((panda$core$Int64) { 1011 }), p_position, $tmp2722, $tmp2723);
                return $tmp2720;
            }
            break;
            case 65:
            {
                org$pandalanguage$pandac$IRNode* $tmp2724 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2724->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2724->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2726 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2727 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(l2670, r2672);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2724, ((panda$core$Int64) { 1011 }), p_position, $tmp2726, $tmp2727);
                return $tmp2724;
            }
            break;
            case 67:
            {
                panda$core$Int64 $tmp2729 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(l2670, r2672);
                panda$core$UInt64 $tmp2730 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2729);
                v2728 = $tmp2730;
                org$pandalanguage$pandac$IRNode* $tmp2731 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2731->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2731->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2733 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(v2728);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2731, ((panda$core$Int64) { 1004 }), p_position, $tmp2733, v2728);
                return $tmp2731;
            }
            break;
            case 69:
            {
                panda$core$Int64 $tmp2735 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(l2670, r2672);
                panda$core$UInt64 $tmp2736 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2735);
                v2734 = $tmp2736;
                org$pandalanguage$pandac$IRNode* $tmp2737 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2737->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2737->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2739 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(v2734);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2737, ((panda$core$Int64) { 1004 }), p_position, $tmp2739, v2734);
                return $tmp2737;
            }
            break;
            case 71:
            {
                panda$core$Int64 $tmp2741 = panda$core$Int64$$BXOR$panda$core$Int64$R$panda$core$Int64(l2670, r2672);
                panda$core$UInt64 $tmp2742 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2741);
                v2740 = $tmp2742;
                org$pandalanguage$pandac$IRNode* $tmp2743 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2743->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2743->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2745 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(v2740);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2743, ((panda$core$Int64) { 1004 }), p_position, $tmp2745, v2740);
                return $tmp2743;
            }
            break;
            case 72:
            {
                panda$core$Int64 $tmp2747 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(l2670, r2672);
                panda$core$UInt64 $tmp2748 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2747);
                v2746 = $tmp2748;
                org$pandalanguage$pandac$IRNode* $tmp2749 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2749->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2749->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2751 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(v2746);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2749, ((panda$core$Int64) { 1004 }), p_position, $tmp2751, v2746);
                return $tmp2749;
            }
            break;
            case 1:
            {
                panda$core$Int64 $tmp2753 = panda$core$Int64$$SHR$panda$core$Int64$R$panda$core$Int64(l2670, r2672);
                panda$core$UInt64 $tmp2754 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2753);
                v2752 = $tmp2754;
                org$pandalanguage$pandac$IRNode* $tmp2755 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2755->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2755->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2757 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(v2752);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2755, ((panda$core$Int64) { 1004 }), p_position, $tmp2757, v2752);
                return $tmp2755;
            }
            break;
        }
    }
    }
    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s2758);
    return NULL;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    panda$core$Bit $tmp2759 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1009 }));
    if ($tmp2759.value) {
    {
        panda$core$Object* $tmp2760 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
        return ((org$pandalanguage$pandac$IRNode*) $tmp2760);
    }
    }
    return p_expr;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIndexedAssignment$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_left, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_right) {
    panda$collections$Array* args2765;
    org$pandalanguage$pandac$IRNode* resolved2773;
    panda$collections$Array* children2778;
    panda$core$UInt64 baseId2784;
    org$pandalanguage$pandac$IRNode* base2785;
    panda$core$UInt64 indexId2792;
    org$pandalanguage$pandac$IRNode* index2793;
    org$pandalanguage$pandac$IRNode* baseRef2798;
    org$pandalanguage$pandac$IRNode* indexRef2801;
    org$pandalanguage$pandac$IRNode* rhsIndex2804;
    org$pandalanguage$pandac$IRNode* value2806;
    panda$core$Bit $tmp2761 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_left->kind, ((panda$core$Int64) { 1040 }));
    PANDA_ASSERT($tmp2761.value);
    panda$core$Int64 $tmp2762 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_left->children);
    panda$core$Bit $tmp2763 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2762, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp2763.value);
    panda$core$Bit $tmp2764 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 73 }));
    if ($tmp2764.value) {
    {
        panda$collections$Array* $tmp2766 = (panda$collections$Array*) malloc(40);
        $tmp2766->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2766->refCount.value = 1;
        panda$collections$Array$init($tmp2766);
        args2765 = $tmp2766;
        panda$core$Object* $tmp2768 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_left->children, ((panda$core$Int64) { 1 }));
        panda$collections$Array$add$panda$collections$Array$T(args2765, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp2768)));
        panda$collections$Array$add$panda$collections$Array$T(args2765, ((panda$core$Object*) p_right));
        panda$core$Object* $tmp2769 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_left->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp2771 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp2769), &$s2770, ((panda$collections$ListView*) args2765));
        return $tmp2771;
    }
    }
    panda$core$Bit $tmp2772 = org$pandalanguage$pandac$Compiler$isAssignment$panda$core$Int64$R$panda$core$Bit(p_op);
    PANDA_ASSERT($tmp2772.value);
    org$pandalanguage$pandac$IRNode* $tmp2774 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_left);
    resolved2773 = $tmp2774;
    if (((panda$core$Bit) { resolved2773 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp2775 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self, resolved2773);
    resolved2773 = $tmp2775;
    panda$core$Int64 $tmp2776 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(resolved2773->children);
    panda$core$Bit $tmp2777 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2776, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp2777.value);
    panda$collections$Array* $tmp2779 = (panda$collections$Array*) malloc(40);
    $tmp2779->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2779->refCount.value = 1;
    panda$collections$Array$init($tmp2779);
    children2778 = $tmp2779;
    panda$core$Object* $tmp2781 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(resolved2773->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp2782 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self, ((org$pandalanguage$pandac$IRNode*) $tmp2781));
    panda$collections$Array$add$panda$collections$Array$T(children2778, ((panda$core$Object*) $tmp2782));
    panda$core$UInt64 $tmp2783 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(self->reusedValueCount, ((panda$core$UInt64) { 1 }));
    self->reusedValueCount = $tmp2783;
    baseId2784 = self->reusedValueCount;
    org$pandalanguage$pandac$IRNode* $tmp2786 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp2786->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2786->refCount.value = 1;
    panda$core$Object* $tmp2788 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children2778, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp2789 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children2778, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2786, ((panda$core$Int64) { 1027 }), ((org$pandalanguage$pandac$IRNode*) $tmp2788)->position, ((org$pandalanguage$pandac$IRNode*) $tmp2789)->type, ((panda$core$Object*) wrap_panda$core$UInt64(baseId2784)), ((panda$collections$ListView*) children2778));
    base2785 = $tmp2786;
    panda$collections$Array$clear(children2778);
    panda$core$Object* $tmp2790 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(resolved2773->children, ((panda$core$Int64) { 1 }));
    panda$collections$Array$add$panda$collections$Array$T(children2778, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp2790)));
    panda$core$UInt64 $tmp2791 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(self->reusedValueCount, ((panda$core$UInt64) { 1 }));
    self->reusedValueCount = $tmp2791;
    indexId2792 = self->reusedValueCount;
    org$pandalanguage$pandac$IRNode* $tmp2794 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp2794->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2794->refCount.value = 1;
    panda$core$Object* $tmp2796 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children2778, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp2797 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children2778, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2794, ((panda$core$Int64) { 1027 }), ((org$pandalanguage$pandac$IRNode*) $tmp2796)->position, ((org$pandalanguage$pandac$IRNode*) $tmp2797)->type, ((panda$core$Object*) wrap_panda$core$UInt64(indexId2792)), ((panda$collections$ListView*) children2778));
    index2793 = $tmp2794;
    org$pandalanguage$pandac$IRNode* $tmp2799 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp2799->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2799->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2799, ((panda$core$Int64) { 1028 }), base2785->position, base2785->type, baseId2784);
    baseRef2798 = $tmp2799;
    org$pandalanguage$pandac$IRNode* $tmp2802 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp2802->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2802->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2802, ((panda$core$Int64) { 1028 }), index2793->position, index2793->type, indexId2792);
    indexRef2801 = $tmp2802;
    org$pandalanguage$pandac$IRNode* $tmp2805 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, baseRef2798, ((panda$core$Int64) { 101 }), indexRef2801);
    rhsIndex2804 = $tmp2805;
    if (((panda$core$Bit) { rhsIndex2804 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Int64 $tmp2807 = org$pandalanguage$pandac$Compiler$removeAssignment$panda$core$Int64$R$panda$core$Int64(p_op);
    org$pandalanguage$pandac$IRNode* $tmp2808 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, rhsIndex2804, $tmp2807, p_right);
    value2806 = $tmp2808;
    if (((panda$core$Bit) { value2806 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp2811 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(rhsIndex2804->type);
    bool $tmp2810 = $tmp2811.value;
    if (!$tmp2810) goto $l2812;
    panda$core$Bit $tmp2813 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_right->type);
    $tmp2810 = $tmp2813.value;
    $l2812:;
    panda$core$Bit $tmp2814 = { $tmp2810 };
    bool $tmp2809 = $tmp2814.value;
    if (!$tmp2809) goto $l2815;
    panda$core$Bit $tmp2816 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(rhsIndex2804->type, value2806->type);
    $tmp2809 = $tmp2816.value;
    $l2815:;
    panda$core$Bit $tmp2817 = { $tmp2809 };
    if ($tmp2817.value) {
    {
        panda$collections$Array* $tmp2819 = (panda$collections$Array*) malloc(40);
        $tmp2819->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2819->refCount.value = 1;
        panda$collections$Array$init($tmp2819);
        org$pandalanguage$pandac$IRNode* $tmp2821 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, value2806, &$s2818, ((panda$collections$ListView*) $tmp2819), resolved2773->type);
        value2806 = $tmp2821;
        if (((panda$core$Bit) { value2806 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$collections$Array$clear(children2778);
    panda$collections$Array$add$panda$collections$Array$T(children2778, ((panda$core$Object*) index2793));
    panda$collections$Array$add$panda$collections$Array$T(children2778, ((panda$core$Object*) value2806));
    org$pandalanguage$pandac$IRNode* $tmp2823 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, base2785, &$s2822, ((panda$collections$ListView*) children2778));
    return $tmp2823;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_rawLeft, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_rawRight) {
    org$pandalanguage$pandac$IRNode* left2824;
    org$pandalanguage$pandac$IRNode* right2825;
    panda$core$Int64 kind2849;
    org$pandalanguage$pandac$IRNode* resolved2856;
    panda$collections$Array* children2858;
    org$pandalanguage$pandac$IRNode* resolved2865;
    panda$collections$Array* children2867;
    panda$collections$Array* children2884;
    org$pandalanguage$pandac$IRNode* reusedLeft2889;
    org$pandalanguage$pandac$IRNode* toNonNullable2892;
    org$pandalanguage$pandac$IRNode* comparison2895;
    org$pandalanguage$pandac$IRNode* nullCheck2897;
    org$pandalanguage$pandac$ClassDecl* cl2917;
    org$pandalanguage$pandac$ClassDecl* cl2934;
    org$pandalanguage$pandac$IRNode* finalLeft2950;
    org$pandalanguage$pandac$IRNode* finalRight2953;
    panda$collections$Array* children2956;
    panda$collections$Array* children2970;
    panda$collections$Array* children2982;
    org$pandalanguage$pandac$IRNode* reusedLeft2988;
    org$pandalanguage$pandac$ClassDecl* cl3006;
    panda$collections$ListView* parameters3008;
    org$pandalanguage$pandac$Symbol* methods3010;
    org$pandalanguage$pandac$Type* type3014;
    panda$collections$Array* types3015;
    org$pandalanguage$pandac$MethodDecl* m3019;
    panda$collections$Iterator* m$Iter3024;
    org$pandalanguage$pandac$MethodDecl* m3036;
    panda$collections$Array* children3047;
    panda$collections$Array* children3076;
    panda$collections$Array* children3092;
    org$pandalanguage$pandac$Type* resultType3115;
    org$pandalanguage$pandac$IRNode* result3119;
    org$pandalanguage$pandac$IRNode* resolved3122;
    org$pandalanguage$pandac$IRNode* target3128;
    left2824 = p_rawLeft;
    right2825 = p_rawRight;
    panda$core$Bit $tmp2826 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2824->type->typeKind, ((panda$core$Int64) { 15 }));
    if ($tmp2826.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2827 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, right2825);
        right2825 = $tmp2827;
        if (((panda$core$Bit) { right2825 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Int64$nullable $tmp2828 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, left2824, right2825->type);
        if (((panda$core$Bit) { $tmp2828.nonnull }).value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2829 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, left2824, right2825->type);
            left2824 = $tmp2829;
        }
        }
    }
    }
    panda$core$Bit $tmp2831 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right2825->type->typeKind, ((panda$core$Int64) { 15 }));
    bool $tmp2830 = $tmp2831.value;
    if (!$tmp2830) goto $l2832;
    panda$core$Int64$nullable $tmp2833 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, right2825, left2824->type);
    $tmp2830 = ((panda$core$Bit) { $tmp2833.nonnull }).value;
    $l2832:;
    panda$core$Bit $tmp2834 = { $tmp2830 };
    if ($tmp2834.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2835 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, right2825, left2824->type);
        right2825 = $tmp2835;
    }
    }
    panda$core$Bit $tmp2839 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 58 }));
    bool $tmp2838 = $tmp2839.value;
    if ($tmp2838) goto $l2840;
    panda$core$Bit $tmp2841 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 59 }));
    $tmp2838 = $tmp2841.value;
    $l2840:;
    panda$core$Bit $tmp2842 = { $tmp2838 };
    bool $tmp2837 = $tmp2842.value;
    if ($tmp2837) goto $l2843;
    panda$core$Bit $tmp2844 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 60 }));
    $tmp2837 = $tmp2844.value;
    $l2843:;
    panda$core$Bit $tmp2845 = { $tmp2837 };
    bool $tmp2836 = $tmp2845.value;
    if ($tmp2836) goto $l2846;
    panda$core$Bit $tmp2847 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 61 }));
    $tmp2836 = $tmp2847.value;
    $l2846:;
    panda$core$Bit $tmp2848 = { $tmp2836 };
    if ($tmp2848.value) {
    {
        panda$core$Bit $tmp2851 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 58 }));
        bool $tmp2850 = $tmp2851.value;
        if ($tmp2850) goto $l2852;
        panda$core$Bit $tmp2853 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 60 }));
        $tmp2850 = $tmp2853.value;
        $l2852:;
        panda$core$Bit $tmp2854 = { $tmp2850 };
        if ($tmp2854.value) {
        {
            kind2849 = ((panda$core$Int64) { 1035 });
        }
        }
        else {
        {
            kind2849 = ((panda$core$Int64) { 1036 });
        }
        }
        panda$core$Bit $tmp2855 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2824->kind, ((panda$core$Int64) { 1030 }));
        if ($tmp2855.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2857 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, right2825);
            resolved2856 = $tmp2857;
            if (((panda$core$Bit) { resolved2856 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp2859 = (panda$collections$Array*) malloc(40);
            $tmp2859->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2859->refCount.value = 1;
            panda$collections$Array$init($tmp2859);
            children2858 = $tmp2859;
            panda$collections$Array$add$panda$collections$Array$T(children2858, ((panda$core$Object*) resolved2856));
            org$pandalanguage$pandac$IRNode* $tmp2861 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2861->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2861->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2863 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2861, kind2849, p_position, $tmp2863, ((panda$collections$ListView*) children2858));
            return $tmp2861;
        }
        }
        panda$core$Bit $tmp2864 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right2825->kind, ((panda$core$Int64) { 1030 }));
        if ($tmp2864.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2866 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, left2824);
            resolved2865 = $tmp2866;
            if (((panda$core$Bit) { resolved2865 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp2868 = (panda$collections$Array*) malloc(40);
            $tmp2868->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2868->refCount.value = 1;
            panda$collections$Array$init($tmp2868);
            children2867 = $tmp2868;
            panda$collections$Array$add$panda$collections$Array$T(children2867, ((panda$core$Object*) resolved2865));
            org$pandalanguage$pandac$IRNode* $tmp2870 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2870->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2870->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2872 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2870, kind2849, p_position, $tmp2872, ((panda$collections$ListView*) children2867));
            return $tmp2870;
        }
        }
    }
    }
    panda$core$Bit $tmp2875 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 58 }));
    bool $tmp2874 = $tmp2875.value;
    if ($tmp2874) goto $l2876;
    panda$core$Bit $tmp2877 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 59 }));
    $tmp2874 = $tmp2877.value;
    $l2876:;
    panda$core$Bit $tmp2878 = { $tmp2874 };
    bool $tmp2873 = $tmp2878.value;
    if (!$tmp2873) goto $l2879;
    panda$core$Bit $tmp2880 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2824->type->typeKind, ((panda$core$Int64) { 11 }));
    $tmp2873 = $tmp2880.value;
    $l2879:;
    panda$core$Bit $tmp2881 = { $tmp2873 };
    if ($tmp2881.value) {
    {
        panda$core$Bit $tmp2882 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(right2825->kind, ((panda$core$Int64) { 1030 }));
        PANDA_ASSERT($tmp2882.value);
        panda$core$UInt64 $tmp2883 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(self->reusedValueCount, ((panda$core$UInt64) { 1 }));
        self->reusedValueCount = $tmp2883;
        panda$collections$Array* $tmp2885 = (panda$collections$Array*) malloc(40);
        $tmp2885->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2885->refCount.value = 1;
        panda$collections$Array$init($tmp2885);
        children2884 = $tmp2885;
        panda$collections$Array$add$panda$collections$Array$T(children2884, ((panda$core$Object*) left2824));
        org$pandalanguage$pandac$IRNode* $tmp2887 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2887->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2887->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2887, ((panda$core$Int64) { 1027 }), left2824->position, left2824->type, ((panda$core$Object*) wrap_panda$core$UInt64(self->reusedValueCount)), ((panda$collections$ListView*) children2884));
        left2824 = $tmp2887;
        org$pandalanguage$pandac$IRNode* $tmp2890 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2890->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2890->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2890, ((panda$core$Int64) { 1028 }), left2824->position, left2824->type, self->reusedValueCount);
        reusedLeft2889 = $tmp2890;
        panda$core$Object* $tmp2893 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(left2824->type->subtypes, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp2894 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, reusedLeft2889, ((org$pandalanguage$pandac$Type*) $tmp2893));
        toNonNullable2892 = $tmp2894;
        org$pandalanguage$pandac$IRNode* $tmp2896 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, toNonNullable2892, p_op, right2825);
        comparison2895 = $tmp2896;
        if (((panda$core$Bit) { comparison2895 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp2898 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2898->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2898->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp2900 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp2898, ((panda$core$Int64) { 1030 }), p_position, $tmp2900);
        org$pandalanguage$pandac$IRNode* $tmp2901 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, left2824, ((panda$core$Int64) { 59 }), $tmp2898);
        nullCheck2897 = $tmp2901;
        if (((panda$core$Bit) { nullCheck2897 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$clear(children2884);
        panda$collections$Array$add$panda$collections$Array$T(children2884, ((panda$core$Object*) nullCheck2897));
        panda$collections$Array$add$panda$collections$Array$T(children2884, ((panda$core$Object*) comparison2895));
        org$pandalanguage$pandac$IRNode* $tmp2902 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2902->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2902->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp2904 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp2905 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 59 }));
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2902, ((panda$core$Int64) { 1011 }), p_position, $tmp2904, $tmp2905);
        org$pandalanguage$pandac$Type* $tmp2906 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp2907 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp2902, $tmp2906);
        panda$collections$Array$add$panda$collections$Array$T(children2884, ((panda$core$Object*) $tmp2907));
        org$pandalanguage$pandac$IRNode* $tmp2908 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2908->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2908->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp2910 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2908, ((panda$core$Int64) { 1044 }), p_position, $tmp2910, ((panda$collections$ListView*) children2884));
        return $tmp2908;
    }
    }
    panda$core$Bit $tmp2912 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 60 }));
    bool $tmp2911 = $tmp2912.value;
    if ($tmp2911) goto $l2913;
    panda$core$Bit $tmp2914 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 61 }));
    $tmp2911 = $tmp2914.value;
    $l2913:;
    panda$core$Bit $tmp2915 = { $tmp2911 };
    if ($tmp2915.value) {
    {
        panda$core$Bit $tmp2916 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(left2824->type);
        if ($tmp2916.value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp2918 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, left2824->type);
            cl2917 = $tmp2918;
            if (((panda$core$Bit) { cl2917 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$Bit $tmp2919 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, cl2917);
            if ($tmp2919.value) {
            {
                panda$core$String* $tmp2921 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
                panda$core$String* $tmp2922 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2920, $tmp2921);
                panda$core$String* $tmp2924 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2922, &$s2923);
                panda$core$String* $tmp2925 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2924, ((panda$core$Object*) left2824->type));
                panda$core$String* $tmp2927 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2925, &$s2926);
                panda$core$String* $tmp2929 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2928, ((panda$core$Object*) right2825->type));
                panda$core$String* $tmp2931 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2929, &$s2930);
                panda$core$String* $tmp2932 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2927, $tmp2931);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp2932);
            }
            }
        }
        }
        panda$core$Bit $tmp2933 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(right2825->type);
        if ($tmp2933.value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp2935 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, right2825->type);
            cl2934 = $tmp2935;
            if (((panda$core$Bit) { cl2934 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$Bit $tmp2936 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, cl2934);
            if ($tmp2936.value) {
            {
                panda$core$String* $tmp2938 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
                panda$core$String* $tmp2939 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2937, $tmp2938);
                panda$core$String* $tmp2941 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2939, &$s2940);
                panda$core$String* $tmp2942 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2941, ((panda$core$Object*) left2824->type));
                panda$core$String* $tmp2944 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2942, &$s2943);
                panda$core$String* $tmp2946 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2945, ((panda$core$Object*) right2825->type));
                panda$core$String* $tmp2948 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2946, &$s2947);
                panda$core$String* $tmp2949 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2944, $tmp2948);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp2949);
            }
            }
        }
        }
        org$pandalanguage$pandac$Type* $tmp2951 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp2952 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, left2824, $tmp2951);
        finalLeft2950 = $tmp2952;
        if (((panda$core$Bit) { finalLeft2950 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$Type* $tmp2954 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp2955 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, right2825, $tmp2954);
        finalRight2953 = $tmp2955;
        if (((panda$core$Bit) { finalRight2953 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp2957 = (panda$collections$Array*) malloc(40);
        $tmp2957->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2957->refCount.value = 1;
        panda$collections$Array$init($tmp2957);
        children2956 = $tmp2957;
        panda$collections$Array$add$panda$collections$Array$T(children2956, ((panda$core$Object*) finalLeft2950));
        panda$collections$Array$add$panda$collections$Array$T(children2956, ((panda$core$Object*) finalRight2953));
        org$pandalanguage$pandac$IRNode* $tmp2959 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2959->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2959->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp2961 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2959, ((panda$core$Int64) { 1023 }), p_position, $tmp2961, ((panda$core$Object*) wrap_panda$core$Int64(p_op)), ((panda$collections$ListView*) children2956));
        return $tmp2959;
    }
    }
    panda$core$Bit $tmp2962 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 73 }));
    if ($tmp2962.value) {
    {
        panda$core$Bit $tmp2963 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2824->kind, ((panda$core$Int64) { 1040 }));
        if ($tmp2963.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2964 = org$pandalanguage$pandac$Compiler$compileIndexedAssignment$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, left2824, p_op, right2825);
            return $tmp2964;
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp2965 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, left2824);
        left2824 = $tmp2965;
        if (((panda$core$Bit) { left2824 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp2966 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, right2825, left2824->type);
        right2825 = $tmp2966;
        if (((panda$core$Bit) { right2825 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp2967 = org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, left2824);
        panda$core$Bit $tmp2968 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2967);
        if ($tmp2968.value) {
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, left2824->position, &$s2969);
            return NULL;
        }
        }
        panda$collections$Array* $tmp2971 = (panda$collections$Array*) malloc(40);
        $tmp2971->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2971->refCount.value = 1;
        panda$collections$Array$init($tmp2971);
        children2970 = $tmp2971;
        panda$collections$Array$add$panda$collections$Array$T(children2970, ((panda$core$Object*) left2824));
        panda$collections$Array$add$panda$collections$Array$T(children2970, ((panda$core$Object*) right2825));
        org$pandalanguage$pandac$IRNode* $tmp2973 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2973->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2973->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2973, ((panda$core$Int64) { 1023 }), p_position, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 73 }))), ((panda$collections$ListView*) children2970));
        return $tmp2973;
    }
    }
    panda$core$Bit $tmp2975 = org$pandalanguage$pandac$Compiler$isAssignment$panda$core$Int64$R$panda$core$Bit(p_op);
    if ($tmp2975.value) {
    {
        panda$core$Bit $tmp2976 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2824->kind, ((panda$core$Int64) { 1040 }));
        if ($tmp2976.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2977 = org$pandalanguage$pandac$Compiler$compileIndexedAssignment$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, left2824, p_op, right2825);
            return $tmp2977;
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp2978 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, left2824);
        left2824 = $tmp2978;
        if (((panda$core$Bit) { left2824 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp2979 = org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, left2824);
        panda$core$Bit $tmp2980 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2979);
        if ($tmp2980.value) {
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, left2824->position, &$s2981);
            return NULL;
        }
        }
        panda$collections$Array* $tmp2983 = (panda$collections$Array*) malloc(40);
        $tmp2983->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2983->refCount.value = 1;
        panda$collections$Array$init($tmp2983);
        children2982 = $tmp2983;
        panda$collections$Array$add$panda$collections$Array$T(children2982, ((panda$core$Object*) left2824));
        panda$core$UInt64 $tmp2985 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(self->reusedValueCount, ((panda$core$UInt64) { 1 }));
        self->reusedValueCount = $tmp2985;
        org$pandalanguage$pandac$IRNode* $tmp2986 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2986->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2986->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2986, ((panda$core$Int64) { 1027 }), left2824->position, left2824->type, ((panda$core$Object*) wrap_panda$core$UInt64(self->reusedValueCount)), ((panda$collections$ListView*) children2982));
        left2824 = $tmp2986;
        org$pandalanguage$pandac$IRNode* $tmp2989 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2989->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2989->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2989, ((panda$core$Int64) { 1028 }), left2824->position, left2824->type, self->reusedValueCount);
        reusedLeft2988 = $tmp2989;
        panda$core$Int64 $tmp2991 = org$pandalanguage$pandac$Compiler$removeAssignment$panda$core$Int64$R$panda$core$Int64(p_op);
        org$pandalanguage$pandac$IRNode* $tmp2992 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, reusedLeft2988, $tmp2991, right2825);
        right2825 = $tmp2992;
        if (((panda$core$Bit) { right2825 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp2994 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(left2824->type);
        bool $tmp2993 = $tmp2994.value;
        if (!$tmp2993) goto $l2995;
        panda$core$Bit $tmp2996 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(left2824->type, right2825->type);
        $tmp2993 = $tmp2996.value;
        $l2995:;
        panda$core$Bit $tmp2997 = { $tmp2993 };
        if ($tmp2997.value) {
        {
            panda$collections$Array* $tmp2999 = (panda$collections$Array*) malloc(40);
            $tmp2999->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2999->refCount.value = 1;
            panda$collections$Array$init($tmp2999);
            org$pandalanguage$pandac$IRNode* $tmp3001 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, right2825, &$s2998, ((panda$collections$ListView*) $tmp2999), left2824->type);
            right2825 = $tmp3001;
            if (((panda$core$Bit) { right2825 == NULL }).value) {
            {
                return NULL;
            }
            }
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp3002 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, left2824, ((panda$core$Int64) { 73 }), right2825);
        return $tmp3002;
    }
    }
    panda$core$Bit $tmp3003 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 101 }));
    if ($tmp3003.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3004 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, left2824);
        left2824 = $tmp3004;
        if (((panda$core$Bit) { left2824 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp3005 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(left2824->type);
        if ($tmp3005.value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp3007 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, left2824->type);
            cl3006 = $tmp3007;
            if (((panda$core$Bit) { cl3006 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$ListView* $tmp3009 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, left2824->type);
            parameters3008 = $tmp3009;
            org$pandalanguage$pandac$SymbolTable* $tmp3011 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl3006);
            org$pandalanguage$pandac$Symbol* $tmp3013 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp3011, &$s3012);
            methods3010 = $tmp3013;
            if (((panda$core$Bit) { methods3010 != NULL }).value) {
            {
                panda$collections$Array* $tmp3016 = (panda$collections$Array*) malloc(40);
                $tmp3016->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp3016->refCount.value = 1;
                panda$collections$Array$init($tmp3016);
                types3015 = $tmp3016;
                panda$core$Bit $tmp3018 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(methods3010->kind, ((panda$core$Int64) { 204 }));
                if ($tmp3018.value) {
                {
                    m3019 = ((org$pandalanguage$pandac$MethodDecl*) methods3010);
                    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m3019);
                    org$pandalanguage$pandac$MethodRef* $tmp3020 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                    $tmp3020->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                    $tmp3020->refCount.value = 1;
                    org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp3020, m3019, parameters3008);
                    org$pandalanguage$pandac$Type* $tmp3022 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type($tmp3020);
                    panda$collections$Array$add$panda$collections$Array$T(types3015, ((panda$core$Object*) $tmp3022));
                }
                }
                else {
                {
                    panda$core$Bit $tmp3023 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(methods3010->kind, ((panda$core$Int64) { 205 }));
                    PANDA_ASSERT($tmp3023.value);
                    {
                        ITable* $tmp3025 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) methods3010)->methods)->$class->itable;
                        while ($tmp3025->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp3025 = $tmp3025->next;
                        }
                        $fn3027 $tmp3026 = $tmp3025->methods[0];
                        panda$collections$Iterator* $tmp3028 = $tmp3026(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) methods3010)->methods));
                        m$Iter3024 = $tmp3028;
                        $l3029:;
                        ITable* $tmp3031 = m$Iter3024->$class->itable;
                        while ($tmp3031->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp3031 = $tmp3031->next;
                        }
                        $fn3033 $tmp3032 = $tmp3031->methods[0];
                        panda$core$Bit $tmp3034 = $tmp3032(m$Iter3024);
                        panda$core$Bit $tmp3035 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3034);
                        if (!$tmp3035.value) goto $l3030;
                        {
                            ITable* $tmp3037 = m$Iter3024->$class->itable;
                            while ($tmp3037->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp3037 = $tmp3037->next;
                            }
                            $fn3039 $tmp3038 = $tmp3037->methods[1];
                            panda$core$Object* $tmp3040 = $tmp3038(m$Iter3024);
                            m3036 = ((org$pandalanguage$pandac$MethodDecl*) $tmp3040);
                            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m3036);
                            org$pandalanguage$pandac$MethodRef* $tmp3041 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                            $tmp3041->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                            $tmp3041->refCount.value = 1;
                            org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp3041, m3036, parameters3008);
                            org$pandalanguage$pandac$Type* $tmp3043 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type($tmp3041);
                            panda$collections$Array$add$panda$collections$Array$T(types3015, ((panda$core$Object*) $tmp3043));
                        }
                        goto $l3029;
                        $l3030:;
                    }
                }
                }
                org$pandalanguage$pandac$Type* $tmp3044 = (org$pandalanguage$pandac$Type*) malloc(96);
                $tmp3044->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
                $tmp3044->refCount.value = 1;
                org$pandalanguage$pandac$Type$init$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp3044, ((panda$collections$ListView*) types3015));
                type3014 = $tmp3044;
            }
            }
            else {
            {
                org$pandalanguage$pandac$Type* $tmp3046 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
                type3014 = $tmp3046;
            }
            }
            panda$collections$Array* $tmp3048 = (panda$collections$Array*) malloc(40);
            $tmp3048->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp3048->refCount.value = 1;
            panda$collections$Array$init($tmp3048);
            children3047 = $tmp3048;
            panda$collections$Array$add$panda$collections$Array$T(children3047, ((panda$core$Object*) left2824));
            panda$collections$Array$add$panda$collections$Array$T(children3047, ((panda$core$Object*) right2825));
            org$pandalanguage$pandac$IRNode* $tmp3050 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3050->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3050->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3050, ((panda$core$Int64) { 1040 }), p_position, type3014, ((panda$collections$ListView*) children3047));
            return $tmp3050;
        }
        }
    }
    }
    org$pandalanguage$pandac$Type* $tmp3052 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp3053 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(left2824->type, $tmp3052);
    if ($tmp3053.value) {
    {
        org$pandalanguage$pandac$Type* $tmp3055 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp3056 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(right2825->type, $tmp3055);
        bool $tmp3054 = $tmp3056.value;
        if (!$tmp3054) goto $l3057;
        panda$core$Bit $tmp3062 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 66 }));
        bool $tmp3061 = $tmp3062.value;
        if ($tmp3061) goto $l3063;
        panda$core$Bit $tmp3064 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 68 }));
        $tmp3061 = $tmp3064.value;
        $l3063:;
        panda$core$Bit $tmp3065 = { $tmp3061 };
        bool $tmp3060 = $tmp3065.value;
        if ($tmp3060) goto $l3066;
        panda$core$Bit $tmp3067 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 70 }));
        $tmp3060 = $tmp3067.value;
        $l3066:;
        panda$core$Bit $tmp3068 = { $tmp3060 };
        bool $tmp3059 = $tmp3068.value;
        if ($tmp3059) goto $l3069;
        panda$core$Bit $tmp3070 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 58 }));
        $tmp3059 = $tmp3070.value;
        $l3069:;
        panda$core$Bit $tmp3071 = { $tmp3059 };
        bool $tmp3058 = $tmp3071.value;
        if ($tmp3058) goto $l3072;
        panda$core$Bit $tmp3073 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 59 }));
        $tmp3058 = $tmp3073.value;
        $l3072:;
        panda$core$Bit $tmp3074 = { $tmp3058 };
        $tmp3054 = $tmp3074.value;
        $l3057:;
        panda$core$Bit $tmp3075 = { $tmp3054 };
        if ($tmp3075.value) {
        {
            panda$collections$Array* $tmp3077 = (panda$collections$Array*) malloc(40);
            $tmp3077->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp3077->refCount.value = 1;
            panda$collections$Array$init($tmp3077);
            children3076 = $tmp3077;
            panda$collections$Array$add$panda$collections$Array$T(children3076, ((panda$core$Object*) left2824));
            panda$collections$Array$add$panda$collections$Array$T(children3076, ((panda$core$Object*) right2825));
            org$pandalanguage$pandac$IRNode* $tmp3079 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3079->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3079->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3079, ((panda$core$Int64) { 1023 }), p_position, left2824->type, ((panda$core$Object*) wrap_panda$core$Int64(p_op)), ((panda$collections$ListView*) children3076));
            return $tmp3079;
        }
        }
        panda$core$String* $tmp3082 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
        panda$core$String* $tmp3083 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3081, $tmp3082);
        panda$core$String* $tmp3085 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3083, &$s3084);
        panda$core$String* $tmp3086 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3085, ((panda$core$Object*) left2824->type));
        panda$core$String* $tmp3088 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3086, &$s3087);
        panda$core$String* $tmp3089 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3088, ((panda$core$Object*) right2825->type));
        panda$core$String* $tmp3091 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3089, &$s3090);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp3091);
        return NULL;
    }
    }
    panda$collections$Array* $tmp3093 = (panda$collections$Array*) malloc(40);
    $tmp3093->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3093->refCount.value = 1;
    panda$collections$Array$init($tmp3093);
    children3092 = $tmp3093;
    panda$core$Bit $tmp3097 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2824->kind, ((panda$core$Int64) { 1004 }));
    bool $tmp3096 = $tmp3097.value;
    if ($tmp3096) goto $l3098;
    panda$core$Bit $tmp3099 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2824->kind, ((panda$core$Int64) { 1032 }));
    $tmp3096 = $tmp3099.value;
    $l3098:;
    panda$core$Bit $tmp3100 = { $tmp3096 };
    bool $tmp3095 = $tmp3100.value;
    if (!$tmp3095) goto $l3101;
    panda$core$Bit $tmp3103 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right2825->kind, ((panda$core$Int64) { 1004 }));
    bool $tmp3102 = $tmp3103.value;
    if ($tmp3102) goto $l3104;
    panda$core$Bit $tmp3105 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right2825->kind, ((panda$core$Int64) { 1032 }));
    $tmp3102 = $tmp3105.value;
    $l3104:;
    panda$core$Bit $tmp3106 = { $tmp3102 };
    $tmp3095 = $tmp3106.value;
    $l3101:;
    panda$core$Bit $tmp3107 = { $tmp3095 };
    if ($tmp3107.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3108 = org$pandalanguage$pandac$Compiler$foldInts$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, left2824, p_op, right2825);
        return $tmp3108;
    }
    }
    panda$core$Bit $tmp3110 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(left2824->type);
    bool $tmp3109 = $tmp3110.value;
    if (!$tmp3109) goto $l3111;
    panda$core$Int64$nullable $tmp3112 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, right2825, left2824->type);
    $tmp3109 = ((panda$core$Bit) { $tmp3112.nonnull }).value;
    $l3111:;
    panda$core$Bit $tmp3113 = { $tmp3109 };
    if ($tmp3113.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3114 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, right2825, left2824->type);
        right2825 = $tmp3114;
        PANDA_ASSERT(((panda$core$Bit) { right2825 != NULL }).value);
        panda$collections$Array$add$panda$collections$Array$T(children3092, ((panda$core$Object*) left2824));
        panda$collections$Array$add$panda$collections$Array$T(children3092, ((panda$core$Object*) right2825));
        switch (p_op.value) {
            case 58:
            case 59:
            case 63:
            case 65:
            case 62:
            case 64:
            {
                org$pandalanguage$pandac$Type* $tmp3116 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
                resultType3115 = $tmp3116;
            }
            break;
            default:
            {
                resultType3115 = left2824->type;
            }
        }
        org$pandalanguage$pandac$IRNode* $tmp3117 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3117->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3117->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3117, ((panda$core$Int64) { 1023 }), p_position, resultType3115, ((panda$core$Object*) wrap_panda$core$Int64(p_op)), ((panda$collections$ListView*) children3092));
        return $tmp3117;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children3092, ((panda$core$Object*) right2825));
    PANDA_ASSERT(self->reportErrors.value);
    self->reportErrors = ((panda$core$Bit) { false });
    panda$core$String* $tmp3120 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
    org$pandalanguage$pandac$IRNode* $tmp3121 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, left2824, $tmp3120, ((panda$collections$ListView*) children3092));
    result3119 = $tmp3121;
    self->reportErrors = ((panda$core$Bit) { true });
    if (((panda$core$Bit) { result3119 == NULL }).value) {
    {
        panda$collections$Array$clear(children3092);
        panda$collections$Array$add$panda$collections$Array$T(children3092, ((panda$core$Object*) left2824));
        org$pandalanguage$pandac$IRNode* $tmp3123 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, right2825);
        resolved3122 = $tmp3123;
        bool $tmp3124 = ((panda$core$Bit) { resolved3122 != NULL }).value;
        if (!$tmp3124) goto $l3125;
        panda$core$Bit $tmp3126 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(resolved3122->type);
        $tmp3124 = $tmp3126.value;
        $l3125:;
        panda$core$Bit $tmp3127 = { $tmp3124 };
        if ($tmp3127.value) {
        {
            panda$collections$Array$add$panda$collections$Array$T(children3092, ((panda$core$Object*) resolved3122));
            org$pandalanguage$pandac$IRNode* $tmp3129 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3129->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3129->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3131 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp3129, ((panda$core$Int64) { 1001 }), resolved3122->position, $tmp3131, resolved3122->type);
            target3128 = $tmp3129;
            panda$core$String* $tmp3132 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
            org$pandalanguage$pandac$IRNode* $tmp3133 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target3128, $tmp3132, ((panda$collections$ListView*) children3092));
            result3119 = $tmp3133;
        }
        }
    }
    }
    return result3119;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_b) {
    org$pandalanguage$pandac$IRNode* left3134;
    org$pandalanguage$pandac$IRNode* right3137;
    panda$core$Object* $tmp3135 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_b->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3136 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3135));
    left3134 = $tmp3136;
    if (((panda$core$Bit) { left3134 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Object* $tmp3138 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_b->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp3139 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3138));
    right3137 = $tmp3139;
    if (((panda$core$Bit) { right3137 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3140 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_b->position, left3134, ((panda$core$Int64$wrapper*) p_b->payload)->value, right3137);
    return $tmp3140;
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type) {
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp3144;
    switch (p_type->typeKind.value) {
        case 22:
        {
            panda$collections$ListView* $tmp3141 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p_type->parameter->bound);
            return $tmp3141;
        }
        break;
        case 21:
        {
            panda$core$Int64 $tmp3142 = panda$collections$Array$get_count$R$panda$core$Int64(p_type->subtypes);
            panda$core$Bit $tmp3143 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp3142, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp3143.value);
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp3144, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$collections$Array* $tmp3145 = panda$collections$Array$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT(p_type->subtypes, $tmp3144);
            return ((panda$collections$ListView*) $tmp3145);
        }
        break;
        case 11:
        {
            panda$core$Object* $tmp3146 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
            panda$collections$ListView* $tmp3147 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, ((org$pandalanguage$pandac$Type*) $tmp3146));
            return $tmp3147;
        }
        break;
        default:
        {
            panda$collections$Array* $tmp3148 = (panda$collections$Array*) malloc(40);
            $tmp3148->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp3148->refCount.value = 1;
            panda$collections$Array$init($tmp3148);
            return ((panda$collections$ListView*) $tmp3148);
        }
    }
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$IRNode$Q$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_target) {
    if (((panda$core$Bit) { p_target != NULL }).value) {
    {
        panda$core$Bit $tmp3150 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1001 }));
        if ($tmp3150.value) {
        {
            panda$collections$ListView* $tmp3151 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, ((org$pandalanguage$pandac$Type*) p_target->payload));
            return $tmp3151;
        }
        }
        panda$collections$ListView* $tmp3152 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p_target->type);
        return $tmp3152;
    }
    }
    panda$collections$Array* $tmp3153 = (panda$collections$Array*) malloc(40);
    $tmp3153->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3153->refCount.value = 1;
    panda$collections$Array$init($tmp3153);
    return ((panda$collections$ListView*) $tmp3153);
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compilePrefix$panda$core$Int64$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_base, org$pandalanguage$pandac$Position p_position) {
    panda$core$String* name3156;
    org$pandalanguage$pandac$ClassDecl* cl3158;
    org$pandalanguage$pandac$Symbol* s3160;
    org$pandalanguage$pandac$MethodDecl* m3163;
    panda$collections$Iterator* test$Iter3168;
    org$pandalanguage$pandac$MethodDecl* test3180;
    org$pandalanguage$pandac$MethodRef* ref3192;
    panda$collections$Array* children3196;
    org$pandalanguage$pandac$IRNode* methodRef3199;
    org$pandalanguage$pandac$Position $tmp3205;
    panda$collections$Array* args3206;
    panda$collections$Array* children3222;
    panda$collections$Array* children3232;
    org$pandalanguage$pandac$IRNode* coerced3241;
    panda$collections$Array* children3244;
    panda$core$Bit $tmp3155 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_base->type);
    if ($tmp3155.value) {
    {
        panda$core$String* $tmp3157 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
        name3156 = $tmp3157;
        org$pandalanguage$pandac$ClassDecl* $tmp3159 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_base->type);
        cl3158 = $tmp3159;
        if (((panda$core$Bit) { cl3158 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$SymbolTable* $tmp3161 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl3158);
        org$pandalanguage$pandac$Symbol* $tmp3162 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp3161, name3156);
        s3160 = $tmp3162;
        if (((panda$core$Bit) { s3160 != NULL }).value) {
        {
            m3163 = NULL;
            switch (s3160->kind.value) {
                case 204:
                {
                    m3163 = ((org$pandalanguage$pandac$MethodDecl*) s3160);
                    panda$core$Int64 $tmp3164 = panda$collections$Array$get_count$R$panda$core$Int64(m3163->parameters);
                    panda$core$Bit $tmp3165 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3164, ((panda$core$Int64) { 0 }));
                    PANDA_ASSERT($tmp3165.value);
                    panda$core$Bit $tmp3166 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(m3163->annotations);
                    panda$core$Bit $tmp3167 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3166);
                    PANDA_ASSERT($tmp3167.value);
                }
                break;
                case 205:
                {
                    {
                        ITable* $tmp3169 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s3160)->methods)->$class->itable;
                        while ($tmp3169->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp3169 = $tmp3169->next;
                        }
                        $fn3171 $tmp3170 = $tmp3169->methods[0];
                        panda$collections$Iterator* $tmp3172 = $tmp3170(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s3160)->methods));
                        test$Iter3168 = $tmp3172;
                        $l3173:;
                        ITable* $tmp3175 = test$Iter3168->$class->itable;
                        while ($tmp3175->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp3175 = $tmp3175->next;
                        }
                        $fn3177 $tmp3176 = $tmp3175->methods[0];
                        panda$core$Bit $tmp3178 = $tmp3176(test$Iter3168);
                        panda$core$Bit $tmp3179 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3178);
                        if (!$tmp3179.value) goto $l3174;
                        {
                            ITable* $tmp3181 = test$Iter3168->$class->itable;
                            while ($tmp3181->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp3181 = $tmp3181->next;
                            }
                            $fn3183 $tmp3182 = $tmp3181->methods[1];
                            panda$core$Object* $tmp3184 = $tmp3182(test$Iter3168);
                            test3180 = ((org$pandalanguage$pandac$MethodDecl*) $tmp3184);
                            panda$core$Bit $tmp3186 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(test3180->annotations);
                            panda$core$Bit $tmp3187 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3186);
                            bool $tmp3185 = $tmp3187.value;
                            if (!$tmp3185) goto $l3188;
                            panda$core$Int64 $tmp3189 = panda$collections$Array$get_count$R$panda$core$Int64(test3180->parameters);
                            panda$core$Bit $tmp3190 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3189, ((panda$core$Int64) { 0 }));
                            $tmp3185 = $tmp3190.value;
                            $l3188:;
                            panda$core$Bit $tmp3191 = { $tmp3185 };
                            if ($tmp3191.value) {
                            {
                                m3163 = test3180;
                                goto $l3174;
                            }
                            }
                        }
                        goto $l3173;
                        $l3174:;
                    }
                }
                break;
                default:
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
            }
            if (((panda$core$Bit) { m3163 != NULL }).value) {
            {
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m3163);
                org$pandalanguage$pandac$MethodRef* $tmp3193 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                $tmp3193->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                $tmp3193->refCount.value = 1;
                panda$collections$ListView* $tmp3195 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$IRNode$Q$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p_base);
                org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp3193, m3163, $tmp3195);
                ref3192 = $tmp3193;
                panda$collections$Array* $tmp3197 = (panda$collections$Array*) malloc(40);
                $tmp3197->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp3197->refCount.value = 1;
                panda$collections$Array$init($tmp3197);
                children3196 = $tmp3197;
                panda$collections$Array$add$panda$collections$Array$T(children3196, ((panda$core$Object*) p_base));
                org$pandalanguage$pandac$IRNode* $tmp3200 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp3200->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp3200->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp3202 = (org$pandalanguage$pandac$Type*) malloc(96);
                $tmp3202->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
                $tmp3202->refCount.value = 1;
                org$pandalanguage$pandac$Position$init(&$tmp3205);
                org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp3202, &$s3204, ((panda$core$Int64) { 16 }), $tmp3205, ((panda$core$Bit) { true }));
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3200, ((panda$core$Int64) { 1002 }), p_position, $tmp3202, ((panda$core$Object*) ref3192), ((panda$collections$ListView*) children3196));
                methodRef3199 = $tmp3200;
                panda$collections$Array* $tmp3207 = (panda$collections$Array*) malloc(40);
                $tmp3207->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp3207->refCount.value = 1;
                panda$collections$Array$init($tmp3207);
                args3206 = $tmp3207;
                org$pandalanguage$pandac$IRNode* $tmp3209 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, methodRef3199, ((panda$collections$ListView*) args3206));
                return $tmp3209;
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
                    org$pandalanguage$pandac$IRNode* $tmp3210 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp3210->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp3210->refCount.value = 1;
                    org$pandalanguage$pandac$Type* $tmp3212 = org$pandalanguage$pandac$Type$NegatedIntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(((panda$core$UInt64$wrapper*) p_base->payload)->value);
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp3210, ((panda$core$Int64) { 1032 }), p_position, $tmp3212, ((panda$core$UInt64$wrapper*) p_base->payload)->value);
                    return $tmp3210;
                }
                break;
                case 1032:
                {
                    org$pandalanguage$pandac$IRNode* $tmp3213 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp3213->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp3213->refCount.value = 1;
                    org$pandalanguage$pandac$Type* $tmp3215 = org$pandalanguage$pandac$Type$NegatedIntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(((panda$core$UInt64$wrapper*) p_base->payload)->value);
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp3213, ((panda$core$Int64) { 1004 }), p_position, $tmp3215, ((panda$core$UInt64$wrapper*) p_base->payload)->value);
                    return $tmp3213;
                }
                break;
                case 1045:
                {
                    org$pandalanguage$pandac$IRNode* $tmp3216 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp3216->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp3216->refCount.value = 1;
                    panda$core$Real64 $tmp3218 = panda$core$Real64$$SUB$R$panda$core$Real64(((panda$core$Real64$wrapper*) p_base->payload)->value);
                    org$pandalanguage$pandac$Type* $tmp3219 = org$pandalanguage$pandac$Type$RealLiteral$panda$core$Real64$R$org$pandalanguage$pandac$Type($tmp3218);
                    panda$core$Real64 $tmp3220 = panda$core$Real64$$SUB$R$panda$core$Real64(((panda$core$Real64$wrapper*) p_base->payload)->value);
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Real64($tmp3216, ((panda$core$Int64) { 1045 }), p_position, $tmp3219, $tmp3220);
                    return $tmp3216;
                }
                break;
                default:
                {
                    panda$core$Bit $tmp3221 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_base->type);
                    if ($tmp3221.value) {
                    {
                        panda$collections$Array* $tmp3223 = (panda$collections$Array*) malloc(40);
                        $tmp3223->$class = (panda$core$Class*) &panda$collections$Array$class;
                        $tmp3223->refCount.value = 1;
                        panda$collections$Array$init($tmp3223);
                        children3222 = $tmp3223;
                        panda$collections$Array$add$panda$collections$Array$T(children3222, ((panda$core$Object*) p_base));
                        org$pandalanguage$pandac$IRNode* $tmp3225 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                        $tmp3225->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                        $tmp3225->refCount.value = 1;
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3225, ((panda$core$Int64) { 1041 }), p_base->position, p_base->type, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 52 }))), ((panda$collections$ListView*) children3222));
                        return $tmp3225;
                    }
                    }
                }
            }
            panda$core$String* $tmp3228 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3227, ((panda$core$Object*) p_base->type));
            panda$core$String* $tmp3230 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3228, &$s3229);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_base->position, $tmp3230);
            return NULL;
        }
        break;
        case 50:
        {
            panda$core$Bit $tmp3231 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_base->type);
            if ($tmp3231.value) {
            {
                panda$collections$Array* $tmp3233 = (panda$collections$Array*) malloc(40);
                $tmp3233->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp3233->refCount.value = 1;
                panda$collections$Array$init($tmp3233);
                children3232 = $tmp3233;
                panda$collections$Array$add$panda$collections$Array$T(children3232, ((panda$core$Object*) p_base));
                org$pandalanguage$pandac$IRNode* $tmp3235 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp3235->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp3235->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3235, ((panda$core$Int64) { 1041 }), p_base->position, p_base->type, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 50 }))), ((panda$collections$ListView*) children3232));
                return $tmp3235;
            }
            }
            else {
            {
                panda$core$String* $tmp3238 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3237, ((org$pandalanguage$pandac$Symbol*) p_base->type)->name);
                panda$core$String* $tmp3240 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3238, &$s3239);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_base->position, $tmp3240);
                return NULL;
            }
            }
        }
        break;
        case 49:
        {
            org$pandalanguage$pandac$Type* $tmp3242 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode* $tmp3243 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_base, $tmp3242);
            coerced3241 = $tmp3243;
            if (((panda$core$Bit) { coerced3241 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp3245 = (panda$collections$Array*) malloc(40);
            $tmp3245->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp3245->refCount.value = 1;
            panda$collections$Array$init($tmp3245);
            children3244 = $tmp3245;
            panda$collections$Array$add$panda$collections$Array$T(children3244, ((panda$core$Object*) coerced3241));
            org$pandalanguage$pandac$IRNode* $tmp3247 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3247->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3247->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3247, ((panda$core$Int64) { 1041 }), p_base->position, p_base->type, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 49 }))), ((panda$collections$ListView*) children3244));
            return $tmp3247;
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
    org$pandalanguage$pandac$IRNode* base3252;
    panda$core$Bit $tmp3249 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_p->kind, ((panda$core$Int64) { 112 }));
    PANDA_ASSERT($tmp3249.value);
    panda$core$Int64 $tmp3250 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_p->children);
    panda$core$Bit $tmp3251 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3250, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3251.value);
    panda$core$Object* $tmp3253 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_p->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3254 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3253));
    base3252 = $tmp3254;
    if (((panda$core$Bit) { base3252 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3255 = org$pandalanguage$pandac$Compiler$compilePrefix$panda$core$Int64$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$R$org$pandalanguage$pandac$IRNode$Q(self, ((panda$core$Int64$wrapper*) p_p->payload)->value, base3252, p_p->position);
    return $tmp3255;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileCall$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_c) {
    org$pandalanguage$pandac$IRNode* m3257;
    panda$collections$Array* args3260;
    panda$core$Range$LTpanda$core$Int64$GT $tmp3263;
    org$pandalanguage$pandac$IRNode* arg3278;
    panda$core$Bit $tmp3256 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_c->kind, ((panda$core$Int64) { 107 }));
    PANDA_ASSERT($tmp3256.value);
    panda$core$Object* $tmp3258 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_c->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3259 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3258));
    m3257 = $tmp3259;
    if (((panda$core$Bit) { m3257 != NULL }).value) {
    {
        panda$collections$Array* $tmp3261 = (panda$collections$Array*) malloc(40);
        $tmp3261->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp3261->refCount.value = 1;
        panda$collections$Array$init($tmp3261);
        args3260 = $tmp3261;
        panda$core$Int64 $tmp3264 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_c->children);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp3263, ((panda$core$Int64) { 1 }), $tmp3264, ((panda$core$Bit) { false }));
        int64_t $tmp3266 = $tmp3263.min.value;
        panda$core$Int64 i3265 = { $tmp3266 };
        int64_t $tmp3268 = $tmp3263.max.value;
        bool $tmp3269 = $tmp3263.inclusive.value;
        if ($tmp3269) goto $l3276; else goto $l3277;
        $l3276:;
        if ($tmp3266 <= $tmp3268) goto $l3270; else goto $l3272;
        $l3277:;
        if ($tmp3266 < $tmp3268) goto $l3270; else goto $l3272;
        $l3270:;
        {
            panda$core$Object* $tmp3279 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_c->children, i3265);
            org$pandalanguage$pandac$IRNode* $tmp3280 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3279));
            arg3278 = $tmp3280;
            if (((panda$core$Bit) { arg3278 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(args3260, ((panda$core$Object*) arg3278));
        }
        $l3273:;
        int64_t $tmp3282 = $tmp3268 - i3265.value;
        if ($tmp3269) goto $l3283; else goto $l3284;
        $l3283:;
        if ($tmp3282 >= 1) goto $l3281; else goto $l3272;
        $l3284:;
        if ($tmp3282 > 1) goto $l3281; else goto $l3272;
        $l3281:;
        i3265.value += 1;
        goto $l3270;
        $l3272:;
        org$pandalanguage$pandac$IRNode* $tmp3287 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, m3257, ((panda$collections$ListView*) args3260));
        return $tmp3287;
    }
    }
    return NULL;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$String$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_base, panda$core$String* p_name) {
    org$pandalanguage$pandac$ClassDecl* cl3288;
    panda$core$String* name3290;
    org$pandalanguage$pandac$ClassDecl* cl3298;
    org$pandalanguage$pandac$SymbolTable* st3311;
    org$pandalanguage$pandac$Symbol* s3313;
    switch (p_base->kind.value) {
        case 1001:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp3289 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Type*) p_base->payload));
            cl3288 = $tmp3289;
        }
        break;
        case 1037:
        {
            panda$core$String* $tmp3292 = (($fn3291) p_base->payload->$class->vtable[0])(p_base->payload);
            panda$core$String* $tmp3294 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3292, &$s3293);
            panda$core$String* $tmp3295 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3294, p_name);
            panda$core$String* $tmp3297 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3295, &$s3296);
            name3290 = $tmp3297;
            org$pandalanguage$pandac$ClassDecl* $tmp3299 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, name3290);
            cl3298 = $tmp3299;
            if (((panda$core$Bit) { cl3298 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp3300 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp3300->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp3300->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp3302 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$Type* $tmp3303 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl3298);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp3300, ((panda$core$Int64) { 1001 }), p_position, $tmp3302, $tmp3303);
                return $tmp3300;
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp3304 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3304->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3304->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3306 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$String($tmp3304, ((panda$core$Int64) { 1037 }), p_position, $tmp3306, name3290);
            return $tmp3304;
        }
        break;
        case 1024:
        {
            panda$core$Object* $tmp3307 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, ((org$pandalanguage$pandac$ClassDecl*) $tmp3307));
            panda$core$Object* $tmp3308 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
            org$pandalanguage$pandac$ClassDecl* $tmp3309 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$ClassDecl*) $tmp3308)->rawSuper);
            cl3288 = $tmp3309;
        }
        break;
        default:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp3310 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_base->type);
            cl3288 = $tmp3310;
        }
    }
    if (((panda$core$Bit) { cl3288 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp3312 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl3288);
    st3311 = $tmp3312;
    org$pandalanguage$pandac$Symbol* $tmp3314 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(st3311, p_name);
    s3313 = $tmp3314;
    if (((panda$core$Bit) { s3313 == NULL }).value) {
    {
        panda$core$String* $tmp3316 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3315, ((panda$core$Object*) p_base->type));
        panda$core$String* $tmp3318 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3316, &$s3317);
        panda$core$String* $tmp3319 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3318, p_name);
        panda$core$String* $tmp3321 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3319, &$s3320);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp3321);
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3322 = org$pandalanguage$pandac$Compiler$symbolRef$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, p_base, s3313, st3311);
    return $tmp3322;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_d) {
    org$pandalanguage$pandac$IRNode* base3326;
    panda$core$Bit $tmp3323 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_d->kind, ((panda$core$Int64) { 108 }));
    PANDA_ASSERT($tmp3323.value);
    panda$core$Int64 $tmp3324 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp3325 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3324, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3325.value);
    panda$core$Object* $tmp3327 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3328 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3327));
    base3326 = $tmp3328;
    if (((panda$core$Bit) { base3326 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp3330 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(base3326->kind, ((panda$core$Int64) { 1037 }));
    bool $tmp3329 = $tmp3330.value;
    if (!$tmp3329) goto $l3331;
    panda$core$Bit $tmp3332 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(base3326->kind, ((panda$core$Int64) { 1024 }));
    $tmp3329 = $tmp3332.value;
    $l3331:;
    panda$core$Bit $tmp3333 = { $tmp3329 };
    if ($tmp3333.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3334 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, base3326);
        base3326 = $tmp3334;
    }
    }
    if (((panda$core$Bit) { base3326 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3335 = org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$String$R$org$pandalanguage$pandac$IRNode$Q(self, p_d->position, base3326, ((panda$core$String*) p_d->payload));
    return $tmp3335;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIdentifier$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_i) {
    org$pandalanguage$pandac$Symbol* s3337;
    panda$core$Bit $tmp3336 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_i->kind, ((panda$core$Int64) { 106 }));
    PANDA_ASSERT($tmp3336.value);
    org$pandalanguage$pandac$Symbol* $tmp3338 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(self->symbolTable, ((panda$core$String*) p_i->payload));
    s3337 = $tmp3338;
    if (((panda$core$Bit) { s3337 == NULL }).value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp3339 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((panda$core$String*) p_i->payload));
        s3337 = ((org$pandalanguage$pandac$Symbol*) $tmp3339);
    }
    }
    if (((panda$core$Bit) { s3337 != NULL }).value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3340 = org$pandalanguage$pandac$Compiler$symbolRef$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q(self, p_i->position, NULL, s3337, self->symbolTable);
        return $tmp3340;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3341 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3341->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3341->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3343 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$String($tmp3341, ((panda$core$Int64) { 1037 }), p_i->position, $tmp3343, ((panda$core$String*) p_i->payload));
    return $tmp3341;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_t) {
    org$pandalanguage$pandac$Type* resolved3344;
    org$pandalanguage$pandac$Type* $tmp3345 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, p_t);
    org$pandalanguage$pandac$Type* $tmp3346 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, $tmp3345);
    resolved3344 = $tmp3346;
    if (((panda$core$Bit) { resolved3344 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3347 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3347->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3347->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3349 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp3347, ((panda$core$Int64) { 1001 }), p_t->position, $tmp3349, resolved3344);
    return $tmp3347;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileRange$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_r) {
    org$pandalanguage$pandac$IRNode* start3357;
    org$pandalanguage$pandac$IRNode* end3365;
    org$pandalanguage$pandac$IRNode* step3373;
    panda$collections$Array* children3380;
    org$pandalanguage$pandac$Position $tmp3388;
    panda$core$Bit $tmp3351 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_r->kind, ((panda$core$Int64) { 105 }));
    bool $tmp3350 = $tmp3351.value;
    if ($tmp3350) goto $l3352;
    panda$core$Bit $tmp3353 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_r->kind, ((panda$core$Int64) { 104 }));
    $tmp3350 = $tmp3353.value;
    $l3352:;
    panda$core$Bit $tmp3354 = { $tmp3350 };
    PANDA_ASSERT($tmp3354.value);
    panda$core$Int64 $tmp3355 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_r->children);
    panda$core$Bit $tmp3356 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3355, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp3356.value);
    panda$core$Object* $tmp3358 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp3359 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp3358)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp3359.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3360 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3360->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3360->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp3362 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3360, ((panda$core$Int64) { 1030 }), p_r->position, $tmp3362);
        start3357 = $tmp3360;
    }
    }
    else {
    {
        panda$core$Object* $tmp3363 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp3364 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3363));
        start3357 = $tmp3364;
        if (((panda$core$Bit) { start3357 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$core$Object* $tmp3366 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp3367 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp3366)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp3367.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3368 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3368->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3368->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp3370 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3368, ((panda$core$Int64) { 1030 }), p_r->position, $tmp3370);
        end3365 = $tmp3368;
    }
    }
    else {
    {
        panda$core$Object* $tmp3371 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$IRNode* $tmp3372 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3371));
        end3365 = $tmp3372;
        if (((panda$core$Bit) { end3365 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$core$Object* $tmp3374 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 2 }));
    panda$core$Bit $tmp3375 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp3374)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp3375.value) {
    {
        step3373 = NULL;
    }
    }
    else {
    {
        panda$core$Object* $tmp3376 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$IRNode* $tmp3377 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3376));
        step3373 = $tmp3377;
        if (((panda$core$Bit) { step3373 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp3378 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(step3373->kind, ((panda$core$Int64) { 1030 }));
        if ($tmp3378.value) {
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, step3373->position, &$s3379);
            return NULL;
        }
        }
    }
    }
    panda$collections$Array* $tmp3381 = (panda$collections$Array*) malloc(40);
    $tmp3381->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3381->refCount.value = 1;
    panda$collections$Array$init($tmp3381);
    children3380 = $tmp3381;
    panda$collections$Array$add$panda$collections$Array$T(children3380, ((panda$core$Object*) start3357));
    panda$collections$Array$add$panda$collections$Array$T(children3380, ((panda$core$Object*) end3365));
    if (((panda$core$Bit) { step3373 != NULL }).value) {
    {
        panda$collections$Array$add$panda$collections$Array$T(children3380, ((panda$core$Object*) step3373));
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3383 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3383->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3383->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3385 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp3385->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp3385->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp3388);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp3385, &$s3387, ((panda$core$Int64) { 17 }), $tmp3388, ((panda$core$Bit) { true }));
    panda$core$Bit $tmp3389 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_r->kind, ((panda$core$Int64) { 104 }));
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3383, ((panda$core$Int64) { 1031 }), p_r->position, $tmp3385, ((panda$core$Object*) wrap_panda$core$Bit($tmp3389)), ((panda$collections$ListView*) children3380));
    return $tmp3383;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$IRNode* $tmp3390 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3390->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3390->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3392 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$String($tmp3390, ((panda$core$Int64) { 1033 }), p_s->position, $tmp3392, ((panda$core$String*) p_s->payload));
    return $tmp3390;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileSelf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$Type* type3397;
    org$pandalanguage$pandac$ClassDecl* cl3398;
    panda$collections$Array* subtypes3405;
    panda$core$MutableString* name3409;
    panda$core$Char8 $tmp3412;
    panda$core$String* separator3413;
    panda$collections$Iterator* p$Iter3415;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* p3427;
    panda$collections$Array* pType3432;
    panda$core$String* pName3435;
    panda$core$Char8 $tmp3445;
    panda$core$Bit $tmp3393 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_s->kind, ((panda$core$Int64) { 114 }));
    PANDA_ASSERT($tmp3393.value);
    panda$core$Object* $tmp3394 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
    panda$core$Bit $tmp3395 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp3394)->annotations);
    if ($tmp3395.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_s->position, &$s3396);
        return NULL;
    }
    }
    panda$core$Object* $tmp3399 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
    cl3398 = ((org$pandalanguage$pandac$ClassDecl*) $tmp3399);
    ITable* $tmp3400 = ((panda$collections$CollectionView*) cl3398->parameters)->$class->itable;
    while ($tmp3400->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp3400 = $tmp3400->next;
    }
    $fn3402 $tmp3401 = $tmp3400->methods[0];
    panda$core$Int64 $tmp3403 = $tmp3401(((panda$collections$CollectionView*) cl3398->parameters));
    panda$core$Bit $tmp3404 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3403, ((panda$core$Int64) { 0 }));
    if ($tmp3404.value) {
    {
        panda$collections$Array* $tmp3406 = (panda$collections$Array*) malloc(40);
        $tmp3406->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp3406->refCount.value = 1;
        panda$collections$Array$init($tmp3406);
        subtypes3405 = $tmp3406;
        org$pandalanguage$pandac$Type* $tmp3408 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl3398);
        panda$collections$Array$add$panda$collections$Array$T(subtypes3405, ((panda$core$Object*) $tmp3408));
        panda$core$MutableString* $tmp3410 = (panda$core$MutableString*) malloc(48);
        $tmp3410->$class = (panda$core$Class*) &panda$core$MutableString$class;
        $tmp3410->refCount.value = 1;
        panda$core$MutableString$init$panda$core$String($tmp3410, ((org$pandalanguage$pandac$Symbol*) cl3398)->name);
        name3409 = $tmp3410;
        panda$core$Char8$init$panda$core$UInt8(&$tmp3412, ((panda$core$UInt8) { 60 }));
        panda$core$MutableString$append$panda$core$Char8(name3409, $tmp3412);
        separator3413 = &$s3414;
        {
            ITable* $tmp3416 = ((panda$collections$Iterable*) cl3398->parameters)->$class->itable;
            while ($tmp3416->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3416 = $tmp3416->next;
            }
            $fn3418 $tmp3417 = $tmp3416->methods[0];
            panda$collections$Iterator* $tmp3419 = $tmp3417(((panda$collections$Iterable*) cl3398->parameters));
            p$Iter3415 = $tmp3419;
            $l3420:;
            ITable* $tmp3422 = p$Iter3415->$class->itable;
            while ($tmp3422->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3422 = $tmp3422->next;
            }
            $fn3424 $tmp3423 = $tmp3422->methods[0];
            panda$core$Bit $tmp3425 = $tmp3423(p$Iter3415);
            panda$core$Bit $tmp3426 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3425);
            if (!$tmp3426.value) goto $l3421;
            {
                ITable* $tmp3428 = p$Iter3415->$class->itable;
                while ($tmp3428->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3428 = $tmp3428->next;
                }
                $fn3430 $tmp3429 = $tmp3428->methods[1];
                panda$core$Object* $tmp3431 = $tmp3429(p$Iter3415);
                p3427 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp3431);
                panda$collections$Array* $tmp3433 = (panda$collections$Array*) malloc(40);
                $tmp3433->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp3433->refCount.value = 1;
                panda$collections$Array$init($tmp3433);
                pType3432 = $tmp3433;
                panda$collections$Array$add$panda$collections$Array$T(pType3432, ((panda$core$Object*) p3427->bound));
                panda$core$String* $tmp3436 = panda$core$String$convert$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) cl3398)->name);
                panda$core$String* $tmp3438 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3436, &$s3437);
                panda$core$String* $tmp3439 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3438, ((org$pandalanguage$pandac$Symbol*) p3427)->name);
                panda$core$String* $tmp3441 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3439, &$s3440);
                pName3435 = $tmp3441;
                panda$core$MutableString$append$panda$core$String(name3409, separator3413);
                panda$core$MutableString$append$panda$core$String(name3409, pName3435);
                org$pandalanguage$pandac$Type* $tmp3442 = (org$pandalanguage$pandac$Type*) malloc(96);
                $tmp3442->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
                $tmp3442->refCount.value = 1;
                org$pandalanguage$pandac$Type$init$org$pandalanguage$pandac$ClassDecl$GenericParameter($tmp3442, p3427);
                panda$collections$Array$add$panda$collections$Array$T(subtypes3405, ((panda$core$Object*) $tmp3442));
                separator3413 = &$s3444;
            }
            goto $l3420;
            $l3421:;
        }
        panda$core$Char8$init$panda$core$UInt8(&$tmp3445, ((panda$core$UInt8) { 62 }));
        panda$core$MutableString$append$panda$core$Char8(name3409, $tmp3445);
        org$pandalanguage$pandac$Type* $tmp3446 = (org$pandalanguage$pandac$Type*) malloc(96);
        $tmp3446->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
        $tmp3446->refCount.value = 1;
        panda$core$String* $tmp3448 = panda$core$MutableString$finish$R$panda$core$String(name3409);
        org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp3446, $tmp3448, ((panda$core$Int64) { 21 }), p_s->position, ((panda$collections$ListView*) subtypes3405), ((panda$core$Bit) { true }));
        type3397 = $tmp3446;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp3449 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl3398);
        type3397 = $tmp3449;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3450 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3450->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3450->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3450, ((panda$core$Int64) { 1025 }), p_s->position, type3397);
    return $tmp3450;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileSuper$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$ClassDecl* cl3456;
    panda$core$Bit $tmp3452 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_s->kind, ((panda$core$Int64) { 115 }));
    PANDA_ASSERT($tmp3452.value);
    panda$core$Object* $tmp3453 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
    panda$core$Bit $tmp3454 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp3453)->annotations);
    if ($tmp3454.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_s->position, &$s3455);
        return NULL;
    }
    }
    panda$core$Object* $tmp3457 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
    cl3456 = ((org$pandalanguage$pandac$ClassDecl*) $tmp3457);
    PANDA_ASSERT(cl3456->resolved.value);
    org$pandalanguage$pandac$IRNode* $tmp3458 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3458->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3458->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3458, ((panda$core$Int64) { 1024 }), p_s->position, cl3456->rawSuper);
    return $tmp3458;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_expr, org$pandalanguage$pandac$Type* p_rawType) {
    org$pandalanguage$pandac$IRNode* value3460;
    panda$core$String$Index$nullable index3462;
    org$pandalanguage$pandac$Type* type3469;
    org$pandalanguage$pandac$IRNode* base3471;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp3474;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp3477;
    org$pandalanguage$pandac$Type* type3481;
    org$pandalanguage$pandac$IRNode* $tmp3461 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr);
    value3460 = $tmp3461;
    if (((panda$core$Bit) { value3460 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$String$Index$nullable $tmp3464 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(((org$pandalanguage$pandac$Symbol*) p_rawType)->name, &$s3463);
    index3462 = $tmp3464;
    panda$core$Bit $tmp3466 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_rawType->typeKind, ((panda$core$Int64) { 10 }));
    bool $tmp3465 = $tmp3466.value;
    if (!$tmp3465) goto $l3467;
    $tmp3465 = ((panda$core$Bit) { index3462.nonnull }).value;
    $l3467:;
    panda$core$Bit $tmp3468 = { $tmp3465 };
    if ($tmp3468.value) {
    {
        PANDA_ASSERT(self->reportErrors.value);
        self->reportErrors = ((panda$core$Bit) { false });
        org$pandalanguage$pandac$Type* $tmp3470 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, p_rawType);
        type3469 = $tmp3470;
        self->reportErrors = ((panda$core$Bit) { true });
        if (((panda$core$Bit) { type3469 == NULL }).value) {
        {
            org$pandalanguage$pandac$Type* $tmp3472 = (org$pandalanguage$pandac$Type*) malloc(96);
            $tmp3472->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp3472->refCount.value = 1;
            panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp3474, ((panda$core$String$Index$nullable) { .nonnull = false }), index3462, ((panda$core$Bit) { false }));
            panda$core$String* $tmp3475 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) p_rawType)->name, $tmp3474);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position($tmp3472, $tmp3475, ((panda$core$Int64) { 10 }), p_position);
            org$pandalanguage$pandac$IRNode* $tmp3476 = org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, p_expr, $tmp3472);
            base3471 = $tmp3476;
            if (((panda$core$Bit) { base3471 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$String$Index $tmp3478 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(((org$pandalanguage$pandac$Symbol*) p_rawType)->name, ((panda$core$String$Index) index3462.value));
            panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp3477, ((panda$core$String$Index$nullable) { $tmp3478, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$core$String* $tmp3479 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) p_rawType)->name, $tmp3477);
            org$pandalanguage$pandac$IRNode* $tmp3480 = org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$String$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, base3471, $tmp3479);
            return $tmp3480;
        }
        }
    }
    }
    org$pandalanguage$pandac$Type* $tmp3482 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, p_rawType);
    type3481 = $tmp3482;
    if (((panda$core$Bit) { type3481 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Int64$nullable $tmp3483 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, value3460, type3481);
    if (((panda$core$Bit) { $tmp3483.nonnull }).value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3484 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, value3460, type3481);
        return $tmp3484;
    }
    }
    panda$core$Bit $tmp3485 = org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, value3460, type3481);
    if ($tmp3485.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3486 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, value3460, p_position, ((panda$core$Bit) { true }), type3481);
        return $tmp3486;
    }
    }
    else {
    {
        panda$core$String* $tmp3488 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3487, ((panda$core$Object*) value3460->type));
        panda$core$String* $tmp3490 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3488, &$s3489);
        panda$core$String* $tmp3492 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3491, ((panda$core$Object*) type3481));
        panda$core$String* $tmp3494 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3492, &$s3493);
        panda$core$String* $tmp3495 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3490, $tmp3494);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp3495);
        return NULL;
    }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_c) {
    panda$core$Bit $tmp3496 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_c->kind, ((panda$core$Int64) { 111 }));
    PANDA_ASSERT($tmp3496.value);
    panda$core$Int64 $tmp3497 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_c->children);
    panda$core$Bit $tmp3498 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3497, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp3498.value);
    panda$core$Object* $tmp3499 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_c->children, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp3500 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_c->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Type* $tmp3501 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, ((org$pandalanguage$pandac$ASTNode*) $tmp3500));
    org$pandalanguage$pandac$IRNode* $tmp3502 = org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_c->position, ((org$pandalanguage$pandac$ASTNode*) $tmp3499), $tmp3501);
    return $tmp3502;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileNull$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_n) {
    panda$core$Bit $tmp3503 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_n->kind, ((panda$core$Int64) { 117 }));
    PANDA_ASSERT($tmp3503.value);
    org$pandalanguage$pandac$IRNode* $tmp3504 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3504->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3504->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3506 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3504, ((panda$core$Int64) { 1030 }), p_n->position, $tmp3506);
    return $tmp3504;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_e) {
    org$pandalanguage$pandac$IRNode* result3511;
    switch (p_e->kind.value) {
        case 103:
        {
            org$pandalanguage$pandac$IRNode* $tmp3507 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3507;
        }
        break;
        case 116:
        {
            org$pandalanguage$pandac$IRNode* $tmp3508 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3508->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3508->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3510 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp3508, ((panda$core$Int64) { 1011 }), p_e->position, $tmp3510, ((panda$core$Bit$wrapper*) p_e->payload)->value);
            return $tmp3508;
        }
        break;
        case 107:
        {
            org$pandalanguage$pandac$IRNode* $tmp3512 = org$pandalanguage$pandac$Compiler$compileCall$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            result3511 = $tmp3512;
            bool $tmp3513 = ((panda$core$Bit) { result3511 != NULL }).value;
            if (!$tmp3513) goto $l3514;
            org$pandalanguage$pandac$Type* $tmp3515 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp3516 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(result3511->type, $tmp3515);
            $tmp3513 = $tmp3516.value;
            $l3514:;
            panda$core$Bit $tmp3517 = { $tmp3513 };
            if ($tmp3517.value) {
            {
                panda$core$Bit $tmp3518 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result3511->kind, ((panda$core$Int64) { 1005 }));
                PANDA_ASSERT($tmp3518.value);
                panda$core$String* $tmp3519 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(((org$pandalanguage$pandac$MethodRef*) result3511->payload)->value);
                panda$core$String* $tmp3521 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3519, &$s3520);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, result3511->position, $tmp3521);
                return NULL;
            }
            }
            return result3511;
        }
        break;
        case 108:
        {
            org$pandalanguage$pandac$IRNode* $tmp3522 = org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3522;
        }
        break;
        case 106:
        {
            org$pandalanguage$pandac$IRNode* $tmp3523 = org$pandalanguage$pandac$Compiler$compileIdentifier$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3523;
        }
        break;
        case 102:
        {
            org$pandalanguage$pandac$IRNode* $tmp3524 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3524->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3524->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3526 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(((panda$core$UInt64$wrapper*) p_e->payload)->value);
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp3524, ((panda$core$Int64) { 1004 }), p_e->position, $tmp3526, ((panda$core$UInt64$wrapper*) p_e->payload)->value);
            return $tmp3524;
        }
        break;
        case 157:
        {
            org$pandalanguage$pandac$IRNode* $tmp3527 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3527->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3527->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3529 = org$pandalanguage$pandac$Type$RealLiteral$panda$core$Real64$R$org$pandalanguage$pandac$Type(((panda$core$Real64$wrapper*) p_e->payload)->value);
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Real64($tmp3527, ((panda$core$Int64) { 1045 }), p_e->position, $tmp3529, ((panda$core$Real64$wrapper*) p_e->payload)->value);
            return $tmp3527;
        }
        break;
        case 112:
        {
            org$pandalanguage$pandac$IRNode* $tmp3530 = org$pandalanguage$pandac$Compiler$compilePrefix$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3530;
        }
        break;
        case 104:
        case 105:
        {
            org$pandalanguage$pandac$IRNode* $tmp3531 = org$pandalanguage$pandac$Compiler$compileRange$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3531;
        }
        break;
        case 113:
        {
            org$pandalanguage$pandac$IRNode* $tmp3532 = org$pandalanguage$pandac$Compiler$compileString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3532;
        }
        break;
        case 109:
        case 154:
        case 110:
        {
            org$pandalanguage$pandac$IRNode* $tmp3533 = org$pandalanguage$pandac$Compiler$compileType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3533;
        }
        break;
        case 114:
        {
            org$pandalanguage$pandac$IRNode* $tmp3534 = org$pandalanguage$pandac$Compiler$compileSelf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3534;
        }
        break;
        case 115:
        {
            org$pandalanguage$pandac$IRNode* $tmp3535 = org$pandalanguage$pandac$Compiler$compileSuper$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3535;
        }
        break;
        case 111:
        {
            org$pandalanguage$pandac$IRNode* $tmp3536 = org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3536;
        }
        break;
        case 117:
        {
            org$pandalanguage$pandac$IRNode* $tmp3537 = org$pandalanguage$pandac$Compiler$compileNull$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode(self, p_e);
            return $tmp3537;
        }
        break;
    }
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBlock$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_b) {
    org$pandalanguage$pandac$SymbolTable* symbols3539;
    panda$collections$Array* result3542;
    panda$collections$Iterator* stmt$Iter3545;
    org$pandalanguage$pandac$ASTNode* stmt3557;
    org$pandalanguage$pandac$IRNode* compiled3562;
    panda$core$Bit $tmp3538 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_b->kind, ((panda$core$Int64) { 126 }));
    PANDA_ASSERT($tmp3538.value);
    org$pandalanguage$pandac$SymbolTable* $tmp3540 = (org$pandalanguage$pandac$SymbolTable*) malloc(48);
    $tmp3540->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp3540->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp3540, self->symbolTable);
    symbols3539 = $tmp3540;
    self->symbolTable = symbols3539;
    panda$collections$Array* $tmp3543 = (panda$collections$Array*) malloc(40);
    $tmp3543->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3543->refCount.value = 1;
    panda$collections$Array$init($tmp3543);
    result3542 = $tmp3543;
    if (((panda$core$Bit) { p_b->children != NULL }).value) {
    {
        {
            ITable* $tmp3546 = ((panda$collections$Iterable*) p_b->children)->$class->itable;
            while ($tmp3546->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3546 = $tmp3546->next;
            }
            $fn3548 $tmp3547 = $tmp3546->methods[0];
            panda$collections$Iterator* $tmp3549 = $tmp3547(((panda$collections$Iterable*) p_b->children));
            stmt$Iter3545 = $tmp3549;
            $l3550:;
            ITable* $tmp3552 = stmt$Iter3545->$class->itable;
            while ($tmp3552->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3552 = $tmp3552->next;
            }
            $fn3554 $tmp3553 = $tmp3552->methods[0];
            panda$core$Bit $tmp3555 = $tmp3553(stmt$Iter3545);
            panda$core$Bit $tmp3556 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3555);
            if (!$tmp3556.value) goto $l3551;
            {
                ITable* $tmp3558 = stmt$Iter3545->$class->itable;
                while ($tmp3558->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3558 = $tmp3558->next;
                }
                $fn3560 $tmp3559 = $tmp3558->methods[1];
                panda$core$Object* $tmp3561 = $tmp3559(stmt$Iter3545);
                stmt3557 = ((org$pandalanguage$pandac$ASTNode*) $tmp3561);
                org$pandalanguage$pandac$IRNode* $tmp3563 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, stmt3557);
                compiled3562 = $tmp3563;
                if (((panda$core$Bit) { compiled3562 == NULL }).value) {
                {
                    panda$core$Object* $tmp3564 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(symbols3539->parents, ((panda$core$Int64) { 0 }));
                    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp3564);
                    return NULL;
                }
                }
                panda$core$Bit $tmp3565 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(compiled3562->kind, ((panda$core$Int64) { 1039 }));
                PANDA_ASSERT($tmp3565.value);
                panda$collections$Array$add$panda$collections$Array$T(result3542, ((panda$core$Object*) compiled3562));
            }
            goto $l3550;
            $l3551:;
        }
    }
    }
    panda$core$Object* $tmp3566 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(symbols3539->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp3566);
    org$pandalanguage$pandac$IRNode* $tmp3567 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3567->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3567->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3567, ((panda$core$Int64) { 1000 }), p_b->position, ((panda$collections$ListView*) result3542));
    return $tmp3567;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_i) {
    org$pandalanguage$pandac$IRNode* test3577;
    org$pandalanguage$pandac$IRNode* ifTrue3582;
    panda$collections$Array* children3585;
    org$pandalanguage$pandac$IRNode* ifFalse3590;
    panda$core$Bit $tmp3569 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_i->kind, ((panda$core$Int64) { 118 }));
    PANDA_ASSERT($tmp3569.value);
    panda$core$Int64 $tmp3571 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_i->children);
    panda$core$Bit $tmp3572 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3571, ((panda$core$Int64) { 2 }));
    bool $tmp3570 = $tmp3572.value;
    if ($tmp3570) goto $l3573;
    panda$core$Int64 $tmp3574 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_i->children);
    panda$core$Bit $tmp3575 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3574, ((panda$core$Int64) { 3 }));
    $tmp3570 = $tmp3575.value;
    $l3573:;
    panda$core$Bit $tmp3576 = { $tmp3570 };
    PANDA_ASSERT($tmp3576.value);
    panda$core$Object* $tmp3578 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_i->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3579 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3578));
    org$pandalanguage$pandac$Type* $tmp3580 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp3581 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3579, $tmp3580);
    test3577 = $tmp3581;
    if (((panda$core$Bit) { test3577 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Object* $tmp3583 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_i->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp3584 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3583));
    ifTrue3582 = $tmp3584;
    if (((panda$core$Bit) { ifTrue3582 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3586 = (panda$collections$Array*) malloc(40);
    $tmp3586->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3586->refCount.value = 1;
    panda$collections$Array$init($tmp3586);
    children3585 = $tmp3586;
    panda$collections$Array$add$panda$collections$Array$T(children3585, ((panda$core$Object*) test3577));
    panda$collections$Array$add$panda$collections$Array$T(children3585, ((panda$core$Object*) ifTrue3582));
    panda$core$Int64 $tmp3588 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_i->children);
    panda$core$Bit $tmp3589 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3588, ((panda$core$Int64) { 3 }));
    if ($tmp3589.value) {
    {
        panda$core$Object* $tmp3591 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_i->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$IRNode* $tmp3592 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3591));
        ifFalse3590 = $tmp3592;
        if (((panda$core$Bit) { ifFalse3590 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children3585, ((panda$core$Object*) ifFalse3590));
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3593 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3593->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3593->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3593, ((panda$core$Int64) { 1012 }), p_i->position, ((panda$collections$ListView*) children3585));
    return $tmp3593;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileRangeFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, panda$core$String* p_label, org$pandalanguage$pandac$ASTNode* p_astTarget, org$pandalanguage$pandac$IRNode* p_rawList, org$pandalanguage$pandac$ASTNode* p_body) {
    org$pandalanguage$pandac$Type* elementType3595;
    org$pandalanguage$pandac$IRNode* list3596;
    org$pandalanguage$pandac$Type* t3608;
    org$pandalanguage$pandac$Type* listType3641;
    org$pandalanguage$pandac$Compiler$CompileTargetResult* target3671;
    org$pandalanguage$pandac$IRNode* body3673;
    panda$collections$Array* children3675;
    panda$core$Bit $tmp3599 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_astTarget->kind, ((panda$core$Int64) { 106 }));
    bool $tmp3598 = $tmp3599.value;
    if (!$tmp3598) goto $l3600;
    $tmp3598 = ((panda$core$Bit) { p_astTarget->children != NULL }).value;
    $l3600:;
    panda$core$Bit $tmp3601 = { $tmp3598 };
    bool $tmp3597 = $tmp3601.value;
    if (!$tmp3597) goto $l3602;
    panda$core$Int64 $tmp3603 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_astTarget->children);
    panda$core$Bit $tmp3604 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3603, ((panda$core$Int64) { 0 }));
    $tmp3597 = $tmp3604.value;
    $l3602:;
    panda$core$Bit $tmp3605 = { $tmp3597 };
    if ($tmp3605.value) {
    {
        panda$core$Int64 $tmp3606 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_astTarget->children);
        panda$core$Bit $tmp3607 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3606, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp3607.value);
        panda$core$Object* $tmp3609 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_astTarget->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Type* $tmp3610 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, ((org$pandalanguage$pandac$ASTNode*) $tmp3609));
        org$pandalanguage$pandac$Type* $tmp3611 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, $tmp3610);
        t3608 = $tmp3611;
        panda$core$Bit $tmp3612 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(t3608->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp3612.value) {
        {
            panda$core$String* $tmp3614 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3613, ((panda$core$Object*) t3608));
            panda$core$String* $tmp3616 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3614, &$s3615);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_astTarget->position, $tmp3616);
            return NULL;
        }
        }
        panda$core$Bit $tmp3617 = org$pandalanguage$pandac$Type$isNumeric$R$panda$core$Bit(t3608);
        panda$core$Bit $tmp3618 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3617);
        if ($tmp3618.value) {
        {
            panda$core$String* $tmp3620 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3619, ((panda$core$Object*) t3608));
            panda$core$String* $tmp3622 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3620, &$s3621);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_astTarget->position, $tmp3622);
            return NULL;
        }
        }
        panda$core$Bit $tmp3623 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_rawList->kind, ((panda$core$Int64) { 1031 }));
        if ($tmp3623.value) {
        {
            panda$core$Int64 $tmp3624 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_rawList->children);
            panda$core$Bit $tmp3625 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3624, ((panda$core$Int64) { 2 }));
            if ($tmp3625.value) {
            {
                org$pandalanguage$pandac$Type* $tmp3626 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3608);
                org$pandalanguage$pandac$IRNode* $tmp3627 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, $tmp3626);
                list3596 = $tmp3627;
            }
            }
            else {
            {
                panda$core$Int64 $tmp3628 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_rawList->children);
                panda$core$Bit $tmp3629 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3628, ((panda$core$Int64) { 3 }));
                PANDA_ASSERT($tmp3629.value);
                org$pandalanguage$pandac$Type* $tmp3630 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3608);
                org$pandalanguage$pandac$IRNode* $tmp3631 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, $tmp3630);
                list3596 = $tmp3631;
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp3632 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(p_rawList->type);
        if ($tmp3632.value) {
        {
            org$pandalanguage$pandac$Type* $tmp3633 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3608);
            org$pandalanguage$pandac$IRNode* $tmp3634 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, $tmp3633);
            list3596 = $tmp3634;
        }
        }
        else {
        org$pandalanguage$pandac$Type* $tmp3635 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3608);
        panda$core$Int64$nullable $tmp3636 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_rawList, $tmp3635);
        if (((panda$core$Bit) { $tmp3636.nonnull }).value) {
        {
            org$pandalanguage$pandac$Type* $tmp3637 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3608);
            org$pandalanguage$pandac$IRNode* $tmp3638 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, $tmp3637);
            list3596 = $tmp3638;
        }
        }
        else {
        {
            org$pandalanguage$pandac$Type* $tmp3639 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3608);
            org$pandalanguage$pandac$IRNode* $tmp3640 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, $tmp3639);
            list3596 = $tmp3640;
        }
        }
        }
        }
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp3642 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_rawList);
        listType3641 = $tmp3642;
        panda$core$Bit $tmp3644 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(listType3641);
        bool $tmp3643 = $tmp3644.value;
        if ($tmp3643) goto $l3645;
        panda$core$Bit $tmp3646 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(listType3641);
        $tmp3643 = $tmp3646.value;
        $l3645:;
        panda$core$Bit $tmp3647 = { $tmp3643 };
        PANDA_ASSERT($tmp3647.value);
        panda$core$Object* $tmp3648 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(listType3641->subtypes, ((panda$core$Int64) { 1 }));
        panda$core$Bit $tmp3649 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3648)->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp3649.value) {
        {
            panda$core$Bit $tmp3650 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(listType3641);
            if ($tmp3650.value) {
            {
                panda$core$Object* $tmp3651 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(listType3641->subtypes, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$Type* $tmp3652 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp3651));
                org$pandalanguage$pandac$Type* $tmp3653 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp3652);
                listType3641 = $tmp3653;
            }
            }
            else {
            {
                panda$core$Object* $tmp3654 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(listType3641->subtypes, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$Type* $tmp3655 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp3654));
                org$pandalanguage$pandac$Type* $tmp3656 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp3655);
                listType3641 = $tmp3656;
            }
            }
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp3657 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, listType3641);
        list3596 = $tmp3657;
    }
    }
    if (((panda$core$Bit) { list3596 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp3658 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(list3596->type->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp3658.value) {
    {
        panda$core$Object* $tmp3659 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(list3596->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp3660 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3659)->typeKind, ((panda$core$Int64) { 21 }));
        PANDA_ASSERT($tmp3660.value);
        panda$core$Object* $tmp3661 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(list3596->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3662 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$Type*) $tmp3661)->subtypes, ((panda$core$Int64) { 1 }));
        elementType3595 = ((org$pandalanguage$pandac$Type*) $tmp3662);
    }
    }
    else {
    {
        panda$core$Bit $tmp3663 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(list3596->type->typeKind, ((panda$core$Int64) { 21 }));
        PANDA_ASSERT($tmp3663.value);
        panda$core$Object* $tmp3664 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(list3596->type->subtypes, ((panda$core$Int64) { 1 }));
        elementType3595 = ((org$pandalanguage$pandac$Type*) $tmp3664);
    }
    }
    panda$core$Bit $tmp3665 = org$pandalanguage$pandac$Type$isNumeric$R$panda$core$Bit(elementType3595);
    panda$core$Bit $tmp3666 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3665);
    if ($tmp3666.value) {
    {
        panda$core$String* $tmp3668 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3667, ((panda$core$Object*) list3596->type));
        panda$core$String* $tmp3670 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3668, &$s3669);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, list3596->position, $tmp3670);
    }
    }
    org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp3672 = org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(self, p_astTarget, ((panda$core$Int64) { 10001 }), NULL, elementType3595);
    target3671 = $tmp3672;
    if (((panda$core$Bit) { target3671 == NULL }).value) {
    {
        return NULL;
    }
    }
    PANDA_ASSERT(((panda$core$Bit) { target3671->value == NULL }).value);
    org$pandalanguage$pandac$IRNode* $tmp3674 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_body);
    body3673 = $tmp3674;
    if (((panda$core$Bit) { body3673 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3676 = (panda$collections$Array*) malloc(40);
    $tmp3676->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3676->refCount.value = 1;
    panda$collections$Array$init($tmp3676);
    children3675 = $tmp3676;
    panda$collections$Array$add$panda$collections$Array$T(children3675, ((panda$core$Object*) target3671->target));
    panda$collections$Array$add$panda$collections$Array$T(children3675, ((panda$core$Object*) list3596));
    panda$collections$Array$add$panda$collections$Array$T(children3675, ((panda$core$Object*) body3673));
    org$pandalanguage$pandac$IRNode* $tmp3678 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3678->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3678->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3678, ((panda$core$Int64) { 1029 }), p_position, ((panda$core$Object*) p_label), ((panda$collections$ListView*) children3675));
    return $tmp3678;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIteratorFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, panda$core$String* p_label, org$pandalanguage$pandac$ASTNode* p_astTarget, org$pandalanguage$pandac$IRNode* p_iterator, org$pandalanguage$pandac$ASTNode* p_body) {
    org$pandalanguage$pandac$Compiler$CompileTargetResult* target3687;
    org$pandalanguage$pandac$Variable* targetVar3691;
    panda$collections$Array* subtypes3692;
    org$pandalanguage$pandac$Type* iterType3696;
    org$pandalanguage$pandac$Variable* iter3707;
    panda$collections$Array* statements3712;
    panda$collections$Array* declChildren3715;
    panda$collections$Array* varChildren3720;
    panda$collections$Array* whileChildren3727;
    org$pandalanguage$pandac$IRNode* done3730;
    org$pandalanguage$pandac$IRNode* notCall3737;
    panda$collections$Array* valueDeclChildren3742;
    org$pandalanguage$pandac$IRNode* next3747;
    panda$collections$Array* valueVarChildren3754;
    org$pandalanguage$pandac$IRNode* block3759;
    panda$collections$Array* blockChildren3761;
    panda$core$Bit $tmp3681 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_iterator->type->typeKind, ((panda$core$Int64) { 21 }));
    bool $tmp3680 = $tmp3681.value;
    if (!$tmp3680) goto $l3682;
    panda$core$Object* $tmp3683 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_iterator->type->subtypes, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp3684 = org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp3685 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3683), $tmp3684);
    $tmp3680 = $tmp3685.value;
    $l3682:;
    panda$core$Bit $tmp3686 = { $tmp3680 };
    PANDA_ASSERT($tmp3686.value);
    panda$core$Object* $tmp3688 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_iterator->type->subtypes, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp3689 = org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(self, p_astTarget, ((panda$core$Int64) { 10001 }), NULL, ((org$pandalanguage$pandac$Type*) $tmp3688));
    target3687 = $tmp3689;
    if (((panda$core$Bit) { target3687 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp3690 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(target3687->target->kind, ((panda$core$Int64) { 1016 }));
    PANDA_ASSERT($tmp3690.value);
    targetVar3691 = ((org$pandalanguage$pandac$Variable*) target3687->target->payload);
    panda$collections$Array* $tmp3693 = (panda$collections$Array*) malloc(40);
    $tmp3693->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3693->refCount.value = 1;
    panda$collections$Array$init($tmp3693);
    subtypes3692 = $tmp3693;
    org$pandalanguage$pandac$Type* $tmp3695 = org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type();
    panda$collections$Array$add$panda$collections$Array$T(subtypes3692, ((panda$core$Object*) $tmp3695));
    panda$collections$Array$add$panda$collections$Array$T(subtypes3692, ((panda$core$Object*) target3687->target->type));
    org$pandalanguage$pandac$Type* $tmp3697 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp3697->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp3697->refCount.value = 1;
    panda$core$Object* $tmp3699 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(subtypes3692, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3700 = org$pandalanguage$pandac$Type$convert$R$panda$core$String(((org$pandalanguage$pandac$Type*) $tmp3699));
    panda$core$String* $tmp3702 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3700, &$s3701);
    panda$core$Object* $tmp3703 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(subtypes3692, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp3704 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3702, ((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp3703)));
    panda$core$String* $tmp3706 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3704, &$s3705);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp3697, $tmp3706, ((panda$core$Int64) { 21 }), p_position, ((panda$collections$ListView*) subtypes3692), ((panda$core$Bit) { true }));
    iterType3696 = $tmp3697;
    org$pandalanguage$pandac$Variable* $tmp3708 = (org$pandalanguage$pandac$Variable*) malloc(88);
    $tmp3708->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
    $tmp3708->refCount.value = 1;
    panda$core$String* $tmp3711 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) targetVar3691)->name, &$s3710);
    org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type($tmp3708, p_iterator->position, ((panda$core$Int64) { 10001 }), $tmp3711, iterType3696);
    iter3707 = $tmp3708;
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->symbolTable, ((org$pandalanguage$pandac$Symbol*) iter3707));
    panda$collections$Array* $tmp3713 = (panda$collections$Array*) malloc(40);
    $tmp3713->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3713->refCount.value = 1;
    panda$collections$Array$init($tmp3713);
    statements3712 = $tmp3713;
    panda$collections$Array* $tmp3716 = (panda$collections$Array*) malloc(40);
    $tmp3716->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3716->refCount.value = 1;
    panda$collections$Array$init($tmp3716);
    declChildren3715 = $tmp3716;
    org$pandalanguage$pandac$IRNode* $tmp3718 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3718->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3718->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3718, ((panda$core$Int64) { 1016 }), p_iterator->position, iter3707->type, iter3707);
    panda$collections$Array$add$panda$collections$Array$T(declChildren3715, ((panda$core$Object*) $tmp3718));
    panda$collections$Array$add$panda$collections$Array$T(declChildren3715, ((panda$core$Object*) p_iterator));
    panda$collections$Array* $tmp3721 = (panda$collections$Array*) malloc(40);
    $tmp3721->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3721->refCount.value = 1;
    panda$collections$Array$init($tmp3721);
    varChildren3720 = $tmp3721;
    org$pandalanguage$pandac$IRNode* $tmp3723 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3723->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3723->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3723, ((panda$core$Int64) { 1021 }), ((org$pandalanguage$pandac$Symbol*) iter3707)->position, ((panda$collections$ListView*) declChildren3715));
    panda$collections$Array$add$panda$collections$Array$T(varChildren3720, ((panda$core$Object*) $tmp3723));
    org$pandalanguage$pandac$IRNode* $tmp3725 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3725->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3725->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3725, ((panda$core$Int64) { 1018 }), ((org$pandalanguage$pandac$Symbol*) iter3707)->position, ((panda$collections$ListView*) varChildren3720));
    panda$collections$Array$add$panda$collections$Array$T(statements3712, ((panda$core$Object*) $tmp3725));
    panda$collections$Array* $tmp3728 = (panda$collections$Array*) malloc(40);
    $tmp3728->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3728->refCount.value = 1;
    panda$collections$Array$init($tmp3728);
    whileChildren3727 = $tmp3728;
    org$pandalanguage$pandac$IRNode* $tmp3731 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3731->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3731->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3731, ((panda$core$Int64) { 1016 }), ((org$pandalanguage$pandac$Symbol*) iter3707)->position, iter3707->type, iter3707);
    panda$collections$Array* $tmp3734 = (panda$collections$Array*) malloc(40);
    $tmp3734->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3734->refCount.value = 1;
    panda$collections$Array$init($tmp3734);
    org$pandalanguage$pandac$IRNode* $tmp3736 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3731, &$s3733, ((panda$collections$ListView*) $tmp3734), NULL);
    done3730 = $tmp3736;
    if (((panda$core$Bit) { done3730 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3739 = (panda$collections$Array*) malloc(40);
    $tmp3739->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3739->refCount.value = 1;
    panda$collections$Array$init($tmp3739);
    org$pandalanguage$pandac$IRNode* $tmp3741 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, done3730, &$s3738, ((panda$collections$ListView*) $tmp3739), NULL);
    notCall3737 = $tmp3741;
    if (((panda$core$Bit) { notCall3737 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(whileChildren3727, ((panda$core$Object*) notCall3737));
    panda$collections$Array* $tmp3743 = (panda$collections$Array*) malloc(40);
    $tmp3743->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3743->refCount.value = 1;
    panda$collections$Array$init($tmp3743);
    valueDeclChildren3742 = $tmp3743;
    org$pandalanguage$pandac$IRNode* $tmp3745 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3745->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3745->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3745, ((panda$core$Int64) { 1016 }), p_iterator->position, targetVar3691->type, targetVar3691);
    panda$collections$Array$add$panda$collections$Array$T(valueDeclChildren3742, ((panda$core$Object*) $tmp3745));
    org$pandalanguage$pandac$IRNode* $tmp3748 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3748->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3748->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3748, ((panda$core$Int64) { 1016 }), p_iterator->position, iter3707->type, iter3707);
    panda$collections$Array* $tmp3751 = (panda$collections$Array*) malloc(40);
    $tmp3751->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3751->refCount.value = 1;
    panda$collections$Array$init($tmp3751);
    org$pandalanguage$pandac$IRNode* $tmp3753 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3748, &$s3750, ((panda$collections$ListView*) $tmp3751), NULL);
    next3747 = $tmp3753;
    PANDA_ASSERT(((panda$core$Bit) { next3747 != NULL }).value);
    panda$collections$Array$add$panda$collections$Array$T(valueDeclChildren3742, ((panda$core$Object*) next3747));
    panda$collections$Array* $tmp3755 = (panda$collections$Array*) malloc(40);
    $tmp3755->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3755->refCount.value = 1;
    panda$collections$Array$init($tmp3755);
    valueVarChildren3754 = $tmp3755;
    org$pandalanguage$pandac$IRNode* $tmp3757 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3757->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3757->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3757, ((panda$core$Int64) { 1021 }), p_iterator->position, ((panda$collections$ListView*) valueDeclChildren3742));
    panda$collections$Array$add$panda$collections$Array$T(valueVarChildren3754, ((panda$core$Object*) $tmp3757));
    org$pandalanguage$pandac$IRNode* $tmp3760 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_body);
    block3759 = $tmp3760;
    if (((panda$core$Bit) { block3759 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3762 = (panda$collections$Array*) malloc(40);
    $tmp3762->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3762->refCount.value = 1;
    panda$collections$Array$init($tmp3762);
    blockChildren3761 = $tmp3762;
    org$pandalanguage$pandac$IRNode* $tmp3764 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3764->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3764->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3764, ((panda$core$Int64) { 1018 }), p_iterator->position, ((panda$collections$ListView*) valueVarChildren3754));
    panda$collections$Array$add$panda$collections$Array$T(blockChildren3761, ((panda$core$Object*) $tmp3764));
    panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(blockChildren3761, ((panda$collections$CollectionView*) block3759->children));
    org$pandalanguage$pandac$IRNode* $tmp3766 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3766->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3766->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3766, ((panda$core$Int64) { 1000 }), block3759->position, ((panda$collections$ListView*) blockChildren3761));
    block3759 = $tmp3766;
    panda$collections$Array$add$panda$collections$Array$T(whileChildren3727, ((panda$core$Object*) block3759));
    org$pandalanguage$pandac$IRNode* $tmp3768 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3768->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3768->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3768, ((panda$core$Int64) { 1013 }), p_iterator->position, ((panda$core$Object*) p_label), ((panda$collections$ListView*) whileChildren3727));
    panda$collections$Array$add$panda$collections$Array$T(statements3712, ((panda$core$Object*) $tmp3768));
    org$pandalanguage$pandac$IRNode* $tmp3770 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3770->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3770->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3770, ((panda$core$Int64) { 1000 }), p_iterator->position, ((panda$collections$ListView*) statements3712));
    return $tmp3770;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileFor$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_f) {
    org$pandalanguage$pandac$IRNode* list3775;
    org$pandalanguage$pandac$SymbolTable* symbols3778;
    org$pandalanguage$pandac$IRNode* result3781;
    panda$core$Bit found3795;
    panda$collections$Iterator* intf$Iter3796;
    org$pandalanguage$pandac$Type* intf3809;
    org$pandalanguage$pandac$IRNode* iterator3821;
    org$pandalanguage$pandac$IRNode* iterable3833;
    org$pandalanguage$pandac$IRNode* iterator3835;
    panda$core$Bit $tmp3772 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_f->kind, ((panda$core$Int64) { 119 }));
    PANDA_ASSERT($tmp3772.value);
    panda$core$Int64 $tmp3773 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_f->children);
    panda$core$Bit $tmp3774 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3773, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp3774.value);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loops, ((panda$core$Object*) ((panda$core$String*) p_f->payload)));
    panda$core$Object* $tmp3776 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp3777 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3776));
    list3775 = $tmp3777;
    if (((panda$core$Bit) { list3775 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp3779 = (org$pandalanguage$pandac$SymbolTable*) malloc(48);
    $tmp3779->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp3779->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp3779, self->symbolTable);
    symbols3778 = $tmp3779;
    self->symbolTable = symbols3778;
    panda$core$Bit $tmp3784 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(list3775->kind, ((panda$core$Int64) { 1031 }));
    bool $tmp3783 = $tmp3784.value;
    if ($tmp3783) goto $l3785;
    panda$core$Bit $tmp3786 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(list3775->type);
    $tmp3783 = $tmp3786.value;
    $l3785:;
    panda$core$Bit $tmp3787 = { $tmp3783 };
    bool $tmp3782 = $tmp3787.value;
    if ($tmp3782) goto $l3788;
    panda$core$Bit $tmp3789 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(list3775->type);
    $tmp3782 = $tmp3789.value;
    $l3788:;
    panda$core$Bit $tmp3790 = { $tmp3782 };
    if ($tmp3790.value) {
    {
        panda$core$Object* $tmp3791 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3792 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$IRNode* $tmp3793 = org$pandalanguage$pandac$Compiler$compileRangeFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->position, ((panda$core$String*) p_f->payload), ((org$pandalanguage$pandac$ASTNode*) $tmp3791), list3775, ((org$pandalanguage$pandac$ASTNode*) $tmp3792));
        result3781 = $tmp3793;
    }
    }
    else {
    {
        org$pandalanguage$pandac$IRNode* $tmp3794 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, list3775);
        list3775 = $tmp3794;
        if (((panda$core$Bit) { list3775 == NULL }).value) {
        {
            return NULL;
        }
        }
        found3795 = ((panda$core$Bit) { false });
        {
            panda$collections$Set* $tmp3797 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self, list3775->type);
            ITable* $tmp3798 = ((panda$collections$Iterable*) $tmp3797)->$class->itable;
            while ($tmp3798->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3798 = $tmp3798->next;
            }
            $fn3800 $tmp3799 = $tmp3798->methods[0];
            panda$collections$Iterator* $tmp3801 = $tmp3799(((panda$collections$Iterable*) $tmp3797));
            intf$Iter3796 = $tmp3801;
            $l3802:;
            ITable* $tmp3804 = intf$Iter3796->$class->itable;
            while ($tmp3804->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3804 = $tmp3804->next;
            }
            $fn3806 $tmp3805 = $tmp3804->methods[0];
            panda$core$Bit $tmp3807 = $tmp3805(intf$Iter3796);
            panda$core$Bit $tmp3808 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3807);
            if (!$tmp3808.value) goto $l3803;
            {
                ITable* $tmp3810 = intf$Iter3796->$class->itable;
                while ($tmp3810->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3810 = $tmp3810->next;
                }
                $fn3812 $tmp3811 = $tmp3810->methods[1];
                panda$core$Object* $tmp3813 = $tmp3811(intf$Iter3796);
                intf3809 = ((org$pandalanguage$pandac$Type*) $tmp3813);
                panda$core$Bit $tmp3815 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(intf3809->typeKind, ((panda$core$Int64) { 21 }));
                bool $tmp3814 = $tmp3815.value;
                if (!$tmp3814) goto $l3816;
                panda$core$Object* $tmp3817 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(intf3809->subtypes, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp3818 = org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp3819 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3817), $tmp3818);
                $tmp3814 = $tmp3819.value;
                $l3816:;
                panda$core$Bit $tmp3820 = { $tmp3814 };
                if ($tmp3820.value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp3822 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, list3775, intf3809);
                    iterator3821 = $tmp3822;
                    panda$core$Object* $tmp3823 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
                    panda$core$Object* $tmp3824 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 2 }));
                    org$pandalanguage$pandac$IRNode* $tmp3825 = org$pandalanguage$pandac$Compiler$compileIteratorFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->position, ((panda$core$String*) p_f->payload), ((org$pandalanguage$pandac$ASTNode*) $tmp3823), iterator3821, ((org$pandalanguage$pandac$ASTNode*) $tmp3824));
                    result3781 = $tmp3825;
                    found3795 = ((panda$core$Bit) { true });
                    goto $l3803;
                }
                }
                panda$core$Bit $tmp3827 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(intf3809->typeKind, ((panda$core$Int64) { 21 }));
                bool $tmp3826 = $tmp3827.value;
                if (!$tmp3826) goto $l3828;
                panda$core$Object* $tmp3829 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(intf3809->subtypes, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp3830 = org$pandalanguage$pandac$Type$Iterable$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp3831 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3829), $tmp3830);
                $tmp3826 = $tmp3831.value;
                $l3828:;
                panda$core$Bit $tmp3832 = { $tmp3826 };
                if ($tmp3832.value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp3834 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, list3775, intf3809);
                    iterable3833 = $tmp3834;
                    panda$collections$Array* $tmp3837 = (panda$collections$Array*) malloc(40);
                    $tmp3837->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp3837->refCount.value = 1;
                    panda$collections$Array$init($tmp3837);
                    org$pandalanguage$pandac$IRNode* $tmp3839 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, iterable3833, &$s3836, ((panda$collections$ListView*) $tmp3837));
                    iterator3835 = $tmp3839;
                    panda$core$Object* $tmp3840 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
                    panda$core$Object* $tmp3841 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 2 }));
                    org$pandalanguage$pandac$IRNode* $tmp3842 = org$pandalanguage$pandac$Compiler$compileIteratorFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->position, ((panda$core$String*) p_f->payload), ((org$pandalanguage$pandac$ASTNode*) $tmp3840), iterator3835, ((org$pandalanguage$pandac$ASTNode*) $tmp3841));
                    result3781 = $tmp3842;
                    found3795 = ((panda$core$Bit) { true });
                    goto $l3803;
                }
                }
            }
            goto $l3802;
            $l3803:;
        }
        panda$core$Bit $tmp3843 = panda$core$Bit$$NOT$R$panda$core$Bit(found3795);
        if ($tmp3843.value) {
        {
            panda$core$String* $tmp3845 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3844, ((panda$core$Object*) list3775->type));
            panda$core$String* $tmp3847 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3845, &$s3846);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, list3775->position, $tmp3847);
            return NULL;
        }
        }
    }
    }
    panda$core$Object* $tmp3848 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(symbols3778->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp3848);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
    return result3781;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileWhile$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_w) {
    org$pandalanguage$pandac$IRNode* test3852;
    org$pandalanguage$pandac$IRNode* stmt3857;
    panda$collections$Array* children3860;
    panda$core$Bit $tmp3849 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_w->kind, ((panda$core$Int64) { 121 }));
    PANDA_ASSERT($tmp3849.value);
    panda$core$Int64 $tmp3850 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Bit $tmp3851 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3850, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp3851.value);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loops, ((panda$core$Object*) ((panda$core$String*) p_w->payload)));
    panda$core$Object* $tmp3853 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3854 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3853));
    org$pandalanguage$pandac$Type* $tmp3855 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp3856 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3854, $tmp3855);
    test3852 = $tmp3856;
    if (((panda$core$Bit) { test3852 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$core$Object* $tmp3858 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp3859 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3858));
    stmt3857 = $tmp3859;
    if (((panda$core$Bit) { stmt3857 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$collections$Array* $tmp3861 = (panda$collections$Array*) malloc(40);
    $tmp3861->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3861->refCount.value = 1;
    panda$collections$Array$init$panda$core$Int64($tmp3861, ((panda$core$Int64) { 2 }));
    children3860 = $tmp3861;
    panda$collections$Array$add$panda$collections$Array$T(children3860, ((panda$core$Object*) test3852));
    panda$collections$Array$add$panda$collections$Array$T(children3860, ((panda$core$Object*) stmt3857));
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
    org$pandalanguage$pandac$IRNode* $tmp3863 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3863->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3863->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3863, ((panda$core$Int64) { 1013 }), p_w->position, p_w->payload, ((panda$collections$ListView*) children3860));
    return $tmp3863;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileDo$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_d) {
    org$pandalanguage$pandac$IRNode* stmt3868;
    org$pandalanguage$pandac$IRNode* test3871;
    panda$collections$Array* children3876;
    panda$core$Bit $tmp3865 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_d->kind, ((panda$core$Int64) { 120 }));
    PANDA_ASSERT($tmp3865.value);
    panda$core$Int64 $tmp3866 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp3867 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3866, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp3867.value);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loops, ((panda$core$Object*) ((panda$core$String*) p_d->payload)));
    panda$core$Object* $tmp3869 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3870 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3869));
    stmt3868 = $tmp3870;
    if (((panda$core$Bit) { stmt3868 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$core$Object* $tmp3872 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp3873 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3872));
    org$pandalanguage$pandac$Type* $tmp3874 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp3875 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3873, $tmp3874);
    test3871 = $tmp3875;
    if (((panda$core$Bit) { test3871 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$collections$Array* $tmp3877 = (panda$collections$Array*) malloc(40);
    $tmp3877->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3877->refCount.value = 1;
    panda$collections$Array$init$panda$core$Int64($tmp3877, ((panda$core$Int64) { 2 }));
    children3876 = $tmp3877;
    panda$collections$Array$add$panda$collections$Array$T(children3876, ((panda$core$Object*) stmt3868));
    panda$collections$Array$add$panda$collections$Array$T(children3876, ((panda$core$Object*) test3871));
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
    org$pandalanguage$pandac$IRNode* $tmp3879 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3879->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3879->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3879, ((panda$core$Int64) { 1014 }), p_d->position, p_d->payload, ((panda$collections$ListView*) children3876));
    return $tmp3879;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileLoop$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_l) {
    org$pandalanguage$pandac$IRNode* stmt3884;
    panda$collections$Array* children3887;
    panda$core$Bit $tmp3881 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_l->kind, ((panda$core$Int64) { 122 }));
    PANDA_ASSERT($tmp3881.value);
    panda$core$Int64 $tmp3882 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_l->children);
    panda$core$Bit $tmp3883 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3882, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3883.value);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loops, ((panda$core$Object*) ((panda$core$String*) p_l->payload)));
    panda$core$Object* $tmp3885 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_l->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3886 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3885));
    stmt3884 = $tmp3886;
    if (((panda$core$Bit) { stmt3884 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$collections$Array* $tmp3888 = (panda$collections$Array*) malloc(40);
    $tmp3888->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3888->refCount.value = 1;
    panda$collections$Array$init$panda$core$Int64($tmp3888, ((panda$core$Int64) { 1 }));
    children3887 = $tmp3888;
    panda$collections$Array$add$panda$collections$Array$T(children3887, ((panda$core$Object*) stmt3884));
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
    org$pandalanguage$pandac$IRNode* $tmp3890 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3890->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3890->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3890, ((panda$core$Int64) { 1015 }), p_l->position, p_l->payload, ((panda$collections$ListView*) children3887));
    return $tmp3890;
}
org$pandalanguage$pandac$Compiler$CompileTargetResult* org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_t, panda$core$Int64 p_kind, org$pandalanguage$pandac$IRNode* p_rawValue, org$pandalanguage$pandac$Type* p_valueType) {
    org$pandalanguage$pandac$IRNode* value3892;
    org$pandalanguage$pandac$Type* type3896;
    org$pandalanguage$pandac$Variable* v3912;
    value3892 = p_rawValue;
    bool $tmp3893 = ((panda$core$Bit) { value3892 == NULL }).value;
    if ($tmp3893) goto $l3894;
    $tmp3893 = ((panda$core$Bit) { p_valueType == NULL }).value;
    $l3894:;
    panda$core$Bit $tmp3895 = { $tmp3893 };
    PANDA_ASSERT($tmp3895.value);
    switch (p_t->kind.value) {
        case 106:
        {
            bool $tmp3897 = ((panda$core$Bit) { p_t->children != NULL }).value;
            if (!$tmp3897) goto $l3898;
            panda$core$Int64 $tmp3899 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_t->children);
            panda$core$Bit $tmp3900 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp3899, ((panda$core$Int64) { 0 }));
            $tmp3897 = $tmp3900.value;
            $l3898:;
            panda$core$Bit $tmp3901 = { $tmp3897 };
            if ($tmp3901.value) {
            {
                panda$core$Int64 $tmp3902 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_t->children);
                panda$core$Bit $tmp3903 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3902, ((panda$core$Int64) { 1 }));
                PANDA_ASSERT($tmp3903.value);
                panda$core$Object* $tmp3904 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp3905 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, ((org$pandalanguage$pandac$ASTNode*) $tmp3904));
                org$pandalanguage$pandac$Type* $tmp3906 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, $tmp3905);
                type3896 = $tmp3906;
            }
            }
            else {
            if (((panda$core$Bit) { value3892 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp3907 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, value3892);
                value3892 = $tmp3907;
                if (((panda$core$Bit) { value3892 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$Type* $tmp3908 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, value3892);
                type3896 = $tmp3908;
            }
            }
            else {
            if (((panda$core$Bit) { p_valueType != NULL }).value) {
            {
                type3896 = p_valueType;
            }
            }
            else {
            {
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_t->position, &$s3909);
                return NULL;
            }
            }
            }
            }
            if (((panda$core$Bit) { value3892 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp3910 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, value3892, type3896);
                value3892 = $tmp3910;
                if (((panda$core$Bit) { value3892 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$core$Bit $tmp3911 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(value3892->type, type3896);
                PANDA_ASSERT($tmp3911.value);
            }
            }
            org$pandalanguage$pandac$Variable* $tmp3913 = (org$pandalanguage$pandac$Variable*) malloc(88);
            $tmp3913->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
            $tmp3913->refCount.value = 1;
            org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type($tmp3913, p_t->position, p_kind, ((panda$core$String*) p_t->payload), type3896);
            v3912 = $tmp3913;
            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->symbolTable, ((org$pandalanguage$pandac$Symbol*) v3912));
            org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp3915 = (org$pandalanguage$pandac$Compiler$CompileTargetResult*) malloc(32);
            $tmp3915->$class = (panda$core$Class*) &org$pandalanguage$pandac$Compiler$CompileTargetResult$class;
            $tmp3915->refCount.value = 1;
            org$pandalanguage$pandac$IRNode* $tmp3917 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3917->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3917->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3917, ((panda$core$Int64) { 1016 }), ((org$pandalanguage$pandac$Symbol*) v3912)->position, v3912->type, v3912);
            org$pandalanguage$pandac$Compiler$CompileTargetResult$init$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q($tmp3915, $tmp3917, value3892);
            return $tmp3915;
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
    org$pandalanguage$pandac$IRNode* value3927;
    org$pandalanguage$pandac$Compiler$CompileTargetResult* target3932;
    panda$collections$Array* children3935;
    org$pandalanguage$pandac$Variable* v3939;
    panda$core$Bit $tmp3919 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_d->kind, ((panda$core$Int64) { 129 }));
    PANDA_ASSERT($tmp3919.value);
    panda$core$Int64 $tmp3921 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp3922 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3921, ((panda$core$Int64) { 1 }));
    bool $tmp3920 = $tmp3922.value;
    if ($tmp3920) goto $l3923;
    panda$core$Int64 $tmp3924 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp3925 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3924, ((panda$core$Int64) { 2 }));
    $tmp3920 = $tmp3925.value;
    $l3923:;
    panda$core$Bit $tmp3926 = { $tmp3920 };
    PANDA_ASSERT($tmp3926.value);
    panda$core$Int64 $tmp3928 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp3929 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3928, ((panda$core$Int64) { 2 }));
    if ($tmp3929.value) {
    {
        panda$core$Object* $tmp3930 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$IRNode* $tmp3931 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3930));
        value3927 = $tmp3931;
        if (((panda$core$Bit) { value3927 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    else {
    {
        value3927 = NULL;
    }
    }
    panda$core$Object* $tmp3933 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp3934 = org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3933), p_varKind, value3927, NULL);
    target3932 = $tmp3934;
    if (((panda$core$Bit) { target3932 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3936 = (panda$collections$Array*) malloc(40);
    $tmp3936->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3936->refCount.value = 1;
    panda$collections$Array$init($tmp3936);
    children3935 = $tmp3936;
    panda$collections$Array$add$panda$collections$Array$T(children3935, ((panda$core$Object*) target3932->target));
    if (((panda$core$Bit) { target3932->value != NULL }).value) {
    {
        panda$core$Bit $tmp3938 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(target3932->target->kind, ((panda$core$Int64) { 1016 }));
        PANDA_ASSERT($tmp3938.value);
        v3939 = ((org$pandalanguage$pandac$Variable*) target3932->target->payload);
        v3939->initialValue = target3932->value;
        panda$collections$Array$add$panda$collections$Array$T(children3935, ((panda$core$Object*) target3932->value));
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3940 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3940->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3940->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3940, ((panda$core$Int64) { 1021 }), p_d->position, ((panda$collections$ListView*) children3935));
    return $tmp3940;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBreak$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_b) {
    panda$core$Bit found3943;
    panda$collections$Iterator* label$Iter3944;
    panda$core$String* label3956;
    panda$core$Bit $tmp3942 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_b->kind, ((panda$core$Int64) { 134 }));
    PANDA_ASSERT($tmp3942.value);
    if (((panda$core$Bit) { p_b->payload != NULL }).value) {
    {
        found3943 = ((panda$core$Bit) { false });
        {
            ITable* $tmp3945 = ((panda$collections$Iterable*) self->loops)->$class->itable;
            while ($tmp3945->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3945 = $tmp3945->next;
            }
            $fn3947 $tmp3946 = $tmp3945->methods[0];
            panda$collections$Iterator* $tmp3948 = $tmp3946(((panda$collections$Iterable*) self->loops));
            label$Iter3944 = $tmp3948;
            $l3949:;
            ITable* $tmp3951 = label$Iter3944->$class->itable;
            while ($tmp3951->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3951 = $tmp3951->next;
            }
            $fn3953 $tmp3952 = $tmp3951->methods[0];
            panda$core$Bit $tmp3954 = $tmp3952(label$Iter3944);
            panda$core$Bit $tmp3955 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3954);
            if (!$tmp3955.value) goto $l3950;
            {
                ITable* $tmp3957 = label$Iter3944->$class->itable;
                while ($tmp3957->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3957 = $tmp3957->next;
                }
                $fn3959 $tmp3958 = $tmp3957->methods[1];
                panda$core$Object* $tmp3960 = $tmp3958(label$Iter3944);
                label3956 = ((panda$core$String*) $tmp3960);
                bool $tmp3961 = ((panda$core$Bit) { label3956 != NULL }).value;
                if (!$tmp3961) goto $l3962;
                panda$core$Bit $tmp3966;
                if (((panda$core$Bit) { label3956 != NULL }).value) goto $l3963; else goto $l3964;
                $l3963:;
                panda$core$Bit $tmp3967 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(label3956, ((panda$core$String*) p_b->payload));
                $tmp3966 = $tmp3967;
                goto $l3965;
                $l3964:;
                $tmp3966 = ((panda$core$Bit) { false });
                goto $l3965;
                $l3965:;
                $tmp3961 = $tmp3966.value;
                $l3962:;
                panda$core$Bit $tmp3968 = { $tmp3961 };
                if ($tmp3968.value) {
                {
                    found3943 = ((panda$core$Bit) { true });
                    goto $l3950;
                }
                }
            }
            goto $l3949;
            $l3950:;
        }
        panda$core$Bit $tmp3969 = panda$core$Bit$$NOT$R$panda$core$Bit(found3943);
        if ($tmp3969.value) {
        {
            panda$core$String* $tmp3971 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3970, p_b->payload);
            panda$core$String* $tmp3973 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3971, &$s3972);
            panda$core$String* $tmp3975 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3974, p_b->payload);
            panda$core$String* $tmp3977 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3975, &$s3976);
            panda$core$String* $tmp3978 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3973, $tmp3977);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_b->position, $tmp3978);
        }
        }
    }
    }
    else {
    panda$core$Int64 $tmp3979 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loops);
    panda$core$Bit $tmp3980 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3979, ((panda$core$Int64) { 0 }));
    if ($tmp3980.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_b->position, &$s3981);
    }
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3982 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3982->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3982->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp3982, ((panda$core$Int64) { 1006 }), p_b->position, ((panda$core$String*) p_b->payload));
    return $tmp3982;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileContinue$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_c) {
    panda$core$Bit found3985;
    panda$collections$Iterator* label$Iter3986;
    panda$core$String* label3998;
    panda$core$Bit $tmp3984 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_c->kind, ((panda$core$Int64) { 135 }));
    PANDA_ASSERT($tmp3984.value);
    if (((panda$core$Bit) { p_c->payload != NULL }).value) {
    {
        found3985 = ((panda$core$Bit) { false });
        {
            ITable* $tmp3987 = ((panda$collections$Iterable*) self->loops)->$class->itable;
            while ($tmp3987->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3987 = $tmp3987->next;
            }
            $fn3989 $tmp3988 = $tmp3987->methods[0];
            panda$collections$Iterator* $tmp3990 = $tmp3988(((panda$collections$Iterable*) self->loops));
            label$Iter3986 = $tmp3990;
            $l3991:;
            ITable* $tmp3993 = label$Iter3986->$class->itable;
            while ($tmp3993->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3993 = $tmp3993->next;
            }
            $fn3995 $tmp3994 = $tmp3993->methods[0];
            panda$core$Bit $tmp3996 = $tmp3994(label$Iter3986);
            panda$core$Bit $tmp3997 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3996);
            if (!$tmp3997.value) goto $l3992;
            {
                ITable* $tmp3999 = label$Iter3986->$class->itable;
                while ($tmp3999->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3999 = $tmp3999->next;
                }
                $fn4001 $tmp4000 = $tmp3999->methods[1];
                panda$core$Object* $tmp4002 = $tmp4000(label$Iter3986);
                label3998 = ((panda$core$String*) $tmp4002);
                bool $tmp4003 = ((panda$core$Bit) { label3998 != NULL }).value;
                if (!$tmp4003) goto $l4004;
                panda$core$Bit $tmp4008;
                if (((panda$core$Bit) { label3998 != NULL }).value) goto $l4005; else goto $l4006;
                $l4005:;
                panda$core$Bit $tmp4009 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(label3998, ((panda$core$String*) p_c->payload));
                $tmp4008 = $tmp4009;
                goto $l4007;
                $l4006:;
                $tmp4008 = ((panda$core$Bit) { false });
                goto $l4007;
                $l4007:;
                $tmp4003 = $tmp4008.value;
                $l4004:;
                panda$core$Bit $tmp4010 = { $tmp4003 };
                if ($tmp4010.value) {
                {
                    found3985 = ((panda$core$Bit) { true });
                    goto $l3992;
                }
                }
            }
            goto $l3991;
            $l3992:;
        }
        panda$core$Bit $tmp4011 = panda$core$Bit$$NOT$R$panda$core$Bit(found3985);
        if ($tmp4011.value) {
        {
            panda$core$String* $tmp4013 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4012, p_c->payload);
            panda$core$String* $tmp4015 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4013, &$s4014);
            panda$core$String* $tmp4017 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4016, p_c->payload);
            panda$core$String* $tmp4019 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4017, &$s4018);
            panda$core$String* $tmp4020 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4015, $tmp4019);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_c->position, $tmp4020);
        }
        }
    }
    }
    else {
    panda$core$Int64 $tmp4021 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loops);
    panda$core$Bit $tmp4022 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4021, ((panda$core$Int64) { 0 }));
    if ($tmp4022.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_c->position, &$s4023);
    }
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp4024 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4024->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4024->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp4024, ((panda$core$Int64) { 1007 }), p_c->position, ((panda$core$String*) p_c->payload));
    return $tmp4024;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileReturn$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_r) {
    org$pandalanguage$pandac$IRNode* value4038;
    panda$collections$Array* children4043;
    panda$core$Bit $tmp4026 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_r->kind, ((panda$core$Int64) { 136 }));
    PANDA_ASSERT($tmp4026.value);
    bool $tmp4027 = ((panda$core$Bit) { p_r->children != NULL }).value;
    if (!$tmp4027) goto $l4028;
    panda$core$Int64 $tmp4029 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_r->children);
    panda$core$Bit $tmp4030 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp4029, ((panda$core$Int64) { 0 }));
    $tmp4027 = $tmp4030.value;
    $l4028:;
    panda$core$Bit $tmp4031 = { $tmp4027 };
    if ($tmp4031.value) {
    {
        panda$core$Int64 $tmp4032 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_r->children);
        panda$core$Bit $tmp4033 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4032, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp4033.value);
        panda$core$Object* $tmp4034 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
        org$pandalanguage$pandac$Type* $tmp4035 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp4036 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp4034)->returnType, $tmp4035);
        if ($tmp4036.value) {
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_r->position, &$s4037);
            return NULL;
        }
        }
        panda$core$Object* $tmp4039 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp4040 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4039));
        panda$core$Object* $tmp4041 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
        org$pandalanguage$pandac$IRNode* $tmp4042 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp4040, ((org$pandalanguage$pandac$MethodDecl*) $tmp4041)->returnType);
        value4038 = $tmp4042;
        if (((panda$core$Bit) { value4038 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp4044 = (panda$collections$Array*) malloc(40);
        $tmp4044->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp4044->refCount.value = 1;
        panda$collections$Array$init($tmp4044);
        children4043 = $tmp4044;
        panda$collections$Array$add$panda$collections$Array$T(children4043, ((panda$core$Object*) value4038));
        org$pandalanguage$pandac$IRNode* $tmp4046 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp4046->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp4046->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4046, ((panda$core$Int64) { 1008 }), p_r->position, ((panda$collections$ListView*) children4043));
        return $tmp4046;
    }
    }
    panda$core$Object* $tmp4048 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
    org$pandalanguage$pandac$Type* $tmp4049 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp4050 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp4048)->returnType, $tmp4049);
    if ($tmp4050.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_r->position, &$s4051);
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp4052 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4052->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4052->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp4052, ((panda$core$Int64) { 1008 }), p_r->position);
    return $tmp4052;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileAssert$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_a) {
    org$pandalanguage$pandac$IRNode* test4062;
    org$pandalanguage$pandac$ClassDecl* bit4067;
    org$pandalanguage$pandac$Symbol* value4070;
    panda$collections$Array* fieldChildren4073;
    panda$collections$Array* children4079;
    org$pandalanguage$pandac$IRNode* msg4084;
    panda$core$Bit $tmp4054 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_a->kind, ((panda$core$Int64) { 123 }));
    PANDA_ASSERT($tmp4054.value);
    panda$core$Int64 $tmp4056 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp4057 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4056, ((panda$core$Int64) { 1 }));
    bool $tmp4055 = $tmp4057.value;
    if ($tmp4055) goto $l4058;
    panda$core$Int64 $tmp4059 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp4060 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4059, ((panda$core$Int64) { 2 }));
    $tmp4055 = $tmp4060.value;
    $l4058:;
    panda$core$Bit $tmp4061 = { $tmp4055 };
    PANDA_ASSERT($tmp4061.value);
    panda$core$Object* $tmp4063 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_a->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp4064 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4063));
    test4062 = $tmp4064;
    if (((panda$core$Bit) { test4062 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$Type* $tmp4065 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp4066 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, test4062, $tmp4065);
    test4062 = $tmp4066;
    if (((panda$core$Bit) { test4062 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$Type* $tmp4068 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$ClassDecl* $tmp4069 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, $tmp4068);
    bit4067 = $tmp4069;
    PANDA_ASSERT(((panda$core$Bit) { bit4067 != NULL }).value);
    org$pandalanguage$pandac$Symbol* $tmp4072 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(bit4067->symbolTable, &$s4071);
    value4070 = $tmp4072;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self, ((org$pandalanguage$pandac$FieldDecl*) value4070));
    panda$collections$Array* $tmp4074 = (panda$collections$Array*) malloc(40);
    $tmp4074->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4074->refCount.value = 1;
    panda$collections$Array$init($tmp4074);
    fieldChildren4073 = $tmp4074;
    panda$collections$Array$add$panda$collections$Array$T(fieldChildren4073, ((panda$core$Object*) test4062));
    org$pandalanguage$pandac$IRNode* $tmp4076 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4076->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4076->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp4078 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp4076, ((panda$core$Int64) { 1026 }), p_a->position, $tmp4078, ((panda$core$Object*) value4070), ((panda$collections$ListView*) fieldChildren4073));
    test4062 = $tmp4076;
    panda$collections$Array* $tmp4080 = (panda$collections$Array*) malloc(40);
    $tmp4080->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4080->refCount.value = 1;
    panda$collections$Array$init($tmp4080);
    children4079 = $tmp4080;
    panda$collections$Array$add$panda$collections$Array$T(children4079, ((panda$core$Object*) test4062));
    panda$core$Int64 $tmp4082 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp4083 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4082, ((panda$core$Int64) { 2 }));
    if ($tmp4083.value) {
    {
        panda$core$Object* $tmp4085 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_a->children, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$IRNode* $tmp4086 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4085));
        msg4084 = $tmp4086;
        if (((panda$core$Bit) { msg4084 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$Type* $tmp4087 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp4088 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, msg4084, $tmp4087);
        msg4084 = $tmp4088;
        if (((panda$core$Bit) { msg4084 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children4079, ((panda$core$Object*) msg4084));
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp4089 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4089->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4089->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4089, ((panda$core$Int64) { 1034 }), p_a->position, ((panda$collections$ListView*) children4079));
    return $tmp4089;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileVar$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_v) {
    panda$core$Int64 nodeKind4104;
    panda$core$Int64 varKind4105;
    panda$collections$Array* decls4106;
    panda$collections$Iterator* astDecl$Iter4109;
    org$pandalanguage$pandac$ASTNode* astDecl4121;
    org$pandalanguage$pandac$IRNode* decl4126;
    panda$core$Bit $tmp4094 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 130 }));
    bool $tmp4093 = $tmp4094.value;
    if ($tmp4093) goto $l4095;
    panda$core$Bit $tmp4096 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 131 }));
    $tmp4093 = $tmp4096.value;
    $l4095:;
    panda$core$Bit $tmp4097 = { $tmp4093 };
    bool $tmp4092 = $tmp4097.value;
    if ($tmp4092) goto $l4098;
    panda$core$Bit $tmp4099 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 133 }));
    $tmp4092 = $tmp4099.value;
    $l4098:;
    panda$core$Bit $tmp4100 = { $tmp4092 };
    bool $tmp4091 = $tmp4100.value;
    if ($tmp4091) goto $l4101;
    panda$core$Bit $tmp4102 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 132 }));
    $tmp4091 = $tmp4102.value;
    $l4101:;
    panda$core$Bit $tmp4103 = { $tmp4091 };
    PANDA_ASSERT($tmp4103.value);
    switch (p_v->kind.value) {
        case 130:
        {
            nodeKind4104 = ((panda$core$Int64) { 1017 });
            varKind4105 = ((panda$core$Int64) { 10000 });
        }
        break;
        case 131:
        {
            nodeKind4104 = ((panda$core$Int64) { 1018 });
            varKind4105 = ((panda$core$Int64) { 10001 });
        }
        break;
        case 132:
        {
            nodeKind4104 = ((panda$core$Int64) { 1019 });
            varKind4105 = ((panda$core$Int64) { 10002 });
        }
        break;
        case 133:
        {
            nodeKind4104 = ((panda$core$Int64) { 1020 });
            varKind4105 = ((panda$core$Int64) { 10003 });
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
    panda$collections$Array* $tmp4107 = (panda$collections$Array*) malloc(40);
    $tmp4107->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4107->refCount.value = 1;
    panda$collections$Array$init($tmp4107);
    decls4106 = $tmp4107;
    {
        ITable* $tmp4110 = ((panda$collections$Iterable*) p_v->children)->$class->itable;
        while ($tmp4110->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4110 = $tmp4110->next;
        }
        $fn4112 $tmp4111 = $tmp4110->methods[0];
        panda$collections$Iterator* $tmp4113 = $tmp4111(((panda$collections$Iterable*) p_v->children));
        astDecl$Iter4109 = $tmp4113;
        $l4114:;
        ITable* $tmp4116 = astDecl$Iter4109->$class->itable;
        while ($tmp4116->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4116 = $tmp4116->next;
        }
        $fn4118 $tmp4117 = $tmp4116->methods[0];
        panda$core$Bit $tmp4119 = $tmp4117(astDecl$Iter4109);
        panda$core$Bit $tmp4120 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4119);
        if (!$tmp4120.value) goto $l4115;
        {
            ITable* $tmp4122 = astDecl$Iter4109->$class->itable;
            while ($tmp4122->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4122 = $tmp4122->next;
            }
            $fn4124 $tmp4123 = $tmp4122->methods[1];
            panda$core$Object* $tmp4125 = $tmp4123(astDecl$Iter4109);
            astDecl4121 = ((org$pandalanguage$pandac$ASTNode*) $tmp4125);
            org$pandalanguage$pandac$IRNode* $tmp4127 = org$pandalanguage$pandac$Compiler$compileDeclaration$org$pandalanguage$pandac$ASTNode$panda$core$Int64$R$org$pandalanguage$pandac$IRNode$Q(self, astDecl4121, varKind4105);
            decl4126 = $tmp4127;
            if (((panda$core$Bit) { decl4126 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(decls4106, ((panda$core$Object*) decl4126));
        }
        goto $l4114;
        $l4115:;
    }
    org$pandalanguage$pandac$IRNode* $tmp4128 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4128->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4128->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4128, nodeKind4104, p_v->position, ((panda$collections$ListView*) decls4106));
    return $tmp4128;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileWhenTest$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Variable* p_value, org$pandalanguage$pandac$ASTNode* p_test) {
    org$pandalanguage$pandac$IRNode* target4130;
    panda$collections$Array* callChildren4133;
    org$pandalanguage$pandac$IRNode* testValue4136;
    org$pandalanguage$pandac$IRNode* $tmp4131 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4131->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4131->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp4131, ((panda$core$Int64) { 1016 }), p_test->position, p_value->type, p_value);
    target4130 = $tmp4131;
    panda$collections$Array* $tmp4134 = (panda$collections$Array*) malloc(40);
    $tmp4134->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4134->refCount.value = 1;
    panda$collections$Array$init($tmp4134);
    callChildren4133 = $tmp4134;
    org$pandalanguage$pandac$IRNode* $tmp4137 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_test);
    testValue4136 = $tmp4137;
    if (((panda$core$Bit) { testValue4136 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(callChildren4133, ((panda$core$Object*) testValue4136));
    org$pandalanguage$pandac$IRNode* $tmp4139 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target4130, &$s4138, ((panda$collections$ListView*) callChildren4133));
    return $tmp4139;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileChainedIfWhen$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Variable* p_value, org$pandalanguage$pandac$ASTNode* p_w) {
    org$pandalanguage$pandac$IRNode* test4148;
    panda$core$Range$LTpanda$core$Int64$GT $tmp4152;
    org$pandalanguage$pandac$IRNode* nextTest4168;
    panda$collections$Array* callChildren4172;
    panda$collections$Array* statements4185;
    panda$core$Range$LTpanda$core$Int64$GT $tmp4188;
    org$pandalanguage$pandac$IRNode* statement4203;
    panda$collections$Array* children4213;
    panda$core$Bit $tmp4140 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_w->kind, ((panda$core$Int64) { 124 }));
    PANDA_ASSERT($tmp4140.value);
    panda$core$Int64 $tmp4141 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Bit $tmp4142 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp4141, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4142.value);
    panda$core$Object* $tmp4143 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp4144 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp4143)->kind, ((panda$core$Int64) { 128 }));
    PANDA_ASSERT($tmp4144.value);
    panda$core$Object* $tmp4145 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Int64 $tmp4146 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$ASTNode*) $tmp4145)->children);
    panda$core$Bit $tmp4147 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp4146, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4147.value);
    panda$core$Object* $tmp4149 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp4150 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$ASTNode*) $tmp4149)->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp4151 = org$pandalanguage$pandac$Compiler$compileWhenTest$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_value, ((org$pandalanguage$pandac$ASTNode*) $tmp4150));
    test4148 = $tmp4151;
    if (((panda$core$Bit) { test4148 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Object* $tmp4153 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Int64 $tmp4154 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$ASTNode*) $tmp4153)->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp4152, ((panda$core$Int64) { 1 }), $tmp4154, ((panda$core$Bit) { false }));
    int64_t $tmp4156 = $tmp4152.min.value;
    panda$core$Int64 i4155 = { $tmp4156 };
    int64_t $tmp4158 = $tmp4152.max.value;
    bool $tmp4159 = $tmp4152.inclusive.value;
    if ($tmp4159) goto $l4166; else goto $l4167;
    $l4166:;
    if ($tmp4156 <= $tmp4158) goto $l4160; else goto $l4162;
    $l4167:;
    if ($tmp4156 < $tmp4158) goto $l4160; else goto $l4162;
    $l4160:;
    {
        panda$core$Object* $tmp4169 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp4170 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$ASTNode*) $tmp4169)->children, i4155);
        org$pandalanguage$pandac$IRNode* $tmp4171 = org$pandalanguage$pandac$Compiler$compileWhenTest$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_value, ((org$pandalanguage$pandac$ASTNode*) $tmp4170));
        nextTest4168 = $tmp4171;
        if (((panda$core$Bit) { nextTest4168 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp4173 = (panda$collections$Array*) malloc(40);
        $tmp4173->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp4173->refCount.value = 1;
        panda$collections$Array$init($tmp4173);
        callChildren4172 = $tmp4173;
        panda$collections$Array$add$panda$collections$Array$T(callChildren4172, ((panda$core$Object*) nextTest4168));
        org$pandalanguage$pandac$IRNode* $tmp4176 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, test4148, &$s4175, ((panda$collections$ListView*) callChildren4172));
        test4148 = $tmp4176;
        if (((panda$core$Bit) { test4148 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    $l4163:;
    int64_t $tmp4178 = $tmp4158 - i4155.value;
    if ($tmp4159) goto $l4179; else goto $l4180;
    $l4179:;
    if ($tmp4178 >= 1) goto $l4177; else goto $l4162;
    $l4180:;
    if ($tmp4178 > 1) goto $l4177; else goto $l4162;
    $l4177:;
    i4155.value += 1;
    goto $l4160;
    $l4162:;
    org$pandalanguage$pandac$SymbolTable* $tmp4183 = (org$pandalanguage$pandac$SymbolTable*) malloc(48);
    $tmp4183->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp4183->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp4183, self->symbolTable);
    self->symbolTable = $tmp4183;
    panda$collections$Array* $tmp4186 = (panda$collections$Array*) malloc(40);
    $tmp4186->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4186->refCount.value = 1;
    panda$collections$Array$init($tmp4186);
    statements4185 = $tmp4186;
    panda$core$Int64 $tmp4189 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp4188, ((panda$core$Int64) { 1 }), $tmp4189, ((panda$core$Bit) { false }));
    int64_t $tmp4191 = $tmp4188.min.value;
    panda$core$Int64 i4190 = { $tmp4191 };
    int64_t $tmp4193 = $tmp4188.max.value;
    bool $tmp4194 = $tmp4188.inclusive.value;
    if ($tmp4194) goto $l4201; else goto $l4202;
    $l4201:;
    if ($tmp4191 <= $tmp4193) goto $l4195; else goto $l4197;
    $l4202:;
    if ($tmp4191 < $tmp4193) goto $l4195; else goto $l4197;
    $l4195:;
    {
        panda$core$Object* $tmp4204 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, i4190);
        org$pandalanguage$pandac$IRNode* $tmp4205 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4204));
        statement4203 = $tmp4205;
        if (((panda$core$Bit) { statement4203 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(statements4185, ((panda$core$Object*) statement4203));
    }
    $l4198:;
    int64_t $tmp4207 = $tmp4193 - i4190.value;
    if ($tmp4194) goto $l4208; else goto $l4209;
    $l4208:;
    if ($tmp4207 >= 1) goto $l4206; else goto $l4197;
    $l4209:;
    if ($tmp4207 > 1) goto $l4206; else goto $l4197;
    $l4206:;
    i4190.value += 1;
    goto $l4195;
    $l4197:;
    panda$core$Object* $tmp4212 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->symbolTable->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp4212);
    panda$collections$Array* $tmp4214 = (panda$collections$Array*) malloc(40);
    $tmp4214->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4214->refCount.value = 1;
    panda$collections$Array$init($tmp4214);
    children4213 = $tmp4214;
    panda$collections$Array$add$panda$collections$Array$T(children4213, ((panda$core$Object*) test4148));
    org$pandalanguage$pandac$IRNode* $tmp4216 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4216->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4216->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4216, ((panda$core$Int64) { 1000 }), p_w->position, ((panda$collections$ListView*) statements4185));
    panda$collections$Array$add$panda$collections$Array$T(children4213, ((panda$core$Object*) $tmp4216));
    org$pandalanguage$pandac$IRNode* $tmp4218 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4218->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4218->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4218, ((panda$core$Int64) { 1012 }), p_w->position, ((panda$collections$ListView*) children4213));
    return $tmp4218;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileChainedIfMatch$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_m, org$pandalanguage$pandac$IRNode* p_value) {
    panda$collections$Array* children4220;
    org$pandalanguage$pandac$Variable* valueVar4223;
    panda$collections$Array* declChildren4233;
    panda$collections$Array* varChildren4238;
    panda$core$Range$LTpanda$core$Int64$GT $tmp4245;
    org$pandalanguage$pandac$ASTNode* c4260;
    org$pandalanguage$pandac$IRNode* w4262;
    panda$collections$Array* statements4264;
    panda$collections$Iterator* astStatement$Iter4267;
    org$pandalanguage$pandac$ASTNode* astStatement4279;
    org$pandalanguage$pandac$IRNode* stmt4284;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp4294;
    panda$collections$Array* newChildren4322;
    panda$collections$Array* $tmp4221 = (panda$collections$Array*) malloc(40);
    $tmp4221->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4221->refCount.value = 1;
    panda$collections$Array$init($tmp4221);
    children4220 = $tmp4221;
    org$pandalanguage$pandac$Variable* $tmp4224 = (org$pandalanguage$pandac$Variable*) malloc(88);
    $tmp4224->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
    $tmp4224->refCount.value = 1;
    panda$core$String* $tmp4227 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4226, ((panda$core$Object*) wrap_panda$core$Int64(p_m->position.line)));
    panda$core$String* $tmp4229 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4227, &$s4228);
    panda$core$String* $tmp4230 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp4229, ((panda$core$Object*) wrap_panda$core$Int64(p_m->position.column)));
    panda$core$String* $tmp4232 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4230, &$s4231);
    org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type($tmp4224, p_m->position, ((panda$core$Int64) { 10001 }), $tmp4232, p_value->type);
    valueVar4223 = $tmp4224;
    panda$collections$Array* $tmp4234 = (panda$collections$Array*) malloc(40);
    $tmp4234->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4234->refCount.value = 1;
    panda$collections$Array$init($tmp4234);
    declChildren4233 = $tmp4234;
    org$pandalanguage$pandac$IRNode* $tmp4236 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4236->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4236->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp4236, ((panda$core$Int64) { 1016 }), p_value->position, valueVar4223->type, valueVar4223);
    panda$collections$Array$add$panda$collections$Array$T(declChildren4233, ((panda$core$Object*) $tmp4236));
    panda$collections$Array$add$panda$collections$Array$T(declChildren4233, ((panda$core$Object*) p_value));
    panda$collections$Array* $tmp4239 = (panda$collections$Array*) malloc(40);
    $tmp4239->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4239->refCount.value = 1;
    panda$collections$Array$init($tmp4239);
    varChildren4238 = $tmp4239;
    org$pandalanguage$pandac$IRNode* $tmp4241 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4241->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4241->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4241, ((panda$core$Int64) { 1021 }), ((org$pandalanguage$pandac$Symbol*) valueVar4223)->position, ((panda$collections$ListView*) declChildren4233));
    panda$collections$Array$add$panda$collections$Array$T(varChildren4238, ((panda$core$Object*) $tmp4241));
    org$pandalanguage$pandac$IRNode* $tmp4243 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4243->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4243->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4243, ((panda$core$Int64) { 1018 }), ((org$pandalanguage$pandac$Symbol*) valueVar4223)->position, ((panda$collections$ListView*) varChildren4238));
    panda$collections$Array$add$panda$collections$Array$T(children4220, ((panda$core$Object*) $tmp4243));
    panda$core$Int64 $tmp4246 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp4245, ((panda$core$Int64) { 1 }), $tmp4246, ((panda$core$Bit) { false }));
    int64_t $tmp4248 = $tmp4245.min.value;
    panda$core$Int64 i4247 = { $tmp4248 };
    int64_t $tmp4250 = $tmp4245.max.value;
    bool $tmp4251 = $tmp4245.inclusive.value;
    if ($tmp4251) goto $l4258; else goto $l4259;
    $l4258:;
    if ($tmp4248 <= $tmp4250) goto $l4252; else goto $l4254;
    $l4259:;
    if ($tmp4248 < $tmp4250) goto $l4252; else goto $l4254;
    $l4252:;
    {
        panda$core$Object* $tmp4261 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, i4247);
        c4260 = ((org$pandalanguage$pandac$ASTNode*) $tmp4261);
        switch (c4260->kind.value) {
            case 124:
            {
                org$pandalanguage$pandac$IRNode* $tmp4263 = org$pandalanguage$pandac$Compiler$compileChainedIfWhen$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, valueVar4223, c4260);
                w4262 = $tmp4263;
                if (((panda$core$Bit) { w4262 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children4220, ((panda$core$Object*) w4262));
            }
            break;
            case 127:
            {
                panda$collections$Array* $tmp4265 = (panda$collections$Array*) malloc(40);
                $tmp4265->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp4265->refCount.value = 1;
                panda$collections$Array$init($tmp4265);
                statements4264 = $tmp4265;
                {
                    ITable* $tmp4268 = ((panda$collections$Iterable*) c4260->children)->$class->itable;
                    while ($tmp4268->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp4268 = $tmp4268->next;
                    }
                    $fn4270 $tmp4269 = $tmp4268->methods[0];
                    panda$collections$Iterator* $tmp4271 = $tmp4269(((panda$collections$Iterable*) c4260->children));
                    astStatement$Iter4267 = $tmp4271;
                    $l4272:;
                    ITable* $tmp4274 = astStatement$Iter4267->$class->itable;
                    while ($tmp4274->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp4274 = $tmp4274->next;
                    }
                    $fn4276 $tmp4275 = $tmp4274->methods[0];
                    panda$core$Bit $tmp4277 = $tmp4275(astStatement$Iter4267);
                    panda$core$Bit $tmp4278 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4277);
                    if (!$tmp4278.value) goto $l4273;
                    {
                        ITable* $tmp4280 = astStatement$Iter4267->$class->itable;
                        while ($tmp4280->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp4280 = $tmp4280->next;
                        }
                        $fn4282 $tmp4281 = $tmp4280->methods[1];
                        panda$core$Object* $tmp4283 = $tmp4281(astStatement$Iter4267);
                        astStatement4279 = ((org$pandalanguage$pandac$ASTNode*) $tmp4283);
                        org$pandalanguage$pandac$IRNode* $tmp4285 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, astStatement4279);
                        stmt4284 = $tmp4285;
                        if (((panda$core$Bit) { stmt4284 == NULL }).value) {
                        {
                            return NULL;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(statements4264, ((panda$core$Object*) stmt4284));
                    }
                    goto $l4272;
                    $l4273:;
                }
                org$pandalanguage$pandac$IRNode* $tmp4286 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp4286->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp4286->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4286, ((panda$core$Int64) { 1000 }), c4260->position, ((panda$collections$ListView*) statements4264));
                panda$collections$Array$add$panda$collections$Array$T(children4220, ((panda$core$Object*) $tmp4286));
            }
            break;
            default:
            {
                PANDA_ASSERT(((panda$core$Bit) { false }).value);
            }
        }
    }
    $l4255:;
    int64_t $tmp4289 = $tmp4250 - i4247.value;
    if ($tmp4251) goto $l4290; else goto $l4291;
    $l4290:;
    if ($tmp4289 >= 1) goto $l4288; else goto $l4254;
    $l4291:;
    if ($tmp4289 > 1) goto $l4288; else goto $l4254;
    $l4288:;
    i4247.value += 1;
    goto $l4252;
    $l4254:;
    panda$core$Int64 $tmp4295 = panda$collections$Array$get_count$R$panda$core$Int64(children4220);
    panda$core$Int64 $tmp4296 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp4295, ((panda$core$Int64) { 1 }));
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp4294, $tmp4296, ((panda$core$Int64) { 1 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { false }));
    int64_t $tmp4298 = $tmp4294.start.value;
    panda$core$Int64 i4297 = { $tmp4298 };
    int64_t $tmp4300 = $tmp4294.end.value;
    int64_t $tmp4301 = $tmp4294.step.value;
    bool $tmp4302 = $tmp4294.inclusive.value;
    bool $tmp4309 = $tmp4301 > 0;
    if ($tmp4309) goto $l4307; else goto $l4308;
    $l4307:;
    if ($tmp4302) goto $l4310; else goto $l4311;
    $l4310:;
    if ($tmp4298 <= $tmp4300) goto $l4303; else goto $l4305;
    $l4311:;
    if ($tmp4298 < $tmp4300) goto $l4303; else goto $l4305;
    $l4308:;
    if ($tmp4302) goto $l4312; else goto $l4313;
    $l4312:;
    if ($tmp4298 >= $tmp4300) goto $l4303; else goto $l4305;
    $l4313:;
    if ($tmp4298 > $tmp4300) goto $l4303; else goto $l4305;
    $l4303:;
    {
        panda$core$Int64 $tmp4315 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4297, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp4316 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children4220, $tmp4315);
        panda$core$Bit $tmp4317 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp4316)->kind, ((panda$core$Int64) { 1012 }));
        PANDA_ASSERT($tmp4317.value);
        panda$core$Int64 $tmp4318 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4297, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp4319 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children4220, $tmp4318);
        panda$core$Int64 $tmp4320 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp4319)->children);
        panda$core$Bit $tmp4321 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4320, ((panda$core$Int64) { 2 }));
        PANDA_ASSERT($tmp4321.value);
        panda$collections$Array* $tmp4323 = (panda$collections$Array*) malloc(40);
        $tmp4323->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp4323->refCount.value = 1;
        panda$core$Int64 $tmp4325 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4297, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp4326 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children4220, $tmp4325);
        panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp4323, ((panda$collections$ListView*) ((org$pandalanguage$pandac$IRNode*) $tmp4326)->children));
        newChildren4322 = $tmp4323;
        panda$core$Object* $tmp4327 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children4220, i4297);
        panda$collections$Array$add$panda$collections$Array$T(newChildren4322, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp4327)));
        panda$core$Int64 $tmp4328 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4297, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$IRNode* $tmp4329 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp4329->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp4329->refCount.value = 1;
        panda$core$Int64 $tmp4331 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4297, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp4332 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children4220, $tmp4331);
        panda$core$Int64 $tmp4333 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4297, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp4334 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children4220, $tmp4333);
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4329, ((org$pandalanguage$pandac$IRNode*) $tmp4332)->kind, ((org$pandalanguage$pandac$IRNode*) $tmp4334)->position, ((panda$collections$ListView*) newChildren4322));
        panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(children4220, $tmp4328, ((panda$core$Object*) $tmp4329));
        panda$core$Int64 $tmp4335 = panda$collections$Array$get_count$R$panda$core$Int64(children4220);
        panda$core$Int64 $tmp4336 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp4335, ((panda$core$Int64) { 1 }));
        panda$collections$Array$removeIndex$panda$core$Int64(children4220, $tmp4336);
    }
    $l4306:;
    if ($tmp4309) goto $l4338; else goto $l4339;
    $l4338:;
    int64_t $tmp4340 = $tmp4300 - i4297.value;
    if ($tmp4302) goto $l4341; else goto $l4342;
    $l4341:;
    if ($tmp4340 >= $tmp4301) goto $l4337; else goto $l4305;
    $l4342:;
    if ($tmp4340 > $tmp4301) goto $l4337; else goto $l4305;
    $l4339:;
    int64_t $tmp4344 = i4297.value - $tmp4300;
    if ($tmp4302) goto $l4345; else goto $l4346;
    $l4345:;
    if ($tmp4344 >= -$tmp4301) goto $l4337; else goto $l4305;
    $l4346:;
    if ($tmp4344 > -$tmp4301) goto $l4337; else goto $l4305;
    $l4337:;
    i4297.value += $tmp4301;
    goto $l4303;
    $l4305:;
    org$pandalanguage$pandac$IRNode* $tmp4348 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4348->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4348->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4348, ((panda$core$Int64) { 1000 }), p_m->position, ((panda$collections$ListView*) children4220));
    return $tmp4348;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileWhen$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type, org$pandalanguage$pandac$ASTNode* p_w) {
    panda$collections$Array* children4358;
    panda$collections$Iterator* expr$Iter4361;
    org$pandalanguage$pandac$ASTNode* expr4374;
    org$pandalanguage$pandac$IRNode* compiled4379;
    panda$collections$Array* statements4384;
    panda$core$Range$LTpanda$core$Int64$GT $tmp4387;
    org$pandalanguage$pandac$IRNode* statement4402;
    panda$core$Bit $tmp4350 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_w->kind, ((panda$core$Int64) { 124 }));
    PANDA_ASSERT($tmp4350.value);
    panda$core$Int64 $tmp4351 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Bit $tmp4352 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp4351, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4352.value);
    panda$core$Object* $tmp4353 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp4354 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp4353)->kind, ((panda$core$Int64) { 128 }));
    PANDA_ASSERT($tmp4354.value);
    panda$core$Object* $tmp4355 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Int64 $tmp4356 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$ASTNode*) $tmp4355)->children);
    panda$core$Bit $tmp4357 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp4356, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4357.value);
    panda$collections$Array* $tmp4359 = (panda$collections$Array*) malloc(40);
    $tmp4359->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4359->refCount.value = 1;
    panda$collections$Array$init($tmp4359);
    children4358 = $tmp4359;
    {
        panda$core$Object* $tmp4362 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
        ITable* $tmp4363 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp4362)->children)->$class->itable;
        while ($tmp4363->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4363 = $tmp4363->next;
        }
        $fn4365 $tmp4364 = $tmp4363->methods[0];
        panda$collections$Iterator* $tmp4366 = $tmp4364(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp4362)->children));
        expr$Iter4361 = $tmp4366;
        $l4367:;
        ITable* $tmp4369 = expr$Iter4361->$class->itable;
        while ($tmp4369->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4369 = $tmp4369->next;
        }
        $fn4371 $tmp4370 = $tmp4369->methods[0];
        panda$core$Bit $tmp4372 = $tmp4370(expr$Iter4361);
        panda$core$Bit $tmp4373 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4372);
        if (!$tmp4373.value) goto $l4368;
        {
            ITable* $tmp4375 = expr$Iter4361->$class->itable;
            while ($tmp4375->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4375 = $tmp4375->next;
            }
            $fn4377 $tmp4376 = $tmp4375->methods[1];
            panda$core$Object* $tmp4378 = $tmp4376(expr$Iter4361);
            expr4374 = ((org$pandalanguage$pandac$ASTNode*) $tmp4378);
            org$pandalanguage$pandac$IRNode* $tmp4380 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, expr4374);
            org$pandalanguage$pandac$IRNode* $tmp4381 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp4380, p_type);
            compiled4379 = $tmp4381;
            if (((panda$core$Bit) { compiled4379 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children4358, ((panda$core$Object*) compiled4379));
        }
        goto $l4367;
        $l4368:;
    }
    org$pandalanguage$pandac$SymbolTable* $tmp4382 = (org$pandalanguage$pandac$SymbolTable*) malloc(48);
    $tmp4382->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp4382->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp4382, self->symbolTable);
    self->symbolTable = $tmp4382;
    panda$collections$Array* $tmp4385 = (panda$collections$Array*) malloc(40);
    $tmp4385->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4385->refCount.value = 1;
    panda$collections$Array$init($tmp4385);
    statements4384 = $tmp4385;
    panda$core$Int64 $tmp4388 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp4387, ((panda$core$Int64) { 1 }), $tmp4388, ((panda$core$Bit) { false }));
    int64_t $tmp4390 = $tmp4387.min.value;
    panda$core$Int64 i4389 = { $tmp4390 };
    int64_t $tmp4392 = $tmp4387.max.value;
    bool $tmp4393 = $tmp4387.inclusive.value;
    if ($tmp4393) goto $l4400; else goto $l4401;
    $l4400:;
    if ($tmp4390 <= $tmp4392) goto $l4394; else goto $l4396;
    $l4401:;
    if ($tmp4390 < $tmp4392) goto $l4394; else goto $l4396;
    $l4394:;
    {
        panda$core$Object* $tmp4403 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, i4389);
        org$pandalanguage$pandac$IRNode* $tmp4404 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4403));
        statement4402 = $tmp4404;
        if (((panda$core$Bit) { statement4402 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(statements4384, ((panda$core$Object*) statement4402));
    }
    $l4397:;
    int64_t $tmp4406 = $tmp4392 - i4389.value;
    if ($tmp4393) goto $l4407; else goto $l4408;
    $l4407:;
    if ($tmp4406 >= 1) goto $l4405; else goto $l4396;
    $l4408:;
    if ($tmp4406 > 1) goto $l4405; else goto $l4396;
    $l4405:;
    i4389.value += 1;
    goto $l4394;
    $l4396:;
    panda$core$Object* $tmp4411 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->symbolTable->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp4411);
    org$pandalanguage$pandac$IRNode* $tmp4412 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4412->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4412->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4412, ((panda$core$Int64) { 1000 }), p_w->position, ((panda$collections$ListView*) statements4384));
    panda$collections$Array$add$panda$collections$Array$T(children4358, ((panda$core$Object*) $tmp4412));
    org$pandalanguage$pandac$IRNode* $tmp4414 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4414->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4414->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4414, ((panda$core$Int64) { 1042 }), p_w->position, ((panda$collections$ListView*) children4358));
    return $tmp4414;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileOtherwise$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_o) {
    panda$collections$Array* children4417;
    panda$collections$Array* statements4422;
    panda$collections$Iterator* s$Iter4425;
    org$pandalanguage$pandac$ASTNode* s4437;
    org$pandalanguage$pandac$IRNode* statement4442;
    panda$core$Bit $tmp4416 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_o->kind, ((panda$core$Int64) { 127 }));
    PANDA_ASSERT($tmp4416.value);
    panda$collections$Array* $tmp4418 = (panda$collections$Array*) malloc(40);
    $tmp4418->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4418->refCount.value = 1;
    panda$collections$Array$init($tmp4418);
    children4417 = $tmp4418;
    org$pandalanguage$pandac$SymbolTable* $tmp4420 = (org$pandalanguage$pandac$SymbolTable*) malloc(48);
    $tmp4420->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp4420->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp4420, self->symbolTable);
    self->symbolTable = $tmp4420;
    panda$collections$Array* $tmp4423 = (panda$collections$Array*) malloc(40);
    $tmp4423->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4423->refCount.value = 1;
    panda$collections$Array$init($tmp4423);
    statements4422 = $tmp4423;
    {
        ITable* $tmp4426 = ((panda$collections$Iterable*) p_o->children)->$class->itable;
        while ($tmp4426->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4426 = $tmp4426->next;
        }
        $fn4428 $tmp4427 = $tmp4426->methods[0];
        panda$collections$Iterator* $tmp4429 = $tmp4427(((panda$collections$Iterable*) p_o->children));
        s$Iter4425 = $tmp4429;
        $l4430:;
        ITable* $tmp4432 = s$Iter4425->$class->itable;
        while ($tmp4432->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4432 = $tmp4432->next;
        }
        $fn4434 $tmp4433 = $tmp4432->methods[0];
        panda$core$Bit $tmp4435 = $tmp4433(s$Iter4425);
        panda$core$Bit $tmp4436 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4435);
        if (!$tmp4436.value) goto $l4431;
        {
            ITable* $tmp4438 = s$Iter4425->$class->itable;
            while ($tmp4438->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4438 = $tmp4438->next;
            }
            $fn4440 $tmp4439 = $tmp4438->methods[1];
            panda$core$Object* $tmp4441 = $tmp4439(s$Iter4425);
            s4437 = ((org$pandalanguage$pandac$ASTNode*) $tmp4441);
            org$pandalanguage$pandac$IRNode* $tmp4443 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, s4437);
            statement4442 = $tmp4443;
            if (((panda$core$Bit) { statement4442 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(statements4422, ((panda$core$Object*) statement4442));
        }
        goto $l4430;
        $l4431:;
    }
    panda$core$Object* $tmp4444 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->symbolTable->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp4444);
    org$pandalanguage$pandac$IRNode* $tmp4445 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4445->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4445->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4445, ((panda$core$Int64) { 1000 }), p_o->position, ((panda$collections$ListView*) statements4422));
    panda$collections$Array$add$panda$collections$Array$T(children4417, ((panda$core$Object*) $tmp4445));
    org$pandalanguage$pandac$IRNode* $tmp4447 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4447->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4447->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4447, ((panda$core$Int64) { 1043 }), p_o->position, ((panda$collections$ListView*) children4417));
    return $tmp4447;
}
panda$core$Bit org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    org$pandalanguage$pandac$FieldDecl* f4456;
    org$pandalanguage$pandac$Variable* v4465;
    switch (p_expr->kind.value) {
        case 1004:
        {
            return ((panda$core$Bit) { true });
        }
        break;
        case 1010:
        {
            panda$core$Bit $tmp4450 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_expr->type);
            bool $tmp4449 = $tmp4450.value;
            if (!$tmp4449) goto $l4451;
            panda$core$Object* $tmp4452 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp4453 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$IRNode*) $tmp4452)->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp4454 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp4453));
            $tmp4449 = $tmp4454.value;
            $l4451:;
            panda$core$Bit $tmp4455 = { $tmp4449 };
            return $tmp4455;
        }
        break;
        case 1026:
        {
            f4456 = ((org$pandalanguage$pandac$FieldDecl*) p_expr->payload);
            PANDA_ASSERT(f4456->resolved.value);
            panda$core$Bit $tmp4459 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(f4456->fieldKind, ((panda$core$Int64) { 10002 }));
            bool $tmp4458 = $tmp4459.value;
            if (!$tmp4458) goto $l4460;
            $tmp4458 = ((panda$core$Bit) { f4456->value != NULL }).value;
            $l4460:;
            panda$core$Bit $tmp4461 = { $tmp4458 };
            bool $tmp4457 = $tmp4461.value;
            if (!$tmp4457) goto $l4462;
            panda$core$Bit $tmp4463 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, f4456->value);
            $tmp4457 = $tmp4463.value;
            $l4462:;
            panda$core$Bit $tmp4464 = { $tmp4457 };
            return $tmp4464;
        }
        break;
        case 1016:
        {
            v4465 = ((org$pandalanguage$pandac$Variable*) p_expr->payload);
            panda$core$Bit $tmp4467 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(v4465->varKind, ((panda$core$Int64) { 10001 }));
            bool $tmp4466 = $tmp4467.value;
            if ($tmp4466) goto $l4468;
            panda$core$Bit $tmp4471 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(v4465->varKind, ((panda$core$Int64) { 10002 }));
            bool $tmp4470 = $tmp4471.value;
            if (!$tmp4470) goto $l4472;
            $tmp4470 = ((panda$core$Bit) { v4465->initialValue != NULL }).value;
            $l4472:;
            panda$core$Bit $tmp4473 = { $tmp4470 };
            bool $tmp4469 = $tmp4473.value;
            if (!$tmp4469) goto $l4474;
            panda$core$Bit $tmp4475 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, v4465->initialValue);
            $tmp4469 = $tmp4475.value;
            $l4474:;
            panda$core$Bit $tmp4476 = { $tmp4469 };
            $tmp4466 = $tmp4476.value;
            $l4468:;
            panda$core$Bit $tmp4477 = { $tmp4466 };
            return $tmp4477;
        }
        break;
        default:
        {
            return ((panda$core$Bit) { false });
        }
    }
}
panda$core$UInt64 org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    org$pandalanguage$pandac$FieldDecl* f4482;
    org$pandalanguage$pandac$Variable* v4484;
    panda$core$Bit $tmp4478 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, p_expr);
    PANDA_ASSERT($tmp4478.value);
    switch (p_expr->kind.value) {
        case 1004:
        {
            return ((panda$core$UInt64$wrapper*) p_expr->payload)->value;
        }
        break;
        case 1010:
        {
            panda$core$Object* $tmp4479 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp4480 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$IRNode*) $tmp4479)->children, ((panda$core$Int64) { 0 }));
            panda$core$UInt64 $tmp4481 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self, ((org$pandalanguage$pandac$IRNode*) $tmp4480));
            return $tmp4481;
        }
        break;
        case 1026:
        {
            f4482 = ((org$pandalanguage$pandac$FieldDecl*) p_expr->payload);
            panda$core$UInt64 $tmp4483 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self, f4482->value);
            return $tmp4483;
        }
        break;
        case 1016:
        {
            v4484 = ((org$pandalanguage$pandac$Variable*) p_expr->payload);
            panda$core$UInt64 $tmp4485 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self, v4484->initialValue);
            return $tmp4485;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileMatch$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_m) {
    org$pandalanguage$pandac$IRNode* value4489;
    panda$collections$Array* children4496;
    panda$collections$Iterator* rawWhen$Iter4499;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp4500;
    org$pandalanguage$pandac$ASTNode* rawWhen4513;
    org$pandalanguage$pandac$IRNode* o4519;
    org$pandalanguage$pandac$IRNode* w4521;
    panda$core$Bit $tmp4486 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->kind, ((panda$core$Int64) { 125 }));
    PANDA_ASSERT($tmp4486.value);
    panda$core$Int64 $tmp4487 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
    panda$core$Bit $tmp4488 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp4487, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4488.value);
    panda$core$Object* $tmp4490 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp4491 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4490));
    org$pandalanguage$pandac$IRNode* $tmp4492 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp4491);
    value4489 = $tmp4492;
    if (((panda$core$Bit) { value4489 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp4493 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(value4489->type);
    panda$core$Bit $tmp4494 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4493);
    if ($tmp4494.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp4495 = org$pandalanguage$pandac$Compiler$compileChainedIfMatch$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_m, value4489);
        return $tmp4495;
    }
    }
    panda$collections$Array* $tmp4497 = (panda$collections$Array*) malloc(40);
    $tmp4497->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4497->refCount.value = 1;
    panda$collections$Array$init($tmp4497);
    children4496 = $tmp4497;
    panda$collections$Array$add$panda$collections$Array$T(children4496, ((panda$core$Object*) value4489));
    {
        panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp4500, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
        panda$collections$ImmutableArray* $tmp4501 = panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(p_m->children, $tmp4500);
        ITable* $tmp4502 = ((panda$collections$Iterable*) $tmp4501)->$class->itable;
        while ($tmp4502->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4502 = $tmp4502->next;
        }
        $fn4504 $tmp4503 = $tmp4502->methods[0];
        panda$collections$Iterator* $tmp4505 = $tmp4503(((panda$collections$Iterable*) $tmp4501));
        rawWhen$Iter4499 = $tmp4505;
        $l4506:;
        ITable* $tmp4508 = rawWhen$Iter4499->$class->itable;
        while ($tmp4508->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4508 = $tmp4508->next;
        }
        $fn4510 $tmp4509 = $tmp4508->methods[0];
        panda$core$Bit $tmp4511 = $tmp4509(rawWhen$Iter4499);
        panda$core$Bit $tmp4512 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4511);
        if (!$tmp4512.value) goto $l4507;
        {
            ITable* $tmp4514 = rawWhen$Iter4499->$class->itable;
            while ($tmp4514->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4514 = $tmp4514->next;
            }
            $fn4516 $tmp4515 = $tmp4514->methods[1];
            panda$core$Object* $tmp4517 = $tmp4515(rawWhen$Iter4499);
            rawWhen4513 = ((org$pandalanguage$pandac$ASTNode*) $tmp4517);
            panda$core$Bit $tmp4518 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(rawWhen4513->kind, ((panda$core$Int64) { 127 }));
            if ($tmp4518.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp4520 = org$pandalanguage$pandac$Compiler$compileOtherwise$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, rawWhen4513);
                o4519 = $tmp4520;
                if (((panda$core$Bit) { o4519 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children4496, ((panda$core$Object*) o4519));
                goto $l4506;
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp4522 = org$pandalanguage$pandac$Compiler$compileWhen$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, value4489->type, rawWhen4513);
            w4521 = $tmp4522;
            if (((panda$core$Bit) { w4521 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$Object* $tmp4523 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(w4521->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp4524 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp4523));
            panda$core$Bit $tmp4525 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4524);
            if ($tmp4525.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp4526 = org$pandalanguage$pandac$Compiler$compileChainedIfMatch$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_m, value4489);
                return $tmp4526;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children4496, ((panda$core$Object*) w4521));
        }
        goto $l4506;
        $l4507:;
    }
    org$pandalanguage$pandac$IRNode* $tmp4527 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4527->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4527->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4527, ((panda$core$Int64) { 1042 }), p_m->position, ((panda$collections$ListView*) children4496));
    return $tmp4527;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$IRNode* result4542;
    switch (p_s->kind.value) {
        case 123:
        {
            org$pandalanguage$pandac$IRNode* $tmp4529 = org$pandalanguage$pandac$Compiler$compileAssert$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4529;
        }
        break;
        case 103:
        {
            org$pandalanguage$pandac$IRNode* $tmp4530 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            org$pandalanguage$pandac$IRNode* $tmp4531 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp4530);
            return $tmp4531;
        }
        break;
        case 126:
        {
            org$pandalanguage$pandac$IRNode* $tmp4532 = org$pandalanguage$pandac$Compiler$compileBlock$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4532;
        }
        break;
        case 118:
        {
            org$pandalanguage$pandac$IRNode* $tmp4533 = org$pandalanguage$pandac$Compiler$compileIf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4533;
        }
        break;
        case 119:
        {
            org$pandalanguage$pandac$IRNode* $tmp4534 = org$pandalanguage$pandac$Compiler$compileFor$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4534;
        }
        break;
        case 121:
        {
            org$pandalanguage$pandac$IRNode* $tmp4535 = org$pandalanguage$pandac$Compiler$compileWhile$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4535;
        }
        break;
        case 120:
        {
            org$pandalanguage$pandac$IRNode* $tmp4536 = org$pandalanguage$pandac$Compiler$compileDo$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4536;
        }
        break;
        case 122:
        {
            org$pandalanguage$pandac$IRNode* $tmp4537 = org$pandalanguage$pandac$Compiler$compileLoop$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4537;
        }
        break;
        case 125:
        {
            org$pandalanguage$pandac$IRNode* $tmp4538 = org$pandalanguage$pandac$Compiler$compileMatch$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4538;
        }
        break;
        case 134:
        {
            org$pandalanguage$pandac$IRNode* $tmp4539 = org$pandalanguage$pandac$Compiler$compileBreak$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4539;
        }
        break;
        case 135:
        {
            org$pandalanguage$pandac$IRNode* $tmp4540 = org$pandalanguage$pandac$Compiler$compileContinue$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4540;
        }
        break;
        case 136:
        {
            org$pandalanguage$pandac$IRNode* $tmp4541 = org$pandalanguage$pandac$Compiler$compileReturn$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4541;
        }
        break;
        case 107:
        {
            org$pandalanguage$pandac$IRNode* $tmp4543 = org$pandalanguage$pandac$Compiler$compileCall$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            org$pandalanguage$pandac$IRNode* $tmp4544 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp4543);
            result4542 = $tmp4544;
            if (((panda$core$Bit) { result4542 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp4545 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self, result4542);
                result4542 = $tmp4545;
            }
            }
            return result4542;
        }
        break;
        case 130:
        case 131:
        case 132:
        case 133:
        {
            org$pandalanguage$pandac$IRNode* $tmp4546 = org$pandalanguage$pandac$Compiler$compileVar$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4546;
        }
        break;
    }
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBody$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$SymbolTable* old4547;
    org$pandalanguage$pandac$SymbolTable* symbols4549;
    panda$collections$Iterator* p$Iter4552;
    org$pandalanguage$pandac$MethodDecl$Parameter* p4564;
    panda$collections$Array* fieldInitializers4571;
    panda$collections$Iterator* f$Iter4575;
    org$pandalanguage$pandac$FieldDecl* f4588;
    panda$collections$Array* children4598;
    org$pandalanguage$pandac$IRNode* fieldRef4605;
    org$pandalanguage$pandac$IRNode* compiled4610;
    panda$collections$Array* children4612;
    if (((panda$core$Bit) { p_m->compiledBody != NULL }).value) {
    {
        return p_m->compiledBody;
    }
    }
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_m->owner));
    old4547 = self->symbolTable;
    org$pandalanguage$pandac$SymbolTable* $tmp4548 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, p_m->owner);
    self->symbolTable = $tmp4548;
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentMethod, ((panda$core$Object*) p_m));
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
    PANDA_ASSERT(((panda$core$Bit) { p_m->body != NULL }).value);
    org$pandalanguage$pandac$SymbolTable* $tmp4550 = (org$pandalanguage$pandac$SymbolTable*) malloc(48);
    $tmp4550->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp4550->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp4550, self->symbolTable);
    symbols4549 = $tmp4550;
    {
        ITable* $tmp4553 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp4553->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4553 = $tmp4553->next;
        }
        $fn4555 $tmp4554 = $tmp4553->methods[0];
        panda$collections$Iterator* $tmp4556 = $tmp4554(((panda$collections$Iterable*) p_m->parameters));
        p$Iter4552 = $tmp4556;
        $l4557:;
        ITable* $tmp4559 = p$Iter4552->$class->itable;
        while ($tmp4559->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4559 = $tmp4559->next;
        }
        $fn4561 $tmp4560 = $tmp4559->methods[0];
        panda$core$Bit $tmp4562 = $tmp4560(p$Iter4552);
        panda$core$Bit $tmp4563 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4562);
        if (!$tmp4563.value) goto $l4558;
        {
            ITable* $tmp4565 = p$Iter4552->$class->itable;
            while ($tmp4565->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4565 = $tmp4565->next;
            }
            $fn4567 $tmp4566 = $tmp4565->methods[1];
            panda$core$Object* $tmp4568 = $tmp4566(p$Iter4552);
            p4564 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp4568);
            org$pandalanguage$pandac$Variable* $tmp4569 = (org$pandalanguage$pandac$Variable*) malloc(88);
            $tmp4569->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
            $tmp4569->refCount.value = 1;
            org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Int64($tmp4569, ((org$pandalanguage$pandac$Symbol*) p_m)->position, ((panda$core$Int64) { 10001 }), p4564->name, p4564->type, ((panda$core$Int64) { 1820 }));
            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(symbols4549, ((org$pandalanguage$pandac$Symbol*) $tmp4569));
        }
        goto $l4557;
        $l4558:;
    }
    self->symbolTable = symbols4549;
    fieldInitializers4571 = NULL;
    panda$core$Bit $tmp4572 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 59 }));
    if ($tmp4572.value) {
    {
        panda$collections$Array* $tmp4573 = (panda$collections$Array*) malloc(40);
        $tmp4573->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp4573->refCount.value = 1;
        panda$collections$Array$init($tmp4573);
        fieldInitializers4571 = $tmp4573;
        {
            panda$core$Object* $tmp4576 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
            ITable* $tmp4577 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ClassDecl*) $tmp4576)->fields)->$class->itable;
            while ($tmp4577->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp4577 = $tmp4577->next;
            }
            $fn4579 $tmp4578 = $tmp4577->methods[0];
            panda$collections$Iterator* $tmp4580 = $tmp4578(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ClassDecl*) $tmp4576)->fields));
            f$Iter4575 = $tmp4580;
            $l4581:;
            ITable* $tmp4583 = f$Iter4575->$class->itable;
            while ($tmp4583->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4583 = $tmp4583->next;
            }
            $fn4585 $tmp4584 = $tmp4583->methods[0];
            panda$core$Bit $tmp4586 = $tmp4584(f$Iter4575);
            panda$core$Bit $tmp4587 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4586);
            if (!$tmp4587.value) goto $l4582;
            {
                ITable* $tmp4589 = f$Iter4575->$class->itable;
                while ($tmp4589->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp4589 = $tmp4589->next;
                }
                $fn4591 $tmp4590 = $tmp4589->methods[1];
                panda$core$Object* $tmp4592 = $tmp4590(f$Iter4575);
                f4588 = ((org$pandalanguage$pandac$FieldDecl*) $tmp4592);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self, f4588);
                panda$core$Bit $tmp4594 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(f4588->annotations);
                panda$core$Bit $tmp4595 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4594);
                bool $tmp4593 = $tmp4595.value;
                if (!$tmp4593) goto $l4596;
                $tmp4593 = ((panda$core$Bit) { f4588->value != NULL }).value;
                $l4596:;
                panda$core$Bit $tmp4597 = { $tmp4593 };
                if ($tmp4597.value) {
                {
                    panda$collections$Array* $tmp4599 = (panda$collections$Array*) malloc(40);
                    $tmp4599->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp4599->refCount.value = 1;
                    panda$collections$Array$init($tmp4599);
                    children4598 = $tmp4599;
                    org$pandalanguage$pandac$IRNode* $tmp4601 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp4601->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp4601->refCount.value = 1;
                    panda$core$Object* $tmp4603 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
                    org$pandalanguage$pandac$Type* $tmp4604 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp4603));
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp4601, ((panda$core$Int64) { 1025 }), ((org$pandalanguage$pandac$Symbol*) p_m)->position, $tmp4604);
                    panda$collections$Array$add$panda$collections$Array$T(children4598, ((panda$core$Object*) $tmp4601));
                    org$pandalanguage$pandac$IRNode* $tmp4606 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp4606->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp4606->refCount.value = 1;
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp4606, ((panda$core$Int64) { 1026 }), ((org$pandalanguage$pandac$Symbol*) p_m)->position, f4588->type, ((panda$core$Object*) f4588), ((panda$collections$ListView*) children4598));
                    fieldRef4605 = $tmp4606;
                    panda$collections$Array$clear(children4598);
                    panda$collections$Array$add$panda$collections$Array$T(children4598, ((panda$core$Object*) fieldRef4605));
                    panda$collections$Array$add$panda$collections$Array$T(children4598, ((panda$core$Object*) f4588->value));
                    org$pandalanguage$pandac$IRNode* $tmp4608 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp4608->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp4608->refCount.value = 1;
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4608, ((panda$core$Int64) { 1023 }), ((org$pandalanguage$pandac$Symbol*) f4588)->position, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 73 }))), ((panda$collections$ListView*) children4598));
                    panda$collections$Array$add$panda$collections$Array$T(fieldInitializers4571, ((panda$core$Object*) $tmp4608));
                }
                }
            }
            goto $l4581;
            $l4582:;
        }
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp4611 = org$pandalanguage$pandac$Compiler$compileBlock$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_m->body);
    compiled4610 = $tmp4611;
    if (((panda$core$Bit) { compiled4610 != NULL }).value) {
    {
        if (((panda$core$Bit) { fieldInitializers4571 != NULL }).value) {
        {
            panda$collections$Array* $tmp4613 = (panda$collections$Array*) malloc(40);
            $tmp4613->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp4613->refCount.value = 1;
            panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp4613, ((panda$collections$ListView*) fieldInitializers4571));
            children4612 = $tmp4613;
            panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(children4612, ((panda$collections$CollectionView*) compiled4610->children));
            org$pandalanguage$pandac$IRNode* $tmp4615 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp4615->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp4615->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4615, ((panda$core$Int64) { 1000 }), p_m->body->position, ((panda$collections$ListView*) children4612));
            compiled4610 = $tmp4615;
        }
        }
    }
    }
    PANDA_ASSERT(((panda$core$Bit) { ((panda$core$Object*) self->symbolTable) == ((panda$core$Object*) symbols4549) }).value);
    self->symbolTable = old4547;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentMethod);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    panda$core$Bit $tmp4617 = org$pandalanguage$pandac$Annotations$isInline$R$panda$core$Bit(p_m->annotations);
    if ($tmp4617.value) {
    {
        p_m->compiledBody = compiled4610;
    }
    }
    return compiled4610;
}
void org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$IRNode* compiled4618;
    if (((panda$core$Bit) { p_m->body != NULL }).value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp4619 = org$pandalanguage$pandac$Compiler$compileBody$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$IRNode$Q(self, p_m);
        compiled4618 = $tmp4619;
        panda$core$Bit $tmp4621 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->errorCount, ((panda$core$Int64) { 0 }));
        bool $tmp4620 = $tmp4621.value;
        if (!$tmp4620) goto $l4622;
        $tmp4620 = ((panda$core$Bit) { compiled4618 != NULL }).value;
        $l4622:;
        panda$core$Bit $tmp4623 = { $tmp4620 };
        if ($tmp4623.value) {
        {
            ITable* $tmp4624 = self->codeGenerator->$class->itable;
            while ($tmp4624->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
                $tmp4624 = $tmp4624->next;
            }
            $fn4626 $tmp4625 = $tmp4624->methods[3];
            $tmp4625(self->codeGenerator, p_m, compiled4618);
        }
        }
    }
    }
    else {
    {
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
        ITable* $tmp4627 = self->codeGenerator->$class->itable;
        while ($tmp4627->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
            $tmp4627 = $tmp4627->next;
        }
        $fn4629 $tmp4628 = $tmp4627->methods[2];
        $tmp4628(self->codeGenerator, p_m);
    }
    }
}
void org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Iterator* inner$Iter4630;
    org$pandalanguage$pandac$ClassDecl* inner4642;
    p_cl->external = ((panda$core$Bit) { false });
    {
        ITable* $tmp4631 = ((panda$collections$Iterable*) p_cl->classes)->$class->itable;
        while ($tmp4631->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4631 = $tmp4631->next;
        }
        $fn4633 $tmp4632 = $tmp4631->methods[0];
        panda$collections$Iterator* $tmp4634 = $tmp4632(((panda$collections$Iterable*) p_cl->classes));
        inner$Iter4630 = $tmp4634;
        $l4635:;
        ITable* $tmp4637 = inner$Iter4630->$class->itable;
        while ($tmp4637->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4637 = $tmp4637->next;
        }
        $fn4639 $tmp4638 = $tmp4637->methods[0];
        panda$core$Bit $tmp4640 = $tmp4638(inner$Iter4630);
        panda$core$Bit $tmp4641 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4640);
        if (!$tmp4641.value) goto $l4636;
        {
            ITable* $tmp4643 = inner$Iter4630->$class->itable;
            while ($tmp4643->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4643 = $tmp4643->next;
            }
            $fn4645 $tmp4644 = $tmp4643->methods[1];
            panda$core$Object* $tmp4646 = $tmp4644(inner$Iter4630);
            inner4642 = ((org$pandalanguage$pandac$ClassDecl*) $tmp4646);
            org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl(self, inner4642);
        }
        goto $l4635;
        $l4636:;
    }
}
void org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$SymbolTable* old4654;
    panda$collections$Iterator* m$Iter4659;
    org$pandalanguage$pandac$MethodDecl* m4671;
    org$pandalanguage$pandac$ClassDecl* next4681;
    PANDA_ASSERT(((panda$core$Bit) { self->compiling == NULL }).value);
    self->compiling = p_cl;
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_cl));
    org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl(self, p_cl);
    panda$core$Bit $tmp4647 = org$pandalanguage$pandac$Annotations$isSpecialize$R$panda$core$Bit(p_cl->annotations);
    if ($tmp4647.value) {
    {
        ITable* $tmp4648 = self->codeGenerator->$class->itable;
        while ($tmp4648->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
            $tmp4648 = $tmp4648->next;
        }
        $fn4650 $tmp4649 = $tmp4648->methods[1];
        $tmp4649(self->codeGenerator, p_cl);
        ITable* $tmp4651 = self->codeGenerator->$class->itable;
        while ($tmp4651->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
            $tmp4651 = $tmp4651->next;
        }
        $fn4653 $tmp4652 = $tmp4651->methods[4];
        $tmp4652(self->codeGenerator, p_cl);
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
        return;
    }
    }
    old4654 = self->symbolTable;
    org$pandalanguage$pandac$SymbolTable* $tmp4655 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, p_cl);
    self->symbolTable = $tmp4655;
    ITable* $tmp4656 = self->codeGenerator->$class->itable;
    while ($tmp4656->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
        $tmp4656 = $tmp4656->next;
    }
    $fn4658 $tmp4657 = $tmp4656->methods[1];
    $tmp4657(self->codeGenerator, p_cl);
    {
        ITable* $tmp4660 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
        while ($tmp4660->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4660 = $tmp4660->next;
        }
        $fn4662 $tmp4661 = $tmp4660->methods[0];
        panda$collections$Iterator* $tmp4663 = $tmp4661(((panda$collections$Iterable*) p_cl->methods));
        m$Iter4659 = $tmp4663;
        $l4664:;
        ITable* $tmp4666 = m$Iter4659->$class->itable;
        while ($tmp4666->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4666 = $tmp4666->next;
        }
        $fn4668 $tmp4667 = $tmp4666->methods[0];
        panda$core$Bit $tmp4669 = $tmp4667(m$Iter4659);
        panda$core$Bit $tmp4670 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4669);
        if (!$tmp4670.value) goto $l4665;
        {
            ITable* $tmp4672 = m$Iter4659->$class->itable;
            while ($tmp4672->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4672 = $tmp4672->next;
            }
            $fn4674 $tmp4673 = $tmp4672->methods[1];
            panda$core$Object* $tmp4675 = $tmp4673(m$Iter4659);
            m4671 = ((org$pandalanguage$pandac$MethodDecl*) $tmp4675);
            org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$MethodDecl(self, m4671);
        }
        goto $l4664;
        $l4665:;
    }
    ITable* $tmp4676 = self->codeGenerator->$class->itable;
    while ($tmp4676->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
        $tmp4676 = $tmp4676->next;
    }
    $fn4678 $tmp4677 = $tmp4676->methods[4];
    $tmp4677(self->codeGenerator, p_cl);
    self->symbolTable = old4654;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    self->compiling = NULL;
    panda$core$Int64 $tmp4679 = panda$collections$Array$get_count$R$panda$core$Int64(self->compilationQueue);
    panda$core$Bit $tmp4680 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp4679, ((panda$core$Int64) { 0 }));
    if ($tmp4680.value) {
    {
        panda$core$Object* $tmp4682 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->compilationQueue, ((panda$core$Int64) { 0 }));
        next4681 = ((org$pandalanguage$pandac$ClassDecl*) $tmp4682);
        panda$collections$Array$removeIndex$panda$core$Int64(self->compilationQueue, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$ClassDecl(self, next4681);
    }
    }
    panda$core$Int64 $tmp4683 = panda$collections$Array$get_count$R$panda$core$Int64(self->compilationQueue);
    panda$core$Bit $tmp4684 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4683, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp4684.value);
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Compiler* self, panda$io$File* p_file) {
    panda$collections$ListView* result4685;
    org$pandalanguage$pandac$ASTNode* parsed4688;
    panda$collections$Iterator* cl$Iter4691;
    org$pandalanguage$pandac$ClassDecl* cl4703;
    panda$core$Object* $tmp4686 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->scans, ((panda$collections$Key*) p_file));
    result4685 = ((panda$collections$ListView*) $tmp4686);
    if (((panda$core$Bit) { result4685 == NULL }).value) {
    {
        panda$core$String* $tmp4687 = panda$io$File$readFully$R$panda$core$String(p_file);
        org$pandalanguage$pandac$parser$Parser$start$panda$io$File$panda$core$String(self->parser, p_file, $tmp4687);
        org$pandalanguage$pandac$ASTNode* $tmp4689 = org$pandalanguage$pandac$parser$Parser$file$R$org$pandalanguage$pandac$ASTNode$Q(self->parser);
        parsed4688 = $tmp4689;
        if (((panda$core$Bit) { parsed4688 != NULL }).value) {
        {
            panda$collections$ListView* $tmp4690 = org$pandalanguage$pandac$Scanner$scan$panda$io$File$org$pandalanguage$pandac$ASTNode$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(self->scanner, p_file, parsed4688);
            result4685 = $tmp4690;
            {
                ITable* $tmp4692 = ((panda$collections$Iterable*) result4685)->$class->itable;
                while ($tmp4692->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp4692 = $tmp4692->next;
                }
                $fn4694 $tmp4693 = $tmp4692->methods[0];
                panda$collections$Iterator* $tmp4695 = $tmp4693(((panda$collections$Iterable*) result4685));
                cl$Iter4691 = $tmp4695;
                $l4696:;
                ITable* $tmp4698 = cl$Iter4691->$class->itable;
                while ($tmp4698->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp4698 = $tmp4698->next;
                }
                $fn4700 $tmp4699 = $tmp4698->methods[0];
                panda$core$Bit $tmp4701 = $tmp4699(cl$Iter4691);
                panda$core$Bit $tmp4702 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4701);
                if (!$tmp4702.value) goto $l4697;
                {
                    ITable* $tmp4704 = cl$Iter4691->$class->itable;
                    while ($tmp4704->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp4704 = $tmp4704->next;
                    }
                    $fn4706 $tmp4705 = $tmp4704->methods[1];
                    panda$core$Object* $tmp4707 = $tmp4705(cl$Iter4691);
                    cl4703 = ((org$pandalanguage$pandac$ClassDecl*) $tmp4707);
                    panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classes, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) cl4703)->name), ((panda$core$Object*) cl4703));
                }
                goto $l4696;
                $l4697:;
            }
        }
        }
        else {
        {
            panda$collections$Array* $tmp4708 = (panda$collections$Array*) malloc(40);
            $tmp4708->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp4708->refCount.value = 1;
            panda$collections$Array$init($tmp4708);
            result4685 = ((panda$collections$ListView*) $tmp4708);
        }
        }
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->scans, ((panda$collections$Key*) p_file), ((panda$core$Object*) result4685));
    }
    }
    return result4685;
}
void org$pandalanguage$pandac$Compiler$compile$panda$io$File(org$pandalanguage$pandac$Compiler* self, panda$io$File* p_file) {
    panda$collections$ListView* classes4710;
    panda$collections$Iterator* cl$Iter4712;
    org$pandalanguage$pandac$ClassDecl* cl4724;
    panda$collections$ListView* $tmp4711 = org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(self, p_file);
    classes4710 = $tmp4711;
    {
        ITable* $tmp4713 = ((panda$collections$Iterable*) classes4710)->$class->itable;
        while ($tmp4713->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4713 = $tmp4713->next;
        }
        $fn4715 $tmp4714 = $tmp4713->methods[0];
        panda$collections$Iterator* $tmp4716 = $tmp4714(((panda$collections$Iterable*) classes4710));
        cl$Iter4712 = $tmp4716;
        $l4717:;
        ITable* $tmp4719 = cl$Iter4712->$class->itable;
        while ($tmp4719->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4719 = $tmp4719->next;
        }
        $fn4721 $tmp4720 = $tmp4719->methods[0];
        panda$core$Bit $tmp4722 = $tmp4720(cl$Iter4712);
        panda$core$Bit $tmp4723 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4722);
        if (!$tmp4723.value) goto $l4718;
        {
            ITable* $tmp4725 = cl$Iter4712->$class->itable;
            while ($tmp4725->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4725 = $tmp4725->next;
            }
            $fn4727 $tmp4726 = $tmp4725->methods[1];
            panda$core$Object* $tmp4728 = $tmp4726(cl$Iter4712);
            cl4724 = ((org$pandalanguage$pandac$ClassDecl*) $tmp4728);
            org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$ClassDecl(self, cl4724);
        }
        goto $l4717;
        $l4718:;
    }
}
void org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, panda$core$String* p_msg) {
    panda$core$Object* $tmp4729 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
    org$pandalanguage$pandac$Compiler$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$ClassDecl*) $tmp4729)->source, p_position, p_msg);
}
void org$pandalanguage$pandac$Compiler$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$Compiler* self, panda$io$File* p_file, org$pandalanguage$pandac$Position p_pos, panda$core$String* p_msg) {
    if (self->reportErrors.value) {
    {
        panda$core$Int64 $tmp4730 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->errorCount, ((panda$core$Int64) { 1 }));
        self->errorCount = $tmp4730;
        panda$core$String* $tmp4731 = panda$io$File$name$R$panda$core$String(p_file);
        panda$core$String* $tmp4732 = panda$core$String$convert$R$panda$core$String($tmp4731);
        panda$core$String* $tmp4734 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4732, &$s4733);
        panda$core$String* $tmp4735 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp4734, ((panda$core$Object*) wrap_org$pandalanguage$pandac$Position(p_pos)));
        panda$core$String* $tmp4737 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4735, &$s4736);
        panda$core$String* $tmp4738 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4737, p_msg);
        panda$core$String* $tmp4740 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4738, &$s4739);
        panda$io$Console$printLine$panda$core$Object(((panda$core$Object*) $tmp4740));
    }
    }
}
void org$pandalanguage$pandac$Compiler$finish(org$pandalanguage$pandac$Compiler* self) {
    ITable* $tmp4741 = self->codeGenerator->$class->itable;
    while ($tmp4741->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
        $tmp4741 = $tmp4741->next;
    }
    $fn4743 $tmp4742 = $tmp4741->methods[5];
    $tmp4742(self->codeGenerator);
}

