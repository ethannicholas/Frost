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
#include "panda/collections/MapView.h"
#include "panda/collections/CollectionView.h"
#include "panda/collections/List.h"
#include "panda/collections/ListView.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "org/pandalanguage/pandac/ClassDecl/GenericParameter.h"
#include "panda/collections/ImmutableArray.h"
#include "panda/core/MutableString.h"
#include "panda/io/File.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Iterable.h"
#include "org/pandalanguage/pandac/Annotations.h"
#include "org/pandalanguage/pandac/MethodDecl.h"
#include "org/pandalanguage/pandac/MethodDecl/Parameter.h"
#include "org/pandalanguage/pandac/FieldDecl.h"
#include "org/pandalanguage/pandac/IRNode.h"
#include "org/pandalanguage/pandac/ASTNode.h"
#include "panda/io/Console.h"
#include "panda/collections/Set.h"
#include "org/pandalanguage/pandac/MethodRef.h"
#include "org/pandalanguage/pandac/Methods.h"
#include "org/pandalanguage/pandac/Variable.h"
#include "panda/core/Range.LTpanda/core/Int64.Q.GT.h"
#include "org/pandalanguage/pandac/Compiler/CompileTargetResult.h"


struct { panda$core$Class* cl; ITable* next; void* methods[1]; } org$pandalanguage$pandac$Compiler$_org$pandalanguage$pandac$ErrorReporter = { (panda$core$Class*) &org$pandalanguage$pandac$ErrorReporter$class, NULL, { org$pandalanguage$pandac$Compiler$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String} };

org$pandalanguage$pandac$Compiler$class_type org$pandalanguage$pandac$Compiler$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &org$pandalanguage$pandac$Compiler$_org$pandalanguage$pandac$ErrorReporter, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, org$pandalanguage$pandac$Compiler$addAlias$panda$core$String, org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q, org$pandalanguage$pandac$Compiler$checkGenericParameters$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$Type$Q, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT, org$pandalanguage$pandac$Compiler$getClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q, org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Position$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q, org$pandalanguage$pandac$Compiler$specialize$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q, org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT, org$pandalanguage$pandac$Compiler$signatureMatch$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q, org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q, org$pandalanguage$pandac$Compiler$interfaceMethods$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT, org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable, org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT, org$pandalanguage$pandac$Compiler$addInheritedMethods$org$pandalanguage$pandac$SymbolTable$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT, org$pandalanguage$pandac$Compiler$getMethodReference$org$pandalanguage$pandac$SymbolTable$org$pandalanguage$pandac$IRNode$Q$panda$core$String$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$Compiler$symbolRef$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q, org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64, org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64, org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q, org$pandalanguage$pandac$Compiler$doCoerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$Compiler$callCost$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q, org$pandalanguage$pandac$Compiler$matchMethods$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q, org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$declaredTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$foldInts$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$Compiler$compileIndexedAssignment$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT, org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$IRNode$Q$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT, org$pandalanguage$pandac$Compiler$compilePrefix$panda$core$Int64$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compilePrefix$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileCall$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileIdentifier$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileRange$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileSelf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileSuper$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileNull$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileBlock$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileIf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileRangeFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileIteratorFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileFor$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileWhile$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileDo$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileLoop$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q, org$pandalanguage$pandac$Compiler$compileDeclaration$org$pandalanguage$pandac$ASTNode$panda$core$Int64$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileBreak$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileContinue$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileReturn$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileAssert$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileVar$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileWhenTest$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileChainedIfWhen$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileChainedIfMatch$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileWhen$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileOtherwise$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64, org$pandalanguage$pandac$Compiler$compileMatch$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileBody$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT, org$pandalanguage$pandac$Compiler$compile$panda$io$File, org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String, org$pandalanguage$pandac$Compiler$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String, org$pandalanguage$pandac$Compiler$finish} };

typedef void (*$fn23)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$Compiler*);
typedef panda$core$Object* (*$fn123)(panda$collections$MapView*, panda$core$Object*);
typedef panda$core$Int64 (*$fn160)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn167)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn210)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn214)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn224)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn232)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn239)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn352)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn358)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn364)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn371)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn377)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn383)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn437)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn443)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn449)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn460)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn466)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn472)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn478)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn484)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn490)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn498)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn504)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn510)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn589)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn595)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn601)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn617)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn623)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn629)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn655)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn661)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn667)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn719)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn725)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn731)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn740)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn762)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn785)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn791)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn797)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn805)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn811)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn817)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn828)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn834)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn840)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn863)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn869)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn875)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn924)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn930)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn936)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn949)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn955)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn961)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn976)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn982)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn988)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1003)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1009)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1015)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1029)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1035)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1041)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1054)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1060)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1066)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1121)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1127)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1133)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1140)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1146)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1152)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1172)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1178)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1184)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1269)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn1334)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1340)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1346)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1372)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1378)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1384)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1501)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1507)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1513)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1641)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1647)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1653)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1700)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1706)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1712)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn1802)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn1829)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Int64 (*$fn1856)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn1873)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1879)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1885)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn1897)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn1920)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn1994)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2017)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn2093)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn2112)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2118)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2124)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2155)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2161)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2167)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2204)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2210)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2216)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2239)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2245)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2251)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2641)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2647)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2653)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2785)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2791)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2797)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn3023)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn3039)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3045)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3051)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3147)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3153)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3159)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3342)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3348)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3354)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3484)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3490)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3496)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3522)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3528)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3534)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3638)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3644)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3650)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3821)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3827)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3833)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3911)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3917)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3923)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3984)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3990)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3996)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4060)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4066)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4072)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4111)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4117)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4123)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4135)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4141)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4147)(panda$collections$Iterator*);
typedef void (*$fn4180)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$MethodDecl*, org$pandalanguage$pandac$IRNode*);
typedef void (*$fn4183)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$collections$Iterator* (*$fn4187)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4193)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4199)(panda$collections$Iterator*);
typedef void (*$fn4204)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn4207)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn4212)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$collections$Iterator* (*$fn4216)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4222)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4228)(panda$collections$Iterator*);
typedef void (*$fn4232)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn4242)(org$pandalanguage$pandac$parser$Parser*, panda$io$File*, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn4244)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$collections$Iterator* (*$fn4250)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4256)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4262)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4271)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4277)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4283)(panda$collections$Iterator*);
typedef void (*$fn4300)(org$pandalanguage$pandac$CodeGenerator*);

static panda$core$String $s26 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x69\x6C\x74\x69\x6E\x5F\x62\x69\x74", 11, 1 };
static panda$core$String $s29 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x69\x6C\x74\x69\x6E\x5F\x69\x6E\x74\x38", 12, 1 };
static panda$core$String $s32 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x69\x6C\x74\x69\x6E\x5F\x69\x6E\x74\x31\x36", 13, 1 };
static panda$core$String $s35 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x69\x6C\x74\x69\x6E\x5F\x69\x6E\x74\x33\x32", 13, 1 };
static panda$core$String $s38 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x69\x6C\x74\x69\x6E\x5F\x69\x6E\x74\x36\x34", 13, 1 };
static panda$core$String $s41 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x69\x6C\x74\x69\x6E\x5F\x75\x69\x6E\x74\x38", 13, 1 };
static panda$core$String $s44 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x69\x6C\x74\x69\x6E\x5F\x75\x69\x6E\x74\x31\x36", 14, 1 };
static panda$core$String $s47 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x69\x6C\x74\x69\x6E\x5F\x75\x69\x6E\x74\x33\x32", 14, 1 };
static panda$core$String $s50 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x69\x6C\x74\x69\x6E\x5F\x75\x69\x6E\x74\x36\x34", 14, 1 };
static panda$core$String $s53 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x49\x6E\x74", 3, 1 };
static panda$core$String $s54 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74\x36\x34", 16, 1 };
static panda$core$String $s56 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x41\x72\x72\x61\x79", 23, 1 };
static panda$core$String $s57 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x43\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E", 28, 1 };
static panda$core$String $s58 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x43\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x56\x69\x65\x77", 32, 1 };
static panda$core$String $s59 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x43\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x57\x72\x69\x74\x65\x72", 34, 1 };
static panda$core$String $s60 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x49\x64\x65\x6E\x74\x69\x74\x79\x4D\x61\x70", 29, 1 };
static panda$core$String $s61 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x49\x6D\x6D\x75\x74\x61\x62\x6C\x65\x41\x72\x72\x61\x79", 32, 1 };
static panda$core$String $s62 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x49\x74\x65\x72\x61\x62\x6C\x65", 26, 1 };
static panda$core$String $s63 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x49\x74\x65\x72\x61\x74\x6F\x72", 26, 1 };
static panda$core$String $s64 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x4B\x65\x79", 21, 1 };
static panda$core$String $s65 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x4C\x69\x73\x74", 22, 1 };
static panda$core$String $s66 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x4C\x69\x73\x74\x56\x69\x65\x77", 26, 1 };
static panda$core$String $s67 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x4C\x69\x73\x74\x57\x72\x69\x74\x65\x72", 28, 1 };
static panda$core$String $s68 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x48\x61\x73\x68\x4D\x61\x70", 25, 1 };
static panda$core$String $s69 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x4D\x61\x70", 21, 1 };
static panda$core$String $s70 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x4D\x61\x70\x56\x69\x65\x77", 25, 1 };
static panda$core$String $s71 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x4D\x61\x70\x57\x72\x69\x74\x65\x72", 27, 1 };
static panda$core$String $s72 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x53\x65\x74", 21, 1 };
static panda$core$String $s73 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x53\x74\x61\x63\x6B", 23, 1 };
static panda$core$String $s74 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x43\x6C\x61\x73\x73", 16, 1 };
static panda$core$String $s75 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x42\x69\x74", 14, 1 };
static panda$core$String $s76 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x43\x68\x61\x72\x38", 16, 1 };
static panda$core$String $s77 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x43\x68\x61\x72\x31\x36", 17, 1 };
static panda$core$String $s78 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x43\x68\x61\x72\x33\x32", 17, 1 };
static panda$core$String $s79 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x43\x6F\x6D\x70\x61\x72\x61\x62\x6C\x65", 21, 1 };
static panda$core$String $s80 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x45\x71\x75\x61\x74\x61\x62\x6C\x65", 20, 1 };
static panda$core$String $s81 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74\x38", 15, 1 };
static panda$core$String $s82 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74\x31\x36", 16, 1 };
static panda$core$String $s83 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74\x33\x32", 16, 1 };
static panda$core$String $s84 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74\x36\x34", 16, 1 };
static panda$core$String $s85 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6D\x6D\x75\x74\x61\x62\x6C\x65", 20, 1 };
static panda$core$String $s86 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x4D\x75\x74\x61\x62\x6C\x65\x53\x74\x72\x69\x6E\x67", 24, 1 };
static panda$core$String $s87 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x4F\x62\x6A\x65\x63\x74", 17, 1 };
static panda$core$String $s88 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x50\x61\x6E\x64\x61", 16, 1 };
static panda$core$String $s89 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x52\x61\x6E\x67\x65", 16, 1 };
static panda$core$String $s90 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x53\x74\x72\x69\x6E\x67", 17, 1 };
static panda$core$String $s91 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x53\x79\x73\x74\x65\x6D", 17, 1 };
static panda$core$String $s92 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x55\x49\x6E\x74\x38", 16, 1 };
static panda$core$String $s93 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x55\x49\x6E\x74\x31\x36", 17, 1 };
static panda$core$String $s94 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x55\x49\x6E\x74\x33\x32", 17, 1 };
static panda$core$String $s95 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x55\x49\x6E\x74\x36\x34", 17, 1 };
static panda$core$String $s96 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x56\x61\x6C\x75\x65", 16, 1 };
static panda$core$String $s97 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x6D\x61\x74\x68\x2E\x52\x61\x6E\x64\x6F\x6D", 17, 1 };
static panda$core$String $s98 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x6D\x61\x74\x68\x2E\x58\x6F\x72\x53\x68\x69\x66\x74\x31\x32\x38\x50\x6C\x75\x73", 26, 1 };
static panda$core$String $s99 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x69\x6F\x2E\x43\x6F\x6E\x73\x6F\x6C\x65", 16, 1 };
static panda$core$String $s100 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x69\x6F\x2E\x46\x69\x6C\x65", 13, 1 };
static panda$core$String $s101 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x69\x6F\x2E\x49\x6E\x64\x65\x6E\x74\x65\x64\x4F\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6D", 29, 1 };
static panda$core$String $s102 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x69\x6F\x2E\x49\x6E\x70\x75\x74\x53\x74\x72\x65\x61\x6D", 20, 1 };
static panda$core$String $s103 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x69\x6F\x2E\x4C\x69\x6E\x65\x4E\x75\x6D\x62\x65\x72\x49\x6E\x70\x75\x74\x53\x74\x72\x65\x61\x6D", 30, 1 };
static panda$core$String $s104 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x69\x6F\x2E\x4D\x65\x6D\x6F\x72\x79\x49\x6E\x70\x75\x74\x53\x74\x72\x65\x61\x6D", 26, 1 };
static panda$core$String $s105 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x69\x6F\x2E\x4D\x65\x6D\x6F\x72\x79\x4F\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6D", 27, 1 };
static panda$core$String $s106 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x69\x6F\x2E\x4F\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6D", 21, 1 };
static panda$core$String $s107 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x69\x6F\x2E\x50\x75\x73\x68\x62\x61\x63\x6B\x49\x6E\x70\x75\x74\x53\x74\x72\x65\x61\x6D", 28, 1 };
static panda$core$String $s108 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, 1 };
static panda$core$String $s112 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s132 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s140 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s172 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s173 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, 1 };
static panda$core$String $s174 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s176 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x65\x78\x70\x65\x63\x74\x65\x64\x20", 11, 1 };
static panda$core$String $s179 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x67\x65\x6E\x65\x72\x69\x63\x20\x70\x61\x72\x61\x6D\x65\x74\x65\x72", 18, 1 };
static panda$core$String $s182 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x62\x75\x74\x20", 6, 1 };
static panda$core$String $s184 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x6F\x75\x6E\x64\x20", 6, 1 };
static panda$core$String $s186 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s218 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x65\x6E\x65\x72\x69\x63\x20\x70\x61\x72\x61\x6D\x65\x74\x65\x72\x20\x27", 19, 1 };
static panda$core$String $s220 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s227 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20", 10, 1 };
static panda$core$String $s229 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6F\x66\x20\x74\x79\x70\x65\x20\x27", 9, 1 };
static panda$core$String $s235 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 14, 1 };
static panda$core$String $s242 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s271 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x6B\x6E\x6F\x77\x6E\x20\x74\x79\x70\x65\x20\x27", 14, 1 };
static panda$core$String $s273 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s286 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3F", 1, 1 };
static panda$core$String $s300 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 1 };
static panda$core$String $s302 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s326 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s338 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };
static panda$core$String $s391 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x74\x65\x72\x66\x61\x63\x65\x20\x27", 11, 1 };
static panda$core$String $s393 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x65\x78\x74\x65\x6E\x64\x20\x63\x6C\x61\x73\x73\x20", 22, 1 };
static panda$core$String $s395 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s397 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s402 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x75\x70\x65\x72\x63\x6C\x61\x73\x73\x20\x27", 12, 1 };
static panda$core$String $s404 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x6F\x66\x20\x63\x6C\x61\x73\x73\x20\x27", 12, 1 };
static panda$core$String $s407 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20", 10, 1 };
static panda$core$String $s409 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x69\x73\x74\x65\x64\x20\x62\x65\x66\x6F\x72\x65\x20\x61\x6E\x79\x20\x73\x75\x70\x65\x72\x69\x6E\x74\x65\x72\x66\x61\x63\x65\x73", 33, 1 };
static panda$core$String $s411 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6C\x61\x73\x73\x20\x27", 7, 1 };
static panda$core$String $s413 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x68\x61\x73\x20\x6D\x6F\x72\x65\x20\x74\x68\x61\x6E\x20\x6F\x6E\x65\x20\x73\x75\x70\x65\x72\x63\x6C\x61\x73\x73", 30, 1 };
static panda$core$String $s418 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x4F\x62\x6A\x65\x63\x74", 17, 1 };
static panda$core$String $s429 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x56\x61\x6C\x75\x65", 16, 1 };
static panda$core$String $s518 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s521 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x6F\x76\x65\x72\x72\x69\x64\x65\x73\x20", 11, 1 };
static panda$core$String $s525 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x62\x75\x74\x20", 6, 1 };
static panda$core$String $s527 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x73\x20\x6E\x6F\x74\x20\x6D\x61\x72\x6B\x65\x64\x20\x40\x6F\x76\x65\x72\x72\x69\x64\x65", 23, 1 };
static panda$core$String $s534 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s537 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x6F\x76\x65\x72\x72\x69\x64\x65\x73\x20", 11, 1 };
static panda$core$String $s541 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x62\x75\x74\x20", 6, 1 };
static panda$core$String $s543 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6D\x65\x74\x68\x6F\x64\x73\x20\x63\x61\x6E\x6E\x6F\x74\x20\x6F\x76\x65\x72\x72\x69\x64\x65\x20\x66\x75\x6E\x63\x74\x69\x6F\x6E\x73", 33, 1 };
static panda$core$String $s546 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s549 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x69\x73\x20\x6D\x61\x72\x6B\x65\x64\x20\x40\x6F\x76\x65\x72\x72\x69\x64\x65\x2C\x20\x62\x75\x74\x20\x6E\x6F\x20\x6D\x61\x74\x63\x68\x69\x6E\x67\x20\x6D\x65\x74\x68\x6F\x64\x20", 45, 1 };
static panda$core$String $s551 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x69\x73\x74\x73\x20\x61\x6D\x6F\x6E\x67\x20\x69\x74\x73\x20\x61\x6E\x63\x65\x73\x74\x6F\x72\x73", 26, 1 };
static panda$core$String $s560 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x69\x65\x6C\x64\x20\x68\x61\x73\x20\x6E\x65\x69\x74\x68\x65\x72\x20\x61\x20\x74\x79\x70\x65\x20\x6E\x6F\x72\x20\x61\x20\x76\x61\x6C\x75\x65", 36, 1 };
static panda$core$String $s564 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x6B\x6E\x6F\x77\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 18, 1 };
static panda$core$String $s565 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6D\x62\x69\x67\x75\x6F\x75\x73\x20\x6D\x65\x74\x68\x6F\x64\x20\x63\x61\x6C\x6C", 21, 1 };
static panda$core$String $s567 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x73\x75\x70\x65\x72\x27\x20\x63\x61\x6E\x20\x6F\x6E\x6C\x79\x20\x62\x65\x20\x75\x73\x65\x64\x20\x61\x73\x20\x70\x61\x72\x74\x20\x6F\x66\x20\x61\x20\x6D\x65\x74\x68\x6F\x64\x20\x63\x61\x6C\x6C", 49, 1 };
static panda$core$String $s608 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s609 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, 1 };
static panda$core$String $s611 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x70\x61\x6E\x64\x61", 6, 1 };
static panda$core$String $s636 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s646 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s647 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, 1 };
static panda$core$String $s649 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x70\x61\x6E\x64\x61", 6, 1 };
static panda$core$String $s679 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x66\x69\x6C\x65\x20\x27", 15, 1 };
static panda$core$String $s681 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x74\x6F\x20\x63\x6F\x6E\x74\x61\x69\x6E\x20\x61\x20\x63\x6C\x61\x73\x73\x20\x6E\x61\x6D\x65\x64\x20\x27", 28, 1 };
static panda$core$String $s684 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s687 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x6F\x20\x66\x69\x6C\x65\x20\x6E\x61\x6D\x65\x64\x20", 14, 1 };
static panda$core$String $s689 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x69\x6E\x20\x61\x6E\x79\x20\x69\x6D\x70\x6F\x72\x74\x20\x70\x61\x74\x68\x20\x28", 21, 1 };
static panda$core$String $s692 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s694 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x69\x6E\x74\x5F\x6C\x69\x74\x65\x72\x61\x6C", 12, 1 };
static panda$core$String $s1214 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x73\x75\x70\x65\x72\x27\x20\x63\x61\x6E\x20\x6F\x6E\x6C\x79\x20\x62\x65\x20\x75\x73\x65\x64\x20\x61\x73\x20\x70\x61\x72\x74\x20\x6F\x66\x20\x61\x20\x6D\x65\x74\x68\x6F\x64\x20\x63\x61\x6C\x6C", 49, 1 };
static panda$core$String $s1264 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s1303 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 1 };
static panda$core$String $s1675 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 1 };
static panda$core$String $s1734 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27", 10, 1 };
static panda$core$String $s1736 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 14, 1 };
static panda$core$String $s1739 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s1779 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6C\x75\x65\x20\x6F\x66\x20\x74\x79\x70\x65\x20\x27", 15, 1 };
static panda$core$String $s1781 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x70\x6F\x73\x73\x69\x62\x6C\x79\x20\x62\x65\x20\x61\x6E\x20\x69\x6E\x73\x74\x61\x6E\x63\x65\x20\x6F\x66\x20", 36, 1 };
static panda$core$String $s1783 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s1785 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s1903 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1904 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, 1 };
static panda$core$String $s1905 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1908 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x65\x78\x70\x65\x63\x74\x65\x64\x20", 10, 1 };
static panda$core$String $s1912 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x61\x72\x67\x75\x6D\x65\x6E\x74", 9, 1 };
static panda$core$String $s1915 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s1917 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x74\x20\x72\x65\x63\x65\x69\x76\x65\x64\x20", 13, 1 };
static panda$core$String $s1923 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1947 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x64\x69\x72\x65\x63\x74\x6C\x79\x20\x63\x61\x6C\x6C\x20\x27\x69\x6E\x69\x74\x27\x20\x6F\x75\x74\x73\x69\x64\x65\x20\x6F\x66\x20\x61\x6E\x20\x69\x6E\x69\x74\x20\x6D\x65\x74\x68\x6F\x64", 53, 1 };
static panda$core$String $s1957 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x69\x6E\x69\x74\x27\x20\x6D\x61\x79\x20\x6F\x6E\x6C\x79\x20\x62\x65\x20\x63\x61\x6C\x6C\x65\x64\x20\x6F\x6E\x20\x27\x73\x65\x6C\x66\x27\x20\x6F\x72\x20\x27\x73\x75\x70\x65\x72\x27", 46, 1 };
static panda$core$String $s1972 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x63\x61\x6C\x6C\x20\x69\x6E\x73\x74\x61\x6E\x63\x65\x20", 21, 1 };
static panda$core$String $s1975 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x66\x72\x6F\x6D\x20\x61\x20\x40\x63\x6C\x61\x73\x73\x20\x63\x6F\x6E\x74\x65\x78\x74", 22, 1 };
static panda$core$String $s1986 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x63\x61\x6C\x6C\x20\x63\x6C\x61\x73\x73\x20", 18, 1 };
static panda$core$String $s1989 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x6F\x6E\x20\x61\x6E\x20\x69\x6E\x73\x74\x61\x6E\x63\x65", 15, 1 };
static panda$core$String $s2035 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, 1 };
static panda$core$String $s2054 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6C\x61\x73\x73\x20\x27", 7, 1 };
static panda$core$String $s2056 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x64\x6F\x65\x73\x20\x6E\x6F\x74\x20\x68\x61\x76\x65\x20\x61\x20\x6D\x65\x6D\x62\x65\x72\x20\x6E\x61\x6D\x65\x64\x20\x27", 32, 1 };
static panda$core$String $s2059 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2066 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2068 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s2071 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x69\x73\x20\x6E\x6F\x74\x20\x61\x20\x6D\x65\x74\x68\x6F\x64", 17, 1 };
static panda$core$String $s2098 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x6F\x20\x6D\x61\x74\x63\x68\x20\x66\x6F\x72\x20\x63\x61\x6C\x6C\x20\x74\x6F\x20\x27", 22, 1 };
static panda$core$String $s2100 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s2102 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2104 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s2108 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2126 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2127 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x27", 2, 1 };
static panda$core$String $s2128 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x77\x69\x74\x68\x20\x72\x65\x74\x75\x72\x6E\x20\x74\x79\x70\x65\x20\x27", 19, 1 };
static panda$core$String $s2130 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2178 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x69\x74", 4, 1 };
static panda$core$String $s2188 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6C\x75\x65\x20\x6F\x66\x20\x74\x79\x70\x65\x20\x27", 15, 1 };
static panda$core$String $s2190 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x69\x73\x20\x6E\x6F\x74\x20\x61\x20\x6D\x65\x74\x68\x6F\x64", 17, 1 };
static panda$core$String $s2198 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s2200 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2218 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2221 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x3E\x28", 4, 1 };
static panda$core$String $s2222 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x26\x3E\x28", 5, 1 };
static panda$core$String $s2225 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s2235 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s2253 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2256 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x3E\x28", 4, 1 };
static panda$core$String $s2257 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x26\x3E\x28", 5, 1 };
static panda$core$String $s2260 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s2274 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2B", 1, 1 };
static panda$core$String $s2275 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D", 1, 1 };
static panda$core$String $s2276 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s2277 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, 1 };
static panda$core$String $s2278 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F\x2F", 2, 1 };
static panda$core$String $s2279 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 1 };
static panda$core$String $s2280 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5E", 1, 1 };
static panda$core$String $s2281 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3D", 1, 1 };
static panda$core$String $s2282 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x3D", 2, 1 };
static panda$core$String $s2283 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };
static panda$core$String $s2284 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 1 };
static panda$core$String $s2285 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E\x3D", 2, 1 };
static panda$core$String $s2286 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x3D", 2, 1 };
static panda$core$String $s2287 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1, 1 };
static panda$core$String $s2288 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C\x7C", 2, 1 };
static panda$core$String $s2289 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, 1 };
static panda$core$String $s2290 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26\x26", 2, 1 };
static panda$core$String $s2291 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7E", 1, 1 };
static panda$core$String $s2292 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7E\x7E", 2, 1 };
static panda$core$String $s2293 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21", 1, 1 };
static panda$core$String $s2294 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x21", 2, 1 };
static panda$core$String $s2295 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x3C", 2, 1 };
static panda$core$String $s2296 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E\x3E", 2, 1 };
static panda$core$String $s2297 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 1 };
static panda$core$String $s2298 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A\x3D", 2, 1 };
static panda$core$String $s2299 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3D\x3D", 2, 1 };
static panda$core$String $s2300 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x3D\x3D", 3, 1 };
static panda$core$String $s2411 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x76\x61\x6C\x69\x64\x20\x6E\x75\x6D\x65\x72\x69\x63\x20\x6F\x70\x65\x72\x61\x74\x69\x6F\x6E", 25, 1 };
static panda$core$String $s2423 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D\x3A\x3D", 4, 1 };
static panda$core$String $s2471 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6F\x6E\x76\x65\x72\x74", 7, 1 };
static panda$core$String $s2475 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D\x3A\x3D", 4, 1 };
static panda$core$String $s2535 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2538 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x6F\x70\x65\x72\x61\x74\x65\x20\x6F\x6E\x20\x27", 21, 1 };
static panda$core$String $s2541 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20", 3, 1 };
static panda$core$String $s2543 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2545 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2552 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2555 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x6F\x70\x65\x72\x61\x74\x65\x20\x6F\x6E\x20\x27", 21, 1 };
static panda$core$String $s2558 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20", 3, 1 };
static panda$core$String $s2560 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2562 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2584 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x61\x73\x73\x69\x67\x6E\x20\x74\x6F\x20\x74\x68\x69\x73\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6F\x6E", 32, 1 };
static panda$core$String $s2596 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x61\x73\x73\x69\x67\x6E\x20\x74\x6F\x20\x74\x68\x69\x73\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6F\x6E", 32, 1 };
static panda$core$String $s2613 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6F\x6E\x76\x65\x72\x74", 7, 1 };
static panda$core$String $s2626 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 1 };
static panda$core$String $s2695 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2698 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x6F\x70\x65\x72\x61\x74\x65\x20\x6F\x6E\x20\x27", 21, 1 };
static panda$core$String $s2701 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20\x27", 4, 1 };
static panda$core$String $s2704 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2818 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x6D\x65\x74\x68\x6F\x64\x3E", 8, 1 };
static panda$core$String $s2834 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6E\x75\x6D\x62\x65\x72\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 30, 1 };
static panda$core$String $s2836 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2844 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6E\x75\x6D\x62\x65\x72\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 30, 1 };
static panda$core$String $s2846 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2920 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2922 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s2925 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2943 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6C\x61\x73\x73\x20\x27", 7, 1 };
static panda$core$String $s2945 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x64\x6F\x65\x73\x20\x6E\x6F\x74\x20\x68\x61\x76\x65\x20\x61\x20\x6D\x65\x6D\x62\x65\x72\x20\x6E\x61\x6D\x65\x64\x20", 31, 1 };
static panda$core$String $s2947 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2949 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s3008 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x75\x6E\x72\x65\x73\x6F\x6C\x76\x65\x64\x20\x72\x61\x6E\x67\x65\x3E", 18, 1 };
static panda$core$String $s3017 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x72\x65\x66\x65\x72\x65\x6E\x63\x65\x20\x27\x73\x65\x6C\x66\x27\x20\x66\x72\x6F\x6D\x20\x61\x20\x40\x63\x6C\x61\x73\x73\x20\x6D\x65\x74\x68\x6F\x64", 44, 1 };
static panda$core$String $s3033 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 1 };
static panda$core$String $s3035 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3057 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3059 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s3062 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3066 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s3067 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };
static panda$core$String $s3077 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x72\x65\x66\x65\x72\x65\x6E\x63\x65\x20\x27\x73\x75\x70\x65\x72\x27\x20\x66\x72\x6F\x6D\x20\x61\x20\x40\x63\x6C\x61\x73\x73\x20\x6D\x65\x74\x68\x6F\x64", 45, 1 };
static panda$core$String $s3096 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6C\x75\x65\x20\x6F\x66\x20\x74\x79\x70\x65\x20\x27", 15, 1 };
static panda$core$String $s3098 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x70\x6F\x73\x73\x69\x62\x6C\x79\x20\x62\x65\x20\x61\x6E\x20", 24, 1 };
static panda$core$String $s3100 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x73\x74\x61\x6E\x63\x65\x20\x6F\x66\x20\x27", 13, 1 };
static panda$core$String $s3102 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s3122 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x64\x6F\x65\x73\x20\x6E\x6F\x74\x20\x72\x65\x74\x75\x72\x6E\x20\x61\x20\x76\x61\x6C\x75\x65", 24, 1 };
static panda$core$String $s3244 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3247 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 1 };
static panda$core$String $s3251 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };
static panda$core$String $s3256 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x49\x74\x65\x72", 5, 1 };
static panda$core$String $s3279 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x65\x74\x5F\x64\x6F\x6E\x65", 8, 1 };
static panda$core$String $s3284 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21", 1, 1 };
static panda$core$String $s3296 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x65\x78\x74", 4, 1 };
static panda$core$String $s3378 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x74\x65\x72\x61\x74\x6F\x72", 8, 1 };
static panda$core$String $s3386 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6E\x20\x49\x74\x65\x72\x61\x62\x6C\x65\x20\x6F\x72\x20\x49\x74\x65\x72\x61\x74\x6F\x72\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 45, 1 };
static panda$core$String $s3388 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s3446 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x63\x6C\x61\x72\x61\x74\x69\x6F\x6E\x20\x68\x61\x73\x20\x6E\x65\x69\x74\x68\x65\x72\x20\x61\x20\x74\x79\x70\x65\x20\x6E\x6F\x72\x20\x61\x20\x76\x61\x6C\x75\x65", 42, 1 };
static panda$core$String $s3503 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x62\x72\x65\x61\x6B\x20", 7, 1 };
static panda$core$String $s3505 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20\x69\x6E\x73\x69\x64\x65\x20\x61\x20\x6C\x6F\x6F\x70\x20\x6C\x61\x62\x65\x6C\x6C\x65\x64\x20", 33, 1 };
static panda$core$String $s3507 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s3509 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A\x27", 2, 1 };
static panda$core$String $s3514 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x62\x72\x65\x61\x6B\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20\x69\x6E\x73\x69\x64\x65\x20\x61\x20\x6C\x6F\x6F\x70", 29, 1 };
static panda$core$String $s3541 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x63\x6F\x6E\x74\x69\x6E\x75\x65\x20", 10, 1 };
static panda$core$String $s3543 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20\x69\x6E\x73\x69\x64\x65\x20\x61\x20\x6C\x6F\x6F\x70\x20\x6C\x61\x62\x65\x6C\x6C\x65\x64\x20", 33, 1 };
static panda$core$String $s3545 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s3547 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A\x27", 2, 1 };
static panda$core$String $s3552 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x63\x6F\x6E\x74\x69\x6E\x75\x65\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20\x69\x6E\x73\x69\x64\x65\x20\x61\x20\x6C\x6F\x6F\x70", 32, 1 };
static panda$core$String $s3561 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x72\x65\x74\x75\x72\x6E\x20\x61\x20\x76\x61\x6C\x75\x65\x20\x66\x72\x6F\x6D\x20\x61\x20\x6D\x65\x74\x68\x6F\x64\x20\x77\x69\x74\x68\x20\x6E\x6F\x20\x72\x65\x74\x75\x72\x6E\x20\x74\x79\x70\x65", 55, 1 };
static panda$core$String $s3577 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x72\x65\x74\x75\x72\x6E\x20\x76\x61\x6C\x75\x65", 23, 1 };
static panda$core$String $s3597 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6C\x75\x65", 5, 1 };
static panda$core$String $s3664 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3D", 1, 1 };
static panda$core$String $s3706 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1, 1 };
static panda$core$String $s3772 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x6D\x61\x74\x63\x68\x24", 7, 1 };
static panda$core$String $s3774 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5F", 1, 1 };
static panda$core$String $s3777 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4287 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4290 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A", 1, 1 };
static panda$core$String $s4293 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A\x20\x65\x72\x72\x6F\x72\x3A\x20", 9, 1 };
static panda$core$String $s4296 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };

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
    self->currentFile = $tmp7;
    panda$collections$Stack* $tmp9 = (panda$collections$Stack*) malloc(24);
    $tmp9->$class = (panda$core$Class*) &panda$collections$Stack$class;
    $tmp9->refCount.value = 1;
    panda$collections$Stack$init($tmp9);
    self->currentClass = $tmp9;
    panda$collections$Stack* $tmp11 = (panda$collections$Stack*) malloc(24);
    $tmp11->$class = (panda$core$Class*) &panda$collections$Stack$class;
    $tmp11->refCount.value = 1;
    panda$collections$Stack$init($tmp11);
    self->currentMethod = $tmp11;
    panda$collections$Stack* $tmp13 = (panda$collections$Stack*) malloc(24);
    $tmp13->$class = (panda$core$Class*) &panda$collections$Stack$class;
    $tmp13->refCount.value = 1;
    panda$collections$Stack$init($tmp13);
    self->loops = $tmp13;
    self->reusedValueCount = ((panda$core$UInt64) { 0 });
    self->errorCount = ((panda$core$Int64) { 0 });
    self->reportErrors = ((panda$core$Bit) { true });
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
    org$pandalanguage$pandac$SymbolTable* $tmp19 = (org$pandalanguage$pandac$SymbolTable*) malloc(40);
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
}
void org$pandalanguage$pandac$Compiler$addAlias$panda$core$String(org$pandalanguage$pandac$Compiler* self, panda$core$String* p_name) {
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp111;
    org$pandalanguage$pandac$Position $tmp116;
    org$pandalanguage$pandac$Alias* $tmp109 = (org$pandalanguage$pandac$Alias*) malloc(64);
    $tmp109->$class = (panda$core$Class*) &org$pandalanguage$pandac$Alias$class;
    $tmp109->refCount.value = 1;
    panda$core$String$Index$nullable $tmp113 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(p_name, &$s112);
    panda$core$String$Index $tmp114 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(p_name, ((panda$core$String$Index) $tmp113.value));
    panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp111, ((panda$core$String$Index$nullable) { $tmp114, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    panda$core$String* $tmp115 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(p_name, $tmp111);
    org$pandalanguage$pandac$Position$init(&$tmp116);
    org$pandalanguage$pandac$Alias$init$panda$core$String$panda$core$String$org$pandalanguage$pandac$Position($tmp109, $tmp115, p_name, $tmp116);
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->root, ((org$pandalanguage$pandac$Symbol*) $tmp109));
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Compiler* self, panda$core$String* p_name) {
    panda$core$String* alias119;
    org$pandalanguage$pandac$ClassDecl* result126;
    panda$core$String$Index$nullable idx130;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp135;
    org$pandalanguage$pandac$Symbol* rootAlias150;
    panda$core$Int64 $tmp117 = panda$collections$Stack$get_count$R$panda$core$Int64(self->currentClass);
    panda$core$Bit $tmp118 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp117, ((panda$core$Int64) { 0 }));
    if ($tmp118.value) {
    {
        panda$core$Object* $tmp120 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
        ITable* $tmp121 = ((org$pandalanguage$pandac$ClassDecl*) $tmp120)->aliases->$class->itable;
        while ($tmp121->$class != (panda$core$Class*) &panda$collections$MapView$class) {
            $tmp121 = $tmp121->next;
        }
        $fn123 $tmp122 = $tmp121->methods[1];
        panda$core$Object* $tmp124 = $tmp122(((org$pandalanguage$pandac$ClassDecl*) $tmp120)->aliases, ((panda$core$Object*) p_name));
        alias119 = ((panda$core$String*) $tmp124);
        if (((panda$core$Bit) { alias119 != NULL }).value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp125 = org$pandalanguage$pandac$Compiler$getClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, alias119);
            return $tmp125;
        }
        }
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp127 = org$pandalanguage$pandac$Compiler$getClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_name);
    result126 = $tmp127;
    panda$core$Int64 $tmp128 = panda$collections$Stack$get_count$R$panda$core$Int64(self->currentClass);
    panda$core$Bit $tmp129 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp128, ((panda$core$Int64) { 0 }));
    if ($tmp129.value) {
    {
        if (((panda$core$Bit) { result126 == NULL }).value) {
        {
            panda$core$Object* $tmp131 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
            panda$core$String$Index$nullable $tmp133 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$ClassDecl*) $tmp131))->name, &$s132);
            idx130 = $tmp133;
            if (((panda$core$Bit) { idx130.nonnull }).value) {
            {
                panda$core$Object* $tmp134 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
                panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp135, ((panda$core$String$Index$nullable) { .nonnull = false }), idx130, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { true }));
                panda$core$String* $tmp136 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$ClassDecl*) $tmp134))->name, $tmp135);
                panda$core$String* $tmp137 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp136, p_name);
                org$pandalanguage$pandac$ClassDecl* $tmp138 = org$pandalanguage$pandac$Compiler$getClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, $tmp137);
                result126 = $tmp138;
            }
            }
        }
        }
        if (((panda$core$Bit) { result126 == NULL }).value) {
        {
            panda$core$Object* $tmp139 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
            panda$core$String* $tmp141 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$ClassDecl*) $tmp139))->name, &$s140);
            panda$core$String* $tmp142 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp141, p_name);
            org$pandalanguage$pandac$ClassDecl* $tmp143 = org$pandalanguage$pandac$Compiler$getClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, $tmp142);
            result126 = $tmp143;
        }
        }
        bool $tmp144 = ((panda$core$Bit) { result126 == NULL }).value;
        if (!$tmp144) goto $l145;
        panda$core$Object* $tmp146 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
        $tmp144 = ((panda$core$Bit) { ((org$pandalanguage$pandac$ClassDecl*) $tmp146)->owner != NULL }).value;
        $l145:;
        panda$core$Bit $tmp147 = { $tmp144 };
        if ($tmp147.value) {
        {
            panda$core$Object* $tmp148 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
            panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl*) $tmp148)->owner));
            org$pandalanguage$pandac$ClassDecl* $tmp149 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_name);
            result126 = $tmp149;
            panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
        }
        }
    }
    }
    if (((panda$core$Bit) { result126 == NULL }).value) {
    {
        org$pandalanguage$pandac$Symbol* $tmp151 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(self->root, p_name);
        rootAlias150 = $tmp151;
        bool $tmp152 = ((panda$core$Bit) { rootAlias150 != NULL }).value;
        if (!$tmp152) goto $l153;
        panda$core$Bit $tmp154 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(rootAlias150->kind, ((panda$core$Int64) { 200 }));
        $tmp152 = $tmp154.value;
        $l153:;
        panda$core$Bit $tmp155 = { $tmp152 };
        if ($tmp155.value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp156 = org$pandalanguage$pandac$Compiler$getClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Alias*) rootAlias150)->fullName);
            result126 = $tmp156;
        }
        }
    }
    }
    return result126;
}
panda$core$Bit org$pandalanguage$pandac$Compiler$checkGenericParameters$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ClassDecl* p_cl, org$pandalanguage$pandac$Type* p_type) {
    panda$core$Int64 expectedCount157;
    panda$collections$ListView* foundTypes162;
    panda$core$Int64 foundCount164;
    panda$core$String* s170;
    panda$core$Range$LTpanda$core$Int64$GT $tmp189;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
    PANDA_ASSERT(p_type->resolved.value);
    ITable* $tmp158 = ((panda$collections$CollectionView*) p_cl->parameters)->$class->itable;
    while ($tmp158->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp158 = $tmp158->next;
    }
    $fn160 $tmp159 = $tmp158->methods[0];
    panda$core$Int64 $tmp161 = $tmp159(((panda$collections$CollectionView*) p_cl->parameters));
    expectedCount157 = $tmp161;
    panda$collections$ListView* $tmp163 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p_type);
    foundTypes162 = $tmp163;
    ITable* $tmp165 = ((panda$collections$CollectionView*) foundTypes162)->$class->itable;
    while ($tmp165->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp165 = $tmp165->next;
    }
    $fn167 $tmp166 = $tmp165->methods[0];
    panda$core$Int64 $tmp168 = $tmp166(((panda$collections$CollectionView*) foundTypes162));
    foundCount164 = $tmp168;
    panda$core$Bit $tmp169 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(expectedCount157, foundCount164);
    if ($tmp169.value) {
    {
        panda$core$Bit $tmp171 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(expectedCount157, ((panda$core$Int64) { 1 }));
        if ($tmp171.value) {
        {
            s170 = &$s172;
        }
        }
        else {
        {
            s170 = &$s173;
        }
        }
        panda$core$String* $tmp175 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s174, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp177 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp175, &$s176);
        panda$core$String* $tmp178 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp177, ((panda$core$Object*) wrap_panda$core$Int64(expectedCount157)));
        panda$core$String* $tmp180 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp178, &$s179);
        panda$core$String* $tmp181 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp180, s170);
        panda$core$String* $tmp183 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp181, &$s182);
        panda$core$String* $tmp185 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s184, ((panda$core$Object*) wrap_panda$core$Int64(foundCount164)));
        panda$core$String* $tmp187 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp185, &$s186);
        panda$core$String* $tmp188 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp183, $tmp187);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp188);
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp189, ((panda$core$Int64) { 0 }), expectedCount157, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp191 = $tmp189.start.value;
    panda$core$Int64 i190 = { $tmp191 };
    int64_t $tmp193 = $tmp189.end.value;
    int64_t $tmp194 = $tmp189.step.value;
    bool $tmp195 = $tmp189.inclusive.value;
    bool $tmp202 = $tmp194 > 0;
    if ($tmp202) goto $l200; else goto $l201;
    $l200:;
    if ($tmp195) goto $l203; else goto $l204;
    $l203:;
    if ($tmp191 <= $tmp193) goto $l196; else goto $l198;
    $l204:;
    if ($tmp191 < $tmp193) goto $l196; else goto $l198;
    $l201:;
    if ($tmp195) goto $l205; else goto $l206;
    $l205:;
    if ($tmp191 >= $tmp193) goto $l196; else goto $l198;
    $l206:;
    if ($tmp191 > $tmp193) goto $l196; else goto $l198;
    $l196:;
    {
        ITable* $tmp208 = foundTypes162->$class->itable;
        while ($tmp208->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp208 = $tmp208->next;
        }
        $fn210 $tmp209 = $tmp208->methods[0];
        panda$core$Object* $tmp211 = $tmp209(foundTypes162, i190);
        ITable* $tmp212 = ((panda$collections$ListView*) p_cl->parameters)->$class->itable;
        while ($tmp212->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp212 = $tmp212->next;
        }
        $fn214 $tmp213 = $tmp212->methods[0];
        panda$core$Object* $tmp215 = $tmp213(((panda$collections$ListView*) p_cl->parameters), i190);
        org$pandalanguage$pandac$Type* $tmp216 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_type, ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp215)->bound);
        panda$core$Int64$nullable $tmp217 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$Type*) $tmp211), $tmp216);
        if (((panda$core$Bit) { !$tmp217.nonnull }).value) {
        {
            panda$core$String* $tmp219 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s218, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
            panda$core$String* $tmp221 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp219, &$s220);
            ITable* $tmp222 = ((panda$collections$ListView*) p_cl->parameters)->$class->itable;
            while ($tmp222->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp222 = $tmp222->next;
            }
            $fn224 $tmp223 = $tmp222->methods[0];
            panda$core$Object* $tmp225 = $tmp223(((panda$collections$ListView*) p_cl->parameters), i190);
            panda$core$String* $tmp226 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp221, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp225))->name);
            panda$core$String* $tmp228 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp226, &$s227);
            ITable* $tmp230 = ((panda$collections$ListView*) p_cl->parameters)->$class->itable;
            while ($tmp230->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp230 = $tmp230->next;
            }
            $fn232 $tmp231 = $tmp230->methods[0];
            panda$core$Object* $tmp233 = $tmp231(((panda$collections$ListView*) p_cl->parameters), i190);
            panda$core$String* $tmp234 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s229, ((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp233)->bound));
            panda$core$String* $tmp236 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp234, &$s235);
            ITable* $tmp237 = foundTypes162->$class->itable;
            while ($tmp237->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp237 = $tmp237->next;
            }
            $fn239 $tmp238 = $tmp237->methods[0];
            panda$core$Object* $tmp240 = $tmp238(foundTypes162, i190);
            panda$core$String* $tmp241 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp236, ((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp240)));
            panda$core$String* $tmp243 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp241, &$s242);
            panda$core$String* $tmp244 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp228, $tmp243);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp244);
            return ((panda$core$Bit) { false });
        }
        }
    }
    $l199:;
    if ($tmp202) goto $l246; else goto $l247;
    $l246:;
    int64_t $tmp248 = $tmp193 - i190.value;
    if ($tmp195) goto $l249; else goto $l250;
    $l249:;
    if ($tmp248 >= $tmp194) goto $l245; else goto $l198;
    $l250:;
    if ($tmp248 > $tmp194) goto $l245; else goto $l198;
    $l247:;
    int64_t $tmp252 = i190.value - $tmp193;
    if ($tmp195) goto $l253; else goto $l254;
    $l253:;
    if ($tmp252 >= -$tmp194) goto $l245; else goto $l198;
    $l254:;
    if ($tmp252 > -$tmp194) goto $l245; else goto $l198;
    $l245:;
    i190.value += $tmp194;
    goto $l196;
    $l198:;
    return ((panda$core$Bit) { true });
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$Type$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type, panda$core$Bit p_checkParameters) {
    org$pandalanguage$pandac$ClassDecl* resolved256;
    org$pandalanguage$pandac$Type* result258;
    org$pandalanguage$pandac$Symbol* s262;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* gp266;
    panda$collections$Array* subtypes277;
    org$pandalanguage$pandac$Type* sub280;
    panda$collections$Array* subtypes290;
    org$pandalanguage$pandac$Type* base293;
    panda$core$MutableString* name296;
    panda$core$String* separator301;
    panda$core$Range$LTpanda$core$Int64$GT $tmp303;
    org$pandalanguage$pandac$Type* resolved323;
    org$pandalanguage$pandac$Type* result339;
    if (p_type->resolved.value) {
    {
        return p_type;
    }
    }
    switch (p_type->typeKind.value) {
        case 10:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp257 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Symbol*) p_type)->name);
            resolved256 = $tmp257;
            if (((panda$core$Bit) { resolved256 != NULL }).value) {
            {
                org$pandalanguage$pandac$Type* $tmp259 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(resolved256);
                result258 = $tmp259;
                if (p_checkParameters.value) {
                {
                    panda$core$Bit $tmp260 = org$pandalanguage$pandac$Compiler$checkGenericParameters$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, ((org$pandalanguage$pandac$Symbol*) p_type)->position, resolved256, result258);
                    panda$core$Bit $tmp261 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp260);
                    if ($tmp261.value) {
                    {
                        return NULL;
                    }
                    }
                }
                }
                return result258;
            }
            }
            org$pandalanguage$pandac$Symbol* $tmp263 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(self->symbolTable, ((org$pandalanguage$pandac$Symbol*) p_type)->name);
            s262 = $tmp263;
            if (((panda$core$Bit) { s262 != NULL }).value) {
            {
                switch (s262->kind.value) {
                    case 200:
                    {
                        org$pandalanguage$pandac$Type* $tmp264 = (org$pandalanguage$pandac$Type*) malloc(96);
                        $tmp264->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
                        $tmp264->refCount.value = 1;
                        org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp264, ((org$pandalanguage$pandac$Alias*) s262)->fullName, ((panda$core$Int64) { 10 }), ((org$pandalanguage$pandac$Symbol*) p_type)->position, ((panda$core$Bit) { true }));
                        return $tmp264;
                    }
                    break;
                    case 203:
                    {
                        gp266 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) s262);
                        org$pandalanguage$pandac$ClassDecl* $tmp267 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Position$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Symbol*) p_type)->position, gp266->owner);
                        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, $tmp267);
                        org$pandalanguage$pandac$Type* $tmp268 = (org$pandalanguage$pandac$Type*) malloc(96);
                        $tmp268->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
                        $tmp268->refCount.value = 1;
                        org$pandalanguage$pandac$Type$init$org$pandalanguage$pandac$ClassDecl$GenericParameter($tmp268, gp266);
                        return $tmp268;
                    }
                    break;
                    case 207:
                    {
                        return ((org$pandalanguage$pandac$Type*) s262);
                    }
                    break;
                    case 201:
                    {
                        org$pandalanguage$pandac$Type* $tmp270 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) s262));
                        return $tmp270;
                    }
                    break;
                }
            }
            }
            panda$core$String* $tmp272 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s271, ((panda$core$Object*) p_type));
            panda$core$String* $tmp274 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp272, &$s273);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_type)->position, $tmp274);
            return NULL;
        }
        break;
        case 11:
        {
            panda$core$Int64 $tmp275 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_type->subtypes);
            panda$core$Bit $tmp276 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp275, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp276.value);
            panda$collections$Array* $tmp278 = (panda$collections$Array*) malloc(40);
            $tmp278->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp278->refCount.value = 1;
            panda$collections$Array$init($tmp278);
            subtypes277 = $tmp278;
            panda$core$Object* $tmp281 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp282 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, ((org$pandalanguage$pandac$Type*) $tmp281));
            sub280 = $tmp282;
            if (((panda$core$Bit) { sub280 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(subtypes277, ((panda$core$Object*) sub280));
            org$pandalanguage$pandac$Type* $tmp283 = (org$pandalanguage$pandac$Type*) malloc(96);
            $tmp283->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp283->refCount.value = 1;
            panda$core$Object* $tmp285 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(subtypes277, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp287 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp285))->name, &$s286);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp283, $tmp287, ((panda$core$Int64) { 11 }), ((org$pandalanguage$pandac$Symbol*) p_type)->position, ((panda$collections$ListView*) subtypes277), ((panda$core$Bit) { true }));
            return $tmp283;
        }
        break;
        case 21:
        {
            panda$core$Int64 $tmp288 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_type->subtypes);
            panda$core$Bit $tmp289 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp288, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp289.value);
            panda$collections$Array* $tmp291 = (panda$collections$Array*) malloc(40);
            $tmp291->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp291->refCount.value = 1;
            panda$collections$Array$init($tmp291);
            subtypes290 = $tmp291;
            panda$core$Object* $tmp294 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp295 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$Type$Q(self, ((org$pandalanguage$pandac$Type*) $tmp294), ((panda$core$Bit) { false }));
            base293 = $tmp295;
            if (((panda$core$Bit) { base293 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(subtypes290, ((panda$core$Object*) base293));
            panda$core$MutableString* $tmp297 = (panda$core$MutableString*) malloc(40);
            $tmp297->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp297->refCount.value = 1;
            panda$core$Object* $tmp299 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(subtypes290, ((panda$core$Int64) { 0 }));
            panda$core$MutableString$init$panda$core$String($tmp297, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp299))->name);
            name296 = $tmp297;
            panda$core$MutableString$append$panda$core$String(name296, &$s300);
            separator301 = &$s302;
            panda$core$Int64 $tmp304 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_type->subtypes);
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp303, ((panda$core$Int64) { 1 }), $tmp304, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
            int64_t $tmp306 = $tmp303.start.value;
            panda$core$Int64 i305 = { $tmp306 };
            int64_t $tmp308 = $tmp303.end.value;
            int64_t $tmp309 = $tmp303.step.value;
            bool $tmp310 = $tmp303.inclusive.value;
            bool $tmp317 = $tmp309 > 0;
            if ($tmp317) goto $l315; else goto $l316;
            $l315:;
            if ($tmp310) goto $l318; else goto $l319;
            $l318:;
            if ($tmp306 <= $tmp308) goto $l311; else goto $l313;
            $l319:;
            if ($tmp306 < $tmp308) goto $l311; else goto $l313;
            $l316:;
            if ($tmp310) goto $l320; else goto $l321;
            $l320:;
            if ($tmp306 >= $tmp308) goto $l311; else goto $l313;
            $l321:;
            if ($tmp306 > $tmp308) goto $l311; else goto $l313;
            $l311:;
            {
                panda$core$Object* $tmp324 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_type->subtypes, i305);
                org$pandalanguage$pandac$Type* $tmp325 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, ((org$pandalanguage$pandac$Type*) $tmp324));
                resolved323 = $tmp325;
                if (((panda$core$Bit) { resolved323 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(subtypes290, ((panda$core$Object*) resolved323));
                panda$core$MutableString$append$panda$core$String(name296, separator301);
                panda$core$MutableString$append$panda$core$String(name296, ((org$pandalanguage$pandac$Symbol*) resolved323)->name);
                separator301 = &$s326;
            }
            $l314:;
            if ($tmp317) goto $l328; else goto $l329;
            $l328:;
            int64_t $tmp330 = $tmp308 - i305.value;
            if ($tmp310) goto $l331; else goto $l332;
            $l331:;
            if ($tmp330 >= $tmp309) goto $l327; else goto $l313;
            $l332:;
            if ($tmp330 > $tmp309) goto $l327; else goto $l313;
            $l329:;
            int64_t $tmp334 = i305.value - $tmp308;
            if ($tmp310) goto $l335; else goto $l336;
            $l335:;
            if ($tmp334 >= -$tmp309) goto $l327; else goto $l313;
            $l336:;
            if ($tmp334 > -$tmp309) goto $l327; else goto $l313;
            $l327:;
            i305.value += $tmp309;
            goto $l311;
            $l313:;
            panda$core$MutableString$append$panda$core$String(name296, &$s338);
            org$pandalanguage$pandac$Type* $tmp340 = (org$pandalanguage$pandac$Type*) malloc(96);
            $tmp340->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp340->refCount.value = 1;
            panda$core$String* $tmp342 = panda$core$MutableString$convert$R$panda$core$String(name296);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp340, $tmp342, ((panda$core$Int64) { 21 }), ((org$pandalanguage$pandac$Symbol*) p_type)->position, ((panda$collections$ListView*) subtypes290), ((panda$core$Bit) { true }));
            result339 = $tmp340;
            if (p_checkParameters.value) {
            {
                panda$core$Object* $tmp343 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(result339->subtypes, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$ClassDecl* $tmp344 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Type*) $tmp343));
                panda$core$Bit $tmp345 = org$pandalanguage$pandac$Compiler$checkGenericParameters$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, ((org$pandalanguage$pandac$Symbol*) p_type)->position, $tmp344, result339);
                panda$core$Bit $tmp346 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp345);
                if ($tmp346.value) {
                {
                    return NULL;
                }
                }
            }
            }
            return result339;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type) {
    org$pandalanguage$pandac$Type* $tmp347 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$Type$Q(self, p_type, ((panda$core$Bit) { true }));
    return $tmp347;
}
void org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$SymbolTable* old348;
    panda$collections$Iterator* p$Iter349;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* p361;
    org$pandalanguage$pandac$Type* resolved366;
    panda$collections$Iterator* rawS$Iter368;
    org$pandalanguage$pandac$Type* rawS380;
    org$pandalanguage$pandac$Type* s385;
    org$pandalanguage$pandac$ClassDecl* sClass387;
    panda$collections$Iterator* m$Iter434;
    org$pandalanguage$pandac$MethodDecl* m446;
    panda$collections$Iterator* intf$Iter457;
    org$pandalanguage$pandac$Type* intf469;
    panda$collections$Iterator* p$Iter475;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* p487;
    org$pandalanguage$pandac$ClassDecl* cl492;
    if (p_cl->resolved.value) {
    {
        return;
    }
    }
    p_cl->resolved = ((panda$core$Bit) { true });
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentFile, ((panda$core$Object*) p_cl->source));
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_cl));
    old348 = self->symbolTable;
    self->symbolTable = p_cl->symbolTable;
    {
        ITable* $tmp350 = ((panda$collections$Iterable*) p_cl->parameters)->$class->itable;
        while ($tmp350->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp350 = $tmp350->next;
        }
        $fn352 $tmp351 = $tmp350->methods[0];
        panda$collections$Iterator* $tmp353 = $tmp351(((panda$collections$Iterable*) p_cl->parameters));
        p$Iter349 = $tmp353;
        $l354:;
        ITable* $tmp356 = p$Iter349->$class->itable;
        while ($tmp356->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp356 = $tmp356->next;
        }
        $fn358 $tmp357 = $tmp356->methods[0];
        panda$core$Bit $tmp359 = $tmp357(p$Iter349);
        panda$core$Bit $tmp360 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp359);
        if (!$tmp360.value) goto $l355;
        {
            ITable* $tmp362 = p$Iter349->$class->itable;
            while ($tmp362->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp362 = $tmp362->next;
            }
            $fn364 $tmp363 = $tmp362->methods[1];
            panda$core$Object* $tmp365 = $tmp363(p$Iter349);
            p361 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp365);
            org$pandalanguage$pandac$Type* $tmp367 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$Type$Q(self, p361->bound, ((panda$core$Bit) { false }));
            resolved366 = $tmp367;
            if (((panda$core$Bit) { resolved366 != NULL }).value) {
            {
                p361->bound = resolved366;
            }
            }
        }
        goto $l354;
        $l355:;
    }
    {
        ITable* $tmp369 = ((panda$collections$Iterable*) p_cl->declaredSupers)->$class->itable;
        while ($tmp369->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp369 = $tmp369->next;
        }
        $fn371 $tmp370 = $tmp369->methods[0];
        panda$collections$Iterator* $tmp372 = $tmp370(((panda$collections$Iterable*) p_cl->declaredSupers));
        rawS$Iter368 = $tmp372;
        $l373:;
        ITable* $tmp375 = rawS$Iter368->$class->itable;
        while ($tmp375->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp375 = $tmp375->next;
        }
        $fn377 $tmp376 = $tmp375->methods[0];
        panda$core$Bit $tmp378 = $tmp376(rawS$Iter368);
        panda$core$Bit $tmp379 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp378);
        if (!$tmp379.value) goto $l374;
        {
            ITable* $tmp381 = rawS$Iter368->$class->itable;
            while ($tmp381->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp381 = $tmp381->next;
            }
            $fn383 $tmp382 = $tmp381->methods[1];
            panda$core$Object* $tmp384 = $tmp382(rawS$Iter368);
            rawS380 = ((org$pandalanguage$pandac$Type*) $tmp384);
            org$pandalanguage$pandac$Type* $tmp386 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$Type$Q(self, rawS380, ((panda$core$Bit) { false }));
            s385 = $tmp386;
            if (((panda$core$Bit) { s385 != NULL }).value) {
            {
                org$pandalanguage$pandac$ClassDecl* $tmp388 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, s385);
                sClass387 = $tmp388;
                if (((panda$core$Bit) { sClass387 != NULL }).value) {
                {
                    panda$core$Bit $tmp389 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(sClass387->classKind, ((panda$core$Int64) { 5011 }));
                    if ($tmp389.value) {
                    {
                        panda$core$Bit $tmp390 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_cl->classKind, ((panda$core$Int64) { 5012 }));
                        if ($tmp390.value) {
                        {
                            panda$core$String* $tmp392 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s391, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
                            panda$core$String* $tmp394 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp392, &$s393);
                            panda$core$String* $tmp396 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s395, ((org$pandalanguage$pandac$Symbol*) s385)->name);
                            panda$core$String* $tmp398 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp396, &$s397);
                            panda$core$String* $tmp399 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp394, $tmp398);
                            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) s385)->position, $tmp399);
                        }
                        }
                        if (((panda$core$Bit) { p_cl->rawSuper == NULL }).value) {
                        {
                            p_cl->rawSuper = s385;
                            panda$core$Int64 $tmp400 = panda$collections$Array$get_count$R$panda$core$Int64(p_cl->rawInterfaces);
                            panda$core$Bit $tmp401 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp400, ((panda$core$Int64) { 0 }));
                            if ($tmp401.value) {
                            {
                                panda$core$String* $tmp403 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s402, ((panda$core$Object*) s385));
                                panda$core$String* $tmp405 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp403, &$s404);
                                panda$core$String* $tmp406 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp405, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
                                panda$core$String* $tmp408 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp406, &$s407);
                                panda$core$String* $tmp410 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp408, &$s409);
                                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) s385)->position, $tmp410);
                            }
                            }
                        }
                        }
                        else {
                        {
                            panda$core$String* $tmp412 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s411, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
                            panda$core$String* $tmp414 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp412, &$s413);
                            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) s385)->position, $tmp414);
                        }
                        }
                    }
                    }
                    else {
                    {
                        panda$core$Bit $tmp415 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(sClass387->classKind, ((panda$core$Int64) { 5012 }));
                        PANDA_ASSERT($tmp415.value);
                        panda$collections$Array$add$panda$collections$Array$T(p_cl->rawInterfaces, ((panda$core$Object*) s385));
                    }
                    }
                }
                }
            }
            }
        }
        goto $l373;
        $l374:;
    }
    bool $tmp416 = ((panda$core$Bit) { p_cl->rawSuper == NULL }).value;
    if (!$tmp416) goto $l417;
    panda$core$Bit $tmp419 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_cl)->name, &$s418);
    $tmp416 = $tmp419.value;
    $l417:;
    panda$core$Bit $tmp420 = { $tmp416 };
    if ($tmp420.value) {
    {
        org$pandalanguage$pandac$Type* $tmp421 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
        p_cl->rawSuper = $tmp421;
    }
    }
    bool $tmp423 = ((panda$core$Bit) { p_cl->rawSuper != NULL }).value;
    if (!$tmp423) goto $l424;
    panda$core$Bit $tmp425 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_cl->annotations);
    panda$core$Bit $tmp426 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp425);
    $tmp423 = $tmp426.value;
    $l424:;
    panda$core$Bit $tmp427 = { $tmp423 };
    bool $tmp422 = $tmp427.value;
    if (!$tmp422) goto $l428;
    panda$core$Bit $tmp430 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_cl->rawSuper)->name, &$s429);
    $tmp422 = $tmp430.value;
    $l428:;
    panda$core$Bit $tmp431 = { $tmp422 };
    if ($tmp431.value) {
    {
        panda$core$Int64 $tmp432 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 8 }));
        panda$core$Int64 $tmp433 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(p_cl->annotations->flags, $tmp432);
        p_cl->annotations->flags = $tmp433;
        {
            ITable* $tmp435 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
            while ($tmp435->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp435 = $tmp435->next;
            }
            $fn437 $tmp436 = $tmp435->methods[0];
            panda$collections$Iterator* $tmp438 = $tmp436(((panda$collections$Iterable*) p_cl->methods));
            m$Iter434 = $tmp438;
            $l439:;
            ITable* $tmp441 = m$Iter434->$class->itable;
            while ($tmp441->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp441 = $tmp441->next;
            }
            $fn443 $tmp442 = $tmp441->methods[0];
            panda$core$Bit $tmp444 = $tmp442(m$Iter434);
            panda$core$Bit $tmp445 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp444);
            if (!$tmp445.value) goto $l440;
            {
                ITable* $tmp447 = m$Iter434->$class->itable;
                while ($tmp447->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp447 = $tmp447->next;
                }
                $fn449 $tmp448 = $tmp447->methods[1];
                panda$core$Object* $tmp450 = $tmp448(m$Iter434);
                m446 = ((org$pandalanguage$pandac$MethodDecl*) $tmp450);
                panda$core$Int64 $tmp451 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 8 }));
                panda$core$Int64 $tmp452 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(m446->annotations->flags, $tmp451);
                m446->annotations->flags = $tmp452;
                panda$core$Bit $tmp453 = org$pandalanguage$pandac$Scanner$shouldInline$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ASTNode$Q$R$panda$core$Bit(self->scanner, m446->annotations, m446->body);
                if ($tmp453.value) {
                {
                    panda$core$Int64 $tmp454 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 10 }));
                    panda$core$Int64 $tmp455 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(m446->annotations->flags, $tmp454);
                    m446->annotations->flags = $tmp455;
                }
                }
            }
            goto $l439;
            $l440:;
        }
    }
    }
    if (((panda$core$Bit) { p_cl->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp456 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_cl->rawSuper);
        org$pandalanguage$pandac$Compiler$checkGenericParameters$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->position, $tmp456, p_cl->rawSuper);
    }
    }
    {
        ITable* $tmp458 = ((panda$collections$Iterable*) p_cl->rawInterfaces)->$class->itable;
        while ($tmp458->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp458 = $tmp458->next;
        }
        $fn460 $tmp459 = $tmp458->methods[0];
        panda$collections$Iterator* $tmp461 = $tmp459(((panda$collections$Iterable*) p_cl->rawInterfaces));
        intf$Iter457 = $tmp461;
        $l462:;
        ITable* $tmp464 = intf$Iter457->$class->itable;
        while ($tmp464->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp464 = $tmp464->next;
        }
        $fn466 $tmp465 = $tmp464->methods[0];
        panda$core$Bit $tmp467 = $tmp465(intf$Iter457);
        panda$core$Bit $tmp468 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp467);
        if (!$tmp468.value) goto $l463;
        {
            ITable* $tmp470 = intf$Iter457->$class->itable;
            while ($tmp470->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp470 = $tmp470->next;
            }
            $fn472 $tmp471 = $tmp470->methods[1];
            panda$core$Object* $tmp473 = $tmp471(intf$Iter457);
            intf469 = ((org$pandalanguage$pandac$Type*) $tmp473);
            org$pandalanguage$pandac$ClassDecl* $tmp474 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, intf469);
            org$pandalanguage$pandac$Compiler$checkGenericParameters$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->position, $tmp474, intf469);
        }
        goto $l462;
        $l463:;
    }
    {
        ITable* $tmp476 = ((panda$collections$Iterable*) p_cl->parameters)->$class->itable;
        while ($tmp476->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp476 = $tmp476->next;
        }
        $fn478 $tmp477 = $tmp476->methods[0];
        panda$collections$Iterator* $tmp479 = $tmp477(((panda$collections$Iterable*) p_cl->parameters));
        p$Iter475 = $tmp479;
        $l480:;
        ITable* $tmp482 = p$Iter475->$class->itable;
        while ($tmp482->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp482 = $tmp482->next;
        }
        $fn484 $tmp483 = $tmp482->methods[0];
        panda$core$Bit $tmp485 = $tmp483(p$Iter475);
        panda$core$Bit $tmp486 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp485);
        if (!$tmp486.value) goto $l481;
        {
            ITable* $tmp488 = p$Iter475->$class->itable;
            while ($tmp488->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp488 = $tmp488->next;
            }
            $fn490 $tmp489 = $tmp488->methods[1];
            panda$core$Object* $tmp491 = $tmp489(p$Iter475);
            p487 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp491);
            org$pandalanguage$pandac$ClassDecl* $tmp493 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p487->bound);
            cl492 = $tmp493;
            if (((panda$core$Bit) { cl492 != NULL }).value) {
            {
                org$pandalanguage$pandac$Compiler$checkGenericParameters$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, ((org$pandalanguage$pandac$Symbol*) cl492)->position, cl492, p487->bound);
            }
            }
        }
        goto $l480;
        $l481:;
    }
    self->symbolTable = old348;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentFile);
}
void org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$SymbolTable* old494;
    panda$collections$Iterator* p$Iter495;
    org$pandalanguage$pandac$MethodDecl$Parameter* p507;
    org$pandalanguage$pandac$MethodDecl* overridden514;
    if (p_m->resolved.value) {
    {
        return;
    }
    }
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_m->owner);
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentFile, ((panda$core$Object*) p_m->owner->source));
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_m->owner));
    old494 = self->symbolTable;
    self->symbolTable = p_m->owner->symbolTable;
    {
        ITable* $tmp496 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp496->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp496 = $tmp496->next;
        }
        $fn498 $tmp497 = $tmp496->methods[0];
        panda$collections$Iterator* $tmp499 = $tmp497(((panda$collections$Iterable*) p_m->parameters));
        p$Iter495 = $tmp499;
        $l500:;
        ITable* $tmp502 = p$Iter495->$class->itable;
        while ($tmp502->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp502 = $tmp502->next;
        }
        $fn504 $tmp503 = $tmp502->methods[0];
        panda$core$Bit $tmp505 = $tmp503(p$Iter495);
        panda$core$Bit $tmp506 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp505);
        if (!$tmp506.value) goto $l501;
        {
            ITable* $tmp508 = p$Iter495->$class->itable;
            while ($tmp508->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp508 = $tmp508->next;
            }
            $fn510 $tmp509 = $tmp508->methods[1];
            panda$core$Object* $tmp511 = $tmp509(p$Iter495);
            p507 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp511);
            org$pandalanguage$pandac$Type* $tmp512 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, p507->type);
            p507->type = $tmp512;
        }
        goto $l500;
        $l501:;
    }
    org$pandalanguage$pandac$Type* $tmp513 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, p_m->returnType);
    p_m->returnType = $tmp513;
    p_m->resolved = ((panda$core$Bit) { true });
    org$pandalanguage$pandac$MethodDecl* $tmp515 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(self, p_m);
    overridden514 = $tmp515;
    if (((panda$core$Bit) { overridden514 != NULL }).value) {
    {
        panda$core$Bit $tmp516 = org$pandalanguage$pandac$Annotations$isOverride$R$panda$core$Bit(p_m->annotations);
        panda$core$Bit $tmp517 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp516);
        if ($tmp517.value) {
        {
            panda$core$String* $tmp519 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(p_m);
            panda$core$String* $tmp520 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s518, $tmp519);
            panda$core$String* $tmp522 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp520, &$s521);
            panda$core$String* $tmp523 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(overridden514);
            panda$core$String* $tmp524 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp522, $tmp523);
            panda$core$String* $tmp526 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp524, &$s525);
            panda$core$String* $tmp528 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp526, &$s527);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m)->position, $tmp528);
        }
        }
        panda$core$Bit $tmp530 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 57 }));
        bool $tmp529 = $tmp530.value;
        if (!$tmp529) goto $l531;
        panda$core$Bit $tmp532 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(overridden514->methodKind, ((panda$core$Int64) { 58 }));
        $tmp529 = $tmp532.value;
        $l531:;
        panda$core$Bit $tmp533 = { $tmp529 };
        if ($tmp533.value) {
        {
            panda$core$String* $tmp535 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(p_m);
            panda$core$String* $tmp536 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s534, $tmp535);
            panda$core$String* $tmp538 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp536, &$s537);
            panda$core$String* $tmp539 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(overridden514);
            panda$core$String* $tmp540 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp538, $tmp539);
            panda$core$String* $tmp542 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp540, &$s541);
            panda$core$String* $tmp544 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp542, &$s543);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m)->position, $tmp544);
        }
        }
    }
    }
    else {
    panda$core$Bit $tmp545 = org$pandalanguage$pandac$Annotations$isOverride$R$panda$core$Bit(p_m->annotations);
    if ($tmp545.value) {
    {
        panda$core$String* $tmp547 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(p_m);
        panda$core$String* $tmp548 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s546, $tmp547);
        panda$core$String* $tmp550 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp548, &$s549);
        panda$core$String* $tmp552 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp550, &$s551);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m)->position, $tmp552);
    }
    }
    }
    self->symbolTable = old494;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentFile);
}
void org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$FieldDecl* p_f) {
    org$pandalanguage$pandac$SymbolTable* old553;
    org$pandalanguage$pandac$Type* resolved556;
    if (p_f->resolved.value) {
    {
        return;
    }
    }
    p_f->resolved = ((panda$core$Bit) { true });
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentFile, ((panda$core$Object*) p_f->owner->source));
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_f->owner));
    old553 = self->symbolTable;
    self->symbolTable = p_f->owner->symbolTable;
    org$pandalanguage$pandac$Type* $tmp554 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp555 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_f->type, $tmp554);
    if ($tmp555.value) {
    {
        org$pandalanguage$pandac$Type* $tmp557 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, p_f->type);
        resolved556 = $tmp557;
        if (((panda$core$Bit) { resolved556 != NULL }).value) {
        {
            p_f->type = resolved556;
            if (((panda$core$Bit) { p_f->rawValue != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp558 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->rawValue);
                org$pandalanguage$pandac$IRNode* $tmp559 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp558, p_f->type);
                p_f->value = $tmp559;
            }
            }
        }
        }
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentFile);
        self->symbolTable = old553;
        return;
    }
    }
    if (((panda$core$Bit) { p_f->rawValue == NULL }).value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_f)->position, &$s560);
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentFile);
        self->symbolTable = old553;
        return;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp561 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->rawValue);
    p_f->value = $tmp561;
    if (((panda$core$Bit) { p_f->value == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentFile);
        self->symbolTable = old553;
        return;
    }
    }
    org$pandalanguage$pandac$Type* $tmp562 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_f->value);
    p_f->type = $tmp562;
    org$pandalanguage$pandac$IRNode* $tmp563 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->value, p_f->type);
    p_f->value = $tmp563;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentFile);
    self->symbolTable = old553;
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
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_expr->position, &$s564);
            return NULL;
        }
        break;
        case 1039:
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_expr->position, &$s565);
            panda$core$Object* $tmp566 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$io$Console$printLine$panda$core$Object(((panda$core$Object*) ((panda$collections$ListView*) ((org$pandalanguage$pandac$IRNode*) $tmp566)->payload)));
            return NULL;
        }
        break;
        case 1024:
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_expr->position, &$s567);
            return NULL;
        }
        break;
        default:
        {
            org$pandalanguage$pandac$Type* $tmp568 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
            org$pandalanguage$pandac$IRNode* $tmp569 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, $tmp568);
            return $tmp569;
        }
    }
}
panda$core$Bit org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
    bool $tmp570 = ((panda$core$Bit) { p_cl->rawSuper != NULL }).value;
    if (!$tmp570) goto $l571;
    org$pandalanguage$pandac$Type* $tmp572 = org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type();
    panda$core$Int64$nullable $tmp573 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_cl->rawSuper, $tmp572);
    $tmp570 = ((panda$core$Bit) { $tmp573.nonnull }).value;
    $l571:;
    panda$core$Bit $tmp574 = { $tmp570 };
    return $tmp574;
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Array* result575;
    org$pandalanguage$pandac$ClassDecl* s583;
    panda$collections$Iterator* f$Iter586;
    org$pandalanguage$pandac$FieldDecl* f598;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
    panda$collections$Array* $tmp576 = (panda$collections$Array*) malloc(40);
    $tmp576->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp576->refCount.value = 1;
    panda$collections$Array$init($tmp576);
    result575 = $tmp576;
    panda$core$Bit $tmp579 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, p_cl);
    panda$core$Bit $tmp580 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp579);
    bool $tmp578 = $tmp580.value;
    if (!$tmp578) goto $l581;
    $tmp578 = ((panda$core$Bit) { p_cl->rawSuper != NULL }).value;
    $l581:;
    panda$core$Bit $tmp582 = { $tmp578 };
    if ($tmp582.value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp584 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_cl->rawSuper);
        s583 = $tmp584;
        if (((panda$core$Bit) { s583 != NULL }).value) {
        {
            panda$collections$ListView* $tmp585 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self, s583);
            panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(result575, ((panda$collections$CollectionView*) $tmp585));
        }
        }
    }
    }
    {
        ITable* $tmp587 = ((panda$collections$Iterable*) p_cl->fields)->$class->itable;
        while ($tmp587->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp587 = $tmp587->next;
        }
        $fn589 $tmp588 = $tmp587->methods[0];
        panda$collections$Iterator* $tmp590 = $tmp588(((panda$collections$Iterable*) p_cl->fields));
        f$Iter586 = $tmp590;
        $l591:;
        ITable* $tmp593 = f$Iter586->$class->itable;
        while ($tmp593->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp593 = $tmp593->next;
        }
        $fn595 $tmp594 = $tmp593->methods[0];
        panda$core$Bit $tmp596 = $tmp594(f$Iter586);
        panda$core$Bit $tmp597 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp596);
        if (!$tmp597.value) goto $l592;
        {
            ITable* $tmp599 = f$Iter586->$class->itable;
            while ($tmp599->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp599 = $tmp599->next;
            }
            $fn601 $tmp600 = $tmp599->methods[1];
            panda$core$Object* $tmp602 = $tmp600(f$Iter586);
            f598 = ((org$pandalanguage$pandac$FieldDecl*) $tmp602);
            panda$core$Bit $tmp603 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(f598->annotations);
            panda$core$Bit $tmp604 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp603);
            if ($tmp604.value) {
            {
                panda$collections$Array$add$panda$collections$Array$T(result575, ((panda$core$Object*) f598));
            }
            }
        }
        goto $l591;
        $l592:;
    }
    return ((panda$collections$ListView*) result575);
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Compiler$getClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Compiler* self, panda$core$String* p_fullName) {
    org$pandalanguage$pandac$ClassDecl* result605;
    panda$core$String* suffix607;
    panda$core$Bit found613;
    panda$collections$Iterator* dir$Iter614;
    panda$io$File* dir626;
    panda$io$File* f631;
    panda$core$Bit $tmp633;
    panda$core$String$Index$nullable index635;
    org$pandalanguage$pandac$ClassDecl* parent638;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp639;
    panda$core$Object* $tmp606 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) p_fullName));
    result605 = ((org$pandalanguage$pandac$ClassDecl*) $tmp606);
    if (((panda$core$Bit) { result605 == NULL }).value) {
    {
        panda$core$String* $tmp610 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(p_fullName, &$s608, &$s609);
        panda$core$String* $tmp612 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp610, &$s611);
        suffix607 = $tmp612;
        found613 = ((panda$core$Bit) { false });
        {
            ITable* $tmp615 = ((panda$collections$Iterable*) self->settings->importDirs)->$class->itable;
            while ($tmp615->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp615 = $tmp615->next;
            }
            $fn617 $tmp616 = $tmp615->methods[0];
            panda$collections$Iterator* $tmp618 = $tmp616(((panda$collections$Iterable*) self->settings->importDirs));
            dir$Iter614 = $tmp618;
            $l619:;
            ITable* $tmp621 = dir$Iter614->$class->itable;
            while ($tmp621->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp621 = $tmp621->next;
            }
            $fn623 $tmp622 = $tmp621->methods[0];
            panda$core$Bit $tmp624 = $tmp622(dir$Iter614);
            panda$core$Bit $tmp625 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp624);
            if (!$tmp625.value) goto $l620;
            {
                ITable* $tmp627 = dir$Iter614->$class->itable;
                while ($tmp627->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp627 = $tmp627->next;
                }
                $fn629 $tmp628 = $tmp627->methods[1];
                panda$core$Object* $tmp630 = $tmp628(dir$Iter614);
                dir626 = ((panda$io$File*) $tmp630);
                panda$io$File* $tmp632 = panda$io$File$resolve$panda$core$String$R$panda$io$File(dir626, suffix607);
                f631 = $tmp632;
                panda$io$File$exists$R$panda$core$Bit(&$tmp633, f631);
                if ($tmp633.value) {
                {
                    found613 = ((panda$core$Bit) { true });
                    org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(self, f631);
                    panda$core$Object* $tmp634 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) p_fullName));
                    result605 = ((org$pandalanguage$pandac$ClassDecl*) $tmp634);
                }
                }
            }
            goto $l619;
            $l620:;
        }
    }
    }
    if (((panda$core$Bit) { result605 == NULL }).value) {
    {
        panda$core$String$Index$nullable $tmp637 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(p_fullName, &$s636);
        index635 = $tmp637;
        if (((panda$core$Bit) { index635.nonnull }).value) {
        {
            panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp639, ((panda$core$String$Index$nullable) { .nonnull = false }), index635, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
            panda$core$String* $tmp640 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(p_fullName, $tmp639);
            org$pandalanguage$pandac$ClassDecl* $tmp641 = org$pandalanguage$pandac$Compiler$getClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, $tmp640);
            parent638 = $tmp641;
            if (((panda$core$Bit) { parent638 != NULL }).value) {
            {
                panda$core$Object* $tmp642 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) p_fullName));
                result605 = ((org$pandalanguage$pandac$ClassDecl*) $tmp642);
            }
            }
        }
        }
    }
    }
    return result605;
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Position$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, panda$core$String* p_fullName) {
    org$pandalanguage$pandac$ClassDecl* result643;
    panda$core$String* suffix645;
    panda$core$Bit found651;
    panda$collections$Iterator* dir$Iter652;
    panda$io$File* dir664;
    panda$io$File* f669;
    panda$core$Bit $tmp671;
    panda$core$Int64 oldErrorCount672;
    org$pandalanguage$pandac$Position $tmp678;
    panda$core$Object* $tmp644 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) p_fullName));
    result643 = ((org$pandalanguage$pandac$ClassDecl*) $tmp644);
    if (((panda$core$Bit) { result643 == NULL }).value) {
    {
        panda$core$String* $tmp648 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(p_fullName, &$s646, &$s647);
        panda$core$String* $tmp650 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp648, &$s649);
        suffix645 = $tmp650;
        found651 = ((panda$core$Bit) { false });
        {
            ITable* $tmp653 = ((panda$collections$Iterable*) self->settings->importDirs)->$class->itable;
            while ($tmp653->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp653 = $tmp653->next;
            }
            $fn655 $tmp654 = $tmp653->methods[0];
            panda$collections$Iterator* $tmp656 = $tmp654(((panda$collections$Iterable*) self->settings->importDirs));
            dir$Iter652 = $tmp656;
            $l657:;
            ITable* $tmp659 = dir$Iter652->$class->itable;
            while ($tmp659->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp659 = $tmp659->next;
            }
            $fn661 $tmp660 = $tmp659->methods[0];
            panda$core$Bit $tmp662 = $tmp660(dir$Iter652);
            panda$core$Bit $tmp663 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp662);
            if (!$tmp663.value) goto $l658;
            {
                ITable* $tmp665 = dir$Iter652->$class->itable;
                while ($tmp665->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp665 = $tmp665->next;
                }
                $fn667 $tmp666 = $tmp665->methods[1];
                panda$core$Object* $tmp668 = $tmp666(dir$Iter652);
                dir664 = ((panda$io$File*) $tmp668);
                panda$io$File* $tmp670 = panda$io$File$resolve$panda$core$String$R$panda$io$File(dir664, suffix645);
                f669 = $tmp670;
                panda$io$File$exists$R$panda$core$Bit(&$tmp671, f669);
                if ($tmp671.value) {
                {
                    found651 = ((panda$core$Bit) { true });
                    oldErrorCount672 = self->errorCount;
                    org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(self, f669);
                    panda$core$Object* $tmp673 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) p_fullName));
                    result643 = ((org$pandalanguage$pandac$ClassDecl*) $tmp673);
                    bool $tmp674 = ((panda$core$Bit) { result643 == NULL }).value;
                    if (!$tmp674) goto $l675;
                    panda$core$Bit $tmp676 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->errorCount, oldErrorCount672);
                    $tmp674 = $tmp676.value;
                    $l675:;
                    panda$core$Bit $tmp677 = { $tmp674 };
                    if ($tmp677.value) {
                    {
                        org$pandalanguage$pandac$Position$init$panda$core$Int64$panda$core$Int64(&$tmp678, ((panda$core$Int64) { 1 }), ((panda$core$Int64) { 1 }));
                        panda$core$String* $tmp680 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s679, ((panda$core$Object*) f669));
                        panda$core$String* $tmp682 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp680, &$s681);
                        panda$core$String* $tmp683 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp682, p_fullName);
                        panda$core$String* $tmp685 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp683, &$s684);
                        org$pandalanguage$pandac$Compiler$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String(self, f669, $tmp678, $tmp685);
                    }
                    }
                }
                }
            }
            goto $l657;
            $l658:;
        }
        panda$core$Bit $tmp686 = panda$core$Bit$$NOT$R$panda$core$Bit(found651);
        if ($tmp686.value) {
        {
            panda$core$String* $tmp688 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s687, suffix645);
            panda$core$String* $tmp690 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp688, &$s689);
            panda$core$String* $tmp691 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp690, ((panda$core$Object*) self->settings->importDirs));
            panda$core$String* $tmp693 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp691, &$s692);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp693);
        }
        }
    }
    }
    return result643;
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Compiler$specialize$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl, org$pandalanguage$pandac$Type* p_rawType) {
    org$pandalanguage$pandac$Type* type697;
    org$pandalanguage$pandac$ClassDecl* result704;
    org$pandalanguage$pandac$Annotations* annotations706;
    panda$collections$Array* supertypes712;
    panda$collections$Iterator* intf$Iter716;
    org$pandalanguage$pandac$Type* intf728;
    panda$collections$HashMap* aliases734;
    panda$core$Range$LTpanda$core$Int64$GT $tmp737;
    panda$collections$Iterator* m$Iter782;
    org$pandalanguage$pandac$MethodDecl* m794;
    panda$collections$Array* parameters799;
    panda$collections$Iterator* p$Iter802;
    org$pandalanguage$pandac$MethodDecl$Parameter* p814;
    org$pandalanguage$pandac$MethodDecl* clone822;
    panda$collections$Iterator* f$Iter825;
    org$pandalanguage$pandac$FieldDecl* f837;
    org$pandalanguage$pandac$FieldDecl* clone842;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
    panda$core$Bit $tmp695 = panda$core$String$contains$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_rawType)->name, &$s694);
    panda$core$Bit $tmp696 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp695);
    PANDA_ASSERT($tmp696.value);
    org$pandalanguage$pandac$Type* $tmp698 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, p_rawType);
    type697 = $tmp698;
    panda$core$Bit $tmp699 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(type697->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp699.value) {
    {
        panda$core$Object* $tmp700 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(type697->subtypes, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$ClassDecl* $tmp701 = org$pandalanguage$pandac$Compiler$specialize$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl(self, p_cl, ((org$pandalanguage$pandac$Type*) $tmp700));
        return $tmp701;
    }
    }
    panda$core$Bit $tmp702 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(type697->typeKind, ((panda$core$Int64) { 10 }));
    if ($tmp702.value) {
    {
        return p_cl;
    }
    }
    panda$core$Bit $tmp703 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(type697->typeKind, ((panda$core$Int64) { 21 }));
    PANDA_ASSERT($tmp703.value);
    panda$core$Object* $tmp705 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) type697)->name));
    result704 = ((org$pandalanguage$pandac$ClassDecl*) $tmp705);
    if (((panda$core$Bit) { result704 == NULL }).value) {
    {
        panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_cl));
        org$pandalanguage$pandac$Annotations* $tmp707 = (org$pandalanguage$pandac$Annotations*) malloc(24);
        $tmp707->$class = (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class;
        $tmp707->refCount.value = 1;
        panda$core$Int64 $tmp709 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 11 }));
        panda$core$Int64 $tmp710 = panda$core$Int64$$BNOT$R$panda$core$Int64($tmp709);
        panda$core$Int64 $tmp711 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(p_cl->annotations->flags, $tmp710);
        org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp707, $tmp711);
        annotations706 = $tmp707;
        panda$collections$Array* $tmp713 = (panda$collections$Array*) malloc(40);
        $tmp713->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp713->refCount.value = 1;
        panda$collections$Array$init($tmp713);
        supertypes712 = $tmp713;
        org$pandalanguage$pandac$Type* $tmp715 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, type697, p_cl->rawSuper);
        panda$collections$Array$add$panda$collections$Array$T(supertypes712, ((panda$core$Object*) $tmp715));
        {
            ITable* $tmp717 = ((panda$collections$Iterable*) p_cl->rawInterfaces)->$class->itable;
            while ($tmp717->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp717 = $tmp717->next;
            }
            $fn719 $tmp718 = $tmp717->methods[0];
            panda$collections$Iterator* $tmp720 = $tmp718(((panda$collections$Iterable*) p_cl->rawInterfaces));
            intf$Iter716 = $tmp720;
            $l721:;
            ITable* $tmp723 = intf$Iter716->$class->itable;
            while ($tmp723->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp723 = $tmp723->next;
            }
            $fn725 $tmp724 = $tmp723->methods[0];
            panda$core$Bit $tmp726 = $tmp724(intf$Iter716);
            panda$core$Bit $tmp727 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp726);
            if (!$tmp727.value) goto $l722;
            {
                ITable* $tmp729 = intf$Iter716->$class->itable;
                while ($tmp729->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp729 = $tmp729->next;
                }
                $fn731 $tmp730 = $tmp729->methods[1];
                panda$core$Object* $tmp732 = $tmp730(intf$Iter716);
                intf728 = ((org$pandalanguage$pandac$Type*) $tmp732);
                org$pandalanguage$pandac$Type* $tmp733 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, type697, intf728);
                panda$collections$Array$add$panda$collections$Array$T(supertypes712, ((panda$core$Object*) $tmp733));
            }
            goto $l721;
            $l722:;
        }
        panda$collections$HashMap* $tmp735 = (panda$collections$HashMap*) malloc(56);
        $tmp735->$class = (panda$core$Class*) &panda$collections$HashMap$class;
        $tmp735->refCount.value = 1;
        panda$collections$HashMap$init$panda$collections$MapView$LTpanda$collections$HashMap$K$Cpanda$collections$HashMap$V$GT($tmp735, p_cl->aliases);
        aliases734 = $tmp735;
        ITable* $tmp738 = ((panda$collections$CollectionView*) p_cl->parameters)->$class->itable;
        while ($tmp738->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp738 = $tmp738->next;
        }
        $fn740 $tmp739 = $tmp738->methods[0];
        panda$core$Int64 $tmp741 = $tmp739(((panda$collections$CollectionView*) p_cl->parameters));
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp737, ((panda$core$Int64) { 0 }), $tmp741, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
        int64_t $tmp743 = $tmp737.start.value;
        panda$core$Int64 i742 = { $tmp743 };
        int64_t $tmp745 = $tmp737.end.value;
        int64_t $tmp746 = $tmp737.step.value;
        bool $tmp747 = $tmp737.inclusive.value;
        bool $tmp754 = $tmp746 > 0;
        if ($tmp754) goto $l752; else goto $l753;
        $l752:;
        if ($tmp747) goto $l755; else goto $l756;
        $l755:;
        if ($tmp743 <= $tmp745) goto $l748; else goto $l750;
        $l756:;
        if ($tmp743 < $tmp745) goto $l748; else goto $l750;
        $l753:;
        if ($tmp747) goto $l757; else goto $l758;
        $l757:;
        if ($tmp743 >= $tmp745) goto $l748; else goto $l750;
        $l758:;
        if ($tmp743 > $tmp745) goto $l748; else goto $l750;
        $l748:;
        {
            ITable* $tmp760 = ((panda$collections$ListView*) p_cl->parameters)->$class->itable;
            while ($tmp760->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp760 = $tmp760->next;
            }
            $fn762 $tmp761 = $tmp760->methods[0];
            panda$core$Object* $tmp763 = $tmp761(((panda$collections$ListView*) p_cl->parameters), i742);
            panda$core$Int64 $tmp764 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i742, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp765 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(type697->subtypes, $tmp764);
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(aliases734, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp763))->name), ((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp765))->name));
        }
        $l751:;
        if ($tmp754) goto $l767; else goto $l768;
        $l767:;
        int64_t $tmp769 = $tmp745 - i742.value;
        if ($tmp747) goto $l770; else goto $l771;
        $l770:;
        if ($tmp769 >= $tmp746) goto $l766; else goto $l750;
        $l771:;
        if ($tmp769 > $tmp746) goto $l766; else goto $l750;
        $l768:;
        int64_t $tmp773 = i742.value - $tmp745;
        if ($tmp747) goto $l774; else goto $l775;
        $l774:;
        if ($tmp773 >= -$tmp746) goto $l766; else goto $l750;
        $l775:;
        if ($tmp773 > -$tmp746) goto $l766; else goto $l750;
        $l766:;
        i742.value += $tmp746;
        goto $l748;
        $l750:;
        org$pandalanguage$pandac$ClassDecl* $tmp777 = (org$pandalanguage$pandac$ClassDecl*) malloc(185);
        $tmp777->$class = (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$class;
        $tmp777->refCount.value = 1;
        panda$collections$Array* $tmp779 = (panda$collections$Array*) malloc(40);
        $tmp779->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp779->refCount.value = 1;
        panda$collections$Array$init($tmp779);
        panda$core$Object* $tmp781 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_cl->symbolTable->parents, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$ClassDecl$init$panda$io$File$org$pandalanguage$pandac$Position$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable($tmp777, p_cl->source, ((org$pandalanguage$pandac$Symbol*) p_cl)->position, ((panda$collections$MapView*) aliases734), p_cl->doccomment, annotations706, p_cl->classKind, ((org$pandalanguage$pandac$Symbol*) type697)->name, ((panda$collections$ListView*) supertypes712), $tmp779, ((org$pandalanguage$pandac$SymbolTable*) $tmp781));
        result704 = $tmp777;
        result704->external = ((panda$core$Bit) { false });
        {
            ITable* $tmp783 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
            while ($tmp783->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp783 = $tmp783->next;
            }
            $fn785 $tmp784 = $tmp783->methods[0];
            panda$collections$Iterator* $tmp786 = $tmp784(((panda$collections$Iterable*) p_cl->methods));
            m$Iter782 = $tmp786;
            $l787:;
            ITable* $tmp789 = m$Iter782->$class->itable;
            while ($tmp789->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp789 = $tmp789->next;
            }
            $fn791 $tmp790 = $tmp789->methods[0];
            panda$core$Bit $tmp792 = $tmp790(m$Iter782);
            panda$core$Bit $tmp793 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp792);
            if (!$tmp793.value) goto $l788;
            {
                ITable* $tmp795 = m$Iter782->$class->itable;
                while ($tmp795->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp795 = $tmp795->next;
                }
                $fn797 $tmp796 = $tmp795->methods[1];
                panda$core$Object* $tmp798 = $tmp796(m$Iter782);
                m794 = ((org$pandalanguage$pandac$MethodDecl*) $tmp798);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m794);
                panda$collections$Array* $tmp800 = (panda$collections$Array*) malloc(40);
                $tmp800->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp800->refCount.value = 1;
                panda$collections$Array$init($tmp800);
                parameters799 = $tmp800;
                {
                    ITable* $tmp803 = ((panda$collections$Iterable*) m794->parameters)->$class->itable;
                    while ($tmp803->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp803 = $tmp803->next;
                    }
                    $fn805 $tmp804 = $tmp803->methods[0];
                    panda$collections$Iterator* $tmp806 = $tmp804(((panda$collections$Iterable*) m794->parameters));
                    p$Iter802 = $tmp806;
                    $l807:;
                    ITable* $tmp809 = p$Iter802->$class->itable;
                    while ($tmp809->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp809 = $tmp809->next;
                    }
                    $fn811 $tmp810 = $tmp809->methods[0];
                    panda$core$Bit $tmp812 = $tmp810(p$Iter802);
                    panda$core$Bit $tmp813 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp812);
                    if (!$tmp813.value) goto $l808;
                    {
                        ITable* $tmp815 = p$Iter802->$class->itable;
                        while ($tmp815->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp815 = $tmp815->next;
                        }
                        $fn817 $tmp816 = $tmp815->methods[1];
                        panda$core$Object* $tmp818 = $tmp816(p$Iter802);
                        p814 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp818);
                        org$pandalanguage$pandac$MethodDecl$Parameter* $tmp819 = (org$pandalanguage$pandac$MethodDecl$Parameter*) malloc(32);
                        $tmp819->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class;
                        $tmp819->refCount.value = 1;
                        org$pandalanguage$pandac$Type* $tmp821 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, type697, p814->type);
                        org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp819, p814->name, $tmp821);
                        panda$collections$Array$add$panda$collections$Array$T(parameters799, ((panda$core$Object*) $tmp819));
                    }
                    goto $l807;
                    $l808:;
                }
                org$pandalanguage$pandac$MethodDecl* $tmp823 = (org$pandalanguage$pandac$MethodDecl*) malloc(121);
                $tmp823->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class;
                $tmp823->refCount.value = 1;
                org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp823, result704, ((org$pandalanguage$pandac$Symbol*) m794)->position, m794->doccomment, m794->annotations, m794->methodKind, ((org$pandalanguage$pandac$Symbol*) m794)->name, parameters799, m794->returnType, m794->body);
                clone822 = $tmp823;
                panda$collections$Array$add$panda$collections$Array$T(result704->methods, ((panda$core$Object*) clone822));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result704->symbolTable, ((org$pandalanguage$pandac$Symbol*) clone822));
            }
            goto $l787;
            $l788:;
        }
        {
            ITable* $tmp826 = ((panda$collections$Iterable*) p_cl->fields)->$class->itable;
            while ($tmp826->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp826 = $tmp826->next;
            }
            $fn828 $tmp827 = $tmp826->methods[0];
            panda$collections$Iterator* $tmp829 = $tmp827(((panda$collections$Iterable*) p_cl->fields));
            f$Iter825 = $tmp829;
            $l830:;
            ITable* $tmp832 = f$Iter825->$class->itable;
            while ($tmp832->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp832 = $tmp832->next;
            }
            $fn834 $tmp833 = $tmp832->methods[0];
            panda$core$Bit $tmp835 = $tmp833(f$Iter825);
            panda$core$Bit $tmp836 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp835);
            if (!$tmp836.value) goto $l831;
            {
                ITable* $tmp838 = f$Iter825->$class->itable;
                while ($tmp838->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp838 = $tmp838->next;
                }
                $fn840 $tmp839 = $tmp838->methods[1];
                panda$core$Object* $tmp841 = $tmp839(f$Iter825);
                f837 = ((org$pandalanguage$pandac$FieldDecl*) $tmp841);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self, f837);
                org$pandalanguage$pandac$FieldDecl* $tmp843 = (org$pandalanguage$pandac$FieldDecl*) malloc(113);
                $tmp843->$class = (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class;
                $tmp843->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp845 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, type697, f837->type);
                org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp843, result704, ((org$pandalanguage$pandac$Symbol*) f837)->position, f837->doccomment, f837->annotations, f837->fieldKind, ((org$pandalanguage$pandac$Symbol*) f837)->name, $tmp845, f837->rawValue);
                clone842 = $tmp843;
                panda$collections$Array$add$panda$collections$Array$T(result704->fields, ((panda$core$Object*) clone842));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result704->symbolTable, ((org$pandalanguage$pandac$Symbol*) clone842));
            }
            goto $l830;
            $l831:;
        }
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classes, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) result704)->name), ((panda$core$Object*) result704));
        panda$collections$Array$add$panda$collections$Array$T(self->compilationQueue, ((panda$core$Object*) result704));
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    }
    }
    return result704;
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type) {
    org$pandalanguage$pandac$ClassDecl* result846;
    PANDA_ASSERT(p_type->resolved.value);
    switch (p_type->typeKind.value) {
        case 10:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp847 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Position$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Symbol*) p_type)->position, ((org$pandalanguage$pandac$Symbol*) p_type)->name);
            result846 = $tmp847;
        }
        break;
        case 11:
        case 21:
        {
            panda$core$Object* $tmp848 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$ClassDecl* $tmp849 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Type*) $tmp848));
            result846 = $tmp849;
        }
        break;
        case 22:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp850 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_type->parameter->bound);
            return $tmp850;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
    panda$core$Bit $tmp851 = org$pandalanguage$pandac$Annotations$isSpecialize$R$panda$core$Bit(result846->annotations);
    if ($tmp851.value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp852 = org$pandalanguage$pandac$Compiler$specialize$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl(self, result846, p_type);
        result846 = $tmp852;
    }
    }
    return result846;
}
panda$collections$Set* org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_t) {
    org$pandalanguage$pandac$ClassDecl* cl853;
    panda$collections$Set* result855;
    panda$collections$Iterator* intf$Iter860;
    org$pandalanguage$pandac$Type* intf872;
    org$pandalanguage$pandac$ClassDecl* $tmp854 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_t);
    cl853 = $tmp854;
    PANDA_ASSERT(((panda$core$Bit) { cl853 != NULL }).value);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, cl853);
    panda$collections$Set* $tmp856 = (panda$collections$Set*) malloc(24);
    $tmp856->$class = (panda$core$Class*) &panda$collections$Set$class;
    $tmp856->refCount.value = 1;
    panda$collections$Set$init($tmp856);
    result855 = $tmp856;
    if (((panda$core$Bit) { cl853->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp858 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_t, cl853->rawSuper);
        panda$collections$Set* $tmp859 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self, $tmp858);
        panda$collections$Set$addAll$panda$collections$CollectionView$LTpanda$collections$Set$T$GT(result855, ((panda$collections$CollectionView*) $tmp859));
    }
    }
    {
        ITable* $tmp861 = ((panda$collections$Iterable*) cl853->rawInterfaces)->$class->itable;
        while ($tmp861->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp861 = $tmp861->next;
        }
        $fn863 $tmp862 = $tmp861->methods[0];
        panda$collections$Iterator* $tmp864 = $tmp862(((panda$collections$Iterable*) cl853->rawInterfaces));
        intf$Iter860 = $tmp864;
        $l865:;
        ITable* $tmp867 = intf$Iter860->$class->itable;
        while ($tmp867->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp867 = $tmp867->next;
        }
        $fn869 $tmp868 = $tmp867->methods[0];
        panda$core$Bit $tmp870 = $tmp868(intf$Iter860);
        panda$core$Bit $tmp871 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp870);
        if (!$tmp871.value) goto $l866;
        {
            ITable* $tmp873 = intf$Iter860->$class->itable;
            while ($tmp873->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp873 = $tmp873->next;
            }
            $fn875 $tmp874 = $tmp873->methods[1];
            panda$core$Object* $tmp876 = $tmp874(intf$Iter860);
            intf872 = ((org$pandalanguage$pandac$Type*) $tmp876);
            org$pandalanguage$pandac$Type* $tmp877 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_t, intf872);
            panda$collections$Set* $tmp878 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self, $tmp877);
            panda$collections$Set$addAll$panda$collections$CollectionView$LTpanda$collections$Set$T$GT(result855, ((panda$collections$CollectionView*) $tmp878));
        }
        goto $l865;
        $l866:;
    }
    panda$core$Bit $tmp879 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(cl853->classKind, ((panda$core$Int64) { 5012 }));
    if ($tmp879.value) {
    {
        panda$collections$Set$add$panda$collections$Set$T(result855, ((panda$collections$Key*) p_t));
    }
    }
    return result855;
}
panda$core$Bit org$pandalanguage$pandac$Compiler$signatureMatch$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_t1, org$pandalanguage$pandac$Type* p_t2) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp885;
    panda$core$Bit $tmp880 = org$pandalanguage$pandac$Type$isMethod$R$panda$core$Bit(p_t1);
    PANDA_ASSERT($tmp880.value);
    panda$core$Bit $tmp881 = org$pandalanguage$pandac$Type$isMethod$R$panda$core$Bit(p_t2);
    PANDA_ASSERT($tmp881.value);
    panda$core$Int64 $tmp882 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_t1->subtypes);
    panda$core$Int64 $tmp883 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_t2->subtypes);
    panda$core$Bit $tmp884 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp882, $tmp883);
    if ($tmp884.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Int64 $tmp886 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_t1->subtypes);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp885, ((panda$core$Int64) { 0 }), $tmp886, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp888 = $tmp885.start.value;
    panda$core$Int64 i887 = { $tmp888 };
    int64_t $tmp890 = $tmp885.end.value;
    int64_t $tmp891 = $tmp885.step.value;
    bool $tmp892 = $tmp885.inclusive.value;
    bool $tmp899 = $tmp891 > 0;
    if ($tmp899) goto $l897; else goto $l898;
    $l897:;
    if ($tmp892) goto $l900; else goto $l901;
    $l900:;
    if ($tmp888 <= $tmp890) goto $l893; else goto $l895;
    $l901:;
    if ($tmp888 < $tmp890) goto $l893; else goto $l895;
    $l898:;
    if ($tmp892) goto $l902; else goto $l903;
    $l902:;
    if ($tmp888 >= $tmp890) goto $l893; else goto $l895;
    $l903:;
    if ($tmp888 > $tmp890) goto $l893; else goto $l895;
    $l893:;
    {
        panda$core$Object* $tmp905 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t1->subtypes, i887);
        panda$core$Object* $tmp906 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t2->subtypes, i887);
        panda$core$Bit $tmp907 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp905), ((org$pandalanguage$pandac$Type*) $tmp906));
        if ($tmp907.value) {
        {
            return ((panda$core$Bit) { false });
        }
        }
    }
    $l896:;
    if ($tmp899) goto $l909; else goto $l910;
    $l909:;
    int64_t $tmp911 = $tmp890 - i887.value;
    if ($tmp892) goto $l912; else goto $l913;
    $l912:;
    if ($tmp911 >= $tmp891) goto $l908; else goto $l895;
    $l913:;
    if ($tmp911 > $tmp891) goto $l908; else goto $l895;
    $l910:;
    int64_t $tmp915 = i887.value - $tmp890;
    if ($tmp892) goto $l916; else goto $l917;
    $l916:;
    if ($tmp915 >= -$tmp891) goto $l908; else goto $l895;
    $l917:;
    if ($tmp915 > -$tmp891) goto $l908; else goto $l895;
    $l908:;
    i887.value += $tmp891;
    goto $l893;
    $l895:;
    return ((panda$core$Bit) { true });
}
org$pandalanguage$pandac$MethodDecl* org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_owner, panda$core$String* p_name, org$pandalanguage$pandac$Type* p_methodType, panda$core$Bit p_checkInterfaces) {
    org$pandalanguage$pandac$ClassDecl* cl919;
    panda$collections$Iterator* test$Iter921;
    org$pandalanguage$pandac$MethodDecl* test933;
    panda$collections$Iterator* raw$Iter946;
    org$pandalanguage$pandac$Type* raw958;
    org$pandalanguage$pandac$MethodDecl* result963;
    org$pandalanguage$pandac$ClassDecl* $tmp920 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_owner);
    cl919 = $tmp920;
    PANDA_ASSERT(((panda$core$Bit) { cl919 != NULL }).value);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, cl919);
    {
        ITable* $tmp922 = ((panda$collections$Iterable*) cl919->methods)->$class->itable;
        while ($tmp922->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp922 = $tmp922->next;
        }
        $fn924 $tmp923 = $tmp922->methods[0];
        panda$collections$Iterator* $tmp925 = $tmp923(((panda$collections$Iterable*) cl919->methods));
        test$Iter921 = $tmp925;
        $l926:;
        ITable* $tmp928 = test$Iter921->$class->itable;
        while ($tmp928->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp928 = $tmp928->next;
        }
        $fn930 $tmp929 = $tmp928->methods[0];
        panda$core$Bit $tmp931 = $tmp929(test$Iter921);
        panda$core$Bit $tmp932 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp931);
        if (!$tmp932.value) goto $l927;
        {
            ITable* $tmp934 = test$Iter921->$class->itable;
            while ($tmp934->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp934 = $tmp934->next;
            }
            $fn936 $tmp935 = $tmp934->methods[1];
            panda$core$Object* $tmp937 = $tmp935(test$Iter921);
            test933 = ((org$pandalanguage$pandac$MethodDecl*) $tmp937);
            panda$core$Bit $tmp938 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) test933)->name, p_name);
            if ($tmp938.value) {
            {
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, test933);
                org$pandalanguage$pandac$Type* $tmp939 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, test933);
                org$pandalanguage$pandac$Type* $tmp940 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_owner, $tmp939);
                panda$core$Bit $tmp941 = org$pandalanguage$pandac$Compiler$signatureMatch$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, $tmp940, p_methodType);
                if ($tmp941.value) {
                {
                    return test933;
                }
                }
            }
            }
        }
        goto $l926;
        $l927:;
    }
    bool $tmp942 = p_checkInterfaces.value;
    if ($tmp942) goto $l943;
    panda$core$Bit $tmp944 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(cl919->classKind, ((panda$core$Int64) { 5012 }));
    $tmp942 = $tmp944.value;
    $l943:;
    panda$core$Bit $tmp945 = { $tmp942 };
    if ($tmp945.value) {
    {
        {
            ITable* $tmp947 = ((panda$collections$Iterable*) cl919->rawInterfaces)->$class->itable;
            while ($tmp947->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp947 = $tmp947->next;
            }
            $fn949 $tmp948 = $tmp947->methods[0];
            panda$collections$Iterator* $tmp950 = $tmp948(((panda$collections$Iterable*) cl919->rawInterfaces));
            raw$Iter946 = $tmp950;
            $l951:;
            ITable* $tmp953 = raw$Iter946->$class->itable;
            while ($tmp953->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp953 = $tmp953->next;
            }
            $fn955 $tmp954 = $tmp953->methods[0];
            panda$core$Bit $tmp956 = $tmp954(raw$Iter946);
            panda$core$Bit $tmp957 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp956);
            if (!$tmp957.value) goto $l952;
            {
                ITable* $tmp959 = raw$Iter946->$class->itable;
                while ($tmp959->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp959 = $tmp959->next;
                }
                $fn961 $tmp960 = $tmp959->methods[1];
                panda$core$Object* $tmp962 = $tmp960(raw$Iter946);
                raw958 = ((org$pandalanguage$pandac$Type*) $tmp962);
                org$pandalanguage$pandac$Type* $tmp964 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_owner, raw958);
                org$pandalanguage$pandac$MethodDecl* $tmp965 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp964, p_name, p_methodType, p_checkInterfaces);
                result963 = $tmp965;
                if (((panda$core$Bit) { result963 != NULL }).value) {
                {
                    return result963;
                }
                }
            }
            goto $l951;
            $l952:;
        }
    }
    }
    if (((panda$core$Bit) { cl919->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp966 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_owner, cl919->rawSuper);
        org$pandalanguage$pandac$MethodDecl* $tmp967 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp966, p_name, p_methodType, p_checkInterfaces);
        return $tmp967;
    }
    }
    return NULL;
}
org$pandalanguage$pandac$MethodDecl* org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$Type* methodType969;
    org$pandalanguage$pandac$Type* owner971;
    panda$collections$Iterator* raw$Iter973;
    org$pandalanguage$pandac$Type* raw985;
    org$pandalanguage$pandac$MethodDecl* result990;
    panda$core$Bit $tmp968 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 59 }));
    if ($tmp968.value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
    org$pandalanguage$pandac$Type* $tmp970 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, p_m);
    methodType969 = $tmp970;
    org$pandalanguage$pandac$Type* $tmp972 = org$pandalanguage$pandac$ClassDecl$typeWithParameters$R$org$pandalanguage$pandac$Type(p_m->owner);
    owner971 = $tmp972;
    {
        ITable* $tmp974 = ((panda$collections$Iterable*) p_m->owner->rawInterfaces)->$class->itable;
        while ($tmp974->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp974 = $tmp974->next;
        }
        $fn976 $tmp975 = $tmp974->methods[0];
        panda$collections$Iterator* $tmp977 = $tmp975(((panda$collections$Iterable*) p_m->owner->rawInterfaces));
        raw$Iter973 = $tmp977;
        $l978:;
        ITable* $tmp980 = raw$Iter973->$class->itable;
        while ($tmp980->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp980 = $tmp980->next;
        }
        $fn982 $tmp981 = $tmp980->methods[0];
        panda$core$Bit $tmp983 = $tmp981(raw$Iter973);
        panda$core$Bit $tmp984 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp983);
        if (!$tmp984.value) goto $l979;
        {
            ITable* $tmp986 = raw$Iter973->$class->itable;
            while ($tmp986->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp986 = $tmp986->next;
            }
            $fn988 $tmp987 = $tmp986->methods[1];
            panda$core$Object* $tmp989 = $tmp987(raw$Iter973);
            raw985 = ((org$pandalanguage$pandac$Type*) $tmp989);
            org$pandalanguage$pandac$Type* $tmp991 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, owner971, raw985);
            org$pandalanguage$pandac$MethodDecl* $tmp992 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp991, ((org$pandalanguage$pandac$Symbol*) p_m)->name, methodType969, ((panda$core$Bit) { true }));
            result990 = $tmp992;
            if (((panda$core$Bit) { result990 != NULL }).value) {
            {
                return result990;
            }
            }
        }
        goto $l978;
        $l979:;
    }
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_m->owner);
    if (((panda$core$Bit) { p_m->owner->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp993 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, owner971, p_m->owner->rawSuper);
        org$pandalanguage$pandac$MethodDecl* $tmp994 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp993, ((org$pandalanguage$pandac$Symbol*) p_m)->name, methodType969, ((panda$core$Bit) { true }));
        return $tmp994;
    }
    }
    return NULL;
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$interfaceMethods$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl, org$pandalanguage$pandac$Type* p_intf) {
    org$pandalanguage$pandac$ClassDecl* intfClass995;
    panda$collections$Array* result997;
    panda$collections$Iterator* m$Iter1000;
    org$pandalanguage$pandac$MethodDecl* m1012;
    org$pandalanguage$pandac$MethodDecl* found1017;
    org$pandalanguage$pandac$ClassDecl* $tmp996 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_intf);
    intfClass995 = $tmp996;
    PANDA_ASSERT(((panda$core$Bit) { intfClass995 != NULL }).value);
    panda$collections$Array* $tmp998 = (panda$collections$Array*) malloc(40);
    $tmp998->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp998->refCount.value = 1;
    panda$collections$Array$init($tmp998);
    result997 = $tmp998;
    {
        ITable* $tmp1001 = ((panda$collections$Iterable*) intfClass995->methods)->$class->itable;
        while ($tmp1001->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1001 = $tmp1001->next;
        }
        $fn1003 $tmp1002 = $tmp1001->methods[0];
        panda$collections$Iterator* $tmp1004 = $tmp1002(((panda$collections$Iterable*) intfClass995->methods));
        m$Iter1000 = $tmp1004;
        $l1005:;
        ITable* $tmp1007 = m$Iter1000->$class->itable;
        while ($tmp1007->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1007 = $tmp1007->next;
        }
        $fn1009 $tmp1008 = $tmp1007->methods[0];
        panda$core$Bit $tmp1010 = $tmp1008(m$Iter1000);
        panda$core$Bit $tmp1011 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1010);
        if (!$tmp1011.value) goto $l1006;
        {
            ITable* $tmp1013 = m$Iter1000->$class->itable;
            while ($tmp1013->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1013 = $tmp1013->next;
            }
            $fn1015 $tmp1014 = $tmp1013->methods[1];
            panda$core$Object* $tmp1016 = $tmp1014(m$Iter1000);
            m1012 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1016);
            org$pandalanguage$pandac$Type* $tmp1018 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
            org$pandalanguage$pandac$Type* $tmp1019 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, m1012);
            org$pandalanguage$pandac$Type* $tmp1020 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_intf, $tmp1019);
            org$pandalanguage$pandac$MethodDecl* $tmp1021 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp1018, ((org$pandalanguage$pandac$Symbol*) m1012)->name, $tmp1020, ((panda$core$Bit) { false }));
            found1017 = $tmp1021;
            PANDA_ASSERT(((panda$core$Bit) { found1017 != NULL }).value);
            panda$collections$Array$add$panda$collections$Array$T(result997, ((panda$core$Object*) found1017));
        }
        goto $l1005;
        $l1006:;
    }
    return ((panda$collections$ListView*) result997);
}
org$pandalanguage$pandac$SymbolTable* org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$ClassDecl* superCl1023;
    panda$collections$Iterator* rawIntf$Iter1026;
    org$pandalanguage$pandac$Type* rawIntf1038;
    org$pandalanguage$pandac$ClassDecl* intf1043;
    panda$core$Bit $tmp1022 = panda$core$Bit$$NOT$R$panda$core$Bit(p_cl->symbolTableResolved);
    if ($tmp1022.value) {
    {
        p_cl->symbolTableResolved = ((panda$core$Bit) { true });
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
        if (((panda$core$Bit) { p_cl->rawSuper != NULL }).value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp1024 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_cl->rawSuper);
            superCl1023 = $tmp1024;
            if (((panda$core$Bit) { superCl1023 != NULL }).value) {
            {
                org$pandalanguage$pandac$SymbolTable* $tmp1025 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, superCl1023);
                panda$collections$Array$add$panda$collections$Array$T(p_cl->symbolTable->parents, ((panda$core$Object*) $tmp1025));
            }
            }
        }
        }
        {
            ITable* $tmp1027 = ((panda$collections$Iterable*) p_cl->rawInterfaces)->$class->itable;
            while ($tmp1027->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1027 = $tmp1027->next;
            }
            $fn1029 $tmp1028 = $tmp1027->methods[0];
            panda$collections$Iterator* $tmp1030 = $tmp1028(((panda$collections$Iterable*) p_cl->rawInterfaces));
            rawIntf$Iter1026 = $tmp1030;
            $l1031:;
            ITable* $tmp1033 = rawIntf$Iter1026->$class->itable;
            while ($tmp1033->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1033 = $tmp1033->next;
            }
            $fn1035 $tmp1034 = $tmp1033->methods[0];
            panda$core$Bit $tmp1036 = $tmp1034(rawIntf$Iter1026);
            panda$core$Bit $tmp1037 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1036);
            if (!$tmp1037.value) goto $l1032;
            {
                ITable* $tmp1039 = rawIntf$Iter1026->$class->itable;
                while ($tmp1039->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1039 = $tmp1039->next;
                }
                $fn1041 $tmp1040 = $tmp1039->methods[1];
                panda$core$Object* $tmp1042 = $tmp1040(rawIntf$Iter1026);
                rawIntf1038 = ((org$pandalanguage$pandac$Type*) $tmp1042);
                org$pandalanguage$pandac$ClassDecl* $tmp1044 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, rawIntf1038);
                intf1043 = $tmp1044;
                if (((panda$core$Bit) { intf1043 != NULL }).value) {
                {
                    org$pandalanguage$pandac$SymbolTable* $tmp1045 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, intf1043);
                    panda$collections$Array$add$panda$collections$Array$T(p_cl->symbolTable->parents, ((panda$core$Object*) $tmp1045));
                }
                }
            }
            goto $l1031;
            $l1032:;
        }
    }
    }
    return p_cl->symbolTable;
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$ClassDecl* superCl1048;
    panda$collections$Iterator* derived$Iter1051;
    org$pandalanguage$pandac$MethodDecl* derived1063;
    panda$core$Bit found1073;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1074;
    org$pandalanguage$pandac$MethodDecl* base1094;
    panda$core$Int64 $tmp1046 = panda$collections$Array$get_count$R$panda$core$Int64(p_cl->virtualMethods);
    panda$core$Bit $tmp1047 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1046, ((panda$core$Int64) { 0 }));
    if ($tmp1047.value) {
    {
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
        panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_cl));
        panda$collections$Stack$push$panda$collections$Stack$T(self->currentFile, ((panda$core$Object*) p_cl->source));
        if (((panda$core$Bit) { p_cl->rawSuper != NULL }).value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp1049 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_cl->rawSuper);
            superCl1048 = $tmp1049;
            if (((panda$core$Bit) { superCl1048 == NULL }).value) {
            {
                panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
                panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentFile);
                return ((panda$collections$ListView*) p_cl->virtualMethods);
            }
            }
            panda$collections$ListView* $tmp1050 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self, superCl1048);
            panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(p_cl->virtualMethods, ((panda$collections$CollectionView*) $tmp1050));
        }
        }
        {
            ITable* $tmp1052 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
            while ($tmp1052->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1052 = $tmp1052->next;
            }
            $fn1054 $tmp1053 = $tmp1052->methods[0];
            panda$collections$Iterator* $tmp1055 = $tmp1053(((panda$collections$Iterable*) p_cl->methods));
            derived$Iter1051 = $tmp1055;
            $l1056:;
            ITable* $tmp1058 = derived$Iter1051->$class->itable;
            while ($tmp1058->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1058 = $tmp1058->next;
            }
            $fn1060 $tmp1059 = $tmp1058->methods[0];
            panda$core$Bit $tmp1061 = $tmp1059(derived$Iter1051);
            panda$core$Bit $tmp1062 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1061);
            if (!$tmp1062.value) goto $l1057;
            {
                ITable* $tmp1064 = derived$Iter1051->$class->itable;
                while ($tmp1064->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1064 = $tmp1064->next;
                }
                $fn1066 $tmp1065 = $tmp1064->methods[1];
                panda$core$Object* $tmp1067 = $tmp1065(derived$Iter1051);
                derived1063 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1067);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, derived1063);
                panda$core$Bit $tmp1069 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(derived1063->methodKind, ((panda$core$Int64) { 59 }));
                bool $tmp1068 = $tmp1069.value;
                if ($tmp1068) goto $l1070;
                panda$core$Bit $tmp1071 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(derived1063->annotations);
                $tmp1068 = $tmp1071.value;
                $l1070:;
                panda$core$Bit $tmp1072 = { $tmp1068 };
                if ($tmp1072.value) {
                {
                    goto $l1056;
                }
                }
                found1073 = ((panda$core$Bit) { false });
                panda$core$Int64 $tmp1075 = panda$collections$Array$get_count$R$panda$core$Int64(p_cl->virtualMethods);
                panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp1074, ((panda$core$Int64) { 0 }), $tmp1075, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
                int64_t $tmp1077 = $tmp1074.start.value;
                panda$core$Int64 i1076 = { $tmp1077 };
                int64_t $tmp1079 = $tmp1074.end.value;
                int64_t $tmp1080 = $tmp1074.step.value;
                bool $tmp1081 = $tmp1074.inclusive.value;
                bool $tmp1088 = $tmp1080 > 0;
                if ($tmp1088) goto $l1086; else goto $l1087;
                $l1086:;
                if ($tmp1081) goto $l1089; else goto $l1090;
                $l1089:;
                if ($tmp1077 <= $tmp1079) goto $l1082; else goto $l1084;
                $l1090:;
                if ($tmp1077 < $tmp1079) goto $l1082; else goto $l1084;
                $l1087:;
                if ($tmp1081) goto $l1091; else goto $l1092;
                $l1091:;
                if ($tmp1077 >= $tmp1079) goto $l1082; else goto $l1084;
                $l1092:;
                if ($tmp1077 > $tmp1079) goto $l1082; else goto $l1084;
                $l1082:;
                {
                    panda$core$Object* $tmp1095 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_cl->virtualMethods, i1076);
                    base1094 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1095);
                    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, base1094);
                    panda$core$Bit $tmp1096 = org$pandalanguage$pandac$MethodDecl$matches$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(derived1063, base1094);
                    if ($tmp1096.value) {
                    {
                        found1073 = ((panda$core$Bit) { true });
                        panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(p_cl->virtualMethods, i1076, ((panda$core$Object*) derived1063));
                        goto $l1084;
                    }
                    }
                }
                $l1085:;
                if ($tmp1088) goto $l1098; else goto $l1099;
                $l1098:;
                int64_t $tmp1100 = $tmp1079 - i1076.value;
                if ($tmp1081) goto $l1101; else goto $l1102;
                $l1101:;
                if ($tmp1100 >= $tmp1080) goto $l1097; else goto $l1084;
                $l1102:;
                if ($tmp1100 > $tmp1080) goto $l1097; else goto $l1084;
                $l1099:;
                int64_t $tmp1104 = i1076.value - $tmp1079;
                if ($tmp1081) goto $l1105; else goto $l1106;
                $l1105:;
                if ($tmp1104 >= -$tmp1080) goto $l1097; else goto $l1084;
                $l1106:;
                if ($tmp1104 > -$tmp1080) goto $l1097; else goto $l1084;
                $l1097:;
                i1076.value += $tmp1080;
                goto $l1082;
                $l1084:;
                panda$core$Bit $tmp1108 = panda$core$Bit$$NOT$R$panda$core$Bit(found1073);
                if ($tmp1108.value) {
                {
                    panda$collections$Array$add$panda$collections$Array$T(p_cl->virtualMethods, ((panda$core$Object*) derived1063));
                }
                }
            }
            goto $l1056;
            $l1057:;
        }
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentFile);
    }
    }
    return ((panda$collections$ListView*) p_cl->virtualMethods);
}
void org$pandalanguage$pandac$Compiler$addInheritedMethods$org$pandalanguage$pandac$SymbolTable$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$SymbolTable* p_st, panda$core$String* p_name, panda$collections$Array* p_result, panda$collections$ListView* p_types) {
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$getMethodReference$org$pandalanguage$pandac$SymbolTable$org$pandalanguage$pandac$IRNode$Q$panda$core$String$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$SymbolTable* p_st, org$pandalanguage$pandac$IRNode* p_target, panda$core$String* p_name, org$pandalanguage$pandac$Position p_position, panda$collections$ListView* p_types) {
    panda$collections$Array* methods1109;
    org$pandalanguage$pandac$Symbol* s1112;
    panda$collections$Iterator* m$Iter1118;
    org$pandalanguage$pandac$MethodDecl* m1130;
    panda$collections$Iterator* p$Iter1137;
    org$pandalanguage$pandac$SymbolTable* p1149;
    panda$collections$Array* children1154;
    panda$collections$Array* types1166;
    panda$collections$Iterator* m$Iter1169;
    org$pandalanguage$pandac$MethodRef* m1181;
    panda$collections$Array* $tmp1110 = (panda$collections$Array*) malloc(40);
    $tmp1110->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1110->refCount.value = 1;
    panda$collections$Array$init($tmp1110);
    methods1109 = $tmp1110;
    org$pandalanguage$pandac$Symbol* $tmp1113 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(p_st, p_name);
    s1112 = $tmp1113;
    PANDA_ASSERT(((panda$core$Bit) { s1112 != NULL }).value);
    panda$core$Bit $tmp1114 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(s1112->kind, ((panda$core$Int64) { 204 }));
    if ($tmp1114.value) {
    {
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, ((org$pandalanguage$pandac$MethodDecl*) s1112));
        org$pandalanguage$pandac$MethodRef* $tmp1115 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
        $tmp1115->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
        $tmp1115->refCount.value = 1;
        org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp1115, ((org$pandalanguage$pandac$MethodDecl*) s1112), p_types);
        panda$collections$Array$add$panda$collections$Array$T(methods1109, ((panda$core$Object*) $tmp1115));
    }
    }
    else {
    {
        panda$core$Bit $tmp1117 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(s1112->kind, ((panda$core$Int64) { 205 }));
        PANDA_ASSERT($tmp1117.value);
        {
            ITable* $tmp1119 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s1112)->methods)->$class->itable;
            while ($tmp1119->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1119 = $tmp1119->next;
            }
            $fn1121 $tmp1120 = $tmp1119->methods[0];
            panda$collections$Iterator* $tmp1122 = $tmp1120(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s1112)->methods));
            m$Iter1118 = $tmp1122;
            $l1123:;
            ITable* $tmp1125 = m$Iter1118->$class->itable;
            while ($tmp1125->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1125 = $tmp1125->next;
            }
            $fn1127 $tmp1126 = $tmp1125->methods[0];
            panda$core$Bit $tmp1128 = $tmp1126(m$Iter1118);
            panda$core$Bit $tmp1129 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1128);
            if (!$tmp1129.value) goto $l1124;
            {
                ITable* $tmp1131 = m$Iter1118->$class->itable;
                while ($tmp1131->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1131 = $tmp1131->next;
                }
                $fn1133 $tmp1132 = $tmp1131->methods[1];
                panda$core$Object* $tmp1134 = $tmp1132(m$Iter1118);
                m1130 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1134);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m1130);
                org$pandalanguage$pandac$MethodRef* $tmp1135 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                $tmp1135->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                $tmp1135->refCount.value = 1;
                org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp1135, m1130, p_types);
                panda$collections$Array$add$panda$collections$Array$T(methods1109, ((panda$core$Object*) $tmp1135));
            }
            goto $l1123;
            $l1124:;
        }
    }
    }
    {
        ITable* $tmp1138 = ((panda$collections$Iterable*) p_st->parents)->$class->itable;
        while ($tmp1138->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1138 = $tmp1138->next;
        }
        $fn1140 $tmp1139 = $tmp1138->methods[0];
        panda$collections$Iterator* $tmp1141 = $tmp1139(((panda$collections$Iterable*) p_st->parents));
        p$Iter1137 = $tmp1141;
        $l1142:;
        ITable* $tmp1144 = p$Iter1137->$class->itable;
        while ($tmp1144->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1144 = $tmp1144->next;
        }
        $fn1146 $tmp1145 = $tmp1144->methods[0];
        panda$core$Bit $tmp1147 = $tmp1145(p$Iter1137);
        panda$core$Bit $tmp1148 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1147);
        if (!$tmp1148.value) goto $l1143;
        {
            ITable* $tmp1150 = p$Iter1137->$class->itable;
            while ($tmp1150->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1150 = $tmp1150->next;
            }
            $fn1152 $tmp1151 = $tmp1150->methods[1];
            panda$core$Object* $tmp1153 = $tmp1151(p$Iter1137);
            p1149 = ((org$pandalanguage$pandac$SymbolTable*) $tmp1153);
            org$pandalanguage$pandac$Compiler$addInheritedMethods$org$pandalanguage$pandac$SymbolTable$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p1149, p_name, methods1109, p_types);
        }
        goto $l1142;
        $l1143:;
    }
    panda$collections$Array* $tmp1155 = (panda$collections$Array*) malloc(40);
    $tmp1155->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1155->refCount.value = 1;
    panda$collections$Array$init($tmp1155);
    children1154 = $tmp1155;
    if (((panda$core$Bit) { p_target != NULL }).value) {
    {
        panda$collections$Array$add$panda$collections$Array$T(children1154, ((panda$core$Object*) p_target));
    }
    }
    panda$core$Int64 $tmp1157 = panda$collections$Array$get_count$R$panda$core$Int64(methods1109);
    panda$core$Bit $tmp1158 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1157, ((panda$core$Int64) { 1 }));
    if ($tmp1158.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp1159 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp1159->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp1159->refCount.value = 1;
        panda$core$Object* $tmp1161 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(methods1109, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Type* $tmp1162 = org$pandalanguage$pandac$MethodRef$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$MethodRef*) $tmp1161));
        panda$core$Object* $tmp1163 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(methods1109, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1159, ((panda$core$Int64) { 1002 }), p_position, $tmp1162, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodRef*) $tmp1163)), ((panda$collections$ListView*) children1154));
        return $tmp1159;
    }
    }
    else {
    {
        panda$core$Int64 $tmp1164 = panda$collections$Array$get_count$R$panda$core$Int64(methods1109);
        panda$core$Bit $tmp1165 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1164, ((panda$core$Int64) { 0 }));
        PANDA_ASSERT($tmp1165.value);
        panda$collections$Array* $tmp1167 = (panda$collections$Array*) malloc(40);
        $tmp1167->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp1167->refCount.value = 1;
        panda$collections$Array$init($tmp1167);
        types1166 = $tmp1167;
        {
            ITable* $tmp1170 = ((panda$collections$Iterable*) methods1109)->$class->itable;
            while ($tmp1170->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1170 = $tmp1170->next;
            }
            $fn1172 $tmp1171 = $tmp1170->methods[0];
            panda$collections$Iterator* $tmp1173 = $tmp1171(((panda$collections$Iterable*) methods1109));
            m$Iter1169 = $tmp1173;
            $l1174:;
            ITable* $tmp1176 = m$Iter1169->$class->itable;
            while ($tmp1176->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1176 = $tmp1176->next;
            }
            $fn1178 $tmp1177 = $tmp1176->methods[0];
            panda$core$Bit $tmp1179 = $tmp1177(m$Iter1169);
            panda$core$Bit $tmp1180 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1179);
            if (!$tmp1180.value) goto $l1175;
            {
                ITable* $tmp1182 = m$Iter1169->$class->itable;
                while ($tmp1182->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1182 = $tmp1182->next;
                }
                $fn1184 $tmp1183 = $tmp1182->methods[1];
                panda$core$Object* $tmp1185 = $tmp1183(m$Iter1169);
                m1181 = ((org$pandalanguage$pandac$MethodRef*) $tmp1185);
                org$pandalanguage$pandac$Type* $tmp1186 = org$pandalanguage$pandac$MethodRef$type$R$org$pandalanguage$pandac$Type(m1181);
                panda$collections$Array$add$panda$collections$Array$T(types1166, ((panda$core$Object*) $tmp1186));
            }
            goto $l1174;
            $l1175:;
        }
        org$pandalanguage$pandac$IRNode* $tmp1187 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp1187->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp1187->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp1189 = (org$pandalanguage$pandac$Type*) malloc(96);
        $tmp1189->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
        $tmp1189->refCount.value = 1;
        org$pandalanguage$pandac$Type$init$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp1189, ((panda$collections$ListView*) types1166));
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1187, ((panda$core$Int64) { 1003 }), p_position, $tmp1189, ((panda$core$Object*) methods1109), ((panda$collections$ListView*) children1154));
        return $tmp1187;
    }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$symbolRef$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$Symbol* p_s, org$pandalanguage$pandac$SymbolTable* p_st) {
    org$pandalanguage$pandac$ClassDecl* cl1191;
    org$pandalanguage$pandac$FieldDecl* f1207;
    panda$collections$Array* children1210;
    org$pandalanguage$pandac$Type* effectiveType1215;
    org$pandalanguage$pandac$IRNode* result1220;
    switch (p_s->kind.value) {
        case 200:
        {
            PANDA_ASSERT(((panda$core$Bit) { p_target == NULL }).value);
            org$pandalanguage$pandac$ClassDecl* $tmp1192 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Position$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_position, ((org$pandalanguage$pandac$Alias*) p_s)->fullName);
            cl1191 = $tmp1192;
            if (((panda$core$Bit) { cl1191 != NULL }).value) {
            {
                org$pandalanguage$pandac$Type* $tmp1193 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl1191);
                org$pandalanguage$pandac$Compiler$checkGenericParameters$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_position, cl1191, $tmp1193);
                org$pandalanguage$pandac$IRNode* $tmp1194 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1194->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1194->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1196 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$Type* $tmp1197 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl1191);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1194, ((panda$core$Int64) { 1001 }), p_position, $tmp1196, $tmp1197);
                return $tmp1194;
            }
            }
            return NULL;
        }
        break;
        case 201:
        {
            org$pandalanguage$pandac$Type* $tmp1198 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) p_s));
            org$pandalanguage$pandac$Compiler$checkGenericParameters$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_position, ((org$pandalanguage$pandac$ClassDecl*) p_s), $tmp1198);
            org$pandalanguage$pandac$IRNode* $tmp1199 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp1199->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1199->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp1201 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$Type* $tmp1202 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) p_s));
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1199, ((panda$core$Int64) { 1001 }), p_position, $tmp1201, $tmp1202);
            return $tmp1199;
        }
        break;
        case 204:
        case 205:
        {
            panda$collections$ListView* $tmp1203 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$IRNode$Q$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p_target);
            org$pandalanguage$pandac$IRNode* $tmp1204 = org$pandalanguage$pandac$Compiler$getMethodReference$org$pandalanguage$pandac$SymbolTable$org$pandalanguage$pandac$IRNode$Q$panda$core$String$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$IRNode(self, p_st, p_target, p_s->name, p_position, $tmp1203);
            return $tmp1204;
        }
        break;
        case 208:
        {
            org$pandalanguage$pandac$IRNode* $tmp1205 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp1205->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1205->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp1205, ((panda$core$Int64) { 1016 }), p_position, ((org$pandalanguage$pandac$Variable*) p_s)->type, ((org$pandalanguage$pandac$Variable*) p_s));
            return $tmp1205;
        }
        break;
        case 202:
        {
            f1207 = ((org$pandalanguage$pandac$FieldDecl*) p_s);
            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self, f1207);
            org$pandalanguage$pandac$Type* $tmp1208 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1209 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(f1207->type, $tmp1208);
            if ($tmp1209.value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp1211 = (panda$collections$Array*) malloc(40);
            $tmp1211->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1211->refCount.value = 1;
            panda$collections$Array$init($tmp1211);
            children1210 = $tmp1211;
            if (((panda$core$Bit) { p_target != NULL }).value) {
            {
                panda$core$Bit $tmp1213 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1024 }));
                if ($tmp1213.value) {
                {
                    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_target->position, &$s1214);
                    return NULL;
                }
                }
                org$pandalanguage$pandac$Type* $tmp1216 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_target->type, f1207->type);
                effectiveType1215 = $tmp1216;
                panda$core$Bit $tmp1217 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(f1207->annotations);
                if ($tmp1217.value) {
                {
                    panda$collections$Array$add$panda$collections$Array$T(children1210, ((panda$core$Object*) p_target));
                }
                }
                else {
                {
                    org$pandalanguage$pandac$Type* $tmp1218 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(f1207->owner);
                    org$pandalanguage$pandac$IRNode* $tmp1219 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_target, $tmp1218);
                    panda$collections$Array$add$panda$collections$Array$T(children1210, ((panda$core$Object*) $tmp1219));
                }
                }
                org$pandalanguage$pandac$IRNode* $tmp1221 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1221->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1221->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1221, ((panda$core$Int64) { 1026 }), p_position, f1207->type, ((panda$core$Object*) p_s), ((panda$collections$ListView*) children1210));
                result1220 = $tmp1221;
                panda$core$Bit $tmp1223 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(effectiveType1215, result1220->type);
                if ($tmp1223.value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp1224 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, result1220, p_position, ((panda$core$Bit) { false }), effectiveType1215);
                    result1220 = $tmp1224;
                }
                }
                return result1220;
            }
            }
            else {
            {
                org$pandalanguage$pandac$IRNode* $tmp1225 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1225->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1225->refCount.value = 1;
                panda$core$Object* $tmp1227 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
                org$pandalanguage$pandac$Type* $tmp1228 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp1227));
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp1225, ((panda$core$Int64) { 1025 }), p_position, $tmp1228);
                panda$collections$Array$add$panda$collections$Array$T(children1210, ((panda$core$Object*) $tmp1225));
                org$pandalanguage$pandac$IRNode* $tmp1229 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1229->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1229->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1229, ((panda$core$Int64) { 1026 }), p_position, f1207->type, ((panda$core$Object*) p_s), ((panda$collections$ListView*) children1210));
                return $tmp1229;
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
    panda$collections$HashMap* typeMap1237;
    org$pandalanguage$pandac$Type* base1240;
    org$pandalanguage$pandac$ClassDecl* cl1242;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1244;
    switch (p_context->typeKind.value) {
        case 10:
        {
            return p_raw;
        }
        break;
        case 11:
        {
            panda$core$Int64 $tmp1231 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_context->subtypes);
            panda$core$Bit $tmp1232 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1231, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp1232.value);
            panda$core$Object* $tmp1233 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_context->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp1234 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$Type*) $tmp1233), p_raw);
            return $tmp1234;
        }
        break;
        case 21:
        {
            panda$core$Int64 $tmp1235 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_context->subtypes);
            panda$core$Bit $tmp1236 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp1235, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1236.value);
            panda$collections$HashMap* $tmp1238 = (panda$collections$HashMap*) malloc(56);
            $tmp1238->$class = (panda$core$Class*) &panda$collections$HashMap$class;
            $tmp1238->refCount.value = 1;
            panda$collections$HashMap$init($tmp1238);
            typeMap1237 = $tmp1238;
            panda$core$Object* $tmp1241 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_context->subtypes, ((panda$core$Int64) { 0 }));
            base1240 = ((org$pandalanguage$pandac$Type*) $tmp1241);
            org$pandalanguage$pandac$ClassDecl* $tmp1243 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Symbol*) base1240)->name);
            cl1242 = $tmp1243;
            PANDA_ASSERT(((panda$core$Bit) { cl1242 != NULL }).value);
            panda$core$Int64 $tmp1245 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_context->subtypes);
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp1244, ((panda$core$Int64) { 1 }), $tmp1245, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
            int64_t $tmp1247 = $tmp1244.start.value;
            panda$core$Int64 i1246 = { $tmp1247 };
            int64_t $tmp1249 = $tmp1244.end.value;
            int64_t $tmp1250 = $tmp1244.step.value;
            bool $tmp1251 = $tmp1244.inclusive.value;
            bool $tmp1258 = $tmp1250 > 0;
            if ($tmp1258) goto $l1256; else goto $l1257;
            $l1256:;
            if ($tmp1251) goto $l1259; else goto $l1260;
            $l1259:;
            if ($tmp1247 <= $tmp1249) goto $l1252; else goto $l1254;
            $l1260:;
            if ($tmp1247 < $tmp1249) goto $l1252; else goto $l1254;
            $l1257:;
            if ($tmp1251) goto $l1261; else goto $l1262;
            $l1261:;
            if ($tmp1247 >= $tmp1249) goto $l1252; else goto $l1254;
            $l1262:;
            if ($tmp1247 > $tmp1249) goto $l1252; else goto $l1254;
            $l1252:;
            {
                panda$core$String* $tmp1265 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) cl1242)->name, &$s1264);
                panda$core$Int64 $tmp1266 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i1246, ((panda$core$Int64) { 1 }));
                ITable* $tmp1267 = ((panda$collections$ListView*) cl1242->parameters)->$class->itable;
                while ($tmp1267->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp1267 = $tmp1267->next;
                }
                $fn1269 $tmp1268 = $tmp1267->methods[0];
                panda$core$Object* $tmp1270 = $tmp1268(((panda$collections$ListView*) cl1242->parameters), $tmp1266);
                panda$core$String* $tmp1271 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1265, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp1270))->name);
                panda$core$Object* $tmp1272 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_context->subtypes, i1246);
                panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(typeMap1237, ((panda$collections$Key*) $tmp1271), ((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp1272)));
            }
            $l1255:;
            if ($tmp1258) goto $l1274; else goto $l1275;
            $l1274:;
            int64_t $tmp1276 = $tmp1249 - i1246.value;
            if ($tmp1251) goto $l1277; else goto $l1278;
            $l1277:;
            if ($tmp1276 >= $tmp1250) goto $l1273; else goto $l1254;
            $l1278:;
            if ($tmp1276 > $tmp1250) goto $l1273; else goto $l1254;
            $l1275:;
            int64_t $tmp1280 = i1246.value - $tmp1249;
            if ($tmp1251) goto $l1281; else goto $l1282;
            $l1281:;
            if ($tmp1280 >= -$tmp1250) goto $l1273; else goto $l1254;
            $l1282:;
            if ($tmp1280 > -$tmp1250) goto $l1273; else goto $l1254;
            $l1273:;
            i1246.value += $tmp1250;
            goto $l1252;
            $l1254:;
            org$pandalanguage$pandac$Type* $tmp1284 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(p_raw, typeMap1237);
            return $tmp1284;
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
    org$pandalanguage$pandac$Type* $tmp1285 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1286 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_type, $tmp1285);
    if ($tmp1286.value) {
    {
        org$pandalanguage$pandac$Type* $tmp1287 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
        return $tmp1287;
    }
    }
    org$pandalanguage$pandac$Type* $tmp1288 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1289 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_type, $tmp1288);
    if ($tmp1289.value) {
    {
        org$pandalanguage$pandac$Type* $tmp1290 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
        return $tmp1290;
    }
    }
    return p_type;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    panda$collections$Array* args1298;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1299;
    org$pandalanguage$pandac$IRNode* c1301;
    switch (p_expr->kind.value) {
        case 1031:
        {
            panda$core$Object* $tmp1291 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp1292 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$IRNode*) $tmp1291)->type);
            panda$core$Object* $tmp1293 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
            org$pandalanguage$pandac$Type* $tmp1294 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$IRNode*) $tmp1293)->type);
            org$pandalanguage$pandac$Type* $tmp1295 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1292, $tmp1294);
            org$pandalanguage$pandac$Type* $tmp1296 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, $tmp1295);
            org$pandalanguage$pandac$Type* $tmp1297 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1296);
            return $tmp1297;
        }
        break;
        case 1040:
        {
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1299, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
            panda$collections$Array* $tmp1300 = panda$collections$Array$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT(p_expr->children, $tmp1299);
            args1298 = $tmp1300;
            panda$core$Object* $tmp1302 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp1304 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1302), &$s1303, ((panda$collections$ListView*) args1298));
            c1301 = $tmp1304;
            if (((panda$core$Bit) { c1301 == NULL }).value) {
            {
                org$pandalanguage$pandac$Type* $tmp1305 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
                return $tmp1305;
            }
            }
            return c1301->type;
        }
        break;
    }
    org$pandalanguage$pandac$Type* $tmp1306 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_expr->type);
    return $tmp1306;
}
panda$core$Int64$nullable org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type, org$pandalanguage$pandac$Type* p_target) {
    panda$core$Int64$nullable result1317;
    panda$core$Int64$nullable result1321;
    panda$core$Int64$nullable best1330;
    panda$collections$Iterator* t$Iter1331;
    org$pandalanguage$pandac$Type* t1343;
    panda$core$Int64$nullable cost1348;
    org$pandalanguage$pandac$ClassDecl* cl1362;
    panda$core$Int64$nullable cost1364;
    panda$collections$Iterator* intf$Iter1369;
    org$pandalanguage$pandac$Type* intf1381;
    panda$core$Int64$nullable cost1386;
    PANDA_ASSERT(p_type->resolved.value);
    PANDA_ASSERT(p_target->resolved.value);
    panda$core$Bit $tmp1307 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_type, p_target);
    if ($tmp1307.value) {
    {
        return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
    }
    }
    org$pandalanguage$pandac$Type* $tmp1308 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1309 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_type, $tmp1308);
    if ($tmp1309.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    panda$core$Bit $tmp1310 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 23 }));
    if ($tmp1310.value) {
    {
        panda$core$Bit $tmp1311 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp1311.value) {
        {
            return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
        }
        }
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    panda$core$Bit $tmp1313 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 11 }));
    bool $tmp1312 = $tmp1313.value;
    if (!$tmp1312) goto $l1314;
    panda$core$Bit $tmp1315 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
    $tmp1312 = $tmp1315.value;
    $l1314:;
    panda$core$Bit $tmp1316 = { $tmp1312 };
    if ($tmp1316.value) {
    {
        panda$core$Object* $tmp1318 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Int64$nullable $tmp1319 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$Type*) $tmp1318), p_target);
        result1317 = $tmp1319;
        if (((panda$core$Bit) { !result1317.nonnull }).value) {
        {
            return ((panda$core$Int64$nullable) { .nonnull = false });
        }
        }
        panda$core$Int64 $tmp1320 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) result1317.value), ((panda$core$Int64) { 1 }));
        return ((panda$core$Int64$nullable) { $tmp1320, true });
    }
    }
    switch (p_target->typeKind.value) {
        case 11:
        {
            panda$core$Object* $tmp1322 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$Int64$nullable $tmp1323 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_type, ((org$pandalanguage$pandac$Type*) $tmp1322));
            result1321 = $tmp1323;
            if (((panda$core$Bit) { !result1321.nonnull }).value) {
            {
                return ((panda$core$Int64$nullable) { .nonnull = false });
            }
            }
            panda$core$Int64 $tmp1324 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) result1321.value), ((panda$core$Int64) { 1 }));
            return ((panda$core$Int64$nullable) { $tmp1324, true });
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
            panda$core$Bit $tmp1325 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 21 }));
            if ($tmp1325.value) {
            {
                panda$core$Object* $tmp1326 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
                panda$core$Int64$nullable $tmp1327 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$Type*) $tmp1326), p_target);
                return $tmp1327;
            }
            }
        }
        break;
    }
    switch (p_type->typeKind.value) {
        case 19:
        {
            org$pandalanguage$pandac$Type* $tmp1328 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            panda$core$Int64$nullable $tmp1329 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1328, p_target);
            return $tmp1329;
        }
        break;
        case 17:
        {
            best1330 = ((panda$core$Int64$nullable) { .nonnull = false });
            {
                ITable* $tmp1332 = ((panda$collections$Iterable*) p_type->subtypes)->$class->itable;
                while ($tmp1332->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1332 = $tmp1332->next;
                }
                $fn1334 $tmp1333 = $tmp1332->methods[0];
                panda$collections$Iterator* $tmp1335 = $tmp1333(((panda$collections$Iterable*) p_type->subtypes));
                t$Iter1331 = $tmp1335;
                $l1336:;
                ITable* $tmp1338 = t$Iter1331->$class->itable;
                while ($tmp1338->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1338 = $tmp1338->next;
                }
                $fn1340 $tmp1339 = $tmp1338->methods[0];
                panda$core$Bit $tmp1341 = $tmp1339(t$Iter1331);
                panda$core$Bit $tmp1342 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1341);
                if (!$tmp1342.value) goto $l1337;
                {
                    ITable* $tmp1344 = t$Iter1331->$class->itable;
                    while ($tmp1344->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1344 = $tmp1344->next;
                    }
                    $fn1346 $tmp1345 = $tmp1344->methods[1];
                    panda$core$Object* $tmp1347 = $tmp1345(t$Iter1331);
                    t1343 = ((org$pandalanguage$pandac$Type*) $tmp1347);
                    panda$core$Int64$nullable $tmp1349 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, t1343, p_target);
                    cost1348 = $tmp1349;
                    bool $tmp1350 = ((panda$core$Bit) { cost1348.nonnull }).value;
                    if (!$tmp1350) goto $l1351;
                    bool $tmp1352 = ((panda$core$Bit) { !best1330.nonnull }).value;
                    if ($tmp1352) goto $l1353;
                    panda$core$Bit $tmp1354 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost1348.value), ((panda$core$Int64) best1330.value));
                    $tmp1352 = $tmp1354.value;
                    $l1353:;
                    panda$core$Bit $tmp1355 = { $tmp1352 };
                    $tmp1350 = $tmp1355.value;
                    $l1351:;
                    panda$core$Bit $tmp1356 = { $tmp1350 };
                    if ($tmp1356.value) {
                    {
                        best1330 = cost1348;
                    }
                    }
                }
                goto $l1336;
                $l1337:;
            }
            return best1330;
        }
        break;
        case 22:
        {
            panda$core$Int64$nullable $tmp1357 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_type->parameter->bound, p_target);
            return $tmp1357;
        }
        break;
    }
    panda$core$Bit $tmp1358 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_target);
    panda$core$Bit $tmp1359 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1358);
    if ($tmp1359.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    panda$core$Bit $tmp1360 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_type);
    panda$core$Bit $tmp1361 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1360);
    if ($tmp1361.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp1363 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_type);
    cl1362 = $tmp1363;
    PANDA_ASSERT(((panda$core$Bit) { cl1362 != NULL }).value);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, cl1362);
    if (((panda$core$Bit) { cl1362->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp1365 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_type, cl1362->rawSuper);
        org$pandalanguage$pandac$Type* $tmp1366 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_type, $tmp1365);
        panda$core$Int64$nullable $tmp1367 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1366, p_target);
        cost1364 = $tmp1367;
        if (((panda$core$Bit) { cost1364.nonnull }).value) {
        {
            panda$core$Int64 $tmp1368 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) cost1364.value), ((panda$core$Int64) ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }).value));
            return ((panda$core$Int64$nullable) { $tmp1368, true });
        }
        }
    }
    }
    {
        ITable* $tmp1370 = ((panda$collections$Iterable*) cl1362->rawInterfaces)->$class->itable;
        while ($tmp1370->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1370 = $tmp1370->next;
        }
        $fn1372 $tmp1371 = $tmp1370->methods[0];
        panda$collections$Iterator* $tmp1373 = $tmp1371(((panda$collections$Iterable*) cl1362->rawInterfaces));
        intf$Iter1369 = $tmp1373;
        $l1374:;
        ITable* $tmp1376 = intf$Iter1369->$class->itable;
        while ($tmp1376->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1376 = $tmp1376->next;
        }
        $fn1378 $tmp1377 = $tmp1376->methods[0];
        panda$core$Bit $tmp1379 = $tmp1377(intf$Iter1369);
        panda$core$Bit $tmp1380 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1379);
        if (!$tmp1380.value) goto $l1375;
        {
            ITable* $tmp1382 = intf$Iter1369->$class->itable;
            while ($tmp1382->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1382 = $tmp1382->next;
            }
            $fn1384 $tmp1383 = $tmp1382->methods[1];
            panda$core$Object* $tmp1385 = $tmp1383(intf$Iter1369);
            intf1381 = ((org$pandalanguage$pandac$Type*) $tmp1385);
            org$pandalanguage$pandac$Type* $tmp1387 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_type, intf1381);
            org$pandalanguage$pandac$Type* $tmp1388 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_type, $tmp1387);
            panda$core$Int64$nullable $tmp1389 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1388, p_target);
            cost1386 = $tmp1389;
            if (((panda$core$Bit) { cost1386.nonnull }).value) {
            {
                panda$core$Int64 $tmp1390 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) cost1386.value), ((panda$core$Int64) ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }).value));
                return ((panda$core$Int64$nullable) { $tmp1390, true });
            }
            }
        }
        goto $l1374;
        $l1375:;
    }
    return ((panda$core$Int64$nullable) { .nonnull = false });
}
panda$core$Int64 org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_value) {
    panda$core$Bit $tmp1392 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { -128 }));
    bool $tmp1391 = $tmp1392.value;
    if (!$tmp1391) goto $l1393;
    panda$core$Bit $tmp1394 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { 127 }));
    $tmp1391 = $tmp1394.value;
    $l1393:;
    panda$core$Bit $tmp1395 = { $tmp1391 };
    if ($tmp1395.value) {
    {
        return ((panda$core$Int64) { 8 });
    }
    }
    panda$core$Bit $tmp1397 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { -32768 }));
    bool $tmp1396 = $tmp1397.value;
    if (!$tmp1396) goto $l1398;
    panda$core$Bit $tmp1399 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { 32767 }));
    $tmp1396 = $tmp1399.value;
    $l1398:;
    panda$core$Bit $tmp1400 = { $tmp1396 };
    if ($tmp1400.value) {
    {
        return ((panda$core$Int64) { 16 });
    }
    }
    panda$core$Bit $tmp1402 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { -2147483648 }));
    bool $tmp1401 = $tmp1402.value;
    if (!$tmp1401) goto $l1403;
    panda$core$Bit $tmp1404 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { 2147483647 }));
    $tmp1401 = $tmp1404.value;
    $l1403:;
    panda$core$Bit $tmp1405 = { $tmp1401 };
    if ($tmp1405.value) {
    {
        return ((panda$core$Int64) { 32 });
    }
    }
    return ((panda$core$Int64) { 64 });
}
panda$core$Int64 org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64(org$pandalanguage$pandac$Compiler* self, panda$core$UInt64 p_value) {
    panda$core$Bit $tmp1406 = panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(p_value, ((panda$core$UInt64) { 255 }));
    if ($tmp1406.value) {
    {
        return ((panda$core$Int64) { 8 });
    }
    }
    panda$core$Bit $tmp1407 = panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(p_value, ((panda$core$UInt64) { 65535 }));
    if ($tmp1407.value) {
    {
        return ((panda$core$Int64) { 16 });
    }
    }
    panda$core$Bit $tmp1408 = panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(p_value, ((panda$core$UInt64) { 4294967295 }));
    if ($tmp1408.value) {
    {
        return ((panda$core$Int64) { 32 });
    }
    }
    return ((panda$core$Int64) { 64 });
}
panda$core$Int64$nullable org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr, org$pandalanguage$pandac$Type* p_target) {
    panda$core$Int64$nullable cost1411;
    panda$core$Int64$nullable cost11482;
    panda$core$Int64$nullable cost21486;
    org$pandalanguage$pandac$ClassDecl* targetClass1496;
    panda$collections$Iterator* m$Iter1498;
    org$pandalanguage$pandac$MethodDecl* m1510;
    panda$core$Int64$nullable cost1519;
    panda$core$Bit $tmp1409 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_expr->type, p_target);
    if ($tmp1409.value) {
    {
        return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
    }
    }
    switch (p_target->typeKind.value) {
        case 11:
        {
            panda$core$Bit $tmp1410 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1030 }));
            if ($tmp1410.value) {
            {
                return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
            }
            }
            panda$core$Object* $tmp1412 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$Int64$nullable $tmp1413 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, ((org$pandalanguage$pandac$Type*) $tmp1412));
            cost1411 = $tmp1413;
            if (((panda$core$Bit) { !cost1411.nonnull }).value) {
            {
                return ((panda$core$Int64$nullable) { .nonnull = false });
            }
            }
            panda$core$Bit $tmp1414 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->type->typeKind, ((panda$core$Int64) { 11 }));
            if ($tmp1414.value) {
            {
                return cost1411;
            }
            }
            panda$core$Int64 $tmp1415 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) cost1411.value), ((panda$core$Int64) { 1 }));
            return ((panda$core$Int64$nullable) { $tmp1415, true });
        }
        break;
        case 22:
        {
            panda$core$Int64$nullable $tmp1416 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, p_target->parameter->bound);
            return $tmp1416;
        }
        break;
    }
    switch (p_expr->kind.value) {
        case 1011:
        {
            panda$core$Bit $tmp1417 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 19 }));
            if ($tmp1417.value) {
            {
                return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
            }
            }
            panda$core$Bit $tmp1418 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_target);
            if ($tmp1418.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1419 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
                panda$core$Int64$nullable $tmp1420 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1419, p_target);
                return $tmp1420;
            }
            }
        }
        break;
        case 1004:
        {
            panda$core$Bit $tmp1423 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            bool $tmp1422 = $tmp1423.value;
            if (!$tmp1422) goto $l1424;
            panda$core$Int64 $tmp1425 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1426 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(self, $tmp1425);
            panda$core$Int64 $tmp1427 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1428 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1426, $tmp1427);
            $tmp1422 = $tmp1428.value;
            $l1424:;
            panda$core$Bit $tmp1429 = { $tmp1422 };
            bool $tmp1421 = $tmp1429.value;
            if ($tmp1421) goto $l1430;
            panda$core$Bit $tmp1432 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 13 }));
            bool $tmp1431 = $tmp1432.value;
            if (!$tmp1431) goto $l1433;
            panda$core$Int64 $tmp1434 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64(self, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1435 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1436 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1434, $tmp1435);
            $tmp1431 = $tmp1436.value;
            $l1433:;
            panda$core$Bit $tmp1437 = { $tmp1431 };
            $tmp1421 = $tmp1437.value;
            $l1430:;
            panda$core$Bit $tmp1438 = { $tmp1421 };
            if ($tmp1438.value) {
            {
                return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
            }
            }
            panda$core$Bit $tmp1439 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            panda$core$Bit $tmp1440 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1439);
            if ($tmp1440.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1441 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                panda$core$Int64$nullable $tmp1442 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1441, p_target);
                return $tmp1442;
            }
            }
        }
        break;
        case 1032:
        {
            panda$core$Bit $tmp1445 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            bool $tmp1444 = $tmp1445.value;
            if (!$tmp1444) goto $l1446;
            panda$core$Int64 $tmp1447 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1448 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp1447);
            panda$core$Int64 $tmp1449 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(self, $tmp1448);
            panda$core$Int64 $tmp1450 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1451 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1449, $tmp1450);
            $tmp1444 = $tmp1451.value;
            $l1446:;
            panda$core$Bit $tmp1452 = { $tmp1444 };
            bool $tmp1443 = $tmp1452.value;
            if ($tmp1443) goto $l1453;
            panda$core$Bit $tmp1455 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 13 }));
            bool $tmp1454 = $tmp1455.value;
            if (!$tmp1454) goto $l1456;
            panda$core$Int64 $tmp1457 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1458 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp1457);
            panda$core$Int64 $tmp1459 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(self, $tmp1458);
            panda$core$Int64 $tmp1460 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1461 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1459, $tmp1460);
            $tmp1454 = $tmp1461.value;
            $l1456:;
            panda$core$Bit $tmp1462 = { $tmp1454 };
            $tmp1443 = $tmp1462.value;
            $l1453:;
            panda$core$Bit $tmp1463 = { $tmp1443 };
            if ($tmp1463.value) {
            {
                return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
            }
            }
            panda$core$Bit $tmp1464 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            panda$core$Bit $tmp1465 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1464);
            if ($tmp1465.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1466 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                panda$core$Int64$nullable $tmp1467 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1466, p_target);
                return $tmp1467;
            }
            }
        }
        break;
        case 1031:
        {
            panda$core$Bit $tmp1468 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(p_target);
            if ($tmp1468.value) {
            {
                panda$core$Int64 $tmp1469 = panda$collections$Array$get_count$R$panda$core$Int64(p_expr->children);
                panda$core$Bit $tmp1470 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1469, ((panda$core$Int64) { 3 }));
                PANDA_ASSERT($tmp1470.value);
                panda$core$Object* $tmp1472 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Bit $tmp1473 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1472)->kind, ((panda$core$Int64) { 1030 }));
                bool $tmp1471 = $tmp1473.value;
                if (!$tmp1471) goto $l1474;
                panda$core$Object* $tmp1475 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
                panda$core$Bit $tmp1476 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1475)->kind, ((panda$core$Int64) { 1030 }));
                $tmp1471 = $tmp1476.value;
                $l1474:;
                panda$core$Bit $tmp1477 = { $tmp1471 };
                if ($tmp1477.value) {
                {
                    panda$core$Object* $tmp1478 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                    panda$core$Bit $tmp1479 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1478));
                    panda$core$Bit $tmp1480 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1479);
                    if ($tmp1480.value) {
                    {
                        return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
                    }
                    }
                    return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true });
                }
                }
                panda$core$Bit $tmp1481 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 21 }));
                PANDA_ASSERT($tmp1481.value);
                panda$core$Object* $tmp1483 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Object* $tmp1484 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                panda$core$Int64$nullable $tmp1485 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1483), ((org$pandalanguage$pandac$Type*) $tmp1484));
                cost11482 = $tmp1485;
                if (((panda$core$Bit) { !cost11482.nonnull }).value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Object* $tmp1487 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
                panda$core$Object* $tmp1488 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                panda$core$Int64$nullable $tmp1489 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1487), ((org$pandalanguage$pandac$Type*) $tmp1488));
                cost21486 = $tmp1489;
                if (((panda$core$Bit) { !cost21486.nonnull }).value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Int64 $tmp1490 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) cost11482.value), ((panda$core$Int64) cost21486.value));
                return ((panda$core$Int64$nullable) { $tmp1490, true });
            }
            }
            org$pandalanguage$pandac$Type* $tmp1491 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
            panda$core$Int64$nullable $tmp1492 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1491, p_target);
            return $tmp1492;
        }
        break;
        case 1040:
        {
            panda$core$Int64$nullable $tmp1493 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr->type, p_target);
            return $tmp1493;
        }
        break;
    }
    panda$core$Bit $tmp1494 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_target);
    panda$core$Bit $tmp1495 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1494);
    if ($tmp1495.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp1497 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_target);
    targetClass1496 = $tmp1497;
    if (((panda$core$Bit) { targetClass1496 == NULL }).value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    {
        ITable* $tmp1499 = ((panda$collections$Iterable*) targetClass1496->methods)->$class->itable;
        while ($tmp1499->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1499 = $tmp1499->next;
        }
        $fn1501 $tmp1500 = $tmp1499->methods[0];
        panda$collections$Iterator* $tmp1502 = $tmp1500(((panda$collections$Iterable*) targetClass1496->methods));
        m$Iter1498 = $tmp1502;
        $l1503:;
        ITable* $tmp1505 = m$Iter1498->$class->itable;
        while ($tmp1505->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1505 = $tmp1505->next;
        }
        $fn1507 $tmp1506 = $tmp1505->methods[0];
        panda$core$Bit $tmp1508 = $tmp1506(m$Iter1498);
        panda$core$Bit $tmp1509 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1508);
        if (!$tmp1509.value) goto $l1504;
        {
            ITable* $tmp1511 = m$Iter1498->$class->itable;
            while ($tmp1511->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1511 = $tmp1511->next;
            }
            $fn1513 $tmp1512 = $tmp1511->methods[1];
            panda$core$Object* $tmp1514 = $tmp1512(m$Iter1498);
            m1510 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1514);
            panda$core$Bit $tmp1515 = org$pandalanguage$pandac$Annotations$isImplicit$R$panda$core$Bit(m1510->annotations);
            if ($tmp1515.value) {
            {
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m1510);
                panda$core$Bit $tmp1516 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(m1510->methodKind, ((panda$core$Int64) { 59 }));
                PANDA_ASSERT($tmp1516.value);
                panda$core$Int64 $tmp1517 = panda$collections$Array$get_count$R$panda$core$Int64(m1510->parameters);
                panda$core$Bit $tmp1518 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1517, ((panda$core$Int64) { 1 }));
                PANDA_ASSERT($tmp1518.value);
                panda$core$Object* $tmp1520 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(m1510->parameters, ((panda$core$Int64) { 0 }));
                panda$core$Int64$nullable $tmp1521 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1520)->type);
                cost1519 = $tmp1521;
                if (((panda$core$Bit) { cost1519.nonnull }).value) {
                {
                    return cost1519;
                }
                }
            }
            }
        }
        goto $l1503;
        $l1504:;
    }
    PANDA_ASSERT(((panda$core$Bit) { p_expr->type != NULL }).value);
    panda$core$Int64$nullable $tmp1522 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr->type, p_target);
    return $tmp1522;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$doCoerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr, org$pandalanguage$pandac$Type* p_target) {
    panda$collections$Array* children1531;
    org$pandalanguage$pandac$IRNode* intermediate1536;
    org$pandalanguage$pandac$IRNode* coerced1564;
    org$pandalanguage$pandac$IRNode* coerced1585;
    org$pandalanguage$pandac$IRNode* varType1599;
    org$pandalanguage$pandac$Type* param1607;
    org$pandalanguage$pandac$IRNode* start1609;
    org$pandalanguage$pandac$IRNode* end1612;
    panda$collections$Array* args1615;
    org$pandalanguage$pandac$IRNode* target1622;
    panda$collections$ListView* methods1629;
    panda$collections$Array* args1631;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1632;
    panda$collections$Array* best1634;
    panda$core$Int64$nullable bestCost1637;
    panda$collections$Iterator* m$Iter1638;
    org$pandalanguage$pandac$MethodRef* m1650;
    panda$core$Int64$nullable cost1655;
    org$pandalanguage$pandac$IRNode* callTarget1661;
    org$pandalanguage$pandac$IRNode* result1667;
    panda$collections$Array* args1671;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1672;
    panda$collections$Array* children1684;
    org$pandalanguage$pandac$IRNode* intermediate1690;
    org$pandalanguage$pandac$ClassDecl* cl1695;
    panda$collections$Iterator* m$Iter1697;
    org$pandalanguage$pandac$MethodDecl* m1709;
    org$pandalanguage$pandac$IRNode* type1720;
    panda$collections$Array* args1725;
    panda$collections$Array* children1729;
    if (((panda$core$Bit) { p_expr == NULL }).value) {
    {
        return NULL;
    }
    }
    PANDA_ASSERT(p_expr->type->resolved.value);
    PANDA_ASSERT(p_target->resolved.value);
    panda$core$Bit $tmp1523 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_expr->type, p_target);
    if ($tmp1523.value) {
    {
        return p_expr;
    }
    }
    panda$core$Bit $tmp1525 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->type->typeKind, ((panda$core$Int64) { 11 }));
    bool $tmp1524 = $tmp1525.value;
    if (!$tmp1524) goto $l1526;
    panda$core$Bit $tmp1527 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
    $tmp1524 = $tmp1527.value;
    $l1526:;
    panda$core$Bit $tmp1528 = { $tmp1524 };
    if ($tmp1528.value) {
    {
        panda$core$Object* $tmp1529 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp1530 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1529), p_target);
        if ($tmp1530.value) {
        {
            panda$collections$Array* $tmp1532 = (panda$collections$Array*) malloc(40);
            $tmp1532->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1532->refCount.value = 1;
            panda$collections$Array$init($tmp1532);
            children1531 = $tmp1532;
            panda$collections$Array$add$panda$collections$Array$T(children1531, ((panda$core$Object*) p_expr));
            org$pandalanguage$pandac$IRNode* $tmp1534 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp1534->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1534->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1534, ((panda$core$Int64) { 1009 }), p_expr->position, p_target, ((panda$core$Object*) wrap_panda$core$Bit(((panda$core$Bit) { false }))), ((panda$collections$ListView*) children1531));
            return $tmp1534;
        }
        }
        panda$core$Object* $tmp1537 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->type->subtypes, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp1538 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, ((org$pandalanguage$pandac$Type*) $tmp1537));
        intermediate1536 = $tmp1538;
        org$pandalanguage$pandac$IRNode* $tmp1539 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, intermediate1536, p_target);
        return $tmp1539;
    }
    }
    switch (p_expr->kind.value) {
        case 1004:
        {
            panda$core$Bit $tmp1541 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            bool $tmp1540 = $tmp1541.value;
            if (!$tmp1540) goto $l1542;
            panda$core$Int64 $tmp1543 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64(self, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1544 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1545 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1543, $tmp1544);
            $tmp1540 = $tmp1545.value;
            $l1542:;
            panda$core$Bit $tmp1546 = { $tmp1540 };
            if ($tmp1546.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1547 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1547->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1547->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp1547, ((panda$core$Int64) { 1004 }), p_expr->position, p_target, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
                return $tmp1547;
            }
            }
            else {
            panda$core$Bit $tmp1550 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 13 }));
            bool $tmp1549 = $tmp1550.value;
            if (!$tmp1549) goto $l1551;
            panda$core$Int64 $tmp1552 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64(self, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1553 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1554 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1552, $tmp1553);
            $tmp1549 = $tmp1554.value;
            $l1551:;
            panda$core$Bit $tmp1555 = { $tmp1549 };
            if ($tmp1555.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1556 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1556->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1556->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp1556, ((panda$core$Int64) { 1004 }), p_expr->position, p_target, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
                return $tmp1556;
            }
            }
            }
            panda$core$Bit $tmp1559 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 10 }));
            bool $tmp1558 = $tmp1559.value;
            if (!$tmp1558) goto $l1560;
            panda$core$Bit $tmp1561 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            panda$core$Bit $tmp1562 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1561);
            $tmp1558 = $tmp1562.value;
            $l1560:;
            panda$core$Bit $tmp1563 = { $tmp1558 };
            if ($tmp1563.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1565 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp1566 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, $tmp1565);
                coerced1564 = $tmp1566;
                if (((panda$core$Bit) { coerced1564 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$IRNode* $tmp1567 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, coerced1564, p_target);
                return $tmp1567;
            }
            }
        }
        break;
        case 1032:
        {
            panda$core$Bit $tmp1569 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            bool $tmp1568 = $tmp1569.value;
            if (!$tmp1568) goto $l1570;
            panda$core$Int64 $tmp1571 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1572 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp1571);
            panda$core$Int64 $tmp1573 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(self, $tmp1572);
            panda$core$Int64 $tmp1574 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1575 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1573, $tmp1574);
            $tmp1568 = $tmp1575.value;
            $l1570:;
            panda$core$Bit $tmp1576 = { $tmp1568 };
            if ($tmp1576.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1577 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1577->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1577->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp1577, ((panda$core$Int64) { 1032 }), p_expr->position, p_target, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
                return $tmp1577;
            }
            }
            panda$core$Bit $tmp1580 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 10 }));
            bool $tmp1579 = $tmp1580.value;
            if (!$tmp1579) goto $l1581;
            panda$core$Bit $tmp1582 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            panda$core$Bit $tmp1583 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1582);
            $tmp1579 = $tmp1583.value;
            $l1581:;
            panda$core$Bit $tmp1584 = { $tmp1579 };
            if ($tmp1584.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1586 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp1587 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, $tmp1586);
                coerced1585 = $tmp1587;
                if (((panda$core$Bit) { coerced1585 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$IRNode* $tmp1588 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, coerced1585, p_target);
                return $tmp1588;
            }
            }
        }
        break;
        case 1011:
        {
            org$pandalanguage$pandac$Type* $tmp1589 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1590 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1589);
            if ($tmp1590.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1591 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1591->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1591->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp1591, ((panda$core$Int64) { 1011 }), p_expr->position, p_target, ((panda$core$Bit$wrapper*) p_expr->payload)->value);
                return $tmp1591;
            }
            }
            panda$core$Bit $tmp1594 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_target);
            bool $tmp1593 = $tmp1594.value;
            if (!$tmp1593) goto $l1595;
            org$pandalanguage$pandac$Type* $tmp1596 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1597 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1596);
            $tmp1593 = $tmp1597.value;
            $l1595:;
            panda$core$Bit $tmp1598 = { $tmp1593 };
            if ($tmp1598.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1600 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp1601 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, $tmp1600);
                varType1599 = $tmp1601;
                if (((panda$core$Bit) { varType1599 != NULL }).value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp1602 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, varType1599, p_target);
                    return $tmp1602;
                }
                }
            }
            }
        }
        break;
        case 1031:
        {
            panda$core$Int64 $tmp1603 = panda$collections$Array$get_count$R$panda$core$Int64(p_expr->children);
            panda$core$Bit $tmp1604 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1603, ((panda$core$Int64) { 3 }));
            PANDA_ASSERT($tmp1604.value);
            panda$core$Bit $tmp1605 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(p_target);
            if ($tmp1605.value) {
            {
                panda$core$Bit $tmp1606 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 21 }));
                PANDA_ASSERT($tmp1606.value);
                panda$core$Object* $tmp1608 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                param1607 = ((org$pandalanguage$pandac$Type*) $tmp1608);
                panda$core$Object* $tmp1610 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$IRNode* $tmp1611 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1610), param1607);
                start1609 = $tmp1611;
                if (((panda$core$Bit) { start1609 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$core$Object* $tmp1613 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$IRNode* $tmp1614 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1613), param1607);
                end1612 = $tmp1614;
                if (((panda$core$Bit) { end1612 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp1616 = (panda$collections$Array*) malloc(40);
                $tmp1616->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp1616->refCount.value = 1;
                panda$collections$Array$init($tmp1616);
                args1615 = $tmp1616;
                panda$collections$Array$add$panda$collections$Array$T(args1615, ((panda$core$Object*) start1609));
                panda$collections$Array$add$panda$collections$Array$T(args1615, ((panda$core$Object*) end1612));
                panda$core$Object* $tmp1618 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 2 }));
                panda$collections$Array$add$panda$collections$Array$T(args1615, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp1618)));
                org$pandalanguage$pandac$IRNode* $tmp1619 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1619->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1619->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1621 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp1619, ((panda$core$Int64) { 1011 }), p_expr->position, $tmp1621, ((panda$core$Bit$wrapper*) p_expr->payload)->value);
                panda$collections$Array$add$panda$collections$Array$T(args1615, ((panda$core$Object*) $tmp1619));
                org$pandalanguage$pandac$IRNode* $tmp1623 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1623->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1623->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1625 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1623, ((panda$core$Int64) { 1001 }), p_expr->position, $tmp1625, p_target);
                target1622 = $tmp1623;
                org$pandalanguage$pandac$IRNode* $tmp1626 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target1622, ((panda$collections$ListView*) args1615));
                return $tmp1626;
            }
            }
            else {
            {
                org$pandalanguage$pandac$IRNode* $tmp1627 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp1628 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp1627, p_target);
                return $tmp1628;
            }
            }
        }
        break;
        case 1039:
        {
            panda$core$Object* $tmp1630 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            methods1629 = ((panda$collections$ListView*) ((org$pandalanguage$pandac$IRNode*) $tmp1630)->payload);
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1632, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
            panda$collections$Array* $tmp1633 = panda$collections$Array$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT(p_expr->children, $tmp1632);
            args1631 = $tmp1633;
            panda$collections$Array* $tmp1635 = (panda$collections$Array*) malloc(40);
            $tmp1635->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1635->refCount.value = 1;
            panda$collections$Array$init($tmp1635);
            best1634 = $tmp1635;
            bestCost1637 = ((panda$core$Int64$nullable) { .nonnull = false });
            {
                ITable* $tmp1639 = ((panda$collections$Iterable*) methods1629)->$class->itable;
                while ($tmp1639->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1639 = $tmp1639->next;
                }
                $fn1641 $tmp1640 = $tmp1639->methods[0];
                panda$collections$Iterator* $tmp1642 = $tmp1640(((panda$collections$Iterable*) methods1629));
                m$Iter1638 = $tmp1642;
                $l1643:;
                ITable* $tmp1645 = m$Iter1638->$class->itable;
                while ($tmp1645->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1645 = $tmp1645->next;
                }
                $fn1647 $tmp1646 = $tmp1645->methods[0];
                panda$core$Bit $tmp1648 = $tmp1646(m$Iter1638);
                panda$core$Bit $tmp1649 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1648);
                if (!$tmp1649.value) goto $l1644;
                {
                    ITable* $tmp1651 = m$Iter1638->$class->itable;
                    while ($tmp1651->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1651 = $tmp1651->next;
                    }
                    $fn1653 $tmp1652 = $tmp1651->methods[1];
                    panda$core$Object* $tmp1654 = $tmp1652(m$Iter1638);
                    m1650 = ((org$pandalanguage$pandac$MethodRef*) $tmp1654);
                    panda$core$Int64$nullable $tmp1656 = org$pandalanguage$pandac$Compiler$callCost$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(self, m1650, ((panda$collections$ListView*) args1631), p_target);
                    cost1655 = $tmp1656;
                    if (((panda$core$Bit) { !cost1655.nonnull }).value) {
                    {
                        goto $l1643;
                    }
                    }
                    if (((panda$core$Bit) { !bestCost1637.nonnull }).value) {
                    {
                        panda$collections$Array$add$panda$collections$Array$T(best1634, ((panda$core$Object*) m1650));
                        bestCost1637 = cost1655;
                        goto $l1643;
                    }
                    }
                    panda$core$Bit $tmp1657 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost1655.value), ((panda$core$Int64) bestCost1637.value));
                    if ($tmp1657.value) {
                    {
                        panda$collections$Array$clear(best1634);
                        bestCost1637 = cost1655;
                    }
                    }
                    panda$core$Bit $tmp1658 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost1655.value), ((panda$core$Int64) bestCost1637.value));
                    if ($tmp1658.value) {
                    {
                        panda$collections$Array$add$panda$collections$Array$T(best1634, ((panda$core$Object*) m1650));
                    }
                    }
                }
                goto $l1643;
                $l1644:;
            }
            panda$core$Int64 $tmp1659 = panda$collections$Array$get_count$R$panda$core$Int64(best1634);
            panda$core$Bit $tmp1660 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1659, ((panda$core$Int64) { 1 }));
            if ($tmp1660.value) {
            {
                panda$core$Object* $tmp1662 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Int64 $tmp1663 = panda$collections$Array$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp1662)->children);
                panda$core$Bit $tmp1664 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1663, ((panda$core$Int64) { 0 }));
                if ($tmp1664.value) {
                {
                    panda$core$Object* $tmp1665 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                    panda$core$Object* $tmp1666 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp1665)->children, ((panda$core$Int64) { 0 }));
                    callTarget1661 = ((org$pandalanguage$pandac$IRNode*) $tmp1666);
                }
                }
                else {
                {
                    callTarget1661 = NULL;
                }
                }
                panda$core$Object* $tmp1668 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(best1634, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$IRNode* $tmp1669 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr->position, callTarget1661, ((org$pandalanguage$pandac$MethodRef*) $tmp1668), ((panda$collections$ListView*) args1631));
                result1667 = $tmp1669;
                org$pandalanguage$pandac$IRNode* $tmp1670 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, result1667, p_target);
                return $tmp1670;
            }
            }
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        break;
        case 1040:
        {
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1672, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
            panda$collections$Array* $tmp1673 = panda$collections$Array$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT(p_expr->children, $tmp1672);
            args1671 = $tmp1673;
            panda$core$Object* $tmp1674 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp1676 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1674), &$s1675, ((panda$collections$ListView*) args1671), p_target);
            org$pandalanguage$pandac$IRNode* $tmp1677 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp1676, p_target);
            return $tmp1677;
        }
        break;
    }
    panda$core$Bit $tmp1678 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp1678.value) {
    {
        panda$core$Bit $tmp1679 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1030 }));
        if ($tmp1679.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp1680 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp1680->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1680->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp1680, ((panda$core$Int64) { 1030 }), p_expr->position, p_target);
            return $tmp1680;
        }
        }
        panda$core$Object* $tmp1682 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp1683 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_expr->type, ((org$pandalanguage$pandac$Type*) $tmp1682));
        if ($tmp1683.value) {
        {
            panda$collections$Array* $tmp1685 = (panda$collections$Array*) malloc(40);
            $tmp1685->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1685->refCount.value = 1;
            panda$collections$Array$init($tmp1685);
            children1684 = $tmp1685;
            panda$collections$Array$add$panda$collections$Array$T(children1684, ((panda$core$Object*) p_expr));
            org$pandalanguage$pandac$IRNode* $tmp1687 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp1687->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1687->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1687, ((panda$core$Int64) { 1009 }), p_expr->position, p_target, ((panda$core$Object*) wrap_panda$core$Bit(((panda$core$Bit) { false }))), ((panda$collections$ListView*) children1684));
            return $tmp1687;
        }
        }
        panda$core$Bit $tmp1689 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_expr->type->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp1689.value) {
        {
            panda$core$Object* $tmp1691 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp1692 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, ((org$pandalanguage$pandac$Type*) $tmp1691));
            intermediate1690 = $tmp1692;
            org$pandalanguage$pandac$IRNode* $tmp1693 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, intermediate1690, p_target);
            return $tmp1693;
        }
        }
    }
    }
    panda$core$Int64$nullable $tmp1694 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, p_target);
    if (((panda$core$Bit) { $tmp1694.nonnull }).value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp1696 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_target);
        cl1695 = $tmp1696;
        if (((panda$core$Bit) { cl1695 != NULL }).value) {
        {
            {
                ITable* $tmp1698 = ((panda$collections$Iterable*) cl1695->methods)->$class->itable;
                while ($tmp1698->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1698 = $tmp1698->next;
                }
                $fn1700 $tmp1699 = $tmp1698->methods[0];
                panda$collections$Iterator* $tmp1701 = $tmp1699(((panda$collections$Iterable*) cl1695->methods));
                m$Iter1697 = $tmp1701;
                $l1702:;
                ITable* $tmp1704 = m$Iter1697->$class->itable;
                while ($tmp1704->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1704 = $tmp1704->next;
                }
                $fn1706 $tmp1705 = $tmp1704->methods[0];
                panda$core$Bit $tmp1707 = $tmp1705(m$Iter1697);
                panda$core$Bit $tmp1708 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1707);
                if (!$tmp1708.value) goto $l1703;
                {
                    ITable* $tmp1710 = m$Iter1697->$class->itable;
                    while ($tmp1710->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1710 = $tmp1710->next;
                    }
                    $fn1712 $tmp1711 = $tmp1710->methods[1];
                    panda$core$Object* $tmp1713 = $tmp1711(m$Iter1697);
                    m1709 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1713);
                    panda$core$Bit $tmp1714 = org$pandalanguage$pandac$Annotations$isImplicit$R$panda$core$Bit(m1709->annotations);
                    if ($tmp1714.value) {
                    {
                        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m1709);
                        panda$core$Bit $tmp1715 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(m1709->methodKind, ((panda$core$Int64) { 59 }));
                        PANDA_ASSERT($tmp1715.value);
                        panda$core$Int64 $tmp1716 = panda$collections$Array$get_count$R$panda$core$Int64(m1709->parameters);
                        panda$core$Bit $tmp1717 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1716, ((panda$core$Int64) { 1 }));
                        PANDA_ASSERT($tmp1717.value);
                        panda$core$Object* $tmp1718 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(m1709->parameters, ((panda$core$Int64) { 0 }));
                        panda$core$Int64$nullable $tmp1719 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1718)->type);
                        if (((panda$core$Bit) { $tmp1719.nonnull }).value) {
                        {
                            org$pandalanguage$pandac$IRNode* $tmp1721 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                            $tmp1721->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                            $tmp1721->refCount.value = 1;
                            org$pandalanguage$pandac$Type* $tmp1723 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                            org$pandalanguage$pandac$Type* $tmp1724 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl1695);
                            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1721, ((panda$core$Int64) { 1001 }), p_expr->position, $tmp1723, $tmp1724);
                            type1720 = $tmp1721;
                            panda$collections$Array* $tmp1726 = (panda$collections$Array*) malloc(40);
                            $tmp1726->$class = (panda$core$Class*) &panda$collections$Array$class;
                            $tmp1726->refCount.value = 1;
                            panda$collections$Array$init$panda$core$Int64($tmp1726, ((panda$core$Int64) { 1 }));
                            args1725 = $tmp1726;
                            panda$collections$Array$add$panda$collections$Array$T(args1725, ((panda$core$Object*) p_expr));
                            org$pandalanguage$pandac$IRNode* $tmp1728 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, type1720, ((panda$collections$ListView*) args1725));
                            return $tmp1728;
                        }
                        }
                    }
                    }
                }
                goto $l1702;
                $l1703:;
            }
        }
        }
        panda$collections$Array* $tmp1730 = (panda$collections$Array*) malloc(40);
        $tmp1730->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp1730->refCount.value = 1;
        panda$collections$Array$init$panda$core$Int64($tmp1730, ((panda$core$Int64) { 1 }));
        children1729 = $tmp1730;
        panda$collections$Array$add$panda$collections$Array$T(children1729, ((panda$core$Object*) p_expr));
        org$pandalanguage$pandac$IRNode* $tmp1732 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp1732->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp1732->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1732, ((panda$core$Int64) { 1009 }), p_expr->position, p_target, ((panda$core$Object*) wrap_panda$core$Bit(((panda$core$Bit) { false }))), ((panda$collections$ListView*) children1729));
        return $tmp1732;
    }
    }
    panda$core$String* $tmp1735 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1734, ((panda$core$Object*) p_target));
    panda$core$String* $tmp1737 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1735, &$s1736);
    panda$core$String* $tmp1738 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1737, ((panda$core$Object*) p_expr->type));
    panda$core$String* $tmp1740 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1738, &$s1739);
    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_expr->position, $tmp1740);
    return NULL;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr, org$pandalanguage$pandac$Type* p_target) {
    org$pandalanguage$pandac$IRNode* result1741;
    org$pandalanguage$pandac$IRNode* $tmp1742 = org$pandalanguage$pandac$Compiler$doCoerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, p_target);
    result1741 = $tmp1742;
    bool $tmp1743 = ((panda$core$Bit) { result1741 == NULL }).value;
    if ($tmp1743) goto $l1744;
    panda$core$Bit $tmp1745 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(result1741->type, p_target);
    $tmp1743 = $tmp1745.value;
    $l1744:;
    panda$core$Bit $tmp1746 = { $tmp1743 };
    PANDA_ASSERT($tmp1746.value);
    return result1741;
}
panda$core$Bit org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type, org$pandalanguage$pandac$Type* p_target) {
    panda$core$Bit $tmp1748 = org$pandalanguage$pandac$Type$isPointer$R$panda$core$Bit(p_type);
    bool $tmp1747 = $tmp1748.value;
    if (!$tmp1747) goto $l1749;
    panda$core$Bit $tmp1750 = org$pandalanguage$pandac$Type$isPointer$R$panda$core$Bit(p_target);
    $tmp1747 = $tmp1750.value;
    $l1749:;
    panda$core$Bit $tmp1751 = { $tmp1747 };
    if ($tmp1751.value) {
    {
        return ((panda$core$Bit) { true });
    }
    }
    panda$core$Int64$nullable $tmp1752 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_type, p_target);
    if (((panda$core$Bit) { $tmp1752.nonnull }).value) {
    {
        return ((panda$core$Bit) { true });
    }
    }
    panda$core$Bit $tmp1754 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_type);
    bool $tmp1753 = $tmp1754.value;
    if (!$tmp1753) goto $l1755;
    panda$core$Bit $tmp1756 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_target);
    $tmp1753 = $tmp1756.value;
    $l1755:;
    panda$core$Bit $tmp1757 = { $tmp1753 };
    if ($tmp1757.value) {
    {
        return ((panda$core$Bit) { true });
    }
    }
    panda$core$Bit $tmp1758 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 16 }));
    if ($tmp1758.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Int64$nullable $tmp1759 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_target, p_type);
    return ((panda$core$Bit) { $tmp1759.nonnull });
}
panda$core$Bit org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_node, org$pandalanguage$pandac$Type* p_target) {
    panda$core$Bit result1761;
    org$pandalanguage$pandac$IRNode* resolved1768;
    panda$core$Int64$nullable $tmp1760 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_node, p_target);
    if (((panda$core$Bit) { $tmp1760.nonnull }).value) {
    {
        return ((panda$core$Bit) { true });
    }
    }
    panda$core$Bit $tmp1762 = org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_node->type, p_target);
    result1761 = $tmp1762;
    panda$core$Bit $tmp1764 = panda$core$Bit$$NOT$R$panda$core$Bit(result1761);
    bool $tmp1763 = $tmp1764.value;
    if (!$tmp1763) goto $l1765;
    panda$core$Bit $tmp1766 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_node->type->typeKind, ((panda$core$Int64) { 17 }));
    $tmp1763 = $tmp1766.value;
    $l1765:;
    panda$core$Bit $tmp1767 = { $tmp1763 };
    if ($tmp1767.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp1769 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_node);
        resolved1768 = $tmp1769;
        if (((panda$core$Bit) { resolved1768 != NULL }).value) {
        {
            panda$core$Bit $tmp1770 = org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, resolved1768, p_target);
            result1761 = $tmp1770;
        }
        }
    }
    }
    return result1761;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_node, org$pandalanguage$pandac$Position p_position, panda$core$Bit p_isExplicit, org$pandalanguage$pandac$Type* p_target) {
    org$pandalanguage$pandac$IRNode* resolved1791;
    panda$collections$Array* children1794;
    panda$core$Bit $tmp1771 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_node->type, p_target);
    if ($tmp1771.value) {
    {
        return p_node;
    }
    }
    org$pandalanguage$pandac$Type* $tmp1772 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1773 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1772);
    PANDA_ASSERT($tmp1773.value);
    bool $tmp1774 = p_isExplicit.value;
    if (!$tmp1774) goto $l1775;
    panda$core$Bit $tmp1776 = org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_node, p_target);
    panda$core$Bit $tmp1777 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1776);
    $tmp1774 = $tmp1777.value;
    $l1775:;
    panda$core$Bit $tmp1778 = { $tmp1774 };
    if ($tmp1778.value) {
    {
        panda$core$String* $tmp1780 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1779, ((panda$core$Object*) p_node->type));
        panda$core$String* $tmp1782 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1780, &$s1781);
        panda$core$String* $tmp1784 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1783, ((panda$core$Object*) p_target));
        panda$core$String* $tmp1786 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1784, &$s1785);
        panda$core$String* $tmp1787 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1782, $tmp1786);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp1787);
    }
    }
    switch (p_node->kind.value) {
        case 1004:
        case 1032:
        case 1011:
        {
            org$pandalanguage$pandac$IRNode* $tmp1788 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_node, p_target);
            return $tmp1788;
        }
        break;
        case 1039:
        case 1040:
        {
            panda$core$Int64$nullable $tmp1789 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_node, p_target);
            if (((panda$core$Bit) { $tmp1789.nonnull }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1790 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_node, p_target);
                return $tmp1790;
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp1792 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_node);
            resolved1791 = $tmp1792;
            if (((panda$core$Bit) { resolved1791 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1793 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, resolved1791, p_position, p_isExplicit, p_target);
                return $tmp1793;
            }
            }
        }
        break;
    }
    panda$collections$Array* $tmp1795 = (panda$collections$Array*) malloc(40);
    $tmp1795->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1795->refCount.value = 1;
    panda$collections$Array$init($tmp1795);
    children1794 = $tmp1795;
    panda$collections$Array$add$panda$collections$Array$T(children1794, ((panda$core$Object*) p_node));
    org$pandalanguage$pandac$IRNode* $tmp1797 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp1797->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp1797->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1797, ((panda$core$Int64) { 1009 }), p_position, p_target, ((panda$core$Object*) wrap_panda$core$Bit(p_isExplicit)), ((panda$collections$ListView*) children1794));
    return $tmp1797;
}
panda$core$Int64$nullable org$pandalanguage$pandac$Compiler$callCost$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodRef* p_m, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedReturn) {
    panda$core$Int64 result1805;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1806;
    panda$core$Int64$nullable cost1826;
    panda$core$Int64$nullable cost1845;
    PANDA_ASSERT(p_m->value->resolved.value);
    panda$core$Int64 $tmp1799 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
    ITable* $tmp1800 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp1800->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1800 = $tmp1800->next;
    }
    $fn1802 $tmp1801 = $tmp1800->methods[0];
    panda$core$Int64 $tmp1803 = $tmp1801(((panda$collections$CollectionView*) p_args));
    panda$core$Bit $tmp1804 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1799, $tmp1803);
    if ($tmp1804.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    result1805 = ((panda$core$Int64) { 0 });
    panda$core$Int64 $tmp1807 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp1806, ((panda$core$Int64) { 0 }), $tmp1807, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp1809 = $tmp1806.start.value;
    panda$core$Int64 i1808 = { $tmp1809 };
    int64_t $tmp1811 = $tmp1806.end.value;
    int64_t $tmp1812 = $tmp1806.step.value;
    bool $tmp1813 = $tmp1806.inclusive.value;
    bool $tmp1820 = $tmp1812 > 0;
    if ($tmp1820) goto $l1818; else goto $l1819;
    $l1818:;
    if ($tmp1813) goto $l1821; else goto $l1822;
    $l1821:;
    if ($tmp1809 <= $tmp1811) goto $l1814; else goto $l1816;
    $l1822:;
    if ($tmp1809 < $tmp1811) goto $l1814; else goto $l1816;
    $l1819:;
    if ($tmp1813) goto $l1823; else goto $l1824;
    $l1823:;
    if ($tmp1809 >= $tmp1811) goto $l1814; else goto $l1816;
    $l1824:;
    if ($tmp1809 > $tmp1811) goto $l1814; else goto $l1816;
    $l1814:;
    {
        ITable* $tmp1827 = p_args->$class->itable;
        while ($tmp1827->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1827 = $tmp1827->next;
        }
        $fn1829 $tmp1828 = $tmp1827->methods[0];
        panda$core$Object* $tmp1830 = $tmp1828(p_args, i1808);
        org$pandalanguage$pandac$Type* $tmp1831 = org$pandalanguage$pandac$MethodRef$parameter$panda$core$Int64$R$org$pandalanguage$pandac$Type(p_m, i1808);
        panda$core$Int64$nullable $tmp1832 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1830), $tmp1831);
        cost1826 = $tmp1832;
        if (((panda$core$Bit) { !cost1826.nonnull }).value) {
        {
            return ((panda$core$Int64$nullable) { .nonnull = false });
        }
        }
        panda$core$Int64 $tmp1833 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result1805, ((panda$core$Int64) cost1826.value));
        result1805 = $tmp1833;
    }
    $l1817:;
    if ($tmp1820) goto $l1835; else goto $l1836;
    $l1835:;
    int64_t $tmp1837 = $tmp1811 - i1808.value;
    if ($tmp1813) goto $l1838; else goto $l1839;
    $l1838:;
    if ($tmp1837 >= $tmp1812) goto $l1834; else goto $l1816;
    $l1839:;
    if ($tmp1837 > $tmp1812) goto $l1834; else goto $l1816;
    $l1836:;
    int64_t $tmp1841 = i1808.value - $tmp1811;
    if ($tmp1813) goto $l1842; else goto $l1843;
    $l1842:;
    if ($tmp1841 >= -$tmp1812) goto $l1834; else goto $l1816;
    $l1843:;
    if ($tmp1841 > -$tmp1812) goto $l1834; else goto $l1816;
    $l1834:;
    i1808.value += $tmp1812;
    goto $l1814;
    $l1816:;
    if (((panda$core$Bit) { p_expectedReturn != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp1846 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(p_m);
        panda$core$Int64$nullable $tmp1847 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1846, p_expectedReturn);
        cost1845 = $tmp1847;
        if (((panda$core$Bit) { !cost1845.nonnull }).value) {
        {
            return ((panda$core$Int64$nullable) { .nonnull = false });
        }
        }
        panda$core$Int64 $tmp1848 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result1805, ((panda$core$Int64) cost1845.value));
        result1805 = $tmp1848;
    }
    }
    org$pandalanguage$pandac$Type* $tmp1851 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->value->owner);
    panda$core$Bit $tmp1852 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit($tmp1851);
    bool $tmp1850 = $tmp1852.value;
    if (!$tmp1850) goto $l1853;
    ITable* $tmp1854 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp1854->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1854 = $tmp1854->next;
    }
    $fn1856 $tmp1855 = $tmp1854->methods[0];
    panda$core$Int64 $tmp1857 = $tmp1855(((panda$collections$CollectionView*) p_args));
    panda$core$Bit $tmp1858 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1857, ((panda$core$Int64) { 1 }));
    $tmp1850 = $tmp1858.value;
    $l1853:;
    panda$core$Bit $tmp1859 = { $tmp1850 };
    bool $tmp1849 = $tmp1859.value;
    if (!$tmp1849) goto $l1860;
    panda$core$Object* $tmp1861 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->value->parameters, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp1862 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->value->owner);
    panda$core$Bit $tmp1863 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1861)->type, $tmp1862);
    $tmp1849 = $tmp1863.value;
    $l1860:;
    panda$core$Bit $tmp1864 = { $tmp1849 };
    if ($tmp1864.value) {
    {
        panda$core$Int64 $tmp1865 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result1805, ((panda$core$Int64) { 1 }));
        result1805 = $tmp1865;
    }
    }
    return ((panda$core$Int64$nullable) { result1805, true });
}
panda$core$Int64$nullable org$pandalanguage$pandac$Compiler$matchMethods$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(org$pandalanguage$pandac$Compiler* self, panda$collections$Array* p_methods, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedReturn) {
    panda$collections$Array* result1866;
    panda$core$Int64$nullable best1869;
    panda$collections$Iterator* m$Iter1870;
    org$pandalanguage$pandac$MethodRef* m1882;
    panda$core$Int64$nullable cost1887;
    panda$collections$Array* $tmp1867 = (panda$collections$Array*) malloc(40);
    $tmp1867->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1867->refCount.value = 1;
    panda$collections$Array$init($tmp1867);
    result1866 = $tmp1867;
    best1869 = ((panda$core$Int64$nullable) { .nonnull = false });
    {
        ITable* $tmp1871 = ((panda$collections$Iterable*) p_methods)->$class->itable;
        while ($tmp1871->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1871 = $tmp1871->next;
        }
        $fn1873 $tmp1872 = $tmp1871->methods[0];
        panda$collections$Iterator* $tmp1874 = $tmp1872(((panda$collections$Iterable*) p_methods));
        m$Iter1870 = $tmp1874;
        $l1875:;
        ITable* $tmp1877 = m$Iter1870->$class->itable;
        while ($tmp1877->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1877 = $tmp1877->next;
        }
        $fn1879 $tmp1878 = $tmp1877->methods[0];
        panda$core$Bit $tmp1880 = $tmp1878(m$Iter1870);
        panda$core$Bit $tmp1881 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1880);
        if (!$tmp1881.value) goto $l1876;
        {
            ITable* $tmp1883 = m$Iter1870->$class->itable;
            while ($tmp1883->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1883 = $tmp1883->next;
            }
            $fn1885 $tmp1884 = $tmp1883->methods[1];
            panda$core$Object* $tmp1886 = $tmp1884(m$Iter1870);
            m1882 = ((org$pandalanguage$pandac$MethodRef*) $tmp1886);
            panda$core$Int64$nullable $tmp1888 = org$pandalanguage$pandac$Compiler$callCost$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(self, m1882, p_args, p_expectedReturn);
            cost1887 = $tmp1888;
            if (((panda$core$Bit) { !cost1887.nonnull }).value) {
            {
                goto $l1875;
            }
            }
            bool $tmp1889 = ((panda$core$Bit) { !best1869.nonnull }).value;
            if ($tmp1889) goto $l1890;
            panda$core$Bit $tmp1891 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost1887.value), ((panda$core$Int64) best1869.value));
            $tmp1889 = $tmp1891.value;
            $l1890:;
            panda$core$Bit $tmp1892 = { $tmp1889 };
            if ($tmp1892.value) {
            {
                panda$collections$Array$clear(result1866);
                best1869 = cost1887;
            }
            }
            panda$core$Bit $tmp1893 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost1887.value), ((panda$core$Int64) best1869.value));
            if ($tmp1893.value) {
            {
                panda$collections$Array$add$panda$collections$Array$T(result1866, ((panda$core$Object*) m1882));
            }
            }
        }
        goto $l1875;
        $l1876:;
    }
    panda$collections$Array$clear(p_methods);
    panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(p_methods, ((panda$collections$CollectionView*) result1866));
    return best1869;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$MethodRef* p_m, panda$collections$ListView* p_args) {
    panda$core$String* s1900;
    panda$collections$Array* finalArgs1926;
    org$pandalanguage$pandac$IRNode* selfNode1962;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1991;
    org$pandalanguage$pandac$IRNode* coerced2014;
    org$pandalanguage$pandac$IRNode* result2034;
    PANDA_ASSERT(p_m->value->resolved.value);
    panda$core$Int64 $tmp1894 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
    ITable* $tmp1895 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp1895->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1895 = $tmp1895->next;
    }
    $fn1897 $tmp1896 = $tmp1895->methods[0];
    panda$core$Int64 $tmp1898 = $tmp1896(((panda$collections$CollectionView*) p_args));
    panda$core$Bit $tmp1899 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1894, $tmp1898);
    if ($tmp1899.value) {
    {
        panda$core$Int64 $tmp1901 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
        panda$core$Bit $tmp1902 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1901, ((panda$core$Int64) { 1 }));
        if ($tmp1902.value) {
        {
            s1900 = &$s1903;
        }
        }
        else {
        {
            s1900 = &$s1904;
        }
        }
        panda$core$String* $tmp1906 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(p_m->value);
        panda$core$String* $tmp1907 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1905, $tmp1906);
        panda$core$String* $tmp1909 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1907, &$s1908);
        panda$core$Int64 $tmp1910 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
        panda$core$String* $tmp1911 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1909, ((panda$core$Object*) wrap_panda$core$Int64($tmp1910)));
        panda$core$String* $tmp1913 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1911, &$s1912);
        panda$core$String* $tmp1914 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1913, s1900);
        panda$core$String* $tmp1916 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1914, &$s1915);
        ITable* $tmp1918 = ((panda$collections$CollectionView*) p_args)->$class->itable;
        while ($tmp1918->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp1918 = $tmp1918->next;
        }
        $fn1920 $tmp1919 = $tmp1918->methods[0];
        panda$core$Int64 $tmp1921 = $tmp1919(((panda$collections$CollectionView*) p_args));
        panda$core$String* $tmp1922 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1917, ((panda$core$Object*) wrap_panda$core$Int64($tmp1921)));
        panda$core$String* $tmp1924 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1922, &$s1923);
        panda$core$String* $tmp1925 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1916, $tmp1924);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp1925);
        return NULL;
    }
    }
    panda$collections$Array* $tmp1927 = (panda$collections$Array*) malloc(40);
    $tmp1927->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1927->refCount.value = 1;
    panda$collections$Array$init($tmp1927);
    finalArgs1926 = $tmp1927;
    bool $tmp1930 = ((panda$core$Bit) { p_target != NULL }).value;
    if (!$tmp1930) goto $l1931;
    panda$core$Bit $tmp1932 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1038 }));
    $tmp1930 = $tmp1932.value;
    $l1931:;
    panda$core$Bit $tmp1933 = { $tmp1930 };
    bool $tmp1929 = $tmp1933.value;
    if (!$tmp1929) goto $l1934;
    panda$core$Bit $tmp1935 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->value->annotations);
    panda$core$Bit $tmp1936 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1935);
    $tmp1929 = $tmp1936.value;
    $l1934:;
    panda$core$Bit $tmp1937 = { $tmp1929 };
    if ($tmp1937.value) {
    {
        org$pandalanguage$pandac$Type* $tmp1938 = org$pandalanguage$pandac$MethodRef$owner$R$org$pandalanguage$pandac$Type(p_m);
        org$pandalanguage$pandac$IRNode* $tmp1939 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, p_target, p_position, ((panda$core$Bit) { false }), $tmp1938);
        panda$collections$Array$add$panda$collections$Array$T(finalArgs1926, ((panda$core$Object*) $tmp1939));
    }
    }
    panda$core$Bit $tmp1940 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->value->methodKind, ((panda$core$Int64) { 59 }));
    if ($tmp1940.value) {
    {
        if (((panda$core$Bit) { p_target == NULL }).value) {
        {
            panda$core$Object* $tmp1941 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
            panda$core$Bit $tmp1942 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp1941)->methodKind, ((panda$core$Int64) { 59 }));
            if ($tmp1942.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1943 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1943->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1943->refCount.value = 1;
                panda$core$Object* $tmp1945 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
                org$pandalanguage$pandac$Type* $tmp1946 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp1945));
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp1943, ((panda$core$Int64) { 1025 }), p_position, $tmp1946);
                panda$collections$Array$add$panda$collections$Array$T(finalArgs1926, ((panda$core$Object*) $tmp1943));
            }
            }
            else {
            {
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s1947);
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp1950 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1025 }));
        bool $tmp1949 = $tmp1950.value;
        if (!$tmp1949) goto $l1951;
        panda$core$Bit $tmp1952 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1024 }));
        $tmp1949 = $tmp1952.value;
        $l1951:;
        panda$core$Bit $tmp1953 = { $tmp1949 };
        bool $tmp1948 = $tmp1953.value;
        if (!$tmp1948) goto $l1954;
        panda$core$Bit $tmp1955 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1038 }));
        $tmp1948 = $tmp1955.value;
        $l1954:;
        panda$core$Bit $tmp1956 = { $tmp1948 };
        if ($tmp1956.value) {
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s1957);
        }
        }
        }
    }
    }
    else {
    panda$core$Bit $tmp1959 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(p_m->value);
    bool $tmp1958 = $tmp1959.value;
    if (!$tmp1958) goto $l1960;
    $tmp1958 = ((panda$core$Bit) { p_target == NULL }).value;
    $l1960:;
    panda$core$Bit $tmp1961 = { $tmp1958 };
    if ($tmp1961.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp1963 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp1963->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp1963->refCount.value = 1;
        panda$core$Object* $tmp1965 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
        org$pandalanguage$pandac$Type* $tmp1966 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp1965));
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp1963, ((panda$core$Int64) { 1025 }), p_position, $tmp1966);
        selfNode1962 = $tmp1963;
        org$pandalanguage$pandac$Type* $tmp1967 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->value->owner);
        org$pandalanguage$pandac$IRNode* $tmp1968 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, selfNode1962, $tmp1967);
        selfNode1962 = $tmp1968;
        PANDA_ASSERT(((panda$core$Bit) { selfNode1962 != NULL }).value);
        panda$collections$Array$add$panda$collections$Array$T(finalArgs1926, ((panda$core$Object*) selfNode1962));
        panda$core$Object* $tmp1969 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
        panda$core$Bit $tmp1970 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp1969));
        panda$core$Bit $tmp1971 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1970);
        if ($tmp1971.value) {
        {
            panda$core$String* $tmp1973 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(p_m->value);
            panda$core$String* $tmp1974 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1972, $tmp1973);
            panda$core$String* $tmp1976 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1974, &$s1975);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp1976);
        }
        }
    }
    }
    else {
    panda$core$Bit $tmp1979 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(p_m->value);
    panda$core$Bit $tmp1980 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1979);
    bool $tmp1978 = $tmp1980.value;
    if (!$tmp1978) goto $l1981;
    $tmp1978 = ((panda$core$Bit) { p_target != NULL }).value;
    $l1981:;
    panda$core$Bit $tmp1982 = { $tmp1978 };
    bool $tmp1977 = $tmp1982.value;
    if (!$tmp1977) goto $l1983;
    panda$core$Bit $tmp1984 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1001 }));
    $tmp1977 = $tmp1984.value;
    $l1983:;
    panda$core$Bit $tmp1985 = { $tmp1977 };
    if ($tmp1985.value) {
    {
        panda$core$String* $tmp1987 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(p_m->value);
        panda$core$String* $tmp1988 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1986, $tmp1987);
        panda$core$String* $tmp1990 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1988, &$s1989);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp1990);
    }
    }
    }
    }
    ITable* $tmp1992 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp1992->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1992 = $tmp1992->next;
    }
    $fn1994 $tmp1993 = $tmp1992->methods[0];
    panda$core$Int64 $tmp1995 = $tmp1993(((panda$collections$CollectionView*) p_args));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp1991, ((panda$core$Int64) { 0 }), $tmp1995, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp1997 = $tmp1991.start.value;
    panda$core$Int64 i1996 = { $tmp1997 };
    int64_t $tmp1999 = $tmp1991.end.value;
    int64_t $tmp2000 = $tmp1991.step.value;
    bool $tmp2001 = $tmp1991.inclusive.value;
    bool $tmp2008 = $tmp2000 > 0;
    if ($tmp2008) goto $l2006; else goto $l2007;
    $l2006:;
    if ($tmp2001) goto $l2009; else goto $l2010;
    $l2009:;
    if ($tmp1997 <= $tmp1999) goto $l2002; else goto $l2004;
    $l2010:;
    if ($tmp1997 < $tmp1999) goto $l2002; else goto $l2004;
    $l2007:;
    if ($tmp2001) goto $l2011; else goto $l2012;
    $l2011:;
    if ($tmp1997 >= $tmp1999) goto $l2002; else goto $l2004;
    $l2012:;
    if ($tmp1997 > $tmp1999) goto $l2002; else goto $l2004;
    $l2002:;
    {
        ITable* $tmp2015 = p_args->$class->itable;
        while ($tmp2015->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2015 = $tmp2015->next;
        }
        $fn2017 $tmp2016 = $tmp2015->methods[0];
        panda$core$Object* $tmp2018 = $tmp2016(p_args, i1996);
        org$pandalanguage$pandac$Type* $tmp2019 = org$pandalanguage$pandac$MethodRef$parameter$panda$core$Int64$R$org$pandalanguage$pandac$Type(p_m, i1996);
        org$pandalanguage$pandac$IRNode* $tmp2020 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp2018), $tmp2019);
        coerced2014 = $tmp2020;
        if (((panda$core$Bit) { coerced2014 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Object* $tmp2021 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->value->parameters, i1996);
        org$pandalanguage$pandac$IRNode* $tmp2022 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, coerced2014, p_position, ((panda$core$Bit) { false }), ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp2021)->type);
        coerced2014 = $tmp2022;
        if (((panda$core$Bit) { coerced2014 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(finalArgs1926, ((panda$core$Object*) coerced2014));
    }
    $l2005:;
    if ($tmp2008) goto $l2024; else goto $l2025;
    $l2024:;
    int64_t $tmp2026 = $tmp1999 - i1996.value;
    if ($tmp2001) goto $l2027; else goto $l2028;
    $l2027:;
    if ($tmp2026 >= $tmp2000) goto $l2023; else goto $l2004;
    $l2028:;
    if ($tmp2026 > $tmp2000) goto $l2023; else goto $l2004;
    $l2025:;
    int64_t $tmp2030 = i1996.value - $tmp1999;
    if ($tmp2001) goto $l2031; else goto $l2032;
    $l2031:;
    if ($tmp2030 >= -$tmp2000) goto $l2023; else goto $l2004;
    $l2032:;
    if ($tmp2030 > -$tmp2000) goto $l2023; else goto $l2004;
    $l2023:;
    i1996.value += $tmp2000;
    goto $l2002;
    $l2004:;
    panda$core$Bit $tmp2036 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_m->value->owner)->name, &$s2035);
    if ($tmp2036.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2037 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2037->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2037->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp2039 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(p_m);
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2037, ((panda$core$Int64) { 1005 }), p_position, $tmp2039, ((panda$core$Object*) p_m), ((panda$collections$ListView*) finalArgs1926));
        result2034 = $tmp2037;
    }
    }
    else {
    {
        org$pandalanguage$pandac$IRNode* $tmp2040 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2040->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2040->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2040, ((panda$core$Int64) { 1005 }), p_position, p_m->value->returnType, ((panda$core$Object*) p_m), ((panda$collections$ListView*) finalArgs1926));
        result2034 = $tmp2040;
        org$pandalanguage$pandac$Type* $tmp2042 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(p_m);
        org$pandalanguage$pandac$IRNode* $tmp2043 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, result2034, p_position, ((panda$core$Bit) { false }), $tmp2042);
        result2034 = $tmp2043;
    }
    }
    return result2034;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_target, panda$core$String* p_name, panda$collections$ListView* p_args) {
    org$pandalanguage$pandac$IRNode* $tmp2044 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_target, p_name, p_args, NULL);
    return $tmp2044;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_target, panda$core$String* p_name, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedType) {
    org$pandalanguage$pandac$IRNode* resolved2045;
    org$pandalanguage$pandac$ClassDecl* cl2047;
    org$pandalanguage$pandac$Symbol* s2051;
    org$pandalanguage$pandac$IRNode* ref2073;
    org$pandalanguage$pandac$IRNode* $tmp2046 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_target);
    resolved2045 = $tmp2046;
    if (((panda$core$Bit) { resolved2045 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp2048 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(resolved2045->kind, ((panda$core$Int64) { 1001 }));
    if ($tmp2048.value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp2049 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Type*) resolved2045->payload));
        cl2047 = $tmp2049;
    }
    }
    else {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp2050 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, resolved2045->type);
        cl2047 = $tmp2050;
    }
    }
    if (((panda$core$Bit) { cl2047 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp2052 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl2047);
    org$pandalanguage$pandac$Symbol* $tmp2053 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp2052, p_name);
    s2051 = $tmp2053;
    if (((panda$core$Bit) { s2051 == NULL }).value) {
    {
        panda$core$String* $tmp2055 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2054, ((org$pandalanguage$pandac$Symbol*) cl2047)->name);
        panda$core$String* $tmp2057 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2055, &$s2056);
        panda$core$String* $tmp2058 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2057, p_name);
        panda$core$String* $tmp2060 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2058, &$s2059);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_target->position, $tmp2060);
        return NULL;
    }
    }
    panda$core$Bit $tmp2062 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(s2051->kind, ((panda$core$Int64) { 204 }));
    bool $tmp2061 = $tmp2062.value;
    if (!$tmp2061) goto $l2063;
    panda$core$Bit $tmp2064 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(s2051->kind, ((panda$core$Int64) { 205 }));
    $tmp2061 = $tmp2064.value;
    $l2063:;
    panda$core$Bit $tmp2065 = { $tmp2061 };
    if ($tmp2065.value) {
    {
        panda$core$String* $tmp2067 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2066, ((org$pandalanguage$pandac$Symbol*) cl2047)->name);
        panda$core$String* $tmp2069 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2067, &$s2068);
        panda$core$String* $tmp2070 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2069, p_name);
        panda$core$String* $tmp2072 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2070, &$s2071);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_target->position, $tmp2072);
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp2074 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl2047);
    org$pandalanguage$pandac$IRNode* $tmp2075 = org$pandalanguage$pandac$Compiler$symbolRef$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q(self, p_target->position, p_target, s2051, $tmp2074);
    ref2073 = $tmp2075;
    if (((panda$core$Bit) { ref2073 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp2076 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, ref2073, p_args, p_expectedType);
    return $tmp2076;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_m, panda$collections$ListView* p_args) {
    org$pandalanguage$pandac$IRNode* $tmp2077 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_m, p_args, NULL);
    return $tmp2077;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_m, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedType) {
    org$pandalanguage$pandac$IRNode* target2078;
    panda$collections$Array* methods2085;
    org$pandalanguage$pandac$MethodDecl* first2090;
    panda$core$MutableString* msg2095;
    panda$core$String* separator2107;
    panda$collections$Iterator* a$Iter2109;
    org$pandalanguage$pandac$IRNode* a2121;
    org$pandalanguage$pandac$IRNode* target2135;
    panda$collections$Array* children2143;
    panda$collections$Array* types2149;
    panda$collections$Iterator* m$Iter2152;
    org$pandalanguage$pandac$MethodRef* m2164;
    org$pandalanguage$pandac$IRNode* target2174;
    org$pandalanguage$pandac$IRNode* initCall2177;
    panda$collections$Array* children2181;
    org$pandalanguage$pandac$IRNode* resolved2186;
    switch (p_m->kind.value) {
        case 1002:
        {
            panda$core$Int64 $tmp2079 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->children);
            panda$core$Bit $tmp2080 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2079, ((panda$core$Int64) { 0 }));
            if ($tmp2080.value) {
            {
                target2078 = NULL;
            }
            }
            else {
            {
                panda$core$Int64 $tmp2081 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->children);
                panda$core$Bit $tmp2082 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2081, ((panda$core$Int64) { 1 }));
                PANDA_ASSERT($tmp2082.value);
                panda$core$Object* $tmp2083 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->children, ((panda$core$Int64) { 0 }));
                target2078 = ((org$pandalanguage$pandac$IRNode*) $tmp2083);
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp2084 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, p_m->position, target2078, ((org$pandalanguage$pandac$MethodRef*) p_m->payload), p_args);
            return $tmp2084;
        }
        break;
        case 1003:
        {
            panda$collections$Array* $tmp2086 = (panda$collections$Array*) malloc(40);
            $tmp2086->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2086->refCount.value = 1;
            panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp2086, ((panda$collections$ListView*) p_m->payload));
            methods2085 = $tmp2086;
            org$pandalanguage$pandac$Compiler$matchMethods$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(self, methods2085, p_args, p_expectedType);
            panda$core$Int64 $tmp2088 = panda$collections$Array$get_count$R$panda$core$Int64(methods2085);
            panda$core$Bit $tmp2089 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2088, ((panda$core$Int64) { 0 }));
            if ($tmp2089.value) {
            {
                ITable* $tmp2091 = ((panda$collections$ListView*) p_m->payload)->$class->itable;
                while ($tmp2091->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp2091 = $tmp2091->next;
                }
                $fn2093 $tmp2092 = $tmp2091->methods[0];
                panda$core$Object* $tmp2094 = $tmp2092(((panda$collections$ListView*) p_m->payload), ((panda$core$Int64) { 0 }));
                first2090 = ((org$pandalanguage$pandac$MethodRef*) $tmp2094)->value;
                panda$core$MutableString* $tmp2096 = (panda$core$MutableString*) malloc(40);
                $tmp2096->$class = (panda$core$Class*) &panda$core$MutableString$class;
                $tmp2096->refCount.value = 1;
                panda$core$String* $tmp2099 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2098, ((org$pandalanguage$pandac$Symbol*) first2090->owner)->name);
                panda$core$String* $tmp2101 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2099, &$s2100);
                panda$core$String* $tmp2103 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2102, ((org$pandalanguage$pandac$Symbol*) first2090)->name);
                panda$core$String* $tmp2105 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2103, &$s2104);
                panda$core$String* $tmp2106 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2101, $tmp2105);
                panda$core$MutableString$init$panda$core$String($tmp2096, $tmp2106);
                msg2095 = $tmp2096;
                separator2107 = &$s2108;
                {
                    ITable* $tmp2110 = ((panda$collections$Iterable*) p_args)->$class->itable;
                    while ($tmp2110->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp2110 = $tmp2110->next;
                    }
                    $fn2112 $tmp2111 = $tmp2110->methods[0];
                    panda$collections$Iterator* $tmp2113 = $tmp2111(((panda$collections$Iterable*) p_args));
                    a$Iter2109 = $tmp2113;
                    $l2114:;
                    ITable* $tmp2116 = a$Iter2109->$class->itable;
                    while ($tmp2116->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp2116 = $tmp2116->next;
                    }
                    $fn2118 $tmp2117 = $tmp2116->methods[0];
                    panda$core$Bit $tmp2119 = $tmp2117(a$Iter2109);
                    panda$core$Bit $tmp2120 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2119);
                    if (!$tmp2120.value) goto $l2115;
                    {
                        ITable* $tmp2122 = a$Iter2109->$class->itable;
                        while ($tmp2122->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2122 = $tmp2122->next;
                        }
                        $fn2124 $tmp2123 = $tmp2122->methods[1];
                        panda$core$Object* $tmp2125 = $tmp2123(a$Iter2109);
                        a2121 = ((org$pandalanguage$pandac$IRNode*) $tmp2125);
                        panda$core$MutableString$append$panda$core$String(msg2095, separator2107);
                        panda$core$MutableString$append$panda$core$Object(msg2095, ((panda$core$Object*) a2121->type));
                        separator2107 = &$s2126;
                    }
                    goto $l2114;
                    $l2115:;
                }
                panda$core$MutableString$append$panda$core$String(msg2095, &$s2127);
                if (((panda$core$Bit) { p_expectedType != NULL }).value) {
                {
                    panda$core$String* $tmp2129 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2128, ((panda$core$Object*) p_expectedType));
                    panda$core$String* $tmp2131 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2129, &$s2130);
                    panda$core$MutableString$append$panda$core$String(msg2095, $tmp2131);
                }
                }
                panda$core$String* $tmp2132 = panda$core$MutableString$convert$R$panda$core$String(msg2095);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_m->position, $tmp2132);
                return NULL;
            }
            }
            panda$core$Int64 $tmp2133 = panda$collections$Array$get_count$R$panda$core$Int64(methods2085);
            panda$core$Bit $tmp2134 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2133, ((panda$core$Int64) { 1 }));
            if ($tmp2134.value) {
            {
                panda$core$Int64 $tmp2136 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->children);
                panda$core$Bit $tmp2137 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2136, ((panda$core$Int64) { 1 }));
                if ($tmp2137.value) {
                {
                    panda$core$Object* $tmp2138 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->children, ((panda$core$Int64) { 0 }));
                    target2135 = ((org$pandalanguage$pandac$IRNode*) $tmp2138);
                }
                }
                else {
                {
                    panda$core$Int64 $tmp2139 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->children);
                    panda$core$Bit $tmp2140 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2139, ((panda$core$Int64) { 0 }));
                    PANDA_ASSERT($tmp2140.value);
                    target2135 = NULL;
                }
                }
                panda$core$Object* $tmp2141 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(methods2085, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$IRNode* $tmp2142 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, p_m->position, target2135, ((org$pandalanguage$pandac$MethodRef*) $tmp2141), p_args);
                return $tmp2142;
            }
            }
            panda$collections$Array* $tmp2144 = (panda$collections$Array*) malloc(40);
            $tmp2144->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2144->refCount.value = 1;
            panda$collections$Array$init($tmp2144);
            children2143 = $tmp2144;
            org$pandalanguage$pandac$IRNode* $tmp2146 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2146->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2146->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2148 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2146, ((panda$core$Int64) { 1003 }), p_m->position, $tmp2148, ((panda$core$Object*) methods2085), ((panda$collections$ListView*) p_m->children));
            panda$collections$Array$add$panda$collections$Array$T(children2143, ((panda$core$Object*) $tmp2146));
            panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(children2143, ((panda$collections$CollectionView*) p_args));
            panda$collections$Array* $tmp2150 = (panda$collections$Array*) malloc(40);
            $tmp2150->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2150->refCount.value = 1;
            panda$collections$Array$init($tmp2150);
            types2149 = $tmp2150;
            {
                ITable* $tmp2153 = ((panda$collections$Iterable*) methods2085)->$class->itable;
                while ($tmp2153->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp2153 = $tmp2153->next;
                }
                $fn2155 $tmp2154 = $tmp2153->methods[0];
                panda$collections$Iterator* $tmp2156 = $tmp2154(((panda$collections$Iterable*) methods2085));
                m$Iter2152 = $tmp2156;
                $l2157:;
                ITable* $tmp2159 = m$Iter2152->$class->itable;
                while ($tmp2159->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp2159 = $tmp2159->next;
                }
                $fn2161 $tmp2160 = $tmp2159->methods[0];
                panda$core$Bit $tmp2162 = $tmp2160(m$Iter2152);
                panda$core$Bit $tmp2163 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2162);
                if (!$tmp2163.value) goto $l2158;
                {
                    ITable* $tmp2165 = m$Iter2152->$class->itable;
                    while ($tmp2165->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp2165 = $tmp2165->next;
                    }
                    $fn2167 $tmp2166 = $tmp2165->methods[1];
                    panda$core$Object* $tmp2168 = $tmp2166(m$Iter2152);
                    m2164 = ((org$pandalanguage$pandac$MethodRef*) $tmp2168);
                    org$pandalanguage$pandac$Type* $tmp2169 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m2164);
                    panda$collections$Array$add$panda$collections$Array$T(types2149, ((panda$core$Object*) $tmp2169));
                }
                goto $l2157;
                $l2158:;
            }
            org$pandalanguage$pandac$IRNode* $tmp2170 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2170->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2170->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2172 = (org$pandalanguage$pandac$Type*) malloc(96);
            $tmp2172->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp2172->refCount.value = 1;
            org$pandalanguage$pandac$Type$init$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp2172, ((panda$collections$ListView*) types2149));
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2170, ((panda$core$Int64) { 1039 }), p_m->position, $tmp2172, ((panda$collections$ListView*) children2143));
            return $tmp2170;
        }
        break;
        case 1001:
        {
            org$pandalanguage$pandac$IRNode* $tmp2175 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2175->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2175->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp2175, ((panda$core$Int64) { 1038 }), p_m->position, ((org$pandalanguage$pandac$Type*) p_m->payload));
            target2174 = $tmp2175;
            org$pandalanguage$pandac$IRNode* $tmp2179 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target2174, &$s2178, p_args);
            org$pandalanguage$pandac$IRNode* $tmp2180 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp2179);
            initCall2177 = $tmp2180;
            if (((panda$core$Bit) { initCall2177 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp2182 = (panda$collections$Array*) malloc(40);
            $tmp2182->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2182->refCount.value = 1;
            panda$collections$Array$init($tmp2182);
            children2181 = $tmp2182;
            panda$collections$Array$add$panda$collections$Array$T(children2181, ((panda$core$Object*) initCall2177));
            org$pandalanguage$pandac$IRNode* $tmp2184 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2184->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2184->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2184, ((panda$core$Int64) { 1010 }), p_m->position, ((org$pandalanguage$pandac$Type*) p_m->payload), ((panda$collections$ListView*) children2181));
            return $tmp2184;
        }
        break;
        default:
        {
            org$pandalanguage$pandac$IRNode* $tmp2187 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_m);
            resolved2186 = $tmp2187;
            if (((panda$core$Bit) { resolved2186 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$String* $tmp2189 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2188, ((panda$core$Object*) resolved2186->type));
            panda$core$String* $tmp2191 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2189, &$s2190);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, resolved2186->position, $tmp2191);
        }
    }
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$collections$Array* subtypes2192;
    panda$core$MutableString* typeName2195;
    panda$core$String* separator2199;
    panda$collections$Iterator* p$Iter2201;
    org$pandalanguage$pandac$MethodDecl$Parameter* p2213;
    panda$core$Int64 kind2219;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
    panda$collections$Array* $tmp2193 = (panda$collections$Array*) malloc(40);
    $tmp2193->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2193->refCount.value = 1;
    panda$collections$Array$init($tmp2193);
    subtypes2192 = $tmp2193;
    panda$core$MutableString* $tmp2196 = (panda$core$MutableString*) malloc(40);
    $tmp2196->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp2196->refCount.value = 1;
    panda$core$MutableString$init$panda$core$String($tmp2196, &$s2198);
    typeName2195 = $tmp2196;
    separator2199 = &$s2200;
    {
        ITable* $tmp2202 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp2202->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2202 = $tmp2202->next;
        }
        $fn2204 $tmp2203 = $tmp2202->methods[0];
        panda$collections$Iterator* $tmp2205 = $tmp2203(((panda$collections$Iterable*) p_m->parameters));
        p$Iter2201 = $tmp2205;
        $l2206:;
        ITable* $tmp2208 = p$Iter2201->$class->itable;
        while ($tmp2208->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2208 = $tmp2208->next;
        }
        $fn2210 $tmp2209 = $tmp2208->methods[0];
        panda$core$Bit $tmp2211 = $tmp2209(p$Iter2201);
        panda$core$Bit $tmp2212 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2211);
        if (!$tmp2212.value) goto $l2207;
        {
            ITable* $tmp2214 = p$Iter2201->$class->itable;
            while ($tmp2214->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2214 = $tmp2214->next;
            }
            $fn2216 $tmp2215 = $tmp2214->methods[1];
            panda$core$Object* $tmp2217 = $tmp2215(p$Iter2201);
            p2213 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp2217);
            panda$core$MutableString$append$panda$core$String(typeName2195, separator2199);
            panda$core$MutableString$append$panda$core$String(typeName2195, ((org$pandalanguage$pandac$Symbol*) p2213->type)->name);
            panda$collections$Array$add$panda$collections$Array$T(subtypes2192, ((panda$core$Object*) p2213->type));
            separator2199 = &$s2218;
        }
        goto $l2206;
        $l2207:;
    }
    panda$core$Bit $tmp2220 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 58 }));
    if ($tmp2220.value) {
    {
        panda$core$MutableString$append$panda$core$String(typeName2195, &$s2221);
        kind2219 = ((panda$core$Int64) { 24 });
    }
    }
    else {
    {
        panda$core$MutableString$append$panda$core$String(typeName2195, &$s2222);
        kind2219 = ((panda$core$Int64) { 25 });
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(subtypes2192, ((panda$core$Object*) p_m->returnType));
    org$pandalanguage$pandac$Type* $tmp2223 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2224 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp2223);
    if ($tmp2224.value) {
    {
        panda$core$MutableString$append$panda$core$String(typeName2195, ((org$pandalanguage$pandac$Symbol*) p_m->returnType)->name);
    }
    }
    panda$core$MutableString$append$panda$core$String(typeName2195, &$s2225);
    org$pandalanguage$pandac$Type* $tmp2226 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp2226->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp2226->refCount.value = 1;
    panda$core$String* $tmp2228 = panda$core$MutableString$convert$R$panda$core$String(typeName2195);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp2226, $tmp2228, kind2219, ((org$pandalanguage$pandac$Symbol*) p_m)->position, ((panda$collections$ListView*) subtypes2192), ((panda$core$Bit) { true }));
    return $tmp2226;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$declaredTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m, org$pandalanguage$pandac$Type* p_selfType) {
    panda$collections$Array* subtypes2229;
    panda$core$MutableString* typeName2232;
    panda$collections$Iterator* p$Iter2236;
    org$pandalanguage$pandac$MethodDecl$Parameter* p2248;
    panda$core$Int64 kind2254;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
    panda$collections$Array* $tmp2230 = (panda$collections$Array*) malloc(40);
    $tmp2230->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2230->refCount.value = 1;
    panda$collections$Array$init($tmp2230);
    subtypes2229 = $tmp2230;
    panda$core$MutableString* $tmp2233 = (panda$core$MutableString*) malloc(40);
    $tmp2233->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp2233->refCount.value = 1;
    panda$core$MutableString$init$panda$core$String($tmp2233, &$s2235);
    typeName2232 = $tmp2233;
    panda$core$MutableString$append$panda$core$String(typeName2232, ((org$pandalanguage$pandac$Symbol*) p_selfType)->name);
    panda$collections$Array$add$panda$collections$Array$T(subtypes2229, ((panda$core$Object*) p_selfType));
    {
        ITable* $tmp2237 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp2237->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2237 = $tmp2237->next;
        }
        $fn2239 $tmp2238 = $tmp2237->methods[0];
        panda$collections$Iterator* $tmp2240 = $tmp2238(((panda$collections$Iterable*) p_m->parameters));
        p$Iter2236 = $tmp2240;
        $l2241:;
        ITable* $tmp2243 = p$Iter2236->$class->itable;
        while ($tmp2243->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2243 = $tmp2243->next;
        }
        $fn2245 $tmp2244 = $tmp2243->methods[0];
        panda$core$Bit $tmp2246 = $tmp2244(p$Iter2236);
        panda$core$Bit $tmp2247 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2246);
        if (!$tmp2247.value) goto $l2242;
        {
            ITable* $tmp2249 = p$Iter2236->$class->itable;
            while ($tmp2249->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2249 = $tmp2249->next;
            }
            $fn2251 $tmp2250 = $tmp2249->methods[1];
            panda$core$Object* $tmp2252 = $tmp2250(p$Iter2236);
            p2248 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp2252);
            panda$core$MutableString$append$panda$core$String(typeName2232, &$s2253);
            panda$core$MutableString$append$panda$core$String(typeName2232, ((org$pandalanguage$pandac$Symbol*) p2248->type)->name);
            panda$collections$Array$add$panda$collections$Array$T(subtypes2229, ((panda$core$Object*) p2248->type));
        }
        goto $l2241;
        $l2242:;
    }
    panda$core$Bit $tmp2255 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 58 }));
    if ($tmp2255.value) {
    {
        panda$core$MutableString$append$panda$core$String(typeName2232, &$s2256);
        kind2254 = ((panda$core$Int64) { 24 });
    }
    }
    else {
    {
        panda$core$MutableString$append$panda$core$String(typeName2232, &$s2257);
        kind2254 = ((panda$core$Int64) { 25 });
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(subtypes2229, ((panda$core$Object*) p_m->returnType));
    org$pandalanguage$pandac$Type* $tmp2258 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2259 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp2258);
    if ($tmp2259.value) {
    {
        panda$core$MutableString$append$panda$core$String(typeName2232, ((org$pandalanguage$pandac$Symbol*) p_m->returnType)->name);
    }
    }
    panda$core$MutableString$append$panda$core$String(typeName2232, &$s2260);
    org$pandalanguage$pandac$Type* $tmp2261 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp2261->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp2261->refCount.value = 1;
    panda$core$String* $tmp2263 = panda$core$MutableString$convert$R$panda$core$String(typeName2232);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp2261, $tmp2263, kind2254, ((org$pandalanguage$pandac$Symbol*) p_m)->position, ((panda$collections$ListView*) subtypes2229), ((panda$core$Bit) { true }));
    return $tmp2261;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$MethodDecl* inherited2264;
    org$pandalanguage$pandac$MethodDecl* $tmp2265 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(self, p_m);
    inherited2264 = $tmp2265;
    if (((panda$core$Bit) { inherited2264 == NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp2266 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, p_m);
        return $tmp2266;
    }
    }
    org$pandalanguage$pandac$Type* $tmp2267 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, inherited2264);
    return $tmp2267;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$Type* $tmp2268 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    org$pandalanguage$pandac$Type* $tmp2269 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_m, $tmp2268);
    return $tmp2269;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m, org$pandalanguage$pandac$Type* p_selfType) {
    org$pandalanguage$pandac$MethodDecl* inherited2270;
    org$pandalanguage$pandac$MethodDecl* $tmp2271 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(self, p_m);
    inherited2270 = $tmp2271;
    if (((panda$core$Bit) { inherited2270 == NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp2272 = org$pandalanguage$pandac$Compiler$declaredTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_m, p_selfType);
        return $tmp2272;
    }
    }
    org$pandalanguage$pandac$Type* $tmp2273 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, inherited2270, p_selfType);
    return $tmp2273;
}
panda$core$String* org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(panda$core$Int64 p_op) {
    switch (p_op.value) {
        case 51:
        {
            return &$s2274;
        }
        break;
        case 52:
        {
            return &$s2275;
        }
        break;
        case 53:
        {
            return &$s2276;
        }
        break;
        case 54:
        {
            return &$s2277;
        }
        break;
        case 55:
        {
            return &$s2278;
        }
        break;
        case 56:
        {
            return &$s2279;
        }
        break;
        case 57:
        {
            return &$s2280;
        }
        break;
        case 58:
        {
            return &$s2281;
        }
        break;
        case 59:
        {
            return &$s2282;
        }
        break;
        case 63:
        {
            return &$s2283;
        }
        break;
        case 62:
        {
            return &$s2284;
        }
        break;
        case 65:
        {
            return &$s2285;
        }
        break;
        case 64:
        {
            return &$s2286;
        }
        break;
        case 68:
        {
            return &$s2287;
        }
        break;
        case 69:
        {
            return &$s2288;
        }
        break;
        case 66:
        {
            return &$s2289;
        }
        break;
        case 67:
        {
            return &$s2290;
        }
        break;
        case 70:
        {
            return &$s2291;
        }
        break;
        case 71:
        {
            return &$s2292;
        }
        break;
        case 49:
        {
            return &$s2293;
        }
        break;
        case 50:
        {
            return &$s2294;
        }
        break;
        case 72:
        {
            return &$s2295;
        }
        break;
        case 1:
        {
            return &$s2296;
        }
        break;
        case 101:
        {
            return &$s2297;
        }
        break;
        case 73:
        {
            return &$s2298;
        }
        break;
        case 60:
        {
            return &$s2299;
        }
        break;
        case 61:
        {
            return &$s2300;
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
            panda$core$Int64 $tmp2301 = panda$collections$Array$get_count$R$panda$core$Int64(p_expr->children);
            panda$core$Bit $tmp2302 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2301, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp2302.value);
            panda$core$Bit $tmp2303 = panda$core$Bit$$NOT$R$panda$core$Bit(((panda$core$Bit$wrapper*) p_expr->payload)->value);
            if ($tmp2303.value) {
            {
                panda$core$Object* $tmp2304 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Bit $tmp2305 = org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp2304));
                return $tmp2305;
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
            panda$core$Object* $tmp2306 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp2307 = org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp2306));
            return $tmp2307;
        }
        break;
        default:
        {
            return ((panda$core$Bit) { false });
        }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$foldInts$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_left, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_right) {
    panda$core$Int64 l2333;
    panda$core$Int64 r2335;
    panda$core$Bit $tmp2309 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_left->kind, ((panda$core$Int64) { 1004 }));
    bool $tmp2308 = $tmp2309.value;
    if ($tmp2308) goto $l2310;
    panda$core$Bit $tmp2311 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_left->kind, ((panda$core$Int64) { 1032 }));
    $tmp2308 = $tmp2311.value;
    $l2310:;
    panda$core$Bit $tmp2312 = { $tmp2308 };
    PANDA_ASSERT($tmp2312.value);
    panda$core$Bit $tmp2314 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_right->kind, ((panda$core$Int64) { 1004 }));
    bool $tmp2313 = $tmp2314.value;
    if ($tmp2313) goto $l2315;
    panda$core$Bit $tmp2316 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_right->kind, ((panda$core$Int64) { 1032 }));
    $tmp2313 = $tmp2316.value;
    $l2315:;
    panda$core$Bit $tmp2317 = { $tmp2313 };
    PANDA_ASSERT($tmp2317.value);
    panda$core$Bit $tmp2320 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_left->kind, ((panda$core$Int64) { 1032 }));
    bool $tmp2319 = $tmp2320.value;
    if ($tmp2319) goto $l2321;
    panda$core$UInt64 $tmp2323 = panda$core$Int64$convert$R$panda$core$UInt64(((panda$core$Int64) { 9223372036854775807 }));
    panda$core$Bit $tmp2324 = panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p_left->payload)->value, $tmp2323);
    bool $tmp2322 = $tmp2324.value;
    if (!$tmp2322) goto $l2325;
    panda$core$Bit $tmp2326 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_right->kind, ((panda$core$Int64) { 1032 }));
    $tmp2322 = $tmp2326.value;
    $l2325:;
    panda$core$Bit $tmp2327 = { $tmp2322 };
    $tmp2319 = $tmp2327.value;
    $l2321:;
    panda$core$Bit $tmp2328 = { $tmp2319 };
    bool $tmp2318 = $tmp2328.value;
    if ($tmp2318) goto $l2329;
    panda$core$UInt64 $tmp2330 = panda$core$Int64$convert$R$panda$core$UInt64(((panda$core$Int64) { 9223372036854775807 }));
    panda$core$Bit $tmp2331 = panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p_right->payload)->value, $tmp2330);
    $tmp2318 = $tmp2331.value;
    $l2329:;
    panda$core$Bit $tmp2332 = { $tmp2318 };
    if ($tmp2332.value) {
    {
        panda$core$Int64 $tmp2334 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_left->payload)->value);
        l2333 = $tmp2334;
        panda$core$Int64 $tmp2336 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_right->payload)->value);
        r2335 = $tmp2336;
        switch (p_op.value) {
            case 51:
            {
                org$pandalanguage$pandac$IRNode* $tmp2337 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2337->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2337->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2339 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2340 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(l2333, r2335);
                panda$core$UInt64 $tmp2341 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2340);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2337, ((panda$core$Int64) { 1004 }), p_position, $tmp2339, $tmp2341);
                return $tmp2337;
            }
            break;
            case 52:
            {
                org$pandalanguage$pandac$IRNode* $tmp2342 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2342->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2342->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2344 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2345 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(l2333, r2335);
                panda$core$UInt64 $tmp2346 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2345);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2342, ((panda$core$Int64) { 1004 }), p_position, $tmp2344, $tmp2346);
                return $tmp2342;
            }
            break;
            case 53:
            {
                org$pandalanguage$pandac$IRNode* $tmp2347 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2347->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2347->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2349 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2350 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(l2333, r2335);
                panda$core$UInt64 $tmp2351 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2350);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2347, ((panda$core$Int64) { 1004 }), p_position, $tmp2349, $tmp2351);
                return $tmp2347;
            }
            break;
            case 55:
            {
                org$pandalanguage$pandac$IRNode* $tmp2352 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2352->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2352->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2354 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2355 = panda$core$Int64$$INTDIV$panda$core$Int64$R$panda$core$Int64(l2333, r2335);
                panda$core$UInt64 $tmp2356 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2355);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2352, ((panda$core$Int64) { 1004 }), p_position, $tmp2354, $tmp2356);
                return $tmp2352;
            }
            break;
            case 56:
            {
                org$pandalanguage$pandac$IRNode* $tmp2357 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2357->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2357->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2359 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2360 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(l2333, r2335);
                panda$core$UInt64 $tmp2361 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2360);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2357, ((panda$core$Int64) { 1004 }), p_position, $tmp2359, $tmp2361);
                return $tmp2357;
            }
            break;
            case 58:
            {
                org$pandalanguage$pandac$IRNode* $tmp2362 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2362->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2362->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2364 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2365 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(l2333, r2335);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2362, ((panda$core$Int64) { 1011 }), p_position, $tmp2364, $tmp2365);
                return $tmp2362;
            }
            break;
            case 59:
            {
                org$pandalanguage$pandac$IRNode* $tmp2366 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2366->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2366->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2368 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2369 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(l2333, r2335);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2366, ((panda$core$Int64) { 1011 }), p_position, $tmp2368, $tmp2369);
                return $tmp2366;
            }
            break;
            case 62:
            {
                org$pandalanguage$pandac$IRNode* $tmp2370 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2370->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2370->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2372 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2373 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(l2333, r2335);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2370, ((panda$core$Int64) { 1011 }), p_position, $tmp2372, $tmp2373);
                return $tmp2370;
            }
            break;
            case 63:
            {
                org$pandalanguage$pandac$IRNode* $tmp2374 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2374->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2374->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2376 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2377 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(l2333, r2335);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2374, ((panda$core$Int64) { 1011 }), p_position, $tmp2376, $tmp2377);
                return $tmp2374;
            }
            break;
            case 64:
            {
                org$pandalanguage$pandac$IRNode* $tmp2378 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2378->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2378->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2380 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2381 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(l2333, r2335);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2378, ((panda$core$Int64) { 1011 }), p_position, $tmp2380, $tmp2381);
                return $tmp2378;
            }
            break;
            case 65:
            {
                org$pandalanguage$pandac$IRNode* $tmp2382 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2382->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2382->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2384 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2385 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(l2333, r2335);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2382, ((panda$core$Int64) { 1011 }), p_position, $tmp2384, $tmp2385);
                return $tmp2382;
            }
            break;
            case 67:
            {
                org$pandalanguage$pandac$IRNode* $tmp2386 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2386->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2386->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2388 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2389 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(l2333, r2335);
                panda$core$UInt64 $tmp2390 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2389);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2386, ((panda$core$Int64) { 1004 }), p_position, $tmp2388, $tmp2390);
                return $tmp2386;
            }
            break;
            case 69:
            {
                org$pandalanguage$pandac$IRNode* $tmp2391 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2391->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2391->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2393 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2394 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(l2333, r2335);
                panda$core$UInt64 $tmp2395 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2394);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2391, ((panda$core$Int64) { 1004 }), p_position, $tmp2393, $tmp2395);
                return $tmp2391;
            }
            break;
            case 71:
            {
                org$pandalanguage$pandac$IRNode* $tmp2396 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2396->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2396->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2398 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2399 = panda$core$Int64$$BXOR$panda$core$Int64$R$panda$core$Int64(l2333, r2335);
                panda$core$UInt64 $tmp2400 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2399);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2396, ((panda$core$Int64) { 1004 }), p_position, $tmp2398, $tmp2400);
                return $tmp2396;
            }
            break;
            case 72:
            {
                org$pandalanguage$pandac$IRNode* $tmp2401 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2401->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2401->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2403 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2404 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(l2333, r2335);
                panda$core$UInt64 $tmp2405 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2404);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2401, ((panda$core$Int64) { 1004 }), p_position, $tmp2403, $tmp2405);
                return $tmp2401;
            }
            break;
            case 1:
            {
                org$pandalanguage$pandac$IRNode* $tmp2406 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2406->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2406->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2408 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2409 = panda$core$Int64$$SHR$panda$core$Int64$R$panda$core$Int64(l2333, r2335);
                panda$core$UInt64 $tmp2410 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2409);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2406, ((panda$core$Int64) { 1004 }), p_position, $tmp2408, $tmp2410);
                return $tmp2406;
            }
            break;
        }
    }
    }
    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s2411);
    return NULL;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    panda$core$Bit $tmp2412 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1009 }));
    if ($tmp2412.value) {
    {
        panda$core$Object* $tmp2413 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
        return ((org$pandalanguage$pandac$IRNode*) $tmp2413);
    }
    }
    return p_expr;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIndexedAssignment$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_left, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_right) {
    panda$collections$Array* args2418;
    org$pandalanguage$pandac$IRNode* resolved2426;
    panda$collections$Array* children2431;
    panda$core$UInt64 baseId2437;
    org$pandalanguage$pandac$IRNode* base2438;
    panda$core$UInt64 indexId2445;
    org$pandalanguage$pandac$IRNode* index2446;
    org$pandalanguage$pandac$IRNode* baseRef2451;
    org$pandalanguage$pandac$IRNode* indexRef2454;
    org$pandalanguage$pandac$IRNode* rhsIndex2457;
    org$pandalanguage$pandac$IRNode* value2459;
    panda$core$Bit $tmp2414 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_left->kind, ((panda$core$Int64) { 1040 }));
    PANDA_ASSERT($tmp2414.value);
    panda$core$Int64 $tmp2415 = panda$collections$Array$get_count$R$panda$core$Int64(p_left->children);
    panda$core$Bit $tmp2416 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2415, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp2416.value);
    panda$core$Bit $tmp2417 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 73 }));
    if ($tmp2417.value) {
    {
        panda$collections$Array* $tmp2419 = (panda$collections$Array*) malloc(40);
        $tmp2419->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2419->refCount.value = 1;
        panda$collections$Array$init($tmp2419);
        args2418 = $tmp2419;
        panda$core$Object* $tmp2421 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_left->children, ((panda$core$Int64) { 1 }));
        panda$collections$Array$add$panda$collections$Array$T(args2418, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp2421)));
        panda$collections$Array$add$panda$collections$Array$T(args2418, ((panda$core$Object*) p_right));
        panda$core$Object* $tmp2422 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_left->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp2424 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp2422), &$s2423, ((panda$collections$ListView*) args2418));
        return $tmp2424;
    }
    }
    panda$core$Bit $tmp2425 = org$pandalanguage$pandac$Compiler$isAssignment$panda$core$Int64$R$panda$core$Bit(p_op);
    PANDA_ASSERT($tmp2425.value);
    org$pandalanguage$pandac$IRNode* $tmp2427 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_left);
    resolved2426 = $tmp2427;
    if (((panda$core$Bit) { resolved2426 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp2428 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self, resolved2426);
    resolved2426 = $tmp2428;
    panda$core$Int64 $tmp2429 = panda$collections$Array$get_count$R$panda$core$Int64(resolved2426->children);
    panda$core$Bit $tmp2430 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2429, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp2430.value);
    panda$collections$Array* $tmp2432 = (panda$collections$Array*) malloc(40);
    $tmp2432->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2432->refCount.value = 1;
    panda$collections$Array$init($tmp2432);
    children2431 = $tmp2432;
    panda$core$Object* $tmp2434 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(resolved2426->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp2435 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self, ((org$pandalanguage$pandac$IRNode*) $tmp2434));
    panda$collections$Array$add$panda$collections$Array$T(children2431, ((panda$core$Object*) $tmp2435));
    panda$core$UInt64 $tmp2436 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(self->reusedValueCount, ((panda$core$UInt64) { 1 }));
    self->reusedValueCount = $tmp2436;
    baseId2437 = self->reusedValueCount;
    org$pandalanguage$pandac$IRNode* $tmp2439 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp2439->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2439->refCount.value = 1;
    panda$core$Object* $tmp2441 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children2431, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp2442 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children2431, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2439, ((panda$core$Int64) { 1027 }), ((org$pandalanguage$pandac$IRNode*) $tmp2441)->position, ((org$pandalanguage$pandac$IRNode*) $tmp2442)->type, ((panda$core$Object*) wrap_panda$core$UInt64(baseId2437)), ((panda$collections$ListView*) children2431));
    base2438 = $tmp2439;
    panda$collections$Array$clear(children2431);
    panda$core$Object* $tmp2443 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(resolved2426->children, ((panda$core$Int64) { 1 }));
    panda$collections$Array$add$panda$collections$Array$T(children2431, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp2443)));
    panda$core$UInt64 $tmp2444 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(self->reusedValueCount, ((panda$core$UInt64) { 1 }));
    self->reusedValueCount = $tmp2444;
    indexId2445 = self->reusedValueCount;
    org$pandalanguage$pandac$IRNode* $tmp2447 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp2447->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2447->refCount.value = 1;
    panda$core$Object* $tmp2449 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children2431, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp2450 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children2431, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2447, ((panda$core$Int64) { 1027 }), ((org$pandalanguage$pandac$IRNode*) $tmp2449)->position, ((org$pandalanguage$pandac$IRNode*) $tmp2450)->type, ((panda$core$Object*) wrap_panda$core$UInt64(indexId2445)), ((panda$collections$ListView*) children2431));
    index2446 = $tmp2447;
    org$pandalanguage$pandac$IRNode* $tmp2452 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp2452->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2452->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2452, ((panda$core$Int64) { 1028 }), base2438->position, base2438->type, baseId2437);
    baseRef2451 = $tmp2452;
    org$pandalanguage$pandac$IRNode* $tmp2455 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp2455->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2455->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2455, ((panda$core$Int64) { 1028 }), index2446->position, index2446->type, indexId2445);
    indexRef2454 = $tmp2455;
    org$pandalanguage$pandac$IRNode* $tmp2458 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, baseRef2451, ((panda$core$Int64) { 101 }), indexRef2454);
    rhsIndex2457 = $tmp2458;
    if (((panda$core$Bit) { rhsIndex2457 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Int64 $tmp2460 = org$pandalanguage$pandac$Compiler$removeAssignment$panda$core$Int64$R$panda$core$Int64(p_op);
    org$pandalanguage$pandac$IRNode* $tmp2461 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, rhsIndex2457, $tmp2460, p_right);
    value2459 = $tmp2461;
    if (((panda$core$Bit) { value2459 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp2464 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(rhsIndex2457->type);
    bool $tmp2463 = $tmp2464.value;
    if (!$tmp2463) goto $l2465;
    panda$core$Bit $tmp2466 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_right->type);
    $tmp2463 = $tmp2466.value;
    $l2465:;
    panda$core$Bit $tmp2467 = { $tmp2463 };
    bool $tmp2462 = $tmp2467.value;
    if (!$tmp2462) goto $l2468;
    panda$core$Bit $tmp2469 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(rhsIndex2457->type, value2459->type);
    $tmp2462 = $tmp2469.value;
    $l2468:;
    panda$core$Bit $tmp2470 = { $tmp2462 };
    if ($tmp2470.value) {
    {
        panda$collections$Array* $tmp2472 = (panda$collections$Array*) malloc(40);
        $tmp2472->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2472->refCount.value = 1;
        panda$collections$Array$init($tmp2472);
        org$pandalanguage$pandac$IRNode* $tmp2474 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, value2459, &$s2471, ((panda$collections$ListView*) $tmp2472), resolved2426->type);
        value2459 = $tmp2474;
        if (((panda$core$Bit) { value2459 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$collections$Array$clear(children2431);
    panda$collections$Array$add$panda$collections$Array$T(children2431, ((panda$core$Object*) index2446));
    panda$collections$Array$add$panda$collections$Array$T(children2431, ((panda$core$Object*) value2459));
    org$pandalanguage$pandac$IRNode* $tmp2476 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, base2438, &$s2475, ((panda$collections$ListView*) children2431));
    return $tmp2476;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_rawLeft, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_rawRight) {
    org$pandalanguage$pandac$IRNode* left2477;
    org$pandalanguage$pandac$IRNode* right2478;
    panda$core$Int64 kind2502;
    org$pandalanguage$pandac$IRNode* resolved2509;
    panda$collections$Array* children2511;
    org$pandalanguage$pandac$IRNode* resolved2518;
    panda$collections$Array* children2520;
    org$pandalanguage$pandac$ClassDecl* cl2532;
    org$pandalanguage$pandac$ClassDecl* cl2549;
    org$pandalanguage$pandac$IRNode* finalLeft2565;
    org$pandalanguage$pandac$IRNode* finalRight2568;
    panda$collections$Array* children2571;
    panda$collections$Array* children2585;
    panda$collections$Array* children2597;
    org$pandalanguage$pandac$IRNode* reusedLeft2603;
    org$pandalanguage$pandac$ClassDecl* cl2620;
    panda$collections$ListView* parameters2622;
    org$pandalanguage$pandac$Symbol* methods2624;
    org$pandalanguage$pandac$Type* type2628;
    panda$collections$Array* types2629;
    org$pandalanguage$pandac$MethodDecl* m2633;
    panda$collections$Iterator* m$Iter2638;
    org$pandalanguage$pandac$MethodDecl* m2650;
    panda$collections$Array* children2661;
    panda$collections$Array* children2690;
    panda$collections$Array* children2706;
    org$pandalanguage$pandac$Type* resultType2729;
    org$pandalanguage$pandac$IRNode* result2733;
    org$pandalanguage$pandac$IRNode* resolved2736;
    org$pandalanguage$pandac$IRNode* target2742;
    left2477 = p_rawLeft;
    right2478 = p_rawRight;
    panda$core$Bit $tmp2479 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2477->type->typeKind, ((panda$core$Int64) { 15 }));
    if ($tmp2479.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2480 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, right2478);
        right2478 = $tmp2480;
        if (((panda$core$Bit) { right2478 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Int64$nullable $tmp2481 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, left2477, right2478->type);
        if (((panda$core$Bit) { $tmp2481.nonnull }).value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2482 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, left2477, right2478->type);
            left2477 = $tmp2482;
        }
        }
    }
    }
    panda$core$Bit $tmp2484 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right2478->type->typeKind, ((panda$core$Int64) { 15 }));
    bool $tmp2483 = $tmp2484.value;
    if (!$tmp2483) goto $l2485;
    panda$core$Int64$nullable $tmp2486 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, right2478, left2477->type);
    $tmp2483 = ((panda$core$Bit) { $tmp2486.nonnull }).value;
    $l2485:;
    panda$core$Bit $tmp2487 = { $tmp2483 };
    if ($tmp2487.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2488 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, right2478, left2477->type);
        right2478 = $tmp2488;
    }
    }
    panda$core$Bit $tmp2492 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 58 }));
    bool $tmp2491 = $tmp2492.value;
    if ($tmp2491) goto $l2493;
    panda$core$Bit $tmp2494 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 59 }));
    $tmp2491 = $tmp2494.value;
    $l2493:;
    panda$core$Bit $tmp2495 = { $tmp2491 };
    bool $tmp2490 = $tmp2495.value;
    if ($tmp2490) goto $l2496;
    panda$core$Bit $tmp2497 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 60 }));
    $tmp2490 = $tmp2497.value;
    $l2496:;
    panda$core$Bit $tmp2498 = { $tmp2490 };
    bool $tmp2489 = $tmp2498.value;
    if ($tmp2489) goto $l2499;
    panda$core$Bit $tmp2500 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 61 }));
    $tmp2489 = $tmp2500.value;
    $l2499:;
    panda$core$Bit $tmp2501 = { $tmp2489 };
    if ($tmp2501.value) {
    {
        panda$core$Bit $tmp2504 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 58 }));
        bool $tmp2503 = $tmp2504.value;
        if ($tmp2503) goto $l2505;
        panda$core$Bit $tmp2506 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 60 }));
        $tmp2503 = $tmp2506.value;
        $l2505:;
        panda$core$Bit $tmp2507 = { $tmp2503 };
        if ($tmp2507.value) {
        {
            kind2502 = ((panda$core$Int64) { 1035 });
        }
        }
        else {
        {
            kind2502 = ((panda$core$Int64) { 1036 });
        }
        }
        panda$core$Bit $tmp2508 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2477->kind, ((panda$core$Int64) { 1030 }));
        if ($tmp2508.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2510 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, right2478);
            resolved2509 = $tmp2510;
            if (((panda$core$Bit) { resolved2509 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp2512 = (panda$collections$Array*) malloc(40);
            $tmp2512->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2512->refCount.value = 1;
            panda$collections$Array$init($tmp2512);
            children2511 = $tmp2512;
            panda$collections$Array$add$panda$collections$Array$T(children2511, ((panda$core$Object*) resolved2509));
            org$pandalanguage$pandac$IRNode* $tmp2514 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2514->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2514->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2516 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2514, kind2502, p_position, $tmp2516, ((panda$collections$ListView*) children2511));
            return $tmp2514;
        }
        }
        panda$core$Bit $tmp2517 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right2478->kind, ((panda$core$Int64) { 1030 }));
        if ($tmp2517.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2519 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, left2477);
            resolved2518 = $tmp2519;
            if (((panda$core$Bit) { resolved2518 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp2521 = (panda$collections$Array*) malloc(40);
            $tmp2521->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2521->refCount.value = 1;
            panda$collections$Array$init($tmp2521);
            children2520 = $tmp2521;
            panda$collections$Array$add$panda$collections$Array$T(children2520, ((panda$core$Object*) resolved2518));
            org$pandalanguage$pandac$IRNode* $tmp2523 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2523->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2523->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2525 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2523, kind2502, p_position, $tmp2525, ((panda$collections$ListView*) children2520));
            return $tmp2523;
        }
        }
    }
    }
    panda$core$Bit $tmp2527 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 60 }));
    bool $tmp2526 = $tmp2527.value;
    if ($tmp2526) goto $l2528;
    panda$core$Bit $tmp2529 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 61 }));
    $tmp2526 = $tmp2529.value;
    $l2528:;
    panda$core$Bit $tmp2530 = { $tmp2526 };
    if ($tmp2530.value) {
    {
        panda$core$Bit $tmp2531 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(left2477->type);
        if ($tmp2531.value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp2533 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, left2477->type);
            cl2532 = $tmp2533;
            if (((panda$core$Bit) { cl2532 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$Bit $tmp2534 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, cl2532);
            if ($tmp2534.value) {
            {
                panda$core$String* $tmp2536 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
                panda$core$String* $tmp2537 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2535, $tmp2536);
                panda$core$String* $tmp2539 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2537, &$s2538);
                panda$core$String* $tmp2540 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2539, ((panda$core$Object*) left2477->type));
                panda$core$String* $tmp2542 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2540, &$s2541);
                panda$core$String* $tmp2544 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2543, ((panda$core$Object*) right2478->type));
                panda$core$String* $tmp2546 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2544, &$s2545);
                panda$core$String* $tmp2547 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2542, $tmp2546);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp2547);
            }
            }
        }
        }
        panda$core$Bit $tmp2548 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(right2478->type);
        if ($tmp2548.value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp2550 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, right2478->type);
            cl2549 = $tmp2550;
            if (((panda$core$Bit) { cl2549 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$Bit $tmp2551 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, cl2549);
            if ($tmp2551.value) {
            {
                panda$core$String* $tmp2553 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
                panda$core$String* $tmp2554 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2552, $tmp2553);
                panda$core$String* $tmp2556 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2554, &$s2555);
                panda$core$String* $tmp2557 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2556, ((panda$core$Object*) left2477->type));
                panda$core$String* $tmp2559 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2557, &$s2558);
                panda$core$String* $tmp2561 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2560, ((panda$core$Object*) right2478->type));
                panda$core$String* $tmp2563 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2561, &$s2562);
                panda$core$String* $tmp2564 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2559, $tmp2563);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp2564);
            }
            }
        }
        }
        org$pandalanguage$pandac$Type* $tmp2566 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp2567 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, left2477, $tmp2566);
        finalLeft2565 = $tmp2567;
        if (((panda$core$Bit) { finalLeft2565 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$Type* $tmp2569 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp2570 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, right2478, $tmp2569);
        finalRight2568 = $tmp2570;
        if (((panda$core$Bit) { finalRight2568 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp2572 = (panda$collections$Array*) malloc(40);
        $tmp2572->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2572->refCount.value = 1;
        panda$collections$Array$init($tmp2572);
        children2571 = $tmp2572;
        panda$collections$Array$add$panda$collections$Array$T(children2571, ((panda$core$Object*) finalLeft2565));
        panda$collections$Array$add$panda$collections$Array$T(children2571, ((panda$core$Object*) finalRight2568));
        org$pandalanguage$pandac$IRNode* $tmp2574 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2574->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2574->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp2576 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2574, ((panda$core$Int64) { 1023 }), p_position, $tmp2576, ((panda$core$Object*) wrap_panda$core$Int64(p_op)), ((panda$collections$ListView*) children2571));
        return $tmp2574;
    }
    }
    panda$core$Bit $tmp2577 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 73 }));
    if ($tmp2577.value) {
    {
        panda$core$Bit $tmp2578 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2477->kind, ((panda$core$Int64) { 1040 }));
        if ($tmp2578.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2579 = org$pandalanguage$pandac$Compiler$compileIndexedAssignment$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, left2477, p_op, right2478);
            return $tmp2579;
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp2580 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, left2477);
        left2477 = $tmp2580;
        if (((panda$core$Bit) { left2477 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp2581 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, right2478, left2477->type);
        right2478 = $tmp2581;
        if (((panda$core$Bit) { right2478 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp2582 = org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, left2477);
        panda$core$Bit $tmp2583 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2582);
        if ($tmp2583.value) {
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, left2477->position, &$s2584);
            return NULL;
        }
        }
        panda$collections$Array* $tmp2586 = (panda$collections$Array*) malloc(40);
        $tmp2586->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2586->refCount.value = 1;
        panda$collections$Array$init($tmp2586);
        children2585 = $tmp2586;
        panda$collections$Array$add$panda$collections$Array$T(children2585, ((panda$core$Object*) left2477));
        panda$collections$Array$add$panda$collections$Array$T(children2585, ((panda$core$Object*) right2478));
        org$pandalanguage$pandac$IRNode* $tmp2588 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2588->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2588->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2588, ((panda$core$Int64) { 1023 }), p_position, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 73 }))), ((panda$collections$ListView*) children2585));
        return $tmp2588;
    }
    }
    panda$core$Bit $tmp2590 = org$pandalanguage$pandac$Compiler$isAssignment$panda$core$Int64$R$panda$core$Bit(p_op);
    if ($tmp2590.value) {
    {
        panda$core$Bit $tmp2591 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2477->kind, ((panda$core$Int64) { 1040 }));
        if ($tmp2591.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2592 = org$pandalanguage$pandac$Compiler$compileIndexedAssignment$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, left2477, p_op, right2478);
            return $tmp2592;
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp2593 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, left2477);
        left2477 = $tmp2593;
        if (((panda$core$Bit) { left2477 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp2594 = org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, left2477);
        panda$core$Bit $tmp2595 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2594);
        if ($tmp2595.value) {
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, left2477->position, &$s2596);
            return NULL;
        }
        }
        panda$collections$Array* $tmp2598 = (panda$collections$Array*) malloc(40);
        $tmp2598->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2598->refCount.value = 1;
        panda$collections$Array$init($tmp2598);
        children2597 = $tmp2598;
        panda$collections$Array$add$panda$collections$Array$T(children2597, ((panda$core$Object*) left2477));
        panda$core$UInt64 $tmp2600 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(self->reusedValueCount, ((panda$core$UInt64) { 1 }));
        self->reusedValueCount = $tmp2600;
        org$pandalanguage$pandac$IRNode* $tmp2601 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2601->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2601->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2601, ((panda$core$Int64) { 1027 }), left2477->position, left2477->type, ((panda$core$Object*) wrap_panda$core$UInt64(self->reusedValueCount)), ((panda$collections$ListView*) children2597));
        left2477 = $tmp2601;
        org$pandalanguage$pandac$IRNode* $tmp2604 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2604->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2604->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2604, ((panda$core$Int64) { 1028 }), left2477->position, left2477->type, self->reusedValueCount);
        reusedLeft2603 = $tmp2604;
        panda$core$Int64 $tmp2606 = org$pandalanguage$pandac$Compiler$removeAssignment$panda$core$Int64$R$panda$core$Int64(p_op);
        org$pandalanguage$pandac$IRNode* $tmp2607 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, reusedLeft2603, $tmp2606, right2478);
        right2478 = $tmp2607;
        if (((panda$core$Bit) { right2478 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp2609 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(left2477->type);
        bool $tmp2608 = $tmp2609.value;
        if (!$tmp2608) goto $l2610;
        panda$core$Bit $tmp2611 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(left2477->type, right2478->type);
        $tmp2608 = $tmp2611.value;
        $l2610:;
        panda$core$Bit $tmp2612 = { $tmp2608 };
        if ($tmp2612.value) {
        {
            panda$collections$Array* $tmp2614 = (panda$collections$Array*) malloc(40);
            $tmp2614->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2614->refCount.value = 1;
            panda$collections$Array$init($tmp2614);
            org$pandalanguage$pandac$IRNode* $tmp2616 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, right2478, &$s2613, ((panda$collections$ListView*) $tmp2614), left2477->type);
            right2478 = $tmp2616;
            if (((panda$core$Bit) { right2478 == NULL }).value) {
            {
                return NULL;
            }
            }
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp2617 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, left2477, ((panda$core$Int64) { 73 }), right2478);
        return $tmp2617;
    }
    }
    panda$core$Bit $tmp2618 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 101 }));
    if ($tmp2618.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2619 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, left2477);
        left2477 = $tmp2619;
        if (((panda$core$Bit) { left2477 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$ClassDecl* $tmp2621 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, left2477->type);
        cl2620 = $tmp2621;
        if (((panda$core$Bit) { cl2620 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$ListView* $tmp2623 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, left2477->type);
        parameters2622 = $tmp2623;
        org$pandalanguage$pandac$SymbolTable* $tmp2625 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl2620);
        org$pandalanguage$pandac$Symbol* $tmp2627 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp2625, &$s2626);
        methods2624 = $tmp2627;
        if (((panda$core$Bit) { methods2624 != NULL }).value) {
        {
            panda$collections$Array* $tmp2630 = (panda$collections$Array*) malloc(40);
            $tmp2630->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2630->refCount.value = 1;
            panda$collections$Array$init($tmp2630);
            types2629 = $tmp2630;
            panda$core$Bit $tmp2632 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(methods2624->kind, ((panda$core$Int64) { 204 }));
            if ($tmp2632.value) {
            {
                m2633 = ((org$pandalanguage$pandac$MethodDecl*) methods2624);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m2633);
                org$pandalanguage$pandac$MethodRef* $tmp2634 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                $tmp2634->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                $tmp2634->refCount.value = 1;
                org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp2634, m2633, parameters2622);
                org$pandalanguage$pandac$Type* $tmp2636 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type($tmp2634);
                panda$collections$Array$add$panda$collections$Array$T(types2629, ((panda$core$Object*) $tmp2636));
            }
            }
            else {
            {
                panda$core$Bit $tmp2637 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(methods2624->kind, ((panda$core$Int64) { 205 }));
                PANDA_ASSERT($tmp2637.value);
                {
                    ITable* $tmp2639 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) methods2624)->methods)->$class->itable;
                    while ($tmp2639->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp2639 = $tmp2639->next;
                    }
                    $fn2641 $tmp2640 = $tmp2639->methods[0];
                    panda$collections$Iterator* $tmp2642 = $tmp2640(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) methods2624)->methods));
                    m$Iter2638 = $tmp2642;
                    $l2643:;
                    ITable* $tmp2645 = m$Iter2638->$class->itable;
                    while ($tmp2645->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp2645 = $tmp2645->next;
                    }
                    $fn2647 $tmp2646 = $tmp2645->methods[0];
                    panda$core$Bit $tmp2648 = $tmp2646(m$Iter2638);
                    panda$core$Bit $tmp2649 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2648);
                    if (!$tmp2649.value) goto $l2644;
                    {
                        ITable* $tmp2651 = m$Iter2638->$class->itable;
                        while ($tmp2651->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2651 = $tmp2651->next;
                        }
                        $fn2653 $tmp2652 = $tmp2651->methods[1];
                        panda$core$Object* $tmp2654 = $tmp2652(m$Iter2638);
                        m2650 = ((org$pandalanguage$pandac$MethodDecl*) $tmp2654);
                        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m2650);
                        org$pandalanguage$pandac$MethodRef* $tmp2655 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                        $tmp2655->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                        $tmp2655->refCount.value = 1;
                        org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp2655, m2650, parameters2622);
                        org$pandalanguage$pandac$Type* $tmp2657 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type($tmp2655);
                        panda$collections$Array$add$panda$collections$Array$T(types2629, ((panda$core$Object*) $tmp2657));
                    }
                    goto $l2643;
                    $l2644:;
                }
            }
            }
            org$pandalanguage$pandac$Type* $tmp2658 = (org$pandalanguage$pandac$Type*) malloc(96);
            $tmp2658->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp2658->refCount.value = 1;
            org$pandalanguage$pandac$Type$init$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp2658, ((panda$collections$ListView*) types2629));
            type2628 = $tmp2658;
        }
        }
        else {
        {
            org$pandalanguage$pandac$Type* $tmp2660 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            type2628 = $tmp2660;
        }
        }
        panda$collections$Array* $tmp2662 = (panda$collections$Array*) malloc(40);
        $tmp2662->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2662->refCount.value = 1;
        panda$collections$Array$init($tmp2662);
        children2661 = $tmp2662;
        panda$collections$Array$add$panda$collections$Array$T(children2661, ((panda$core$Object*) left2477));
        panda$collections$Array$add$panda$collections$Array$T(children2661, ((panda$core$Object*) right2478));
        org$pandalanguage$pandac$IRNode* $tmp2664 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2664->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2664->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2664, ((panda$core$Int64) { 1040 }), p_position, type2628, ((panda$collections$ListView*) children2661));
        return $tmp2664;
    }
    }
    org$pandalanguage$pandac$Type* $tmp2666 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2667 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(left2477->type, $tmp2666);
    if ($tmp2667.value) {
    {
        org$pandalanguage$pandac$Type* $tmp2669 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp2670 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(right2478->type, $tmp2669);
        bool $tmp2668 = $tmp2670.value;
        if (!$tmp2668) goto $l2671;
        panda$core$Bit $tmp2676 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 66 }));
        bool $tmp2675 = $tmp2676.value;
        if ($tmp2675) goto $l2677;
        panda$core$Bit $tmp2678 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 68 }));
        $tmp2675 = $tmp2678.value;
        $l2677:;
        panda$core$Bit $tmp2679 = { $tmp2675 };
        bool $tmp2674 = $tmp2679.value;
        if ($tmp2674) goto $l2680;
        panda$core$Bit $tmp2681 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 70 }));
        $tmp2674 = $tmp2681.value;
        $l2680:;
        panda$core$Bit $tmp2682 = { $tmp2674 };
        bool $tmp2673 = $tmp2682.value;
        if ($tmp2673) goto $l2683;
        panda$core$Bit $tmp2684 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 58 }));
        $tmp2673 = $tmp2684.value;
        $l2683:;
        panda$core$Bit $tmp2685 = { $tmp2673 };
        bool $tmp2672 = $tmp2685.value;
        if ($tmp2672) goto $l2686;
        panda$core$Bit $tmp2687 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 59 }));
        $tmp2672 = $tmp2687.value;
        $l2686:;
        panda$core$Bit $tmp2688 = { $tmp2672 };
        $tmp2668 = $tmp2688.value;
        $l2671:;
        panda$core$Bit $tmp2689 = { $tmp2668 };
        if ($tmp2689.value) {
        {
            panda$collections$Array* $tmp2691 = (panda$collections$Array*) malloc(40);
            $tmp2691->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2691->refCount.value = 1;
            panda$collections$Array$init($tmp2691);
            children2690 = $tmp2691;
            panda$collections$Array$add$panda$collections$Array$T(children2690, ((panda$core$Object*) left2477));
            panda$collections$Array$add$panda$collections$Array$T(children2690, ((panda$core$Object*) right2478));
            org$pandalanguage$pandac$IRNode* $tmp2693 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2693->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2693->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2693, ((panda$core$Int64) { 1023 }), p_position, left2477->type, ((panda$core$Object*) wrap_panda$core$Int64(p_op)), ((panda$collections$ListView*) children2690));
            return $tmp2693;
        }
        }
        panda$core$String* $tmp2696 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
        panda$core$String* $tmp2697 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2695, $tmp2696);
        panda$core$String* $tmp2699 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2697, &$s2698);
        panda$core$String* $tmp2700 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2699, ((panda$core$Object*) left2477->type));
        panda$core$String* $tmp2702 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2700, &$s2701);
        panda$core$String* $tmp2703 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2702, ((panda$core$Object*) right2478->type));
        panda$core$String* $tmp2705 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2703, &$s2704);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp2705);
        return NULL;
    }
    }
    panda$collections$Array* $tmp2707 = (panda$collections$Array*) malloc(40);
    $tmp2707->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2707->refCount.value = 1;
    panda$collections$Array$init($tmp2707);
    children2706 = $tmp2707;
    panda$core$Bit $tmp2711 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2477->kind, ((panda$core$Int64) { 1004 }));
    bool $tmp2710 = $tmp2711.value;
    if ($tmp2710) goto $l2712;
    panda$core$Bit $tmp2713 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2477->kind, ((panda$core$Int64) { 1032 }));
    $tmp2710 = $tmp2713.value;
    $l2712:;
    panda$core$Bit $tmp2714 = { $tmp2710 };
    bool $tmp2709 = $tmp2714.value;
    if (!$tmp2709) goto $l2715;
    panda$core$Bit $tmp2717 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right2478->kind, ((panda$core$Int64) { 1004 }));
    bool $tmp2716 = $tmp2717.value;
    if ($tmp2716) goto $l2718;
    panda$core$Bit $tmp2719 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right2478->kind, ((panda$core$Int64) { 1032 }));
    $tmp2716 = $tmp2719.value;
    $l2718:;
    panda$core$Bit $tmp2720 = { $tmp2716 };
    $tmp2709 = $tmp2720.value;
    $l2715:;
    panda$core$Bit $tmp2721 = { $tmp2709 };
    if ($tmp2721.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2722 = org$pandalanguage$pandac$Compiler$foldInts$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, left2477, p_op, right2478);
        return $tmp2722;
    }
    }
    panda$core$Bit $tmp2724 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(left2477->type);
    bool $tmp2723 = $tmp2724.value;
    if (!$tmp2723) goto $l2725;
    panda$core$Int64$nullable $tmp2726 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, right2478, left2477->type);
    $tmp2723 = ((panda$core$Bit) { $tmp2726.nonnull }).value;
    $l2725:;
    panda$core$Bit $tmp2727 = { $tmp2723 };
    if ($tmp2727.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2728 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, right2478, left2477->type);
        right2478 = $tmp2728;
        PANDA_ASSERT(((panda$core$Bit) { right2478 != NULL }).value);
        panda$collections$Array$add$panda$collections$Array$T(children2706, ((panda$core$Object*) left2477));
        panda$collections$Array$add$panda$collections$Array$T(children2706, ((panda$core$Object*) right2478));
        switch (p_op.value) {
            case 58:
            case 59:
            case 63:
            case 65:
            case 62:
            case 64:
            {
                org$pandalanguage$pandac$Type* $tmp2730 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
                resultType2729 = $tmp2730;
            }
            break;
            default:
            {
                resultType2729 = left2477->type;
            }
        }
        org$pandalanguage$pandac$IRNode* $tmp2731 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2731->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2731->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2731, ((panda$core$Int64) { 1023 }), p_position, resultType2729, ((panda$core$Object*) wrap_panda$core$Int64(p_op)), ((panda$collections$ListView*) children2706));
        return $tmp2731;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children2706, ((panda$core$Object*) right2478));
    PANDA_ASSERT(self->reportErrors.value);
    self->reportErrors = ((panda$core$Bit) { false });
    panda$core$String* $tmp2734 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
    org$pandalanguage$pandac$IRNode* $tmp2735 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, left2477, $tmp2734, ((panda$collections$ListView*) children2706));
    result2733 = $tmp2735;
    self->reportErrors = ((panda$core$Bit) { true });
    if (((panda$core$Bit) { result2733 == NULL }).value) {
    {
        panda$collections$Array$clear(children2706);
        panda$collections$Array$add$panda$collections$Array$T(children2706, ((panda$core$Object*) left2477));
        org$pandalanguage$pandac$IRNode* $tmp2737 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, right2478);
        resolved2736 = $tmp2737;
        bool $tmp2738 = ((panda$core$Bit) { resolved2736 != NULL }).value;
        if (!$tmp2738) goto $l2739;
        panda$core$Bit $tmp2740 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(resolved2736->type);
        $tmp2738 = $tmp2740.value;
        $l2739:;
        panda$core$Bit $tmp2741 = { $tmp2738 };
        if ($tmp2741.value) {
        {
            panda$collections$Array$add$panda$collections$Array$T(children2706, ((panda$core$Object*) resolved2736));
            org$pandalanguage$pandac$IRNode* $tmp2743 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2743->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2743->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2745 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp2743, ((panda$core$Int64) { 1001 }), resolved2736->position, $tmp2745, resolved2736->type);
            target2742 = $tmp2743;
            panda$core$String* $tmp2746 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
            org$pandalanguage$pandac$IRNode* $tmp2747 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target2742, $tmp2746, ((panda$collections$ListView*) children2706));
            result2733 = $tmp2747;
        }
        }
    }
    }
    return result2733;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_b) {
    org$pandalanguage$pandac$IRNode* left2748;
    org$pandalanguage$pandac$IRNode* right2751;
    panda$core$Object* $tmp2749 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_b->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp2750 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2749));
    left2748 = $tmp2750;
    if (((panda$core$Bit) { left2748 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Object* $tmp2752 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_b->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp2753 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2752));
    right2751 = $tmp2753;
    if (((panda$core$Bit) { right2751 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp2754 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_b->position, left2748, ((panda$core$Int64$wrapper*) p_b->payload)->value, right2751);
    return $tmp2754;
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type) {
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp2758;
    switch (p_type->typeKind.value) {
        case 22:
        {
            panda$collections$ListView* $tmp2755 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p_type->parameter->bound);
            return $tmp2755;
        }
        break;
        case 21:
        {
            panda$core$Int64 $tmp2756 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_type->subtypes);
            panda$core$Bit $tmp2757 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp2756, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2757.value);
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp2758, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
            panda$collections$ImmutableArray* $tmp2759 = panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(p_type->subtypes, $tmp2758);
            return ((panda$collections$ListView*) $tmp2759);
        }
        break;
        case 11:
        {
            panda$core$Object* $tmp2760 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
            panda$collections$ListView* $tmp2761 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, ((org$pandalanguage$pandac$Type*) $tmp2760));
            return $tmp2761;
        }
        break;
        default:
        {
            panda$collections$Array* $tmp2762 = (panda$collections$Array*) malloc(40);
            $tmp2762->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2762->refCount.value = 1;
            panda$collections$Array$init($tmp2762);
            return ((panda$collections$ListView*) $tmp2762);
        }
    }
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$IRNode$Q$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_target) {
    if (((panda$core$Bit) { p_target != NULL }).value) {
    {
        panda$core$Bit $tmp2764 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1001 }));
        if ($tmp2764.value) {
        {
            panda$collections$ListView* $tmp2765 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, ((org$pandalanguage$pandac$Type*) p_target->payload));
            return $tmp2765;
        }
        }
        panda$collections$ListView* $tmp2766 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p_target->type);
        return $tmp2766;
    }
    }
    panda$collections$Array* $tmp2767 = (panda$collections$Array*) malloc(40);
    $tmp2767->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2767->refCount.value = 1;
    panda$collections$Array$init($tmp2767);
    return ((panda$collections$ListView*) $tmp2767);
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compilePrefix$panda$core$Int64$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_base, org$pandalanguage$pandac$Position p_position) {
    panda$core$String* name2770;
    org$pandalanguage$pandac$ClassDecl* cl2772;
    org$pandalanguage$pandac$Symbol* s2774;
    org$pandalanguage$pandac$MethodDecl* m2777;
    panda$collections$Iterator* test$Iter2782;
    org$pandalanguage$pandac$MethodDecl* test2794;
    org$pandalanguage$pandac$MethodRef* ref2806;
    panda$collections$Array* children2810;
    org$pandalanguage$pandac$IRNode* methodRef2813;
    org$pandalanguage$pandac$Position $tmp2819;
    panda$collections$Array* args2820;
    panda$collections$Array* children2829;
    panda$collections$Array* children2839;
    org$pandalanguage$pandac$IRNode* coerced2848;
    panda$collections$Array* children2851;
    panda$core$Bit $tmp2769 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_base->type);
    if ($tmp2769.value) {
    {
        panda$core$String* $tmp2771 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
        name2770 = $tmp2771;
        org$pandalanguage$pandac$ClassDecl* $tmp2773 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_base->type);
        cl2772 = $tmp2773;
        if (((panda$core$Bit) { cl2772 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$SymbolTable* $tmp2775 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl2772);
        org$pandalanguage$pandac$Symbol* $tmp2776 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp2775, name2770);
        s2774 = $tmp2776;
        if (((panda$core$Bit) { s2774 != NULL }).value) {
        {
            m2777 = NULL;
            switch (s2774->kind.value) {
                case 204:
                {
                    m2777 = ((org$pandalanguage$pandac$MethodDecl*) s2774);
                    panda$core$Int64 $tmp2778 = panda$collections$Array$get_count$R$panda$core$Int64(m2777->parameters);
                    panda$core$Bit $tmp2779 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2778, ((panda$core$Int64) { 0 }));
                    PANDA_ASSERT($tmp2779.value);
                    panda$core$Bit $tmp2780 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(m2777->annotations);
                    panda$core$Bit $tmp2781 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2780);
                    PANDA_ASSERT($tmp2781.value);
                }
                break;
                case 205:
                {
                    {
                        ITable* $tmp2783 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s2774)->methods)->$class->itable;
                        while ($tmp2783->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp2783 = $tmp2783->next;
                        }
                        $fn2785 $tmp2784 = $tmp2783->methods[0];
                        panda$collections$Iterator* $tmp2786 = $tmp2784(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s2774)->methods));
                        test$Iter2782 = $tmp2786;
                        $l2787:;
                        ITable* $tmp2789 = test$Iter2782->$class->itable;
                        while ($tmp2789->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2789 = $tmp2789->next;
                        }
                        $fn2791 $tmp2790 = $tmp2789->methods[0];
                        panda$core$Bit $tmp2792 = $tmp2790(test$Iter2782);
                        panda$core$Bit $tmp2793 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2792);
                        if (!$tmp2793.value) goto $l2788;
                        {
                            ITable* $tmp2795 = test$Iter2782->$class->itable;
                            while ($tmp2795->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp2795 = $tmp2795->next;
                            }
                            $fn2797 $tmp2796 = $tmp2795->methods[1];
                            panda$core$Object* $tmp2798 = $tmp2796(test$Iter2782);
                            test2794 = ((org$pandalanguage$pandac$MethodDecl*) $tmp2798);
                            panda$core$Bit $tmp2800 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(test2794->annotations);
                            panda$core$Bit $tmp2801 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2800);
                            bool $tmp2799 = $tmp2801.value;
                            if (!$tmp2799) goto $l2802;
                            panda$core$Int64 $tmp2803 = panda$collections$Array$get_count$R$panda$core$Int64(test2794->parameters);
                            panda$core$Bit $tmp2804 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2803, ((panda$core$Int64) { 0 }));
                            $tmp2799 = $tmp2804.value;
                            $l2802:;
                            panda$core$Bit $tmp2805 = { $tmp2799 };
                            if ($tmp2805.value) {
                            {
                                m2777 = test2794;
                                goto $l2788;
                            }
                            }
                        }
                        goto $l2787;
                        $l2788:;
                    }
                }
                break;
                default:
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
            }
            if (((panda$core$Bit) { m2777 != NULL }).value) {
            {
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m2777);
                org$pandalanguage$pandac$MethodRef* $tmp2807 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                $tmp2807->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                $tmp2807->refCount.value = 1;
                panda$collections$ListView* $tmp2809 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$IRNode$Q$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p_base);
                org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp2807, m2777, $tmp2809);
                ref2806 = $tmp2807;
                panda$collections$Array* $tmp2811 = (panda$collections$Array*) malloc(40);
                $tmp2811->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp2811->refCount.value = 1;
                panda$collections$Array$init($tmp2811);
                children2810 = $tmp2811;
                panda$collections$Array$add$panda$collections$Array$T(children2810, ((panda$core$Object*) p_base));
                org$pandalanguage$pandac$IRNode* $tmp2814 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2814->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2814->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2816 = (org$pandalanguage$pandac$Type*) malloc(96);
                $tmp2816->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
                $tmp2816->refCount.value = 1;
                org$pandalanguage$pandac$Position$init(&$tmp2819);
                org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp2816, &$s2818, ((panda$core$Int64) { 16 }), $tmp2819, ((panda$core$Bit) { true }));
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2814, ((panda$core$Int64) { 1002 }), p_position, $tmp2816, ((panda$core$Object*) ref2806), ((panda$collections$ListView*) children2810));
                methodRef2813 = $tmp2814;
                panda$collections$Array* $tmp2821 = (panda$collections$Array*) malloc(40);
                $tmp2821->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp2821->refCount.value = 1;
                panda$collections$Array$init($tmp2821);
                args2820 = $tmp2821;
                org$pandalanguage$pandac$IRNode* $tmp2823 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, methodRef2813, ((panda$collections$ListView*) args2820));
                return $tmp2823;
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
                    org$pandalanguage$pandac$IRNode* $tmp2824 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp2824->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp2824->refCount.value = 1;
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2824, ((panda$core$Int64) { 1032 }), p_position, p_base->type, ((panda$core$UInt64$wrapper*) p_base->payload)->value);
                    return $tmp2824;
                }
                break;
                case 1032:
                {
                    org$pandalanguage$pandac$IRNode* $tmp2826 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp2826->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp2826->refCount.value = 1;
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2826, ((panda$core$Int64) { 1004 }), p_position, p_base->type, ((panda$core$UInt64$wrapper*) p_base->payload)->value);
                    return $tmp2826;
                }
                break;
                default:
                {
                    panda$core$Bit $tmp2828 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_base->type);
                    if ($tmp2828.value) {
                    {
                        panda$collections$Array* $tmp2830 = (panda$collections$Array*) malloc(40);
                        $tmp2830->$class = (panda$core$Class*) &panda$collections$Array$class;
                        $tmp2830->refCount.value = 1;
                        panda$collections$Array$init($tmp2830);
                        children2829 = $tmp2830;
                        panda$collections$Array$add$panda$collections$Array$T(children2829, ((panda$core$Object*) p_base));
                        org$pandalanguage$pandac$IRNode* $tmp2832 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                        $tmp2832->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                        $tmp2832->refCount.value = 1;
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2832, ((panda$core$Int64) { 1041 }), p_base->position, p_base->type, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 52 }))), ((panda$collections$ListView*) children2829));
                        return $tmp2832;
                    }
                    }
                }
            }
            panda$core$String* $tmp2835 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2834, ((panda$core$Object*) p_base->type));
            panda$core$String* $tmp2837 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2835, &$s2836);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_base->position, $tmp2837);
            return NULL;
        }
        break;
        case 50:
        {
            panda$core$Bit $tmp2838 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_base->type);
            if ($tmp2838.value) {
            {
                panda$collections$Array* $tmp2840 = (panda$collections$Array*) malloc(40);
                $tmp2840->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp2840->refCount.value = 1;
                panda$collections$Array$init($tmp2840);
                children2839 = $tmp2840;
                panda$collections$Array$add$panda$collections$Array$T(children2839, ((panda$core$Object*) p_base));
                org$pandalanguage$pandac$IRNode* $tmp2842 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2842->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2842->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2842, ((panda$core$Int64) { 1041 }), p_base->position, p_base->type, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 50 }))), ((panda$collections$ListView*) children2839));
                return $tmp2842;
            }
            }
            else {
            {
                panda$core$String* $tmp2845 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2844, ((org$pandalanguage$pandac$Symbol*) p_base->type)->name);
                panda$core$String* $tmp2847 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2845, &$s2846);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_base->position, $tmp2847);
                return NULL;
            }
            }
        }
        break;
        case 49:
        {
            org$pandalanguage$pandac$Type* $tmp2849 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode* $tmp2850 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_base, $tmp2849);
            coerced2848 = $tmp2850;
            if (((panda$core$Bit) { coerced2848 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp2852 = (panda$collections$Array*) malloc(40);
            $tmp2852->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2852->refCount.value = 1;
            panda$collections$Array$init($tmp2852);
            children2851 = $tmp2852;
            panda$collections$Array$add$panda$collections$Array$T(children2851, ((panda$core$Object*) coerced2848));
            org$pandalanguage$pandac$IRNode* $tmp2854 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2854->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2854->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2854, ((panda$core$Int64) { 1041 }), p_base->position, p_base->type, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 49 }))), ((panda$collections$ListView*) children2851));
            return $tmp2854;
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
    org$pandalanguage$pandac$IRNode* base2859;
    panda$core$Bit $tmp2856 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_p->kind, ((panda$core$Int64) { 112 }));
    PANDA_ASSERT($tmp2856.value);
    panda$core$Int64 $tmp2857 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_p->children);
    panda$core$Bit $tmp2858 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2857, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp2858.value);
    panda$core$Object* $tmp2860 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_p->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp2861 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2860));
    base2859 = $tmp2861;
    if (((panda$core$Bit) { base2859 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp2862 = org$pandalanguage$pandac$Compiler$compilePrefix$panda$core$Int64$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$R$org$pandalanguage$pandac$IRNode$Q(self, ((panda$core$Int64$wrapper*) p_p->payload)->value, base2859, p_p->position);
    return $tmp2862;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileCall$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_c) {
    org$pandalanguage$pandac$IRNode* m2864;
    panda$collections$Array* args2867;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2870;
    org$pandalanguage$pandac$IRNode* arg2890;
    panda$core$Bit $tmp2863 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_c->kind, ((panda$core$Int64) { 107 }));
    PANDA_ASSERT($tmp2863.value);
    panda$core$Object* $tmp2865 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_c->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp2866 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2865));
    m2864 = $tmp2866;
    if (((panda$core$Bit) { m2864 != NULL }).value) {
    {
        panda$collections$Array* $tmp2868 = (panda$collections$Array*) malloc(40);
        $tmp2868->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2868->refCount.value = 1;
        panda$collections$Array$init($tmp2868);
        args2867 = $tmp2868;
        panda$core$Int64 $tmp2871 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_c->children);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp2870, ((panda$core$Int64) { 1 }), $tmp2871, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
        int64_t $tmp2873 = $tmp2870.start.value;
        panda$core$Int64 i2872 = { $tmp2873 };
        int64_t $tmp2875 = $tmp2870.end.value;
        int64_t $tmp2876 = $tmp2870.step.value;
        bool $tmp2877 = $tmp2870.inclusive.value;
        bool $tmp2884 = $tmp2876 > 0;
        if ($tmp2884) goto $l2882; else goto $l2883;
        $l2882:;
        if ($tmp2877) goto $l2885; else goto $l2886;
        $l2885:;
        if ($tmp2873 <= $tmp2875) goto $l2878; else goto $l2880;
        $l2886:;
        if ($tmp2873 < $tmp2875) goto $l2878; else goto $l2880;
        $l2883:;
        if ($tmp2877) goto $l2887; else goto $l2888;
        $l2887:;
        if ($tmp2873 >= $tmp2875) goto $l2878; else goto $l2880;
        $l2888:;
        if ($tmp2873 > $tmp2875) goto $l2878; else goto $l2880;
        $l2878:;
        {
            panda$core$Object* $tmp2891 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_c->children, i2872);
            org$pandalanguage$pandac$IRNode* $tmp2892 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2891));
            arg2890 = $tmp2892;
            if (((panda$core$Bit) { arg2890 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(args2867, ((panda$core$Object*) arg2890));
        }
        $l2881:;
        if ($tmp2884) goto $l2894; else goto $l2895;
        $l2894:;
        int64_t $tmp2896 = $tmp2875 - i2872.value;
        if ($tmp2877) goto $l2897; else goto $l2898;
        $l2897:;
        if ($tmp2896 >= $tmp2876) goto $l2893; else goto $l2880;
        $l2898:;
        if ($tmp2896 > $tmp2876) goto $l2893; else goto $l2880;
        $l2895:;
        int64_t $tmp2900 = i2872.value - $tmp2875;
        if ($tmp2877) goto $l2901; else goto $l2902;
        $l2901:;
        if ($tmp2900 >= -$tmp2876) goto $l2893; else goto $l2880;
        $l2902:;
        if ($tmp2900 > -$tmp2876) goto $l2893; else goto $l2880;
        $l2893:;
        i2872.value += $tmp2876;
        goto $l2878;
        $l2880:;
        org$pandalanguage$pandac$IRNode* $tmp2904 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, m2864, ((panda$collections$ListView*) args2867));
        return $tmp2904;
    }
    }
    return NULL;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_d) {
    org$pandalanguage$pandac$IRNode* base2908;
    org$pandalanguage$pandac$ClassDecl* cl2917;
    panda$core$String* name2919;
    org$pandalanguage$pandac$ClassDecl* cl2927;
    org$pandalanguage$pandac$Symbol* s2940;
    panda$core$Bit $tmp2905 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_d->kind, ((panda$core$Int64) { 108 }));
    PANDA_ASSERT($tmp2905.value);
    panda$core$Int64 $tmp2906 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp2907 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2906, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp2907.value);
    panda$core$Object* $tmp2909 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp2910 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2909));
    base2908 = $tmp2910;
    if (((panda$core$Bit) { base2908 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp2912 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(base2908->kind, ((panda$core$Int64) { 1037 }));
    bool $tmp2911 = $tmp2912.value;
    if (!$tmp2911) goto $l2913;
    panda$core$Bit $tmp2914 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(base2908->kind, ((panda$core$Int64) { 1024 }));
    $tmp2911 = $tmp2914.value;
    $l2913:;
    panda$core$Bit $tmp2915 = { $tmp2911 };
    if ($tmp2915.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2916 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, base2908);
        base2908 = $tmp2916;
    }
    }
    if (((panda$core$Bit) { base2908 == NULL }).value) {
    {
        return NULL;
    }
    }
    switch (base2908->kind.value) {
        case 1001:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp2918 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Type*) base2908->payload));
            cl2917 = $tmp2918;
        }
        break;
        case 1037:
        {
            panda$core$String* $tmp2921 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2920, base2908->payload);
            panda$core$String* $tmp2923 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2921, &$s2922);
            panda$core$String* $tmp2924 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2923, p_d->payload);
            panda$core$String* $tmp2926 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2924, &$s2925);
            name2919 = $tmp2926;
            org$pandalanguage$pandac$ClassDecl* $tmp2928 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, name2919);
            cl2927 = $tmp2928;
            if (((panda$core$Bit) { cl2927 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2929 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2929->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2929->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2931 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$Type* $tmp2932 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl2927);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp2929, ((panda$core$Int64) { 1001 }), p_d->position, $tmp2931, $tmp2932);
                return $tmp2929;
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp2933 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2933->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2933->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2935 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$String($tmp2933, ((panda$core$Int64) { 1037 }), p_d->position, $tmp2935, name2919);
            return $tmp2933;
        }
        break;
        case 1024:
        {
            panda$core$Object* $tmp2936 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, ((org$pandalanguage$pandac$ClassDecl*) $tmp2936));
            panda$core$Object* $tmp2937 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
            org$pandalanguage$pandac$ClassDecl* $tmp2938 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$ClassDecl*) $tmp2937)->rawSuper);
            cl2917 = $tmp2938;
        }
        break;
        default:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp2939 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, base2908->type);
            cl2917 = $tmp2939;
        }
    }
    if (((panda$core$Bit) { cl2917 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp2941 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl2917);
    org$pandalanguage$pandac$Symbol* $tmp2942 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp2941, ((panda$core$String*) p_d->payload));
    s2940 = $tmp2942;
    if (((panda$core$Bit) { s2940 == NULL }).value) {
    {
        panda$core$String* $tmp2944 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2943, ((panda$core$Object*) base2908->type));
        panda$core$String* $tmp2946 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2944, &$s2945);
        panda$core$String* $tmp2948 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2947, p_d->payload);
        panda$core$String* $tmp2950 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2948, &$s2949);
        panda$core$String* $tmp2951 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2946, $tmp2950);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_d->position, $tmp2951);
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp2952 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl2917);
    org$pandalanguage$pandac$IRNode* $tmp2953 = org$pandalanguage$pandac$Compiler$symbolRef$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q(self, p_d->position, base2908, s2940, $tmp2952);
    return $tmp2953;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIdentifier$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_i) {
    org$pandalanguage$pandac$Symbol* s2955;
    panda$core$Bit $tmp2954 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_i->kind, ((panda$core$Int64) { 106 }));
    PANDA_ASSERT($tmp2954.value);
    org$pandalanguage$pandac$Symbol* $tmp2956 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(self->symbolTable, ((panda$core$String*) p_i->payload));
    s2955 = $tmp2956;
    if (((panda$core$Bit) { s2955 == NULL }).value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp2957 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((panda$core$String*) p_i->payload));
        s2955 = ((org$pandalanguage$pandac$Symbol*) $tmp2957);
    }
    }
    if (((panda$core$Bit) { s2955 != NULL }).value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2958 = org$pandalanguage$pandac$Compiler$symbolRef$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q(self, p_i->position, NULL, s2955, self->symbolTable);
        return $tmp2958;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp2959 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp2959->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2959->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp2961 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$String($tmp2959, ((panda$core$Int64) { 1037 }), p_i->position, $tmp2961, ((panda$core$String*) p_i->payload));
    return $tmp2959;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_t) {
    org$pandalanguage$pandac$Type* resolved2962;
    org$pandalanguage$pandac$Type* $tmp2963 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, p_t);
    org$pandalanguage$pandac$Type* $tmp2964 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, $tmp2963);
    resolved2962 = $tmp2964;
    if (((panda$core$Bit) { resolved2962 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp2965 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp2965->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2965->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp2967 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp2965, ((panda$core$Int64) { 1001 }), p_t->position, $tmp2967, resolved2962);
    return $tmp2965;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileRange$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_r) {
    org$pandalanguage$pandac$IRNode* start2975;
    org$pandalanguage$pandac$IRNode* end2983;
    org$pandalanguage$pandac$IRNode* step2991;
    panda$collections$Array* children3001;
    org$pandalanguage$pandac$Position $tmp3009;
    panda$core$Bit $tmp2969 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_r->kind, ((panda$core$Int64) { 105 }));
    bool $tmp2968 = $tmp2969.value;
    if ($tmp2968) goto $l2970;
    panda$core$Bit $tmp2971 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_r->kind, ((panda$core$Int64) { 104 }));
    $tmp2968 = $tmp2971.value;
    $l2970:;
    panda$core$Bit $tmp2972 = { $tmp2968 };
    PANDA_ASSERT($tmp2972.value);
    panda$core$Int64 $tmp2973 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_r->children);
    panda$core$Bit $tmp2974 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2973, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp2974.value);
    panda$core$Object* $tmp2976 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp2977 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp2976)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp2977.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2978 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2978->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2978->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp2980 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp2978, ((panda$core$Int64) { 1030 }), p_r->position, $tmp2980);
        start2975 = $tmp2978;
    }
    }
    else {
    {
        panda$core$Object* $tmp2981 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp2982 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2981));
        start2975 = $tmp2982;
        if (((panda$core$Bit) { start2975 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$core$Object* $tmp2984 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp2985 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp2984)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp2985.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2986 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2986->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2986->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp2988 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp2986, ((panda$core$Int64) { 1030 }), p_r->position, $tmp2988);
        end2983 = $tmp2986;
    }
    }
    else {
    {
        panda$core$Object* $tmp2989 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$IRNode* $tmp2990 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2989));
        end2983 = $tmp2990;
        if (((panda$core$Bit) { end2983 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$core$Object* $tmp2992 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 2 }));
    panda$core$Bit $tmp2993 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp2992)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp2993.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2994 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2994->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2994->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp2996 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2994, ((panda$core$Int64) { 1004 }), p_r->position, $tmp2996, ((panda$core$UInt64) { 1 }));
        step2991 = $tmp2994;
    }
    }
    else {
    {
        panda$core$Object* $tmp2997 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$IRNode* $tmp2998 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2997));
        org$pandalanguage$pandac$Type* $tmp2999 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp3000 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp2998, $tmp2999);
        step2991 = $tmp3000;
        if (((panda$core$Bit) { step2991 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$collections$Array* $tmp3002 = (panda$collections$Array*) malloc(40);
    $tmp3002->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3002->refCount.value = 1;
    panda$collections$Array$init($tmp3002);
    children3001 = $tmp3002;
    panda$collections$Array$add$panda$collections$Array$T(children3001, ((panda$core$Object*) start2975));
    panda$collections$Array$add$panda$collections$Array$T(children3001, ((panda$core$Object*) end2983));
    panda$collections$Array$add$panda$collections$Array$T(children3001, ((panda$core$Object*) step2991));
    org$pandalanguage$pandac$IRNode* $tmp3004 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3004->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3004->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3006 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp3006->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp3006->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp3009);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp3006, &$s3008, ((panda$core$Int64) { 17 }), $tmp3009, ((panda$core$Bit) { true }));
    panda$core$Bit $tmp3010 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_r->kind, ((panda$core$Int64) { 104 }));
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3004, ((panda$core$Int64) { 1031 }), p_r->position, $tmp3006, ((panda$core$Object*) wrap_panda$core$Bit($tmp3010)), ((panda$collections$ListView*) children3001));
    return $tmp3004;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$IRNode* $tmp3011 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3011->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3011->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3013 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$String($tmp3011, ((panda$core$Int64) { 1033 }), p_s->position, $tmp3013, ((panda$core$String*) p_s->payload));
    return $tmp3011;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileSelf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$Type* type3018;
    org$pandalanguage$pandac$ClassDecl* cl3019;
    panda$collections$Array* subtypes3026;
    panda$core$MutableString* name3030;
    panda$core$String* separator3034;
    panda$collections$Iterator* p$Iter3036;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* p3048;
    panda$collections$Array* pType3053;
    panda$core$String* pName3056;
    panda$core$Bit $tmp3014 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_s->kind, ((panda$core$Int64) { 114 }));
    PANDA_ASSERT($tmp3014.value);
    panda$core$Object* $tmp3015 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
    panda$core$Bit $tmp3016 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp3015)->annotations);
    if ($tmp3016.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_s->position, &$s3017);
        return NULL;
    }
    }
    panda$core$Object* $tmp3020 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
    cl3019 = ((org$pandalanguage$pandac$ClassDecl*) $tmp3020);
    ITable* $tmp3021 = ((panda$collections$CollectionView*) cl3019->parameters)->$class->itable;
    while ($tmp3021->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp3021 = $tmp3021->next;
    }
    $fn3023 $tmp3022 = $tmp3021->methods[0];
    panda$core$Int64 $tmp3024 = $tmp3022(((panda$collections$CollectionView*) cl3019->parameters));
    panda$core$Bit $tmp3025 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3024, ((panda$core$Int64) { 0 }));
    if ($tmp3025.value) {
    {
        panda$collections$Array* $tmp3027 = (panda$collections$Array*) malloc(40);
        $tmp3027->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp3027->refCount.value = 1;
        panda$collections$Array$init($tmp3027);
        subtypes3026 = $tmp3027;
        org$pandalanguage$pandac$Type* $tmp3029 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl3019);
        panda$collections$Array$add$panda$collections$Array$T(subtypes3026, ((panda$core$Object*) $tmp3029));
        panda$core$MutableString* $tmp3031 = (panda$core$MutableString*) malloc(40);
        $tmp3031->$class = (panda$core$Class*) &panda$core$MutableString$class;
        $tmp3031->refCount.value = 1;
        panda$core$MutableString$init$panda$core$String($tmp3031, ((org$pandalanguage$pandac$Symbol*) cl3019)->name);
        name3030 = $tmp3031;
        panda$core$MutableString$append$panda$core$String(name3030, &$s3033);
        separator3034 = &$s3035;
        {
            ITable* $tmp3037 = ((panda$collections$Iterable*) cl3019->parameters)->$class->itable;
            while ($tmp3037->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3037 = $tmp3037->next;
            }
            $fn3039 $tmp3038 = $tmp3037->methods[0];
            panda$collections$Iterator* $tmp3040 = $tmp3038(((panda$collections$Iterable*) cl3019->parameters));
            p$Iter3036 = $tmp3040;
            $l3041:;
            ITable* $tmp3043 = p$Iter3036->$class->itable;
            while ($tmp3043->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3043 = $tmp3043->next;
            }
            $fn3045 $tmp3044 = $tmp3043->methods[0];
            panda$core$Bit $tmp3046 = $tmp3044(p$Iter3036);
            panda$core$Bit $tmp3047 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3046);
            if (!$tmp3047.value) goto $l3042;
            {
                ITable* $tmp3049 = p$Iter3036->$class->itable;
                while ($tmp3049->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3049 = $tmp3049->next;
                }
                $fn3051 $tmp3050 = $tmp3049->methods[1];
                panda$core$Object* $tmp3052 = $tmp3050(p$Iter3036);
                p3048 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp3052);
                panda$collections$Array* $tmp3054 = (panda$collections$Array*) malloc(40);
                $tmp3054->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp3054->refCount.value = 1;
                panda$collections$Array$init($tmp3054);
                pType3053 = $tmp3054;
                panda$collections$Array$add$panda$collections$Array$T(pType3053, ((panda$core$Object*) p3048->bound));
                panda$core$String* $tmp3058 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3057, ((org$pandalanguage$pandac$Symbol*) cl3019)->name);
                panda$core$String* $tmp3060 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3058, &$s3059);
                panda$core$String* $tmp3061 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3060, ((org$pandalanguage$pandac$Symbol*) p3048)->name);
                panda$core$String* $tmp3063 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3061, &$s3062);
                pName3056 = $tmp3063;
                panda$core$MutableString$append$panda$core$String(name3030, separator3034);
                panda$core$MutableString$append$panda$core$String(name3030, pName3056);
                org$pandalanguage$pandac$Type* $tmp3064 = (org$pandalanguage$pandac$Type*) malloc(96);
                $tmp3064->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
                $tmp3064->refCount.value = 1;
                org$pandalanguage$pandac$Type$init$org$pandalanguage$pandac$ClassDecl$GenericParameter($tmp3064, p3048);
                panda$collections$Array$add$panda$collections$Array$T(subtypes3026, ((panda$core$Object*) $tmp3064));
                separator3034 = &$s3066;
            }
            goto $l3041;
            $l3042:;
        }
        panda$core$MutableString$append$panda$core$String(name3030, &$s3067);
        org$pandalanguage$pandac$Type* $tmp3068 = (org$pandalanguage$pandac$Type*) malloc(96);
        $tmp3068->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
        $tmp3068->refCount.value = 1;
        panda$core$String* $tmp3070 = panda$core$MutableString$convert$R$panda$core$String(name3030);
        org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp3068, $tmp3070, ((panda$core$Int64) { 21 }), p_s->position, ((panda$collections$ListView*) subtypes3026), ((panda$core$Bit) { true }));
        type3018 = $tmp3068;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp3071 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl3019);
        type3018 = $tmp3071;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3072 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3072->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3072->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3072, ((panda$core$Int64) { 1025 }), p_s->position, type3018);
    return $tmp3072;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileSuper$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$ClassDecl* cl3078;
    panda$core$Bit $tmp3074 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_s->kind, ((panda$core$Int64) { 115 }));
    PANDA_ASSERT($tmp3074.value);
    panda$core$Object* $tmp3075 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
    panda$core$Bit $tmp3076 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp3075)->annotations);
    if ($tmp3076.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_s->position, &$s3077);
        return NULL;
    }
    }
    panda$core$Object* $tmp3079 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
    cl3078 = ((org$pandalanguage$pandac$ClassDecl*) $tmp3079);
    PANDA_ASSERT(cl3078->resolved.value);
    org$pandalanguage$pandac$IRNode* $tmp3080 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3080->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3080->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3080, ((panda$core$Int64) { 1024 }), p_s->position, cl3078->rawSuper);
    return $tmp3080;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_c) {
    org$pandalanguage$pandac$IRNode* value3085;
    org$pandalanguage$pandac$Type* type3088;
    panda$core$Bit $tmp3082 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_c->kind, ((panda$core$Int64) { 111 }));
    PANDA_ASSERT($tmp3082.value);
    panda$core$Int64 $tmp3083 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_c->children);
    panda$core$Bit $tmp3084 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3083, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp3084.value);
    panda$core$Object* $tmp3086 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_c->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3087 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3086));
    value3085 = $tmp3087;
    if (((panda$core$Bit) { value3085 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Object* $tmp3089 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_c->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Type* $tmp3090 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, ((org$pandalanguage$pandac$ASTNode*) $tmp3089));
    org$pandalanguage$pandac$Type* $tmp3091 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, $tmp3090);
    type3088 = $tmp3091;
    if (((panda$core$Bit) { type3088 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Int64$nullable $tmp3092 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, value3085, type3088);
    if (((panda$core$Bit) { $tmp3092.nonnull }).value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3093 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, value3085, type3088);
        return $tmp3093;
    }
    }
    panda$core$Bit $tmp3094 = org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, value3085, type3088);
    if ($tmp3094.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3095 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, value3085, p_c->position, ((panda$core$Bit) { true }), type3088);
        return $tmp3095;
    }
    }
    else {
    {
        panda$core$String* $tmp3097 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3096, ((panda$core$Object*) value3085->type));
        panda$core$String* $tmp3099 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3097, &$s3098);
        panda$core$String* $tmp3101 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3100, ((panda$core$Object*) type3088));
        panda$core$String* $tmp3103 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3101, &$s3102);
        panda$core$String* $tmp3104 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3099, $tmp3103);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_c->position, $tmp3104);
        return NULL;
    }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileNull$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_n) {
    panda$core$Bit $tmp3105 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_n->kind, ((panda$core$Int64) { 117 }));
    PANDA_ASSERT($tmp3105.value);
    org$pandalanguage$pandac$IRNode* $tmp3106 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3106->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3106->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3108 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3106, ((panda$core$Int64) { 1030 }), p_n->position, $tmp3108);
    return $tmp3106;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_e) {
    org$pandalanguage$pandac$IRNode* result3113;
    switch (p_e->kind.value) {
        case 103:
        {
            org$pandalanguage$pandac$IRNode* $tmp3109 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3109;
        }
        break;
        case 116:
        {
            org$pandalanguage$pandac$IRNode* $tmp3110 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3110->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3110->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3112 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp3110, ((panda$core$Int64) { 1011 }), p_e->position, $tmp3112, ((panda$core$Bit$wrapper*) p_e->payload)->value);
            return $tmp3110;
        }
        break;
        case 107:
        {
            org$pandalanguage$pandac$IRNode* $tmp3114 = org$pandalanguage$pandac$Compiler$compileCall$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            result3113 = $tmp3114;
            bool $tmp3115 = ((panda$core$Bit) { result3113 != NULL }).value;
            if (!$tmp3115) goto $l3116;
            org$pandalanguage$pandac$Type* $tmp3117 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp3118 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(result3113->type, $tmp3117);
            $tmp3115 = $tmp3118.value;
            $l3116:;
            panda$core$Bit $tmp3119 = { $tmp3115 };
            if ($tmp3119.value) {
            {
                panda$core$Bit $tmp3120 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result3113->kind, ((panda$core$Int64) { 1005 }));
                PANDA_ASSERT($tmp3120.value);
                panda$core$String* $tmp3121 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(((org$pandalanguage$pandac$MethodRef*) result3113->payload)->value);
                panda$core$String* $tmp3123 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3121, &$s3122);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, result3113->position, $tmp3123);
                return NULL;
            }
            }
            return result3113;
        }
        break;
        case 108:
        {
            org$pandalanguage$pandac$IRNode* $tmp3124 = org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3124;
        }
        break;
        case 106:
        {
            org$pandalanguage$pandac$IRNode* $tmp3125 = org$pandalanguage$pandac$Compiler$compileIdentifier$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3125;
        }
        break;
        case 102:
        {
            org$pandalanguage$pandac$IRNode* $tmp3126 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3126->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3126->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3128 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp3126, ((panda$core$Int64) { 1004 }), p_e->position, $tmp3128, ((panda$core$UInt64$wrapper*) p_e->payload)->value);
            return $tmp3126;
        }
        break;
        case 112:
        {
            org$pandalanguage$pandac$IRNode* $tmp3129 = org$pandalanguage$pandac$Compiler$compilePrefix$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3129;
        }
        break;
        case 104:
        case 105:
        {
            org$pandalanguage$pandac$IRNode* $tmp3130 = org$pandalanguage$pandac$Compiler$compileRange$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3130;
        }
        break;
        case 113:
        {
            org$pandalanguage$pandac$IRNode* $tmp3131 = org$pandalanguage$pandac$Compiler$compileString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3131;
        }
        break;
        case 109:
        case 154:
        case 110:
        {
            org$pandalanguage$pandac$IRNode* $tmp3132 = org$pandalanguage$pandac$Compiler$compileType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3132;
        }
        break;
        case 114:
        {
            org$pandalanguage$pandac$IRNode* $tmp3133 = org$pandalanguage$pandac$Compiler$compileSelf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3133;
        }
        break;
        case 115:
        {
            org$pandalanguage$pandac$IRNode* $tmp3134 = org$pandalanguage$pandac$Compiler$compileSuper$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3134;
        }
        break;
        case 111:
        {
            org$pandalanguage$pandac$IRNode* $tmp3135 = org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3135;
        }
        break;
        case 117:
        {
            org$pandalanguage$pandac$IRNode* $tmp3136 = org$pandalanguage$pandac$Compiler$compileNull$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode(self, p_e);
            return $tmp3136;
        }
        break;
    }
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBlock$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_b) {
    org$pandalanguage$pandac$SymbolTable* symbols3138;
    panda$collections$Array* result3141;
    panda$collections$Iterator* stmt$Iter3144;
    org$pandalanguage$pandac$ASTNode* stmt3156;
    org$pandalanguage$pandac$IRNode* compiled3161;
    panda$core$Bit $tmp3137 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_b->kind, ((panda$core$Int64) { 126 }));
    PANDA_ASSERT($tmp3137.value);
    org$pandalanguage$pandac$SymbolTable* $tmp3139 = (org$pandalanguage$pandac$SymbolTable*) malloc(40);
    $tmp3139->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp3139->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp3139, self->symbolTable);
    symbols3138 = $tmp3139;
    self->symbolTable = symbols3138;
    panda$collections$Array* $tmp3142 = (panda$collections$Array*) malloc(40);
    $tmp3142->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3142->refCount.value = 1;
    panda$collections$Array$init($tmp3142);
    result3141 = $tmp3142;
    {
        ITable* $tmp3145 = ((panda$collections$Iterable*) p_b->children)->$class->itable;
        while ($tmp3145->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3145 = $tmp3145->next;
        }
        $fn3147 $tmp3146 = $tmp3145->methods[0];
        panda$collections$Iterator* $tmp3148 = $tmp3146(((panda$collections$Iterable*) p_b->children));
        stmt$Iter3144 = $tmp3148;
        $l3149:;
        ITable* $tmp3151 = stmt$Iter3144->$class->itable;
        while ($tmp3151->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3151 = $tmp3151->next;
        }
        $fn3153 $tmp3152 = $tmp3151->methods[0];
        panda$core$Bit $tmp3154 = $tmp3152(stmt$Iter3144);
        panda$core$Bit $tmp3155 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3154);
        if (!$tmp3155.value) goto $l3150;
        {
            ITable* $tmp3157 = stmt$Iter3144->$class->itable;
            while ($tmp3157->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3157 = $tmp3157->next;
            }
            $fn3159 $tmp3158 = $tmp3157->methods[1];
            panda$core$Object* $tmp3160 = $tmp3158(stmt$Iter3144);
            stmt3156 = ((org$pandalanguage$pandac$ASTNode*) $tmp3160);
            org$pandalanguage$pandac$IRNode* $tmp3162 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, stmt3156);
            compiled3161 = $tmp3162;
            if (((panda$core$Bit) { compiled3161 == NULL }).value) {
            {
                panda$core$Object* $tmp3163 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(symbols3138->parents, ((panda$core$Int64) { 0 }));
                self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp3163);
                return NULL;
            }
            }
            panda$core$Bit $tmp3164 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(compiled3161->kind, ((panda$core$Int64) { 1039 }));
            PANDA_ASSERT($tmp3164.value);
            panda$collections$Array$add$panda$collections$Array$T(result3141, ((panda$core$Object*) compiled3161));
        }
        goto $l3149;
        $l3150:;
    }
    panda$core$Object* $tmp3165 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(symbols3138->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp3165);
    org$pandalanguage$pandac$IRNode* $tmp3166 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3166->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3166->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3166, ((panda$core$Int64) { 1000 }), p_b->position, ((panda$collections$ListView*) result3141));
    return $tmp3166;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_i) {
    org$pandalanguage$pandac$IRNode* test3176;
    org$pandalanguage$pandac$IRNode* ifTrue3181;
    panda$collections$Array* children3184;
    org$pandalanguage$pandac$IRNode* ifFalse3189;
    panda$core$Bit $tmp3168 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_i->kind, ((panda$core$Int64) { 118 }));
    PANDA_ASSERT($tmp3168.value);
    panda$core$Int64 $tmp3170 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_i->children);
    panda$core$Bit $tmp3171 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3170, ((panda$core$Int64) { 2 }));
    bool $tmp3169 = $tmp3171.value;
    if ($tmp3169) goto $l3172;
    panda$core$Int64 $tmp3173 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_i->children);
    panda$core$Bit $tmp3174 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3173, ((panda$core$Int64) { 3 }));
    $tmp3169 = $tmp3174.value;
    $l3172:;
    panda$core$Bit $tmp3175 = { $tmp3169 };
    PANDA_ASSERT($tmp3175.value);
    panda$core$Object* $tmp3177 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_i->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3178 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3177));
    org$pandalanguage$pandac$Type* $tmp3179 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp3180 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3178, $tmp3179);
    test3176 = $tmp3180;
    if (((panda$core$Bit) { test3176 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Object* $tmp3182 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_i->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp3183 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3182));
    ifTrue3181 = $tmp3183;
    if (((panda$core$Bit) { ifTrue3181 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3185 = (panda$collections$Array*) malloc(40);
    $tmp3185->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3185->refCount.value = 1;
    panda$collections$Array$init($tmp3185);
    children3184 = $tmp3185;
    panda$collections$Array$add$panda$collections$Array$T(children3184, ((panda$core$Object*) test3176));
    panda$collections$Array$add$panda$collections$Array$T(children3184, ((panda$core$Object*) ifTrue3181));
    panda$core$Int64 $tmp3187 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_i->children);
    panda$core$Bit $tmp3188 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3187, ((panda$core$Int64) { 3 }));
    if ($tmp3188.value) {
    {
        panda$core$Object* $tmp3190 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_i->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$IRNode* $tmp3191 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3190));
        ifFalse3189 = $tmp3191;
        if (((panda$core$Bit) { ifFalse3189 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children3184, ((panda$core$Object*) ifFalse3189));
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3192 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3192->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3192->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3192, ((panda$core$Int64) { 1012 }), p_i->position, ((panda$collections$ListView*) children3184));
    return $tmp3192;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileRangeFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, panda$core$String* p_label, org$pandalanguage$pandac$ASTNode* p_astTarget, org$pandalanguage$pandac$IRNode* p_rawList, org$pandalanguage$pandac$ASTNode* p_body) {
    org$pandalanguage$pandac$Type* elementType3194;
    org$pandalanguage$pandac$IRNode* list3195;
    org$pandalanguage$pandac$Type* t3202;
    org$pandalanguage$pandac$Compiler$CompileTargetResult* target3216;
    org$pandalanguage$pandac$IRNode* body3218;
    panda$collections$Array* children3220;
    panda$core$Bit $tmp3197 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_astTarget->kind, ((panda$core$Int64) { 106 }));
    bool $tmp3196 = $tmp3197.value;
    if (!$tmp3196) goto $l3198;
    panda$core$Int64 $tmp3199 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_astTarget->children);
    panda$core$Bit $tmp3200 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3199, ((panda$core$Int64) { 1 }));
    $tmp3196 = $tmp3200.value;
    $l3198:;
    panda$core$Bit $tmp3201 = { $tmp3196 };
    if ($tmp3201.value) {
    {
        panda$core$Object* $tmp3203 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_astTarget->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Type* $tmp3204 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, ((org$pandalanguage$pandac$ASTNode*) $tmp3203));
        org$pandalanguage$pandac$Type* $tmp3205 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, $tmp3204);
        t3202 = $tmp3205;
        org$pandalanguage$pandac$Type* $tmp3206 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3202);
        org$pandalanguage$pandac$IRNode* $tmp3207 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, $tmp3206);
        list3195 = $tmp3207;
    }
    }
    else {
    {
        org$pandalanguage$pandac$IRNode* $tmp3208 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList);
        list3195 = $tmp3208;
    }
    }
    if (((panda$core$Bit) { list3195 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp3209 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(list3195->type->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp3209.value) {
    {
        panda$core$Object* $tmp3210 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(list3195->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp3211 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3210)->typeKind, ((panda$core$Int64) { 21 }));
        PANDA_ASSERT($tmp3211.value);
        panda$core$Object* $tmp3212 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(list3195->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3213 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$Type*) $tmp3212)->subtypes, ((panda$core$Int64) { 1 }));
        elementType3194 = ((org$pandalanguage$pandac$Type*) $tmp3213);
    }
    }
    else {
    {
        panda$core$Bit $tmp3214 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(list3195->type->typeKind, ((panda$core$Int64) { 21 }));
        PANDA_ASSERT($tmp3214.value);
        panda$core$Object* $tmp3215 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(list3195->type->subtypes, ((panda$core$Int64) { 1 }));
        elementType3194 = ((org$pandalanguage$pandac$Type*) $tmp3215);
    }
    }
    org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp3217 = org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(self, p_astTarget, ((panda$core$Int64) { 10001 }), NULL, elementType3194);
    target3216 = $tmp3217;
    if (((panda$core$Bit) { target3216 == NULL }).value) {
    {
        return NULL;
    }
    }
    PANDA_ASSERT(((panda$core$Bit) { target3216->value == NULL }).value);
    org$pandalanguage$pandac$IRNode* $tmp3219 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_body);
    body3218 = $tmp3219;
    if (((panda$core$Bit) { body3218 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3221 = (panda$collections$Array*) malloc(40);
    $tmp3221->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3221->refCount.value = 1;
    panda$collections$Array$init($tmp3221);
    children3220 = $tmp3221;
    panda$collections$Array$add$panda$collections$Array$T(children3220, ((panda$core$Object*) target3216->target));
    panda$collections$Array$add$panda$collections$Array$T(children3220, ((panda$core$Object*) list3195));
    panda$collections$Array$add$panda$collections$Array$T(children3220, ((panda$core$Object*) body3218));
    org$pandalanguage$pandac$IRNode* $tmp3223 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3223->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3223->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3223, ((panda$core$Int64) { 1029 }), p_position, ((panda$core$Object*) p_label), ((panda$collections$ListView*) children3220));
    return $tmp3223;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIteratorFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, panda$core$String* p_label, org$pandalanguage$pandac$ASTNode* p_astTarget, org$pandalanguage$pandac$IRNode* p_iterator, org$pandalanguage$pandac$ASTNode* p_body) {
    org$pandalanguage$pandac$Compiler$CompileTargetResult* target3232;
    org$pandalanguage$pandac$Variable* targetVar3236;
    panda$collections$Array* subtypes3237;
    org$pandalanguage$pandac$Type* iterType3241;
    org$pandalanguage$pandac$Variable* iter3253;
    panda$collections$Array* statements3258;
    panda$collections$Array* declChildren3261;
    panda$collections$Array* varChildren3266;
    panda$collections$Array* whileChildren3273;
    org$pandalanguage$pandac$IRNode* done3276;
    org$pandalanguage$pandac$IRNode* notCall3283;
    panda$collections$Array* valueDeclChildren3288;
    org$pandalanguage$pandac$IRNode* next3293;
    panda$collections$Array* valueVarChildren3300;
    org$pandalanguage$pandac$IRNode* block3305;
    panda$collections$Array* blockChildren3307;
    panda$core$Bit $tmp3226 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_iterator->type->typeKind, ((panda$core$Int64) { 21 }));
    bool $tmp3225 = $tmp3226.value;
    if (!$tmp3225) goto $l3227;
    panda$core$Object* $tmp3228 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_iterator->type->subtypes, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp3229 = org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp3230 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3228), $tmp3229);
    $tmp3225 = $tmp3230.value;
    $l3227:;
    panda$core$Bit $tmp3231 = { $tmp3225 };
    PANDA_ASSERT($tmp3231.value);
    panda$core$Object* $tmp3233 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_iterator->type->subtypes, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp3234 = org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(self, p_astTarget, ((panda$core$Int64) { 10001 }), NULL, ((org$pandalanguage$pandac$Type*) $tmp3233));
    target3232 = $tmp3234;
    if (((panda$core$Bit) { target3232 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp3235 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(target3232->target->kind, ((panda$core$Int64) { 1016 }));
    PANDA_ASSERT($tmp3235.value);
    targetVar3236 = ((org$pandalanguage$pandac$Variable*) target3232->target->payload);
    panda$collections$Array* $tmp3238 = (panda$collections$Array*) malloc(40);
    $tmp3238->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3238->refCount.value = 1;
    panda$collections$Array$init($tmp3238);
    subtypes3237 = $tmp3238;
    org$pandalanguage$pandac$Type* $tmp3240 = org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type();
    panda$collections$Array$add$panda$collections$Array$T(subtypes3237, ((panda$core$Object*) $tmp3240));
    panda$collections$Array$add$panda$collections$Array$T(subtypes3237, ((panda$core$Object*) target3232->target->type));
    org$pandalanguage$pandac$Type* $tmp3242 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp3242->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp3242->refCount.value = 1;
    panda$core$Object* $tmp3245 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(subtypes3237, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3246 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3244, ((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp3245)));
    panda$core$String* $tmp3248 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3246, &$s3247);
    panda$core$Object* $tmp3249 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(subtypes3237, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp3250 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3248, ((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp3249)));
    panda$core$String* $tmp3252 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3250, &$s3251);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp3242, $tmp3252, ((panda$core$Int64) { 21 }), p_position, ((panda$collections$ListView*) subtypes3237), ((panda$core$Bit) { true }));
    iterType3241 = $tmp3242;
    org$pandalanguage$pandac$Variable* $tmp3254 = (org$pandalanguage$pandac$Variable*) malloc(88);
    $tmp3254->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
    $tmp3254->refCount.value = 1;
    panda$core$String* $tmp3257 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) targetVar3236)->name, &$s3256);
    org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type($tmp3254, p_iterator->position, ((panda$core$Int64) { 10001 }), $tmp3257, iterType3241);
    iter3253 = $tmp3254;
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->symbolTable, ((org$pandalanguage$pandac$Symbol*) iter3253));
    panda$collections$Array* $tmp3259 = (panda$collections$Array*) malloc(40);
    $tmp3259->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3259->refCount.value = 1;
    panda$collections$Array$init($tmp3259);
    statements3258 = $tmp3259;
    panda$collections$Array* $tmp3262 = (panda$collections$Array*) malloc(40);
    $tmp3262->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3262->refCount.value = 1;
    panda$collections$Array$init($tmp3262);
    declChildren3261 = $tmp3262;
    org$pandalanguage$pandac$IRNode* $tmp3264 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3264->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3264->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3264, ((panda$core$Int64) { 1016 }), p_iterator->position, iter3253->type, iter3253);
    panda$collections$Array$add$panda$collections$Array$T(declChildren3261, ((panda$core$Object*) $tmp3264));
    panda$collections$Array$add$panda$collections$Array$T(declChildren3261, ((panda$core$Object*) p_iterator));
    panda$collections$Array* $tmp3267 = (panda$collections$Array*) malloc(40);
    $tmp3267->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3267->refCount.value = 1;
    panda$collections$Array$init($tmp3267);
    varChildren3266 = $tmp3267;
    org$pandalanguage$pandac$IRNode* $tmp3269 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3269->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3269->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3269, ((panda$core$Int64) { 1021 }), ((org$pandalanguage$pandac$Symbol*) iter3253)->position, ((panda$collections$ListView*) declChildren3261));
    panda$collections$Array$add$panda$collections$Array$T(varChildren3266, ((panda$core$Object*) $tmp3269));
    org$pandalanguage$pandac$IRNode* $tmp3271 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3271->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3271->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3271, ((panda$core$Int64) { 1018 }), ((org$pandalanguage$pandac$Symbol*) iter3253)->position, ((panda$collections$ListView*) varChildren3266));
    panda$collections$Array$add$panda$collections$Array$T(statements3258, ((panda$core$Object*) $tmp3271));
    panda$collections$Array* $tmp3274 = (panda$collections$Array*) malloc(40);
    $tmp3274->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3274->refCount.value = 1;
    panda$collections$Array$init($tmp3274);
    whileChildren3273 = $tmp3274;
    org$pandalanguage$pandac$IRNode* $tmp3277 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3277->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3277->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3277, ((panda$core$Int64) { 1016 }), ((org$pandalanguage$pandac$Symbol*) iter3253)->position, iter3253->type, iter3253);
    panda$collections$Array* $tmp3280 = (panda$collections$Array*) malloc(40);
    $tmp3280->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3280->refCount.value = 1;
    panda$collections$Array$init($tmp3280);
    org$pandalanguage$pandac$IRNode* $tmp3282 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3277, &$s3279, ((panda$collections$ListView*) $tmp3280), NULL);
    done3276 = $tmp3282;
    if (((panda$core$Bit) { done3276 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3285 = (panda$collections$Array*) malloc(40);
    $tmp3285->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3285->refCount.value = 1;
    panda$collections$Array$init($tmp3285);
    org$pandalanguage$pandac$IRNode* $tmp3287 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, done3276, &$s3284, ((panda$collections$ListView*) $tmp3285), NULL);
    notCall3283 = $tmp3287;
    if (((panda$core$Bit) { notCall3283 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(whileChildren3273, ((panda$core$Object*) notCall3283));
    panda$collections$Array* $tmp3289 = (panda$collections$Array*) malloc(40);
    $tmp3289->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3289->refCount.value = 1;
    panda$collections$Array$init($tmp3289);
    valueDeclChildren3288 = $tmp3289;
    org$pandalanguage$pandac$IRNode* $tmp3291 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3291->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3291->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3291, ((panda$core$Int64) { 1016 }), p_iterator->position, targetVar3236->type, targetVar3236);
    panda$collections$Array$add$panda$collections$Array$T(valueDeclChildren3288, ((panda$core$Object*) $tmp3291));
    org$pandalanguage$pandac$IRNode* $tmp3294 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3294->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3294->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3294, ((panda$core$Int64) { 1016 }), p_iterator->position, iter3253->type, iter3253);
    panda$collections$Array* $tmp3297 = (panda$collections$Array*) malloc(40);
    $tmp3297->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3297->refCount.value = 1;
    panda$collections$Array$init($tmp3297);
    org$pandalanguage$pandac$IRNode* $tmp3299 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3294, &$s3296, ((panda$collections$ListView*) $tmp3297), NULL);
    next3293 = $tmp3299;
    PANDA_ASSERT(((panda$core$Bit) { next3293 != NULL }).value);
    panda$collections$Array$add$panda$collections$Array$T(valueDeclChildren3288, ((panda$core$Object*) next3293));
    panda$collections$Array* $tmp3301 = (panda$collections$Array*) malloc(40);
    $tmp3301->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3301->refCount.value = 1;
    panda$collections$Array$init($tmp3301);
    valueVarChildren3300 = $tmp3301;
    org$pandalanguage$pandac$IRNode* $tmp3303 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3303->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3303->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3303, ((panda$core$Int64) { 1021 }), p_iterator->position, ((panda$collections$ListView*) valueDeclChildren3288));
    panda$collections$Array$add$panda$collections$Array$T(valueVarChildren3300, ((panda$core$Object*) $tmp3303));
    org$pandalanguage$pandac$IRNode* $tmp3306 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_body);
    block3305 = $tmp3306;
    if (((panda$core$Bit) { block3305 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3308 = (panda$collections$Array*) malloc(40);
    $tmp3308->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3308->refCount.value = 1;
    panda$collections$Array$init($tmp3308);
    blockChildren3307 = $tmp3308;
    org$pandalanguage$pandac$IRNode* $tmp3310 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3310->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3310->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3310, ((panda$core$Int64) { 1018 }), p_iterator->position, ((panda$collections$ListView*) valueVarChildren3300));
    panda$collections$Array$add$panda$collections$Array$T(blockChildren3307, ((panda$core$Object*) $tmp3310));
    panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(blockChildren3307, ((panda$collections$CollectionView*) block3305->children));
    org$pandalanguage$pandac$IRNode* $tmp3312 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3312->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3312->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3312, ((panda$core$Int64) { 1000 }), block3305->position, ((panda$collections$ListView*) blockChildren3307));
    block3305 = $tmp3312;
    panda$collections$Array$add$panda$collections$Array$T(whileChildren3273, ((panda$core$Object*) block3305));
    org$pandalanguage$pandac$IRNode* $tmp3314 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3314->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3314->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3314, ((panda$core$Int64) { 1013 }), p_iterator->position, ((panda$core$Object*) p_label), ((panda$collections$ListView*) whileChildren3273));
    panda$collections$Array$add$panda$collections$Array$T(statements3258, ((panda$core$Object*) $tmp3314));
    org$pandalanguage$pandac$IRNode* $tmp3316 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3316->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3316->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3316, ((panda$core$Int64) { 1000 }), p_iterator->position, ((panda$collections$ListView*) statements3258));
    return $tmp3316;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileFor$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_f) {
    org$pandalanguage$pandac$IRNode* list3321;
    org$pandalanguage$pandac$SymbolTable* symbols3324;
    org$pandalanguage$pandac$IRNode* result3327;
    panda$core$Bit found3337;
    panda$collections$Iterator* intf$Iter3338;
    org$pandalanguage$pandac$Type* intf3351;
    org$pandalanguage$pandac$IRNode* iterator3363;
    org$pandalanguage$pandac$IRNode* iterable3375;
    org$pandalanguage$pandac$IRNode* iterator3377;
    panda$core$Bit $tmp3318 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_f->kind, ((panda$core$Int64) { 119 }));
    PANDA_ASSERT($tmp3318.value);
    panda$core$Int64 $tmp3319 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_f->children);
    panda$core$Bit $tmp3320 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3319, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp3320.value);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loops, ((panda$core$Object*) ((panda$core$String*) p_f->payload)));
    panda$core$Object* $tmp3322 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp3323 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3322));
    list3321 = $tmp3323;
    if (((panda$core$Bit) { list3321 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp3325 = (org$pandalanguage$pandac$SymbolTable*) malloc(40);
    $tmp3325->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp3325->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp3325, self->symbolTable);
    symbols3324 = $tmp3325;
    self->symbolTable = symbols3324;
    panda$core$Bit $tmp3329 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(list3321->kind, ((panda$core$Int64) { 1031 }));
    bool $tmp3328 = $tmp3329.value;
    if ($tmp3328) goto $l3330;
    panda$core$Bit $tmp3331 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(list3321->type);
    $tmp3328 = $tmp3331.value;
    $l3330:;
    panda$core$Bit $tmp3332 = { $tmp3328 };
    if ($tmp3332.value) {
    {
        panda$core$Object* $tmp3333 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3334 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$IRNode* $tmp3335 = org$pandalanguage$pandac$Compiler$compileRangeFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->position, ((panda$core$String*) p_f->payload), ((org$pandalanguage$pandac$ASTNode*) $tmp3333), list3321, ((org$pandalanguage$pandac$ASTNode*) $tmp3334));
        result3327 = $tmp3335;
    }
    }
    else {
    {
        org$pandalanguage$pandac$IRNode* $tmp3336 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, list3321);
        list3321 = $tmp3336;
        if (((panda$core$Bit) { list3321 == NULL }).value) {
        {
            return NULL;
        }
        }
        found3337 = ((panda$core$Bit) { false });
        {
            panda$collections$Set* $tmp3339 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self, list3321->type);
            ITable* $tmp3340 = ((panda$collections$Iterable*) $tmp3339)->$class->itable;
            while ($tmp3340->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3340 = $tmp3340->next;
            }
            $fn3342 $tmp3341 = $tmp3340->methods[0];
            panda$collections$Iterator* $tmp3343 = $tmp3341(((panda$collections$Iterable*) $tmp3339));
            intf$Iter3338 = $tmp3343;
            $l3344:;
            ITable* $tmp3346 = intf$Iter3338->$class->itable;
            while ($tmp3346->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3346 = $tmp3346->next;
            }
            $fn3348 $tmp3347 = $tmp3346->methods[0];
            panda$core$Bit $tmp3349 = $tmp3347(intf$Iter3338);
            panda$core$Bit $tmp3350 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3349);
            if (!$tmp3350.value) goto $l3345;
            {
                ITable* $tmp3352 = intf$Iter3338->$class->itable;
                while ($tmp3352->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3352 = $tmp3352->next;
                }
                $fn3354 $tmp3353 = $tmp3352->methods[1];
                panda$core$Object* $tmp3355 = $tmp3353(intf$Iter3338);
                intf3351 = ((org$pandalanguage$pandac$Type*) $tmp3355);
                panda$core$Bit $tmp3357 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(intf3351->typeKind, ((panda$core$Int64) { 21 }));
                bool $tmp3356 = $tmp3357.value;
                if (!$tmp3356) goto $l3358;
                panda$core$Object* $tmp3359 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(intf3351->subtypes, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp3360 = org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp3361 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3359), $tmp3360);
                $tmp3356 = $tmp3361.value;
                $l3358:;
                panda$core$Bit $tmp3362 = { $tmp3356 };
                if ($tmp3362.value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp3364 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, list3321, intf3351);
                    iterator3363 = $tmp3364;
                    panda$core$Object* $tmp3365 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
                    panda$core$Object* $tmp3366 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 2 }));
                    org$pandalanguage$pandac$IRNode* $tmp3367 = org$pandalanguage$pandac$Compiler$compileIteratorFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->position, ((panda$core$String*) p_f->payload), ((org$pandalanguage$pandac$ASTNode*) $tmp3365), iterator3363, ((org$pandalanguage$pandac$ASTNode*) $tmp3366));
                    result3327 = $tmp3367;
                    found3337 = ((panda$core$Bit) { true });
                    goto $l3345;
                }
                }
                panda$core$Bit $tmp3369 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(intf3351->typeKind, ((panda$core$Int64) { 21 }));
                bool $tmp3368 = $tmp3369.value;
                if (!$tmp3368) goto $l3370;
                panda$core$Object* $tmp3371 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(intf3351->subtypes, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp3372 = org$pandalanguage$pandac$Type$Iterable$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp3373 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3371), $tmp3372);
                $tmp3368 = $tmp3373.value;
                $l3370:;
                panda$core$Bit $tmp3374 = { $tmp3368 };
                if ($tmp3374.value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp3376 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, list3321, intf3351);
                    iterable3375 = $tmp3376;
                    panda$collections$Array* $tmp3379 = (panda$collections$Array*) malloc(40);
                    $tmp3379->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp3379->refCount.value = 1;
                    panda$collections$Array$init($tmp3379);
                    org$pandalanguage$pandac$IRNode* $tmp3381 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, iterable3375, &$s3378, ((panda$collections$ListView*) $tmp3379));
                    iterator3377 = $tmp3381;
                    panda$core$Object* $tmp3382 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
                    panda$core$Object* $tmp3383 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 2 }));
                    org$pandalanguage$pandac$IRNode* $tmp3384 = org$pandalanguage$pandac$Compiler$compileIteratorFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->position, ((panda$core$String*) p_f->payload), ((org$pandalanguage$pandac$ASTNode*) $tmp3382), iterator3377, ((org$pandalanguage$pandac$ASTNode*) $tmp3383));
                    result3327 = $tmp3384;
                    found3337 = ((panda$core$Bit) { true });
                    goto $l3345;
                }
                }
            }
            goto $l3344;
            $l3345:;
        }
        panda$core$Bit $tmp3385 = panda$core$Bit$$NOT$R$panda$core$Bit(found3337);
        if ($tmp3385.value) {
        {
            panda$core$String* $tmp3387 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3386, ((panda$core$Object*) list3321->type));
            panda$core$String* $tmp3389 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3387, &$s3388);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, list3321->position, $tmp3389);
            return NULL;
        }
        }
    }
    }
    panda$core$Object* $tmp3390 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(symbols3324->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp3390);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
    return result3327;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileWhile$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_w) {
    org$pandalanguage$pandac$IRNode* test3394;
    org$pandalanguage$pandac$IRNode* stmt3399;
    panda$collections$Array* children3402;
    panda$core$Bit $tmp3391 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_w->kind, ((panda$core$Int64) { 121 }));
    PANDA_ASSERT($tmp3391.value);
    panda$core$Int64 $tmp3392 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Bit $tmp3393 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3392, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp3393.value);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loops, ((panda$core$Object*) ((panda$core$String*) p_w->payload)));
    panda$core$Object* $tmp3395 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3396 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3395));
    org$pandalanguage$pandac$Type* $tmp3397 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp3398 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3396, $tmp3397);
    test3394 = $tmp3398;
    if (((panda$core$Bit) { test3394 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$core$Object* $tmp3400 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp3401 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3400));
    stmt3399 = $tmp3401;
    if (((panda$core$Bit) { stmt3399 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$collections$Array* $tmp3403 = (panda$collections$Array*) malloc(40);
    $tmp3403->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3403->refCount.value = 1;
    panda$collections$Array$init$panda$core$Int64($tmp3403, ((panda$core$Int64) { 2 }));
    children3402 = $tmp3403;
    panda$collections$Array$add$panda$collections$Array$T(children3402, ((panda$core$Object*) test3394));
    panda$collections$Array$add$panda$collections$Array$T(children3402, ((panda$core$Object*) stmt3399));
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
    org$pandalanguage$pandac$IRNode* $tmp3405 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3405->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3405->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3405, ((panda$core$Int64) { 1013 }), p_w->position, p_w->payload, ((panda$collections$ListView*) children3402));
    return $tmp3405;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileDo$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_d) {
    org$pandalanguage$pandac$IRNode* stmt3410;
    org$pandalanguage$pandac$IRNode* test3413;
    panda$collections$Array* children3418;
    panda$core$Bit $tmp3407 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_d->kind, ((panda$core$Int64) { 120 }));
    PANDA_ASSERT($tmp3407.value);
    panda$core$Int64 $tmp3408 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp3409 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3408, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp3409.value);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loops, ((panda$core$Object*) ((panda$core$String*) p_d->payload)));
    panda$core$Object* $tmp3411 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3412 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3411));
    stmt3410 = $tmp3412;
    if (((panda$core$Bit) { stmt3410 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$core$Object* $tmp3414 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp3415 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3414));
    org$pandalanguage$pandac$Type* $tmp3416 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp3417 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3415, $tmp3416);
    test3413 = $tmp3417;
    if (((panda$core$Bit) { test3413 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$collections$Array* $tmp3419 = (panda$collections$Array*) malloc(40);
    $tmp3419->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3419->refCount.value = 1;
    panda$collections$Array$init$panda$core$Int64($tmp3419, ((panda$core$Int64) { 2 }));
    children3418 = $tmp3419;
    panda$collections$Array$add$panda$collections$Array$T(children3418, ((panda$core$Object*) stmt3410));
    panda$collections$Array$add$panda$collections$Array$T(children3418, ((panda$core$Object*) test3413));
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
    org$pandalanguage$pandac$IRNode* $tmp3421 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3421->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3421->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3421, ((panda$core$Int64) { 1014 }), p_d->position, p_d->payload, ((panda$collections$ListView*) children3418));
    return $tmp3421;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileLoop$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_l) {
    org$pandalanguage$pandac$IRNode* stmt3426;
    panda$collections$Array* children3429;
    panda$core$Bit $tmp3423 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_l->kind, ((panda$core$Int64) { 122 }));
    PANDA_ASSERT($tmp3423.value);
    panda$core$Int64 $tmp3424 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_l->children);
    panda$core$Bit $tmp3425 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3424, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3425.value);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loops, ((panda$core$Object*) ((panda$core$String*) p_l->payload)));
    panda$core$Object* $tmp3427 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_l->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3428 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3427));
    stmt3426 = $tmp3428;
    if (((panda$core$Bit) { stmt3426 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$collections$Array* $tmp3430 = (panda$collections$Array*) malloc(40);
    $tmp3430->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3430->refCount.value = 1;
    panda$collections$Array$init$panda$core$Int64($tmp3430, ((panda$core$Int64) { 1 }));
    children3429 = $tmp3430;
    panda$collections$Array$add$panda$collections$Array$T(children3429, ((panda$core$Object*) stmt3426));
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
    org$pandalanguage$pandac$IRNode* $tmp3432 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3432->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3432->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3432, ((panda$core$Int64) { 1015 }), p_l->position, p_l->payload, ((panda$collections$ListView*) children3429));
    return $tmp3432;
}
org$pandalanguage$pandac$Compiler$CompileTargetResult* org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_t, panda$core$Int64 p_kind, org$pandalanguage$pandac$IRNode* p_rawValue, org$pandalanguage$pandac$Type* p_valueType) {
    org$pandalanguage$pandac$IRNode* value3434;
    org$pandalanguage$pandac$Type* type3438;
    org$pandalanguage$pandac$Variable* v3449;
    value3434 = p_rawValue;
    bool $tmp3435 = ((panda$core$Bit) { value3434 == NULL }).value;
    if ($tmp3435) goto $l3436;
    $tmp3435 = ((panda$core$Bit) { p_valueType == NULL }).value;
    $l3436:;
    panda$core$Bit $tmp3437 = { $tmp3435 };
    PANDA_ASSERT($tmp3437.value);
    switch (p_t->kind.value) {
        case 106:
        {
            panda$core$Int64 $tmp3439 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_t->children);
            panda$core$Bit $tmp3440 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3439, ((panda$core$Int64) { 1 }));
            if ($tmp3440.value) {
            {
                panda$core$Object* $tmp3441 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp3442 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, ((org$pandalanguage$pandac$ASTNode*) $tmp3441));
                org$pandalanguage$pandac$Type* $tmp3443 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, $tmp3442);
                type3438 = $tmp3443;
            }
            }
            else {
            if (((panda$core$Bit) { value3434 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp3444 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, value3434);
                value3434 = $tmp3444;
                if (((panda$core$Bit) { value3434 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$Type* $tmp3445 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, value3434);
                type3438 = $tmp3445;
            }
            }
            else {
            if (((panda$core$Bit) { p_valueType != NULL }).value) {
            {
                type3438 = p_valueType;
            }
            }
            else {
            {
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_t->position, &$s3446);
                return NULL;
            }
            }
            }
            }
            if (((panda$core$Bit) { value3434 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp3447 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, value3434, type3438);
                value3434 = $tmp3447;
                if (((panda$core$Bit) { value3434 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$core$Bit $tmp3448 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(value3434->type, type3438);
                PANDA_ASSERT($tmp3448.value);
            }
            }
            org$pandalanguage$pandac$Variable* $tmp3450 = (org$pandalanguage$pandac$Variable*) malloc(88);
            $tmp3450->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
            $tmp3450->refCount.value = 1;
            org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type($tmp3450, p_t->position, p_kind, ((panda$core$String*) p_t->payload), type3438);
            v3449 = $tmp3450;
            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->symbolTable, ((org$pandalanguage$pandac$Symbol*) v3449));
            org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp3452 = (org$pandalanguage$pandac$Compiler$CompileTargetResult*) malloc(32);
            $tmp3452->$class = (panda$core$Class*) &org$pandalanguage$pandac$Compiler$CompileTargetResult$class;
            $tmp3452->refCount.value = 1;
            org$pandalanguage$pandac$IRNode* $tmp3454 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3454->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3454->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3454, ((panda$core$Int64) { 1016 }), ((org$pandalanguage$pandac$Symbol*) v3449)->position, v3449->type, v3449);
            org$pandalanguage$pandac$Compiler$CompileTargetResult$init$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q($tmp3452, $tmp3454, value3434);
            return $tmp3452;
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
    org$pandalanguage$pandac$IRNode* value3464;
    org$pandalanguage$pandac$Compiler$CompileTargetResult* target3469;
    panda$collections$Array* children3472;
    org$pandalanguage$pandac$Variable* v3476;
    panda$core$Bit $tmp3456 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_d->kind, ((panda$core$Int64) { 129 }));
    PANDA_ASSERT($tmp3456.value);
    panda$core$Int64 $tmp3458 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp3459 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3458, ((panda$core$Int64) { 1 }));
    bool $tmp3457 = $tmp3459.value;
    if ($tmp3457) goto $l3460;
    panda$core$Int64 $tmp3461 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp3462 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3461, ((panda$core$Int64) { 2 }));
    $tmp3457 = $tmp3462.value;
    $l3460:;
    panda$core$Bit $tmp3463 = { $tmp3457 };
    PANDA_ASSERT($tmp3463.value);
    panda$core$Int64 $tmp3465 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp3466 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3465, ((panda$core$Int64) { 2 }));
    if ($tmp3466.value) {
    {
        panda$core$Object* $tmp3467 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$IRNode* $tmp3468 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3467));
        value3464 = $tmp3468;
        if (((panda$core$Bit) { value3464 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    else {
    {
        value3464 = NULL;
    }
    }
    panda$core$Object* $tmp3470 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp3471 = org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3470), p_varKind, value3464, NULL);
    target3469 = $tmp3471;
    if (((panda$core$Bit) { target3469 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3473 = (panda$collections$Array*) malloc(40);
    $tmp3473->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3473->refCount.value = 1;
    panda$collections$Array$init($tmp3473);
    children3472 = $tmp3473;
    panda$collections$Array$add$panda$collections$Array$T(children3472, ((panda$core$Object*) target3469->target));
    if (((panda$core$Bit) { target3469->value != NULL }).value) {
    {
        panda$core$Bit $tmp3475 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(target3469->target->kind, ((panda$core$Int64) { 1016 }));
        PANDA_ASSERT($tmp3475.value);
        v3476 = ((org$pandalanguage$pandac$Variable*) target3469->target->payload);
        v3476->initialValue = target3469->value;
        panda$collections$Array$add$panda$collections$Array$T(children3472, ((panda$core$Object*) target3469->value));
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3477 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3477->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3477->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3477, ((panda$core$Int64) { 1021 }), p_d->position, ((panda$collections$ListView*) children3472));
    return $tmp3477;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBreak$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_b) {
    panda$core$Bit found3480;
    panda$collections$Iterator* label$Iter3481;
    panda$core$String* label3493;
    panda$core$Bit $tmp3479 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_b->kind, ((panda$core$Int64) { 134 }));
    PANDA_ASSERT($tmp3479.value);
    if (((panda$core$Bit) { p_b->payload != NULL }).value) {
    {
        found3480 = ((panda$core$Bit) { false });
        {
            ITable* $tmp3482 = ((panda$collections$Iterable*) self->loops)->$class->itable;
            while ($tmp3482->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3482 = $tmp3482->next;
            }
            $fn3484 $tmp3483 = $tmp3482->methods[0];
            panda$collections$Iterator* $tmp3485 = $tmp3483(((panda$collections$Iterable*) self->loops));
            label$Iter3481 = $tmp3485;
            $l3486:;
            ITable* $tmp3488 = label$Iter3481->$class->itable;
            while ($tmp3488->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3488 = $tmp3488->next;
            }
            $fn3490 $tmp3489 = $tmp3488->methods[0];
            panda$core$Bit $tmp3491 = $tmp3489(label$Iter3481);
            panda$core$Bit $tmp3492 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3491);
            if (!$tmp3492.value) goto $l3487;
            {
                ITable* $tmp3494 = label$Iter3481->$class->itable;
                while ($tmp3494->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3494 = $tmp3494->next;
                }
                $fn3496 $tmp3495 = $tmp3494->methods[1];
                panda$core$Object* $tmp3497 = $tmp3495(label$Iter3481);
                label3493 = ((panda$core$String*) $tmp3497);
                bool $tmp3498 = ((panda$core$Bit) { label3493 != NULL }).value;
                if (!$tmp3498) goto $l3499;
                panda$core$Bit $tmp3500 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(label3493, ((panda$core$String*) p_b->payload));
                $tmp3498 = $tmp3500.value;
                $l3499:;
                panda$core$Bit $tmp3501 = { $tmp3498 };
                if ($tmp3501.value) {
                {
                    found3480 = ((panda$core$Bit) { true });
                    goto $l3487;
                }
                }
            }
            goto $l3486;
            $l3487:;
        }
        panda$core$Bit $tmp3502 = panda$core$Bit$$NOT$R$panda$core$Bit(found3480);
        if ($tmp3502.value) {
        {
            panda$core$String* $tmp3504 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3503, p_b->payload);
            panda$core$String* $tmp3506 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3504, &$s3505);
            panda$core$String* $tmp3508 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3507, p_b->payload);
            panda$core$String* $tmp3510 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3508, &$s3509);
            panda$core$String* $tmp3511 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3506, $tmp3510);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_b->position, $tmp3511);
        }
        }
    }
    }
    else {
    panda$core$Int64 $tmp3512 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loops);
    panda$core$Bit $tmp3513 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3512, ((panda$core$Int64) { 0 }));
    if ($tmp3513.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_b->position, &$s3514);
    }
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3515 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3515->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3515->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp3515, ((panda$core$Int64) { 1006 }), p_b->position, ((panda$core$String*) p_b->payload));
    return $tmp3515;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileContinue$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_c) {
    panda$core$Bit found3518;
    panda$collections$Iterator* label$Iter3519;
    panda$core$String* label3531;
    panda$core$Bit $tmp3517 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_c->kind, ((panda$core$Int64) { 135 }));
    PANDA_ASSERT($tmp3517.value);
    if (((panda$core$Bit) { p_c->payload != NULL }).value) {
    {
        found3518 = ((panda$core$Bit) { false });
        {
            ITable* $tmp3520 = ((panda$collections$Iterable*) self->loops)->$class->itable;
            while ($tmp3520->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3520 = $tmp3520->next;
            }
            $fn3522 $tmp3521 = $tmp3520->methods[0];
            panda$collections$Iterator* $tmp3523 = $tmp3521(((panda$collections$Iterable*) self->loops));
            label$Iter3519 = $tmp3523;
            $l3524:;
            ITable* $tmp3526 = label$Iter3519->$class->itable;
            while ($tmp3526->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3526 = $tmp3526->next;
            }
            $fn3528 $tmp3527 = $tmp3526->methods[0];
            panda$core$Bit $tmp3529 = $tmp3527(label$Iter3519);
            panda$core$Bit $tmp3530 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3529);
            if (!$tmp3530.value) goto $l3525;
            {
                ITable* $tmp3532 = label$Iter3519->$class->itable;
                while ($tmp3532->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3532 = $tmp3532->next;
                }
                $fn3534 $tmp3533 = $tmp3532->methods[1];
                panda$core$Object* $tmp3535 = $tmp3533(label$Iter3519);
                label3531 = ((panda$core$String*) $tmp3535);
                bool $tmp3536 = ((panda$core$Bit) { label3531 != NULL }).value;
                if (!$tmp3536) goto $l3537;
                panda$core$Bit $tmp3538 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(label3531, ((panda$core$String*) p_c->payload));
                $tmp3536 = $tmp3538.value;
                $l3537:;
                panda$core$Bit $tmp3539 = { $tmp3536 };
                if ($tmp3539.value) {
                {
                    found3518 = ((panda$core$Bit) { true });
                    goto $l3525;
                }
                }
            }
            goto $l3524;
            $l3525:;
        }
        panda$core$Bit $tmp3540 = panda$core$Bit$$NOT$R$panda$core$Bit(found3518);
        if ($tmp3540.value) {
        {
            panda$core$String* $tmp3542 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3541, p_c->payload);
            panda$core$String* $tmp3544 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3542, &$s3543);
            panda$core$String* $tmp3546 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3545, p_c->payload);
            panda$core$String* $tmp3548 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3546, &$s3547);
            panda$core$String* $tmp3549 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3544, $tmp3548);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_c->position, $tmp3549);
        }
        }
    }
    }
    else {
    panda$core$Int64 $tmp3550 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loops);
    panda$core$Bit $tmp3551 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3550, ((panda$core$Int64) { 0 }));
    if ($tmp3551.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_c->position, &$s3552);
    }
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3553 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3553->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3553->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp3553, ((panda$core$Int64) { 1007 }), p_c->position, ((panda$core$String*) p_c->payload));
    return $tmp3553;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileReturn$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_r) {
    org$pandalanguage$pandac$IRNode* value3562;
    panda$collections$Array* children3567;
    panda$core$Bit $tmp3555 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_r->kind, ((panda$core$Int64) { 136 }));
    PANDA_ASSERT($tmp3555.value);
    panda$core$Int64 $tmp3556 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_r->children);
    panda$core$Bit $tmp3557 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3556, ((panda$core$Int64) { 1 }));
    if ($tmp3557.value) {
    {
        panda$core$Object* $tmp3558 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
        org$pandalanguage$pandac$Type* $tmp3559 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp3560 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp3558)->returnType, $tmp3559);
        if ($tmp3560.value) {
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_r->position, &$s3561);
            return NULL;
        }
        }
        panda$core$Object* $tmp3563 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp3564 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3563));
        panda$core$Object* $tmp3565 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
        org$pandalanguage$pandac$IRNode* $tmp3566 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3564, ((org$pandalanguage$pandac$MethodDecl*) $tmp3565)->returnType);
        value3562 = $tmp3566;
        if (((panda$core$Bit) { value3562 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp3568 = (panda$collections$Array*) malloc(40);
        $tmp3568->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp3568->refCount.value = 1;
        panda$collections$Array$init($tmp3568);
        children3567 = $tmp3568;
        panda$collections$Array$add$panda$collections$Array$T(children3567, ((panda$core$Object*) value3562));
        org$pandalanguage$pandac$IRNode* $tmp3570 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3570->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3570->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3570, ((panda$core$Int64) { 1008 }), p_r->position, ((panda$collections$ListView*) children3567));
        return $tmp3570;
    }
    }
    panda$core$Int64 $tmp3572 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_r->children);
    panda$core$Bit $tmp3573 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3572, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp3573.value);
    panda$core$Object* $tmp3574 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
    org$pandalanguage$pandac$Type* $tmp3575 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp3576 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp3574)->returnType, $tmp3575);
    if ($tmp3576.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_r->position, &$s3577);
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3578 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3578->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3578->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp3578, ((panda$core$Int64) { 1008 }), p_r->position);
    return $tmp3578;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileAssert$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_a) {
    org$pandalanguage$pandac$IRNode* test3588;
    org$pandalanguage$pandac$ClassDecl* bit3593;
    org$pandalanguage$pandac$Symbol* value3596;
    panda$collections$Array* fieldChildren3599;
    panda$collections$Array* children3605;
    org$pandalanguage$pandac$IRNode* msg3610;
    panda$core$Bit $tmp3580 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_a->kind, ((panda$core$Int64) { 123 }));
    PANDA_ASSERT($tmp3580.value);
    panda$core$Int64 $tmp3582 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp3583 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3582, ((panda$core$Int64) { 1 }));
    bool $tmp3581 = $tmp3583.value;
    if ($tmp3581) goto $l3584;
    panda$core$Int64 $tmp3585 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp3586 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3585, ((panda$core$Int64) { 2 }));
    $tmp3581 = $tmp3586.value;
    $l3584:;
    panda$core$Bit $tmp3587 = { $tmp3581 };
    PANDA_ASSERT($tmp3587.value);
    panda$core$Object* $tmp3589 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_a->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3590 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3589));
    test3588 = $tmp3590;
    if (((panda$core$Bit) { test3588 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$Type* $tmp3591 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp3592 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, test3588, $tmp3591);
    test3588 = $tmp3592;
    if (((panda$core$Bit) { test3588 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$Type* $tmp3594 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$ClassDecl* $tmp3595 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, $tmp3594);
    bit3593 = $tmp3595;
    PANDA_ASSERT(((panda$core$Bit) { bit3593 != NULL }).value);
    org$pandalanguage$pandac$Symbol* $tmp3598 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(bit3593->symbolTable, &$s3597);
    value3596 = $tmp3598;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self, ((org$pandalanguage$pandac$FieldDecl*) value3596));
    panda$collections$Array* $tmp3600 = (panda$collections$Array*) malloc(40);
    $tmp3600->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3600->refCount.value = 1;
    panda$collections$Array$init($tmp3600);
    fieldChildren3599 = $tmp3600;
    panda$collections$Array$add$panda$collections$Array$T(fieldChildren3599, ((panda$core$Object*) test3588));
    org$pandalanguage$pandac$IRNode* $tmp3602 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3602->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3602->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3604 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3602, ((panda$core$Int64) { 1026 }), p_a->position, $tmp3604, ((panda$core$Object*) value3596), ((panda$collections$ListView*) fieldChildren3599));
    test3588 = $tmp3602;
    panda$collections$Array* $tmp3606 = (panda$collections$Array*) malloc(40);
    $tmp3606->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3606->refCount.value = 1;
    panda$collections$Array$init($tmp3606);
    children3605 = $tmp3606;
    panda$collections$Array$add$panda$collections$Array$T(children3605, ((panda$core$Object*) test3588));
    panda$core$Int64 $tmp3608 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp3609 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3608, ((panda$core$Int64) { 2 }));
    if ($tmp3609.value) {
    {
        panda$core$Object* $tmp3611 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_a->children, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$IRNode* $tmp3612 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3611));
        msg3610 = $tmp3612;
        if (((panda$core$Bit) { msg3610 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$Type* $tmp3613 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp3614 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, msg3610, $tmp3613);
        msg3610 = $tmp3614;
        if (((panda$core$Bit) { msg3610 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children3605, ((panda$core$Object*) msg3610));
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3615 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3615->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3615->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3615, ((panda$core$Int64) { 1034 }), p_a->position, ((panda$collections$ListView*) children3605));
    return $tmp3615;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileVar$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_v) {
    panda$core$Int64 nodeKind3630;
    panda$core$Int64 varKind3631;
    panda$collections$Array* decls3632;
    panda$collections$Iterator* astDecl$Iter3635;
    org$pandalanguage$pandac$ASTNode* astDecl3647;
    org$pandalanguage$pandac$IRNode* decl3652;
    panda$core$Bit $tmp3620 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 130 }));
    bool $tmp3619 = $tmp3620.value;
    if ($tmp3619) goto $l3621;
    panda$core$Bit $tmp3622 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 131 }));
    $tmp3619 = $tmp3622.value;
    $l3621:;
    panda$core$Bit $tmp3623 = { $tmp3619 };
    bool $tmp3618 = $tmp3623.value;
    if ($tmp3618) goto $l3624;
    panda$core$Bit $tmp3625 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 133 }));
    $tmp3618 = $tmp3625.value;
    $l3624:;
    panda$core$Bit $tmp3626 = { $tmp3618 };
    bool $tmp3617 = $tmp3626.value;
    if ($tmp3617) goto $l3627;
    panda$core$Bit $tmp3628 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 132 }));
    $tmp3617 = $tmp3628.value;
    $l3627:;
    panda$core$Bit $tmp3629 = { $tmp3617 };
    PANDA_ASSERT($tmp3629.value);
    switch (p_v->kind.value) {
        case 130:
        {
            nodeKind3630 = ((panda$core$Int64) { 1017 });
            varKind3631 = ((panda$core$Int64) { 10000 });
        }
        break;
        case 131:
        {
            nodeKind3630 = ((panda$core$Int64) { 1018 });
            varKind3631 = ((panda$core$Int64) { 10001 });
        }
        break;
        case 132:
        {
            nodeKind3630 = ((panda$core$Int64) { 1019 });
            varKind3631 = ((panda$core$Int64) { 10002 });
        }
        break;
        case 133:
        {
            nodeKind3630 = ((panda$core$Int64) { 1020 });
            varKind3631 = ((panda$core$Int64) { 10003 });
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
    panda$collections$Array* $tmp3633 = (panda$collections$Array*) malloc(40);
    $tmp3633->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3633->refCount.value = 1;
    panda$collections$Array$init($tmp3633);
    decls3632 = $tmp3633;
    {
        ITable* $tmp3636 = ((panda$collections$Iterable*) p_v->children)->$class->itable;
        while ($tmp3636->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3636 = $tmp3636->next;
        }
        $fn3638 $tmp3637 = $tmp3636->methods[0];
        panda$collections$Iterator* $tmp3639 = $tmp3637(((panda$collections$Iterable*) p_v->children));
        astDecl$Iter3635 = $tmp3639;
        $l3640:;
        ITable* $tmp3642 = astDecl$Iter3635->$class->itable;
        while ($tmp3642->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3642 = $tmp3642->next;
        }
        $fn3644 $tmp3643 = $tmp3642->methods[0];
        panda$core$Bit $tmp3645 = $tmp3643(astDecl$Iter3635);
        panda$core$Bit $tmp3646 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3645);
        if (!$tmp3646.value) goto $l3641;
        {
            ITable* $tmp3648 = astDecl$Iter3635->$class->itable;
            while ($tmp3648->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3648 = $tmp3648->next;
            }
            $fn3650 $tmp3649 = $tmp3648->methods[1];
            panda$core$Object* $tmp3651 = $tmp3649(astDecl$Iter3635);
            astDecl3647 = ((org$pandalanguage$pandac$ASTNode*) $tmp3651);
            org$pandalanguage$pandac$IRNode* $tmp3653 = org$pandalanguage$pandac$Compiler$compileDeclaration$org$pandalanguage$pandac$ASTNode$panda$core$Int64$R$org$pandalanguage$pandac$IRNode$Q(self, astDecl3647, varKind3631);
            decl3652 = $tmp3653;
            if (((panda$core$Bit) { decl3652 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(decls3632, ((panda$core$Object*) decl3652));
        }
        goto $l3640;
        $l3641:;
    }
    org$pandalanguage$pandac$IRNode* $tmp3654 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3654->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3654->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3654, nodeKind3630, p_v->position, ((panda$collections$ListView*) decls3632));
    return $tmp3654;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileWhenTest$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Variable* p_value, org$pandalanguage$pandac$ASTNode* p_test) {
    org$pandalanguage$pandac$IRNode* target3656;
    panda$collections$Array* callChildren3659;
    org$pandalanguage$pandac$IRNode* testValue3662;
    org$pandalanguage$pandac$IRNode* $tmp3657 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3657->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3657->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3657, ((panda$core$Int64) { 1016 }), p_test->position, p_value->type, p_value);
    target3656 = $tmp3657;
    panda$collections$Array* $tmp3660 = (panda$collections$Array*) malloc(40);
    $tmp3660->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3660->refCount.value = 1;
    panda$collections$Array$init($tmp3660);
    callChildren3659 = $tmp3660;
    org$pandalanguage$pandac$IRNode* $tmp3663 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_test);
    testValue3662 = $tmp3663;
    if (((panda$core$Bit) { testValue3662 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(callChildren3659, ((panda$core$Object*) testValue3662));
    org$pandalanguage$pandac$IRNode* $tmp3665 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target3656, &$s3664, ((panda$collections$ListView*) callChildren3659));
    return $tmp3665;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileChainedIfWhen$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Variable* p_value, org$pandalanguage$pandac$ASTNode* p_w) {
    org$pandalanguage$pandac$IRNode* test3674;
    panda$core$Range$LTpanda$core$Int64$GT $tmp3678;
    org$pandalanguage$pandac$IRNode* nextTest3699;
    panda$collections$Array* callChildren3703;
    panda$collections$Array* statements3721;
    panda$core$Range$LTpanda$core$Int64$GT $tmp3724;
    org$pandalanguage$pandac$IRNode* statement3744;
    panda$collections$Array* children3759;
    panda$core$Bit $tmp3666 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_w->kind, ((panda$core$Int64) { 124 }));
    PANDA_ASSERT($tmp3666.value);
    panda$core$Int64 $tmp3667 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Bit $tmp3668 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp3667, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3668.value);
    panda$core$Object* $tmp3669 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp3670 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp3669)->kind, ((panda$core$Int64) { 128 }));
    PANDA_ASSERT($tmp3670.value);
    panda$core$Object* $tmp3671 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Int64 $tmp3672 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$ASTNode*) $tmp3671)->children);
    panda$core$Bit $tmp3673 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp3672, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3673.value);
    panda$core$Object* $tmp3675 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp3676 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$ASTNode*) $tmp3675)->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3677 = org$pandalanguage$pandac$Compiler$compileWhenTest$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_value, ((org$pandalanguage$pandac$ASTNode*) $tmp3676));
    test3674 = $tmp3677;
    if (((panda$core$Bit) { test3674 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Object* $tmp3679 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Int64 $tmp3680 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$ASTNode*) $tmp3679)->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp3678, ((panda$core$Int64) { 1 }), $tmp3680, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp3682 = $tmp3678.start.value;
    panda$core$Int64 i3681 = { $tmp3682 };
    int64_t $tmp3684 = $tmp3678.end.value;
    int64_t $tmp3685 = $tmp3678.step.value;
    bool $tmp3686 = $tmp3678.inclusive.value;
    bool $tmp3693 = $tmp3685 > 0;
    if ($tmp3693) goto $l3691; else goto $l3692;
    $l3691:;
    if ($tmp3686) goto $l3694; else goto $l3695;
    $l3694:;
    if ($tmp3682 <= $tmp3684) goto $l3687; else goto $l3689;
    $l3695:;
    if ($tmp3682 < $tmp3684) goto $l3687; else goto $l3689;
    $l3692:;
    if ($tmp3686) goto $l3696; else goto $l3697;
    $l3696:;
    if ($tmp3682 >= $tmp3684) goto $l3687; else goto $l3689;
    $l3697:;
    if ($tmp3682 > $tmp3684) goto $l3687; else goto $l3689;
    $l3687:;
    {
        panda$core$Object* $tmp3700 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3701 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$ASTNode*) $tmp3700)->children, i3681);
        org$pandalanguage$pandac$IRNode* $tmp3702 = org$pandalanguage$pandac$Compiler$compileWhenTest$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_value, ((org$pandalanguage$pandac$ASTNode*) $tmp3701));
        nextTest3699 = $tmp3702;
        if (((panda$core$Bit) { nextTest3699 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp3704 = (panda$collections$Array*) malloc(40);
        $tmp3704->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp3704->refCount.value = 1;
        panda$collections$Array$init($tmp3704);
        callChildren3703 = $tmp3704;
        panda$collections$Array$add$panda$collections$Array$T(callChildren3703, ((panda$core$Object*) nextTest3699));
        org$pandalanguage$pandac$IRNode* $tmp3707 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, test3674, &$s3706, ((panda$collections$ListView*) callChildren3703));
        test3674 = $tmp3707;
        if (((panda$core$Bit) { test3674 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    $l3690:;
    if ($tmp3693) goto $l3709; else goto $l3710;
    $l3709:;
    int64_t $tmp3711 = $tmp3684 - i3681.value;
    if ($tmp3686) goto $l3712; else goto $l3713;
    $l3712:;
    if ($tmp3711 >= $tmp3685) goto $l3708; else goto $l3689;
    $l3713:;
    if ($tmp3711 > $tmp3685) goto $l3708; else goto $l3689;
    $l3710:;
    int64_t $tmp3715 = i3681.value - $tmp3684;
    if ($tmp3686) goto $l3716; else goto $l3717;
    $l3716:;
    if ($tmp3715 >= -$tmp3685) goto $l3708; else goto $l3689;
    $l3717:;
    if ($tmp3715 > -$tmp3685) goto $l3708; else goto $l3689;
    $l3708:;
    i3681.value += $tmp3685;
    goto $l3687;
    $l3689:;
    org$pandalanguage$pandac$SymbolTable* $tmp3719 = (org$pandalanguage$pandac$SymbolTable*) malloc(40);
    $tmp3719->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp3719->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp3719, self->symbolTable);
    self->symbolTable = $tmp3719;
    panda$collections$Array* $tmp3722 = (panda$collections$Array*) malloc(40);
    $tmp3722->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3722->refCount.value = 1;
    panda$collections$Array$init($tmp3722);
    statements3721 = $tmp3722;
    panda$core$Int64 $tmp3725 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp3724, ((panda$core$Int64) { 1 }), $tmp3725, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp3727 = $tmp3724.start.value;
    panda$core$Int64 i3726 = { $tmp3727 };
    int64_t $tmp3729 = $tmp3724.end.value;
    int64_t $tmp3730 = $tmp3724.step.value;
    bool $tmp3731 = $tmp3724.inclusive.value;
    bool $tmp3738 = $tmp3730 > 0;
    if ($tmp3738) goto $l3736; else goto $l3737;
    $l3736:;
    if ($tmp3731) goto $l3739; else goto $l3740;
    $l3739:;
    if ($tmp3727 <= $tmp3729) goto $l3732; else goto $l3734;
    $l3740:;
    if ($tmp3727 < $tmp3729) goto $l3732; else goto $l3734;
    $l3737:;
    if ($tmp3731) goto $l3741; else goto $l3742;
    $l3741:;
    if ($tmp3727 >= $tmp3729) goto $l3732; else goto $l3734;
    $l3742:;
    if ($tmp3727 > $tmp3729) goto $l3732; else goto $l3734;
    $l3732:;
    {
        panda$core$Object* $tmp3745 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, i3726);
        org$pandalanguage$pandac$IRNode* $tmp3746 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3745));
        statement3744 = $tmp3746;
        if (((panda$core$Bit) { statement3744 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(statements3721, ((panda$core$Object*) statement3744));
    }
    $l3735:;
    if ($tmp3738) goto $l3748; else goto $l3749;
    $l3748:;
    int64_t $tmp3750 = $tmp3729 - i3726.value;
    if ($tmp3731) goto $l3751; else goto $l3752;
    $l3751:;
    if ($tmp3750 >= $tmp3730) goto $l3747; else goto $l3734;
    $l3752:;
    if ($tmp3750 > $tmp3730) goto $l3747; else goto $l3734;
    $l3749:;
    int64_t $tmp3754 = i3726.value - $tmp3729;
    if ($tmp3731) goto $l3755; else goto $l3756;
    $l3755:;
    if ($tmp3754 >= -$tmp3730) goto $l3747; else goto $l3734;
    $l3756:;
    if ($tmp3754 > -$tmp3730) goto $l3747; else goto $l3734;
    $l3747:;
    i3726.value += $tmp3730;
    goto $l3732;
    $l3734:;
    panda$core$Object* $tmp3758 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->symbolTable->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp3758);
    panda$collections$Array* $tmp3760 = (panda$collections$Array*) malloc(40);
    $tmp3760->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3760->refCount.value = 1;
    panda$collections$Array$init($tmp3760);
    children3759 = $tmp3760;
    panda$collections$Array$add$panda$collections$Array$T(children3759, ((panda$core$Object*) test3674));
    org$pandalanguage$pandac$IRNode* $tmp3762 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3762->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3762->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3762, ((panda$core$Int64) { 1000 }), p_w->position, ((panda$collections$ListView*) statements3721));
    panda$collections$Array$add$panda$collections$Array$T(children3759, ((panda$core$Object*) $tmp3762));
    org$pandalanguage$pandac$IRNode* $tmp3764 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3764->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3764->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3764, ((panda$core$Int64) { 1012 }), p_w->position, ((panda$collections$ListView*) children3759));
    return $tmp3764;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileChainedIfMatch$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_m, org$pandalanguage$pandac$IRNode* p_value) {
    panda$collections$Array* children3766;
    org$pandalanguage$pandac$Variable* valueVar3769;
    panda$collections$Array* declChildren3779;
    panda$collections$Array* varChildren3784;
    panda$core$Range$LTpanda$core$Int64$GT $tmp3791;
    org$pandalanguage$pandac$ASTNode* c3811;
    org$pandalanguage$pandac$IRNode* w3813;
    panda$collections$Array* statements3815;
    panda$collections$Iterator* astStatement$Iter3818;
    org$pandalanguage$pandac$ASTNode* astStatement3830;
    org$pandalanguage$pandac$IRNode* stmt3835;
    panda$core$Range$LTpanda$core$Int64$GT $tmp3850;
    panda$collections$Array* $tmp3767 = (panda$collections$Array*) malloc(40);
    $tmp3767->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3767->refCount.value = 1;
    panda$collections$Array$init($tmp3767);
    children3766 = $tmp3767;
    org$pandalanguage$pandac$Variable* $tmp3770 = (org$pandalanguage$pandac$Variable*) malloc(88);
    $tmp3770->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
    $tmp3770->refCount.value = 1;
    panda$core$String* $tmp3773 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3772, ((panda$core$Object*) wrap_panda$core$Int64(p_m->position.line)));
    panda$core$String* $tmp3775 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3773, &$s3774);
    panda$core$String* $tmp3776 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3775, ((panda$core$Object*) wrap_panda$core$Int64(p_m->position.column)));
    panda$core$String* $tmp3778 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3776, &$s3777);
    org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type($tmp3770, p_m->position, ((panda$core$Int64) { 10001 }), $tmp3778, p_value->type);
    valueVar3769 = $tmp3770;
    panda$collections$Array* $tmp3780 = (panda$collections$Array*) malloc(40);
    $tmp3780->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3780->refCount.value = 1;
    panda$collections$Array$init($tmp3780);
    declChildren3779 = $tmp3780;
    org$pandalanguage$pandac$IRNode* $tmp3782 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3782->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3782->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3782, ((panda$core$Int64) { 1016 }), p_value->position, valueVar3769->type, valueVar3769);
    panda$collections$Array$add$panda$collections$Array$T(declChildren3779, ((panda$core$Object*) $tmp3782));
    panda$collections$Array$add$panda$collections$Array$T(declChildren3779, ((panda$core$Object*) p_value));
    panda$collections$Array* $tmp3785 = (panda$collections$Array*) malloc(40);
    $tmp3785->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3785->refCount.value = 1;
    panda$collections$Array$init($tmp3785);
    varChildren3784 = $tmp3785;
    org$pandalanguage$pandac$IRNode* $tmp3787 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3787->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3787->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3787, ((panda$core$Int64) { 1021 }), ((org$pandalanguage$pandac$Symbol*) valueVar3769)->position, ((panda$collections$ListView*) declChildren3779));
    panda$collections$Array$add$panda$collections$Array$T(varChildren3784, ((panda$core$Object*) $tmp3787));
    org$pandalanguage$pandac$IRNode* $tmp3789 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3789->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3789->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3789, ((panda$core$Int64) { 1018 }), ((org$pandalanguage$pandac$Symbol*) valueVar3769)->position, ((panda$collections$ListView*) varChildren3784));
    panda$collections$Array$add$panda$collections$Array$T(children3766, ((panda$core$Object*) $tmp3789));
    panda$core$Int64 $tmp3792 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp3791, ((panda$core$Int64) { 1 }), $tmp3792, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp3794 = $tmp3791.start.value;
    panda$core$Int64 i3793 = { $tmp3794 };
    int64_t $tmp3796 = $tmp3791.end.value;
    int64_t $tmp3797 = $tmp3791.step.value;
    bool $tmp3798 = $tmp3791.inclusive.value;
    bool $tmp3805 = $tmp3797 > 0;
    if ($tmp3805) goto $l3803; else goto $l3804;
    $l3803:;
    if ($tmp3798) goto $l3806; else goto $l3807;
    $l3806:;
    if ($tmp3794 <= $tmp3796) goto $l3799; else goto $l3801;
    $l3807:;
    if ($tmp3794 < $tmp3796) goto $l3799; else goto $l3801;
    $l3804:;
    if ($tmp3798) goto $l3808; else goto $l3809;
    $l3808:;
    if ($tmp3794 >= $tmp3796) goto $l3799; else goto $l3801;
    $l3809:;
    if ($tmp3794 > $tmp3796) goto $l3799; else goto $l3801;
    $l3799:;
    {
        panda$core$Object* $tmp3812 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, i3793);
        c3811 = ((org$pandalanguage$pandac$ASTNode*) $tmp3812);
        switch (c3811->kind.value) {
            case 124:
            {
                org$pandalanguage$pandac$IRNode* $tmp3814 = org$pandalanguage$pandac$Compiler$compileChainedIfWhen$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, valueVar3769, c3811);
                w3813 = $tmp3814;
                if (((panda$core$Bit) { w3813 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children3766, ((panda$core$Object*) w3813));
            }
            break;
            case 127:
            {
                panda$collections$Array* $tmp3816 = (panda$collections$Array*) malloc(40);
                $tmp3816->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp3816->refCount.value = 1;
                panda$collections$Array$init($tmp3816);
                statements3815 = $tmp3816;
                {
                    ITable* $tmp3819 = ((panda$collections$Iterable*) c3811->children)->$class->itable;
                    while ($tmp3819->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp3819 = $tmp3819->next;
                    }
                    $fn3821 $tmp3820 = $tmp3819->methods[0];
                    panda$collections$Iterator* $tmp3822 = $tmp3820(((panda$collections$Iterable*) c3811->children));
                    astStatement$Iter3818 = $tmp3822;
                    $l3823:;
                    ITable* $tmp3825 = astStatement$Iter3818->$class->itable;
                    while ($tmp3825->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp3825 = $tmp3825->next;
                    }
                    $fn3827 $tmp3826 = $tmp3825->methods[0];
                    panda$core$Bit $tmp3828 = $tmp3826(astStatement$Iter3818);
                    panda$core$Bit $tmp3829 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3828);
                    if (!$tmp3829.value) goto $l3824;
                    {
                        ITable* $tmp3831 = astStatement$Iter3818->$class->itable;
                        while ($tmp3831->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp3831 = $tmp3831->next;
                        }
                        $fn3833 $tmp3832 = $tmp3831->methods[1];
                        panda$core$Object* $tmp3834 = $tmp3832(astStatement$Iter3818);
                        astStatement3830 = ((org$pandalanguage$pandac$ASTNode*) $tmp3834);
                        org$pandalanguage$pandac$IRNode* $tmp3836 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, astStatement3830);
                        stmt3835 = $tmp3836;
                        if (((panda$core$Bit) { stmt3835 == NULL }).value) {
                        {
                            return NULL;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(statements3815, ((panda$core$Object*) stmt3835));
                    }
                    goto $l3823;
                    $l3824:;
                }
                org$pandalanguage$pandac$IRNode* $tmp3837 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp3837->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp3837->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3837, ((panda$core$Int64) { 1000 }), c3811->position, ((panda$collections$ListView*) statements3815));
                panda$collections$Array$add$panda$collections$Array$T(children3766, ((panda$core$Object*) $tmp3837));
            }
            break;
            default:
            {
                PANDA_ASSERT(((panda$core$Bit) { false }).value);
            }
        }
    }
    $l3802:;
    if ($tmp3805) goto $l3840; else goto $l3841;
    $l3840:;
    int64_t $tmp3842 = $tmp3796 - i3793.value;
    if ($tmp3798) goto $l3843; else goto $l3844;
    $l3843:;
    if ($tmp3842 >= $tmp3797) goto $l3839; else goto $l3801;
    $l3844:;
    if ($tmp3842 > $tmp3797) goto $l3839; else goto $l3801;
    $l3841:;
    int64_t $tmp3846 = i3793.value - $tmp3796;
    if ($tmp3798) goto $l3847; else goto $l3848;
    $l3847:;
    if ($tmp3846 >= -$tmp3797) goto $l3839; else goto $l3801;
    $l3848:;
    if ($tmp3846 > -$tmp3797) goto $l3839; else goto $l3801;
    $l3839:;
    i3793.value += $tmp3797;
    goto $l3799;
    $l3801:;
    panda$core$Int64 $tmp3851 = panda$collections$Array$get_count$R$panda$core$Int64(children3766);
    panda$core$Int64 $tmp3852 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp3851, ((panda$core$Int64) { 1 }));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp3850, $tmp3852, ((panda$core$Int64) { 1 }), ((panda$core$Int64$nullable) { ((panda$core$Int64) { -1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp3854 = $tmp3850.start.value;
    panda$core$Int64 i3853 = { $tmp3854 };
    int64_t $tmp3856 = $tmp3850.end.value;
    int64_t $tmp3857 = $tmp3850.step.value;
    bool $tmp3858 = $tmp3850.inclusive.value;
    bool $tmp3865 = $tmp3857 > 0;
    if ($tmp3865) goto $l3863; else goto $l3864;
    $l3863:;
    if ($tmp3858) goto $l3866; else goto $l3867;
    $l3866:;
    if ($tmp3854 <= $tmp3856) goto $l3859; else goto $l3861;
    $l3867:;
    if ($tmp3854 < $tmp3856) goto $l3859; else goto $l3861;
    $l3864:;
    if ($tmp3858) goto $l3868; else goto $l3869;
    $l3868:;
    if ($tmp3854 >= $tmp3856) goto $l3859; else goto $l3861;
    $l3869:;
    if ($tmp3854 > $tmp3856) goto $l3859; else goto $l3861;
    $l3859:;
    {
        panda$core$Int64 $tmp3871 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i3853, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp3872 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children3766, $tmp3871);
        panda$core$Bit $tmp3873 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp3872)->kind, ((panda$core$Int64) { 1012 }));
        PANDA_ASSERT($tmp3873.value);
        panda$core$Int64 $tmp3874 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i3853, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp3875 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children3766, $tmp3874);
        panda$core$Int64 $tmp3876 = panda$collections$Array$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp3875)->children);
        panda$core$Bit $tmp3877 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3876, ((panda$core$Int64) { 2 }));
        PANDA_ASSERT($tmp3877.value);
        panda$core$Int64 $tmp3878 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i3853, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp3879 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children3766, $tmp3878);
        panda$core$Object* $tmp3880 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children3766, i3853);
        panda$collections$Array$add$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp3879)->children, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp3880)));
        panda$core$Int64 $tmp3881 = panda$collections$Array$get_count$R$panda$core$Int64(children3766);
        panda$core$Int64 $tmp3882 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp3881, ((panda$core$Int64) { 1 }));
        panda$collections$Array$removeIndex$panda$core$Int64(children3766, $tmp3882);
    }
    $l3862:;
    if ($tmp3865) goto $l3884; else goto $l3885;
    $l3884:;
    int64_t $tmp3886 = $tmp3856 - i3853.value;
    if ($tmp3858) goto $l3887; else goto $l3888;
    $l3887:;
    if ($tmp3886 >= $tmp3857) goto $l3883; else goto $l3861;
    $l3888:;
    if ($tmp3886 > $tmp3857) goto $l3883; else goto $l3861;
    $l3885:;
    int64_t $tmp3890 = i3853.value - $tmp3856;
    if ($tmp3858) goto $l3891; else goto $l3892;
    $l3891:;
    if ($tmp3890 >= -$tmp3857) goto $l3883; else goto $l3861;
    $l3892:;
    if ($tmp3890 > -$tmp3857) goto $l3883; else goto $l3861;
    $l3883:;
    i3853.value += $tmp3857;
    goto $l3859;
    $l3861:;
    org$pandalanguage$pandac$IRNode* $tmp3894 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3894->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3894->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3894, ((panda$core$Int64) { 1000 }), p_m->position, ((panda$collections$ListView*) children3766));
    return $tmp3894;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileWhen$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type, org$pandalanguage$pandac$ASTNode* p_w) {
    panda$collections$Array* children3904;
    panda$collections$Iterator* expr$Iter3907;
    org$pandalanguage$pandac$ASTNode* expr3920;
    org$pandalanguage$pandac$IRNode* compiled3925;
    panda$collections$Array* statements3930;
    panda$core$Range$LTpanda$core$Int64$GT $tmp3933;
    org$pandalanguage$pandac$IRNode* statement3953;
    panda$core$Bit $tmp3896 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_w->kind, ((panda$core$Int64) { 124 }));
    PANDA_ASSERT($tmp3896.value);
    panda$core$Int64 $tmp3897 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Bit $tmp3898 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp3897, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3898.value);
    panda$core$Object* $tmp3899 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp3900 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp3899)->kind, ((panda$core$Int64) { 128 }));
    PANDA_ASSERT($tmp3900.value);
    panda$core$Object* $tmp3901 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Int64 $tmp3902 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$ASTNode*) $tmp3901)->children);
    panda$core$Bit $tmp3903 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp3902, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3903.value);
    panda$collections$Array* $tmp3905 = (panda$collections$Array*) malloc(40);
    $tmp3905->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3905->refCount.value = 1;
    panda$collections$Array$init($tmp3905);
    children3904 = $tmp3905;
    {
        panda$core$Object* $tmp3908 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
        ITable* $tmp3909 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp3908)->children)->$class->itable;
        while ($tmp3909->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3909 = $tmp3909->next;
        }
        $fn3911 $tmp3910 = $tmp3909->methods[0];
        panda$collections$Iterator* $tmp3912 = $tmp3910(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp3908)->children));
        expr$Iter3907 = $tmp3912;
        $l3913:;
        ITable* $tmp3915 = expr$Iter3907->$class->itable;
        while ($tmp3915->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3915 = $tmp3915->next;
        }
        $fn3917 $tmp3916 = $tmp3915->methods[0];
        panda$core$Bit $tmp3918 = $tmp3916(expr$Iter3907);
        panda$core$Bit $tmp3919 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3918);
        if (!$tmp3919.value) goto $l3914;
        {
            ITable* $tmp3921 = expr$Iter3907->$class->itable;
            while ($tmp3921->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3921 = $tmp3921->next;
            }
            $fn3923 $tmp3922 = $tmp3921->methods[1];
            panda$core$Object* $tmp3924 = $tmp3922(expr$Iter3907);
            expr3920 = ((org$pandalanguage$pandac$ASTNode*) $tmp3924);
            org$pandalanguage$pandac$IRNode* $tmp3926 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, expr3920);
            org$pandalanguage$pandac$IRNode* $tmp3927 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3926, p_type);
            compiled3925 = $tmp3927;
            if (((panda$core$Bit) { compiled3925 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children3904, ((panda$core$Object*) compiled3925));
        }
        goto $l3913;
        $l3914:;
    }
    org$pandalanguage$pandac$SymbolTable* $tmp3928 = (org$pandalanguage$pandac$SymbolTable*) malloc(40);
    $tmp3928->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp3928->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp3928, self->symbolTable);
    self->symbolTable = $tmp3928;
    panda$collections$Array* $tmp3931 = (panda$collections$Array*) malloc(40);
    $tmp3931->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3931->refCount.value = 1;
    panda$collections$Array$init($tmp3931);
    statements3930 = $tmp3931;
    panda$core$Int64 $tmp3934 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp3933, ((panda$core$Int64) { 1 }), $tmp3934, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp3936 = $tmp3933.start.value;
    panda$core$Int64 i3935 = { $tmp3936 };
    int64_t $tmp3938 = $tmp3933.end.value;
    int64_t $tmp3939 = $tmp3933.step.value;
    bool $tmp3940 = $tmp3933.inclusive.value;
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
        panda$core$Object* $tmp3954 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, i3935);
        org$pandalanguage$pandac$IRNode* $tmp3955 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3954));
        statement3953 = $tmp3955;
        if (((panda$core$Bit) { statement3953 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(statements3930, ((panda$core$Object*) statement3953));
    }
    $l3944:;
    if ($tmp3947) goto $l3957; else goto $l3958;
    $l3957:;
    int64_t $tmp3959 = $tmp3938 - i3935.value;
    if ($tmp3940) goto $l3960; else goto $l3961;
    $l3960:;
    if ($tmp3959 >= $tmp3939) goto $l3956; else goto $l3943;
    $l3961:;
    if ($tmp3959 > $tmp3939) goto $l3956; else goto $l3943;
    $l3958:;
    int64_t $tmp3963 = i3935.value - $tmp3938;
    if ($tmp3940) goto $l3964; else goto $l3965;
    $l3964:;
    if ($tmp3963 >= -$tmp3939) goto $l3956; else goto $l3943;
    $l3965:;
    if ($tmp3963 > -$tmp3939) goto $l3956; else goto $l3943;
    $l3956:;
    i3935.value += $tmp3939;
    goto $l3941;
    $l3943:;
    panda$core$Object* $tmp3967 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->symbolTable->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp3967);
    org$pandalanguage$pandac$IRNode* $tmp3968 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3968->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3968->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3968, ((panda$core$Int64) { 1000 }), p_w->position, ((panda$collections$ListView*) statements3930));
    panda$collections$Array$add$panda$collections$Array$T(children3904, ((panda$core$Object*) $tmp3968));
    org$pandalanguage$pandac$IRNode* $tmp3970 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3970->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3970->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3970, ((panda$core$Int64) { 1042 }), p_w->position, ((panda$collections$ListView*) children3904));
    return $tmp3970;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileOtherwise$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_o) {
    panda$collections$Array* children3973;
    panda$collections$Array* statements3978;
    panda$collections$Iterator* s$Iter3981;
    org$pandalanguage$pandac$ASTNode* s3993;
    org$pandalanguage$pandac$IRNode* statement3998;
    panda$core$Bit $tmp3972 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_o->kind, ((panda$core$Int64) { 127 }));
    PANDA_ASSERT($tmp3972.value);
    panda$collections$Array* $tmp3974 = (panda$collections$Array*) malloc(40);
    $tmp3974->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3974->refCount.value = 1;
    panda$collections$Array$init($tmp3974);
    children3973 = $tmp3974;
    org$pandalanguage$pandac$SymbolTable* $tmp3976 = (org$pandalanguage$pandac$SymbolTable*) malloc(40);
    $tmp3976->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp3976->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp3976, self->symbolTable);
    self->symbolTable = $tmp3976;
    panda$collections$Array* $tmp3979 = (panda$collections$Array*) malloc(40);
    $tmp3979->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3979->refCount.value = 1;
    panda$collections$Array$init($tmp3979);
    statements3978 = $tmp3979;
    {
        ITable* $tmp3982 = ((panda$collections$Iterable*) p_o->children)->$class->itable;
        while ($tmp3982->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3982 = $tmp3982->next;
        }
        $fn3984 $tmp3983 = $tmp3982->methods[0];
        panda$collections$Iterator* $tmp3985 = $tmp3983(((panda$collections$Iterable*) p_o->children));
        s$Iter3981 = $tmp3985;
        $l3986:;
        ITable* $tmp3988 = s$Iter3981->$class->itable;
        while ($tmp3988->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3988 = $tmp3988->next;
        }
        $fn3990 $tmp3989 = $tmp3988->methods[0];
        panda$core$Bit $tmp3991 = $tmp3989(s$Iter3981);
        panda$core$Bit $tmp3992 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3991);
        if (!$tmp3992.value) goto $l3987;
        {
            ITable* $tmp3994 = s$Iter3981->$class->itable;
            while ($tmp3994->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3994 = $tmp3994->next;
            }
            $fn3996 $tmp3995 = $tmp3994->methods[1];
            panda$core$Object* $tmp3997 = $tmp3995(s$Iter3981);
            s3993 = ((org$pandalanguage$pandac$ASTNode*) $tmp3997);
            org$pandalanguage$pandac$IRNode* $tmp3999 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, s3993);
            statement3998 = $tmp3999;
            if (((panda$core$Bit) { statement3998 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(statements3978, ((panda$core$Object*) statement3998));
        }
        goto $l3986;
        $l3987:;
    }
    panda$core$Object* $tmp4000 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->symbolTable->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp4000);
    org$pandalanguage$pandac$IRNode* $tmp4001 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4001->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4001->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4001, ((panda$core$Int64) { 1000 }), p_o->position, ((panda$collections$ListView*) statements3978));
    panda$collections$Array$add$panda$collections$Array$T(children3973, ((panda$core$Object*) $tmp4001));
    org$pandalanguage$pandac$IRNode* $tmp4003 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4003->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4003->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4003, ((panda$core$Int64) { 1043 }), p_o->position, ((panda$collections$ListView*) children3973));
    return $tmp4003;
}
panda$core$Bit org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    org$pandalanguage$pandac$FieldDecl* f4012;
    org$pandalanguage$pandac$Variable* v4021;
    switch (p_expr->kind.value) {
        case 1004:
        {
            return ((panda$core$Bit) { true });
        }
        break;
        case 1010:
        {
            panda$core$Bit $tmp4006 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_expr->type);
            bool $tmp4005 = $tmp4006.value;
            if (!$tmp4005) goto $l4007;
            panda$core$Object* $tmp4008 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp4009 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp4008)->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp4010 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp4009));
            $tmp4005 = $tmp4010.value;
            $l4007:;
            panda$core$Bit $tmp4011 = { $tmp4005 };
            return $tmp4011;
        }
        break;
        case 1026:
        {
            f4012 = ((org$pandalanguage$pandac$FieldDecl*) p_expr->payload);
            PANDA_ASSERT(f4012->resolved.value);
            panda$core$Bit $tmp4015 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(f4012->fieldKind, ((panda$core$Int64) { 10002 }));
            bool $tmp4014 = $tmp4015.value;
            if (!$tmp4014) goto $l4016;
            $tmp4014 = ((panda$core$Bit) { f4012->value != NULL }).value;
            $l4016:;
            panda$core$Bit $tmp4017 = { $tmp4014 };
            bool $tmp4013 = $tmp4017.value;
            if (!$tmp4013) goto $l4018;
            panda$core$Bit $tmp4019 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, f4012->value);
            $tmp4013 = $tmp4019.value;
            $l4018:;
            panda$core$Bit $tmp4020 = { $tmp4013 };
            return $tmp4020;
        }
        break;
        case 1016:
        {
            v4021 = ((org$pandalanguage$pandac$Variable*) p_expr->payload);
            panda$core$Bit $tmp4023 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(v4021->varKind, ((panda$core$Int64) { 10001 }));
            bool $tmp4022 = $tmp4023.value;
            if ($tmp4022) goto $l4024;
            panda$core$Bit $tmp4027 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(v4021->varKind, ((panda$core$Int64) { 10002 }));
            bool $tmp4026 = $tmp4027.value;
            if (!$tmp4026) goto $l4028;
            $tmp4026 = ((panda$core$Bit) { v4021->initialValue != NULL }).value;
            $l4028:;
            panda$core$Bit $tmp4029 = { $tmp4026 };
            bool $tmp4025 = $tmp4029.value;
            if (!$tmp4025) goto $l4030;
            panda$core$Bit $tmp4031 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, v4021->initialValue);
            $tmp4025 = $tmp4031.value;
            $l4030:;
            panda$core$Bit $tmp4032 = { $tmp4025 };
            $tmp4022 = $tmp4032.value;
            $l4024:;
            panda$core$Bit $tmp4033 = { $tmp4022 };
            return $tmp4033;
        }
        break;
        default:
        {
            return ((panda$core$Bit) { false });
        }
    }
}
panda$core$UInt64 org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    org$pandalanguage$pandac$FieldDecl* f4038;
    org$pandalanguage$pandac$Variable* v4040;
    panda$core$Bit $tmp4034 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, p_expr);
    PANDA_ASSERT($tmp4034.value);
    switch (p_expr->kind.value) {
        case 1004:
        {
            return ((panda$core$UInt64$wrapper*) p_expr->payload)->value;
        }
        break;
        case 1010:
        {
            panda$core$Object* $tmp4035 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp4036 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp4035)->children, ((panda$core$Int64) { 0 }));
            panda$core$UInt64 $tmp4037 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self, ((org$pandalanguage$pandac$IRNode*) $tmp4036));
            return $tmp4037;
        }
        break;
        case 1026:
        {
            f4038 = ((org$pandalanguage$pandac$FieldDecl*) p_expr->payload);
            panda$core$UInt64 $tmp4039 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self, f4038->value);
            return $tmp4039;
        }
        break;
        case 1016:
        {
            v4040 = ((org$pandalanguage$pandac$Variable*) p_expr->payload);
            panda$core$UInt64 $tmp4041 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self, v4040->initialValue);
            return $tmp4041;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileMatch$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_m) {
    org$pandalanguage$pandac$IRNode* value4045;
    panda$collections$Array* children4052;
    panda$collections$Iterator* rawWhen$Iter4055;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp4056;
    org$pandalanguage$pandac$ASTNode* rawWhen4069;
    org$pandalanguage$pandac$IRNode* o4075;
    org$pandalanguage$pandac$IRNode* w4077;
    panda$core$Bit $tmp4042 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->kind, ((panda$core$Int64) { 125 }));
    PANDA_ASSERT($tmp4042.value);
    panda$core$Int64 $tmp4043 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
    panda$core$Bit $tmp4044 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp4043, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4044.value);
    panda$core$Object* $tmp4046 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp4047 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4046));
    org$pandalanguage$pandac$IRNode* $tmp4048 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp4047);
    value4045 = $tmp4048;
    if (((panda$core$Bit) { value4045 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp4049 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(value4045->type);
    panda$core$Bit $tmp4050 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4049);
    if ($tmp4050.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp4051 = org$pandalanguage$pandac$Compiler$compileChainedIfMatch$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_m, value4045);
        return $tmp4051;
    }
    }
    panda$collections$Array* $tmp4053 = (panda$collections$Array*) malloc(40);
    $tmp4053->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4053->refCount.value = 1;
    panda$collections$Array$init($tmp4053);
    children4052 = $tmp4053;
    panda$collections$Array$add$panda$collections$Array$T(children4052, ((panda$core$Object*) value4045));
    {
        panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp4056, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
        panda$collections$ImmutableArray* $tmp4057 = panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(p_m->children, $tmp4056);
        ITable* $tmp4058 = ((panda$collections$Iterable*) $tmp4057)->$class->itable;
        while ($tmp4058->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4058 = $tmp4058->next;
        }
        $fn4060 $tmp4059 = $tmp4058->methods[0];
        panda$collections$Iterator* $tmp4061 = $tmp4059(((panda$collections$Iterable*) $tmp4057));
        rawWhen$Iter4055 = $tmp4061;
        $l4062:;
        ITable* $tmp4064 = rawWhen$Iter4055->$class->itable;
        while ($tmp4064->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4064 = $tmp4064->next;
        }
        $fn4066 $tmp4065 = $tmp4064->methods[0];
        panda$core$Bit $tmp4067 = $tmp4065(rawWhen$Iter4055);
        panda$core$Bit $tmp4068 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4067);
        if (!$tmp4068.value) goto $l4063;
        {
            ITable* $tmp4070 = rawWhen$Iter4055->$class->itable;
            while ($tmp4070->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4070 = $tmp4070->next;
            }
            $fn4072 $tmp4071 = $tmp4070->methods[1];
            panda$core$Object* $tmp4073 = $tmp4071(rawWhen$Iter4055);
            rawWhen4069 = ((org$pandalanguage$pandac$ASTNode*) $tmp4073);
            panda$core$Bit $tmp4074 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(rawWhen4069->kind, ((panda$core$Int64) { 127 }));
            if ($tmp4074.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp4076 = org$pandalanguage$pandac$Compiler$compileOtherwise$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, rawWhen4069);
                o4075 = $tmp4076;
                if (((panda$core$Bit) { o4075 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children4052, ((panda$core$Object*) o4075));
                goto $l4062;
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp4078 = org$pandalanguage$pandac$Compiler$compileWhen$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, value4045->type, rawWhen4069);
            w4077 = $tmp4078;
            if (((panda$core$Bit) { w4077 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$Object* $tmp4079 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(w4077->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp4080 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp4079));
            panda$core$Bit $tmp4081 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4080);
            if ($tmp4081.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp4082 = org$pandalanguage$pandac$Compiler$compileChainedIfMatch$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_m, value4045);
                return $tmp4082;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children4052, ((panda$core$Object*) w4077));
        }
        goto $l4062;
        $l4063:;
    }
    org$pandalanguage$pandac$IRNode* $tmp4083 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4083->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4083->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4083, ((panda$core$Int64) { 1042 }), p_m->position, ((panda$collections$ListView*) children4052));
    return $tmp4083;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$IRNode* result4098;
    switch (p_s->kind.value) {
        case 123:
        {
            org$pandalanguage$pandac$IRNode* $tmp4085 = org$pandalanguage$pandac$Compiler$compileAssert$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4085;
        }
        break;
        case 103:
        {
            org$pandalanguage$pandac$IRNode* $tmp4086 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            org$pandalanguage$pandac$IRNode* $tmp4087 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp4086);
            return $tmp4087;
        }
        break;
        case 126:
        {
            org$pandalanguage$pandac$IRNode* $tmp4088 = org$pandalanguage$pandac$Compiler$compileBlock$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4088;
        }
        break;
        case 118:
        {
            org$pandalanguage$pandac$IRNode* $tmp4089 = org$pandalanguage$pandac$Compiler$compileIf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4089;
        }
        break;
        case 119:
        {
            org$pandalanguage$pandac$IRNode* $tmp4090 = org$pandalanguage$pandac$Compiler$compileFor$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4090;
        }
        break;
        case 121:
        {
            org$pandalanguage$pandac$IRNode* $tmp4091 = org$pandalanguage$pandac$Compiler$compileWhile$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4091;
        }
        break;
        case 120:
        {
            org$pandalanguage$pandac$IRNode* $tmp4092 = org$pandalanguage$pandac$Compiler$compileDo$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4092;
        }
        break;
        case 122:
        {
            org$pandalanguage$pandac$IRNode* $tmp4093 = org$pandalanguage$pandac$Compiler$compileLoop$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4093;
        }
        break;
        case 125:
        {
            org$pandalanguage$pandac$IRNode* $tmp4094 = org$pandalanguage$pandac$Compiler$compileMatch$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4094;
        }
        break;
        case 134:
        {
            org$pandalanguage$pandac$IRNode* $tmp4095 = org$pandalanguage$pandac$Compiler$compileBreak$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4095;
        }
        break;
        case 135:
        {
            org$pandalanguage$pandac$IRNode* $tmp4096 = org$pandalanguage$pandac$Compiler$compileContinue$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4096;
        }
        break;
        case 136:
        {
            org$pandalanguage$pandac$IRNode* $tmp4097 = org$pandalanguage$pandac$Compiler$compileReturn$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4097;
        }
        break;
        case 107:
        {
            org$pandalanguage$pandac$IRNode* $tmp4099 = org$pandalanguage$pandac$Compiler$compileCall$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            org$pandalanguage$pandac$IRNode* $tmp4100 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp4099);
            result4098 = $tmp4100;
            if (((panda$core$Bit) { result4098 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp4101 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self, result4098);
                result4098 = $tmp4101;
            }
            }
            return result4098;
        }
        break;
        case 130:
        case 131:
        case 132:
        case 133:
        {
            org$pandalanguage$pandac$IRNode* $tmp4102 = org$pandalanguage$pandac$Compiler$compileVar$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4102;
        }
        break;
    }
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBody$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$SymbolTable* old4103;
    org$pandalanguage$pandac$SymbolTable* symbols4105;
    panda$collections$Iterator* p$Iter4108;
    org$pandalanguage$pandac$MethodDecl$Parameter* p4120;
    panda$collections$Array* fieldInitializers4127;
    panda$collections$Iterator* f$Iter4131;
    org$pandalanguage$pandac$FieldDecl* f4144;
    panda$collections$Array* children4154;
    org$pandalanguage$pandac$IRNode* fieldRef4161;
    org$pandalanguage$pandac$IRNode* compiled4166;
    panda$collections$Array* children4170;
    if (((panda$core$Bit) { p_m->compiledBody != NULL }).value) {
    {
        return p_m->compiledBody;
    }
    }
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_m->owner));
    old4103 = self->symbolTable;
    org$pandalanguage$pandac$SymbolTable* $tmp4104 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, p_m->owner);
    self->symbolTable = $tmp4104;
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentMethod, ((panda$core$Object*) p_m));
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
    PANDA_ASSERT(((panda$core$Bit) { p_m->body != NULL }).value);
    org$pandalanguage$pandac$SymbolTable* $tmp4106 = (org$pandalanguage$pandac$SymbolTable*) malloc(40);
    $tmp4106->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp4106->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp4106, self->symbolTable);
    symbols4105 = $tmp4106;
    {
        ITable* $tmp4109 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp4109->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4109 = $tmp4109->next;
        }
        $fn4111 $tmp4110 = $tmp4109->methods[0];
        panda$collections$Iterator* $tmp4112 = $tmp4110(((panda$collections$Iterable*) p_m->parameters));
        p$Iter4108 = $tmp4112;
        $l4113:;
        ITable* $tmp4115 = p$Iter4108->$class->itable;
        while ($tmp4115->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4115 = $tmp4115->next;
        }
        $fn4117 $tmp4116 = $tmp4115->methods[0];
        panda$core$Bit $tmp4118 = $tmp4116(p$Iter4108);
        panda$core$Bit $tmp4119 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4118);
        if (!$tmp4119.value) goto $l4114;
        {
            ITable* $tmp4121 = p$Iter4108->$class->itable;
            while ($tmp4121->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4121 = $tmp4121->next;
            }
            $fn4123 $tmp4122 = $tmp4121->methods[1];
            panda$core$Object* $tmp4124 = $tmp4122(p$Iter4108);
            p4120 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp4124);
            org$pandalanguage$pandac$Variable* $tmp4125 = (org$pandalanguage$pandac$Variable*) malloc(88);
            $tmp4125->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
            $tmp4125->refCount.value = 1;
            org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Int64($tmp4125, ((org$pandalanguage$pandac$Symbol*) p_m)->position, ((panda$core$Int64) { 10001 }), p4120->name, p4120->type, ((panda$core$Int64) { 1820 }));
            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(symbols4105, ((org$pandalanguage$pandac$Symbol*) $tmp4125));
        }
        goto $l4113;
        $l4114:;
    }
    self->symbolTable = symbols4105;
    panda$collections$Array* $tmp4128 = (panda$collections$Array*) malloc(40);
    $tmp4128->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4128->refCount.value = 1;
    panda$collections$Array$init($tmp4128);
    fieldInitializers4127 = $tmp4128;
    panda$core$Bit $tmp4130 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 59 }));
    if ($tmp4130.value) {
    {
        {
            panda$core$Object* $tmp4132 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
            ITable* $tmp4133 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ClassDecl*) $tmp4132)->fields)->$class->itable;
            while ($tmp4133->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp4133 = $tmp4133->next;
            }
            $fn4135 $tmp4134 = $tmp4133->methods[0];
            panda$collections$Iterator* $tmp4136 = $tmp4134(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ClassDecl*) $tmp4132)->fields));
            f$Iter4131 = $tmp4136;
            $l4137:;
            ITable* $tmp4139 = f$Iter4131->$class->itable;
            while ($tmp4139->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4139 = $tmp4139->next;
            }
            $fn4141 $tmp4140 = $tmp4139->methods[0];
            panda$core$Bit $tmp4142 = $tmp4140(f$Iter4131);
            panda$core$Bit $tmp4143 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4142);
            if (!$tmp4143.value) goto $l4138;
            {
                ITable* $tmp4145 = f$Iter4131->$class->itable;
                while ($tmp4145->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp4145 = $tmp4145->next;
                }
                $fn4147 $tmp4146 = $tmp4145->methods[1];
                panda$core$Object* $tmp4148 = $tmp4146(f$Iter4131);
                f4144 = ((org$pandalanguage$pandac$FieldDecl*) $tmp4148);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self, f4144);
                panda$core$Bit $tmp4150 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(f4144->annotations);
                panda$core$Bit $tmp4151 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4150);
                bool $tmp4149 = $tmp4151.value;
                if (!$tmp4149) goto $l4152;
                $tmp4149 = ((panda$core$Bit) { f4144->value != NULL }).value;
                $l4152:;
                panda$core$Bit $tmp4153 = { $tmp4149 };
                if ($tmp4153.value) {
                {
                    panda$collections$Array* $tmp4155 = (panda$collections$Array*) malloc(40);
                    $tmp4155->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp4155->refCount.value = 1;
                    panda$collections$Array$init($tmp4155);
                    children4154 = $tmp4155;
                    org$pandalanguage$pandac$IRNode* $tmp4157 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp4157->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp4157->refCount.value = 1;
                    panda$core$Object* $tmp4159 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
                    org$pandalanguage$pandac$Type* $tmp4160 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp4159));
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp4157, ((panda$core$Int64) { 1025 }), ((org$pandalanguage$pandac$Symbol*) p_m)->position, $tmp4160);
                    panda$collections$Array$add$panda$collections$Array$T(children4154, ((panda$core$Object*) $tmp4157));
                    org$pandalanguage$pandac$IRNode* $tmp4162 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp4162->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp4162->refCount.value = 1;
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4162, ((panda$core$Int64) { 1026 }), ((org$pandalanguage$pandac$Symbol*) p_m)->position, f4144->type, ((panda$core$Object*) f4144), ((panda$collections$ListView*) children4154));
                    fieldRef4161 = $tmp4162;
                    panda$collections$Array$clear(children4154);
                    panda$collections$Array$add$panda$collections$Array$T(children4154, ((panda$core$Object*) fieldRef4161));
                    panda$collections$Array$add$panda$collections$Array$T(children4154, ((panda$core$Object*) f4144->value));
                    org$pandalanguage$pandac$IRNode* $tmp4164 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp4164->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp4164->refCount.value = 1;
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4164, ((panda$core$Int64) { 1023 }), ((org$pandalanguage$pandac$Symbol*) f4144)->position, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 73 }))), ((panda$collections$ListView*) children4154));
                    panda$collections$Array$add$panda$collections$Array$T(fieldInitializers4127, ((panda$core$Object*) $tmp4164));
                }
                }
            }
            goto $l4137;
            $l4138:;
        }
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp4167 = org$pandalanguage$pandac$Compiler$compileBlock$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_m->body);
    compiled4166 = $tmp4167;
    if (((panda$core$Bit) { compiled4166 != NULL }).value) {
    {
        panda$core$Int64 $tmp4168 = panda$collections$Array$get_count$R$panda$core$Int64(fieldInitializers4127);
        panda$core$Bit $tmp4169 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp4168, ((panda$core$Int64) { 0 }));
        if ($tmp4169.value) {
        {
            panda$collections$Array* $tmp4171 = (panda$collections$Array*) malloc(40);
            $tmp4171->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp4171->refCount.value = 1;
            panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp4171, ((panda$collections$ListView*) fieldInitializers4127));
            children4170 = $tmp4171;
            panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(children4170, ((panda$collections$CollectionView*) compiled4166->children));
            org$pandalanguage$pandac$IRNode* $tmp4173 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp4173->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp4173->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4173, ((panda$core$Int64) { 1000 }), p_m->body->position, ((panda$collections$ListView*) children4170));
            compiled4166 = $tmp4173;
        }
        }
    }
    }
    PANDA_ASSERT(((panda$core$Bit) { ((panda$core$Object*) self->symbolTable) == ((panda$core$Object*) symbols4105) }).value);
    self->symbolTable = old4103;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentMethod);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    panda$core$Bit $tmp4175 = org$pandalanguage$pandac$Annotations$isInline$R$panda$core$Bit(p_m->annotations);
    if ($tmp4175.value) {
    {
        p_m->compiledBody = compiled4166;
    }
    }
    return compiled4166;
}
void org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$IRNode* compiled4176;
    if (((panda$core$Bit) { p_m->body != NULL }).value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp4177 = org$pandalanguage$pandac$Compiler$compileBody$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$IRNode$Q(self, p_m);
        compiled4176 = $tmp4177;
        if (((panda$core$Bit) { compiled4176 != NULL }).value) {
        {
            ITable* $tmp4178 = self->codeGenerator->$class->itable;
            while ($tmp4178->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
                $tmp4178 = $tmp4178->next;
            }
            $fn4180 $tmp4179 = $tmp4178->methods[3];
            $tmp4179(self->codeGenerator, p_m, compiled4176);
        }
        }
    }
    }
    else {
    {
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
        ITable* $tmp4181 = self->codeGenerator->$class->itable;
        while ($tmp4181->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
            $tmp4181 = $tmp4181->next;
        }
        $fn4183 $tmp4182 = $tmp4181->methods[2];
        $tmp4182(self->codeGenerator, p_m);
    }
    }
}
void org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Iterator* inner$Iter4184;
    org$pandalanguage$pandac$ClassDecl* inner4196;
    p_cl->external = ((panda$core$Bit) { false });
    {
        ITable* $tmp4185 = ((panda$collections$Iterable*) p_cl->classes)->$class->itable;
        while ($tmp4185->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4185 = $tmp4185->next;
        }
        $fn4187 $tmp4186 = $tmp4185->methods[0];
        panda$collections$Iterator* $tmp4188 = $tmp4186(((panda$collections$Iterable*) p_cl->classes));
        inner$Iter4184 = $tmp4188;
        $l4189:;
        ITable* $tmp4191 = inner$Iter4184->$class->itable;
        while ($tmp4191->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4191 = $tmp4191->next;
        }
        $fn4193 $tmp4192 = $tmp4191->methods[0];
        panda$core$Bit $tmp4194 = $tmp4192(inner$Iter4184);
        panda$core$Bit $tmp4195 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4194);
        if (!$tmp4195.value) goto $l4190;
        {
            ITable* $tmp4197 = inner$Iter4184->$class->itable;
            while ($tmp4197->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4197 = $tmp4197->next;
            }
            $fn4199 $tmp4198 = $tmp4197->methods[1];
            panda$core$Object* $tmp4200 = $tmp4198(inner$Iter4184);
            inner4196 = ((org$pandalanguage$pandac$ClassDecl*) $tmp4200);
            org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl(self, inner4196);
        }
        goto $l4189;
        $l4190:;
    }
}
void org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$SymbolTable* old4208;
    panda$collections$Iterator* m$Iter4213;
    org$pandalanguage$pandac$MethodDecl* m4225;
    org$pandalanguage$pandac$ClassDecl* next4235;
    PANDA_ASSERT(((panda$core$Bit) { self->compiling == NULL }).value);
    self->compiling = p_cl;
    org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl(self, p_cl);
    panda$core$Bit $tmp4201 = org$pandalanguage$pandac$Annotations$isSpecialize$R$panda$core$Bit(p_cl->annotations);
    if ($tmp4201.value) {
    {
        ITable* $tmp4202 = self->codeGenerator->$class->itable;
        while ($tmp4202->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
            $tmp4202 = $tmp4202->next;
        }
        $fn4204 $tmp4203 = $tmp4202->methods[1];
        $tmp4203(self->codeGenerator, p_cl);
        ITable* $tmp4205 = self->codeGenerator->$class->itable;
        while ($tmp4205->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
            $tmp4205 = $tmp4205->next;
        }
        $fn4207 $tmp4206 = $tmp4205->methods[4];
        $tmp4206(self->codeGenerator, p_cl);
        return;
    }
    }
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_cl));
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentFile, ((panda$core$Object*) p_cl->source));
    old4208 = self->symbolTable;
    org$pandalanguage$pandac$SymbolTable* $tmp4209 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, p_cl);
    self->symbolTable = $tmp4209;
    ITable* $tmp4210 = self->codeGenerator->$class->itable;
    while ($tmp4210->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
        $tmp4210 = $tmp4210->next;
    }
    $fn4212 $tmp4211 = $tmp4210->methods[1];
    $tmp4211(self->codeGenerator, p_cl);
    {
        ITable* $tmp4214 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
        while ($tmp4214->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4214 = $tmp4214->next;
        }
        $fn4216 $tmp4215 = $tmp4214->methods[0];
        panda$collections$Iterator* $tmp4217 = $tmp4215(((panda$collections$Iterable*) p_cl->methods));
        m$Iter4213 = $tmp4217;
        $l4218:;
        ITable* $tmp4220 = m$Iter4213->$class->itable;
        while ($tmp4220->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4220 = $tmp4220->next;
        }
        $fn4222 $tmp4221 = $tmp4220->methods[0];
        panda$core$Bit $tmp4223 = $tmp4221(m$Iter4213);
        panda$core$Bit $tmp4224 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4223);
        if (!$tmp4224.value) goto $l4219;
        {
            ITable* $tmp4226 = m$Iter4213->$class->itable;
            while ($tmp4226->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4226 = $tmp4226->next;
            }
            $fn4228 $tmp4227 = $tmp4226->methods[1];
            panda$core$Object* $tmp4229 = $tmp4227(m$Iter4213);
            m4225 = ((org$pandalanguage$pandac$MethodDecl*) $tmp4229);
            org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$MethodDecl(self, m4225);
        }
        goto $l4218;
        $l4219:;
    }
    ITable* $tmp4230 = self->codeGenerator->$class->itable;
    while ($tmp4230->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
        $tmp4230 = $tmp4230->next;
    }
    $fn4232 $tmp4231 = $tmp4230->methods[4];
    $tmp4231(self->codeGenerator, p_cl);
    self->symbolTable = old4208;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentFile);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    self->compiling = NULL;
    panda$core$Int64 $tmp4233 = panda$collections$Array$get_count$R$panda$core$Int64(self->compilationQueue);
    panda$core$Bit $tmp4234 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp4233, ((panda$core$Int64) { 0 }));
    if ($tmp4234.value) {
    {
        panda$core$Object* $tmp4236 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->compilationQueue, ((panda$core$Int64) { 0 }));
        next4235 = ((org$pandalanguage$pandac$ClassDecl*) $tmp4236);
        panda$collections$Array$removeIndex$panda$core$Int64(self->compilationQueue, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$ClassDecl(self, next4235);
    }
    }
    panda$core$Int64 $tmp4237 = panda$collections$Array$get_count$R$panda$core$Int64(self->compilationQueue);
    panda$core$Bit $tmp4238 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4237, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp4238.value);
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Compiler* self, panda$io$File* p_file) {
    panda$collections$ListView* result4239;
    org$pandalanguage$pandac$ASTNode* parsed4243;
    panda$collections$Iterator* cl$Iter4247;
    org$pandalanguage$pandac$ClassDecl* cl4259;
    panda$core$Object* $tmp4240 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->scans, ((panda$collections$Key*) p_file));
    result4239 = ((panda$collections$ListView*) $tmp4240);
    if (((panda$core$Bit) { result4239 == NULL }).value) {
    {
        panda$collections$Stack$push$panda$collections$Stack$T(self->currentFile, ((panda$core$Object*) p_file));
        panda$core$String* $tmp4241 = panda$io$File$readFully$R$panda$core$String(p_file);
        (($fn4242) self->parser->$class->vtable[2])(self->parser, p_file, $tmp4241);
        org$pandalanguage$pandac$ASTNode* $tmp4245 = (($fn4244) self->parser->$class->vtable[68])(self->parser);
        parsed4243 = $tmp4245;
        if (((panda$core$Bit) { parsed4243 != NULL }).value) {
        {
            panda$collections$ListView* $tmp4246 = org$pandalanguage$pandac$Scanner$scan$panda$io$File$org$pandalanguage$pandac$ASTNode$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(self->scanner, p_file, parsed4243);
            result4239 = $tmp4246;
            {
                ITable* $tmp4248 = ((panda$collections$Iterable*) result4239)->$class->itable;
                while ($tmp4248->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp4248 = $tmp4248->next;
                }
                $fn4250 $tmp4249 = $tmp4248->methods[0];
                panda$collections$Iterator* $tmp4251 = $tmp4249(((panda$collections$Iterable*) result4239));
                cl$Iter4247 = $tmp4251;
                $l4252:;
                ITable* $tmp4254 = cl$Iter4247->$class->itable;
                while ($tmp4254->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp4254 = $tmp4254->next;
                }
                $fn4256 $tmp4255 = $tmp4254->methods[0];
                panda$core$Bit $tmp4257 = $tmp4255(cl$Iter4247);
                panda$core$Bit $tmp4258 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4257);
                if (!$tmp4258.value) goto $l4253;
                {
                    ITable* $tmp4260 = cl$Iter4247->$class->itable;
                    while ($tmp4260->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp4260 = $tmp4260->next;
                    }
                    $fn4262 $tmp4261 = $tmp4260->methods[1];
                    panda$core$Object* $tmp4263 = $tmp4261(cl$Iter4247);
                    cl4259 = ((org$pandalanguage$pandac$ClassDecl*) $tmp4263);
                    panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classes, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) cl4259)->name), ((panda$core$Object*) cl4259));
                }
                goto $l4252;
                $l4253:;
            }
        }
        }
        else {
        {
            panda$collections$Array* $tmp4264 = (panda$collections$Array*) malloc(40);
            $tmp4264->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp4264->refCount.value = 1;
            panda$collections$Array$init($tmp4264);
            result4239 = ((panda$collections$ListView*) $tmp4264);
        }
        }
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->scans, ((panda$collections$Key*) p_file), ((panda$core$Object*) result4239));
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentFile);
    }
    }
    return result4239;
}
void org$pandalanguage$pandac$Compiler$compile$panda$io$File(org$pandalanguage$pandac$Compiler* self, panda$io$File* p_file) {
    panda$collections$ListView* classes4266;
    panda$collections$Iterator* cl$Iter4268;
    org$pandalanguage$pandac$ClassDecl* cl4280;
    panda$collections$ListView* $tmp4267 = org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(self, p_file);
    classes4266 = $tmp4267;
    {
        ITable* $tmp4269 = ((panda$collections$Iterable*) classes4266)->$class->itable;
        while ($tmp4269->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4269 = $tmp4269->next;
        }
        $fn4271 $tmp4270 = $tmp4269->methods[0];
        panda$collections$Iterator* $tmp4272 = $tmp4270(((panda$collections$Iterable*) classes4266));
        cl$Iter4268 = $tmp4272;
        $l4273:;
        ITable* $tmp4275 = cl$Iter4268->$class->itable;
        while ($tmp4275->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4275 = $tmp4275->next;
        }
        $fn4277 $tmp4276 = $tmp4275->methods[0];
        panda$core$Bit $tmp4278 = $tmp4276(cl$Iter4268);
        panda$core$Bit $tmp4279 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4278);
        if (!$tmp4279.value) goto $l4274;
        {
            ITable* $tmp4281 = cl$Iter4268->$class->itable;
            while ($tmp4281->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4281 = $tmp4281->next;
            }
            $fn4283 $tmp4282 = $tmp4281->methods[1];
            panda$core$Object* $tmp4284 = $tmp4282(cl$Iter4268);
            cl4280 = ((org$pandalanguage$pandac$ClassDecl*) $tmp4284);
            org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$ClassDecl(self, cl4280);
        }
        goto $l4273;
        $l4274:;
    }
}
void org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, panda$core$String* p_msg) {
    panda$core$Object* $tmp4285 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentFile);
    org$pandalanguage$pandac$Compiler$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String(self, ((panda$io$File*) $tmp4285), p_position, p_msg);
}
void org$pandalanguage$pandac$Compiler$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$Compiler* self, panda$io$File* p_file, org$pandalanguage$pandac$Position p_pos, panda$core$String* p_msg) {
    if (self->reportErrors.value) {
    {
        panda$core$Int64 $tmp4286 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->errorCount, ((panda$core$Int64) { 1 }));
        self->errorCount = $tmp4286;
        panda$core$String* $tmp4288 = panda$io$File$name$R$panda$core$String(p_file);
        panda$core$String* $tmp4289 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4287, $tmp4288);
        panda$core$String* $tmp4291 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4289, &$s4290);
        panda$core$String* $tmp4292 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp4291, ((panda$core$Object*) wrap_org$pandalanguage$pandac$Position(p_pos)));
        panda$core$String* $tmp4294 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4292, &$s4293);
        panda$core$String* $tmp4295 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4294, p_msg);
        panda$core$String* $tmp4297 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4295, &$s4296);
        panda$io$Console$printLine$panda$core$Object(((panda$core$Object*) $tmp4297));
    }
    }
}
void org$pandalanguage$pandac$Compiler$finish(org$pandalanguage$pandac$Compiler* self) {
    ITable* $tmp4298 = self->codeGenerator->$class->itable;
    while ($tmp4298->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
        $tmp4298 = $tmp4298->next;
    }
    $fn4300 $tmp4299 = $tmp4298->methods[5];
    $tmp4299(self->codeGenerator);
}

