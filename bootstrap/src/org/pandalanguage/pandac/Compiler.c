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
#include "panda/core/SimpleRange.LTpanda/core/String/Index.Q.GT.h"
#include "panda/core/String/Index.h"
#include "panda/collections/MapView.h"
#include "panda/collections/CollectionView.h"
#include "panda/collections/List.h"
#include "panda/collections/ListView.h"
#include "panda/core/SimpleRange.LTpanda/core/Int64.GT.h"
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
#include "panda/io/Console.h"
#include "panda/collections/ImmutableArray.h"
#include "panda/io/File.h"
#include "panda/collections/Set.h"
#include "org/pandalanguage/pandac/MethodRef.h"
#include "org/pandalanguage/pandac/Methods.h"
#include "org/pandalanguage/pandac/Variable.h"
#include "panda/core/SimpleRange.LTpanda/core/Int64.Q.GT.h"
#include "org/pandalanguage/pandac/Compiler/CompileTargetResult.h"
#include "panda/core/SteppedRange.LTpanda/core/Int64.Cpanda/core/Int64.GT.h"


struct { panda$core$Class* cl; ITable* next; void* methods[1]; } org$pandalanguage$pandac$Compiler$_org$pandalanguage$pandac$ErrorReporter = { (panda$core$Class*) &org$pandalanguage$pandac$ErrorReporter$class, NULL, { org$pandalanguage$pandac$Compiler$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String} };

org$pandalanguage$pandac$Compiler$class_type org$pandalanguage$pandac$Compiler$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &org$pandalanguage$pandac$Compiler$_org$pandalanguage$pandac$ErrorReporter, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, org$pandalanguage$pandac$Compiler$addAlias$panda$core$String, org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q, org$pandalanguage$pandac$Compiler$checkGenericParameters$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$Type$Q, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT, org$pandalanguage$pandac$Compiler$getClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q, org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Position$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q, org$pandalanguage$pandac$Compiler$specialize$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q, org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT, org$pandalanguage$pandac$Compiler$signatureMatch$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q, org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q, org$pandalanguage$pandac$Compiler$interfaceMethods$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT, org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable, org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT, org$pandalanguage$pandac$Compiler$addInheritedMethods$org$pandalanguage$pandac$SymbolTable$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT, org$pandalanguage$pandac$Compiler$getMethodReference$org$pandalanguage$pandac$SymbolTable$org$pandalanguage$pandac$IRNode$Q$panda$core$String$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$Compiler$symbolRef$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q, org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64, org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64, org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q, org$pandalanguage$pandac$Compiler$doCoerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$Compiler$callCost$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q, org$pandalanguage$pandac$Compiler$matchMethods$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q, org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$declaredTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$foldInts$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$Compiler$compileIndexedAssignment$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT, org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$IRNode$Q$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT, org$pandalanguage$pandac$Compiler$compilePrefix$panda$core$Int64$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compilePrefix$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileCall$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileIdentifier$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileRange$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileSelf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileSuper$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileNull$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileBlock$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileIf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileRangeFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileIteratorFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileFor$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileWhile$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileDo$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileLoop$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q, org$pandalanguage$pandac$Compiler$compileDeclaration$org$pandalanguage$pandac$ASTNode$panda$core$Int64$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileBreak$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileContinue$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileReturn$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileAssert$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileVar$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileWhenTest$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileChainedIfWhen$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileChainedIfMatch$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileWhen$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileOtherwise$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64, org$pandalanguage$pandac$Compiler$compileMatch$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileBody$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT, org$pandalanguage$pandac$Compiler$compile$panda$io$File, org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String, org$pandalanguage$pandac$Compiler$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String, org$pandalanguage$pandac$Compiler$finish} };

typedef void (*$fn21)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$Compiler*);
typedef panda$core$Object* (*$fn123)(panda$collections$MapView*, panda$core$Object*);
typedef panda$core$Int64 (*$fn160)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn167)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn209)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn213)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn223)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn231)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn238)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn350)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn356)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn362)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn369)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn375)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn381)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn435)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn441)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn447)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn458)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn464)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn470)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn476)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn482)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn488)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn496)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn502)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn508)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn587)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn593)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn599)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn615)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn621)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn627)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn653)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn659)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn665)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn717)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn723)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn729)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn738)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn759)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn782)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn788)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn794)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn802)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn808)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn814)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn825)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn831)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn837)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn860)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn866)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn872)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn920)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn926)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn932)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn945)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn951)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn957)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn972)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn978)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn984)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn999)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1005)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1011)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1025)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1031)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1037)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1050)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1056)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1062)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1116)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1122)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1128)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1135)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1141)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1147)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1167)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1173)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1179)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1263)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn1376)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1382)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1388)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1414)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1420)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1426)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1566)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1572)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1578)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1746)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1752)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1758)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1805)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1811)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1817)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn1907)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn1933)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Int64 (*$fn1960)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn1977)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1983)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1989)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn2001)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn2024)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn2098)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2120)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn2196)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn2215)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2221)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2227)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2258)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2264)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2270)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2307)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2313)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2319)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2342)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2348)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2354)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2744)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2750)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2756)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2888)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2894)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2900)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn3122)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn3138)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3144)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3150)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3246)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3252)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3258)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3464)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3470)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3476)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3606)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3612)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3618)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3644)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3650)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3656)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3760)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3766)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3772)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3940)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3946)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3952)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4030)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4036)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4042)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4102)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4108)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4114)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4178)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4184)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4190)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4229)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4235)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4241)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4253)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4259)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4265)(panda$collections$Iterator*);
typedef void (*$fn4298)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$MethodDecl*, org$pandalanguage$pandac$IRNode*);
typedef void (*$fn4301)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$collections$Iterator* (*$fn4305)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4311)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4317)(panda$collections$Iterator*);
typedef void (*$fn4322)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn4325)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn4330)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$collections$Iterator* (*$fn4334)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4340)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4346)(panda$collections$Iterator*);
typedef void (*$fn4350)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn4360)(org$pandalanguage$pandac$parser$Parser*, panda$io$File*, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn4362)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$collections$Iterator* (*$fn4368)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4374)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4380)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4389)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4395)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4401)(panda$collections$Iterator*);
typedef void (*$fn4418)(org$pandalanguage$pandac$CodeGenerator*);

static panda$core$String $s24 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x69\x6C\x74\x69\x6E\x5F\x62\x69\x74", 11, 1 };
static panda$core$String $s27 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x69\x6C\x74\x69\x6E\x5F\x69\x6E\x74\x38", 12, 1 };
static panda$core$String $s30 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x69\x6C\x74\x69\x6E\x5F\x69\x6E\x74\x31\x36", 13, 1 };
static panda$core$String $s33 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x69\x6C\x74\x69\x6E\x5F\x69\x6E\x74\x33\x32", 13, 1 };
static panda$core$String $s36 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x69\x6C\x74\x69\x6E\x5F\x69\x6E\x74\x36\x34", 13, 1 };
static panda$core$String $s39 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x69\x6C\x74\x69\x6E\x5F\x75\x69\x6E\x74\x38", 13, 1 };
static panda$core$String $s42 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x69\x6C\x74\x69\x6E\x5F\x75\x69\x6E\x74\x31\x36", 14, 1 };
static panda$core$String $s45 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x69\x6C\x74\x69\x6E\x5F\x75\x69\x6E\x74\x33\x32", 14, 1 };
static panda$core$String $s48 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x69\x6C\x74\x69\x6E\x5F\x75\x69\x6E\x74\x36\x34", 14, 1 };
static panda$core$String $s51 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x49\x6E\x74", 3, 1 };
static panda$core$String $s52 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74\x36\x34", 16, 1 };
static panda$core$String $s54 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x41\x72\x72\x61\x79", 23, 1 };
static panda$core$String $s55 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x43\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E", 28, 1 };
static panda$core$String $s56 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x43\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x56\x69\x65\x77", 32, 1 };
static panda$core$String $s57 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x43\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x57\x72\x69\x74\x65\x72", 34, 1 };
static panda$core$String $s58 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x49\x64\x65\x6E\x74\x69\x74\x79\x4D\x61\x70", 29, 1 };
static panda$core$String $s59 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x49\x6D\x6D\x75\x74\x61\x62\x6C\x65\x41\x72\x72\x61\x79", 32, 1 };
static panda$core$String $s60 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x49\x74\x65\x72\x61\x62\x6C\x65", 26, 1 };
static panda$core$String $s61 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x49\x74\x65\x72\x61\x74\x6F\x72", 26, 1 };
static panda$core$String $s62 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x4B\x65\x79", 21, 1 };
static panda$core$String $s63 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x4C\x69\x73\x74", 22, 1 };
static panda$core$String $s64 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x4C\x69\x73\x74\x56\x69\x65\x77", 26, 1 };
static panda$core$String $s65 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x4C\x69\x73\x74\x57\x72\x69\x74\x65\x72", 28, 1 };
static panda$core$String $s66 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x48\x61\x73\x68\x4D\x61\x70", 25, 1 };
static panda$core$String $s67 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x4D\x61\x70", 21, 1 };
static panda$core$String $s68 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x4D\x61\x70\x56\x69\x65\x77", 25, 1 };
static panda$core$String $s69 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x4D\x61\x70\x57\x72\x69\x74\x65\x72", 27, 1 };
static panda$core$String $s70 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x53\x65\x74", 21, 1 };
static panda$core$String $s71 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x53\x74\x61\x63\x6B", 23, 1 };
static panda$core$String $s72 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x43\x6C\x61\x73\x73", 16, 1 };
static panda$core$String $s73 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x42\x69\x74", 14, 1 };
static panda$core$String $s74 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x43\x68\x61\x72\x38", 16, 1 };
static panda$core$String $s75 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x43\x68\x61\x72\x31\x36", 17, 1 };
static panda$core$String $s76 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x43\x68\x61\x72\x33\x32", 17, 1 };
static panda$core$String $s77 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x43\x6F\x6D\x70\x61\x72\x61\x62\x6C\x65", 21, 1 };
static panda$core$String $s78 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x45\x71\x75\x61\x74\x61\x62\x6C\x65", 20, 1 };
static panda$core$String $s79 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74\x38", 15, 1 };
static panda$core$String $s80 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74\x31\x36", 16, 1 };
static panda$core$String $s81 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74\x33\x32", 16, 1 };
static panda$core$String $s82 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74\x36\x34", 16, 1 };
static panda$core$String $s83 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6D\x6D\x75\x74\x61\x62\x6C\x65", 20, 1 };
static panda$core$String $s84 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x4D\x75\x74\x61\x62\x6C\x65\x53\x74\x72\x69\x6E\x67", 24, 1 };
static panda$core$String $s85 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x4F\x62\x6A\x65\x63\x74", 17, 1 };
static panda$core$String $s86 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x50\x61\x6E\x64\x61", 16, 1 };
static panda$core$String $s87 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x52\x61\x6E\x67\x65", 16, 1 };
static panda$core$String $s88 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x53\x69\x6D\x70\x6C\x65\x52\x61\x6E\x67\x65", 22, 1 };
static panda$core$String $s89 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6E\x67\x65", 23, 1 };
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
static panda$core$String $s217 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x65\x6E\x65\x72\x69\x63\x20\x70\x61\x72\x61\x6D\x65\x74\x65\x72\x20\x27", 19, 1 };
static panda$core$String $s219 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s226 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20", 10, 1 };
static panda$core$String $s228 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6F\x66\x20\x74\x79\x70\x65\x20\x27", 9, 1 };
static panda$core$String $s234 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 14, 1 };
static panda$core$String $s241 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s270 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x6B\x6E\x6F\x77\x6E\x20\x74\x79\x70\x65\x20\x27", 14, 1 };
static panda$core$String $s272 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s285 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3F", 1, 1 };
static panda$core$String $s299 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 1 };
static panda$core$String $s301 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s324 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s336 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };
static panda$core$String $s389 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x74\x65\x72\x66\x61\x63\x65\x20\x27", 11, 1 };
static panda$core$String $s391 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x65\x78\x74\x65\x6E\x64\x20\x63\x6C\x61\x73\x73\x20", 22, 1 };
static panda$core$String $s393 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s395 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s400 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x75\x70\x65\x72\x63\x6C\x61\x73\x73\x20\x27", 12, 1 };
static panda$core$String $s402 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x6F\x66\x20\x63\x6C\x61\x73\x73\x20\x27", 12, 1 };
static panda$core$String $s405 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20", 10, 1 };
static panda$core$String $s407 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x69\x73\x74\x65\x64\x20\x62\x65\x66\x6F\x72\x65\x20\x61\x6E\x79\x20\x73\x75\x70\x65\x72\x69\x6E\x74\x65\x72\x66\x61\x63\x65\x73", 33, 1 };
static panda$core$String $s409 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6C\x61\x73\x73\x20\x27", 7, 1 };
static panda$core$String $s411 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x68\x61\x73\x20\x6D\x6F\x72\x65\x20\x74\x68\x61\x6E\x20\x6F\x6E\x65\x20\x73\x75\x70\x65\x72\x63\x6C\x61\x73\x73", 30, 1 };
static panda$core$String $s416 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x4F\x62\x6A\x65\x63\x74", 17, 1 };
static panda$core$String $s427 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x56\x61\x6C\x75\x65", 16, 1 };
static panda$core$String $s516 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s519 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x6F\x76\x65\x72\x72\x69\x64\x65\x73\x20", 11, 1 };
static panda$core$String $s523 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x62\x75\x74\x20", 6, 1 };
static panda$core$String $s525 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x73\x20\x6E\x6F\x74\x20\x6D\x61\x72\x6B\x65\x64\x20\x40\x6F\x76\x65\x72\x72\x69\x64\x65", 23, 1 };
static panda$core$String $s532 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s535 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x6F\x76\x65\x72\x72\x69\x64\x65\x73\x20", 11, 1 };
static panda$core$String $s539 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x62\x75\x74\x20", 6, 1 };
static panda$core$String $s541 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6D\x65\x74\x68\x6F\x64\x73\x20\x63\x61\x6E\x6E\x6F\x74\x20\x6F\x76\x65\x72\x72\x69\x64\x65\x20\x66\x75\x6E\x63\x74\x69\x6F\x6E\x73", 33, 1 };
static panda$core$String $s544 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s547 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x69\x73\x20\x6D\x61\x72\x6B\x65\x64\x20\x40\x6F\x76\x65\x72\x72\x69\x64\x65\x2C\x20\x62\x75\x74\x20\x6E\x6F\x20\x6D\x61\x74\x63\x68\x69\x6E\x67\x20\x6D\x65\x74\x68\x6F\x64\x20", 45, 1 };
static panda$core$String $s549 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x69\x73\x74\x73\x20\x61\x6D\x6F\x6E\x67\x20\x69\x74\x73\x20\x61\x6E\x63\x65\x73\x74\x6F\x72\x73", 26, 1 };
static panda$core$String $s558 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x69\x65\x6C\x64\x20\x68\x61\x73\x20\x6E\x65\x69\x74\x68\x65\x72\x20\x61\x20\x74\x79\x70\x65\x20\x6E\x6F\x72\x20\x61\x20\x76\x61\x6C\x75\x65", 36, 1 };
static panda$core$String $s562 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x6B\x6E\x6F\x77\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 18, 1 };
static panda$core$String $s563 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6D\x62\x69\x67\x75\x6F\x75\x73\x20\x6D\x65\x74\x68\x6F\x64\x20\x63\x61\x6C\x6C", 21, 1 };
static panda$core$String $s565 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x73\x75\x70\x65\x72\x27\x20\x63\x61\x6E\x20\x6F\x6E\x6C\x79\x20\x62\x65\x20\x75\x73\x65\x64\x20\x61\x73\x20\x70\x61\x72\x74\x20\x6F\x66\x20\x61\x20\x6D\x65\x74\x68\x6F\x64\x20\x63\x61\x6C\x6C", 49, 1 };
static panda$core$String $s606 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s607 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, 1 };
static panda$core$String $s609 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x70\x61\x6E\x64\x61", 6, 1 };
static panda$core$String $s634 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s644 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s645 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, 1 };
static panda$core$String $s647 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x70\x61\x6E\x64\x61", 6, 1 };
static panda$core$String $s677 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x66\x69\x6C\x65\x20\x27", 15, 1 };
static panda$core$String $s679 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x74\x6F\x20\x63\x6F\x6E\x74\x61\x69\x6E\x20\x61\x20\x63\x6C\x61\x73\x73\x20\x6E\x61\x6D\x65\x64\x20\x27", 28, 1 };
static panda$core$String $s682 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s685 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x6F\x20\x66\x69\x6C\x65\x20\x6E\x61\x6D\x65\x64\x20", 14, 1 };
static panda$core$String $s687 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x69\x6E\x20\x61\x6E\x79\x20\x69\x6D\x70\x6F\x72\x74\x20\x70\x61\x74\x68\x20\x28", 21, 1 };
static panda$core$String $s690 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s692 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x69\x6E\x74\x5F\x6C\x69\x74\x65\x72\x61\x6C", 12, 1 };
static panda$core$String $s1209 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x73\x75\x70\x65\x72\x27\x20\x63\x61\x6E\x20\x6F\x6E\x6C\x79\x20\x62\x65\x20\x75\x73\x65\x64\x20\x61\x73\x20\x70\x61\x72\x74\x20\x6F\x66\x20\x61\x20\x6D\x65\x74\x68\x6F\x64\x20\x63\x61\x6C\x6C", 49, 1 };
static panda$core$String $s1258 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s1345 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 1 };
static panda$core$String $s1671 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27", 10, 1 };
static panda$core$String $s1673 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 14, 1 };
static panda$core$String $s1676 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s1701 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27", 10, 1 };
static panda$core$String $s1703 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 14, 1 };
static panda$core$String $s1706 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s1780 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 1 };
static panda$core$String $s1839 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27", 10, 1 };
static panda$core$String $s1841 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 14, 1 };
static panda$core$String $s1844 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s1884 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6C\x75\x65\x20\x6F\x66\x20\x74\x79\x70\x65\x20\x27", 15, 1 };
static panda$core$String $s1886 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x70\x6F\x73\x73\x69\x62\x6C\x79\x20\x62\x65\x20\x61\x6E\x20\x69\x6E\x73\x74\x61\x6E\x63\x65\x20\x6F\x66\x20", 36, 1 };
static panda$core$String $s1888 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s1890 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2007 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2008 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, 1 };
static panda$core$String $s2009 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2012 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x65\x78\x70\x65\x63\x74\x65\x64\x20", 10, 1 };
static panda$core$String $s2016 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x61\x72\x67\x75\x6D\x65\x6E\x74", 9, 1 };
static panda$core$String $s2019 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2021 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x74\x20\x72\x65\x63\x65\x69\x76\x65\x64\x20", 13, 1 };
static panda$core$String $s2027 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2051 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x64\x69\x72\x65\x63\x74\x6C\x79\x20\x63\x61\x6C\x6C\x20\x27\x69\x6E\x69\x74\x27\x20\x6F\x75\x74\x73\x69\x64\x65\x20\x6F\x66\x20\x61\x6E\x20\x69\x6E\x69\x74\x20\x6D\x65\x74\x68\x6F\x64", 53, 1 };
static panda$core$String $s2061 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x69\x6E\x69\x74\x27\x20\x6D\x61\x79\x20\x6F\x6E\x6C\x79\x20\x62\x65\x20\x63\x61\x6C\x6C\x65\x64\x20\x6F\x6E\x20\x27\x73\x65\x6C\x66\x27\x20\x6F\x72\x20\x27\x73\x75\x70\x65\x72\x27", 46, 1 };
static panda$core$String $s2076 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x63\x61\x6C\x6C\x20\x69\x6E\x73\x74\x61\x6E\x63\x65\x20", 21, 1 };
static panda$core$String $s2079 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x66\x72\x6F\x6D\x20\x61\x20\x40\x63\x6C\x61\x73\x73\x20\x63\x6F\x6E\x74\x65\x78\x74", 22, 1 };
static panda$core$String $s2090 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x63\x61\x6C\x6C\x20\x63\x6C\x61\x73\x73\x20", 18, 1 };
static panda$core$String $s2093 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x6F\x6E\x20\x61\x6E\x20\x69\x6E\x73\x74\x61\x6E\x63\x65", 15, 1 };
static panda$core$String $s2138 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, 1 };
static panda$core$String $s2157 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6C\x61\x73\x73\x20\x27", 7, 1 };
static panda$core$String $s2159 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x64\x6F\x65\x73\x20\x6E\x6F\x74\x20\x68\x61\x76\x65\x20\x61\x20\x6D\x65\x6D\x62\x65\x72\x20\x6E\x61\x6D\x65\x64\x20\x27", 32, 1 };
static panda$core$String $s2162 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2169 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2171 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s2174 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x69\x73\x20\x6E\x6F\x74\x20\x61\x20\x6D\x65\x74\x68\x6F\x64", 17, 1 };
static panda$core$String $s2201 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x6F\x20\x6D\x61\x74\x63\x68\x20\x66\x6F\x72\x20\x63\x61\x6C\x6C\x20\x74\x6F\x20\x27", 22, 1 };
static panda$core$String $s2203 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s2205 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2207 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s2211 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2229 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2230 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x27", 2, 1 };
static panda$core$String $s2231 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x77\x69\x74\x68\x20\x72\x65\x74\x75\x72\x6E\x20\x74\x79\x70\x65\x20\x27", 19, 1 };
static panda$core$String $s2233 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2281 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x69\x74", 4, 1 };
static panda$core$String $s2291 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6C\x75\x65\x20\x6F\x66\x20\x74\x79\x70\x65\x20\x27", 15, 1 };
static panda$core$String $s2293 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x69\x73\x20\x6E\x6F\x74\x20\x61\x20\x6D\x65\x74\x68\x6F\x64", 17, 1 };
static panda$core$String $s2301 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s2303 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2321 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2324 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x3E\x28", 4, 1 };
static panda$core$String $s2325 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x26\x3E\x28", 5, 1 };
static panda$core$String $s2328 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s2338 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s2356 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2359 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x3E\x28", 4, 1 };
static panda$core$String $s2360 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x26\x3E\x28", 5, 1 };
static panda$core$String $s2363 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s2377 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2B", 1, 1 };
static panda$core$String $s2378 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D", 1, 1 };
static panda$core$String $s2379 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s2380 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, 1 };
static panda$core$String $s2381 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F\x2F", 2, 1 };
static panda$core$String $s2382 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 1 };
static panda$core$String $s2383 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5E", 1, 1 };
static panda$core$String $s2384 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3D", 1, 1 };
static panda$core$String $s2385 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x3D", 2, 1 };
static panda$core$String $s2386 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };
static panda$core$String $s2387 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 1 };
static panda$core$String $s2388 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E\x3D", 2, 1 };
static panda$core$String $s2389 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x3D", 2, 1 };
static panda$core$String $s2390 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1, 1 };
static panda$core$String $s2391 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C\x7C", 2, 1 };
static panda$core$String $s2392 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, 1 };
static panda$core$String $s2393 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26\x26", 2, 1 };
static panda$core$String $s2394 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7E", 1, 1 };
static panda$core$String $s2395 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7E\x7E", 2, 1 };
static panda$core$String $s2396 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21", 1, 1 };
static panda$core$String $s2397 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x21", 2, 1 };
static panda$core$String $s2398 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x3C", 2, 1 };
static panda$core$String $s2399 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E\x3E", 2, 1 };
static panda$core$String $s2400 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 1 };
static panda$core$String $s2401 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A\x3D", 2, 1 };
static panda$core$String $s2402 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3D\x3D", 2, 1 };
static panda$core$String $s2403 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x3D\x3D", 3, 1 };
static panda$core$String $s2514 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x76\x61\x6C\x69\x64\x20\x6E\x75\x6D\x65\x72\x69\x63\x20\x6F\x70\x65\x72\x61\x74\x69\x6F\x6E", 25, 1 };
static panda$core$String $s2526 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D\x3A\x3D", 4, 1 };
static panda$core$String $s2574 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6F\x6E\x76\x65\x72\x74", 7, 1 };
static panda$core$String $s2578 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D\x3A\x3D", 4, 1 };
static panda$core$String $s2638 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2641 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x6F\x70\x65\x72\x61\x74\x65\x20\x6F\x6E\x20\x27", 21, 1 };
static panda$core$String $s2644 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20", 3, 1 };
static panda$core$String $s2646 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2648 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2655 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2658 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x6F\x70\x65\x72\x61\x74\x65\x20\x6F\x6E\x20\x27", 21, 1 };
static panda$core$String $s2661 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20", 3, 1 };
static panda$core$String $s2663 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2665 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2687 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x61\x73\x73\x69\x67\x6E\x20\x74\x6F\x20\x74\x68\x69\x73\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6F\x6E", 32, 1 };
static panda$core$String $s2699 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x61\x73\x73\x69\x67\x6E\x20\x74\x6F\x20\x74\x68\x69\x73\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6F\x6E", 32, 1 };
static panda$core$String $s2716 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6F\x6E\x76\x65\x72\x74", 7, 1 };
static panda$core$String $s2729 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 1 };
static panda$core$String $s2798 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2801 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x6F\x70\x65\x72\x61\x74\x65\x20\x6F\x6E\x20\x27", 21, 1 };
static panda$core$String $s2804 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20\x27", 4, 1 };
static panda$core$String $s2807 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2921 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x6D\x65\x74\x68\x6F\x64\x3E", 8, 1 };
static panda$core$String $s2937 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6E\x75\x6D\x62\x65\x72\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 30, 1 };
static panda$core$String $s2939 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2947 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6E\x75\x6D\x62\x65\x72\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 30, 1 };
static panda$core$String $s2949 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s3022 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3024 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s3027 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3045 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6C\x61\x73\x73\x20\x27", 7, 1 };
static panda$core$String $s3047 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x64\x6F\x65\x73\x20\x6E\x6F\x74\x20\x68\x61\x76\x65\x20\x61\x20\x6D\x65\x6D\x62\x65\x72\x20\x6E\x61\x6D\x65\x64\x20", 31, 1 };
static panda$core$String $s3049 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s3051 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s3107 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x75\x6E\x72\x65\x73\x6F\x6C\x76\x65\x64\x20\x72\x61\x6E\x67\x65\x3E", 18, 1 };
static panda$core$String $s3116 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x72\x65\x66\x65\x72\x65\x6E\x63\x65\x20\x27\x73\x65\x6C\x66\x27\x20\x66\x72\x6F\x6D\x20\x61\x20\x40\x63\x6C\x61\x73\x73\x20\x6D\x65\x74\x68\x6F\x64", 44, 1 };
static panda$core$String $s3132 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 1 };
static panda$core$String $s3134 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3156 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3158 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s3161 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3165 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s3166 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };
static panda$core$String $s3176 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x72\x65\x66\x65\x72\x65\x6E\x63\x65\x20\x27\x73\x75\x70\x65\x72\x27\x20\x66\x72\x6F\x6D\x20\x61\x20\x40\x63\x6C\x61\x73\x73\x20\x6D\x65\x74\x68\x6F\x64", 45, 1 };
static panda$core$String $s3195 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6C\x75\x65\x20\x6F\x66\x20\x74\x79\x70\x65\x20\x27", 15, 1 };
static panda$core$String $s3197 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x70\x6F\x73\x73\x69\x62\x6C\x79\x20\x62\x65\x20\x61\x6E\x20", 24, 1 };
static panda$core$String $s3199 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x73\x74\x61\x6E\x63\x65\x20\x6F\x66\x20\x27", 13, 1 };
static panda$core$String $s3201 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s3221 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x64\x6F\x65\x73\x20\x6E\x6F\x74\x20\x72\x65\x74\x75\x72\x6E\x20\x61\x20\x76\x61\x6C\x75\x65", 24, 1 };
static panda$core$String $s3362 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3365 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 1 };
static panda$core$String $s3369 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };
static panda$core$String $s3374 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x49\x74\x65\x72", 5, 1 };
static panda$core$String $s3397 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x65\x74\x5F\x64\x6F\x6E\x65", 8, 1 };
static panda$core$String $s3402 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21", 1, 1 };
static panda$core$String $s3414 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x65\x78\x74", 4, 1 };
static panda$core$String $s3500 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x74\x65\x72\x61\x74\x6F\x72", 8, 1 };
static panda$core$String $s3508 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6E\x20\x49\x74\x65\x72\x61\x62\x6C\x65\x20\x6F\x72\x20\x49\x74\x65\x72\x61\x74\x6F\x72\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 45, 1 };
static panda$core$String $s3510 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s3568 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x63\x6C\x61\x72\x61\x74\x69\x6F\x6E\x20\x68\x61\x73\x20\x6E\x65\x69\x74\x68\x65\x72\x20\x61\x20\x74\x79\x70\x65\x20\x6E\x6F\x72\x20\x61\x20\x76\x61\x6C\x75\x65", 42, 1 };
static panda$core$String $s3625 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x62\x72\x65\x61\x6B\x20", 7, 1 };
static panda$core$String $s3627 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20\x69\x6E\x73\x69\x64\x65\x20\x61\x20\x6C\x6F\x6F\x70\x20\x6C\x61\x62\x65\x6C\x6C\x65\x64\x20", 33, 1 };
static panda$core$String $s3629 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s3631 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A\x27", 2, 1 };
static panda$core$String $s3636 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x62\x72\x65\x61\x6B\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20\x69\x6E\x73\x69\x64\x65\x20\x61\x20\x6C\x6F\x6F\x70", 29, 1 };
static panda$core$String $s3663 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x63\x6F\x6E\x74\x69\x6E\x75\x65\x20", 10, 1 };
static panda$core$String $s3665 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20\x69\x6E\x73\x69\x64\x65\x20\x61\x20\x6C\x6F\x6F\x70\x20\x6C\x61\x62\x65\x6C\x6C\x65\x64\x20", 33, 1 };
static panda$core$String $s3667 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s3669 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A\x27", 2, 1 };
static panda$core$String $s3674 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x63\x6F\x6E\x74\x69\x6E\x75\x65\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20\x69\x6E\x73\x69\x64\x65\x20\x61\x20\x6C\x6F\x6F\x70", 32, 1 };
static panda$core$String $s3683 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x72\x65\x74\x75\x72\x6E\x20\x61\x20\x76\x61\x6C\x75\x65\x20\x66\x72\x6F\x6D\x20\x61\x20\x6D\x65\x74\x68\x6F\x64\x20\x77\x69\x74\x68\x20\x6E\x6F\x20\x72\x65\x74\x75\x72\x6E\x20\x74\x79\x70\x65", 55, 1 };
static panda$core$String $s3699 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x72\x65\x74\x75\x72\x6E\x20\x76\x61\x6C\x75\x65", 23, 1 };
static panda$core$String $s3719 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6C\x75\x65", 5, 1 };
static panda$core$String $s3786 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3D", 1, 1 };
static panda$core$String $s3827 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1, 1 };
static panda$core$String $s3892 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x6D\x61\x74\x63\x68\x24", 7, 1 };
static panda$core$String $s3894 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5F", 1, 1 };
static panda$core$String $s3897 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4405 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4408 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A", 1, 1 };
static panda$core$String $s4411 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A\x20\x65\x72\x72\x6F\x72\x3A\x20", 9, 1 };
static panda$core$String $s4414 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };

void org$pandalanguage$pandac$Compiler$init$org$pandalanguage$pandac$CodeGenerator$org$pandalanguage$pandac$Compiler$Settings(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$CodeGenerator* p_codeGenerator, org$pandalanguage$pandac$Compiler$Settings* p_settings) {
    org$pandalanguage$pandac$Position $tmp53;
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
    self->settings = p_settings;
    org$pandalanguage$pandac$parser$Parser* $tmp13 = (org$pandalanguage$pandac$parser$Parser*) malloc(80);
    $tmp13->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Parser$class;
    $tmp13->refCount.value = 1;
    org$pandalanguage$pandac$parser$Parser$init$org$pandalanguage$pandac$ErrorReporter($tmp13, ((org$pandalanguage$pandac$ErrorReporter*) self));
    self->parser = $tmp13;
    org$pandalanguage$pandac$Scanner* $tmp15 = (org$pandalanguage$pandac$Scanner*) malloc(24);
    $tmp15->$class = (panda$core$Class*) &org$pandalanguage$pandac$Scanner$class;
    $tmp15->refCount.value = 1;
    org$pandalanguage$pandac$Scanner$init$org$pandalanguage$pandac$Compiler($tmp15, self);
    self->scanner = $tmp15;
    org$pandalanguage$pandac$SymbolTable* $tmp17 = (org$pandalanguage$pandac$SymbolTable*) malloc(40);
    $tmp17->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp17->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$Compiler($tmp17, self);
    self->root = $tmp17;
    self->symbolTable = self->root;
    self->codeGenerator = p_codeGenerator;
    ITable* $tmp19 = p_codeGenerator->$class->itable;
    while ($tmp19->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
        $tmp19 = $tmp19->next;
    }
    $fn21 $tmp20 = $tmp19->methods[0];
    $tmp20(p_codeGenerator, self);
    org$pandalanguage$pandac$Type* $tmp22 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp22->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp22->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp22, &$s24, ((panda$core$Int64) { 19 }), ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->root, ((org$pandalanguage$pandac$Symbol*) $tmp22));
    org$pandalanguage$pandac$Type* $tmp25 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp25->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp25->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp25, &$s27, ((panda$core$Int64) { 12 }), ((panda$core$Int64) { 8 }));
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->root, ((org$pandalanguage$pandac$Symbol*) $tmp25));
    org$pandalanguage$pandac$Type* $tmp28 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp28->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp28->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp28, &$s30, ((panda$core$Int64) { 12 }), ((panda$core$Int64) { 16 }));
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->root, ((org$pandalanguage$pandac$Symbol*) $tmp28));
    org$pandalanguage$pandac$Type* $tmp31 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp31->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp31->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp31, &$s33, ((panda$core$Int64) { 12 }), ((panda$core$Int64) { 32 }));
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->root, ((org$pandalanguage$pandac$Symbol*) $tmp31));
    org$pandalanguage$pandac$Type* $tmp34 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp34->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp34->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp34, &$s36, ((panda$core$Int64) { 12 }), ((panda$core$Int64) { 64 }));
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->root, ((org$pandalanguage$pandac$Symbol*) $tmp34));
    org$pandalanguage$pandac$Type* $tmp37 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp37->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp37->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp37, &$s39, ((panda$core$Int64) { 13 }), ((panda$core$Int64) { 8 }));
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->root, ((org$pandalanguage$pandac$Symbol*) $tmp37));
    org$pandalanguage$pandac$Type* $tmp40 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp40->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp40->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp40, &$s42, ((panda$core$Int64) { 13 }), ((panda$core$Int64) { 16 }));
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->root, ((org$pandalanguage$pandac$Symbol*) $tmp40));
    org$pandalanguage$pandac$Type* $tmp43 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp43->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp43->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp43, &$s45, ((panda$core$Int64) { 13 }), ((panda$core$Int64) { 32 }));
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->root, ((org$pandalanguage$pandac$Symbol*) $tmp43));
    org$pandalanguage$pandac$Type* $tmp46 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp46->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp46->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp46, &$s48, ((panda$core$Int64) { 13 }), ((panda$core$Int64) { 64 }));
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->root, ((org$pandalanguage$pandac$Symbol*) $tmp46));
    org$pandalanguage$pandac$Alias* $tmp49 = (org$pandalanguage$pandac$Alias*) malloc(64);
    $tmp49->$class = (panda$core$Class*) &org$pandalanguage$pandac$Alias$class;
    $tmp49->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp53);
    org$pandalanguage$pandac$Alias$init$panda$core$String$panda$core$String$org$pandalanguage$pandac$Position($tmp49, &$s51, &$s52, $tmp53);
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->root, ((org$pandalanguage$pandac$Symbol*) $tmp49));
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
}
void org$pandalanguage$pandac$Compiler$addAlias$panda$core$String(org$pandalanguage$pandac$Compiler* self, panda$core$String* p_name) {
    panda$core$SimpleRange$LTpanda$core$String$Index$Q$GT $tmp111;
    org$pandalanguage$pandac$Position $tmp116;
    org$pandalanguage$pandac$Alias* $tmp109 = (org$pandalanguage$pandac$Alias*) malloc(64);
    $tmp109->$class = (panda$core$Class*) &org$pandalanguage$pandac$Alias$class;
    $tmp109->refCount.value = 1;
    panda$core$String$Index$nullable $tmp113 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(p_name, &$s112);
    panda$core$String$Index $tmp114 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(p_name, ((panda$core$String$Index) $tmp113.value));
    panda$core$SimpleRange$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp111, ((panda$core$String$Index$nullable) { $tmp114, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
    panda$core$String* $tmp115 = panda$core$String$$IDX$panda$core$SimpleRange$LTpanda$core$String$Index$Q$GT$R$panda$core$String(p_name, $tmp111);
    org$pandalanguage$pandac$Position$init(&$tmp116);
    org$pandalanguage$pandac$Alias$init$panda$core$String$panda$core$String$org$pandalanguage$pandac$Position($tmp109, $tmp115, p_name, $tmp116);
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->root, ((org$pandalanguage$pandac$Symbol*) $tmp109));
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Compiler* self, panda$core$String* p_name) {
    panda$core$String* alias119;
    org$pandalanguage$pandac$ClassDecl* result126;
    panda$core$String$Index$nullable idx130;
    panda$core$SimpleRange$LTpanda$core$String$Index$Q$GT $tmp135;
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
                panda$core$SimpleRange$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp135, ((panda$core$String$Index$nullable) { .nonnull = false }), idx130, ((panda$core$Bit) { true }));
                panda$core$String* $tmp136 = panda$core$String$$IDX$panda$core$SimpleRange$LTpanda$core$String$Index$Q$GT$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$ClassDecl*) $tmp134))->name, $tmp135);
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
    panda$core$SimpleRange$LTpanda$core$Int64$GT $tmp189;
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
    panda$core$SimpleRange$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp189, ((panda$core$Int64) { 0 }), expectedCount157, ((panda$core$Bit) { false }));
    int64_t $tmp191 = $tmp189.min.value;
    panda$core$Int64 i190 = { $tmp191 };
    int64_t $tmp193 = $tmp189.max.value;
    bool $tmp194 = $tmp189.inclusive.value;
    bool $tmp201 = 1 > 0;
    if ($tmp201) goto $l199; else goto $l200;
    $l199:;
    if ($tmp194) goto $l202; else goto $l203;
    $l202:;
    if ($tmp191 <= $tmp193) goto $l195; else goto $l197;
    $l203:;
    if ($tmp191 < $tmp193) goto $l195; else goto $l197;
    $l200:;
    if ($tmp194) goto $l204; else goto $l205;
    $l204:;
    if ($tmp191 >= $tmp193) goto $l195; else goto $l197;
    $l205:;
    if ($tmp191 > $tmp193) goto $l195; else goto $l197;
    $l195:;
    {
        ITable* $tmp207 = foundTypes162->$class->itable;
        while ($tmp207->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp207 = $tmp207->next;
        }
        $fn209 $tmp208 = $tmp207->methods[0];
        panda$core$Object* $tmp210 = $tmp208(foundTypes162, i190);
        ITable* $tmp211 = ((panda$collections$ListView*) p_cl->parameters)->$class->itable;
        while ($tmp211->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp211 = $tmp211->next;
        }
        $fn213 $tmp212 = $tmp211->methods[0];
        panda$core$Object* $tmp214 = $tmp212(((panda$collections$ListView*) p_cl->parameters), i190);
        org$pandalanguage$pandac$Type* $tmp215 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_type, ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp214)->bound);
        panda$core$Int64$nullable $tmp216 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$Type*) $tmp210), $tmp215);
        if (((panda$core$Bit) { !$tmp216.nonnull }).value) {
        {
            panda$core$String* $tmp218 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s217, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
            panda$core$String* $tmp220 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp218, &$s219);
            ITable* $tmp221 = ((panda$collections$ListView*) p_cl->parameters)->$class->itable;
            while ($tmp221->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp221 = $tmp221->next;
            }
            $fn223 $tmp222 = $tmp221->methods[0];
            panda$core$Object* $tmp224 = $tmp222(((panda$collections$ListView*) p_cl->parameters), i190);
            panda$core$String* $tmp225 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp220, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp224))->name);
            panda$core$String* $tmp227 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp225, &$s226);
            ITable* $tmp229 = ((panda$collections$ListView*) p_cl->parameters)->$class->itable;
            while ($tmp229->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp229 = $tmp229->next;
            }
            $fn231 $tmp230 = $tmp229->methods[0];
            panda$core$Object* $tmp232 = $tmp230(((panda$collections$ListView*) p_cl->parameters), i190);
            panda$core$String* $tmp233 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s228, ((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp232)->bound));
            panda$core$String* $tmp235 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp233, &$s234);
            ITable* $tmp236 = foundTypes162->$class->itable;
            while ($tmp236->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp236 = $tmp236->next;
            }
            $fn238 $tmp237 = $tmp236->methods[0];
            panda$core$Object* $tmp239 = $tmp237(foundTypes162, i190);
            panda$core$String* $tmp240 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp235, ((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp239)));
            panda$core$String* $tmp242 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp240, &$s241);
            panda$core$String* $tmp243 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp227, $tmp242);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp243);
            return ((panda$core$Bit) { false });
        }
        }
    }
    $l198:;
    if ($tmp201) goto $l245; else goto $l246;
    $l245:;
    int64_t $tmp247 = $tmp193 - i190.value;
    if ($tmp194) goto $l248; else goto $l249;
    $l248:;
    if ($tmp247 >= 1) goto $l244; else goto $l197;
    $l249:;
    if ($tmp247 > 1) goto $l244; else goto $l197;
    $l246:;
    int64_t $tmp251 = i190.value - $tmp193;
    if ($tmp194) goto $l252; else goto $l253;
    $l252:;
    if ($tmp251 >= -1) goto $l244; else goto $l197;
    $l253:;
    if ($tmp251 > -1) goto $l244; else goto $l197;
    $l244:;
    i190.value += 1;
    goto $l195;
    $l197:;
    return ((panda$core$Bit) { true });
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$Type$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type, panda$core$Bit p_checkParameters) {
    org$pandalanguage$pandac$ClassDecl* resolved255;
    org$pandalanguage$pandac$Type* result257;
    org$pandalanguage$pandac$Symbol* s261;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* gp265;
    panda$collections$Array* subtypes276;
    org$pandalanguage$pandac$Type* sub279;
    panda$collections$Array* subtypes289;
    org$pandalanguage$pandac$Type* base292;
    panda$core$MutableString* name295;
    panda$core$String* separator300;
    panda$core$SimpleRange$LTpanda$core$Int64$GT $tmp302;
    org$pandalanguage$pandac$Type* resolved321;
    org$pandalanguage$pandac$Type* result337;
    if (p_type->resolved.value) {
    {
        return p_type;
    }
    }
    switch (p_type->typeKind.value) {
        case 10:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp256 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Symbol*) p_type)->name);
            resolved255 = $tmp256;
            if (((panda$core$Bit) { resolved255 != NULL }).value) {
            {
                org$pandalanguage$pandac$Type* $tmp258 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(resolved255);
                result257 = $tmp258;
                if (p_checkParameters.value) {
                {
                    panda$core$Bit $tmp259 = org$pandalanguage$pandac$Compiler$checkGenericParameters$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, ((org$pandalanguage$pandac$Symbol*) p_type)->position, resolved255, result257);
                    panda$core$Bit $tmp260 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp259);
                    if ($tmp260.value) {
                    {
                        return NULL;
                    }
                    }
                }
                }
                return result257;
            }
            }
            org$pandalanguage$pandac$Symbol* $tmp262 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(self->symbolTable, ((org$pandalanguage$pandac$Symbol*) p_type)->name);
            s261 = $tmp262;
            if (((panda$core$Bit) { s261 != NULL }).value) {
            {
                switch (s261->kind.value) {
                    case 200:
                    {
                        org$pandalanguage$pandac$Type* $tmp263 = (org$pandalanguage$pandac$Type*) malloc(96);
                        $tmp263->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
                        $tmp263->refCount.value = 1;
                        org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp263, ((org$pandalanguage$pandac$Alias*) s261)->fullName, ((panda$core$Int64) { 10 }), ((org$pandalanguage$pandac$Symbol*) p_type)->position, ((panda$core$Bit) { true }));
                        return $tmp263;
                    }
                    break;
                    case 203:
                    {
                        gp265 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) s261);
                        org$pandalanguage$pandac$ClassDecl* $tmp266 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Position$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Symbol*) p_type)->position, gp265->owner);
                        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, $tmp266);
                        org$pandalanguage$pandac$Type* $tmp267 = (org$pandalanguage$pandac$Type*) malloc(96);
                        $tmp267->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
                        $tmp267->refCount.value = 1;
                        org$pandalanguage$pandac$Type$init$org$pandalanguage$pandac$ClassDecl$GenericParameter($tmp267, gp265);
                        return $tmp267;
                    }
                    break;
                    case 207:
                    {
                        return ((org$pandalanguage$pandac$Type*) s261);
                    }
                    break;
                    case 201:
                    {
                        org$pandalanguage$pandac$Type* $tmp269 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) s261));
                        return $tmp269;
                    }
                    break;
                }
            }
            }
            panda$core$String* $tmp271 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s270, ((panda$core$Object*) p_type));
            panda$core$String* $tmp273 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp271, &$s272);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_type)->position, $tmp273);
            return NULL;
        }
        break;
        case 11:
        {
            panda$core$Int64 $tmp274 = panda$collections$Array$get_count$R$panda$core$Int64(p_type->subtypes);
            panda$core$Bit $tmp275 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp274, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp275.value);
            panda$collections$Array* $tmp277 = (panda$collections$Array*) malloc(40);
            $tmp277->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp277->refCount.value = 1;
            panda$collections$Array$init($tmp277);
            subtypes276 = $tmp277;
            panda$core$Object* $tmp280 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp281 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, ((org$pandalanguage$pandac$Type*) $tmp280));
            sub279 = $tmp281;
            if (((panda$core$Bit) { sub279 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(subtypes276, ((panda$core$Object*) sub279));
            org$pandalanguage$pandac$Type* $tmp282 = (org$pandalanguage$pandac$Type*) malloc(96);
            $tmp282->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp282->refCount.value = 1;
            panda$core$Object* $tmp284 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(subtypes276, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp286 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp284))->name, &$s285);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp282, $tmp286, ((panda$core$Int64) { 11 }), ((org$pandalanguage$pandac$Symbol*) p_type)->position, ((panda$collections$ListView*) subtypes276), ((panda$core$Bit) { true }));
            return $tmp282;
        }
        break;
        case 21:
        {
            panda$core$Int64 $tmp287 = panda$collections$Array$get_count$R$panda$core$Int64(p_type->subtypes);
            panda$core$Bit $tmp288 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp287, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp288.value);
            panda$collections$Array* $tmp290 = (panda$collections$Array*) malloc(40);
            $tmp290->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp290->refCount.value = 1;
            panda$collections$Array$init($tmp290);
            subtypes289 = $tmp290;
            panda$core$Object* $tmp293 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp294 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$Type$Q(self, ((org$pandalanguage$pandac$Type*) $tmp293), ((panda$core$Bit) { false }));
            base292 = $tmp294;
            if (((panda$core$Bit) { base292 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(subtypes289, ((panda$core$Object*) base292));
            panda$core$MutableString* $tmp296 = (panda$core$MutableString*) malloc(40);
            $tmp296->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp296->refCount.value = 1;
            panda$core$Object* $tmp298 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(subtypes289, ((panda$core$Int64) { 0 }));
            panda$core$MutableString$init$panda$core$String($tmp296, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp298))->name);
            name295 = $tmp296;
            panda$core$MutableString$append$panda$core$String(name295, &$s299);
            separator300 = &$s301;
            panda$core$Int64 $tmp303 = panda$collections$Array$get_count$R$panda$core$Int64(p_type->subtypes);
            panda$core$SimpleRange$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp302, ((panda$core$Int64) { 1 }), $tmp303, ((panda$core$Bit) { false }));
            int64_t $tmp305 = $tmp302.min.value;
            panda$core$Int64 i304 = { $tmp305 };
            int64_t $tmp307 = $tmp302.max.value;
            bool $tmp308 = $tmp302.inclusive.value;
            bool $tmp315 = 1 > 0;
            if ($tmp315) goto $l313; else goto $l314;
            $l313:;
            if ($tmp308) goto $l316; else goto $l317;
            $l316:;
            if ($tmp305 <= $tmp307) goto $l309; else goto $l311;
            $l317:;
            if ($tmp305 < $tmp307) goto $l309; else goto $l311;
            $l314:;
            if ($tmp308) goto $l318; else goto $l319;
            $l318:;
            if ($tmp305 >= $tmp307) goto $l309; else goto $l311;
            $l319:;
            if ($tmp305 > $tmp307) goto $l309; else goto $l311;
            $l309:;
            {
                panda$core$Object* $tmp322 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, i304);
                org$pandalanguage$pandac$Type* $tmp323 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, ((org$pandalanguage$pandac$Type*) $tmp322));
                resolved321 = $tmp323;
                if (((panda$core$Bit) { resolved321 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(subtypes289, ((panda$core$Object*) resolved321));
                panda$core$MutableString$append$panda$core$String(name295, separator300);
                panda$core$MutableString$append$panda$core$String(name295, ((org$pandalanguage$pandac$Symbol*) resolved321)->name);
                separator300 = &$s324;
            }
            $l312:;
            if ($tmp315) goto $l326; else goto $l327;
            $l326:;
            int64_t $tmp328 = $tmp307 - i304.value;
            if ($tmp308) goto $l329; else goto $l330;
            $l329:;
            if ($tmp328 >= 1) goto $l325; else goto $l311;
            $l330:;
            if ($tmp328 > 1) goto $l325; else goto $l311;
            $l327:;
            int64_t $tmp332 = i304.value - $tmp307;
            if ($tmp308) goto $l333; else goto $l334;
            $l333:;
            if ($tmp332 >= -1) goto $l325; else goto $l311;
            $l334:;
            if ($tmp332 > -1) goto $l325; else goto $l311;
            $l325:;
            i304.value += 1;
            goto $l309;
            $l311:;
            panda$core$MutableString$append$panda$core$String(name295, &$s336);
            org$pandalanguage$pandac$Type* $tmp338 = (org$pandalanguage$pandac$Type*) malloc(96);
            $tmp338->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp338->refCount.value = 1;
            panda$core$String* $tmp340 = panda$core$MutableString$convert$R$panda$core$String(name295);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp338, $tmp340, ((panda$core$Int64) { 21 }), ((org$pandalanguage$pandac$Symbol*) p_type)->position, ((panda$collections$ListView*) subtypes289), ((panda$core$Bit) { true }));
            result337 = $tmp338;
            if (p_checkParameters.value) {
            {
                panda$core$Object* $tmp341 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(result337->subtypes, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$ClassDecl* $tmp342 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Type*) $tmp341));
                panda$core$Bit $tmp343 = org$pandalanguage$pandac$Compiler$checkGenericParameters$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, ((org$pandalanguage$pandac$Symbol*) p_type)->position, $tmp342, result337);
                panda$core$Bit $tmp344 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp343);
                if ($tmp344.value) {
                {
                    return NULL;
                }
                }
            }
            }
            return result337;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type) {
    org$pandalanguage$pandac$Type* $tmp345 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$Type$Q(self, p_type, ((panda$core$Bit) { true }));
    return $tmp345;
}
void org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$SymbolTable* old346;
    panda$collections$Iterator* p$Iter347;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* p359;
    org$pandalanguage$pandac$Type* resolved364;
    panda$collections$Iterator* rawS$Iter366;
    org$pandalanguage$pandac$Type* rawS378;
    org$pandalanguage$pandac$Type* s383;
    org$pandalanguage$pandac$ClassDecl* sClass385;
    panda$collections$Iterator* m$Iter432;
    org$pandalanguage$pandac$MethodDecl* m444;
    panda$collections$Iterator* intf$Iter455;
    org$pandalanguage$pandac$Type* intf467;
    panda$collections$Iterator* p$Iter473;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* p485;
    org$pandalanguage$pandac$ClassDecl* cl490;
    if (p_cl->resolved.value) {
    {
        return;
    }
    }
    p_cl->resolved = ((panda$core$Bit) { true });
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_cl));
    old346 = self->symbolTable;
    self->symbolTable = p_cl->symbolTable;
    {
        ITable* $tmp348 = ((panda$collections$Iterable*) p_cl->parameters)->$class->itable;
        while ($tmp348->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp348 = $tmp348->next;
        }
        $fn350 $tmp349 = $tmp348->methods[0];
        panda$collections$Iterator* $tmp351 = $tmp349(((panda$collections$Iterable*) p_cl->parameters));
        p$Iter347 = $tmp351;
        $l352:;
        ITable* $tmp354 = p$Iter347->$class->itable;
        while ($tmp354->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp354 = $tmp354->next;
        }
        $fn356 $tmp355 = $tmp354->methods[0];
        panda$core$Bit $tmp357 = $tmp355(p$Iter347);
        panda$core$Bit $tmp358 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp357);
        if (!$tmp358.value) goto $l353;
        {
            ITable* $tmp360 = p$Iter347->$class->itable;
            while ($tmp360->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp360 = $tmp360->next;
            }
            $fn362 $tmp361 = $tmp360->methods[1];
            panda$core$Object* $tmp363 = $tmp361(p$Iter347);
            p359 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp363);
            org$pandalanguage$pandac$Type* $tmp365 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$Type$Q(self, p359->bound, ((panda$core$Bit) { false }));
            resolved364 = $tmp365;
            if (((panda$core$Bit) { resolved364 != NULL }).value) {
            {
                p359->bound = resolved364;
            }
            }
        }
        goto $l352;
        $l353:;
    }
    {
        ITable* $tmp367 = ((panda$collections$Iterable*) p_cl->declaredSupers)->$class->itable;
        while ($tmp367->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp367 = $tmp367->next;
        }
        $fn369 $tmp368 = $tmp367->methods[0];
        panda$collections$Iterator* $tmp370 = $tmp368(((panda$collections$Iterable*) p_cl->declaredSupers));
        rawS$Iter366 = $tmp370;
        $l371:;
        ITable* $tmp373 = rawS$Iter366->$class->itable;
        while ($tmp373->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp373 = $tmp373->next;
        }
        $fn375 $tmp374 = $tmp373->methods[0];
        panda$core$Bit $tmp376 = $tmp374(rawS$Iter366);
        panda$core$Bit $tmp377 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp376);
        if (!$tmp377.value) goto $l372;
        {
            ITable* $tmp379 = rawS$Iter366->$class->itable;
            while ($tmp379->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp379 = $tmp379->next;
            }
            $fn381 $tmp380 = $tmp379->methods[1];
            panda$core$Object* $tmp382 = $tmp380(rawS$Iter366);
            rawS378 = ((org$pandalanguage$pandac$Type*) $tmp382);
            org$pandalanguage$pandac$Type* $tmp384 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$Type$Q(self, rawS378, ((panda$core$Bit) { false }));
            s383 = $tmp384;
            if (((panda$core$Bit) { s383 != NULL }).value) {
            {
                org$pandalanguage$pandac$ClassDecl* $tmp386 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, s383);
                sClass385 = $tmp386;
                if (((panda$core$Bit) { sClass385 != NULL }).value) {
                {
                    panda$core$Bit $tmp387 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(sClass385->classKind, ((panda$core$Int64) { 5011 }));
                    if ($tmp387.value) {
                    {
                        panda$core$Bit $tmp388 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_cl->classKind, ((panda$core$Int64) { 5012 }));
                        if ($tmp388.value) {
                        {
                            panda$core$String* $tmp390 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s389, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
                            panda$core$String* $tmp392 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp390, &$s391);
                            panda$core$String* $tmp394 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s393, ((org$pandalanguage$pandac$Symbol*) s383)->name);
                            panda$core$String* $tmp396 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp394, &$s395);
                            panda$core$String* $tmp397 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp392, $tmp396);
                            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) s383)->position, $tmp397);
                        }
                        }
                        if (((panda$core$Bit) { p_cl->rawSuper == NULL }).value) {
                        {
                            p_cl->rawSuper = s383;
                            panda$core$Int64 $tmp398 = panda$collections$Array$get_count$R$panda$core$Int64(p_cl->rawInterfaces);
                            panda$core$Bit $tmp399 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp398, ((panda$core$Int64) { 0 }));
                            if ($tmp399.value) {
                            {
                                panda$core$String* $tmp401 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s400, ((panda$core$Object*) s383));
                                panda$core$String* $tmp403 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp401, &$s402);
                                panda$core$String* $tmp404 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp403, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
                                panda$core$String* $tmp406 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp404, &$s405);
                                panda$core$String* $tmp408 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp406, &$s407);
                                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) s383)->position, $tmp408);
                            }
                            }
                        }
                        }
                        else {
                        {
                            panda$core$String* $tmp410 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s409, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
                            panda$core$String* $tmp412 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp410, &$s411);
                            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) s383)->position, $tmp412);
                        }
                        }
                    }
                    }
                    else {
                    {
                        panda$core$Bit $tmp413 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(sClass385->classKind, ((panda$core$Int64) { 5012 }));
                        PANDA_ASSERT($tmp413.value);
                        panda$collections$Array$add$panda$collections$Array$T(p_cl->rawInterfaces, ((panda$core$Object*) s383));
                    }
                    }
                }
                }
            }
            }
        }
        goto $l371;
        $l372:;
    }
    bool $tmp414 = ((panda$core$Bit) { p_cl->rawSuper == NULL }).value;
    if (!$tmp414) goto $l415;
    panda$core$Bit $tmp417 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_cl)->name, &$s416);
    $tmp414 = $tmp417.value;
    $l415:;
    panda$core$Bit $tmp418 = { $tmp414 };
    if ($tmp418.value) {
    {
        org$pandalanguage$pandac$Type* $tmp419 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
        p_cl->rawSuper = $tmp419;
    }
    }
    bool $tmp421 = ((panda$core$Bit) { p_cl->rawSuper != NULL }).value;
    if (!$tmp421) goto $l422;
    panda$core$Bit $tmp423 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_cl->annotations);
    panda$core$Bit $tmp424 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp423);
    $tmp421 = $tmp424.value;
    $l422:;
    panda$core$Bit $tmp425 = { $tmp421 };
    bool $tmp420 = $tmp425.value;
    if (!$tmp420) goto $l426;
    panda$core$Bit $tmp428 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_cl->rawSuper)->name, &$s427);
    $tmp420 = $tmp428.value;
    $l426:;
    panda$core$Bit $tmp429 = { $tmp420 };
    if ($tmp429.value) {
    {
        panda$core$Int64 $tmp430 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 8 }));
        panda$core$Int64 $tmp431 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(p_cl->annotations->flags, $tmp430);
        p_cl->annotations->flags = $tmp431;
        {
            ITable* $tmp433 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
            while ($tmp433->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp433 = $tmp433->next;
            }
            $fn435 $tmp434 = $tmp433->methods[0];
            panda$collections$Iterator* $tmp436 = $tmp434(((panda$collections$Iterable*) p_cl->methods));
            m$Iter432 = $tmp436;
            $l437:;
            ITable* $tmp439 = m$Iter432->$class->itable;
            while ($tmp439->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp439 = $tmp439->next;
            }
            $fn441 $tmp440 = $tmp439->methods[0];
            panda$core$Bit $tmp442 = $tmp440(m$Iter432);
            panda$core$Bit $tmp443 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp442);
            if (!$tmp443.value) goto $l438;
            {
                ITable* $tmp445 = m$Iter432->$class->itable;
                while ($tmp445->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp445 = $tmp445->next;
                }
                $fn447 $tmp446 = $tmp445->methods[1];
                panda$core$Object* $tmp448 = $tmp446(m$Iter432);
                m444 = ((org$pandalanguage$pandac$MethodDecl*) $tmp448);
                panda$core$Int64 $tmp449 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 8 }));
                panda$core$Int64 $tmp450 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(m444->annotations->flags, $tmp449);
                m444->annotations->flags = $tmp450;
                panda$core$Bit $tmp451 = org$pandalanguage$pandac$Scanner$shouldInline$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ASTNode$Q$R$panda$core$Bit(self->scanner, m444->annotations, m444->body);
                if ($tmp451.value) {
                {
                    panda$core$Int64 $tmp452 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 10 }));
                    panda$core$Int64 $tmp453 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(m444->annotations->flags, $tmp452);
                    m444->annotations->flags = $tmp453;
                }
                }
            }
            goto $l437;
            $l438:;
        }
    }
    }
    if (((panda$core$Bit) { p_cl->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp454 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_cl->rawSuper);
        org$pandalanguage$pandac$Compiler$checkGenericParameters$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->position, $tmp454, p_cl->rawSuper);
    }
    }
    {
        ITable* $tmp456 = ((panda$collections$Iterable*) p_cl->rawInterfaces)->$class->itable;
        while ($tmp456->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp456 = $tmp456->next;
        }
        $fn458 $tmp457 = $tmp456->methods[0];
        panda$collections$Iterator* $tmp459 = $tmp457(((panda$collections$Iterable*) p_cl->rawInterfaces));
        intf$Iter455 = $tmp459;
        $l460:;
        ITable* $tmp462 = intf$Iter455->$class->itable;
        while ($tmp462->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp462 = $tmp462->next;
        }
        $fn464 $tmp463 = $tmp462->methods[0];
        panda$core$Bit $tmp465 = $tmp463(intf$Iter455);
        panda$core$Bit $tmp466 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp465);
        if (!$tmp466.value) goto $l461;
        {
            ITable* $tmp468 = intf$Iter455->$class->itable;
            while ($tmp468->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp468 = $tmp468->next;
            }
            $fn470 $tmp469 = $tmp468->methods[1];
            panda$core$Object* $tmp471 = $tmp469(intf$Iter455);
            intf467 = ((org$pandalanguage$pandac$Type*) $tmp471);
            org$pandalanguage$pandac$ClassDecl* $tmp472 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, intf467);
            org$pandalanguage$pandac$Compiler$checkGenericParameters$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->position, $tmp472, intf467);
        }
        goto $l460;
        $l461:;
    }
    {
        ITable* $tmp474 = ((panda$collections$Iterable*) p_cl->parameters)->$class->itable;
        while ($tmp474->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp474 = $tmp474->next;
        }
        $fn476 $tmp475 = $tmp474->methods[0];
        panda$collections$Iterator* $tmp477 = $tmp475(((panda$collections$Iterable*) p_cl->parameters));
        p$Iter473 = $tmp477;
        $l478:;
        ITable* $tmp480 = p$Iter473->$class->itable;
        while ($tmp480->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp480 = $tmp480->next;
        }
        $fn482 $tmp481 = $tmp480->methods[0];
        panda$core$Bit $tmp483 = $tmp481(p$Iter473);
        panda$core$Bit $tmp484 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp483);
        if (!$tmp484.value) goto $l479;
        {
            ITable* $tmp486 = p$Iter473->$class->itable;
            while ($tmp486->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp486 = $tmp486->next;
            }
            $fn488 $tmp487 = $tmp486->methods[1];
            panda$core$Object* $tmp489 = $tmp487(p$Iter473);
            p485 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp489);
            org$pandalanguage$pandac$ClassDecl* $tmp491 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p485->bound);
            cl490 = $tmp491;
            if (((panda$core$Bit) { cl490 != NULL }).value) {
            {
                org$pandalanguage$pandac$Compiler$checkGenericParameters$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, ((org$pandalanguage$pandac$Symbol*) cl490)->position, cl490, p485->bound);
            }
            }
        }
        goto $l478;
        $l479:;
    }
    self->symbolTable = old346;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
}
void org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$SymbolTable* old492;
    panda$collections$Iterator* p$Iter493;
    org$pandalanguage$pandac$MethodDecl$Parameter* p505;
    org$pandalanguage$pandac$MethodDecl* overridden512;
    if (p_m->resolved.value) {
    {
        return;
    }
    }
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_m->owner);
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_m->owner));
    old492 = self->symbolTable;
    self->symbolTable = p_m->owner->symbolTable;
    {
        ITable* $tmp494 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp494->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp494 = $tmp494->next;
        }
        $fn496 $tmp495 = $tmp494->methods[0];
        panda$collections$Iterator* $tmp497 = $tmp495(((panda$collections$Iterable*) p_m->parameters));
        p$Iter493 = $tmp497;
        $l498:;
        ITable* $tmp500 = p$Iter493->$class->itable;
        while ($tmp500->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp500 = $tmp500->next;
        }
        $fn502 $tmp501 = $tmp500->methods[0];
        panda$core$Bit $tmp503 = $tmp501(p$Iter493);
        panda$core$Bit $tmp504 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp503);
        if (!$tmp504.value) goto $l499;
        {
            ITable* $tmp506 = p$Iter493->$class->itable;
            while ($tmp506->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp506 = $tmp506->next;
            }
            $fn508 $tmp507 = $tmp506->methods[1];
            panda$core$Object* $tmp509 = $tmp507(p$Iter493);
            p505 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp509);
            org$pandalanguage$pandac$Type* $tmp510 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, p505->type);
            p505->type = $tmp510;
        }
        goto $l498;
        $l499:;
    }
    org$pandalanguage$pandac$Type* $tmp511 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, p_m->returnType);
    p_m->returnType = $tmp511;
    p_m->resolved = ((panda$core$Bit) { true });
    org$pandalanguage$pandac$MethodDecl* $tmp513 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(self, p_m);
    overridden512 = $tmp513;
    if (((panda$core$Bit) { overridden512 != NULL }).value) {
    {
        panda$core$Bit $tmp514 = org$pandalanguage$pandac$Annotations$isOverride$R$panda$core$Bit(p_m->annotations);
        panda$core$Bit $tmp515 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp514);
        if ($tmp515.value) {
        {
            panda$core$String* $tmp517 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(p_m);
            panda$core$String* $tmp518 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s516, $tmp517);
            panda$core$String* $tmp520 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp518, &$s519);
            panda$core$String* $tmp521 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(overridden512);
            panda$core$String* $tmp522 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp520, $tmp521);
            panda$core$String* $tmp524 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp522, &$s523);
            panda$core$String* $tmp526 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp524, &$s525);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m)->position, $tmp526);
        }
        }
        panda$core$Bit $tmp528 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 57 }));
        bool $tmp527 = $tmp528.value;
        if (!$tmp527) goto $l529;
        panda$core$Bit $tmp530 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(overridden512->methodKind, ((panda$core$Int64) { 58 }));
        $tmp527 = $tmp530.value;
        $l529:;
        panda$core$Bit $tmp531 = { $tmp527 };
        if ($tmp531.value) {
        {
            panda$core$String* $tmp533 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(p_m);
            panda$core$String* $tmp534 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s532, $tmp533);
            panda$core$String* $tmp536 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp534, &$s535);
            panda$core$String* $tmp537 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(overridden512);
            panda$core$String* $tmp538 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp536, $tmp537);
            panda$core$String* $tmp540 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp538, &$s539);
            panda$core$String* $tmp542 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp540, &$s541);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m)->position, $tmp542);
        }
        }
    }
    }
    else {
    panda$core$Bit $tmp543 = org$pandalanguage$pandac$Annotations$isOverride$R$panda$core$Bit(p_m->annotations);
    if ($tmp543.value) {
    {
        panda$core$String* $tmp545 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(p_m);
        panda$core$String* $tmp546 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s544, $tmp545);
        panda$core$String* $tmp548 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp546, &$s547);
        panda$core$String* $tmp550 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp548, &$s549);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m)->position, $tmp550);
    }
    }
    }
    self->symbolTable = old492;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
}
void org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$FieldDecl* p_f) {
    org$pandalanguage$pandac$SymbolTable* old551;
    org$pandalanguage$pandac$Type* resolved554;
    if (p_f->resolved.value) {
    {
        return;
    }
    }
    p_f->resolved = ((panda$core$Bit) { true });
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_f->owner));
    old551 = self->symbolTable;
    self->symbolTable = p_f->owner->symbolTable;
    org$pandalanguage$pandac$Type* $tmp552 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp553 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_f->type, $tmp552);
    if ($tmp553.value) {
    {
        org$pandalanguage$pandac$Type* $tmp555 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, p_f->type);
        resolved554 = $tmp555;
        if (((panda$core$Bit) { resolved554 != NULL }).value) {
        {
            p_f->type = resolved554;
            if (((panda$core$Bit) { p_f->rawValue != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp556 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->rawValue);
                org$pandalanguage$pandac$IRNode* $tmp557 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp556, p_f->type);
                p_f->value = $tmp557;
            }
            }
        }
        }
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
        self->symbolTable = old551;
        return;
    }
    }
    if (((panda$core$Bit) { p_f->rawValue == NULL }).value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_f)->position, &$s558);
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
        self->symbolTable = old551;
        return;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp559 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->rawValue);
    p_f->value = $tmp559;
    if (((panda$core$Bit) { p_f->value == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
        self->symbolTable = old551;
        return;
    }
    }
    org$pandalanguage$pandac$Type* $tmp560 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_f->value);
    p_f->type = $tmp560;
    org$pandalanguage$pandac$IRNode* $tmp561 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->value, p_f->type);
    p_f->value = $tmp561;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    self->symbolTable = old551;
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
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_expr->position, &$s562);
            return NULL;
        }
        break;
        case 1039:
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_expr->position, &$s563);
            panda$core$Object* $tmp564 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$io$Console$printLine$panda$core$Object(((panda$core$Object*) ((panda$collections$ListView*) ((org$pandalanguage$pandac$IRNode*) $tmp564)->payload)));
            return NULL;
        }
        break;
        case 1024:
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_expr->position, &$s565);
            return NULL;
        }
        break;
        default:
        {
            org$pandalanguage$pandac$Type* $tmp566 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
            org$pandalanguage$pandac$IRNode* $tmp567 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, $tmp566);
            return $tmp567;
        }
    }
}
panda$core$Bit org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
    bool $tmp568 = ((panda$core$Bit) { p_cl->rawSuper != NULL }).value;
    if (!$tmp568) goto $l569;
    org$pandalanguage$pandac$Type* $tmp570 = org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type();
    panda$core$Int64$nullable $tmp571 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_cl->rawSuper, $tmp570);
    $tmp568 = ((panda$core$Bit) { $tmp571.nonnull }).value;
    $l569:;
    panda$core$Bit $tmp572 = { $tmp568 };
    return $tmp572;
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Array* result573;
    org$pandalanguage$pandac$ClassDecl* s581;
    panda$collections$Iterator* f$Iter584;
    org$pandalanguage$pandac$FieldDecl* f596;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
    panda$collections$Array* $tmp574 = (panda$collections$Array*) malloc(40);
    $tmp574->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp574->refCount.value = 1;
    panda$collections$Array$init($tmp574);
    result573 = $tmp574;
    panda$core$Bit $tmp577 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, p_cl);
    panda$core$Bit $tmp578 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp577);
    bool $tmp576 = $tmp578.value;
    if (!$tmp576) goto $l579;
    $tmp576 = ((panda$core$Bit) { p_cl->rawSuper != NULL }).value;
    $l579:;
    panda$core$Bit $tmp580 = { $tmp576 };
    if ($tmp580.value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp582 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_cl->rawSuper);
        s581 = $tmp582;
        if (((panda$core$Bit) { s581 != NULL }).value) {
        {
            panda$collections$ListView* $tmp583 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self, s581);
            panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(result573, ((panda$collections$CollectionView*) $tmp583));
        }
        }
    }
    }
    {
        ITable* $tmp585 = ((panda$collections$Iterable*) p_cl->fields)->$class->itable;
        while ($tmp585->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp585 = $tmp585->next;
        }
        $fn587 $tmp586 = $tmp585->methods[0];
        panda$collections$Iterator* $tmp588 = $tmp586(((panda$collections$Iterable*) p_cl->fields));
        f$Iter584 = $tmp588;
        $l589:;
        ITable* $tmp591 = f$Iter584->$class->itable;
        while ($tmp591->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp591 = $tmp591->next;
        }
        $fn593 $tmp592 = $tmp591->methods[0];
        panda$core$Bit $tmp594 = $tmp592(f$Iter584);
        panda$core$Bit $tmp595 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp594);
        if (!$tmp595.value) goto $l590;
        {
            ITable* $tmp597 = f$Iter584->$class->itable;
            while ($tmp597->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp597 = $tmp597->next;
            }
            $fn599 $tmp598 = $tmp597->methods[1];
            panda$core$Object* $tmp600 = $tmp598(f$Iter584);
            f596 = ((org$pandalanguage$pandac$FieldDecl*) $tmp600);
            panda$core$Bit $tmp601 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(f596->annotations);
            panda$core$Bit $tmp602 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp601);
            if ($tmp602.value) {
            {
                panda$collections$Array$add$panda$collections$Array$T(result573, ((panda$core$Object*) f596));
            }
            }
        }
        goto $l589;
        $l590:;
    }
    return ((panda$collections$ListView*) result573);
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Compiler$getClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Compiler* self, panda$core$String* p_fullName) {
    org$pandalanguage$pandac$ClassDecl* result603;
    panda$core$String* suffix605;
    panda$core$Bit found611;
    panda$collections$Iterator* dir$Iter612;
    panda$io$File* dir624;
    panda$io$File* f629;
    panda$core$Bit $tmp631;
    panda$core$String$Index$nullable index633;
    org$pandalanguage$pandac$ClassDecl* parent636;
    panda$core$SimpleRange$LTpanda$core$String$Index$Q$GT $tmp637;
    panda$core$Object* $tmp604 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) p_fullName));
    result603 = ((org$pandalanguage$pandac$ClassDecl*) $tmp604);
    if (((panda$core$Bit) { result603 == NULL }).value) {
    {
        panda$core$String* $tmp608 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(p_fullName, &$s606, &$s607);
        panda$core$String* $tmp610 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp608, &$s609);
        suffix605 = $tmp610;
        found611 = ((panda$core$Bit) { false });
        {
            ITable* $tmp613 = ((panda$collections$Iterable*) self->settings->importDirs)->$class->itable;
            while ($tmp613->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp613 = $tmp613->next;
            }
            $fn615 $tmp614 = $tmp613->methods[0];
            panda$collections$Iterator* $tmp616 = $tmp614(((panda$collections$Iterable*) self->settings->importDirs));
            dir$Iter612 = $tmp616;
            $l617:;
            ITable* $tmp619 = dir$Iter612->$class->itable;
            while ($tmp619->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp619 = $tmp619->next;
            }
            $fn621 $tmp620 = $tmp619->methods[0];
            panda$core$Bit $tmp622 = $tmp620(dir$Iter612);
            panda$core$Bit $tmp623 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp622);
            if (!$tmp623.value) goto $l618;
            {
                ITable* $tmp625 = dir$Iter612->$class->itable;
                while ($tmp625->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp625 = $tmp625->next;
                }
                $fn627 $tmp626 = $tmp625->methods[1];
                panda$core$Object* $tmp628 = $tmp626(dir$Iter612);
                dir624 = ((panda$io$File*) $tmp628);
                panda$io$File* $tmp630 = panda$io$File$resolve$panda$core$String$R$panda$io$File(dir624, suffix605);
                f629 = $tmp630;
                panda$io$File$exists$R$panda$core$Bit(&$tmp631, f629);
                if ($tmp631.value) {
                {
                    found611 = ((panda$core$Bit) { true });
                    org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(self, f629);
                    panda$core$Object* $tmp632 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) p_fullName));
                    result603 = ((org$pandalanguage$pandac$ClassDecl*) $tmp632);
                }
                }
            }
            goto $l617;
            $l618:;
        }
    }
    }
    if (((panda$core$Bit) { result603 == NULL }).value) {
    {
        panda$core$String$Index$nullable $tmp635 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(p_fullName, &$s634);
        index633 = $tmp635;
        if (((panda$core$Bit) { index633.nonnull }).value) {
        {
            panda$core$SimpleRange$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp637, ((panda$core$String$Index$nullable) { .nonnull = false }), index633, ((panda$core$Bit) { false }));
            panda$core$String* $tmp638 = panda$core$String$$IDX$panda$core$SimpleRange$LTpanda$core$String$Index$Q$GT$R$panda$core$String(p_fullName, $tmp637);
            org$pandalanguage$pandac$ClassDecl* $tmp639 = org$pandalanguage$pandac$Compiler$getClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, $tmp638);
            parent636 = $tmp639;
            if (((panda$core$Bit) { parent636 != NULL }).value) {
            {
                panda$core$Object* $tmp640 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) p_fullName));
                result603 = ((org$pandalanguage$pandac$ClassDecl*) $tmp640);
            }
            }
        }
        }
    }
    }
    return result603;
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Position$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, panda$core$String* p_fullName) {
    org$pandalanguage$pandac$ClassDecl* result641;
    panda$core$String* suffix643;
    panda$core$Bit found649;
    panda$collections$Iterator* dir$Iter650;
    panda$io$File* dir662;
    panda$io$File* f667;
    panda$core$Bit $tmp669;
    panda$core$Int64 oldErrorCount670;
    org$pandalanguage$pandac$Position $tmp676;
    panda$core$Object* $tmp642 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) p_fullName));
    result641 = ((org$pandalanguage$pandac$ClassDecl*) $tmp642);
    if (((panda$core$Bit) { result641 == NULL }).value) {
    {
        panda$core$String* $tmp646 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(p_fullName, &$s644, &$s645);
        panda$core$String* $tmp648 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp646, &$s647);
        suffix643 = $tmp648;
        found649 = ((panda$core$Bit) { false });
        {
            ITable* $tmp651 = ((panda$collections$Iterable*) self->settings->importDirs)->$class->itable;
            while ($tmp651->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp651 = $tmp651->next;
            }
            $fn653 $tmp652 = $tmp651->methods[0];
            panda$collections$Iterator* $tmp654 = $tmp652(((panda$collections$Iterable*) self->settings->importDirs));
            dir$Iter650 = $tmp654;
            $l655:;
            ITable* $tmp657 = dir$Iter650->$class->itable;
            while ($tmp657->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp657 = $tmp657->next;
            }
            $fn659 $tmp658 = $tmp657->methods[0];
            panda$core$Bit $tmp660 = $tmp658(dir$Iter650);
            panda$core$Bit $tmp661 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp660);
            if (!$tmp661.value) goto $l656;
            {
                ITable* $tmp663 = dir$Iter650->$class->itable;
                while ($tmp663->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp663 = $tmp663->next;
                }
                $fn665 $tmp664 = $tmp663->methods[1];
                panda$core$Object* $tmp666 = $tmp664(dir$Iter650);
                dir662 = ((panda$io$File*) $tmp666);
                panda$io$File* $tmp668 = panda$io$File$resolve$panda$core$String$R$panda$io$File(dir662, suffix643);
                f667 = $tmp668;
                panda$io$File$exists$R$panda$core$Bit(&$tmp669, f667);
                if ($tmp669.value) {
                {
                    found649 = ((panda$core$Bit) { true });
                    oldErrorCount670 = self->errorCount;
                    org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(self, f667);
                    panda$core$Object* $tmp671 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) p_fullName));
                    result641 = ((org$pandalanguage$pandac$ClassDecl*) $tmp671);
                    bool $tmp672 = ((panda$core$Bit) { result641 == NULL }).value;
                    if (!$tmp672) goto $l673;
                    panda$core$Bit $tmp674 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->errorCount, oldErrorCount670);
                    $tmp672 = $tmp674.value;
                    $l673:;
                    panda$core$Bit $tmp675 = { $tmp672 };
                    if ($tmp675.value) {
                    {
                        org$pandalanguage$pandac$Position$init$panda$core$Int64$panda$core$Int64(&$tmp676, ((panda$core$Int64) { 1 }), ((panda$core$Int64) { 1 }));
                        panda$core$String* $tmp678 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s677, ((panda$core$Object*) f667));
                        panda$core$String* $tmp680 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp678, &$s679);
                        panda$core$String* $tmp681 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp680, p_fullName);
                        panda$core$String* $tmp683 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp681, &$s682);
                        org$pandalanguage$pandac$Compiler$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String(self, f667, $tmp676, $tmp683);
                    }
                    }
                }
                }
            }
            goto $l655;
            $l656:;
        }
        panda$core$Bit $tmp684 = panda$core$Bit$$NOT$R$panda$core$Bit(found649);
        if ($tmp684.value) {
        {
            panda$core$String* $tmp686 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s685, suffix643);
            panda$core$String* $tmp688 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp686, &$s687);
            panda$core$String* $tmp689 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp688, ((panda$core$Object*) self->settings->importDirs));
            panda$core$String* $tmp691 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp689, &$s690);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp691);
        }
        }
    }
    }
    return result641;
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Compiler$specialize$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl, org$pandalanguage$pandac$Type* p_rawType) {
    org$pandalanguage$pandac$Type* type695;
    org$pandalanguage$pandac$ClassDecl* result702;
    org$pandalanguage$pandac$Annotations* annotations704;
    panda$collections$Array* supertypes710;
    panda$collections$Iterator* intf$Iter714;
    org$pandalanguage$pandac$Type* intf726;
    panda$collections$HashMap* aliases732;
    panda$core$SimpleRange$LTpanda$core$Int64$GT $tmp735;
    panda$collections$Iterator* m$Iter779;
    org$pandalanguage$pandac$MethodDecl* m791;
    panda$collections$Array* parameters796;
    panda$collections$Iterator* p$Iter799;
    org$pandalanguage$pandac$MethodDecl$Parameter* p811;
    org$pandalanguage$pandac$MethodDecl* clone819;
    panda$collections$Iterator* f$Iter822;
    org$pandalanguage$pandac$FieldDecl* f834;
    org$pandalanguage$pandac$FieldDecl* clone839;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
    panda$core$Bit $tmp693 = panda$core$String$contains$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_rawType)->name, &$s692);
    panda$core$Bit $tmp694 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp693);
    PANDA_ASSERT($tmp694.value);
    org$pandalanguage$pandac$Type* $tmp696 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, p_rawType);
    type695 = $tmp696;
    panda$core$Bit $tmp697 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(type695->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp697.value) {
    {
        panda$core$Object* $tmp698 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(type695->subtypes, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$ClassDecl* $tmp699 = org$pandalanguage$pandac$Compiler$specialize$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl(self, p_cl, ((org$pandalanguage$pandac$Type*) $tmp698));
        return $tmp699;
    }
    }
    panda$core$Bit $tmp700 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(type695->typeKind, ((panda$core$Int64) { 10 }));
    if ($tmp700.value) {
    {
        return p_cl;
    }
    }
    panda$core$Bit $tmp701 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(type695->typeKind, ((panda$core$Int64) { 21 }));
    PANDA_ASSERT($tmp701.value);
    panda$core$Object* $tmp703 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) type695)->name));
    result702 = ((org$pandalanguage$pandac$ClassDecl*) $tmp703);
    if (((panda$core$Bit) { result702 == NULL }).value) {
    {
        panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_cl));
        org$pandalanguage$pandac$Annotations* $tmp705 = (org$pandalanguage$pandac$Annotations*) malloc(24);
        $tmp705->$class = (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class;
        $tmp705->refCount.value = 1;
        panda$core$Int64 $tmp707 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 11 }));
        panda$core$Int64 $tmp708 = panda$core$Int64$$BNOT$R$panda$core$Int64($tmp707);
        panda$core$Int64 $tmp709 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(p_cl->annotations->flags, $tmp708);
        org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp705, $tmp709);
        annotations704 = $tmp705;
        panda$collections$Array* $tmp711 = (panda$collections$Array*) malloc(40);
        $tmp711->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp711->refCount.value = 1;
        panda$collections$Array$init($tmp711);
        supertypes710 = $tmp711;
        org$pandalanguage$pandac$Type* $tmp713 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, type695, p_cl->rawSuper);
        panda$collections$Array$add$panda$collections$Array$T(supertypes710, ((panda$core$Object*) $tmp713));
        {
            ITable* $tmp715 = ((panda$collections$Iterable*) p_cl->rawInterfaces)->$class->itable;
            while ($tmp715->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp715 = $tmp715->next;
            }
            $fn717 $tmp716 = $tmp715->methods[0];
            panda$collections$Iterator* $tmp718 = $tmp716(((panda$collections$Iterable*) p_cl->rawInterfaces));
            intf$Iter714 = $tmp718;
            $l719:;
            ITable* $tmp721 = intf$Iter714->$class->itable;
            while ($tmp721->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp721 = $tmp721->next;
            }
            $fn723 $tmp722 = $tmp721->methods[0];
            panda$core$Bit $tmp724 = $tmp722(intf$Iter714);
            panda$core$Bit $tmp725 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp724);
            if (!$tmp725.value) goto $l720;
            {
                ITable* $tmp727 = intf$Iter714->$class->itable;
                while ($tmp727->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp727 = $tmp727->next;
                }
                $fn729 $tmp728 = $tmp727->methods[1];
                panda$core$Object* $tmp730 = $tmp728(intf$Iter714);
                intf726 = ((org$pandalanguage$pandac$Type*) $tmp730);
                org$pandalanguage$pandac$Type* $tmp731 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, type695, intf726);
                panda$collections$Array$add$panda$collections$Array$T(supertypes710, ((panda$core$Object*) $tmp731));
            }
            goto $l719;
            $l720:;
        }
        panda$collections$HashMap* $tmp733 = (panda$collections$HashMap*) malloc(56);
        $tmp733->$class = (panda$core$Class*) &panda$collections$HashMap$class;
        $tmp733->refCount.value = 1;
        panda$collections$HashMap$init$panda$collections$MapView$LTpanda$collections$HashMap$K$Cpanda$collections$HashMap$V$GT($tmp733, p_cl->aliases);
        aliases732 = $tmp733;
        ITable* $tmp736 = ((panda$collections$CollectionView*) p_cl->parameters)->$class->itable;
        while ($tmp736->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp736 = $tmp736->next;
        }
        $fn738 $tmp737 = $tmp736->methods[0];
        panda$core$Int64 $tmp739 = $tmp737(((panda$collections$CollectionView*) p_cl->parameters));
        panda$core$SimpleRange$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp735, ((panda$core$Int64) { 0 }), $tmp739, ((panda$core$Bit) { false }));
        int64_t $tmp741 = $tmp735.min.value;
        panda$core$Int64 i740 = { $tmp741 };
        int64_t $tmp743 = $tmp735.max.value;
        bool $tmp744 = $tmp735.inclusive.value;
        bool $tmp751 = 1 > 0;
        if ($tmp751) goto $l749; else goto $l750;
        $l749:;
        if ($tmp744) goto $l752; else goto $l753;
        $l752:;
        if ($tmp741 <= $tmp743) goto $l745; else goto $l747;
        $l753:;
        if ($tmp741 < $tmp743) goto $l745; else goto $l747;
        $l750:;
        if ($tmp744) goto $l754; else goto $l755;
        $l754:;
        if ($tmp741 >= $tmp743) goto $l745; else goto $l747;
        $l755:;
        if ($tmp741 > $tmp743) goto $l745; else goto $l747;
        $l745:;
        {
            ITable* $tmp757 = ((panda$collections$ListView*) p_cl->parameters)->$class->itable;
            while ($tmp757->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp757 = $tmp757->next;
            }
            $fn759 $tmp758 = $tmp757->methods[0];
            panda$core$Object* $tmp760 = $tmp758(((panda$collections$ListView*) p_cl->parameters), i740);
            panda$core$Int64 $tmp761 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i740, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp762 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(type695->subtypes, $tmp761);
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(aliases732, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp760))->name), ((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp762))->name));
        }
        $l748:;
        if ($tmp751) goto $l764; else goto $l765;
        $l764:;
        int64_t $tmp766 = $tmp743 - i740.value;
        if ($tmp744) goto $l767; else goto $l768;
        $l767:;
        if ($tmp766 >= 1) goto $l763; else goto $l747;
        $l768:;
        if ($tmp766 > 1) goto $l763; else goto $l747;
        $l765:;
        int64_t $tmp770 = i740.value - $tmp743;
        if ($tmp744) goto $l771; else goto $l772;
        $l771:;
        if ($tmp770 >= -1) goto $l763; else goto $l747;
        $l772:;
        if ($tmp770 > -1) goto $l763; else goto $l747;
        $l763:;
        i740.value += 1;
        goto $l745;
        $l747:;
        org$pandalanguage$pandac$ClassDecl* $tmp774 = (org$pandalanguage$pandac$ClassDecl*) malloc(185);
        $tmp774->$class = (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$class;
        $tmp774->refCount.value = 1;
        panda$collections$Array* $tmp776 = (panda$collections$Array*) malloc(40);
        $tmp776->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp776->refCount.value = 1;
        panda$collections$Array$init($tmp776);
        panda$core$Object* $tmp778 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_cl->symbolTable->parents, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$ClassDecl$init$panda$io$File$org$pandalanguage$pandac$Position$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable($tmp774, p_cl->source, ((org$pandalanguage$pandac$Symbol*) p_cl)->position, ((panda$collections$MapView*) aliases732), p_cl->doccomment, annotations704, p_cl->classKind, ((org$pandalanguage$pandac$Symbol*) type695)->name, ((panda$collections$ListView*) supertypes710), $tmp776, ((org$pandalanguage$pandac$SymbolTable*) $tmp778));
        result702 = $tmp774;
        result702->external = ((panda$core$Bit) { false });
        {
            ITable* $tmp780 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
            while ($tmp780->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp780 = $tmp780->next;
            }
            $fn782 $tmp781 = $tmp780->methods[0];
            panda$collections$Iterator* $tmp783 = $tmp781(((panda$collections$Iterable*) p_cl->methods));
            m$Iter779 = $tmp783;
            $l784:;
            ITable* $tmp786 = m$Iter779->$class->itable;
            while ($tmp786->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp786 = $tmp786->next;
            }
            $fn788 $tmp787 = $tmp786->methods[0];
            panda$core$Bit $tmp789 = $tmp787(m$Iter779);
            panda$core$Bit $tmp790 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp789);
            if (!$tmp790.value) goto $l785;
            {
                ITable* $tmp792 = m$Iter779->$class->itable;
                while ($tmp792->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp792 = $tmp792->next;
                }
                $fn794 $tmp793 = $tmp792->methods[1];
                panda$core$Object* $tmp795 = $tmp793(m$Iter779);
                m791 = ((org$pandalanguage$pandac$MethodDecl*) $tmp795);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m791);
                panda$collections$Array* $tmp797 = (panda$collections$Array*) malloc(40);
                $tmp797->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp797->refCount.value = 1;
                panda$collections$Array$init($tmp797);
                parameters796 = $tmp797;
                {
                    ITable* $tmp800 = ((panda$collections$Iterable*) m791->parameters)->$class->itable;
                    while ($tmp800->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp800 = $tmp800->next;
                    }
                    $fn802 $tmp801 = $tmp800->methods[0];
                    panda$collections$Iterator* $tmp803 = $tmp801(((panda$collections$Iterable*) m791->parameters));
                    p$Iter799 = $tmp803;
                    $l804:;
                    ITable* $tmp806 = p$Iter799->$class->itable;
                    while ($tmp806->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp806 = $tmp806->next;
                    }
                    $fn808 $tmp807 = $tmp806->methods[0];
                    panda$core$Bit $tmp809 = $tmp807(p$Iter799);
                    panda$core$Bit $tmp810 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp809);
                    if (!$tmp810.value) goto $l805;
                    {
                        ITable* $tmp812 = p$Iter799->$class->itable;
                        while ($tmp812->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp812 = $tmp812->next;
                        }
                        $fn814 $tmp813 = $tmp812->methods[1];
                        panda$core$Object* $tmp815 = $tmp813(p$Iter799);
                        p811 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp815);
                        org$pandalanguage$pandac$MethodDecl$Parameter* $tmp816 = (org$pandalanguage$pandac$MethodDecl$Parameter*) malloc(32);
                        $tmp816->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class;
                        $tmp816->refCount.value = 1;
                        org$pandalanguage$pandac$Type* $tmp818 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, type695, p811->type);
                        org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp816, p811->name, $tmp818);
                        panda$collections$Array$add$panda$collections$Array$T(parameters796, ((panda$core$Object*) $tmp816));
                    }
                    goto $l804;
                    $l805:;
                }
                org$pandalanguage$pandac$MethodDecl* $tmp820 = (org$pandalanguage$pandac$MethodDecl*) malloc(121);
                $tmp820->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class;
                $tmp820->refCount.value = 1;
                org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp820, result702, ((org$pandalanguage$pandac$Symbol*) m791)->position, m791->doccomment, m791->annotations, m791->methodKind, ((org$pandalanguage$pandac$Symbol*) m791)->name, parameters796, m791->returnType, m791->body);
                clone819 = $tmp820;
                panda$collections$Array$add$panda$collections$Array$T(result702->methods, ((panda$core$Object*) clone819));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result702->symbolTable, ((org$pandalanguage$pandac$Symbol*) clone819));
            }
            goto $l784;
            $l785:;
        }
        {
            ITable* $tmp823 = ((panda$collections$Iterable*) p_cl->fields)->$class->itable;
            while ($tmp823->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp823 = $tmp823->next;
            }
            $fn825 $tmp824 = $tmp823->methods[0];
            panda$collections$Iterator* $tmp826 = $tmp824(((panda$collections$Iterable*) p_cl->fields));
            f$Iter822 = $tmp826;
            $l827:;
            ITable* $tmp829 = f$Iter822->$class->itable;
            while ($tmp829->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp829 = $tmp829->next;
            }
            $fn831 $tmp830 = $tmp829->methods[0];
            panda$core$Bit $tmp832 = $tmp830(f$Iter822);
            panda$core$Bit $tmp833 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp832);
            if (!$tmp833.value) goto $l828;
            {
                ITable* $tmp835 = f$Iter822->$class->itable;
                while ($tmp835->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp835 = $tmp835->next;
                }
                $fn837 $tmp836 = $tmp835->methods[1];
                panda$core$Object* $tmp838 = $tmp836(f$Iter822);
                f834 = ((org$pandalanguage$pandac$FieldDecl*) $tmp838);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self, f834);
                org$pandalanguage$pandac$FieldDecl* $tmp840 = (org$pandalanguage$pandac$FieldDecl*) malloc(113);
                $tmp840->$class = (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class;
                $tmp840->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp842 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, type695, f834->type);
                org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp840, result702, ((org$pandalanguage$pandac$Symbol*) f834)->position, f834->doccomment, f834->annotations, f834->fieldKind, ((org$pandalanguage$pandac$Symbol*) f834)->name, $tmp842, f834->rawValue);
                clone839 = $tmp840;
                panda$collections$Array$add$panda$collections$Array$T(result702->fields, ((panda$core$Object*) clone839));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result702->symbolTable, ((org$pandalanguage$pandac$Symbol*) clone839));
            }
            goto $l827;
            $l828:;
        }
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classes, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) result702)->name), ((panda$core$Object*) result702));
        panda$collections$Array$add$panda$collections$Array$T(self->compilationQueue, ((panda$core$Object*) result702));
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    }
    }
    return result702;
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type) {
    org$pandalanguage$pandac$ClassDecl* result843;
    PANDA_ASSERT(p_type->resolved.value);
    switch (p_type->typeKind.value) {
        case 10:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp844 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Position$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Symbol*) p_type)->position, ((org$pandalanguage$pandac$Symbol*) p_type)->name);
            result843 = $tmp844;
        }
        break;
        case 11:
        case 21:
        {
            panda$core$Object* $tmp845 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$ClassDecl* $tmp846 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Type*) $tmp845));
            result843 = $tmp846;
        }
        break;
        case 22:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp847 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_type->parameter->bound);
            return $tmp847;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
    panda$core$Bit $tmp848 = org$pandalanguage$pandac$Annotations$isSpecialize$R$panda$core$Bit(result843->annotations);
    if ($tmp848.value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp849 = org$pandalanguage$pandac$Compiler$specialize$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl(self, result843, p_type);
        result843 = $tmp849;
    }
    }
    return result843;
}
panda$collections$Set* org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_t) {
    org$pandalanguage$pandac$ClassDecl* cl850;
    panda$collections$Set* result852;
    panda$collections$Iterator* intf$Iter857;
    org$pandalanguage$pandac$Type* intf869;
    org$pandalanguage$pandac$ClassDecl* $tmp851 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_t);
    cl850 = $tmp851;
    PANDA_ASSERT(((panda$core$Bit) { cl850 != NULL }).value);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, cl850);
    panda$collections$Set* $tmp853 = (panda$collections$Set*) malloc(24);
    $tmp853->$class = (panda$core$Class*) &panda$collections$Set$class;
    $tmp853->refCount.value = 1;
    panda$collections$Set$init($tmp853);
    result852 = $tmp853;
    if (((panda$core$Bit) { cl850->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp855 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_t, cl850->rawSuper);
        panda$collections$Set* $tmp856 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self, $tmp855);
        panda$collections$Set$addAll$panda$collections$CollectionView$LTpanda$collections$Set$T$GT(result852, ((panda$collections$CollectionView*) $tmp856));
    }
    }
    {
        ITable* $tmp858 = ((panda$collections$Iterable*) cl850->rawInterfaces)->$class->itable;
        while ($tmp858->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp858 = $tmp858->next;
        }
        $fn860 $tmp859 = $tmp858->methods[0];
        panda$collections$Iterator* $tmp861 = $tmp859(((panda$collections$Iterable*) cl850->rawInterfaces));
        intf$Iter857 = $tmp861;
        $l862:;
        ITable* $tmp864 = intf$Iter857->$class->itable;
        while ($tmp864->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp864 = $tmp864->next;
        }
        $fn866 $tmp865 = $tmp864->methods[0];
        panda$core$Bit $tmp867 = $tmp865(intf$Iter857);
        panda$core$Bit $tmp868 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp867);
        if (!$tmp868.value) goto $l863;
        {
            ITable* $tmp870 = intf$Iter857->$class->itable;
            while ($tmp870->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp870 = $tmp870->next;
            }
            $fn872 $tmp871 = $tmp870->methods[1];
            panda$core$Object* $tmp873 = $tmp871(intf$Iter857);
            intf869 = ((org$pandalanguage$pandac$Type*) $tmp873);
            org$pandalanguage$pandac$Type* $tmp874 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_t, intf869);
            panda$collections$Set* $tmp875 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self, $tmp874);
            panda$collections$Set$addAll$panda$collections$CollectionView$LTpanda$collections$Set$T$GT(result852, ((panda$collections$CollectionView*) $tmp875));
        }
        goto $l862;
        $l863:;
    }
    panda$core$Bit $tmp876 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(cl850->classKind, ((panda$core$Int64) { 5012 }));
    if ($tmp876.value) {
    {
        panda$collections$Set$add$panda$collections$Set$T(result852, ((panda$collections$Key*) p_t));
    }
    }
    return result852;
}
panda$core$Bit org$pandalanguage$pandac$Compiler$signatureMatch$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_t1, org$pandalanguage$pandac$Type* p_t2) {
    panda$core$SimpleRange$LTpanda$core$Int64$GT $tmp882;
    panda$core$Bit $tmp877 = org$pandalanguage$pandac$Type$isMethod$R$panda$core$Bit(p_t1);
    PANDA_ASSERT($tmp877.value);
    panda$core$Bit $tmp878 = org$pandalanguage$pandac$Type$isMethod$R$panda$core$Bit(p_t2);
    PANDA_ASSERT($tmp878.value);
    panda$core$Int64 $tmp879 = panda$collections$Array$get_count$R$panda$core$Int64(p_t1->subtypes);
    panda$core$Int64 $tmp880 = panda$collections$Array$get_count$R$panda$core$Int64(p_t2->subtypes);
    panda$core$Bit $tmp881 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp879, $tmp880);
    if ($tmp881.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Int64 $tmp883 = panda$collections$Array$get_count$R$panda$core$Int64(p_t1->subtypes);
    panda$core$SimpleRange$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp882, ((panda$core$Int64) { 0 }), $tmp883, ((panda$core$Bit) { false }));
    int64_t $tmp885 = $tmp882.min.value;
    panda$core$Int64 i884 = { $tmp885 };
    int64_t $tmp887 = $tmp882.max.value;
    bool $tmp888 = $tmp882.inclusive.value;
    bool $tmp895 = 1 > 0;
    if ($tmp895) goto $l893; else goto $l894;
    $l893:;
    if ($tmp888) goto $l896; else goto $l897;
    $l896:;
    if ($tmp885 <= $tmp887) goto $l889; else goto $l891;
    $l897:;
    if ($tmp885 < $tmp887) goto $l889; else goto $l891;
    $l894:;
    if ($tmp888) goto $l898; else goto $l899;
    $l898:;
    if ($tmp885 >= $tmp887) goto $l889; else goto $l891;
    $l899:;
    if ($tmp885 > $tmp887) goto $l889; else goto $l891;
    $l889:;
    {
        panda$core$Object* $tmp901 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t1->subtypes, i884);
        panda$core$Object* $tmp902 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t2->subtypes, i884);
        panda$core$Bit $tmp903 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp901), ((org$pandalanguage$pandac$Type*) $tmp902));
        if ($tmp903.value) {
        {
            return ((panda$core$Bit) { false });
        }
        }
    }
    $l892:;
    if ($tmp895) goto $l905; else goto $l906;
    $l905:;
    int64_t $tmp907 = $tmp887 - i884.value;
    if ($tmp888) goto $l908; else goto $l909;
    $l908:;
    if ($tmp907 >= 1) goto $l904; else goto $l891;
    $l909:;
    if ($tmp907 > 1) goto $l904; else goto $l891;
    $l906:;
    int64_t $tmp911 = i884.value - $tmp887;
    if ($tmp888) goto $l912; else goto $l913;
    $l912:;
    if ($tmp911 >= -1) goto $l904; else goto $l891;
    $l913:;
    if ($tmp911 > -1) goto $l904; else goto $l891;
    $l904:;
    i884.value += 1;
    goto $l889;
    $l891:;
    return ((panda$core$Bit) { true });
}
org$pandalanguage$pandac$MethodDecl* org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_owner, panda$core$String* p_name, org$pandalanguage$pandac$Type* p_methodType, panda$core$Bit p_checkInterfaces) {
    org$pandalanguage$pandac$ClassDecl* cl915;
    panda$collections$Iterator* test$Iter917;
    org$pandalanguage$pandac$MethodDecl* test929;
    panda$collections$Iterator* raw$Iter942;
    org$pandalanguage$pandac$Type* raw954;
    org$pandalanguage$pandac$MethodDecl* result959;
    org$pandalanguage$pandac$ClassDecl* $tmp916 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_owner);
    cl915 = $tmp916;
    PANDA_ASSERT(((panda$core$Bit) { cl915 != NULL }).value);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, cl915);
    {
        ITable* $tmp918 = ((panda$collections$Iterable*) cl915->methods)->$class->itable;
        while ($tmp918->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp918 = $tmp918->next;
        }
        $fn920 $tmp919 = $tmp918->methods[0];
        panda$collections$Iterator* $tmp921 = $tmp919(((panda$collections$Iterable*) cl915->methods));
        test$Iter917 = $tmp921;
        $l922:;
        ITable* $tmp924 = test$Iter917->$class->itable;
        while ($tmp924->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp924 = $tmp924->next;
        }
        $fn926 $tmp925 = $tmp924->methods[0];
        panda$core$Bit $tmp927 = $tmp925(test$Iter917);
        panda$core$Bit $tmp928 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp927);
        if (!$tmp928.value) goto $l923;
        {
            ITable* $tmp930 = test$Iter917->$class->itable;
            while ($tmp930->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp930 = $tmp930->next;
            }
            $fn932 $tmp931 = $tmp930->methods[1];
            panda$core$Object* $tmp933 = $tmp931(test$Iter917);
            test929 = ((org$pandalanguage$pandac$MethodDecl*) $tmp933);
            panda$core$Bit $tmp934 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) test929)->name, p_name);
            if ($tmp934.value) {
            {
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, test929);
                org$pandalanguage$pandac$Type* $tmp935 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, test929);
                org$pandalanguage$pandac$Type* $tmp936 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_owner, $tmp935);
                panda$core$Bit $tmp937 = org$pandalanguage$pandac$Compiler$signatureMatch$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, $tmp936, p_methodType);
                if ($tmp937.value) {
                {
                    return test929;
                }
                }
            }
            }
        }
        goto $l922;
        $l923:;
    }
    bool $tmp938 = p_checkInterfaces.value;
    if ($tmp938) goto $l939;
    panda$core$Bit $tmp940 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(cl915->classKind, ((panda$core$Int64) { 5012 }));
    $tmp938 = $tmp940.value;
    $l939:;
    panda$core$Bit $tmp941 = { $tmp938 };
    if ($tmp941.value) {
    {
        {
            ITable* $tmp943 = ((panda$collections$Iterable*) cl915->rawInterfaces)->$class->itable;
            while ($tmp943->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp943 = $tmp943->next;
            }
            $fn945 $tmp944 = $tmp943->methods[0];
            panda$collections$Iterator* $tmp946 = $tmp944(((panda$collections$Iterable*) cl915->rawInterfaces));
            raw$Iter942 = $tmp946;
            $l947:;
            ITable* $tmp949 = raw$Iter942->$class->itable;
            while ($tmp949->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp949 = $tmp949->next;
            }
            $fn951 $tmp950 = $tmp949->methods[0];
            panda$core$Bit $tmp952 = $tmp950(raw$Iter942);
            panda$core$Bit $tmp953 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp952);
            if (!$tmp953.value) goto $l948;
            {
                ITable* $tmp955 = raw$Iter942->$class->itable;
                while ($tmp955->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp955 = $tmp955->next;
                }
                $fn957 $tmp956 = $tmp955->methods[1];
                panda$core$Object* $tmp958 = $tmp956(raw$Iter942);
                raw954 = ((org$pandalanguage$pandac$Type*) $tmp958);
                org$pandalanguage$pandac$Type* $tmp960 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_owner, raw954);
                org$pandalanguage$pandac$MethodDecl* $tmp961 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp960, p_name, p_methodType, p_checkInterfaces);
                result959 = $tmp961;
                if (((panda$core$Bit) { result959 != NULL }).value) {
                {
                    return result959;
                }
                }
            }
            goto $l947;
            $l948:;
        }
    }
    }
    if (((panda$core$Bit) { cl915->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp962 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_owner, cl915->rawSuper);
        org$pandalanguage$pandac$MethodDecl* $tmp963 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp962, p_name, p_methodType, p_checkInterfaces);
        return $tmp963;
    }
    }
    return NULL;
}
org$pandalanguage$pandac$MethodDecl* org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$Type* methodType965;
    org$pandalanguage$pandac$Type* owner967;
    panda$collections$Iterator* raw$Iter969;
    org$pandalanguage$pandac$Type* raw981;
    org$pandalanguage$pandac$MethodDecl* result986;
    panda$core$Bit $tmp964 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 59 }));
    if ($tmp964.value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
    org$pandalanguage$pandac$Type* $tmp966 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, p_m);
    methodType965 = $tmp966;
    org$pandalanguage$pandac$Type* $tmp968 = org$pandalanguage$pandac$ClassDecl$typeWithParameters$R$org$pandalanguage$pandac$Type(p_m->owner);
    owner967 = $tmp968;
    {
        ITable* $tmp970 = ((panda$collections$Iterable*) p_m->owner->rawInterfaces)->$class->itable;
        while ($tmp970->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp970 = $tmp970->next;
        }
        $fn972 $tmp971 = $tmp970->methods[0];
        panda$collections$Iterator* $tmp973 = $tmp971(((panda$collections$Iterable*) p_m->owner->rawInterfaces));
        raw$Iter969 = $tmp973;
        $l974:;
        ITable* $tmp976 = raw$Iter969->$class->itable;
        while ($tmp976->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp976 = $tmp976->next;
        }
        $fn978 $tmp977 = $tmp976->methods[0];
        panda$core$Bit $tmp979 = $tmp977(raw$Iter969);
        panda$core$Bit $tmp980 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp979);
        if (!$tmp980.value) goto $l975;
        {
            ITable* $tmp982 = raw$Iter969->$class->itable;
            while ($tmp982->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp982 = $tmp982->next;
            }
            $fn984 $tmp983 = $tmp982->methods[1];
            panda$core$Object* $tmp985 = $tmp983(raw$Iter969);
            raw981 = ((org$pandalanguage$pandac$Type*) $tmp985);
            org$pandalanguage$pandac$Type* $tmp987 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, owner967, raw981);
            org$pandalanguage$pandac$MethodDecl* $tmp988 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp987, ((org$pandalanguage$pandac$Symbol*) p_m)->name, methodType965, ((panda$core$Bit) { true }));
            result986 = $tmp988;
            if (((panda$core$Bit) { result986 != NULL }).value) {
            {
                return result986;
            }
            }
        }
        goto $l974;
        $l975:;
    }
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_m->owner);
    if (((panda$core$Bit) { p_m->owner->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp989 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, owner967, p_m->owner->rawSuper);
        org$pandalanguage$pandac$MethodDecl* $tmp990 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp989, ((org$pandalanguage$pandac$Symbol*) p_m)->name, methodType965, ((panda$core$Bit) { true }));
        return $tmp990;
    }
    }
    return NULL;
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$interfaceMethods$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl, org$pandalanguage$pandac$Type* p_intf) {
    org$pandalanguage$pandac$ClassDecl* intfClass991;
    panda$collections$Array* result993;
    panda$collections$Iterator* m$Iter996;
    org$pandalanguage$pandac$MethodDecl* m1008;
    org$pandalanguage$pandac$MethodDecl* found1013;
    org$pandalanguage$pandac$ClassDecl* $tmp992 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_intf);
    intfClass991 = $tmp992;
    PANDA_ASSERT(((panda$core$Bit) { intfClass991 != NULL }).value);
    panda$collections$Array* $tmp994 = (panda$collections$Array*) malloc(40);
    $tmp994->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp994->refCount.value = 1;
    panda$collections$Array$init($tmp994);
    result993 = $tmp994;
    {
        ITable* $tmp997 = ((panda$collections$Iterable*) intfClass991->methods)->$class->itable;
        while ($tmp997->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp997 = $tmp997->next;
        }
        $fn999 $tmp998 = $tmp997->methods[0];
        panda$collections$Iterator* $tmp1000 = $tmp998(((panda$collections$Iterable*) intfClass991->methods));
        m$Iter996 = $tmp1000;
        $l1001:;
        ITable* $tmp1003 = m$Iter996->$class->itable;
        while ($tmp1003->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1003 = $tmp1003->next;
        }
        $fn1005 $tmp1004 = $tmp1003->methods[0];
        panda$core$Bit $tmp1006 = $tmp1004(m$Iter996);
        panda$core$Bit $tmp1007 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1006);
        if (!$tmp1007.value) goto $l1002;
        {
            ITable* $tmp1009 = m$Iter996->$class->itable;
            while ($tmp1009->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1009 = $tmp1009->next;
            }
            $fn1011 $tmp1010 = $tmp1009->methods[1];
            panda$core$Object* $tmp1012 = $tmp1010(m$Iter996);
            m1008 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1012);
            org$pandalanguage$pandac$Type* $tmp1014 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
            org$pandalanguage$pandac$Type* $tmp1015 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, m1008);
            org$pandalanguage$pandac$Type* $tmp1016 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_intf, $tmp1015);
            org$pandalanguage$pandac$MethodDecl* $tmp1017 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp1014, ((org$pandalanguage$pandac$Symbol*) m1008)->name, $tmp1016, ((panda$core$Bit) { false }));
            found1013 = $tmp1017;
            PANDA_ASSERT(((panda$core$Bit) { found1013 != NULL }).value);
            panda$collections$Array$add$panda$collections$Array$T(result993, ((panda$core$Object*) found1013));
        }
        goto $l1001;
        $l1002:;
    }
    return ((panda$collections$ListView*) result993);
}
org$pandalanguage$pandac$SymbolTable* org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$ClassDecl* superCl1019;
    panda$collections$Iterator* rawIntf$Iter1022;
    org$pandalanguage$pandac$Type* rawIntf1034;
    org$pandalanguage$pandac$ClassDecl* intf1039;
    panda$core$Bit $tmp1018 = panda$core$Bit$$NOT$R$panda$core$Bit(p_cl->symbolTableResolved);
    if ($tmp1018.value) {
    {
        p_cl->symbolTableResolved = ((panda$core$Bit) { true });
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
        if (((panda$core$Bit) { p_cl->rawSuper != NULL }).value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp1020 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_cl->rawSuper);
            superCl1019 = $tmp1020;
            if (((panda$core$Bit) { superCl1019 != NULL }).value) {
            {
                org$pandalanguage$pandac$SymbolTable* $tmp1021 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, superCl1019);
                panda$collections$Array$add$panda$collections$Array$T(p_cl->symbolTable->parents, ((panda$core$Object*) $tmp1021));
            }
            }
        }
        }
        {
            ITable* $tmp1023 = ((panda$collections$Iterable*) p_cl->rawInterfaces)->$class->itable;
            while ($tmp1023->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1023 = $tmp1023->next;
            }
            $fn1025 $tmp1024 = $tmp1023->methods[0];
            panda$collections$Iterator* $tmp1026 = $tmp1024(((panda$collections$Iterable*) p_cl->rawInterfaces));
            rawIntf$Iter1022 = $tmp1026;
            $l1027:;
            ITable* $tmp1029 = rawIntf$Iter1022->$class->itable;
            while ($tmp1029->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1029 = $tmp1029->next;
            }
            $fn1031 $tmp1030 = $tmp1029->methods[0];
            panda$core$Bit $tmp1032 = $tmp1030(rawIntf$Iter1022);
            panda$core$Bit $tmp1033 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1032);
            if (!$tmp1033.value) goto $l1028;
            {
                ITable* $tmp1035 = rawIntf$Iter1022->$class->itable;
                while ($tmp1035->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1035 = $tmp1035->next;
                }
                $fn1037 $tmp1036 = $tmp1035->methods[1];
                panda$core$Object* $tmp1038 = $tmp1036(rawIntf$Iter1022);
                rawIntf1034 = ((org$pandalanguage$pandac$Type*) $tmp1038);
                org$pandalanguage$pandac$ClassDecl* $tmp1040 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, rawIntf1034);
                intf1039 = $tmp1040;
                if (((panda$core$Bit) { intf1039 != NULL }).value) {
                {
                    org$pandalanguage$pandac$SymbolTable* $tmp1041 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, intf1039);
                    panda$collections$Array$add$panda$collections$Array$T(p_cl->symbolTable->parents, ((panda$core$Object*) $tmp1041));
                }
                }
            }
            goto $l1027;
            $l1028:;
        }
    }
    }
    return p_cl->symbolTable;
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$ClassDecl* superCl1044;
    panda$collections$Iterator* derived$Iter1047;
    org$pandalanguage$pandac$MethodDecl* derived1059;
    panda$core$Bit found1069;
    panda$core$SimpleRange$LTpanda$core$Int64$GT $tmp1070;
    org$pandalanguage$pandac$MethodDecl* base1089;
    panda$core$Int64 $tmp1042 = panda$collections$Array$get_count$R$panda$core$Int64(p_cl->virtualMethods);
    panda$core$Bit $tmp1043 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1042, ((panda$core$Int64) { 0 }));
    if ($tmp1043.value) {
    {
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
        panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_cl));
        if (((panda$core$Bit) { p_cl->rawSuper != NULL }).value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp1045 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_cl->rawSuper);
            superCl1044 = $tmp1045;
            if (((panda$core$Bit) { superCl1044 == NULL }).value) {
            {
                panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
                return ((panda$collections$ListView*) p_cl->virtualMethods);
            }
            }
            panda$collections$ListView* $tmp1046 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self, superCl1044);
            panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(p_cl->virtualMethods, ((panda$collections$CollectionView*) $tmp1046));
        }
        }
        {
            ITable* $tmp1048 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
            while ($tmp1048->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1048 = $tmp1048->next;
            }
            $fn1050 $tmp1049 = $tmp1048->methods[0];
            panda$collections$Iterator* $tmp1051 = $tmp1049(((panda$collections$Iterable*) p_cl->methods));
            derived$Iter1047 = $tmp1051;
            $l1052:;
            ITable* $tmp1054 = derived$Iter1047->$class->itable;
            while ($tmp1054->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1054 = $tmp1054->next;
            }
            $fn1056 $tmp1055 = $tmp1054->methods[0];
            panda$core$Bit $tmp1057 = $tmp1055(derived$Iter1047);
            panda$core$Bit $tmp1058 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1057);
            if (!$tmp1058.value) goto $l1053;
            {
                ITable* $tmp1060 = derived$Iter1047->$class->itable;
                while ($tmp1060->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1060 = $tmp1060->next;
                }
                $fn1062 $tmp1061 = $tmp1060->methods[1];
                panda$core$Object* $tmp1063 = $tmp1061(derived$Iter1047);
                derived1059 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1063);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, derived1059);
                panda$core$Bit $tmp1065 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(derived1059->methodKind, ((panda$core$Int64) { 59 }));
                bool $tmp1064 = $tmp1065.value;
                if ($tmp1064) goto $l1066;
                panda$core$Bit $tmp1067 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(derived1059->annotations);
                $tmp1064 = $tmp1067.value;
                $l1066:;
                panda$core$Bit $tmp1068 = { $tmp1064 };
                if ($tmp1068.value) {
                {
                    goto $l1052;
                }
                }
                found1069 = ((panda$core$Bit) { false });
                panda$core$Int64 $tmp1071 = panda$collections$Array$get_count$R$panda$core$Int64(p_cl->virtualMethods);
                panda$core$SimpleRange$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1070, ((panda$core$Int64) { 0 }), $tmp1071, ((panda$core$Bit) { false }));
                int64_t $tmp1073 = $tmp1070.min.value;
                panda$core$Int64 i1072 = { $tmp1073 };
                int64_t $tmp1075 = $tmp1070.max.value;
                bool $tmp1076 = $tmp1070.inclusive.value;
                bool $tmp1083 = 1 > 0;
                if ($tmp1083) goto $l1081; else goto $l1082;
                $l1081:;
                if ($tmp1076) goto $l1084; else goto $l1085;
                $l1084:;
                if ($tmp1073 <= $tmp1075) goto $l1077; else goto $l1079;
                $l1085:;
                if ($tmp1073 < $tmp1075) goto $l1077; else goto $l1079;
                $l1082:;
                if ($tmp1076) goto $l1086; else goto $l1087;
                $l1086:;
                if ($tmp1073 >= $tmp1075) goto $l1077; else goto $l1079;
                $l1087:;
                if ($tmp1073 > $tmp1075) goto $l1077; else goto $l1079;
                $l1077:;
                {
                    panda$core$Object* $tmp1090 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_cl->virtualMethods, i1072);
                    base1089 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1090);
                    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, base1089);
                    panda$core$Bit $tmp1091 = org$pandalanguage$pandac$MethodDecl$matches$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(derived1059, base1089);
                    if ($tmp1091.value) {
                    {
                        found1069 = ((panda$core$Bit) { true });
                        panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(p_cl->virtualMethods, i1072, ((panda$core$Object*) derived1059));
                        goto $l1079;
                    }
                    }
                }
                $l1080:;
                if ($tmp1083) goto $l1093; else goto $l1094;
                $l1093:;
                int64_t $tmp1095 = $tmp1075 - i1072.value;
                if ($tmp1076) goto $l1096; else goto $l1097;
                $l1096:;
                if ($tmp1095 >= 1) goto $l1092; else goto $l1079;
                $l1097:;
                if ($tmp1095 > 1) goto $l1092; else goto $l1079;
                $l1094:;
                int64_t $tmp1099 = i1072.value - $tmp1075;
                if ($tmp1076) goto $l1100; else goto $l1101;
                $l1100:;
                if ($tmp1099 >= -1) goto $l1092; else goto $l1079;
                $l1101:;
                if ($tmp1099 > -1) goto $l1092; else goto $l1079;
                $l1092:;
                i1072.value += 1;
                goto $l1077;
                $l1079:;
                panda$core$Bit $tmp1103 = panda$core$Bit$$NOT$R$panda$core$Bit(found1069);
                if ($tmp1103.value) {
                {
                    panda$collections$Array$add$panda$collections$Array$T(p_cl->virtualMethods, ((panda$core$Object*) derived1059));
                }
                }
            }
            goto $l1052;
            $l1053:;
        }
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    }
    }
    return ((panda$collections$ListView*) p_cl->virtualMethods);
}
void org$pandalanguage$pandac$Compiler$addInheritedMethods$org$pandalanguage$pandac$SymbolTable$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$SymbolTable* p_st, panda$core$String* p_name, panda$collections$Array* p_result, panda$collections$ListView* p_types) {
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$getMethodReference$org$pandalanguage$pandac$SymbolTable$org$pandalanguage$pandac$IRNode$Q$panda$core$String$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$SymbolTable* p_st, org$pandalanguage$pandac$IRNode* p_target, panda$core$String* p_name, org$pandalanguage$pandac$Position p_position, panda$collections$ListView* p_types) {
    panda$collections$Array* methods1104;
    org$pandalanguage$pandac$Symbol* s1107;
    panda$collections$Iterator* m$Iter1113;
    org$pandalanguage$pandac$MethodDecl* m1125;
    panda$collections$Iterator* p$Iter1132;
    org$pandalanguage$pandac$SymbolTable* p1144;
    panda$collections$Array* children1149;
    panda$collections$Array* types1161;
    panda$collections$Iterator* m$Iter1164;
    org$pandalanguage$pandac$MethodRef* m1176;
    panda$collections$Array* $tmp1105 = (panda$collections$Array*) malloc(40);
    $tmp1105->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1105->refCount.value = 1;
    panda$collections$Array$init($tmp1105);
    methods1104 = $tmp1105;
    org$pandalanguage$pandac$Symbol* $tmp1108 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(p_st, p_name);
    s1107 = $tmp1108;
    PANDA_ASSERT(((panda$core$Bit) { s1107 != NULL }).value);
    panda$core$Bit $tmp1109 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(s1107->kind, ((panda$core$Int64) { 204 }));
    if ($tmp1109.value) {
    {
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, ((org$pandalanguage$pandac$MethodDecl*) s1107));
        org$pandalanguage$pandac$MethodRef* $tmp1110 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
        $tmp1110->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
        $tmp1110->refCount.value = 1;
        org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp1110, ((org$pandalanguage$pandac$MethodDecl*) s1107), p_types);
        panda$collections$Array$add$panda$collections$Array$T(methods1104, ((panda$core$Object*) $tmp1110));
    }
    }
    else {
    {
        panda$core$Bit $tmp1112 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(s1107->kind, ((panda$core$Int64) { 205 }));
        PANDA_ASSERT($tmp1112.value);
        {
            ITable* $tmp1114 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s1107)->methods)->$class->itable;
            while ($tmp1114->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1114 = $tmp1114->next;
            }
            $fn1116 $tmp1115 = $tmp1114->methods[0];
            panda$collections$Iterator* $tmp1117 = $tmp1115(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s1107)->methods));
            m$Iter1113 = $tmp1117;
            $l1118:;
            ITable* $tmp1120 = m$Iter1113->$class->itable;
            while ($tmp1120->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1120 = $tmp1120->next;
            }
            $fn1122 $tmp1121 = $tmp1120->methods[0];
            panda$core$Bit $tmp1123 = $tmp1121(m$Iter1113);
            panda$core$Bit $tmp1124 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1123);
            if (!$tmp1124.value) goto $l1119;
            {
                ITable* $tmp1126 = m$Iter1113->$class->itable;
                while ($tmp1126->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1126 = $tmp1126->next;
                }
                $fn1128 $tmp1127 = $tmp1126->methods[1];
                panda$core$Object* $tmp1129 = $tmp1127(m$Iter1113);
                m1125 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1129);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m1125);
                org$pandalanguage$pandac$MethodRef* $tmp1130 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                $tmp1130->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                $tmp1130->refCount.value = 1;
                org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp1130, m1125, p_types);
                panda$collections$Array$add$panda$collections$Array$T(methods1104, ((panda$core$Object*) $tmp1130));
            }
            goto $l1118;
            $l1119:;
        }
    }
    }
    {
        ITable* $tmp1133 = ((panda$collections$Iterable*) p_st->parents)->$class->itable;
        while ($tmp1133->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1133 = $tmp1133->next;
        }
        $fn1135 $tmp1134 = $tmp1133->methods[0];
        panda$collections$Iterator* $tmp1136 = $tmp1134(((panda$collections$Iterable*) p_st->parents));
        p$Iter1132 = $tmp1136;
        $l1137:;
        ITable* $tmp1139 = p$Iter1132->$class->itable;
        while ($tmp1139->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1139 = $tmp1139->next;
        }
        $fn1141 $tmp1140 = $tmp1139->methods[0];
        panda$core$Bit $tmp1142 = $tmp1140(p$Iter1132);
        panda$core$Bit $tmp1143 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1142);
        if (!$tmp1143.value) goto $l1138;
        {
            ITable* $tmp1145 = p$Iter1132->$class->itable;
            while ($tmp1145->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1145 = $tmp1145->next;
            }
            $fn1147 $tmp1146 = $tmp1145->methods[1];
            panda$core$Object* $tmp1148 = $tmp1146(p$Iter1132);
            p1144 = ((org$pandalanguage$pandac$SymbolTable*) $tmp1148);
            org$pandalanguage$pandac$Compiler$addInheritedMethods$org$pandalanguage$pandac$SymbolTable$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p1144, p_name, methods1104, p_types);
        }
        goto $l1137;
        $l1138:;
    }
    panda$collections$Array* $tmp1150 = (panda$collections$Array*) malloc(40);
    $tmp1150->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1150->refCount.value = 1;
    panda$collections$Array$init($tmp1150);
    children1149 = $tmp1150;
    if (((panda$core$Bit) { p_target != NULL }).value) {
    {
        panda$collections$Array$add$panda$collections$Array$T(children1149, ((panda$core$Object*) p_target));
    }
    }
    panda$core$Int64 $tmp1152 = panda$collections$Array$get_count$R$panda$core$Int64(methods1104);
    panda$core$Bit $tmp1153 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1152, ((panda$core$Int64) { 1 }));
    if ($tmp1153.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp1154 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp1154->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp1154->refCount.value = 1;
        panda$core$Object* $tmp1156 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(methods1104, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Type* $tmp1157 = org$pandalanguage$pandac$MethodRef$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$MethodRef*) $tmp1156));
        panda$core$Object* $tmp1158 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(methods1104, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1154, ((panda$core$Int64) { 1002 }), p_position, $tmp1157, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodRef*) $tmp1158)), ((panda$collections$ListView*) children1149));
        return $tmp1154;
    }
    }
    else {
    {
        panda$core$Int64 $tmp1159 = panda$collections$Array$get_count$R$panda$core$Int64(methods1104);
        panda$core$Bit $tmp1160 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1159, ((panda$core$Int64) { 0 }));
        PANDA_ASSERT($tmp1160.value);
        panda$collections$Array* $tmp1162 = (panda$collections$Array*) malloc(40);
        $tmp1162->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp1162->refCount.value = 1;
        panda$collections$Array$init($tmp1162);
        types1161 = $tmp1162;
        {
            ITable* $tmp1165 = ((panda$collections$Iterable*) methods1104)->$class->itable;
            while ($tmp1165->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1165 = $tmp1165->next;
            }
            $fn1167 $tmp1166 = $tmp1165->methods[0];
            panda$collections$Iterator* $tmp1168 = $tmp1166(((panda$collections$Iterable*) methods1104));
            m$Iter1164 = $tmp1168;
            $l1169:;
            ITable* $tmp1171 = m$Iter1164->$class->itable;
            while ($tmp1171->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1171 = $tmp1171->next;
            }
            $fn1173 $tmp1172 = $tmp1171->methods[0];
            panda$core$Bit $tmp1174 = $tmp1172(m$Iter1164);
            panda$core$Bit $tmp1175 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1174);
            if (!$tmp1175.value) goto $l1170;
            {
                ITable* $tmp1177 = m$Iter1164->$class->itable;
                while ($tmp1177->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1177 = $tmp1177->next;
                }
                $fn1179 $tmp1178 = $tmp1177->methods[1];
                panda$core$Object* $tmp1180 = $tmp1178(m$Iter1164);
                m1176 = ((org$pandalanguage$pandac$MethodRef*) $tmp1180);
                org$pandalanguage$pandac$Type* $tmp1181 = org$pandalanguage$pandac$MethodRef$type$R$org$pandalanguage$pandac$Type(m1176);
                panda$collections$Array$add$panda$collections$Array$T(types1161, ((panda$core$Object*) $tmp1181));
            }
            goto $l1169;
            $l1170:;
        }
        org$pandalanguage$pandac$IRNode* $tmp1182 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp1182->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp1182->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp1184 = (org$pandalanguage$pandac$Type*) malloc(96);
        $tmp1184->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
        $tmp1184->refCount.value = 1;
        org$pandalanguage$pandac$Type$init$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp1184, ((panda$collections$ListView*) types1161));
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1182, ((panda$core$Int64) { 1003 }), p_position, $tmp1184, ((panda$core$Object*) methods1104), ((panda$collections$ListView*) children1149));
        return $tmp1182;
    }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$symbolRef$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$Symbol* p_s, org$pandalanguage$pandac$SymbolTable* p_st) {
    org$pandalanguage$pandac$ClassDecl* cl1186;
    org$pandalanguage$pandac$FieldDecl* f1202;
    panda$collections$Array* children1205;
    org$pandalanguage$pandac$Type* effectiveType1210;
    org$pandalanguage$pandac$IRNode* result1215;
    switch (p_s->kind.value) {
        case 200:
        {
            PANDA_ASSERT(((panda$core$Bit) { p_target == NULL }).value);
            org$pandalanguage$pandac$ClassDecl* $tmp1187 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Position$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_position, ((org$pandalanguage$pandac$Alias*) p_s)->fullName);
            cl1186 = $tmp1187;
            if (((panda$core$Bit) { cl1186 != NULL }).value) {
            {
                org$pandalanguage$pandac$Type* $tmp1188 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl1186);
                org$pandalanguage$pandac$Compiler$checkGenericParameters$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_position, cl1186, $tmp1188);
                org$pandalanguage$pandac$IRNode* $tmp1189 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1189->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1189->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1191 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$Type* $tmp1192 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl1186);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1189, ((panda$core$Int64) { 1001 }), p_position, $tmp1191, $tmp1192);
                return $tmp1189;
            }
            }
            return NULL;
        }
        break;
        case 201:
        {
            org$pandalanguage$pandac$Type* $tmp1193 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) p_s));
            org$pandalanguage$pandac$Compiler$checkGenericParameters$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_position, ((org$pandalanguage$pandac$ClassDecl*) p_s), $tmp1193);
            org$pandalanguage$pandac$IRNode* $tmp1194 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp1194->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1194->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp1196 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$Type* $tmp1197 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) p_s));
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1194, ((panda$core$Int64) { 1001 }), p_position, $tmp1196, $tmp1197);
            return $tmp1194;
        }
        break;
        case 204:
        case 205:
        {
            panda$collections$ListView* $tmp1198 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$IRNode$Q$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p_target);
            org$pandalanguage$pandac$IRNode* $tmp1199 = org$pandalanguage$pandac$Compiler$getMethodReference$org$pandalanguage$pandac$SymbolTable$org$pandalanguage$pandac$IRNode$Q$panda$core$String$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$IRNode(self, p_st, p_target, p_s->name, p_position, $tmp1198);
            return $tmp1199;
        }
        break;
        case 208:
        {
            org$pandalanguage$pandac$IRNode* $tmp1200 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp1200->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1200->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp1200, ((panda$core$Int64) { 1016 }), p_position, ((org$pandalanguage$pandac$Variable*) p_s)->type, ((org$pandalanguage$pandac$Variable*) p_s));
            return $tmp1200;
        }
        break;
        case 202:
        {
            f1202 = ((org$pandalanguage$pandac$FieldDecl*) p_s);
            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self, f1202);
            org$pandalanguage$pandac$Type* $tmp1203 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1204 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(f1202->type, $tmp1203);
            if ($tmp1204.value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp1206 = (panda$collections$Array*) malloc(40);
            $tmp1206->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1206->refCount.value = 1;
            panda$collections$Array$init($tmp1206);
            children1205 = $tmp1206;
            if (((panda$core$Bit) { p_target != NULL }).value) {
            {
                panda$core$Bit $tmp1208 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1024 }));
                if ($tmp1208.value) {
                {
                    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_target->position, &$s1209);
                    return NULL;
                }
                }
                org$pandalanguage$pandac$Type* $tmp1211 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_target->type, f1202->type);
                effectiveType1210 = $tmp1211;
                panda$core$Bit $tmp1212 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(f1202->annotations);
                if ($tmp1212.value) {
                {
                    panda$collections$Array$add$panda$collections$Array$T(children1205, ((panda$core$Object*) p_target));
                }
                }
                else {
                {
                    org$pandalanguage$pandac$Type* $tmp1213 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(f1202->owner);
                    org$pandalanguage$pandac$IRNode* $tmp1214 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_target, $tmp1213);
                    panda$collections$Array$add$panda$collections$Array$T(children1205, ((panda$core$Object*) $tmp1214));
                }
                }
                org$pandalanguage$pandac$IRNode* $tmp1216 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1216->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1216->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1216, ((panda$core$Int64) { 1026 }), p_position, f1202->type, ((panda$core$Object*) p_s), ((panda$collections$ListView*) children1205));
                result1215 = $tmp1216;
                panda$core$Bit $tmp1218 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(effectiveType1210, result1215->type);
                if ($tmp1218.value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp1219 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, result1215, p_position, ((panda$core$Bit) { false }), effectiveType1210);
                    result1215 = $tmp1219;
                }
                }
                return result1215;
            }
            }
            else {
            {
                org$pandalanguage$pandac$IRNode* $tmp1220 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1220->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1220->refCount.value = 1;
                panda$core$Object* $tmp1222 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
                org$pandalanguage$pandac$Type* $tmp1223 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp1222));
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp1220, ((panda$core$Int64) { 1025 }), p_position, $tmp1223);
                panda$collections$Array$add$panda$collections$Array$T(children1205, ((panda$core$Object*) $tmp1220));
                org$pandalanguage$pandac$IRNode* $tmp1224 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1224->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1224->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1224, ((panda$core$Int64) { 1026 }), p_position, f1202->type, ((panda$core$Object*) p_s), ((panda$collections$ListView*) children1205));
                return $tmp1224;
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
    panda$collections$HashMap* typeMap1232;
    org$pandalanguage$pandac$Type* base1235;
    org$pandalanguage$pandac$ClassDecl* cl1237;
    panda$core$SimpleRange$LTpanda$core$Int64$GT $tmp1239;
    switch (p_context->typeKind.value) {
        case 10:
        {
            return p_raw;
        }
        break;
        case 11:
        {
            panda$core$Int64 $tmp1226 = panda$collections$Array$get_count$R$panda$core$Int64(p_context->subtypes);
            panda$core$Bit $tmp1227 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1226, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp1227.value);
            panda$core$Object* $tmp1228 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_context->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp1229 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$Type*) $tmp1228), p_raw);
            return $tmp1229;
        }
        break;
        case 21:
        {
            panda$core$Int64 $tmp1230 = panda$collections$Array$get_count$R$panda$core$Int64(p_context->subtypes);
            panda$core$Bit $tmp1231 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp1230, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1231.value);
            panda$collections$HashMap* $tmp1233 = (panda$collections$HashMap*) malloc(56);
            $tmp1233->$class = (panda$core$Class*) &panda$collections$HashMap$class;
            $tmp1233->refCount.value = 1;
            panda$collections$HashMap$init($tmp1233);
            typeMap1232 = $tmp1233;
            panda$core$Object* $tmp1236 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_context->subtypes, ((panda$core$Int64) { 0 }));
            base1235 = ((org$pandalanguage$pandac$Type*) $tmp1236);
            org$pandalanguage$pandac$ClassDecl* $tmp1238 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Symbol*) base1235)->name);
            cl1237 = $tmp1238;
            PANDA_ASSERT(((panda$core$Bit) { cl1237 != NULL }).value);
            panda$core$Int64 $tmp1240 = panda$collections$Array$get_count$R$panda$core$Int64(p_context->subtypes);
            panda$core$SimpleRange$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1239, ((panda$core$Int64) { 1 }), $tmp1240, ((panda$core$Bit) { false }));
            int64_t $tmp1242 = $tmp1239.min.value;
            panda$core$Int64 i1241 = { $tmp1242 };
            int64_t $tmp1244 = $tmp1239.max.value;
            bool $tmp1245 = $tmp1239.inclusive.value;
            bool $tmp1252 = 1 > 0;
            if ($tmp1252) goto $l1250; else goto $l1251;
            $l1250:;
            if ($tmp1245) goto $l1253; else goto $l1254;
            $l1253:;
            if ($tmp1242 <= $tmp1244) goto $l1246; else goto $l1248;
            $l1254:;
            if ($tmp1242 < $tmp1244) goto $l1246; else goto $l1248;
            $l1251:;
            if ($tmp1245) goto $l1255; else goto $l1256;
            $l1255:;
            if ($tmp1242 >= $tmp1244) goto $l1246; else goto $l1248;
            $l1256:;
            if ($tmp1242 > $tmp1244) goto $l1246; else goto $l1248;
            $l1246:;
            {
                panda$core$String* $tmp1259 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) cl1237)->name, &$s1258);
                panda$core$Int64 $tmp1260 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i1241, ((panda$core$Int64) { 1 }));
                ITable* $tmp1261 = ((panda$collections$ListView*) cl1237->parameters)->$class->itable;
                while ($tmp1261->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp1261 = $tmp1261->next;
                }
                $fn1263 $tmp1262 = $tmp1261->methods[0];
                panda$core$Object* $tmp1264 = $tmp1262(((panda$collections$ListView*) cl1237->parameters), $tmp1260);
                panda$core$String* $tmp1265 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1259, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp1264))->name);
                panda$core$Object* $tmp1266 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_context->subtypes, i1241);
                panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(typeMap1232, ((panda$collections$Key*) $tmp1265), ((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp1266)));
            }
            $l1249:;
            if ($tmp1252) goto $l1268; else goto $l1269;
            $l1268:;
            int64_t $tmp1270 = $tmp1244 - i1241.value;
            if ($tmp1245) goto $l1271; else goto $l1272;
            $l1271:;
            if ($tmp1270 >= 1) goto $l1267; else goto $l1248;
            $l1272:;
            if ($tmp1270 > 1) goto $l1267; else goto $l1248;
            $l1269:;
            int64_t $tmp1274 = i1241.value - $tmp1244;
            if ($tmp1245) goto $l1275; else goto $l1276;
            $l1275:;
            if ($tmp1274 >= -1) goto $l1267; else goto $l1248;
            $l1276:;
            if ($tmp1274 > -1) goto $l1267; else goto $l1248;
            $l1267:;
            i1241.value += 1;
            goto $l1246;
            $l1248:;
            org$pandalanguage$pandac$Type* $tmp1278 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(p_raw, typeMap1232);
            return $tmp1278;
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
    org$pandalanguage$pandac$Type* $tmp1279 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1280 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_type, $tmp1279);
    if ($tmp1280.value) {
    {
        org$pandalanguage$pandac$Type* $tmp1281 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
        return $tmp1281;
    }
    }
    org$pandalanguage$pandac$Type* $tmp1282 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1283 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_type, $tmp1282);
    if ($tmp1283.value) {
    {
        org$pandalanguage$pandac$Type* $tmp1284 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
        return $tmp1284;
    }
    }
    panda$core$Bit $tmp1285 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 23 }));
    if ($tmp1285.value) {
    {
        org$pandalanguage$pandac$Type* $tmp1286 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
        return $tmp1286;
    }
    }
    return p_type;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    org$pandalanguage$pandac$Type* step1313;
    panda$collections$Array* args1340;
    panda$core$SimpleRange$LTpanda$core$Int64$Q$GT $tmp1341;
    org$pandalanguage$pandac$IRNode* c1343;
    switch (p_expr->kind.value) {
        case 1031:
        {
            panda$core$Int64 $tmp1287 = panda$collections$Array$get_count$R$panda$core$Int64(p_expr->children);
            panda$core$Bit $tmp1288 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1287, ((panda$core$Int64) { 2 }));
            if ($tmp1288.value) {
            {
                panda$core$Object* $tmp1289 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Bit $tmp1290 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1289)->kind, ((panda$core$Int64) { 1030 }));
                if ($tmp1290.value) {
                {
                    panda$core$Object* $tmp1291 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
                    panda$core$Bit $tmp1292 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1291)->kind, ((panda$core$Int64) { 1030 }));
                    if ($tmp1292.value) {
                    {
                        org$pandalanguage$pandac$Type* $tmp1293 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
                        org$pandalanguage$pandac$Type* $tmp1294 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1293);
                        org$pandalanguage$pandac$Type* $tmp1295 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1294);
                        return $tmp1295;
                    }
                    }
                    panda$core$Object* $tmp1296 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
                    org$pandalanguage$pandac$Type* $tmp1297 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$IRNode*) $tmp1296)->type);
                    org$pandalanguage$pandac$Type* $tmp1298 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1297);
                    org$pandalanguage$pandac$Type* $tmp1299 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1298);
                    return $tmp1299;
                }
                }
                panda$core$Object* $tmp1300 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
                panda$core$Bit $tmp1301 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1300)->kind, ((panda$core$Int64) { 1030 }));
                if ($tmp1301.value) {
                {
                    panda$core$Object* $tmp1302 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                    org$pandalanguage$pandac$Type* $tmp1303 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$IRNode*) $tmp1302)->type);
                    org$pandalanguage$pandac$Type* $tmp1304 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1303);
                    org$pandalanguage$pandac$Type* $tmp1305 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1304);
                    return $tmp1305;
                }
                }
                panda$core$Object* $tmp1306 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp1307 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$IRNode*) $tmp1306)->type);
                panda$core$Object* $tmp1308 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$Type* $tmp1309 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$IRNode*) $tmp1308)->type);
                org$pandalanguage$pandac$Type* $tmp1310 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1307, $tmp1309);
                org$pandalanguage$pandac$Type* $tmp1311 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, $tmp1310);
                org$pandalanguage$pandac$Type* $tmp1312 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1311);
                return $tmp1312;
            }
            }
            panda$core$Object* $tmp1314 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 2 }));
            org$pandalanguage$pandac$Type* $tmp1315 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$IRNode*) $tmp1314)->type);
            step1313 = $tmp1315;
            panda$core$Object* $tmp1316 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp1317 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1316)->kind, ((panda$core$Int64) { 1030 }));
            if ($tmp1317.value) {
            {
                panda$core$Object* $tmp1318 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
                panda$core$Bit $tmp1319 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1318)->kind, ((panda$core$Int64) { 1030 }));
                if ($tmp1319.value) {
                {
                    org$pandalanguage$pandac$Type* $tmp1320 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
                    org$pandalanguage$pandac$Type* $tmp1321 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1320);
                    org$pandalanguage$pandac$Type* $tmp1322 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1321, step1313);
                    return $tmp1322;
                }
                }
                panda$core$Object* $tmp1323 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$Type* $tmp1324 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$IRNode*) $tmp1323)->type);
                org$pandalanguage$pandac$Type* $tmp1325 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1324);
                org$pandalanguage$pandac$Type* $tmp1326 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1325, step1313);
                return $tmp1326;
            }
            }
            panda$core$Object* $tmp1327 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
            panda$core$Bit $tmp1328 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1327)->kind, ((panda$core$Int64) { 1030 }));
            if ($tmp1328.value) {
            {
                panda$core$Object* $tmp1329 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp1330 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$IRNode*) $tmp1329)->type);
                org$pandalanguage$pandac$Type* $tmp1331 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1330);
                org$pandalanguage$pandac$Type* $tmp1332 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1331, step1313);
                return $tmp1332;
            }
            }
            panda$core$Object* $tmp1333 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp1334 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$IRNode*) $tmp1333)->type);
            panda$core$Object* $tmp1335 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
            org$pandalanguage$pandac$Type* $tmp1336 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$IRNode*) $tmp1335)->type);
            org$pandalanguage$pandac$Type* $tmp1337 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1334, $tmp1336);
            org$pandalanguage$pandac$Type* $tmp1338 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, $tmp1337);
            org$pandalanguage$pandac$Type* $tmp1339 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1338, step1313);
            return $tmp1339;
        }
        break;
        case 1040:
        {
            panda$core$SimpleRange$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1341, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$collections$Array* $tmp1342 = panda$collections$Array$$IDX$panda$core$SimpleRange$LTpanda$core$Int64$Q$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT(p_expr->children, $tmp1341);
            args1340 = $tmp1342;
            panda$core$Object* $tmp1344 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp1346 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1344), &$s1345, ((panda$collections$ListView*) args1340));
            c1343 = $tmp1346;
            if (((panda$core$Bit) { c1343 == NULL }).value) {
            {
                org$pandalanguage$pandac$Type* $tmp1347 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
                return $tmp1347;
            }
            }
            return c1343->type;
        }
        break;
    }
    org$pandalanguage$pandac$Type* $tmp1348 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_expr->type);
    return $tmp1348;
}
panda$core$Int64$nullable org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type, org$pandalanguage$pandac$Type* p_target) {
    panda$core$Int64$nullable result1359;
    panda$core$Int64$nullable result1363;
    panda$core$Int64$nullable best1372;
    panda$collections$Iterator* t$Iter1373;
    org$pandalanguage$pandac$Type* t1385;
    panda$core$Int64$nullable cost1390;
    org$pandalanguage$pandac$ClassDecl* cl1404;
    panda$core$Int64$nullable cost1406;
    panda$collections$Iterator* intf$Iter1411;
    org$pandalanguage$pandac$Type* intf1423;
    panda$core$Int64$nullable cost1428;
    PANDA_ASSERT(p_type->resolved.value);
    PANDA_ASSERT(p_target->resolved.value);
    panda$core$Bit $tmp1349 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_type, p_target);
    if ($tmp1349.value) {
    {
        return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
    }
    }
    org$pandalanguage$pandac$Type* $tmp1350 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1351 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_type, $tmp1350);
    if ($tmp1351.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    panda$core$Bit $tmp1352 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 23 }));
    if ($tmp1352.value) {
    {
        panda$core$Bit $tmp1353 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp1353.value) {
        {
            return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
        }
        }
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    panda$core$Bit $tmp1355 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 11 }));
    bool $tmp1354 = $tmp1355.value;
    if (!$tmp1354) goto $l1356;
    panda$core$Bit $tmp1357 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
    $tmp1354 = $tmp1357.value;
    $l1356:;
    panda$core$Bit $tmp1358 = { $tmp1354 };
    if ($tmp1358.value) {
    {
        panda$core$Object* $tmp1360 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Int64$nullable $tmp1361 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$Type*) $tmp1360), p_target);
        result1359 = $tmp1361;
        if (((panda$core$Bit) { !result1359.nonnull }).value) {
        {
            return ((panda$core$Int64$nullable) { .nonnull = false });
        }
        }
        panda$core$Int64 $tmp1362 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) result1359.value), ((panda$core$Int64) { 1 }));
        return ((panda$core$Int64$nullable) { $tmp1362, true });
    }
    }
    switch (p_target->typeKind.value) {
        case 11:
        {
            panda$core$Object* $tmp1364 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$Int64$nullable $tmp1365 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_type, ((org$pandalanguage$pandac$Type*) $tmp1364));
            result1363 = $tmp1365;
            if (((panda$core$Bit) { !result1363.nonnull }).value) {
            {
                return ((panda$core$Int64$nullable) { .nonnull = false });
            }
            }
            panda$core$Int64 $tmp1366 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) result1363.value), ((panda$core$Int64) { 1 }));
            return ((panda$core$Int64$nullable) { $tmp1366, true });
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
            panda$core$Bit $tmp1367 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 21 }));
            if ($tmp1367.value) {
            {
                panda$core$Object* $tmp1368 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
                panda$core$Int64$nullable $tmp1369 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$Type*) $tmp1368), p_target);
                return $tmp1369;
            }
            }
        }
        break;
    }
    switch (p_type->typeKind.value) {
        case 19:
        {
            org$pandalanguage$pandac$Type* $tmp1370 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            panda$core$Int64$nullable $tmp1371 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1370, p_target);
            return $tmp1371;
        }
        break;
        case 17:
        {
            best1372 = ((panda$core$Int64$nullable) { .nonnull = false });
            {
                ITable* $tmp1374 = ((panda$collections$Iterable*) p_type->subtypes)->$class->itable;
                while ($tmp1374->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1374 = $tmp1374->next;
                }
                $fn1376 $tmp1375 = $tmp1374->methods[0];
                panda$collections$Iterator* $tmp1377 = $tmp1375(((panda$collections$Iterable*) p_type->subtypes));
                t$Iter1373 = $tmp1377;
                $l1378:;
                ITable* $tmp1380 = t$Iter1373->$class->itable;
                while ($tmp1380->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1380 = $tmp1380->next;
                }
                $fn1382 $tmp1381 = $tmp1380->methods[0];
                panda$core$Bit $tmp1383 = $tmp1381(t$Iter1373);
                panda$core$Bit $tmp1384 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1383);
                if (!$tmp1384.value) goto $l1379;
                {
                    ITable* $tmp1386 = t$Iter1373->$class->itable;
                    while ($tmp1386->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1386 = $tmp1386->next;
                    }
                    $fn1388 $tmp1387 = $tmp1386->methods[1];
                    panda$core$Object* $tmp1389 = $tmp1387(t$Iter1373);
                    t1385 = ((org$pandalanguage$pandac$Type*) $tmp1389);
                    panda$core$Int64$nullable $tmp1391 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, t1385, p_target);
                    cost1390 = $tmp1391;
                    bool $tmp1392 = ((panda$core$Bit) { cost1390.nonnull }).value;
                    if (!$tmp1392) goto $l1393;
                    bool $tmp1394 = ((panda$core$Bit) { !best1372.nonnull }).value;
                    if ($tmp1394) goto $l1395;
                    panda$core$Bit $tmp1396 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost1390.value), ((panda$core$Int64) best1372.value));
                    $tmp1394 = $tmp1396.value;
                    $l1395:;
                    panda$core$Bit $tmp1397 = { $tmp1394 };
                    $tmp1392 = $tmp1397.value;
                    $l1393:;
                    panda$core$Bit $tmp1398 = { $tmp1392 };
                    if ($tmp1398.value) {
                    {
                        best1372 = cost1390;
                    }
                    }
                }
                goto $l1378;
                $l1379:;
            }
            return best1372;
        }
        break;
        case 22:
        {
            panda$core$Int64$nullable $tmp1399 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_type->parameter->bound, p_target);
            return $tmp1399;
        }
        break;
    }
    panda$core$Bit $tmp1400 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_target);
    panda$core$Bit $tmp1401 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1400);
    if ($tmp1401.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    panda$core$Bit $tmp1402 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_type);
    panda$core$Bit $tmp1403 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1402);
    if ($tmp1403.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp1405 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_type);
    cl1404 = $tmp1405;
    PANDA_ASSERT(((panda$core$Bit) { cl1404 != NULL }).value);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, cl1404);
    if (((panda$core$Bit) { cl1404->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp1407 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_type, cl1404->rawSuper);
        org$pandalanguage$pandac$Type* $tmp1408 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_type, $tmp1407);
        panda$core$Int64$nullable $tmp1409 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1408, p_target);
        cost1406 = $tmp1409;
        if (((panda$core$Bit) { cost1406.nonnull }).value) {
        {
            panda$core$Int64 $tmp1410 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) cost1406.value), ((panda$core$Int64) ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }).value));
            return ((panda$core$Int64$nullable) { $tmp1410, true });
        }
        }
    }
    }
    {
        ITable* $tmp1412 = ((panda$collections$Iterable*) cl1404->rawInterfaces)->$class->itable;
        while ($tmp1412->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1412 = $tmp1412->next;
        }
        $fn1414 $tmp1413 = $tmp1412->methods[0];
        panda$collections$Iterator* $tmp1415 = $tmp1413(((panda$collections$Iterable*) cl1404->rawInterfaces));
        intf$Iter1411 = $tmp1415;
        $l1416:;
        ITable* $tmp1418 = intf$Iter1411->$class->itable;
        while ($tmp1418->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1418 = $tmp1418->next;
        }
        $fn1420 $tmp1419 = $tmp1418->methods[0];
        panda$core$Bit $tmp1421 = $tmp1419(intf$Iter1411);
        panda$core$Bit $tmp1422 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1421);
        if (!$tmp1422.value) goto $l1417;
        {
            ITable* $tmp1424 = intf$Iter1411->$class->itable;
            while ($tmp1424->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1424 = $tmp1424->next;
            }
            $fn1426 $tmp1425 = $tmp1424->methods[1];
            panda$core$Object* $tmp1427 = $tmp1425(intf$Iter1411);
            intf1423 = ((org$pandalanguage$pandac$Type*) $tmp1427);
            org$pandalanguage$pandac$Type* $tmp1429 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_type, intf1423);
            org$pandalanguage$pandac$Type* $tmp1430 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_type, $tmp1429);
            panda$core$Int64$nullable $tmp1431 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1430, p_target);
            cost1428 = $tmp1431;
            if (((panda$core$Bit) { cost1428.nonnull }).value) {
            {
                panda$core$Int64 $tmp1432 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) cost1428.value), ((panda$core$Int64) ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }).value));
                return ((panda$core$Int64$nullable) { $tmp1432, true });
            }
            }
        }
        goto $l1416;
        $l1417:;
    }
    return ((panda$core$Int64$nullable) { .nonnull = false });
}
panda$core$Int64 org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_value) {
    panda$core$Bit $tmp1434 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { -128 }));
    bool $tmp1433 = $tmp1434.value;
    if (!$tmp1433) goto $l1435;
    panda$core$Bit $tmp1436 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { 127 }));
    $tmp1433 = $tmp1436.value;
    $l1435:;
    panda$core$Bit $tmp1437 = { $tmp1433 };
    if ($tmp1437.value) {
    {
        return ((panda$core$Int64) { 8 });
    }
    }
    panda$core$Bit $tmp1439 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { -32768 }));
    bool $tmp1438 = $tmp1439.value;
    if (!$tmp1438) goto $l1440;
    panda$core$Bit $tmp1441 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { 32767 }));
    $tmp1438 = $tmp1441.value;
    $l1440:;
    panda$core$Bit $tmp1442 = { $tmp1438 };
    if ($tmp1442.value) {
    {
        return ((panda$core$Int64) { 16 });
    }
    }
    panda$core$Bit $tmp1444 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { -2147483648 }));
    bool $tmp1443 = $tmp1444.value;
    if (!$tmp1443) goto $l1445;
    panda$core$Bit $tmp1446 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { 2147483647 }));
    $tmp1443 = $tmp1446.value;
    $l1445:;
    panda$core$Bit $tmp1447 = { $tmp1443 };
    if ($tmp1447.value) {
    {
        return ((panda$core$Int64) { 32 });
    }
    }
    return ((panda$core$Int64) { 64 });
}
panda$core$Int64 org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64(org$pandalanguage$pandac$Compiler* self, panda$core$UInt64 p_value) {
    panda$core$Bit $tmp1448 = panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(p_value, ((panda$core$UInt64) { 255 }));
    if ($tmp1448.value) {
    {
        return ((panda$core$Int64) { 8 });
    }
    }
    panda$core$Bit $tmp1449 = panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(p_value, ((panda$core$UInt64) { 65535 }));
    if ($tmp1449.value) {
    {
        return ((panda$core$Int64) { 16 });
    }
    }
    panda$core$Bit $tmp1450 = panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(p_value, ((panda$core$UInt64) { 4294967295 }));
    if ($tmp1450.value) {
    {
        return ((panda$core$Int64) { 32 });
    }
    }
    return ((panda$core$Int64) { 64 });
}
panda$core$Int64$nullable org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr, org$pandalanguage$pandac$Type* p_target) {
    panda$core$Int64$nullable cost1453;
    panda$core$Int64$nullable cost11524;
    panda$core$Int64$nullable cost21528;
    panda$core$Int64$nullable cost11547;
    panda$core$Int64$nullable cost21551;
    org$pandalanguage$pandac$ClassDecl* targetClass1561;
    panda$collections$Iterator* m$Iter1563;
    org$pandalanguage$pandac$MethodDecl* m1575;
    panda$core$Int64$nullable cost1584;
    panda$core$Bit $tmp1451 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_expr->type, p_target);
    if ($tmp1451.value) {
    {
        return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
    }
    }
    switch (p_target->typeKind.value) {
        case 11:
        {
            panda$core$Bit $tmp1452 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1030 }));
            if ($tmp1452.value) {
            {
                return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
            }
            }
            panda$core$Object* $tmp1454 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$Int64$nullable $tmp1455 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, ((org$pandalanguage$pandac$Type*) $tmp1454));
            cost1453 = $tmp1455;
            if (((panda$core$Bit) { !cost1453.nonnull }).value) {
            {
                return ((panda$core$Int64$nullable) { .nonnull = false });
            }
            }
            panda$core$Bit $tmp1456 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->type->typeKind, ((panda$core$Int64) { 11 }));
            if ($tmp1456.value) {
            {
                return cost1453;
            }
            }
            panda$core$Int64 $tmp1457 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) cost1453.value), ((panda$core$Int64) { 1 }));
            return ((panda$core$Int64$nullable) { $tmp1457, true });
        }
        break;
        case 22:
        {
            panda$core$Int64$nullable $tmp1458 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, p_target->parameter->bound);
            return $tmp1458;
        }
        break;
    }
    switch (p_expr->kind.value) {
        case 1011:
        {
            panda$core$Bit $tmp1459 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 19 }));
            if ($tmp1459.value) {
            {
                return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
            }
            }
            panda$core$Bit $tmp1460 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_target);
            if ($tmp1460.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1461 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
                panda$core$Int64$nullable $tmp1462 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1461, p_target);
                return $tmp1462;
            }
            }
        }
        break;
        case 1004:
        {
            panda$core$Bit $tmp1465 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            bool $tmp1464 = $tmp1465.value;
            if (!$tmp1464) goto $l1466;
            panda$core$Int64 $tmp1467 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1468 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(self, $tmp1467);
            panda$core$Int64 $tmp1469 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1470 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1468, $tmp1469);
            $tmp1464 = $tmp1470.value;
            $l1466:;
            panda$core$Bit $tmp1471 = { $tmp1464 };
            bool $tmp1463 = $tmp1471.value;
            if ($tmp1463) goto $l1472;
            panda$core$Bit $tmp1474 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 13 }));
            bool $tmp1473 = $tmp1474.value;
            if (!$tmp1473) goto $l1475;
            panda$core$Int64 $tmp1476 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64(self, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1477 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1478 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1476, $tmp1477);
            $tmp1473 = $tmp1478.value;
            $l1475:;
            panda$core$Bit $tmp1479 = { $tmp1473 };
            $tmp1463 = $tmp1479.value;
            $l1472:;
            panda$core$Bit $tmp1480 = { $tmp1463 };
            if ($tmp1480.value) {
            {
                return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
            }
            }
            panda$core$Bit $tmp1481 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            panda$core$Bit $tmp1482 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1481);
            if ($tmp1482.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1483 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                panda$core$Int64$nullable $tmp1484 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1483, p_target);
                return $tmp1484;
            }
            }
        }
        break;
        case 1032:
        {
            panda$core$Bit $tmp1487 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            bool $tmp1486 = $tmp1487.value;
            if (!$tmp1486) goto $l1488;
            panda$core$Int64 $tmp1489 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1490 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp1489);
            panda$core$Int64 $tmp1491 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(self, $tmp1490);
            panda$core$Int64 $tmp1492 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1493 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1491, $tmp1492);
            $tmp1486 = $tmp1493.value;
            $l1488:;
            panda$core$Bit $tmp1494 = { $tmp1486 };
            bool $tmp1485 = $tmp1494.value;
            if ($tmp1485) goto $l1495;
            panda$core$Bit $tmp1497 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 13 }));
            bool $tmp1496 = $tmp1497.value;
            if (!$tmp1496) goto $l1498;
            panda$core$Int64 $tmp1499 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1500 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp1499);
            panda$core$Int64 $tmp1501 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(self, $tmp1500);
            panda$core$Int64 $tmp1502 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1503 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1501, $tmp1502);
            $tmp1496 = $tmp1503.value;
            $l1498:;
            panda$core$Bit $tmp1504 = { $tmp1496 };
            $tmp1485 = $tmp1504.value;
            $l1495:;
            panda$core$Bit $tmp1505 = { $tmp1485 };
            if ($tmp1505.value) {
            {
                return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
            }
            }
            panda$core$Bit $tmp1506 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            panda$core$Bit $tmp1507 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1506);
            if ($tmp1507.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1508 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                panda$core$Int64$nullable $tmp1509 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1508, p_target);
                return $tmp1509;
            }
            }
        }
        break;
        case 1031:
        {
            panda$core$Bit $tmp1510 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(p_target);
            if ($tmp1510.value) {
            {
                panda$core$Int64 $tmp1511 = panda$collections$Array$get_count$R$panda$core$Int64(p_expr->children);
                panda$core$Bit $tmp1512 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1511, ((panda$core$Int64) { 2 }));
                if ($tmp1512.value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Object* $tmp1514 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Bit $tmp1515 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1514)->kind, ((panda$core$Int64) { 1030 }));
                bool $tmp1513 = $tmp1515.value;
                if (!$tmp1513) goto $l1516;
                panda$core$Object* $tmp1517 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
                panda$core$Bit $tmp1518 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1517)->kind, ((panda$core$Int64) { 1030 }));
                $tmp1513 = $tmp1518.value;
                $l1516:;
                panda$core$Bit $tmp1519 = { $tmp1513 };
                if ($tmp1519.value) {
                {
                    panda$core$Object* $tmp1520 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                    panda$core$Bit $tmp1521 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1520));
                    panda$core$Bit $tmp1522 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1521);
                    if ($tmp1522.value) {
                    {
                        return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
                    }
                    }
                    return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true });
                }
                }
                panda$core$Bit $tmp1523 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 21 }));
                PANDA_ASSERT($tmp1523.value);
                panda$core$Object* $tmp1525 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Object* $tmp1526 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                panda$core$Int64$nullable $tmp1527 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1525), ((org$pandalanguage$pandac$Type*) $tmp1526));
                cost11524 = $tmp1527;
                if (((panda$core$Bit) { !cost11524.nonnull }).value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Object* $tmp1529 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
                panda$core$Object* $tmp1530 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                panda$core$Int64$nullable $tmp1531 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1529), ((org$pandalanguage$pandac$Type*) $tmp1530));
                cost21528 = $tmp1531;
                if (((panda$core$Bit) { !cost21528.nonnull }).value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Int64 $tmp1532 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) cost11524.value), ((panda$core$Int64) cost21528.value));
                return ((panda$core$Int64$nullable) { $tmp1532, true });
            }
            }
            panda$core$Bit $tmp1533 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(p_target);
            if ($tmp1533.value) {
            {
                panda$core$Int64 $tmp1534 = panda$collections$Array$get_count$R$panda$core$Int64(p_expr->children);
                panda$core$Bit $tmp1535 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1534, ((panda$core$Int64) { 3 }));
                if ($tmp1535.value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Object* $tmp1537 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Bit $tmp1538 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1537)->kind, ((panda$core$Int64) { 1030 }));
                bool $tmp1536 = $tmp1538.value;
                if (!$tmp1536) goto $l1539;
                panda$core$Object* $tmp1540 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
                panda$core$Bit $tmp1541 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1540)->kind, ((panda$core$Int64) { 1030 }));
                $tmp1536 = $tmp1541.value;
                $l1539:;
                panda$core$Bit $tmp1542 = { $tmp1536 };
                if ($tmp1542.value) {
                {
                    panda$core$Object* $tmp1543 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                    panda$core$Bit $tmp1544 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1543));
                    panda$core$Bit $tmp1545 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1544);
                    if ($tmp1545.value) {
                    {
                        return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
                    }
                    }
                    return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true });
                }
                }
                panda$core$Bit $tmp1546 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 21 }));
                PANDA_ASSERT($tmp1546.value);
                panda$core$Object* $tmp1548 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Object* $tmp1549 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                panda$core$Int64$nullable $tmp1550 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1548), ((org$pandalanguage$pandac$Type*) $tmp1549));
                cost11547 = $tmp1550;
                if (((panda$core$Bit) { !cost11547.nonnull }).value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Object* $tmp1552 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
                panda$core$Object* $tmp1553 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                panda$core$Int64$nullable $tmp1554 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1552), ((org$pandalanguage$pandac$Type*) $tmp1553));
                cost21551 = $tmp1554;
                if (((panda$core$Bit) { !cost21551.nonnull }).value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Int64 $tmp1555 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) cost11547.value), ((panda$core$Int64) cost21551.value));
                return ((panda$core$Int64$nullable) { $tmp1555, true });
            }
            }
            org$pandalanguage$pandac$Type* $tmp1556 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
            panda$core$Int64$nullable $tmp1557 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1556, p_target);
            return $tmp1557;
        }
        break;
        case 1040:
        {
            panda$core$Int64$nullable $tmp1558 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr->type, p_target);
            return $tmp1558;
        }
        break;
    }
    panda$core$Bit $tmp1559 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_target);
    panda$core$Bit $tmp1560 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1559);
    if ($tmp1560.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp1562 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_target);
    targetClass1561 = $tmp1562;
    if (((panda$core$Bit) { targetClass1561 == NULL }).value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    {
        ITable* $tmp1564 = ((panda$collections$Iterable*) targetClass1561->methods)->$class->itable;
        while ($tmp1564->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1564 = $tmp1564->next;
        }
        $fn1566 $tmp1565 = $tmp1564->methods[0];
        panda$collections$Iterator* $tmp1567 = $tmp1565(((panda$collections$Iterable*) targetClass1561->methods));
        m$Iter1563 = $tmp1567;
        $l1568:;
        ITable* $tmp1570 = m$Iter1563->$class->itable;
        while ($tmp1570->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1570 = $tmp1570->next;
        }
        $fn1572 $tmp1571 = $tmp1570->methods[0];
        panda$core$Bit $tmp1573 = $tmp1571(m$Iter1563);
        panda$core$Bit $tmp1574 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1573);
        if (!$tmp1574.value) goto $l1569;
        {
            ITable* $tmp1576 = m$Iter1563->$class->itable;
            while ($tmp1576->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1576 = $tmp1576->next;
            }
            $fn1578 $tmp1577 = $tmp1576->methods[1];
            panda$core$Object* $tmp1579 = $tmp1577(m$Iter1563);
            m1575 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1579);
            panda$core$Bit $tmp1580 = org$pandalanguage$pandac$Annotations$isImplicit$R$panda$core$Bit(m1575->annotations);
            if ($tmp1580.value) {
            {
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m1575);
                panda$core$Bit $tmp1581 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(m1575->methodKind, ((panda$core$Int64) { 59 }));
                PANDA_ASSERT($tmp1581.value);
                panda$core$Int64 $tmp1582 = panda$collections$Array$get_count$R$panda$core$Int64(m1575->parameters);
                panda$core$Bit $tmp1583 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1582, ((panda$core$Int64) { 1 }));
                PANDA_ASSERT($tmp1583.value);
                panda$core$Object* $tmp1585 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(m1575->parameters, ((panda$core$Int64) { 0 }));
                panda$core$Int64$nullable $tmp1586 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1585)->type);
                cost1584 = $tmp1586;
                if (((panda$core$Bit) { cost1584.nonnull }).value) {
                {
                    return cost1584;
                }
                }
            }
            }
        }
        goto $l1568;
        $l1569:;
    }
    PANDA_ASSERT(((panda$core$Bit) { p_expr->type != NULL }).value);
    panda$core$Int64$nullable $tmp1587 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr->type, p_target);
    return $tmp1587;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$doCoerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr, org$pandalanguage$pandac$Type* p_target) {
    panda$collections$Array* children1596;
    org$pandalanguage$pandac$IRNode* intermediate1601;
    org$pandalanguage$pandac$IRNode* coerced1629;
    org$pandalanguage$pandac$IRNode* coerced1650;
    org$pandalanguage$pandac$IRNode* varType1664;
    org$pandalanguage$pandac$Type* param1679;
    org$pandalanguage$pandac$IRNode* start1681;
    org$pandalanguage$pandac$IRNode* end1684;
    panda$collections$Array* args1687;
    org$pandalanguage$pandac$IRNode* target1693;
    org$pandalanguage$pandac$Type* endPoint1709;
    org$pandalanguage$pandac$IRNode* start1711;
    org$pandalanguage$pandac$IRNode* end1714;
    org$pandalanguage$pandac$IRNode* step1717;
    panda$collections$Array* args1721;
    org$pandalanguage$pandac$IRNode* target1727;
    panda$collections$ListView* methods1734;
    panda$collections$Array* args1736;
    panda$core$SimpleRange$LTpanda$core$Int64$Q$GT $tmp1737;
    panda$collections$Array* best1739;
    panda$core$Int64$nullable bestCost1742;
    panda$collections$Iterator* m$Iter1743;
    org$pandalanguage$pandac$MethodRef* m1755;
    panda$core$Int64$nullable cost1760;
    org$pandalanguage$pandac$IRNode* callTarget1766;
    org$pandalanguage$pandac$IRNode* result1772;
    panda$collections$Array* args1776;
    panda$core$SimpleRange$LTpanda$core$Int64$Q$GT $tmp1777;
    panda$collections$Array* children1789;
    org$pandalanguage$pandac$IRNode* intermediate1795;
    org$pandalanguage$pandac$ClassDecl* cl1800;
    panda$collections$Iterator* m$Iter1802;
    org$pandalanguage$pandac$MethodDecl* m1814;
    org$pandalanguage$pandac$IRNode* type1825;
    panda$collections$Array* args1830;
    panda$collections$Array* children1834;
    if (((panda$core$Bit) { p_expr == NULL }).value) {
    {
        return NULL;
    }
    }
    PANDA_ASSERT(p_expr->type->resolved.value);
    PANDA_ASSERT(p_target->resolved.value);
    panda$core$Bit $tmp1588 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_expr->type, p_target);
    if ($tmp1588.value) {
    {
        return p_expr;
    }
    }
    panda$core$Bit $tmp1590 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->type->typeKind, ((panda$core$Int64) { 11 }));
    bool $tmp1589 = $tmp1590.value;
    if (!$tmp1589) goto $l1591;
    panda$core$Bit $tmp1592 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
    $tmp1589 = $tmp1592.value;
    $l1591:;
    panda$core$Bit $tmp1593 = { $tmp1589 };
    if ($tmp1593.value) {
    {
        panda$core$Object* $tmp1594 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp1595 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1594), p_target);
        if ($tmp1595.value) {
        {
            panda$collections$Array* $tmp1597 = (panda$collections$Array*) malloc(40);
            $tmp1597->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1597->refCount.value = 1;
            panda$collections$Array$init($tmp1597);
            children1596 = $tmp1597;
            panda$collections$Array$add$panda$collections$Array$T(children1596, ((panda$core$Object*) p_expr));
            org$pandalanguage$pandac$IRNode* $tmp1599 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp1599->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1599->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1599, ((panda$core$Int64) { 1009 }), p_expr->position, p_target, ((panda$core$Object*) wrap_panda$core$Bit(((panda$core$Bit) { false }))), ((panda$collections$ListView*) children1596));
            return $tmp1599;
        }
        }
        panda$core$Object* $tmp1602 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->type->subtypes, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp1603 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, ((org$pandalanguage$pandac$Type*) $tmp1602));
        intermediate1601 = $tmp1603;
        org$pandalanguage$pandac$IRNode* $tmp1604 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, intermediate1601, p_target);
        return $tmp1604;
    }
    }
    switch (p_expr->kind.value) {
        case 1004:
        {
            panda$core$Bit $tmp1606 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            bool $tmp1605 = $tmp1606.value;
            if (!$tmp1605) goto $l1607;
            panda$core$Int64 $tmp1608 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64(self, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1609 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1610 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1608, $tmp1609);
            $tmp1605 = $tmp1610.value;
            $l1607:;
            panda$core$Bit $tmp1611 = { $tmp1605 };
            if ($tmp1611.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1612 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1612->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1612->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp1612, ((panda$core$Int64) { 1004 }), p_expr->position, p_target, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
                return $tmp1612;
            }
            }
            else {
            panda$core$Bit $tmp1615 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 13 }));
            bool $tmp1614 = $tmp1615.value;
            if (!$tmp1614) goto $l1616;
            panda$core$Int64 $tmp1617 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64(self, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1618 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1619 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1617, $tmp1618);
            $tmp1614 = $tmp1619.value;
            $l1616:;
            panda$core$Bit $tmp1620 = { $tmp1614 };
            if ($tmp1620.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1621 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1621->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1621->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp1621, ((panda$core$Int64) { 1004 }), p_expr->position, p_target, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
                return $tmp1621;
            }
            }
            }
            panda$core$Bit $tmp1624 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 10 }));
            bool $tmp1623 = $tmp1624.value;
            if (!$tmp1623) goto $l1625;
            panda$core$Bit $tmp1626 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            panda$core$Bit $tmp1627 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1626);
            $tmp1623 = $tmp1627.value;
            $l1625:;
            panda$core$Bit $tmp1628 = { $tmp1623 };
            if ($tmp1628.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1630 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp1631 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, $tmp1630);
                coerced1629 = $tmp1631;
                if (((panda$core$Bit) { coerced1629 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$IRNode* $tmp1632 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, coerced1629, p_target);
                return $tmp1632;
            }
            }
        }
        break;
        case 1032:
        {
            panda$core$Bit $tmp1634 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            bool $tmp1633 = $tmp1634.value;
            if (!$tmp1633) goto $l1635;
            panda$core$Int64 $tmp1636 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1637 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp1636);
            panda$core$Int64 $tmp1638 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(self, $tmp1637);
            panda$core$Int64 $tmp1639 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1640 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1638, $tmp1639);
            $tmp1633 = $tmp1640.value;
            $l1635:;
            panda$core$Bit $tmp1641 = { $tmp1633 };
            if ($tmp1641.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1642 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1642->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1642->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp1642, ((panda$core$Int64) { 1032 }), p_expr->position, p_target, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
                return $tmp1642;
            }
            }
            panda$core$Bit $tmp1645 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 10 }));
            bool $tmp1644 = $tmp1645.value;
            if (!$tmp1644) goto $l1646;
            panda$core$Bit $tmp1647 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            panda$core$Bit $tmp1648 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1647);
            $tmp1644 = $tmp1648.value;
            $l1646:;
            panda$core$Bit $tmp1649 = { $tmp1644 };
            if ($tmp1649.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1651 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp1652 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, $tmp1651);
                coerced1650 = $tmp1652;
                if (((panda$core$Bit) { coerced1650 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$IRNode* $tmp1653 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, coerced1650, p_target);
                return $tmp1653;
            }
            }
        }
        break;
        case 1011:
        {
            org$pandalanguage$pandac$Type* $tmp1654 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1655 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1654);
            if ($tmp1655.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1656 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1656->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1656->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp1656, ((panda$core$Int64) { 1011 }), p_expr->position, p_target, ((panda$core$Bit$wrapper*) p_expr->payload)->value);
                return $tmp1656;
            }
            }
            panda$core$Bit $tmp1659 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_target);
            bool $tmp1658 = $tmp1659.value;
            if (!$tmp1658) goto $l1660;
            org$pandalanguage$pandac$Type* $tmp1661 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1662 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1661);
            $tmp1658 = $tmp1662.value;
            $l1660:;
            panda$core$Bit $tmp1663 = { $tmp1658 };
            if ($tmp1663.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1665 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp1666 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, $tmp1665);
                varType1664 = $tmp1666;
                if (((panda$core$Bit) { varType1664 != NULL }).value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp1667 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, varType1664, p_target);
                    return $tmp1667;
                }
                }
            }
            }
        }
        break;
        case 1031:
        {
            panda$core$Bit $tmp1668 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(p_target);
            if ($tmp1668.value) {
            {
                panda$core$Int64 $tmp1669 = panda$collections$Array$get_count$R$panda$core$Int64(p_expr->children);
                panda$core$Bit $tmp1670 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1669, ((panda$core$Int64) { 2 }));
                if ($tmp1670.value) {
                {
                    panda$core$String* $tmp1672 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1671, ((panda$core$Object*) p_target));
                    panda$core$String* $tmp1674 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1672, &$s1673);
                    panda$core$String* $tmp1675 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1674, ((panda$core$Object*) p_expr));
                    panda$core$String* $tmp1677 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1675, &$s1676);
                    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_expr->position, $tmp1677);
                    return NULL;
                }
                }
                panda$core$Bit $tmp1678 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 21 }));
                PANDA_ASSERT($tmp1678.value);
                panda$core$Object* $tmp1680 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                param1679 = ((org$pandalanguage$pandac$Type*) $tmp1680);
                panda$core$Object* $tmp1682 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$IRNode* $tmp1683 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1682), param1679);
                start1681 = $tmp1683;
                if (((panda$core$Bit) { start1681 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$core$Object* $tmp1685 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$IRNode* $tmp1686 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1685), param1679);
                end1684 = $tmp1686;
                if (((panda$core$Bit) { end1684 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp1688 = (panda$collections$Array*) malloc(40);
                $tmp1688->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp1688->refCount.value = 1;
                panda$collections$Array$init($tmp1688);
                args1687 = $tmp1688;
                panda$collections$Array$add$panda$collections$Array$T(args1687, ((panda$core$Object*) start1681));
                panda$collections$Array$add$panda$collections$Array$T(args1687, ((panda$core$Object*) end1684));
                org$pandalanguage$pandac$IRNode* $tmp1690 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1690->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1690->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1692 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp1690, ((panda$core$Int64) { 1011 }), p_expr->position, $tmp1692, ((panda$core$Bit$wrapper*) p_expr->payload)->value);
                panda$collections$Array$add$panda$collections$Array$T(args1687, ((panda$core$Object*) $tmp1690));
                org$pandalanguage$pandac$IRNode* $tmp1694 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1694->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1694->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1696 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1694, ((panda$core$Int64) { 1001 }), p_expr->position, $tmp1696, p_target);
                target1693 = $tmp1694;
                org$pandalanguage$pandac$IRNode* $tmp1697 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target1693, ((panda$collections$ListView*) args1687));
                return $tmp1697;
            }
            }
            else {
            panda$core$Bit $tmp1698 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(p_target);
            if ($tmp1698.value) {
            {
                panda$core$Int64 $tmp1699 = panda$collections$Array$get_count$R$panda$core$Int64(p_expr->children);
                panda$core$Bit $tmp1700 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1699, ((panda$core$Int64) { 3 }));
                if ($tmp1700.value) {
                {
                    panda$core$String* $tmp1702 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1701, ((panda$core$Object*) p_target));
                    panda$core$String* $tmp1704 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1702, &$s1703);
                    panda$core$String* $tmp1705 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1704, ((panda$core$Object*) p_expr));
                    panda$core$String* $tmp1707 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1705, &$s1706);
                    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_expr->position, $tmp1707);
                    return NULL;
                }
                }
                panda$core$Bit $tmp1708 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 21 }));
                PANDA_ASSERT($tmp1708.value);
                panda$core$Object* $tmp1710 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                endPoint1709 = ((org$pandalanguage$pandac$Type*) $tmp1710);
                panda$core$Object* $tmp1712 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$IRNode* $tmp1713 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1712), endPoint1709);
                start1711 = $tmp1713;
                if (((panda$core$Bit) { start1711 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$core$Object* $tmp1715 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$IRNode* $tmp1716 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1715), endPoint1709);
                end1714 = $tmp1716;
                panda$core$Object* $tmp1718 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 2 }));
                panda$core$Object* $tmp1719 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 2 }));
                org$pandalanguage$pandac$IRNode* $tmp1720 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1718), ((org$pandalanguage$pandac$Type*) $tmp1719));
                step1717 = $tmp1720;
                panda$collections$Array* $tmp1722 = (panda$collections$Array*) malloc(40);
                $tmp1722->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp1722->refCount.value = 1;
                panda$collections$Array$init($tmp1722);
                args1721 = $tmp1722;
                panda$collections$Array$add$panda$collections$Array$T(args1721, ((panda$core$Object*) start1711));
                panda$collections$Array$add$panda$collections$Array$T(args1721, ((panda$core$Object*) end1714));
                panda$collections$Array$add$panda$collections$Array$T(args1721, ((panda$core$Object*) step1717));
                org$pandalanguage$pandac$IRNode* $tmp1724 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1724->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1724->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1726 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp1724, ((panda$core$Int64) { 1011 }), p_expr->position, $tmp1726, ((panda$core$Bit$wrapper*) p_expr->payload)->value);
                panda$collections$Array$add$panda$collections$Array$T(args1721, ((panda$core$Object*) $tmp1724));
                org$pandalanguage$pandac$IRNode* $tmp1728 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1728->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1728->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1730 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1728, ((panda$core$Int64) { 1001 }), p_expr->position, $tmp1730, p_target);
                target1727 = $tmp1728;
                org$pandalanguage$pandac$IRNode* $tmp1731 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target1727, ((panda$collections$ListView*) args1721));
                return $tmp1731;
            }
            }
            else {
            {
                org$pandalanguage$pandac$IRNode* $tmp1732 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp1733 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp1732, p_target);
                return $tmp1733;
            }
            }
            }
        }
        break;
        case 1039:
        {
            panda$core$Object* $tmp1735 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            methods1734 = ((panda$collections$ListView*) ((org$pandalanguage$pandac$IRNode*) $tmp1735)->payload);
            panda$core$SimpleRange$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1737, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$collections$Array* $tmp1738 = panda$collections$Array$$IDX$panda$core$SimpleRange$LTpanda$core$Int64$Q$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT(p_expr->children, $tmp1737);
            args1736 = $tmp1738;
            panda$collections$Array* $tmp1740 = (panda$collections$Array*) malloc(40);
            $tmp1740->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1740->refCount.value = 1;
            panda$collections$Array$init($tmp1740);
            best1739 = $tmp1740;
            bestCost1742 = ((panda$core$Int64$nullable) { .nonnull = false });
            {
                ITable* $tmp1744 = ((panda$collections$Iterable*) methods1734)->$class->itable;
                while ($tmp1744->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1744 = $tmp1744->next;
                }
                $fn1746 $tmp1745 = $tmp1744->methods[0];
                panda$collections$Iterator* $tmp1747 = $tmp1745(((panda$collections$Iterable*) methods1734));
                m$Iter1743 = $tmp1747;
                $l1748:;
                ITable* $tmp1750 = m$Iter1743->$class->itable;
                while ($tmp1750->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1750 = $tmp1750->next;
                }
                $fn1752 $tmp1751 = $tmp1750->methods[0];
                panda$core$Bit $tmp1753 = $tmp1751(m$Iter1743);
                panda$core$Bit $tmp1754 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1753);
                if (!$tmp1754.value) goto $l1749;
                {
                    ITable* $tmp1756 = m$Iter1743->$class->itable;
                    while ($tmp1756->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1756 = $tmp1756->next;
                    }
                    $fn1758 $tmp1757 = $tmp1756->methods[1];
                    panda$core$Object* $tmp1759 = $tmp1757(m$Iter1743);
                    m1755 = ((org$pandalanguage$pandac$MethodRef*) $tmp1759);
                    panda$core$Int64$nullable $tmp1761 = org$pandalanguage$pandac$Compiler$callCost$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(self, m1755, ((panda$collections$ListView*) args1736), p_target);
                    cost1760 = $tmp1761;
                    if (((panda$core$Bit) { !cost1760.nonnull }).value) {
                    {
                        goto $l1748;
                    }
                    }
                    if (((panda$core$Bit) { !bestCost1742.nonnull }).value) {
                    {
                        panda$collections$Array$add$panda$collections$Array$T(best1739, ((panda$core$Object*) m1755));
                        bestCost1742 = cost1760;
                        goto $l1748;
                    }
                    }
                    panda$core$Bit $tmp1762 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost1760.value), ((panda$core$Int64) bestCost1742.value));
                    if ($tmp1762.value) {
                    {
                        panda$collections$Array$clear(best1739);
                        bestCost1742 = cost1760;
                    }
                    }
                    panda$core$Bit $tmp1763 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost1760.value), ((panda$core$Int64) bestCost1742.value));
                    if ($tmp1763.value) {
                    {
                        panda$collections$Array$add$panda$collections$Array$T(best1739, ((panda$core$Object*) m1755));
                    }
                    }
                }
                goto $l1748;
                $l1749:;
            }
            panda$core$Int64 $tmp1764 = panda$collections$Array$get_count$R$panda$core$Int64(best1739);
            panda$core$Bit $tmp1765 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1764, ((panda$core$Int64) { 1 }));
            if ($tmp1765.value) {
            {
                panda$core$Object* $tmp1767 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Int64 $tmp1768 = panda$collections$Array$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp1767)->children);
                panda$core$Bit $tmp1769 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1768, ((panda$core$Int64) { 0 }));
                if ($tmp1769.value) {
                {
                    panda$core$Object* $tmp1770 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                    panda$core$Object* $tmp1771 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp1770)->children, ((panda$core$Int64) { 0 }));
                    callTarget1766 = ((org$pandalanguage$pandac$IRNode*) $tmp1771);
                }
                }
                else {
                {
                    callTarget1766 = NULL;
                }
                }
                panda$core$Object* $tmp1773 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(best1739, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$IRNode* $tmp1774 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr->position, callTarget1766, ((org$pandalanguage$pandac$MethodRef*) $tmp1773), ((panda$collections$ListView*) args1736));
                result1772 = $tmp1774;
                org$pandalanguage$pandac$IRNode* $tmp1775 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, result1772, p_target);
                return $tmp1775;
            }
            }
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        break;
        case 1040:
        {
            panda$core$SimpleRange$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1777, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$collections$Array* $tmp1778 = panda$collections$Array$$IDX$panda$core$SimpleRange$LTpanda$core$Int64$Q$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT(p_expr->children, $tmp1777);
            args1776 = $tmp1778;
            panda$core$Object* $tmp1779 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp1781 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1779), &$s1780, ((panda$collections$ListView*) args1776), p_target);
            org$pandalanguage$pandac$IRNode* $tmp1782 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp1781, p_target);
            return $tmp1782;
        }
        break;
    }
    panda$core$Bit $tmp1783 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp1783.value) {
    {
        panda$core$Bit $tmp1784 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1030 }));
        if ($tmp1784.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp1785 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp1785->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1785->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp1785, ((panda$core$Int64) { 1030 }), p_expr->position, p_target);
            return $tmp1785;
        }
        }
        panda$core$Object* $tmp1787 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp1788 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_expr->type, ((org$pandalanguage$pandac$Type*) $tmp1787));
        if ($tmp1788.value) {
        {
            panda$collections$Array* $tmp1790 = (panda$collections$Array*) malloc(40);
            $tmp1790->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1790->refCount.value = 1;
            panda$collections$Array$init($tmp1790);
            children1789 = $tmp1790;
            panda$collections$Array$add$panda$collections$Array$T(children1789, ((panda$core$Object*) p_expr));
            org$pandalanguage$pandac$IRNode* $tmp1792 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp1792->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1792->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1792, ((panda$core$Int64) { 1009 }), p_expr->position, p_target, ((panda$core$Object*) wrap_panda$core$Bit(((panda$core$Bit) { false }))), ((panda$collections$ListView*) children1789));
            return $tmp1792;
        }
        }
        panda$core$Bit $tmp1794 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_expr->type->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp1794.value) {
        {
            panda$core$Object* $tmp1796 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp1797 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, ((org$pandalanguage$pandac$Type*) $tmp1796));
            intermediate1795 = $tmp1797;
            org$pandalanguage$pandac$IRNode* $tmp1798 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, intermediate1795, p_target);
            return $tmp1798;
        }
        }
    }
    }
    panda$core$Int64$nullable $tmp1799 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, p_target);
    if (((panda$core$Bit) { $tmp1799.nonnull }).value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp1801 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_target);
        cl1800 = $tmp1801;
        if (((panda$core$Bit) { cl1800 != NULL }).value) {
        {
            {
                ITable* $tmp1803 = ((panda$collections$Iterable*) cl1800->methods)->$class->itable;
                while ($tmp1803->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1803 = $tmp1803->next;
                }
                $fn1805 $tmp1804 = $tmp1803->methods[0];
                panda$collections$Iterator* $tmp1806 = $tmp1804(((panda$collections$Iterable*) cl1800->methods));
                m$Iter1802 = $tmp1806;
                $l1807:;
                ITable* $tmp1809 = m$Iter1802->$class->itable;
                while ($tmp1809->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1809 = $tmp1809->next;
                }
                $fn1811 $tmp1810 = $tmp1809->methods[0];
                panda$core$Bit $tmp1812 = $tmp1810(m$Iter1802);
                panda$core$Bit $tmp1813 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1812);
                if (!$tmp1813.value) goto $l1808;
                {
                    ITable* $tmp1815 = m$Iter1802->$class->itable;
                    while ($tmp1815->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1815 = $tmp1815->next;
                    }
                    $fn1817 $tmp1816 = $tmp1815->methods[1];
                    panda$core$Object* $tmp1818 = $tmp1816(m$Iter1802);
                    m1814 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1818);
                    panda$core$Bit $tmp1819 = org$pandalanguage$pandac$Annotations$isImplicit$R$panda$core$Bit(m1814->annotations);
                    if ($tmp1819.value) {
                    {
                        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m1814);
                        panda$core$Bit $tmp1820 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(m1814->methodKind, ((panda$core$Int64) { 59 }));
                        PANDA_ASSERT($tmp1820.value);
                        panda$core$Int64 $tmp1821 = panda$collections$Array$get_count$R$panda$core$Int64(m1814->parameters);
                        panda$core$Bit $tmp1822 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1821, ((panda$core$Int64) { 1 }));
                        PANDA_ASSERT($tmp1822.value);
                        panda$core$Object* $tmp1823 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(m1814->parameters, ((panda$core$Int64) { 0 }));
                        panda$core$Int64$nullable $tmp1824 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1823)->type);
                        if (((panda$core$Bit) { $tmp1824.nonnull }).value) {
                        {
                            org$pandalanguage$pandac$IRNode* $tmp1826 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                            $tmp1826->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                            $tmp1826->refCount.value = 1;
                            org$pandalanguage$pandac$Type* $tmp1828 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                            org$pandalanguage$pandac$Type* $tmp1829 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl1800);
                            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1826, ((panda$core$Int64) { 1001 }), p_expr->position, $tmp1828, $tmp1829);
                            type1825 = $tmp1826;
                            panda$collections$Array* $tmp1831 = (panda$collections$Array*) malloc(40);
                            $tmp1831->$class = (panda$core$Class*) &panda$collections$Array$class;
                            $tmp1831->refCount.value = 1;
                            panda$collections$Array$init$panda$core$Int64($tmp1831, ((panda$core$Int64) { 1 }));
                            args1830 = $tmp1831;
                            panda$collections$Array$add$panda$collections$Array$T(args1830, ((panda$core$Object*) p_expr));
                            org$pandalanguage$pandac$IRNode* $tmp1833 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, type1825, ((panda$collections$ListView*) args1830));
                            return $tmp1833;
                        }
                        }
                    }
                    }
                }
                goto $l1807;
                $l1808:;
            }
        }
        }
        panda$collections$Array* $tmp1835 = (panda$collections$Array*) malloc(40);
        $tmp1835->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp1835->refCount.value = 1;
        panda$collections$Array$init$panda$core$Int64($tmp1835, ((panda$core$Int64) { 1 }));
        children1834 = $tmp1835;
        panda$collections$Array$add$panda$collections$Array$T(children1834, ((panda$core$Object*) p_expr));
        org$pandalanguage$pandac$IRNode* $tmp1837 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp1837->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp1837->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1837, ((panda$core$Int64) { 1009 }), p_expr->position, p_target, ((panda$core$Object*) wrap_panda$core$Bit(((panda$core$Bit) { false }))), ((panda$collections$ListView*) children1834));
        return $tmp1837;
    }
    }
    panda$core$String* $tmp1840 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1839, ((panda$core$Object*) p_target));
    panda$core$String* $tmp1842 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1840, &$s1841);
    panda$core$String* $tmp1843 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1842, ((panda$core$Object*) p_expr->type));
    panda$core$String* $tmp1845 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1843, &$s1844);
    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_expr->position, $tmp1845);
    return NULL;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr, org$pandalanguage$pandac$Type* p_target) {
    org$pandalanguage$pandac$IRNode* result1846;
    org$pandalanguage$pandac$IRNode* $tmp1847 = org$pandalanguage$pandac$Compiler$doCoerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, p_target);
    result1846 = $tmp1847;
    bool $tmp1848 = ((panda$core$Bit) { result1846 == NULL }).value;
    if ($tmp1848) goto $l1849;
    panda$core$Bit $tmp1850 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(result1846->type, p_target);
    $tmp1848 = $tmp1850.value;
    $l1849:;
    panda$core$Bit $tmp1851 = { $tmp1848 };
    PANDA_ASSERT($tmp1851.value);
    return result1846;
}
panda$core$Bit org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type, org$pandalanguage$pandac$Type* p_target) {
    panda$core$Bit $tmp1853 = org$pandalanguage$pandac$Type$isPointer$R$panda$core$Bit(p_type);
    bool $tmp1852 = $tmp1853.value;
    if (!$tmp1852) goto $l1854;
    panda$core$Bit $tmp1855 = org$pandalanguage$pandac$Type$isPointer$R$panda$core$Bit(p_target);
    $tmp1852 = $tmp1855.value;
    $l1854:;
    panda$core$Bit $tmp1856 = { $tmp1852 };
    if ($tmp1856.value) {
    {
        return ((panda$core$Bit) { true });
    }
    }
    panda$core$Int64$nullable $tmp1857 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_type, p_target);
    if (((panda$core$Bit) { $tmp1857.nonnull }).value) {
    {
        return ((panda$core$Bit) { true });
    }
    }
    panda$core$Bit $tmp1859 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_type);
    bool $tmp1858 = $tmp1859.value;
    if (!$tmp1858) goto $l1860;
    panda$core$Bit $tmp1861 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_target);
    $tmp1858 = $tmp1861.value;
    $l1860:;
    panda$core$Bit $tmp1862 = { $tmp1858 };
    if ($tmp1862.value) {
    {
        return ((panda$core$Bit) { true });
    }
    }
    panda$core$Bit $tmp1863 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 16 }));
    if ($tmp1863.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Int64$nullable $tmp1864 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_target, p_type);
    return ((panda$core$Bit) { $tmp1864.nonnull });
}
panda$core$Bit org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_node, org$pandalanguage$pandac$Type* p_target) {
    panda$core$Bit result1866;
    org$pandalanguage$pandac$IRNode* resolved1873;
    panda$core$Int64$nullable $tmp1865 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_node, p_target);
    if (((panda$core$Bit) { $tmp1865.nonnull }).value) {
    {
        return ((panda$core$Bit) { true });
    }
    }
    panda$core$Bit $tmp1867 = org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_node->type, p_target);
    result1866 = $tmp1867;
    panda$core$Bit $tmp1869 = panda$core$Bit$$NOT$R$panda$core$Bit(result1866);
    bool $tmp1868 = $tmp1869.value;
    if (!$tmp1868) goto $l1870;
    panda$core$Bit $tmp1871 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_node->type->typeKind, ((panda$core$Int64) { 17 }));
    $tmp1868 = $tmp1871.value;
    $l1870:;
    panda$core$Bit $tmp1872 = { $tmp1868 };
    if ($tmp1872.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp1874 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_node);
        resolved1873 = $tmp1874;
        if (((panda$core$Bit) { resolved1873 != NULL }).value) {
        {
            panda$core$Bit $tmp1875 = org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, resolved1873, p_target);
            result1866 = $tmp1875;
        }
        }
    }
    }
    return result1866;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_node, org$pandalanguage$pandac$Position p_position, panda$core$Bit p_isExplicit, org$pandalanguage$pandac$Type* p_target) {
    org$pandalanguage$pandac$IRNode* resolved1896;
    panda$collections$Array* children1899;
    panda$core$Bit $tmp1876 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_node->type, p_target);
    if ($tmp1876.value) {
    {
        return p_node;
    }
    }
    org$pandalanguage$pandac$Type* $tmp1877 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1878 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1877);
    PANDA_ASSERT($tmp1878.value);
    bool $tmp1879 = p_isExplicit.value;
    if (!$tmp1879) goto $l1880;
    panda$core$Bit $tmp1881 = org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_node, p_target);
    panda$core$Bit $tmp1882 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1881);
    $tmp1879 = $tmp1882.value;
    $l1880:;
    panda$core$Bit $tmp1883 = { $tmp1879 };
    if ($tmp1883.value) {
    {
        panda$core$String* $tmp1885 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1884, ((panda$core$Object*) p_node->type));
        panda$core$String* $tmp1887 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1885, &$s1886);
        panda$core$String* $tmp1889 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1888, ((panda$core$Object*) p_target));
        panda$core$String* $tmp1891 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1889, &$s1890);
        panda$core$String* $tmp1892 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1887, $tmp1891);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp1892);
    }
    }
    switch (p_node->kind.value) {
        case 1004:
        case 1032:
        case 1011:
        {
            org$pandalanguage$pandac$IRNode* $tmp1893 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_node, p_target);
            return $tmp1893;
        }
        break;
        case 1039:
        case 1040:
        {
            panda$core$Int64$nullable $tmp1894 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_node, p_target);
            if (((panda$core$Bit) { $tmp1894.nonnull }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1895 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_node, p_target);
                return $tmp1895;
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp1897 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_node);
            resolved1896 = $tmp1897;
            if (((panda$core$Bit) { resolved1896 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1898 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, resolved1896, p_position, p_isExplicit, p_target);
                return $tmp1898;
            }
            }
        }
        break;
    }
    panda$collections$Array* $tmp1900 = (panda$collections$Array*) malloc(40);
    $tmp1900->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1900->refCount.value = 1;
    panda$collections$Array$init($tmp1900);
    children1899 = $tmp1900;
    panda$collections$Array$add$panda$collections$Array$T(children1899, ((panda$core$Object*) p_node));
    org$pandalanguage$pandac$IRNode* $tmp1902 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp1902->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp1902->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1902, ((panda$core$Int64) { 1009 }), p_position, p_target, ((panda$core$Object*) wrap_panda$core$Bit(p_isExplicit)), ((panda$collections$ListView*) children1899));
    return $tmp1902;
}
panda$core$Int64$nullable org$pandalanguage$pandac$Compiler$callCost$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodRef* p_m, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedReturn) {
    panda$core$Int64 result1910;
    panda$core$SimpleRange$LTpanda$core$Int64$GT $tmp1911;
    panda$core$Int64$nullable cost1930;
    panda$core$Int64$nullable cost1949;
    PANDA_ASSERT(p_m->value->resolved.value);
    panda$core$Int64 $tmp1904 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
    ITable* $tmp1905 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp1905->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1905 = $tmp1905->next;
    }
    $fn1907 $tmp1906 = $tmp1905->methods[0];
    panda$core$Int64 $tmp1908 = $tmp1906(((panda$collections$CollectionView*) p_args));
    panda$core$Bit $tmp1909 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1904, $tmp1908);
    if ($tmp1909.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    result1910 = ((panda$core$Int64) { 0 });
    panda$core$Int64 $tmp1912 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
    panda$core$SimpleRange$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1911, ((panda$core$Int64) { 0 }), $tmp1912, ((panda$core$Bit) { false }));
    int64_t $tmp1914 = $tmp1911.min.value;
    panda$core$Int64 i1913 = { $tmp1914 };
    int64_t $tmp1916 = $tmp1911.max.value;
    bool $tmp1917 = $tmp1911.inclusive.value;
    bool $tmp1924 = 1 > 0;
    if ($tmp1924) goto $l1922; else goto $l1923;
    $l1922:;
    if ($tmp1917) goto $l1925; else goto $l1926;
    $l1925:;
    if ($tmp1914 <= $tmp1916) goto $l1918; else goto $l1920;
    $l1926:;
    if ($tmp1914 < $tmp1916) goto $l1918; else goto $l1920;
    $l1923:;
    if ($tmp1917) goto $l1927; else goto $l1928;
    $l1927:;
    if ($tmp1914 >= $tmp1916) goto $l1918; else goto $l1920;
    $l1928:;
    if ($tmp1914 > $tmp1916) goto $l1918; else goto $l1920;
    $l1918:;
    {
        ITable* $tmp1931 = p_args->$class->itable;
        while ($tmp1931->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1931 = $tmp1931->next;
        }
        $fn1933 $tmp1932 = $tmp1931->methods[0];
        panda$core$Object* $tmp1934 = $tmp1932(p_args, i1913);
        org$pandalanguage$pandac$Type* $tmp1935 = org$pandalanguage$pandac$MethodRef$parameter$panda$core$Int64$R$org$pandalanguage$pandac$Type(p_m, i1913);
        panda$core$Int64$nullable $tmp1936 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1934), $tmp1935);
        cost1930 = $tmp1936;
        if (((panda$core$Bit) { !cost1930.nonnull }).value) {
        {
            return ((panda$core$Int64$nullable) { .nonnull = false });
        }
        }
        panda$core$Int64 $tmp1937 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result1910, ((panda$core$Int64) cost1930.value));
        result1910 = $tmp1937;
    }
    $l1921:;
    if ($tmp1924) goto $l1939; else goto $l1940;
    $l1939:;
    int64_t $tmp1941 = $tmp1916 - i1913.value;
    if ($tmp1917) goto $l1942; else goto $l1943;
    $l1942:;
    if ($tmp1941 >= 1) goto $l1938; else goto $l1920;
    $l1943:;
    if ($tmp1941 > 1) goto $l1938; else goto $l1920;
    $l1940:;
    int64_t $tmp1945 = i1913.value - $tmp1916;
    if ($tmp1917) goto $l1946; else goto $l1947;
    $l1946:;
    if ($tmp1945 >= -1) goto $l1938; else goto $l1920;
    $l1947:;
    if ($tmp1945 > -1) goto $l1938; else goto $l1920;
    $l1938:;
    i1913.value += 1;
    goto $l1918;
    $l1920:;
    if (((panda$core$Bit) { p_expectedReturn != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp1950 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(p_m);
        panda$core$Int64$nullable $tmp1951 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1950, p_expectedReturn);
        cost1949 = $tmp1951;
        if (((panda$core$Bit) { !cost1949.nonnull }).value) {
        {
            return ((panda$core$Int64$nullable) { .nonnull = false });
        }
        }
        panda$core$Int64 $tmp1952 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result1910, ((panda$core$Int64) cost1949.value));
        result1910 = $tmp1952;
    }
    }
    org$pandalanguage$pandac$Type* $tmp1955 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->value->owner);
    panda$core$Bit $tmp1956 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit($tmp1955);
    bool $tmp1954 = $tmp1956.value;
    if (!$tmp1954) goto $l1957;
    ITable* $tmp1958 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp1958->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1958 = $tmp1958->next;
    }
    $fn1960 $tmp1959 = $tmp1958->methods[0];
    panda$core$Int64 $tmp1961 = $tmp1959(((panda$collections$CollectionView*) p_args));
    panda$core$Bit $tmp1962 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1961, ((panda$core$Int64) { 1 }));
    $tmp1954 = $tmp1962.value;
    $l1957:;
    panda$core$Bit $tmp1963 = { $tmp1954 };
    bool $tmp1953 = $tmp1963.value;
    if (!$tmp1953) goto $l1964;
    panda$core$Object* $tmp1965 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->value->parameters, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp1966 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->value->owner);
    panda$core$Bit $tmp1967 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1965)->type, $tmp1966);
    $tmp1953 = $tmp1967.value;
    $l1964:;
    panda$core$Bit $tmp1968 = { $tmp1953 };
    if ($tmp1968.value) {
    {
        panda$core$Int64 $tmp1969 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result1910, ((panda$core$Int64) { 1 }));
        result1910 = $tmp1969;
    }
    }
    return ((panda$core$Int64$nullable) { result1910, true });
}
panda$core$Int64$nullable org$pandalanguage$pandac$Compiler$matchMethods$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(org$pandalanguage$pandac$Compiler* self, panda$collections$Array* p_methods, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedReturn) {
    panda$collections$Array* result1970;
    panda$core$Int64$nullable best1973;
    panda$collections$Iterator* m$Iter1974;
    org$pandalanguage$pandac$MethodRef* m1986;
    panda$core$Int64$nullable cost1991;
    panda$collections$Array* $tmp1971 = (panda$collections$Array*) malloc(40);
    $tmp1971->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1971->refCount.value = 1;
    panda$collections$Array$init($tmp1971);
    result1970 = $tmp1971;
    best1973 = ((panda$core$Int64$nullable) { .nonnull = false });
    {
        ITable* $tmp1975 = ((panda$collections$Iterable*) p_methods)->$class->itable;
        while ($tmp1975->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1975 = $tmp1975->next;
        }
        $fn1977 $tmp1976 = $tmp1975->methods[0];
        panda$collections$Iterator* $tmp1978 = $tmp1976(((panda$collections$Iterable*) p_methods));
        m$Iter1974 = $tmp1978;
        $l1979:;
        ITable* $tmp1981 = m$Iter1974->$class->itable;
        while ($tmp1981->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1981 = $tmp1981->next;
        }
        $fn1983 $tmp1982 = $tmp1981->methods[0];
        panda$core$Bit $tmp1984 = $tmp1982(m$Iter1974);
        panda$core$Bit $tmp1985 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1984);
        if (!$tmp1985.value) goto $l1980;
        {
            ITable* $tmp1987 = m$Iter1974->$class->itable;
            while ($tmp1987->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1987 = $tmp1987->next;
            }
            $fn1989 $tmp1988 = $tmp1987->methods[1];
            panda$core$Object* $tmp1990 = $tmp1988(m$Iter1974);
            m1986 = ((org$pandalanguage$pandac$MethodRef*) $tmp1990);
            panda$core$Int64$nullable $tmp1992 = org$pandalanguage$pandac$Compiler$callCost$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(self, m1986, p_args, p_expectedReturn);
            cost1991 = $tmp1992;
            if (((panda$core$Bit) { !cost1991.nonnull }).value) {
            {
                goto $l1979;
            }
            }
            bool $tmp1993 = ((panda$core$Bit) { !best1973.nonnull }).value;
            if ($tmp1993) goto $l1994;
            panda$core$Bit $tmp1995 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost1991.value), ((panda$core$Int64) best1973.value));
            $tmp1993 = $tmp1995.value;
            $l1994:;
            panda$core$Bit $tmp1996 = { $tmp1993 };
            if ($tmp1996.value) {
            {
                panda$collections$Array$clear(result1970);
                best1973 = cost1991;
            }
            }
            panda$core$Bit $tmp1997 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost1991.value), ((panda$core$Int64) best1973.value));
            if ($tmp1997.value) {
            {
                panda$collections$Array$add$panda$collections$Array$T(result1970, ((panda$core$Object*) m1986));
            }
            }
        }
        goto $l1979;
        $l1980:;
    }
    panda$collections$Array$clear(p_methods);
    panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(p_methods, ((panda$collections$CollectionView*) result1970));
    return best1973;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$MethodRef* p_m, panda$collections$ListView* p_args) {
    panda$core$String* s2004;
    panda$collections$Array* finalArgs2030;
    org$pandalanguage$pandac$IRNode* selfNode2066;
    panda$core$SimpleRange$LTpanda$core$Int64$GT $tmp2095;
    org$pandalanguage$pandac$IRNode* coerced2117;
    org$pandalanguage$pandac$IRNode* result2137;
    PANDA_ASSERT(p_m->value->resolved.value);
    panda$core$Int64 $tmp1998 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
    ITable* $tmp1999 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp1999->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1999 = $tmp1999->next;
    }
    $fn2001 $tmp2000 = $tmp1999->methods[0];
    panda$core$Int64 $tmp2002 = $tmp2000(((panda$collections$CollectionView*) p_args));
    panda$core$Bit $tmp2003 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1998, $tmp2002);
    if ($tmp2003.value) {
    {
        panda$core$Int64 $tmp2005 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
        panda$core$Bit $tmp2006 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2005, ((panda$core$Int64) { 1 }));
        if ($tmp2006.value) {
        {
            s2004 = &$s2007;
        }
        }
        else {
        {
            s2004 = &$s2008;
        }
        }
        panda$core$String* $tmp2010 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(p_m->value);
        panda$core$String* $tmp2011 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2009, $tmp2010);
        panda$core$String* $tmp2013 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2011, &$s2012);
        panda$core$Int64 $tmp2014 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
        panda$core$String* $tmp2015 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2013, ((panda$core$Object*) wrap_panda$core$Int64($tmp2014)));
        panda$core$String* $tmp2017 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2015, &$s2016);
        panda$core$String* $tmp2018 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2017, s2004);
        panda$core$String* $tmp2020 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2018, &$s2019);
        ITable* $tmp2022 = ((panda$collections$CollectionView*) p_args)->$class->itable;
        while ($tmp2022->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp2022 = $tmp2022->next;
        }
        $fn2024 $tmp2023 = $tmp2022->methods[0];
        panda$core$Int64 $tmp2025 = $tmp2023(((panda$collections$CollectionView*) p_args));
        panda$core$String* $tmp2026 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2021, ((panda$core$Object*) wrap_panda$core$Int64($tmp2025)));
        panda$core$String* $tmp2028 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2026, &$s2027);
        panda$core$String* $tmp2029 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2020, $tmp2028);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp2029);
        return NULL;
    }
    }
    panda$collections$Array* $tmp2031 = (panda$collections$Array*) malloc(40);
    $tmp2031->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2031->refCount.value = 1;
    panda$collections$Array$init($tmp2031);
    finalArgs2030 = $tmp2031;
    bool $tmp2034 = ((panda$core$Bit) { p_target != NULL }).value;
    if (!$tmp2034) goto $l2035;
    panda$core$Bit $tmp2036 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1038 }));
    $tmp2034 = $tmp2036.value;
    $l2035:;
    panda$core$Bit $tmp2037 = { $tmp2034 };
    bool $tmp2033 = $tmp2037.value;
    if (!$tmp2033) goto $l2038;
    panda$core$Bit $tmp2039 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->value->annotations);
    panda$core$Bit $tmp2040 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2039);
    $tmp2033 = $tmp2040.value;
    $l2038:;
    panda$core$Bit $tmp2041 = { $tmp2033 };
    if ($tmp2041.value) {
    {
        org$pandalanguage$pandac$Type* $tmp2042 = org$pandalanguage$pandac$MethodRef$owner$R$org$pandalanguage$pandac$Type(p_m);
        org$pandalanguage$pandac$IRNode* $tmp2043 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, p_target, p_position, ((panda$core$Bit) { false }), $tmp2042);
        panda$collections$Array$add$panda$collections$Array$T(finalArgs2030, ((panda$core$Object*) $tmp2043));
    }
    }
    panda$core$Bit $tmp2044 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->value->methodKind, ((panda$core$Int64) { 59 }));
    if ($tmp2044.value) {
    {
        if (((panda$core$Bit) { p_target == NULL }).value) {
        {
            panda$core$Object* $tmp2045 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
            panda$core$Bit $tmp2046 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp2045)->methodKind, ((panda$core$Int64) { 59 }));
            if ($tmp2046.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2047 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2047->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2047->refCount.value = 1;
                panda$core$Object* $tmp2049 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
                org$pandalanguage$pandac$Type* $tmp2050 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp2049));
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp2047, ((panda$core$Int64) { 1025 }), p_position, $tmp2050);
                panda$collections$Array$add$panda$collections$Array$T(finalArgs2030, ((panda$core$Object*) $tmp2047));
            }
            }
            else {
            {
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s2051);
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp2054 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1025 }));
        bool $tmp2053 = $tmp2054.value;
        if (!$tmp2053) goto $l2055;
        panda$core$Bit $tmp2056 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1024 }));
        $tmp2053 = $tmp2056.value;
        $l2055:;
        panda$core$Bit $tmp2057 = { $tmp2053 };
        bool $tmp2052 = $tmp2057.value;
        if (!$tmp2052) goto $l2058;
        panda$core$Bit $tmp2059 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1038 }));
        $tmp2052 = $tmp2059.value;
        $l2058:;
        panda$core$Bit $tmp2060 = { $tmp2052 };
        if ($tmp2060.value) {
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s2061);
        }
        }
        }
    }
    }
    else {
    panda$core$Bit $tmp2063 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(p_m->value);
    bool $tmp2062 = $tmp2063.value;
    if (!$tmp2062) goto $l2064;
    $tmp2062 = ((panda$core$Bit) { p_target == NULL }).value;
    $l2064:;
    panda$core$Bit $tmp2065 = { $tmp2062 };
    if ($tmp2065.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2067 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2067->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2067->refCount.value = 1;
        panda$core$Object* $tmp2069 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
        org$pandalanguage$pandac$Type* $tmp2070 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp2069));
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp2067, ((panda$core$Int64) { 1025 }), p_position, $tmp2070);
        selfNode2066 = $tmp2067;
        org$pandalanguage$pandac$Type* $tmp2071 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->value->owner);
        org$pandalanguage$pandac$IRNode* $tmp2072 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, selfNode2066, $tmp2071);
        selfNode2066 = $tmp2072;
        PANDA_ASSERT(((panda$core$Bit) { selfNode2066 != NULL }).value);
        panda$collections$Array$add$panda$collections$Array$T(finalArgs2030, ((panda$core$Object*) selfNode2066));
        panda$core$Object* $tmp2073 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
        panda$core$Bit $tmp2074 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp2073));
        panda$core$Bit $tmp2075 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2074);
        if ($tmp2075.value) {
        {
            panda$core$String* $tmp2077 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(p_m->value);
            panda$core$String* $tmp2078 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2076, $tmp2077);
            panda$core$String* $tmp2080 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2078, &$s2079);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp2080);
        }
        }
    }
    }
    else {
    panda$core$Bit $tmp2083 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(p_m->value);
    panda$core$Bit $tmp2084 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2083);
    bool $tmp2082 = $tmp2084.value;
    if (!$tmp2082) goto $l2085;
    $tmp2082 = ((panda$core$Bit) { p_target != NULL }).value;
    $l2085:;
    panda$core$Bit $tmp2086 = { $tmp2082 };
    bool $tmp2081 = $tmp2086.value;
    if (!$tmp2081) goto $l2087;
    panda$core$Bit $tmp2088 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1001 }));
    $tmp2081 = $tmp2088.value;
    $l2087:;
    panda$core$Bit $tmp2089 = { $tmp2081 };
    if ($tmp2089.value) {
    {
        panda$core$String* $tmp2091 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(p_m->value);
        panda$core$String* $tmp2092 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2090, $tmp2091);
        panda$core$String* $tmp2094 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2092, &$s2093);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp2094);
    }
    }
    }
    }
    ITable* $tmp2096 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp2096->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2096 = $tmp2096->next;
    }
    $fn2098 $tmp2097 = $tmp2096->methods[0];
    panda$core$Int64 $tmp2099 = $tmp2097(((panda$collections$CollectionView*) p_args));
    panda$core$SimpleRange$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2095, ((panda$core$Int64) { 0 }), $tmp2099, ((panda$core$Bit) { false }));
    int64_t $tmp2101 = $tmp2095.min.value;
    panda$core$Int64 i2100 = { $tmp2101 };
    int64_t $tmp2103 = $tmp2095.max.value;
    bool $tmp2104 = $tmp2095.inclusive.value;
    bool $tmp2111 = 1 > 0;
    if ($tmp2111) goto $l2109; else goto $l2110;
    $l2109:;
    if ($tmp2104) goto $l2112; else goto $l2113;
    $l2112:;
    if ($tmp2101 <= $tmp2103) goto $l2105; else goto $l2107;
    $l2113:;
    if ($tmp2101 < $tmp2103) goto $l2105; else goto $l2107;
    $l2110:;
    if ($tmp2104) goto $l2114; else goto $l2115;
    $l2114:;
    if ($tmp2101 >= $tmp2103) goto $l2105; else goto $l2107;
    $l2115:;
    if ($tmp2101 > $tmp2103) goto $l2105; else goto $l2107;
    $l2105:;
    {
        ITable* $tmp2118 = p_args->$class->itable;
        while ($tmp2118->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2118 = $tmp2118->next;
        }
        $fn2120 $tmp2119 = $tmp2118->methods[0];
        panda$core$Object* $tmp2121 = $tmp2119(p_args, i2100);
        org$pandalanguage$pandac$Type* $tmp2122 = org$pandalanguage$pandac$MethodRef$parameter$panda$core$Int64$R$org$pandalanguage$pandac$Type(p_m, i2100);
        org$pandalanguage$pandac$IRNode* $tmp2123 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp2121), $tmp2122);
        coerced2117 = $tmp2123;
        if (((panda$core$Bit) { coerced2117 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Object* $tmp2124 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->value->parameters, i2100);
        org$pandalanguage$pandac$IRNode* $tmp2125 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, coerced2117, p_position, ((panda$core$Bit) { false }), ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp2124)->type);
        coerced2117 = $tmp2125;
        if (((panda$core$Bit) { coerced2117 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(finalArgs2030, ((panda$core$Object*) coerced2117));
    }
    $l2108:;
    if ($tmp2111) goto $l2127; else goto $l2128;
    $l2127:;
    int64_t $tmp2129 = $tmp2103 - i2100.value;
    if ($tmp2104) goto $l2130; else goto $l2131;
    $l2130:;
    if ($tmp2129 >= 1) goto $l2126; else goto $l2107;
    $l2131:;
    if ($tmp2129 > 1) goto $l2126; else goto $l2107;
    $l2128:;
    int64_t $tmp2133 = i2100.value - $tmp2103;
    if ($tmp2104) goto $l2134; else goto $l2135;
    $l2134:;
    if ($tmp2133 >= -1) goto $l2126; else goto $l2107;
    $l2135:;
    if ($tmp2133 > -1) goto $l2126; else goto $l2107;
    $l2126:;
    i2100.value += 1;
    goto $l2105;
    $l2107:;
    panda$core$Bit $tmp2139 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_m->value->owner)->name, &$s2138);
    if ($tmp2139.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2140 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2140->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2140->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp2142 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(p_m);
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2140, ((panda$core$Int64) { 1005 }), p_position, $tmp2142, ((panda$core$Object*) p_m), ((panda$collections$ListView*) finalArgs2030));
        result2137 = $tmp2140;
    }
    }
    else {
    {
        org$pandalanguage$pandac$IRNode* $tmp2143 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2143->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2143->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2143, ((panda$core$Int64) { 1005 }), p_position, p_m->value->returnType, ((panda$core$Object*) p_m), ((panda$collections$ListView*) finalArgs2030));
        result2137 = $tmp2143;
        org$pandalanguage$pandac$Type* $tmp2145 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(p_m);
        org$pandalanguage$pandac$IRNode* $tmp2146 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, result2137, p_position, ((panda$core$Bit) { false }), $tmp2145);
        result2137 = $tmp2146;
    }
    }
    return result2137;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_target, panda$core$String* p_name, panda$collections$ListView* p_args) {
    org$pandalanguage$pandac$IRNode* $tmp2147 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_target, p_name, p_args, NULL);
    return $tmp2147;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_target, panda$core$String* p_name, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedType) {
    org$pandalanguage$pandac$IRNode* resolved2148;
    org$pandalanguage$pandac$ClassDecl* cl2150;
    org$pandalanguage$pandac$Symbol* s2154;
    org$pandalanguage$pandac$IRNode* ref2176;
    org$pandalanguage$pandac$IRNode* $tmp2149 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_target);
    resolved2148 = $tmp2149;
    if (((panda$core$Bit) { resolved2148 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp2151 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(resolved2148->kind, ((panda$core$Int64) { 1001 }));
    if ($tmp2151.value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp2152 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Type*) resolved2148->payload));
        cl2150 = $tmp2152;
    }
    }
    else {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp2153 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, resolved2148->type);
        cl2150 = $tmp2153;
    }
    }
    if (((panda$core$Bit) { cl2150 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp2155 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl2150);
    org$pandalanguage$pandac$Symbol* $tmp2156 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp2155, p_name);
    s2154 = $tmp2156;
    if (((panda$core$Bit) { s2154 == NULL }).value) {
    {
        panda$core$String* $tmp2158 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2157, ((org$pandalanguage$pandac$Symbol*) cl2150)->name);
        panda$core$String* $tmp2160 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2158, &$s2159);
        panda$core$String* $tmp2161 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2160, p_name);
        panda$core$String* $tmp2163 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2161, &$s2162);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_target->position, $tmp2163);
        return NULL;
    }
    }
    panda$core$Bit $tmp2165 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(s2154->kind, ((panda$core$Int64) { 204 }));
    bool $tmp2164 = $tmp2165.value;
    if (!$tmp2164) goto $l2166;
    panda$core$Bit $tmp2167 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(s2154->kind, ((panda$core$Int64) { 205 }));
    $tmp2164 = $tmp2167.value;
    $l2166:;
    panda$core$Bit $tmp2168 = { $tmp2164 };
    if ($tmp2168.value) {
    {
        panda$core$String* $tmp2170 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2169, ((org$pandalanguage$pandac$Symbol*) cl2150)->name);
        panda$core$String* $tmp2172 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2170, &$s2171);
        panda$core$String* $tmp2173 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2172, p_name);
        panda$core$String* $tmp2175 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2173, &$s2174);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_target->position, $tmp2175);
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp2177 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl2150);
    org$pandalanguage$pandac$IRNode* $tmp2178 = org$pandalanguage$pandac$Compiler$symbolRef$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q(self, p_target->position, p_target, s2154, $tmp2177);
    ref2176 = $tmp2178;
    if (((panda$core$Bit) { ref2176 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp2179 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, ref2176, p_args, p_expectedType);
    return $tmp2179;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_m, panda$collections$ListView* p_args) {
    org$pandalanguage$pandac$IRNode* $tmp2180 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_m, p_args, NULL);
    return $tmp2180;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_m, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedType) {
    org$pandalanguage$pandac$IRNode* target2181;
    panda$collections$Array* methods2188;
    org$pandalanguage$pandac$MethodDecl* first2193;
    panda$core$MutableString* msg2198;
    panda$core$String* separator2210;
    panda$collections$Iterator* a$Iter2212;
    org$pandalanguage$pandac$IRNode* a2224;
    org$pandalanguage$pandac$IRNode* target2238;
    panda$collections$Array* children2246;
    panda$collections$Array* types2252;
    panda$collections$Iterator* m$Iter2255;
    org$pandalanguage$pandac$MethodRef* m2267;
    org$pandalanguage$pandac$IRNode* target2277;
    org$pandalanguage$pandac$IRNode* initCall2280;
    panda$collections$Array* children2284;
    org$pandalanguage$pandac$IRNode* resolved2289;
    switch (p_m->kind.value) {
        case 1002:
        {
            panda$core$Int64 $tmp2182 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->children);
            panda$core$Bit $tmp2183 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2182, ((panda$core$Int64) { 0 }));
            if ($tmp2183.value) {
            {
                target2181 = NULL;
            }
            }
            else {
            {
                panda$core$Int64 $tmp2184 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->children);
                panda$core$Bit $tmp2185 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2184, ((panda$core$Int64) { 1 }));
                PANDA_ASSERT($tmp2185.value);
                panda$core$Object* $tmp2186 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->children, ((panda$core$Int64) { 0 }));
                target2181 = ((org$pandalanguage$pandac$IRNode*) $tmp2186);
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp2187 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, p_m->position, target2181, ((org$pandalanguage$pandac$MethodRef*) p_m->payload), p_args);
            return $tmp2187;
        }
        break;
        case 1003:
        {
            panda$collections$Array* $tmp2189 = (panda$collections$Array*) malloc(40);
            $tmp2189->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2189->refCount.value = 1;
            panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp2189, ((panda$collections$ListView*) p_m->payload));
            methods2188 = $tmp2189;
            org$pandalanguage$pandac$Compiler$matchMethods$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(self, methods2188, p_args, p_expectedType);
            panda$core$Int64 $tmp2191 = panda$collections$Array$get_count$R$panda$core$Int64(methods2188);
            panda$core$Bit $tmp2192 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2191, ((panda$core$Int64) { 0 }));
            if ($tmp2192.value) {
            {
                ITable* $tmp2194 = ((panda$collections$ListView*) p_m->payload)->$class->itable;
                while ($tmp2194->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp2194 = $tmp2194->next;
                }
                $fn2196 $tmp2195 = $tmp2194->methods[0];
                panda$core$Object* $tmp2197 = $tmp2195(((panda$collections$ListView*) p_m->payload), ((panda$core$Int64) { 0 }));
                first2193 = ((org$pandalanguage$pandac$MethodRef*) $tmp2197)->value;
                panda$core$MutableString* $tmp2199 = (panda$core$MutableString*) malloc(40);
                $tmp2199->$class = (panda$core$Class*) &panda$core$MutableString$class;
                $tmp2199->refCount.value = 1;
                panda$core$String* $tmp2202 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2201, ((org$pandalanguage$pandac$Symbol*) first2193->owner)->name);
                panda$core$String* $tmp2204 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2202, &$s2203);
                panda$core$String* $tmp2206 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2205, ((org$pandalanguage$pandac$Symbol*) first2193)->name);
                panda$core$String* $tmp2208 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2206, &$s2207);
                panda$core$String* $tmp2209 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2204, $tmp2208);
                panda$core$MutableString$init$panda$core$String($tmp2199, $tmp2209);
                msg2198 = $tmp2199;
                separator2210 = &$s2211;
                {
                    ITable* $tmp2213 = ((panda$collections$Iterable*) p_args)->$class->itable;
                    while ($tmp2213->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp2213 = $tmp2213->next;
                    }
                    $fn2215 $tmp2214 = $tmp2213->methods[0];
                    panda$collections$Iterator* $tmp2216 = $tmp2214(((panda$collections$Iterable*) p_args));
                    a$Iter2212 = $tmp2216;
                    $l2217:;
                    ITable* $tmp2219 = a$Iter2212->$class->itable;
                    while ($tmp2219->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp2219 = $tmp2219->next;
                    }
                    $fn2221 $tmp2220 = $tmp2219->methods[0];
                    panda$core$Bit $tmp2222 = $tmp2220(a$Iter2212);
                    panda$core$Bit $tmp2223 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2222);
                    if (!$tmp2223.value) goto $l2218;
                    {
                        ITable* $tmp2225 = a$Iter2212->$class->itable;
                        while ($tmp2225->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2225 = $tmp2225->next;
                        }
                        $fn2227 $tmp2226 = $tmp2225->methods[1];
                        panda$core$Object* $tmp2228 = $tmp2226(a$Iter2212);
                        a2224 = ((org$pandalanguage$pandac$IRNode*) $tmp2228);
                        panda$core$MutableString$append$panda$core$String(msg2198, separator2210);
                        panda$core$MutableString$append$panda$core$Object(msg2198, ((panda$core$Object*) a2224->type));
                        separator2210 = &$s2229;
                    }
                    goto $l2217;
                    $l2218:;
                }
                panda$core$MutableString$append$panda$core$String(msg2198, &$s2230);
                if (((panda$core$Bit) { p_expectedType != NULL }).value) {
                {
                    panda$core$String* $tmp2232 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2231, ((panda$core$Object*) p_expectedType));
                    panda$core$String* $tmp2234 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2232, &$s2233);
                    panda$core$MutableString$append$panda$core$String(msg2198, $tmp2234);
                }
                }
                panda$core$String* $tmp2235 = panda$core$MutableString$convert$R$panda$core$String(msg2198);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_m->position, $tmp2235);
                return NULL;
            }
            }
            panda$core$Int64 $tmp2236 = panda$collections$Array$get_count$R$panda$core$Int64(methods2188);
            panda$core$Bit $tmp2237 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2236, ((panda$core$Int64) { 1 }));
            if ($tmp2237.value) {
            {
                panda$core$Int64 $tmp2239 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->children);
                panda$core$Bit $tmp2240 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2239, ((panda$core$Int64) { 1 }));
                if ($tmp2240.value) {
                {
                    panda$core$Object* $tmp2241 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->children, ((panda$core$Int64) { 0 }));
                    target2238 = ((org$pandalanguage$pandac$IRNode*) $tmp2241);
                }
                }
                else {
                {
                    panda$core$Int64 $tmp2242 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->children);
                    panda$core$Bit $tmp2243 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2242, ((panda$core$Int64) { 0 }));
                    PANDA_ASSERT($tmp2243.value);
                    target2238 = NULL;
                }
                }
                panda$core$Object* $tmp2244 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(methods2188, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$IRNode* $tmp2245 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, p_m->position, target2238, ((org$pandalanguage$pandac$MethodRef*) $tmp2244), p_args);
                return $tmp2245;
            }
            }
            panda$collections$Array* $tmp2247 = (panda$collections$Array*) malloc(40);
            $tmp2247->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2247->refCount.value = 1;
            panda$collections$Array$init($tmp2247);
            children2246 = $tmp2247;
            org$pandalanguage$pandac$IRNode* $tmp2249 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2249->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2249->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2251 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2249, ((panda$core$Int64) { 1003 }), p_m->position, $tmp2251, ((panda$core$Object*) methods2188), ((panda$collections$ListView*) p_m->children));
            panda$collections$Array$add$panda$collections$Array$T(children2246, ((panda$core$Object*) $tmp2249));
            panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(children2246, ((panda$collections$CollectionView*) p_args));
            panda$collections$Array* $tmp2253 = (panda$collections$Array*) malloc(40);
            $tmp2253->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2253->refCount.value = 1;
            panda$collections$Array$init($tmp2253);
            types2252 = $tmp2253;
            {
                ITable* $tmp2256 = ((panda$collections$Iterable*) methods2188)->$class->itable;
                while ($tmp2256->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp2256 = $tmp2256->next;
                }
                $fn2258 $tmp2257 = $tmp2256->methods[0];
                panda$collections$Iterator* $tmp2259 = $tmp2257(((panda$collections$Iterable*) methods2188));
                m$Iter2255 = $tmp2259;
                $l2260:;
                ITable* $tmp2262 = m$Iter2255->$class->itable;
                while ($tmp2262->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp2262 = $tmp2262->next;
                }
                $fn2264 $tmp2263 = $tmp2262->methods[0];
                panda$core$Bit $tmp2265 = $tmp2263(m$Iter2255);
                panda$core$Bit $tmp2266 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2265);
                if (!$tmp2266.value) goto $l2261;
                {
                    ITable* $tmp2268 = m$Iter2255->$class->itable;
                    while ($tmp2268->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp2268 = $tmp2268->next;
                    }
                    $fn2270 $tmp2269 = $tmp2268->methods[1];
                    panda$core$Object* $tmp2271 = $tmp2269(m$Iter2255);
                    m2267 = ((org$pandalanguage$pandac$MethodRef*) $tmp2271);
                    org$pandalanguage$pandac$Type* $tmp2272 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m2267);
                    panda$collections$Array$add$panda$collections$Array$T(types2252, ((panda$core$Object*) $tmp2272));
                }
                goto $l2260;
                $l2261:;
            }
            org$pandalanguage$pandac$IRNode* $tmp2273 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2273->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2273->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2275 = (org$pandalanguage$pandac$Type*) malloc(96);
            $tmp2275->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp2275->refCount.value = 1;
            org$pandalanguage$pandac$Type$init$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp2275, ((panda$collections$ListView*) types2252));
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2273, ((panda$core$Int64) { 1039 }), p_m->position, $tmp2275, ((panda$collections$ListView*) children2246));
            return $tmp2273;
        }
        break;
        case 1001:
        {
            org$pandalanguage$pandac$IRNode* $tmp2278 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2278->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2278->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp2278, ((panda$core$Int64) { 1038 }), p_m->position, ((org$pandalanguage$pandac$Type*) p_m->payload));
            target2277 = $tmp2278;
            org$pandalanguage$pandac$IRNode* $tmp2282 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target2277, &$s2281, p_args);
            org$pandalanguage$pandac$IRNode* $tmp2283 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp2282);
            initCall2280 = $tmp2283;
            if (((panda$core$Bit) { initCall2280 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp2285 = (panda$collections$Array*) malloc(40);
            $tmp2285->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2285->refCount.value = 1;
            panda$collections$Array$init($tmp2285);
            children2284 = $tmp2285;
            panda$collections$Array$add$panda$collections$Array$T(children2284, ((panda$core$Object*) initCall2280));
            org$pandalanguage$pandac$IRNode* $tmp2287 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2287->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2287->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2287, ((panda$core$Int64) { 1010 }), p_m->position, ((org$pandalanguage$pandac$Type*) p_m->payload), ((panda$collections$ListView*) children2284));
            return $tmp2287;
        }
        break;
        default:
        {
            org$pandalanguage$pandac$IRNode* $tmp2290 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_m);
            resolved2289 = $tmp2290;
            if (((panda$core$Bit) { resolved2289 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$String* $tmp2292 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2291, ((panda$core$Object*) resolved2289->type));
            panda$core$String* $tmp2294 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2292, &$s2293);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, resolved2289->position, $tmp2294);
        }
    }
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$collections$Array* subtypes2295;
    panda$core$MutableString* typeName2298;
    panda$core$String* separator2302;
    panda$collections$Iterator* p$Iter2304;
    org$pandalanguage$pandac$MethodDecl$Parameter* p2316;
    panda$core$Int64 kind2322;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
    panda$collections$Array* $tmp2296 = (panda$collections$Array*) malloc(40);
    $tmp2296->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2296->refCount.value = 1;
    panda$collections$Array$init($tmp2296);
    subtypes2295 = $tmp2296;
    panda$core$MutableString* $tmp2299 = (panda$core$MutableString*) malloc(40);
    $tmp2299->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp2299->refCount.value = 1;
    panda$core$MutableString$init$panda$core$String($tmp2299, &$s2301);
    typeName2298 = $tmp2299;
    separator2302 = &$s2303;
    {
        ITable* $tmp2305 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp2305->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2305 = $tmp2305->next;
        }
        $fn2307 $tmp2306 = $tmp2305->methods[0];
        panda$collections$Iterator* $tmp2308 = $tmp2306(((panda$collections$Iterable*) p_m->parameters));
        p$Iter2304 = $tmp2308;
        $l2309:;
        ITable* $tmp2311 = p$Iter2304->$class->itable;
        while ($tmp2311->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2311 = $tmp2311->next;
        }
        $fn2313 $tmp2312 = $tmp2311->methods[0];
        panda$core$Bit $tmp2314 = $tmp2312(p$Iter2304);
        panda$core$Bit $tmp2315 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2314);
        if (!$tmp2315.value) goto $l2310;
        {
            ITable* $tmp2317 = p$Iter2304->$class->itable;
            while ($tmp2317->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2317 = $tmp2317->next;
            }
            $fn2319 $tmp2318 = $tmp2317->methods[1];
            panda$core$Object* $tmp2320 = $tmp2318(p$Iter2304);
            p2316 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp2320);
            panda$core$MutableString$append$panda$core$String(typeName2298, separator2302);
            panda$core$MutableString$append$panda$core$String(typeName2298, ((org$pandalanguage$pandac$Symbol*) p2316->type)->name);
            panda$collections$Array$add$panda$collections$Array$T(subtypes2295, ((panda$core$Object*) p2316->type));
            separator2302 = &$s2321;
        }
        goto $l2309;
        $l2310:;
    }
    panda$core$Bit $tmp2323 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 58 }));
    if ($tmp2323.value) {
    {
        panda$core$MutableString$append$panda$core$String(typeName2298, &$s2324);
        kind2322 = ((panda$core$Int64) { 24 });
    }
    }
    else {
    {
        panda$core$MutableString$append$panda$core$String(typeName2298, &$s2325);
        kind2322 = ((panda$core$Int64) { 25 });
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(subtypes2295, ((panda$core$Object*) p_m->returnType));
    org$pandalanguage$pandac$Type* $tmp2326 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2327 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp2326);
    if ($tmp2327.value) {
    {
        panda$core$MutableString$append$panda$core$String(typeName2298, ((org$pandalanguage$pandac$Symbol*) p_m->returnType)->name);
    }
    }
    panda$core$MutableString$append$panda$core$String(typeName2298, &$s2328);
    org$pandalanguage$pandac$Type* $tmp2329 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp2329->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp2329->refCount.value = 1;
    panda$core$String* $tmp2331 = panda$core$MutableString$convert$R$panda$core$String(typeName2298);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp2329, $tmp2331, kind2322, ((org$pandalanguage$pandac$Symbol*) p_m)->position, ((panda$collections$ListView*) subtypes2295), ((panda$core$Bit) { true }));
    return $tmp2329;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$declaredTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m, org$pandalanguage$pandac$Type* p_selfType) {
    panda$collections$Array* subtypes2332;
    panda$core$MutableString* typeName2335;
    panda$collections$Iterator* p$Iter2339;
    org$pandalanguage$pandac$MethodDecl$Parameter* p2351;
    panda$core$Int64 kind2357;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
    panda$collections$Array* $tmp2333 = (panda$collections$Array*) malloc(40);
    $tmp2333->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2333->refCount.value = 1;
    panda$collections$Array$init($tmp2333);
    subtypes2332 = $tmp2333;
    panda$core$MutableString* $tmp2336 = (panda$core$MutableString*) malloc(40);
    $tmp2336->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp2336->refCount.value = 1;
    panda$core$MutableString$init$panda$core$String($tmp2336, &$s2338);
    typeName2335 = $tmp2336;
    panda$core$MutableString$append$panda$core$String(typeName2335, ((org$pandalanguage$pandac$Symbol*) p_selfType)->name);
    panda$collections$Array$add$panda$collections$Array$T(subtypes2332, ((panda$core$Object*) p_selfType));
    {
        ITable* $tmp2340 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp2340->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2340 = $tmp2340->next;
        }
        $fn2342 $tmp2341 = $tmp2340->methods[0];
        panda$collections$Iterator* $tmp2343 = $tmp2341(((panda$collections$Iterable*) p_m->parameters));
        p$Iter2339 = $tmp2343;
        $l2344:;
        ITable* $tmp2346 = p$Iter2339->$class->itable;
        while ($tmp2346->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2346 = $tmp2346->next;
        }
        $fn2348 $tmp2347 = $tmp2346->methods[0];
        panda$core$Bit $tmp2349 = $tmp2347(p$Iter2339);
        panda$core$Bit $tmp2350 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2349);
        if (!$tmp2350.value) goto $l2345;
        {
            ITable* $tmp2352 = p$Iter2339->$class->itable;
            while ($tmp2352->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2352 = $tmp2352->next;
            }
            $fn2354 $tmp2353 = $tmp2352->methods[1];
            panda$core$Object* $tmp2355 = $tmp2353(p$Iter2339);
            p2351 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp2355);
            panda$core$MutableString$append$panda$core$String(typeName2335, &$s2356);
            panda$core$MutableString$append$panda$core$String(typeName2335, ((org$pandalanguage$pandac$Symbol*) p2351->type)->name);
            panda$collections$Array$add$panda$collections$Array$T(subtypes2332, ((panda$core$Object*) p2351->type));
        }
        goto $l2344;
        $l2345:;
    }
    panda$core$Bit $tmp2358 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 58 }));
    if ($tmp2358.value) {
    {
        panda$core$MutableString$append$panda$core$String(typeName2335, &$s2359);
        kind2357 = ((panda$core$Int64) { 24 });
    }
    }
    else {
    {
        panda$core$MutableString$append$panda$core$String(typeName2335, &$s2360);
        kind2357 = ((panda$core$Int64) { 25 });
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(subtypes2332, ((panda$core$Object*) p_m->returnType));
    org$pandalanguage$pandac$Type* $tmp2361 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2362 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp2361);
    if ($tmp2362.value) {
    {
        panda$core$MutableString$append$panda$core$String(typeName2335, ((org$pandalanguage$pandac$Symbol*) p_m->returnType)->name);
    }
    }
    panda$core$MutableString$append$panda$core$String(typeName2335, &$s2363);
    org$pandalanguage$pandac$Type* $tmp2364 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp2364->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp2364->refCount.value = 1;
    panda$core$String* $tmp2366 = panda$core$MutableString$convert$R$panda$core$String(typeName2335);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp2364, $tmp2366, kind2357, ((org$pandalanguage$pandac$Symbol*) p_m)->position, ((panda$collections$ListView*) subtypes2332), ((panda$core$Bit) { true }));
    return $tmp2364;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$MethodDecl* inherited2367;
    org$pandalanguage$pandac$MethodDecl* $tmp2368 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(self, p_m);
    inherited2367 = $tmp2368;
    if (((panda$core$Bit) { inherited2367 == NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp2369 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, p_m);
        return $tmp2369;
    }
    }
    org$pandalanguage$pandac$Type* $tmp2370 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, inherited2367);
    return $tmp2370;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$Type* $tmp2371 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    org$pandalanguage$pandac$Type* $tmp2372 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_m, $tmp2371);
    return $tmp2372;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m, org$pandalanguage$pandac$Type* p_selfType) {
    org$pandalanguage$pandac$MethodDecl* inherited2373;
    org$pandalanguage$pandac$MethodDecl* $tmp2374 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(self, p_m);
    inherited2373 = $tmp2374;
    if (((panda$core$Bit) { inherited2373 == NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp2375 = org$pandalanguage$pandac$Compiler$declaredTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_m, p_selfType);
        return $tmp2375;
    }
    }
    org$pandalanguage$pandac$Type* $tmp2376 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, inherited2373, p_selfType);
    return $tmp2376;
}
panda$core$String* org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(panda$core$Int64 p_op) {
    switch (p_op.value) {
        case 51:
        {
            return &$s2377;
        }
        break;
        case 52:
        {
            return &$s2378;
        }
        break;
        case 53:
        {
            return &$s2379;
        }
        break;
        case 54:
        {
            return &$s2380;
        }
        break;
        case 55:
        {
            return &$s2381;
        }
        break;
        case 56:
        {
            return &$s2382;
        }
        break;
        case 57:
        {
            return &$s2383;
        }
        break;
        case 58:
        {
            return &$s2384;
        }
        break;
        case 59:
        {
            return &$s2385;
        }
        break;
        case 63:
        {
            return &$s2386;
        }
        break;
        case 62:
        {
            return &$s2387;
        }
        break;
        case 65:
        {
            return &$s2388;
        }
        break;
        case 64:
        {
            return &$s2389;
        }
        break;
        case 68:
        {
            return &$s2390;
        }
        break;
        case 69:
        {
            return &$s2391;
        }
        break;
        case 66:
        {
            return &$s2392;
        }
        break;
        case 67:
        {
            return &$s2393;
        }
        break;
        case 70:
        {
            return &$s2394;
        }
        break;
        case 71:
        {
            return &$s2395;
        }
        break;
        case 49:
        {
            return &$s2396;
        }
        break;
        case 50:
        {
            return &$s2397;
        }
        break;
        case 72:
        {
            return &$s2398;
        }
        break;
        case 1:
        {
            return &$s2399;
        }
        break;
        case 101:
        {
            return &$s2400;
        }
        break;
        case 73:
        {
            return &$s2401;
        }
        break;
        case 60:
        {
            return &$s2402;
        }
        break;
        case 61:
        {
            return &$s2403;
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
            panda$core$Int64 $tmp2404 = panda$collections$Array$get_count$R$panda$core$Int64(p_expr->children);
            panda$core$Bit $tmp2405 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2404, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp2405.value);
            panda$core$Bit $tmp2406 = panda$core$Bit$$NOT$R$panda$core$Bit(((panda$core$Bit$wrapper*) p_expr->payload)->value);
            if ($tmp2406.value) {
            {
                panda$core$Object* $tmp2407 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Bit $tmp2408 = org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp2407));
                return $tmp2408;
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
            panda$core$Object* $tmp2409 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp2410 = org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp2409));
            return $tmp2410;
        }
        break;
        default:
        {
            return ((panda$core$Bit) { false });
        }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$foldInts$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_left, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_right) {
    panda$core$Int64 l2436;
    panda$core$Int64 r2438;
    panda$core$Bit $tmp2412 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_left->kind, ((panda$core$Int64) { 1004 }));
    bool $tmp2411 = $tmp2412.value;
    if ($tmp2411) goto $l2413;
    panda$core$Bit $tmp2414 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_left->kind, ((panda$core$Int64) { 1032 }));
    $tmp2411 = $tmp2414.value;
    $l2413:;
    panda$core$Bit $tmp2415 = { $tmp2411 };
    PANDA_ASSERT($tmp2415.value);
    panda$core$Bit $tmp2417 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_right->kind, ((panda$core$Int64) { 1004 }));
    bool $tmp2416 = $tmp2417.value;
    if ($tmp2416) goto $l2418;
    panda$core$Bit $tmp2419 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_right->kind, ((panda$core$Int64) { 1032 }));
    $tmp2416 = $tmp2419.value;
    $l2418:;
    panda$core$Bit $tmp2420 = { $tmp2416 };
    PANDA_ASSERT($tmp2420.value);
    panda$core$Bit $tmp2423 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_left->kind, ((panda$core$Int64) { 1032 }));
    bool $tmp2422 = $tmp2423.value;
    if ($tmp2422) goto $l2424;
    panda$core$UInt64 $tmp2426 = panda$core$Int64$convert$R$panda$core$UInt64(((panda$core$Int64) { 9223372036854775807 }));
    panda$core$Bit $tmp2427 = panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p_left->payload)->value, $tmp2426);
    bool $tmp2425 = $tmp2427.value;
    if (!$tmp2425) goto $l2428;
    panda$core$Bit $tmp2429 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_right->kind, ((panda$core$Int64) { 1032 }));
    $tmp2425 = $tmp2429.value;
    $l2428:;
    panda$core$Bit $tmp2430 = { $tmp2425 };
    $tmp2422 = $tmp2430.value;
    $l2424:;
    panda$core$Bit $tmp2431 = { $tmp2422 };
    bool $tmp2421 = $tmp2431.value;
    if ($tmp2421) goto $l2432;
    panda$core$UInt64 $tmp2433 = panda$core$Int64$convert$R$panda$core$UInt64(((panda$core$Int64) { 9223372036854775807 }));
    panda$core$Bit $tmp2434 = panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p_right->payload)->value, $tmp2433);
    $tmp2421 = $tmp2434.value;
    $l2432:;
    panda$core$Bit $tmp2435 = { $tmp2421 };
    if ($tmp2435.value) {
    {
        panda$core$Int64 $tmp2437 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_left->payload)->value);
        l2436 = $tmp2437;
        panda$core$Int64 $tmp2439 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_right->payload)->value);
        r2438 = $tmp2439;
        switch (p_op.value) {
            case 51:
            {
                org$pandalanguage$pandac$IRNode* $tmp2440 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2440->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2440->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2442 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2443 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(l2436, r2438);
                panda$core$UInt64 $tmp2444 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2443);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2440, ((panda$core$Int64) { 1004 }), p_position, $tmp2442, $tmp2444);
                return $tmp2440;
            }
            break;
            case 52:
            {
                org$pandalanguage$pandac$IRNode* $tmp2445 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2445->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2445->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2447 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2448 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(l2436, r2438);
                panda$core$UInt64 $tmp2449 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2448);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2445, ((panda$core$Int64) { 1004 }), p_position, $tmp2447, $tmp2449);
                return $tmp2445;
            }
            break;
            case 53:
            {
                org$pandalanguage$pandac$IRNode* $tmp2450 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2450->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2450->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2452 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2453 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(l2436, r2438);
                panda$core$UInt64 $tmp2454 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2453);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2450, ((panda$core$Int64) { 1004 }), p_position, $tmp2452, $tmp2454);
                return $tmp2450;
            }
            break;
            case 55:
            {
                org$pandalanguage$pandac$IRNode* $tmp2455 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2455->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2455->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2457 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2458 = panda$core$Int64$$INTDIV$panda$core$Int64$R$panda$core$Int64(l2436, r2438);
                panda$core$UInt64 $tmp2459 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2458);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2455, ((panda$core$Int64) { 1004 }), p_position, $tmp2457, $tmp2459);
                return $tmp2455;
            }
            break;
            case 56:
            {
                org$pandalanguage$pandac$IRNode* $tmp2460 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2460->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2460->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2462 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2463 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(l2436, r2438);
                panda$core$UInt64 $tmp2464 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2463);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2460, ((panda$core$Int64) { 1004 }), p_position, $tmp2462, $tmp2464);
                return $tmp2460;
            }
            break;
            case 58:
            {
                org$pandalanguage$pandac$IRNode* $tmp2465 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2465->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2465->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2467 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2468 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(l2436, r2438);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2465, ((panda$core$Int64) { 1011 }), p_position, $tmp2467, $tmp2468);
                return $tmp2465;
            }
            break;
            case 59:
            {
                org$pandalanguage$pandac$IRNode* $tmp2469 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2469->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2469->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2471 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2472 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(l2436, r2438);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2469, ((panda$core$Int64) { 1011 }), p_position, $tmp2471, $tmp2472);
                return $tmp2469;
            }
            break;
            case 62:
            {
                org$pandalanguage$pandac$IRNode* $tmp2473 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2473->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2473->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2475 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2476 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(l2436, r2438);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2473, ((panda$core$Int64) { 1011 }), p_position, $tmp2475, $tmp2476);
                return $tmp2473;
            }
            break;
            case 63:
            {
                org$pandalanguage$pandac$IRNode* $tmp2477 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2477->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2477->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2479 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2480 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(l2436, r2438);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2477, ((panda$core$Int64) { 1011 }), p_position, $tmp2479, $tmp2480);
                return $tmp2477;
            }
            break;
            case 64:
            {
                org$pandalanguage$pandac$IRNode* $tmp2481 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2481->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2481->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2483 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2484 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(l2436, r2438);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2481, ((panda$core$Int64) { 1011 }), p_position, $tmp2483, $tmp2484);
                return $tmp2481;
            }
            break;
            case 65:
            {
                org$pandalanguage$pandac$IRNode* $tmp2485 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2485->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2485->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2487 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2488 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(l2436, r2438);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2485, ((panda$core$Int64) { 1011 }), p_position, $tmp2487, $tmp2488);
                return $tmp2485;
            }
            break;
            case 67:
            {
                org$pandalanguage$pandac$IRNode* $tmp2489 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2489->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2489->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2491 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2492 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(l2436, r2438);
                panda$core$UInt64 $tmp2493 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2492);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2489, ((panda$core$Int64) { 1004 }), p_position, $tmp2491, $tmp2493);
                return $tmp2489;
            }
            break;
            case 69:
            {
                org$pandalanguage$pandac$IRNode* $tmp2494 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2494->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2494->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2496 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2497 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(l2436, r2438);
                panda$core$UInt64 $tmp2498 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2497);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2494, ((panda$core$Int64) { 1004 }), p_position, $tmp2496, $tmp2498);
                return $tmp2494;
            }
            break;
            case 71:
            {
                org$pandalanguage$pandac$IRNode* $tmp2499 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2499->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2499->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2501 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2502 = panda$core$Int64$$BXOR$panda$core$Int64$R$panda$core$Int64(l2436, r2438);
                panda$core$UInt64 $tmp2503 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2502);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2499, ((panda$core$Int64) { 1004 }), p_position, $tmp2501, $tmp2503);
                return $tmp2499;
            }
            break;
            case 72:
            {
                org$pandalanguage$pandac$IRNode* $tmp2504 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2504->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2504->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2506 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2507 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(l2436, r2438);
                panda$core$UInt64 $tmp2508 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2507);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2504, ((panda$core$Int64) { 1004 }), p_position, $tmp2506, $tmp2508);
                return $tmp2504;
            }
            break;
            case 1:
            {
                org$pandalanguage$pandac$IRNode* $tmp2509 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2509->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2509->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2511 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2512 = panda$core$Int64$$SHR$panda$core$Int64$R$panda$core$Int64(l2436, r2438);
                panda$core$UInt64 $tmp2513 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2512);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2509, ((panda$core$Int64) { 1004 }), p_position, $tmp2511, $tmp2513);
                return $tmp2509;
            }
            break;
        }
    }
    }
    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s2514);
    return NULL;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    panda$core$Bit $tmp2515 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1009 }));
    if ($tmp2515.value) {
    {
        panda$core$Object* $tmp2516 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
        return ((org$pandalanguage$pandac$IRNode*) $tmp2516);
    }
    }
    return p_expr;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIndexedAssignment$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_left, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_right) {
    panda$collections$Array* args2521;
    org$pandalanguage$pandac$IRNode* resolved2529;
    panda$collections$Array* children2534;
    panda$core$UInt64 baseId2540;
    org$pandalanguage$pandac$IRNode* base2541;
    panda$core$UInt64 indexId2548;
    org$pandalanguage$pandac$IRNode* index2549;
    org$pandalanguage$pandac$IRNode* baseRef2554;
    org$pandalanguage$pandac$IRNode* indexRef2557;
    org$pandalanguage$pandac$IRNode* rhsIndex2560;
    org$pandalanguage$pandac$IRNode* value2562;
    panda$core$Bit $tmp2517 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_left->kind, ((panda$core$Int64) { 1040 }));
    PANDA_ASSERT($tmp2517.value);
    panda$core$Int64 $tmp2518 = panda$collections$Array$get_count$R$panda$core$Int64(p_left->children);
    panda$core$Bit $tmp2519 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2518, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp2519.value);
    panda$core$Bit $tmp2520 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 73 }));
    if ($tmp2520.value) {
    {
        panda$collections$Array* $tmp2522 = (panda$collections$Array*) malloc(40);
        $tmp2522->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2522->refCount.value = 1;
        panda$collections$Array$init($tmp2522);
        args2521 = $tmp2522;
        panda$core$Object* $tmp2524 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_left->children, ((panda$core$Int64) { 1 }));
        panda$collections$Array$add$panda$collections$Array$T(args2521, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp2524)));
        panda$collections$Array$add$panda$collections$Array$T(args2521, ((panda$core$Object*) p_right));
        panda$core$Object* $tmp2525 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_left->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp2527 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp2525), &$s2526, ((panda$collections$ListView*) args2521));
        return $tmp2527;
    }
    }
    panda$core$Bit $tmp2528 = org$pandalanguage$pandac$Compiler$isAssignment$panda$core$Int64$R$panda$core$Bit(p_op);
    PANDA_ASSERT($tmp2528.value);
    org$pandalanguage$pandac$IRNode* $tmp2530 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_left);
    resolved2529 = $tmp2530;
    if (((panda$core$Bit) { resolved2529 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp2531 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self, resolved2529);
    resolved2529 = $tmp2531;
    panda$core$Int64 $tmp2532 = panda$collections$Array$get_count$R$panda$core$Int64(resolved2529->children);
    panda$core$Bit $tmp2533 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2532, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp2533.value);
    panda$collections$Array* $tmp2535 = (panda$collections$Array*) malloc(40);
    $tmp2535->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2535->refCount.value = 1;
    panda$collections$Array$init($tmp2535);
    children2534 = $tmp2535;
    panda$core$Object* $tmp2537 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(resolved2529->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp2538 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self, ((org$pandalanguage$pandac$IRNode*) $tmp2537));
    panda$collections$Array$add$panda$collections$Array$T(children2534, ((panda$core$Object*) $tmp2538));
    panda$core$UInt64 $tmp2539 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(self->reusedValueCount, ((panda$core$UInt64) { 1 }));
    self->reusedValueCount = $tmp2539;
    baseId2540 = self->reusedValueCount;
    org$pandalanguage$pandac$IRNode* $tmp2542 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp2542->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2542->refCount.value = 1;
    panda$core$Object* $tmp2544 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children2534, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp2545 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children2534, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2542, ((panda$core$Int64) { 1027 }), ((org$pandalanguage$pandac$IRNode*) $tmp2544)->position, ((org$pandalanguage$pandac$IRNode*) $tmp2545)->type, ((panda$core$Object*) wrap_panda$core$UInt64(baseId2540)), ((panda$collections$ListView*) children2534));
    base2541 = $tmp2542;
    panda$collections$Array$clear(children2534);
    panda$core$Object* $tmp2546 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(resolved2529->children, ((panda$core$Int64) { 1 }));
    panda$collections$Array$add$panda$collections$Array$T(children2534, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp2546)));
    panda$core$UInt64 $tmp2547 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(self->reusedValueCount, ((panda$core$UInt64) { 1 }));
    self->reusedValueCount = $tmp2547;
    indexId2548 = self->reusedValueCount;
    org$pandalanguage$pandac$IRNode* $tmp2550 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp2550->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2550->refCount.value = 1;
    panda$core$Object* $tmp2552 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children2534, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp2553 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children2534, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2550, ((panda$core$Int64) { 1027 }), ((org$pandalanguage$pandac$IRNode*) $tmp2552)->position, ((org$pandalanguage$pandac$IRNode*) $tmp2553)->type, ((panda$core$Object*) wrap_panda$core$UInt64(indexId2548)), ((panda$collections$ListView*) children2534));
    index2549 = $tmp2550;
    org$pandalanguage$pandac$IRNode* $tmp2555 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp2555->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2555->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2555, ((panda$core$Int64) { 1028 }), base2541->position, base2541->type, baseId2540);
    baseRef2554 = $tmp2555;
    org$pandalanguage$pandac$IRNode* $tmp2558 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp2558->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2558->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2558, ((panda$core$Int64) { 1028 }), index2549->position, index2549->type, indexId2548);
    indexRef2557 = $tmp2558;
    org$pandalanguage$pandac$IRNode* $tmp2561 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, baseRef2554, ((panda$core$Int64) { 101 }), indexRef2557);
    rhsIndex2560 = $tmp2561;
    if (((panda$core$Bit) { rhsIndex2560 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Int64 $tmp2563 = org$pandalanguage$pandac$Compiler$removeAssignment$panda$core$Int64$R$panda$core$Int64(p_op);
    org$pandalanguage$pandac$IRNode* $tmp2564 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, rhsIndex2560, $tmp2563, p_right);
    value2562 = $tmp2564;
    if (((panda$core$Bit) { value2562 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp2567 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(rhsIndex2560->type);
    bool $tmp2566 = $tmp2567.value;
    if (!$tmp2566) goto $l2568;
    panda$core$Bit $tmp2569 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_right->type);
    $tmp2566 = $tmp2569.value;
    $l2568:;
    panda$core$Bit $tmp2570 = { $tmp2566 };
    bool $tmp2565 = $tmp2570.value;
    if (!$tmp2565) goto $l2571;
    panda$core$Bit $tmp2572 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(rhsIndex2560->type, value2562->type);
    $tmp2565 = $tmp2572.value;
    $l2571:;
    panda$core$Bit $tmp2573 = { $tmp2565 };
    if ($tmp2573.value) {
    {
        panda$collections$Array* $tmp2575 = (panda$collections$Array*) malloc(40);
        $tmp2575->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2575->refCount.value = 1;
        panda$collections$Array$init($tmp2575);
        org$pandalanguage$pandac$IRNode* $tmp2577 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, value2562, &$s2574, ((panda$collections$ListView*) $tmp2575), resolved2529->type);
        value2562 = $tmp2577;
        if (((panda$core$Bit) { value2562 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$collections$Array$clear(children2534);
    panda$collections$Array$add$panda$collections$Array$T(children2534, ((panda$core$Object*) index2549));
    panda$collections$Array$add$panda$collections$Array$T(children2534, ((panda$core$Object*) value2562));
    org$pandalanguage$pandac$IRNode* $tmp2579 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, base2541, &$s2578, ((panda$collections$ListView*) children2534));
    return $tmp2579;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_rawLeft, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_rawRight) {
    org$pandalanguage$pandac$IRNode* left2580;
    org$pandalanguage$pandac$IRNode* right2581;
    panda$core$Int64 kind2605;
    org$pandalanguage$pandac$IRNode* resolved2612;
    panda$collections$Array* children2614;
    org$pandalanguage$pandac$IRNode* resolved2621;
    panda$collections$Array* children2623;
    org$pandalanguage$pandac$ClassDecl* cl2635;
    org$pandalanguage$pandac$ClassDecl* cl2652;
    org$pandalanguage$pandac$IRNode* finalLeft2668;
    org$pandalanguage$pandac$IRNode* finalRight2671;
    panda$collections$Array* children2674;
    panda$collections$Array* children2688;
    panda$collections$Array* children2700;
    org$pandalanguage$pandac$IRNode* reusedLeft2706;
    org$pandalanguage$pandac$ClassDecl* cl2723;
    panda$collections$ListView* parameters2725;
    org$pandalanguage$pandac$Symbol* methods2727;
    org$pandalanguage$pandac$Type* type2731;
    panda$collections$Array* types2732;
    org$pandalanguage$pandac$MethodDecl* m2736;
    panda$collections$Iterator* m$Iter2741;
    org$pandalanguage$pandac$MethodDecl* m2753;
    panda$collections$Array* children2764;
    panda$collections$Array* children2793;
    panda$collections$Array* children2809;
    org$pandalanguage$pandac$Type* resultType2832;
    org$pandalanguage$pandac$IRNode* result2836;
    org$pandalanguage$pandac$IRNode* resolved2839;
    org$pandalanguage$pandac$IRNode* target2845;
    left2580 = p_rawLeft;
    right2581 = p_rawRight;
    panda$core$Bit $tmp2582 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2580->type->typeKind, ((panda$core$Int64) { 15 }));
    if ($tmp2582.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2583 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, right2581);
        right2581 = $tmp2583;
        if (((panda$core$Bit) { right2581 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Int64$nullable $tmp2584 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, left2580, right2581->type);
        if (((panda$core$Bit) { $tmp2584.nonnull }).value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2585 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, left2580, right2581->type);
            left2580 = $tmp2585;
        }
        }
    }
    }
    panda$core$Bit $tmp2587 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right2581->type->typeKind, ((panda$core$Int64) { 15 }));
    bool $tmp2586 = $tmp2587.value;
    if (!$tmp2586) goto $l2588;
    panda$core$Int64$nullable $tmp2589 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, right2581, left2580->type);
    $tmp2586 = ((panda$core$Bit) { $tmp2589.nonnull }).value;
    $l2588:;
    panda$core$Bit $tmp2590 = { $tmp2586 };
    if ($tmp2590.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2591 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, right2581, left2580->type);
        right2581 = $tmp2591;
    }
    }
    panda$core$Bit $tmp2595 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 58 }));
    bool $tmp2594 = $tmp2595.value;
    if ($tmp2594) goto $l2596;
    panda$core$Bit $tmp2597 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 59 }));
    $tmp2594 = $tmp2597.value;
    $l2596:;
    panda$core$Bit $tmp2598 = { $tmp2594 };
    bool $tmp2593 = $tmp2598.value;
    if ($tmp2593) goto $l2599;
    panda$core$Bit $tmp2600 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 60 }));
    $tmp2593 = $tmp2600.value;
    $l2599:;
    panda$core$Bit $tmp2601 = { $tmp2593 };
    bool $tmp2592 = $tmp2601.value;
    if ($tmp2592) goto $l2602;
    panda$core$Bit $tmp2603 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 61 }));
    $tmp2592 = $tmp2603.value;
    $l2602:;
    panda$core$Bit $tmp2604 = { $tmp2592 };
    if ($tmp2604.value) {
    {
        panda$core$Bit $tmp2607 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 58 }));
        bool $tmp2606 = $tmp2607.value;
        if ($tmp2606) goto $l2608;
        panda$core$Bit $tmp2609 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 60 }));
        $tmp2606 = $tmp2609.value;
        $l2608:;
        panda$core$Bit $tmp2610 = { $tmp2606 };
        if ($tmp2610.value) {
        {
            kind2605 = ((panda$core$Int64) { 1035 });
        }
        }
        else {
        {
            kind2605 = ((panda$core$Int64) { 1036 });
        }
        }
        panda$core$Bit $tmp2611 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2580->kind, ((panda$core$Int64) { 1030 }));
        if ($tmp2611.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2613 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, right2581);
            resolved2612 = $tmp2613;
            if (((panda$core$Bit) { resolved2612 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp2615 = (panda$collections$Array*) malloc(40);
            $tmp2615->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2615->refCount.value = 1;
            panda$collections$Array$init($tmp2615);
            children2614 = $tmp2615;
            panda$collections$Array$add$panda$collections$Array$T(children2614, ((panda$core$Object*) resolved2612));
            org$pandalanguage$pandac$IRNode* $tmp2617 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2617->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2617->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2619 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2617, kind2605, p_position, $tmp2619, ((panda$collections$ListView*) children2614));
            return $tmp2617;
        }
        }
        panda$core$Bit $tmp2620 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right2581->kind, ((panda$core$Int64) { 1030 }));
        if ($tmp2620.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2622 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, left2580);
            resolved2621 = $tmp2622;
            if (((panda$core$Bit) { resolved2621 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp2624 = (panda$collections$Array*) malloc(40);
            $tmp2624->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2624->refCount.value = 1;
            panda$collections$Array$init($tmp2624);
            children2623 = $tmp2624;
            panda$collections$Array$add$panda$collections$Array$T(children2623, ((panda$core$Object*) resolved2621));
            org$pandalanguage$pandac$IRNode* $tmp2626 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2626->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2626->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2628 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2626, kind2605, p_position, $tmp2628, ((panda$collections$ListView*) children2623));
            return $tmp2626;
        }
        }
    }
    }
    panda$core$Bit $tmp2630 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 60 }));
    bool $tmp2629 = $tmp2630.value;
    if ($tmp2629) goto $l2631;
    panda$core$Bit $tmp2632 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 61 }));
    $tmp2629 = $tmp2632.value;
    $l2631:;
    panda$core$Bit $tmp2633 = { $tmp2629 };
    if ($tmp2633.value) {
    {
        panda$core$Bit $tmp2634 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(left2580->type);
        if ($tmp2634.value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp2636 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, left2580->type);
            cl2635 = $tmp2636;
            if (((panda$core$Bit) { cl2635 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$Bit $tmp2637 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, cl2635);
            if ($tmp2637.value) {
            {
                panda$core$String* $tmp2639 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
                panda$core$String* $tmp2640 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2638, $tmp2639);
                panda$core$String* $tmp2642 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2640, &$s2641);
                panda$core$String* $tmp2643 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2642, ((panda$core$Object*) left2580->type));
                panda$core$String* $tmp2645 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2643, &$s2644);
                panda$core$String* $tmp2647 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2646, ((panda$core$Object*) right2581->type));
                panda$core$String* $tmp2649 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2647, &$s2648);
                panda$core$String* $tmp2650 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2645, $tmp2649);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp2650);
            }
            }
        }
        }
        panda$core$Bit $tmp2651 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(right2581->type);
        if ($tmp2651.value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp2653 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, right2581->type);
            cl2652 = $tmp2653;
            if (((panda$core$Bit) { cl2652 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$Bit $tmp2654 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, cl2652);
            if ($tmp2654.value) {
            {
                panda$core$String* $tmp2656 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
                panda$core$String* $tmp2657 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2655, $tmp2656);
                panda$core$String* $tmp2659 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2657, &$s2658);
                panda$core$String* $tmp2660 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2659, ((panda$core$Object*) left2580->type));
                panda$core$String* $tmp2662 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2660, &$s2661);
                panda$core$String* $tmp2664 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2663, ((panda$core$Object*) right2581->type));
                panda$core$String* $tmp2666 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2664, &$s2665);
                panda$core$String* $tmp2667 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2662, $tmp2666);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp2667);
            }
            }
        }
        }
        org$pandalanguage$pandac$Type* $tmp2669 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp2670 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, left2580, $tmp2669);
        finalLeft2668 = $tmp2670;
        if (((panda$core$Bit) { finalLeft2668 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$Type* $tmp2672 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp2673 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, right2581, $tmp2672);
        finalRight2671 = $tmp2673;
        if (((panda$core$Bit) { finalRight2671 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp2675 = (panda$collections$Array*) malloc(40);
        $tmp2675->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2675->refCount.value = 1;
        panda$collections$Array$init($tmp2675);
        children2674 = $tmp2675;
        panda$collections$Array$add$panda$collections$Array$T(children2674, ((panda$core$Object*) finalLeft2668));
        panda$collections$Array$add$panda$collections$Array$T(children2674, ((panda$core$Object*) finalRight2671));
        org$pandalanguage$pandac$IRNode* $tmp2677 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2677->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2677->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp2679 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2677, ((panda$core$Int64) { 1023 }), p_position, $tmp2679, ((panda$core$Object*) wrap_panda$core$Int64(p_op)), ((panda$collections$ListView*) children2674));
        return $tmp2677;
    }
    }
    panda$core$Bit $tmp2680 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 73 }));
    if ($tmp2680.value) {
    {
        panda$core$Bit $tmp2681 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2580->kind, ((panda$core$Int64) { 1040 }));
        if ($tmp2681.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2682 = org$pandalanguage$pandac$Compiler$compileIndexedAssignment$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, left2580, p_op, right2581);
            return $tmp2682;
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp2683 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, left2580);
        left2580 = $tmp2683;
        if (((panda$core$Bit) { left2580 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp2684 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, right2581, left2580->type);
        right2581 = $tmp2684;
        if (((panda$core$Bit) { right2581 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp2685 = org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, left2580);
        panda$core$Bit $tmp2686 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2685);
        if ($tmp2686.value) {
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, left2580->position, &$s2687);
            return NULL;
        }
        }
        panda$collections$Array* $tmp2689 = (panda$collections$Array*) malloc(40);
        $tmp2689->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2689->refCount.value = 1;
        panda$collections$Array$init($tmp2689);
        children2688 = $tmp2689;
        panda$collections$Array$add$panda$collections$Array$T(children2688, ((panda$core$Object*) left2580));
        panda$collections$Array$add$panda$collections$Array$T(children2688, ((panda$core$Object*) right2581));
        org$pandalanguage$pandac$IRNode* $tmp2691 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2691->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2691->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2691, ((panda$core$Int64) { 1023 }), p_position, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 73 }))), ((panda$collections$ListView*) children2688));
        return $tmp2691;
    }
    }
    panda$core$Bit $tmp2693 = org$pandalanguage$pandac$Compiler$isAssignment$panda$core$Int64$R$panda$core$Bit(p_op);
    if ($tmp2693.value) {
    {
        panda$core$Bit $tmp2694 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2580->kind, ((panda$core$Int64) { 1040 }));
        if ($tmp2694.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2695 = org$pandalanguage$pandac$Compiler$compileIndexedAssignment$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, left2580, p_op, right2581);
            return $tmp2695;
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp2696 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, left2580);
        left2580 = $tmp2696;
        if (((panda$core$Bit) { left2580 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp2697 = org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, left2580);
        panda$core$Bit $tmp2698 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2697);
        if ($tmp2698.value) {
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, left2580->position, &$s2699);
            return NULL;
        }
        }
        panda$collections$Array* $tmp2701 = (panda$collections$Array*) malloc(40);
        $tmp2701->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2701->refCount.value = 1;
        panda$collections$Array$init($tmp2701);
        children2700 = $tmp2701;
        panda$collections$Array$add$panda$collections$Array$T(children2700, ((panda$core$Object*) left2580));
        panda$core$UInt64 $tmp2703 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(self->reusedValueCount, ((panda$core$UInt64) { 1 }));
        self->reusedValueCount = $tmp2703;
        org$pandalanguage$pandac$IRNode* $tmp2704 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2704->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2704->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2704, ((panda$core$Int64) { 1027 }), left2580->position, left2580->type, ((panda$core$Object*) wrap_panda$core$UInt64(self->reusedValueCount)), ((panda$collections$ListView*) children2700));
        left2580 = $tmp2704;
        org$pandalanguage$pandac$IRNode* $tmp2707 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2707->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2707->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2707, ((panda$core$Int64) { 1028 }), left2580->position, left2580->type, self->reusedValueCount);
        reusedLeft2706 = $tmp2707;
        panda$core$Int64 $tmp2709 = org$pandalanguage$pandac$Compiler$removeAssignment$panda$core$Int64$R$panda$core$Int64(p_op);
        org$pandalanguage$pandac$IRNode* $tmp2710 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, reusedLeft2706, $tmp2709, right2581);
        right2581 = $tmp2710;
        if (((panda$core$Bit) { right2581 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp2712 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(left2580->type);
        bool $tmp2711 = $tmp2712.value;
        if (!$tmp2711) goto $l2713;
        panda$core$Bit $tmp2714 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(left2580->type, right2581->type);
        $tmp2711 = $tmp2714.value;
        $l2713:;
        panda$core$Bit $tmp2715 = { $tmp2711 };
        if ($tmp2715.value) {
        {
            panda$collections$Array* $tmp2717 = (panda$collections$Array*) malloc(40);
            $tmp2717->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2717->refCount.value = 1;
            panda$collections$Array$init($tmp2717);
            org$pandalanguage$pandac$IRNode* $tmp2719 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, right2581, &$s2716, ((panda$collections$ListView*) $tmp2717), left2580->type);
            right2581 = $tmp2719;
            if (((panda$core$Bit) { right2581 == NULL }).value) {
            {
                return NULL;
            }
            }
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp2720 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, left2580, ((panda$core$Int64) { 73 }), right2581);
        return $tmp2720;
    }
    }
    panda$core$Bit $tmp2721 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 101 }));
    if ($tmp2721.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2722 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, left2580);
        left2580 = $tmp2722;
        if (((panda$core$Bit) { left2580 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$ClassDecl* $tmp2724 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, left2580->type);
        cl2723 = $tmp2724;
        if (((panda$core$Bit) { cl2723 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$ListView* $tmp2726 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, left2580->type);
        parameters2725 = $tmp2726;
        org$pandalanguage$pandac$SymbolTable* $tmp2728 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl2723);
        org$pandalanguage$pandac$Symbol* $tmp2730 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp2728, &$s2729);
        methods2727 = $tmp2730;
        if (((panda$core$Bit) { methods2727 != NULL }).value) {
        {
            panda$collections$Array* $tmp2733 = (panda$collections$Array*) malloc(40);
            $tmp2733->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2733->refCount.value = 1;
            panda$collections$Array$init($tmp2733);
            types2732 = $tmp2733;
            panda$core$Bit $tmp2735 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(methods2727->kind, ((panda$core$Int64) { 204 }));
            if ($tmp2735.value) {
            {
                m2736 = ((org$pandalanguage$pandac$MethodDecl*) methods2727);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m2736);
                org$pandalanguage$pandac$MethodRef* $tmp2737 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                $tmp2737->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                $tmp2737->refCount.value = 1;
                org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp2737, m2736, parameters2725);
                org$pandalanguage$pandac$Type* $tmp2739 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type($tmp2737);
                panda$collections$Array$add$panda$collections$Array$T(types2732, ((panda$core$Object*) $tmp2739));
            }
            }
            else {
            {
                panda$core$Bit $tmp2740 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(methods2727->kind, ((panda$core$Int64) { 205 }));
                PANDA_ASSERT($tmp2740.value);
                {
                    ITable* $tmp2742 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) methods2727)->methods)->$class->itable;
                    while ($tmp2742->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp2742 = $tmp2742->next;
                    }
                    $fn2744 $tmp2743 = $tmp2742->methods[0];
                    panda$collections$Iterator* $tmp2745 = $tmp2743(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) methods2727)->methods));
                    m$Iter2741 = $tmp2745;
                    $l2746:;
                    ITable* $tmp2748 = m$Iter2741->$class->itable;
                    while ($tmp2748->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp2748 = $tmp2748->next;
                    }
                    $fn2750 $tmp2749 = $tmp2748->methods[0];
                    panda$core$Bit $tmp2751 = $tmp2749(m$Iter2741);
                    panda$core$Bit $tmp2752 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2751);
                    if (!$tmp2752.value) goto $l2747;
                    {
                        ITable* $tmp2754 = m$Iter2741->$class->itable;
                        while ($tmp2754->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2754 = $tmp2754->next;
                        }
                        $fn2756 $tmp2755 = $tmp2754->methods[1];
                        panda$core$Object* $tmp2757 = $tmp2755(m$Iter2741);
                        m2753 = ((org$pandalanguage$pandac$MethodDecl*) $tmp2757);
                        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m2753);
                        org$pandalanguage$pandac$MethodRef* $tmp2758 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                        $tmp2758->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                        $tmp2758->refCount.value = 1;
                        org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp2758, m2753, parameters2725);
                        org$pandalanguage$pandac$Type* $tmp2760 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type($tmp2758);
                        panda$collections$Array$add$panda$collections$Array$T(types2732, ((panda$core$Object*) $tmp2760));
                    }
                    goto $l2746;
                    $l2747:;
                }
            }
            }
            org$pandalanguage$pandac$Type* $tmp2761 = (org$pandalanguage$pandac$Type*) malloc(96);
            $tmp2761->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp2761->refCount.value = 1;
            org$pandalanguage$pandac$Type$init$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp2761, ((panda$collections$ListView*) types2732));
            type2731 = $tmp2761;
        }
        }
        else {
        {
            org$pandalanguage$pandac$Type* $tmp2763 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            type2731 = $tmp2763;
        }
        }
        panda$collections$Array* $tmp2765 = (panda$collections$Array*) malloc(40);
        $tmp2765->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2765->refCount.value = 1;
        panda$collections$Array$init($tmp2765);
        children2764 = $tmp2765;
        panda$collections$Array$add$panda$collections$Array$T(children2764, ((panda$core$Object*) left2580));
        panda$collections$Array$add$panda$collections$Array$T(children2764, ((panda$core$Object*) right2581));
        org$pandalanguage$pandac$IRNode* $tmp2767 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2767->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2767->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2767, ((panda$core$Int64) { 1040 }), p_position, type2731, ((panda$collections$ListView*) children2764));
        return $tmp2767;
    }
    }
    org$pandalanguage$pandac$Type* $tmp2769 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2770 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(left2580->type, $tmp2769);
    if ($tmp2770.value) {
    {
        org$pandalanguage$pandac$Type* $tmp2772 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp2773 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(right2581->type, $tmp2772);
        bool $tmp2771 = $tmp2773.value;
        if (!$tmp2771) goto $l2774;
        panda$core$Bit $tmp2779 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 66 }));
        bool $tmp2778 = $tmp2779.value;
        if ($tmp2778) goto $l2780;
        panda$core$Bit $tmp2781 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 68 }));
        $tmp2778 = $tmp2781.value;
        $l2780:;
        panda$core$Bit $tmp2782 = { $tmp2778 };
        bool $tmp2777 = $tmp2782.value;
        if ($tmp2777) goto $l2783;
        panda$core$Bit $tmp2784 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 70 }));
        $tmp2777 = $tmp2784.value;
        $l2783:;
        panda$core$Bit $tmp2785 = { $tmp2777 };
        bool $tmp2776 = $tmp2785.value;
        if ($tmp2776) goto $l2786;
        panda$core$Bit $tmp2787 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 58 }));
        $tmp2776 = $tmp2787.value;
        $l2786:;
        panda$core$Bit $tmp2788 = { $tmp2776 };
        bool $tmp2775 = $tmp2788.value;
        if ($tmp2775) goto $l2789;
        panda$core$Bit $tmp2790 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 59 }));
        $tmp2775 = $tmp2790.value;
        $l2789:;
        panda$core$Bit $tmp2791 = { $tmp2775 };
        $tmp2771 = $tmp2791.value;
        $l2774:;
        panda$core$Bit $tmp2792 = { $tmp2771 };
        if ($tmp2792.value) {
        {
            panda$collections$Array* $tmp2794 = (panda$collections$Array*) malloc(40);
            $tmp2794->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2794->refCount.value = 1;
            panda$collections$Array$init($tmp2794);
            children2793 = $tmp2794;
            panda$collections$Array$add$panda$collections$Array$T(children2793, ((panda$core$Object*) left2580));
            panda$collections$Array$add$panda$collections$Array$T(children2793, ((panda$core$Object*) right2581));
            org$pandalanguage$pandac$IRNode* $tmp2796 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2796->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2796->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2796, ((panda$core$Int64) { 1023 }), p_position, left2580->type, ((panda$core$Object*) wrap_panda$core$Int64(p_op)), ((panda$collections$ListView*) children2793));
            return $tmp2796;
        }
        }
        panda$core$String* $tmp2799 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
        panda$core$String* $tmp2800 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2798, $tmp2799);
        panda$core$String* $tmp2802 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2800, &$s2801);
        panda$core$String* $tmp2803 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2802, ((panda$core$Object*) left2580->type));
        panda$core$String* $tmp2805 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2803, &$s2804);
        panda$core$String* $tmp2806 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2805, ((panda$core$Object*) right2581->type));
        panda$core$String* $tmp2808 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2806, &$s2807);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp2808);
        return NULL;
    }
    }
    panda$collections$Array* $tmp2810 = (panda$collections$Array*) malloc(40);
    $tmp2810->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2810->refCount.value = 1;
    panda$collections$Array$init($tmp2810);
    children2809 = $tmp2810;
    panda$core$Bit $tmp2814 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2580->kind, ((panda$core$Int64) { 1004 }));
    bool $tmp2813 = $tmp2814.value;
    if ($tmp2813) goto $l2815;
    panda$core$Bit $tmp2816 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2580->kind, ((panda$core$Int64) { 1032 }));
    $tmp2813 = $tmp2816.value;
    $l2815:;
    panda$core$Bit $tmp2817 = { $tmp2813 };
    bool $tmp2812 = $tmp2817.value;
    if (!$tmp2812) goto $l2818;
    panda$core$Bit $tmp2820 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right2581->kind, ((panda$core$Int64) { 1004 }));
    bool $tmp2819 = $tmp2820.value;
    if ($tmp2819) goto $l2821;
    panda$core$Bit $tmp2822 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right2581->kind, ((panda$core$Int64) { 1032 }));
    $tmp2819 = $tmp2822.value;
    $l2821:;
    panda$core$Bit $tmp2823 = { $tmp2819 };
    $tmp2812 = $tmp2823.value;
    $l2818:;
    panda$core$Bit $tmp2824 = { $tmp2812 };
    if ($tmp2824.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2825 = org$pandalanguage$pandac$Compiler$foldInts$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, left2580, p_op, right2581);
        return $tmp2825;
    }
    }
    panda$core$Bit $tmp2827 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(left2580->type);
    bool $tmp2826 = $tmp2827.value;
    if (!$tmp2826) goto $l2828;
    panda$core$Int64$nullable $tmp2829 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, right2581, left2580->type);
    $tmp2826 = ((panda$core$Bit) { $tmp2829.nonnull }).value;
    $l2828:;
    panda$core$Bit $tmp2830 = { $tmp2826 };
    if ($tmp2830.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2831 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, right2581, left2580->type);
        right2581 = $tmp2831;
        PANDA_ASSERT(((panda$core$Bit) { right2581 != NULL }).value);
        panda$collections$Array$add$panda$collections$Array$T(children2809, ((panda$core$Object*) left2580));
        panda$collections$Array$add$panda$collections$Array$T(children2809, ((panda$core$Object*) right2581));
        switch (p_op.value) {
            case 58:
            case 59:
            case 63:
            case 65:
            case 62:
            case 64:
            {
                org$pandalanguage$pandac$Type* $tmp2833 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
                resultType2832 = $tmp2833;
            }
            break;
            default:
            {
                resultType2832 = left2580->type;
            }
        }
        org$pandalanguage$pandac$IRNode* $tmp2834 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2834->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2834->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2834, ((panda$core$Int64) { 1023 }), p_position, resultType2832, ((panda$core$Object*) wrap_panda$core$Int64(p_op)), ((panda$collections$ListView*) children2809));
        return $tmp2834;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children2809, ((panda$core$Object*) right2581));
    PANDA_ASSERT(self->reportErrors.value);
    self->reportErrors = ((panda$core$Bit) { false });
    panda$core$String* $tmp2837 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
    org$pandalanguage$pandac$IRNode* $tmp2838 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, left2580, $tmp2837, ((panda$collections$ListView*) children2809));
    result2836 = $tmp2838;
    self->reportErrors = ((panda$core$Bit) { true });
    if (((panda$core$Bit) { result2836 == NULL }).value) {
    {
        panda$collections$Array$clear(children2809);
        panda$collections$Array$add$panda$collections$Array$T(children2809, ((panda$core$Object*) left2580));
        org$pandalanguage$pandac$IRNode* $tmp2840 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, right2581);
        resolved2839 = $tmp2840;
        bool $tmp2841 = ((panda$core$Bit) { resolved2839 != NULL }).value;
        if (!$tmp2841) goto $l2842;
        panda$core$Bit $tmp2843 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(resolved2839->type);
        $tmp2841 = $tmp2843.value;
        $l2842:;
        panda$core$Bit $tmp2844 = { $tmp2841 };
        if ($tmp2844.value) {
        {
            panda$collections$Array$add$panda$collections$Array$T(children2809, ((panda$core$Object*) resolved2839));
            org$pandalanguage$pandac$IRNode* $tmp2846 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2846->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2846->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2848 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp2846, ((panda$core$Int64) { 1001 }), resolved2839->position, $tmp2848, resolved2839->type);
            target2845 = $tmp2846;
            panda$core$String* $tmp2849 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
            org$pandalanguage$pandac$IRNode* $tmp2850 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target2845, $tmp2849, ((panda$collections$ListView*) children2809));
            result2836 = $tmp2850;
        }
        }
    }
    }
    return result2836;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_b) {
    org$pandalanguage$pandac$IRNode* left2851;
    org$pandalanguage$pandac$IRNode* right2854;
    panda$core$Object* $tmp2852 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_b->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp2853 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2852));
    left2851 = $tmp2853;
    if (((panda$core$Bit) { left2851 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Object* $tmp2855 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_b->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp2856 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2855));
    right2854 = $tmp2856;
    if (((panda$core$Bit) { right2854 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp2857 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_b->position, left2851, ((panda$core$Int64$wrapper*) p_b->payload)->value, right2854);
    return $tmp2857;
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type) {
    panda$core$SimpleRange$LTpanda$core$Int64$Q$GT $tmp2861;
    switch (p_type->typeKind.value) {
        case 22:
        {
            panda$collections$ListView* $tmp2858 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p_type->parameter->bound);
            return $tmp2858;
        }
        break;
        case 21:
        {
            panda$core$Int64 $tmp2859 = panda$collections$Array$get_count$R$panda$core$Int64(p_type->subtypes);
            panda$core$Bit $tmp2860 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp2859, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2860.value);
            panda$core$SimpleRange$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp2861, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$collections$Array* $tmp2862 = panda$collections$Array$$IDX$panda$core$SimpleRange$LTpanda$core$Int64$Q$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT(p_type->subtypes, $tmp2861);
            return ((panda$collections$ListView*) $tmp2862);
        }
        break;
        case 11:
        {
            panda$core$Object* $tmp2863 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
            panda$collections$ListView* $tmp2864 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, ((org$pandalanguage$pandac$Type*) $tmp2863));
            return $tmp2864;
        }
        break;
        default:
        {
            panda$collections$Array* $tmp2865 = (panda$collections$Array*) malloc(40);
            $tmp2865->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2865->refCount.value = 1;
            panda$collections$Array$init($tmp2865);
            return ((panda$collections$ListView*) $tmp2865);
        }
    }
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$IRNode$Q$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_target) {
    if (((panda$core$Bit) { p_target != NULL }).value) {
    {
        panda$core$Bit $tmp2867 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1001 }));
        if ($tmp2867.value) {
        {
            panda$collections$ListView* $tmp2868 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, ((org$pandalanguage$pandac$Type*) p_target->payload));
            return $tmp2868;
        }
        }
        panda$collections$ListView* $tmp2869 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p_target->type);
        return $tmp2869;
    }
    }
    panda$collections$Array* $tmp2870 = (panda$collections$Array*) malloc(40);
    $tmp2870->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2870->refCount.value = 1;
    panda$collections$Array$init($tmp2870);
    return ((panda$collections$ListView*) $tmp2870);
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compilePrefix$panda$core$Int64$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_base, org$pandalanguage$pandac$Position p_position) {
    panda$core$String* name2873;
    org$pandalanguage$pandac$ClassDecl* cl2875;
    org$pandalanguage$pandac$Symbol* s2877;
    org$pandalanguage$pandac$MethodDecl* m2880;
    panda$collections$Iterator* test$Iter2885;
    org$pandalanguage$pandac$MethodDecl* test2897;
    org$pandalanguage$pandac$MethodRef* ref2909;
    panda$collections$Array* children2913;
    org$pandalanguage$pandac$IRNode* methodRef2916;
    org$pandalanguage$pandac$Position $tmp2922;
    panda$collections$Array* args2923;
    panda$collections$Array* children2932;
    panda$collections$Array* children2942;
    org$pandalanguage$pandac$IRNode* coerced2951;
    panda$collections$Array* children2954;
    panda$core$Bit $tmp2872 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_base->type);
    if ($tmp2872.value) {
    {
        panda$core$String* $tmp2874 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
        name2873 = $tmp2874;
        org$pandalanguage$pandac$ClassDecl* $tmp2876 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_base->type);
        cl2875 = $tmp2876;
        if (((panda$core$Bit) { cl2875 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$SymbolTable* $tmp2878 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl2875);
        org$pandalanguage$pandac$Symbol* $tmp2879 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp2878, name2873);
        s2877 = $tmp2879;
        if (((panda$core$Bit) { s2877 != NULL }).value) {
        {
            m2880 = NULL;
            switch (s2877->kind.value) {
                case 204:
                {
                    m2880 = ((org$pandalanguage$pandac$MethodDecl*) s2877);
                    panda$core$Int64 $tmp2881 = panda$collections$Array$get_count$R$panda$core$Int64(m2880->parameters);
                    panda$core$Bit $tmp2882 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2881, ((panda$core$Int64) { 0 }));
                    PANDA_ASSERT($tmp2882.value);
                    panda$core$Bit $tmp2883 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(m2880->annotations);
                    panda$core$Bit $tmp2884 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2883);
                    PANDA_ASSERT($tmp2884.value);
                }
                break;
                case 205:
                {
                    {
                        ITable* $tmp2886 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s2877)->methods)->$class->itable;
                        while ($tmp2886->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp2886 = $tmp2886->next;
                        }
                        $fn2888 $tmp2887 = $tmp2886->methods[0];
                        panda$collections$Iterator* $tmp2889 = $tmp2887(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s2877)->methods));
                        test$Iter2885 = $tmp2889;
                        $l2890:;
                        ITable* $tmp2892 = test$Iter2885->$class->itable;
                        while ($tmp2892->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2892 = $tmp2892->next;
                        }
                        $fn2894 $tmp2893 = $tmp2892->methods[0];
                        panda$core$Bit $tmp2895 = $tmp2893(test$Iter2885);
                        panda$core$Bit $tmp2896 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2895);
                        if (!$tmp2896.value) goto $l2891;
                        {
                            ITable* $tmp2898 = test$Iter2885->$class->itable;
                            while ($tmp2898->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp2898 = $tmp2898->next;
                            }
                            $fn2900 $tmp2899 = $tmp2898->methods[1];
                            panda$core$Object* $tmp2901 = $tmp2899(test$Iter2885);
                            test2897 = ((org$pandalanguage$pandac$MethodDecl*) $tmp2901);
                            panda$core$Bit $tmp2903 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(test2897->annotations);
                            panda$core$Bit $tmp2904 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2903);
                            bool $tmp2902 = $tmp2904.value;
                            if (!$tmp2902) goto $l2905;
                            panda$core$Int64 $tmp2906 = panda$collections$Array$get_count$R$panda$core$Int64(test2897->parameters);
                            panda$core$Bit $tmp2907 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2906, ((panda$core$Int64) { 0 }));
                            $tmp2902 = $tmp2907.value;
                            $l2905:;
                            panda$core$Bit $tmp2908 = { $tmp2902 };
                            if ($tmp2908.value) {
                            {
                                m2880 = test2897;
                                goto $l2891;
                            }
                            }
                        }
                        goto $l2890;
                        $l2891:;
                    }
                }
                break;
                default:
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
            }
            if (((panda$core$Bit) { m2880 != NULL }).value) {
            {
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m2880);
                org$pandalanguage$pandac$MethodRef* $tmp2910 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                $tmp2910->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                $tmp2910->refCount.value = 1;
                panda$collections$ListView* $tmp2912 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$IRNode$Q$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p_base);
                org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp2910, m2880, $tmp2912);
                ref2909 = $tmp2910;
                panda$collections$Array* $tmp2914 = (panda$collections$Array*) malloc(40);
                $tmp2914->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp2914->refCount.value = 1;
                panda$collections$Array$init($tmp2914);
                children2913 = $tmp2914;
                panda$collections$Array$add$panda$collections$Array$T(children2913, ((panda$core$Object*) p_base));
                org$pandalanguage$pandac$IRNode* $tmp2917 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2917->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2917->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2919 = (org$pandalanguage$pandac$Type*) malloc(96);
                $tmp2919->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
                $tmp2919->refCount.value = 1;
                org$pandalanguage$pandac$Position$init(&$tmp2922);
                org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp2919, &$s2921, ((panda$core$Int64) { 16 }), $tmp2922, ((panda$core$Bit) { true }));
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2917, ((panda$core$Int64) { 1002 }), p_position, $tmp2919, ((panda$core$Object*) ref2909), ((panda$collections$ListView*) children2913));
                methodRef2916 = $tmp2917;
                panda$collections$Array* $tmp2924 = (panda$collections$Array*) malloc(40);
                $tmp2924->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp2924->refCount.value = 1;
                panda$collections$Array$init($tmp2924);
                args2923 = $tmp2924;
                org$pandalanguage$pandac$IRNode* $tmp2926 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, methodRef2916, ((panda$collections$ListView*) args2923));
                return $tmp2926;
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
                    org$pandalanguage$pandac$IRNode* $tmp2927 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp2927->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp2927->refCount.value = 1;
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2927, ((panda$core$Int64) { 1032 }), p_position, p_base->type, ((panda$core$UInt64$wrapper*) p_base->payload)->value);
                    return $tmp2927;
                }
                break;
                case 1032:
                {
                    org$pandalanguage$pandac$IRNode* $tmp2929 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp2929->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp2929->refCount.value = 1;
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2929, ((panda$core$Int64) { 1004 }), p_position, p_base->type, ((panda$core$UInt64$wrapper*) p_base->payload)->value);
                    return $tmp2929;
                }
                break;
                default:
                {
                    panda$core$Bit $tmp2931 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_base->type);
                    if ($tmp2931.value) {
                    {
                        panda$collections$Array* $tmp2933 = (panda$collections$Array*) malloc(40);
                        $tmp2933->$class = (panda$core$Class*) &panda$collections$Array$class;
                        $tmp2933->refCount.value = 1;
                        panda$collections$Array$init($tmp2933);
                        children2932 = $tmp2933;
                        panda$collections$Array$add$panda$collections$Array$T(children2932, ((panda$core$Object*) p_base));
                        org$pandalanguage$pandac$IRNode* $tmp2935 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                        $tmp2935->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                        $tmp2935->refCount.value = 1;
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2935, ((panda$core$Int64) { 1041 }), p_base->position, p_base->type, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 52 }))), ((panda$collections$ListView*) children2932));
                        return $tmp2935;
                    }
                    }
                }
            }
            panda$core$String* $tmp2938 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2937, ((panda$core$Object*) p_base->type));
            panda$core$String* $tmp2940 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2938, &$s2939);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_base->position, $tmp2940);
            return NULL;
        }
        break;
        case 50:
        {
            panda$core$Bit $tmp2941 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_base->type);
            if ($tmp2941.value) {
            {
                panda$collections$Array* $tmp2943 = (panda$collections$Array*) malloc(40);
                $tmp2943->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp2943->refCount.value = 1;
                panda$collections$Array$init($tmp2943);
                children2942 = $tmp2943;
                panda$collections$Array$add$panda$collections$Array$T(children2942, ((panda$core$Object*) p_base));
                org$pandalanguage$pandac$IRNode* $tmp2945 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2945->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2945->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2945, ((panda$core$Int64) { 1041 }), p_base->position, p_base->type, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 50 }))), ((panda$collections$ListView*) children2942));
                return $tmp2945;
            }
            }
            else {
            {
                panda$core$String* $tmp2948 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2947, ((org$pandalanguage$pandac$Symbol*) p_base->type)->name);
                panda$core$String* $tmp2950 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2948, &$s2949);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_base->position, $tmp2950);
                return NULL;
            }
            }
        }
        break;
        case 49:
        {
            org$pandalanguage$pandac$Type* $tmp2952 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode* $tmp2953 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_base, $tmp2952);
            coerced2951 = $tmp2953;
            if (((panda$core$Bit) { coerced2951 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp2955 = (panda$collections$Array*) malloc(40);
            $tmp2955->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2955->refCount.value = 1;
            panda$collections$Array$init($tmp2955);
            children2954 = $tmp2955;
            panda$collections$Array$add$panda$collections$Array$T(children2954, ((panda$core$Object*) coerced2951));
            org$pandalanguage$pandac$IRNode* $tmp2957 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2957->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2957->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2957, ((panda$core$Int64) { 1041 }), p_base->position, p_base->type, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 49 }))), ((panda$collections$ListView*) children2954));
            return $tmp2957;
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
    org$pandalanguage$pandac$IRNode* base2962;
    panda$core$Bit $tmp2959 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_p->kind, ((panda$core$Int64) { 112 }));
    PANDA_ASSERT($tmp2959.value);
    panda$core$Int64 $tmp2960 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_p->children);
    panda$core$Bit $tmp2961 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2960, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp2961.value);
    panda$core$Object* $tmp2963 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_p->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp2964 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2963));
    base2962 = $tmp2964;
    if (((panda$core$Bit) { base2962 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp2965 = org$pandalanguage$pandac$Compiler$compilePrefix$panda$core$Int64$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$R$org$pandalanguage$pandac$IRNode$Q(self, ((panda$core$Int64$wrapper*) p_p->payload)->value, base2962, p_p->position);
    return $tmp2965;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileCall$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_c) {
    org$pandalanguage$pandac$IRNode* m2967;
    panda$collections$Array* args2970;
    panda$core$SimpleRange$LTpanda$core$Int64$GT $tmp2973;
    org$pandalanguage$pandac$IRNode* arg2992;
    panda$core$Bit $tmp2966 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_c->kind, ((panda$core$Int64) { 107 }));
    PANDA_ASSERT($tmp2966.value);
    panda$core$Object* $tmp2968 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_c->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp2969 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2968));
    m2967 = $tmp2969;
    if (((panda$core$Bit) { m2967 != NULL }).value) {
    {
        panda$collections$Array* $tmp2971 = (panda$collections$Array*) malloc(40);
        $tmp2971->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2971->refCount.value = 1;
        panda$collections$Array$init($tmp2971);
        args2970 = $tmp2971;
        panda$core$Int64 $tmp2974 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_c->children);
        panda$core$SimpleRange$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2973, ((panda$core$Int64) { 1 }), $tmp2974, ((panda$core$Bit) { false }));
        int64_t $tmp2976 = $tmp2973.min.value;
        panda$core$Int64 i2975 = { $tmp2976 };
        int64_t $tmp2978 = $tmp2973.max.value;
        bool $tmp2979 = $tmp2973.inclusive.value;
        bool $tmp2986 = 1 > 0;
        if ($tmp2986) goto $l2984; else goto $l2985;
        $l2984:;
        if ($tmp2979) goto $l2987; else goto $l2988;
        $l2987:;
        if ($tmp2976 <= $tmp2978) goto $l2980; else goto $l2982;
        $l2988:;
        if ($tmp2976 < $tmp2978) goto $l2980; else goto $l2982;
        $l2985:;
        if ($tmp2979) goto $l2989; else goto $l2990;
        $l2989:;
        if ($tmp2976 >= $tmp2978) goto $l2980; else goto $l2982;
        $l2990:;
        if ($tmp2976 > $tmp2978) goto $l2980; else goto $l2982;
        $l2980:;
        {
            panda$core$Object* $tmp2993 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_c->children, i2975);
            org$pandalanguage$pandac$IRNode* $tmp2994 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2993));
            arg2992 = $tmp2994;
            if (((panda$core$Bit) { arg2992 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(args2970, ((panda$core$Object*) arg2992));
        }
        $l2983:;
        if ($tmp2986) goto $l2996; else goto $l2997;
        $l2996:;
        int64_t $tmp2998 = $tmp2978 - i2975.value;
        if ($tmp2979) goto $l2999; else goto $l3000;
        $l2999:;
        if ($tmp2998 >= 1) goto $l2995; else goto $l2982;
        $l3000:;
        if ($tmp2998 > 1) goto $l2995; else goto $l2982;
        $l2997:;
        int64_t $tmp3002 = i2975.value - $tmp2978;
        if ($tmp2979) goto $l3003; else goto $l3004;
        $l3003:;
        if ($tmp3002 >= -1) goto $l2995; else goto $l2982;
        $l3004:;
        if ($tmp3002 > -1) goto $l2995; else goto $l2982;
        $l2995:;
        i2975.value += 1;
        goto $l2980;
        $l2982:;
        org$pandalanguage$pandac$IRNode* $tmp3006 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, m2967, ((panda$collections$ListView*) args2970));
        return $tmp3006;
    }
    }
    return NULL;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_d) {
    org$pandalanguage$pandac$IRNode* base3010;
    org$pandalanguage$pandac$ClassDecl* cl3019;
    panda$core$String* name3021;
    org$pandalanguage$pandac$ClassDecl* cl3029;
    org$pandalanguage$pandac$Symbol* s3042;
    panda$core$Bit $tmp3007 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_d->kind, ((panda$core$Int64) { 108 }));
    PANDA_ASSERT($tmp3007.value);
    panda$core$Int64 $tmp3008 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp3009 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3008, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3009.value);
    panda$core$Object* $tmp3011 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3012 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3011));
    base3010 = $tmp3012;
    if (((panda$core$Bit) { base3010 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp3014 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(base3010->kind, ((panda$core$Int64) { 1037 }));
    bool $tmp3013 = $tmp3014.value;
    if (!$tmp3013) goto $l3015;
    panda$core$Bit $tmp3016 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(base3010->kind, ((panda$core$Int64) { 1024 }));
    $tmp3013 = $tmp3016.value;
    $l3015:;
    panda$core$Bit $tmp3017 = { $tmp3013 };
    if ($tmp3017.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3018 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, base3010);
        base3010 = $tmp3018;
    }
    }
    if (((panda$core$Bit) { base3010 == NULL }).value) {
    {
        return NULL;
    }
    }
    switch (base3010->kind.value) {
        case 1001:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp3020 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Type*) base3010->payload));
            cl3019 = $tmp3020;
        }
        break;
        case 1037:
        {
            panda$core$String* $tmp3023 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3022, base3010->payload);
            panda$core$String* $tmp3025 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3023, &$s3024);
            panda$core$String* $tmp3026 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3025, p_d->payload);
            panda$core$String* $tmp3028 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3026, &$s3027);
            name3021 = $tmp3028;
            org$pandalanguage$pandac$ClassDecl* $tmp3030 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, name3021);
            cl3029 = $tmp3030;
            if (((panda$core$Bit) { cl3029 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp3031 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp3031->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp3031->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp3033 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$Type* $tmp3034 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl3029);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp3031, ((panda$core$Int64) { 1001 }), p_d->position, $tmp3033, $tmp3034);
                return $tmp3031;
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp3035 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3035->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3035->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3037 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$String($tmp3035, ((panda$core$Int64) { 1037 }), p_d->position, $tmp3037, name3021);
            return $tmp3035;
        }
        break;
        case 1024:
        {
            panda$core$Object* $tmp3038 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, ((org$pandalanguage$pandac$ClassDecl*) $tmp3038));
            panda$core$Object* $tmp3039 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
            org$pandalanguage$pandac$ClassDecl* $tmp3040 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$ClassDecl*) $tmp3039)->rawSuper);
            cl3019 = $tmp3040;
        }
        break;
        default:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp3041 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, base3010->type);
            cl3019 = $tmp3041;
        }
    }
    if (((panda$core$Bit) { cl3019 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp3043 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl3019);
    org$pandalanguage$pandac$Symbol* $tmp3044 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp3043, ((panda$core$String*) p_d->payload));
    s3042 = $tmp3044;
    if (((panda$core$Bit) { s3042 == NULL }).value) {
    {
        panda$core$String* $tmp3046 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3045, ((panda$core$Object*) base3010->type));
        panda$core$String* $tmp3048 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3046, &$s3047);
        panda$core$String* $tmp3050 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3049, p_d->payload);
        panda$core$String* $tmp3052 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3050, &$s3051);
        panda$core$String* $tmp3053 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3048, $tmp3052);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_d->position, $tmp3053);
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp3054 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl3019);
    org$pandalanguage$pandac$IRNode* $tmp3055 = org$pandalanguage$pandac$Compiler$symbolRef$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q(self, p_d->position, base3010, s3042, $tmp3054);
    return $tmp3055;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIdentifier$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_i) {
    org$pandalanguage$pandac$Symbol* s3057;
    panda$core$Bit $tmp3056 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_i->kind, ((panda$core$Int64) { 106 }));
    PANDA_ASSERT($tmp3056.value);
    org$pandalanguage$pandac$Symbol* $tmp3058 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(self->symbolTable, ((panda$core$String*) p_i->payload));
    s3057 = $tmp3058;
    if (((panda$core$Bit) { s3057 == NULL }).value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp3059 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((panda$core$String*) p_i->payload));
        s3057 = ((org$pandalanguage$pandac$Symbol*) $tmp3059);
    }
    }
    if (((panda$core$Bit) { s3057 != NULL }).value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3060 = org$pandalanguage$pandac$Compiler$symbolRef$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q(self, p_i->position, NULL, s3057, self->symbolTable);
        return $tmp3060;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3061 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3061->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3061->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3063 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$String($tmp3061, ((panda$core$Int64) { 1037 }), p_i->position, $tmp3063, ((panda$core$String*) p_i->payload));
    return $tmp3061;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_t) {
    org$pandalanguage$pandac$Type* resolved3064;
    org$pandalanguage$pandac$Type* $tmp3065 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, p_t);
    org$pandalanguage$pandac$Type* $tmp3066 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, $tmp3065);
    resolved3064 = $tmp3066;
    if (((panda$core$Bit) { resolved3064 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3067 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3067->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3067->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3069 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp3067, ((panda$core$Int64) { 1001 }), p_t->position, $tmp3069, resolved3064);
    return $tmp3067;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileRange$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_r) {
    org$pandalanguage$pandac$IRNode* start3077;
    org$pandalanguage$pandac$IRNode* end3085;
    org$pandalanguage$pandac$IRNode* step3093;
    panda$collections$Array* children3100;
    org$pandalanguage$pandac$Position $tmp3108;
    panda$core$Bit $tmp3071 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_r->kind, ((panda$core$Int64) { 105 }));
    bool $tmp3070 = $tmp3071.value;
    if ($tmp3070) goto $l3072;
    panda$core$Bit $tmp3073 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_r->kind, ((panda$core$Int64) { 104 }));
    $tmp3070 = $tmp3073.value;
    $l3072:;
    panda$core$Bit $tmp3074 = { $tmp3070 };
    PANDA_ASSERT($tmp3074.value);
    panda$core$Int64 $tmp3075 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_r->children);
    panda$core$Bit $tmp3076 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3075, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp3076.value);
    panda$core$Object* $tmp3078 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp3079 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp3078)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp3079.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3080 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3080->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3080->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp3082 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3080, ((panda$core$Int64) { 1030 }), p_r->position, $tmp3082);
        start3077 = $tmp3080;
    }
    }
    else {
    {
        panda$core$Object* $tmp3083 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp3084 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3083));
        start3077 = $tmp3084;
        if (((panda$core$Bit) { start3077 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$core$Object* $tmp3086 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp3087 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp3086)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp3087.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3088 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3088->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3088->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp3090 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3088, ((panda$core$Int64) { 1030 }), p_r->position, $tmp3090);
        end3085 = $tmp3088;
    }
    }
    else {
    {
        panda$core$Object* $tmp3091 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$IRNode* $tmp3092 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3091));
        end3085 = $tmp3092;
        if (((panda$core$Bit) { end3085 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$core$Object* $tmp3094 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 2 }));
    panda$core$Bit $tmp3095 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp3094)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp3095.value) {
    {
        step3093 = NULL;
    }
    }
    else {
    {
        panda$core$Object* $tmp3096 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$IRNode* $tmp3097 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3096));
        org$pandalanguage$pandac$Type* $tmp3098 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp3099 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3097, $tmp3098);
        step3093 = $tmp3099;
        if (((panda$core$Bit) { step3093 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$collections$Array* $tmp3101 = (panda$collections$Array*) malloc(40);
    $tmp3101->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3101->refCount.value = 1;
    panda$collections$Array$init($tmp3101);
    children3100 = $tmp3101;
    panda$collections$Array$add$panda$collections$Array$T(children3100, ((panda$core$Object*) start3077));
    panda$collections$Array$add$panda$collections$Array$T(children3100, ((panda$core$Object*) end3085));
    if (((panda$core$Bit) { step3093 != NULL }).value) {
    {
        panda$collections$Array$add$panda$collections$Array$T(children3100, ((panda$core$Object*) step3093));
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3103 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3103->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3103->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3105 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp3105->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp3105->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp3108);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp3105, &$s3107, ((panda$core$Int64) { 17 }), $tmp3108, ((panda$core$Bit) { true }));
    panda$core$Bit $tmp3109 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_r->kind, ((panda$core$Int64) { 104 }));
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3103, ((panda$core$Int64) { 1031 }), p_r->position, $tmp3105, ((panda$core$Object*) wrap_panda$core$Bit($tmp3109)), ((panda$collections$ListView*) children3100));
    return $tmp3103;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$IRNode* $tmp3110 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3110->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3110->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3112 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$String($tmp3110, ((panda$core$Int64) { 1033 }), p_s->position, $tmp3112, ((panda$core$String*) p_s->payload));
    return $tmp3110;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileSelf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$Type* type3117;
    org$pandalanguage$pandac$ClassDecl* cl3118;
    panda$collections$Array* subtypes3125;
    panda$core$MutableString* name3129;
    panda$core$String* separator3133;
    panda$collections$Iterator* p$Iter3135;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* p3147;
    panda$collections$Array* pType3152;
    panda$core$String* pName3155;
    panda$core$Bit $tmp3113 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_s->kind, ((panda$core$Int64) { 114 }));
    PANDA_ASSERT($tmp3113.value);
    panda$core$Object* $tmp3114 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
    panda$core$Bit $tmp3115 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp3114)->annotations);
    if ($tmp3115.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_s->position, &$s3116);
        return NULL;
    }
    }
    panda$core$Object* $tmp3119 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
    cl3118 = ((org$pandalanguage$pandac$ClassDecl*) $tmp3119);
    ITable* $tmp3120 = ((panda$collections$CollectionView*) cl3118->parameters)->$class->itable;
    while ($tmp3120->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp3120 = $tmp3120->next;
    }
    $fn3122 $tmp3121 = $tmp3120->methods[0];
    panda$core$Int64 $tmp3123 = $tmp3121(((panda$collections$CollectionView*) cl3118->parameters));
    panda$core$Bit $tmp3124 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3123, ((panda$core$Int64) { 0 }));
    if ($tmp3124.value) {
    {
        panda$collections$Array* $tmp3126 = (panda$collections$Array*) malloc(40);
        $tmp3126->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp3126->refCount.value = 1;
        panda$collections$Array$init($tmp3126);
        subtypes3125 = $tmp3126;
        org$pandalanguage$pandac$Type* $tmp3128 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl3118);
        panda$collections$Array$add$panda$collections$Array$T(subtypes3125, ((panda$core$Object*) $tmp3128));
        panda$core$MutableString* $tmp3130 = (panda$core$MutableString*) malloc(40);
        $tmp3130->$class = (panda$core$Class*) &panda$core$MutableString$class;
        $tmp3130->refCount.value = 1;
        panda$core$MutableString$init$panda$core$String($tmp3130, ((org$pandalanguage$pandac$Symbol*) cl3118)->name);
        name3129 = $tmp3130;
        panda$core$MutableString$append$panda$core$String(name3129, &$s3132);
        separator3133 = &$s3134;
        {
            ITable* $tmp3136 = ((panda$collections$Iterable*) cl3118->parameters)->$class->itable;
            while ($tmp3136->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3136 = $tmp3136->next;
            }
            $fn3138 $tmp3137 = $tmp3136->methods[0];
            panda$collections$Iterator* $tmp3139 = $tmp3137(((panda$collections$Iterable*) cl3118->parameters));
            p$Iter3135 = $tmp3139;
            $l3140:;
            ITable* $tmp3142 = p$Iter3135->$class->itable;
            while ($tmp3142->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3142 = $tmp3142->next;
            }
            $fn3144 $tmp3143 = $tmp3142->methods[0];
            panda$core$Bit $tmp3145 = $tmp3143(p$Iter3135);
            panda$core$Bit $tmp3146 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3145);
            if (!$tmp3146.value) goto $l3141;
            {
                ITable* $tmp3148 = p$Iter3135->$class->itable;
                while ($tmp3148->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3148 = $tmp3148->next;
                }
                $fn3150 $tmp3149 = $tmp3148->methods[1];
                panda$core$Object* $tmp3151 = $tmp3149(p$Iter3135);
                p3147 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp3151);
                panda$collections$Array* $tmp3153 = (panda$collections$Array*) malloc(40);
                $tmp3153->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp3153->refCount.value = 1;
                panda$collections$Array$init($tmp3153);
                pType3152 = $tmp3153;
                panda$collections$Array$add$panda$collections$Array$T(pType3152, ((panda$core$Object*) p3147->bound));
                panda$core$String* $tmp3157 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3156, ((org$pandalanguage$pandac$Symbol*) cl3118)->name);
                panda$core$String* $tmp3159 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3157, &$s3158);
                panda$core$String* $tmp3160 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3159, ((org$pandalanguage$pandac$Symbol*) p3147)->name);
                panda$core$String* $tmp3162 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3160, &$s3161);
                pName3155 = $tmp3162;
                panda$core$MutableString$append$panda$core$String(name3129, separator3133);
                panda$core$MutableString$append$panda$core$String(name3129, pName3155);
                org$pandalanguage$pandac$Type* $tmp3163 = (org$pandalanguage$pandac$Type*) malloc(96);
                $tmp3163->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
                $tmp3163->refCount.value = 1;
                org$pandalanguage$pandac$Type$init$org$pandalanguage$pandac$ClassDecl$GenericParameter($tmp3163, p3147);
                panda$collections$Array$add$panda$collections$Array$T(subtypes3125, ((panda$core$Object*) $tmp3163));
                separator3133 = &$s3165;
            }
            goto $l3140;
            $l3141:;
        }
        panda$core$MutableString$append$panda$core$String(name3129, &$s3166);
        org$pandalanguage$pandac$Type* $tmp3167 = (org$pandalanguage$pandac$Type*) malloc(96);
        $tmp3167->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
        $tmp3167->refCount.value = 1;
        panda$core$String* $tmp3169 = panda$core$MutableString$convert$R$panda$core$String(name3129);
        org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp3167, $tmp3169, ((panda$core$Int64) { 21 }), p_s->position, ((panda$collections$ListView*) subtypes3125), ((panda$core$Bit) { true }));
        type3117 = $tmp3167;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp3170 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl3118);
        type3117 = $tmp3170;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3171 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3171->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3171->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3171, ((panda$core$Int64) { 1025 }), p_s->position, type3117);
    return $tmp3171;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileSuper$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$ClassDecl* cl3177;
    panda$core$Bit $tmp3173 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_s->kind, ((panda$core$Int64) { 115 }));
    PANDA_ASSERT($tmp3173.value);
    panda$core$Object* $tmp3174 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
    panda$core$Bit $tmp3175 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp3174)->annotations);
    if ($tmp3175.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_s->position, &$s3176);
        return NULL;
    }
    }
    panda$core$Object* $tmp3178 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
    cl3177 = ((org$pandalanguage$pandac$ClassDecl*) $tmp3178);
    PANDA_ASSERT(cl3177->resolved.value);
    org$pandalanguage$pandac$IRNode* $tmp3179 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3179->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3179->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3179, ((panda$core$Int64) { 1024 }), p_s->position, cl3177->rawSuper);
    return $tmp3179;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_c) {
    org$pandalanguage$pandac$IRNode* value3184;
    org$pandalanguage$pandac$Type* type3187;
    panda$core$Bit $tmp3181 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_c->kind, ((panda$core$Int64) { 111 }));
    PANDA_ASSERT($tmp3181.value);
    panda$core$Int64 $tmp3182 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_c->children);
    panda$core$Bit $tmp3183 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3182, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp3183.value);
    panda$core$Object* $tmp3185 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_c->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3186 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3185));
    value3184 = $tmp3186;
    if (((panda$core$Bit) { value3184 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Object* $tmp3188 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_c->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Type* $tmp3189 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, ((org$pandalanguage$pandac$ASTNode*) $tmp3188));
    org$pandalanguage$pandac$Type* $tmp3190 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, $tmp3189);
    type3187 = $tmp3190;
    if (((panda$core$Bit) { type3187 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Int64$nullable $tmp3191 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, value3184, type3187);
    if (((panda$core$Bit) { $tmp3191.nonnull }).value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3192 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, value3184, type3187);
        return $tmp3192;
    }
    }
    panda$core$Bit $tmp3193 = org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, value3184, type3187);
    if ($tmp3193.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3194 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, value3184, p_c->position, ((panda$core$Bit) { true }), type3187);
        return $tmp3194;
    }
    }
    else {
    {
        panda$core$String* $tmp3196 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3195, ((panda$core$Object*) value3184->type));
        panda$core$String* $tmp3198 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3196, &$s3197);
        panda$core$String* $tmp3200 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3199, ((panda$core$Object*) type3187));
        panda$core$String* $tmp3202 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3200, &$s3201);
        panda$core$String* $tmp3203 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3198, $tmp3202);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_c->position, $tmp3203);
        return NULL;
    }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileNull$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_n) {
    panda$core$Bit $tmp3204 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_n->kind, ((panda$core$Int64) { 117 }));
    PANDA_ASSERT($tmp3204.value);
    org$pandalanguage$pandac$IRNode* $tmp3205 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3205->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3205->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3207 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3205, ((panda$core$Int64) { 1030 }), p_n->position, $tmp3207);
    return $tmp3205;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_e) {
    org$pandalanguage$pandac$IRNode* result3212;
    switch (p_e->kind.value) {
        case 103:
        {
            org$pandalanguage$pandac$IRNode* $tmp3208 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3208;
        }
        break;
        case 116:
        {
            org$pandalanguage$pandac$IRNode* $tmp3209 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3209->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3209->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3211 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp3209, ((panda$core$Int64) { 1011 }), p_e->position, $tmp3211, ((panda$core$Bit$wrapper*) p_e->payload)->value);
            return $tmp3209;
        }
        break;
        case 107:
        {
            org$pandalanguage$pandac$IRNode* $tmp3213 = org$pandalanguage$pandac$Compiler$compileCall$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            result3212 = $tmp3213;
            bool $tmp3214 = ((panda$core$Bit) { result3212 != NULL }).value;
            if (!$tmp3214) goto $l3215;
            org$pandalanguage$pandac$Type* $tmp3216 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp3217 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(result3212->type, $tmp3216);
            $tmp3214 = $tmp3217.value;
            $l3215:;
            panda$core$Bit $tmp3218 = { $tmp3214 };
            if ($tmp3218.value) {
            {
                panda$core$Bit $tmp3219 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result3212->kind, ((panda$core$Int64) { 1005 }));
                PANDA_ASSERT($tmp3219.value);
                panda$core$String* $tmp3220 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(((org$pandalanguage$pandac$MethodRef*) result3212->payload)->value);
                panda$core$String* $tmp3222 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3220, &$s3221);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, result3212->position, $tmp3222);
                return NULL;
            }
            }
            return result3212;
        }
        break;
        case 108:
        {
            org$pandalanguage$pandac$IRNode* $tmp3223 = org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3223;
        }
        break;
        case 106:
        {
            org$pandalanguage$pandac$IRNode* $tmp3224 = org$pandalanguage$pandac$Compiler$compileIdentifier$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3224;
        }
        break;
        case 102:
        {
            org$pandalanguage$pandac$IRNode* $tmp3225 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3225->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3225->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3227 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp3225, ((panda$core$Int64) { 1004 }), p_e->position, $tmp3227, ((panda$core$UInt64$wrapper*) p_e->payload)->value);
            return $tmp3225;
        }
        break;
        case 112:
        {
            org$pandalanguage$pandac$IRNode* $tmp3228 = org$pandalanguage$pandac$Compiler$compilePrefix$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3228;
        }
        break;
        case 104:
        case 105:
        {
            org$pandalanguage$pandac$IRNode* $tmp3229 = org$pandalanguage$pandac$Compiler$compileRange$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3229;
        }
        break;
        case 113:
        {
            org$pandalanguage$pandac$IRNode* $tmp3230 = org$pandalanguage$pandac$Compiler$compileString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3230;
        }
        break;
        case 109:
        case 154:
        case 110:
        {
            org$pandalanguage$pandac$IRNode* $tmp3231 = org$pandalanguage$pandac$Compiler$compileType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3231;
        }
        break;
        case 114:
        {
            org$pandalanguage$pandac$IRNode* $tmp3232 = org$pandalanguage$pandac$Compiler$compileSelf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3232;
        }
        break;
        case 115:
        {
            org$pandalanguage$pandac$IRNode* $tmp3233 = org$pandalanguage$pandac$Compiler$compileSuper$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3233;
        }
        break;
        case 111:
        {
            org$pandalanguage$pandac$IRNode* $tmp3234 = org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3234;
        }
        break;
        case 117:
        {
            org$pandalanguage$pandac$IRNode* $tmp3235 = org$pandalanguage$pandac$Compiler$compileNull$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode(self, p_e);
            return $tmp3235;
        }
        break;
    }
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBlock$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_b) {
    org$pandalanguage$pandac$SymbolTable* symbols3237;
    panda$collections$Array* result3240;
    panda$collections$Iterator* stmt$Iter3243;
    org$pandalanguage$pandac$ASTNode* stmt3255;
    org$pandalanguage$pandac$IRNode* compiled3260;
    panda$core$Bit $tmp3236 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_b->kind, ((panda$core$Int64) { 126 }));
    PANDA_ASSERT($tmp3236.value);
    org$pandalanguage$pandac$SymbolTable* $tmp3238 = (org$pandalanguage$pandac$SymbolTable*) malloc(40);
    $tmp3238->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp3238->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp3238, self->symbolTable);
    symbols3237 = $tmp3238;
    self->symbolTable = symbols3237;
    panda$collections$Array* $tmp3241 = (panda$collections$Array*) malloc(40);
    $tmp3241->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3241->refCount.value = 1;
    panda$collections$Array$init($tmp3241);
    result3240 = $tmp3241;
    {
        ITable* $tmp3244 = ((panda$collections$Iterable*) p_b->children)->$class->itable;
        while ($tmp3244->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3244 = $tmp3244->next;
        }
        $fn3246 $tmp3245 = $tmp3244->methods[0];
        panda$collections$Iterator* $tmp3247 = $tmp3245(((panda$collections$Iterable*) p_b->children));
        stmt$Iter3243 = $tmp3247;
        $l3248:;
        ITable* $tmp3250 = stmt$Iter3243->$class->itable;
        while ($tmp3250->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3250 = $tmp3250->next;
        }
        $fn3252 $tmp3251 = $tmp3250->methods[0];
        panda$core$Bit $tmp3253 = $tmp3251(stmt$Iter3243);
        panda$core$Bit $tmp3254 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3253);
        if (!$tmp3254.value) goto $l3249;
        {
            ITable* $tmp3256 = stmt$Iter3243->$class->itable;
            while ($tmp3256->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3256 = $tmp3256->next;
            }
            $fn3258 $tmp3257 = $tmp3256->methods[1];
            panda$core$Object* $tmp3259 = $tmp3257(stmt$Iter3243);
            stmt3255 = ((org$pandalanguage$pandac$ASTNode*) $tmp3259);
            org$pandalanguage$pandac$IRNode* $tmp3261 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, stmt3255);
            compiled3260 = $tmp3261;
            if (((panda$core$Bit) { compiled3260 == NULL }).value) {
            {
                panda$core$Object* $tmp3262 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(symbols3237->parents, ((panda$core$Int64) { 0 }));
                self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp3262);
                return NULL;
            }
            }
            panda$core$Bit $tmp3263 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(compiled3260->kind, ((panda$core$Int64) { 1039 }));
            PANDA_ASSERT($tmp3263.value);
            panda$collections$Array$add$panda$collections$Array$T(result3240, ((panda$core$Object*) compiled3260));
        }
        goto $l3248;
        $l3249:;
    }
    panda$core$Object* $tmp3264 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(symbols3237->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp3264);
    org$pandalanguage$pandac$IRNode* $tmp3265 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3265->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3265->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3265, ((panda$core$Int64) { 1000 }), p_b->position, ((panda$collections$ListView*) result3240));
    return $tmp3265;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_i) {
    org$pandalanguage$pandac$IRNode* test3275;
    org$pandalanguage$pandac$IRNode* ifTrue3280;
    panda$collections$Array* children3283;
    org$pandalanguage$pandac$IRNode* ifFalse3288;
    panda$core$Bit $tmp3267 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_i->kind, ((panda$core$Int64) { 118 }));
    PANDA_ASSERT($tmp3267.value);
    panda$core$Int64 $tmp3269 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_i->children);
    panda$core$Bit $tmp3270 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3269, ((panda$core$Int64) { 2 }));
    bool $tmp3268 = $tmp3270.value;
    if ($tmp3268) goto $l3271;
    panda$core$Int64 $tmp3272 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_i->children);
    panda$core$Bit $tmp3273 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3272, ((panda$core$Int64) { 3 }));
    $tmp3268 = $tmp3273.value;
    $l3271:;
    panda$core$Bit $tmp3274 = { $tmp3268 };
    PANDA_ASSERT($tmp3274.value);
    panda$core$Object* $tmp3276 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_i->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3277 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3276));
    org$pandalanguage$pandac$Type* $tmp3278 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp3279 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3277, $tmp3278);
    test3275 = $tmp3279;
    if (((panda$core$Bit) { test3275 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Object* $tmp3281 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_i->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp3282 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3281));
    ifTrue3280 = $tmp3282;
    if (((panda$core$Bit) { ifTrue3280 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3284 = (panda$collections$Array*) malloc(40);
    $tmp3284->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3284->refCount.value = 1;
    panda$collections$Array$init($tmp3284);
    children3283 = $tmp3284;
    panda$collections$Array$add$panda$collections$Array$T(children3283, ((panda$core$Object*) test3275));
    panda$collections$Array$add$panda$collections$Array$T(children3283, ((panda$core$Object*) ifTrue3280));
    panda$core$Int64 $tmp3286 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_i->children);
    panda$core$Bit $tmp3287 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3286, ((panda$core$Int64) { 3 }));
    if ($tmp3287.value) {
    {
        panda$core$Object* $tmp3289 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_i->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$IRNode* $tmp3290 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3289));
        ifFalse3288 = $tmp3290;
        if (((panda$core$Bit) { ifFalse3288 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children3283, ((panda$core$Object*) ifFalse3288));
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3291 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3291->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3291->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3291, ((panda$core$Int64) { 1012 }), p_i->position, ((panda$collections$ListView*) children3283));
    return $tmp3291;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileRangeFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, panda$core$String* p_label, org$pandalanguage$pandac$ASTNode* p_astTarget, org$pandalanguage$pandac$IRNode* p_rawList, org$pandalanguage$pandac$ASTNode* p_body) {
    org$pandalanguage$pandac$Type* elementType3293;
    org$pandalanguage$pandac$IRNode* list3294;
    org$pandalanguage$pandac$Type* t3301;
    org$pandalanguage$pandac$Compiler$CompileTargetResult* target3334;
    org$pandalanguage$pandac$IRNode* body3336;
    panda$collections$Array* children3338;
    panda$core$Bit $tmp3296 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_astTarget->kind, ((panda$core$Int64) { 106 }));
    bool $tmp3295 = $tmp3296.value;
    if (!$tmp3295) goto $l3297;
    panda$core$Int64 $tmp3298 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_astTarget->children);
    panda$core$Bit $tmp3299 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3298, ((panda$core$Int64) { 1 }));
    $tmp3295 = $tmp3299.value;
    $l3297:;
    panda$core$Bit $tmp3300 = { $tmp3295 };
    if ($tmp3300.value) {
    {
        panda$core$Object* $tmp3302 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_astTarget->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Type* $tmp3303 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, ((org$pandalanguage$pandac$ASTNode*) $tmp3302));
        org$pandalanguage$pandac$Type* $tmp3304 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, $tmp3303);
        t3301 = $tmp3304;
        panda$core$Bit $tmp3305 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_rawList->kind, ((panda$core$Int64) { 1031 }));
        if ($tmp3305.value) {
        {
            panda$core$Int64 $tmp3306 = panda$collections$Array$get_count$R$panda$core$Int64(p_rawList->children);
            panda$core$Bit $tmp3307 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3306, ((panda$core$Int64) { 2 }));
            if ($tmp3307.value) {
            {
                org$pandalanguage$pandac$Type* $tmp3308 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3301);
                org$pandalanguage$pandac$IRNode* $tmp3309 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, $tmp3308);
                list3294 = $tmp3309;
            }
            }
            else {
            {
                panda$core$Int64 $tmp3310 = panda$collections$Array$get_count$R$panda$core$Int64(p_rawList->children);
                panda$core$Bit $tmp3311 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3310, ((panda$core$Int64) { 3 }));
                PANDA_ASSERT($tmp3311.value);
                org$pandalanguage$pandac$Type* $tmp3312 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$Type* $tmp3313 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3301, $tmp3312);
                org$pandalanguage$pandac$IRNode* $tmp3314 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, $tmp3313);
                list3294 = $tmp3314;
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp3315 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(p_rawList->type);
        if ($tmp3315.value) {
        {
            panda$core$Object* $tmp3316 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_rawList->type->subtypes, ((panda$core$Int64) { 2 }));
            org$pandalanguage$pandac$Type* $tmp3317 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3301, ((org$pandalanguage$pandac$Type*) $tmp3316));
            org$pandalanguage$pandac$IRNode* $tmp3318 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, $tmp3317);
            list3294 = $tmp3318;
        }
        }
        else {
        org$pandalanguage$pandac$Type* $tmp3319 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3301);
        panda$core$Int64$nullable $tmp3320 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_rawList, $tmp3319);
        if (((panda$core$Bit) { $tmp3320.nonnull }).value) {
        {
            org$pandalanguage$pandac$Type* $tmp3321 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3301);
            org$pandalanguage$pandac$IRNode* $tmp3322 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, $tmp3321);
            list3294 = $tmp3322;
        }
        }
        else {
        {
            org$pandalanguage$pandac$Type* $tmp3323 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$Type* $tmp3324 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3301, $tmp3323);
            org$pandalanguage$pandac$IRNode* $tmp3325 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, $tmp3324);
            list3294 = $tmp3325;
        }
        }
        }
        }
    }
    }
    else {
    {
        org$pandalanguage$pandac$IRNode* $tmp3326 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList);
        list3294 = $tmp3326;
    }
    }
    if (((panda$core$Bit) { list3294 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp3327 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(list3294->type->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp3327.value) {
    {
        panda$core$Object* $tmp3328 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(list3294->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp3329 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3328)->typeKind, ((panda$core$Int64) { 21 }));
        PANDA_ASSERT($tmp3329.value);
        panda$core$Object* $tmp3330 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(list3294->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3331 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$Type*) $tmp3330)->subtypes, ((panda$core$Int64) { 1 }));
        elementType3293 = ((org$pandalanguage$pandac$Type*) $tmp3331);
    }
    }
    else {
    {
        panda$core$Bit $tmp3332 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(list3294->type->typeKind, ((panda$core$Int64) { 21 }));
        PANDA_ASSERT($tmp3332.value);
        panda$core$Object* $tmp3333 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(list3294->type->subtypes, ((panda$core$Int64) { 1 }));
        elementType3293 = ((org$pandalanguage$pandac$Type*) $tmp3333);
    }
    }
    org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp3335 = org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(self, p_astTarget, ((panda$core$Int64) { 10001 }), NULL, elementType3293);
    target3334 = $tmp3335;
    if (((panda$core$Bit) { target3334 == NULL }).value) {
    {
        return NULL;
    }
    }
    PANDA_ASSERT(((panda$core$Bit) { target3334->value == NULL }).value);
    org$pandalanguage$pandac$IRNode* $tmp3337 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_body);
    body3336 = $tmp3337;
    if (((panda$core$Bit) { body3336 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3339 = (panda$collections$Array*) malloc(40);
    $tmp3339->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3339->refCount.value = 1;
    panda$collections$Array$init($tmp3339);
    children3338 = $tmp3339;
    panda$collections$Array$add$panda$collections$Array$T(children3338, ((panda$core$Object*) target3334->target));
    panda$collections$Array$add$panda$collections$Array$T(children3338, ((panda$core$Object*) list3294));
    panda$collections$Array$add$panda$collections$Array$T(children3338, ((panda$core$Object*) body3336));
    org$pandalanguage$pandac$IRNode* $tmp3341 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3341->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3341->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3341, ((panda$core$Int64) { 1029 }), p_position, ((panda$core$Object*) p_label), ((panda$collections$ListView*) children3338));
    return $tmp3341;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIteratorFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, panda$core$String* p_label, org$pandalanguage$pandac$ASTNode* p_astTarget, org$pandalanguage$pandac$IRNode* p_iterator, org$pandalanguage$pandac$ASTNode* p_body) {
    org$pandalanguage$pandac$Compiler$CompileTargetResult* target3350;
    org$pandalanguage$pandac$Variable* targetVar3354;
    panda$collections$Array* subtypes3355;
    org$pandalanguage$pandac$Type* iterType3359;
    org$pandalanguage$pandac$Variable* iter3371;
    panda$collections$Array* statements3376;
    panda$collections$Array* declChildren3379;
    panda$collections$Array* varChildren3384;
    panda$collections$Array* whileChildren3391;
    org$pandalanguage$pandac$IRNode* done3394;
    org$pandalanguage$pandac$IRNode* notCall3401;
    panda$collections$Array* valueDeclChildren3406;
    org$pandalanguage$pandac$IRNode* next3411;
    panda$collections$Array* valueVarChildren3418;
    org$pandalanguage$pandac$IRNode* block3423;
    panda$collections$Array* blockChildren3425;
    panda$core$Bit $tmp3344 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_iterator->type->typeKind, ((panda$core$Int64) { 21 }));
    bool $tmp3343 = $tmp3344.value;
    if (!$tmp3343) goto $l3345;
    panda$core$Object* $tmp3346 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_iterator->type->subtypes, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp3347 = org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp3348 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3346), $tmp3347);
    $tmp3343 = $tmp3348.value;
    $l3345:;
    panda$core$Bit $tmp3349 = { $tmp3343 };
    PANDA_ASSERT($tmp3349.value);
    panda$core$Object* $tmp3351 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_iterator->type->subtypes, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp3352 = org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(self, p_astTarget, ((panda$core$Int64) { 10001 }), NULL, ((org$pandalanguage$pandac$Type*) $tmp3351));
    target3350 = $tmp3352;
    if (((panda$core$Bit) { target3350 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp3353 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(target3350->target->kind, ((panda$core$Int64) { 1016 }));
    PANDA_ASSERT($tmp3353.value);
    targetVar3354 = ((org$pandalanguage$pandac$Variable*) target3350->target->payload);
    panda$collections$Array* $tmp3356 = (panda$collections$Array*) malloc(40);
    $tmp3356->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3356->refCount.value = 1;
    panda$collections$Array$init($tmp3356);
    subtypes3355 = $tmp3356;
    org$pandalanguage$pandac$Type* $tmp3358 = org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type();
    panda$collections$Array$add$panda$collections$Array$T(subtypes3355, ((panda$core$Object*) $tmp3358));
    panda$collections$Array$add$panda$collections$Array$T(subtypes3355, ((panda$core$Object*) target3350->target->type));
    org$pandalanguage$pandac$Type* $tmp3360 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp3360->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp3360->refCount.value = 1;
    panda$core$Object* $tmp3363 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(subtypes3355, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3364 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3362, ((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp3363)));
    panda$core$String* $tmp3366 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3364, &$s3365);
    panda$core$Object* $tmp3367 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(subtypes3355, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp3368 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3366, ((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp3367)));
    panda$core$String* $tmp3370 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3368, &$s3369);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp3360, $tmp3370, ((panda$core$Int64) { 21 }), p_position, ((panda$collections$ListView*) subtypes3355), ((panda$core$Bit) { true }));
    iterType3359 = $tmp3360;
    org$pandalanguage$pandac$Variable* $tmp3372 = (org$pandalanguage$pandac$Variable*) malloc(88);
    $tmp3372->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
    $tmp3372->refCount.value = 1;
    panda$core$String* $tmp3375 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) targetVar3354)->name, &$s3374);
    org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type($tmp3372, p_iterator->position, ((panda$core$Int64) { 10001 }), $tmp3375, iterType3359);
    iter3371 = $tmp3372;
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->symbolTable, ((org$pandalanguage$pandac$Symbol*) iter3371));
    panda$collections$Array* $tmp3377 = (panda$collections$Array*) malloc(40);
    $tmp3377->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3377->refCount.value = 1;
    panda$collections$Array$init($tmp3377);
    statements3376 = $tmp3377;
    panda$collections$Array* $tmp3380 = (panda$collections$Array*) malloc(40);
    $tmp3380->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3380->refCount.value = 1;
    panda$collections$Array$init($tmp3380);
    declChildren3379 = $tmp3380;
    org$pandalanguage$pandac$IRNode* $tmp3382 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3382->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3382->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3382, ((panda$core$Int64) { 1016 }), p_iterator->position, iter3371->type, iter3371);
    panda$collections$Array$add$panda$collections$Array$T(declChildren3379, ((panda$core$Object*) $tmp3382));
    panda$collections$Array$add$panda$collections$Array$T(declChildren3379, ((panda$core$Object*) p_iterator));
    panda$collections$Array* $tmp3385 = (panda$collections$Array*) malloc(40);
    $tmp3385->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3385->refCount.value = 1;
    panda$collections$Array$init($tmp3385);
    varChildren3384 = $tmp3385;
    org$pandalanguage$pandac$IRNode* $tmp3387 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3387->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3387->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3387, ((panda$core$Int64) { 1021 }), ((org$pandalanguage$pandac$Symbol*) iter3371)->position, ((panda$collections$ListView*) declChildren3379));
    panda$collections$Array$add$panda$collections$Array$T(varChildren3384, ((panda$core$Object*) $tmp3387));
    org$pandalanguage$pandac$IRNode* $tmp3389 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3389->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3389->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3389, ((panda$core$Int64) { 1018 }), ((org$pandalanguage$pandac$Symbol*) iter3371)->position, ((panda$collections$ListView*) varChildren3384));
    panda$collections$Array$add$panda$collections$Array$T(statements3376, ((panda$core$Object*) $tmp3389));
    panda$collections$Array* $tmp3392 = (panda$collections$Array*) malloc(40);
    $tmp3392->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3392->refCount.value = 1;
    panda$collections$Array$init($tmp3392);
    whileChildren3391 = $tmp3392;
    org$pandalanguage$pandac$IRNode* $tmp3395 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3395->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3395->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3395, ((panda$core$Int64) { 1016 }), ((org$pandalanguage$pandac$Symbol*) iter3371)->position, iter3371->type, iter3371);
    panda$collections$Array* $tmp3398 = (panda$collections$Array*) malloc(40);
    $tmp3398->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3398->refCount.value = 1;
    panda$collections$Array$init($tmp3398);
    org$pandalanguage$pandac$IRNode* $tmp3400 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3395, &$s3397, ((panda$collections$ListView*) $tmp3398), NULL);
    done3394 = $tmp3400;
    if (((panda$core$Bit) { done3394 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3403 = (panda$collections$Array*) malloc(40);
    $tmp3403->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3403->refCount.value = 1;
    panda$collections$Array$init($tmp3403);
    org$pandalanguage$pandac$IRNode* $tmp3405 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, done3394, &$s3402, ((panda$collections$ListView*) $tmp3403), NULL);
    notCall3401 = $tmp3405;
    if (((panda$core$Bit) { notCall3401 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(whileChildren3391, ((panda$core$Object*) notCall3401));
    panda$collections$Array* $tmp3407 = (panda$collections$Array*) malloc(40);
    $tmp3407->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3407->refCount.value = 1;
    panda$collections$Array$init($tmp3407);
    valueDeclChildren3406 = $tmp3407;
    org$pandalanguage$pandac$IRNode* $tmp3409 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3409->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3409->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3409, ((panda$core$Int64) { 1016 }), p_iterator->position, targetVar3354->type, targetVar3354);
    panda$collections$Array$add$panda$collections$Array$T(valueDeclChildren3406, ((panda$core$Object*) $tmp3409));
    org$pandalanguage$pandac$IRNode* $tmp3412 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3412->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3412->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3412, ((panda$core$Int64) { 1016 }), p_iterator->position, iter3371->type, iter3371);
    panda$collections$Array* $tmp3415 = (panda$collections$Array*) malloc(40);
    $tmp3415->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3415->refCount.value = 1;
    panda$collections$Array$init($tmp3415);
    org$pandalanguage$pandac$IRNode* $tmp3417 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3412, &$s3414, ((panda$collections$ListView*) $tmp3415), NULL);
    next3411 = $tmp3417;
    PANDA_ASSERT(((panda$core$Bit) { next3411 != NULL }).value);
    panda$collections$Array$add$panda$collections$Array$T(valueDeclChildren3406, ((panda$core$Object*) next3411));
    panda$collections$Array* $tmp3419 = (panda$collections$Array*) malloc(40);
    $tmp3419->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3419->refCount.value = 1;
    panda$collections$Array$init($tmp3419);
    valueVarChildren3418 = $tmp3419;
    org$pandalanguage$pandac$IRNode* $tmp3421 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3421->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3421->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3421, ((panda$core$Int64) { 1021 }), p_iterator->position, ((panda$collections$ListView*) valueDeclChildren3406));
    panda$collections$Array$add$panda$collections$Array$T(valueVarChildren3418, ((panda$core$Object*) $tmp3421));
    org$pandalanguage$pandac$IRNode* $tmp3424 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_body);
    block3423 = $tmp3424;
    if (((panda$core$Bit) { block3423 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3426 = (panda$collections$Array*) malloc(40);
    $tmp3426->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3426->refCount.value = 1;
    panda$collections$Array$init($tmp3426);
    blockChildren3425 = $tmp3426;
    org$pandalanguage$pandac$IRNode* $tmp3428 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3428->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3428->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3428, ((panda$core$Int64) { 1018 }), p_iterator->position, ((panda$collections$ListView*) valueVarChildren3418));
    panda$collections$Array$add$panda$collections$Array$T(blockChildren3425, ((panda$core$Object*) $tmp3428));
    panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(blockChildren3425, ((panda$collections$CollectionView*) block3423->children));
    org$pandalanguage$pandac$IRNode* $tmp3430 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3430->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3430->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3430, ((panda$core$Int64) { 1000 }), block3423->position, ((panda$collections$ListView*) blockChildren3425));
    block3423 = $tmp3430;
    panda$collections$Array$add$panda$collections$Array$T(whileChildren3391, ((panda$core$Object*) block3423));
    org$pandalanguage$pandac$IRNode* $tmp3432 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3432->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3432->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3432, ((panda$core$Int64) { 1013 }), p_iterator->position, ((panda$core$Object*) p_label), ((panda$collections$ListView*) whileChildren3391));
    panda$collections$Array$add$panda$collections$Array$T(statements3376, ((panda$core$Object*) $tmp3432));
    org$pandalanguage$pandac$IRNode* $tmp3434 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3434->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3434->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3434, ((panda$core$Int64) { 1000 }), p_iterator->position, ((panda$collections$ListView*) statements3376));
    return $tmp3434;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileFor$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_f) {
    org$pandalanguage$pandac$IRNode* list3439;
    org$pandalanguage$pandac$SymbolTable* symbols3442;
    org$pandalanguage$pandac$IRNode* result3445;
    panda$core$Bit found3459;
    panda$collections$Iterator* intf$Iter3460;
    org$pandalanguage$pandac$Type* intf3473;
    org$pandalanguage$pandac$IRNode* iterator3485;
    org$pandalanguage$pandac$IRNode* iterable3497;
    org$pandalanguage$pandac$IRNode* iterator3499;
    panda$core$Bit $tmp3436 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_f->kind, ((panda$core$Int64) { 119 }));
    PANDA_ASSERT($tmp3436.value);
    panda$core$Int64 $tmp3437 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_f->children);
    panda$core$Bit $tmp3438 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3437, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp3438.value);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loops, ((panda$core$Object*) ((panda$core$String*) p_f->payload)));
    panda$core$Object* $tmp3440 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp3441 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3440));
    list3439 = $tmp3441;
    if (((panda$core$Bit) { list3439 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp3443 = (org$pandalanguage$pandac$SymbolTable*) malloc(40);
    $tmp3443->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp3443->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp3443, self->symbolTable);
    symbols3442 = $tmp3443;
    self->symbolTable = symbols3442;
    panda$core$Bit $tmp3448 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(list3439->kind, ((panda$core$Int64) { 1031 }));
    bool $tmp3447 = $tmp3448.value;
    if ($tmp3447) goto $l3449;
    panda$core$Bit $tmp3450 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(list3439->type);
    $tmp3447 = $tmp3450.value;
    $l3449:;
    panda$core$Bit $tmp3451 = { $tmp3447 };
    bool $tmp3446 = $tmp3451.value;
    if ($tmp3446) goto $l3452;
    panda$core$Bit $tmp3453 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(list3439->type);
    $tmp3446 = $tmp3453.value;
    $l3452:;
    panda$core$Bit $tmp3454 = { $tmp3446 };
    if ($tmp3454.value) {
    {
        panda$core$Object* $tmp3455 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3456 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$IRNode* $tmp3457 = org$pandalanguage$pandac$Compiler$compileRangeFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->position, ((panda$core$String*) p_f->payload), ((org$pandalanguage$pandac$ASTNode*) $tmp3455), list3439, ((org$pandalanguage$pandac$ASTNode*) $tmp3456));
        result3445 = $tmp3457;
    }
    }
    else {
    {
        org$pandalanguage$pandac$IRNode* $tmp3458 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, list3439);
        list3439 = $tmp3458;
        if (((panda$core$Bit) { list3439 == NULL }).value) {
        {
            return NULL;
        }
        }
        found3459 = ((panda$core$Bit) { false });
        {
            panda$collections$Set* $tmp3461 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self, list3439->type);
            ITable* $tmp3462 = ((panda$collections$Iterable*) $tmp3461)->$class->itable;
            while ($tmp3462->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3462 = $tmp3462->next;
            }
            $fn3464 $tmp3463 = $tmp3462->methods[0];
            panda$collections$Iterator* $tmp3465 = $tmp3463(((panda$collections$Iterable*) $tmp3461));
            intf$Iter3460 = $tmp3465;
            $l3466:;
            ITable* $tmp3468 = intf$Iter3460->$class->itable;
            while ($tmp3468->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3468 = $tmp3468->next;
            }
            $fn3470 $tmp3469 = $tmp3468->methods[0];
            panda$core$Bit $tmp3471 = $tmp3469(intf$Iter3460);
            panda$core$Bit $tmp3472 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3471);
            if (!$tmp3472.value) goto $l3467;
            {
                ITable* $tmp3474 = intf$Iter3460->$class->itable;
                while ($tmp3474->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3474 = $tmp3474->next;
                }
                $fn3476 $tmp3475 = $tmp3474->methods[1];
                panda$core$Object* $tmp3477 = $tmp3475(intf$Iter3460);
                intf3473 = ((org$pandalanguage$pandac$Type*) $tmp3477);
                panda$core$Bit $tmp3479 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(intf3473->typeKind, ((panda$core$Int64) { 21 }));
                bool $tmp3478 = $tmp3479.value;
                if (!$tmp3478) goto $l3480;
                panda$core$Object* $tmp3481 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(intf3473->subtypes, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp3482 = org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp3483 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3481), $tmp3482);
                $tmp3478 = $tmp3483.value;
                $l3480:;
                panda$core$Bit $tmp3484 = { $tmp3478 };
                if ($tmp3484.value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp3486 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, list3439, intf3473);
                    iterator3485 = $tmp3486;
                    panda$core$Object* $tmp3487 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
                    panda$core$Object* $tmp3488 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 2 }));
                    org$pandalanguage$pandac$IRNode* $tmp3489 = org$pandalanguage$pandac$Compiler$compileIteratorFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->position, ((panda$core$String*) p_f->payload), ((org$pandalanguage$pandac$ASTNode*) $tmp3487), iterator3485, ((org$pandalanguage$pandac$ASTNode*) $tmp3488));
                    result3445 = $tmp3489;
                    found3459 = ((panda$core$Bit) { true });
                    goto $l3467;
                }
                }
                panda$core$Bit $tmp3491 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(intf3473->typeKind, ((panda$core$Int64) { 21 }));
                bool $tmp3490 = $tmp3491.value;
                if (!$tmp3490) goto $l3492;
                panda$core$Object* $tmp3493 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(intf3473->subtypes, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp3494 = org$pandalanguage$pandac$Type$Iterable$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp3495 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3493), $tmp3494);
                $tmp3490 = $tmp3495.value;
                $l3492:;
                panda$core$Bit $tmp3496 = { $tmp3490 };
                if ($tmp3496.value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp3498 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, list3439, intf3473);
                    iterable3497 = $tmp3498;
                    panda$collections$Array* $tmp3501 = (panda$collections$Array*) malloc(40);
                    $tmp3501->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp3501->refCount.value = 1;
                    panda$collections$Array$init($tmp3501);
                    org$pandalanguage$pandac$IRNode* $tmp3503 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, iterable3497, &$s3500, ((panda$collections$ListView*) $tmp3501));
                    iterator3499 = $tmp3503;
                    panda$core$Object* $tmp3504 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
                    panda$core$Object* $tmp3505 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 2 }));
                    org$pandalanguage$pandac$IRNode* $tmp3506 = org$pandalanguage$pandac$Compiler$compileIteratorFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->position, ((panda$core$String*) p_f->payload), ((org$pandalanguage$pandac$ASTNode*) $tmp3504), iterator3499, ((org$pandalanguage$pandac$ASTNode*) $tmp3505));
                    result3445 = $tmp3506;
                    found3459 = ((panda$core$Bit) { true });
                    goto $l3467;
                }
                }
            }
            goto $l3466;
            $l3467:;
        }
        panda$core$Bit $tmp3507 = panda$core$Bit$$NOT$R$panda$core$Bit(found3459);
        if ($tmp3507.value) {
        {
            panda$core$String* $tmp3509 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3508, ((panda$core$Object*) list3439->type));
            panda$core$String* $tmp3511 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3509, &$s3510);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, list3439->position, $tmp3511);
            return NULL;
        }
        }
    }
    }
    panda$core$Object* $tmp3512 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(symbols3442->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp3512);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
    return result3445;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileWhile$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_w) {
    org$pandalanguage$pandac$IRNode* test3516;
    org$pandalanguage$pandac$IRNode* stmt3521;
    panda$collections$Array* children3524;
    panda$core$Bit $tmp3513 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_w->kind, ((panda$core$Int64) { 121 }));
    PANDA_ASSERT($tmp3513.value);
    panda$core$Int64 $tmp3514 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Bit $tmp3515 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3514, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp3515.value);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loops, ((panda$core$Object*) ((panda$core$String*) p_w->payload)));
    panda$core$Object* $tmp3517 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3518 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3517));
    org$pandalanguage$pandac$Type* $tmp3519 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp3520 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3518, $tmp3519);
    test3516 = $tmp3520;
    if (((panda$core$Bit) { test3516 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$core$Object* $tmp3522 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp3523 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3522));
    stmt3521 = $tmp3523;
    if (((panda$core$Bit) { stmt3521 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$collections$Array* $tmp3525 = (panda$collections$Array*) malloc(40);
    $tmp3525->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3525->refCount.value = 1;
    panda$collections$Array$init$panda$core$Int64($tmp3525, ((panda$core$Int64) { 2 }));
    children3524 = $tmp3525;
    panda$collections$Array$add$panda$collections$Array$T(children3524, ((panda$core$Object*) test3516));
    panda$collections$Array$add$panda$collections$Array$T(children3524, ((panda$core$Object*) stmt3521));
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
    org$pandalanguage$pandac$IRNode* $tmp3527 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3527->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3527->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3527, ((panda$core$Int64) { 1013 }), p_w->position, p_w->payload, ((panda$collections$ListView*) children3524));
    return $tmp3527;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileDo$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_d) {
    org$pandalanguage$pandac$IRNode* stmt3532;
    org$pandalanguage$pandac$IRNode* test3535;
    panda$collections$Array* children3540;
    panda$core$Bit $tmp3529 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_d->kind, ((panda$core$Int64) { 120 }));
    PANDA_ASSERT($tmp3529.value);
    panda$core$Int64 $tmp3530 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp3531 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3530, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp3531.value);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loops, ((panda$core$Object*) ((panda$core$String*) p_d->payload)));
    panda$core$Object* $tmp3533 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3534 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3533));
    stmt3532 = $tmp3534;
    if (((panda$core$Bit) { stmt3532 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$core$Object* $tmp3536 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp3537 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3536));
    org$pandalanguage$pandac$Type* $tmp3538 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp3539 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3537, $tmp3538);
    test3535 = $tmp3539;
    if (((panda$core$Bit) { test3535 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$collections$Array* $tmp3541 = (panda$collections$Array*) malloc(40);
    $tmp3541->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3541->refCount.value = 1;
    panda$collections$Array$init$panda$core$Int64($tmp3541, ((panda$core$Int64) { 2 }));
    children3540 = $tmp3541;
    panda$collections$Array$add$panda$collections$Array$T(children3540, ((panda$core$Object*) stmt3532));
    panda$collections$Array$add$panda$collections$Array$T(children3540, ((panda$core$Object*) test3535));
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
    org$pandalanguage$pandac$IRNode* $tmp3543 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3543->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3543->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3543, ((panda$core$Int64) { 1014 }), p_d->position, p_d->payload, ((panda$collections$ListView*) children3540));
    return $tmp3543;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileLoop$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_l) {
    org$pandalanguage$pandac$IRNode* stmt3548;
    panda$collections$Array* children3551;
    panda$core$Bit $tmp3545 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_l->kind, ((panda$core$Int64) { 122 }));
    PANDA_ASSERT($tmp3545.value);
    panda$core$Int64 $tmp3546 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_l->children);
    panda$core$Bit $tmp3547 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3546, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3547.value);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loops, ((panda$core$Object*) ((panda$core$String*) p_l->payload)));
    panda$core$Object* $tmp3549 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_l->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3550 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3549));
    stmt3548 = $tmp3550;
    if (((panda$core$Bit) { stmt3548 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$collections$Array* $tmp3552 = (panda$collections$Array*) malloc(40);
    $tmp3552->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3552->refCount.value = 1;
    panda$collections$Array$init$panda$core$Int64($tmp3552, ((panda$core$Int64) { 1 }));
    children3551 = $tmp3552;
    panda$collections$Array$add$panda$collections$Array$T(children3551, ((panda$core$Object*) stmt3548));
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
    org$pandalanguage$pandac$IRNode* $tmp3554 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3554->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3554->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3554, ((panda$core$Int64) { 1015 }), p_l->position, p_l->payload, ((panda$collections$ListView*) children3551));
    return $tmp3554;
}
org$pandalanguage$pandac$Compiler$CompileTargetResult* org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_t, panda$core$Int64 p_kind, org$pandalanguage$pandac$IRNode* p_rawValue, org$pandalanguage$pandac$Type* p_valueType) {
    org$pandalanguage$pandac$IRNode* value3556;
    org$pandalanguage$pandac$Type* type3560;
    org$pandalanguage$pandac$Variable* v3571;
    value3556 = p_rawValue;
    bool $tmp3557 = ((panda$core$Bit) { value3556 == NULL }).value;
    if ($tmp3557) goto $l3558;
    $tmp3557 = ((panda$core$Bit) { p_valueType == NULL }).value;
    $l3558:;
    panda$core$Bit $tmp3559 = { $tmp3557 };
    PANDA_ASSERT($tmp3559.value);
    switch (p_t->kind.value) {
        case 106:
        {
            panda$core$Int64 $tmp3561 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_t->children);
            panda$core$Bit $tmp3562 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3561, ((panda$core$Int64) { 1 }));
            if ($tmp3562.value) {
            {
                panda$core$Object* $tmp3563 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp3564 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, ((org$pandalanguage$pandac$ASTNode*) $tmp3563));
                org$pandalanguage$pandac$Type* $tmp3565 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, $tmp3564);
                type3560 = $tmp3565;
            }
            }
            else {
            if (((panda$core$Bit) { value3556 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp3566 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, value3556);
                value3556 = $tmp3566;
                if (((panda$core$Bit) { value3556 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$Type* $tmp3567 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, value3556);
                type3560 = $tmp3567;
            }
            }
            else {
            if (((panda$core$Bit) { p_valueType != NULL }).value) {
            {
                type3560 = p_valueType;
            }
            }
            else {
            {
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_t->position, &$s3568);
                return NULL;
            }
            }
            }
            }
            if (((panda$core$Bit) { value3556 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp3569 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, value3556, type3560);
                value3556 = $tmp3569;
                if (((panda$core$Bit) { value3556 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$core$Bit $tmp3570 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(value3556->type, type3560);
                PANDA_ASSERT($tmp3570.value);
            }
            }
            org$pandalanguage$pandac$Variable* $tmp3572 = (org$pandalanguage$pandac$Variable*) malloc(88);
            $tmp3572->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
            $tmp3572->refCount.value = 1;
            org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type($tmp3572, p_t->position, p_kind, ((panda$core$String*) p_t->payload), type3560);
            v3571 = $tmp3572;
            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->symbolTable, ((org$pandalanguage$pandac$Symbol*) v3571));
            org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp3574 = (org$pandalanguage$pandac$Compiler$CompileTargetResult*) malloc(32);
            $tmp3574->$class = (panda$core$Class*) &org$pandalanguage$pandac$Compiler$CompileTargetResult$class;
            $tmp3574->refCount.value = 1;
            org$pandalanguage$pandac$IRNode* $tmp3576 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3576->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3576->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3576, ((panda$core$Int64) { 1016 }), ((org$pandalanguage$pandac$Symbol*) v3571)->position, v3571->type, v3571);
            org$pandalanguage$pandac$Compiler$CompileTargetResult$init$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q($tmp3574, $tmp3576, value3556);
            return $tmp3574;
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
    org$pandalanguage$pandac$IRNode* value3586;
    org$pandalanguage$pandac$Compiler$CompileTargetResult* target3591;
    panda$collections$Array* children3594;
    org$pandalanguage$pandac$Variable* v3598;
    panda$core$Bit $tmp3578 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_d->kind, ((panda$core$Int64) { 129 }));
    PANDA_ASSERT($tmp3578.value);
    panda$core$Int64 $tmp3580 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp3581 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3580, ((panda$core$Int64) { 1 }));
    bool $tmp3579 = $tmp3581.value;
    if ($tmp3579) goto $l3582;
    panda$core$Int64 $tmp3583 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp3584 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3583, ((panda$core$Int64) { 2 }));
    $tmp3579 = $tmp3584.value;
    $l3582:;
    panda$core$Bit $tmp3585 = { $tmp3579 };
    PANDA_ASSERT($tmp3585.value);
    panda$core$Int64 $tmp3587 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp3588 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3587, ((panda$core$Int64) { 2 }));
    if ($tmp3588.value) {
    {
        panda$core$Object* $tmp3589 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$IRNode* $tmp3590 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3589));
        value3586 = $tmp3590;
        if (((panda$core$Bit) { value3586 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    else {
    {
        value3586 = NULL;
    }
    }
    panda$core$Object* $tmp3592 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp3593 = org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3592), p_varKind, value3586, NULL);
    target3591 = $tmp3593;
    if (((panda$core$Bit) { target3591 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3595 = (panda$collections$Array*) malloc(40);
    $tmp3595->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3595->refCount.value = 1;
    panda$collections$Array$init($tmp3595);
    children3594 = $tmp3595;
    panda$collections$Array$add$panda$collections$Array$T(children3594, ((panda$core$Object*) target3591->target));
    if (((panda$core$Bit) { target3591->value != NULL }).value) {
    {
        panda$core$Bit $tmp3597 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(target3591->target->kind, ((panda$core$Int64) { 1016 }));
        PANDA_ASSERT($tmp3597.value);
        v3598 = ((org$pandalanguage$pandac$Variable*) target3591->target->payload);
        v3598->initialValue = target3591->value;
        panda$collections$Array$add$panda$collections$Array$T(children3594, ((panda$core$Object*) target3591->value));
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3599 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3599->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3599->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3599, ((panda$core$Int64) { 1021 }), p_d->position, ((panda$collections$ListView*) children3594));
    return $tmp3599;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBreak$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_b) {
    panda$core$Bit found3602;
    panda$collections$Iterator* label$Iter3603;
    panda$core$String* label3615;
    panda$core$Bit $tmp3601 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_b->kind, ((panda$core$Int64) { 134 }));
    PANDA_ASSERT($tmp3601.value);
    if (((panda$core$Bit) { p_b->payload != NULL }).value) {
    {
        found3602 = ((panda$core$Bit) { false });
        {
            ITable* $tmp3604 = ((panda$collections$Iterable*) self->loops)->$class->itable;
            while ($tmp3604->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3604 = $tmp3604->next;
            }
            $fn3606 $tmp3605 = $tmp3604->methods[0];
            panda$collections$Iterator* $tmp3607 = $tmp3605(((panda$collections$Iterable*) self->loops));
            label$Iter3603 = $tmp3607;
            $l3608:;
            ITable* $tmp3610 = label$Iter3603->$class->itable;
            while ($tmp3610->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3610 = $tmp3610->next;
            }
            $fn3612 $tmp3611 = $tmp3610->methods[0];
            panda$core$Bit $tmp3613 = $tmp3611(label$Iter3603);
            panda$core$Bit $tmp3614 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3613);
            if (!$tmp3614.value) goto $l3609;
            {
                ITable* $tmp3616 = label$Iter3603->$class->itable;
                while ($tmp3616->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3616 = $tmp3616->next;
                }
                $fn3618 $tmp3617 = $tmp3616->methods[1];
                panda$core$Object* $tmp3619 = $tmp3617(label$Iter3603);
                label3615 = ((panda$core$String*) $tmp3619);
                bool $tmp3620 = ((panda$core$Bit) { label3615 != NULL }).value;
                if (!$tmp3620) goto $l3621;
                panda$core$Bit $tmp3622 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(label3615, ((panda$core$String*) p_b->payload));
                $tmp3620 = $tmp3622.value;
                $l3621:;
                panda$core$Bit $tmp3623 = { $tmp3620 };
                if ($tmp3623.value) {
                {
                    found3602 = ((panda$core$Bit) { true });
                    goto $l3609;
                }
                }
            }
            goto $l3608;
            $l3609:;
        }
        panda$core$Bit $tmp3624 = panda$core$Bit$$NOT$R$panda$core$Bit(found3602);
        if ($tmp3624.value) {
        {
            panda$core$String* $tmp3626 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3625, p_b->payload);
            panda$core$String* $tmp3628 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3626, &$s3627);
            panda$core$String* $tmp3630 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3629, p_b->payload);
            panda$core$String* $tmp3632 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3630, &$s3631);
            panda$core$String* $tmp3633 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3628, $tmp3632);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_b->position, $tmp3633);
        }
        }
    }
    }
    else {
    panda$core$Int64 $tmp3634 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loops);
    panda$core$Bit $tmp3635 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3634, ((panda$core$Int64) { 0 }));
    if ($tmp3635.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_b->position, &$s3636);
    }
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3637 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3637->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3637->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp3637, ((panda$core$Int64) { 1006 }), p_b->position, ((panda$core$String*) p_b->payload));
    return $tmp3637;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileContinue$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_c) {
    panda$core$Bit found3640;
    panda$collections$Iterator* label$Iter3641;
    panda$core$String* label3653;
    panda$core$Bit $tmp3639 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_c->kind, ((panda$core$Int64) { 135 }));
    PANDA_ASSERT($tmp3639.value);
    if (((panda$core$Bit) { p_c->payload != NULL }).value) {
    {
        found3640 = ((panda$core$Bit) { false });
        {
            ITable* $tmp3642 = ((panda$collections$Iterable*) self->loops)->$class->itable;
            while ($tmp3642->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3642 = $tmp3642->next;
            }
            $fn3644 $tmp3643 = $tmp3642->methods[0];
            panda$collections$Iterator* $tmp3645 = $tmp3643(((panda$collections$Iterable*) self->loops));
            label$Iter3641 = $tmp3645;
            $l3646:;
            ITable* $tmp3648 = label$Iter3641->$class->itable;
            while ($tmp3648->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3648 = $tmp3648->next;
            }
            $fn3650 $tmp3649 = $tmp3648->methods[0];
            panda$core$Bit $tmp3651 = $tmp3649(label$Iter3641);
            panda$core$Bit $tmp3652 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3651);
            if (!$tmp3652.value) goto $l3647;
            {
                ITable* $tmp3654 = label$Iter3641->$class->itable;
                while ($tmp3654->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3654 = $tmp3654->next;
                }
                $fn3656 $tmp3655 = $tmp3654->methods[1];
                panda$core$Object* $tmp3657 = $tmp3655(label$Iter3641);
                label3653 = ((panda$core$String*) $tmp3657);
                bool $tmp3658 = ((panda$core$Bit) { label3653 != NULL }).value;
                if (!$tmp3658) goto $l3659;
                panda$core$Bit $tmp3660 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(label3653, ((panda$core$String*) p_c->payload));
                $tmp3658 = $tmp3660.value;
                $l3659:;
                panda$core$Bit $tmp3661 = { $tmp3658 };
                if ($tmp3661.value) {
                {
                    found3640 = ((panda$core$Bit) { true });
                    goto $l3647;
                }
                }
            }
            goto $l3646;
            $l3647:;
        }
        panda$core$Bit $tmp3662 = panda$core$Bit$$NOT$R$panda$core$Bit(found3640);
        if ($tmp3662.value) {
        {
            panda$core$String* $tmp3664 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3663, p_c->payload);
            panda$core$String* $tmp3666 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3664, &$s3665);
            panda$core$String* $tmp3668 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3667, p_c->payload);
            panda$core$String* $tmp3670 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3668, &$s3669);
            panda$core$String* $tmp3671 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3666, $tmp3670);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_c->position, $tmp3671);
        }
        }
    }
    }
    else {
    panda$core$Int64 $tmp3672 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loops);
    panda$core$Bit $tmp3673 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3672, ((panda$core$Int64) { 0 }));
    if ($tmp3673.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_c->position, &$s3674);
    }
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3675 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3675->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3675->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp3675, ((panda$core$Int64) { 1007 }), p_c->position, ((panda$core$String*) p_c->payload));
    return $tmp3675;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileReturn$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_r) {
    org$pandalanguage$pandac$IRNode* value3684;
    panda$collections$Array* children3689;
    panda$core$Bit $tmp3677 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_r->kind, ((panda$core$Int64) { 136 }));
    PANDA_ASSERT($tmp3677.value);
    panda$core$Int64 $tmp3678 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_r->children);
    panda$core$Bit $tmp3679 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3678, ((panda$core$Int64) { 1 }));
    if ($tmp3679.value) {
    {
        panda$core$Object* $tmp3680 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
        org$pandalanguage$pandac$Type* $tmp3681 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp3682 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp3680)->returnType, $tmp3681);
        if ($tmp3682.value) {
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_r->position, &$s3683);
            return NULL;
        }
        }
        panda$core$Object* $tmp3685 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp3686 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3685));
        panda$core$Object* $tmp3687 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
        org$pandalanguage$pandac$IRNode* $tmp3688 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3686, ((org$pandalanguage$pandac$MethodDecl*) $tmp3687)->returnType);
        value3684 = $tmp3688;
        if (((panda$core$Bit) { value3684 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp3690 = (panda$collections$Array*) malloc(40);
        $tmp3690->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp3690->refCount.value = 1;
        panda$collections$Array$init($tmp3690);
        children3689 = $tmp3690;
        panda$collections$Array$add$panda$collections$Array$T(children3689, ((panda$core$Object*) value3684));
        org$pandalanguage$pandac$IRNode* $tmp3692 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3692->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3692->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3692, ((panda$core$Int64) { 1008 }), p_r->position, ((panda$collections$ListView*) children3689));
        return $tmp3692;
    }
    }
    panda$core$Int64 $tmp3694 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_r->children);
    panda$core$Bit $tmp3695 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3694, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp3695.value);
    panda$core$Object* $tmp3696 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
    org$pandalanguage$pandac$Type* $tmp3697 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp3698 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp3696)->returnType, $tmp3697);
    if ($tmp3698.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_r->position, &$s3699);
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3700 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3700->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3700->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp3700, ((panda$core$Int64) { 1008 }), p_r->position);
    return $tmp3700;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileAssert$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_a) {
    org$pandalanguage$pandac$IRNode* test3710;
    org$pandalanguage$pandac$ClassDecl* bit3715;
    org$pandalanguage$pandac$Symbol* value3718;
    panda$collections$Array* fieldChildren3721;
    panda$collections$Array* children3727;
    org$pandalanguage$pandac$IRNode* msg3732;
    panda$core$Bit $tmp3702 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_a->kind, ((panda$core$Int64) { 123 }));
    PANDA_ASSERT($tmp3702.value);
    panda$core$Int64 $tmp3704 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp3705 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3704, ((panda$core$Int64) { 1 }));
    bool $tmp3703 = $tmp3705.value;
    if ($tmp3703) goto $l3706;
    panda$core$Int64 $tmp3707 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp3708 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3707, ((panda$core$Int64) { 2 }));
    $tmp3703 = $tmp3708.value;
    $l3706:;
    panda$core$Bit $tmp3709 = { $tmp3703 };
    PANDA_ASSERT($tmp3709.value);
    panda$core$Object* $tmp3711 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_a->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3712 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3711));
    test3710 = $tmp3712;
    if (((panda$core$Bit) { test3710 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$Type* $tmp3713 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp3714 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, test3710, $tmp3713);
    test3710 = $tmp3714;
    if (((panda$core$Bit) { test3710 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$Type* $tmp3716 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$ClassDecl* $tmp3717 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, $tmp3716);
    bit3715 = $tmp3717;
    PANDA_ASSERT(((panda$core$Bit) { bit3715 != NULL }).value);
    org$pandalanguage$pandac$Symbol* $tmp3720 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(bit3715->symbolTable, &$s3719);
    value3718 = $tmp3720;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self, ((org$pandalanguage$pandac$FieldDecl*) value3718));
    panda$collections$Array* $tmp3722 = (panda$collections$Array*) malloc(40);
    $tmp3722->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3722->refCount.value = 1;
    panda$collections$Array$init($tmp3722);
    fieldChildren3721 = $tmp3722;
    panda$collections$Array$add$panda$collections$Array$T(fieldChildren3721, ((panda$core$Object*) test3710));
    org$pandalanguage$pandac$IRNode* $tmp3724 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3724->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3724->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3726 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3724, ((panda$core$Int64) { 1026 }), p_a->position, $tmp3726, ((panda$core$Object*) value3718), ((panda$collections$ListView*) fieldChildren3721));
    test3710 = $tmp3724;
    panda$collections$Array* $tmp3728 = (panda$collections$Array*) malloc(40);
    $tmp3728->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3728->refCount.value = 1;
    panda$collections$Array$init($tmp3728);
    children3727 = $tmp3728;
    panda$collections$Array$add$panda$collections$Array$T(children3727, ((panda$core$Object*) test3710));
    panda$core$Int64 $tmp3730 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp3731 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3730, ((panda$core$Int64) { 2 }));
    if ($tmp3731.value) {
    {
        panda$core$Object* $tmp3733 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_a->children, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$IRNode* $tmp3734 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3733));
        msg3732 = $tmp3734;
        if (((panda$core$Bit) { msg3732 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$Type* $tmp3735 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp3736 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, msg3732, $tmp3735);
        msg3732 = $tmp3736;
        if (((panda$core$Bit) { msg3732 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children3727, ((panda$core$Object*) msg3732));
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3737 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3737->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3737->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3737, ((panda$core$Int64) { 1034 }), p_a->position, ((panda$collections$ListView*) children3727));
    return $tmp3737;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileVar$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_v) {
    panda$core$Int64 nodeKind3752;
    panda$core$Int64 varKind3753;
    panda$collections$Array* decls3754;
    panda$collections$Iterator* astDecl$Iter3757;
    org$pandalanguage$pandac$ASTNode* astDecl3769;
    org$pandalanguage$pandac$IRNode* decl3774;
    panda$core$Bit $tmp3742 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 130 }));
    bool $tmp3741 = $tmp3742.value;
    if ($tmp3741) goto $l3743;
    panda$core$Bit $tmp3744 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 131 }));
    $tmp3741 = $tmp3744.value;
    $l3743:;
    panda$core$Bit $tmp3745 = { $tmp3741 };
    bool $tmp3740 = $tmp3745.value;
    if ($tmp3740) goto $l3746;
    panda$core$Bit $tmp3747 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 133 }));
    $tmp3740 = $tmp3747.value;
    $l3746:;
    panda$core$Bit $tmp3748 = { $tmp3740 };
    bool $tmp3739 = $tmp3748.value;
    if ($tmp3739) goto $l3749;
    panda$core$Bit $tmp3750 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 132 }));
    $tmp3739 = $tmp3750.value;
    $l3749:;
    panda$core$Bit $tmp3751 = { $tmp3739 };
    PANDA_ASSERT($tmp3751.value);
    switch (p_v->kind.value) {
        case 130:
        {
            nodeKind3752 = ((panda$core$Int64) { 1017 });
            varKind3753 = ((panda$core$Int64) { 10000 });
        }
        break;
        case 131:
        {
            nodeKind3752 = ((panda$core$Int64) { 1018 });
            varKind3753 = ((panda$core$Int64) { 10001 });
        }
        break;
        case 132:
        {
            nodeKind3752 = ((panda$core$Int64) { 1019 });
            varKind3753 = ((panda$core$Int64) { 10002 });
        }
        break;
        case 133:
        {
            nodeKind3752 = ((panda$core$Int64) { 1020 });
            varKind3753 = ((panda$core$Int64) { 10003 });
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
    panda$collections$Array* $tmp3755 = (panda$collections$Array*) malloc(40);
    $tmp3755->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3755->refCount.value = 1;
    panda$collections$Array$init($tmp3755);
    decls3754 = $tmp3755;
    {
        ITable* $tmp3758 = ((panda$collections$Iterable*) p_v->children)->$class->itable;
        while ($tmp3758->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3758 = $tmp3758->next;
        }
        $fn3760 $tmp3759 = $tmp3758->methods[0];
        panda$collections$Iterator* $tmp3761 = $tmp3759(((panda$collections$Iterable*) p_v->children));
        astDecl$Iter3757 = $tmp3761;
        $l3762:;
        ITable* $tmp3764 = astDecl$Iter3757->$class->itable;
        while ($tmp3764->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3764 = $tmp3764->next;
        }
        $fn3766 $tmp3765 = $tmp3764->methods[0];
        panda$core$Bit $tmp3767 = $tmp3765(astDecl$Iter3757);
        panda$core$Bit $tmp3768 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3767);
        if (!$tmp3768.value) goto $l3763;
        {
            ITable* $tmp3770 = astDecl$Iter3757->$class->itable;
            while ($tmp3770->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3770 = $tmp3770->next;
            }
            $fn3772 $tmp3771 = $tmp3770->methods[1];
            panda$core$Object* $tmp3773 = $tmp3771(astDecl$Iter3757);
            astDecl3769 = ((org$pandalanguage$pandac$ASTNode*) $tmp3773);
            org$pandalanguage$pandac$IRNode* $tmp3775 = org$pandalanguage$pandac$Compiler$compileDeclaration$org$pandalanguage$pandac$ASTNode$panda$core$Int64$R$org$pandalanguage$pandac$IRNode$Q(self, astDecl3769, varKind3753);
            decl3774 = $tmp3775;
            if (((panda$core$Bit) { decl3774 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(decls3754, ((panda$core$Object*) decl3774));
        }
        goto $l3762;
        $l3763:;
    }
    org$pandalanguage$pandac$IRNode* $tmp3776 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3776->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3776->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3776, nodeKind3752, p_v->position, ((panda$collections$ListView*) decls3754));
    return $tmp3776;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileWhenTest$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Variable* p_value, org$pandalanguage$pandac$ASTNode* p_test) {
    org$pandalanguage$pandac$IRNode* target3778;
    panda$collections$Array* callChildren3781;
    org$pandalanguage$pandac$IRNode* testValue3784;
    org$pandalanguage$pandac$IRNode* $tmp3779 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3779->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3779->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3779, ((panda$core$Int64) { 1016 }), p_test->position, p_value->type, p_value);
    target3778 = $tmp3779;
    panda$collections$Array* $tmp3782 = (panda$collections$Array*) malloc(40);
    $tmp3782->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3782->refCount.value = 1;
    panda$collections$Array$init($tmp3782);
    callChildren3781 = $tmp3782;
    org$pandalanguage$pandac$IRNode* $tmp3785 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_test);
    testValue3784 = $tmp3785;
    if (((panda$core$Bit) { testValue3784 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(callChildren3781, ((panda$core$Object*) testValue3784));
    org$pandalanguage$pandac$IRNode* $tmp3787 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target3778, &$s3786, ((panda$collections$ListView*) callChildren3781));
    return $tmp3787;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileChainedIfWhen$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Variable* p_value, org$pandalanguage$pandac$ASTNode* p_w) {
    org$pandalanguage$pandac$IRNode* test3796;
    panda$core$SimpleRange$LTpanda$core$Int64$GT $tmp3800;
    org$pandalanguage$pandac$IRNode* nextTest3820;
    panda$collections$Array* callChildren3824;
    panda$collections$Array* statements3842;
    panda$core$SimpleRange$LTpanda$core$Int64$GT $tmp3845;
    org$pandalanguage$pandac$IRNode* statement3864;
    panda$collections$Array* children3879;
    panda$core$Bit $tmp3788 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_w->kind, ((panda$core$Int64) { 124 }));
    PANDA_ASSERT($tmp3788.value);
    panda$core$Int64 $tmp3789 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Bit $tmp3790 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp3789, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3790.value);
    panda$core$Object* $tmp3791 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp3792 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp3791)->kind, ((panda$core$Int64) { 128 }));
    PANDA_ASSERT($tmp3792.value);
    panda$core$Object* $tmp3793 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Int64 $tmp3794 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$ASTNode*) $tmp3793)->children);
    panda$core$Bit $tmp3795 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp3794, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3795.value);
    panda$core$Object* $tmp3797 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp3798 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$ASTNode*) $tmp3797)->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3799 = org$pandalanguage$pandac$Compiler$compileWhenTest$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_value, ((org$pandalanguage$pandac$ASTNode*) $tmp3798));
    test3796 = $tmp3799;
    if (((panda$core$Bit) { test3796 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Object* $tmp3801 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Int64 $tmp3802 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$ASTNode*) $tmp3801)->children);
    panda$core$SimpleRange$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp3800, ((panda$core$Int64) { 1 }), $tmp3802, ((panda$core$Bit) { false }));
    int64_t $tmp3804 = $tmp3800.min.value;
    panda$core$Int64 i3803 = { $tmp3804 };
    int64_t $tmp3806 = $tmp3800.max.value;
    bool $tmp3807 = $tmp3800.inclusive.value;
    bool $tmp3814 = 1 > 0;
    if ($tmp3814) goto $l3812; else goto $l3813;
    $l3812:;
    if ($tmp3807) goto $l3815; else goto $l3816;
    $l3815:;
    if ($tmp3804 <= $tmp3806) goto $l3808; else goto $l3810;
    $l3816:;
    if ($tmp3804 < $tmp3806) goto $l3808; else goto $l3810;
    $l3813:;
    if ($tmp3807) goto $l3817; else goto $l3818;
    $l3817:;
    if ($tmp3804 >= $tmp3806) goto $l3808; else goto $l3810;
    $l3818:;
    if ($tmp3804 > $tmp3806) goto $l3808; else goto $l3810;
    $l3808:;
    {
        panda$core$Object* $tmp3821 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3822 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$ASTNode*) $tmp3821)->children, i3803);
        org$pandalanguage$pandac$IRNode* $tmp3823 = org$pandalanguage$pandac$Compiler$compileWhenTest$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_value, ((org$pandalanguage$pandac$ASTNode*) $tmp3822));
        nextTest3820 = $tmp3823;
        if (((panda$core$Bit) { nextTest3820 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp3825 = (panda$collections$Array*) malloc(40);
        $tmp3825->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp3825->refCount.value = 1;
        panda$collections$Array$init($tmp3825);
        callChildren3824 = $tmp3825;
        panda$collections$Array$add$panda$collections$Array$T(callChildren3824, ((panda$core$Object*) nextTest3820));
        org$pandalanguage$pandac$IRNode* $tmp3828 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, test3796, &$s3827, ((panda$collections$ListView*) callChildren3824));
        test3796 = $tmp3828;
        if (((panda$core$Bit) { test3796 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    $l3811:;
    if ($tmp3814) goto $l3830; else goto $l3831;
    $l3830:;
    int64_t $tmp3832 = $tmp3806 - i3803.value;
    if ($tmp3807) goto $l3833; else goto $l3834;
    $l3833:;
    if ($tmp3832 >= 1) goto $l3829; else goto $l3810;
    $l3834:;
    if ($tmp3832 > 1) goto $l3829; else goto $l3810;
    $l3831:;
    int64_t $tmp3836 = i3803.value - $tmp3806;
    if ($tmp3807) goto $l3837; else goto $l3838;
    $l3837:;
    if ($tmp3836 >= -1) goto $l3829; else goto $l3810;
    $l3838:;
    if ($tmp3836 > -1) goto $l3829; else goto $l3810;
    $l3829:;
    i3803.value += 1;
    goto $l3808;
    $l3810:;
    org$pandalanguage$pandac$SymbolTable* $tmp3840 = (org$pandalanguage$pandac$SymbolTable*) malloc(40);
    $tmp3840->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp3840->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp3840, self->symbolTable);
    self->symbolTable = $tmp3840;
    panda$collections$Array* $tmp3843 = (panda$collections$Array*) malloc(40);
    $tmp3843->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3843->refCount.value = 1;
    panda$collections$Array$init($tmp3843);
    statements3842 = $tmp3843;
    panda$core$Int64 $tmp3846 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$SimpleRange$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp3845, ((panda$core$Int64) { 1 }), $tmp3846, ((panda$core$Bit) { false }));
    int64_t $tmp3848 = $tmp3845.min.value;
    panda$core$Int64 i3847 = { $tmp3848 };
    int64_t $tmp3850 = $tmp3845.max.value;
    bool $tmp3851 = $tmp3845.inclusive.value;
    bool $tmp3858 = 1 > 0;
    if ($tmp3858) goto $l3856; else goto $l3857;
    $l3856:;
    if ($tmp3851) goto $l3859; else goto $l3860;
    $l3859:;
    if ($tmp3848 <= $tmp3850) goto $l3852; else goto $l3854;
    $l3860:;
    if ($tmp3848 < $tmp3850) goto $l3852; else goto $l3854;
    $l3857:;
    if ($tmp3851) goto $l3861; else goto $l3862;
    $l3861:;
    if ($tmp3848 >= $tmp3850) goto $l3852; else goto $l3854;
    $l3862:;
    if ($tmp3848 > $tmp3850) goto $l3852; else goto $l3854;
    $l3852:;
    {
        panda$core$Object* $tmp3865 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, i3847);
        org$pandalanguage$pandac$IRNode* $tmp3866 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3865));
        statement3864 = $tmp3866;
        if (((panda$core$Bit) { statement3864 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(statements3842, ((panda$core$Object*) statement3864));
    }
    $l3855:;
    if ($tmp3858) goto $l3868; else goto $l3869;
    $l3868:;
    int64_t $tmp3870 = $tmp3850 - i3847.value;
    if ($tmp3851) goto $l3871; else goto $l3872;
    $l3871:;
    if ($tmp3870 >= 1) goto $l3867; else goto $l3854;
    $l3872:;
    if ($tmp3870 > 1) goto $l3867; else goto $l3854;
    $l3869:;
    int64_t $tmp3874 = i3847.value - $tmp3850;
    if ($tmp3851) goto $l3875; else goto $l3876;
    $l3875:;
    if ($tmp3874 >= -1) goto $l3867; else goto $l3854;
    $l3876:;
    if ($tmp3874 > -1) goto $l3867; else goto $l3854;
    $l3867:;
    i3847.value += 1;
    goto $l3852;
    $l3854:;
    panda$core$Object* $tmp3878 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->symbolTable->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp3878);
    panda$collections$Array* $tmp3880 = (panda$collections$Array*) malloc(40);
    $tmp3880->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3880->refCount.value = 1;
    panda$collections$Array$init($tmp3880);
    children3879 = $tmp3880;
    panda$collections$Array$add$panda$collections$Array$T(children3879, ((panda$core$Object*) test3796));
    org$pandalanguage$pandac$IRNode* $tmp3882 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3882->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3882->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3882, ((panda$core$Int64) { 1000 }), p_w->position, ((panda$collections$ListView*) statements3842));
    panda$collections$Array$add$panda$collections$Array$T(children3879, ((panda$core$Object*) $tmp3882));
    org$pandalanguage$pandac$IRNode* $tmp3884 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3884->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3884->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3884, ((panda$core$Int64) { 1012 }), p_w->position, ((panda$collections$ListView*) children3879));
    return $tmp3884;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileChainedIfMatch$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_m, org$pandalanguage$pandac$IRNode* p_value) {
    panda$collections$Array* children3886;
    org$pandalanguage$pandac$Variable* valueVar3889;
    panda$collections$Array* declChildren3899;
    panda$collections$Array* varChildren3904;
    panda$core$SimpleRange$LTpanda$core$Int64$GT $tmp3911;
    org$pandalanguage$pandac$ASTNode* c3930;
    org$pandalanguage$pandac$IRNode* w3932;
    panda$collections$Array* statements3934;
    panda$collections$Iterator* astStatement$Iter3937;
    org$pandalanguage$pandac$ASTNode* astStatement3949;
    org$pandalanguage$pandac$IRNode* stmt3954;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp3969;
    panda$collections$Array* $tmp3887 = (panda$collections$Array*) malloc(40);
    $tmp3887->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3887->refCount.value = 1;
    panda$collections$Array$init($tmp3887);
    children3886 = $tmp3887;
    org$pandalanguage$pandac$Variable* $tmp3890 = (org$pandalanguage$pandac$Variable*) malloc(88);
    $tmp3890->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
    $tmp3890->refCount.value = 1;
    panda$core$String* $tmp3893 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3892, ((panda$core$Object*) wrap_panda$core$Int64(p_m->position.line)));
    panda$core$String* $tmp3895 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3893, &$s3894);
    panda$core$String* $tmp3896 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3895, ((panda$core$Object*) wrap_panda$core$Int64(p_m->position.column)));
    panda$core$String* $tmp3898 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3896, &$s3897);
    org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type($tmp3890, p_m->position, ((panda$core$Int64) { 10001 }), $tmp3898, p_value->type);
    valueVar3889 = $tmp3890;
    panda$collections$Array* $tmp3900 = (panda$collections$Array*) malloc(40);
    $tmp3900->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3900->refCount.value = 1;
    panda$collections$Array$init($tmp3900);
    declChildren3899 = $tmp3900;
    org$pandalanguage$pandac$IRNode* $tmp3902 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3902->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3902->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3902, ((panda$core$Int64) { 1016 }), p_value->position, valueVar3889->type, valueVar3889);
    panda$collections$Array$add$panda$collections$Array$T(declChildren3899, ((panda$core$Object*) $tmp3902));
    panda$collections$Array$add$panda$collections$Array$T(declChildren3899, ((panda$core$Object*) p_value));
    panda$collections$Array* $tmp3905 = (panda$collections$Array*) malloc(40);
    $tmp3905->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3905->refCount.value = 1;
    panda$collections$Array$init($tmp3905);
    varChildren3904 = $tmp3905;
    org$pandalanguage$pandac$IRNode* $tmp3907 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3907->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3907->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3907, ((panda$core$Int64) { 1021 }), ((org$pandalanguage$pandac$Symbol*) valueVar3889)->position, ((panda$collections$ListView*) declChildren3899));
    panda$collections$Array$add$panda$collections$Array$T(varChildren3904, ((panda$core$Object*) $tmp3907));
    org$pandalanguage$pandac$IRNode* $tmp3909 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3909->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3909->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3909, ((panda$core$Int64) { 1018 }), ((org$pandalanguage$pandac$Symbol*) valueVar3889)->position, ((panda$collections$ListView*) varChildren3904));
    panda$collections$Array$add$panda$collections$Array$T(children3886, ((panda$core$Object*) $tmp3909));
    panda$core$Int64 $tmp3912 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
    panda$core$SimpleRange$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp3911, ((panda$core$Int64) { 1 }), $tmp3912, ((panda$core$Bit) { false }));
    int64_t $tmp3914 = $tmp3911.min.value;
    panda$core$Int64 i3913 = { $tmp3914 };
    int64_t $tmp3916 = $tmp3911.max.value;
    bool $tmp3917 = $tmp3911.inclusive.value;
    bool $tmp3924 = 1 > 0;
    if ($tmp3924) goto $l3922; else goto $l3923;
    $l3922:;
    if ($tmp3917) goto $l3925; else goto $l3926;
    $l3925:;
    if ($tmp3914 <= $tmp3916) goto $l3918; else goto $l3920;
    $l3926:;
    if ($tmp3914 < $tmp3916) goto $l3918; else goto $l3920;
    $l3923:;
    if ($tmp3917) goto $l3927; else goto $l3928;
    $l3927:;
    if ($tmp3914 >= $tmp3916) goto $l3918; else goto $l3920;
    $l3928:;
    if ($tmp3914 > $tmp3916) goto $l3918; else goto $l3920;
    $l3918:;
    {
        panda$core$Object* $tmp3931 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, i3913);
        c3930 = ((org$pandalanguage$pandac$ASTNode*) $tmp3931);
        switch (c3930->kind.value) {
            case 124:
            {
                org$pandalanguage$pandac$IRNode* $tmp3933 = org$pandalanguage$pandac$Compiler$compileChainedIfWhen$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, valueVar3889, c3930);
                w3932 = $tmp3933;
                if (((panda$core$Bit) { w3932 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children3886, ((panda$core$Object*) w3932));
            }
            break;
            case 127:
            {
                panda$collections$Array* $tmp3935 = (panda$collections$Array*) malloc(40);
                $tmp3935->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp3935->refCount.value = 1;
                panda$collections$Array$init($tmp3935);
                statements3934 = $tmp3935;
                {
                    ITable* $tmp3938 = ((panda$collections$Iterable*) c3930->children)->$class->itable;
                    while ($tmp3938->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp3938 = $tmp3938->next;
                    }
                    $fn3940 $tmp3939 = $tmp3938->methods[0];
                    panda$collections$Iterator* $tmp3941 = $tmp3939(((panda$collections$Iterable*) c3930->children));
                    astStatement$Iter3937 = $tmp3941;
                    $l3942:;
                    ITable* $tmp3944 = astStatement$Iter3937->$class->itable;
                    while ($tmp3944->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp3944 = $tmp3944->next;
                    }
                    $fn3946 $tmp3945 = $tmp3944->methods[0];
                    panda$core$Bit $tmp3947 = $tmp3945(astStatement$Iter3937);
                    panda$core$Bit $tmp3948 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3947);
                    if (!$tmp3948.value) goto $l3943;
                    {
                        ITable* $tmp3950 = astStatement$Iter3937->$class->itable;
                        while ($tmp3950->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp3950 = $tmp3950->next;
                        }
                        $fn3952 $tmp3951 = $tmp3950->methods[1];
                        panda$core$Object* $tmp3953 = $tmp3951(astStatement$Iter3937);
                        astStatement3949 = ((org$pandalanguage$pandac$ASTNode*) $tmp3953);
                        org$pandalanguage$pandac$IRNode* $tmp3955 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, astStatement3949);
                        stmt3954 = $tmp3955;
                        if (((panda$core$Bit) { stmt3954 == NULL }).value) {
                        {
                            return NULL;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(statements3934, ((panda$core$Object*) stmt3954));
                    }
                    goto $l3942;
                    $l3943:;
                }
                org$pandalanguage$pandac$IRNode* $tmp3956 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp3956->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp3956->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3956, ((panda$core$Int64) { 1000 }), c3930->position, ((panda$collections$ListView*) statements3934));
                panda$collections$Array$add$panda$collections$Array$T(children3886, ((panda$core$Object*) $tmp3956));
            }
            break;
            default:
            {
                PANDA_ASSERT(((panda$core$Bit) { false }).value);
            }
        }
    }
    $l3921:;
    if ($tmp3924) goto $l3959; else goto $l3960;
    $l3959:;
    int64_t $tmp3961 = $tmp3916 - i3913.value;
    if ($tmp3917) goto $l3962; else goto $l3963;
    $l3962:;
    if ($tmp3961 >= 1) goto $l3958; else goto $l3920;
    $l3963:;
    if ($tmp3961 > 1) goto $l3958; else goto $l3920;
    $l3960:;
    int64_t $tmp3965 = i3913.value - $tmp3916;
    if ($tmp3917) goto $l3966; else goto $l3967;
    $l3966:;
    if ($tmp3965 >= -1) goto $l3958; else goto $l3920;
    $l3967:;
    if ($tmp3965 > -1) goto $l3958; else goto $l3920;
    $l3958:;
    i3913.value += 1;
    goto $l3918;
    $l3920:;
    panda$core$Int64 $tmp3970 = panda$collections$Array$get_count$R$panda$core$Int64(children3886);
    panda$core$Int64 $tmp3971 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp3970, ((panda$core$Int64) { 1 }));
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp3969, $tmp3971, ((panda$core$Int64) { 1 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { false }));
    int64_t $tmp3973 = $tmp3969.start.value;
    panda$core$Int64 i3972 = { $tmp3973 };
    int64_t $tmp3975 = $tmp3969.end.value;
    int64_t $tmp3976 = $tmp3969.step.value;
    bool $tmp3977 = $tmp3969.inclusive.value;
    bool $tmp3984 = $tmp3976 > 0;
    if ($tmp3984) goto $l3982; else goto $l3983;
    $l3982:;
    if ($tmp3977) goto $l3985; else goto $l3986;
    $l3985:;
    if ($tmp3973 <= $tmp3975) goto $l3978; else goto $l3980;
    $l3986:;
    if ($tmp3973 < $tmp3975) goto $l3978; else goto $l3980;
    $l3983:;
    if ($tmp3977) goto $l3987; else goto $l3988;
    $l3987:;
    if ($tmp3973 >= $tmp3975) goto $l3978; else goto $l3980;
    $l3988:;
    if ($tmp3973 > $tmp3975) goto $l3978; else goto $l3980;
    $l3978:;
    {
        panda$core$Int64 $tmp3990 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i3972, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp3991 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children3886, $tmp3990);
        panda$core$Bit $tmp3992 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp3991)->kind, ((panda$core$Int64) { 1012 }));
        PANDA_ASSERT($tmp3992.value);
        panda$core$Int64 $tmp3993 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i3972, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp3994 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children3886, $tmp3993);
        panda$core$Int64 $tmp3995 = panda$collections$Array$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp3994)->children);
        panda$core$Bit $tmp3996 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3995, ((panda$core$Int64) { 2 }));
        PANDA_ASSERT($tmp3996.value);
        panda$core$Int64 $tmp3997 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i3972, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp3998 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children3886, $tmp3997);
        panda$core$Object* $tmp3999 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children3886, i3972);
        panda$collections$Array$add$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp3998)->children, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp3999)));
        panda$core$Int64 $tmp4000 = panda$collections$Array$get_count$R$panda$core$Int64(children3886);
        panda$core$Int64 $tmp4001 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp4000, ((panda$core$Int64) { 1 }));
        panda$collections$Array$removeIndex$panda$core$Int64(children3886, $tmp4001);
    }
    $l3981:;
    if ($tmp3984) goto $l4003; else goto $l4004;
    $l4003:;
    int64_t $tmp4005 = $tmp3975 - i3972.value;
    if ($tmp3977) goto $l4006; else goto $l4007;
    $l4006:;
    if ($tmp4005 >= $tmp3976) goto $l4002; else goto $l3980;
    $l4007:;
    if ($tmp4005 > $tmp3976) goto $l4002; else goto $l3980;
    $l4004:;
    int64_t $tmp4009 = i3972.value - $tmp3975;
    if ($tmp3977) goto $l4010; else goto $l4011;
    $l4010:;
    if ($tmp4009 >= -$tmp3976) goto $l4002; else goto $l3980;
    $l4011:;
    if ($tmp4009 > -$tmp3976) goto $l4002; else goto $l3980;
    $l4002:;
    i3972.value += $tmp3976;
    goto $l3978;
    $l3980:;
    org$pandalanguage$pandac$IRNode* $tmp4013 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4013->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4013->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4013, ((panda$core$Int64) { 1000 }), p_m->position, ((panda$collections$ListView*) children3886));
    return $tmp4013;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileWhen$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type, org$pandalanguage$pandac$ASTNode* p_w) {
    panda$collections$Array* children4023;
    panda$collections$Iterator* expr$Iter4026;
    org$pandalanguage$pandac$ASTNode* expr4039;
    org$pandalanguage$pandac$IRNode* compiled4044;
    panda$collections$Array* statements4049;
    panda$core$SimpleRange$LTpanda$core$Int64$GT $tmp4052;
    org$pandalanguage$pandac$IRNode* statement4071;
    panda$core$Bit $tmp4015 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_w->kind, ((panda$core$Int64) { 124 }));
    PANDA_ASSERT($tmp4015.value);
    panda$core$Int64 $tmp4016 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Bit $tmp4017 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp4016, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4017.value);
    panda$core$Object* $tmp4018 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp4019 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp4018)->kind, ((panda$core$Int64) { 128 }));
    PANDA_ASSERT($tmp4019.value);
    panda$core$Object* $tmp4020 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Int64 $tmp4021 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$ASTNode*) $tmp4020)->children);
    panda$core$Bit $tmp4022 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp4021, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4022.value);
    panda$collections$Array* $tmp4024 = (panda$collections$Array*) malloc(40);
    $tmp4024->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4024->refCount.value = 1;
    panda$collections$Array$init($tmp4024);
    children4023 = $tmp4024;
    {
        panda$core$Object* $tmp4027 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
        ITable* $tmp4028 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp4027)->children)->$class->itable;
        while ($tmp4028->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4028 = $tmp4028->next;
        }
        $fn4030 $tmp4029 = $tmp4028->methods[0];
        panda$collections$Iterator* $tmp4031 = $tmp4029(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp4027)->children));
        expr$Iter4026 = $tmp4031;
        $l4032:;
        ITable* $tmp4034 = expr$Iter4026->$class->itable;
        while ($tmp4034->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4034 = $tmp4034->next;
        }
        $fn4036 $tmp4035 = $tmp4034->methods[0];
        panda$core$Bit $tmp4037 = $tmp4035(expr$Iter4026);
        panda$core$Bit $tmp4038 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4037);
        if (!$tmp4038.value) goto $l4033;
        {
            ITable* $tmp4040 = expr$Iter4026->$class->itable;
            while ($tmp4040->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4040 = $tmp4040->next;
            }
            $fn4042 $tmp4041 = $tmp4040->methods[1];
            panda$core$Object* $tmp4043 = $tmp4041(expr$Iter4026);
            expr4039 = ((org$pandalanguage$pandac$ASTNode*) $tmp4043);
            org$pandalanguage$pandac$IRNode* $tmp4045 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, expr4039);
            org$pandalanguage$pandac$IRNode* $tmp4046 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp4045, p_type);
            compiled4044 = $tmp4046;
            if (((panda$core$Bit) { compiled4044 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children4023, ((panda$core$Object*) compiled4044));
        }
        goto $l4032;
        $l4033:;
    }
    org$pandalanguage$pandac$SymbolTable* $tmp4047 = (org$pandalanguage$pandac$SymbolTable*) malloc(40);
    $tmp4047->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp4047->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp4047, self->symbolTable);
    self->symbolTable = $tmp4047;
    panda$collections$Array* $tmp4050 = (panda$collections$Array*) malloc(40);
    $tmp4050->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4050->refCount.value = 1;
    panda$collections$Array$init($tmp4050);
    statements4049 = $tmp4050;
    panda$core$Int64 $tmp4053 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$SimpleRange$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp4052, ((panda$core$Int64) { 1 }), $tmp4053, ((panda$core$Bit) { false }));
    int64_t $tmp4055 = $tmp4052.min.value;
    panda$core$Int64 i4054 = { $tmp4055 };
    int64_t $tmp4057 = $tmp4052.max.value;
    bool $tmp4058 = $tmp4052.inclusive.value;
    bool $tmp4065 = 1 > 0;
    if ($tmp4065) goto $l4063; else goto $l4064;
    $l4063:;
    if ($tmp4058) goto $l4066; else goto $l4067;
    $l4066:;
    if ($tmp4055 <= $tmp4057) goto $l4059; else goto $l4061;
    $l4067:;
    if ($tmp4055 < $tmp4057) goto $l4059; else goto $l4061;
    $l4064:;
    if ($tmp4058) goto $l4068; else goto $l4069;
    $l4068:;
    if ($tmp4055 >= $tmp4057) goto $l4059; else goto $l4061;
    $l4069:;
    if ($tmp4055 > $tmp4057) goto $l4059; else goto $l4061;
    $l4059:;
    {
        panda$core$Object* $tmp4072 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, i4054);
        org$pandalanguage$pandac$IRNode* $tmp4073 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4072));
        statement4071 = $tmp4073;
        if (((panda$core$Bit) { statement4071 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(statements4049, ((panda$core$Object*) statement4071));
    }
    $l4062:;
    if ($tmp4065) goto $l4075; else goto $l4076;
    $l4075:;
    int64_t $tmp4077 = $tmp4057 - i4054.value;
    if ($tmp4058) goto $l4078; else goto $l4079;
    $l4078:;
    if ($tmp4077 >= 1) goto $l4074; else goto $l4061;
    $l4079:;
    if ($tmp4077 > 1) goto $l4074; else goto $l4061;
    $l4076:;
    int64_t $tmp4081 = i4054.value - $tmp4057;
    if ($tmp4058) goto $l4082; else goto $l4083;
    $l4082:;
    if ($tmp4081 >= -1) goto $l4074; else goto $l4061;
    $l4083:;
    if ($tmp4081 > -1) goto $l4074; else goto $l4061;
    $l4074:;
    i4054.value += 1;
    goto $l4059;
    $l4061:;
    panda$core$Object* $tmp4085 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->symbolTable->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp4085);
    org$pandalanguage$pandac$IRNode* $tmp4086 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4086->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4086->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4086, ((panda$core$Int64) { 1000 }), p_w->position, ((panda$collections$ListView*) statements4049));
    panda$collections$Array$add$panda$collections$Array$T(children4023, ((panda$core$Object*) $tmp4086));
    org$pandalanguage$pandac$IRNode* $tmp4088 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4088->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4088->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4088, ((panda$core$Int64) { 1042 }), p_w->position, ((panda$collections$ListView*) children4023));
    return $tmp4088;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileOtherwise$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_o) {
    panda$collections$Array* children4091;
    panda$collections$Array* statements4096;
    panda$collections$Iterator* s$Iter4099;
    org$pandalanguage$pandac$ASTNode* s4111;
    org$pandalanguage$pandac$IRNode* statement4116;
    panda$core$Bit $tmp4090 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_o->kind, ((panda$core$Int64) { 127 }));
    PANDA_ASSERT($tmp4090.value);
    panda$collections$Array* $tmp4092 = (panda$collections$Array*) malloc(40);
    $tmp4092->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4092->refCount.value = 1;
    panda$collections$Array$init($tmp4092);
    children4091 = $tmp4092;
    org$pandalanguage$pandac$SymbolTable* $tmp4094 = (org$pandalanguage$pandac$SymbolTable*) malloc(40);
    $tmp4094->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp4094->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp4094, self->symbolTable);
    self->symbolTable = $tmp4094;
    panda$collections$Array* $tmp4097 = (panda$collections$Array*) malloc(40);
    $tmp4097->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4097->refCount.value = 1;
    panda$collections$Array$init($tmp4097);
    statements4096 = $tmp4097;
    {
        ITable* $tmp4100 = ((panda$collections$Iterable*) p_o->children)->$class->itable;
        while ($tmp4100->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4100 = $tmp4100->next;
        }
        $fn4102 $tmp4101 = $tmp4100->methods[0];
        panda$collections$Iterator* $tmp4103 = $tmp4101(((panda$collections$Iterable*) p_o->children));
        s$Iter4099 = $tmp4103;
        $l4104:;
        ITable* $tmp4106 = s$Iter4099->$class->itable;
        while ($tmp4106->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4106 = $tmp4106->next;
        }
        $fn4108 $tmp4107 = $tmp4106->methods[0];
        panda$core$Bit $tmp4109 = $tmp4107(s$Iter4099);
        panda$core$Bit $tmp4110 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4109);
        if (!$tmp4110.value) goto $l4105;
        {
            ITable* $tmp4112 = s$Iter4099->$class->itable;
            while ($tmp4112->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4112 = $tmp4112->next;
            }
            $fn4114 $tmp4113 = $tmp4112->methods[1];
            panda$core$Object* $tmp4115 = $tmp4113(s$Iter4099);
            s4111 = ((org$pandalanguage$pandac$ASTNode*) $tmp4115);
            org$pandalanguage$pandac$IRNode* $tmp4117 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, s4111);
            statement4116 = $tmp4117;
            if (((panda$core$Bit) { statement4116 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(statements4096, ((panda$core$Object*) statement4116));
        }
        goto $l4104;
        $l4105:;
    }
    panda$core$Object* $tmp4118 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->symbolTable->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp4118);
    org$pandalanguage$pandac$IRNode* $tmp4119 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4119->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4119->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4119, ((panda$core$Int64) { 1000 }), p_o->position, ((panda$collections$ListView*) statements4096));
    panda$collections$Array$add$panda$collections$Array$T(children4091, ((panda$core$Object*) $tmp4119));
    org$pandalanguage$pandac$IRNode* $tmp4121 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4121->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4121->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4121, ((panda$core$Int64) { 1043 }), p_o->position, ((panda$collections$ListView*) children4091));
    return $tmp4121;
}
panda$core$Bit org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    org$pandalanguage$pandac$FieldDecl* f4130;
    org$pandalanguage$pandac$Variable* v4139;
    switch (p_expr->kind.value) {
        case 1004:
        {
            return ((panda$core$Bit) { true });
        }
        break;
        case 1010:
        {
            panda$core$Bit $tmp4124 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_expr->type);
            bool $tmp4123 = $tmp4124.value;
            if (!$tmp4123) goto $l4125;
            panda$core$Object* $tmp4126 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp4127 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp4126)->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp4128 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp4127));
            $tmp4123 = $tmp4128.value;
            $l4125:;
            panda$core$Bit $tmp4129 = { $tmp4123 };
            return $tmp4129;
        }
        break;
        case 1026:
        {
            f4130 = ((org$pandalanguage$pandac$FieldDecl*) p_expr->payload);
            PANDA_ASSERT(f4130->resolved.value);
            panda$core$Bit $tmp4133 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(f4130->fieldKind, ((panda$core$Int64) { 10002 }));
            bool $tmp4132 = $tmp4133.value;
            if (!$tmp4132) goto $l4134;
            $tmp4132 = ((panda$core$Bit) { f4130->value != NULL }).value;
            $l4134:;
            panda$core$Bit $tmp4135 = { $tmp4132 };
            bool $tmp4131 = $tmp4135.value;
            if (!$tmp4131) goto $l4136;
            panda$core$Bit $tmp4137 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, f4130->value);
            $tmp4131 = $tmp4137.value;
            $l4136:;
            panda$core$Bit $tmp4138 = { $tmp4131 };
            return $tmp4138;
        }
        break;
        case 1016:
        {
            v4139 = ((org$pandalanguage$pandac$Variable*) p_expr->payload);
            panda$core$Bit $tmp4141 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(v4139->varKind, ((panda$core$Int64) { 10001 }));
            bool $tmp4140 = $tmp4141.value;
            if ($tmp4140) goto $l4142;
            panda$core$Bit $tmp4145 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(v4139->varKind, ((panda$core$Int64) { 10002 }));
            bool $tmp4144 = $tmp4145.value;
            if (!$tmp4144) goto $l4146;
            $tmp4144 = ((panda$core$Bit) { v4139->initialValue != NULL }).value;
            $l4146:;
            panda$core$Bit $tmp4147 = { $tmp4144 };
            bool $tmp4143 = $tmp4147.value;
            if (!$tmp4143) goto $l4148;
            panda$core$Bit $tmp4149 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, v4139->initialValue);
            $tmp4143 = $tmp4149.value;
            $l4148:;
            panda$core$Bit $tmp4150 = { $tmp4143 };
            $tmp4140 = $tmp4150.value;
            $l4142:;
            panda$core$Bit $tmp4151 = { $tmp4140 };
            return $tmp4151;
        }
        break;
        default:
        {
            return ((panda$core$Bit) { false });
        }
    }
}
panda$core$UInt64 org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    org$pandalanguage$pandac$FieldDecl* f4156;
    org$pandalanguage$pandac$Variable* v4158;
    panda$core$Bit $tmp4152 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, p_expr);
    PANDA_ASSERT($tmp4152.value);
    switch (p_expr->kind.value) {
        case 1004:
        {
            return ((panda$core$UInt64$wrapper*) p_expr->payload)->value;
        }
        break;
        case 1010:
        {
            panda$core$Object* $tmp4153 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp4154 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp4153)->children, ((panda$core$Int64) { 0 }));
            panda$core$UInt64 $tmp4155 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self, ((org$pandalanguage$pandac$IRNode*) $tmp4154));
            return $tmp4155;
        }
        break;
        case 1026:
        {
            f4156 = ((org$pandalanguage$pandac$FieldDecl*) p_expr->payload);
            panda$core$UInt64 $tmp4157 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self, f4156->value);
            return $tmp4157;
        }
        break;
        case 1016:
        {
            v4158 = ((org$pandalanguage$pandac$Variable*) p_expr->payload);
            panda$core$UInt64 $tmp4159 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self, v4158->initialValue);
            return $tmp4159;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileMatch$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_m) {
    org$pandalanguage$pandac$IRNode* value4163;
    panda$collections$Array* children4170;
    panda$collections$Iterator* rawWhen$Iter4173;
    panda$core$SimpleRange$LTpanda$core$Int64$Q$GT $tmp4174;
    org$pandalanguage$pandac$ASTNode* rawWhen4187;
    org$pandalanguage$pandac$IRNode* o4193;
    org$pandalanguage$pandac$IRNode* w4195;
    panda$core$Bit $tmp4160 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->kind, ((panda$core$Int64) { 125 }));
    PANDA_ASSERT($tmp4160.value);
    panda$core$Int64 $tmp4161 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
    panda$core$Bit $tmp4162 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp4161, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4162.value);
    panda$core$Object* $tmp4164 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp4165 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4164));
    org$pandalanguage$pandac$IRNode* $tmp4166 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp4165);
    value4163 = $tmp4166;
    if (((panda$core$Bit) { value4163 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp4167 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(value4163->type);
    panda$core$Bit $tmp4168 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4167);
    if ($tmp4168.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp4169 = org$pandalanguage$pandac$Compiler$compileChainedIfMatch$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_m, value4163);
        return $tmp4169;
    }
    }
    panda$collections$Array* $tmp4171 = (panda$collections$Array*) malloc(40);
    $tmp4171->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4171->refCount.value = 1;
    panda$collections$Array$init($tmp4171);
    children4170 = $tmp4171;
    panda$collections$Array$add$panda$collections$Array$T(children4170, ((panda$core$Object*) value4163));
    {
        panda$core$SimpleRange$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp4174, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
        panda$collections$ImmutableArray* $tmp4175 = panda$collections$ImmutableArray$$IDX$panda$core$SimpleRange$LTpanda$core$Int64$Q$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(p_m->children, $tmp4174);
        ITable* $tmp4176 = ((panda$collections$Iterable*) $tmp4175)->$class->itable;
        while ($tmp4176->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4176 = $tmp4176->next;
        }
        $fn4178 $tmp4177 = $tmp4176->methods[0];
        panda$collections$Iterator* $tmp4179 = $tmp4177(((panda$collections$Iterable*) $tmp4175));
        rawWhen$Iter4173 = $tmp4179;
        $l4180:;
        ITable* $tmp4182 = rawWhen$Iter4173->$class->itable;
        while ($tmp4182->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4182 = $tmp4182->next;
        }
        $fn4184 $tmp4183 = $tmp4182->methods[0];
        panda$core$Bit $tmp4185 = $tmp4183(rawWhen$Iter4173);
        panda$core$Bit $tmp4186 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4185);
        if (!$tmp4186.value) goto $l4181;
        {
            ITable* $tmp4188 = rawWhen$Iter4173->$class->itable;
            while ($tmp4188->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4188 = $tmp4188->next;
            }
            $fn4190 $tmp4189 = $tmp4188->methods[1];
            panda$core$Object* $tmp4191 = $tmp4189(rawWhen$Iter4173);
            rawWhen4187 = ((org$pandalanguage$pandac$ASTNode*) $tmp4191);
            panda$core$Bit $tmp4192 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(rawWhen4187->kind, ((panda$core$Int64) { 127 }));
            if ($tmp4192.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp4194 = org$pandalanguage$pandac$Compiler$compileOtherwise$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, rawWhen4187);
                o4193 = $tmp4194;
                if (((panda$core$Bit) { o4193 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children4170, ((panda$core$Object*) o4193));
                goto $l4180;
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp4196 = org$pandalanguage$pandac$Compiler$compileWhen$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, value4163->type, rawWhen4187);
            w4195 = $tmp4196;
            if (((panda$core$Bit) { w4195 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$Object* $tmp4197 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(w4195->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp4198 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp4197));
            panda$core$Bit $tmp4199 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4198);
            if ($tmp4199.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp4200 = org$pandalanguage$pandac$Compiler$compileChainedIfMatch$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_m, value4163);
                return $tmp4200;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children4170, ((panda$core$Object*) w4195));
        }
        goto $l4180;
        $l4181:;
    }
    org$pandalanguage$pandac$IRNode* $tmp4201 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4201->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4201->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4201, ((panda$core$Int64) { 1042 }), p_m->position, ((panda$collections$ListView*) children4170));
    return $tmp4201;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$IRNode* result4216;
    switch (p_s->kind.value) {
        case 123:
        {
            org$pandalanguage$pandac$IRNode* $tmp4203 = org$pandalanguage$pandac$Compiler$compileAssert$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4203;
        }
        break;
        case 103:
        {
            org$pandalanguage$pandac$IRNode* $tmp4204 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            org$pandalanguage$pandac$IRNode* $tmp4205 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp4204);
            return $tmp4205;
        }
        break;
        case 126:
        {
            org$pandalanguage$pandac$IRNode* $tmp4206 = org$pandalanguage$pandac$Compiler$compileBlock$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4206;
        }
        break;
        case 118:
        {
            org$pandalanguage$pandac$IRNode* $tmp4207 = org$pandalanguage$pandac$Compiler$compileIf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4207;
        }
        break;
        case 119:
        {
            org$pandalanguage$pandac$IRNode* $tmp4208 = org$pandalanguage$pandac$Compiler$compileFor$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4208;
        }
        break;
        case 121:
        {
            org$pandalanguage$pandac$IRNode* $tmp4209 = org$pandalanguage$pandac$Compiler$compileWhile$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4209;
        }
        break;
        case 120:
        {
            org$pandalanguage$pandac$IRNode* $tmp4210 = org$pandalanguage$pandac$Compiler$compileDo$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4210;
        }
        break;
        case 122:
        {
            org$pandalanguage$pandac$IRNode* $tmp4211 = org$pandalanguage$pandac$Compiler$compileLoop$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4211;
        }
        break;
        case 125:
        {
            org$pandalanguage$pandac$IRNode* $tmp4212 = org$pandalanguage$pandac$Compiler$compileMatch$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4212;
        }
        break;
        case 134:
        {
            org$pandalanguage$pandac$IRNode* $tmp4213 = org$pandalanguage$pandac$Compiler$compileBreak$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4213;
        }
        break;
        case 135:
        {
            org$pandalanguage$pandac$IRNode* $tmp4214 = org$pandalanguage$pandac$Compiler$compileContinue$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4214;
        }
        break;
        case 136:
        {
            org$pandalanguage$pandac$IRNode* $tmp4215 = org$pandalanguage$pandac$Compiler$compileReturn$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4215;
        }
        break;
        case 107:
        {
            org$pandalanguage$pandac$IRNode* $tmp4217 = org$pandalanguage$pandac$Compiler$compileCall$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            org$pandalanguage$pandac$IRNode* $tmp4218 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp4217);
            result4216 = $tmp4218;
            if (((panda$core$Bit) { result4216 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp4219 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self, result4216);
                result4216 = $tmp4219;
            }
            }
            return result4216;
        }
        break;
        case 130:
        case 131:
        case 132:
        case 133:
        {
            org$pandalanguage$pandac$IRNode* $tmp4220 = org$pandalanguage$pandac$Compiler$compileVar$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4220;
        }
        break;
    }
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBody$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$SymbolTable* old4221;
    org$pandalanguage$pandac$SymbolTable* symbols4223;
    panda$collections$Iterator* p$Iter4226;
    org$pandalanguage$pandac$MethodDecl$Parameter* p4238;
    panda$collections$Array* fieldInitializers4245;
    panda$collections$Iterator* f$Iter4249;
    org$pandalanguage$pandac$FieldDecl* f4262;
    panda$collections$Array* children4272;
    org$pandalanguage$pandac$IRNode* fieldRef4279;
    org$pandalanguage$pandac$IRNode* compiled4284;
    panda$collections$Array* children4288;
    if (((panda$core$Bit) { p_m->compiledBody != NULL }).value) {
    {
        return p_m->compiledBody;
    }
    }
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_m->owner));
    old4221 = self->symbolTable;
    org$pandalanguage$pandac$SymbolTable* $tmp4222 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, p_m->owner);
    self->symbolTable = $tmp4222;
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentMethod, ((panda$core$Object*) p_m));
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
    PANDA_ASSERT(((panda$core$Bit) { p_m->body != NULL }).value);
    org$pandalanguage$pandac$SymbolTable* $tmp4224 = (org$pandalanguage$pandac$SymbolTable*) malloc(40);
    $tmp4224->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp4224->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp4224, self->symbolTable);
    symbols4223 = $tmp4224;
    {
        ITable* $tmp4227 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp4227->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4227 = $tmp4227->next;
        }
        $fn4229 $tmp4228 = $tmp4227->methods[0];
        panda$collections$Iterator* $tmp4230 = $tmp4228(((panda$collections$Iterable*) p_m->parameters));
        p$Iter4226 = $tmp4230;
        $l4231:;
        ITable* $tmp4233 = p$Iter4226->$class->itable;
        while ($tmp4233->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4233 = $tmp4233->next;
        }
        $fn4235 $tmp4234 = $tmp4233->methods[0];
        panda$core$Bit $tmp4236 = $tmp4234(p$Iter4226);
        panda$core$Bit $tmp4237 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4236);
        if (!$tmp4237.value) goto $l4232;
        {
            ITable* $tmp4239 = p$Iter4226->$class->itable;
            while ($tmp4239->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4239 = $tmp4239->next;
            }
            $fn4241 $tmp4240 = $tmp4239->methods[1];
            panda$core$Object* $tmp4242 = $tmp4240(p$Iter4226);
            p4238 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp4242);
            org$pandalanguage$pandac$Variable* $tmp4243 = (org$pandalanguage$pandac$Variable*) malloc(88);
            $tmp4243->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
            $tmp4243->refCount.value = 1;
            org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Int64($tmp4243, ((org$pandalanguage$pandac$Symbol*) p_m)->position, ((panda$core$Int64) { 10001 }), p4238->name, p4238->type, ((panda$core$Int64) { 1820 }));
            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(symbols4223, ((org$pandalanguage$pandac$Symbol*) $tmp4243));
        }
        goto $l4231;
        $l4232:;
    }
    self->symbolTable = symbols4223;
    panda$collections$Array* $tmp4246 = (panda$collections$Array*) malloc(40);
    $tmp4246->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4246->refCount.value = 1;
    panda$collections$Array$init($tmp4246);
    fieldInitializers4245 = $tmp4246;
    panda$core$Bit $tmp4248 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 59 }));
    if ($tmp4248.value) {
    {
        {
            panda$core$Object* $tmp4250 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
            ITable* $tmp4251 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ClassDecl*) $tmp4250)->fields)->$class->itable;
            while ($tmp4251->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp4251 = $tmp4251->next;
            }
            $fn4253 $tmp4252 = $tmp4251->methods[0];
            panda$collections$Iterator* $tmp4254 = $tmp4252(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ClassDecl*) $tmp4250)->fields));
            f$Iter4249 = $tmp4254;
            $l4255:;
            ITable* $tmp4257 = f$Iter4249->$class->itable;
            while ($tmp4257->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4257 = $tmp4257->next;
            }
            $fn4259 $tmp4258 = $tmp4257->methods[0];
            panda$core$Bit $tmp4260 = $tmp4258(f$Iter4249);
            panda$core$Bit $tmp4261 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4260);
            if (!$tmp4261.value) goto $l4256;
            {
                ITable* $tmp4263 = f$Iter4249->$class->itable;
                while ($tmp4263->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp4263 = $tmp4263->next;
                }
                $fn4265 $tmp4264 = $tmp4263->methods[1];
                panda$core$Object* $tmp4266 = $tmp4264(f$Iter4249);
                f4262 = ((org$pandalanguage$pandac$FieldDecl*) $tmp4266);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self, f4262);
                panda$core$Bit $tmp4268 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(f4262->annotations);
                panda$core$Bit $tmp4269 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4268);
                bool $tmp4267 = $tmp4269.value;
                if (!$tmp4267) goto $l4270;
                $tmp4267 = ((panda$core$Bit) { f4262->value != NULL }).value;
                $l4270:;
                panda$core$Bit $tmp4271 = { $tmp4267 };
                if ($tmp4271.value) {
                {
                    panda$collections$Array* $tmp4273 = (panda$collections$Array*) malloc(40);
                    $tmp4273->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp4273->refCount.value = 1;
                    panda$collections$Array$init($tmp4273);
                    children4272 = $tmp4273;
                    org$pandalanguage$pandac$IRNode* $tmp4275 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp4275->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp4275->refCount.value = 1;
                    panda$core$Object* $tmp4277 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
                    org$pandalanguage$pandac$Type* $tmp4278 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp4277));
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp4275, ((panda$core$Int64) { 1025 }), ((org$pandalanguage$pandac$Symbol*) p_m)->position, $tmp4278);
                    panda$collections$Array$add$panda$collections$Array$T(children4272, ((panda$core$Object*) $tmp4275));
                    org$pandalanguage$pandac$IRNode* $tmp4280 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp4280->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp4280->refCount.value = 1;
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4280, ((panda$core$Int64) { 1026 }), ((org$pandalanguage$pandac$Symbol*) p_m)->position, f4262->type, ((panda$core$Object*) f4262), ((panda$collections$ListView*) children4272));
                    fieldRef4279 = $tmp4280;
                    panda$collections$Array$clear(children4272);
                    panda$collections$Array$add$panda$collections$Array$T(children4272, ((panda$core$Object*) fieldRef4279));
                    panda$collections$Array$add$panda$collections$Array$T(children4272, ((panda$core$Object*) f4262->value));
                    org$pandalanguage$pandac$IRNode* $tmp4282 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp4282->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp4282->refCount.value = 1;
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4282, ((panda$core$Int64) { 1023 }), ((org$pandalanguage$pandac$Symbol*) f4262)->position, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 73 }))), ((panda$collections$ListView*) children4272));
                    panda$collections$Array$add$panda$collections$Array$T(fieldInitializers4245, ((panda$core$Object*) $tmp4282));
                }
                }
            }
            goto $l4255;
            $l4256:;
        }
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp4285 = org$pandalanguage$pandac$Compiler$compileBlock$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_m->body);
    compiled4284 = $tmp4285;
    if (((panda$core$Bit) { compiled4284 != NULL }).value) {
    {
        panda$core$Int64 $tmp4286 = panda$collections$Array$get_count$R$panda$core$Int64(fieldInitializers4245);
        panda$core$Bit $tmp4287 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp4286, ((panda$core$Int64) { 0 }));
        if ($tmp4287.value) {
        {
            panda$collections$Array* $tmp4289 = (panda$collections$Array*) malloc(40);
            $tmp4289->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp4289->refCount.value = 1;
            panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp4289, ((panda$collections$ListView*) fieldInitializers4245));
            children4288 = $tmp4289;
            panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(children4288, ((panda$collections$CollectionView*) compiled4284->children));
            org$pandalanguage$pandac$IRNode* $tmp4291 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp4291->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp4291->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4291, ((panda$core$Int64) { 1000 }), p_m->body->position, ((panda$collections$ListView*) children4288));
            compiled4284 = $tmp4291;
        }
        }
    }
    }
    PANDA_ASSERT(((panda$core$Bit) { ((panda$core$Object*) self->symbolTable) == ((panda$core$Object*) symbols4223) }).value);
    self->symbolTable = old4221;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentMethod);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    panda$core$Bit $tmp4293 = org$pandalanguage$pandac$Annotations$isInline$R$panda$core$Bit(p_m->annotations);
    if ($tmp4293.value) {
    {
        p_m->compiledBody = compiled4284;
    }
    }
    return compiled4284;
}
void org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$IRNode* compiled4294;
    if (((panda$core$Bit) { p_m->body != NULL }).value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp4295 = org$pandalanguage$pandac$Compiler$compileBody$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$IRNode$Q(self, p_m);
        compiled4294 = $tmp4295;
        if (((panda$core$Bit) { compiled4294 != NULL }).value) {
        {
            ITable* $tmp4296 = self->codeGenerator->$class->itable;
            while ($tmp4296->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
                $tmp4296 = $tmp4296->next;
            }
            $fn4298 $tmp4297 = $tmp4296->methods[3];
            $tmp4297(self->codeGenerator, p_m, compiled4294);
        }
        }
    }
    }
    else {
    {
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
        ITable* $tmp4299 = self->codeGenerator->$class->itable;
        while ($tmp4299->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
            $tmp4299 = $tmp4299->next;
        }
        $fn4301 $tmp4300 = $tmp4299->methods[2];
        $tmp4300(self->codeGenerator, p_m);
    }
    }
}
void org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Iterator* inner$Iter4302;
    org$pandalanguage$pandac$ClassDecl* inner4314;
    p_cl->external = ((panda$core$Bit) { false });
    {
        ITable* $tmp4303 = ((panda$collections$Iterable*) p_cl->classes)->$class->itable;
        while ($tmp4303->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4303 = $tmp4303->next;
        }
        $fn4305 $tmp4304 = $tmp4303->methods[0];
        panda$collections$Iterator* $tmp4306 = $tmp4304(((panda$collections$Iterable*) p_cl->classes));
        inner$Iter4302 = $tmp4306;
        $l4307:;
        ITable* $tmp4309 = inner$Iter4302->$class->itable;
        while ($tmp4309->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4309 = $tmp4309->next;
        }
        $fn4311 $tmp4310 = $tmp4309->methods[0];
        panda$core$Bit $tmp4312 = $tmp4310(inner$Iter4302);
        panda$core$Bit $tmp4313 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4312);
        if (!$tmp4313.value) goto $l4308;
        {
            ITable* $tmp4315 = inner$Iter4302->$class->itable;
            while ($tmp4315->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4315 = $tmp4315->next;
            }
            $fn4317 $tmp4316 = $tmp4315->methods[1];
            panda$core$Object* $tmp4318 = $tmp4316(inner$Iter4302);
            inner4314 = ((org$pandalanguage$pandac$ClassDecl*) $tmp4318);
            org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl(self, inner4314);
        }
        goto $l4307;
        $l4308:;
    }
}
void org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$SymbolTable* old4326;
    panda$collections$Iterator* m$Iter4331;
    org$pandalanguage$pandac$MethodDecl* m4343;
    org$pandalanguage$pandac$ClassDecl* next4353;
    PANDA_ASSERT(((panda$core$Bit) { self->compiling == NULL }).value);
    self->compiling = p_cl;
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_cl));
    org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl(self, p_cl);
    panda$core$Bit $tmp4319 = org$pandalanguage$pandac$Annotations$isSpecialize$R$panda$core$Bit(p_cl->annotations);
    if ($tmp4319.value) {
    {
        ITable* $tmp4320 = self->codeGenerator->$class->itable;
        while ($tmp4320->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
            $tmp4320 = $tmp4320->next;
        }
        $fn4322 $tmp4321 = $tmp4320->methods[1];
        $tmp4321(self->codeGenerator, p_cl);
        ITable* $tmp4323 = self->codeGenerator->$class->itable;
        while ($tmp4323->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
            $tmp4323 = $tmp4323->next;
        }
        $fn4325 $tmp4324 = $tmp4323->methods[4];
        $tmp4324(self->codeGenerator, p_cl);
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
        return;
    }
    }
    old4326 = self->symbolTable;
    org$pandalanguage$pandac$SymbolTable* $tmp4327 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, p_cl);
    self->symbolTable = $tmp4327;
    ITable* $tmp4328 = self->codeGenerator->$class->itable;
    while ($tmp4328->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
        $tmp4328 = $tmp4328->next;
    }
    $fn4330 $tmp4329 = $tmp4328->methods[1];
    $tmp4329(self->codeGenerator, p_cl);
    {
        ITable* $tmp4332 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
        while ($tmp4332->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4332 = $tmp4332->next;
        }
        $fn4334 $tmp4333 = $tmp4332->methods[0];
        panda$collections$Iterator* $tmp4335 = $tmp4333(((panda$collections$Iterable*) p_cl->methods));
        m$Iter4331 = $tmp4335;
        $l4336:;
        ITable* $tmp4338 = m$Iter4331->$class->itable;
        while ($tmp4338->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4338 = $tmp4338->next;
        }
        $fn4340 $tmp4339 = $tmp4338->methods[0];
        panda$core$Bit $tmp4341 = $tmp4339(m$Iter4331);
        panda$core$Bit $tmp4342 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4341);
        if (!$tmp4342.value) goto $l4337;
        {
            ITable* $tmp4344 = m$Iter4331->$class->itable;
            while ($tmp4344->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4344 = $tmp4344->next;
            }
            $fn4346 $tmp4345 = $tmp4344->methods[1];
            panda$core$Object* $tmp4347 = $tmp4345(m$Iter4331);
            m4343 = ((org$pandalanguage$pandac$MethodDecl*) $tmp4347);
            org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$MethodDecl(self, m4343);
        }
        goto $l4336;
        $l4337:;
    }
    ITable* $tmp4348 = self->codeGenerator->$class->itable;
    while ($tmp4348->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
        $tmp4348 = $tmp4348->next;
    }
    $fn4350 $tmp4349 = $tmp4348->methods[4];
    $tmp4349(self->codeGenerator, p_cl);
    self->symbolTable = old4326;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    self->compiling = NULL;
    panda$core$Int64 $tmp4351 = panda$collections$Array$get_count$R$panda$core$Int64(self->compilationQueue);
    panda$core$Bit $tmp4352 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp4351, ((panda$core$Int64) { 0 }));
    if ($tmp4352.value) {
    {
        panda$core$Object* $tmp4354 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->compilationQueue, ((panda$core$Int64) { 0 }));
        next4353 = ((org$pandalanguage$pandac$ClassDecl*) $tmp4354);
        panda$collections$Array$removeIndex$panda$core$Int64(self->compilationQueue, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$ClassDecl(self, next4353);
    }
    }
    panda$core$Int64 $tmp4355 = panda$collections$Array$get_count$R$panda$core$Int64(self->compilationQueue);
    panda$core$Bit $tmp4356 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4355, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp4356.value);
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Compiler* self, panda$io$File* p_file) {
    panda$collections$ListView* result4357;
    org$pandalanguage$pandac$ASTNode* parsed4361;
    panda$collections$Iterator* cl$Iter4365;
    org$pandalanguage$pandac$ClassDecl* cl4377;
    panda$core$Object* $tmp4358 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->scans, ((panda$collections$Key*) p_file));
    result4357 = ((panda$collections$ListView*) $tmp4358);
    if (((panda$core$Bit) { result4357 == NULL }).value) {
    {
        panda$core$String* $tmp4359 = panda$io$File$readFully$R$panda$core$String(p_file);
        (($fn4360) self->parser->$class->vtable[2])(self->parser, p_file, $tmp4359);
        org$pandalanguage$pandac$ASTNode* $tmp4363 = (($fn4362) self->parser->$class->vtable[68])(self->parser);
        parsed4361 = $tmp4363;
        if (((panda$core$Bit) { parsed4361 != NULL }).value) {
        {
            panda$collections$ListView* $tmp4364 = org$pandalanguage$pandac$Scanner$scan$panda$io$File$org$pandalanguage$pandac$ASTNode$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(self->scanner, p_file, parsed4361);
            result4357 = $tmp4364;
            {
                ITable* $tmp4366 = ((panda$collections$Iterable*) result4357)->$class->itable;
                while ($tmp4366->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp4366 = $tmp4366->next;
                }
                $fn4368 $tmp4367 = $tmp4366->methods[0];
                panda$collections$Iterator* $tmp4369 = $tmp4367(((panda$collections$Iterable*) result4357));
                cl$Iter4365 = $tmp4369;
                $l4370:;
                ITable* $tmp4372 = cl$Iter4365->$class->itable;
                while ($tmp4372->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp4372 = $tmp4372->next;
                }
                $fn4374 $tmp4373 = $tmp4372->methods[0];
                panda$core$Bit $tmp4375 = $tmp4373(cl$Iter4365);
                panda$core$Bit $tmp4376 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4375);
                if (!$tmp4376.value) goto $l4371;
                {
                    ITable* $tmp4378 = cl$Iter4365->$class->itable;
                    while ($tmp4378->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp4378 = $tmp4378->next;
                    }
                    $fn4380 $tmp4379 = $tmp4378->methods[1];
                    panda$core$Object* $tmp4381 = $tmp4379(cl$Iter4365);
                    cl4377 = ((org$pandalanguage$pandac$ClassDecl*) $tmp4381);
                    panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classes, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) cl4377)->name), ((panda$core$Object*) cl4377));
                }
                goto $l4370;
                $l4371:;
            }
        }
        }
        else {
        {
            panda$collections$Array* $tmp4382 = (panda$collections$Array*) malloc(40);
            $tmp4382->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp4382->refCount.value = 1;
            panda$collections$Array$init($tmp4382);
            result4357 = ((panda$collections$ListView*) $tmp4382);
        }
        }
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->scans, ((panda$collections$Key*) p_file), ((panda$core$Object*) result4357));
    }
    }
    return result4357;
}
void org$pandalanguage$pandac$Compiler$compile$panda$io$File(org$pandalanguage$pandac$Compiler* self, panda$io$File* p_file) {
    panda$collections$ListView* classes4384;
    panda$collections$Iterator* cl$Iter4386;
    org$pandalanguage$pandac$ClassDecl* cl4398;
    panda$collections$ListView* $tmp4385 = org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(self, p_file);
    classes4384 = $tmp4385;
    {
        ITable* $tmp4387 = ((panda$collections$Iterable*) classes4384)->$class->itable;
        while ($tmp4387->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4387 = $tmp4387->next;
        }
        $fn4389 $tmp4388 = $tmp4387->methods[0];
        panda$collections$Iterator* $tmp4390 = $tmp4388(((panda$collections$Iterable*) classes4384));
        cl$Iter4386 = $tmp4390;
        $l4391:;
        ITable* $tmp4393 = cl$Iter4386->$class->itable;
        while ($tmp4393->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4393 = $tmp4393->next;
        }
        $fn4395 $tmp4394 = $tmp4393->methods[0];
        panda$core$Bit $tmp4396 = $tmp4394(cl$Iter4386);
        panda$core$Bit $tmp4397 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4396);
        if (!$tmp4397.value) goto $l4392;
        {
            ITable* $tmp4399 = cl$Iter4386->$class->itable;
            while ($tmp4399->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4399 = $tmp4399->next;
            }
            $fn4401 $tmp4400 = $tmp4399->methods[1];
            panda$core$Object* $tmp4402 = $tmp4400(cl$Iter4386);
            cl4398 = ((org$pandalanguage$pandac$ClassDecl*) $tmp4402);
            org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$ClassDecl(self, cl4398);
        }
        goto $l4391;
        $l4392:;
    }
}
void org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, panda$core$String* p_msg) {
    panda$core$Object* $tmp4403 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
    org$pandalanguage$pandac$Compiler$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$ClassDecl*) $tmp4403)->source, p_position, p_msg);
}
void org$pandalanguage$pandac$Compiler$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$Compiler* self, panda$io$File* p_file, org$pandalanguage$pandac$Position p_pos, panda$core$String* p_msg) {
    if (self->reportErrors.value) {
    {
        panda$core$Int64 $tmp4404 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->errorCount, ((panda$core$Int64) { 1 }));
        self->errorCount = $tmp4404;
        panda$core$String* $tmp4406 = panda$io$File$name$R$panda$core$String(p_file);
        panda$core$String* $tmp4407 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4405, $tmp4406);
        panda$core$String* $tmp4409 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4407, &$s4408);
        panda$core$String* $tmp4410 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp4409, ((panda$core$Object*) wrap_org$pandalanguage$pandac$Position(p_pos)));
        panda$core$String* $tmp4412 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4410, &$s4411);
        panda$core$String* $tmp4413 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4412, p_msg);
        panda$core$String* $tmp4415 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4413, &$s4414);
        panda$io$Console$printLine$panda$core$Object(((panda$core$Object*) $tmp4415));
    }
    }
}
void org$pandalanguage$pandac$Compiler$finish(org$pandalanguage$pandac$Compiler* self) {
    ITable* $tmp4416 = self->codeGenerator->$class->itable;
    while ($tmp4416->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
        $tmp4416 = $tmp4416->next;
    }
    $fn4418 $tmp4417 = $tmp4416->methods[5];
    $tmp4417(self->codeGenerator);
}

