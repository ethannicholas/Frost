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
#include "panda/collections/Iterator.h"
#include "panda/collections/Iterable.h"
#include "org/pandalanguage/pandac/Annotations.h"
#include "org/pandalanguage/pandac/MethodDecl.h"
#include "org/pandalanguage/pandac/MethodDecl/Parameter.h"
#include "org/pandalanguage/pandac/FieldDecl.h"
#include "org/pandalanguage/pandac/IRNode.h"
#include "org/pandalanguage/pandac/ASTNode.h"
#include "panda/io/Console.h"
#include "panda/io/File.h"
#include "panda/collections/Set.h"
#include "org/pandalanguage/pandac/MethodRef.h"
#include "org/pandalanguage/pandac/Methods.h"
#include "org/pandalanguage/pandac/Variable.h"
#include "panda/core/Range.LTpanda/core/Int64.Q.GT.h"
#include "org/pandalanguage/pandac/Compiler/CompileTargetResult.h"


struct { panda$core$Class* cl; ITable* next; void* methods[1]; } org$pandalanguage$pandac$Compiler$_org$pandalanguage$pandac$ErrorReporter = { (panda$core$Class*) &org$pandalanguage$pandac$ErrorReporter$class, NULL, { org$pandalanguage$pandac$Compiler$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String} };

org$pandalanguage$pandac$Compiler$class_type org$pandalanguage$pandac$Compiler$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &org$pandalanguage$pandac$Compiler$_org$pandalanguage$pandac$ErrorReporter, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, org$pandalanguage$pandac$Compiler$addAlias$panda$core$String, org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q, org$pandalanguage$pandac$Compiler$checkGenericParameters$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$Type$Q, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT, org$pandalanguage$pandac$Compiler$getClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q, org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Position$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q, org$pandalanguage$pandac$Compiler$specialize$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q, org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT, org$pandalanguage$pandac$Compiler$signatureMatch$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q, org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q, org$pandalanguage$pandac$Compiler$interfaceMethods$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT, org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable, org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT, org$pandalanguage$pandac$Compiler$addInheritedMethods$org$pandalanguage$pandac$SymbolTable$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT, org$pandalanguage$pandac$Compiler$getMethodReference$org$pandalanguage$pandac$SymbolTable$org$pandalanguage$pandac$IRNode$Q$panda$core$String$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$Compiler$symbolRef$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q, org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64, org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64, org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q, org$pandalanguage$pandac$Compiler$doCoerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$Compiler$callCost$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q, org$pandalanguage$pandac$Compiler$matchMethods$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q, org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$declaredTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$foldInts$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$Compiler$compileIndexedAssignment$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT, org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$IRNode$Q$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT, org$pandalanguage$pandac$Compiler$compilePrefix$panda$core$Int64$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compilePrefix$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileCall$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileIdentifier$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileRange$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileSelf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileSuper$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileNull$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileBlock$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileIf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileRangeFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileIteratorFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileFor$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileWhile$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileDo$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileLoop$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q, org$pandalanguage$pandac$Compiler$compileDeclaration$org$pandalanguage$pandac$ASTNode$panda$core$Int64$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileBreak$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileContinue$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileReturn$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileAssert$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileVar$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileWhenTest$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileChainedIfWhen$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileChainedIfMatch$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileWhen$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileOtherwise$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64, org$pandalanguage$pandac$Compiler$compileMatch$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileBody$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT, org$pandalanguage$pandac$Compiler$compile$panda$io$File, org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String, org$pandalanguage$pandac$Compiler$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String, org$pandalanguage$pandac$Compiler$finish} };

typedef void (*$fn21)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$Compiler*);
typedef panda$core$Object* (*$fn121)(panda$collections$MapView*, panda$core$Object*);
typedef panda$core$Int64 (*$fn158)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn165)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn208)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn212)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn222)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn230)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn237)(panda$collections$ListView*, panda$core$Int64);
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
typedef panda$core$Object* (*$fn760)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn783)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn789)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn795)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn803)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn809)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn815)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn826)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn832)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn838)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn861)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn867)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn873)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn922)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn928)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn934)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn947)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn953)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn959)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn974)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn980)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn986)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1001)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1007)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1013)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1027)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1033)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1039)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1052)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1058)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1064)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1119)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1125)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1131)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1138)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1144)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1150)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1170)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1176)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1182)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1267)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn1332)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1338)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1344)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1370)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1376)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1382)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1499)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1505)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1511)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1639)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1645)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1651)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1698)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1704)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1710)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn1800)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn1827)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Int64 (*$fn1854)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn1871)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1877)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1883)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn1895)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn1918)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn1992)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2015)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn2091)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn2110)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2116)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2122)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2153)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2159)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2165)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2202)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2208)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2214)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2237)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2243)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2249)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2639)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2645)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2651)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2783)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2789)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2795)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn3021)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn3037)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3043)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3049)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3145)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3151)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3157)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3340)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3346)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3352)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3482)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3488)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3494)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3520)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3526)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3532)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3636)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3642)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3648)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3819)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3825)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3831)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3909)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3915)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3921)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3982)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3988)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3994)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4058)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4064)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4070)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4109)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4115)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4121)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4133)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4139)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4145)(panda$collections$Iterator*);
typedef void (*$fn4178)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$MethodDecl*, org$pandalanguage$pandac$IRNode*);
typedef void (*$fn4181)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$collections$Iterator* (*$fn4185)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4191)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4197)(panda$collections$Iterator*);
typedef void (*$fn4202)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn4205)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn4210)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$collections$Iterator* (*$fn4214)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4220)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4226)(panda$collections$Iterator*);
typedef void (*$fn4230)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn4240)(org$pandalanguage$pandac$parser$Parser*, panda$io$File*, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn4242)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$collections$Iterator* (*$fn4248)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4254)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4260)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4269)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4275)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4281)(panda$collections$Iterator*);
typedef void (*$fn4298)(org$pandalanguage$pandac$CodeGenerator*);

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
static panda$core$String $s88 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x53\x74\x72\x69\x6E\x67", 17, 1 };
static panda$core$String $s89 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x53\x79\x73\x74\x65\x6D", 17, 1 };
static panda$core$String $s90 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x55\x49\x6E\x74\x38", 16, 1 };
static panda$core$String $s91 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x55\x49\x6E\x74\x31\x36", 17, 1 };
static panda$core$String $s92 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x55\x49\x6E\x74\x33\x32", 17, 1 };
static panda$core$String $s93 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x55\x49\x6E\x74\x36\x34", 17, 1 };
static panda$core$String $s94 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x56\x61\x6C\x75\x65", 16, 1 };
static panda$core$String $s95 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x6D\x61\x74\x68\x2E\x52\x61\x6E\x64\x6F\x6D", 17, 1 };
static panda$core$String $s96 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x6D\x61\x74\x68\x2E\x58\x6F\x72\x53\x68\x69\x66\x74\x31\x32\x38\x50\x6C\x75\x73", 26, 1 };
static panda$core$String $s97 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x69\x6F\x2E\x43\x6F\x6E\x73\x6F\x6C\x65", 16, 1 };
static panda$core$String $s98 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x69\x6F\x2E\x46\x69\x6C\x65", 13, 1 };
static panda$core$String $s99 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x69\x6F\x2E\x49\x6E\x64\x65\x6E\x74\x65\x64\x4F\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6D", 29, 1 };
static panda$core$String $s100 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x69\x6F\x2E\x49\x6E\x70\x75\x74\x53\x74\x72\x65\x61\x6D", 20, 1 };
static panda$core$String $s101 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x69\x6F\x2E\x4C\x69\x6E\x65\x4E\x75\x6D\x62\x65\x72\x49\x6E\x70\x75\x74\x53\x74\x72\x65\x61\x6D", 30, 1 };
static panda$core$String $s102 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x69\x6F\x2E\x4D\x65\x6D\x6F\x72\x79\x49\x6E\x70\x75\x74\x53\x74\x72\x65\x61\x6D", 26, 1 };
static panda$core$String $s103 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x69\x6F\x2E\x4D\x65\x6D\x6F\x72\x79\x4F\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6D", 27, 1 };
static panda$core$String $s104 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x69\x6F\x2E\x4F\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6D", 21, 1 };
static panda$core$String $s105 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x69\x6F\x2E\x50\x75\x73\x68\x62\x61\x63\x6B\x49\x6E\x70\x75\x74\x53\x74\x72\x65\x61\x6D", 28, 1 };
static panda$core$String $s106 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, 1 };
static panda$core$String $s110 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s130 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s138 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s170 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s171 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, 1 };
static panda$core$String $s172 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s174 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x65\x78\x70\x65\x63\x74\x65\x64\x20", 11, 1 };
static panda$core$String $s177 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x67\x65\x6E\x65\x72\x69\x63\x20\x70\x61\x72\x61\x6D\x65\x74\x65\x72", 18, 1 };
static panda$core$String $s180 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x62\x75\x74\x20", 6, 1 };
static panda$core$String $s182 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x6F\x75\x6E\x64\x20", 6, 1 };
static panda$core$String $s184 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s216 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x65\x6E\x65\x72\x69\x63\x20\x70\x61\x72\x61\x6D\x65\x74\x65\x72\x20\x27", 19, 1 };
static panda$core$String $s218 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s225 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20", 10, 1 };
static panda$core$String $s227 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6F\x66\x20\x74\x79\x70\x65\x20\x27", 9, 1 };
static panda$core$String $s233 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 14, 1 };
static panda$core$String $s240 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s269 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x6B\x6E\x6F\x77\x6E\x20\x74\x79\x70\x65\x20\x27", 14, 1 };
static panda$core$String $s271 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s284 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3F", 1, 1 };
static panda$core$String $s298 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 1 };
static panda$core$String $s300 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
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
static panda$core$String $s1212 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x73\x75\x70\x65\x72\x27\x20\x63\x61\x6E\x20\x6F\x6E\x6C\x79\x20\x62\x65\x20\x75\x73\x65\x64\x20\x61\x73\x20\x70\x61\x72\x74\x20\x6F\x66\x20\x61\x20\x6D\x65\x74\x68\x6F\x64\x20\x63\x61\x6C\x6C", 49, 1 };
static panda$core$String $s1262 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s1301 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 1 };
static panda$core$String $s1673 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 1 };
static panda$core$String $s1732 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27", 10, 1 };
static panda$core$String $s1734 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 14, 1 };
static panda$core$String $s1737 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s1777 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6C\x75\x65\x20\x6F\x66\x20\x74\x79\x70\x65\x20\x27", 15, 1 };
static panda$core$String $s1779 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x70\x6F\x73\x73\x69\x62\x6C\x79\x20\x62\x65\x20\x61\x6E\x20\x69\x6E\x73\x74\x61\x6E\x63\x65\x20\x6F\x66\x20", 36, 1 };
static panda$core$String $s1781 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s1783 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s1901 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1902 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, 1 };
static panda$core$String $s1903 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1906 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x65\x78\x70\x65\x63\x74\x65\x64\x20", 10, 1 };
static panda$core$String $s1910 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x61\x72\x67\x75\x6D\x65\x6E\x74", 9, 1 };
static panda$core$String $s1913 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s1915 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x74\x20\x72\x65\x63\x65\x69\x76\x65\x64\x20", 13, 1 };
static panda$core$String $s1921 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1945 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x64\x69\x72\x65\x63\x74\x6C\x79\x20\x63\x61\x6C\x6C\x20\x27\x69\x6E\x69\x74\x27\x20\x6F\x75\x74\x73\x69\x64\x65\x20\x6F\x66\x20\x61\x6E\x20\x69\x6E\x69\x74\x20\x6D\x65\x74\x68\x6F\x64", 53, 1 };
static panda$core$String $s1955 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x69\x6E\x69\x74\x27\x20\x6D\x61\x79\x20\x6F\x6E\x6C\x79\x20\x62\x65\x20\x63\x61\x6C\x6C\x65\x64\x20\x6F\x6E\x20\x27\x73\x65\x6C\x66\x27\x20\x6F\x72\x20\x27\x73\x75\x70\x65\x72\x27", 46, 1 };
static panda$core$String $s1970 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x63\x61\x6C\x6C\x20\x69\x6E\x73\x74\x61\x6E\x63\x65\x20", 21, 1 };
static panda$core$String $s1973 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x66\x72\x6F\x6D\x20\x61\x20\x40\x63\x6C\x61\x73\x73\x20\x63\x6F\x6E\x74\x65\x78\x74", 22, 1 };
static panda$core$String $s1984 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x63\x61\x6C\x6C\x20\x63\x6C\x61\x73\x73\x20", 18, 1 };
static panda$core$String $s1987 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x6F\x6E\x20\x61\x6E\x20\x69\x6E\x73\x74\x61\x6E\x63\x65", 15, 1 };
static panda$core$String $s2033 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, 1 };
static panda$core$String $s2052 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6C\x61\x73\x73\x20\x27", 7, 1 };
static panda$core$String $s2054 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x64\x6F\x65\x73\x20\x6E\x6F\x74\x20\x68\x61\x76\x65\x20\x61\x20\x6D\x65\x6D\x62\x65\x72\x20\x6E\x61\x6D\x65\x64\x20\x27", 32, 1 };
static panda$core$String $s2057 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2064 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2066 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s2069 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x69\x73\x20\x6E\x6F\x74\x20\x61\x20\x6D\x65\x74\x68\x6F\x64", 17, 1 };
static panda$core$String $s2096 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x6F\x20\x6D\x61\x74\x63\x68\x20\x66\x6F\x72\x20\x63\x61\x6C\x6C\x20\x74\x6F\x20\x27", 22, 1 };
static panda$core$String $s2098 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s2100 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2102 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s2106 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2124 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2125 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x27", 2, 1 };
static panda$core$String $s2126 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x77\x69\x74\x68\x20\x72\x65\x74\x75\x72\x6E\x20\x74\x79\x70\x65\x20\x27", 19, 1 };
static panda$core$String $s2128 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2176 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x69\x74", 4, 1 };
static panda$core$String $s2186 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6C\x75\x65\x20\x6F\x66\x20\x74\x79\x70\x65\x20\x27", 15, 1 };
static panda$core$String $s2188 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x69\x73\x20\x6E\x6F\x74\x20\x61\x20\x6D\x65\x74\x68\x6F\x64", 17, 1 };
static panda$core$String $s2196 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s2198 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2216 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2219 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x3E\x28", 4, 1 };
static panda$core$String $s2220 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x26\x3E\x28", 5, 1 };
static panda$core$String $s2223 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s2233 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s2251 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2254 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x3E\x28", 4, 1 };
static panda$core$String $s2255 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x26\x3E\x28", 5, 1 };
static panda$core$String $s2258 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s2272 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2B", 1, 1 };
static panda$core$String $s2273 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D", 1, 1 };
static panda$core$String $s2274 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s2275 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, 1 };
static panda$core$String $s2276 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F\x2F", 2, 1 };
static panda$core$String $s2277 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 1 };
static panda$core$String $s2278 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5E", 1, 1 };
static panda$core$String $s2279 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3D", 1, 1 };
static panda$core$String $s2280 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x3D", 2, 1 };
static panda$core$String $s2281 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };
static panda$core$String $s2282 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 1 };
static panda$core$String $s2283 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E\x3D", 2, 1 };
static panda$core$String $s2284 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x3D", 2, 1 };
static panda$core$String $s2285 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1, 1 };
static panda$core$String $s2286 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C\x7C", 2, 1 };
static panda$core$String $s2287 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, 1 };
static panda$core$String $s2288 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26\x26", 2, 1 };
static panda$core$String $s2289 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7E", 1, 1 };
static panda$core$String $s2290 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7E\x7E", 2, 1 };
static panda$core$String $s2291 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21", 1, 1 };
static panda$core$String $s2292 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x21", 2, 1 };
static panda$core$String $s2293 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x3C", 2, 1 };
static panda$core$String $s2294 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E\x3E", 2, 1 };
static panda$core$String $s2295 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 1 };
static panda$core$String $s2296 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A\x3D", 2, 1 };
static panda$core$String $s2297 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3D\x3D", 2, 1 };
static panda$core$String $s2298 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x3D\x3D", 3, 1 };
static panda$core$String $s2409 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x76\x61\x6C\x69\x64\x20\x6E\x75\x6D\x65\x72\x69\x63\x20\x6F\x70\x65\x72\x61\x74\x69\x6F\x6E", 25, 1 };
static panda$core$String $s2421 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D\x3A\x3D", 4, 1 };
static panda$core$String $s2469 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6F\x6E\x76\x65\x72\x74", 7, 1 };
static panda$core$String $s2473 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D\x3A\x3D", 4, 1 };
static panda$core$String $s2533 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2536 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x6F\x70\x65\x72\x61\x74\x65\x20\x6F\x6E\x20\x27", 21, 1 };
static panda$core$String $s2539 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20", 3, 1 };
static panda$core$String $s2541 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2543 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2550 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2553 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x6F\x70\x65\x72\x61\x74\x65\x20\x6F\x6E\x20\x27", 21, 1 };
static panda$core$String $s2556 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20", 3, 1 };
static panda$core$String $s2558 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2560 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2582 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x61\x73\x73\x69\x67\x6E\x20\x74\x6F\x20\x74\x68\x69\x73\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6F\x6E", 32, 1 };
static panda$core$String $s2594 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x61\x73\x73\x69\x67\x6E\x20\x74\x6F\x20\x74\x68\x69\x73\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6F\x6E", 32, 1 };
static panda$core$String $s2611 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6F\x6E\x76\x65\x72\x74", 7, 1 };
static panda$core$String $s2624 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 1 };
static panda$core$String $s2693 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2696 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x6F\x70\x65\x72\x61\x74\x65\x20\x6F\x6E\x20\x27", 21, 1 };
static panda$core$String $s2699 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20\x27", 4, 1 };
static panda$core$String $s2702 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2816 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x6D\x65\x74\x68\x6F\x64\x3E", 8, 1 };
static panda$core$String $s2832 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6E\x75\x6D\x62\x65\x72\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 30, 1 };
static panda$core$String $s2834 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2842 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6E\x75\x6D\x62\x65\x72\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 30, 1 };
static panda$core$String $s2844 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2918 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2920 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s2923 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2941 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6C\x61\x73\x73\x20\x27", 7, 1 };
static panda$core$String $s2943 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x64\x6F\x65\x73\x20\x6E\x6F\x74\x20\x68\x61\x76\x65\x20\x61\x20\x6D\x65\x6D\x62\x65\x72\x20\x6E\x61\x6D\x65\x64\x20", 31, 1 };
static panda$core$String $s2945 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2947 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s3006 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x75\x6E\x72\x65\x73\x6F\x6C\x76\x65\x64\x20\x72\x61\x6E\x67\x65\x3E", 18, 1 };
static panda$core$String $s3015 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x72\x65\x66\x65\x72\x65\x6E\x63\x65\x20\x27\x73\x65\x6C\x66\x27\x20\x66\x72\x6F\x6D\x20\x61\x20\x40\x63\x6C\x61\x73\x73\x20\x6D\x65\x74\x68\x6F\x64", 44, 1 };
static panda$core$String $s3031 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 1 };
static panda$core$String $s3033 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3055 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3057 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s3060 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3064 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s3065 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };
static panda$core$String $s3075 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x72\x65\x66\x65\x72\x65\x6E\x63\x65\x20\x27\x73\x75\x70\x65\x72\x27\x20\x66\x72\x6F\x6D\x20\x61\x20\x40\x63\x6C\x61\x73\x73\x20\x6D\x65\x74\x68\x6F\x64", 45, 1 };
static panda$core$String $s3094 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6C\x75\x65\x20\x6F\x66\x20\x74\x79\x70\x65\x20\x27", 15, 1 };
static panda$core$String $s3096 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x70\x6F\x73\x73\x69\x62\x6C\x79\x20\x62\x65\x20\x61\x6E\x20", 24, 1 };
static panda$core$String $s3098 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x73\x74\x61\x6E\x63\x65\x20\x6F\x66\x20\x27", 13, 1 };
static panda$core$String $s3100 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s3120 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x64\x6F\x65\x73\x20\x6E\x6F\x74\x20\x72\x65\x74\x75\x72\x6E\x20\x61\x20\x76\x61\x6C\x75\x65", 24, 1 };
static panda$core$String $s3242 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3245 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 1 };
static panda$core$String $s3249 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };
static panda$core$String $s3254 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x49\x74\x65\x72", 5, 1 };
static panda$core$String $s3277 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x65\x74\x5F\x64\x6F\x6E\x65", 8, 1 };
static panda$core$String $s3282 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21", 1, 1 };
static panda$core$String $s3294 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x65\x78\x74", 4, 1 };
static panda$core$String $s3376 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x74\x65\x72\x61\x74\x6F\x72", 8, 1 };
static panda$core$String $s3384 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6E\x20\x49\x74\x65\x72\x61\x62\x6C\x65\x20\x6F\x72\x20\x49\x74\x65\x72\x61\x74\x6F\x72\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 45, 1 };
static panda$core$String $s3386 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s3444 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x63\x6C\x61\x72\x61\x74\x69\x6F\x6E\x20\x68\x61\x73\x20\x6E\x65\x69\x74\x68\x65\x72\x20\x61\x20\x74\x79\x70\x65\x20\x6E\x6F\x72\x20\x61\x20\x76\x61\x6C\x75\x65", 42, 1 };
static panda$core$String $s3501 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x62\x72\x65\x61\x6B\x20", 7, 1 };
static panda$core$String $s3503 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20\x69\x6E\x73\x69\x64\x65\x20\x61\x20\x6C\x6F\x6F\x70\x20\x6C\x61\x62\x65\x6C\x6C\x65\x64\x20", 33, 1 };
static panda$core$String $s3505 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s3507 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A\x27", 2, 1 };
static panda$core$String $s3512 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x62\x72\x65\x61\x6B\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20\x69\x6E\x73\x69\x64\x65\x20\x61\x20\x6C\x6F\x6F\x70", 29, 1 };
static panda$core$String $s3539 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x63\x6F\x6E\x74\x69\x6E\x75\x65\x20", 10, 1 };
static panda$core$String $s3541 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20\x69\x6E\x73\x69\x64\x65\x20\x61\x20\x6C\x6F\x6F\x70\x20\x6C\x61\x62\x65\x6C\x6C\x65\x64\x20", 33, 1 };
static panda$core$String $s3543 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s3545 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A\x27", 2, 1 };
static panda$core$String $s3550 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x63\x6F\x6E\x74\x69\x6E\x75\x65\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20\x69\x6E\x73\x69\x64\x65\x20\x61\x20\x6C\x6F\x6F\x70", 32, 1 };
static panda$core$String $s3559 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x72\x65\x74\x75\x72\x6E\x20\x61\x20\x76\x61\x6C\x75\x65\x20\x66\x72\x6F\x6D\x20\x61\x20\x6D\x65\x74\x68\x6F\x64\x20\x77\x69\x74\x68\x20\x6E\x6F\x20\x72\x65\x74\x75\x72\x6E\x20\x74\x79\x70\x65", 55, 1 };
static panda$core$String $s3575 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x72\x65\x74\x75\x72\x6E\x20\x76\x61\x6C\x75\x65", 23, 1 };
static panda$core$String $s3595 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6C\x75\x65", 5, 1 };
static panda$core$String $s3662 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3D", 1, 1 };
static panda$core$String $s3704 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1, 1 };
static panda$core$String $s3770 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x6D\x61\x74\x63\x68\x24", 7, 1 };
static panda$core$String $s3772 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5F", 1, 1 };
static panda$core$String $s3775 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4285 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4288 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A", 1, 1 };
static panda$core$String $s4291 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A\x20\x65\x72\x72\x6F\x72\x3A\x20", 9, 1 };
static panda$core$String $s4294 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };

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
}
void org$pandalanguage$pandac$Compiler$addAlias$panda$core$String(org$pandalanguage$pandac$Compiler* self, panda$core$String* p_name) {
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp109;
    org$pandalanguage$pandac$Position $tmp114;
    org$pandalanguage$pandac$Alias* $tmp107 = (org$pandalanguage$pandac$Alias*) malloc(64);
    $tmp107->$class = (panda$core$Class*) &org$pandalanguage$pandac$Alias$class;
    $tmp107->refCount.value = 1;
    panda$core$String$Index$nullable $tmp111 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(p_name, &$s110);
    panda$core$String$Index $tmp112 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(p_name, ((panda$core$String$Index) $tmp111.value));
    panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp109, ((panda$core$String$Index$nullable) { $tmp112, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    panda$core$String* $tmp113 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(p_name, $tmp109);
    org$pandalanguage$pandac$Position$init(&$tmp114);
    org$pandalanguage$pandac$Alias$init$panda$core$String$panda$core$String$org$pandalanguage$pandac$Position($tmp107, $tmp113, p_name, $tmp114);
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->root, ((org$pandalanguage$pandac$Symbol*) $tmp107));
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Compiler* self, panda$core$String* p_name) {
    panda$core$String* alias117;
    org$pandalanguage$pandac$ClassDecl* result124;
    panda$core$String$Index$nullable idx128;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp133;
    org$pandalanguage$pandac$Symbol* rootAlias148;
    panda$core$Int64 $tmp115 = panda$collections$Stack$get_count$R$panda$core$Int64(self->currentClass);
    panda$core$Bit $tmp116 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp115, ((panda$core$Int64) { 0 }));
    if ($tmp116.value) {
    {
        panda$core$Object* $tmp118 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
        ITable* $tmp119 = ((org$pandalanguage$pandac$ClassDecl*) $tmp118)->aliases->$class->itable;
        while ($tmp119->$class != (panda$core$Class*) &panda$collections$MapView$class) {
            $tmp119 = $tmp119->next;
        }
        $fn121 $tmp120 = $tmp119->methods[1];
        panda$core$Object* $tmp122 = $tmp120(((org$pandalanguage$pandac$ClassDecl*) $tmp118)->aliases, ((panda$core$Object*) p_name));
        alias117 = ((panda$core$String*) $tmp122);
        if (((panda$core$Bit) { alias117 != NULL }).value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp123 = org$pandalanguage$pandac$Compiler$getClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, alias117);
            return $tmp123;
        }
        }
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp125 = org$pandalanguage$pandac$Compiler$getClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_name);
    result124 = $tmp125;
    panda$core$Int64 $tmp126 = panda$collections$Stack$get_count$R$panda$core$Int64(self->currentClass);
    panda$core$Bit $tmp127 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp126, ((panda$core$Int64) { 0 }));
    if ($tmp127.value) {
    {
        if (((panda$core$Bit) { result124 == NULL }).value) {
        {
            panda$core$Object* $tmp129 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
            panda$core$String$Index$nullable $tmp131 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$ClassDecl*) $tmp129))->name, &$s130);
            idx128 = $tmp131;
            if (((panda$core$Bit) { idx128.nonnull }).value) {
            {
                panda$core$Object* $tmp132 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
                panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp133, ((panda$core$String$Index$nullable) { .nonnull = false }), idx128, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { true }));
                panda$core$String* $tmp134 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$ClassDecl*) $tmp132))->name, $tmp133);
                panda$core$String* $tmp135 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp134, p_name);
                org$pandalanguage$pandac$ClassDecl* $tmp136 = org$pandalanguage$pandac$Compiler$getClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, $tmp135);
                result124 = $tmp136;
            }
            }
        }
        }
        if (((panda$core$Bit) { result124 == NULL }).value) {
        {
            panda$core$Object* $tmp137 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
            panda$core$String* $tmp139 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$ClassDecl*) $tmp137))->name, &$s138);
            panda$core$String* $tmp140 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp139, p_name);
            org$pandalanguage$pandac$ClassDecl* $tmp141 = org$pandalanguage$pandac$Compiler$getClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, $tmp140);
            result124 = $tmp141;
        }
        }
        bool $tmp142 = ((panda$core$Bit) { result124 == NULL }).value;
        if (!$tmp142) goto $l143;
        panda$core$Object* $tmp144 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
        $tmp142 = ((panda$core$Bit) { ((org$pandalanguage$pandac$ClassDecl*) $tmp144)->owner != NULL }).value;
        $l143:;
        panda$core$Bit $tmp145 = { $tmp142 };
        if ($tmp145.value) {
        {
            panda$core$Object* $tmp146 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
            panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl*) $tmp146)->owner));
            org$pandalanguage$pandac$ClassDecl* $tmp147 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_name);
            result124 = $tmp147;
            panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
        }
        }
    }
    }
    if (((panda$core$Bit) { result124 == NULL }).value) {
    {
        org$pandalanguage$pandac$Symbol* $tmp149 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(self->root, p_name);
        rootAlias148 = $tmp149;
        bool $tmp150 = ((panda$core$Bit) { rootAlias148 != NULL }).value;
        if (!$tmp150) goto $l151;
        panda$core$Bit $tmp152 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(rootAlias148->kind, ((panda$core$Int64) { 200 }));
        $tmp150 = $tmp152.value;
        $l151:;
        panda$core$Bit $tmp153 = { $tmp150 };
        if ($tmp153.value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp154 = org$pandalanguage$pandac$Compiler$getClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Alias*) rootAlias148)->fullName);
            result124 = $tmp154;
        }
        }
    }
    }
    return result124;
}
panda$core$Bit org$pandalanguage$pandac$Compiler$checkGenericParameters$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ClassDecl* p_cl, org$pandalanguage$pandac$Type* p_type) {
    panda$core$Int64 expectedCount155;
    panda$collections$ListView* foundTypes160;
    panda$core$Int64 foundCount162;
    panda$core$String* s168;
    panda$core$Range$LTpanda$core$Int64$GT $tmp187;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
    PANDA_ASSERT(p_type->resolved.value);
    ITable* $tmp156 = ((panda$collections$CollectionView*) p_cl->parameters)->$class->itable;
    while ($tmp156->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp156 = $tmp156->next;
    }
    $fn158 $tmp157 = $tmp156->methods[0];
    panda$core$Int64 $tmp159 = $tmp157(((panda$collections$CollectionView*) p_cl->parameters));
    expectedCount155 = $tmp159;
    panda$collections$ListView* $tmp161 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p_type);
    foundTypes160 = $tmp161;
    ITable* $tmp163 = ((panda$collections$CollectionView*) foundTypes160)->$class->itable;
    while ($tmp163->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp163 = $tmp163->next;
    }
    $fn165 $tmp164 = $tmp163->methods[0];
    panda$core$Int64 $tmp166 = $tmp164(((panda$collections$CollectionView*) foundTypes160));
    foundCount162 = $tmp166;
    panda$core$Bit $tmp167 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(expectedCount155, foundCount162);
    if ($tmp167.value) {
    {
        panda$core$Bit $tmp169 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(expectedCount155, ((panda$core$Int64) { 1 }));
        if ($tmp169.value) {
        {
            s168 = &$s170;
        }
        }
        else {
        {
            s168 = &$s171;
        }
        }
        panda$core$String* $tmp173 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s172, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp175 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp173, &$s174);
        panda$core$String* $tmp176 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp175, ((panda$core$Object*) wrap_panda$core$Int64(expectedCount155)));
        panda$core$String* $tmp178 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp176, &$s177);
        panda$core$String* $tmp179 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp178, s168);
        panda$core$String* $tmp181 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp179, &$s180);
        panda$core$String* $tmp183 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s182, ((panda$core$Object*) wrap_panda$core$Int64(foundCount162)));
        panda$core$String* $tmp185 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp183, &$s184);
        panda$core$String* $tmp186 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp181, $tmp185);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp186);
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp187, ((panda$core$Int64) { 0 }), expectedCount155, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp189 = $tmp187.start.value;
    panda$core$Int64 i188 = { $tmp189 };
    int64_t $tmp191 = $tmp187.end.value;
    int64_t $tmp192 = $tmp187.step.value;
    bool $tmp193 = $tmp187.inclusive.value;
    bool $tmp200 = $tmp192 > 0;
    if ($tmp200) goto $l198; else goto $l199;
    $l198:;
    if ($tmp193) goto $l201; else goto $l202;
    $l201:;
    if ($tmp189 <= $tmp191) goto $l194; else goto $l196;
    $l202:;
    if ($tmp189 < $tmp191) goto $l194; else goto $l196;
    $l199:;
    if ($tmp193) goto $l203; else goto $l204;
    $l203:;
    if ($tmp189 >= $tmp191) goto $l194; else goto $l196;
    $l204:;
    if ($tmp189 > $tmp191) goto $l194; else goto $l196;
    $l194:;
    {
        ITable* $tmp206 = foundTypes160->$class->itable;
        while ($tmp206->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp206 = $tmp206->next;
        }
        $fn208 $tmp207 = $tmp206->methods[0];
        panda$core$Object* $tmp209 = $tmp207(foundTypes160, i188);
        ITable* $tmp210 = ((panda$collections$ListView*) p_cl->parameters)->$class->itable;
        while ($tmp210->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp210 = $tmp210->next;
        }
        $fn212 $tmp211 = $tmp210->methods[0];
        panda$core$Object* $tmp213 = $tmp211(((panda$collections$ListView*) p_cl->parameters), i188);
        org$pandalanguage$pandac$Type* $tmp214 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_type, ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp213)->bound);
        panda$core$Int64$nullable $tmp215 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$Type*) $tmp209), $tmp214);
        if (((panda$core$Bit) { !$tmp215.nonnull }).value) {
        {
            panda$core$String* $tmp217 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s216, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
            panda$core$String* $tmp219 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp217, &$s218);
            ITable* $tmp220 = ((panda$collections$ListView*) p_cl->parameters)->$class->itable;
            while ($tmp220->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp220 = $tmp220->next;
            }
            $fn222 $tmp221 = $tmp220->methods[0];
            panda$core$Object* $tmp223 = $tmp221(((panda$collections$ListView*) p_cl->parameters), i188);
            panda$core$String* $tmp224 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp219, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp223))->name);
            panda$core$String* $tmp226 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp224, &$s225);
            ITable* $tmp228 = ((panda$collections$ListView*) p_cl->parameters)->$class->itable;
            while ($tmp228->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp228 = $tmp228->next;
            }
            $fn230 $tmp229 = $tmp228->methods[0];
            panda$core$Object* $tmp231 = $tmp229(((panda$collections$ListView*) p_cl->parameters), i188);
            panda$core$String* $tmp232 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s227, ((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp231)->bound));
            panda$core$String* $tmp234 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp232, &$s233);
            ITable* $tmp235 = foundTypes160->$class->itable;
            while ($tmp235->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp235 = $tmp235->next;
            }
            $fn237 $tmp236 = $tmp235->methods[0];
            panda$core$Object* $tmp238 = $tmp236(foundTypes160, i188);
            panda$core$String* $tmp239 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp234, ((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp238)));
            panda$core$String* $tmp241 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp239, &$s240);
            panda$core$String* $tmp242 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp226, $tmp241);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp242);
            return ((panda$core$Bit) { false });
        }
        }
    }
    $l197:;
    if ($tmp200) goto $l244; else goto $l245;
    $l244:;
    int64_t $tmp246 = $tmp191 - i188.value;
    if ($tmp193) goto $l247; else goto $l248;
    $l247:;
    if ($tmp246 >= $tmp192) goto $l243; else goto $l196;
    $l248:;
    if ($tmp246 > $tmp192) goto $l243; else goto $l196;
    $l245:;
    int64_t $tmp250 = i188.value - $tmp191;
    if ($tmp193) goto $l251; else goto $l252;
    $l251:;
    if ($tmp250 >= -$tmp192) goto $l243; else goto $l196;
    $l252:;
    if ($tmp250 > -$tmp192) goto $l243; else goto $l196;
    $l243:;
    i188.value += $tmp192;
    goto $l194;
    $l196:;
    return ((panda$core$Bit) { true });
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$Type$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type, panda$core$Bit p_checkParameters) {
    org$pandalanguage$pandac$ClassDecl* resolved254;
    org$pandalanguage$pandac$Type* result256;
    org$pandalanguage$pandac$Symbol* s260;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* gp264;
    panda$collections$Array* subtypes275;
    org$pandalanguage$pandac$Type* sub278;
    panda$collections$Array* subtypes288;
    org$pandalanguage$pandac$Type* base291;
    panda$core$MutableString* name294;
    panda$core$String* separator299;
    panda$core$Range$LTpanda$core$Int64$GT $tmp301;
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
            org$pandalanguage$pandac$ClassDecl* $tmp255 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Symbol*) p_type)->name);
            resolved254 = $tmp255;
            if (((panda$core$Bit) { resolved254 != NULL }).value) {
            {
                org$pandalanguage$pandac$Type* $tmp257 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(resolved254);
                result256 = $tmp257;
                if (p_checkParameters.value) {
                {
                    panda$core$Bit $tmp258 = org$pandalanguage$pandac$Compiler$checkGenericParameters$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, ((org$pandalanguage$pandac$Symbol*) p_type)->position, resolved254, result256);
                    panda$core$Bit $tmp259 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp258);
                    if ($tmp259.value) {
                    {
                        return NULL;
                    }
                    }
                }
                }
                return result256;
            }
            }
            org$pandalanguage$pandac$Symbol* $tmp261 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(self->symbolTable, ((org$pandalanguage$pandac$Symbol*) p_type)->name);
            s260 = $tmp261;
            if (((panda$core$Bit) { s260 != NULL }).value) {
            {
                switch (s260->kind.value) {
                    case 200:
                    {
                        org$pandalanguage$pandac$Type* $tmp262 = (org$pandalanguage$pandac$Type*) malloc(96);
                        $tmp262->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
                        $tmp262->refCount.value = 1;
                        org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp262, ((org$pandalanguage$pandac$Alias*) s260)->fullName, ((panda$core$Int64) { 10 }), ((org$pandalanguage$pandac$Symbol*) p_type)->position, ((panda$core$Bit) { true }));
                        return $tmp262;
                    }
                    break;
                    case 203:
                    {
                        gp264 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) s260);
                        org$pandalanguage$pandac$ClassDecl* $tmp265 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Position$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Symbol*) p_type)->position, gp264->owner);
                        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, $tmp265);
                        org$pandalanguage$pandac$Type* $tmp266 = (org$pandalanguage$pandac$Type*) malloc(96);
                        $tmp266->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
                        $tmp266->refCount.value = 1;
                        org$pandalanguage$pandac$Type$init$org$pandalanguage$pandac$ClassDecl$GenericParameter($tmp266, gp264);
                        return $tmp266;
                    }
                    break;
                    case 207:
                    {
                        return ((org$pandalanguage$pandac$Type*) s260);
                    }
                    break;
                    case 201:
                    {
                        org$pandalanguage$pandac$Type* $tmp268 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) s260));
                        return $tmp268;
                    }
                    break;
                }
            }
            }
            panda$core$String* $tmp270 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s269, ((panda$core$Object*) p_type));
            panda$core$String* $tmp272 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp270, &$s271);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_type)->position, $tmp272);
            return NULL;
        }
        break;
        case 11:
        {
            panda$core$Int64 $tmp273 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_type->subtypes);
            panda$core$Bit $tmp274 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp273, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp274.value);
            panda$collections$Array* $tmp276 = (panda$collections$Array*) malloc(40);
            $tmp276->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp276->refCount.value = 1;
            panda$collections$Array$init($tmp276);
            subtypes275 = $tmp276;
            panda$core$Object* $tmp279 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp280 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, ((org$pandalanguage$pandac$Type*) $tmp279));
            sub278 = $tmp280;
            if (((panda$core$Bit) { sub278 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(subtypes275, ((panda$core$Object*) sub278));
            org$pandalanguage$pandac$Type* $tmp281 = (org$pandalanguage$pandac$Type*) malloc(96);
            $tmp281->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp281->refCount.value = 1;
            panda$core$Object* $tmp283 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(subtypes275, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp285 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp283))->name, &$s284);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp281, $tmp285, ((panda$core$Int64) { 11 }), ((org$pandalanguage$pandac$Symbol*) p_type)->position, ((panda$collections$ListView*) subtypes275), ((panda$core$Bit) { true }));
            return $tmp281;
        }
        break;
        case 21:
        {
            panda$core$Int64 $tmp286 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_type->subtypes);
            panda$core$Bit $tmp287 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp286, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp287.value);
            panda$collections$Array* $tmp289 = (panda$collections$Array*) malloc(40);
            $tmp289->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp289->refCount.value = 1;
            panda$collections$Array$init($tmp289);
            subtypes288 = $tmp289;
            panda$core$Object* $tmp292 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp293 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$Type$Q(self, ((org$pandalanguage$pandac$Type*) $tmp292), ((panda$core$Bit) { false }));
            base291 = $tmp293;
            if (((panda$core$Bit) { base291 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(subtypes288, ((panda$core$Object*) base291));
            panda$core$MutableString* $tmp295 = (panda$core$MutableString*) malloc(40);
            $tmp295->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp295->refCount.value = 1;
            panda$core$Object* $tmp297 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(subtypes288, ((panda$core$Int64) { 0 }));
            panda$core$MutableString$init$panda$core$String($tmp295, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp297))->name);
            name294 = $tmp295;
            panda$core$MutableString$append$panda$core$String(name294, &$s298);
            separator299 = &$s300;
            panda$core$Int64 $tmp302 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_type->subtypes);
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp301, ((panda$core$Int64) { 1 }), $tmp302, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
            int64_t $tmp304 = $tmp301.start.value;
            panda$core$Int64 i303 = { $tmp304 };
            int64_t $tmp306 = $tmp301.end.value;
            int64_t $tmp307 = $tmp301.step.value;
            bool $tmp308 = $tmp301.inclusive.value;
            bool $tmp315 = $tmp307 > 0;
            if ($tmp315) goto $l313; else goto $l314;
            $l313:;
            if ($tmp308) goto $l316; else goto $l317;
            $l316:;
            if ($tmp304 <= $tmp306) goto $l309; else goto $l311;
            $l317:;
            if ($tmp304 < $tmp306) goto $l309; else goto $l311;
            $l314:;
            if ($tmp308) goto $l318; else goto $l319;
            $l318:;
            if ($tmp304 >= $tmp306) goto $l309; else goto $l311;
            $l319:;
            if ($tmp304 > $tmp306) goto $l309; else goto $l311;
            $l309:;
            {
                panda$core$Object* $tmp322 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_type->subtypes, i303);
                org$pandalanguage$pandac$Type* $tmp323 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, ((org$pandalanguage$pandac$Type*) $tmp322));
                resolved321 = $tmp323;
                if (((panda$core$Bit) { resolved321 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(subtypes288, ((panda$core$Object*) resolved321));
                panda$core$MutableString$append$panda$core$String(name294, separator299);
                panda$core$MutableString$append$panda$core$String(name294, ((org$pandalanguage$pandac$Symbol*) resolved321)->name);
                separator299 = &$s324;
            }
            $l312:;
            if ($tmp315) goto $l326; else goto $l327;
            $l326:;
            int64_t $tmp328 = $tmp306 - i303.value;
            if ($tmp308) goto $l329; else goto $l330;
            $l329:;
            if ($tmp328 >= $tmp307) goto $l325; else goto $l311;
            $l330:;
            if ($tmp328 > $tmp307) goto $l325; else goto $l311;
            $l327:;
            int64_t $tmp332 = i303.value - $tmp306;
            if ($tmp308) goto $l333; else goto $l334;
            $l333:;
            if ($tmp332 >= -$tmp307) goto $l325; else goto $l311;
            $l334:;
            if ($tmp332 > -$tmp307) goto $l325; else goto $l311;
            $l325:;
            i303.value += $tmp307;
            goto $l309;
            $l311:;
            panda$core$MutableString$append$panda$core$String(name294, &$s336);
            org$pandalanguage$pandac$Type* $tmp338 = (org$pandalanguage$pandac$Type*) malloc(96);
            $tmp338->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp338->refCount.value = 1;
            panda$core$String* $tmp340 = panda$core$MutableString$convert$R$panda$core$String(name294);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp338, $tmp340, ((panda$core$Int64) { 21 }), ((org$pandalanguage$pandac$Symbol*) p_type)->position, ((panda$collections$ListView*) subtypes288), ((panda$core$Bit) { true }));
            result337 = $tmp338;
            if (p_checkParameters.value) {
            {
                panda$core$Object* $tmp341 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(result337->subtypes, ((panda$core$Int64) { 0 }));
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
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp637;
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
            panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp637, ((panda$core$String$Index$nullable) { .nonnull = false }), index633, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
            panda$core$String* $tmp638 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(p_fullName, $tmp637);
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
    panda$core$Range$LTpanda$core$Int64$GT $tmp735;
    panda$collections$Iterator* m$Iter780;
    org$pandalanguage$pandac$MethodDecl* m792;
    panda$collections$Array* parameters797;
    panda$collections$Iterator* p$Iter800;
    org$pandalanguage$pandac$MethodDecl$Parameter* p812;
    org$pandalanguage$pandac$MethodDecl* clone820;
    panda$collections$Iterator* f$Iter823;
    org$pandalanguage$pandac$FieldDecl* f835;
    org$pandalanguage$pandac$FieldDecl* clone840;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
    panda$core$Bit $tmp693 = panda$core$String$contains$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_rawType)->name, &$s692);
    panda$core$Bit $tmp694 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp693);
    PANDA_ASSERT($tmp694.value);
    org$pandalanguage$pandac$Type* $tmp696 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, p_rawType);
    type695 = $tmp696;
    panda$core$Bit $tmp697 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(type695->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp697.value) {
    {
        panda$core$Object* $tmp698 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(type695->subtypes, ((panda$core$Int64) { 0 }));
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
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp735, ((panda$core$Int64) { 0 }), $tmp739, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
        int64_t $tmp741 = $tmp735.start.value;
        panda$core$Int64 i740 = { $tmp741 };
        int64_t $tmp743 = $tmp735.end.value;
        int64_t $tmp744 = $tmp735.step.value;
        bool $tmp745 = $tmp735.inclusive.value;
        bool $tmp752 = $tmp744 > 0;
        if ($tmp752) goto $l750; else goto $l751;
        $l750:;
        if ($tmp745) goto $l753; else goto $l754;
        $l753:;
        if ($tmp741 <= $tmp743) goto $l746; else goto $l748;
        $l754:;
        if ($tmp741 < $tmp743) goto $l746; else goto $l748;
        $l751:;
        if ($tmp745) goto $l755; else goto $l756;
        $l755:;
        if ($tmp741 >= $tmp743) goto $l746; else goto $l748;
        $l756:;
        if ($tmp741 > $tmp743) goto $l746; else goto $l748;
        $l746:;
        {
            ITable* $tmp758 = ((panda$collections$ListView*) p_cl->parameters)->$class->itable;
            while ($tmp758->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp758 = $tmp758->next;
            }
            $fn760 $tmp759 = $tmp758->methods[0];
            panda$core$Object* $tmp761 = $tmp759(((panda$collections$ListView*) p_cl->parameters), i740);
            panda$core$Int64 $tmp762 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i740, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp763 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(type695->subtypes, $tmp762);
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(aliases732, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp761))->name), ((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp763))->name));
        }
        $l749:;
        if ($tmp752) goto $l765; else goto $l766;
        $l765:;
        int64_t $tmp767 = $tmp743 - i740.value;
        if ($tmp745) goto $l768; else goto $l769;
        $l768:;
        if ($tmp767 >= $tmp744) goto $l764; else goto $l748;
        $l769:;
        if ($tmp767 > $tmp744) goto $l764; else goto $l748;
        $l766:;
        int64_t $tmp771 = i740.value - $tmp743;
        if ($tmp745) goto $l772; else goto $l773;
        $l772:;
        if ($tmp771 >= -$tmp744) goto $l764; else goto $l748;
        $l773:;
        if ($tmp771 > -$tmp744) goto $l764; else goto $l748;
        $l764:;
        i740.value += $tmp744;
        goto $l746;
        $l748:;
        org$pandalanguage$pandac$ClassDecl* $tmp775 = (org$pandalanguage$pandac$ClassDecl*) malloc(185);
        $tmp775->$class = (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$class;
        $tmp775->refCount.value = 1;
        panda$collections$Array* $tmp777 = (panda$collections$Array*) malloc(40);
        $tmp777->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp777->refCount.value = 1;
        panda$collections$Array$init($tmp777);
        panda$core$Object* $tmp779 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_cl->symbolTable->parents, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$ClassDecl$init$panda$io$File$org$pandalanguage$pandac$Position$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable($tmp775, p_cl->source, ((org$pandalanguage$pandac$Symbol*) p_cl)->position, ((panda$collections$MapView*) aliases732), p_cl->doccomment, annotations704, p_cl->classKind, ((org$pandalanguage$pandac$Symbol*) type695)->name, ((panda$collections$ListView*) supertypes710), $tmp777, ((org$pandalanguage$pandac$SymbolTable*) $tmp779));
        result702 = $tmp775;
        result702->external = ((panda$core$Bit) { false });
        {
            ITable* $tmp781 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
            while ($tmp781->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp781 = $tmp781->next;
            }
            $fn783 $tmp782 = $tmp781->methods[0];
            panda$collections$Iterator* $tmp784 = $tmp782(((panda$collections$Iterable*) p_cl->methods));
            m$Iter780 = $tmp784;
            $l785:;
            ITable* $tmp787 = m$Iter780->$class->itable;
            while ($tmp787->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp787 = $tmp787->next;
            }
            $fn789 $tmp788 = $tmp787->methods[0];
            panda$core$Bit $tmp790 = $tmp788(m$Iter780);
            panda$core$Bit $tmp791 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp790);
            if (!$tmp791.value) goto $l786;
            {
                ITable* $tmp793 = m$Iter780->$class->itable;
                while ($tmp793->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp793 = $tmp793->next;
                }
                $fn795 $tmp794 = $tmp793->methods[1];
                panda$core$Object* $tmp796 = $tmp794(m$Iter780);
                m792 = ((org$pandalanguage$pandac$MethodDecl*) $tmp796);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m792);
                panda$collections$Array* $tmp798 = (panda$collections$Array*) malloc(40);
                $tmp798->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp798->refCount.value = 1;
                panda$collections$Array$init($tmp798);
                parameters797 = $tmp798;
                {
                    ITable* $tmp801 = ((panda$collections$Iterable*) m792->parameters)->$class->itable;
                    while ($tmp801->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp801 = $tmp801->next;
                    }
                    $fn803 $tmp802 = $tmp801->methods[0];
                    panda$collections$Iterator* $tmp804 = $tmp802(((panda$collections$Iterable*) m792->parameters));
                    p$Iter800 = $tmp804;
                    $l805:;
                    ITable* $tmp807 = p$Iter800->$class->itable;
                    while ($tmp807->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp807 = $tmp807->next;
                    }
                    $fn809 $tmp808 = $tmp807->methods[0];
                    panda$core$Bit $tmp810 = $tmp808(p$Iter800);
                    panda$core$Bit $tmp811 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp810);
                    if (!$tmp811.value) goto $l806;
                    {
                        ITable* $tmp813 = p$Iter800->$class->itable;
                        while ($tmp813->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp813 = $tmp813->next;
                        }
                        $fn815 $tmp814 = $tmp813->methods[1];
                        panda$core$Object* $tmp816 = $tmp814(p$Iter800);
                        p812 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp816);
                        org$pandalanguage$pandac$MethodDecl$Parameter* $tmp817 = (org$pandalanguage$pandac$MethodDecl$Parameter*) malloc(32);
                        $tmp817->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class;
                        $tmp817->refCount.value = 1;
                        org$pandalanguage$pandac$Type* $tmp819 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, type695, p812->type);
                        org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp817, p812->name, $tmp819);
                        panda$collections$Array$add$panda$collections$Array$T(parameters797, ((panda$core$Object*) $tmp817));
                    }
                    goto $l805;
                    $l806:;
                }
                org$pandalanguage$pandac$MethodDecl* $tmp821 = (org$pandalanguage$pandac$MethodDecl*) malloc(121);
                $tmp821->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class;
                $tmp821->refCount.value = 1;
                org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp821, result702, ((org$pandalanguage$pandac$Symbol*) m792)->position, m792->doccomment, m792->annotations, m792->methodKind, ((org$pandalanguage$pandac$Symbol*) m792)->name, parameters797, m792->returnType, m792->body);
                clone820 = $tmp821;
                panda$collections$Array$add$panda$collections$Array$T(result702->methods, ((panda$core$Object*) clone820));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result702->symbolTable, ((org$pandalanguage$pandac$Symbol*) clone820));
            }
            goto $l785;
            $l786:;
        }
        {
            ITable* $tmp824 = ((panda$collections$Iterable*) p_cl->fields)->$class->itable;
            while ($tmp824->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp824 = $tmp824->next;
            }
            $fn826 $tmp825 = $tmp824->methods[0];
            panda$collections$Iterator* $tmp827 = $tmp825(((panda$collections$Iterable*) p_cl->fields));
            f$Iter823 = $tmp827;
            $l828:;
            ITable* $tmp830 = f$Iter823->$class->itable;
            while ($tmp830->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp830 = $tmp830->next;
            }
            $fn832 $tmp831 = $tmp830->methods[0];
            panda$core$Bit $tmp833 = $tmp831(f$Iter823);
            panda$core$Bit $tmp834 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp833);
            if (!$tmp834.value) goto $l829;
            {
                ITable* $tmp836 = f$Iter823->$class->itable;
                while ($tmp836->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp836 = $tmp836->next;
                }
                $fn838 $tmp837 = $tmp836->methods[1];
                panda$core$Object* $tmp839 = $tmp837(f$Iter823);
                f835 = ((org$pandalanguage$pandac$FieldDecl*) $tmp839);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self, f835);
                org$pandalanguage$pandac$FieldDecl* $tmp841 = (org$pandalanguage$pandac$FieldDecl*) malloc(113);
                $tmp841->$class = (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class;
                $tmp841->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp843 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, type695, f835->type);
                org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp841, result702, ((org$pandalanguage$pandac$Symbol*) f835)->position, f835->doccomment, f835->annotations, f835->fieldKind, ((org$pandalanguage$pandac$Symbol*) f835)->name, $tmp843, f835->rawValue);
                clone840 = $tmp841;
                panda$collections$Array$add$panda$collections$Array$T(result702->fields, ((panda$core$Object*) clone840));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result702->symbolTable, ((org$pandalanguage$pandac$Symbol*) clone840));
            }
            goto $l828;
            $l829:;
        }
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classes, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) result702)->name), ((panda$core$Object*) result702));
        panda$collections$Array$add$panda$collections$Array$T(self->compilationQueue, ((panda$core$Object*) result702));
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    }
    }
    return result702;
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type) {
    org$pandalanguage$pandac$ClassDecl* result844;
    PANDA_ASSERT(p_type->resolved.value);
    switch (p_type->typeKind.value) {
        case 10:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp845 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Position$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Symbol*) p_type)->position, ((org$pandalanguage$pandac$Symbol*) p_type)->name);
            result844 = $tmp845;
        }
        break;
        case 11:
        case 21:
        {
            panda$core$Object* $tmp846 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$ClassDecl* $tmp847 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Type*) $tmp846));
            result844 = $tmp847;
        }
        break;
        case 22:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp848 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_type->parameter->bound);
            return $tmp848;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
    panda$core$Bit $tmp849 = org$pandalanguage$pandac$Annotations$isSpecialize$R$panda$core$Bit(result844->annotations);
    if ($tmp849.value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp850 = org$pandalanguage$pandac$Compiler$specialize$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl(self, result844, p_type);
        result844 = $tmp850;
    }
    }
    return result844;
}
panda$collections$Set* org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_t) {
    org$pandalanguage$pandac$ClassDecl* cl851;
    panda$collections$Set* result853;
    panda$collections$Iterator* intf$Iter858;
    org$pandalanguage$pandac$Type* intf870;
    org$pandalanguage$pandac$ClassDecl* $tmp852 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_t);
    cl851 = $tmp852;
    PANDA_ASSERT(((panda$core$Bit) { cl851 != NULL }).value);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, cl851);
    panda$collections$Set* $tmp854 = (panda$collections$Set*) malloc(24);
    $tmp854->$class = (panda$core$Class*) &panda$collections$Set$class;
    $tmp854->refCount.value = 1;
    panda$collections$Set$init($tmp854);
    result853 = $tmp854;
    if (((panda$core$Bit) { cl851->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp856 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_t, cl851->rawSuper);
        panda$collections$Set* $tmp857 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self, $tmp856);
        panda$collections$Set$addAll$panda$collections$CollectionView$LTpanda$collections$Set$T$GT(result853, ((panda$collections$CollectionView*) $tmp857));
    }
    }
    {
        ITable* $tmp859 = ((panda$collections$Iterable*) cl851->rawInterfaces)->$class->itable;
        while ($tmp859->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp859 = $tmp859->next;
        }
        $fn861 $tmp860 = $tmp859->methods[0];
        panda$collections$Iterator* $tmp862 = $tmp860(((panda$collections$Iterable*) cl851->rawInterfaces));
        intf$Iter858 = $tmp862;
        $l863:;
        ITable* $tmp865 = intf$Iter858->$class->itable;
        while ($tmp865->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp865 = $tmp865->next;
        }
        $fn867 $tmp866 = $tmp865->methods[0];
        panda$core$Bit $tmp868 = $tmp866(intf$Iter858);
        panda$core$Bit $tmp869 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp868);
        if (!$tmp869.value) goto $l864;
        {
            ITable* $tmp871 = intf$Iter858->$class->itable;
            while ($tmp871->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp871 = $tmp871->next;
            }
            $fn873 $tmp872 = $tmp871->methods[1];
            panda$core$Object* $tmp874 = $tmp872(intf$Iter858);
            intf870 = ((org$pandalanguage$pandac$Type*) $tmp874);
            org$pandalanguage$pandac$Type* $tmp875 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_t, intf870);
            panda$collections$Set* $tmp876 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self, $tmp875);
            panda$collections$Set$addAll$panda$collections$CollectionView$LTpanda$collections$Set$T$GT(result853, ((panda$collections$CollectionView*) $tmp876));
        }
        goto $l863;
        $l864:;
    }
    panda$core$Bit $tmp877 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(cl851->classKind, ((panda$core$Int64) { 5012 }));
    if ($tmp877.value) {
    {
        panda$collections$Set$add$panda$collections$Set$T(result853, ((panda$collections$Key*) p_t));
    }
    }
    return result853;
}
panda$core$Bit org$pandalanguage$pandac$Compiler$signatureMatch$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_t1, org$pandalanguage$pandac$Type* p_t2) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp883;
    panda$core$Bit $tmp878 = org$pandalanguage$pandac$Type$isMethod$R$panda$core$Bit(p_t1);
    PANDA_ASSERT($tmp878.value);
    panda$core$Bit $tmp879 = org$pandalanguage$pandac$Type$isMethod$R$panda$core$Bit(p_t2);
    PANDA_ASSERT($tmp879.value);
    panda$core$Int64 $tmp880 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_t1->subtypes);
    panda$core$Int64 $tmp881 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_t2->subtypes);
    panda$core$Bit $tmp882 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp880, $tmp881);
    if ($tmp882.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Int64 $tmp884 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_t1->subtypes);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp883, ((panda$core$Int64) { 0 }), $tmp884, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp886 = $tmp883.start.value;
    panda$core$Int64 i885 = { $tmp886 };
    int64_t $tmp888 = $tmp883.end.value;
    int64_t $tmp889 = $tmp883.step.value;
    bool $tmp890 = $tmp883.inclusive.value;
    bool $tmp897 = $tmp889 > 0;
    if ($tmp897) goto $l895; else goto $l896;
    $l895:;
    if ($tmp890) goto $l898; else goto $l899;
    $l898:;
    if ($tmp886 <= $tmp888) goto $l891; else goto $l893;
    $l899:;
    if ($tmp886 < $tmp888) goto $l891; else goto $l893;
    $l896:;
    if ($tmp890) goto $l900; else goto $l901;
    $l900:;
    if ($tmp886 >= $tmp888) goto $l891; else goto $l893;
    $l901:;
    if ($tmp886 > $tmp888) goto $l891; else goto $l893;
    $l891:;
    {
        panda$core$Object* $tmp903 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t1->subtypes, i885);
        panda$core$Object* $tmp904 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t2->subtypes, i885);
        panda$core$Bit $tmp905 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp903), ((org$pandalanguage$pandac$Type*) $tmp904));
        if ($tmp905.value) {
        {
            return ((panda$core$Bit) { false });
        }
        }
    }
    $l894:;
    if ($tmp897) goto $l907; else goto $l908;
    $l907:;
    int64_t $tmp909 = $tmp888 - i885.value;
    if ($tmp890) goto $l910; else goto $l911;
    $l910:;
    if ($tmp909 >= $tmp889) goto $l906; else goto $l893;
    $l911:;
    if ($tmp909 > $tmp889) goto $l906; else goto $l893;
    $l908:;
    int64_t $tmp913 = i885.value - $tmp888;
    if ($tmp890) goto $l914; else goto $l915;
    $l914:;
    if ($tmp913 >= -$tmp889) goto $l906; else goto $l893;
    $l915:;
    if ($tmp913 > -$tmp889) goto $l906; else goto $l893;
    $l906:;
    i885.value += $tmp889;
    goto $l891;
    $l893:;
    return ((panda$core$Bit) { true });
}
org$pandalanguage$pandac$MethodDecl* org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_owner, panda$core$String* p_name, org$pandalanguage$pandac$Type* p_methodType, panda$core$Bit p_checkInterfaces) {
    org$pandalanguage$pandac$ClassDecl* cl917;
    panda$collections$Iterator* test$Iter919;
    org$pandalanguage$pandac$MethodDecl* test931;
    panda$collections$Iterator* raw$Iter944;
    org$pandalanguage$pandac$Type* raw956;
    org$pandalanguage$pandac$MethodDecl* result961;
    org$pandalanguage$pandac$ClassDecl* $tmp918 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_owner);
    cl917 = $tmp918;
    PANDA_ASSERT(((panda$core$Bit) { cl917 != NULL }).value);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, cl917);
    {
        ITable* $tmp920 = ((panda$collections$Iterable*) cl917->methods)->$class->itable;
        while ($tmp920->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp920 = $tmp920->next;
        }
        $fn922 $tmp921 = $tmp920->methods[0];
        panda$collections$Iterator* $tmp923 = $tmp921(((panda$collections$Iterable*) cl917->methods));
        test$Iter919 = $tmp923;
        $l924:;
        ITable* $tmp926 = test$Iter919->$class->itable;
        while ($tmp926->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp926 = $tmp926->next;
        }
        $fn928 $tmp927 = $tmp926->methods[0];
        panda$core$Bit $tmp929 = $tmp927(test$Iter919);
        panda$core$Bit $tmp930 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp929);
        if (!$tmp930.value) goto $l925;
        {
            ITable* $tmp932 = test$Iter919->$class->itable;
            while ($tmp932->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp932 = $tmp932->next;
            }
            $fn934 $tmp933 = $tmp932->methods[1];
            panda$core$Object* $tmp935 = $tmp933(test$Iter919);
            test931 = ((org$pandalanguage$pandac$MethodDecl*) $tmp935);
            panda$core$Bit $tmp936 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) test931)->name, p_name);
            if ($tmp936.value) {
            {
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, test931);
                org$pandalanguage$pandac$Type* $tmp937 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, test931);
                org$pandalanguage$pandac$Type* $tmp938 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_owner, $tmp937);
                panda$core$Bit $tmp939 = org$pandalanguage$pandac$Compiler$signatureMatch$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, $tmp938, p_methodType);
                if ($tmp939.value) {
                {
                    return test931;
                }
                }
            }
            }
        }
        goto $l924;
        $l925:;
    }
    bool $tmp940 = p_checkInterfaces.value;
    if ($tmp940) goto $l941;
    panda$core$Bit $tmp942 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(cl917->classKind, ((panda$core$Int64) { 5012 }));
    $tmp940 = $tmp942.value;
    $l941:;
    panda$core$Bit $tmp943 = { $tmp940 };
    if ($tmp943.value) {
    {
        {
            ITable* $tmp945 = ((panda$collections$Iterable*) cl917->rawInterfaces)->$class->itable;
            while ($tmp945->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp945 = $tmp945->next;
            }
            $fn947 $tmp946 = $tmp945->methods[0];
            panda$collections$Iterator* $tmp948 = $tmp946(((panda$collections$Iterable*) cl917->rawInterfaces));
            raw$Iter944 = $tmp948;
            $l949:;
            ITable* $tmp951 = raw$Iter944->$class->itable;
            while ($tmp951->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp951 = $tmp951->next;
            }
            $fn953 $tmp952 = $tmp951->methods[0];
            panda$core$Bit $tmp954 = $tmp952(raw$Iter944);
            panda$core$Bit $tmp955 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp954);
            if (!$tmp955.value) goto $l950;
            {
                ITable* $tmp957 = raw$Iter944->$class->itable;
                while ($tmp957->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp957 = $tmp957->next;
                }
                $fn959 $tmp958 = $tmp957->methods[1];
                panda$core$Object* $tmp960 = $tmp958(raw$Iter944);
                raw956 = ((org$pandalanguage$pandac$Type*) $tmp960);
                org$pandalanguage$pandac$Type* $tmp962 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_owner, raw956);
                org$pandalanguage$pandac$MethodDecl* $tmp963 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp962, p_name, p_methodType, p_checkInterfaces);
                result961 = $tmp963;
                if (((panda$core$Bit) { result961 != NULL }).value) {
                {
                    return result961;
                }
                }
            }
            goto $l949;
            $l950:;
        }
    }
    }
    if (((panda$core$Bit) { cl917->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp964 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_owner, cl917->rawSuper);
        org$pandalanguage$pandac$MethodDecl* $tmp965 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp964, p_name, p_methodType, p_checkInterfaces);
        return $tmp965;
    }
    }
    return NULL;
}
org$pandalanguage$pandac$MethodDecl* org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$Type* methodType967;
    org$pandalanguage$pandac$Type* owner969;
    panda$collections$Iterator* raw$Iter971;
    org$pandalanguage$pandac$Type* raw983;
    org$pandalanguage$pandac$MethodDecl* result988;
    panda$core$Bit $tmp966 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 59 }));
    if ($tmp966.value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
    org$pandalanguage$pandac$Type* $tmp968 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, p_m);
    methodType967 = $tmp968;
    org$pandalanguage$pandac$Type* $tmp970 = org$pandalanguage$pandac$ClassDecl$typeWithParameters$R$org$pandalanguage$pandac$Type(p_m->owner);
    owner969 = $tmp970;
    {
        ITable* $tmp972 = ((panda$collections$Iterable*) p_m->owner->rawInterfaces)->$class->itable;
        while ($tmp972->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp972 = $tmp972->next;
        }
        $fn974 $tmp973 = $tmp972->methods[0];
        panda$collections$Iterator* $tmp975 = $tmp973(((panda$collections$Iterable*) p_m->owner->rawInterfaces));
        raw$Iter971 = $tmp975;
        $l976:;
        ITable* $tmp978 = raw$Iter971->$class->itable;
        while ($tmp978->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp978 = $tmp978->next;
        }
        $fn980 $tmp979 = $tmp978->methods[0];
        panda$core$Bit $tmp981 = $tmp979(raw$Iter971);
        panda$core$Bit $tmp982 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp981);
        if (!$tmp982.value) goto $l977;
        {
            ITable* $tmp984 = raw$Iter971->$class->itable;
            while ($tmp984->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp984 = $tmp984->next;
            }
            $fn986 $tmp985 = $tmp984->methods[1];
            panda$core$Object* $tmp987 = $tmp985(raw$Iter971);
            raw983 = ((org$pandalanguage$pandac$Type*) $tmp987);
            org$pandalanguage$pandac$Type* $tmp989 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, owner969, raw983);
            org$pandalanguage$pandac$MethodDecl* $tmp990 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp989, ((org$pandalanguage$pandac$Symbol*) p_m)->name, methodType967, ((panda$core$Bit) { true }));
            result988 = $tmp990;
            if (((panda$core$Bit) { result988 != NULL }).value) {
            {
                return result988;
            }
            }
        }
        goto $l976;
        $l977:;
    }
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_m->owner);
    if (((panda$core$Bit) { p_m->owner->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp991 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, owner969, p_m->owner->rawSuper);
        org$pandalanguage$pandac$MethodDecl* $tmp992 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp991, ((org$pandalanguage$pandac$Symbol*) p_m)->name, methodType967, ((panda$core$Bit) { true }));
        return $tmp992;
    }
    }
    return NULL;
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$interfaceMethods$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl, org$pandalanguage$pandac$Type* p_intf) {
    org$pandalanguage$pandac$ClassDecl* intfClass993;
    panda$collections$Array* result995;
    panda$collections$Iterator* m$Iter998;
    org$pandalanguage$pandac$MethodDecl* m1010;
    org$pandalanguage$pandac$MethodDecl* found1015;
    org$pandalanguage$pandac$ClassDecl* $tmp994 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_intf);
    intfClass993 = $tmp994;
    PANDA_ASSERT(((panda$core$Bit) { intfClass993 != NULL }).value);
    panda$collections$Array* $tmp996 = (panda$collections$Array*) malloc(40);
    $tmp996->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp996->refCount.value = 1;
    panda$collections$Array$init($tmp996);
    result995 = $tmp996;
    {
        ITable* $tmp999 = ((panda$collections$Iterable*) intfClass993->methods)->$class->itable;
        while ($tmp999->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp999 = $tmp999->next;
        }
        $fn1001 $tmp1000 = $tmp999->methods[0];
        panda$collections$Iterator* $tmp1002 = $tmp1000(((panda$collections$Iterable*) intfClass993->methods));
        m$Iter998 = $tmp1002;
        $l1003:;
        ITable* $tmp1005 = m$Iter998->$class->itable;
        while ($tmp1005->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1005 = $tmp1005->next;
        }
        $fn1007 $tmp1006 = $tmp1005->methods[0];
        panda$core$Bit $tmp1008 = $tmp1006(m$Iter998);
        panda$core$Bit $tmp1009 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1008);
        if (!$tmp1009.value) goto $l1004;
        {
            ITable* $tmp1011 = m$Iter998->$class->itable;
            while ($tmp1011->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1011 = $tmp1011->next;
            }
            $fn1013 $tmp1012 = $tmp1011->methods[1];
            panda$core$Object* $tmp1014 = $tmp1012(m$Iter998);
            m1010 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1014);
            org$pandalanguage$pandac$Type* $tmp1016 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
            org$pandalanguage$pandac$Type* $tmp1017 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, m1010);
            org$pandalanguage$pandac$Type* $tmp1018 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_intf, $tmp1017);
            org$pandalanguage$pandac$MethodDecl* $tmp1019 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp1016, ((org$pandalanguage$pandac$Symbol*) m1010)->name, $tmp1018, ((panda$core$Bit) { false }));
            found1015 = $tmp1019;
            PANDA_ASSERT(((panda$core$Bit) { found1015 != NULL }).value);
            panda$collections$Array$add$panda$collections$Array$T(result995, ((panda$core$Object*) found1015));
        }
        goto $l1003;
        $l1004:;
    }
    return ((panda$collections$ListView*) result995);
}
org$pandalanguage$pandac$SymbolTable* org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$ClassDecl* superCl1021;
    panda$collections$Iterator* rawIntf$Iter1024;
    org$pandalanguage$pandac$Type* rawIntf1036;
    org$pandalanguage$pandac$ClassDecl* intf1041;
    panda$core$Bit $tmp1020 = panda$core$Bit$$NOT$R$panda$core$Bit(p_cl->symbolTableResolved);
    if ($tmp1020.value) {
    {
        p_cl->symbolTableResolved = ((panda$core$Bit) { true });
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
        if (((panda$core$Bit) { p_cl->rawSuper != NULL }).value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp1022 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_cl->rawSuper);
            superCl1021 = $tmp1022;
            if (((panda$core$Bit) { superCl1021 != NULL }).value) {
            {
                org$pandalanguage$pandac$SymbolTable* $tmp1023 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, superCl1021);
                panda$collections$Array$add$panda$collections$Array$T(p_cl->symbolTable->parents, ((panda$core$Object*) $tmp1023));
            }
            }
        }
        }
        {
            ITable* $tmp1025 = ((panda$collections$Iterable*) p_cl->rawInterfaces)->$class->itable;
            while ($tmp1025->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1025 = $tmp1025->next;
            }
            $fn1027 $tmp1026 = $tmp1025->methods[0];
            panda$collections$Iterator* $tmp1028 = $tmp1026(((panda$collections$Iterable*) p_cl->rawInterfaces));
            rawIntf$Iter1024 = $tmp1028;
            $l1029:;
            ITable* $tmp1031 = rawIntf$Iter1024->$class->itable;
            while ($tmp1031->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1031 = $tmp1031->next;
            }
            $fn1033 $tmp1032 = $tmp1031->methods[0];
            panda$core$Bit $tmp1034 = $tmp1032(rawIntf$Iter1024);
            panda$core$Bit $tmp1035 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1034);
            if (!$tmp1035.value) goto $l1030;
            {
                ITable* $tmp1037 = rawIntf$Iter1024->$class->itable;
                while ($tmp1037->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1037 = $tmp1037->next;
                }
                $fn1039 $tmp1038 = $tmp1037->methods[1];
                panda$core$Object* $tmp1040 = $tmp1038(rawIntf$Iter1024);
                rawIntf1036 = ((org$pandalanguage$pandac$Type*) $tmp1040);
                org$pandalanguage$pandac$ClassDecl* $tmp1042 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, rawIntf1036);
                intf1041 = $tmp1042;
                if (((panda$core$Bit) { intf1041 != NULL }).value) {
                {
                    org$pandalanguage$pandac$SymbolTable* $tmp1043 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, intf1041);
                    panda$collections$Array$add$panda$collections$Array$T(p_cl->symbolTable->parents, ((panda$core$Object*) $tmp1043));
                }
                }
            }
            goto $l1029;
            $l1030:;
        }
    }
    }
    return p_cl->symbolTable;
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$ClassDecl* superCl1046;
    panda$collections$Iterator* derived$Iter1049;
    org$pandalanguage$pandac$MethodDecl* derived1061;
    panda$core$Bit found1071;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1072;
    org$pandalanguage$pandac$MethodDecl* base1092;
    panda$core$Int64 $tmp1044 = panda$collections$Array$get_count$R$panda$core$Int64(p_cl->virtualMethods);
    panda$core$Bit $tmp1045 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1044, ((panda$core$Int64) { 0 }));
    if ($tmp1045.value) {
    {
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
        panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_cl));
        if (((panda$core$Bit) { p_cl->rawSuper != NULL }).value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp1047 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_cl->rawSuper);
            superCl1046 = $tmp1047;
            if (((panda$core$Bit) { superCl1046 == NULL }).value) {
            {
                panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
                return ((panda$collections$ListView*) p_cl->virtualMethods);
            }
            }
            panda$collections$ListView* $tmp1048 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self, superCl1046);
            panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(p_cl->virtualMethods, ((panda$collections$CollectionView*) $tmp1048));
        }
        }
        {
            ITable* $tmp1050 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
            while ($tmp1050->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1050 = $tmp1050->next;
            }
            $fn1052 $tmp1051 = $tmp1050->methods[0];
            panda$collections$Iterator* $tmp1053 = $tmp1051(((panda$collections$Iterable*) p_cl->methods));
            derived$Iter1049 = $tmp1053;
            $l1054:;
            ITable* $tmp1056 = derived$Iter1049->$class->itable;
            while ($tmp1056->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1056 = $tmp1056->next;
            }
            $fn1058 $tmp1057 = $tmp1056->methods[0];
            panda$core$Bit $tmp1059 = $tmp1057(derived$Iter1049);
            panda$core$Bit $tmp1060 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1059);
            if (!$tmp1060.value) goto $l1055;
            {
                ITable* $tmp1062 = derived$Iter1049->$class->itable;
                while ($tmp1062->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1062 = $tmp1062->next;
                }
                $fn1064 $tmp1063 = $tmp1062->methods[1];
                panda$core$Object* $tmp1065 = $tmp1063(derived$Iter1049);
                derived1061 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1065);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, derived1061);
                panda$core$Bit $tmp1067 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(derived1061->methodKind, ((panda$core$Int64) { 59 }));
                bool $tmp1066 = $tmp1067.value;
                if ($tmp1066) goto $l1068;
                panda$core$Bit $tmp1069 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(derived1061->annotations);
                $tmp1066 = $tmp1069.value;
                $l1068:;
                panda$core$Bit $tmp1070 = { $tmp1066 };
                if ($tmp1070.value) {
                {
                    goto $l1054;
                }
                }
                found1071 = ((panda$core$Bit) { false });
                panda$core$Int64 $tmp1073 = panda$collections$Array$get_count$R$panda$core$Int64(p_cl->virtualMethods);
                panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp1072, ((panda$core$Int64) { 0 }), $tmp1073, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
                int64_t $tmp1075 = $tmp1072.start.value;
                panda$core$Int64 i1074 = { $tmp1075 };
                int64_t $tmp1077 = $tmp1072.end.value;
                int64_t $tmp1078 = $tmp1072.step.value;
                bool $tmp1079 = $tmp1072.inclusive.value;
                bool $tmp1086 = $tmp1078 > 0;
                if ($tmp1086) goto $l1084; else goto $l1085;
                $l1084:;
                if ($tmp1079) goto $l1087; else goto $l1088;
                $l1087:;
                if ($tmp1075 <= $tmp1077) goto $l1080; else goto $l1082;
                $l1088:;
                if ($tmp1075 < $tmp1077) goto $l1080; else goto $l1082;
                $l1085:;
                if ($tmp1079) goto $l1089; else goto $l1090;
                $l1089:;
                if ($tmp1075 >= $tmp1077) goto $l1080; else goto $l1082;
                $l1090:;
                if ($tmp1075 > $tmp1077) goto $l1080; else goto $l1082;
                $l1080:;
                {
                    panda$core$Object* $tmp1093 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_cl->virtualMethods, i1074);
                    base1092 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1093);
                    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, base1092);
                    panda$core$Bit $tmp1094 = org$pandalanguage$pandac$MethodDecl$matches$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(derived1061, base1092);
                    if ($tmp1094.value) {
                    {
                        found1071 = ((panda$core$Bit) { true });
                        panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(p_cl->virtualMethods, i1074, ((panda$core$Object*) derived1061));
                        goto $l1082;
                    }
                    }
                }
                $l1083:;
                if ($tmp1086) goto $l1096; else goto $l1097;
                $l1096:;
                int64_t $tmp1098 = $tmp1077 - i1074.value;
                if ($tmp1079) goto $l1099; else goto $l1100;
                $l1099:;
                if ($tmp1098 >= $tmp1078) goto $l1095; else goto $l1082;
                $l1100:;
                if ($tmp1098 > $tmp1078) goto $l1095; else goto $l1082;
                $l1097:;
                int64_t $tmp1102 = i1074.value - $tmp1077;
                if ($tmp1079) goto $l1103; else goto $l1104;
                $l1103:;
                if ($tmp1102 >= -$tmp1078) goto $l1095; else goto $l1082;
                $l1104:;
                if ($tmp1102 > -$tmp1078) goto $l1095; else goto $l1082;
                $l1095:;
                i1074.value += $tmp1078;
                goto $l1080;
                $l1082:;
                panda$core$Bit $tmp1106 = panda$core$Bit$$NOT$R$panda$core$Bit(found1071);
                if ($tmp1106.value) {
                {
                    panda$collections$Array$add$panda$collections$Array$T(p_cl->virtualMethods, ((panda$core$Object*) derived1061));
                }
                }
            }
            goto $l1054;
            $l1055:;
        }
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    }
    }
    return ((panda$collections$ListView*) p_cl->virtualMethods);
}
void org$pandalanguage$pandac$Compiler$addInheritedMethods$org$pandalanguage$pandac$SymbolTable$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$SymbolTable* p_st, panda$core$String* p_name, panda$collections$Array* p_result, panda$collections$ListView* p_types) {
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$getMethodReference$org$pandalanguage$pandac$SymbolTable$org$pandalanguage$pandac$IRNode$Q$panda$core$String$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$SymbolTable* p_st, org$pandalanguage$pandac$IRNode* p_target, panda$core$String* p_name, org$pandalanguage$pandac$Position p_position, panda$collections$ListView* p_types) {
    panda$collections$Array* methods1107;
    org$pandalanguage$pandac$Symbol* s1110;
    panda$collections$Iterator* m$Iter1116;
    org$pandalanguage$pandac$MethodDecl* m1128;
    panda$collections$Iterator* p$Iter1135;
    org$pandalanguage$pandac$SymbolTable* p1147;
    panda$collections$Array* children1152;
    panda$collections$Array* types1164;
    panda$collections$Iterator* m$Iter1167;
    org$pandalanguage$pandac$MethodRef* m1179;
    panda$collections$Array* $tmp1108 = (panda$collections$Array*) malloc(40);
    $tmp1108->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1108->refCount.value = 1;
    panda$collections$Array$init($tmp1108);
    methods1107 = $tmp1108;
    org$pandalanguage$pandac$Symbol* $tmp1111 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(p_st, p_name);
    s1110 = $tmp1111;
    PANDA_ASSERT(((panda$core$Bit) { s1110 != NULL }).value);
    panda$core$Bit $tmp1112 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(s1110->kind, ((panda$core$Int64) { 204 }));
    if ($tmp1112.value) {
    {
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, ((org$pandalanguage$pandac$MethodDecl*) s1110));
        org$pandalanguage$pandac$MethodRef* $tmp1113 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
        $tmp1113->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
        $tmp1113->refCount.value = 1;
        org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp1113, ((org$pandalanguage$pandac$MethodDecl*) s1110), p_types);
        panda$collections$Array$add$panda$collections$Array$T(methods1107, ((panda$core$Object*) $tmp1113));
    }
    }
    else {
    {
        panda$core$Bit $tmp1115 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(s1110->kind, ((panda$core$Int64) { 205 }));
        PANDA_ASSERT($tmp1115.value);
        {
            ITable* $tmp1117 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s1110)->methods)->$class->itable;
            while ($tmp1117->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1117 = $tmp1117->next;
            }
            $fn1119 $tmp1118 = $tmp1117->methods[0];
            panda$collections$Iterator* $tmp1120 = $tmp1118(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s1110)->methods));
            m$Iter1116 = $tmp1120;
            $l1121:;
            ITable* $tmp1123 = m$Iter1116->$class->itable;
            while ($tmp1123->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1123 = $tmp1123->next;
            }
            $fn1125 $tmp1124 = $tmp1123->methods[0];
            panda$core$Bit $tmp1126 = $tmp1124(m$Iter1116);
            panda$core$Bit $tmp1127 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1126);
            if (!$tmp1127.value) goto $l1122;
            {
                ITable* $tmp1129 = m$Iter1116->$class->itable;
                while ($tmp1129->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1129 = $tmp1129->next;
                }
                $fn1131 $tmp1130 = $tmp1129->methods[1];
                panda$core$Object* $tmp1132 = $tmp1130(m$Iter1116);
                m1128 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1132);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m1128);
                org$pandalanguage$pandac$MethodRef* $tmp1133 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                $tmp1133->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                $tmp1133->refCount.value = 1;
                org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp1133, m1128, p_types);
                panda$collections$Array$add$panda$collections$Array$T(methods1107, ((panda$core$Object*) $tmp1133));
            }
            goto $l1121;
            $l1122:;
        }
    }
    }
    {
        ITable* $tmp1136 = ((panda$collections$Iterable*) p_st->parents)->$class->itable;
        while ($tmp1136->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1136 = $tmp1136->next;
        }
        $fn1138 $tmp1137 = $tmp1136->methods[0];
        panda$collections$Iterator* $tmp1139 = $tmp1137(((panda$collections$Iterable*) p_st->parents));
        p$Iter1135 = $tmp1139;
        $l1140:;
        ITable* $tmp1142 = p$Iter1135->$class->itable;
        while ($tmp1142->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1142 = $tmp1142->next;
        }
        $fn1144 $tmp1143 = $tmp1142->methods[0];
        panda$core$Bit $tmp1145 = $tmp1143(p$Iter1135);
        panda$core$Bit $tmp1146 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1145);
        if (!$tmp1146.value) goto $l1141;
        {
            ITable* $tmp1148 = p$Iter1135->$class->itable;
            while ($tmp1148->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1148 = $tmp1148->next;
            }
            $fn1150 $tmp1149 = $tmp1148->methods[1];
            panda$core$Object* $tmp1151 = $tmp1149(p$Iter1135);
            p1147 = ((org$pandalanguage$pandac$SymbolTable*) $tmp1151);
            org$pandalanguage$pandac$Compiler$addInheritedMethods$org$pandalanguage$pandac$SymbolTable$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p1147, p_name, methods1107, p_types);
        }
        goto $l1140;
        $l1141:;
    }
    panda$collections$Array* $tmp1153 = (panda$collections$Array*) malloc(40);
    $tmp1153->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1153->refCount.value = 1;
    panda$collections$Array$init($tmp1153);
    children1152 = $tmp1153;
    if (((panda$core$Bit) { p_target != NULL }).value) {
    {
        panda$collections$Array$add$panda$collections$Array$T(children1152, ((panda$core$Object*) p_target));
    }
    }
    panda$core$Int64 $tmp1155 = panda$collections$Array$get_count$R$panda$core$Int64(methods1107);
    panda$core$Bit $tmp1156 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1155, ((panda$core$Int64) { 1 }));
    if ($tmp1156.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp1157 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp1157->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp1157->refCount.value = 1;
        panda$core$Object* $tmp1159 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(methods1107, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Type* $tmp1160 = org$pandalanguage$pandac$MethodRef$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$MethodRef*) $tmp1159));
        panda$core$Object* $tmp1161 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(methods1107, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1157, ((panda$core$Int64) { 1002 }), p_position, $tmp1160, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodRef*) $tmp1161)), ((panda$collections$ListView*) children1152));
        return $tmp1157;
    }
    }
    else {
    {
        panda$core$Int64 $tmp1162 = panda$collections$Array$get_count$R$panda$core$Int64(methods1107);
        panda$core$Bit $tmp1163 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1162, ((panda$core$Int64) { 0 }));
        PANDA_ASSERT($tmp1163.value);
        panda$collections$Array* $tmp1165 = (panda$collections$Array*) malloc(40);
        $tmp1165->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp1165->refCount.value = 1;
        panda$collections$Array$init($tmp1165);
        types1164 = $tmp1165;
        {
            ITable* $tmp1168 = ((panda$collections$Iterable*) methods1107)->$class->itable;
            while ($tmp1168->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1168 = $tmp1168->next;
            }
            $fn1170 $tmp1169 = $tmp1168->methods[0];
            panda$collections$Iterator* $tmp1171 = $tmp1169(((panda$collections$Iterable*) methods1107));
            m$Iter1167 = $tmp1171;
            $l1172:;
            ITable* $tmp1174 = m$Iter1167->$class->itable;
            while ($tmp1174->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1174 = $tmp1174->next;
            }
            $fn1176 $tmp1175 = $tmp1174->methods[0];
            panda$core$Bit $tmp1177 = $tmp1175(m$Iter1167);
            panda$core$Bit $tmp1178 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1177);
            if (!$tmp1178.value) goto $l1173;
            {
                ITable* $tmp1180 = m$Iter1167->$class->itable;
                while ($tmp1180->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1180 = $tmp1180->next;
                }
                $fn1182 $tmp1181 = $tmp1180->methods[1];
                panda$core$Object* $tmp1183 = $tmp1181(m$Iter1167);
                m1179 = ((org$pandalanguage$pandac$MethodRef*) $tmp1183);
                org$pandalanguage$pandac$Type* $tmp1184 = org$pandalanguage$pandac$MethodRef$type$R$org$pandalanguage$pandac$Type(m1179);
                panda$collections$Array$add$panda$collections$Array$T(types1164, ((panda$core$Object*) $tmp1184));
            }
            goto $l1172;
            $l1173:;
        }
        org$pandalanguage$pandac$IRNode* $tmp1185 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp1185->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp1185->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp1187 = (org$pandalanguage$pandac$Type*) malloc(96);
        $tmp1187->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
        $tmp1187->refCount.value = 1;
        org$pandalanguage$pandac$Type$init$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp1187, ((panda$collections$ListView*) types1164));
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1185, ((panda$core$Int64) { 1003 }), p_position, $tmp1187, ((panda$core$Object*) methods1107), ((panda$collections$ListView*) children1152));
        return $tmp1185;
    }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$symbolRef$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$Symbol* p_s, org$pandalanguage$pandac$SymbolTable* p_st) {
    org$pandalanguage$pandac$ClassDecl* cl1189;
    org$pandalanguage$pandac$FieldDecl* f1205;
    panda$collections$Array* children1208;
    org$pandalanguage$pandac$Type* effectiveType1213;
    org$pandalanguage$pandac$IRNode* result1218;
    switch (p_s->kind.value) {
        case 200:
        {
            PANDA_ASSERT(((panda$core$Bit) { p_target == NULL }).value);
            org$pandalanguage$pandac$ClassDecl* $tmp1190 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Position$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_position, ((org$pandalanguage$pandac$Alias*) p_s)->fullName);
            cl1189 = $tmp1190;
            if (((panda$core$Bit) { cl1189 != NULL }).value) {
            {
                org$pandalanguage$pandac$Type* $tmp1191 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl1189);
                org$pandalanguage$pandac$Compiler$checkGenericParameters$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_position, cl1189, $tmp1191);
                org$pandalanguage$pandac$IRNode* $tmp1192 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1192->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1192->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1194 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$Type* $tmp1195 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl1189);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1192, ((panda$core$Int64) { 1001 }), p_position, $tmp1194, $tmp1195);
                return $tmp1192;
            }
            }
            return NULL;
        }
        break;
        case 201:
        {
            org$pandalanguage$pandac$Type* $tmp1196 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) p_s));
            org$pandalanguage$pandac$Compiler$checkGenericParameters$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_position, ((org$pandalanguage$pandac$ClassDecl*) p_s), $tmp1196);
            org$pandalanguage$pandac$IRNode* $tmp1197 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp1197->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1197->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp1199 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$Type* $tmp1200 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) p_s));
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1197, ((panda$core$Int64) { 1001 }), p_position, $tmp1199, $tmp1200);
            return $tmp1197;
        }
        break;
        case 204:
        case 205:
        {
            panda$collections$ListView* $tmp1201 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$IRNode$Q$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p_target);
            org$pandalanguage$pandac$IRNode* $tmp1202 = org$pandalanguage$pandac$Compiler$getMethodReference$org$pandalanguage$pandac$SymbolTable$org$pandalanguage$pandac$IRNode$Q$panda$core$String$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$IRNode(self, p_st, p_target, p_s->name, p_position, $tmp1201);
            return $tmp1202;
        }
        break;
        case 208:
        {
            org$pandalanguage$pandac$IRNode* $tmp1203 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp1203->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1203->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp1203, ((panda$core$Int64) { 1016 }), p_position, ((org$pandalanguage$pandac$Variable*) p_s)->type, ((org$pandalanguage$pandac$Variable*) p_s));
            return $tmp1203;
        }
        break;
        case 202:
        {
            f1205 = ((org$pandalanguage$pandac$FieldDecl*) p_s);
            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self, f1205);
            org$pandalanguage$pandac$Type* $tmp1206 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1207 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(f1205->type, $tmp1206);
            if ($tmp1207.value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp1209 = (panda$collections$Array*) malloc(40);
            $tmp1209->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1209->refCount.value = 1;
            panda$collections$Array$init($tmp1209);
            children1208 = $tmp1209;
            if (((panda$core$Bit) { p_target != NULL }).value) {
            {
                panda$core$Bit $tmp1211 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1024 }));
                if ($tmp1211.value) {
                {
                    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_target->position, &$s1212);
                    return NULL;
                }
                }
                org$pandalanguage$pandac$Type* $tmp1214 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_target->type, f1205->type);
                effectiveType1213 = $tmp1214;
                panda$core$Bit $tmp1215 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(f1205->annotations);
                if ($tmp1215.value) {
                {
                    panda$collections$Array$add$panda$collections$Array$T(children1208, ((panda$core$Object*) p_target));
                }
                }
                else {
                {
                    org$pandalanguage$pandac$Type* $tmp1216 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(f1205->owner);
                    org$pandalanguage$pandac$IRNode* $tmp1217 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_target, $tmp1216);
                    panda$collections$Array$add$panda$collections$Array$T(children1208, ((panda$core$Object*) $tmp1217));
                }
                }
                org$pandalanguage$pandac$IRNode* $tmp1219 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1219->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1219->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1219, ((panda$core$Int64) { 1026 }), p_position, f1205->type, ((panda$core$Object*) p_s), ((panda$collections$ListView*) children1208));
                result1218 = $tmp1219;
                panda$core$Bit $tmp1221 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(effectiveType1213, result1218->type);
                if ($tmp1221.value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp1222 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, result1218, p_position, ((panda$core$Bit) { false }), effectiveType1213);
                    result1218 = $tmp1222;
                }
                }
                return result1218;
            }
            }
            else {
            {
                org$pandalanguage$pandac$IRNode* $tmp1223 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1223->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1223->refCount.value = 1;
                panda$core$Object* $tmp1225 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
                org$pandalanguage$pandac$Type* $tmp1226 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp1225));
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp1223, ((panda$core$Int64) { 1025 }), p_position, $tmp1226);
                panda$collections$Array$add$panda$collections$Array$T(children1208, ((panda$core$Object*) $tmp1223));
                org$pandalanguage$pandac$IRNode* $tmp1227 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1227->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1227->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1227, ((panda$core$Int64) { 1026 }), p_position, f1205->type, ((panda$core$Object*) p_s), ((panda$collections$ListView*) children1208));
                return $tmp1227;
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
    panda$collections$HashMap* typeMap1235;
    org$pandalanguage$pandac$Type* base1238;
    org$pandalanguage$pandac$ClassDecl* cl1240;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1242;
    switch (p_context->typeKind.value) {
        case 10:
        {
            return p_raw;
        }
        break;
        case 11:
        {
            panda$core$Int64 $tmp1229 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_context->subtypes);
            panda$core$Bit $tmp1230 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1229, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp1230.value);
            panda$core$Object* $tmp1231 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_context->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp1232 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$Type*) $tmp1231), p_raw);
            return $tmp1232;
        }
        break;
        case 21:
        {
            panda$core$Int64 $tmp1233 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_context->subtypes);
            panda$core$Bit $tmp1234 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp1233, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1234.value);
            panda$collections$HashMap* $tmp1236 = (panda$collections$HashMap*) malloc(56);
            $tmp1236->$class = (panda$core$Class*) &panda$collections$HashMap$class;
            $tmp1236->refCount.value = 1;
            panda$collections$HashMap$init($tmp1236);
            typeMap1235 = $tmp1236;
            panda$core$Object* $tmp1239 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_context->subtypes, ((panda$core$Int64) { 0 }));
            base1238 = ((org$pandalanguage$pandac$Type*) $tmp1239);
            org$pandalanguage$pandac$ClassDecl* $tmp1241 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Symbol*) base1238)->name);
            cl1240 = $tmp1241;
            PANDA_ASSERT(((panda$core$Bit) { cl1240 != NULL }).value);
            panda$core$Int64 $tmp1243 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_context->subtypes);
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp1242, ((panda$core$Int64) { 1 }), $tmp1243, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
            int64_t $tmp1245 = $tmp1242.start.value;
            panda$core$Int64 i1244 = { $tmp1245 };
            int64_t $tmp1247 = $tmp1242.end.value;
            int64_t $tmp1248 = $tmp1242.step.value;
            bool $tmp1249 = $tmp1242.inclusive.value;
            bool $tmp1256 = $tmp1248 > 0;
            if ($tmp1256) goto $l1254; else goto $l1255;
            $l1254:;
            if ($tmp1249) goto $l1257; else goto $l1258;
            $l1257:;
            if ($tmp1245 <= $tmp1247) goto $l1250; else goto $l1252;
            $l1258:;
            if ($tmp1245 < $tmp1247) goto $l1250; else goto $l1252;
            $l1255:;
            if ($tmp1249) goto $l1259; else goto $l1260;
            $l1259:;
            if ($tmp1245 >= $tmp1247) goto $l1250; else goto $l1252;
            $l1260:;
            if ($tmp1245 > $tmp1247) goto $l1250; else goto $l1252;
            $l1250:;
            {
                panda$core$String* $tmp1263 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) cl1240)->name, &$s1262);
                panda$core$Int64 $tmp1264 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i1244, ((panda$core$Int64) { 1 }));
                ITable* $tmp1265 = ((panda$collections$ListView*) cl1240->parameters)->$class->itable;
                while ($tmp1265->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp1265 = $tmp1265->next;
                }
                $fn1267 $tmp1266 = $tmp1265->methods[0];
                panda$core$Object* $tmp1268 = $tmp1266(((panda$collections$ListView*) cl1240->parameters), $tmp1264);
                panda$core$String* $tmp1269 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1263, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp1268))->name);
                panda$core$Object* $tmp1270 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_context->subtypes, i1244);
                panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(typeMap1235, ((panda$collections$Key*) $tmp1269), ((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp1270)));
            }
            $l1253:;
            if ($tmp1256) goto $l1272; else goto $l1273;
            $l1272:;
            int64_t $tmp1274 = $tmp1247 - i1244.value;
            if ($tmp1249) goto $l1275; else goto $l1276;
            $l1275:;
            if ($tmp1274 >= $tmp1248) goto $l1271; else goto $l1252;
            $l1276:;
            if ($tmp1274 > $tmp1248) goto $l1271; else goto $l1252;
            $l1273:;
            int64_t $tmp1278 = i1244.value - $tmp1247;
            if ($tmp1249) goto $l1279; else goto $l1280;
            $l1279:;
            if ($tmp1278 >= -$tmp1248) goto $l1271; else goto $l1252;
            $l1280:;
            if ($tmp1278 > -$tmp1248) goto $l1271; else goto $l1252;
            $l1271:;
            i1244.value += $tmp1248;
            goto $l1250;
            $l1252:;
            org$pandalanguage$pandac$Type* $tmp1282 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(p_raw, typeMap1235);
            return $tmp1282;
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
    org$pandalanguage$pandac$Type* $tmp1283 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1284 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_type, $tmp1283);
    if ($tmp1284.value) {
    {
        org$pandalanguage$pandac$Type* $tmp1285 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
        return $tmp1285;
    }
    }
    org$pandalanguage$pandac$Type* $tmp1286 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1287 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_type, $tmp1286);
    if ($tmp1287.value) {
    {
        org$pandalanguage$pandac$Type* $tmp1288 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
        return $tmp1288;
    }
    }
    return p_type;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    panda$collections$Array* args1296;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1297;
    org$pandalanguage$pandac$IRNode* c1299;
    switch (p_expr->kind.value) {
        case 1031:
        {
            panda$core$Object* $tmp1289 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp1290 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$IRNode*) $tmp1289)->type);
            panda$core$Object* $tmp1291 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
            org$pandalanguage$pandac$Type* $tmp1292 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$IRNode*) $tmp1291)->type);
            org$pandalanguage$pandac$Type* $tmp1293 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1290, $tmp1292);
            org$pandalanguage$pandac$Type* $tmp1294 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, $tmp1293);
            org$pandalanguage$pandac$Type* $tmp1295 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1294);
            return $tmp1295;
        }
        break;
        case 1040:
        {
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1297, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
            panda$collections$Array* $tmp1298 = panda$collections$Array$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT(p_expr->children, $tmp1297);
            args1296 = $tmp1298;
            panda$core$Object* $tmp1300 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp1302 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1300), &$s1301, ((panda$collections$ListView*) args1296));
            c1299 = $tmp1302;
            if (((panda$core$Bit) { c1299 == NULL }).value) {
            {
                org$pandalanguage$pandac$Type* $tmp1303 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
                return $tmp1303;
            }
            }
            return c1299->type;
        }
        break;
    }
    org$pandalanguage$pandac$Type* $tmp1304 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_expr->type);
    return $tmp1304;
}
panda$core$Int64$nullable org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type, org$pandalanguage$pandac$Type* p_target) {
    panda$core$Int64$nullable result1315;
    panda$core$Int64$nullable result1319;
    panda$core$Int64$nullable best1328;
    panda$collections$Iterator* t$Iter1329;
    org$pandalanguage$pandac$Type* t1341;
    panda$core$Int64$nullable cost1346;
    org$pandalanguage$pandac$ClassDecl* cl1360;
    panda$core$Int64$nullable cost1362;
    panda$collections$Iterator* intf$Iter1367;
    org$pandalanguage$pandac$Type* intf1379;
    panda$core$Int64$nullable cost1384;
    PANDA_ASSERT(p_type->resolved.value);
    PANDA_ASSERT(p_target->resolved.value);
    panda$core$Bit $tmp1305 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_type, p_target);
    if ($tmp1305.value) {
    {
        return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
    }
    }
    org$pandalanguage$pandac$Type* $tmp1306 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1307 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_type, $tmp1306);
    if ($tmp1307.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    panda$core$Bit $tmp1308 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 23 }));
    if ($tmp1308.value) {
    {
        panda$core$Bit $tmp1309 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp1309.value) {
        {
            return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
        }
        }
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    panda$core$Bit $tmp1311 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 11 }));
    bool $tmp1310 = $tmp1311.value;
    if (!$tmp1310) goto $l1312;
    panda$core$Bit $tmp1313 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
    $tmp1310 = $tmp1313.value;
    $l1312:;
    panda$core$Bit $tmp1314 = { $tmp1310 };
    if ($tmp1314.value) {
    {
        panda$core$Object* $tmp1316 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Int64$nullable $tmp1317 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$Type*) $tmp1316), p_target);
        result1315 = $tmp1317;
        if (((panda$core$Bit) { !result1315.nonnull }).value) {
        {
            return ((panda$core$Int64$nullable) { .nonnull = false });
        }
        }
        panda$core$Int64 $tmp1318 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) result1315.value), ((panda$core$Int64) { 1 }));
        return ((panda$core$Int64$nullable) { $tmp1318, true });
    }
    }
    switch (p_target->typeKind.value) {
        case 11:
        {
            panda$core$Object* $tmp1320 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$Int64$nullable $tmp1321 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_type, ((org$pandalanguage$pandac$Type*) $tmp1320));
            result1319 = $tmp1321;
            if (((panda$core$Bit) { !result1319.nonnull }).value) {
            {
                return ((panda$core$Int64$nullable) { .nonnull = false });
            }
            }
            panda$core$Int64 $tmp1322 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) result1319.value), ((panda$core$Int64) { 1 }));
            return ((panda$core$Int64$nullable) { $tmp1322, true });
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
            panda$core$Bit $tmp1323 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 21 }));
            if ($tmp1323.value) {
            {
                panda$core$Object* $tmp1324 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
                panda$core$Int64$nullable $tmp1325 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$Type*) $tmp1324), p_target);
                return $tmp1325;
            }
            }
        }
        break;
    }
    switch (p_type->typeKind.value) {
        case 19:
        {
            org$pandalanguage$pandac$Type* $tmp1326 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            panda$core$Int64$nullable $tmp1327 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1326, p_target);
            return $tmp1327;
        }
        break;
        case 17:
        {
            best1328 = ((panda$core$Int64$nullable) { .nonnull = false });
            {
                ITable* $tmp1330 = ((panda$collections$Iterable*) p_type->subtypes)->$class->itable;
                while ($tmp1330->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1330 = $tmp1330->next;
                }
                $fn1332 $tmp1331 = $tmp1330->methods[0];
                panda$collections$Iterator* $tmp1333 = $tmp1331(((panda$collections$Iterable*) p_type->subtypes));
                t$Iter1329 = $tmp1333;
                $l1334:;
                ITable* $tmp1336 = t$Iter1329->$class->itable;
                while ($tmp1336->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1336 = $tmp1336->next;
                }
                $fn1338 $tmp1337 = $tmp1336->methods[0];
                panda$core$Bit $tmp1339 = $tmp1337(t$Iter1329);
                panda$core$Bit $tmp1340 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1339);
                if (!$tmp1340.value) goto $l1335;
                {
                    ITable* $tmp1342 = t$Iter1329->$class->itable;
                    while ($tmp1342->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1342 = $tmp1342->next;
                    }
                    $fn1344 $tmp1343 = $tmp1342->methods[1];
                    panda$core$Object* $tmp1345 = $tmp1343(t$Iter1329);
                    t1341 = ((org$pandalanguage$pandac$Type*) $tmp1345);
                    panda$core$Int64$nullable $tmp1347 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, t1341, p_target);
                    cost1346 = $tmp1347;
                    bool $tmp1348 = ((panda$core$Bit) { cost1346.nonnull }).value;
                    if (!$tmp1348) goto $l1349;
                    bool $tmp1350 = ((panda$core$Bit) { !best1328.nonnull }).value;
                    if ($tmp1350) goto $l1351;
                    panda$core$Bit $tmp1352 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost1346.value), ((panda$core$Int64) best1328.value));
                    $tmp1350 = $tmp1352.value;
                    $l1351:;
                    panda$core$Bit $tmp1353 = { $tmp1350 };
                    $tmp1348 = $tmp1353.value;
                    $l1349:;
                    panda$core$Bit $tmp1354 = { $tmp1348 };
                    if ($tmp1354.value) {
                    {
                        best1328 = cost1346;
                    }
                    }
                }
                goto $l1334;
                $l1335:;
            }
            return best1328;
        }
        break;
        case 22:
        {
            panda$core$Int64$nullable $tmp1355 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_type->parameter->bound, p_target);
            return $tmp1355;
        }
        break;
    }
    panda$core$Bit $tmp1356 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_target);
    panda$core$Bit $tmp1357 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1356);
    if ($tmp1357.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    panda$core$Bit $tmp1358 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_type);
    panda$core$Bit $tmp1359 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1358);
    if ($tmp1359.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp1361 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_type);
    cl1360 = $tmp1361;
    PANDA_ASSERT(((panda$core$Bit) { cl1360 != NULL }).value);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, cl1360);
    if (((panda$core$Bit) { cl1360->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp1363 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_type, cl1360->rawSuper);
        org$pandalanguage$pandac$Type* $tmp1364 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_type, $tmp1363);
        panda$core$Int64$nullable $tmp1365 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1364, p_target);
        cost1362 = $tmp1365;
        if (((panda$core$Bit) { cost1362.nonnull }).value) {
        {
            panda$core$Int64 $tmp1366 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) cost1362.value), ((panda$core$Int64) ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }).value));
            return ((panda$core$Int64$nullable) { $tmp1366, true });
        }
        }
    }
    }
    {
        ITable* $tmp1368 = ((panda$collections$Iterable*) cl1360->rawInterfaces)->$class->itable;
        while ($tmp1368->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1368 = $tmp1368->next;
        }
        $fn1370 $tmp1369 = $tmp1368->methods[0];
        panda$collections$Iterator* $tmp1371 = $tmp1369(((panda$collections$Iterable*) cl1360->rawInterfaces));
        intf$Iter1367 = $tmp1371;
        $l1372:;
        ITable* $tmp1374 = intf$Iter1367->$class->itable;
        while ($tmp1374->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1374 = $tmp1374->next;
        }
        $fn1376 $tmp1375 = $tmp1374->methods[0];
        panda$core$Bit $tmp1377 = $tmp1375(intf$Iter1367);
        panda$core$Bit $tmp1378 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1377);
        if (!$tmp1378.value) goto $l1373;
        {
            ITable* $tmp1380 = intf$Iter1367->$class->itable;
            while ($tmp1380->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1380 = $tmp1380->next;
            }
            $fn1382 $tmp1381 = $tmp1380->methods[1];
            panda$core$Object* $tmp1383 = $tmp1381(intf$Iter1367);
            intf1379 = ((org$pandalanguage$pandac$Type*) $tmp1383);
            org$pandalanguage$pandac$Type* $tmp1385 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_type, intf1379);
            org$pandalanguage$pandac$Type* $tmp1386 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_type, $tmp1385);
            panda$core$Int64$nullable $tmp1387 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1386, p_target);
            cost1384 = $tmp1387;
            if (((panda$core$Bit) { cost1384.nonnull }).value) {
            {
                panda$core$Int64 $tmp1388 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) cost1384.value), ((panda$core$Int64) ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }).value));
                return ((panda$core$Int64$nullable) { $tmp1388, true });
            }
            }
        }
        goto $l1372;
        $l1373:;
    }
    return ((panda$core$Int64$nullable) { .nonnull = false });
}
panda$core$Int64 org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_value) {
    panda$core$Bit $tmp1390 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { -128 }));
    bool $tmp1389 = $tmp1390.value;
    if (!$tmp1389) goto $l1391;
    panda$core$Bit $tmp1392 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { 127 }));
    $tmp1389 = $tmp1392.value;
    $l1391:;
    panda$core$Bit $tmp1393 = { $tmp1389 };
    if ($tmp1393.value) {
    {
        return ((panda$core$Int64) { 8 });
    }
    }
    panda$core$Bit $tmp1395 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { -32768 }));
    bool $tmp1394 = $tmp1395.value;
    if (!$tmp1394) goto $l1396;
    panda$core$Bit $tmp1397 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { 32767 }));
    $tmp1394 = $tmp1397.value;
    $l1396:;
    panda$core$Bit $tmp1398 = { $tmp1394 };
    if ($tmp1398.value) {
    {
        return ((panda$core$Int64) { 16 });
    }
    }
    panda$core$Bit $tmp1400 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { -2147483648 }));
    bool $tmp1399 = $tmp1400.value;
    if (!$tmp1399) goto $l1401;
    panda$core$Bit $tmp1402 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { 2147483647 }));
    $tmp1399 = $tmp1402.value;
    $l1401:;
    panda$core$Bit $tmp1403 = { $tmp1399 };
    if ($tmp1403.value) {
    {
        return ((panda$core$Int64) { 32 });
    }
    }
    return ((panda$core$Int64) { 64 });
}
panda$core$Int64 org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64(org$pandalanguage$pandac$Compiler* self, panda$core$UInt64 p_value) {
    panda$core$Bit $tmp1404 = panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(p_value, ((panda$core$UInt64) { 255 }));
    if ($tmp1404.value) {
    {
        return ((panda$core$Int64) { 8 });
    }
    }
    panda$core$Bit $tmp1405 = panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(p_value, ((panda$core$UInt64) { 65535 }));
    if ($tmp1405.value) {
    {
        return ((panda$core$Int64) { 16 });
    }
    }
    panda$core$Bit $tmp1406 = panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(p_value, ((panda$core$UInt64) { 4294967295 }));
    if ($tmp1406.value) {
    {
        return ((panda$core$Int64) { 32 });
    }
    }
    return ((panda$core$Int64) { 64 });
}
panda$core$Int64$nullable org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr, org$pandalanguage$pandac$Type* p_target) {
    panda$core$Int64$nullable cost1409;
    panda$core$Int64$nullable cost11480;
    panda$core$Int64$nullable cost21484;
    org$pandalanguage$pandac$ClassDecl* targetClass1494;
    panda$collections$Iterator* m$Iter1496;
    org$pandalanguage$pandac$MethodDecl* m1508;
    panda$core$Int64$nullable cost1517;
    panda$core$Bit $tmp1407 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_expr->type, p_target);
    if ($tmp1407.value) {
    {
        return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
    }
    }
    switch (p_target->typeKind.value) {
        case 11:
        {
            panda$core$Bit $tmp1408 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1030 }));
            if ($tmp1408.value) {
            {
                return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
            }
            }
            panda$core$Object* $tmp1410 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$Int64$nullable $tmp1411 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, ((org$pandalanguage$pandac$Type*) $tmp1410));
            cost1409 = $tmp1411;
            if (((panda$core$Bit) { !cost1409.nonnull }).value) {
            {
                return ((panda$core$Int64$nullable) { .nonnull = false });
            }
            }
            panda$core$Bit $tmp1412 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->type->typeKind, ((panda$core$Int64) { 11 }));
            if ($tmp1412.value) {
            {
                return cost1409;
            }
            }
            panda$core$Int64 $tmp1413 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) cost1409.value), ((panda$core$Int64) { 1 }));
            return ((panda$core$Int64$nullable) { $tmp1413, true });
        }
        break;
        case 22:
        {
            panda$core$Int64$nullable $tmp1414 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, p_target->parameter->bound);
            return $tmp1414;
        }
        break;
    }
    switch (p_expr->kind.value) {
        case 1011:
        {
            panda$core$Bit $tmp1415 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 19 }));
            if ($tmp1415.value) {
            {
                return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
            }
            }
            panda$core$Bit $tmp1416 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_target);
            if ($tmp1416.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1417 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
                panda$core$Int64$nullable $tmp1418 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1417, p_target);
                return $tmp1418;
            }
            }
        }
        break;
        case 1004:
        {
            panda$core$Bit $tmp1421 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            bool $tmp1420 = $tmp1421.value;
            if (!$tmp1420) goto $l1422;
            panda$core$Int64 $tmp1423 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1424 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(self, $tmp1423);
            panda$core$Int64 $tmp1425 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1426 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1424, $tmp1425);
            $tmp1420 = $tmp1426.value;
            $l1422:;
            panda$core$Bit $tmp1427 = { $tmp1420 };
            bool $tmp1419 = $tmp1427.value;
            if ($tmp1419) goto $l1428;
            panda$core$Bit $tmp1430 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 13 }));
            bool $tmp1429 = $tmp1430.value;
            if (!$tmp1429) goto $l1431;
            panda$core$Int64 $tmp1432 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64(self, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1433 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1434 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1432, $tmp1433);
            $tmp1429 = $tmp1434.value;
            $l1431:;
            panda$core$Bit $tmp1435 = { $tmp1429 };
            $tmp1419 = $tmp1435.value;
            $l1428:;
            panda$core$Bit $tmp1436 = { $tmp1419 };
            if ($tmp1436.value) {
            {
                return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
            }
            }
            panda$core$Bit $tmp1437 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            panda$core$Bit $tmp1438 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1437);
            if ($tmp1438.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1439 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                panda$core$Int64$nullable $tmp1440 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1439, p_target);
                return $tmp1440;
            }
            }
        }
        break;
        case 1032:
        {
            panda$core$Bit $tmp1443 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            bool $tmp1442 = $tmp1443.value;
            if (!$tmp1442) goto $l1444;
            panda$core$Int64 $tmp1445 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1446 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp1445);
            panda$core$Int64 $tmp1447 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(self, $tmp1446);
            panda$core$Int64 $tmp1448 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1449 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1447, $tmp1448);
            $tmp1442 = $tmp1449.value;
            $l1444:;
            panda$core$Bit $tmp1450 = { $tmp1442 };
            bool $tmp1441 = $tmp1450.value;
            if ($tmp1441) goto $l1451;
            panda$core$Bit $tmp1453 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 13 }));
            bool $tmp1452 = $tmp1453.value;
            if (!$tmp1452) goto $l1454;
            panda$core$Int64 $tmp1455 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1456 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp1455);
            panda$core$Int64 $tmp1457 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(self, $tmp1456);
            panda$core$Int64 $tmp1458 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1459 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1457, $tmp1458);
            $tmp1452 = $tmp1459.value;
            $l1454:;
            panda$core$Bit $tmp1460 = { $tmp1452 };
            $tmp1441 = $tmp1460.value;
            $l1451:;
            panda$core$Bit $tmp1461 = { $tmp1441 };
            if ($tmp1461.value) {
            {
                return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
            }
            }
            panda$core$Bit $tmp1462 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            panda$core$Bit $tmp1463 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1462);
            if ($tmp1463.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1464 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                panda$core$Int64$nullable $tmp1465 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1464, p_target);
                return $tmp1465;
            }
            }
        }
        break;
        case 1031:
        {
            panda$core$Bit $tmp1466 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(p_target);
            if ($tmp1466.value) {
            {
                panda$core$Int64 $tmp1467 = panda$collections$Array$get_count$R$panda$core$Int64(p_expr->children);
                panda$core$Bit $tmp1468 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1467, ((panda$core$Int64) { 3 }));
                PANDA_ASSERT($tmp1468.value);
                panda$core$Object* $tmp1470 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Bit $tmp1471 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1470)->kind, ((panda$core$Int64) { 1030 }));
                bool $tmp1469 = $tmp1471.value;
                if (!$tmp1469) goto $l1472;
                panda$core$Object* $tmp1473 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
                panda$core$Bit $tmp1474 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1473)->kind, ((panda$core$Int64) { 1030 }));
                $tmp1469 = $tmp1474.value;
                $l1472:;
                panda$core$Bit $tmp1475 = { $tmp1469 };
                if ($tmp1475.value) {
                {
                    panda$core$Object* $tmp1476 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                    panda$core$Bit $tmp1477 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1476));
                    panda$core$Bit $tmp1478 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1477);
                    if ($tmp1478.value) {
                    {
                        return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
                    }
                    }
                    return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true });
                }
                }
                panda$core$Bit $tmp1479 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 21 }));
                PANDA_ASSERT($tmp1479.value);
                panda$core$Object* $tmp1481 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Object* $tmp1482 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                panda$core$Int64$nullable $tmp1483 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1481), ((org$pandalanguage$pandac$Type*) $tmp1482));
                cost11480 = $tmp1483;
                if (((panda$core$Bit) { !cost11480.nonnull }).value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Object* $tmp1485 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
                panda$core$Object* $tmp1486 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                panda$core$Int64$nullable $tmp1487 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1485), ((org$pandalanguage$pandac$Type*) $tmp1486));
                cost21484 = $tmp1487;
                if (((panda$core$Bit) { !cost21484.nonnull }).value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Int64 $tmp1488 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) cost11480.value), ((panda$core$Int64) cost21484.value));
                return ((panda$core$Int64$nullable) { $tmp1488, true });
            }
            }
            org$pandalanguage$pandac$Type* $tmp1489 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
            panda$core$Int64$nullable $tmp1490 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1489, p_target);
            return $tmp1490;
        }
        break;
        case 1040:
        {
            panda$core$Int64$nullable $tmp1491 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr->type, p_target);
            return $tmp1491;
        }
        break;
    }
    panda$core$Bit $tmp1492 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_target);
    panda$core$Bit $tmp1493 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1492);
    if ($tmp1493.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp1495 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_target);
    targetClass1494 = $tmp1495;
    if (((panda$core$Bit) { targetClass1494 == NULL }).value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    {
        ITable* $tmp1497 = ((panda$collections$Iterable*) targetClass1494->methods)->$class->itable;
        while ($tmp1497->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1497 = $tmp1497->next;
        }
        $fn1499 $tmp1498 = $tmp1497->methods[0];
        panda$collections$Iterator* $tmp1500 = $tmp1498(((panda$collections$Iterable*) targetClass1494->methods));
        m$Iter1496 = $tmp1500;
        $l1501:;
        ITable* $tmp1503 = m$Iter1496->$class->itable;
        while ($tmp1503->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1503 = $tmp1503->next;
        }
        $fn1505 $tmp1504 = $tmp1503->methods[0];
        panda$core$Bit $tmp1506 = $tmp1504(m$Iter1496);
        panda$core$Bit $tmp1507 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1506);
        if (!$tmp1507.value) goto $l1502;
        {
            ITable* $tmp1509 = m$Iter1496->$class->itable;
            while ($tmp1509->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1509 = $tmp1509->next;
            }
            $fn1511 $tmp1510 = $tmp1509->methods[1];
            panda$core$Object* $tmp1512 = $tmp1510(m$Iter1496);
            m1508 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1512);
            panda$core$Bit $tmp1513 = org$pandalanguage$pandac$Annotations$isImplicit$R$panda$core$Bit(m1508->annotations);
            if ($tmp1513.value) {
            {
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m1508);
                panda$core$Bit $tmp1514 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(m1508->methodKind, ((panda$core$Int64) { 59 }));
                PANDA_ASSERT($tmp1514.value);
                panda$core$Int64 $tmp1515 = panda$collections$Array$get_count$R$panda$core$Int64(m1508->parameters);
                panda$core$Bit $tmp1516 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1515, ((panda$core$Int64) { 1 }));
                PANDA_ASSERT($tmp1516.value);
                panda$core$Object* $tmp1518 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(m1508->parameters, ((panda$core$Int64) { 0 }));
                panda$core$Int64$nullable $tmp1519 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1518)->type);
                cost1517 = $tmp1519;
                if (((panda$core$Bit) { cost1517.nonnull }).value) {
                {
                    return cost1517;
                }
                }
            }
            }
        }
        goto $l1501;
        $l1502:;
    }
    PANDA_ASSERT(((panda$core$Bit) { p_expr->type != NULL }).value);
    panda$core$Int64$nullable $tmp1520 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr->type, p_target);
    return $tmp1520;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$doCoerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr, org$pandalanguage$pandac$Type* p_target) {
    panda$collections$Array* children1529;
    org$pandalanguage$pandac$IRNode* intermediate1534;
    org$pandalanguage$pandac$IRNode* coerced1562;
    org$pandalanguage$pandac$IRNode* coerced1583;
    org$pandalanguage$pandac$IRNode* varType1597;
    org$pandalanguage$pandac$Type* param1605;
    org$pandalanguage$pandac$IRNode* start1607;
    org$pandalanguage$pandac$IRNode* end1610;
    panda$collections$Array* args1613;
    org$pandalanguage$pandac$IRNode* target1620;
    panda$collections$ListView* methods1627;
    panda$collections$Array* args1629;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1630;
    panda$collections$Array* best1632;
    panda$core$Int64$nullable bestCost1635;
    panda$collections$Iterator* m$Iter1636;
    org$pandalanguage$pandac$MethodRef* m1648;
    panda$core$Int64$nullable cost1653;
    org$pandalanguage$pandac$IRNode* callTarget1659;
    org$pandalanguage$pandac$IRNode* result1665;
    panda$collections$Array* args1669;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1670;
    panda$collections$Array* children1682;
    org$pandalanguage$pandac$IRNode* intermediate1688;
    org$pandalanguage$pandac$ClassDecl* cl1693;
    panda$collections$Iterator* m$Iter1695;
    org$pandalanguage$pandac$MethodDecl* m1707;
    org$pandalanguage$pandac$IRNode* type1718;
    panda$collections$Array* args1723;
    panda$collections$Array* children1727;
    if (((panda$core$Bit) { p_expr == NULL }).value) {
    {
        return NULL;
    }
    }
    PANDA_ASSERT(p_expr->type->resolved.value);
    PANDA_ASSERT(p_target->resolved.value);
    panda$core$Bit $tmp1521 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_expr->type, p_target);
    if ($tmp1521.value) {
    {
        return p_expr;
    }
    }
    panda$core$Bit $tmp1523 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->type->typeKind, ((panda$core$Int64) { 11 }));
    bool $tmp1522 = $tmp1523.value;
    if (!$tmp1522) goto $l1524;
    panda$core$Bit $tmp1525 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
    $tmp1522 = $tmp1525.value;
    $l1524:;
    panda$core$Bit $tmp1526 = { $tmp1522 };
    if ($tmp1526.value) {
    {
        panda$core$Object* $tmp1527 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp1528 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1527), p_target);
        if ($tmp1528.value) {
        {
            panda$collections$Array* $tmp1530 = (panda$collections$Array*) malloc(40);
            $tmp1530->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1530->refCount.value = 1;
            panda$collections$Array$init($tmp1530);
            children1529 = $tmp1530;
            panda$collections$Array$add$panda$collections$Array$T(children1529, ((panda$core$Object*) p_expr));
            org$pandalanguage$pandac$IRNode* $tmp1532 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp1532->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1532->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1532, ((panda$core$Int64) { 1009 }), p_expr->position, p_target, ((panda$core$Object*) wrap_panda$core$Bit(((panda$core$Bit) { false }))), ((panda$collections$ListView*) children1529));
            return $tmp1532;
        }
        }
        panda$core$Object* $tmp1535 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->type->subtypes, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp1536 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, ((org$pandalanguage$pandac$Type*) $tmp1535));
        intermediate1534 = $tmp1536;
        org$pandalanguage$pandac$IRNode* $tmp1537 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, intermediate1534, p_target);
        return $tmp1537;
    }
    }
    switch (p_expr->kind.value) {
        case 1004:
        {
            panda$core$Bit $tmp1539 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            bool $tmp1538 = $tmp1539.value;
            if (!$tmp1538) goto $l1540;
            panda$core$Int64 $tmp1541 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64(self, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1542 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1543 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1541, $tmp1542);
            $tmp1538 = $tmp1543.value;
            $l1540:;
            panda$core$Bit $tmp1544 = { $tmp1538 };
            if ($tmp1544.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1545 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1545->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1545->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp1545, ((panda$core$Int64) { 1004 }), p_expr->position, p_target, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
                return $tmp1545;
            }
            }
            else {
            panda$core$Bit $tmp1548 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 13 }));
            bool $tmp1547 = $tmp1548.value;
            if (!$tmp1547) goto $l1549;
            panda$core$Int64 $tmp1550 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64(self, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1551 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1552 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1550, $tmp1551);
            $tmp1547 = $tmp1552.value;
            $l1549:;
            panda$core$Bit $tmp1553 = { $tmp1547 };
            if ($tmp1553.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1554 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1554->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1554->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp1554, ((panda$core$Int64) { 1004 }), p_expr->position, p_target, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
                return $tmp1554;
            }
            }
            }
            panda$core$Bit $tmp1557 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 10 }));
            bool $tmp1556 = $tmp1557.value;
            if (!$tmp1556) goto $l1558;
            panda$core$Bit $tmp1559 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            panda$core$Bit $tmp1560 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1559);
            $tmp1556 = $tmp1560.value;
            $l1558:;
            panda$core$Bit $tmp1561 = { $tmp1556 };
            if ($tmp1561.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1563 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp1564 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, $tmp1563);
                coerced1562 = $tmp1564;
                if (((panda$core$Bit) { coerced1562 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$IRNode* $tmp1565 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, coerced1562, p_target);
                return $tmp1565;
            }
            }
        }
        break;
        case 1032:
        {
            panda$core$Bit $tmp1567 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            bool $tmp1566 = $tmp1567.value;
            if (!$tmp1566) goto $l1568;
            panda$core$Int64 $tmp1569 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1570 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp1569);
            panda$core$Int64 $tmp1571 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(self, $tmp1570);
            panda$core$Int64 $tmp1572 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1573 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1571, $tmp1572);
            $tmp1566 = $tmp1573.value;
            $l1568:;
            panda$core$Bit $tmp1574 = { $tmp1566 };
            if ($tmp1574.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1575 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1575->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1575->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp1575, ((panda$core$Int64) { 1032 }), p_expr->position, p_target, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
                return $tmp1575;
            }
            }
            panda$core$Bit $tmp1578 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 10 }));
            bool $tmp1577 = $tmp1578.value;
            if (!$tmp1577) goto $l1579;
            panda$core$Bit $tmp1580 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            panda$core$Bit $tmp1581 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1580);
            $tmp1577 = $tmp1581.value;
            $l1579:;
            panda$core$Bit $tmp1582 = { $tmp1577 };
            if ($tmp1582.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1584 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp1585 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, $tmp1584);
                coerced1583 = $tmp1585;
                if (((panda$core$Bit) { coerced1583 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$IRNode* $tmp1586 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, coerced1583, p_target);
                return $tmp1586;
            }
            }
        }
        break;
        case 1011:
        {
            org$pandalanguage$pandac$Type* $tmp1587 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1588 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1587);
            if ($tmp1588.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1589 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1589->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1589->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp1589, ((panda$core$Int64) { 1011 }), p_expr->position, p_target, ((panda$core$Bit$wrapper*) p_expr->payload)->value);
                return $tmp1589;
            }
            }
            panda$core$Bit $tmp1592 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_target);
            bool $tmp1591 = $tmp1592.value;
            if (!$tmp1591) goto $l1593;
            org$pandalanguage$pandac$Type* $tmp1594 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1595 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1594);
            $tmp1591 = $tmp1595.value;
            $l1593:;
            panda$core$Bit $tmp1596 = { $tmp1591 };
            if ($tmp1596.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1598 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp1599 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, $tmp1598);
                varType1597 = $tmp1599;
                if (((panda$core$Bit) { varType1597 != NULL }).value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp1600 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, varType1597, p_target);
                    return $tmp1600;
                }
                }
            }
            }
        }
        break;
        case 1031:
        {
            panda$core$Int64 $tmp1601 = panda$collections$Array$get_count$R$panda$core$Int64(p_expr->children);
            panda$core$Bit $tmp1602 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1601, ((panda$core$Int64) { 3 }));
            PANDA_ASSERT($tmp1602.value);
            panda$core$Bit $tmp1603 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(p_target);
            if ($tmp1603.value) {
            {
                panda$core$Bit $tmp1604 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 21 }));
                PANDA_ASSERT($tmp1604.value);
                panda$core$Object* $tmp1606 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                param1605 = ((org$pandalanguage$pandac$Type*) $tmp1606);
                panda$core$Object* $tmp1608 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$IRNode* $tmp1609 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1608), param1605);
                start1607 = $tmp1609;
                if (((panda$core$Bit) { start1607 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$core$Object* $tmp1611 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$IRNode* $tmp1612 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1611), param1605);
                end1610 = $tmp1612;
                if (((panda$core$Bit) { end1610 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp1614 = (panda$collections$Array*) malloc(40);
                $tmp1614->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp1614->refCount.value = 1;
                panda$collections$Array$init($tmp1614);
                args1613 = $tmp1614;
                panda$collections$Array$add$panda$collections$Array$T(args1613, ((panda$core$Object*) start1607));
                panda$collections$Array$add$panda$collections$Array$T(args1613, ((panda$core$Object*) end1610));
                panda$core$Object* $tmp1616 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 2 }));
                panda$collections$Array$add$panda$collections$Array$T(args1613, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp1616)));
                org$pandalanguage$pandac$IRNode* $tmp1617 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1617->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1617->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1619 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp1617, ((panda$core$Int64) { 1011 }), p_expr->position, $tmp1619, ((panda$core$Bit$wrapper*) p_expr->payload)->value);
                panda$collections$Array$add$panda$collections$Array$T(args1613, ((panda$core$Object*) $tmp1617));
                org$pandalanguage$pandac$IRNode* $tmp1621 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1621->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1621->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1623 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1621, ((panda$core$Int64) { 1001 }), p_expr->position, $tmp1623, p_target);
                target1620 = $tmp1621;
                org$pandalanguage$pandac$IRNode* $tmp1624 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target1620, ((panda$collections$ListView*) args1613));
                return $tmp1624;
            }
            }
            else {
            {
                org$pandalanguage$pandac$IRNode* $tmp1625 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp1626 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp1625, p_target);
                return $tmp1626;
            }
            }
        }
        break;
        case 1039:
        {
            panda$core$Object* $tmp1628 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            methods1627 = ((panda$collections$ListView*) ((org$pandalanguage$pandac$IRNode*) $tmp1628)->payload);
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1630, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
            panda$collections$Array* $tmp1631 = panda$collections$Array$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT(p_expr->children, $tmp1630);
            args1629 = $tmp1631;
            panda$collections$Array* $tmp1633 = (panda$collections$Array*) malloc(40);
            $tmp1633->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1633->refCount.value = 1;
            panda$collections$Array$init($tmp1633);
            best1632 = $tmp1633;
            bestCost1635 = ((panda$core$Int64$nullable) { .nonnull = false });
            {
                ITable* $tmp1637 = ((panda$collections$Iterable*) methods1627)->$class->itable;
                while ($tmp1637->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1637 = $tmp1637->next;
                }
                $fn1639 $tmp1638 = $tmp1637->methods[0];
                panda$collections$Iterator* $tmp1640 = $tmp1638(((panda$collections$Iterable*) methods1627));
                m$Iter1636 = $tmp1640;
                $l1641:;
                ITable* $tmp1643 = m$Iter1636->$class->itable;
                while ($tmp1643->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1643 = $tmp1643->next;
                }
                $fn1645 $tmp1644 = $tmp1643->methods[0];
                panda$core$Bit $tmp1646 = $tmp1644(m$Iter1636);
                panda$core$Bit $tmp1647 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1646);
                if (!$tmp1647.value) goto $l1642;
                {
                    ITable* $tmp1649 = m$Iter1636->$class->itable;
                    while ($tmp1649->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1649 = $tmp1649->next;
                    }
                    $fn1651 $tmp1650 = $tmp1649->methods[1];
                    panda$core$Object* $tmp1652 = $tmp1650(m$Iter1636);
                    m1648 = ((org$pandalanguage$pandac$MethodRef*) $tmp1652);
                    panda$core$Int64$nullable $tmp1654 = org$pandalanguage$pandac$Compiler$callCost$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(self, m1648, ((panda$collections$ListView*) args1629), p_target);
                    cost1653 = $tmp1654;
                    if (((panda$core$Bit) { !cost1653.nonnull }).value) {
                    {
                        goto $l1641;
                    }
                    }
                    if (((panda$core$Bit) { !bestCost1635.nonnull }).value) {
                    {
                        panda$collections$Array$add$panda$collections$Array$T(best1632, ((panda$core$Object*) m1648));
                        bestCost1635 = cost1653;
                        goto $l1641;
                    }
                    }
                    panda$core$Bit $tmp1655 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost1653.value), ((panda$core$Int64) bestCost1635.value));
                    if ($tmp1655.value) {
                    {
                        panda$collections$Array$clear(best1632);
                        bestCost1635 = cost1653;
                    }
                    }
                    panda$core$Bit $tmp1656 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost1653.value), ((panda$core$Int64) bestCost1635.value));
                    if ($tmp1656.value) {
                    {
                        panda$collections$Array$add$panda$collections$Array$T(best1632, ((panda$core$Object*) m1648));
                    }
                    }
                }
                goto $l1641;
                $l1642:;
            }
            panda$core$Int64 $tmp1657 = panda$collections$Array$get_count$R$panda$core$Int64(best1632);
            panda$core$Bit $tmp1658 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1657, ((panda$core$Int64) { 1 }));
            if ($tmp1658.value) {
            {
                panda$core$Object* $tmp1660 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Int64 $tmp1661 = panda$collections$Array$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp1660)->children);
                panda$core$Bit $tmp1662 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1661, ((panda$core$Int64) { 0 }));
                if ($tmp1662.value) {
                {
                    panda$core$Object* $tmp1663 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                    panda$core$Object* $tmp1664 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp1663)->children, ((panda$core$Int64) { 0 }));
                    callTarget1659 = ((org$pandalanguage$pandac$IRNode*) $tmp1664);
                }
                }
                else {
                {
                    callTarget1659 = NULL;
                }
                }
                panda$core$Object* $tmp1666 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(best1632, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$IRNode* $tmp1667 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr->position, callTarget1659, ((org$pandalanguage$pandac$MethodRef*) $tmp1666), ((panda$collections$ListView*) args1629));
                result1665 = $tmp1667;
                org$pandalanguage$pandac$IRNode* $tmp1668 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, result1665, p_target);
                return $tmp1668;
            }
            }
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        break;
        case 1040:
        {
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1670, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
            panda$collections$Array* $tmp1671 = panda$collections$Array$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT(p_expr->children, $tmp1670);
            args1669 = $tmp1671;
            panda$core$Object* $tmp1672 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp1674 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1672), &$s1673, ((panda$collections$ListView*) args1669), p_target);
            org$pandalanguage$pandac$IRNode* $tmp1675 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp1674, p_target);
            return $tmp1675;
        }
        break;
    }
    panda$core$Bit $tmp1676 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp1676.value) {
    {
        panda$core$Bit $tmp1677 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1030 }));
        if ($tmp1677.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp1678 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp1678->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1678->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp1678, ((panda$core$Int64) { 1030 }), p_expr->position, p_target);
            return $tmp1678;
        }
        }
        panda$core$Object* $tmp1680 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp1681 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_expr->type, ((org$pandalanguage$pandac$Type*) $tmp1680));
        if ($tmp1681.value) {
        {
            panda$collections$Array* $tmp1683 = (panda$collections$Array*) malloc(40);
            $tmp1683->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1683->refCount.value = 1;
            panda$collections$Array$init($tmp1683);
            children1682 = $tmp1683;
            panda$collections$Array$add$panda$collections$Array$T(children1682, ((panda$core$Object*) p_expr));
            org$pandalanguage$pandac$IRNode* $tmp1685 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp1685->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1685->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1685, ((panda$core$Int64) { 1009 }), p_expr->position, p_target, ((panda$core$Object*) wrap_panda$core$Bit(((panda$core$Bit) { false }))), ((panda$collections$ListView*) children1682));
            return $tmp1685;
        }
        }
        panda$core$Bit $tmp1687 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_expr->type->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp1687.value) {
        {
            panda$core$Object* $tmp1689 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp1690 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, ((org$pandalanguage$pandac$Type*) $tmp1689));
            intermediate1688 = $tmp1690;
            org$pandalanguage$pandac$IRNode* $tmp1691 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, intermediate1688, p_target);
            return $tmp1691;
        }
        }
    }
    }
    panda$core$Int64$nullable $tmp1692 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, p_target);
    if (((panda$core$Bit) { $tmp1692.nonnull }).value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp1694 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_target);
        cl1693 = $tmp1694;
        if (((panda$core$Bit) { cl1693 != NULL }).value) {
        {
            {
                ITable* $tmp1696 = ((panda$collections$Iterable*) cl1693->methods)->$class->itable;
                while ($tmp1696->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1696 = $tmp1696->next;
                }
                $fn1698 $tmp1697 = $tmp1696->methods[0];
                panda$collections$Iterator* $tmp1699 = $tmp1697(((panda$collections$Iterable*) cl1693->methods));
                m$Iter1695 = $tmp1699;
                $l1700:;
                ITable* $tmp1702 = m$Iter1695->$class->itable;
                while ($tmp1702->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1702 = $tmp1702->next;
                }
                $fn1704 $tmp1703 = $tmp1702->methods[0];
                panda$core$Bit $tmp1705 = $tmp1703(m$Iter1695);
                panda$core$Bit $tmp1706 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1705);
                if (!$tmp1706.value) goto $l1701;
                {
                    ITable* $tmp1708 = m$Iter1695->$class->itable;
                    while ($tmp1708->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1708 = $tmp1708->next;
                    }
                    $fn1710 $tmp1709 = $tmp1708->methods[1];
                    panda$core$Object* $tmp1711 = $tmp1709(m$Iter1695);
                    m1707 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1711);
                    panda$core$Bit $tmp1712 = org$pandalanguage$pandac$Annotations$isImplicit$R$panda$core$Bit(m1707->annotations);
                    if ($tmp1712.value) {
                    {
                        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m1707);
                        panda$core$Bit $tmp1713 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(m1707->methodKind, ((panda$core$Int64) { 59 }));
                        PANDA_ASSERT($tmp1713.value);
                        panda$core$Int64 $tmp1714 = panda$collections$Array$get_count$R$panda$core$Int64(m1707->parameters);
                        panda$core$Bit $tmp1715 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1714, ((panda$core$Int64) { 1 }));
                        PANDA_ASSERT($tmp1715.value);
                        panda$core$Object* $tmp1716 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(m1707->parameters, ((panda$core$Int64) { 0 }));
                        panda$core$Int64$nullable $tmp1717 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1716)->type);
                        if (((panda$core$Bit) { $tmp1717.nonnull }).value) {
                        {
                            org$pandalanguage$pandac$IRNode* $tmp1719 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                            $tmp1719->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                            $tmp1719->refCount.value = 1;
                            org$pandalanguage$pandac$Type* $tmp1721 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                            org$pandalanguage$pandac$Type* $tmp1722 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl1693);
                            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1719, ((panda$core$Int64) { 1001 }), p_expr->position, $tmp1721, $tmp1722);
                            type1718 = $tmp1719;
                            panda$collections$Array* $tmp1724 = (panda$collections$Array*) malloc(40);
                            $tmp1724->$class = (panda$core$Class*) &panda$collections$Array$class;
                            $tmp1724->refCount.value = 1;
                            panda$collections$Array$init$panda$core$Int64($tmp1724, ((panda$core$Int64) { 1 }));
                            args1723 = $tmp1724;
                            panda$collections$Array$add$panda$collections$Array$T(args1723, ((panda$core$Object*) p_expr));
                            org$pandalanguage$pandac$IRNode* $tmp1726 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, type1718, ((panda$collections$ListView*) args1723));
                            return $tmp1726;
                        }
                        }
                    }
                    }
                }
                goto $l1700;
                $l1701:;
            }
        }
        }
        panda$collections$Array* $tmp1728 = (panda$collections$Array*) malloc(40);
        $tmp1728->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp1728->refCount.value = 1;
        panda$collections$Array$init$panda$core$Int64($tmp1728, ((panda$core$Int64) { 1 }));
        children1727 = $tmp1728;
        panda$collections$Array$add$panda$collections$Array$T(children1727, ((panda$core$Object*) p_expr));
        org$pandalanguage$pandac$IRNode* $tmp1730 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp1730->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp1730->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1730, ((panda$core$Int64) { 1009 }), p_expr->position, p_target, ((panda$core$Object*) wrap_panda$core$Bit(((panda$core$Bit) { false }))), ((panda$collections$ListView*) children1727));
        return $tmp1730;
    }
    }
    panda$core$String* $tmp1733 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1732, ((panda$core$Object*) p_target));
    panda$core$String* $tmp1735 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1733, &$s1734);
    panda$core$String* $tmp1736 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1735, ((panda$core$Object*) p_expr->type));
    panda$core$String* $tmp1738 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1736, &$s1737);
    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_expr->position, $tmp1738);
    return NULL;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr, org$pandalanguage$pandac$Type* p_target) {
    org$pandalanguage$pandac$IRNode* result1739;
    org$pandalanguage$pandac$IRNode* $tmp1740 = org$pandalanguage$pandac$Compiler$doCoerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, p_target);
    result1739 = $tmp1740;
    bool $tmp1741 = ((panda$core$Bit) { result1739 == NULL }).value;
    if ($tmp1741) goto $l1742;
    panda$core$Bit $tmp1743 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(result1739->type, p_target);
    $tmp1741 = $tmp1743.value;
    $l1742:;
    panda$core$Bit $tmp1744 = { $tmp1741 };
    PANDA_ASSERT($tmp1744.value);
    return result1739;
}
panda$core$Bit org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type, org$pandalanguage$pandac$Type* p_target) {
    panda$core$Bit $tmp1746 = org$pandalanguage$pandac$Type$isPointer$R$panda$core$Bit(p_type);
    bool $tmp1745 = $tmp1746.value;
    if (!$tmp1745) goto $l1747;
    panda$core$Bit $tmp1748 = org$pandalanguage$pandac$Type$isPointer$R$panda$core$Bit(p_target);
    $tmp1745 = $tmp1748.value;
    $l1747:;
    panda$core$Bit $tmp1749 = { $tmp1745 };
    if ($tmp1749.value) {
    {
        return ((panda$core$Bit) { true });
    }
    }
    panda$core$Int64$nullable $tmp1750 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_type, p_target);
    if (((panda$core$Bit) { $tmp1750.nonnull }).value) {
    {
        return ((panda$core$Bit) { true });
    }
    }
    panda$core$Bit $tmp1752 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_type);
    bool $tmp1751 = $tmp1752.value;
    if (!$tmp1751) goto $l1753;
    panda$core$Bit $tmp1754 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_target);
    $tmp1751 = $tmp1754.value;
    $l1753:;
    panda$core$Bit $tmp1755 = { $tmp1751 };
    if ($tmp1755.value) {
    {
        return ((panda$core$Bit) { true });
    }
    }
    panda$core$Bit $tmp1756 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 16 }));
    if ($tmp1756.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Int64$nullable $tmp1757 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_target, p_type);
    return ((panda$core$Bit) { $tmp1757.nonnull });
}
panda$core$Bit org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_node, org$pandalanguage$pandac$Type* p_target) {
    panda$core$Bit result1759;
    org$pandalanguage$pandac$IRNode* resolved1766;
    panda$core$Int64$nullable $tmp1758 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_node, p_target);
    if (((panda$core$Bit) { $tmp1758.nonnull }).value) {
    {
        return ((panda$core$Bit) { true });
    }
    }
    panda$core$Bit $tmp1760 = org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_node->type, p_target);
    result1759 = $tmp1760;
    panda$core$Bit $tmp1762 = panda$core$Bit$$NOT$R$panda$core$Bit(result1759);
    bool $tmp1761 = $tmp1762.value;
    if (!$tmp1761) goto $l1763;
    panda$core$Bit $tmp1764 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_node->type->typeKind, ((panda$core$Int64) { 17 }));
    $tmp1761 = $tmp1764.value;
    $l1763:;
    panda$core$Bit $tmp1765 = { $tmp1761 };
    if ($tmp1765.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp1767 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_node);
        resolved1766 = $tmp1767;
        if (((panda$core$Bit) { resolved1766 != NULL }).value) {
        {
            panda$core$Bit $tmp1768 = org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, resolved1766, p_target);
            result1759 = $tmp1768;
        }
        }
    }
    }
    return result1759;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_node, org$pandalanguage$pandac$Position p_position, panda$core$Bit p_isExplicit, org$pandalanguage$pandac$Type* p_target) {
    org$pandalanguage$pandac$IRNode* resolved1789;
    panda$collections$Array* children1792;
    panda$core$Bit $tmp1769 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_node->type, p_target);
    if ($tmp1769.value) {
    {
        return p_node;
    }
    }
    org$pandalanguage$pandac$Type* $tmp1770 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1771 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1770);
    PANDA_ASSERT($tmp1771.value);
    bool $tmp1772 = p_isExplicit.value;
    if (!$tmp1772) goto $l1773;
    panda$core$Bit $tmp1774 = org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_node, p_target);
    panda$core$Bit $tmp1775 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1774);
    $tmp1772 = $tmp1775.value;
    $l1773:;
    panda$core$Bit $tmp1776 = { $tmp1772 };
    if ($tmp1776.value) {
    {
        panda$core$String* $tmp1778 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1777, ((panda$core$Object*) p_node->type));
        panda$core$String* $tmp1780 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1778, &$s1779);
        panda$core$String* $tmp1782 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1781, ((panda$core$Object*) p_target));
        panda$core$String* $tmp1784 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1782, &$s1783);
        panda$core$String* $tmp1785 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1780, $tmp1784);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp1785);
    }
    }
    switch (p_node->kind.value) {
        case 1004:
        case 1032:
        case 1011:
        {
            org$pandalanguage$pandac$IRNode* $tmp1786 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_node, p_target);
            return $tmp1786;
        }
        break;
        case 1039:
        case 1040:
        {
            panda$core$Int64$nullable $tmp1787 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_node, p_target);
            if (((panda$core$Bit) { $tmp1787.nonnull }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1788 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_node, p_target);
                return $tmp1788;
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp1790 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_node);
            resolved1789 = $tmp1790;
            if (((panda$core$Bit) { resolved1789 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1791 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, resolved1789, p_position, p_isExplicit, p_target);
                return $tmp1791;
            }
            }
        }
        break;
    }
    panda$collections$Array* $tmp1793 = (panda$collections$Array*) malloc(40);
    $tmp1793->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1793->refCount.value = 1;
    panda$collections$Array$init($tmp1793);
    children1792 = $tmp1793;
    panda$collections$Array$add$panda$collections$Array$T(children1792, ((panda$core$Object*) p_node));
    org$pandalanguage$pandac$IRNode* $tmp1795 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp1795->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp1795->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1795, ((panda$core$Int64) { 1009 }), p_position, p_target, ((panda$core$Object*) wrap_panda$core$Bit(p_isExplicit)), ((panda$collections$ListView*) children1792));
    return $tmp1795;
}
panda$core$Int64$nullable org$pandalanguage$pandac$Compiler$callCost$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodRef* p_m, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedReturn) {
    panda$core$Int64 result1803;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1804;
    panda$core$Int64$nullable cost1824;
    panda$core$Int64$nullable cost1843;
    PANDA_ASSERT(p_m->value->resolved.value);
    panda$core$Int64 $tmp1797 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
    ITable* $tmp1798 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp1798->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1798 = $tmp1798->next;
    }
    $fn1800 $tmp1799 = $tmp1798->methods[0];
    panda$core$Int64 $tmp1801 = $tmp1799(((panda$collections$CollectionView*) p_args));
    panda$core$Bit $tmp1802 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1797, $tmp1801);
    if ($tmp1802.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    result1803 = ((panda$core$Int64) { 0 });
    panda$core$Int64 $tmp1805 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp1804, ((panda$core$Int64) { 0 }), $tmp1805, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp1807 = $tmp1804.start.value;
    panda$core$Int64 i1806 = { $tmp1807 };
    int64_t $tmp1809 = $tmp1804.end.value;
    int64_t $tmp1810 = $tmp1804.step.value;
    bool $tmp1811 = $tmp1804.inclusive.value;
    bool $tmp1818 = $tmp1810 > 0;
    if ($tmp1818) goto $l1816; else goto $l1817;
    $l1816:;
    if ($tmp1811) goto $l1819; else goto $l1820;
    $l1819:;
    if ($tmp1807 <= $tmp1809) goto $l1812; else goto $l1814;
    $l1820:;
    if ($tmp1807 < $tmp1809) goto $l1812; else goto $l1814;
    $l1817:;
    if ($tmp1811) goto $l1821; else goto $l1822;
    $l1821:;
    if ($tmp1807 >= $tmp1809) goto $l1812; else goto $l1814;
    $l1822:;
    if ($tmp1807 > $tmp1809) goto $l1812; else goto $l1814;
    $l1812:;
    {
        ITable* $tmp1825 = p_args->$class->itable;
        while ($tmp1825->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1825 = $tmp1825->next;
        }
        $fn1827 $tmp1826 = $tmp1825->methods[0];
        panda$core$Object* $tmp1828 = $tmp1826(p_args, i1806);
        org$pandalanguage$pandac$Type* $tmp1829 = org$pandalanguage$pandac$MethodRef$parameter$panda$core$Int64$R$org$pandalanguage$pandac$Type(p_m, i1806);
        panda$core$Int64$nullable $tmp1830 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1828), $tmp1829);
        cost1824 = $tmp1830;
        if (((panda$core$Bit) { !cost1824.nonnull }).value) {
        {
            return ((panda$core$Int64$nullable) { .nonnull = false });
        }
        }
        panda$core$Int64 $tmp1831 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result1803, ((panda$core$Int64) cost1824.value));
        result1803 = $tmp1831;
    }
    $l1815:;
    if ($tmp1818) goto $l1833; else goto $l1834;
    $l1833:;
    int64_t $tmp1835 = $tmp1809 - i1806.value;
    if ($tmp1811) goto $l1836; else goto $l1837;
    $l1836:;
    if ($tmp1835 >= $tmp1810) goto $l1832; else goto $l1814;
    $l1837:;
    if ($tmp1835 > $tmp1810) goto $l1832; else goto $l1814;
    $l1834:;
    int64_t $tmp1839 = i1806.value - $tmp1809;
    if ($tmp1811) goto $l1840; else goto $l1841;
    $l1840:;
    if ($tmp1839 >= -$tmp1810) goto $l1832; else goto $l1814;
    $l1841:;
    if ($tmp1839 > -$tmp1810) goto $l1832; else goto $l1814;
    $l1832:;
    i1806.value += $tmp1810;
    goto $l1812;
    $l1814:;
    if (((panda$core$Bit) { p_expectedReturn != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp1844 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(p_m);
        panda$core$Int64$nullable $tmp1845 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1844, p_expectedReturn);
        cost1843 = $tmp1845;
        if (((panda$core$Bit) { !cost1843.nonnull }).value) {
        {
            return ((panda$core$Int64$nullable) { .nonnull = false });
        }
        }
        panda$core$Int64 $tmp1846 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result1803, ((panda$core$Int64) cost1843.value));
        result1803 = $tmp1846;
    }
    }
    org$pandalanguage$pandac$Type* $tmp1849 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->value->owner);
    panda$core$Bit $tmp1850 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit($tmp1849);
    bool $tmp1848 = $tmp1850.value;
    if (!$tmp1848) goto $l1851;
    ITable* $tmp1852 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp1852->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1852 = $tmp1852->next;
    }
    $fn1854 $tmp1853 = $tmp1852->methods[0];
    panda$core$Int64 $tmp1855 = $tmp1853(((panda$collections$CollectionView*) p_args));
    panda$core$Bit $tmp1856 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1855, ((panda$core$Int64) { 1 }));
    $tmp1848 = $tmp1856.value;
    $l1851:;
    panda$core$Bit $tmp1857 = { $tmp1848 };
    bool $tmp1847 = $tmp1857.value;
    if (!$tmp1847) goto $l1858;
    panda$core$Object* $tmp1859 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->value->parameters, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp1860 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->value->owner);
    panda$core$Bit $tmp1861 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1859)->type, $tmp1860);
    $tmp1847 = $tmp1861.value;
    $l1858:;
    panda$core$Bit $tmp1862 = { $tmp1847 };
    if ($tmp1862.value) {
    {
        panda$core$Int64 $tmp1863 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result1803, ((panda$core$Int64) { 1 }));
        result1803 = $tmp1863;
    }
    }
    return ((panda$core$Int64$nullable) { result1803, true });
}
panda$core$Int64$nullable org$pandalanguage$pandac$Compiler$matchMethods$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(org$pandalanguage$pandac$Compiler* self, panda$collections$Array* p_methods, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedReturn) {
    panda$collections$Array* result1864;
    panda$core$Int64$nullable best1867;
    panda$collections$Iterator* m$Iter1868;
    org$pandalanguage$pandac$MethodRef* m1880;
    panda$core$Int64$nullable cost1885;
    panda$collections$Array* $tmp1865 = (panda$collections$Array*) malloc(40);
    $tmp1865->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1865->refCount.value = 1;
    panda$collections$Array$init($tmp1865);
    result1864 = $tmp1865;
    best1867 = ((panda$core$Int64$nullable) { .nonnull = false });
    {
        ITable* $tmp1869 = ((panda$collections$Iterable*) p_methods)->$class->itable;
        while ($tmp1869->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1869 = $tmp1869->next;
        }
        $fn1871 $tmp1870 = $tmp1869->methods[0];
        panda$collections$Iterator* $tmp1872 = $tmp1870(((panda$collections$Iterable*) p_methods));
        m$Iter1868 = $tmp1872;
        $l1873:;
        ITable* $tmp1875 = m$Iter1868->$class->itable;
        while ($tmp1875->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1875 = $tmp1875->next;
        }
        $fn1877 $tmp1876 = $tmp1875->methods[0];
        panda$core$Bit $tmp1878 = $tmp1876(m$Iter1868);
        panda$core$Bit $tmp1879 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1878);
        if (!$tmp1879.value) goto $l1874;
        {
            ITable* $tmp1881 = m$Iter1868->$class->itable;
            while ($tmp1881->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1881 = $tmp1881->next;
            }
            $fn1883 $tmp1882 = $tmp1881->methods[1];
            panda$core$Object* $tmp1884 = $tmp1882(m$Iter1868);
            m1880 = ((org$pandalanguage$pandac$MethodRef*) $tmp1884);
            panda$core$Int64$nullable $tmp1886 = org$pandalanguage$pandac$Compiler$callCost$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(self, m1880, p_args, p_expectedReturn);
            cost1885 = $tmp1886;
            if (((panda$core$Bit) { !cost1885.nonnull }).value) {
            {
                goto $l1873;
            }
            }
            bool $tmp1887 = ((panda$core$Bit) { !best1867.nonnull }).value;
            if ($tmp1887) goto $l1888;
            panda$core$Bit $tmp1889 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost1885.value), ((panda$core$Int64) best1867.value));
            $tmp1887 = $tmp1889.value;
            $l1888:;
            panda$core$Bit $tmp1890 = { $tmp1887 };
            if ($tmp1890.value) {
            {
                panda$collections$Array$clear(result1864);
                best1867 = cost1885;
            }
            }
            panda$core$Bit $tmp1891 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost1885.value), ((panda$core$Int64) best1867.value));
            if ($tmp1891.value) {
            {
                panda$collections$Array$add$panda$collections$Array$T(result1864, ((panda$core$Object*) m1880));
            }
            }
        }
        goto $l1873;
        $l1874:;
    }
    panda$collections$Array$clear(p_methods);
    panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(p_methods, ((panda$collections$CollectionView*) result1864));
    return best1867;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$MethodRef* p_m, panda$collections$ListView* p_args) {
    panda$core$String* s1898;
    panda$collections$Array* finalArgs1924;
    org$pandalanguage$pandac$IRNode* selfNode1960;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1989;
    org$pandalanguage$pandac$IRNode* coerced2012;
    org$pandalanguage$pandac$IRNode* result2032;
    PANDA_ASSERT(p_m->value->resolved.value);
    panda$core$Int64 $tmp1892 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
    ITable* $tmp1893 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp1893->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1893 = $tmp1893->next;
    }
    $fn1895 $tmp1894 = $tmp1893->methods[0];
    panda$core$Int64 $tmp1896 = $tmp1894(((panda$collections$CollectionView*) p_args));
    panda$core$Bit $tmp1897 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1892, $tmp1896);
    if ($tmp1897.value) {
    {
        panda$core$Int64 $tmp1899 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
        panda$core$Bit $tmp1900 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1899, ((panda$core$Int64) { 1 }));
        if ($tmp1900.value) {
        {
            s1898 = &$s1901;
        }
        }
        else {
        {
            s1898 = &$s1902;
        }
        }
        panda$core$String* $tmp1904 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(p_m->value);
        panda$core$String* $tmp1905 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1903, $tmp1904);
        panda$core$String* $tmp1907 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1905, &$s1906);
        panda$core$Int64 $tmp1908 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
        panda$core$String* $tmp1909 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1907, ((panda$core$Object*) wrap_panda$core$Int64($tmp1908)));
        panda$core$String* $tmp1911 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1909, &$s1910);
        panda$core$String* $tmp1912 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1911, s1898);
        panda$core$String* $tmp1914 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1912, &$s1913);
        ITable* $tmp1916 = ((panda$collections$CollectionView*) p_args)->$class->itable;
        while ($tmp1916->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp1916 = $tmp1916->next;
        }
        $fn1918 $tmp1917 = $tmp1916->methods[0];
        panda$core$Int64 $tmp1919 = $tmp1917(((panda$collections$CollectionView*) p_args));
        panda$core$String* $tmp1920 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1915, ((panda$core$Object*) wrap_panda$core$Int64($tmp1919)));
        panda$core$String* $tmp1922 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1920, &$s1921);
        panda$core$String* $tmp1923 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1914, $tmp1922);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp1923);
        return NULL;
    }
    }
    panda$collections$Array* $tmp1925 = (panda$collections$Array*) malloc(40);
    $tmp1925->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1925->refCount.value = 1;
    panda$collections$Array$init($tmp1925);
    finalArgs1924 = $tmp1925;
    bool $tmp1928 = ((panda$core$Bit) { p_target != NULL }).value;
    if (!$tmp1928) goto $l1929;
    panda$core$Bit $tmp1930 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1038 }));
    $tmp1928 = $tmp1930.value;
    $l1929:;
    panda$core$Bit $tmp1931 = { $tmp1928 };
    bool $tmp1927 = $tmp1931.value;
    if (!$tmp1927) goto $l1932;
    panda$core$Bit $tmp1933 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->value->annotations);
    panda$core$Bit $tmp1934 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1933);
    $tmp1927 = $tmp1934.value;
    $l1932:;
    panda$core$Bit $tmp1935 = { $tmp1927 };
    if ($tmp1935.value) {
    {
        org$pandalanguage$pandac$Type* $tmp1936 = org$pandalanguage$pandac$MethodRef$owner$R$org$pandalanguage$pandac$Type(p_m);
        org$pandalanguage$pandac$IRNode* $tmp1937 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, p_target, p_position, ((panda$core$Bit) { false }), $tmp1936);
        panda$collections$Array$add$panda$collections$Array$T(finalArgs1924, ((panda$core$Object*) $tmp1937));
    }
    }
    panda$core$Bit $tmp1938 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->value->methodKind, ((panda$core$Int64) { 59 }));
    if ($tmp1938.value) {
    {
        if (((panda$core$Bit) { p_target == NULL }).value) {
        {
            panda$core$Object* $tmp1939 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
            panda$core$Bit $tmp1940 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp1939)->methodKind, ((panda$core$Int64) { 59 }));
            if ($tmp1940.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1941 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1941->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1941->refCount.value = 1;
                panda$core$Object* $tmp1943 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
                org$pandalanguage$pandac$Type* $tmp1944 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp1943));
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp1941, ((panda$core$Int64) { 1025 }), p_position, $tmp1944);
                panda$collections$Array$add$panda$collections$Array$T(finalArgs1924, ((panda$core$Object*) $tmp1941));
            }
            }
            else {
            {
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s1945);
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp1948 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1025 }));
        bool $tmp1947 = $tmp1948.value;
        if (!$tmp1947) goto $l1949;
        panda$core$Bit $tmp1950 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1024 }));
        $tmp1947 = $tmp1950.value;
        $l1949:;
        panda$core$Bit $tmp1951 = { $tmp1947 };
        bool $tmp1946 = $tmp1951.value;
        if (!$tmp1946) goto $l1952;
        panda$core$Bit $tmp1953 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1038 }));
        $tmp1946 = $tmp1953.value;
        $l1952:;
        panda$core$Bit $tmp1954 = { $tmp1946 };
        if ($tmp1954.value) {
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s1955);
        }
        }
        }
    }
    }
    else {
    panda$core$Bit $tmp1957 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(p_m->value);
    bool $tmp1956 = $tmp1957.value;
    if (!$tmp1956) goto $l1958;
    $tmp1956 = ((panda$core$Bit) { p_target == NULL }).value;
    $l1958:;
    panda$core$Bit $tmp1959 = { $tmp1956 };
    if ($tmp1959.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp1961 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp1961->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp1961->refCount.value = 1;
        panda$core$Object* $tmp1963 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
        org$pandalanguage$pandac$Type* $tmp1964 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp1963));
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp1961, ((panda$core$Int64) { 1025 }), p_position, $tmp1964);
        selfNode1960 = $tmp1961;
        org$pandalanguage$pandac$Type* $tmp1965 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->value->owner);
        org$pandalanguage$pandac$IRNode* $tmp1966 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, selfNode1960, $tmp1965);
        selfNode1960 = $tmp1966;
        PANDA_ASSERT(((panda$core$Bit) { selfNode1960 != NULL }).value);
        panda$collections$Array$add$panda$collections$Array$T(finalArgs1924, ((panda$core$Object*) selfNode1960));
        panda$core$Object* $tmp1967 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
        panda$core$Bit $tmp1968 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp1967));
        panda$core$Bit $tmp1969 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1968);
        if ($tmp1969.value) {
        {
            panda$core$String* $tmp1971 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(p_m->value);
            panda$core$String* $tmp1972 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1970, $tmp1971);
            panda$core$String* $tmp1974 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1972, &$s1973);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp1974);
        }
        }
    }
    }
    else {
    panda$core$Bit $tmp1977 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(p_m->value);
    panda$core$Bit $tmp1978 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1977);
    bool $tmp1976 = $tmp1978.value;
    if (!$tmp1976) goto $l1979;
    $tmp1976 = ((panda$core$Bit) { p_target != NULL }).value;
    $l1979:;
    panda$core$Bit $tmp1980 = { $tmp1976 };
    bool $tmp1975 = $tmp1980.value;
    if (!$tmp1975) goto $l1981;
    panda$core$Bit $tmp1982 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1001 }));
    $tmp1975 = $tmp1982.value;
    $l1981:;
    panda$core$Bit $tmp1983 = { $tmp1975 };
    if ($tmp1983.value) {
    {
        panda$core$String* $tmp1985 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(p_m->value);
        panda$core$String* $tmp1986 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1984, $tmp1985);
        panda$core$String* $tmp1988 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1986, &$s1987);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp1988);
    }
    }
    }
    }
    ITable* $tmp1990 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp1990->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1990 = $tmp1990->next;
    }
    $fn1992 $tmp1991 = $tmp1990->methods[0];
    panda$core$Int64 $tmp1993 = $tmp1991(((panda$collections$CollectionView*) p_args));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp1989, ((panda$core$Int64) { 0 }), $tmp1993, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp1995 = $tmp1989.start.value;
    panda$core$Int64 i1994 = { $tmp1995 };
    int64_t $tmp1997 = $tmp1989.end.value;
    int64_t $tmp1998 = $tmp1989.step.value;
    bool $tmp1999 = $tmp1989.inclusive.value;
    bool $tmp2006 = $tmp1998 > 0;
    if ($tmp2006) goto $l2004; else goto $l2005;
    $l2004:;
    if ($tmp1999) goto $l2007; else goto $l2008;
    $l2007:;
    if ($tmp1995 <= $tmp1997) goto $l2000; else goto $l2002;
    $l2008:;
    if ($tmp1995 < $tmp1997) goto $l2000; else goto $l2002;
    $l2005:;
    if ($tmp1999) goto $l2009; else goto $l2010;
    $l2009:;
    if ($tmp1995 >= $tmp1997) goto $l2000; else goto $l2002;
    $l2010:;
    if ($tmp1995 > $tmp1997) goto $l2000; else goto $l2002;
    $l2000:;
    {
        ITable* $tmp2013 = p_args->$class->itable;
        while ($tmp2013->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2013 = $tmp2013->next;
        }
        $fn2015 $tmp2014 = $tmp2013->methods[0];
        panda$core$Object* $tmp2016 = $tmp2014(p_args, i1994);
        org$pandalanguage$pandac$Type* $tmp2017 = org$pandalanguage$pandac$MethodRef$parameter$panda$core$Int64$R$org$pandalanguage$pandac$Type(p_m, i1994);
        org$pandalanguage$pandac$IRNode* $tmp2018 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp2016), $tmp2017);
        coerced2012 = $tmp2018;
        if (((panda$core$Bit) { coerced2012 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Object* $tmp2019 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->value->parameters, i1994);
        org$pandalanguage$pandac$IRNode* $tmp2020 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, coerced2012, p_position, ((panda$core$Bit) { false }), ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp2019)->type);
        coerced2012 = $tmp2020;
        if (((panda$core$Bit) { coerced2012 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(finalArgs1924, ((panda$core$Object*) coerced2012));
    }
    $l2003:;
    if ($tmp2006) goto $l2022; else goto $l2023;
    $l2022:;
    int64_t $tmp2024 = $tmp1997 - i1994.value;
    if ($tmp1999) goto $l2025; else goto $l2026;
    $l2025:;
    if ($tmp2024 >= $tmp1998) goto $l2021; else goto $l2002;
    $l2026:;
    if ($tmp2024 > $tmp1998) goto $l2021; else goto $l2002;
    $l2023:;
    int64_t $tmp2028 = i1994.value - $tmp1997;
    if ($tmp1999) goto $l2029; else goto $l2030;
    $l2029:;
    if ($tmp2028 >= -$tmp1998) goto $l2021; else goto $l2002;
    $l2030:;
    if ($tmp2028 > -$tmp1998) goto $l2021; else goto $l2002;
    $l2021:;
    i1994.value += $tmp1998;
    goto $l2000;
    $l2002:;
    panda$core$Bit $tmp2034 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_m->value->owner)->name, &$s2033);
    if ($tmp2034.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2035 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2035->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2035->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp2037 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(p_m);
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2035, ((panda$core$Int64) { 1005 }), p_position, $tmp2037, ((panda$core$Object*) p_m), ((panda$collections$ListView*) finalArgs1924));
        result2032 = $tmp2035;
    }
    }
    else {
    {
        org$pandalanguage$pandac$IRNode* $tmp2038 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2038->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2038->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2038, ((panda$core$Int64) { 1005 }), p_position, p_m->value->returnType, ((panda$core$Object*) p_m), ((panda$collections$ListView*) finalArgs1924));
        result2032 = $tmp2038;
        org$pandalanguage$pandac$Type* $tmp2040 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(p_m);
        org$pandalanguage$pandac$IRNode* $tmp2041 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, result2032, p_position, ((panda$core$Bit) { false }), $tmp2040);
        result2032 = $tmp2041;
    }
    }
    return result2032;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_target, panda$core$String* p_name, panda$collections$ListView* p_args) {
    org$pandalanguage$pandac$IRNode* $tmp2042 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_target, p_name, p_args, NULL);
    return $tmp2042;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_target, panda$core$String* p_name, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedType) {
    org$pandalanguage$pandac$IRNode* resolved2043;
    org$pandalanguage$pandac$ClassDecl* cl2045;
    org$pandalanguage$pandac$Symbol* s2049;
    org$pandalanguage$pandac$IRNode* ref2071;
    org$pandalanguage$pandac$IRNode* $tmp2044 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_target);
    resolved2043 = $tmp2044;
    if (((panda$core$Bit) { resolved2043 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp2046 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(resolved2043->kind, ((panda$core$Int64) { 1001 }));
    if ($tmp2046.value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp2047 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Type*) resolved2043->payload));
        cl2045 = $tmp2047;
    }
    }
    else {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp2048 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, resolved2043->type);
        cl2045 = $tmp2048;
    }
    }
    if (((panda$core$Bit) { cl2045 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp2050 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl2045);
    org$pandalanguage$pandac$Symbol* $tmp2051 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp2050, p_name);
    s2049 = $tmp2051;
    if (((panda$core$Bit) { s2049 == NULL }).value) {
    {
        panda$core$String* $tmp2053 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2052, ((org$pandalanguage$pandac$Symbol*) cl2045)->name);
        panda$core$String* $tmp2055 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2053, &$s2054);
        panda$core$String* $tmp2056 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2055, p_name);
        panda$core$String* $tmp2058 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2056, &$s2057);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_target->position, $tmp2058);
        return NULL;
    }
    }
    panda$core$Bit $tmp2060 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(s2049->kind, ((panda$core$Int64) { 204 }));
    bool $tmp2059 = $tmp2060.value;
    if (!$tmp2059) goto $l2061;
    panda$core$Bit $tmp2062 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(s2049->kind, ((panda$core$Int64) { 205 }));
    $tmp2059 = $tmp2062.value;
    $l2061:;
    panda$core$Bit $tmp2063 = { $tmp2059 };
    if ($tmp2063.value) {
    {
        panda$core$String* $tmp2065 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2064, ((org$pandalanguage$pandac$Symbol*) cl2045)->name);
        panda$core$String* $tmp2067 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2065, &$s2066);
        panda$core$String* $tmp2068 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2067, p_name);
        panda$core$String* $tmp2070 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2068, &$s2069);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_target->position, $tmp2070);
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp2072 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl2045);
    org$pandalanguage$pandac$IRNode* $tmp2073 = org$pandalanguage$pandac$Compiler$symbolRef$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q(self, p_target->position, p_target, s2049, $tmp2072);
    ref2071 = $tmp2073;
    if (((panda$core$Bit) { ref2071 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp2074 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, ref2071, p_args, p_expectedType);
    return $tmp2074;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_m, panda$collections$ListView* p_args) {
    org$pandalanguage$pandac$IRNode* $tmp2075 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_m, p_args, NULL);
    return $tmp2075;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_m, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedType) {
    org$pandalanguage$pandac$IRNode* target2076;
    panda$collections$Array* methods2083;
    org$pandalanguage$pandac$MethodDecl* first2088;
    panda$core$MutableString* msg2093;
    panda$core$String* separator2105;
    panda$collections$Iterator* a$Iter2107;
    org$pandalanguage$pandac$IRNode* a2119;
    org$pandalanguage$pandac$IRNode* target2133;
    panda$collections$Array* children2141;
    panda$collections$Array* types2147;
    panda$collections$Iterator* m$Iter2150;
    org$pandalanguage$pandac$MethodRef* m2162;
    org$pandalanguage$pandac$IRNode* target2172;
    org$pandalanguage$pandac$IRNode* initCall2175;
    panda$collections$Array* children2179;
    org$pandalanguage$pandac$IRNode* resolved2184;
    switch (p_m->kind.value) {
        case 1002:
        {
            panda$core$Int64 $tmp2077 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->children);
            panda$core$Bit $tmp2078 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2077, ((panda$core$Int64) { 0 }));
            if ($tmp2078.value) {
            {
                target2076 = NULL;
            }
            }
            else {
            {
                panda$core$Int64 $tmp2079 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->children);
                panda$core$Bit $tmp2080 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2079, ((panda$core$Int64) { 1 }));
                PANDA_ASSERT($tmp2080.value);
                panda$core$Object* $tmp2081 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->children, ((panda$core$Int64) { 0 }));
                target2076 = ((org$pandalanguage$pandac$IRNode*) $tmp2081);
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp2082 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, p_m->position, target2076, ((org$pandalanguage$pandac$MethodRef*) p_m->payload), p_args);
            return $tmp2082;
        }
        break;
        case 1003:
        {
            panda$collections$Array* $tmp2084 = (panda$collections$Array*) malloc(40);
            $tmp2084->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2084->refCount.value = 1;
            panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp2084, ((panda$collections$ListView*) p_m->payload));
            methods2083 = $tmp2084;
            org$pandalanguage$pandac$Compiler$matchMethods$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(self, methods2083, p_args, p_expectedType);
            panda$core$Int64 $tmp2086 = panda$collections$Array$get_count$R$panda$core$Int64(methods2083);
            panda$core$Bit $tmp2087 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2086, ((panda$core$Int64) { 0 }));
            if ($tmp2087.value) {
            {
                ITable* $tmp2089 = ((panda$collections$ListView*) p_m->payload)->$class->itable;
                while ($tmp2089->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp2089 = $tmp2089->next;
                }
                $fn2091 $tmp2090 = $tmp2089->methods[0];
                panda$core$Object* $tmp2092 = $tmp2090(((panda$collections$ListView*) p_m->payload), ((panda$core$Int64) { 0 }));
                first2088 = ((org$pandalanguage$pandac$MethodRef*) $tmp2092)->value;
                panda$core$MutableString* $tmp2094 = (panda$core$MutableString*) malloc(40);
                $tmp2094->$class = (panda$core$Class*) &panda$core$MutableString$class;
                $tmp2094->refCount.value = 1;
                panda$core$String* $tmp2097 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2096, ((org$pandalanguage$pandac$Symbol*) first2088->owner)->name);
                panda$core$String* $tmp2099 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2097, &$s2098);
                panda$core$String* $tmp2101 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2100, ((org$pandalanguage$pandac$Symbol*) first2088)->name);
                panda$core$String* $tmp2103 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2101, &$s2102);
                panda$core$String* $tmp2104 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2099, $tmp2103);
                panda$core$MutableString$init$panda$core$String($tmp2094, $tmp2104);
                msg2093 = $tmp2094;
                separator2105 = &$s2106;
                {
                    ITable* $tmp2108 = ((panda$collections$Iterable*) p_args)->$class->itable;
                    while ($tmp2108->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp2108 = $tmp2108->next;
                    }
                    $fn2110 $tmp2109 = $tmp2108->methods[0];
                    panda$collections$Iterator* $tmp2111 = $tmp2109(((panda$collections$Iterable*) p_args));
                    a$Iter2107 = $tmp2111;
                    $l2112:;
                    ITable* $tmp2114 = a$Iter2107->$class->itable;
                    while ($tmp2114->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp2114 = $tmp2114->next;
                    }
                    $fn2116 $tmp2115 = $tmp2114->methods[0];
                    panda$core$Bit $tmp2117 = $tmp2115(a$Iter2107);
                    panda$core$Bit $tmp2118 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2117);
                    if (!$tmp2118.value) goto $l2113;
                    {
                        ITable* $tmp2120 = a$Iter2107->$class->itable;
                        while ($tmp2120->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2120 = $tmp2120->next;
                        }
                        $fn2122 $tmp2121 = $tmp2120->methods[1];
                        panda$core$Object* $tmp2123 = $tmp2121(a$Iter2107);
                        a2119 = ((org$pandalanguage$pandac$IRNode*) $tmp2123);
                        panda$core$MutableString$append$panda$core$String(msg2093, separator2105);
                        panda$core$MutableString$append$panda$core$Object(msg2093, ((panda$core$Object*) a2119->type));
                        separator2105 = &$s2124;
                    }
                    goto $l2112;
                    $l2113:;
                }
                panda$core$MutableString$append$panda$core$String(msg2093, &$s2125);
                if (((panda$core$Bit) { p_expectedType != NULL }).value) {
                {
                    panda$core$String* $tmp2127 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2126, ((panda$core$Object*) p_expectedType));
                    panda$core$String* $tmp2129 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2127, &$s2128);
                    panda$core$MutableString$append$panda$core$String(msg2093, $tmp2129);
                }
                }
                panda$core$String* $tmp2130 = panda$core$MutableString$convert$R$panda$core$String(msg2093);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_m->position, $tmp2130);
                return NULL;
            }
            }
            panda$core$Int64 $tmp2131 = panda$collections$Array$get_count$R$panda$core$Int64(methods2083);
            panda$core$Bit $tmp2132 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2131, ((panda$core$Int64) { 1 }));
            if ($tmp2132.value) {
            {
                panda$core$Int64 $tmp2134 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->children);
                panda$core$Bit $tmp2135 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2134, ((panda$core$Int64) { 1 }));
                if ($tmp2135.value) {
                {
                    panda$core$Object* $tmp2136 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->children, ((panda$core$Int64) { 0 }));
                    target2133 = ((org$pandalanguage$pandac$IRNode*) $tmp2136);
                }
                }
                else {
                {
                    panda$core$Int64 $tmp2137 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->children);
                    panda$core$Bit $tmp2138 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2137, ((panda$core$Int64) { 0 }));
                    PANDA_ASSERT($tmp2138.value);
                    target2133 = NULL;
                }
                }
                panda$core$Object* $tmp2139 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(methods2083, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$IRNode* $tmp2140 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, p_m->position, target2133, ((org$pandalanguage$pandac$MethodRef*) $tmp2139), p_args);
                return $tmp2140;
            }
            }
            panda$collections$Array* $tmp2142 = (panda$collections$Array*) malloc(40);
            $tmp2142->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2142->refCount.value = 1;
            panda$collections$Array$init($tmp2142);
            children2141 = $tmp2142;
            org$pandalanguage$pandac$IRNode* $tmp2144 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2144->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2144->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2146 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2144, ((panda$core$Int64) { 1003 }), p_m->position, $tmp2146, ((panda$core$Object*) methods2083), ((panda$collections$ListView*) p_m->children));
            panda$collections$Array$add$panda$collections$Array$T(children2141, ((panda$core$Object*) $tmp2144));
            panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(children2141, ((panda$collections$CollectionView*) p_args));
            panda$collections$Array* $tmp2148 = (panda$collections$Array*) malloc(40);
            $tmp2148->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2148->refCount.value = 1;
            panda$collections$Array$init($tmp2148);
            types2147 = $tmp2148;
            {
                ITable* $tmp2151 = ((panda$collections$Iterable*) methods2083)->$class->itable;
                while ($tmp2151->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp2151 = $tmp2151->next;
                }
                $fn2153 $tmp2152 = $tmp2151->methods[0];
                panda$collections$Iterator* $tmp2154 = $tmp2152(((panda$collections$Iterable*) methods2083));
                m$Iter2150 = $tmp2154;
                $l2155:;
                ITable* $tmp2157 = m$Iter2150->$class->itable;
                while ($tmp2157->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp2157 = $tmp2157->next;
                }
                $fn2159 $tmp2158 = $tmp2157->methods[0];
                panda$core$Bit $tmp2160 = $tmp2158(m$Iter2150);
                panda$core$Bit $tmp2161 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2160);
                if (!$tmp2161.value) goto $l2156;
                {
                    ITable* $tmp2163 = m$Iter2150->$class->itable;
                    while ($tmp2163->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp2163 = $tmp2163->next;
                    }
                    $fn2165 $tmp2164 = $tmp2163->methods[1];
                    panda$core$Object* $tmp2166 = $tmp2164(m$Iter2150);
                    m2162 = ((org$pandalanguage$pandac$MethodRef*) $tmp2166);
                    org$pandalanguage$pandac$Type* $tmp2167 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m2162);
                    panda$collections$Array$add$panda$collections$Array$T(types2147, ((panda$core$Object*) $tmp2167));
                }
                goto $l2155;
                $l2156:;
            }
            org$pandalanguage$pandac$IRNode* $tmp2168 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2168->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2168->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2170 = (org$pandalanguage$pandac$Type*) malloc(96);
            $tmp2170->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp2170->refCount.value = 1;
            org$pandalanguage$pandac$Type$init$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp2170, ((panda$collections$ListView*) types2147));
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2168, ((panda$core$Int64) { 1039 }), p_m->position, $tmp2170, ((panda$collections$ListView*) children2141));
            return $tmp2168;
        }
        break;
        case 1001:
        {
            org$pandalanguage$pandac$IRNode* $tmp2173 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2173->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2173->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp2173, ((panda$core$Int64) { 1038 }), p_m->position, ((org$pandalanguage$pandac$Type*) p_m->payload));
            target2172 = $tmp2173;
            org$pandalanguage$pandac$IRNode* $tmp2177 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target2172, &$s2176, p_args);
            org$pandalanguage$pandac$IRNode* $tmp2178 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp2177);
            initCall2175 = $tmp2178;
            if (((panda$core$Bit) { initCall2175 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp2180 = (panda$collections$Array*) malloc(40);
            $tmp2180->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2180->refCount.value = 1;
            panda$collections$Array$init($tmp2180);
            children2179 = $tmp2180;
            panda$collections$Array$add$panda$collections$Array$T(children2179, ((panda$core$Object*) initCall2175));
            org$pandalanguage$pandac$IRNode* $tmp2182 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2182->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2182->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2182, ((panda$core$Int64) { 1010 }), p_m->position, ((org$pandalanguage$pandac$Type*) p_m->payload), ((panda$collections$ListView*) children2179));
            return $tmp2182;
        }
        break;
        default:
        {
            org$pandalanguage$pandac$IRNode* $tmp2185 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_m);
            resolved2184 = $tmp2185;
            if (((panda$core$Bit) { resolved2184 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$String* $tmp2187 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2186, ((panda$core$Object*) resolved2184->type));
            panda$core$String* $tmp2189 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2187, &$s2188);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, resolved2184->position, $tmp2189);
        }
    }
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$collections$Array* subtypes2190;
    panda$core$MutableString* typeName2193;
    panda$core$String* separator2197;
    panda$collections$Iterator* p$Iter2199;
    org$pandalanguage$pandac$MethodDecl$Parameter* p2211;
    panda$core$Int64 kind2217;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
    panda$collections$Array* $tmp2191 = (panda$collections$Array*) malloc(40);
    $tmp2191->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2191->refCount.value = 1;
    panda$collections$Array$init($tmp2191);
    subtypes2190 = $tmp2191;
    panda$core$MutableString* $tmp2194 = (panda$core$MutableString*) malloc(40);
    $tmp2194->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp2194->refCount.value = 1;
    panda$core$MutableString$init$panda$core$String($tmp2194, &$s2196);
    typeName2193 = $tmp2194;
    separator2197 = &$s2198;
    {
        ITable* $tmp2200 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp2200->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2200 = $tmp2200->next;
        }
        $fn2202 $tmp2201 = $tmp2200->methods[0];
        panda$collections$Iterator* $tmp2203 = $tmp2201(((panda$collections$Iterable*) p_m->parameters));
        p$Iter2199 = $tmp2203;
        $l2204:;
        ITable* $tmp2206 = p$Iter2199->$class->itable;
        while ($tmp2206->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2206 = $tmp2206->next;
        }
        $fn2208 $tmp2207 = $tmp2206->methods[0];
        panda$core$Bit $tmp2209 = $tmp2207(p$Iter2199);
        panda$core$Bit $tmp2210 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2209);
        if (!$tmp2210.value) goto $l2205;
        {
            ITable* $tmp2212 = p$Iter2199->$class->itable;
            while ($tmp2212->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2212 = $tmp2212->next;
            }
            $fn2214 $tmp2213 = $tmp2212->methods[1];
            panda$core$Object* $tmp2215 = $tmp2213(p$Iter2199);
            p2211 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp2215);
            panda$core$MutableString$append$panda$core$String(typeName2193, separator2197);
            panda$core$MutableString$append$panda$core$String(typeName2193, ((org$pandalanguage$pandac$Symbol*) p2211->type)->name);
            panda$collections$Array$add$panda$collections$Array$T(subtypes2190, ((panda$core$Object*) p2211->type));
            separator2197 = &$s2216;
        }
        goto $l2204;
        $l2205:;
    }
    panda$core$Bit $tmp2218 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 58 }));
    if ($tmp2218.value) {
    {
        panda$core$MutableString$append$panda$core$String(typeName2193, &$s2219);
        kind2217 = ((panda$core$Int64) { 24 });
    }
    }
    else {
    {
        panda$core$MutableString$append$panda$core$String(typeName2193, &$s2220);
        kind2217 = ((panda$core$Int64) { 25 });
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(subtypes2190, ((panda$core$Object*) p_m->returnType));
    org$pandalanguage$pandac$Type* $tmp2221 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2222 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp2221);
    if ($tmp2222.value) {
    {
        panda$core$MutableString$append$panda$core$String(typeName2193, ((org$pandalanguage$pandac$Symbol*) p_m->returnType)->name);
    }
    }
    panda$core$MutableString$append$panda$core$String(typeName2193, &$s2223);
    org$pandalanguage$pandac$Type* $tmp2224 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp2224->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp2224->refCount.value = 1;
    panda$core$String* $tmp2226 = panda$core$MutableString$convert$R$panda$core$String(typeName2193);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp2224, $tmp2226, kind2217, ((org$pandalanguage$pandac$Symbol*) p_m)->position, ((panda$collections$ListView*) subtypes2190), ((panda$core$Bit) { true }));
    return $tmp2224;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$declaredTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m, org$pandalanguage$pandac$Type* p_selfType) {
    panda$collections$Array* subtypes2227;
    panda$core$MutableString* typeName2230;
    panda$collections$Iterator* p$Iter2234;
    org$pandalanguage$pandac$MethodDecl$Parameter* p2246;
    panda$core$Int64 kind2252;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
    panda$collections$Array* $tmp2228 = (panda$collections$Array*) malloc(40);
    $tmp2228->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2228->refCount.value = 1;
    panda$collections$Array$init($tmp2228);
    subtypes2227 = $tmp2228;
    panda$core$MutableString* $tmp2231 = (panda$core$MutableString*) malloc(40);
    $tmp2231->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp2231->refCount.value = 1;
    panda$core$MutableString$init$panda$core$String($tmp2231, &$s2233);
    typeName2230 = $tmp2231;
    panda$core$MutableString$append$panda$core$String(typeName2230, ((org$pandalanguage$pandac$Symbol*) p_selfType)->name);
    panda$collections$Array$add$panda$collections$Array$T(subtypes2227, ((panda$core$Object*) p_selfType));
    {
        ITable* $tmp2235 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp2235->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2235 = $tmp2235->next;
        }
        $fn2237 $tmp2236 = $tmp2235->methods[0];
        panda$collections$Iterator* $tmp2238 = $tmp2236(((panda$collections$Iterable*) p_m->parameters));
        p$Iter2234 = $tmp2238;
        $l2239:;
        ITable* $tmp2241 = p$Iter2234->$class->itable;
        while ($tmp2241->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2241 = $tmp2241->next;
        }
        $fn2243 $tmp2242 = $tmp2241->methods[0];
        panda$core$Bit $tmp2244 = $tmp2242(p$Iter2234);
        panda$core$Bit $tmp2245 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2244);
        if (!$tmp2245.value) goto $l2240;
        {
            ITable* $tmp2247 = p$Iter2234->$class->itable;
            while ($tmp2247->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2247 = $tmp2247->next;
            }
            $fn2249 $tmp2248 = $tmp2247->methods[1];
            panda$core$Object* $tmp2250 = $tmp2248(p$Iter2234);
            p2246 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp2250);
            panda$core$MutableString$append$panda$core$String(typeName2230, &$s2251);
            panda$core$MutableString$append$panda$core$String(typeName2230, ((org$pandalanguage$pandac$Symbol*) p2246->type)->name);
            panda$collections$Array$add$panda$collections$Array$T(subtypes2227, ((panda$core$Object*) p2246->type));
        }
        goto $l2239;
        $l2240:;
    }
    panda$core$Bit $tmp2253 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 58 }));
    if ($tmp2253.value) {
    {
        panda$core$MutableString$append$panda$core$String(typeName2230, &$s2254);
        kind2252 = ((panda$core$Int64) { 24 });
    }
    }
    else {
    {
        panda$core$MutableString$append$panda$core$String(typeName2230, &$s2255);
        kind2252 = ((panda$core$Int64) { 25 });
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(subtypes2227, ((panda$core$Object*) p_m->returnType));
    org$pandalanguage$pandac$Type* $tmp2256 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2257 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp2256);
    if ($tmp2257.value) {
    {
        panda$core$MutableString$append$panda$core$String(typeName2230, ((org$pandalanguage$pandac$Symbol*) p_m->returnType)->name);
    }
    }
    panda$core$MutableString$append$panda$core$String(typeName2230, &$s2258);
    org$pandalanguage$pandac$Type* $tmp2259 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp2259->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp2259->refCount.value = 1;
    panda$core$String* $tmp2261 = panda$core$MutableString$convert$R$panda$core$String(typeName2230);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp2259, $tmp2261, kind2252, ((org$pandalanguage$pandac$Symbol*) p_m)->position, ((panda$collections$ListView*) subtypes2227), ((panda$core$Bit) { true }));
    return $tmp2259;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$MethodDecl* inherited2262;
    org$pandalanguage$pandac$MethodDecl* $tmp2263 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(self, p_m);
    inherited2262 = $tmp2263;
    if (((panda$core$Bit) { inherited2262 == NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp2264 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, p_m);
        return $tmp2264;
    }
    }
    org$pandalanguage$pandac$Type* $tmp2265 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, inherited2262);
    return $tmp2265;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$Type* $tmp2266 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    org$pandalanguage$pandac$Type* $tmp2267 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_m, $tmp2266);
    return $tmp2267;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m, org$pandalanguage$pandac$Type* p_selfType) {
    org$pandalanguage$pandac$MethodDecl* inherited2268;
    org$pandalanguage$pandac$MethodDecl* $tmp2269 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(self, p_m);
    inherited2268 = $tmp2269;
    if (((panda$core$Bit) { inherited2268 == NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp2270 = org$pandalanguage$pandac$Compiler$declaredTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_m, p_selfType);
        return $tmp2270;
    }
    }
    org$pandalanguage$pandac$Type* $tmp2271 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, inherited2268, p_selfType);
    return $tmp2271;
}
panda$core$String* org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(panda$core$Int64 p_op) {
    switch (p_op.value) {
        case 51:
        {
            return &$s2272;
        }
        break;
        case 52:
        {
            return &$s2273;
        }
        break;
        case 53:
        {
            return &$s2274;
        }
        break;
        case 54:
        {
            return &$s2275;
        }
        break;
        case 55:
        {
            return &$s2276;
        }
        break;
        case 56:
        {
            return &$s2277;
        }
        break;
        case 57:
        {
            return &$s2278;
        }
        break;
        case 58:
        {
            return &$s2279;
        }
        break;
        case 59:
        {
            return &$s2280;
        }
        break;
        case 63:
        {
            return &$s2281;
        }
        break;
        case 62:
        {
            return &$s2282;
        }
        break;
        case 65:
        {
            return &$s2283;
        }
        break;
        case 64:
        {
            return &$s2284;
        }
        break;
        case 68:
        {
            return &$s2285;
        }
        break;
        case 69:
        {
            return &$s2286;
        }
        break;
        case 66:
        {
            return &$s2287;
        }
        break;
        case 67:
        {
            return &$s2288;
        }
        break;
        case 70:
        {
            return &$s2289;
        }
        break;
        case 71:
        {
            return &$s2290;
        }
        break;
        case 49:
        {
            return &$s2291;
        }
        break;
        case 50:
        {
            return &$s2292;
        }
        break;
        case 72:
        {
            return &$s2293;
        }
        break;
        case 1:
        {
            return &$s2294;
        }
        break;
        case 101:
        {
            return &$s2295;
        }
        break;
        case 73:
        {
            return &$s2296;
        }
        break;
        case 60:
        {
            return &$s2297;
        }
        break;
        case 61:
        {
            return &$s2298;
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
            panda$core$Int64 $tmp2299 = panda$collections$Array$get_count$R$panda$core$Int64(p_expr->children);
            panda$core$Bit $tmp2300 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2299, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp2300.value);
            panda$core$Bit $tmp2301 = panda$core$Bit$$NOT$R$panda$core$Bit(((panda$core$Bit$wrapper*) p_expr->payload)->value);
            if ($tmp2301.value) {
            {
                panda$core$Object* $tmp2302 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Bit $tmp2303 = org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp2302));
                return $tmp2303;
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
            panda$core$Object* $tmp2304 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp2305 = org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp2304));
            return $tmp2305;
        }
        break;
        default:
        {
            return ((panda$core$Bit) { false });
        }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$foldInts$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_left, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_right) {
    panda$core$Int64 l2331;
    panda$core$Int64 r2333;
    panda$core$Bit $tmp2307 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_left->kind, ((panda$core$Int64) { 1004 }));
    bool $tmp2306 = $tmp2307.value;
    if ($tmp2306) goto $l2308;
    panda$core$Bit $tmp2309 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_left->kind, ((panda$core$Int64) { 1032 }));
    $tmp2306 = $tmp2309.value;
    $l2308:;
    panda$core$Bit $tmp2310 = { $tmp2306 };
    PANDA_ASSERT($tmp2310.value);
    panda$core$Bit $tmp2312 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_right->kind, ((panda$core$Int64) { 1004 }));
    bool $tmp2311 = $tmp2312.value;
    if ($tmp2311) goto $l2313;
    panda$core$Bit $tmp2314 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_right->kind, ((panda$core$Int64) { 1032 }));
    $tmp2311 = $tmp2314.value;
    $l2313:;
    panda$core$Bit $tmp2315 = { $tmp2311 };
    PANDA_ASSERT($tmp2315.value);
    panda$core$Bit $tmp2318 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_left->kind, ((panda$core$Int64) { 1032 }));
    bool $tmp2317 = $tmp2318.value;
    if ($tmp2317) goto $l2319;
    panda$core$UInt64 $tmp2321 = panda$core$Int64$convert$R$panda$core$UInt64(((panda$core$Int64) { 9223372036854775807 }));
    panda$core$Bit $tmp2322 = panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p_left->payload)->value, $tmp2321);
    bool $tmp2320 = $tmp2322.value;
    if (!$tmp2320) goto $l2323;
    panda$core$Bit $tmp2324 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_right->kind, ((panda$core$Int64) { 1032 }));
    $tmp2320 = $tmp2324.value;
    $l2323:;
    panda$core$Bit $tmp2325 = { $tmp2320 };
    $tmp2317 = $tmp2325.value;
    $l2319:;
    panda$core$Bit $tmp2326 = { $tmp2317 };
    bool $tmp2316 = $tmp2326.value;
    if ($tmp2316) goto $l2327;
    panda$core$UInt64 $tmp2328 = panda$core$Int64$convert$R$panda$core$UInt64(((panda$core$Int64) { 9223372036854775807 }));
    panda$core$Bit $tmp2329 = panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p_right->payload)->value, $tmp2328);
    $tmp2316 = $tmp2329.value;
    $l2327:;
    panda$core$Bit $tmp2330 = { $tmp2316 };
    if ($tmp2330.value) {
    {
        panda$core$Int64 $tmp2332 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_left->payload)->value);
        l2331 = $tmp2332;
        panda$core$Int64 $tmp2334 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_right->payload)->value);
        r2333 = $tmp2334;
        switch (p_op.value) {
            case 51:
            {
                org$pandalanguage$pandac$IRNode* $tmp2335 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2335->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2335->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2337 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2338 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(l2331, r2333);
                panda$core$UInt64 $tmp2339 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2338);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2335, ((panda$core$Int64) { 1004 }), p_position, $tmp2337, $tmp2339);
                return $tmp2335;
            }
            break;
            case 52:
            {
                org$pandalanguage$pandac$IRNode* $tmp2340 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2340->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2340->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2342 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2343 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(l2331, r2333);
                panda$core$UInt64 $tmp2344 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2343);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2340, ((panda$core$Int64) { 1004 }), p_position, $tmp2342, $tmp2344);
                return $tmp2340;
            }
            break;
            case 53:
            {
                org$pandalanguage$pandac$IRNode* $tmp2345 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2345->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2345->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2347 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2348 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(l2331, r2333);
                panda$core$UInt64 $tmp2349 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2348);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2345, ((panda$core$Int64) { 1004 }), p_position, $tmp2347, $tmp2349);
                return $tmp2345;
            }
            break;
            case 55:
            {
                org$pandalanguage$pandac$IRNode* $tmp2350 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2350->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2350->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2352 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2353 = panda$core$Int64$$INTDIV$panda$core$Int64$R$panda$core$Int64(l2331, r2333);
                panda$core$UInt64 $tmp2354 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2353);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2350, ((panda$core$Int64) { 1004 }), p_position, $tmp2352, $tmp2354);
                return $tmp2350;
            }
            break;
            case 56:
            {
                org$pandalanguage$pandac$IRNode* $tmp2355 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2355->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2355->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2357 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2358 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(l2331, r2333);
                panda$core$UInt64 $tmp2359 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2358);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2355, ((panda$core$Int64) { 1004 }), p_position, $tmp2357, $tmp2359);
                return $tmp2355;
            }
            break;
            case 58:
            {
                org$pandalanguage$pandac$IRNode* $tmp2360 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2360->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2360->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2362 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2363 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(l2331, r2333);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2360, ((panda$core$Int64) { 1011 }), p_position, $tmp2362, $tmp2363);
                return $tmp2360;
            }
            break;
            case 59:
            {
                org$pandalanguage$pandac$IRNode* $tmp2364 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2364->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2364->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2366 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2367 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(l2331, r2333);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2364, ((panda$core$Int64) { 1011 }), p_position, $tmp2366, $tmp2367);
                return $tmp2364;
            }
            break;
            case 62:
            {
                org$pandalanguage$pandac$IRNode* $tmp2368 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2368->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2368->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2370 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2371 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(l2331, r2333);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2368, ((panda$core$Int64) { 1011 }), p_position, $tmp2370, $tmp2371);
                return $tmp2368;
            }
            break;
            case 63:
            {
                org$pandalanguage$pandac$IRNode* $tmp2372 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2372->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2372->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2374 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2375 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(l2331, r2333);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2372, ((panda$core$Int64) { 1011 }), p_position, $tmp2374, $tmp2375);
                return $tmp2372;
            }
            break;
            case 64:
            {
                org$pandalanguage$pandac$IRNode* $tmp2376 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2376->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2376->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2378 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2379 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(l2331, r2333);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2376, ((panda$core$Int64) { 1011 }), p_position, $tmp2378, $tmp2379);
                return $tmp2376;
            }
            break;
            case 65:
            {
                org$pandalanguage$pandac$IRNode* $tmp2380 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2380->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2380->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2382 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2383 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(l2331, r2333);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2380, ((panda$core$Int64) { 1011 }), p_position, $tmp2382, $tmp2383);
                return $tmp2380;
            }
            break;
            case 67:
            {
                org$pandalanguage$pandac$IRNode* $tmp2384 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2384->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2384->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2386 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2387 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(l2331, r2333);
                panda$core$UInt64 $tmp2388 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2387);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2384, ((panda$core$Int64) { 1004 }), p_position, $tmp2386, $tmp2388);
                return $tmp2384;
            }
            break;
            case 69:
            {
                org$pandalanguage$pandac$IRNode* $tmp2389 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2389->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2389->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2391 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2392 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(l2331, r2333);
                panda$core$UInt64 $tmp2393 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2392);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2389, ((panda$core$Int64) { 1004 }), p_position, $tmp2391, $tmp2393);
                return $tmp2389;
            }
            break;
            case 71:
            {
                org$pandalanguage$pandac$IRNode* $tmp2394 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2394->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2394->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2396 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2397 = panda$core$Int64$$BXOR$panda$core$Int64$R$panda$core$Int64(l2331, r2333);
                panda$core$UInt64 $tmp2398 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2397);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2394, ((panda$core$Int64) { 1004 }), p_position, $tmp2396, $tmp2398);
                return $tmp2394;
            }
            break;
            case 72:
            {
                org$pandalanguage$pandac$IRNode* $tmp2399 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2399->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2399->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2401 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2402 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(l2331, r2333);
                panda$core$UInt64 $tmp2403 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2402);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2399, ((panda$core$Int64) { 1004 }), p_position, $tmp2401, $tmp2403);
                return $tmp2399;
            }
            break;
            case 1:
            {
                org$pandalanguage$pandac$IRNode* $tmp2404 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2404->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2404->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2406 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2407 = panda$core$Int64$$SHR$panda$core$Int64$R$panda$core$Int64(l2331, r2333);
                panda$core$UInt64 $tmp2408 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2407);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2404, ((panda$core$Int64) { 1004 }), p_position, $tmp2406, $tmp2408);
                return $tmp2404;
            }
            break;
        }
    }
    }
    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s2409);
    return NULL;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    panda$core$Bit $tmp2410 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1009 }));
    if ($tmp2410.value) {
    {
        panda$core$Object* $tmp2411 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
        return ((org$pandalanguage$pandac$IRNode*) $tmp2411);
    }
    }
    return p_expr;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIndexedAssignment$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_left, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_right) {
    panda$collections$Array* args2416;
    org$pandalanguage$pandac$IRNode* resolved2424;
    panda$collections$Array* children2429;
    panda$core$UInt64 baseId2435;
    org$pandalanguage$pandac$IRNode* base2436;
    panda$core$UInt64 indexId2443;
    org$pandalanguage$pandac$IRNode* index2444;
    org$pandalanguage$pandac$IRNode* baseRef2449;
    org$pandalanguage$pandac$IRNode* indexRef2452;
    org$pandalanguage$pandac$IRNode* rhsIndex2455;
    org$pandalanguage$pandac$IRNode* value2457;
    panda$core$Bit $tmp2412 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_left->kind, ((panda$core$Int64) { 1040 }));
    PANDA_ASSERT($tmp2412.value);
    panda$core$Int64 $tmp2413 = panda$collections$Array$get_count$R$panda$core$Int64(p_left->children);
    panda$core$Bit $tmp2414 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2413, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp2414.value);
    panda$core$Bit $tmp2415 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 73 }));
    if ($tmp2415.value) {
    {
        panda$collections$Array* $tmp2417 = (panda$collections$Array*) malloc(40);
        $tmp2417->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2417->refCount.value = 1;
        panda$collections$Array$init($tmp2417);
        args2416 = $tmp2417;
        panda$core$Object* $tmp2419 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_left->children, ((panda$core$Int64) { 1 }));
        panda$collections$Array$add$panda$collections$Array$T(args2416, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp2419)));
        panda$collections$Array$add$panda$collections$Array$T(args2416, ((panda$core$Object*) p_right));
        panda$core$Object* $tmp2420 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_left->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp2422 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp2420), &$s2421, ((panda$collections$ListView*) args2416));
        return $tmp2422;
    }
    }
    panda$core$Bit $tmp2423 = org$pandalanguage$pandac$Compiler$isAssignment$panda$core$Int64$R$panda$core$Bit(p_op);
    PANDA_ASSERT($tmp2423.value);
    org$pandalanguage$pandac$IRNode* $tmp2425 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_left);
    resolved2424 = $tmp2425;
    if (((panda$core$Bit) { resolved2424 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp2426 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self, resolved2424);
    resolved2424 = $tmp2426;
    panda$core$Int64 $tmp2427 = panda$collections$Array$get_count$R$panda$core$Int64(resolved2424->children);
    panda$core$Bit $tmp2428 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2427, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp2428.value);
    panda$collections$Array* $tmp2430 = (panda$collections$Array*) malloc(40);
    $tmp2430->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2430->refCount.value = 1;
    panda$collections$Array$init($tmp2430);
    children2429 = $tmp2430;
    panda$core$Object* $tmp2432 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(resolved2424->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp2433 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self, ((org$pandalanguage$pandac$IRNode*) $tmp2432));
    panda$collections$Array$add$panda$collections$Array$T(children2429, ((panda$core$Object*) $tmp2433));
    panda$core$UInt64 $tmp2434 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(self->reusedValueCount, ((panda$core$UInt64) { 1 }));
    self->reusedValueCount = $tmp2434;
    baseId2435 = self->reusedValueCount;
    org$pandalanguage$pandac$IRNode* $tmp2437 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp2437->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2437->refCount.value = 1;
    panda$core$Object* $tmp2439 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children2429, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp2440 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children2429, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2437, ((panda$core$Int64) { 1027 }), ((org$pandalanguage$pandac$IRNode*) $tmp2439)->position, ((org$pandalanguage$pandac$IRNode*) $tmp2440)->type, ((panda$core$Object*) wrap_panda$core$UInt64(baseId2435)), ((panda$collections$ListView*) children2429));
    base2436 = $tmp2437;
    panda$collections$Array$clear(children2429);
    panda$core$Object* $tmp2441 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(resolved2424->children, ((panda$core$Int64) { 1 }));
    panda$collections$Array$add$panda$collections$Array$T(children2429, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp2441)));
    panda$core$UInt64 $tmp2442 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(self->reusedValueCount, ((panda$core$UInt64) { 1 }));
    self->reusedValueCount = $tmp2442;
    indexId2443 = self->reusedValueCount;
    org$pandalanguage$pandac$IRNode* $tmp2445 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp2445->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2445->refCount.value = 1;
    panda$core$Object* $tmp2447 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children2429, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp2448 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children2429, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2445, ((panda$core$Int64) { 1027 }), ((org$pandalanguage$pandac$IRNode*) $tmp2447)->position, ((org$pandalanguage$pandac$IRNode*) $tmp2448)->type, ((panda$core$Object*) wrap_panda$core$UInt64(indexId2443)), ((panda$collections$ListView*) children2429));
    index2444 = $tmp2445;
    org$pandalanguage$pandac$IRNode* $tmp2450 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp2450->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2450->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2450, ((panda$core$Int64) { 1028 }), base2436->position, base2436->type, baseId2435);
    baseRef2449 = $tmp2450;
    org$pandalanguage$pandac$IRNode* $tmp2453 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp2453->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2453->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2453, ((panda$core$Int64) { 1028 }), index2444->position, index2444->type, indexId2443);
    indexRef2452 = $tmp2453;
    org$pandalanguage$pandac$IRNode* $tmp2456 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, baseRef2449, ((panda$core$Int64) { 101 }), indexRef2452);
    rhsIndex2455 = $tmp2456;
    if (((panda$core$Bit) { rhsIndex2455 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Int64 $tmp2458 = org$pandalanguage$pandac$Compiler$removeAssignment$panda$core$Int64$R$panda$core$Int64(p_op);
    org$pandalanguage$pandac$IRNode* $tmp2459 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, rhsIndex2455, $tmp2458, p_right);
    value2457 = $tmp2459;
    if (((panda$core$Bit) { value2457 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp2462 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(rhsIndex2455->type);
    bool $tmp2461 = $tmp2462.value;
    if (!$tmp2461) goto $l2463;
    panda$core$Bit $tmp2464 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_right->type);
    $tmp2461 = $tmp2464.value;
    $l2463:;
    panda$core$Bit $tmp2465 = { $tmp2461 };
    bool $tmp2460 = $tmp2465.value;
    if (!$tmp2460) goto $l2466;
    panda$core$Bit $tmp2467 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(rhsIndex2455->type, value2457->type);
    $tmp2460 = $tmp2467.value;
    $l2466:;
    panda$core$Bit $tmp2468 = { $tmp2460 };
    if ($tmp2468.value) {
    {
        panda$collections$Array* $tmp2470 = (panda$collections$Array*) malloc(40);
        $tmp2470->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2470->refCount.value = 1;
        panda$collections$Array$init($tmp2470);
        org$pandalanguage$pandac$IRNode* $tmp2472 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, value2457, &$s2469, ((panda$collections$ListView*) $tmp2470), resolved2424->type);
        value2457 = $tmp2472;
        if (((panda$core$Bit) { value2457 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$collections$Array$clear(children2429);
    panda$collections$Array$add$panda$collections$Array$T(children2429, ((panda$core$Object*) index2444));
    panda$collections$Array$add$panda$collections$Array$T(children2429, ((panda$core$Object*) value2457));
    org$pandalanguage$pandac$IRNode* $tmp2474 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, base2436, &$s2473, ((panda$collections$ListView*) children2429));
    return $tmp2474;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_rawLeft, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_rawRight) {
    org$pandalanguage$pandac$IRNode* left2475;
    org$pandalanguage$pandac$IRNode* right2476;
    panda$core$Int64 kind2500;
    org$pandalanguage$pandac$IRNode* resolved2507;
    panda$collections$Array* children2509;
    org$pandalanguage$pandac$IRNode* resolved2516;
    panda$collections$Array* children2518;
    org$pandalanguage$pandac$ClassDecl* cl2530;
    org$pandalanguage$pandac$ClassDecl* cl2547;
    org$pandalanguage$pandac$IRNode* finalLeft2563;
    org$pandalanguage$pandac$IRNode* finalRight2566;
    panda$collections$Array* children2569;
    panda$collections$Array* children2583;
    panda$collections$Array* children2595;
    org$pandalanguage$pandac$IRNode* reusedLeft2601;
    org$pandalanguage$pandac$ClassDecl* cl2618;
    panda$collections$ListView* parameters2620;
    org$pandalanguage$pandac$Symbol* methods2622;
    org$pandalanguage$pandac$Type* type2626;
    panda$collections$Array* types2627;
    org$pandalanguage$pandac$MethodDecl* m2631;
    panda$collections$Iterator* m$Iter2636;
    org$pandalanguage$pandac$MethodDecl* m2648;
    panda$collections$Array* children2659;
    panda$collections$Array* children2688;
    panda$collections$Array* children2704;
    org$pandalanguage$pandac$Type* resultType2727;
    org$pandalanguage$pandac$IRNode* result2731;
    org$pandalanguage$pandac$IRNode* resolved2734;
    org$pandalanguage$pandac$IRNode* target2740;
    left2475 = p_rawLeft;
    right2476 = p_rawRight;
    panda$core$Bit $tmp2477 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2475->type->typeKind, ((panda$core$Int64) { 15 }));
    if ($tmp2477.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2478 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, right2476);
        right2476 = $tmp2478;
        if (((panda$core$Bit) { right2476 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Int64$nullable $tmp2479 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, left2475, right2476->type);
        if (((panda$core$Bit) { $tmp2479.nonnull }).value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2480 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, left2475, right2476->type);
            left2475 = $tmp2480;
        }
        }
    }
    }
    panda$core$Bit $tmp2482 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right2476->type->typeKind, ((panda$core$Int64) { 15 }));
    bool $tmp2481 = $tmp2482.value;
    if (!$tmp2481) goto $l2483;
    panda$core$Int64$nullable $tmp2484 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, right2476, left2475->type);
    $tmp2481 = ((panda$core$Bit) { $tmp2484.nonnull }).value;
    $l2483:;
    panda$core$Bit $tmp2485 = { $tmp2481 };
    if ($tmp2485.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2486 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, right2476, left2475->type);
        right2476 = $tmp2486;
    }
    }
    panda$core$Bit $tmp2490 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 58 }));
    bool $tmp2489 = $tmp2490.value;
    if ($tmp2489) goto $l2491;
    panda$core$Bit $tmp2492 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 59 }));
    $tmp2489 = $tmp2492.value;
    $l2491:;
    panda$core$Bit $tmp2493 = { $tmp2489 };
    bool $tmp2488 = $tmp2493.value;
    if ($tmp2488) goto $l2494;
    panda$core$Bit $tmp2495 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 60 }));
    $tmp2488 = $tmp2495.value;
    $l2494:;
    panda$core$Bit $tmp2496 = { $tmp2488 };
    bool $tmp2487 = $tmp2496.value;
    if ($tmp2487) goto $l2497;
    panda$core$Bit $tmp2498 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 61 }));
    $tmp2487 = $tmp2498.value;
    $l2497:;
    panda$core$Bit $tmp2499 = { $tmp2487 };
    if ($tmp2499.value) {
    {
        panda$core$Bit $tmp2502 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 58 }));
        bool $tmp2501 = $tmp2502.value;
        if ($tmp2501) goto $l2503;
        panda$core$Bit $tmp2504 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 60 }));
        $tmp2501 = $tmp2504.value;
        $l2503:;
        panda$core$Bit $tmp2505 = { $tmp2501 };
        if ($tmp2505.value) {
        {
            kind2500 = ((panda$core$Int64) { 1035 });
        }
        }
        else {
        {
            kind2500 = ((panda$core$Int64) { 1036 });
        }
        }
        panda$core$Bit $tmp2506 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2475->kind, ((panda$core$Int64) { 1030 }));
        if ($tmp2506.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2508 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, right2476);
            resolved2507 = $tmp2508;
            if (((panda$core$Bit) { resolved2507 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp2510 = (panda$collections$Array*) malloc(40);
            $tmp2510->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2510->refCount.value = 1;
            panda$collections$Array$init($tmp2510);
            children2509 = $tmp2510;
            panda$collections$Array$add$panda$collections$Array$T(children2509, ((panda$core$Object*) resolved2507));
            org$pandalanguage$pandac$IRNode* $tmp2512 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2512->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2512->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2514 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2512, kind2500, p_position, $tmp2514, ((panda$collections$ListView*) children2509));
            return $tmp2512;
        }
        }
        panda$core$Bit $tmp2515 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right2476->kind, ((panda$core$Int64) { 1030 }));
        if ($tmp2515.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2517 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, left2475);
            resolved2516 = $tmp2517;
            if (((panda$core$Bit) { resolved2516 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp2519 = (panda$collections$Array*) malloc(40);
            $tmp2519->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2519->refCount.value = 1;
            panda$collections$Array$init($tmp2519);
            children2518 = $tmp2519;
            panda$collections$Array$add$panda$collections$Array$T(children2518, ((panda$core$Object*) resolved2516));
            org$pandalanguage$pandac$IRNode* $tmp2521 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2521->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2521->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2523 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2521, kind2500, p_position, $tmp2523, ((panda$collections$ListView*) children2518));
            return $tmp2521;
        }
        }
    }
    }
    panda$core$Bit $tmp2525 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 60 }));
    bool $tmp2524 = $tmp2525.value;
    if ($tmp2524) goto $l2526;
    panda$core$Bit $tmp2527 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 61 }));
    $tmp2524 = $tmp2527.value;
    $l2526:;
    panda$core$Bit $tmp2528 = { $tmp2524 };
    if ($tmp2528.value) {
    {
        panda$core$Bit $tmp2529 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(left2475->type);
        if ($tmp2529.value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp2531 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, left2475->type);
            cl2530 = $tmp2531;
            if (((panda$core$Bit) { cl2530 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$Bit $tmp2532 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, cl2530);
            if ($tmp2532.value) {
            {
                panda$core$String* $tmp2534 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
                panda$core$String* $tmp2535 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2533, $tmp2534);
                panda$core$String* $tmp2537 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2535, &$s2536);
                panda$core$String* $tmp2538 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2537, ((panda$core$Object*) left2475->type));
                panda$core$String* $tmp2540 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2538, &$s2539);
                panda$core$String* $tmp2542 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2541, ((panda$core$Object*) right2476->type));
                panda$core$String* $tmp2544 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2542, &$s2543);
                panda$core$String* $tmp2545 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2540, $tmp2544);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp2545);
            }
            }
        }
        }
        panda$core$Bit $tmp2546 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(right2476->type);
        if ($tmp2546.value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp2548 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, right2476->type);
            cl2547 = $tmp2548;
            if (((panda$core$Bit) { cl2547 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$Bit $tmp2549 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, cl2547);
            if ($tmp2549.value) {
            {
                panda$core$String* $tmp2551 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
                panda$core$String* $tmp2552 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2550, $tmp2551);
                panda$core$String* $tmp2554 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2552, &$s2553);
                panda$core$String* $tmp2555 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2554, ((panda$core$Object*) left2475->type));
                panda$core$String* $tmp2557 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2555, &$s2556);
                panda$core$String* $tmp2559 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2558, ((panda$core$Object*) right2476->type));
                panda$core$String* $tmp2561 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2559, &$s2560);
                panda$core$String* $tmp2562 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2557, $tmp2561);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp2562);
            }
            }
        }
        }
        org$pandalanguage$pandac$Type* $tmp2564 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp2565 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, left2475, $tmp2564);
        finalLeft2563 = $tmp2565;
        if (((panda$core$Bit) { finalLeft2563 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$Type* $tmp2567 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp2568 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, right2476, $tmp2567);
        finalRight2566 = $tmp2568;
        if (((panda$core$Bit) { finalRight2566 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp2570 = (panda$collections$Array*) malloc(40);
        $tmp2570->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2570->refCount.value = 1;
        panda$collections$Array$init($tmp2570);
        children2569 = $tmp2570;
        panda$collections$Array$add$panda$collections$Array$T(children2569, ((panda$core$Object*) finalLeft2563));
        panda$collections$Array$add$panda$collections$Array$T(children2569, ((panda$core$Object*) finalRight2566));
        org$pandalanguage$pandac$IRNode* $tmp2572 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2572->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2572->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp2574 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2572, ((panda$core$Int64) { 1023 }), p_position, $tmp2574, ((panda$core$Object*) wrap_panda$core$Int64(p_op)), ((panda$collections$ListView*) children2569));
        return $tmp2572;
    }
    }
    panda$core$Bit $tmp2575 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 73 }));
    if ($tmp2575.value) {
    {
        panda$core$Bit $tmp2576 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2475->kind, ((panda$core$Int64) { 1040 }));
        if ($tmp2576.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2577 = org$pandalanguage$pandac$Compiler$compileIndexedAssignment$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, left2475, p_op, right2476);
            return $tmp2577;
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp2578 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, left2475);
        left2475 = $tmp2578;
        if (((panda$core$Bit) { left2475 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp2579 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, right2476, left2475->type);
        right2476 = $tmp2579;
        if (((panda$core$Bit) { right2476 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp2580 = org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, left2475);
        panda$core$Bit $tmp2581 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2580);
        if ($tmp2581.value) {
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, left2475->position, &$s2582);
            return NULL;
        }
        }
        panda$collections$Array* $tmp2584 = (panda$collections$Array*) malloc(40);
        $tmp2584->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2584->refCount.value = 1;
        panda$collections$Array$init($tmp2584);
        children2583 = $tmp2584;
        panda$collections$Array$add$panda$collections$Array$T(children2583, ((panda$core$Object*) left2475));
        panda$collections$Array$add$panda$collections$Array$T(children2583, ((panda$core$Object*) right2476));
        org$pandalanguage$pandac$IRNode* $tmp2586 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2586->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2586->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2586, ((panda$core$Int64) { 1023 }), p_position, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 73 }))), ((panda$collections$ListView*) children2583));
        return $tmp2586;
    }
    }
    panda$core$Bit $tmp2588 = org$pandalanguage$pandac$Compiler$isAssignment$panda$core$Int64$R$panda$core$Bit(p_op);
    if ($tmp2588.value) {
    {
        panda$core$Bit $tmp2589 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2475->kind, ((panda$core$Int64) { 1040 }));
        if ($tmp2589.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2590 = org$pandalanguage$pandac$Compiler$compileIndexedAssignment$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, left2475, p_op, right2476);
            return $tmp2590;
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp2591 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, left2475);
        left2475 = $tmp2591;
        if (((panda$core$Bit) { left2475 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp2592 = org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, left2475);
        panda$core$Bit $tmp2593 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2592);
        if ($tmp2593.value) {
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, left2475->position, &$s2594);
            return NULL;
        }
        }
        panda$collections$Array* $tmp2596 = (panda$collections$Array*) malloc(40);
        $tmp2596->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2596->refCount.value = 1;
        panda$collections$Array$init($tmp2596);
        children2595 = $tmp2596;
        panda$collections$Array$add$panda$collections$Array$T(children2595, ((panda$core$Object*) left2475));
        panda$core$UInt64 $tmp2598 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(self->reusedValueCount, ((panda$core$UInt64) { 1 }));
        self->reusedValueCount = $tmp2598;
        org$pandalanguage$pandac$IRNode* $tmp2599 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2599->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2599->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2599, ((panda$core$Int64) { 1027 }), left2475->position, left2475->type, ((panda$core$Object*) wrap_panda$core$UInt64(self->reusedValueCount)), ((panda$collections$ListView*) children2595));
        left2475 = $tmp2599;
        org$pandalanguage$pandac$IRNode* $tmp2602 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2602->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2602->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2602, ((panda$core$Int64) { 1028 }), left2475->position, left2475->type, self->reusedValueCount);
        reusedLeft2601 = $tmp2602;
        panda$core$Int64 $tmp2604 = org$pandalanguage$pandac$Compiler$removeAssignment$panda$core$Int64$R$panda$core$Int64(p_op);
        org$pandalanguage$pandac$IRNode* $tmp2605 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, reusedLeft2601, $tmp2604, right2476);
        right2476 = $tmp2605;
        if (((panda$core$Bit) { right2476 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp2607 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(left2475->type);
        bool $tmp2606 = $tmp2607.value;
        if (!$tmp2606) goto $l2608;
        panda$core$Bit $tmp2609 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(left2475->type, right2476->type);
        $tmp2606 = $tmp2609.value;
        $l2608:;
        panda$core$Bit $tmp2610 = { $tmp2606 };
        if ($tmp2610.value) {
        {
            panda$collections$Array* $tmp2612 = (panda$collections$Array*) malloc(40);
            $tmp2612->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2612->refCount.value = 1;
            panda$collections$Array$init($tmp2612);
            org$pandalanguage$pandac$IRNode* $tmp2614 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, right2476, &$s2611, ((panda$collections$ListView*) $tmp2612), left2475->type);
            right2476 = $tmp2614;
            if (((panda$core$Bit) { right2476 == NULL }).value) {
            {
                return NULL;
            }
            }
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp2615 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, left2475, ((panda$core$Int64) { 73 }), right2476);
        return $tmp2615;
    }
    }
    panda$core$Bit $tmp2616 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 101 }));
    if ($tmp2616.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2617 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, left2475);
        left2475 = $tmp2617;
        if (((panda$core$Bit) { left2475 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$ClassDecl* $tmp2619 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, left2475->type);
        cl2618 = $tmp2619;
        if (((panda$core$Bit) { cl2618 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$ListView* $tmp2621 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, left2475->type);
        parameters2620 = $tmp2621;
        org$pandalanguage$pandac$SymbolTable* $tmp2623 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl2618);
        org$pandalanguage$pandac$Symbol* $tmp2625 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp2623, &$s2624);
        methods2622 = $tmp2625;
        if (((panda$core$Bit) { methods2622 != NULL }).value) {
        {
            panda$collections$Array* $tmp2628 = (panda$collections$Array*) malloc(40);
            $tmp2628->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2628->refCount.value = 1;
            panda$collections$Array$init($tmp2628);
            types2627 = $tmp2628;
            panda$core$Bit $tmp2630 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(methods2622->kind, ((panda$core$Int64) { 204 }));
            if ($tmp2630.value) {
            {
                m2631 = ((org$pandalanguage$pandac$MethodDecl*) methods2622);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m2631);
                org$pandalanguage$pandac$MethodRef* $tmp2632 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                $tmp2632->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                $tmp2632->refCount.value = 1;
                org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp2632, m2631, parameters2620);
                org$pandalanguage$pandac$Type* $tmp2634 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type($tmp2632);
                panda$collections$Array$add$panda$collections$Array$T(types2627, ((panda$core$Object*) $tmp2634));
            }
            }
            else {
            {
                panda$core$Bit $tmp2635 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(methods2622->kind, ((panda$core$Int64) { 205 }));
                PANDA_ASSERT($tmp2635.value);
                {
                    ITable* $tmp2637 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) methods2622)->methods)->$class->itable;
                    while ($tmp2637->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp2637 = $tmp2637->next;
                    }
                    $fn2639 $tmp2638 = $tmp2637->methods[0];
                    panda$collections$Iterator* $tmp2640 = $tmp2638(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) methods2622)->methods));
                    m$Iter2636 = $tmp2640;
                    $l2641:;
                    ITable* $tmp2643 = m$Iter2636->$class->itable;
                    while ($tmp2643->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp2643 = $tmp2643->next;
                    }
                    $fn2645 $tmp2644 = $tmp2643->methods[0];
                    panda$core$Bit $tmp2646 = $tmp2644(m$Iter2636);
                    panda$core$Bit $tmp2647 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2646);
                    if (!$tmp2647.value) goto $l2642;
                    {
                        ITable* $tmp2649 = m$Iter2636->$class->itable;
                        while ($tmp2649->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2649 = $tmp2649->next;
                        }
                        $fn2651 $tmp2650 = $tmp2649->methods[1];
                        panda$core$Object* $tmp2652 = $tmp2650(m$Iter2636);
                        m2648 = ((org$pandalanguage$pandac$MethodDecl*) $tmp2652);
                        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m2648);
                        org$pandalanguage$pandac$MethodRef* $tmp2653 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                        $tmp2653->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                        $tmp2653->refCount.value = 1;
                        org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp2653, m2648, parameters2620);
                        org$pandalanguage$pandac$Type* $tmp2655 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type($tmp2653);
                        panda$collections$Array$add$panda$collections$Array$T(types2627, ((panda$core$Object*) $tmp2655));
                    }
                    goto $l2641;
                    $l2642:;
                }
            }
            }
            org$pandalanguage$pandac$Type* $tmp2656 = (org$pandalanguage$pandac$Type*) malloc(96);
            $tmp2656->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp2656->refCount.value = 1;
            org$pandalanguage$pandac$Type$init$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp2656, ((panda$collections$ListView*) types2627));
            type2626 = $tmp2656;
        }
        }
        else {
        {
            org$pandalanguage$pandac$Type* $tmp2658 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            type2626 = $tmp2658;
        }
        }
        panda$collections$Array* $tmp2660 = (panda$collections$Array*) malloc(40);
        $tmp2660->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2660->refCount.value = 1;
        panda$collections$Array$init($tmp2660);
        children2659 = $tmp2660;
        panda$collections$Array$add$panda$collections$Array$T(children2659, ((panda$core$Object*) left2475));
        panda$collections$Array$add$panda$collections$Array$T(children2659, ((panda$core$Object*) right2476));
        org$pandalanguage$pandac$IRNode* $tmp2662 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2662->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2662->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2662, ((panda$core$Int64) { 1040 }), p_position, type2626, ((panda$collections$ListView*) children2659));
        return $tmp2662;
    }
    }
    org$pandalanguage$pandac$Type* $tmp2664 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2665 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(left2475->type, $tmp2664);
    if ($tmp2665.value) {
    {
        org$pandalanguage$pandac$Type* $tmp2667 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp2668 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(right2476->type, $tmp2667);
        bool $tmp2666 = $tmp2668.value;
        if (!$tmp2666) goto $l2669;
        panda$core$Bit $tmp2674 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 66 }));
        bool $tmp2673 = $tmp2674.value;
        if ($tmp2673) goto $l2675;
        panda$core$Bit $tmp2676 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 68 }));
        $tmp2673 = $tmp2676.value;
        $l2675:;
        panda$core$Bit $tmp2677 = { $tmp2673 };
        bool $tmp2672 = $tmp2677.value;
        if ($tmp2672) goto $l2678;
        panda$core$Bit $tmp2679 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 70 }));
        $tmp2672 = $tmp2679.value;
        $l2678:;
        panda$core$Bit $tmp2680 = { $tmp2672 };
        bool $tmp2671 = $tmp2680.value;
        if ($tmp2671) goto $l2681;
        panda$core$Bit $tmp2682 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 58 }));
        $tmp2671 = $tmp2682.value;
        $l2681:;
        panda$core$Bit $tmp2683 = { $tmp2671 };
        bool $tmp2670 = $tmp2683.value;
        if ($tmp2670) goto $l2684;
        panda$core$Bit $tmp2685 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 59 }));
        $tmp2670 = $tmp2685.value;
        $l2684:;
        panda$core$Bit $tmp2686 = { $tmp2670 };
        $tmp2666 = $tmp2686.value;
        $l2669:;
        panda$core$Bit $tmp2687 = { $tmp2666 };
        if ($tmp2687.value) {
        {
            panda$collections$Array* $tmp2689 = (panda$collections$Array*) malloc(40);
            $tmp2689->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2689->refCount.value = 1;
            panda$collections$Array$init($tmp2689);
            children2688 = $tmp2689;
            panda$collections$Array$add$panda$collections$Array$T(children2688, ((panda$core$Object*) left2475));
            panda$collections$Array$add$panda$collections$Array$T(children2688, ((panda$core$Object*) right2476));
            org$pandalanguage$pandac$IRNode* $tmp2691 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2691->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2691->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2691, ((panda$core$Int64) { 1023 }), p_position, left2475->type, ((panda$core$Object*) wrap_panda$core$Int64(p_op)), ((panda$collections$ListView*) children2688));
            return $tmp2691;
        }
        }
        panda$core$String* $tmp2694 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
        panda$core$String* $tmp2695 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2693, $tmp2694);
        panda$core$String* $tmp2697 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2695, &$s2696);
        panda$core$String* $tmp2698 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2697, ((panda$core$Object*) left2475->type));
        panda$core$String* $tmp2700 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2698, &$s2699);
        panda$core$String* $tmp2701 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2700, ((panda$core$Object*) right2476->type));
        panda$core$String* $tmp2703 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2701, &$s2702);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp2703);
        return NULL;
    }
    }
    panda$collections$Array* $tmp2705 = (panda$collections$Array*) malloc(40);
    $tmp2705->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2705->refCount.value = 1;
    panda$collections$Array$init($tmp2705);
    children2704 = $tmp2705;
    panda$core$Bit $tmp2709 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2475->kind, ((panda$core$Int64) { 1004 }));
    bool $tmp2708 = $tmp2709.value;
    if ($tmp2708) goto $l2710;
    panda$core$Bit $tmp2711 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2475->kind, ((panda$core$Int64) { 1032 }));
    $tmp2708 = $tmp2711.value;
    $l2710:;
    panda$core$Bit $tmp2712 = { $tmp2708 };
    bool $tmp2707 = $tmp2712.value;
    if (!$tmp2707) goto $l2713;
    panda$core$Bit $tmp2715 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right2476->kind, ((panda$core$Int64) { 1004 }));
    bool $tmp2714 = $tmp2715.value;
    if ($tmp2714) goto $l2716;
    panda$core$Bit $tmp2717 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right2476->kind, ((panda$core$Int64) { 1032 }));
    $tmp2714 = $tmp2717.value;
    $l2716:;
    panda$core$Bit $tmp2718 = { $tmp2714 };
    $tmp2707 = $tmp2718.value;
    $l2713:;
    panda$core$Bit $tmp2719 = { $tmp2707 };
    if ($tmp2719.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2720 = org$pandalanguage$pandac$Compiler$foldInts$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, left2475, p_op, right2476);
        return $tmp2720;
    }
    }
    panda$core$Bit $tmp2722 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(left2475->type);
    bool $tmp2721 = $tmp2722.value;
    if (!$tmp2721) goto $l2723;
    panda$core$Int64$nullable $tmp2724 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, right2476, left2475->type);
    $tmp2721 = ((panda$core$Bit) { $tmp2724.nonnull }).value;
    $l2723:;
    panda$core$Bit $tmp2725 = { $tmp2721 };
    if ($tmp2725.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2726 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, right2476, left2475->type);
        right2476 = $tmp2726;
        PANDA_ASSERT(((panda$core$Bit) { right2476 != NULL }).value);
        panda$collections$Array$add$panda$collections$Array$T(children2704, ((panda$core$Object*) left2475));
        panda$collections$Array$add$panda$collections$Array$T(children2704, ((panda$core$Object*) right2476));
        switch (p_op.value) {
            case 58:
            case 59:
            case 63:
            case 65:
            case 62:
            case 64:
            {
                org$pandalanguage$pandac$Type* $tmp2728 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
                resultType2727 = $tmp2728;
            }
            break;
            default:
            {
                resultType2727 = left2475->type;
            }
        }
        org$pandalanguage$pandac$IRNode* $tmp2729 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2729->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2729->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2729, ((panda$core$Int64) { 1023 }), p_position, resultType2727, ((panda$core$Object*) wrap_panda$core$Int64(p_op)), ((panda$collections$ListView*) children2704));
        return $tmp2729;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children2704, ((panda$core$Object*) right2476));
    PANDA_ASSERT(self->reportErrors.value);
    self->reportErrors = ((panda$core$Bit) { false });
    panda$core$String* $tmp2732 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
    org$pandalanguage$pandac$IRNode* $tmp2733 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, left2475, $tmp2732, ((panda$collections$ListView*) children2704));
    result2731 = $tmp2733;
    self->reportErrors = ((panda$core$Bit) { true });
    if (((panda$core$Bit) { result2731 == NULL }).value) {
    {
        panda$collections$Array$clear(children2704);
        panda$collections$Array$add$panda$collections$Array$T(children2704, ((panda$core$Object*) left2475));
        org$pandalanguage$pandac$IRNode* $tmp2735 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, right2476);
        resolved2734 = $tmp2735;
        bool $tmp2736 = ((panda$core$Bit) { resolved2734 != NULL }).value;
        if (!$tmp2736) goto $l2737;
        panda$core$Bit $tmp2738 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(resolved2734->type);
        $tmp2736 = $tmp2738.value;
        $l2737:;
        panda$core$Bit $tmp2739 = { $tmp2736 };
        if ($tmp2739.value) {
        {
            panda$collections$Array$add$panda$collections$Array$T(children2704, ((panda$core$Object*) resolved2734));
            org$pandalanguage$pandac$IRNode* $tmp2741 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2741->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2741->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2743 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp2741, ((panda$core$Int64) { 1001 }), resolved2734->position, $tmp2743, resolved2734->type);
            target2740 = $tmp2741;
            panda$core$String* $tmp2744 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
            org$pandalanguage$pandac$IRNode* $tmp2745 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target2740, $tmp2744, ((panda$collections$ListView*) children2704));
            result2731 = $tmp2745;
        }
        }
    }
    }
    return result2731;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_b) {
    org$pandalanguage$pandac$IRNode* left2746;
    org$pandalanguage$pandac$IRNode* right2749;
    panda$core$Object* $tmp2747 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_b->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp2748 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2747));
    left2746 = $tmp2748;
    if (((panda$core$Bit) { left2746 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Object* $tmp2750 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_b->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp2751 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2750));
    right2749 = $tmp2751;
    if (((panda$core$Bit) { right2749 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp2752 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_b->position, left2746, ((panda$core$Int64$wrapper*) p_b->payload)->value, right2749);
    return $tmp2752;
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type) {
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp2756;
    switch (p_type->typeKind.value) {
        case 22:
        {
            panda$collections$ListView* $tmp2753 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p_type->parameter->bound);
            return $tmp2753;
        }
        break;
        case 21:
        {
            panda$core$Int64 $tmp2754 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_type->subtypes);
            panda$core$Bit $tmp2755 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp2754, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2755.value);
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp2756, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
            panda$collections$ImmutableArray* $tmp2757 = panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(p_type->subtypes, $tmp2756);
            return ((panda$collections$ListView*) $tmp2757);
        }
        break;
        case 11:
        {
            panda$core$Object* $tmp2758 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
            panda$collections$ListView* $tmp2759 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, ((org$pandalanguage$pandac$Type*) $tmp2758));
            return $tmp2759;
        }
        break;
        default:
        {
            panda$collections$Array* $tmp2760 = (panda$collections$Array*) malloc(40);
            $tmp2760->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2760->refCount.value = 1;
            panda$collections$Array$init($tmp2760);
            return ((panda$collections$ListView*) $tmp2760);
        }
    }
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$IRNode$Q$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_target) {
    if (((panda$core$Bit) { p_target != NULL }).value) {
    {
        panda$core$Bit $tmp2762 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1001 }));
        if ($tmp2762.value) {
        {
            panda$collections$ListView* $tmp2763 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, ((org$pandalanguage$pandac$Type*) p_target->payload));
            return $tmp2763;
        }
        }
        panda$collections$ListView* $tmp2764 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p_target->type);
        return $tmp2764;
    }
    }
    panda$collections$Array* $tmp2765 = (panda$collections$Array*) malloc(40);
    $tmp2765->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2765->refCount.value = 1;
    panda$collections$Array$init($tmp2765);
    return ((panda$collections$ListView*) $tmp2765);
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compilePrefix$panda$core$Int64$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_base, org$pandalanguage$pandac$Position p_position) {
    panda$core$String* name2768;
    org$pandalanguage$pandac$ClassDecl* cl2770;
    org$pandalanguage$pandac$Symbol* s2772;
    org$pandalanguage$pandac$MethodDecl* m2775;
    panda$collections$Iterator* test$Iter2780;
    org$pandalanguage$pandac$MethodDecl* test2792;
    org$pandalanguage$pandac$MethodRef* ref2804;
    panda$collections$Array* children2808;
    org$pandalanguage$pandac$IRNode* methodRef2811;
    org$pandalanguage$pandac$Position $tmp2817;
    panda$collections$Array* args2818;
    panda$collections$Array* children2827;
    panda$collections$Array* children2837;
    org$pandalanguage$pandac$IRNode* coerced2846;
    panda$collections$Array* children2849;
    panda$core$Bit $tmp2767 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_base->type);
    if ($tmp2767.value) {
    {
        panda$core$String* $tmp2769 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
        name2768 = $tmp2769;
        org$pandalanguage$pandac$ClassDecl* $tmp2771 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_base->type);
        cl2770 = $tmp2771;
        if (((panda$core$Bit) { cl2770 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$SymbolTable* $tmp2773 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl2770);
        org$pandalanguage$pandac$Symbol* $tmp2774 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp2773, name2768);
        s2772 = $tmp2774;
        if (((panda$core$Bit) { s2772 != NULL }).value) {
        {
            m2775 = NULL;
            switch (s2772->kind.value) {
                case 204:
                {
                    m2775 = ((org$pandalanguage$pandac$MethodDecl*) s2772);
                    panda$core$Int64 $tmp2776 = panda$collections$Array$get_count$R$panda$core$Int64(m2775->parameters);
                    panda$core$Bit $tmp2777 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2776, ((panda$core$Int64) { 0 }));
                    PANDA_ASSERT($tmp2777.value);
                    panda$core$Bit $tmp2778 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(m2775->annotations);
                    panda$core$Bit $tmp2779 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2778);
                    PANDA_ASSERT($tmp2779.value);
                }
                break;
                case 205:
                {
                    {
                        ITable* $tmp2781 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s2772)->methods)->$class->itable;
                        while ($tmp2781->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp2781 = $tmp2781->next;
                        }
                        $fn2783 $tmp2782 = $tmp2781->methods[0];
                        panda$collections$Iterator* $tmp2784 = $tmp2782(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s2772)->methods));
                        test$Iter2780 = $tmp2784;
                        $l2785:;
                        ITable* $tmp2787 = test$Iter2780->$class->itable;
                        while ($tmp2787->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2787 = $tmp2787->next;
                        }
                        $fn2789 $tmp2788 = $tmp2787->methods[0];
                        panda$core$Bit $tmp2790 = $tmp2788(test$Iter2780);
                        panda$core$Bit $tmp2791 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2790);
                        if (!$tmp2791.value) goto $l2786;
                        {
                            ITable* $tmp2793 = test$Iter2780->$class->itable;
                            while ($tmp2793->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp2793 = $tmp2793->next;
                            }
                            $fn2795 $tmp2794 = $tmp2793->methods[1];
                            panda$core$Object* $tmp2796 = $tmp2794(test$Iter2780);
                            test2792 = ((org$pandalanguage$pandac$MethodDecl*) $tmp2796);
                            panda$core$Bit $tmp2798 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(test2792->annotations);
                            panda$core$Bit $tmp2799 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2798);
                            bool $tmp2797 = $tmp2799.value;
                            if (!$tmp2797) goto $l2800;
                            panda$core$Int64 $tmp2801 = panda$collections$Array$get_count$R$panda$core$Int64(test2792->parameters);
                            panda$core$Bit $tmp2802 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2801, ((panda$core$Int64) { 0 }));
                            $tmp2797 = $tmp2802.value;
                            $l2800:;
                            panda$core$Bit $tmp2803 = { $tmp2797 };
                            if ($tmp2803.value) {
                            {
                                m2775 = test2792;
                                goto $l2786;
                            }
                            }
                        }
                        goto $l2785;
                        $l2786:;
                    }
                }
                break;
                default:
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
            }
            if (((panda$core$Bit) { m2775 != NULL }).value) {
            {
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m2775);
                org$pandalanguage$pandac$MethodRef* $tmp2805 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                $tmp2805->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                $tmp2805->refCount.value = 1;
                panda$collections$ListView* $tmp2807 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$IRNode$Q$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p_base);
                org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp2805, m2775, $tmp2807);
                ref2804 = $tmp2805;
                panda$collections$Array* $tmp2809 = (panda$collections$Array*) malloc(40);
                $tmp2809->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp2809->refCount.value = 1;
                panda$collections$Array$init($tmp2809);
                children2808 = $tmp2809;
                panda$collections$Array$add$panda$collections$Array$T(children2808, ((panda$core$Object*) p_base));
                org$pandalanguage$pandac$IRNode* $tmp2812 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2812->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2812->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2814 = (org$pandalanguage$pandac$Type*) malloc(96);
                $tmp2814->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
                $tmp2814->refCount.value = 1;
                org$pandalanguage$pandac$Position$init(&$tmp2817);
                org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp2814, &$s2816, ((panda$core$Int64) { 16 }), $tmp2817, ((panda$core$Bit) { true }));
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2812, ((panda$core$Int64) { 1002 }), p_position, $tmp2814, ((panda$core$Object*) ref2804), ((panda$collections$ListView*) children2808));
                methodRef2811 = $tmp2812;
                panda$collections$Array* $tmp2819 = (panda$collections$Array*) malloc(40);
                $tmp2819->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp2819->refCount.value = 1;
                panda$collections$Array$init($tmp2819);
                args2818 = $tmp2819;
                org$pandalanguage$pandac$IRNode* $tmp2821 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, methodRef2811, ((panda$collections$ListView*) args2818));
                return $tmp2821;
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
                    org$pandalanguage$pandac$IRNode* $tmp2822 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp2822->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp2822->refCount.value = 1;
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2822, ((panda$core$Int64) { 1032 }), p_position, p_base->type, ((panda$core$UInt64$wrapper*) p_base->payload)->value);
                    return $tmp2822;
                }
                break;
                case 1032:
                {
                    org$pandalanguage$pandac$IRNode* $tmp2824 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp2824->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp2824->refCount.value = 1;
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2824, ((panda$core$Int64) { 1004 }), p_position, p_base->type, ((panda$core$UInt64$wrapper*) p_base->payload)->value);
                    return $tmp2824;
                }
                break;
                default:
                {
                    panda$core$Bit $tmp2826 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_base->type);
                    if ($tmp2826.value) {
                    {
                        panda$collections$Array* $tmp2828 = (panda$collections$Array*) malloc(40);
                        $tmp2828->$class = (panda$core$Class*) &panda$collections$Array$class;
                        $tmp2828->refCount.value = 1;
                        panda$collections$Array$init($tmp2828);
                        children2827 = $tmp2828;
                        panda$collections$Array$add$panda$collections$Array$T(children2827, ((panda$core$Object*) p_base));
                        org$pandalanguage$pandac$IRNode* $tmp2830 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                        $tmp2830->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                        $tmp2830->refCount.value = 1;
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2830, ((panda$core$Int64) { 1041 }), p_base->position, p_base->type, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 52 }))), ((panda$collections$ListView*) children2827));
                        return $tmp2830;
                    }
                    }
                }
            }
            panda$core$String* $tmp2833 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2832, ((panda$core$Object*) p_base->type));
            panda$core$String* $tmp2835 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2833, &$s2834);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_base->position, $tmp2835);
            return NULL;
        }
        break;
        case 50:
        {
            panda$core$Bit $tmp2836 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_base->type);
            if ($tmp2836.value) {
            {
                panda$collections$Array* $tmp2838 = (panda$collections$Array*) malloc(40);
                $tmp2838->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp2838->refCount.value = 1;
                panda$collections$Array$init($tmp2838);
                children2837 = $tmp2838;
                panda$collections$Array$add$panda$collections$Array$T(children2837, ((panda$core$Object*) p_base));
                org$pandalanguage$pandac$IRNode* $tmp2840 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2840->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2840->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2840, ((panda$core$Int64) { 1041 }), p_base->position, p_base->type, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 50 }))), ((panda$collections$ListView*) children2837));
                return $tmp2840;
            }
            }
            else {
            {
                panda$core$String* $tmp2843 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2842, ((org$pandalanguage$pandac$Symbol*) p_base->type)->name);
                panda$core$String* $tmp2845 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2843, &$s2844);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_base->position, $tmp2845);
                return NULL;
            }
            }
        }
        break;
        case 49:
        {
            org$pandalanguage$pandac$Type* $tmp2847 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode* $tmp2848 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_base, $tmp2847);
            coerced2846 = $tmp2848;
            if (((panda$core$Bit) { coerced2846 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp2850 = (panda$collections$Array*) malloc(40);
            $tmp2850->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2850->refCount.value = 1;
            panda$collections$Array$init($tmp2850);
            children2849 = $tmp2850;
            panda$collections$Array$add$panda$collections$Array$T(children2849, ((panda$core$Object*) coerced2846));
            org$pandalanguage$pandac$IRNode* $tmp2852 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2852->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2852->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2852, ((panda$core$Int64) { 1041 }), p_base->position, p_base->type, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 49 }))), ((panda$collections$ListView*) children2849));
            return $tmp2852;
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
    org$pandalanguage$pandac$IRNode* base2857;
    panda$core$Bit $tmp2854 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_p->kind, ((panda$core$Int64) { 112 }));
    PANDA_ASSERT($tmp2854.value);
    panda$core$Int64 $tmp2855 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_p->children);
    panda$core$Bit $tmp2856 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2855, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp2856.value);
    panda$core$Object* $tmp2858 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_p->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp2859 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2858));
    base2857 = $tmp2859;
    if (((panda$core$Bit) { base2857 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp2860 = org$pandalanguage$pandac$Compiler$compilePrefix$panda$core$Int64$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$R$org$pandalanguage$pandac$IRNode$Q(self, ((panda$core$Int64$wrapper*) p_p->payload)->value, base2857, p_p->position);
    return $tmp2860;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileCall$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_c) {
    org$pandalanguage$pandac$IRNode* m2862;
    panda$collections$Array* args2865;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2868;
    org$pandalanguage$pandac$IRNode* arg2888;
    panda$core$Bit $tmp2861 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_c->kind, ((panda$core$Int64) { 107 }));
    PANDA_ASSERT($tmp2861.value);
    panda$core$Object* $tmp2863 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_c->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp2864 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2863));
    m2862 = $tmp2864;
    if (((panda$core$Bit) { m2862 != NULL }).value) {
    {
        panda$collections$Array* $tmp2866 = (panda$collections$Array*) malloc(40);
        $tmp2866->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2866->refCount.value = 1;
        panda$collections$Array$init($tmp2866);
        args2865 = $tmp2866;
        panda$core$Int64 $tmp2869 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_c->children);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp2868, ((panda$core$Int64) { 1 }), $tmp2869, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
        int64_t $tmp2871 = $tmp2868.start.value;
        panda$core$Int64 i2870 = { $tmp2871 };
        int64_t $tmp2873 = $tmp2868.end.value;
        int64_t $tmp2874 = $tmp2868.step.value;
        bool $tmp2875 = $tmp2868.inclusive.value;
        bool $tmp2882 = $tmp2874 > 0;
        if ($tmp2882) goto $l2880; else goto $l2881;
        $l2880:;
        if ($tmp2875) goto $l2883; else goto $l2884;
        $l2883:;
        if ($tmp2871 <= $tmp2873) goto $l2876; else goto $l2878;
        $l2884:;
        if ($tmp2871 < $tmp2873) goto $l2876; else goto $l2878;
        $l2881:;
        if ($tmp2875) goto $l2885; else goto $l2886;
        $l2885:;
        if ($tmp2871 >= $tmp2873) goto $l2876; else goto $l2878;
        $l2886:;
        if ($tmp2871 > $tmp2873) goto $l2876; else goto $l2878;
        $l2876:;
        {
            panda$core$Object* $tmp2889 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_c->children, i2870);
            org$pandalanguage$pandac$IRNode* $tmp2890 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2889));
            arg2888 = $tmp2890;
            if (((panda$core$Bit) { arg2888 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(args2865, ((panda$core$Object*) arg2888));
        }
        $l2879:;
        if ($tmp2882) goto $l2892; else goto $l2893;
        $l2892:;
        int64_t $tmp2894 = $tmp2873 - i2870.value;
        if ($tmp2875) goto $l2895; else goto $l2896;
        $l2895:;
        if ($tmp2894 >= $tmp2874) goto $l2891; else goto $l2878;
        $l2896:;
        if ($tmp2894 > $tmp2874) goto $l2891; else goto $l2878;
        $l2893:;
        int64_t $tmp2898 = i2870.value - $tmp2873;
        if ($tmp2875) goto $l2899; else goto $l2900;
        $l2899:;
        if ($tmp2898 >= -$tmp2874) goto $l2891; else goto $l2878;
        $l2900:;
        if ($tmp2898 > -$tmp2874) goto $l2891; else goto $l2878;
        $l2891:;
        i2870.value += $tmp2874;
        goto $l2876;
        $l2878:;
        org$pandalanguage$pandac$IRNode* $tmp2902 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, m2862, ((panda$collections$ListView*) args2865));
        return $tmp2902;
    }
    }
    return NULL;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_d) {
    org$pandalanguage$pandac$IRNode* base2906;
    org$pandalanguage$pandac$ClassDecl* cl2915;
    panda$core$String* name2917;
    org$pandalanguage$pandac$ClassDecl* cl2925;
    org$pandalanguage$pandac$Symbol* s2938;
    panda$core$Bit $tmp2903 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_d->kind, ((panda$core$Int64) { 108 }));
    PANDA_ASSERT($tmp2903.value);
    panda$core$Int64 $tmp2904 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp2905 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2904, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp2905.value);
    panda$core$Object* $tmp2907 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp2908 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2907));
    base2906 = $tmp2908;
    if (((panda$core$Bit) { base2906 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp2910 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(base2906->kind, ((panda$core$Int64) { 1037 }));
    bool $tmp2909 = $tmp2910.value;
    if (!$tmp2909) goto $l2911;
    panda$core$Bit $tmp2912 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(base2906->kind, ((panda$core$Int64) { 1024 }));
    $tmp2909 = $tmp2912.value;
    $l2911:;
    panda$core$Bit $tmp2913 = { $tmp2909 };
    if ($tmp2913.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2914 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, base2906);
        base2906 = $tmp2914;
    }
    }
    if (((panda$core$Bit) { base2906 == NULL }).value) {
    {
        return NULL;
    }
    }
    switch (base2906->kind.value) {
        case 1001:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp2916 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Type*) base2906->payload));
            cl2915 = $tmp2916;
        }
        break;
        case 1037:
        {
            panda$core$String* $tmp2919 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2918, base2906->payload);
            panda$core$String* $tmp2921 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2919, &$s2920);
            panda$core$String* $tmp2922 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2921, p_d->payload);
            panda$core$String* $tmp2924 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2922, &$s2923);
            name2917 = $tmp2924;
            org$pandalanguage$pandac$ClassDecl* $tmp2926 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, name2917);
            cl2925 = $tmp2926;
            if (((panda$core$Bit) { cl2925 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2927 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2927->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2927->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2929 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$Type* $tmp2930 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl2925);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp2927, ((panda$core$Int64) { 1001 }), p_d->position, $tmp2929, $tmp2930);
                return $tmp2927;
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp2931 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2931->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2931->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2933 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$String($tmp2931, ((panda$core$Int64) { 1037 }), p_d->position, $tmp2933, name2917);
            return $tmp2931;
        }
        break;
        case 1024:
        {
            panda$core$Object* $tmp2934 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, ((org$pandalanguage$pandac$ClassDecl*) $tmp2934));
            panda$core$Object* $tmp2935 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
            org$pandalanguage$pandac$ClassDecl* $tmp2936 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$ClassDecl*) $tmp2935)->rawSuper);
            cl2915 = $tmp2936;
        }
        break;
        default:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp2937 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, base2906->type);
            cl2915 = $tmp2937;
        }
    }
    if (((panda$core$Bit) { cl2915 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp2939 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl2915);
    org$pandalanguage$pandac$Symbol* $tmp2940 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp2939, ((panda$core$String*) p_d->payload));
    s2938 = $tmp2940;
    if (((panda$core$Bit) { s2938 == NULL }).value) {
    {
        panda$core$String* $tmp2942 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2941, ((panda$core$Object*) base2906->type));
        panda$core$String* $tmp2944 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2942, &$s2943);
        panda$core$String* $tmp2946 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2945, p_d->payload);
        panda$core$String* $tmp2948 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2946, &$s2947);
        panda$core$String* $tmp2949 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2944, $tmp2948);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_d->position, $tmp2949);
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp2950 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl2915);
    org$pandalanguage$pandac$IRNode* $tmp2951 = org$pandalanguage$pandac$Compiler$symbolRef$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q(self, p_d->position, base2906, s2938, $tmp2950);
    return $tmp2951;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIdentifier$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_i) {
    org$pandalanguage$pandac$Symbol* s2953;
    panda$core$Bit $tmp2952 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_i->kind, ((panda$core$Int64) { 106 }));
    PANDA_ASSERT($tmp2952.value);
    org$pandalanguage$pandac$Symbol* $tmp2954 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(self->symbolTable, ((panda$core$String*) p_i->payload));
    s2953 = $tmp2954;
    if (((panda$core$Bit) { s2953 == NULL }).value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp2955 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((panda$core$String*) p_i->payload));
        s2953 = ((org$pandalanguage$pandac$Symbol*) $tmp2955);
    }
    }
    if (((panda$core$Bit) { s2953 != NULL }).value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2956 = org$pandalanguage$pandac$Compiler$symbolRef$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q(self, p_i->position, NULL, s2953, self->symbolTable);
        return $tmp2956;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp2957 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp2957->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2957->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp2959 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$String($tmp2957, ((panda$core$Int64) { 1037 }), p_i->position, $tmp2959, ((panda$core$String*) p_i->payload));
    return $tmp2957;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_t) {
    org$pandalanguage$pandac$Type* resolved2960;
    org$pandalanguage$pandac$Type* $tmp2961 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, p_t);
    org$pandalanguage$pandac$Type* $tmp2962 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, $tmp2961);
    resolved2960 = $tmp2962;
    if (((panda$core$Bit) { resolved2960 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp2963 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp2963->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2963->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp2965 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp2963, ((panda$core$Int64) { 1001 }), p_t->position, $tmp2965, resolved2960);
    return $tmp2963;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileRange$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_r) {
    org$pandalanguage$pandac$IRNode* start2973;
    org$pandalanguage$pandac$IRNode* end2981;
    org$pandalanguage$pandac$IRNode* step2989;
    panda$collections$Array* children2999;
    org$pandalanguage$pandac$Position $tmp3007;
    panda$core$Bit $tmp2967 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_r->kind, ((panda$core$Int64) { 105 }));
    bool $tmp2966 = $tmp2967.value;
    if ($tmp2966) goto $l2968;
    panda$core$Bit $tmp2969 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_r->kind, ((panda$core$Int64) { 104 }));
    $tmp2966 = $tmp2969.value;
    $l2968:;
    panda$core$Bit $tmp2970 = { $tmp2966 };
    PANDA_ASSERT($tmp2970.value);
    panda$core$Int64 $tmp2971 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_r->children);
    panda$core$Bit $tmp2972 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2971, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp2972.value);
    panda$core$Object* $tmp2974 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp2975 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp2974)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp2975.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2976 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2976->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2976->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp2978 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp2976, ((panda$core$Int64) { 1030 }), p_r->position, $tmp2978);
        start2973 = $tmp2976;
    }
    }
    else {
    {
        panda$core$Object* $tmp2979 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp2980 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2979));
        start2973 = $tmp2980;
        if (((panda$core$Bit) { start2973 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$core$Object* $tmp2982 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp2983 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp2982)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp2983.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2984 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2984->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2984->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp2986 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp2984, ((panda$core$Int64) { 1030 }), p_r->position, $tmp2986);
        end2981 = $tmp2984;
    }
    }
    else {
    {
        panda$core$Object* $tmp2987 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$IRNode* $tmp2988 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2987));
        end2981 = $tmp2988;
        if (((panda$core$Bit) { end2981 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$core$Object* $tmp2990 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 2 }));
    panda$core$Bit $tmp2991 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp2990)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp2991.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2992 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2992->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2992->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp2994 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2992, ((panda$core$Int64) { 1004 }), p_r->position, $tmp2994, ((panda$core$UInt64) { 1 }));
        step2989 = $tmp2992;
    }
    }
    else {
    {
        panda$core$Object* $tmp2995 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$IRNode* $tmp2996 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2995));
        org$pandalanguage$pandac$Type* $tmp2997 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp2998 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp2996, $tmp2997);
        step2989 = $tmp2998;
        if (((panda$core$Bit) { step2989 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$collections$Array* $tmp3000 = (panda$collections$Array*) malloc(40);
    $tmp3000->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3000->refCount.value = 1;
    panda$collections$Array$init($tmp3000);
    children2999 = $tmp3000;
    panda$collections$Array$add$panda$collections$Array$T(children2999, ((panda$core$Object*) start2973));
    panda$collections$Array$add$panda$collections$Array$T(children2999, ((panda$core$Object*) end2981));
    panda$collections$Array$add$panda$collections$Array$T(children2999, ((panda$core$Object*) step2989));
    org$pandalanguage$pandac$IRNode* $tmp3002 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3002->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3002->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3004 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp3004->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp3004->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp3007);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp3004, &$s3006, ((panda$core$Int64) { 17 }), $tmp3007, ((panda$core$Bit) { true }));
    panda$core$Bit $tmp3008 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_r->kind, ((panda$core$Int64) { 104 }));
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3002, ((panda$core$Int64) { 1031 }), p_r->position, $tmp3004, ((panda$core$Object*) wrap_panda$core$Bit($tmp3008)), ((panda$collections$ListView*) children2999));
    return $tmp3002;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$IRNode* $tmp3009 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3009->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3009->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3011 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$String($tmp3009, ((panda$core$Int64) { 1033 }), p_s->position, $tmp3011, ((panda$core$String*) p_s->payload));
    return $tmp3009;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileSelf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$Type* type3016;
    org$pandalanguage$pandac$ClassDecl* cl3017;
    panda$collections$Array* subtypes3024;
    panda$core$MutableString* name3028;
    panda$core$String* separator3032;
    panda$collections$Iterator* p$Iter3034;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* p3046;
    panda$collections$Array* pType3051;
    panda$core$String* pName3054;
    panda$core$Bit $tmp3012 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_s->kind, ((panda$core$Int64) { 114 }));
    PANDA_ASSERT($tmp3012.value);
    panda$core$Object* $tmp3013 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
    panda$core$Bit $tmp3014 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp3013)->annotations);
    if ($tmp3014.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_s->position, &$s3015);
        return NULL;
    }
    }
    panda$core$Object* $tmp3018 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
    cl3017 = ((org$pandalanguage$pandac$ClassDecl*) $tmp3018);
    ITable* $tmp3019 = ((panda$collections$CollectionView*) cl3017->parameters)->$class->itable;
    while ($tmp3019->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp3019 = $tmp3019->next;
    }
    $fn3021 $tmp3020 = $tmp3019->methods[0];
    panda$core$Int64 $tmp3022 = $tmp3020(((panda$collections$CollectionView*) cl3017->parameters));
    panda$core$Bit $tmp3023 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3022, ((panda$core$Int64) { 0 }));
    if ($tmp3023.value) {
    {
        panda$collections$Array* $tmp3025 = (panda$collections$Array*) malloc(40);
        $tmp3025->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp3025->refCount.value = 1;
        panda$collections$Array$init($tmp3025);
        subtypes3024 = $tmp3025;
        org$pandalanguage$pandac$Type* $tmp3027 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl3017);
        panda$collections$Array$add$panda$collections$Array$T(subtypes3024, ((panda$core$Object*) $tmp3027));
        panda$core$MutableString* $tmp3029 = (panda$core$MutableString*) malloc(40);
        $tmp3029->$class = (panda$core$Class*) &panda$core$MutableString$class;
        $tmp3029->refCount.value = 1;
        panda$core$MutableString$init$panda$core$String($tmp3029, ((org$pandalanguage$pandac$Symbol*) cl3017)->name);
        name3028 = $tmp3029;
        panda$core$MutableString$append$panda$core$String(name3028, &$s3031);
        separator3032 = &$s3033;
        {
            ITable* $tmp3035 = ((panda$collections$Iterable*) cl3017->parameters)->$class->itable;
            while ($tmp3035->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3035 = $tmp3035->next;
            }
            $fn3037 $tmp3036 = $tmp3035->methods[0];
            panda$collections$Iterator* $tmp3038 = $tmp3036(((panda$collections$Iterable*) cl3017->parameters));
            p$Iter3034 = $tmp3038;
            $l3039:;
            ITable* $tmp3041 = p$Iter3034->$class->itable;
            while ($tmp3041->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3041 = $tmp3041->next;
            }
            $fn3043 $tmp3042 = $tmp3041->methods[0];
            panda$core$Bit $tmp3044 = $tmp3042(p$Iter3034);
            panda$core$Bit $tmp3045 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3044);
            if (!$tmp3045.value) goto $l3040;
            {
                ITable* $tmp3047 = p$Iter3034->$class->itable;
                while ($tmp3047->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3047 = $tmp3047->next;
                }
                $fn3049 $tmp3048 = $tmp3047->methods[1];
                panda$core$Object* $tmp3050 = $tmp3048(p$Iter3034);
                p3046 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp3050);
                panda$collections$Array* $tmp3052 = (panda$collections$Array*) malloc(40);
                $tmp3052->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp3052->refCount.value = 1;
                panda$collections$Array$init($tmp3052);
                pType3051 = $tmp3052;
                panda$collections$Array$add$panda$collections$Array$T(pType3051, ((panda$core$Object*) p3046->bound));
                panda$core$String* $tmp3056 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3055, ((org$pandalanguage$pandac$Symbol*) cl3017)->name);
                panda$core$String* $tmp3058 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3056, &$s3057);
                panda$core$String* $tmp3059 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3058, ((org$pandalanguage$pandac$Symbol*) p3046)->name);
                panda$core$String* $tmp3061 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3059, &$s3060);
                pName3054 = $tmp3061;
                panda$core$MutableString$append$panda$core$String(name3028, separator3032);
                panda$core$MutableString$append$panda$core$String(name3028, pName3054);
                org$pandalanguage$pandac$Type* $tmp3062 = (org$pandalanguage$pandac$Type*) malloc(96);
                $tmp3062->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
                $tmp3062->refCount.value = 1;
                org$pandalanguage$pandac$Type$init$org$pandalanguage$pandac$ClassDecl$GenericParameter($tmp3062, p3046);
                panda$collections$Array$add$panda$collections$Array$T(subtypes3024, ((panda$core$Object*) $tmp3062));
                separator3032 = &$s3064;
            }
            goto $l3039;
            $l3040:;
        }
        panda$core$MutableString$append$panda$core$String(name3028, &$s3065);
        org$pandalanguage$pandac$Type* $tmp3066 = (org$pandalanguage$pandac$Type*) malloc(96);
        $tmp3066->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
        $tmp3066->refCount.value = 1;
        panda$core$String* $tmp3068 = panda$core$MutableString$convert$R$panda$core$String(name3028);
        org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp3066, $tmp3068, ((panda$core$Int64) { 21 }), p_s->position, ((panda$collections$ListView*) subtypes3024), ((panda$core$Bit) { true }));
        type3016 = $tmp3066;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp3069 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl3017);
        type3016 = $tmp3069;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3070 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3070->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3070->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3070, ((panda$core$Int64) { 1025 }), p_s->position, type3016);
    return $tmp3070;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileSuper$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$ClassDecl* cl3076;
    panda$core$Bit $tmp3072 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_s->kind, ((panda$core$Int64) { 115 }));
    PANDA_ASSERT($tmp3072.value);
    panda$core$Object* $tmp3073 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
    panda$core$Bit $tmp3074 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp3073)->annotations);
    if ($tmp3074.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_s->position, &$s3075);
        return NULL;
    }
    }
    panda$core$Object* $tmp3077 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
    cl3076 = ((org$pandalanguage$pandac$ClassDecl*) $tmp3077);
    PANDA_ASSERT(cl3076->resolved.value);
    org$pandalanguage$pandac$IRNode* $tmp3078 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3078->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3078->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3078, ((panda$core$Int64) { 1024 }), p_s->position, cl3076->rawSuper);
    return $tmp3078;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_c) {
    org$pandalanguage$pandac$IRNode* value3083;
    org$pandalanguage$pandac$Type* type3086;
    panda$core$Bit $tmp3080 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_c->kind, ((panda$core$Int64) { 111 }));
    PANDA_ASSERT($tmp3080.value);
    panda$core$Int64 $tmp3081 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_c->children);
    panda$core$Bit $tmp3082 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3081, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp3082.value);
    panda$core$Object* $tmp3084 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_c->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3085 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3084));
    value3083 = $tmp3085;
    if (((panda$core$Bit) { value3083 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Object* $tmp3087 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_c->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Type* $tmp3088 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, ((org$pandalanguage$pandac$ASTNode*) $tmp3087));
    org$pandalanguage$pandac$Type* $tmp3089 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, $tmp3088);
    type3086 = $tmp3089;
    if (((panda$core$Bit) { type3086 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Int64$nullable $tmp3090 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, value3083, type3086);
    if (((panda$core$Bit) { $tmp3090.nonnull }).value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3091 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, value3083, type3086);
        return $tmp3091;
    }
    }
    panda$core$Bit $tmp3092 = org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, value3083, type3086);
    if ($tmp3092.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3093 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, value3083, p_c->position, ((panda$core$Bit) { true }), type3086);
        return $tmp3093;
    }
    }
    else {
    {
        panda$core$String* $tmp3095 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3094, ((panda$core$Object*) value3083->type));
        panda$core$String* $tmp3097 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3095, &$s3096);
        panda$core$String* $tmp3099 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3098, ((panda$core$Object*) type3086));
        panda$core$String* $tmp3101 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3099, &$s3100);
        panda$core$String* $tmp3102 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3097, $tmp3101);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_c->position, $tmp3102);
        return NULL;
    }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileNull$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_n) {
    panda$core$Bit $tmp3103 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_n->kind, ((panda$core$Int64) { 117 }));
    PANDA_ASSERT($tmp3103.value);
    org$pandalanguage$pandac$IRNode* $tmp3104 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3104->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3104->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3106 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3104, ((panda$core$Int64) { 1030 }), p_n->position, $tmp3106);
    return $tmp3104;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_e) {
    org$pandalanguage$pandac$IRNode* result3111;
    switch (p_e->kind.value) {
        case 103:
        {
            org$pandalanguage$pandac$IRNode* $tmp3107 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3107;
        }
        break;
        case 116:
        {
            org$pandalanguage$pandac$IRNode* $tmp3108 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3108->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3108->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3110 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp3108, ((panda$core$Int64) { 1011 }), p_e->position, $tmp3110, ((panda$core$Bit$wrapper*) p_e->payload)->value);
            return $tmp3108;
        }
        break;
        case 107:
        {
            org$pandalanguage$pandac$IRNode* $tmp3112 = org$pandalanguage$pandac$Compiler$compileCall$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            result3111 = $tmp3112;
            bool $tmp3113 = ((panda$core$Bit) { result3111 != NULL }).value;
            if (!$tmp3113) goto $l3114;
            org$pandalanguage$pandac$Type* $tmp3115 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp3116 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(result3111->type, $tmp3115);
            $tmp3113 = $tmp3116.value;
            $l3114:;
            panda$core$Bit $tmp3117 = { $tmp3113 };
            if ($tmp3117.value) {
            {
                panda$core$Bit $tmp3118 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result3111->kind, ((panda$core$Int64) { 1005 }));
                PANDA_ASSERT($tmp3118.value);
                panda$core$String* $tmp3119 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(((org$pandalanguage$pandac$MethodRef*) result3111->payload)->value);
                panda$core$String* $tmp3121 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3119, &$s3120);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, result3111->position, $tmp3121);
                return NULL;
            }
            }
            return result3111;
        }
        break;
        case 108:
        {
            org$pandalanguage$pandac$IRNode* $tmp3122 = org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3122;
        }
        break;
        case 106:
        {
            org$pandalanguage$pandac$IRNode* $tmp3123 = org$pandalanguage$pandac$Compiler$compileIdentifier$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3123;
        }
        break;
        case 102:
        {
            org$pandalanguage$pandac$IRNode* $tmp3124 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3124->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3124->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3126 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp3124, ((panda$core$Int64) { 1004 }), p_e->position, $tmp3126, ((panda$core$UInt64$wrapper*) p_e->payload)->value);
            return $tmp3124;
        }
        break;
        case 112:
        {
            org$pandalanguage$pandac$IRNode* $tmp3127 = org$pandalanguage$pandac$Compiler$compilePrefix$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3127;
        }
        break;
        case 104:
        case 105:
        {
            org$pandalanguage$pandac$IRNode* $tmp3128 = org$pandalanguage$pandac$Compiler$compileRange$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3128;
        }
        break;
        case 113:
        {
            org$pandalanguage$pandac$IRNode* $tmp3129 = org$pandalanguage$pandac$Compiler$compileString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3129;
        }
        break;
        case 109:
        case 154:
        case 110:
        {
            org$pandalanguage$pandac$IRNode* $tmp3130 = org$pandalanguage$pandac$Compiler$compileType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3130;
        }
        break;
        case 114:
        {
            org$pandalanguage$pandac$IRNode* $tmp3131 = org$pandalanguage$pandac$Compiler$compileSelf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3131;
        }
        break;
        case 115:
        {
            org$pandalanguage$pandac$IRNode* $tmp3132 = org$pandalanguage$pandac$Compiler$compileSuper$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3132;
        }
        break;
        case 111:
        {
            org$pandalanguage$pandac$IRNode* $tmp3133 = org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3133;
        }
        break;
        case 117:
        {
            org$pandalanguage$pandac$IRNode* $tmp3134 = org$pandalanguage$pandac$Compiler$compileNull$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode(self, p_e);
            return $tmp3134;
        }
        break;
    }
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBlock$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_b) {
    org$pandalanguage$pandac$SymbolTable* symbols3136;
    panda$collections$Array* result3139;
    panda$collections$Iterator* stmt$Iter3142;
    org$pandalanguage$pandac$ASTNode* stmt3154;
    org$pandalanguage$pandac$IRNode* compiled3159;
    panda$core$Bit $tmp3135 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_b->kind, ((panda$core$Int64) { 126 }));
    PANDA_ASSERT($tmp3135.value);
    org$pandalanguage$pandac$SymbolTable* $tmp3137 = (org$pandalanguage$pandac$SymbolTable*) malloc(40);
    $tmp3137->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp3137->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp3137, self->symbolTable);
    symbols3136 = $tmp3137;
    self->symbolTable = symbols3136;
    panda$collections$Array* $tmp3140 = (panda$collections$Array*) malloc(40);
    $tmp3140->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3140->refCount.value = 1;
    panda$collections$Array$init($tmp3140);
    result3139 = $tmp3140;
    {
        ITable* $tmp3143 = ((panda$collections$Iterable*) p_b->children)->$class->itable;
        while ($tmp3143->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3143 = $tmp3143->next;
        }
        $fn3145 $tmp3144 = $tmp3143->methods[0];
        panda$collections$Iterator* $tmp3146 = $tmp3144(((panda$collections$Iterable*) p_b->children));
        stmt$Iter3142 = $tmp3146;
        $l3147:;
        ITable* $tmp3149 = stmt$Iter3142->$class->itable;
        while ($tmp3149->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3149 = $tmp3149->next;
        }
        $fn3151 $tmp3150 = $tmp3149->methods[0];
        panda$core$Bit $tmp3152 = $tmp3150(stmt$Iter3142);
        panda$core$Bit $tmp3153 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3152);
        if (!$tmp3153.value) goto $l3148;
        {
            ITable* $tmp3155 = stmt$Iter3142->$class->itable;
            while ($tmp3155->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3155 = $tmp3155->next;
            }
            $fn3157 $tmp3156 = $tmp3155->methods[1];
            panda$core$Object* $tmp3158 = $tmp3156(stmt$Iter3142);
            stmt3154 = ((org$pandalanguage$pandac$ASTNode*) $tmp3158);
            org$pandalanguage$pandac$IRNode* $tmp3160 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, stmt3154);
            compiled3159 = $tmp3160;
            if (((panda$core$Bit) { compiled3159 == NULL }).value) {
            {
                panda$core$Object* $tmp3161 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(symbols3136->parents, ((panda$core$Int64) { 0 }));
                self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp3161);
                return NULL;
            }
            }
            panda$core$Bit $tmp3162 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(compiled3159->kind, ((panda$core$Int64) { 1039 }));
            PANDA_ASSERT($tmp3162.value);
            panda$collections$Array$add$panda$collections$Array$T(result3139, ((panda$core$Object*) compiled3159));
        }
        goto $l3147;
        $l3148:;
    }
    panda$core$Object* $tmp3163 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(symbols3136->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp3163);
    org$pandalanguage$pandac$IRNode* $tmp3164 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3164->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3164->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3164, ((panda$core$Int64) { 1000 }), p_b->position, ((panda$collections$ListView*) result3139));
    return $tmp3164;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_i) {
    org$pandalanguage$pandac$IRNode* test3174;
    org$pandalanguage$pandac$IRNode* ifTrue3179;
    panda$collections$Array* children3182;
    org$pandalanguage$pandac$IRNode* ifFalse3187;
    panda$core$Bit $tmp3166 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_i->kind, ((panda$core$Int64) { 118 }));
    PANDA_ASSERT($tmp3166.value);
    panda$core$Int64 $tmp3168 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_i->children);
    panda$core$Bit $tmp3169 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3168, ((panda$core$Int64) { 2 }));
    bool $tmp3167 = $tmp3169.value;
    if ($tmp3167) goto $l3170;
    panda$core$Int64 $tmp3171 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_i->children);
    panda$core$Bit $tmp3172 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3171, ((panda$core$Int64) { 3 }));
    $tmp3167 = $tmp3172.value;
    $l3170:;
    panda$core$Bit $tmp3173 = { $tmp3167 };
    PANDA_ASSERT($tmp3173.value);
    panda$core$Object* $tmp3175 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_i->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3176 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3175));
    org$pandalanguage$pandac$Type* $tmp3177 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp3178 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3176, $tmp3177);
    test3174 = $tmp3178;
    if (((panda$core$Bit) { test3174 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Object* $tmp3180 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_i->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp3181 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3180));
    ifTrue3179 = $tmp3181;
    if (((panda$core$Bit) { ifTrue3179 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3183 = (panda$collections$Array*) malloc(40);
    $tmp3183->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3183->refCount.value = 1;
    panda$collections$Array$init($tmp3183);
    children3182 = $tmp3183;
    panda$collections$Array$add$panda$collections$Array$T(children3182, ((panda$core$Object*) test3174));
    panda$collections$Array$add$panda$collections$Array$T(children3182, ((panda$core$Object*) ifTrue3179));
    panda$core$Int64 $tmp3185 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_i->children);
    panda$core$Bit $tmp3186 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3185, ((panda$core$Int64) { 3 }));
    if ($tmp3186.value) {
    {
        panda$core$Object* $tmp3188 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_i->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$IRNode* $tmp3189 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3188));
        ifFalse3187 = $tmp3189;
        if (((panda$core$Bit) { ifFalse3187 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children3182, ((panda$core$Object*) ifFalse3187));
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3190 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3190->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3190->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3190, ((panda$core$Int64) { 1012 }), p_i->position, ((panda$collections$ListView*) children3182));
    return $tmp3190;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileRangeFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, panda$core$String* p_label, org$pandalanguage$pandac$ASTNode* p_astTarget, org$pandalanguage$pandac$IRNode* p_rawList, org$pandalanguage$pandac$ASTNode* p_body) {
    org$pandalanguage$pandac$Type* elementType3192;
    org$pandalanguage$pandac$IRNode* list3193;
    org$pandalanguage$pandac$Type* t3200;
    org$pandalanguage$pandac$Compiler$CompileTargetResult* target3214;
    org$pandalanguage$pandac$IRNode* body3216;
    panda$collections$Array* children3218;
    panda$core$Bit $tmp3195 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_astTarget->kind, ((panda$core$Int64) { 106 }));
    bool $tmp3194 = $tmp3195.value;
    if (!$tmp3194) goto $l3196;
    panda$core$Int64 $tmp3197 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_astTarget->children);
    panda$core$Bit $tmp3198 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3197, ((panda$core$Int64) { 1 }));
    $tmp3194 = $tmp3198.value;
    $l3196:;
    panda$core$Bit $tmp3199 = { $tmp3194 };
    if ($tmp3199.value) {
    {
        panda$core$Object* $tmp3201 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_astTarget->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Type* $tmp3202 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, ((org$pandalanguage$pandac$ASTNode*) $tmp3201));
        org$pandalanguage$pandac$Type* $tmp3203 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, $tmp3202);
        t3200 = $tmp3203;
        org$pandalanguage$pandac$Type* $tmp3204 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3200);
        org$pandalanguage$pandac$IRNode* $tmp3205 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, $tmp3204);
        list3193 = $tmp3205;
    }
    }
    else {
    {
        org$pandalanguage$pandac$IRNode* $tmp3206 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList);
        list3193 = $tmp3206;
    }
    }
    if (((panda$core$Bit) { list3193 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp3207 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(list3193->type->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp3207.value) {
    {
        panda$core$Object* $tmp3208 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(list3193->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp3209 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3208)->typeKind, ((panda$core$Int64) { 21 }));
        PANDA_ASSERT($tmp3209.value);
        panda$core$Object* $tmp3210 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(list3193->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3211 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$Type*) $tmp3210)->subtypes, ((panda$core$Int64) { 1 }));
        elementType3192 = ((org$pandalanguage$pandac$Type*) $tmp3211);
    }
    }
    else {
    {
        panda$core$Bit $tmp3212 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(list3193->type->typeKind, ((panda$core$Int64) { 21 }));
        PANDA_ASSERT($tmp3212.value);
        panda$core$Object* $tmp3213 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(list3193->type->subtypes, ((panda$core$Int64) { 1 }));
        elementType3192 = ((org$pandalanguage$pandac$Type*) $tmp3213);
    }
    }
    org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp3215 = org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(self, p_astTarget, ((panda$core$Int64) { 10001 }), NULL, elementType3192);
    target3214 = $tmp3215;
    if (((panda$core$Bit) { target3214 == NULL }).value) {
    {
        return NULL;
    }
    }
    PANDA_ASSERT(((panda$core$Bit) { target3214->value == NULL }).value);
    org$pandalanguage$pandac$IRNode* $tmp3217 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_body);
    body3216 = $tmp3217;
    if (((panda$core$Bit) { body3216 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3219 = (panda$collections$Array*) malloc(40);
    $tmp3219->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3219->refCount.value = 1;
    panda$collections$Array$init($tmp3219);
    children3218 = $tmp3219;
    panda$collections$Array$add$panda$collections$Array$T(children3218, ((panda$core$Object*) target3214->target));
    panda$collections$Array$add$panda$collections$Array$T(children3218, ((panda$core$Object*) list3193));
    panda$collections$Array$add$panda$collections$Array$T(children3218, ((panda$core$Object*) body3216));
    org$pandalanguage$pandac$IRNode* $tmp3221 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3221->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3221->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3221, ((panda$core$Int64) { 1029 }), p_position, ((panda$core$Object*) p_label), ((panda$collections$ListView*) children3218));
    return $tmp3221;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIteratorFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, panda$core$String* p_label, org$pandalanguage$pandac$ASTNode* p_astTarget, org$pandalanguage$pandac$IRNode* p_iterator, org$pandalanguage$pandac$ASTNode* p_body) {
    org$pandalanguage$pandac$Compiler$CompileTargetResult* target3230;
    org$pandalanguage$pandac$Variable* targetVar3234;
    panda$collections$Array* subtypes3235;
    org$pandalanguage$pandac$Type* iterType3239;
    org$pandalanguage$pandac$Variable* iter3251;
    panda$collections$Array* statements3256;
    panda$collections$Array* declChildren3259;
    panda$collections$Array* varChildren3264;
    panda$collections$Array* whileChildren3271;
    org$pandalanguage$pandac$IRNode* done3274;
    org$pandalanguage$pandac$IRNode* notCall3281;
    panda$collections$Array* valueDeclChildren3286;
    org$pandalanguage$pandac$IRNode* next3291;
    panda$collections$Array* valueVarChildren3298;
    org$pandalanguage$pandac$IRNode* block3303;
    panda$collections$Array* blockChildren3305;
    panda$core$Bit $tmp3224 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_iterator->type->typeKind, ((panda$core$Int64) { 21 }));
    bool $tmp3223 = $tmp3224.value;
    if (!$tmp3223) goto $l3225;
    panda$core$Object* $tmp3226 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_iterator->type->subtypes, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp3227 = org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp3228 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3226), $tmp3227);
    $tmp3223 = $tmp3228.value;
    $l3225:;
    panda$core$Bit $tmp3229 = { $tmp3223 };
    PANDA_ASSERT($tmp3229.value);
    panda$core$Object* $tmp3231 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_iterator->type->subtypes, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp3232 = org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(self, p_astTarget, ((panda$core$Int64) { 10001 }), NULL, ((org$pandalanguage$pandac$Type*) $tmp3231));
    target3230 = $tmp3232;
    if (((panda$core$Bit) { target3230 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp3233 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(target3230->target->kind, ((panda$core$Int64) { 1016 }));
    PANDA_ASSERT($tmp3233.value);
    targetVar3234 = ((org$pandalanguage$pandac$Variable*) target3230->target->payload);
    panda$collections$Array* $tmp3236 = (panda$collections$Array*) malloc(40);
    $tmp3236->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3236->refCount.value = 1;
    panda$collections$Array$init($tmp3236);
    subtypes3235 = $tmp3236;
    org$pandalanguage$pandac$Type* $tmp3238 = org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type();
    panda$collections$Array$add$panda$collections$Array$T(subtypes3235, ((panda$core$Object*) $tmp3238));
    panda$collections$Array$add$panda$collections$Array$T(subtypes3235, ((panda$core$Object*) target3230->target->type));
    org$pandalanguage$pandac$Type* $tmp3240 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp3240->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp3240->refCount.value = 1;
    panda$core$Object* $tmp3243 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(subtypes3235, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3244 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3242, ((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp3243)));
    panda$core$String* $tmp3246 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3244, &$s3245);
    panda$core$Object* $tmp3247 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(subtypes3235, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp3248 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3246, ((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp3247)));
    panda$core$String* $tmp3250 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3248, &$s3249);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp3240, $tmp3250, ((panda$core$Int64) { 21 }), p_position, ((panda$collections$ListView*) subtypes3235), ((panda$core$Bit) { true }));
    iterType3239 = $tmp3240;
    org$pandalanguage$pandac$Variable* $tmp3252 = (org$pandalanguage$pandac$Variable*) malloc(88);
    $tmp3252->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
    $tmp3252->refCount.value = 1;
    panda$core$String* $tmp3255 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) targetVar3234)->name, &$s3254);
    org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type($tmp3252, p_iterator->position, ((panda$core$Int64) { 10001 }), $tmp3255, iterType3239);
    iter3251 = $tmp3252;
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->symbolTable, ((org$pandalanguage$pandac$Symbol*) iter3251));
    panda$collections$Array* $tmp3257 = (panda$collections$Array*) malloc(40);
    $tmp3257->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3257->refCount.value = 1;
    panda$collections$Array$init($tmp3257);
    statements3256 = $tmp3257;
    panda$collections$Array* $tmp3260 = (panda$collections$Array*) malloc(40);
    $tmp3260->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3260->refCount.value = 1;
    panda$collections$Array$init($tmp3260);
    declChildren3259 = $tmp3260;
    org$pandalanguage$pandac$IRNode* $tmp3262 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3262->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3262->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3262, ((panda$core$Int64) { 1016 }), p_iterator->position, iter3251->type, iter3251);
    panda$collections$Array$add$panda$collections$Array$T(declChildren3259, ((panda$core$Object*) $tmp3262));
    panda$collections$Array$add$panda$collections$Array$T(declChildren3259, ((panda$core$Object*) p_iterator));
    panda$collections$Array* $tmp3265 = (panda$collections$Array*) malloc(40);
    $tmp3265->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3265->refCount.value = 1;
    panda$collections$Array$init($tmp3265);
    varChildren3264 = $tmp3265;
    org$pandalanguage$pandac$IRNode* $tmp3267 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3267->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3267->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3267, ((panda$core$Int64) { 1021 }), ((org$pandalanguage$pandac$Symbol*) iter3251)->position, ((panda$collections$ListView*) declChildren3259));
    panda$collections$Array$add$panda$collections$Array$T(varChildren3264, ((panda$core$Object*) $tmp3267));
    org$pandalanguage$pandac$IRNode* $tmp3269 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3269->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3269->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3269, ((panda$core$Int64) { 1018 }), ((org$pandalanguage$pandac$Symbol*) iter3251)->position, ((panda$collections$ListView*) varChildren3264));
    panda$collections$Array$add$panda$collections$Array$T(statements3256, ((panda$core$Object*) $tmp3269));
    panda$collections$Array* $tmp3272 = (panda$collections$Array*) malloc(40);
    $tmp3272->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3272->refCount.value = 1;
    panda$collections$Array$init($tmp3272);
    whileChildren3271 = $tmp3272;
    org$pandalanguage$pandac$IRNode* $tmp3275 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3275->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3275->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3275, ((panda$core$Int64) { 1016 }), ((org$pandalanguage$pandac$Symbol*) iter3251)->position, iter3251->type, iter3251);
    panda$collections$Array* $tmp3278 = (panda$collections$Array*) malloc(40);
    $tmp3278->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3278->refCount.value = 1;
    panda$collections$Array$init($tmp3278);
    org$pandalanguage$pandac$IRNode* $tmp3280 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3275, &$s3277, ((panda$collections$ListView*) $tmp3278), NULL);
    done3274 = $tmp3280;
    if (((panda$core$Bit) { done3274 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3283 = (panda$collections$Array*) malloc(40);
    $tmp3283->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3283->refCount.value = 1;
    panda$collections$Array$init($tmp3283);
    org$pandalanguage$pandac$IRNode* $tmp3285 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, done3274, &$s3282, ((panda$collections$ListView*) $tmp3283), NULL);
    notCall3281 = $tmp3285;
    if (((panda$core$Bit) { notCall3281 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(whileChildren3271, ((panda$core$Object*) notCall3281));
    panda$collections$Array* $tmp3287 = (panda$collections$Array*) malloc(40);
    $tmp3287->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3287->refCount.value = 1;
    panda$collections$Array$init($tmp3287);
    valueDeclChildren3286 = $tmp3287;
    org$pandalanguage$pandac$IRNode* $tmp3289 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3289->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3289->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3289, ((panda$core$Int64) { 1016 }), p_iterator->position, targetVar3234->type, targetVar3234);
    panda$collections$Array$add$panda$collections$Array$T(valueDeclChildren3286, ((panda$core$Object*) $tmp3289));
    org$pandalanguage$pandac$IRNode* $tmp3292 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3292->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3292->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3292, ((panda$core$Int64) { 1016 }), p_iterator->position, iter3251->type, iter3251);
    panda$collections$Array* $tmp3295 = (panda$collections$Array*) malloc(40);
    $tmp3295->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3295->refCount.value = 1;
    panda$collections$Array$init($tmp3295);
    org$pandalanguage$pandac$IRNode* $tmp3297 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3292, &$s3294, ((panda$collections$ListView*) $tmp3295), NULL);
    next3291 = $tmp3297;
    PANDA_ASSERT(((panda$core$Bit) { next3291 != NULL }).value);
    panda$collections$Array$add$panda$collections$Array$T(valueDeclChildren3286, ((panda$core$Object*) next3291));
    panda$collections$Array* $tmp3299 = (panda$collections$Array*) malloc(40);
    $tmp3299->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3299->refCount.value = 1;
    panda$collections$Array$init($tmp3299);
    valueVarChildren3298 = $tmp3299;
    org$pandalanguage$pandac$IRNode* $tmp3301 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3301->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3301->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3301, ((panda$core$Int64) { 1021 }), p_iterator->position, ((panda$collections$ListView*) valueDeclChildren3286));
    panda$collections$Array$add$panda$collections$Array$T(valueVarChildren3298, ((panda$core$Object*) $tmp3301));
    org$pandalanguage$pandac$IRNode* $tmp3304 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_body);
    block3303 = $tmp3304;
    if (((panda$core$Bit) { block3303 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3306 = (panda$collections$Array*) malloc(40);
    $tmp3306->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3306->refCount.value = 1;
    panda$collections$Array$init($tmp3306);
    blockChildren3305 = $tmp3306;
    org$pandalanguage$pandac$IRNode* $tmp3308 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3308->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3308->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3308, ((panda$core$Int64) { 1018 }), p_iterator->position, ((panda$collections$ListView*) valueVarChildren3298));
    panda$collections$Array$add$panda$collections$Array$T(blockChildren3305, ((panda$core$Object*) $tmp3308));
    panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(blockChildren3305, ((panda$collections$CollectionView*) block3303->children));
    org$pandalanguage$pandac$IRNode* $tmp3310 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3310->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3310->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3310, ((panda$core$Int64) { 1000 }), block3303->position, ((panda$collections$ListView*) blockChildren3305));
    block3303 = $tmp3310;
    panda$collections$Array$add$panda$collections$Array$T(whileChildren3271, ((panda$core$Object*) block3303));
    org$pandalanguage$pandac$IRNode* $tmp3312 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3312->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3312->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3312, ((panda$core$Int64) { 1013 }), p_iterator->position, ((panda$core$Object*) p_label), ((panda$collections$ListView*) whileChildren3271));
    panda$collections$Array$add$panda$collections$Array$T(statements3256, ((panda$core$Object*) $tmp3312));
    org$pandalanguage$pandac$IRNode* $tmp3314 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3314->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3314->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3314, ((panda$core$Int64) { 1000 }), p_iterator->position, ((panda$collections$ListView*) statements3256));
    return $tmp3314;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileFor$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_f) {
    org$pandalanguage$pandac$IRNode* list3319;
    org$pandalanguage$pandac$SymbolTable* symbols3322;
    org$pandalanguage$pandac$IRNode* result3325;
    panda$core$Bit found3335;
    panda$collections$Iterator* intf$Iter3336;
    org$pandalanguage$pandac$Type* intf3349;
    org$pandalanguage$pandac$IRNode* iterator3361;
    org$pandalanguage$pandac$IRNode* iterable3373;
    org$pandalanguage$pandac$IRNode* iterator3375;
    panda$core$Bit $tmp3316 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_f->kind, ((panda$core$Int64) { 119 }));
    PANDA_ASSERT($tmp3316.value);
    panda$core$Int64 $tmp3317 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_f->children);
    panda$core$Bit $tmp3318 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3317, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp3318.value);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loops, ((panda$core$Object*) ((panda$core$String*) p_f->payload)));
    panda$core$Object* $tmp3320 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp3321 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3320));
    list3319 = $tmp3321;
    if (((panda$core$Bit) { list3319 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp3323 = (org$pandalanguage$pandac$SymbolTable*) malloc(40);
    $tmp3323->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp3323->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp3323, self->symbolTable);
    symbols3322 = $tmp3323;
    self->symbolTable = symbols3322;
    panda$core$Bit $tmp3327 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(list3319->kind, ((panda$core$Int64) { 1031 }));
    bool $tmp3326 = $tmp3327.value;
    if ($tmp3326) goto $l3328;
    panda$core$Bit $tmp3329 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(list3319->type);
    $tmp3326 = $tmp3329.value;
    $l3328:;
    panda$core$Bit $tmp3330 = { $tmp3326 };
    if ($tmp3330.value) {
    {
        panda$core$Object* $tmp3331 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3332 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$IRNode* $tmp3333 = org$pandalanguage$pandac$Compiler$compileRangeFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->position, ((panda$core$String*) p_f->payload), ((org$pandalanguage$pandac$ASTNode*) $tmp3331), list3319, ((org$pandalanguage$pandac$ASTNode*) $tmp3332));
        result3325 = $tmp3333;
    }
    }
    else {
    {
        org$pandalanguage$pandac$IRNode* $tmp3334 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, list3319);
        list3319 = $tmp3334;
        if (((panda$core$Bit) { list3319 == NULL }).value) {
        {
            return NULL;
        }
        }
        found3335 = ((panda$core$Bit) { false });
        {
            panda$collections$Set* $tmp3337 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self, list3319->type);
            ITable* $tmp3338 = ((panda$collections$Iterable*) $tmp3337)->$class->itable;
            while ($tmp3338->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3338 = $tmp3338->next;
            }
            $fn3340 $tmp3339 = $tmp3338->methods[0];
            panda$collections$Iterator* $tmp3341 = $tmp3339(((panda$collections$Iterable*) $tmp3337));
            intf$Iter3336 = $tmp3341;
            $l3342:;
            ITable* $tmp3344 = intf$Iter3336->$class->itable;
            while ($tmp3344->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3344 = $tmp3344->next;
            }
            $fn3346 $tmp3345 = $tmp3344->methods[0];
            panda$core$Bit $tmp3347 = $tmp3345(intf$Iter3336);
            panda$core$Bit $tmp3348 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3347);
            if (!$tmp3348.value) goto $l3343;
            {
                ITable* $tmp3350 = intf$Iter3336->$class->itable;
                while ($tmp3350->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3350 = $tmp3350->next;
                }
                $fn3352 $tmp3351 = $tmp3350->methods[1];
                panda$core$Object* $tmp3353 = $tmp3351(intf$Iter3336);
                intf3349 = ((org$pandalanguage$pandac$Type*) $tmp3353);
                panda$core$Bit $tmp3355 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(intf3349->typeKind, ((panda$core$Int64) { 21 }));
                bool $tmp3354 = $tmp3355.value;
                if (!$tmp3354) goto $l3356;
                panda$core$Object* $tmp3357 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(intf3349->subtypes, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp3358 = org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp3359 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3357), $tmp3358);
                $tmp3354 = $tmp3359.value;
                $l3356:;
                panda$core$Bit $tmp3360 = { $tmp3354 };
                if ($tmp3360.value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp3362 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, list3319, intf3349);
                    iterator3361 = $tmp3362;
                    panda$core$Object* $tmp3363 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
                    panda$core$Object* $tmp3364 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 2 }));
                    org$pandalanguage$pandac$IRNode* $tmp3365 = org$pandalanguage$pandac$Compiler$compileIteratorFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->position, ((panda$core$String*) p_f->payload), ((org$pandalanguage$pandac$ASTNode*) $tmp3363), iterator3361, ((org$pandalanguage$pandac$ASTNode*) $tmp3364));
                    result3325 = $tmp3365;
                    found3335 = ((panda$core$Bit) { true });
                    goto $l3343;
                }
                }
                panda$core$Bit $tmp3367 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(intf3349->typeKind, ((panda$core$Int64) { 21 }));
                bool $tmp3366 = $tmp3367.value;
                if (!$tmp3366) goto $l3368;
                panda$core$Object* $tmp3369 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(intf3349->subtypes, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp3370 = org$pandalanguage$pandac$Type$Iterable$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp3371 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3369), $tmp3370);
                $tmp3366 = $tmp3371.value;
                $l3368:;
                panda$core$Bit $tmp3372 = { $tmp3366 };
                if ($tmp3372.value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp3374 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, list3319, intf3349);
                    iterable3373 = $tmp3374;
                    panda$collections$Array* $tmp3377 = (panda$collections$Array*) malloc(40);
                    $tmp3377->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp3377->refCount.value = 1;
                    panda$collections$Array$init($tmp3377);
                    org$pandalanguage$pandac$IRNode* $tmp3379 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, iterable3373, &$s3376, ((panda$collections$ListView*) $tmp3377));
                    iterator3375 = $tmp3379;
                    panda$core$Object* $tmp3380 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
                    panda$core$Object* $tmp3381 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 2 }));
                    org$pandalanguage$pandac$IRNode* $tmp3382 = org$pandalanguage$pandac$Compiler$compileIteratorFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->position, ((panda$core$String*) p_f->payload), ((org$pandalanguage$pandac$ASTNode*) $tmp3380), iterator3375, ((org$pandalanguage$pandac$ASTNode*) $tmp3381));
                    result3325 = $tmp3382;
                    found3335 = ((panda$core$Bit) { true });
                    goto $l3343;
                }
                }
            }
            goto $l3342;
            $l3343:;
        }
        panda$core$Bit $tmp3383 = panda$core$Bit$$NOT$R$panda$core$Bit(found3335);
        if ($tmp3383.value) {
        {
            panda$core$String* $tmp3385 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3384, ((panda$core$Object*) list3319->type));
            panda$core$String* $tmp3387 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3385, &$s3386);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, list3319->position, $tmp3387);
            return NULL;
        }
        }
    }
    }
    panda$core$Object* $tmp3388 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(symbols3322->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp3388);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
    return result3325;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileWhile$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_w) {
    org$pandalanguage$pandac$IRNode* test3392;
    org$pandalanguage$pandac$IRNode* stmt3397;
    panda$collections$Array* children3400;
    panda$core$Bit $tmp3389 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_w->kind, ((panda$core$Int64) { 121 }));
    PANDA_ASSERT($tmp3389.value);
    panda$core$Int64 $tmp3390 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Bit $tmp3391 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3390, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp3391.value);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loops, ((panda$core$Object*) ((panda$core$String*) p_w->payload)));
    panda$core$Object* $tmp3393 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3394 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3393));
    org$pandalanguage$pandac$Type* $tmp3395 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp3396 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3394, $tmp3395);
    test3392 = $tmp3396;
    if (((panda$core$Bit) { test3392 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$core$Object* $tmp3398 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp3399 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3398));
    stmt3397 = $tmp3399;
    if (((panda$core$Bit) { stmt3397 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$collections$Array* $tmp3401 = (panda$collections$Array*) malloc(40);
    $tmp3401->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3401->refCount.value = 1;
    panda$collections$Array$init$panda$core$Int64($tmp3401, ((panda$core$Int64) { 2 }));
    children3400 = $tmp3401;
    panda$collections$Array$add$panda$collections$Array$T(children3400, ((panda$core$Object*) test3392));
    panda$collections$Array$add$panda$collections$Array$T(children3400, ((panda$core$Object*) stmt3397));
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
    org$pandalanguage$pandac$IRNode* $tmp3403 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3403->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3403->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3403, ((panda$core$Int64) { 1013 }), p_w->position, p_w->payload, ((panda$collections$ListView*) children3400));
    return $tmp3403;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileDo$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_d) {
    org$pandalanguage$pandac$IRNode* stmt3408;
    org$pandalanguage$pandac$IRNode* test3411;
    panda$collections$Array* children3416;
    panda$core$Bit $tmp3405 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_d->kind, ((panda$core$Int64) { 120 }));
    PANDA_ASSERT($tmp3405.value);
    panda$core$Int64 $tmp3406 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp3407 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3406, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp3407.value);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loops, ((panda$core$Object*) ((panda$core$String*) p_d->payload)));
    panda$core$Object* $tmp3409 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3410 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3409));
    stmt3408 = $tmp3410;
    if (((panda$core$Bit) { stmt3408 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$core$Object* $tmp3412 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp3413 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3412));
    org$pandalanguage$pandac$Type* $tmp3414 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp3415 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3413, $tmp3414);
    test3411 = $tmp3415;
    if (((panda$core$Bit) { test3411 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$collections$Array* $tmp3417 = (panda$collections$Array*) malloc(40);
    $tmp3417->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3417->refCount.value = 1;
    panda$collections$Array$init$panda$core$Int64($tmp3417, ((panda$core$Int64) { 2 }));
    children3416 = $tmp3417;
    panda$collections$Array$add$panda$collections$Array$T(children3416, ((panda$core$Object*) stmt3408));
    panda$collections$Array$add$panda$collections$Array$T(children3416, ((panda$core$Object*) test3411));
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
    org$pandalanguage$pandac$IRNode* $tmp3419 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3419->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3419->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3419, ((panda$core$Int64) { 1014 }), p_d->position, p_d->payload, ((panda$collections$ListView*) children3416));
    return $tmp3419;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileLoop$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_l) {
    org$pandalanguage$pandac$IRNode* stmt3424;
    panda$collections$Array* children3427;
    panda$core$Bit $tmp3421 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_l->kind, ((panda$core$Int64) { 122 }));
    PANDA_ASSERT($tmp3421.value);
    panda$core$Int64 $tmp3422 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_l->children);
    panda$core$Bit $tmp3423 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3422, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3423.value);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loops, ((panda$core$Object*) ((panda$core$String*) p_l->payload)));
    panda$core$Object* $tmp3425 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_l->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3426 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3425));
    stmt3424 = $tmp3426;
    if (((panda$core$Bit) { stmt3424 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$collections$Array* $tmp3428 = (panda$collections$Array*) malloc(40);
    $tmp3428->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3428->refCount.value = 1;
    panda$collections$Array$init$panda$core$Int64($tmp3428, ((panda$core$Int64) { 1 }));
    children3427 = $tmp3428;
    panda$collections$Array$add$panda$collections$Array$T(children3427, ((panda$core$Object*) stmt3424));
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
    org$pandalanguage$pandac$IRNode* $tmp3430 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3430->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3430->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3430, ((panda$core$Int64) { 1015 }), p_l->position, p_l->payload, ((panda$collections$ListView*) children3427));
    return $tmp3430;
}
org$pandalanguage$pandac$Compiler$CompileTargetResult* org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_t, panda$core$Int64 p_kind, org$pandalanguage$pandac$IRNode* p_rawValue, org$pandalanguage$pandac$Type* p_valueType) {
    org$pandalanguage$pandac$IRNode* value3432;
    org$pandalanguage$pandac$Type* type3436;
    org$pandalanguage$pandac$Variable* v3447;
    value3432 = p_rawValue;
    bool $tmp3433 = ((panda$core$Bit) { value3432 == NULL }).value;
    if ($tmp3433) goto $l3434;
    $tmp3433 = ((panda$core$Bit) { p_valueType == NULL }).value;
    $l3434:;
    panda$core$Bit $tmp3435 = { $tmp3433 };
    PANDA_ASSERT($tmp3435.value);
    switch (p_t->kind.value) {
        case 106:
        {
            panda$core$Int64 $tmp3437 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_t->children);
            panda$core$Bit $tmp3438 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3437, ((panda$core$Int64) { 1 }));
            if ($tmp3438.value) {
            {
                panda$core$Object* $tmp3439 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp3440 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, ((org$pandalanguage$pandac$ASTNode*) $tmp3439));
                org$pandalanguage$pandac$Type* $tmp3441 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, $tmp3440);
                type3436 = $tmp3441;
            }
            }
            else {
            if (((panda$core$Bit) { value3432 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp3442 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, value3432);
                value3432 = $tmp3442;
                if (((panda$core$Bit) { value3432 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$Type* $tmp3443 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, value3432);
                type3436 = $tmp3443;
            }
            }
            else {
            if (((panda$core$Bit) { p_valueType != NULL }).value) {
            {
                type3436 = p_valueType;
            }
            }
            else {
            {
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_t->position, &$s3444);
                return NULL;
            }
            }
            }
            }
            if (((panda$core$Bit) { value3432 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp3445 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, value3432, type3436);
                value3432 = $tmp3445;
                if (((panda$core$Bit) { value3432 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$core$Bit $tmp3446 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(value3432->type, type3436);
                PANDA_ASSERT($tmp3446.value);
            }
            }
            org$pandalanguage$pandac$Variable* $tmp3448 = (org$pandalanguage$pandac$Variable*) malloc(88);
            $tmp3448->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
            $tmp3448->refCount.value = 1;
            org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type($tmp3448, p_t->position, p_kind, ((panda$core$String*) p_t->payload), type3436);
            v3447 = $tmp3448;
            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->symbolTable, ((org$pandalanguage$pandac$Symbol*) v3447));
            org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp3450 = (org$pandalanguage$pandac$Compiler$CompileTargetResult*) malloc(32);
            $tmp3450->$class = (panda$core$Class*) &org$pandalanguage$pandac$Compiler$CompileTargetResult$class;
            $tmp3450->refCount.value = 1;
            org$pandalanguage$pandac$IRNode* $tmp3452 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3452->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3452->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3452, ((panda$core$Int64) { 1016 }), ((org$pandalanguage$pandac$Symbol*) v3447)->position, v3447->type, v3447);
            org$pandalanguage$pandac$Compiler$CompileTargetResult$init$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q($tmp3450, $tmp3452, value3432);
            return $tmp3450;
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
    org$pandalanguage$pandac$IRNode* value3462;
    org$pandalanguage$pandac$Compiler$CompileTargetResult* target3467;
    panda$collections$Array* children3470;
    org$pandalanguage$pandac$Variable* v3474;
    panda$core$Bit $tmp3454 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_d->kind, ((panda$core$Int64) { 129 }));
    PANDA_ASSERT($tmp3454.value);
    panda$core$Int64 $tmp3456 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp3457 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3456, ((panda$core$Int64) { 1 }));
    bool $tmp3455 = $tmp3457.value;
    if ($tmp3455) goto $l3458;
    panda$core$Int64 $tmp3459 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp3460 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3459, ((panda$core$Int64) { 2 }));
    $tmp3455 = $tmp3460.value;
    $l3458:;
    panda$core$Bit $tmp3461 = { $tmp3455 };
    PANDA_ASSERT($tmp3461.value);
    panda$core$Int64 $tmp3463 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp3464 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3463, ((panda$core$Int64) { 2 }));
    if ($tmp3464.value) {
    {
        panda$core$Object* $tmp3465 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$IRNode* $tmp3466 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3465));
        value3462 = $tmp3466;
        if (((panda$core$Bit) { value3462 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    else {
    {
        value3462 = NULL;
    }
    }
    panda$core$Object* $tmp3468 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp3469 = org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3468), p_varKind, value3462, NULL);
    target3467 = $tmp3469;
    if (((panda$core$Bit) { target3467 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3471 = (panda$collections$Array*) malloc(40);
    $tmp3471->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3471->refCount.value = 1;
    panda$collections$Array$init($tmp3471);
    children3470 = $tmp3471;
    panda$collections$Array$add$panda$collections$Array$T(children3470, ((panda$core$Object*) target3467->target));
    if (((panda$core$Bit) { target3467->value != NULL }).value) {
    {
        panda$core$Bit $tmp3473 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(target3467->target->kind, ((panda$core$Int64) { 1016 }));
        PANDA_ASSERT($tmp3473.value);
        v3474 = ((org$pandalanguage$pandac$Variable*) target3467->target->payload);
        v3474->initialValue = target3467->value;
        panda$collections$Array$add$panda$collections$Array$T(children3470, ((panda$core$Object*) target3467->value));
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3475 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3475->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3475->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3475, ((panda$core$Int64) { 1021 }), p_d->position, ((panda$collections$ListView*) children3470));
    return $tmp3475;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBreak$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_b) {
    panda$core$Bit found3478;
    panda$collections$Iterator* label$Iter3479;
    panda$core$String* label3491;
    panda$core$Bit $tmp3477 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_b->kind, ((panda$core$Int64) { 134 }));
    PANDA_ASSERT($tmp3477.value);
    if (((panda$core$Bit) { p_b->payload != NULL }).value) {
    {
        found3478 = ((panda$core$Bit) { false });
        {
            ITable* $tmp3480 = ((panda$collections$Iterable*) self->loops)->$class->itable;
            while ($tmp3480->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3480 = $tmp3480->next;
            }
            $fn3482 $tmp3481 = $tmp3480->methods[0];
            panda$collections$Iterator* $tmp3483 = $tmp3481(((panda$collections$Iterable*) self->loops));
            label$Iter3479 = $tmp3483;
            $l3484:;
            ITable* $tmp3486 = label$Iter3479->$class->itable;
            while ($tmp3486->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3486 = $tmp3486->next;
            }
            $fn3488 $tmp3487 = $tmp3486->methods[0];
            panda$core$Bit $tmp3489 = $tmp3487(label$Iter3479);
            panda$core$Bit $tmp3490 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3489);
            if (!$tmp3490.value) goto $l3485;
            {
                ITable* $tmp3492 = label$Iter3479->$class->itable;
                while ($tmp3492->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3492 = $tmp3492->next;
                }
                $fn3494 $tmp3493 = $tmp3492->methods[1];
                panda$core$Object* $tmp3495 = $tmp3493(label$Iter3479);
                label3491 = ((panda$core$String*) $tmp3495);
                bool $tmp3496 = ((panda$core$Bit) { label3491 != NULL }).value;
                if (!$tmp3496) goto $l3497;
                panda$core$Bit $tmp3498 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(label3491, ((panda$core$String*) p_b->payload));
                $tmp3496 = $tmp3498.value;
                $l3497:;
                panda$core$Bit $tmp3499 = { $tmp3496 };
                if ($tmp3499.value) {
                {
                    found3478 = ((panda$core$Bit) { true });
                    goto $l3485;
                }
                }
            }
            goto $l3484;
            $l3485:;
        }
        panda$core$Bit $tmp3500 = panda$core$Bit$$NOT$R$panda$core$Bit(found3478);
        if ($tmp3500.value) {
        {
            panda$core$String* $tmp3502 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3501, p_b->payload);
            panda$core$String* $tmp3504 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3502, &$s3503);
            panda$core$String* $tmp3506 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3505, p_b->payload);
            panda$core$String* $tmp3508 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3506, &$s3507);
            panda$core$String* $tmp3509 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3504, $tmp3508);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_b->position, $tmp3509);
        }
        }
    }
    }
    else {
    panda$core$Int64 $tmp3510 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loops);
    panda$core$Bit $tmp3511 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3510, ((panda$core$Int64) { 0 }));
    if ($tmp3511.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_b->position, &$s3512);
    }
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3513 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3513->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3513->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp3513, ((panda$core$Int64) { 1006 }), p_b->position, ((panda$core$String*) p_b->payload));
    return $tmp3513;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileContinue$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_c) {
    panda$core$Bit found3516;
    panda$collections$Iterator* label$Iter3517;
    panda$core$String* label3529;
    panda$core$Bit $tmp3515 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_c->kind, ((panda$core$Int64) { 135 }));
    PANDA_ASSERT($tmp3515.value);
    if (((panda$core$Bit) { p_c->payload != NULL }).value) {
    {
        found3516 = ((panda$core$Bit) { false });
        {
            ITable* $tmp3518 = ((panda$collections$Iterable*) self->loops)->$class->itable;
            while ($tmp3518->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3518 = $tmp3518->next;
            }
            $fn3520 $tmp3519 = $tmp3518->methods[0];
            panda$collections$Iterator* $tmp3521 = $tmp3519(((panda$collections$Iterable*) self->loops));
            label$Iter3517 = $tmp3521;
            $l3522:;
            ITable* $tmp3524 = label$Iter3517->$class->itable;
            while ($tmp3524->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3524 = $tmp3524->next;
            }
            $fn3526 $tmp3525 = $tmp3524->methods[0];
            panda$core$Bit $tmp3527 = $tmp3525(label$Iter3517);
            panda$core$Bit $tmp3528 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3527);
            if (!$tmp3528.value) goto $l3523;
            {
                ITable* $tmp3530 = label$Iter3517->$class->itable;
                while ($tmp3530->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3530 = $tmp3530->next;
                }
                $fn3532 $tmp3531 = $tmp3530->methods[1];
                panda$core$Object* $tmp3533 = $tmp3531(label$Iter3517);
                label3529 = ((panda$core$String*) $tmp3533);
                bool $tmp3534 = ((panda$core$Bit) { label3529 != NULL }).value;
                if (!$tmp3534) goto $l3535;
                panda$core$Bit $tmp3536 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(label3529, ((panda$core$String*) p_c->payload));
                $tmp3534 = $tmp3536.value;
                $l3535:;
                panda$core$Bit $tmp3537 = { $tmp3534 };
                if ($tmp3537.value) {
                {
                    found3516 = ((panda$core$Bit) { true });
                    goto $l3523;
                }
                }
            }
            goto $l3522;
            $l3523:;
        }
        panda$core$Bit $tmp3538 = panda$core$Bit$$NOT$R$panda$core$Bit(found3516);
        if ($tmp3538.value) {
        {
            panda$core$String* $tmp3540 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3539, p_c->payload);
            panda$core$String* $tmp3542 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3540, &$s3541);
            panda$core$String* $tmp3544 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3543, p_c->payload);
            panda$core$String* $tmp3546 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3544, &$s3545);
            panda$core$String* $tmp3547 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3542, $tmp3546);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_c->position, $tmp3547);
        }
        }
    }
    }
    else {
    panda$core$Int64 $tmp3548 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loops);
    panda$core$Bit $tmp3549 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3548, ((panda$core$Int64) { 0 }));
    if ($tmp3549.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_c->position, &$s3550);
    }
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3551 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3551->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3551->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp3551, ((panda$core$Int64) { 1007 }), p_c->position, ((panda$core$String*) p_c->payload));
    return $tmp3551;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileReturn$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_r) {
    org$pandalanguage$pandac$IRNode* value3560;
    panda$collections$Array* children3565;
    panda$core$Bit $tmp3553 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_r->kind, ((panda$core$Int64) { 136 }));
    PANDA_ASSERT($tmp3553.value);
    panda$core$Int64 $tmp3554 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_r->children);
    panda$core$Bit $tmp3555 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3554, ((panda$core$Int64) { 1 }));
    if ($tmp3555.value) {
    {
        panda$core$Object* $tmp3556 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
        org$pandalanguage$pandac$Type* $tmp3557 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp3558 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp3556)->returnType, $tmp3557);
        if ($tmp3558.value) {
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_r->position, &$s3559);
            return NULL;
        }
        }
        panda$core$Object* $tmp3561 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp3562 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3561));
        panda$core$Object* $tmp3563 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
        org$pandalanguage$pandac$IRNode* $tmp3564 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3562, ((org$pandalanguage$pandac$MethodDecl*) $tmp3563)->returnType);
        value3560 = $tmp3564;
        if (((panda$core$Bit) { value3560 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp3566 = (panda$collections$Array*) malloc(40);
        $tmp3566->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp3566->refCount.value = 1;
        panda$collections$Array$init($tmp3566);
        children3565 = $tmp3566;
        panda$collections$Array$add$panda$collections$Array$T(children3565, ((panda$core$Object*) value3560));
        org$pandalanguage$pandac$IRNode* $tmp3568 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3568->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3568->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3568, ((panda$core$Int64) { 1008 }), p_r->position, ((panda$collections$ListView*) children3565));
        return $tmp3568;
    }
    }
    panda$core$Int64 $tmp3570 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_r->children);
    panda$core$Bit $tmp3571 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3570, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp3571.value);
    panda$core$Object* $tmp3572 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
    org$pandalanguage$pandac$Type* $tmp3573 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp3574 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp3572)->returnType, $tmp3573);
    if ($tmp3574.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_r->position, &$s3575);
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3576 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3576->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3576->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp3576, ((panda$core$Int64) { 1008 }), p_r->position);
    return $tmp3576;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileAssert$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_a) {
    org$pandalanguage$pandac$IRNode* test3586;
    org$pandalanguage$pandac$ClassDecl* bit3591;
    org$pandalanguage$pandac$Symbol* value3594;
    panda$collections$Array* fieldChildren3597;
    panda$collections$Array* children3603;
    org$pandalanguage$pandac$IRNode* msg3608;
    panda$core$Bit $tmp3578 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_a->kind, ((panda$core$Int64) { 123 }));
    PANDA_ASSERT($tmp3578.value);
    panda$core$Int64 $tmp3580 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp3581 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3580, ((panda$core$Int64) { 1 }));
    bool $tmp3579 = $tmp3581.value;
    if ($tmp3579) goto $l3582;
    panda$core$Int64 $tmp3583 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp3584 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3583, ((panda$core$Int64) { 2 }));
    $tmp3579 = $tmp3584.value;
    $l3582:;
    panda$core$Bit $tmp3585 = { $tmp3579 };
    PANDA_ASSERT($tmp3585.value);
    panda$core$Object* $tmp3587 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_a->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3588 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3587));
    test3586 = $tmp3588;
    if (((panda$core$Bit) { test3586 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$Type* $tmp3589 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp3590 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, test3586, $tmp3589);
    test3586 = $tmp3590;
    if (((panda$core$Bit) { test3586 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$Type* $tmp3592 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$ClassDecl* $tmp3593 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, $tmp3592);
    bit3591 = $tmp3593;
    PANDA_ASSERT(((panda$core$Bit) { bit3591 != NULL }).value);
    org$pandalanguage$pandac$Symbol* $tmp3596 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(bit3591->symbolTable, &$s3595);
    value3594 = $tmp3596;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self, ((org$pandalanguage$pandac$FieldDecl*) value3594));
    panda$collections$Array* $tmp3598 = (panda$collections$Array*) malloc(40);
    $tmp3598->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3598->refCount.value = 1;
    panda$collections$Array$init($tmp3598);
    fieldChildren3597 = $tmp3598;
    panda$collections$Array$add$panda$collections$Array$T(fieldChildren3597, ((panda$core$Object*) test3586));
    org$pandalanguage$pandac$IRNode* $tmp3600 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3600->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3600->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3602 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3600, ((panda$core$Int64) { 1026 }), p_a->position, $tmp3602, ((panda$core$Object*) value3594), ((panda$collections$ListView*) fieldChildren3597));
    test3586 = $tmp3600;
    panda$collections$Array* $tmp3604 = (panda$collections$Array*) malloc(40);
    $tmp3604->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3604->refCount.value = 1;
    panda$collections$Array$init($tmp3604);
    children3603 = $tmp3604;
    panda$collections$Array$add$panda$collections$Array$T(children3603, ((panda$core$Object*) test3586));
    panda$core$Int64 $tmp3606 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp3607 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3606, ((panda$core$Int64) { 2 }));
    if ($tmp3607.value) {
    {
        panda$core$Object* $tmp3609 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_a->children, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$IRNode* $tmp3610 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3609));
        msg3608 = $tmp3610;
        if (((panda$core$Bit) { msg3608 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$Type* $tmp3611 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp3612 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, msg3608, $tmp3611);
        msg3608 = $tmp3612;
        if (((panda$core$Bit) { msg3608 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children3603, ((panda$core$Object*) msg3608));
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3613 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3613->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3613->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3613, ((panda$core$Int64) { 1034 }), p_a->position, ((panda$collections$ListView*) children3603));
    return $tmp3613;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileVar$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_v) {
    panda$core$Int64 nodeKind3628;
    panda$core$Int64 varKind3629;
    panda$collections$Array* decls3630;
    panda$collections$Iterator* astDecl$Iter3633;
    org$pandalanguage$pandac$ASTNode* astDecl3645;
    org$pandalanguage$pandac$IRNode* decl3650;
    panda$core$Bit $tmp3618 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 130 }));
    bool $tmp3617 = $tmp3618.value;
    if ($tmp3617) goto $l3619;
    panda$core$Bit $tmp3620 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 131 }));
    $tmp3617 = $tmp3620.value;
    $l3619:;
    panda$core$Bit $tmp3621 = { $tmp3617 };
    bool $tmp3616 = $tmp3621.value;
    if ($tmp3616) goto $l3622;
    panda$core$Bit $tmp3623 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 133 }));
    $tmp3616 = $tmp3623.value;
    $l3622:;
    panda$core$Bit $tmp3624 = { $tmp3616 };
    bool $tmp3615 = $tmp3624.value;
    if ($tmp3615) goto $l3625;
    panda$core$Bit $tmp3626 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 132 }));
    $tmp3615 = $tmp3626.value;
    $l3625:;
    panda$core$Bit $tmp3627 = { $tmp3615 };
    PANDA_ASSERT($tmp3627.value);
    switch (p_v->kind.value) {
        case 130:
        {
            nodeKind3628 = ((panda$core$Int64) { 1017 });
            varKind3629 = ((panda$core$Int64) { 10000 });
        }
        break;
        case 131:
        {
            nodeKind3628 = ((panda$core$Int64) { 1018 });
            varKind3629 = ((panda$core$Int64) { 10001 });
        }
        break;
        case 132:
        {
            nodeKind3628 = ((panda$core$Int64) { 1019 });
            varKind3629 = ((panda$core$Int64) { 10002 });
        }
        break;
        case 133:
        {
            nodeKind3628 = ((panda$core$Int64) { 1020 });
            varKind3629 = ((panda$core$Int64) { 10003 });
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
    panda$collections$Array* $tmp3631 = (panda$collections$Array*) malloc(40);
    $tmp3631->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3631->refCount.value = 1;
    panda$collections$Array$init($tmp3631);
    decls3630 = $tmp3631;
    {
        ITable* $tmp3634 = ((panda$collections$Iterable*) p_v->children)->$class->itable;
        while ($tmp3634->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3634 = $tmp3634->next;
        }
        $fn3636 $tmp3635 = $tmp3634->methods[0];
        panda$collections$Iterator* $tmp3637 = $tmp3635(((panda$collections$Iterable*) p_v->children));
        astDecl$Iter3633 = $tmp3637;
        $l3638:;
        ITable* $tmp3640 = astDecl$Iter3633->$class->itable;
        while ($tmp3640->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3640 = $tmp3640->next;
        }
        $fn3642 $tmp3641 = $tmp3640->methods[0];
        panda$core$Bit $tmp3643 = $tmp3641(astDecl$Iter3633);
        panda$core$Bit $tmp3644 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3643);
        if (!$tmp3644.value) goto $l3639;
        {
            ITable* $tmp3646 = astDecl$Iter3633->$class->itable;
            while ($tmp3646->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3646 = $tmp3646->next;
            }
            $fn3648 $tmp3647 = $tmp3646->methods[1];
            panda$core$Object* $tmp3649 = $tmp3647(astDecl$Iter3633);
            astDecl3645 = ((org$pandalanguage$pandac$ASTNode*) $tmp3649);
            org$pandalanguage$pandac$IRNode* $tmp3651 = org$pandalanguage$pandac$Compiler$compileDeclaration$org$pandalanguage$pandac$ASTNode$panda$core$Int64$R$org$pandalanguage$pandac$IRNode$Q(self, astDecl3645, varKind3629);
            decl3650 = $tmp3651;
            if (((panda$core$Bit) { decl3650 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(decls3630, ((panda$core$Object*) decl3650));
        }
        goto $l3638;
        $l3639:;
    }
    org$pandalanguage$pandac$IRNode* $tmp3652 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3652->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3652->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3652, nodeKind3628, p_v->position, ((panda$collections$ListView*) decls3630));
    return $tmp3652;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileWhenTest$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Variable* p_value, org$pandalanguage$pandac$ASTNode* p_test) {
    org$pandalanguage$pandac$IRNode* target3654;
    panda$collections$Array* callChildren3657;
    org$pandalanguage$pandac$IRNode* testValue3660;
    org$pandalanguage$pandac$IRNode* $tmp3655 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3655->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3655->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3655, ((panda$core$Int64) { 1016 }), p_test->position, p_value->type, p_value);
    target3654 = $tmp3655;
    panda$collections$Array* $tmp3658 = (panda$collections$Array*) malloc(40);
    $tmp3658->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3658->refCount.value = 1;
    panda$collections$Array$init($tmp3658);
    callChildren3657 = $tmp3658;
    org$pandalanguage$pandac$IRNode* $tmp3661 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_test);
    testValue3660 = $tmp3661;
    if (((panda$core$Bit) { testValue3660 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(callChildren3657, ((panda$core$Object*) testValue3660));
    org$pandalanguage$pandac$IRNode* $tmp3663 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target3654, &$s3662, ((panda$collections$ListView*) callChildren3657));
    return $tmp3663;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileChainedIfWhen$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Variable* p_value, org$pandalanguage$pandac$ASTNode* p_w) {
    org$pandalanguage$pandac$IRNode* test3672;
    panda$core$Range$LTpanda$core$Int64$GT $tmp3676;
    org$pandalanguage$pandac$IRNode* nextTest3697;
    panda$collections$Array* callChildren3701;
    panda$collections$Array* statements3719;
    panda$core$Range$LTpanda$core$Int64$GT $tmp3722;
    org$pandalanguage$pandac$IRNode* statement3742;
    panda$collections$Array* children3757;
    panda$core$Bit $tmp3664 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_w->kind, ((panda$core$Int64) { 124 }));
    PANDA_ASSERT($tmp3664.value);
    panda$core$Int64 $tmp3665 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Bit $tmp3666 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp3665, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3666.value);
    panda$core$Object* $tmp3667 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp3668 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp3667)->kind, ((panda$core$Int64) { 128 }));
    PANDA_ASSERT($tmp3668.value);
    panda$core$Object* $tmp3669 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Int64 $tmp3670 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$ASTNode*) $tmp3669)->children);
    panda$core$Bit $tmp3671 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp3670, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3671.value);
    panda$core$Object* $tmp3673 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp3674 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$ASTNode*) $tmp3673)->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3675 = org$pandalanguage$pandac$Compiler$compileWhenTest$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_value, ((org$pandalanguage$pandac$ASTNode*) $tmp3674));
    test3672 = $tmp3675;
    if (((panda$core$Bit) { test3672 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Object* $tmp3677 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Int64 $tmp3678 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$ASTNode*) $tmp3677)->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp3676, ((panda$core$Int64) { 1 }), $tmp3678, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp3680 = $tmp3676.start.value;
    panda$core$Int64 i3679 = { $tmp3680 };
    int64_t $tmp3682 = $tmp3676.end.value;
    int64_t $tmp3683 = $tmp3676.step.value;
    bool $tmp3684 = $tmp3676.inclusive.value;
    bool $tmp3691 = $tmp3683 > 0;
    if ($tmp3691) goto $l3689; else goto $l3690;
    $l3689:;
    if ($tmp3684) goto $l3692; else goto $l3693;
    $l3692:;
    if ($tmp3680 <= $tmp3682) goto $l3685; else goto $l3687;
    $l3693:;
    if ($tmp3680 < $tmp3682) goto $l3685; else goto $l3687;
    $l3690:;
    if ($tmp3684) goto $l3694; else goto $l3695;
    $l3694:;
    if ($tmp3680 >= $tmp3682) goto $l3685; else goto $l3687;
    $l3695:;
    if ($tmp3680 > $tmp3682) goto $l3685; else goto $l3687;
    $l3685:;
    {
        panda$core$Object* $tmp3698 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3699 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$ASTNode*) $tmp3698)->children, i3679);
        org$pandalanguage$pandac$IRNode* $tmp3700 = org$pandalanguage$pandac$Compiler$compileWhenTest$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_value, ((org$pandalanguage$pandac$ASTNode*) $tmp3699));
        nextTest3697 = $tmp3700;
        if (((panda$core$Bit) { nextTest3697 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp3702 = (panda$collections$Array*) malloc(40);
        $tmp3702->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp3702->refCount.value = 1;
        panda$collections$Array$init($tmp3702);
        callChildren3701 = $tmp3702;
        panda$collections$Array$add$panda$collections$Array$T(callChildren3701, ((panda$core$Object*) nextTest3697));
        org$pandalanguage$pandac$IRNode* $tmp3705 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, test3672, &$s3704, ((panda$collections$ListView*) callChildren3701));
        test3672 = $tmp3705;
        if (((panda$core$Bit) { test3672 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    $l3688:;
    if ($tmp3691) goto $l3707; else goto $l3708;
    $l3707:;
    int64_t $tmp3709 = $tmp3682 - i3679.value;
    if ($tmp3684) goto $l3710; else goto $l3711;
    $l3710:;
    if ($tmp3709 >= $tmp3683) goto $l3706; else goto $l3687;
    $l3711:;
    if ($tmp3709 > $tmp3683) goto $l3706; else goto $l3687;
    $l3708:;
    int64_t $tmp3713 = i3679.value - $tmp3682;
    if ($tmp3684) goto $l3714; else goto $l3715;
    $l3714:;
    if ($tmp3713 >= -$tmp3683) goto $l3706; else goto $l3687;
    $l3715:;
    if ($tmp3713 > -$tmp3683) goto $l3706; else goto $l3687;
    $l3706:;
    i3679.value += $tmp3683;
    goto $l3685;
    $l3687:;
    org$pandalanguage$pandac$SymbolTable* $tmp3717 = (org$pandalanguage$pandac$SymbolTable*) malloc(40);
    $tmp3717->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp3717->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp3717, self->symbolTable);
    self->symbolTable = $tmp3717;
    panda$collections$Array* $tmp3720 = (panda$collections$Array*) malloc(40);
    $tmp3720->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3720->refCount.value = 1;
    panda$collections$Array$init($tmp3720);
    statements3719 = $tmp3720;
    panda$core$Int64 $tmp3723 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp3722, ((panda$core$Int64) { 1 }), $tmp3723, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp3725 = $tmp3722.start.value;
    panda$core$Int64 i3724 = { $tmp3725 };
    int64_t $tmp3727 = $tmp3722.end.value;
    int64_t $tmp3728 = $tmp3722.step.value;
    bool $tmp3729 = $tmp3722.inclusive.value;
    bool $tmp3736 = $tmp3728 > 0;
    if ($tmp3736) goto $l3734; else goto $l3735;
    $l3734:;
    if ($tmp3729) goto $l3737; else goto $l3738;
    $l3737:;
    if ($tmp3725 <= $tmp3727) goto $l3730; else goto $l3732;
    $l3738:;
    if ($tmp3725 < $tmp3727) goto $l3730; else goto $l3732;
    $l3735:;
    if ($tmp3729) goto $l3739; else goto $l3740;
    $l3739:;
    if ($tmp3725 >= $tmp3727) goto $l3730; else goto $l3732;
    $l3740:;
    if ($tmp3725 > $tmp3727) goto $l3730; else goto $l3732;
    $l3730:;
    {
        panda$core$Object* $tmp3743 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, i3724);
        org$pandalanguage$pandac$IRNode* $tmp3744 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3743));
        statement3742 = $tmp3744;
        if (((panda$core$Bit) { statement3742 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(statements3719, ((panda$core$Object*) statement3742));
    }
    $l3733:;
    if ($tmp3736) goto $l3746; else goto $l3747;
    $l3746:;
    int64_t $tmp3748 = $tmp3727 - i3724.value;
    if ($tmp3729) goto $l3749; else goto $l3750;
    $l3749:;
    if ($tmp3748 >= $tmp3728) goto $l3745; else goto $l3732;
    $l3750:;
    if ($tmp3748 > $tmp3728) goto $l3745; else goto $l3732;
    $l3747:;
    int64_t $tmp3752 = i3724.value - $tmp3727;
    if ($tmp3729) goto $l3753; else goto $l3754;
    $l3753:;
    if ($tmp3752 >= -$tmp3728) goto $l3745; else goto $l3732;
    $l3754:;
    if ($tmp3752 > -$tmp3728) goto $l3745; else goto $l3732;
    $l3745:;
    i3724.value += $tmp3728;
    goto $l3730;
    $l3732:;
    panda$core$Object* $tmp3756 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->symbolTable->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp3756);
    panda$collections$Array* $tmp3758 = (panda$collections$Array*) malloc(40);
    $tmp3758->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3758->refCount.value = 1;
    panda$collections$Array$init($tmp3758);
    children3757 = $tmp3758;
    panda$collections$Array$add$panda$collections$Array$T(children3757, ((panda$core$Object*) test3672));
    org$pandalanguage$pandac$IRNode* $tmp3760 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3760->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3760->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3760, ((panda$core$Int64) { 1000 }), p_w->position, ((panda$collections$ListView*) statements3719));
    panda$collections$Array$add$panda$collections$Array$T(children3757, ((panda$core$Object*) $tmp3760));
    org$pandalanguage$pandac$IRNode* $tmp3762 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3762->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3762->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3762, ((panda$core$Int64) { 1012 }), p_w->position, ((panda$collections$ListView*) children3757));
    return $tmp3762;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileChainedIfMatch$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_m, org$pandalanguage$pandac$IRNode* p_value) {
    panda$collections$Array* children3764;
    org$pandalanguage$pandac$Variable* valueVar3767;
    panda$collections$Array* declChildren3777;
    panda$collections$Array* varChildren3782;
    panda$core$Range$LTpanda$core$Int64$GT $tmp3789;
    org$pandalanguage$pandac$ASTNode* c3809;
    org$pandalanguage$pandac$IRNode* w3811;
    panda$collections$Array* statements3813;
    panda$collections$Iterator* astStatement$Iter3816;
    org$pandalanguage$pandac$ASTNode* astStatement3828;
    org$pandalanguage$pandac$IRNode* stmt3833;
    panda$core$Range$LTpanda$core$Int64$GT $tmp3848;
    panda$collections$Array* $tmp3765 = (panda$collections$Array*) malloc(40);
    $tmp3765->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3765->refCount.value = 1;
    panda$collections$Array$init($tmp3765);
    children3764 = $tmp3765;
    org$pandalanguage$pandac$Variable* $tmp3768 = (org$pandalanguage$pandac$Variable*) malloc(88);
    $tmp3768->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
    $tmp3768->refCount.value = 1;
    panda$core$String* $tmp3771 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3770, ((panda$core$Object*) wrap_panda$core$Int64(p_m->position.line)));
    panda$core$String* $tmp3773 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3771, &$s3772);
    panda$core$String* $tmp3774 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3773, ((panda$core$Object*) wrap_panda$core$Int64(p_m->position.column)));
    panda$core$String* $tmp3776 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3774, &$s3775);
    org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type($tmp3768, p_m->position, ((panda$core$Int64) { 10001 }), $tmp3776, p_value->type);
    valueVar3767 = $tmp3768;
    panda$collections$Array* $tmp3778 = (panda$collections$Array*) malloc(40);
    $tmp3778->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3778->refCount.value = 1;
    panda$collections$Array$init($tmp3778);
    declChildren3777 = $tmp3778;
    org$pandalanguage$pandac$IRNode* $tmp3780 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3780->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3780->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3780, ((panda$core$Int64) { 1016 }), p_value->position, valueVar3767->type, valueVar3767);
    panda$collections$Array$add$panda$collections$Array$T(declChildren3777, ((panda$core$Object*) $tmp3780));
    panda$collections$Array$add$panda$collections$Array$T(declChildren3777, ((panda$core$Object*) p_value));
    panda$collections$Array* $tmp3783 = (panda$collections$Array*) malloc(40);
    $tmp3783->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3783->refCount.value = 1;
    panda$collections$Array$init($tmp3783);
    varChildren3782 = $tmp3783;
    org$pandalanguage$pandac$IRNode* $tmp3785 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3785->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3785->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3785, ((panda$core$Int64) { 1021 }), ((org$pandalanguage$pandac$Symbol*) valueVar3767)->position, ((panda$collections$ListView*) declChildren3777));
    panda$collections$Array$add$panda$collections$Array$T(varChildren3782, ((panda$core$Object*) $tmp3785));
    org$pandalanguage$pandac$IRNode* $tmp3787 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3787->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3787->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3787, ((panda$core$Int64) { 1018 }), ((org$pandalanguage$pandac$Symbol*) valueVar3767)->position, ((panda$collections$ListView*) varChildren3782));
    panda$collections$Array$add$panda$collections$Array$T(children3764, ((panda$core$Object*) $tmp3787));
    panda$core$Int64 $tmp3790 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp3789, ((panda$core$Int64) { 1 }), $tmp3790, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp3792 = $tmp3789.start.value;
    panda$core$Int64 i3791 = { $tmp3792 };
    int64_t $tmp3794 = $tmp3789.end.value;
    int64_t $tmp3795 = $tmp3789.step.value;
    bool $tmp3796 = $tmp3789.inclusive.value;
    bool $tmp3803 = $tmp3795 > 0;
    if ($tmp3803) goto $l3801; else goto $l3802;
    $l3801:;
    if ($tmp3796) goto $l3804; else goto $l3805;
    $l3804:;
    if ($tmp3792 <= $tmp3794) goto $l3797; else goto $l3799;
    $l3805:;
    if ($tmp3792 < $tmp3794) goto $l3797; else goto $l3799;
    $l3802:;
    if ($tmp3796) goto $l3806; else goto $l3807;
    $l3806:;
    if ($tmp3792 >= $tmp3794) goto $l3797; else goto $l3799;
    $l3807:;
    if ($tmp3792 > $tmp3794) goto $l3797; else goto $l3799;
    $l3797:;
    {
        panda$core$Object* $tmp3810 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, i3791);
        c3809 = ((org$pandalanguage$pandac$ASTNode*) $tmp3810);
        switch (c3809->kind.value) {
            case 124:
            {
                org$pandalanguage$pandac$IRNode* $tmp3812 = org$pandalanguage$pandac$Compiler$compileChainedIfWhen$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, valueVar3767, c3809);
                w3811 = $tmp3812;
                if (((panda$core$Bit) { w3811 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children3764, ((panda$core$Object*) w3811));
            }
            break;
            case 127:
            {
                panda$collections$Array* $tmp3814 = (panda$collections$Array*) malloc(40);
                $tmp3814->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp3814->refCount.value = 1;
                panda$collections$Array$init($tmp3814);
                statements3813 = $tmp3814;
                {
                    ITable* $tmp3817 = ((panda$collections$Iterable*) c3809->children)->$class->itable;
                    while ($tmp3817->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp3817 = $tmp3817->next;
                    }
                    $fn3819 $tmp3818 = $tmp3817->methods[0];
                    panda$collections$Iterator* $tmp3820 = $tmp3818(((panda$collections$Iterable*) c3809->children));
                    astStatement$Iter3816 = $tmp3820;
                    $l3821:;
                    ITable* $tmp3823 = astStatement$Iter3816->$class->itable;
                    while ($tmp3823->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp3823 = $tmp3823->next;
                    }
                    $fn3825 $tmp3824 = $tmp3823->methods[0];
                    panda$core$Bit $tmp3826 = $tmp3824(astStatement$Iter3816);
                    panda$core$Bit $tmp3827 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3826);
                    if (!$tmp3827.value) goto $l3822;
                    {
                        ITable* $tmp3829 = astStatement$Iter3816->$class->itable;
                        while ($tmp3829->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp3829 = $tmp3829->next;
                        }
                        $fn3831 $tmp3830 = $tmp3829->methods[1];
                        panda$core$Object* $tmp3832 = $tmp3830(astStatement$Iter3816);
                        astStatement3828 = ((org$pandalanguage$pandac$ASTNode*) $tmp3832);
                        org$pandalanguage$pandac$IRNode* $tmp3834 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, astStatement3828);
                        stmt3833 = $tmp3834;
                        if (((panda$core$Bit) { stmt3833 == NULL }).value) {
                        {
                            return NULL;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(statements3813, ((panda$core$Object*) stmt3833));
                    }
                    goto $l3821;
                    $l3822:;
                }
                org$pandalanguage$pandac$IRNode* $tmp3835 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp3835->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp3835->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3835, ((panda$core$Int64) { 1000 }), c3809->position, ((panda$collections$ListView*) statements3813));
                panda$collections$Array$add$panda$collections$Array$T(children3764, ((panda$core$Object*) $tmp3835));
            }
            break;
            default:
            {
                PANDA_ASSERT(((panda$core$Bit) { false }).value);
            }
        }
    }
    $l3800:;
    if ($tmp3803) goto $l3838; else goto $l3839;
    $l3838:;
    int64_t $tmp3840 = $tmp3794 - i3791.value;
    if ($tmp3796) goto $l3841; else goto $l3842;
    $l3841:;
    if ($tmp3840 >= $tmp3795) goto $l3837; else goto $l3799;
    $l3842:;
    if ($tmp3840 > $tmp3795) goto $l3837; else goto $l3799;
    $l3839:;
    int64_t $tmp3844 = i3791.value - $tmp3794;
    if ($tmp3796) goto $l3845; else goto $l3846;
    $l3845:;
    if ($tmp3844 >= -$tmp3795) goto $l3837; else goto $l3799;
    $l3846:;
    if ($tmp3844 > -$tmp3795) goto $l3837; else goto $l3799;
    $l3837:;
    i3791.value += $tmp3795;
    goto $l3797;
    $l3799:;
    panda$core$Int64 $tmp3849 = panda$collections$Array$get_count$R$panda$core$Int64(children3764);
    panda$core$Int64 $tmp3850 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp3849, ((panda$core$Int64) { 1 }));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp3848, $tmp3850, ((panda$core$Int64) { 1 }), ((panda$core$Int64$nullable) { ((panda$core$Int64) { -1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp3852 = $tmp3848.start.value;
    panda$core$Int64 i3851 = { $tmp3852 };
    int64_t $tmp3854 = $tmp3848.end.value;
    int64_t $tmp3855 = $tmp3848.step.value;
    bool $tmp3856 = $tmp3848.inclusive.value;
    bool $tmp3863 = $tmp3855 > 0;
    if ($tmp3863) goto $l3861; else goto $l3862;
    $l3861:;
    if ($tmp3856) goto $l3864; else goto $l3865;
    $l3864:;
    if ($tmp3852 <= $tmp3854) goto $l3857; else goto $l3859;
    $l3865:;
    if ($tmp3852 < $tmp3854) goto $l3857; else goto $l3859;
    $l3862:;
    if ($tmp3856) goto $l3866; else goto $l3867;
    $l3866:;
    if ($tmp3852 >= $tmp3854) goto $l3857; else goto $l3859;
    $l3867:;
    if ($tmp3852 > $tmp3854) goto $l3857; else goto $l3859;
    $l3857:;
    {
        panda$core$Int64 $tmp3869 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i3851, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp3870 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children3764, $tmp3869);
        panda$core$Bit $tmp3871 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp3870)->kind, ((panda$core$Int64) { 1012 }));
        PANDA_ASSERT($tmp3871.value);
        panda$core$Int64 $tmp3872 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i3851, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp3873 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children3764, $tmp3872);
        panda$core$Int64 $tmp3874 = panda$collections$Array$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp3873)->children);
        panda$core$Bit $tmp3875 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3874, ((panda$core$Int64) { 2 }));
        PANDA_ASSERT($tmp3875.value);
        panda$core$Int64 $tmp3876 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i3851, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp3877 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children3764, $tmp3876);
        panda$core$Object* $tmp3878 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children3764, i3851);
        panda$collections$Array$add$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp3877)->children, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp3878)));
        panda$core$Int64 $tmp3879 = panda$collections$Array$get_count$R$panda$core$Int64(children3764);
        panda$core$Int64 $tmp3880 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp3879, ((panda$core$Int64) { 1 }));
        panda$collections$Array$removeIndex$panda$core$Int64(children3764, $tmp3880);
    }
    $l3860:;
    if ($tmp3863) goto $l3882; else goto $l3883;
    $l3882:;
    int64_t $tmp3884 = $tmp3854 - i3851.value;
    if ($tmp3856) goto $l3885; else goto $l3886;
    $l3885:;
    if ($tmp3884 >= $tmp3855) goto $l3881; else goto $l3859;
    $l3886:;
    if ($tmp3884 > $tmp3855) goto $l3881; else goto $l3859;
    $l3883:;
    int64_t $tmp3888 = i3851.value - $tmp3854;
    if ($tmp3856) goto $l3889; else goto $l3890;
    $l3889:;
    if ($tmp3888 >= -$tmp3855) goto $l3881; else goto $l3859;
    $l3890:;
    if ($tmp3888 > -$tmp3855) goto $l3881; else goto $l3859;
    $l3881:;
    i3851.value += $tmp3855;
    goto $l3857;
    $l3859:;
    org$pandalanguage$pandac$IRNode* $tmp3892 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3892->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3892->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3892, ((panda$core$Int64) { 1000 }), p_m->position, ((panda$collections$ListView*) children3764));
    return $tmp3892;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileWhen$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type, org$pandalanguage$pandac$ASTNode* p_w) {
    panda$collections$Array* children3902;
    panda$collections$Iterator* expr$Iter3905;
    org$pandalanguage$pandac$ASTNode* expr3918;
    org$pandalanguage$pandac$IRNode* compiled3923;
    panda$collections$Array* statements3928;
    panda$core$Range$LTpanda$core$Int64$GT $tmp3931;
    org$pandalanguage$pandac$IRNode* statement3951;
    panda$core$Bit $tmp3894 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_w->kind, ((panda$core$Int64) { 124 }));
    PANDA_ASSERT($tmp3894.value);
    panda$core$Int64 $tmp3895 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Bit $tmp3896 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp3895, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3896.value);
    panda$core$Object* $tmp3897 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp3898 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp3897)->kind, ((panda$core$Int64) { 128 }));
    PANDA_ASSERT($tmp3898.value);
    panda$core$Object* $tmp3899 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Int64 $tmp3900 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$ASTNode*) $tmp3899)->children);
    panda$core$Bit $tmp3901 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp3900, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3901.value);
    panda$collections$Array* $tmp3903 = (panda$collections$Array*) malloc(40);
    $tmp3903->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3903->refCount.value = 1;
    panda$collections$Array$init($tmp3903);
    children3902 = $tmp3903;
    {
        panda$core$Object* $tmp3906 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
        ITable* $tmp3907 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp3906)->children)->$class->itable;
        while ($tmp3907->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3907 = $tmp3907->next;
        }
        $fn3909 $tmp3908 = $tmp3907->methods[0];
        panda$collections$Iterator* $tmp3910 = $tmp3908(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp3906)->children));
        expr$Iter3905 = $tmp3910;
        $l3911:;
        ITable* $tmp3913 = expr$Iter3905->$class->itable;
        while ($tmp3913->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3913 = $tmp3913->next;
        }
        $fn3915 $tmp3914 = $tmp3913->methods[0];
        panda$core$Bit $tmp3916 = $tmp3914(expr$Iter3905);
        panda$core$Bit $tmp3917 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3916);
        if (!$tmp3917.value) goto $l3912;
        {
            ITable* $tmp3919 = expr$Iter3905->$class->itable;
            while ($tmp3919->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3919 = $tmp3919->next;
            }
            $fn3921 $tmp3920 = $tmp3919->methods[1];
            panda$core$Object* $tmp3922 = $tmp3920(expr$Iter3905);
            expr3918 = ((org$pandalanguage$pandac$ASTNode*) $tmp3922);
            org$pandalanguage$pandac$IRNode* $tmp3924 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, expr3918);
            org$pandalanguage$pandac$IRNode* $tmp3925 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3924, p_type);
            compiled3923 = $tmp3925;
            if (((panda$core$Bit) { compiled3923 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children3902, ((panda$core$Object*) compiled3923));
        }
        goto $l3911;
        $l3912:;
    }
    org$pandalanguage$pandac$SymbolTable* $tmp3926 = (org$pandalanguage$pandac$SymbolTable*) malloc(40);
    $tmp3926->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp3926->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp3926, self->symbolTable);
    self->symbolTable = $tmp3926;
    panda$collections$Array* $tmp3929 = (panda$collections$Array*) malloc(40);
    $tmp3929->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3929->refCount.value = 1;
    panda$collections$Array$init($tmp3929);
    statements3928 = $tmp3929;
    panda$core$Int64 $tmp3932 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp3931, ((panda$core$Int64) { 1 }), $tmp3932, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp3934 = $tmp3931.start.value;
    panda$core$Int64 i3933 = { $tmp3934 };
    int64_t $tmp3936 = $tmp3931.end.value;
    int64_t $tmp3937 = $tmp3931.step.value;
    bool $tmp3938 = $tmp3931.inclusive.value;
    bool $tmp3945 = $tmp3937 > 0;
    if ($tmp3945) goto $l3943; else goto $l3944;
    $l3943:;
    if ($tmp3938) goto $l3946; else goto $l3947;
    $l3946:;
    if ($tmp3934 <= $tmp3936) goto $l3939; else goto $l3941;
    $l3947:;
    if ($tmp3934 < $tmp3936) goto $l3939; else goto $l3941;
    $l3944:;
    if ($tmp3938) goto $l3948; else goto $l3949;
    $l3948:;
    if ($tmp3934 >= $tmp3936) goto $l3939; else goto $l3941;
    $l3949:;
    if ($tmp3934 > $tmp3936) goto $l3939; else goto $l3941;
    $l3939:;
    {
        panda$core$Object* $tmp3952 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, i3933);
        org$pandalanguage$pandac$IRNode* $tmp3953 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3952));
        statement3951 = $tmp3953;
        if (((panda$core$Bit) { statement3951 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(statements3928, ((panda$core$Object*) statement3951));
    }
    $l3942:;
    if ($tmp3945) goto $l3955; else goto $l3956;
    $l3955:;
    int64_t $tmp3957 = $tmp3936 - i3933.value;
    if ($tmp3938) goto $l3958; else goto $l3959;
    $l3958:;
    if ($tmp3957 >= $tmp3937) goto $l3954; else goto $l3941;
    $l3959:;
    if ($tmp3957 > $tmp3937) goto $l3954; else goto $l3941;
    $l3956:;
    int64_t $tmp3961 = i3933.value - $tmp3936;
    if ($tmp3938) goto $l3962; else goto $l3963;
    $l3962:;
    if ($tmp3961 >= -$tmp3937) goto $l3954; else goto $l3941;
    $l3963:;
    if ($tmp3961 > -$tmp3937) goto $l3954; else goto $l3941;
    $l3954:;
    i3933.value += $tmp3937;
    goto $l3939;
    $l3941:;
    panda$core$Object* $tmp3965 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->symbolTable->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp3965);
    org$pandalanguage$pandac$IRNode* $tmp3966 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3966->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3966->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3966, ((panda$core$Int64) { 1000 }), p_w->position, ((panda$collections$ListView*) statements3928));
    panda$collections$Array$add$panda$collections$Array$T(children3902, ((panda$core$Object*) $tmp3966));
    org$pandalanguage$pandac$IRNode* $tmp3968 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3968->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3968->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3968, ((panda$core$Int64) { 1042 }), p_w->position, ((panda$collections$ListView*) children3902));
    return $tmp3968;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileOtherwise$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_o) {
    panda$collections$Array* children3971;
    panda$collections$Array* statements3976;
    panda$collections$Iterator* s$Iter3979;
    org$pandalanguage$pandac$ASTNode* s3991;
    org$pandalanguage$pandac$IRNode* statement3996;
    panda$core$Bit $tmp3970 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_o->kind, ((panda$core$Int64) { 127 }));
    PANDA_ASSERT($tmp3970.value);
    panda$collections$Array* $tmp3972 = (panda$collections$Array*) malloc(40);
    $tmp3972->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3972->refCount.value = 1;
    panda$collections$Array$init($tmp3972);
    children3971 = $tmp3972;
    org$pandalanguage$pandac$SymbolTable* $tmp3974 = (org$pandalanguage$pandac$SymbolTable*) malloc(40);
    $tmp3974->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp3974->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp3974, self->symbolTable);
    self->symbolTable = $tmp3974;
    panda$collections$Array* $tmp3977 = (panda$collections$Array*) malloc(40);
    $tmp3977->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3977->refCount.value = 1;
    panda$collections$Array$init($tmp3977);
    statements3976 = $tmp3977;
    {
        ITable* $tmp3980 = ((panda$collections$Iterable*) p_o->children)->$class->itable;
        while ($tmp3980->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3980 = $tmp3980->next;
        }
        $fn3982 $tmp3981 = $tmp3980->methods[0];
        panda$collections$Iterator* $tmp3983 = $tmp3981(((panda$collections$Iterable*) p_o->children));
        s$Iter3979 = $tmp3983;
        $l3984:;
        ITable* $tmp3986 = s$Iter3979->$class->itable;
        while ($tmp3986->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3986 = $tmp3986->next;
        }
        $fn3988 $tmp3987 = $tmp3986->methods[0];
        panda$core$Bit $tmp3989 = $tmp3987(s$Iter3979);
        panda$core$Bit $tmp3990 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3989);
        if (!$tmp3990.value) goto $l3985;
        {
            ITable* $tmp3992 = s$Iter3979->$class->itable;
            while ($tmp3992->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3992 = $tmp3992->next;
            }
            $fn3994 $tmp3993 = $tmp3992->methods[1];
            panda$core$Object* $tmp3995 = $tmp3993(s$Iter3979);
            s3991 = ((org$pandalanguage$pandac$ASTNode*) $tmp3995);
            org$pandalanguage$pandac$IRNode* $tmp3997 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, s3991);
            statement3996 = $tmp3997;
            if (((panda$core$Bit) { statement3996 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(statements3976, ((panda$core$Object*) statement3996));
        }
        goto $l3984;
        $l3985:;
    }
    panda$core$Object* $tmp3998 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->symbolTable->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp3998);
    org$pandalanguage$pandac$IRNode* $tmp3999 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3999->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3999->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3999, ((panda$core$Int64) { 1000 }), p_o->position, ((panda$collections$ListView*) statements3976));
    panda$collections$Array$add$panda$collections$Array$T(children3971, ((panda$core$Object*) $tmp3999));
    org$pandalanguage$pandac$IRNode* $tmp4001 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4001->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4001->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4001, ((panda$core$Int64) { 1043 }), p_o->position, ((panda$collections$ListView*) children3971));
    return $tmp4001;
}
panda$core$Bit org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    org$pandalanguage$pandac$FieldDecl* f4010;
    org$pandalanguage$pandac$Variable* v4019;
    switch (p_expr->kind.value) {
        case 1004:
        {
            return ((panda$core$Bit) { true });
        }
        break;
        case 1010:
        {
            panda$core$Bit $tmp4004 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_expr->type);
            bool $tmp4003 = $tmp4004.value;
            if (!$tmp4003) goto $l4005;
            panda$core$Object* $tmp4006 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp4007 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp4006)->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp4008 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp4007));
            $tmp4003 = $tmp4008.value;
            $l4005:;
            panda$core$Bit $tmp4009 = { $tmp4003 };
            return $tmp4009;
        }
        break;
        case 1026:
        {
            f4010 = ((org$pandalanguage$pandac$FieldDecl*) p_expr->payload);
            PANDA_ASSERT(f4010->resolved.value);
            panda$core$Bit $tmp4013 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(f4010->fieldKind, ((panda$core$Int64) { 10002 }));
            bool $tmp4012 = $tmp4013.value;
            if (!$tmp4012) goto $l4014;
            $tmp4012 = ((panda$core$Bit) { f4010->value != NULL }).value;
            $l4014:;
            panda$core$Bit $tmp4015 = { $tmp4012 };
            bool $tmp4011 = $tmp4015.value;
            if (!$tmp4011) goto $l4016;
            panda$core$Bit $tmp4017 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, f4010->value);
            $tmp4011 = $tmp4017.value;
            $l4016:;
            panda$core$Bit $tmp4018 = { $tmp4011 };
            return $tmp4018;
        }
        break;
        case 1016:
        {
            v4019 = ((org$pandalanguage$pandac$Variable*) p_expr->payload);
            panda$core$Bit $tmp4021 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(v4019->varKind, ((panda$core$Int64) { 10001 }));
            bool $tmp4020 = $tmp4021.value;
            if ($tmp4020) goto $l4022;
            panda$core$Bit $tmp4025 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(v4019->varKind, ((panda$core$Int64) { 10002 }));
            bool $tmp4024 = $tmp4025.value;
            if (!$tmp4024) goto $l4026;
            $tmp4024 = ((panda$core$Bit) { v4019->initialValue != NULL }).value;
            $l4026:;
            panda$core$Bit $tmp4027 = { $tmp4024 };
            bool $tmp4023 = $tmp4027.value;
            if (!$tmp4023) goto $l4028;
            panda$core$Bit $tmp4029 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, v4019->initialValue);
            $tmp4023 = $tmp4029.value;
            $l4028:;
            panda$core$Bit $tmp4030 = { $tmp4023 };
            $tmp4020 = $tmp4030.value;
            $l4022:;
            panda$core$Bit $tmp4031 = { $tmp4020 };
            return $tmp4031;
        }
        break;
        default:
        {
            return ((panda$core$Bit) { false });
        }
    }
}
panda$core$UInt64 org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    org$pandalanguage$pandac$FieldDecl* f4036;
    org$pandalanguage$pandac$Variable* v4038;
    panda$core$Bit $tmp4032 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, p_expr);
    PANDA_ASSERT($tmp4032.value);
    switch (p_expr->kind.value) {
        case 1004:
        {
            return ((panda$core$UInt64$wrapper*) p_expr->payload)->value;
        }
        break;
        case 1010:
        {
            panda$core$Object* $tmp4033 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp4034 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp4033)->children, ((panda$core$Int64) { 0 }));
            panda$core$UInt64 $tmp4035 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self, ((org$pandalanguage$pandac$IRNode*) $tmp4034));
            return $tmp4035;
        }
        break;
        case 1026:
        {
            f4036 = ((org$pandalanguage$pandac$FieldDecl*) p_expr->payload);
            panda$core$UInt64 $tmp4037 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self, f4036->value);
            return $tmp4037;
        }
        break;
        case 1016:
        {
            v4038 = ((org$pandalanguage$pandac$Variable*) p_expr->payload);
            panda$core$UInt64 $tmp4039 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self, v4038->initialValue);
            return $tmp4039;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileMatch$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_m) {
    org$pandalanguage$pandac$IRNode* value4043;
    panda$collections$Array* children4050;
    panda$collections$Iterator* rawWhen$Iter4053;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp4054;
    org$pandalanguage$pandac$ASTNode* rawWhen4067;
    org$pandalanguage$pandac$IRNode* o4073;
    org$pandalanguage$pandac$IRNode* w4075;
    panda$core$Bit $tmp4040 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->kind, ((panda$core$Int64) { 125 }));
    PANDA_ASSERT($tmp4040.value);
    panda$core$Int64 $tmp4041 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
    panda$core$Bit $tmp4042 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp4041, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4042.value);
    panda$core$Object* $tmp4044 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp4045 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4044));
    org$pandalanguage$pandac$IRNode* $tmp4046 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp4045);
    value4043 = $tmp4046;
    if (((panda$core$Bit) { value4043 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp4047 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(value4043->type);
    panda$core$Bit $tmp4048 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4047);
    if ($tmp4048.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp4049 = org$pandalanguage$pandac$Compiler$compileChainedIfMatch$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_m, value4043);
        return $tmp4049;
    }
    }
    panda$collections$Array* $tmp4051 = (panda$collections$Array*) malloc(40);
    $tmp4051->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4051->refCount.value = 1;
    panda$collections$Array$init($tmp4051);
    children4050 = $tmp4051;
    panda$collections$Array$add$panda$collections$Array$T(children4050, ((panda$core$Object*) value4043));
    {
        panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp4054, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
        panda$collections$ImmutableArray* $tmp4055 = panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(p_m->children, $tmp4054);
        ITable* $tmp4056 = ((panda$collections$Iterable*) $tmp4055)->$class->itable;
        while ($tmp4056->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4056 = $tmp4056->next;
        }
        $fn4058 $tmp4057 = $tmp4056->methods[0];
        panda$collections$Iterator* $tmp4059 = $tmp4057(((panda$collections$Iterable*) $tmp4055));
        rawWhen$Iter4053 = $tmp4059;
        $l4060:;
        ITable* $tmp4062 = rawWhen$Iter4053->$class->itable;
        while ($tmp4062->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4062 = $tmp4062->next;
        }
        $fn4064 $tmp4063 = $tmp4062->methods[0];
        panda$core$Bit $tmp4065 = $tmp4063(rawWhen$Iter4053);
        panda$core$Bit $tmp4066 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4065);
        if (!$tmp4066.value) goto $l4061;
        {
            ITable* $tmp4068 = rawWhen$Iter4053->$class->itable;
            while ($tmp4068->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4068 = $tmp4068->next;
            }
            $fn4070 $tmp4069 = $tmp4068->methods[1];
            panda$core$Object* $tmp4071 = $tmp4069(rawWhen$Iter4053);
            rawWhen4067 = ((org$pandalanguage$pandac$ASTNode*) $tmp4071);
            panda$core$Bit $tmp4072 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(rawWhen4067->kind, ((panda$core$Int64) { 127 }));
            if ($tmp4072.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp4074 = org$pandalanguage$pandac$Compiler$compileOtherwise$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, rawWhen4067);
                o4073 = $tmp4074;
                if (((panda$core$Bit) { o4073 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children4050, ((panda$core$Object*) o4073));
                goto $l4060;
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp4076 = org$pandalanguage$pandac$Compiler$compileWhen$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, value4043->type, rawWhen4067);
            w4075 = $tmp4076;
            if (((panda$core$Bit) { w4075 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$Object* $tmp4077 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(w4075->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp4078 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp4077));
            panda$core$Bit $tmp4079 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4078);
            if ($tmp4079.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp4080 = org$pandalanguage$pandac$Compiler$compileChainedIfMatch$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_m, value4043);
                return $tmp4080;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children4050, ((panda$core$Object*) w4075));
        }
        goto $l4060;
        $l4061:;
    }
    org$pandalanguage$pandac$IRNode* $tmp4081 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4081->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4081->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4081, ((panda$core$Int64) { 1042 }), p_m->position, ((panda$collections$ListView*) children4050));
    return $tmp4081;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$IRNode* result4096;
    switch (p_s->kind.value) {
        case 123:
        {
            org$pandalanguage$pandac$IRNode* $tmp4083 = org$pandalanguage$pandac$Compiler$compileAssert$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4083;
        }
        break;
        case 103:
        {
            org$pandalanguage$pandac$IRNode* $tmp4084 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            org$pandalanguage$pandac$IRNode* $tmp4085 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp4084);
            return $tmp4085;
        }
        break;
        case 126:
        {
            org$pandalanguage$pandac$IRNode* $tmp4086 = org$pandalanguage$pandac$Compiler$compileBlock$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4086;
        }
        break;
        case 118:
        {
            org$pandalanguage$pandac$IRNode* $tmp4087 = org$pandalanguage$pandac$Compiler$compileIf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4087;
        }
        break;
        case 119:
        {
            org$pandalanguage$pandac$IRNode* $tmp4088 = org$pandalanguage$pandac$Compiler$compileFor$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4088;
        }
        break;
        case 121:
        {
            org$pandalanguage$pandac$IRNode* $tmp4089 = org$pandalanguage$pandac$Compiler$compileWhile$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4089;
        }
        break;
        case 120:
        {
            org$pandalanguage$pandac$IRNode* $tmp4090 = org$pandalanguage$pandac$Compiler$compileDo$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4090;
        }
        break;
        case 122:
        {
            org$pandalanguage$pandac$IRNode* $tmp4091 = org$pandalanguage$pandac$Compiler$compileLoop$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4091;
        }
        break;
        case 125:
        {
            org$pandalanguage$pandac$IRNode* $tmp4092 = org$pandalanguage$pandac$Compiler$compileMatch$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4092;
        }
        break;
        case 134:
        {
            org$pandalanguage$pandac$IRNode* $tmp4093 = org$pandalanguage$pandac$Compiler$compileBreak$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4093;
        }
        break;
        case 135:
        {
            org$pandalanguage$pandac$IRNode* $tmp4094 = org$pandalanguage$pandac$Compiler$compileContinue$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4094;
        }
        break;
        case 136:
        {
            org$pandalanguage$pandac$IRNode* $tmp4095 = org$pandalanguage$pandac$Compiler$compileReturn$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4095;
        }
        break;
        case 107:
        {
            org$pandalanguage$pandac$IRNode* $tmp4097 = org$pandalanguage$pandac$Compiler$compileCall$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            org$pandalanguage$pandac$IRNode* $tmp4098 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp4097);
            result4096 = $tmp4098;
            if (((panda$core$Bit) { result4096 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp4099 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self, result4096);
                result4096 = $tmp4099;
            }
            }
            return result4096;
        }
        break;
        case 130:
        case 131:
        case 132:
        case 133:
        {
            org$pandalanguage$pandac$IRNode* $tmp4100 = org$pandalanguage$pandac$Compiler$compileVar$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4100;
        }
        break;
    }
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBody$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$SymbolTable* old4101;
    org$pandalanguage$pandac$SymbolTable* symbols4103;
    panda$collections$Iterator* p$Iter4106;
    org$pandalanguage$pandac$MethodDecl$Parameter* p4118;
    panda$collections$Array* fieldInitializers4125;
    panda$collections$Iterator* f$Iter4129;
    org$pandalanguage$pandac$FieldDecl* f4142;
    panda$collections$Array* children4152;
    org$pandalanguage$pandac$IRNode* fieldRef4159;
    org$pandalanguage$pandac$IRNode* compiled4164;
    panda$collections$Array* children4168;
    if (((panda$core$Bit) { p_m->compiledBody != NULL }).value) {
    {
        return p_m->compiledBody;
    }
    }
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_m->owner));
    old4101 = self->symbolTable;
    org$pandalanguage$pandac$SymbolTable* $tmp4102 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, p_m->owner);
    self->symbolTable = $tmp4102;
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentMethod, ((panda$core$Object*) p_m));
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
    PANDA_ASSERT(((panda$core$Bit) { p_m->body != NULL }).value);
    org$pandalanguage$pandac$SymbolTable* $tmp4104 = (org$pandalanguage$pandac$SymbolTable*) malloc(40);
    $tmp4104->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp4104->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp4104, self->symbolTable);
    symbols4103 = $tmp4104;
    {
        ITable* $tmp4107 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp4107->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4107 = $tmp4107->next;
        }
        $fn4109 $tmp4108 = $tmp4107->methods[0];
        panda$collections$Iterator* $tmp4110 = $tmp4108(((panda$collections$Iterable*) p_m->parameters));
        p$Iter4106 = $tmp4110;
        $l4111:;
        ITable* $tmp4113 = p$Iter4106->$class->itable;
        while ($tmp4113->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4113 = $tmp4113->next;
        }
        $fn4115 $tmp4114 = $tmp4113->methods[0];
        panda$core$Bit $tmp4116 = $tmp4114(p$Iter4106);
        panda$core$Bit $tmp4117 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4116);
        if (!$tmp4117.value) goto $l4112;
        {
            ITable* $tmp4119 = p$Iter4106->$class->itable;
            while ($tmp4119->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4119 = $tmp4119->next;
            }
            $fn4121 $tmp4120 = $tmp4119->methods[1];
            panda$core$Object* $tmp4122 = $tmp4120(p$Iter4106);
            p4118 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp4122);
            org$pandalanguage$pandac$Variable* $tmp4123 = (org$pandalanguage$pandac$Variable*) malloc(88);
            $tmp4123->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
            $tmp4123->refCount.value = 1;
            org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Int64($tmp4123, ((org$pandalanguage$pandac$Symbol*) p_m)->position, ((panda$core$Int64) { 10001 }), p4118->name, p4118->type, ((panda$core$Int64) { 1820 }));
            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(symbols4103, ((org$pandalanguage$pandac$Symbol*) $tmp4123));
        }
        goto $l4111;
        $l4112:;
    }
    self->symbolTable = symbols4103;
    panda$collections$Array* $tmp4126 = (panda$collections$Array*) malloc(40);
    $tmp4126->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4126->refCount.value = 1;
    panda$collections$Array$init($tmp4126);
    fieldInitializers4125 = $tmp4126;
    panda$core$Bit $tmp4128 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 59 }));
    if ($tmp4128.value) {
    {
        {
            panda$core$Object* $tmp4130 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
            ITable* $tmp4131 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ClassDecl*) $tmp4130)->fields)->$class->itable;
            while ($tmp4131->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp4131 = $tmp4131->next;
            }
            $fn4133 $tmp4132 = $tmp4131->methods[0];
            panda$collections$Iterator* $tmp4134 = $tmp4132(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ClassDecl*) $tmp4130)->fields));
            f$Iter4129 = $tmp4134;
            $l4135:;
            ITable* $tmp4137 = f$Iter4129->$class->itable;
            while ($tmp4137->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4137 = $tmp4137->next;
            }
            $fn4139 $tmp4138 = $tmp4137->methods[0];
            panda$core$Bit $tmp4140 = $tmp4138(f$Iter4129);
            panda$core$Bit $tmp4141 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4140);
            if (!$tmp4141.value) goto $l4136;
            {
                ITable* $tmp4143 = f$Iter4129->$class->itable;
                while ($tmp4143->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp4143 = $tmp4143->next;
                }
                $fn4145 $tmp4144 = $tmp4143->methods[1];
                panda$core$Object* $tmp4146 = $tmp4144(f$Iter4129);
                f4142 = ((org$pandalanguage$pandac$FieldDecl*) $tmp4146);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self, f4142);
                panda$core$Bit $tmp4148 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(f4142->annotations);
                panda$core$Bit $tmp4149 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4148);
                bool $tmp4147 = $tmp4149.value;
                if (!$tmp4147) goto $l4150;
                $tmp4147 = ((panda$core$Bit) { f4142->value != NULL }).value;
                $l4150:;
                panda$core$Bit $tmp4151 = { $tmp4147 };
                if ($tmp4151.value) {
                {
                    panda$collections$Array* $tmp4153 = (panda$collections$Array*) malloc(40);
                    $tmp4153->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp4153->refCount.value = 1;
                    panda$collections$Array$init($tmp4153);
                    children4152 = $tmp4153;
                    org$pandalanguage$pandac$IRNode* $tmp4155 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp4155->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp4155->refCount.value = 1;
                    panda$core$Object* $tmp4157 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
                    org$pandalanguage$pandac$Type* $tmp4158 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp4157));
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp4155, ((panda$core$Int64) { 1025 }), ((org$pandalanguage$pandac$Symbol*) p_m)->position, $tmp4158);
                    panda$collections$Array$add$panda$collections$Array$T(children4152, ((panda$core$Object*) $tmp4155));
                    org$pandalanguage$pandac$IRNode* $tmp4160 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp4160->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp4160->refCount.value = 1;
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4160, ((panda$core$Int64) { 1026 }), ((org$pandalanguage$pandac$Symbol*) p_m)->position, f4142->type, ((panda$core$Object*) f4142), ((panda$collections$ListView*) children4152));
                    fieldRef4159 = $tmp4160;
                    panda$collections$Array$clear(children4152);
                    panda$collections$Array$add$panda$collections$Array$T(children4152, ((panda$core$Object*) fieldRef4159));
                    panda$collections$Array$add$panda$collections$Array$T(children4152, ((panda$core$Object*) f4142->value));
                    org$pandalanguage$pandac$IRNode* $tmp4162 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp4162->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp4162->refCount.value = 1;
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4162, ((panda$core$Int64) { 1023 }), ((org$pandalanguage$pandac$Symbol*) f4142)->position, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 73 }))), ((panda$collections$ListView*) children4152));
                    panda$collections$Array$add$panda$collections$Array$T(fieldInitializers4125, ((panda$core$Object*) $tmp4162));
                }
                }
            }
            goto $l4135;
            $l4136:;
        }
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp4165 = org$pandalanguage$pandac$Compiler$compileBlock$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_m->body);
    compiled4164 = $tmp4165;
    if (((panda$core$Bit) { compiled4164 != NULL }).value) {
    {
        panda$core$Int64 $tmp4166 = panda$collections$Array$get_count$R$panda$core$Int64(fieldInitializers4125);
        panda$core$Bit $tmp4167 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp4166, ((panda$core$Int64) { 0 }));
        if ($tmp4167.value) {
        {
            panda$collections$Array* $tmp4169 = (panda$collections$Array*) malloc(40);
            $tmp4169->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp4169->refCount.value = 1;
            panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp4169, ((panda$collections$ListView*) fieldInitializers4125));
            children4168 = $tmp4169;
            panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(children4168, ((panda$collections$CollectionView*) compiled4164->children));
            org$pandalanguage$pandac$IRNode* $tmp4171 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp4171->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp4171->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4171, ((panda$core$Int64) { 1000 }), p_m->body->position, ((panda$collections$ListView*) children4168));
            compiled4164 = $tmp4171;
        }
        }
    }
    }
    PANDA_ASSERT(((panda$core$Bit) { ((panda$core$Object*) self->symbolTable) == ((panda$core$Object*) symbols4103) }).value);
    self->symbolTable = old4101;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentMethod);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    panda$core$Bit $tmp4173 = org$pandalanguage$pandac$Annotations$isInline$R$panda$core$Bit(p_m->annotations);
    if ($tmp4173.value) {
    {
        p_m->compiledBody = compiled4164;
    }
    }
    return compiled4164;
}
void org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$IRNode* compiled4174;
    if (((panda$core$Bit) { p_m->body != NULL }).value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp4175 = org$pandalanguage$pandac$Compiler$compileBody$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$IRNode$Q(self, p_m);
        compiled4174 = $tmp4175;
        if (((panda$core$Bit) { compiled4174 != NULL }).value) {
        {
            ITable* $tmp4176 = self->codeGenerator->$class->itable;
            while ($tmp4176->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
                $tmp4176 = $tmp4176->next;
            }
            $fn4178 $tmp4177 = $tmp4176->methods[3];
            $tmp4177(self->codeGenerator, p_m, compiled4174);
        }
        }
    }
    }
    else {
    {
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
        ITable* $tmp4179 = self->codeGenerator->$class->itable;
        while ($tmp4179->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
            $tmp4179 = $tmp4179->next;
        }
        $fn4181 $tmp4180 = $tmp4179->methods[2];
        $tmp4180(self->codeGenerator, p_m);
    }
    }
}
void org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Iterator* inner$Iter4182;
    org$pandalanguage$pandac$ClassDecl* inner4194;
    p_cl->external = ((panda$core$Bit) { false });
    {
        ITable* $tmp4183 = ((panda$collections$Iterable*) p_cl->classes)->$class->itable;
        while ($tmp4183->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4183 = $tmp4183->next;
        }
        $fn4185 $tmp4184 = $tmp4183->methods[0];
        panda$collections$Iterator* $tmp4186 = $tmp4184(((panda$collections$Iterable*) p_cl->classes));
        inner$Iter4182 = $tmp4186;
        $l4187:;
        ITable* $tmp4189 = inner$Iter4182->$class->itable;
        while ($tmp4189->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4189 = $tmp4189->next;
        }
        $fn4191 $tmp4190 = $tmp4189->methods[0];
        panda$core$Bit $tmp4192 = $tmp4190(inner$Iter4182);
        panda$core$Bit $tmp4193 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4192);
        if (!$tmp4193.value) goto $l4188;
        {
            ITable* $tmp4195 = inner$Iter4182->$class->itable;
            while ($tmp4195->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4195 = $tmp4195->next;
            }
            $fn4197 $tmp4196 = $tmp4195->methods[1];
            panda$core$Object* $tmp4198 = $tmp4196(inner$Iter4182);
            inner4194 = ((org$pandalanguage$pandac$ClassDecl*) $tmp4198);
            org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl(self, inner4194);
        }
        goto $l4187;
        $l4188:;
    }
}
void org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$SymbolTable* old4206;
    panda$collections$Iterator* m$Iter4211;
    org$pandalanguage$pandac$MethodDecl* m4223;
    org$pandalanguage$pandac$ClassDecl* next4233;
    PANDA_ASSERT(((panda$core$Bit) { self->compiling == NULL }).value);
    self->compiling = p_cl;
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_cl));
    org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl(self, p_cl);
    panda$core$Bit $tmp4199 = org$pandalanguage$pandac$Annotations$isSpecialize$R$panda$core$Bit(p_cl->annotations);
    if ($tmp4199.value) {
    {
        ITable* $tmp4200 = self->codeGenerator->$class->itable;
        while ($tmp4200->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
            $tmp4200 = $tmp4200->next;
        }
        $fn4202 $tmp4201 = $tmp4200->methods[1];
        $tmp4201(self->codeGenerator, p_cl);
        ITable* $tmp4203 = self->codeGenerator->$class->itable;
        while ($tmp4203->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
            $tmp4203 = $tmp4203->next;
        }
        $fn4205 $tmp4204 = $tmp4203->methods[4];
        $tmp4204(self->codeGenerator, p_cl);
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
        return;
    }
    }
    old4206 = self->symbolTable;
    org$pandalanguage$pandac$SymbolTable* $tmp4207 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, p_cl);
    self->symbolTable = $tmp4207;
    ITable* $tmp4208 = self->codeGenerator->$class->itable;
    while ($tmp4208->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
        $tmp4208 = $tmp4208->next;
    }
    $fn4210 $tmp4209 = $tmp4208->methods[1];
    $tmp4209(self->codeGenerator, p_cl);
    {
        ITable* $tmp4212 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
        while ($tmp4212->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4212 = $tmp4212->next;
        }
        $fn4214 $tmp4213 = $tmp4212->methods[0];
        panda$collections$Iterator* $tmp4215 = $tmp4213(((panda$collections$Iterable*) p_cl->methods));
        m$Iter4211 = $tmp4215;
        $l4216:;
        ITable* $tmp4218 = m$Iter4211->$class->itable;
        while ($tmp4218->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4218 = $tmp4218->next;
        }
        $fn4220 $tmp4219 = $tmp4218->methods[0];
        panda$core$Bit $tmp4221 = $tmp4219(m$Iter4211);
        panda$core$Bit $tmp4222 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4221);
        if (!$tmp4222.value) goto $l4217;
        {
            ITable* $tmp4224 = m$Iter4211->$class->itable;
            while ($tmp4224->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4224 = $tmp4224->next;
            }
            $fn4226 $tmp4225 = $tmp4224->methods[1];
            panda$core$Object* $tmp4227 = $tmp4225(m$Iter4211);
            m4223 = ((org$pandalanguage$pandac$MethodDecl*) $tmp4227);
            org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$MethodDecl(self, m4223);
        }
        goto $l4216;
        $l4217:;
    }
    ITable* $tmp4228 = self->codeGenerator->$class->itable;
    while ($tmp4228->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
        $tmp4228 = $tmp4228->next;
    }
    $fn4230 $tmp4229 = $tmp4228->methods[4];
    $tmp4229(self->codeGenerator, p_cl);
    self->symbolTable = old4206;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    self->compiling = NULL;
    panda$core$Int64 $tmp4231 = panda$collections$Array$get_count$R$panda$core$Int64(self->compilationQueue);
    panda$core$Bit $tmp4232 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp4231, ((panda$core$Int64) { 0 }));
    if ($tmp4232.value) {
    {
        panda$core$Object* $tmp4234 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->compilationQueue, ((panda$core$Int64) { 0 }));
        next4233 = ((org$pandalanguage$pandac$ClassDecl*) $tmp4234);
        panda$collections$Array$removeIndex$panda$core$Int64(self->compilationQueue, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$ClassDecl(self, next4233);
    }
    }
    panda$core$Int64 $tmp4235 = panda$collections$Array$get_count$R$panda$core$Int64(self->compilationQueue);
    panda$core$Bit $tmp4236 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4235, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp4236.value);
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Compiler* self, panda$io$File* p_file) {
    panda$collections$ListView* result4237;
    org$pandalanguage$pandac$ASTNode* parsed4241;
    panda$collections$Iterator* cl$Iter4245;
    org$pandalanguage$pandac$ClassDecl* cl4257;
    panda$core$Object* $tmp4238 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->scans, ((panda$collections$Key*) p_file));
    result4237 = ((panda$collections$ListView*) $tmp4238);
    if (((panda$core$Bit) { result4237 == NULL }).value) {
    {
        panda$core$String* $tmp4239 = panda$io$File$readFully$R$panda$core$String(p_file);
        (($fn4240) self->parser->$class->vtable[2])(self->parser, p_file, $tmp4239);
        org$pandalanguage$pandac$ASTNode* $tmp4243 = (($fn4242) self->parser->$class->vtable[68])(self->parser);
        parsed4241 = $tmp4243;
        if (((panda$core$Bit) { parsed4241 != NULL }).value) {
        {
            panda$collections$ListView* $tmp4244 = org$pandalanguage$pandac$Scanner$scan$panda$io$File$org$pandalanguage$pandac$ASTNode$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(self->scanner, p_file, parsed4241);
            result4237 = $tmp4244;
            {
                ITable* $tmp4246 = ((panda$collections$Iterable*) result4237)->$class->itable;
                while ($tmp4246->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp4246 = $tmp4246->next;
                }
                $fn4248 $tmp4247 = $tmp4246->methods[0];
                panda$collections$Iterator* $tmp4249 = $tmp4247(((panda$collections$Iterable*) result4237));
                cl$Iter4245 = $tmp4249;
                $l4250:;
                ITable* $tmp4252 = cl$Iter4245->$class->itable;
                while ($tmp4252->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp4252 = $tmp4252->next;
                }
                $fn4254 $tmp4253 = $tmp4252->methods[0];
                panda$core$Bit $tmp4255 = $tmp4253(cl$Iter4245);
                panda$core$Bit $tmp4256 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4255);
                if (!$tmp4256.value) goto $l4251;
                {
                    ITable* $tmp4258 = cl$Iter4245->$class->itable;
                    while ($tmp4258->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp4258 = $tmp4258->next;
                    }
                    $fn4260 $tmp4259 = $tmp4258->methods[1];
                    panda$core$Object* $tmp4261 = $tmp4259(cl$Iter4245);
                    cl4257 = ((org$pandalanguage$pandac$ClassDecl*) $tmp4261);
                    panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classes, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) cl4257)->name), ((panda$core$Object*) cl4257));
                }
                goto $l4250;
                $l4251:;
            }
        }
        }
        else {
        {
            panda$collections$Array* $tmp4262 = (panda$collections$Array*) malloc(40);
            $tmp4262->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp4262->refCount.value = 1;
            panda$collections$Array$init($tmp4262);
            result4237 = ((panda$collections$ListView*) $tmp4262);
        }
        }
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->scans, ((panda$collections$Key*) p_file), ((panda$core$Object*) result4237));
    }
    }
    return result4237;
}
void org$pandalanguage$pandac$Compiler$compile$panda$io$File(org$pandalanguage$pandac$Compiler* self, panda$io$File* p_file) {
    panda$collections$ListView* classes4264;
    panda$collections$Iterator* cl$Iter4266;
    org$pandalanguage$pandac$ClassDecl* cl4278;
    panda$collections$ListView* $tmp4265 = org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(self, p_file);
    classes4264 = $tmp4265;
    {
        ITable* $tmp4267 = ((panda$collections$Iterable*) classes4264)->$class->itable;
        while ($tmp4267->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4267 = $tmp4267->next;
        }
        $fn4269 $tmp4268 = $tmp4267->methods[0];
        panda$collections$Iterator* $tmp4270 = $tmp4268(((panda$collections$Iterable*) classes4264));
        cl$Iter4266 = $tmp4270;
        $l4271:;
        ITable* $tmp4273 = cl$Iter4266->$class->itable;
        while ($tmp4273->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4273 = $tmp4273->next;
        }
        $fn4275 $tmp4274 = $tmp4273->methods[0];
        panda$core$Bit $tmp4276 = $tmp4274(cl$Iter4266);
        panda$core$Bit $tmp4277 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4276);
        if (!$tmp4277.value) goto $l4272;
        {
            ITable* $tmp4279 = cl$Iter4266->$class->itable;
            while ($tmp4279->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4279 = $tmp4279->next;
            }
            $fn4281 $tmp4280 = $tmp4279->methods[1];
            panda$core$Object* $tmp4282 = $tmp4280(cl$Iter4266);
            cl4278 = ((org$pandalanguage$pandac$ClassDecl*) $tmp4282);
            org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$ClassDecl(self, cl4278);
        }
        goto $l4271;
        $l4272:;
    }
}
void org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, panda$core$String* p_msg) {
    panda$core$Object* $tmp4283 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
    org$pandalanguage$pandac$Compiler$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$ClassDecl*) $tmp4283)->source, p_position, p_msg);
}
void org$pandalanguage$pandac$Compiler$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$Compiler* self, panda$io$File* p_file, org$pandalanguage$pandac$Position p_pos, panda$core$String* p_msg) {
    if (self->reportErrors.value) {
    {
        panda$core$Int64 $tmp4284 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->errorCount, ((panda$core$Int64) { 1 }));
        self->errorCount = $tmp4284;
        panda$core$String* $tmp4286 = panda$io$File$name$R$panda$core$String(p_file);
        panda$core$String* $tmp4287 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4285, $tmp4286);
        panda$core$String* $tmp4289 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4287, &$s4288);
        panda$core$String* $tmp4290 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp4289, ((panda$core$Object*) wrap_org$pandalanguage$pandac$Position(p_pos)));
        panda$core$String* $tmp4292 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4290, &$s4291);
        panda$core$String* $tmp4293 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4292, p_msg);
        panda$core$String* $tmp4295 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4293, &$s4294);
        panda$io$Console$printLine$panda$core$Object(((panda$core$Object*) $tmp4295));
    }
    }
}
void org$pandalanguage$pandac$Compiler$finish(org$pandalanguage$pandac$Compiler* self) {
    ITable* $tmp4296 = self->codeGenerator->$class->itable;
    while ($tmp4296->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
        $tmp4296 = $tmp4296->next;
    }
    $fn4298 $tmp4297 = $tmp4296->methods[5];
    $tmp4297(self->codeGenerator);
}

