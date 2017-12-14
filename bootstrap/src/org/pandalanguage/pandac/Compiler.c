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
#include "panda/core/Char16.h"
#include "org/pandalanguage/pandac/Compiler/CompileTargetResult.h"
#include "panda/core/SteppedRange.LTpanda/core/Int64.Cpanda/core/Int64.GT.h"


struct { panda$core$Class* cl; ITable* next; void* methods[1]; } org$pandalanguage$pandac$Compiler$_org$pandalanguage$pandac$ErrorReporter = { (panda$core$Class*) &org$pandalanguage$pandac$ErrorReporter$class, NULL, { org$pandalanguage$pandac$Compiler$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String} };

org$pandalanguage$pandac$Compiler$class_type org$pandalanguage$pandac$Compiler$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &org$pandalanguage$pandac$Compiler$_org$pandalanguage$pandac$ErrorReporter, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, org$pandalanguage$pandac$Compiler$addAlias$panda$core$String, org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q, org$pandalanguage$pandac$Compiler$checkGenericParameters$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$Type$Q, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl, org$pandalanguage$pandac$Compiler$resolveMethodCall$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT, org$pandalanguage$pandac$Compiler$exists$panda$io$File$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$getClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q, org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Position$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q, org$pandalanguage$pandac$Compiler$specialize$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q, org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT, org$pandalanguage$pandac$Compiler$signatureMatch$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q, org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q, org$pandalanguage$pandac$Compiler$interfaceMethods$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT, org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable, org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT, org$pandalanguage$pandac$Compiler$addInheritedMethods$org$pandalanguage$pandac$SymbolTable$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT, org$pandalanguage$pandac$Compiler$getMethodReference$org$pandalanguage$pandac$SymbolTable$org$pandalanguage$pandac$IRNode$Q$panda$core$String$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$Compiler$symbolRef$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q, org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64, org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64, org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q, org$pandalanguage$pandac$Compiler$doCoerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$Compiler$callCost$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q, org$pandalanguage$pandac$Compiler$matchMethods$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q, org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$declaredTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$foldInts$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$Compiler$compileIndexedAssignment$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT, org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$IRNode$Q$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT, org$pandalanguage$pandac$Compiler$compilePrefix$panda$core$Int64$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compilePrefix$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileCall$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$String$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileIdentifier$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileRange$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileSelf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileSuper$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileNull$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileBlock$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileIf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileRangeFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileIteratorFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileFor$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileWhile$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileDo$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileLoop$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q, org$pandalanguage$pandac$Compiler$compileDeclaration$org$pandalanguage$pandac$ASTNode$panda$core$Int64$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileBreak$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileContinue$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileReturn$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileAssert$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileVar$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileWhenTest$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileChainedIfWhen$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileChainedIfMatch$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileWhen$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileOtherwise$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64, org$pandalanguage$pandac$Compiler$compileMatch$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileBody$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT, org$pandalanguage$pandac$Compiler$compile$panda$io$File, org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String, org$pandalanguage$pandac$Compiler$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String, org$pandalanguage$pandac$Compiler$finish} };

typedef void (*$fn23)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$Compiler*);
typedef panda$core$Object* (*$fn113)(panda$collections$MapView*, panda$core$Object*);
typedef panda$core$Int64 (*$fn158)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn165)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn206)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn220)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn230)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn238)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn245)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn343)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn349)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn355)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn362)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn368)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn374)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn428)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn434)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn440)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn451)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn457)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn463)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn469)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn475)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn481)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn489)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn495)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn501)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn566)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn572)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn578)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn606)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn638)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn644)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn650)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn669)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn675)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn681)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn707)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn713)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn719)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn771)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn777)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn783)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn792)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn809)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn827)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn833)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn839)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn847)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn853)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn859)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn871)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn877)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn883)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn906)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn912)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn918)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn957)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn963)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn969)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn982)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn988)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn994)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1009)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1015)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1021)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1037)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1043)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1049)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1063)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1069)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1075)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1088)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1094)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1100)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1145)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1151)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1157)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1164)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1170)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1176)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1196)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1202)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1208)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1288)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn1396)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1402)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1408)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1434)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1440)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1446)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1564)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1568)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1571)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1656)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1662)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1668)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1795)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1918)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1924)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1930)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn2020)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2042)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Int64 (*$fn2064)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn2081)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2087)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2093)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn2109)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn2131)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn2205)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2223)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn2294)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn2312)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2318)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2324)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2355)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2361)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2367)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2404)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2410)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2416)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2439)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2445)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2451)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2879)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2885)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2891)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3023)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3029)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3035)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn3136)(panda$core$Object*);
typedef panda$core$Int64 (*$fn3247)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn3263)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3269)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3275)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3390)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3396)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3402)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3612)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3618)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3624)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3759)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3765)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3771)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3801)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3807)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3813)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3924)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3930)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3936)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4082)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4088)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4094)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4177)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4183)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4189)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4240)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4246)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4252)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4316)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4322)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4328)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4367)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4373)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4379)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4391)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4397)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4403)(panda$collections$Iterator*);
typedef void (*$fn4434)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$MethodDecl*, org$pandalanguage$pandac$IRNode*);
typedef void (*$fn4437)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$collections$Iterator* (*$fn4441)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4447)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4453)(panda$collections$Iterator*);
typedef void (*$fn4458)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn4461)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn4466)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$collections$Iterator* (*$fn4470)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4476)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4482)(panda$collections$Iterator*);
typedef void (*$fn4486)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn4496)(org$pandalanguage$pandac$parser$Parser*, panda$io$File*, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn4498)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$collections$Iterator* (*$fn4504)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4510)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4516)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4525)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4531)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4537)(panda$collections$Iterator*);
typedef void (*$fn4553)(org$pandalanguage$pandac$CodeGenerator*);

static panda$core$String $s26 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x69\x6C\x74\x69\x6E\x5F\x62\x69\x74", 11, -6555968936556617710, NULL };
static panda$core$String $s37 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x49\x6E\x74", 3, 1786200, NULL };
static panda$core$String $s38 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74\x36\x34", 16, -4218233432987190369, NULL };
static panda$core$String $s40 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x41\x72\x72\x61\x79", 23, 4189143066065790879, NULL };
static panda$core$String $s41 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x43\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E", 28, 2859598962617493300, NULL };
static panda$core$String $s42 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x43\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x56\x69\x65\x77", 32, 608517271074877699, NULL };
static panda$core$String $s43 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x43\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x57\x72\x69\x74\x65\x72", 34, -9068070593840742067, NULL };
static panda$core$String $s44 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x49\x64\x65\x6E\x74\x69\x74\x79\x4D\x61\x70", 29, -1297284844070118424, NULL };
static panda$core$String $s45 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x49\x6D\x6D\x75\x74\x61\x62\x6C\x65\x41\x72\x72\x61\x79", 32, 4042060440237596131, NULL };
static panda$core$String $s46 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x49\x74\x65\x72\x61\x62\x6C\x65", 26, 1346324154505061576, NULL };
static panda$core$String $s47 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x49\x74\x65\x72\x61\x74\x6F\x72", 26, 1346324154505245510, NULL };
static panda$core$String $s48 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x4B\x65\x79", 21, -4500515327555727959, NULL };
static panda$core$String $s49 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x4C\x69\x73\x74", 22, 6616553759611337156, NULL };
static panda$core$String $s50 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x4C\x69\x73\x74\x56\x69\x65\x77", 26, 1346634265727302291, NULL };
static panda$core$String $s51 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x4C\x69\x73\x74\x57\x72\x69\x74\x65\x72", 28, -5808190217954538403, NULL };
static panda$core$String $s52 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x48\x61\x73\x68\x4D\x61\x70", 25, -7657594595818158330, NULL };
static panda$core$String $s53 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x4D\x61\x70", 21, -4500515327555707970, NULL };
static panda$core$String $s54 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x4D\x61\x70\x56\x69\x65\x77", 25, -7657589288547845907, NULL };
static panda$core$String $s55 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x4D\x61\x70\x57\x72\x69\x74\x65\x72", 27, 6892819694825741479, NULL };
static panda$core$String $s56 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x53\x65\x74", 21, -4500515327555646356, NULL };
static panda$core$String $s57 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x53\x70\x65\x63\x69\x61\x6C\x69\x7A\x65\x64\x41\x72\x72\x61\x79", 34, 3135313918436209288, NULL };
static panda$core$String $s58 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x53\x74\x61\x63\x6B", 23, 4189143067940765470, NULL };
static panda$core$String $s59 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x43\x6C\x61\x73\x73", 16, -4218233433613800972, NULL };
static panda$core$String $s60 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x42\x69\x74", 14, -8202984937925717763, NULL };
static panda$core$String $s61 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x43\x68\x61\x72\x38", 16, -4218233433617922336, NULL };
static panda$core$String $s62 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x43\x68\x61\x72\x31\x36", 17, -1766463100090469421, NULL };
static panda$core$String $s63 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x43\x68\x61\x72\x33\x32", 17, -1766463100090469223, NULL };
static panda$core$String $s64 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x43\x6F\x6D\x70\x61\x72\x61\x62\x6C\x65", 21, -5254568576296725552, NULL };
static panda$core$String $s65 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x45\x71\x75\x61\x74\x61\x62\x6C\x65", 20, 3987957135724734002, NULL };
static panda$core$String $s66 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74\x38", 15, 1602004586439591825, NULL };
static panda$core$String $s67 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74\x31\x36", 16, -4218233432987190872, NULL };
static panda$core$String $s68 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74\x33\x32", 16, -4218233432987190674, NULL };
static panda$core$String $s69 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74\x36\x34", 16, -4218233432987190369, NULL };
static panda$core$String $s70 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6D\x6D\x75\x74\x61\x62\x6C\x65", 20, 4030834267849819614, NULL };
static panda$core$String $s71 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x4D\x75\x74\x61\x62\x6C\x65\x53\x74\x72\x69\x6E\x67", 24, -1180377191894570377, NULL };
static panda$core$String $s72 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x4F\x62\x6A\x65\x63\x74", 17, -1766462974584480607, NULL };
static panda$core$String $s73 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x50\x61\x6E\x64\x61", 16, -4218233432272217990, NULL };
static panda$core$String $s74 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x52\x61\x6E\x67\x65", 16, -4218233432064096881, NULL };
static panda$core$String $s75 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x53\x69\x6D\x70\x6C\x65\x52\x61\x6E\x67\x65", 22, -5809978584159753927, NULL };
static panda$core$String $s76 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6E\x67\x65", 23, -7661850693661404164, NULL };
static panda$core$String $s77 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x53\x74\x72\x69\x6E\x67", 17, -1766462930662707075, NULL };
static panda$core$String $s78 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x53\x79\x73\x74\x65\x6D", 17, -1766462930141263461, NULL };
static panda$core$String $s79 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x55\x49\x6E\x74\x38", 16, -4218233431776641634, NULL };
static panda$core$String $s80 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x55\x49\x6E\x74\x31\x36", 17, -1766462914121118519, NULL };
static panda$core$String $s81 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x55\x49\x6E\x74\x33\x32", 17, -1766462914121118321, NULL };
static panda$core$String $s82 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x55\x49\x6E\x74\x36\x34", 17, -1766462914121118016, NULL };
static panda$core$String $s83 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x56\x61\x6C\x75\x65", 16, -4218233431647874265, NULL };
static panda$core$String $s84 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x6D\x61\x74\x68\x2E\x52\x61\x6E\x64\x6F\x6D", 17, -791852923676021540, NULL };
static panda$core$String $s85 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x6D\x61\x74\x68\x2E\x58\x6F\x72\x53\x68\x69\x66\x74\x31\x32\x38\x50\x6C\x75\x73", 26, 215641961116556169, NULL };
static panda$core$String $s86 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x69\x6F\x2E\x43\x6F\x6E\x73\x6F\x6C\x65", 16, 2336552278051400340, NULL };
static panda$core$String $s87 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x69\x6F\x2E\x46\x69\x6C\x65", 13, 4119532389314393493, NULL };
static panda$core$String $s88 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x69\x6F\x2E\x49\x6E\x64\x65\x6E\x74\x65\x64\x4F\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6D", 29, 1042140495667569485, NULL };
static panda$core$String $s89 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x69\x6F\x2E\x49\x6E\x70\x75\x74\x53\x74\x72\x65\x61\x6D", 20, -2955417606099851271, NULL };
static panda$core$String $s90 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x69\x6F\x2E\x4C\x69\x6E\x65\x4E\x75\x6D\x62\x65\x72\x49\x6E\x70\x75\x74\x53\x74\x72\x65\x61\x6D", 30, 6529214259521028726, NULL };
static panda$core$String $s91 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x69\x6F\x2E\x4D\x65\x6D\x6F\x72\x79\x49\x6E\x70\x75\x74\x53\x74\x72\x65\x61\x6D", 26, -2754778238192978458, NULL };
static panda$core$String $s92 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x69\x6F\x2E\x4D\x65\x6D\x6F\x72\x79\x4F\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6D", 27, -1871907680230610725, NULL };
static panda$core$String $s93 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x69\x6F\x2E\x4F\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6D", 21, -3689739765115213222, NULL };
static panda$core$String $s94 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x69\x6F\x2E\x50\x75\x73\x68\x62\x61\x63\x6B\x49\x6E\x70\x75\x74\x53\x74\x72\x65\x61\x6D", 28, -1415712807475310042, NULL };
static panda$core$String $s95 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s99 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s121 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s127 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s143 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s170 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s171 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, 216, NULL };
static panda$core$String $s172 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s174 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x65\x78\x70\x65\x63\x74\x65\x64\x20", 11, 5549333425848529514, NULL };
static panda$core$String $s177 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x67\x65\x6E\x65\x72\x69\x63\x20\x70\x61\x72\x61\x6D\x65\x74\x65\x72", 18, 754488464303810091, NULL };
static panda$core$String $s180 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x62\x75\x74\x20", 6, 1527396680240, NULL };
static panda$core$String $s182 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x6F\x75\x6E\x64\x20", 6, 2145222783673, NULL };
static panda$core$String $s184 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s224 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x65\x6E\x65\x72\x69\x63\x20\x70\x61\x72\x61\x6D\x65\x74\x65\x72\x20\x27", 19, -7104957698969262010, NULL };
static panda$core$String $s226 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s233 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20", 10, 5900311425897229264, NULL };
static panda$core$String $s235 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6F\x66\x20\x74\x79\x70\x65\x20\x27", 9, 2306627197047234467, NULL };
static panda$core$String $s241 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 14, 2262695563077912654, NULL };
static panda$core$String $s248 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s272 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x6B\x6E\x6F\x77\x6E\x20\x74\x79\x70\x65\x20\x27", 14, 1254433276954177894, NULL };
static panda$core$String $s274 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s287 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3F", 1, 164, NULL };
static panda$core$String $s303 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s322 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s382 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x74\x65\x72\x66\x61\x63\x65\x20\x27", 11, 2825576507357767077, NULL };
static panda$core$String $s384 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x65\x78\x74\x65\x6E\x64\x20\x63\x6C\x61\x73\x73\x20", 22, -8406128752343392811, NULL };
static panda$core$String $s386 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s388 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s393 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x75\x70\x65\x72\x63\x6C\x61\x73\x73\x20\x27", 12, 3706067405940886645, NULL };
static panda$core$String $s395 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x6F\x66\x20\x63\x6C\x61\x73\x73\x20\x27", 12, -633030867692887714, NULL };
static panda$core$String $s398 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20", 10, 5900311425897229264, NULL };
static panda$core$String $s400 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x69\x73\x74\x65\x64\x20\x62\x65\x66\x6F\x72\x65\x20\x61\x6E\x79\x20\x73\x75\x70\x65\x72\x69\x6E\x74\x65\x72\x66\x61\x63\x65\x73", 33, 4787050402069409712, NULL };
static panda$core$String $s402 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6C\x61\x73\x73\x20\x27", 7, 213449334494206, NULL };
static panda$core$String $s404 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x68\x61\x73\x20\x6D\x6F\x72\x65\x20\x74\x68\x61\x6E\x20\x6F\x6E\x65\x20\x73\x75\x70\x65\x72\x63\x6C\x61\x73\x73", 30, -759923653827872275, NULL };
static panda$core$String $s409 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x4F\x62\x6A\x65\x63\x74", 17, -1766462974584480607, NULL };
static panda$core$String $s420 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x56\x61\x6C\x75\x65", 16, -4218233431647874265, NULL };
static panda$core$String $s512 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x6F\x76\x65\x72\x72\x69\x64\x65\x73\x20", 11, 1426563750390550596, NULL };
static panda$core$String $s516 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s518 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x74\x20\x69\x73\x20\x6E\x6F\x74\x20\x6D\x61\x72\x6B\x65\x64\x20\x40\x6F\x76\x65\x72\x72\x69\x64\x65", 27, -5223536864783252703, NULL };
static panda$core$String $s527 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x6F\x76\x65\x72\x72\x69\x64\x65\x73\x20", 11, 1426563750390550596, NULL };
static panda$core$String $s531 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s533 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x74\x20\x6D\x65\x74\x68\x6F\x64\x73\x20\x63\x61\x6E\x6E\x6F\x74\x20\x6F\x76\x65\x72\x72\x69\x64\x65\x20\x66\x75\x6E\x63\x74\x69\x6F\x6E\x73", 37, 7193225585860914176, NULL };
static panda$core$String $s538 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x69\x73\x20\x6D\x61\x72\x6B\x65\x64\x20\x40\x6F\x76\x65\x72\x72\x69\x64\x65\x2C\x20\x62\x75\x74\x20\x6E\x6F\x20\x6D\x61\x74\x63\x68\x69\x6E\x67\x20", 38, -6085226934842474132, NULL };
static panda$core$String $s540 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6D\x65\x74\x68\x6F\x64\x20\x65\x78\x69\x73\x74\x73\x20\x61\x6D\x6F\x6E\x67\x20\x69\x74\x73\x20\x61\x6E\x63\x65\x73\x74\x6F\x72\x73", 33, -5331763662845728394, NULL };
static panda$core$String $s549 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x69\x65\x6C\x64\x20\x68\x61\x73\x20\x6E\x65\x69\x74\x68\x65\x72\x20\x61\x20\x74\x79\x70\x65\x20\x6E\x6F\x72\x20\x61\x20\x76\x61\x6C\x75\x65", 36, 5735293162260763604, NULL };
static panda$core$String $s600 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x6F\x20\x6F\x72\x20\x61\x6D\x62\x69\x67\x75\x6F\x75\x73\x20\x6D\x61\x74\x63\x68\x20\x6F\x6E\x20\x6D\x65\x74\x68\x6F\x64\x20\x63\x61\x6C\x6C\x20\x28", 38, 3392199122829501018, NULL };
static panda$core$String $s602 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s609 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s612 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s614 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x6B\x6E\x6F\x77\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 18, 1104129620483010492, NULL };
static panda$core$String $s616 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x73\x75\x70\x65\x72\x27\x20\x63\x61\x6E\x20\x6F\x6E\x6C\x79\x20\x62\x65\x20\x75\x73\x65\x64\x20\x61\x73\x20\x70\x61\x72\x74\x20\x6F\x66\x20\x61\x20\x6D\x65\x74\x68\x6F\x64\x20\x63\x61\x6C\x6C", 49, 5687166824689512368, NULL };
static panda$core$String $s621 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x56\x61\x6C\x75\x65", 16, -4218233431647874265, NULL };
static panda$core$String $s660 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s661 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, 148, NULL };
static panda$core$String $s663 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x70\x61\x6E\x64\x61", 6, 1556740610063, NULL };
static panda$core$String $s688 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s698 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s699 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, 148, NULL };
static panda$core$String $s701 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x70\x61\x6E\x64\x61", 6, 1556740610063, NULL };
static panda$core$String $s731 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x66\x69\x6C\x65\x20\x27", 15, -3519420271001816814, NULL };
static panda$core$String $s733 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x74\x6F\x20\x63\x6F\x6E\x74\x61\x69\x6E\x20\x61\x20\x63\x6C\x61\x73\x73\x20\x6E\x61\x6D\x65\x64\x20\x27", 28, 3445503135242247770, NULL };
static panda$core$String $s736 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s739 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x6F\x20\x66\x69\x6C\x65\x20\x6E\x61\x6D\x65\x64\x20", 14, 8876718408773305983, NULL };
static panda$core$String $s741 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x69\x6E\x20\x61\x6E\x79\x20\x69\x6D\x70\x6F\x72\x74\x20\x70\x61\x74\x68\x20\x28", 21, 3105450433703869576, NULL };
static panda$core$String $s744 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s746 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x69\x6E\x74\x5F\x6C\x69\x74\x65\x72\x61\x6C", 12, -6710647184408424492, NULL };
static panda$core$String $s1238 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x73\x75\x70\x65\x72\x27\x20\x63\x61\x6E\x20\x6F\x6E\x6C\x79\x20\x62\x65\x20\x75\x73\x65\x64\x20\x61\x73\x20\x70\x61\x72\x74\x20\x6F\x66\x20\x61\x20\x6D\x65\x74\x68\x6F\x64\x20\x63\x61\x6C\x6C", 49, 5687166824689512368, NULL };
static panda$core$String $s1283 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s1365 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 19485, NULL };
static panda$core$String $s1646 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 19485, NULL };
static panda$core$String $s1825 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27", 10, 875040426634827830, NULL };
static panda$core$String $s1827 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 14, 2262695563077912654, NULL };
static panda$core$String $s1830 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1855 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27", 10, 875040426634827830, NULL };
static panda$core$String $s1857 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 14, 2262695563077912654, NULL };
static panda$core$String $s1860 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1893 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 19485, NULL };
static panda$core$String $s1952 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27", 10, 875040426634827830, NULL };
static panda$core$String $s1954 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 14, 2262695563077912654, NULL };
static panda$core$String $s1957 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1997 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6C\x75\x65\x20\x6F\x66\x20\x74\x79\x70\x65\x20\x27", 15, -1620219380461029456, NULL };
static panda$core$String $s1999 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x70\x6F\x73\x73\x69\x62\x6C\x79\x20\x62\x65\x20\x61\x6E\x20\x69\x6E\x73\x74\x61\x6E\x63\x65\x20\x6F\x66\x20", 36, -427166674877421096, NULL };
static panda$core$String $s2001 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2003 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2115 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2116 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, 216, NULL };
static panda$core$String $s2119 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x65\x78\x70\x65\x63\x74\x65\x64\x20", 10, -1007140463547215113, NULL };
static panda$core$String $s2123 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x61\x72\x67\x75\x6D\x65\x6E\x74", 9, 1450721239526715900, NULL };
static panda$core$String $s2126 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2128 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x74\x20\x72\x65\x63\x65\x69\x76\x65\x64\x20", 13, -1301083486074551925, NULL };
static panda$core$String $s2134 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2158 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x64\x69\x72\x65\x63\x74\x6C\x79\x20\x63\x61\x6C\x6C\x20\x27\x69\x6E\x69\x74\x27\x20\x6F\x75\x74\x73\x69\x64\x65\x20\x6F\x66\x20\x61\x6E\x20\x69\x6E\x69\x74\x20\x6D\x65\x74\x68\x6F\x64", 53, 84993564105955720, NULL };
static panda$core$String $s2168 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x69\x6E\x69\x74\x27\x20\x6D\x61\x79\x20\x6F\x6E\x6C\x79\x20\x62\x65\x20\x63\x61\x6C\x6C\x65\x64\x20\x6F\x6E\x20\x27\x73\x65\x6C\x66\x27\x20\x6F\x72\x20\x27\x73\x75\x70\x65\x72\x27", 46, 5737688576853633111, NULL };
static panda$core$String $s2183 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x63\x61\x6C\x6C\x20\x69\x6E\x73\x74\x61\x6E\x63\x65\x20", 21, -1285496544752055923, NULL };
static panda$core$String $s2186 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x66\x72\x6F\x6D\x20\x61\x20\x40\x63\x6C\x61\x73\x73\x20\x63\x6F\x6E\x74\x65\x78\x74", 22, 6236893689928691337, NULL };
static panda$core$String $s2197 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x63\x61\x6C\x6C\x20\x63\x6C\x61\x73\x73\x20", 18, 4176321021903236102, NULL };
static panda$core$String $s2200 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x6F\x6E\x20\x61\x6E\x20\x69\x6E\x73\x74\x61\x6E\x63\x65", 15, 4946791728819903386, NULL };
static panda$core$String $s2236 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s2255 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6C\x61\x73\x73\x20\x27", 7, 213449334494206, NULL };
static panda$core$String $s2257 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x64\x6F\x65\x73\x20\x6E\x6F\x74\x20\x68\x61\x76\x65\x20\x61\x20\x6D\x65\x6D\x62\x65\x72\x20\x6E\x61\x6D\x65\x64\x20\x27", 32, -5677460192622646983, NULL };
static panda$core$String $s2260 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2267 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2269 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s2272 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x69\x73\x20\x6E\x6F\x74\x20\x61\x20\x6D\x65\x74\x68\x6F\x64", 17, 1918101523522592587, NULL };
static panda$core$String $s2299 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x6F\x20\x6D\x61\x74\x63\x68\x20\x66\x6F\x72\x20\x63\x61\x6C\x6C\x20\x74\x6F\x20\x27", 22, 7814600009206081200, NULL };
static panda$core$String $s2301 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s2304 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2308 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2326 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2327 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x27", 2, 14381, NULL };
static panda$core$String $s2328 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x77\x69\x74\x68\x20\x72\x65\x74\x75\x72\x6E\x20\x74\x79\x70\x65\x20\x27", 19, -3030064837581027794, NULL };
static panda$core$String $s2330 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2378 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x69\x74", 4, 213374837, NULL };
static panda$core$String $s2388 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6C\x75\x65\x20\x6F\x66\x20\x74\x79\x70\x65\x20\x27", 15, -1620219380461029456, NULL };
static panda$core$String $s2390 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x69\x73\x20\x6E\x6F\x74\x20\x61\x20\x6D\x65\x74\x68\x6F\x64", 17, 1918101523522592587, NULL };
static panda$core$String $s2398 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2400 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2418 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2421 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x3E\x28", 4, 146931305, NULL };
static panda$core$String $s2422 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x26\x3E\x28", 5, 14839819243, NULL };
static panda$core$String $s2435 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2453 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2456 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x3E\x28", 4, 146931305, NULL };
static panda$core$String $s2457 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x26\x3E\x28", 5, 14839819243, NULL };
static panda$core$String $s2474 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2B", 1, 144, NULL };
static panda$core$String $s2475 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D", 1, 146, NULL };
static panda$core$String $s2476 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 143, NULL };
static panda$core$String $s2477 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, 148, NULL };
static panda$core$String $s2478 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F\x2F", 2, 14995, NULL };
static panda$core$String $s2479 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 138, NULL };
static panda$core$String $s2480 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5E", 1, 195, NULL };
static panda$core$String $s2481 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3D", 1, 162, NULL };
static panda$core$String $s2482 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x3D", 2, 13595, NULL };
static panda$core$String $s2483 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 163, NULL };
static panda$core$String $s2484 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 161, NULL };
static panda$core$String $s2485 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E\x3D", 2, 16524, NULL };
static panda$core$String $s2486 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x3D", 2, 16322, NULL };
static panda$core$String $s2487 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1, 225, NULL };
static panda$core$String $s2488 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C\x7C", 2, 22849, NULL };
static panda$core$String $s2489 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s2490 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26\x26", 2, 14077, NULL };
static panda$core$String $s2491 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7E", 1, 227, NULL };
static panda$core$String $s2492 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7E\x7E", 2, 23053, NULL };
static panda$core$String $s2493 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21", 1, 134, NULL };
static panda$core$String $s2494 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x21", 2, 13567, NULL };
static panda$core$String $s2495 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x3C", 2, 16321, NULL };
static panda$core$String $s2496 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E\x3E", 2, 16525, NULL };
static panda$core$String $s2497 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 19485, NULL };
static panda$core$String $s2498 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A\x3D", 2, 16120, NULL };
static panda$core$String $s2499 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3D\x3D", 2, 16423, NULL };
static panda$core$String $s2500 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x3D\x3D", 3, 1373156, NULL };
static panda$core$String $s2611 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x76\x61\x6C\x69\x64\x20\x6E\x75\x6D\x65\x72\x69\x63\x20\x6F\x70\x65\x72\x61\x74\x69\x6F\x6E", 25, 9019145596080302696, NULL };
static panda$core$String $s2623 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D\x3A\x3D", 4, 198772404, NULL };
static panda$core$String $s2671 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6F\x6E\x76\x65\x72\x74", 7, 213482220537370, NULL };
static panda$core$String $s2675 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D\x3A\x3D", 4, 198772404, NULL };
static panda$core$String $s2773 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2776 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x6F\x70\x65\x72\x61\x74\x65\x20\x6F\x6E\x20\x27", 21, -3266050109438970469, NULL };
static panda$core$String $s2779 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20", 3, 1432616, NULL };
static panda$core$String $s2781 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2783 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2790 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2793 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x6F\x70\x65\x72\x61\x74\x65\x20\x6F\x6E\x20\x27", 21, -3266050109438970469, NULL };
static panda$core$String $s2796 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20", 3, 1432616, NULL };
static panda$core$String $s2798 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2800 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2822 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x61\x73\x73\x69\x67\x6E\x20\x74\x6F\x20\x74\x68\x69\x73\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6F\x6E", 32, -4891466264852316840, NULL };
static panda$core$String $s2834 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x61\x73\x73\x69\x67\x6E\x20\x74\x6F\x20\x74\x68\x69\x73\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6F\x6E", 32, -4891466264852316840, NULL };
static panda$core$String $s2851 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6F\x6E\x76\x65\x72\x74", 7, 213482220537370, NULL };
static panda$core$String $s2864 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 19485, NULL };
static panda$core$String $s2933 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2936 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x6F\x70\x65\x72\x61\x74\x65\x20\x6F\x6E\x20\x27", 21, -3266050109438970469, NULL };
static panda$core$String $s2939 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20\x27", 4, 144694255, NULL };
static panda$core$String $s2942 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3056 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x6D\x65\x74\x68\x6F\x64\x3E", 8, 17378158564789264, NULL };
static panda$core$String $s3072 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6E\x75\x6D\x62\x65\x72\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 30, 5304221197101987767, NULL };
static panda$core$String $s3074 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3082 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6E\x75\x6D\x62\x65\x72\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 30, 5304221197101987767, NULL };
static panda$core$String $s3084 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3138 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s3141 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3160 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6C\x61\x73\x73\x20\x27", 7, 213449334494206, NULL };
static panda$core$String $s3162 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x64\x6F\x65\x73\x20\x6E\x6F\x74\x20\x68\x61\x76\x65\x20\x61\x20\x6D\x65\x6D\x62\x65\x72\x20\x6E\x61\x6D\x65\x64\x20\x27", 32, -5677460192622646983, NULL };
static panda$core$String $s3165 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3232 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x75\x6E\x72\x65\x73\x6F\x6C\x76\x65\x64\x20\x72\x61\x6E\x67\x65\x3E", 18, -1293962867859660245, NULL };
static panda$core$String $s3241 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x72\x65\x66\x65\x72\x65\x6E\x63\x65\x20\x27\x73\x65\x6C\x66\x27\x20\x66\x72\x6F\x6D\x20\x61\x20\x40\x63\x6C\x61\x73\x73\x20\x6D\x65\x74\x68\x6F\x64", 44, -511889306060728385, NULL };
static panda$core$String $s3259 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3282 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s3285 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3289 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3300 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x72\x65\x66\x65\x72\x65\x6E\x63\x65\x20\x27\x73\x75\x70\x65\x72\x27\x20\x66\x72\x6F\x6D\x20\x61\x20\x40\x63\x6C\x61\x73\x73\x20\x6D\x65\x74\x68\x6F\x64", 45, 3734810722724983720, NULL };
static panda$core$String $s3308 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s3332 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6C\x75\x65\x20\x6F\x66\x20\x74\x79\x70\x65\x20\x27", 15, -1620219380461029456, NULL };
static panda$core$String $s3334 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x70\x6F\x73\x73\x69\x62\x6C\x79\x20\x62\x65\x20\x61\x6E\x20\x69\x6E\x73\x74\x61\x6E\x63\x65\x20\x6F\x66\x20", 36, -427166674877421096, NULL };
static panda$core$String $s3336 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3338 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3365 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x64\x6F\x65\x73\x20\x6E\x6F\x74\x20\x72\x65\x74\x75\x72\x6E\x20\x61\x20\x76\x61\x6C\x75\x65", 24, -3977552604268313933, NULL };
static panda$core$String $s3513 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 161, NULL };
static panda$core$String $s3517 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 163, NULL };
static panda$core$String $s3522 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x49\x74\x65\x72", 5, 14332680541, NULL };
static panda$core$String $s3545 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x65\x74\x5F\x64\x6F\x6E\x65", 8, 21980003879763538, NULL };
static panda$core$String $s3550 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21", 1, 134, NULL };
static panda$core$String $s3562 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x65\x78\x74", 4, 218436048, NULL };
static panda$core$String $s3648 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x74\x65\x72\x61\x74\x6F\x72", 8, 22210198075044275, NULL };
static panda$core$String $s3656 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6E\x20\x49\x74\x65\x72\x61\x62\x6C\x65\x20\x6F\x72\x20\x49\x74\x65\x72\x61\x74\x6F\x72\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 45, 562271959045909027, NULL };
static panda$core$String $s3658 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3721 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x63\x6C\x61\x72\x61\x74\x69\x6F\x6E\x20\x68\x61\x73\x20\x6E\x65\x69\x74\x68\x65\x72\x20\x61\x20\x74\x79\x70\x65\x20\x6E\x6F\x72\x20\x61\x20\x76\x61\x6C\x75\x65", 42, 71025131614347466, NULL };
static panda$core$String $s3782 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x62\x72\x65\x61\x6B\x20", 7, 149654778879689, NULL };
static panda$core$String $s3784 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20\x69\x6E\x73\x69\x64\x65\x20\x61\x20\x6C\x6F\x6F\x70\x20\x6C\x61\x62\x65\x6C\x6C\x65\x64\x20", 33, 5869484791969643332, NULL };
static panda$core$String $s3786 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3788 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A\x27", 2, 16098, NULL };
static panda$core$String $s3793 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x62\x72\x65\x61\x6B\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20\x69\x6E\x73\x69\x64\x65\x20\x61\x20\x6C\x6F\x6F\x70", 29, -2107280000252113069, NULL };
static panda$core$String $s3824 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x63\x6F\x6E\x74\x69\x6E\x75\x65\x20", 10, 6626032424543403513, NULL };
static panda$core$String $s3826 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20\x69\x6E\x73\x69\x64\x65\x20\x61\x20\x6C\x6F\x6F\x70\x20\x6C\x61\x62\x65\x6C\x6C\x65\x64\x20", 33, 5869484791969643332, NULL };
static panda$core$String $s3828 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3830 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A\x27", 2, 16098, NULL };
static panda$core$String $s3835 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x63\x6F\x6E\x74\x69\x6E\x75\x65\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20\x69\x6E\x73\x69\x64\x65\x20\x61\x20\x6C\x6F\x6F\x70", 32, -6048052453244835837, NULL };
static panda$core$String $s3849 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x72\x65\x74\x75\x72\x6E\x20\x61\x20\x76\x61\x6C\x75\x65\x20\x66\x72\x6F\x6D\x20\x61\x20\x6D\x65\x74\x68\x6F\x64\x20\x77\x69\x74\x68\x20\x6E\x6F\x20\x72\x65\x74\x75\x72\x6E\x20\x74\x79\x70\x65", 55, -6755143087675264705, NULL };
static panda$core$String $s3863 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x72\x65\x74\x75\x72\x6E\x20\x76\x61\x6C\x75\x65", 23, 6159277012237708805, NULL };
static panda$core$String $s3883 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6C\x75\x65", 5, 22890280642, NULL };
static panda$core$String $s3950 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3D", 1, 162, NULL };
static panda$core$String $s3987 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1, 225, NULL };
static panda$core$String $s4038 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x6D\x61\x74\x63\x68\x24", 7, 146584075981198, NULL };
static panda$core$String $s4040 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5F", 1, 196, NULL };
static panda$core$String $s4043 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4543 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A", 1, 159, NULL };
static panda$core$String $s4546 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A\x20\x65\x72\x72\x6F\x72\x3A\x20", 9, 1725281418740475535, NULL };
static panda$core$String $s4549 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };

void org$pandalanguage$pandac$Compiler$init$org$pandalanguage$pandac$CodeGenerator$org$pandalanguage$pandac$Compiler$Settings(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$CodeGenerator* p_codeGenerator, org$pandalanguage$pandac$Compiler$Settings* p_settings) {
    org$pandalanguage$pandac$Position $tmp39;
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
    org$pandalanguage$pandac$Alias* $tmp35 = (org$pandalanguage$pandac$Alias*) malloc(64);
    $tmp35->$class = (panda$core$Class*) &org$pandalanguage$pandac$Alias$class;
    $tmp35->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp39);
    org$pandalanguage$pandac$Alias$init$panda$core$String$panda$core$String$org$pandalanguage$pandac$Position($tmp35, &$s37, &$s38, $tmp39);
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->root, ((org$pandalanguage$pandac$Symbol*) $tmp35));
    org$pandalanguage$pandac$Compiler$addAlias$panda$core$String(self, &$s40);
    org$pandalanguage$pandac$Compiler$addAlias$panda$core$String(self, &$s41);
    org$pandalanguage$pandac$Compiler$addAlias$panda$core$String(self, &$s42);
    org$pandalanguage$pandac$Compiler$addAlias$panda$core$String(self, &$s43);
    org$pandalanguage$pandac$Compiler$addAlias$panda$core$String(self, &$s44);
    org$pandalanguage$pandac$Compiler$addAlias$panda$core$String(self, &$s45);
    org$pandalanguage$pandac$Compiler$addAlias$panda$core$String(self, &$s46);
    org$pandalanguage$pandac$Compiler$addAlias$panda$core$String(self, &$s47);
    org$pandalanguage$pandac$Compiler$addAlias$panda$core$String(self, &$s48);
    org$pandalanguage$pandac$Compiler$addAlias$panda$core$String(self, &$s49);
    org$pandalanguage$pandac$Compiler$addAlias$panda$core$String(self, &$s50);
    org$pandalanguage$pandac$Compiler$addAlias$panda$core$String(self, &$s51);
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
}
void org$pandalanguage$pandac$Compiler$addAlias$panda$core$String(org$pandalanguage$pandac$Compiler* self, panda$core$String* p_name) {
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp98;
    org$pandalanguage$pandac$Position $tmp103;
    org$pandalanguage$pandac$Alias* $tmp96 = (org$pandalanguage$pandac$Alias*) malloc(64);
    $tmp96->$class = (panda$core$Class*) &org$pandalanguage$pandac$Alias$class;
    $tmp96->refCount.value = 1;
    panda$core$String$Index$nullable $tmp100 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(p_name, &$s99);
    panda$core$String$Index $tmp101 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(p_name, ((panda$core$String$Index) $tmp100.value));
    panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp98, ((panda$core$String$Index$nullable) { $tmp101, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
    panda$core$String* $tmp102 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(p_name, $tmp98);
    org$pandalanguage$pandac$Position$init(&$tmp103);
    org$pandalanguage$pandac$Alias$init$panda$core$String$panda$core$String$org$pandalanguage$pandac$Position($tmp96, $tmp102, p_name, $tmp103);
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->root, ((org$pandalanguage$pandac$Symbol*) $tmp96));
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Compiler* self, panda$core$String* p_name) {
    org$pandalanguage$pandac$ClassDecl* current104;
    org$pandalanguage$pandac$ClassDecl$Resolution* result108;
    panda$core$String* alias110;
    org$pandalanguage$pandac$ClassDecl* result118;
    panda$core$String$Index$nullable idx120;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp123;
    org$pandalanguage$pandac$Symbol* rootAlias135;
    panda$core$String$Index$nullable index142;
    org$pandalanguage$pandac$ClassDecl* parent145;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp146;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp149;
    panda$core$Int64 $tmp105 = panda$collections$Stack$get_count$R$panda$core$Int64(self->currentClass);
    panda$core$Bit $tmp106 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp105, ((panda$core$Int64) { 0 }));
    if ($tmp106.value) {
    {
        panda$core$Object* $tmp107 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
        current104 = ((org$pandalanguage$pandac$ClassDecl*) $tmp107);
    }
    }
    else {
    {
        current104 = NULL;
    }
    }
    if (((panda$core$Bit) { current104 != NULL }).value) {
    {
        panda$core$Object* $tmp109 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(current104->classResolutionCache, ((panda$collections$Key*) p_name));
        result108 = ((org$pandalanguage$pandac$ClassDecl$Resolution*) $tmp109);
        if (((panda$core$Bit) { result108 != NULL }).value) {
        {
            return result108->value;
        }
        }
        ITable* $tmp111 = current104->aliases->$class->itable;
        while ($tmp111->$class != (panda$core$Class*) &panda$collections$MapView$class) {
            $tmp111 = $tmp111->next;
        }
        $fn113 $tmp112 = $tmp111->methods[1];
        panda$core$Object* $tmp114 = $tmp112(current104->aliases, ((panda$core$Object*) p_name));
        alias110 = ((panda$core$String*) $tmp114);
        if (((panda$core$Bit) { alias110 != NULL }).value) {
        {
            org$pandalanguage$pandac$ClassDecl$Resolution* $tmp115 = (org$pandalanguage$pandac$ClassDecl$Resolution*) malloc(24);
            $tmp115->$class = (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Resolution$class;
            $tmp115->refCount.value = 1;
            org$pandalanguage$pandac$ClassDecl* $tmp117 = org$pandalanguage$pandac$Compiler$getClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, alias110);
            org$pandalanguage$pandac$ClassDecl$Resolution$init$org$pandalanguage$pandac$ClassDecl$Q($tmp115, $tmp117);
            result108 = $tmp115;
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(current104->classResolutionCache, ((panda$collections$Key*) p_name), ((panda$core$Object*) result108));
            return result108->value;
        }
        }
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp119 = org$pandalanguage$pandac$Compiler$getClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_name);
    result118 = $tmp119;
    if (((panda$core$Bit) { current104 != NULL }).value) {
    {
        if (((panda$core$Bit) { result118 == NULL }).value) {
        {
            panda$core$String$Index$nullable $tmp122 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(((org$pandalanguage$pandac$Symbol*) current104)->name, &$s121);
            idx120 = $tmp122;
            if (((panda$core$Bit) { idx120.nonnull }).value) {
            {
                panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp123, ((panda$core$String$Index$nullable) { .nonnull = false }), idx120, ((panda$core$Bit) { true }));
                panda$core$String* $tmp124 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) current104)->name, $tmp123);
                panda$core$String* $tmp125 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp124, p_name);
                org$pandalanguage$pandac$ClassDecl* $tmp126 = org$pandalanguage$pandac$Compiler$getClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, $tmp125);
                result118 = $tmp126;
            }
            }
        }
        }
        if (((panda$core$Bit) { result118 == NULL }).value) {
        {
            panda$core$String* $tmp128 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) current104)->name, &$s127);
            panda$core$String* $tmp129 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp128, p_name);
            org$pandalanguage$pandac$ClassDecl* $tmp130 = org$pandalanguage$pandac$Compiler$getClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, $tmp129);
            result118 = $tmp130;
        }
        }
        bool $tmp131 = ((panda$core$Bit) { result118 == NULL }).value;
        if (!$tmp131) goto $l132;
        $tmp131 = ((panda$core$Bit) { current104->owner != NULL }).value;
        $l132:;
        panda$core$Bit $tmp133 = { $tmp131 };
        if ($tmp133.value) {
        {
            panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) current104->owner));
            org$pandalanguage$pandac$ClassDecl* $tmp134 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_name);
            result118 = $tmp134;
            panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
        }
        }
    }
    }
    if (((panda$core$Bit) { result118 == NULL }).value) {
    {
        org$pandalanguage$pandac$Symbol* $tmp136 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(self->root, p_name);
        rootAlias135 = $tmp136;
        bool $tmp137 = ((panda$core$Bit) { rootAlias135 != NULL }).value;
        if (!$tmp137) goto $l138;
        panda$core$Bit $tmp139 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(rootAlias135->kind, ((panda$core$Int64) { 200 }));
        $tmp137 = $tmp139.value;
        $l138:;
        panda$core$Bit $tmp140 = { $tmp137 };
        if ($tmp140.value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp141 = org$pandalanguage$pandac$Compiler$getClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Alias*) rootAlias135)->fullName);
            result118 = $tmp141;
        }
        }
    }
    }
    if (((panda$core$Bit) { result118 == NULL }).value) {
    {
        panda$core$String$Index$nullable $tmp144 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(p_name, &$s143);
        index142 = $tmp144;
        if (((panda$core$Bit) { index142.nonnull }).value) {
        {
            panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp146, ((panda$core$String$Index$nullable) { .nonnull = false }), index142, ((panda$core$Bit) { false }));
            panda$core$String* $tmp147 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(p_name, $tmp146);
            org$pandalanguage$pandac$ClassDecl* $tmp148 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, $tmp147);
            parent145 = $tmp148;
            if (((panda$core$Bit) { parent145 != NULL }).value) {
            {
                panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp149, index142, ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                panda$core$String* $tmp150 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(p_name, $tmp149);
                panda$core$String* $tmp151 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) parent145)->name, $tmp150);
                org$pandalanguage$pandac$ClassDecl* $tmp152 = org$pandalanguage$pandac$Compiler$getClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, $tmp151);
                result118 = $tmp152;
            }
            }
        }
        }
    }
    }
    if (((panda$core$Bit) { current104 != NULL }).value) {
    {
        org$pandalanguage$pandac$ClassDecl$Resolution* $tmp153 = (org$pandalanguage$pandac$ClassDecl$Resolution*) malloc(24);
        $tmp153->$class = (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Resolution$class;
        $tmp153->refCount.value = 1;
        org$pandalanguage$pandac$ClassDecl$Resolution$init$org$pandalanguage$pandac$ClassDecl$Q($tmp153, result118);
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(current104->classResolutionCache, ((panda$collections$Key*) p_name), ((panda$core$Object*) $tmp153));
    }
    }
    return result118;
}
panda$core$Bit org$pandalanguage$pandac$Compiler$checkGenericParameters$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ClassDecl* p_cl, org$pandalanguage$pandac$Type* p_type) {
    panda$core$Int64 expectedCount155;
    panda$collections$ListView* foundTypes160;
    panda$core$Int64 foundCount162;
    panda$core$String* s168;
    org$pandalanguage$pandac$Type* object187;
    panda$core$Range$LTpanda$core$Int64$GT $tmp189;
    org$pandalanguage$pandac$Type* bound203;
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
    org$pandalanguage$pandac$Type* $tmp188 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    object187 = $tmp188;
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp189, ((panda$core$Int64) { 0 }), expectedCount155, ((panda$core$Bit) { false }));
    int64_t $tmp191 = $tmp189.min.value;
    panda$core$Int64 i190 = { $tmp191 };
    int64_t $tmp193 = $tmp189.max.value;
    bool $tmp194 = $tmp189.inclusive.value;
    if ($tmp194) goto $l201; else goto $l202;
    $l201:;
    if ($tmp191 <= $tmp193) goto $l195; else goto $l197;
    $l202:;
    if ($tmp191 < $tmp193) goto $l195; else goto $l197;
    $l195:;
    {
        ITable* $tmp204 = ((panda$collections$ListView*) p_cl->parameters)->$class->itable;
        while ($tmp204->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp204 = $tmp204->next;
        }
        $fn206 $tmp205 = $tmp204->methods[0];
        panda$core$Object* $tmp207 = $tmp205(((panda$collections$ListView*) p_cl->parameters), i190);
        bound203 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp207)->bound;
        panda$core$Bit $tmp209 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(bound203, object187);
        bool $tmp208 = $tmp209.value;
        if ($tmp208) goto $l210;
        panda$core$Bit $tmp212 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(bound203->typeKind, ((panda$core$Int64) { 11 }));
        bool $tmp211 = $tmp212.value;
        if (!$tmp211) goto $l213;
        panda$core$Object* $tmp214 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(bound203->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp215 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp214), object187);
        $tmp211 = $tmp215.value;
        $l213:;
        panda$core$Bit $tmp216 = { $tmp211 };
        $tmp208 = $tmp216.value;
        $l210:;
        panda$core$Bit $tmp217 = { $tmp208 };
        if ($tmp217.value) {
        {
            goto $l198;
        }
        }
        ITable* $tmp218 = foundTypes160->$class->itable;
        while ($tmp218->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp218 = $tmp218->next;
        }
        $fn220 $tmp219 = $tmp218->methods[0];
        panda$core$Object* $tmp221 = $tmp219(foundTypes160, i190);
        org$pandalanguage$pandac$Type* $tmp222 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_type, bound203);
        panda$core$Int64$nullable $tmp223 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$Type*) $tmp221), $tmp222);
        if (((panda$core$Bit) { !$tmp223.nonnull }).value) {
        {
            panda$core$String* $tmp225 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s224, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
            panda$core$String* $tmp227 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp225, &$s226);
            ITable* $tmp228 = ((panda$collections$ListView*) p_cl->parameters)->$class->itable;
            while ($tmp228->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp228 = $tmp228->next;
            }
            $fn230 $tmp229 = $tmp228->methods[0];
            panda$core$Object* $tmp231 = $tmp229(((panda$collections$ListView*) p_cl->parameters), i190);
            panda$core$String* $tmp232 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp227, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp231))->name);
            panda$core$String* $tmp234 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp232, &$s233);
            ITable* $tmp236 = ((panda$collections$ListView*) p_cl->parameters)->$class->itable;
            while ($tmp236->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp236 = $tmp236->next;
            }
            $fn238 $tmp237 = $tmp236->methods[0];
            panda$core$Object* $tmp239 = $tmp237(((panda$collections$ListView*) p_cl->parameters), i190);
            panda$core$String* $tmp240 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s235, ((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp239)->bound));
            panda$core$String* $tmp242 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp240, &$s241);
            ITable* $tmp243 = foundTypes160->$class->itable;
            while ($tmp243->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp243 = $tmp243->next;
            }
            $fn245 $tmp244 = $tmp243->methods[0];
            panda$core$Object* $tmp246 = $tmp244(foundTypes160, i190);
            panda$core$String* $tmp247 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp242, ((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp246)));
            panda$core$String* $tmp249 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp247, &$s248);
            panda$core$String* $tmp250 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp234, $tmp249);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp250);
            return ((panda$core$Bit) { false });
        }
        }
    }
    $l198:;
    int64_t $tmp252 = $tmp193 - i190.value;
    if ($tmp194) goto $l253; else goto $l254;
    $l253:;
    if ($tmp252 >= 1) goto $l251; else goto $l197;
    $l254:;
    if ($tmp252 > 1) goto $l251; else goto $l197;
    $l251:;
    i190.value += 1;
    goto $l195;
    $l197:;
    return ((panda$core$Bit) { true });
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$Type$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type, panda$core$Bit p_checkParameters) {
    org$pandalanguage$pandac$ClassDecl* resolved257;
    org$pandalanguage$pandac$Type* result259;
    org$pandalanguage$pandac$Symbol* s263;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* gp267;
    panda$collections$Array* subtypes278;
    org$pandalanguage$pandac$Type* sub281;
    panda$collections$Array* subtypes291;
    org$pandalanguage$pandac$Type* base294;
    panda$core$MutableString* name297;
    panda$core$Char8 $tmp301;
    panda$core$String* separator302;
    panda$core$Range$LTpanda$core$Int64$GT $tmp304;
    org$pandalanguage$pandac$Type* resolved319;
    panda$core$Char8 $tmp329;
    org$pandalanguage$pandac$Type* result330;
    if (p_type->resolved.value) {
    {
        return p_type;
    }
    }
    switch (p_type->typeKind.value) {
        case 10:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp258 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Symbol*) p_type)->name);
            resolved257 = $tmp258;
            if (((panda$core$Bit) { resolved257 != NULL }).value) {
            {
                org$pandalanguage$pandac$Type* $tmp260 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(resolved257);
                result259 = $tmp260;
                if (p_checkParameters.value) {
                {
                    panda$core$Bit $tmp261 = org$pandalanguage$pandac$Compiler$checkGenericParameters$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, ((org$pandalanguage$pandac$Symbol*) p_type)->position, resolved257, result259);
                    panda$core$Bit $tmp262 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp261);
                    if ($tmp262.value) {
                    {
                        return NULL;
                    }
                    }
                }
                }
                return result259;
            }
            }
            org$pandalanguage$pandac$Symbol* $tmp264 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(self->symbolTable, ((org$pandalanguage$pandac$Symbol*) p_type)->name);
            s263 = $tmp264;
            if (((panda$core$Bit) { s263 != NULL }).value) {
            {
                switch (s263->kind.value) {
                    case 200:
                    {
                        org$pandalanguage$pandac$Type* $tmp265 = (org$pandalanguage$pandac$Type*) malloc(96);
                        $tmp265->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
                        $tmp265->refCount.value = 1;
                        org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp265, ((org$pandalanguage$pandac$Alias*) s263)->fullName, ((panda$core$Int64) { 10 }), ((org$pandalanguage$pandac$Symbol*) p_type)->position, ((panda$core$Bit) { true }));
                        return $tmp265;
                    }
                    break;
                    case 203:
                    {
                        gp267 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) s263);
                        org$pandalanguage$pandac$ClassDecl* $tmp268 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Position$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Symbol*) p_type)->position, gp267->owner);
                        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, $tmp268);
                        org$pandalanguage$pandac$Type* $tmp269 = (org$pandalanguage$pandac$Type*) malloc(96);
                        $tmp269->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
                        $tmp269->refCount.value = 1;
                        org$pandalanguage$pandac$Type$init$org$pandalanguage$pandac$ClassDecl$GenericParameter($tmp269, gp267);
                        return $tmp269;
                    }
                    break;
                    case 207:
                    {
                        return ((org$pandalanguage$pandac$Type*) s263);
                    }
                    break;
                    case 201:
                    {
                        org$pandalanguage$pandac$Type* $tmp271 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) s263));
                        return $tmp271;
                    }
                    break;
                }
            }
            }
            panda$core$String* $tmp273 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s272, ((panda$core$Object*) p_type));
            panda$core$String* $tmp275 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp273, &$s274);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_type)->position, $tmp275);
            return NULL;
        }
        break;
        case 11:
        {
            panda$core$Int64 $tmp276 = panda$collections$Array$get_count$R$panda$core$Int64(p_type->subtypes);
            panda$core$Bit $tmp277 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp276, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp277.value);
            panda$collections$Array* $tmp279 = (panda$collections$Array*) malloc(40);
            $tmp279->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp279->refCount.value = 1;
            panda$collections$Array$init($tmp279);
            subtypes278 = $tmp279;
            panda$core$Object* $tmp282 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp283 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, ((org$pandalanguage$pandac$Type*) $tmp282));
            sub281 = $tmp283;
            if (((panda$core$Bit) { sub281 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(subtypes278, ((panda$core$Object*) sub281));
            org$pandalanguage$pandac$Type* $tmp284 = (org$pandalanguage$pandac$Type*) malloc(96);
            $tmp284->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp284->refCount.value = 1;
            panda$core$Object* $tmp286 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(subtypes278, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp288 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp286))->name, &$s287);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp284, $tmp288, ((panda$core$Int64) { 11 }), ((org$pandalanguage$pandac$Symbol*) p_type)->position, ((panda$collections$ListView*) subtypes278), ((panda$core$Bit) { true }));
            return $tmp284;
        }
        break;
        case 21:
        {
            panda$core$Int64 $tmp289 = panda$collections$Array$get_count$R$panda$core$Int64(p_type->subtypes);
            panda$core$Bit $tmp290 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp289, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp290.value);
            panda$collections$Array* $tmp292 = (panda$collections$Array*) malloc(40);
            $tmp292->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp292->refCount.value = 1;
            panda$collections$Array$init($tmp292);
            subtypes291 = $tmp292;
            panda$core$Object* $tmp295 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp296 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$Type$Q(self, ((org$pandalanguage$pandac$Type*) $tmp295), ((panda$core$Bit) { false }));
            base294 = $tmp296;
            if (((panda$core$Bit) { base294 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(subtypes291, ((panda$core$Object*) base294));
            panda$core$MutableString* $tmp298 = (panda$core$MutableString*) malloc(48);
            $tmp298->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp298->refCount.value = 1;
            panda$core$Object* $tmp300 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(subtypes291, ((panda$core$Int64) { 0 }));
            panda$core$MutableString$init$panda$core$String($tmp298, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp300))->name);
            name297 = $tmp298;
            panda$core$Char8$init$panda$core$UInt8(&$tmp301, ((panda$core$UInt8) { 60 }));
            panda$core$MutableString$append$panda$core$Char8(name297, $tmp301);
            separator302 = &$s303;
            panda$core$Int64 $tmp305 = panda$collections$Array$get_count$R$panda$core$Int64(p_type->subtypes);
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp304, ((panda$core$Int64) { 1 }), $tmp305, ((panda$core$Bit) { false }));
            int64_t $tmp307 = $tmp304.min.value;
            panda$core$Int64 i306 = { $tmp307 };
            int64_t $tmp309 = $tmp304.max.value;
            bool $tmp310 = $tmp304.inclusive.value;
            if ($tmp310) goto $l317; else goto $l318;
            $l317:;
            if ($tmp307 <= $tmp309) goto $l311; else goto $l313;
            $l318:;
            if ($tmp307 < $tmp309) goto $l311; else goto $l313;
            $l311:;
            {
                panda$core$Object* $tmp320 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, i306);
                org$pandalanguage$pandac$Type* $tmp321 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, ((org$pandalanguage$pandac$Type*) $tmp320));
                resolved319 = $tmp321;
                if (((panda$core$Bit) { resolved319 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(subtypes291, ((panda$core$Object*) resolved319));
                panda$core$MutableString$append$panda$core$String(name297, separator302);
                panda$core$MutableString$append$panda$core$String(name297, ((org$pandalanguage$pandac$Symbol*) resolved319)->name);
                separator302 = &$s322;
            }
            $l314:;
            int64_t $tmp324 = $tmp309 - i306.value;
            if ($tmp310) goto $l325; else goto $l326;
            $l325:;
            if ($tmp324 >= 1) goto $l323; else goto $l313;
            $l326:;
            if ($tmp324 > 1) goto $l323; else goto $l313;
            $l323:;
            i306.value += 1;
            goto $l311;
            $l313:;
            panda$core$Char8$init$panda$core$UInt8(&$tmp329, ((panda$core$UInt8) { 62 }));
            panda$core$MutableString$append$panda$core$Char8(name297, $tmp329);
            org$pandalanguage$pandac$Type* $tmp331 = (org$pandalanguage$pandac$Type*) malloc(96);
            $tmp331->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp331->refCount.value = 1;
            panda$core$String* $tmp333 = panda$core$MutableString$finish$R$panda$core$String(name297);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp331, $tmp333, ((panda$core$Int64) { 21 }), ((org$pandalanguage$pandac$Symbol*) p_type)->position, ((panda$collections$ListView*) subtypes291), ((panda$core$Bit) { true }));
            result330 = $tmp331;
            if (p_checkParameters.value) {
            {
                panda$core$Object* $tmp334 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(result330->subtypes, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$ClassDecl* $tmp335 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Type*) $tmp334));
                panda$core$Bit $tmp336 = org$pandalanguage$pandac$Compiler$checkGenericParameters$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, ((org$pandalanguage$pandac$Symbol*) p_type)->position, $tmp335, result330);
                panda$core$Bit $tmp337 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp336);
                if ($tmp337.value) {
                {
                    return NULL;
                }
                }
            }
            }
            return result330;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type) {
    org$pandalanguage$pandac$Type* $tmp338 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$Type$Q(self, p_type, ((panda$core$Bit) { true }));
    return $tmp338;
}
void org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$SymbolTable* old339;
    panda$collections$Iterator* p$Iter340;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* p352;
    org$pandalanguage$pandac$Type* resolved357;
    panda$collections$Iterator* rawS$Iter359;
    org$pandalanguage$pandac$Type* rawS371;
    org$pandalanguage$pandac$Type* s376;
    org$pandalanguage$pandac$ClassDecl* sClass378;
    panda$collections$Iterator* m$Iter425;
    org$pandalanguage$pandac$MethodDecl* m437;
    panda$collections$Iterator* intf$Iter448;
    org$pandalanguage$pandac$Type* intf460;
    panda$collections$Iterator* p$Iter466;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* p478;
    org$pandalanguage$pandac$ClassDecl* cl483;
    if (p_cl->resolved.value) {
    {
        return;
    }
    }
    p_cl->resolved = ((panda$core$Bit) { true });
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_cl));
    old339 = self->symbolTable;
    self->symbolTable = p_cl->symbolTable;
    {
        ITable* $tmp341 = ((panda$collections$Iterable*) p_cl->parameters)->$class->itable;
        while ($tmp341->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp341 = $tmp341->next;
        }
        $fn343 $tmp342 = $tmp341->methods[0];
        panda$collections$Iterator* $tmp344 = $tmp342(((panda$collections$Iterable*) p_cl->parameters));
        p$Iter340 = $tmp344;
        $l345:;
        ITable* $tmp347 = p$Iter340->$class->itable;
        while ($tmp347->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp347 = $tmp347->next;
        }
        $fn349 $tmp348 = $tmp347->methods[0];
        panda$core$Bit $tmp350 = $tmp348(p$Iter340);
        panda$core$Bit $tmp351 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp350);
        if (!$tmp351.value) goto $l346;
        {
            ITable* $tmp353 = p$Iter340->$class->itable;
            while ($tmp353->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp353 = $tmp353->next;
            }
            $fn355 $tmp354 = $tmp353->methods[1];
            panda$core$Object* $tmp356 = $tmp354(p$Iter340);
            p352 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp356);
            org$pandalanguage$pandac$Type* $tmp358 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$Type$Q(self, p352->bound, ((panda$core$Bit) { false }));
            resolved357 = $tmp358;
            if (((panda$core$Bit) { resolved357 != NULL }).value) {
            {
                p352->bound = resolved357;
            }
            }
        }
        goto $l345;
        $l346:;
    }
    {
        ITable* $tmp360 = ((panda$collections$Iterable*) p_cl->declaredSupers)->$class->itable;
        while ($tmp360->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp360 = $tmp360->next;
        }
        $fn362 $tmp361 = $tmp360->methods[0];
        panda$collections$Iterator* $tmp363 = $tmp361(((panda$collections$Iterable*) p_cl->declaredSupers));
        rawS$Iter359 = $tmp363;
        $l364:;
        ITable* $tmp366 = rawS$Iter359->$class->itable;
        while ($tmp366->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp366 = $tmp366->next;
        }
        $fn368 $tmp367 = $tmp366->methods[0];
        panda$core$Bit $tmp369 = $tmp367(rawS$Iter359);
        panda$core$Bit $tmp370 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp369);
        if (!$tmp370.value) goto $l365;
        {
            ITable* $tmp372 = rawS$Iter359->$class->itable;
            while ($tmp372->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp372 = $tmp372->next;
            }
            $fn374 $tmp373 = $tmp372->methods[1];
            panda$core$Object* $tmp375 = $tmp373(rawS$Iter359);
            rawS371 = ((org$pandalanguage$pandac$Type*) $tmp375);
            org$pandalanguage$pandac$Type* $tmp377 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$Type$Q(self, rawS371, ((panda$core$Bit) { false }));
            s376 = $tmp377;
            if (((panda$core$Bit) { s376 != NULL }).value) {
            {
                org$pandalanguage$pandac$ClassDecl* $tmp379 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, s376);
                sClass378 = $tmp379;
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, sClass378);
                if (((panda$core$Bit) { sClass378 != NULL }).value) {
                {
                    panda$core$Bit $tmp380 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(sClass378->classKind, ((panda$core$Int64) { 5011 }));
                    if ($tmp380.value) {
                    {
                        panda$core$Bit $tmp381 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_cl->classKind, ((panda$core$Int64) { 5012 }));
                        if ($tmp381.value) {
                        {
                            panda$core$String* $tmp383 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s382, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
                            panda$core$String* $tmp385 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp383, &$s384);
                            panda$core$String* $tmp387 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s386, ((org$pandalanguage$pandac$Symbol*) s376)->name);
                            panda$core$String* $tmp389 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp387, &$s388);
                            panda$core$String* $tmp390 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp385, $tmp389);
                            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) s376)->position, $tmp390);
                        }
                        }
                        if (((panda$core$Bit) { p_cl->rawSuper == NULL }).value) {
                        {
                            p_cl->rawSuper = s376;
                            panda$core$Int64 $tmp391 = panda$collections$Array$get_count$R$panda$core$Int64(p_cl->rawInterfaces);
                            panda$core$Bit $tmp392 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp391, ((panda$core$Int64) { 0 }));
                            if ($tmp392.value) {
                            {
                                panda$core$String* $tmp394 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s393, ((panda$core$Object*) s376));
                                panda$core$String* $tmp396 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp394, &$s395);
                                panda$core$String* $tmp397 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp396, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
                                panda$core$String* $tmp399 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp397, &$s398);
                                panda$core$String* $tmp401 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp399, &$s400);
                                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) s376)->position, $tmp401);
                            }
                            }
                        }
                        }
                        else {
                        {
                            panda$core$String* $tmp403 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s402, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
                            panda$core$String* $tmp405 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp403, &$s404);
                            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) s376)->position, $tmp405);
                        }
                        }
                    }
                    }
                    else {
                    {
                        panda$core$Bit $tmp406 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(sClass378->classKind, ((panda$core$Int64) { 5012 }));
                        PANDA_ASSERT($tmp406.value);
                        panda$collections$Array$add$panda$collections$Array$T(p_cl->rawInterfaces, ((panda$core$Object*) s376));
                    }
                    }
                }
                }
            }
            }
        }
        goto $l364;
        $l365:;
    }
    bool $tmp407 = ((panda$core$Bit) { p_cl->rawSuper == NULL }).value;
    if (!$tmp407) goto $l408;
    panda$core$Bit $tmp410 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_cl)->name, &$s409);
    $tmp407 = $tmp410.value;
    $l408:;
    panda$core$Bit $tmp411 = { $tmp407 };
    if ($tmp411.value) {
    {
        org$pandalanguage$pandac$Type* $tmp412 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
        p_cl->rawSuper = $tmp412;
    }
    }
    bool $tmp414 = ((panda$core$Bit) { p_cl->rawSuper != NULL }).value;
    if (!$tmp414) goto $l415;
    panda$core$Bit $tmp416 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_cl->annotations);
    panda$core$Bit $tmp417 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp416);
    $tmp414 = $tmp417.value;
    $l415:;
    panda$core$Bit $tmp418 = { $tmp414 };
    bool $tmp413 = $tmp418.value;
    if (!$tmp413) goto $l419;
    panda$core$Bit $tmp421 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_cl->rawSuper)->name, &$s420);
    $tmp413 = $tmp421.value;
    $l419:;
    panda$core$Bit $tmp422 = { $tmp413 };
    if ($tmp422.value) {
    {
        panda$core$Int64 $tmp423 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 8 }));
        panda$core$Int64 $tmp424 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(p_cl->annotations->flags, $tmp423);
        p_cl->annotations->flags = $tmp424;
        {
            ITable* $tmp426 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
            while ($tmp426->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp426 = $tmp426->next;
            }
            $fn428 $tmp427 = $tmp426->methods[0];
            panda$collections$Iterator* $tmp429 = $tmp427(((panda$collections$Iterable*) p_cl->methods));
            m$Iter425 = $tmp429;
            $l430:;
            ITable* $tmp432 = m$Iter425->$class->itable;
            while ($tmp432->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp432 = $tmp432->next;
            }
            $fn434 $tmp433 = $tmp432->methods[0];
            panda$core$Bit $tmp435 = $tmp433(m$Iter425);
            panda$core$Bit $tmp436 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp435);
            if (!$tmp436.value) goto $l431;
            {
                ITable* $tmp438 = m$Iter425->$class->itable;
                while ($tmp438->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp438 = $tmp438->next;
                }
                $fn440 $tmp439 = $tmp438->methods[1];
                panda$core$Object* $tmp441 = $tmp439(m$Iter425);
                m437 = ((org$pandalanguage$pandac$MethodDecl*) $tmp441);
                panda$core$Int64 $tmp442 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 8 }));
                panda$core$Int64 $tmp443 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(m437->annotations->flags, $tmp442);
                m437->annotations->flags = $tmp443;
                panda$core$Bit $tmp444 = org$pandalanguage$pandac$Scanner$shouldInline$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ASTNode$Q$R$panda$core$Bit(self->scanner, m437->annotations, m437->body);
                if ($tmp444.value) {
                {
                    panda$core$Int64 $tmp445 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 10 }));
                    panda$core$Int64 $tmp446 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(m437->annotations->flags, $tmp445);
                    m437->annotations->flags = $tmp446;
                }
                }
            }
            goto $l430;
            $l431:;
        }
    }
    }
    if (((panda$core$Bit) { p_cl->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp447 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_cl->rawSuper);
        org$pandalanguage$pandac$Compiler$checkGenericParameters$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->position, $tmp447, p_cl->rawSuper);
    }
    }
    {
        ITable* $tmp449 = ((panda$collections$Iterable*) p_cl->rawInterfaces)->$class->itable;
        while ($tmp449->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp449 = $tmp449->next;
        }
        $fn451 $tmp450 = $tmp449->methods[0];
        panda$collections$Iterator* $tmp452 = $tmp450(((panda$collections$Iterable*) p_cl->rawInterfaces));
        intf$Iter448 = $tmp452;
        $l453:;
        ITable* $tmp455 = intf$Iter448->$class->itable;
        while ($tmp455->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp455 = $tmp455->next;
        }
        $fn457 $tmp456 = $tmp455->methods[0];
        panda$core$Bit $tmp458 = $tmp456(intf$Iter448);
        panda$core$Bit $tmp459 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp458);
        if (!$tmp459.value) goto $l454;
        {
            ITable* $tmp461 = intf$Iter448->$class->itable;
            while ($tmp461->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp461 = $tmp461->next;
            }
            $fn463 $tmp462 = $tmp461->methods[1];
            panda$core$Object* $tmp464 = $tmp462(intf$Iter448);
            intf460 = ((org$pandalanguage$pandac$Type*) $tmp464);
            org$pandalanguage$pandac$ClassDecl* $tmp465 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, intf460);
            org$pandalanguage$pandac$Compiler$checkGenericParameters$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->position, $tmp465, intf460);
        }
        goto $l453;
        $l454:;
    }
    {
        ITable* $tmp467 = ((panda$collections$Iterable*) p_cl->parameters)->$class->itable;
        while ($tmp467->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp467 = $tmp467->next;
        }
        $fn469 $tmp468 = $tmp467->methods[0];
        panda$collections$Iterator* $tmp470 = $tmp468(((panda$collections$Iterable*) p_cl->parameters));
        p$Iter466 = $tmp470;
        $l471:;
        ITable* $tmp473 = p$Iter466->$class->itable;
        while ($tmp473->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp473 = $tmp473->next;
        }
        $fn475 $tmp474 = $tmp473->methods[0];
        panda$core$Bit $tmp476 = $tmp474(p$Iter466);
        panda$core$Bit $tmp477 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp476);
        if (!$tmp477.value) goto $l472;
        {
            ITable* $tmp479 = p$Iter466->$class->itable;
            while ($tmp479->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp479 = $tmp479->next;
            }
            $fn481 $tmp480 = $tmp479->methods[1];
            panda$core$Object* $tmp482 = $tmp480(p$Iter466);
            p478 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp482);
            org$pandalanguage$pandac$ClassDecl* $tmp484 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p478->bound);
            cl483 = $tmp484;
            if (((panda$core$Bit) { cl483 != NULL }).value) {
            {
                org$pandalanguage$pandac$Compiler$checkGenericParameters$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, ((org$pandalanguage$pandac$Symbol*) cl483)->position, cl483, p478->bound);
            }
            }
        }
        goto $l471;
        $l472:;
    }
    self->symbolTable = old339;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
}
void org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$SymbolTable* old485;
    panda$collections$Iterator* p$Iter486;
    org$pandalanguage$pandac$MethodDecl$Parameter* p498;
    org$pandalanguage$pandac$MethodDecl* overridden506;
    if (p_m->resolved.value) {
    {
        return;
    }
    }
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_m->owner);
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_m->owner));
    old485 = self->symbolTable;
    self->symbolTable = p_m->owner->symbolTable;
    {
        ITable* $tmp487 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp487->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp487 = $tmp487->next;
        }
        $fn489 $tmp488 = $tmp487->methods[0];
        panda$collections$Iterator* $tmp490 = $tmp488(((panda$collections$Iterable*) p_m->parameters));
        p$Iter486 = $tmp490;
        $l491:;
        ITable* $tmp493 = p$Iter486->$class->itable;
        while ($tmp493->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp493 = $tmp493->next;
        }
        $fn495 $tmp494 = $tmp493->methods[0];
        panda$core$Bit $tmp496 = $tmp494(p$Iter486);
        panda$core$Bit $tmp497 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp496);
        if (!$tmp497.value) goto $l492;
        {
            ITable* $tmp499 = p$Iter486->$class->itable;
            while ($tmp499->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp499 = $tmp499->next;
            }
            $fn501 $tmp500 = $tmp499->methods[1];
            panda$core$Object* $tmp502 = $tmp500(p$Iter486);
            p498 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp502);
            org$pandalanguage$pandac$Type* $tmp503 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, p498->type);
            p498->type = $tmp503;
        }
        goto $l491;
        $l492:;
    }
    org$pandalanguage$pandac$Type* $tmp504 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, p_m->returnType);
    p_m->returnType = $tmp504;
    p_m->resolved = ((panda$core$Bit) { true });
    panda$core$Bit $tmp505 = panda$core$Bit$$NOT$R$panda$core$Bit(p_m->owner->external);
    if ($tmp505.value) {
    {
        org$pandalanguage$pandac$MethodDecl* $tmp507 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(self, p_m);
        overridden506 = $tmp507;
        if (((panda$core$Bit) { overridden506 != NULL }).value) {
        {
            panda$core$Bit $tmp508 = org$pandalanguage$pandac$Annotations$isOverride$R$panda$core$Bit(p_m->annotations);
            panda$core$Bit $tmp509 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp508);
            if ($tmp509.value) {
            {
                panda$core$String* $tmp510 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(p_m);
                panda$core$String* $tmp511 = panda$core$String$convert$R$panda$core$String($tmp510);
                panda$core$String* $tmp513 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp511, &$s512);
                panda$core$String* $tmp514 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(overridden506);
                panda$core$String* $tmp515 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp513, $tmp514);
                panda$core$String* $tmp517 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp515, &$s516);
                panda$core$String* $tmp519 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp517, &$s518);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m)->position, $tmp519);
            }
            }
            panda$core$Bit $tmp521 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 57 }));
            bool $tmp520 = $tmp521.value;
            if (!$tmp520) goto $l522;
            panda$core$Bit $tmp523 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(overridden506->methodKind, ((panda$core$Int64) { 58 }));
            $tmp520 = $tmp523.value;
            $l522:;
            panda$core$Bit $tmp524 = { $tmp520 };
            if ($tmp524.value) {
            {
                panda$core$String* $tmp525 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(p_m);
                panda$core$String* $tmp526 = panda$core$String$convert$R$panda$core$String($tmp525);
                panda$core$String* $tmp528 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp526, &$s527);
                panda$core$String* $tmp529 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(overridden506);
                panda$core$String* $tmp530 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp528, $tmp529);
                panda$core$String* $tmp532 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp530, &$s531);
                panda$core$String* $tmp534 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp532, &$s533);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m)->position, $tmp534);
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp535 = org$pandalanguage$pandac$Annotations$isOverride$R$panda$core$Bit(p_m->annotations);
        if ($tmp535.value) {
        {
            panda$core$String* $tmp536 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(p_m);
            panda$core$String* $tmp537 = panda$core$String$convert$R$panda$core$String($tmp536);
            panda$core$String* $tmp539 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp537, &$s538);
            panda$core$String* $tmp541 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp539, &$s540);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m)->position, $tmp541);
        }
        }
        }
    }
    }
    self->symbolTable = old485;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
}
void org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$FieldDecl* p_f) {
    org$pandalanguage$pandac$SymbolTable* old542;
    org$pandalanguage$pandac$Type* resolved545;
    if (p_f->resolved.value) {
    {
        return;
    }
    }
    p_f->resolved = ((panda$core$Bit) { true });
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_f->owner));
    old542 = self->symbolTable;
    self->symbolTable = p_f->owner->symbolTable;
    org$pandalanguage$pandac$Type* $tmp543 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp544 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_f->type, $tmp543);
    if ($tmp544.value) {
    {
        org$pandalanguage$pandac$Type* $tmp546 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, p_f->type);
        resolved545 = $tmp546;
        if (((panda$core$Bit) { resolved545 != NULL }).value) {
        {
            p_f->type = resolved545;
            if (((panda$core$Bit) { p_f->rawValue != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp547 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->rawValue);
                org$pandalanguage$pandac$IRNode* $tmp548 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp547, p_f->type);
                p_f->value = $tmp548;
            }
            }
        }
        }
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
        self->symbolTable = old542;
        return;
    }
    }
    if (((panda$core$Bit) { p_f->rawValue == NULL }).value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_f)->position, &$s549);
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
        self->symbolTable = old542;
        return;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp550 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->rawValue);
    p_f->value = $tmp550;
    if (((panda$core$Bit) { p_f->value == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
        self->symbolTable = old542;
        return;
    }
    }
    org$pandalanguage$pandac$Type* $tmp551 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_f->value);
    p_f->type = $tmp551;
    org$pandalanguage$pandac$IRNode* $tmp552 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->value, p_f->type);
    p_f->value = $tmp552;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    self->symbolTable = old542;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$resolveMethodCall$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr, org$pandalanguage$pandac$Type* p_target) {
    panda$collections$ListView* methods554;
    panda$collections$ImmutableArray* args556;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp557;
    panda$collections$Array* best559;
    panda$core$Int64$nullable bestCost562;
    panda$collections$Iterator* m$Iter563;
    org$pandalanguage$pandac$MethodRef* m575;
    panda$core$Int64$nullable cost580;
    org$pandalanguage$pandac$IRNode* callTarget590;
    org$pandalanguage$pandac$IRNode* result596;
    panda$core$Bit $tmp553 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1039 }));
    PANDA_ASSERT($tmp553.value);
    panda$core$Object* $tmp555 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
    methods554 = ((panda$collections$ListView*) ((org$pandalanguage$pandac$IRNode*) $tmp555)->payload);
    panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp557, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
    panda$collections$ImmutableArray* $tmp558 = panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(p_expr->children, $tmp557);
    args556 = $tmp558;
    panda$collections$Array* $tmp560 = (panda$collections$Array*) malloc(40);
    $tmp560->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp560->refCount.value = 1;
    panda$collections$Array$init($tmp560);
    best559 = $tmp560;
    bestCost562 = ((panda$core$Int64$nullable) { .nonnull = false });
    {
        ITable* $tmp564 = ((panda$collections$Iterable*) methods554)->$class->itable;
        while ($tmp564->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp564 = $tmp564->next;
        }
        $fn566 $tmp565 = $tmp564->methods[0];
        panda$collections$Iterator* $tmp567 = $tmp565(((panda$collections$Iterable*) methods554));
        m$Iter563 = $tmp567;
        $l568:;
        ITable* $tmp570 = m$Iter563->$class->itable;
        while ($tmp570->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp570 = $tmp570->next;
        }
        $fn572 $tmp571 = $tmp570->methods[0];
        panda$core$Bit $tmp573 = $tmp571(m$Iter563);
        panda$core$Bit $tmp574 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp573);
        if (!$tmp574.value) goto $l569;
        {
            ITable* $tmp576 = m$Iter563->$class->itable;
            while ($tmp576->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp576 = $tmp576->next;
            }
            $fn578 $tmp577 = $tmp576->methods[1];
            panda$core$Object* $tmp579 = $tmp577(m$Iter563);
            m575 = ((org$pandalanguage$pandac$MethodRef*) $tmp579);
            panda$core$Int64$nullable $tmp581 = org$pandalanguage$pandac$Compiler$callCost$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(self, m575, ((panda$collections$ListView*) args556), p_target);
            cost580 = $tmp581;
            if (((panda$core$Bit) { !cost580.nonnull }).value) {
            {
                goto $l568;
            }
            }
            if (((panda$core$Bit) { !bestCost562.nonnull }).value) {
            {
                panda$collections$Array$add$panda$collections$Array$T(best559, ((panda$core$Object*) m575));
                bestCost562 = cost580;
                goto $l568;
            }
            }
            panda$core$Bit $tmp582 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost580.value), ((panda$core$Int64) bestCost562.value));
            if ($tmp582.value) {
            {
                panda$collections$Array$clear(best559);
                bestCost562 = cost580;
            }
            }
            panda$core$Bit $tmp586;
            if (((panda$core$Bit) { cost580.nonnull }).value) goto $l583; else goto $l584;
            $l583:;
            panda$core$Bit $tmp587 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost580.value), ((panda$core$Int64) bestCost562.value));
            $tmp586 = $tmp587;
            goto $l585;
            $l584:;
            $tmp586 = ((panda$core$Bit) { false });
            goto $l585;
            $l585:;
            if ($tmp586.value) {
            {
                panda$collections$Array$add$panda$collections$Array$T(best559, ((panda$core$Object*) m575));
            }
            }
        }
        goto $l568;
        $l569:;
    }
    panda$core$Int64 $tmp588 = panda$collections$Array$get_count$R$panda$core$Int64(best559);
    panda$core$Bit $tmp589 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp588, ((panda$core$Int64) { 1 }));
    if ($tmp589.value) {
    {
        panda$core$Object* $tmp591 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
        panda$core$Int64 $tmp592 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp591)->children);
        panda$core$Bit $tmp593 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp592, ((panda$core$Int64) { 0 }));
        if ($tmp593.value) {
        {
            panda$core$Object* $tmp594 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp595 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$IRNode*) $tmp594)->children, ((panda$core$Int64) { 0 }));
            callTarget590 = ((org$pandalanguage$pandac$IRNode*) $tmp595);
        }
        }
        else {
        {
            callTarget590 = NULL;
        }
        }
        panda$core$Object* $tmp597 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(best559, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp598 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr->position, callTarget590, ((org$pandalanguage$pandac$MethodRef*) $tmp597), ((panda$collections$ListView*) args556));
        result596 = $tmp598;
        if (((panda$core$Bit) { p_target != NULL }).value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp599 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, result596, p_target);
            result596 = $tmp599;
        }
        }
        return result596;
    }
    }
    panda$core$String* $tmp601 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s600, ((panda$core$Object*) wrap_org$pandalanguage$pandac$Position(p_expr->position)));
    panda$core$String* $tmp603 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp601, &$s602);
    ITable* $tmp604 = methods554->$class->itable;
    while ($tmp604->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp604 = $tmp604->next;
    }
    $fn606 $tmp605 = $tmp604->methods[0];
    panda$core$Object* $tmp607 = $tmp605(methods554, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp608 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp603, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodRef*) $tmp607)->value)->name);
    panda$core$String* $tmp610 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp608, &$s609);
    panda$core$String* $tmp611 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp610, ((panda$core$Object*) best559));
    panda$core$String* $tmp613 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp611, &$s612);
    panda$io$Console$printLine$panda$core$Object(((panda$core$Object*) $tmp613));
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
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_expr->position, &$s614);
            return NULL;
        }
        break;
        case 1039:
        {
            org$pandalanguage$pandac$IRNode* $tmp615 = org$pandalanguage$pandac$Compiler$resolveMethodCall$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, NULL);
            return $tmp615;
        }
        break;
        case 1024:
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_expr->position, &$s616);
            return NULL;
        }
        break;
        default:
        {
            org$pandalanguage$pandac$Type* $tmp617 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
            org$pandalanguage$pandac$IRNode* $tmp618 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, $tmp617);
            return $tmp618;
        }
    }
}
panda$core$Bit org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
    bool $tmp619 = ((panda$core$Bit) { p_cl->rawSuper != NULL }).value;
    if (!$tmp619) goto $l620;
    panda$core$Bit $tmp622 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_cl->rawSuper)->name, &$s621);
    $tmp619 = $tmp622.value;
    $l620:;
    panda$core$Bit $tmp623 = { $tmp619 };
    return $tmp623;
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Array* result624;
    org$pandalanguage$pandac$ClassDecl* s632;
    panda$collections$Iterator* f$Iter635;
    org$pandalanguage$pandac$FieldDecl* f647;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
    panda$collections$Array* $tmp625 = (panda$collections$Array*) malloc(40);
    $tmp625->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp625->refCount.value = 1;
    panda$collections$Array$init($tmp625);
    result624 = $tmp625;
    panda$core$Bit $tmp628 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, p_cl);
    panda$core$Bit $tmp629 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp628);
    bool $tmp627 = $tmp629.value;
    if (!$tmp627) goto $l630;
    $tmp627 = ((panda$core$Bit) { p_cl->rawSuper != NULL }).value;
    $l630:;
    panda$core$Bit $tmp631 = { $tmp627 };
    if ($tmp631.value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp633 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_cl->rawSuper);
        s632 = $tmp633;
        if (((panda$core$Bit) { s632 != NULL }).value) {
        {
            panda$collections$ListView* $tmp634 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self, s632);
            panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(result624, ((panda$collections$CollectionView*) $tmp634));
        }
        }
    }
    }
    {
        ITable* $tmp636 = ((panda$collections$Iterable*) p_cl->fields)->$class->itable;
        while ($tmp636->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp636 = $tmp636->next;
        }
        $fn638 $tmp637 = $tmp636->methods[0];
        panda$collections$Iterator* $tmp639 = $tmp637(((panda$collections$Iterable*) p_cl->fields));
        f$Iter635 = $tmp639;
        $l640:;
        ITable* $tmp642 = f$Iter635->$class->itable;
        while ($tmp642->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp642 = $tmp642->next;
        }
        $fn644 $tmp643 = $tmp642->methods[0];
        panda$core$Bit $tmp645 = $tmp643(f$Iter635);
        panda$core$Bit $tmp646 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp645);
        if (!$tmp646.value) goto $l641;
        {
            ITable* $tmp648 = f$Iter635->$class->itable;
            while ($tmp648->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp648 = $tmp648->next;
            }
            $fn650 $tmp649 = $tmp648->methods[1];
            panda$core$Object* $tmp651 = $tmp649(f$Iter635);
            f647 = ((org$pandalanguage$pandac$FieldDecl*) $tmp651);
            panda$core$Bit $tmp652 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(f647->annotations);
            panda$core$Bit $tmp653 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp652);
            if ($tmp653.value) {
            {
                panda$collections$Array$add$panda$collections$Array$T(result624, ((panda$core$Object*) f647));
            }
            }
        }
        goto $l640;
        $l641:;
    }
    return ((panda$collections$ListView*) result624);
}
panda$core$Bit org$pandalanguage$pandac$Compiler$exists$panda$io$File$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, panda$io$File* p_f) {
    panda$core$Bit$nullable result654;
    panda$core$Bit $tmp656;
    panda$core$Object* $tmp655 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->existenceCache, ((panda$collections$Key*) p_f));
    result654 = ($tmp655 != NULL ? ((panda$core$Bit$nullable) { ((panda$core$Bit$wrapper*) $tmp655)->value, true }) : (panda$core$Bit$nullable) { .nonnull = 0 });
    if (((panda$core$Bit) { !result654.nonnull }).value) {
    {
        panda$io$File$exists$R$panda$core$Bit(&$tmp656, p_f);
        result654 = ((panda$core$Bit$nullable) { $tmp656, true });
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->existenceCache, ((panda$collections$Key*) p_f), ((panda$core$Object*) wrap_panda$core$Bit(((panda$core$Bit) result654.value))));
    }
    }
    return ((panda$core$Bit) result654.value);
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Compiler$getClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Compiler* self, panda$core$String* p_fullName) {
    org$pandalanguage$pandac$ClassDecl* result657;
    panda$core$String* suffix659;
    panda$core$Bit found665;
    panda$collections$Iterator* dir$Iter666;
    panda$io$File* dir678;
    panda$io$File* f683;
    panda$core$String$Index$nullable index687;
    org$pandalanguage$pandac$ClassDecl* parent690;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp691;
    panda$core$Object* $tmp658 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) p_fullName));
    result657 = ((org$pandalanguage$pandac$ClassDecl*) $tmp658);
    if (((panda$core$Bit) { result657 == NULL }).value) {
    {
        panda$core$String* $tmp662 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(p_fullName, &$s660, &$s661);
        panda$core$String* $tmp664 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp662, &$s663);
        suffix659 = $tmp664;
        found665 = ((panda$core$Bit) { false });
        {
            ITable* $tmp667 = ((panda$collections$Iterable*) self->settings->importDirs)->$class->itable;
            while ($tmp667->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp667 = $tmp667->next;
            }
            $fn669 $tmp668 = $tmp667->methods[0];
            panda$collections$Iterator* $tmp670 = $tmp668(((panda$collections$Iterable*) self->settings->importDirs));
            dir$Iter666 = $tmp670;
            $l671:;
            ITable* $tmp673 = dir$Iter666->$class->itable;
            while ($tmp673->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp673 = $tmp673->next;
            }
            $fn675 $tmp674 = $tmp673->methods[0];
            panda$core$Bit $tmp676 = $tmp674(dir$Iter666);
            panda$core$Bit $tmp677 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp676);
            if (!$tmp677.value) goto $l672;
            {
                ITable* $tmp679 = dir$Iter666->$class->itable;
                while ($tmp679->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp679 = $tmp679->next;
                }
                $fn681 $tmp680 = $tmp679->methods[1];
                panda$core$Object* $tmp682 = $tmp680(dir$Iter666);
                dir678 = ((panda$io$File*) $tmp682);
                panda$io$File* $tmp684 = panda$io$File$resolve$panda$core$String$R$panda$io$File(dir678, suffix659);
                f683 = $tmp684;
                panda$core$Bit $tmp685 = org$pandalanguage$pandac$Compiler$exists$panda$io$File$R$panda$core$Bit(self, f683);
                if ($tmp685.value) {
                {
                    found665 = ((panda$core$Bit) { true });
                    org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(self, f683);
                    panda$core$Object* $tmp686 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) p_fullName));
                    result657 = ((org$pandalanguage$pandac$ClassDecl*) $tmp686);
                }
                }
            }
            goto $l671;
            $l672:;
        }
    }
    }
    if (((panda$core$Bit) { result657 == NULL }).value) {
    {
        panda$core$String$Index$nullable $tmp689 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(p_fullName, &$s688);
        index687 = $tmp689;
        if (((panda$core$Bit) { index687.nonnull }).value) {
        {
            panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp691, ((panda$core$String$Index$nullable) { .nonnull = false }), index687, ((panda$core$Bit) { false }));
            panda$core$String* $tmp692 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(p_fullName, $tmp691);
            org$pandalanguage$pandac$ClassDecl* $tmp693 = org$pandalanguage$pandac$Compiler$getClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, $tmp692);
            parent690 = $tmp693;
            if (((panda$core$Bit) { parent690 != NULL }).value) {
            {
                panda$core$Object* $tmp694 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) p_fullName));
                result657 = ((org$pandalanguage$pandac$ClassDecl*) $tmp694);
            }
            }
        }
        }
    }
    }
    return result657;
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Position$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, panda$core$String* p_fullName) {
    org$pandalanguage$pandac$ClassDecl* result695;
    panda$core$String* suffix697;
    panda$core$Bit found703;
    panda$collections$Iterator* dir$Iter704;
    panda$io$File* dir716;
    panda$io$File* f721;
    panda$core$Int64 oldErrorCount724;
    org$pandalanguage$pandac$Position $tmp730;
    panda$core$Object* $tmp696 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) p_fullName));
    result695 = ((org$pandalanguage$pandac$ClassDecl*) $tmp696);
    if (((panda$core$Bit) { result695 == NULL }).value) {
    {
        panda$core$String* $tmp700 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(p_fullName, &$s698, &$s699);
        panda$core$String* $tmp702 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp700, &$s701);
        suffix697 = $tmp702;
        found703 = ((panda$core$Bit) { false });
        {
            ITable* $tmp705 = ((panda$collections$Iterable*) self->settings->importDirs)->$class->itable;
            while ($tmp705->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp705 = $tmp705->next;
            }
            $fn707 $tmp706 = $tmp705->methods[0];
            panda$collections$Iterator* $tmp708 = $tmp706(((panda$collections$Iterable*) self->settings->importDirs));
            dir$Iter704 = $tmp708;
            $l709:;
            ITable* $tmp711 = dir$Iter704->$class->itable;
            while ($tmp711->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp711 = $tmp711->next;
            }
            $fn713 $tmp712 = $tmp711->methods[0];
            panda$core$Bit $tmp714 = $tmp712(dir$Iter704);
            panda$core$Bit $tmp715 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp714);
            if (!$tmp715.value) goto $l710;
            {
                ITable* $tmp717 = dir$Iter704->$class->itable;
                while ($tmp717->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp717 = $tmp717->next;
                }
                $fn719 $tmp718 = $tmp717->methods[1];
                panda$core$Object* $tmp720 = $tmp718(dir$Iter704);
                dir716 = ((panda$io$File*) $tmp720);
                panda$io$File* $tmp722 = panda$io$File$resolve$panda$core$String$R$panda$io$File(dir716, suffix697);
                f721 = $tmp722;
                panda$core$Bit $tmp723 = org$pandalanguage$pandac$Compiler$exists$panda$io$File$R$panda$core$Bit(self, f721);
                if ($tmp723.value) {
                {
                    found703 = ((panda$core$Bit) { true });
                    oldErrorCount724 = self->errorCount;
                    org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(self, f721);
                    panda$core$Object* $tmp725 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) p_fullName));
                    result695 = ((org$pandalanguage$pandac$ClassDecl*) $tmp725);
                    bool $tmp726 = ((panda$core$Bit) { result695 == NULL }).value;
                    if (!$tmp726) goto $l727;
                    panda$core$Bit $tmp728 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->errorCount, oldErrorCount724);
                    $tmp726 = $tmp728.value;
                    $l727:;
                    panda$core$Bit $tmp729 = { $tmp726 };
                    if ($tmp729.value) {
                    {
                        org$pandalanguage$pandac$Position$init$panda$core$Int64$panda$core$Int64(&$tmp730, ((panda$core$Int64) { 1 }), ((panda$core$Int64) { 1 }));
                        panda$core$String* $tmp732 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s731, ((panda$core$Object*) f721));
                        panda$core$String* $tmp734 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp732, &$s733);
                        panda$core$String* $tmp735 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp734, p_fullName);
                        panda$core$String* $tmp737 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp735, &$s736);
                        org$pandalanguage$pandac$Compiler$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String(self, f721, $tmp730, $tmp737);
                    }
                    }
                }
                }
            }
            goto $l709;
            $l710:;
        }
        panda$core$Bit $tmp738 = panda$core$Bit$$NOT$R$panda$core$Bit(found703);
        if ($tmp738.value) {
        {
            panda$core$String* $tmp740 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s739, suffix697);
            panda$core$String* $tmp742 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp740, &$s741);
            panda$core$String* $tmp743 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp742, ((panda$core$Object*) self->settings->importDirs));
            panda$core$String* $tmp745 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp743, &$s744);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp745);
        }
        }
    }
    }
    return result695;
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Compiler$specialize$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl, org$pandalanguage$pandac$Type* p_rawType) {
    org$pandalanguage$pandac$Type* type749;
    org$pandalanguage$pandac$ClassDecl* result756;
    org$pandalanguage$pandac$Annotations* annotations758;
    panda$collections$Array* supertypes764;
    panda$collections$Iterator* intf$Iter768;
    org$pandalanguage$pandac$Type* intf780;
    panda$collections$HashMap* aliases786;
    panda$core$Range$LTpanda$core$Int64$GT $tmp789;
    panda$collections$Iterator* m$Iter824;
    org$pandalanguage$pandac$MethodDecl* m836;
    panda$collections$Array* parameters841;
    panda$collections$Iterator* p$Iter844;
    org$pandalanguage$pandac$MethodDecl$Parameter* p856;
    org$pandalanguage$pandac$MethodDecl* clone864;
    panda$collections$Iterator* f$Iter868;
    org$pandalanguage$pandac$FieldDecl* f880;
    org$pandalanguage$pandac$FieldDecl* clone885;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
    panda$core$Bit $tmp747 = panda$core$String$contains$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_rawType)->name, &$s746);
    panda$core$Bit $tmp748 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp747);
    PANDA_ASSERT($tmp748.value);
    org$pandalanguage$pandac$Type* $tmp750 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, p_rawType);
    type749 = $tmp750;
    panda$core$Bit $tmp751 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(type749->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp751.value) {
    {
        panda$core$Object* $tmp752 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(type749->subtypes, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$ClassDecl* $tmp753 = org$pandalanguage$pandac$Compiler$specialize$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl(self, p_cl, ((org$pandalanguage$pandac$Type*) $tmp752));
        return $tmp753;
    }
    }
    panda$core$Bit $tmp754 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(type749->typeKind, ((panda$core$Int64) { 10 }));
    if ($tmp754.value) {
    {
        return p_cl;
    }
    }
    panda$core$Bit $tmp755 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(type749->typeKind, ((panda$core$Int64) { 21 }));
    PANDA_ASSERT($tmp755.value);
    panda$core$Object* $tmp757 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) type749)->name));
    result756 = ((org$pandalanguage$pandac$ClassDecl*) $tmp757);
    if (((panda$core$Bit) { result756 == NULL }).value) {
    {
        panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_cl));
        org$pandalanguage$pandac$Annotations* $tmp759 = (org$pandalanguage$pandac$Annotations*) malloc(24);
        $tmp759->$class = (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class;
        $tmp759->refCount.value = 1;
        panda$core$Int64 $tmp761 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 11 }));
        panda$core$Int64 $tmp762 = panda$core$Int64$$BNOT$R$panda$core$Int64($tmp761);
        panda$core$Int64 $tmp763 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(p_cl->annotations->flags, $tmp762);
        org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp759, $tmp763);
        annotations758 = $tmp759;
        panda$collections$Array* $tmp765 = (panda$collections$Array*) malloc(40);
        $tmp765->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp765->refCount.value = 1;
        panda$collections$Array$init($tmp765);
        supertypes764 = $tmp765;
        org$pandalanguage$pandac$Type* $tmp767 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, type749, p_cl->rawSuper);
        panda$collections$Array$add$panda$collections$Array$T(supertypes764, ((panda$core$Object*) $tmp767));
        {
            ITable* $tmp769 = ((panda$collections$Iterable*) p_cl->rawInterfaces)->$class->itable;
            while ($tmp769->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp769 = $tmp769->next;
            }
            $fn771 $tmp770 = $tmp769->methods[0];
            panda$collections$Iterator* $tmp772 = $tmp770(((panda$collections$Iterable*) p_cl->rawInterfaces));
            intf$Iter768 = $tmp772;
            $l773:;
            ITable* $tmp775 = intf$Iter768->$class->itable;
            while ($tmp775->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp775 = $tmp775->next;
            }
            $fn777 $tmp776 = $tmp775->methods[0];
            panda$core$Bit $tmp778 = $tmp776(intf$Iter768);
            panda$core$Bit $tmp779 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp778);
            if (!$tmp779.value) goto $l774;
            {
                ITable* $tmp781 = intf$Iter768->$class->itable;
                while ($tmp781->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp781 = $tmp781->next;
                }
                $fn783 $tmp782 = $tmp781->methods[1];
                panda$core$Object* $tmp784 = $tmp782(intf$Iter768);
                intf780 = ((org$pandalanguage$pandac$Type*) $tmp784);
                org$pandalanguage$pandac$Type* $tmp785 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, type749, intf780);
                panda$collections$Array$add$panda$collections$Array$T(supertypes764, ((panda$core$Object*) $tmp785));
            }
            goto $l773;
            $l774:;
        }
        panda$collections$HashMap* $tmp787 = (panda$collections$HashMap*) malloc(56);
        $tmp787->$class = (panda$core$Class*) &panda$collections$HashMap$class;
        $tmp787->refCount.value = 1;
        panda$collections$HashMap$init$panda$collections$MapView$LTpanda$collections$HashMap$K$Cpanda$collections$HashMap$V$GT($tmp787, p_cl->aliases);
        aliases786 = $tmp787;
        ITable* $tmp790 = ((panda$collections$CollectionView*) p_cl->parameters)->$class->itable;
        while ($tmp790->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp790 = $tmp790->next;
        }
        $fn792 $tmp791 = $tmp790->methods[0];
        panda$core$Int64 $tmp793 = $tmp791(((panda$collections$CollectionView*) p_cl->parameters));
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp789, ((panda$core$Int64) { 0 }), $tmp793, ((panda$core$Bit) { false }));
        int64_t $tmp795 = $tmp789.min.value;
        panda$core$Int64 i794 = { $tmp795 };
        int64_t $tmp797 = $tmp789.max.value;
        bool $tmp798 = $tmp789.inclusive.value;
        if ($tmp798) goto $l805; else goto $l806;
        $l805:;
        if ($tmp795 <= $tmp797) goto $l799; else goto $l801;
        $l806:;
        if ($tmp795 < $tmp797) goto $l799; else goto $l801;
        $l799:;
        {
            ITable* $tmp807 = ((panda$collections$ListView*) p_cl->parameters)->$class->itable;
            while ($tmp807->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp807 = $tmp807->next;
            }
            $fn809 $tmp808 = $tmp807->methods[0];
            panda$core$Object* $tmp810 = $tmp808(((panda$collections$ListView*) p_cl->parameters), i794);
            panda$core$Int64 $tmp811 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i794, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp812 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(type749->subtypes, $tmp811);
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(aliases786, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp810))->name), ((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp812))->name));
        }
        $l802:;
        int64_t $tmp814 = $tmp797 - i794.value;
        if ($tmp798) goto $l815; else goto $l816;
        $l815:;
        if ($tmp814 >= 1) goto $l813; else goto $l801;
        $l816:;
        if ($tmp814 > 1) goto $l813; else goto $l801;
        $l813:;
        i794.value += 1;
        goto $l799;
        $l801:;
        org$pandalanguage$pandac$ClassDecl* $tmp819 = (org$pandalanguage$pandac$ClassDecl*) malloc(193);
        $tmp819->$class = (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$class;
        $tmp819->refCount.value = 1;
        panda$collections$Array* $tmp821 = (panda$collections$Array*) malloc(40);
        $tmp821->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp821->refCount.value = 1;
        panda$collections$Array$init($tmp821);
        panda$core$Object* $tmp823 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_cl->symbolTable->parents, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$ClassDecl$init$panda$io$File$org$pandalanguage$pandac$Position$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable($tmp819, p_cl->source, ((org$pandalanguage$pandac$Symbol*) p_cl)->position, ((panda$collections$MapView*) aliases786), p_cl->doccomment, annotations758, p_cl->classKind, ((org$pandalanguage$pandac$Symbol*) type749)->name, ((panda$collections$ListView*) supertypes764), $tmp821, ((org$pandalanguage$pandac$SymbolTable*) $tmp823));
        result756 = $tmp819;
        result756->external = ((panda$core$Bit) { false });
        {
            ITable* $tmp825 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
            while ($tmp825->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp825 = $tmp825->next;
            }
            $fn827 $tmp826 = $tmp825->methods[0];
            panda$collections$Iterator* $tmp828 = $tmp826(((panda$collections$Iterable*) p_cl->methods));
            m$Iter824 = $tmp828;
            $l829:;
            ITable* $tmp831 = m$Iter824->$class->itable;
            while ($tmp831->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp831 = $tmp831->next;
            }
            $fn833 $tmp832 = $tmp831->methods[0];
            panda$core$Bit $tmp834 = $tmp832(m$Iter824);
            panda$core$Bit $tmp835 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp834);
            if (!$tmp835.value) goto $l830;
            {
                ITable* $tmp837 = m$Iter824->$class->itable;
                while ($tmp837->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp837 = $tmp837->next;
                }
                $fn839 $tmp838 = $tmp837->methods[1];
                panda$core$Object* $tmp840 = $tmp838(m$Iter824);
                m836 = ((org$pandalanguage$pandac$MethodDecl*) $tmp840);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m836);
                panda$collections$Array* $tmp842 = (panda$collections$Array*) malloc(40);
                $tmp842->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp842->refCount.value = 1;
                panda$collections$Array$init($tmp842);
                parameters841 = $tmp842;
                {
                    ITable* $tmp845 = ((panda$collections$Iterable*) m836->parameters)->$class->itable;
                    while ($tmp845->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp845 = $tmp845->next;
                    }
                    $fn847 $tmp846 = $tmp845->methods[0];
                    panda$collections$Iterator* $tmp848 = $tmp846(((panda$collections$Iterable*) m836->parameters));
                    p$Iter844 = $tmp848;
                    $l849:;
                    ITable* $tmp851 = p$Iter844->$class->itable;
                    while ($tmp851->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp851 = $tmp851->next;
                    }
                    $fn853 $tmp852 = $tmp851->methods[0];
                    panda$core$Bit $tmp854 = $tmp852(p$Iter844);
                    panda$core$Bit $tmp855 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp854);
                    if (!$tmp855.value) goto $l850;
                    {
                        ITable* $tmp857 = p$Iter844->$class->itable;
                        while ($tmp857->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp857 = $tmp857->next;
                        }
                        $fn859 $tmp858 = $tmp857->methods[1];
                        panda$core$Object* $tmp860 = $tmp858(p$Iter844);
                        p856 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp860);
                        org$pandalanguage$pandac$MethodDecl$Parameter* $tmp861 = (org$pandalanguage$pandac$MethodDecl$Parameter*) malloc(32);
                        $tmp861->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class;
                        $tmp861->refCount.value = 1;
                        org$pandalanguage$pandac$Type* $tmp863 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, type749, p856->type);
                        org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp861, p856->name, $tmp863);
                        panda$collections$Array$add$panda$collections$Array$T(parameters841, ((panda$core$Object*) $tmp861));
                    }
                    goto $l849;
                    $l850:;
                }
                org$pandalanguage$pandac$MethodDecl* $tmp865 = (org$pandalanguage$pandac$MethodDecl*) malloc(136);
                $tmp865->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class;
                $tmp865->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp867 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, type749, m836->returnType);
                org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp865, result756, ((org$pandalanguage$pandac$Symbol*) m836)->position, m836->doccomment, m836->annotations, m836->methodKind, ((org$pandalanguage$pandac$Symbol*) m836)->name, parameters841, $tmp867, m836->body);
                clone864 = $tmp865;
                panda$collections$Array$add$panda$collections$Array$T(result756->methods, ((panda$core$Object*) clone864));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result756->symbolTable, ((org$pandalanguage$pandac$Symbol*) clone864));
            }
            goto $l829;
            $l830:;
        }
        {
            ITable* $tmp869 = ((panda$collections$Iterable*) p_cl->fields)->$class->itable;
            while ($tmp869->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp869 = $tmp869->next;
            }
            $fn871 $tmp870 = $tmp869->methods[0];
            panda$collections$Iterator* $tmp872 = $tmp870(((panda$collections$Iterable*) p_cl->fields));
            f$Iter868 = $tmp872;
            $l873:;
            ITable* $tmp875 = f$Iter868->$class->itable;
            while ($tmp875->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp875 = $tmp875->next;
            }
            $fn877 $tmp876 = $tmp875->methods[0];
            panda$core$Bit $tmp878 = $tmp876(f$Iter868);
            panda$core$Bit $tmp879 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp878);
            if (!$tmp879.value) goto $l874;
            {
                ITable* $tmp881 = f$Iter868->$class->itable;
                while ($tmp881->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp881 = $tmp881->next;
                }
                $fn883 $tmp882 = $tmp881->methods[1];
                panda$core$Object* $tmp884 = $tmp882(f$Iter868);
                f880 = ((org$pandalanguage$pandac$FieldDecl*) $tmp884);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self, f880);
                org$pandalanguage$pandac$FieldDecl* $tmp886 = (org$pandalanguage$pandac$FieldDecl*) malloc(113);
                $tmp886->$class = (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class;
                $tmp886->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp888 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, type749, f880->type);
                org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp886, result756, ((org$pandalanguage$pandac$Symbol*) f880)->position, f880->doccomment, f880->annotations, f880->fieldKind, ((org$pandalanguage$pandac$Symbol*) f880)->name, $tmp888, f880->rawValue);
                clone885 = $tmp886;
                panda$collections$Array$add$panda$collections$Array$T(result756->fields, ((panda$core$Object*) clone885));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result756->symbolTable, ((org$pandalanguage$pandac$Symbol*) clone885));
            }
            goto $l873;
            $l874:;
        }
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classes, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) result756)->name), ((panda$core$Object*) result756));
        panda$collections$Array$add$panda$collections$Array$T(self->compilationQueue, ((panda$core$Object*) result756));
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, result756);
    }
    }
    return result756;
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type) {
    org$pandalanguage$pandac$ClassDecl* result889;
    PANDA_ASSERT(p_type->resolved.value);
    switch (p_type->typeKind.value) {
        case 10:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp890 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Position$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Symbol*) p_type)->position, ((org$pandalanguage$pandac$Symbol*) p_type)->name);
            result889 = $tmp890;
        }
        break;
        case 11:
        case 21:
        {
            panda$core$Object* $tmp891 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$ClassDecl* $tmp892 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Type*) $tmp891));
            result889 = $tmp892;
        }
        break;
        case 22:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp893 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_type->parameter->bound);
            return $tmp893;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
    panda$core$Bit $tmp894 = org$pandalanguage$pandac$Annotations$isSpecialize$R$panda$core$Bit(result889->annotations);
    if ($tmp894.value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp895 = org$pandalanguage$pandac$Compiler$specialize$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl(self, result889, p_type);
        result889 = $tmp895;
    }
    }
    return result889;
}
panda$collections$Set* org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_t) {
    org$pandalanguage$pandac$ClassDecl* cl896;
    panda$collections$Set* result898;
    panda$collections$Iterator* intf$Iter903;
    org$pandalanguage$pandac$Type* intf915;
    org$pandalanguage$pandac$ClassDecl* $tmp897 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_t);
    cl896 = $tmp897;
    PANDA_ASSERT(((panda$core$Bit) { cl896 != NULL }).value);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, cl896);
    panda$collections$Set* $tmp899 = (panda$collections$Set*) malloc(24);
    $tmp899->$class = (panda$core$Class*) &panda$collections$Set$class;
    $tmp899->refCount.value = 1;
    panda$collections$Set$init($tmp899);
    result898 = $tmp899;
    if (((panda$core$Bit) { cl896->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp901 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_t, cl896->rawSuper);
        panda$collections$Set* $tmp902 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self, $tmp901);
        panda$collections$Set$addAll$panda$collections$CollectionView$LTpanda$collections$Set$T$GT(result898, ((panda$collections$CollectionView*) $tmp902));
    }
    }
    {
        ITable* $tmp904 = ((panda$collections$Iterable*) cl896->rawInterfaces)->$class->itable;
        while ($tmp904->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp904 = $tmp904->next;
        }
        $fn906 $tmp905 = $tmp904->methods[0];
        panda$collections$Iterator* $tmp907 = $tmp905(((panda$collections$Iterable*) cl896->rawInterfaces));
        intf$Iter903 = $tmp907;
        $l908:;
        ITable* $tmp910 = intf$Iter903->$class->itable;
        while ($tmp910->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp910 = $tmp910->next;
        }
        $fn912 $tmp911 = $tmp910->methods[0];
        panda$core$Bit $tmp913 = $tmp911(intf$Iter903);
        panda$core$Bit $tmp914 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp913);
        if (!$tmp914.value) goto $l909;
        {
            ITable* $tmp916 = intf$Iter903->$class->itable;
            while ($tmp916->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp916 = $tmp916->next;
            }
            $fn918 $tmp917 = $tmp916->methods[1];
            panda$core$Object* $tmp919 = $tmp917(intf$Iter903);
            intf915 = ((org$pandalanguage$pandac$Type*) $tmp919);
            org$pandalanguage$pandac$Type* $tmp920 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_t, intf915);
            panda$collections$Set* $tmp921 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self, $tmp920);
            panda$collections$Set$addAll$panda$collections$CollectionView$LTpanda$collections$Set$T$GT(result898, ((panda$collections$CollectionView*) $tmp921));
        }
        goto $l908;
        $l909:;
    }
    panda$core$Bit $tmp922 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(cl896->classKind, ((panda$core$Int64) { 5012 }));
    if ($tmp922.value) {
    {
        panda$collections$Set$add$panda$collections$Set$T(result898, ((panda$collections$Key*) p_t));
    }
    }
    return result898;
}
panda$core$Bit org$pandalanguage$pandac$Compiler$signatureMatch$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_t1, org$pandalanguage$pandac$Type* p_t2) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp928;
    panda$core$Bit $tmp923 = org$pandalanguage$pandac$Type$isMethod$R$panda$core$Bit(p_t1);
    PANDA_ASSERT($tmp923.value);
    panda$core$Bit $tmp924 = org$pandalanguage$pandac$Type$isMethod$R$panda$core$Bit(p_t2);
    PANDA_ASSERT($tmp924.value);
    panda$core$Int64 $tmp925 = panda$collections$Array$get_count$R$panda$core$Int64(p_t1->subtypes);
    panda$core$Int64 $tmp926 = panda$collections$Array$get_count$R$panda$core$Int64(p_t2->subtypes);
    panda$core$Bit $tmp927 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp925, $tmp926);
    if ($tmp927.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Int64 $tmp929 = panda$collections$Array$get_count$R$panda$core$Int64(p_t1->subtypes);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp928, ((panda$core$Int64) { 0 }), $tmp929, ((panda$core$Bit) { false }));
    int64_t $tmp931 = $tmp928.min.value;
    panda$core$Int64 i930 = { $tmp931 };
    int64_t $tmp933 = $tmp928.max.value;
    bool $tmp934 = $tmp928.inclusive.value;
    if ($tmp934) goto $l941; else goto $l942;
    $l941:;
    if ($tmp931 <= $tmp933) goto $l935; else goto $l937;
    $l942:;
    if ($tmp931 < $tmp933) goto $l935; else goto $l937;
    $l935:;
    {
        panda$core$Object* $tmp943 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t1->subtypes, i930);
        panda$core$Object* $tmp944 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t2->subtypes, i930);
        panda$core$Bit $tmp945 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp943), ((org$pandalanguage$pandac$Type*) $tmp944));
        if ($tmp945.value) {
        {
            return ((panda$core$Bit) { false });
        }
        }
    }
    $l938:;
    int64_t $tmp947 = $tmp933 - i930.value;
    if ($tmp934) goto $l948; else goto $l949;
    $l948:;
    if ($tmp947 >= 1) goto $l946; else goto $l937;
    $l949:;
    if ($tmp947 > 1) goto $l946; else goto $l937;
    $l946:;
    i930.value += 1;
    goto $l935;
    $l937:;
    return ((panda$core$Bit) { true });
}
org$pandalanguage$pandac$MethodDecl* org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_owner, panda$core$String* p_name, org$pandalanguage$pandac$Type* p_methodType, panda$core$Bit p_checkInterfaces) {
    org$pandalanguage$pandac$ClassDecl* cl952;
    panda$collections$Iterator* test$Iter954;
    org$pandalanguage$pandac$MethodDecl* test966;
    panda$collections$Iterator* raw$Iter979;
    org$pandalanguage$pandac$Type* raw991;
    org$pandalanguage$pandac$MethodDecl* result996;
    org$pandalanguage$pandac$ClassDecl* $tmp953 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_owner);
    cl952 = $tmp953;
    PANDA_ASSERT(((panda$core$Bit) { cl952 != NULL }).value);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, cl952);
    {
        ITable* $tmp955 = ((panda$collections$Iterable*) cl952->methods)->$class->itable;
        while ($tmp955->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp955 = $tmp955->next;
        }
        $fn957 $tmp956 = $tmp955->methods[0];
        panda$collections$Iterator* $tmp958 = $tmp956(((panda$collections$Iterable*) cl952->methods));
        test$Iter954 = $tmp958;
        $l959:;
        ITable* $tmp961 = test$Iter954->$class->itable;
        while ($tmp961->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp961 = $tmp961->next;
        }
        $fn963 $tmp962 = $tmp961->methods[0];
        panda$core$Bit $tmp964 = $tmp962(test$Iter954);
        panda$core$Bit $tmp965 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp964);
        if (!$tmp965.value) goto $l960;
        {
            ITable* $tmp967 = test$Iter954->$class->itable;
            while ($tmp967->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp967 = $tmp967->next;
            }
            $fn969 $tmp968 = $tmp967->methods[1];
            panda$core$Object* $tmp970 = $tmp968(test$Iter954);
            test966 = ((org$pandalanguage$pandac$MethodDecl*) $tmp970);
            panda$core$Bit $tmp971 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) test966)->name, p_name);
            if ($tmp971.value) {
            {
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, test966);
                org$pandalanguage$pandac$Type* $tmp972 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, test966);
                org$pandalanguage$pandac$Type* $tmp973 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_owner, $tmp972);
                panda$core$Bit $tmp974 = org$pandalanguage$pandac$Compiler$signatureMatch$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, $tmp973, p_methodType);
                if ($tmp974.value) {
                {
                    return test966;
                }
                }
            }
            }
        }
        goto $l959;
        $l960:;
    }
    bool $tmp975 = p_checkInterfaces.value;
    if ($tmp975) goto $l976;
    panda$core$Bit $tmp977 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(cl952->classKind, ((panda$core$Int64) { 5012 }));
    $tmp975 = $tmp977.value;
    $l976:;
    panda$core$Bit $tmp978 = { $tmp975 };
    if ($tmp978.value) {
    {
        {
            ITable* $tmp980 = ((panda$collections$Iterable*) cl952->rawInterfaces)->$class->itable;
            while ($tmp980->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp980 = $tmp980->next;
            }
            $fn982 $tmp981 = $tmp980->methods[0];
            panda$collections$Iterator* $tmp983 = $tmp981(((panda$collections$Iterable*) cl952->rawInterfaces));
            raw$Iter979 = $tmp983;
            $l984:;
            ITable* $tmp986 = raw$Iter979->$class->itable;
            while ($tmp986->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp986 = $tmp986->next;
            }
            $fn988 $tmp987 = $tmp986->methods[0];
            panda$core$Bit $tmp989 = $tmp987(raw$Iter979);
            panda$core$Bit $tmp990 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp989);
            if (!$tmp990.value) goto $l985;
            {
                ITable* $tmp992 = raw$Iter979->$class->itable;
                while ($tmp992->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp992 = $tmp992->next;
                }
                $fn994 $tmp993 = $tmp992->methods[1];
                panda$core$Object* $tmp995 = $tmp993(raw$Iter979);
                raw991 = ((org$pandalanguage$pandac$Type*) $tmp995);
                org$pandalanguage$pandac$Type* $tmp997 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_owner, raw991);
                org$pandalanguage$pandac$MethodDecl* $tmp998 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp997, p_name, p_methodType, p_checkInterfaces);
                result996 = $tmp998;
                if (((panda$core$Bit) { result996 != NULL }).value) {
                {
                    return result996;
                }
                }
            }
            goto $l984;
            $l985:;
        }
    }
    }
    if (((panda$core$Bit) { cl952->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp999 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_owner, cl952->rawSuper);
        org$pandalanguage$pandac$MethodDecl* $tmp1000 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp999, p_name, p_methodType, p_checkInterfaces);
        return $tmp1000;
    }
    }
    return NULL;
}
org$pandalanguage$pandac$MethodDecl* org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$Type* methodType1002;
    org$pandalanguage$pandac$Type* owner1004;
    panda$collections$Iterator* raw$Iter1006;
    org$pandalanguage$pandac$Type* raw1018;
    org$pandalanguage$pandac$MethodDecl* result1023;
    org$pandalanguage$pandac$MethodDecl* result1026;
    if (p_m->overrideKnown.value) {
    {
        return p_m->overridden;
    }
    }
    panda$core$Bit $tmp1001 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 59 }));
    if ($tmp1001.value) {
    {
        p_m->overrideKnown = ((panda$core$Bit) { true });
        return NULL;
    }
    }
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
    org$pandalanguage$pandac$Type* $tmp1003 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, p_m);
    methodType1002 = $tmp1003;
    org$pandalanguage$pandac$Type* $tmp1005 = org$pandalanguage$pandac$ClassDecl$typeWithParameters$R$org$pandalanguage$pandac$Type(p_m->owner);
    owner1004 = $tmp1005;
    {
        ITable* $tmp1007 = ((panda$collections$Iterable*) p_m->owner->rawInterfaces)->$class->itable;
        while ($tmp1007->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1007 = $tmp1007->next;
        }
        $fn1009 $tmp1008 = $tmp1007->methods[0];
        panda$collections$Iterator* $tmp1010 = $tmp1008(((panda$collections$Iterable*) p_m->owner->rawInterfaces));
        raw$Iter1006 = $tmp1010;
        $l1011:;
        ITable* $tmp1013 = raw$Iter1006->$class->itable;
        while ($tmp1013->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1013 = $tmp1013->next;
        }
        $fn1015 $tmp1014 = $tmp1013->methods[0];
        panda$core$Bit $tmp1016 = $tmp1014(raw$Iter1006);
        panda$core$Bit $tmp1017 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1016);
        if (!$tmp1017.value) goto $l1012;
        {
            ITable* $tmp1019 = raw$Iter1006->$class->itable;
            while ($tmp1019->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1019 = $tmp1019->next;
            }
            $fn1021 $tmp1020 = $tmp1019->methods[1];
            panda$core$Object* $tmp1022 = $tmp1020(raw$Iter1006);
            raw1018 = ((org$pandalanguage$pandac$Type*) $tmp1022);
            org$pandalanguage$pandac$Type* $tmp1024 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, owner1004, raw1018);
            org$pandalanguage$pandac$MethodDecl* $tmp1025 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp1024, ((org$pandalanguage$pandac$Symbol*) p_m)->name, methodType1002, ((panda$core$Bit) { true }));
            result1023 = $tmp1025;
            if (((panda$core$Bit) { result1023 != NULL }).value) {
            {
                p_m->overrideKnown = ((panda$core$Bit) { true });
                p_m->overridden = result1023;
                return result1023;
            }
            }
        }
        goto $l1011;
        $l1012:;
    }
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_m->owner);
    if (((panda$core$Bit) { p_m->owner->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp1027 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, owner1004, p_m->owner->rawSuper);
        org$pandalanguage$pandac$MethodDecl* $tmp1028 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp1027, ((org$pandalanguage$pandac$Symbol*) p_m)->name, methodType1002, ((panda$core$Bit) { true }));
        result1026 = $tmp1028;
        p_m->overrideKnown = ((panda$core$Bit) { true });
        p_m->overridden = result1026;
        return result1026;
    }
    }
    p_m->overrideKnown = ((panda$core$Bit) { true });
    return NULL;
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$interfaceMethods$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl, org$pandalanguage$pandac$Type* p_intf) {
    org$pandalanguage$pandac$ClassDecl* intfClass1029;
    panda$collections$Array* result1031;
    panda$collections$Iterator* m$Iter1034;
    org$pandalanguage$pandac$MethodDecl* m1046;
    org$pandalanguage$pandac$MethodDecl* found1051;
    org$pandalanguage$pandac$ClassDecl* $tmp1030 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_intf);
    intfClass1029 = $tmp1030;
    PANDA_ASSERT(((panda$core$Bit) { intfClass1029 != NULL }).value);
    panda$collections$Array* $tmp1032 = (panda$collections$Array*) malloc(40);
    $tmp1032->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1032->refCount.value = 1;
    panda$collections$Array$init($tmp1032);
    result1031 = $tmp1032;
    {
        ITable* $tmp1035 = ((panda$collections$Iterable*) intfClass1029->methods)->$class->itable;
        while ($tmp1035->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1035 = $tmp1035->next;
        }
        $fn1037 $tmp1036 = $tmp1035->methods[0];
        panda$collections$Iterator* $tmp1038 = $tmp1036(((panda$collections$Iterable*) intfClass1029->methods));
        m$Iter1034 = $tmp1038;
        $l1039:;
        ITable* $tmp1041 = m$Iter1034->$class->itable;
        while ($tmp1041->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1041 = $tmp1041->next;
        }
        $fn1043 $tmp1042 = $tmp1041->methods[0];
        panda$core$Bit $tmp1044 = $tmp1042(m$Iter1034);
        panda$core$Bit $tmp1045 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1044);
        if (!$tmp1045.value) goto $l1040;
        {
            ITable* $tmp1047 = m$Iter1034->$class->itable;
            while ($tmp1047->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1047 = $tmp1047->next;
            }
            $fn1049 $tmp1048 = $tmp1047->methods[1];
            panda$core$Object* $tmp1050 = $tmp1048(m$Iter1034);
            m1046 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1050);
            org$pandalanguage$pandac$Type* $tmp1052 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
            org$pandalanguage$pandac$Type* $tmp1053 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, m1046);
            org$pandalanguage$pandac$Type* $tmp1054 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_intf, $tmp1053);
            org$pandalanguage$pandac$MethodDecl* $tmp1055 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp1052, ((org$pandalanguage$pandac$Symbol*) m1046)->name, $tmp1054, ((panda$core$Bit) { false }));
            found1051 = $tmp1055;
            PANDA_ASSERT(((panda$core$Bit) { found1051 != NULL }).value);
            panda$collections$Array$add$panda$collections$Array$T(result1031, ((panda$core$Object*) found1051));
        }
        goto $l1039;
        $l1040:;
    }
    return ((panda$collections$ListView*) result1031);
}
org$pandalanguage$pandac$SymbolTable* org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$ClassDecl* superCl1057;
    panda$collections$Iterator* rawIntf$Iter1060;
    org$pandalanguage$pandac$Type* rawIntf1072;
    org$pandalanguage$pandac$ClassDecl* intf1077;
    panda$core$Bit $tmp1056 = panda$core$Bit$$NOT$R$panda$core$Bit(p_cl->symbolTableResolved);
    if ($tmp1056.value) {
    {
        p_cl->symbolTableResolved = ((panda$core$Bit) { true });
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
        if (((panda$core$Bit) { p_cl->rawSuper != NULL }).value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp1058 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_cl->rawSuper);
            superCl1057 = $tmp1058;
            if (((panda$core$Bit) { superCl1057 != NULL }).value) {
            {
                org$pandalanguage$pandac$SymbolTable* $tmp1059 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, superCl1057);
                panda$collections$Array$add$panda$collections$Array$T(p_cl->symbolTable->parents, ((panda$core$Object*) $tmp1059));
            }
            }
        }
        }
        {
            ITable* $tmp1061 = ((panda$collections$Iterable*) p_cl->rawInterfaces)->$class->itable;
            while ($tmp1061->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1061 = $tmp1061->next;
            }
            $fn1063 $tmp1062 = $tmp1061->methods[0];
            panda$collections$Iterator* $tmp1064 = $tmp1062(((panda$collections$Iterable*) p_cl->rawInterfaces));
            rawIntf$Iter1060 = $tmp1064;
            $l1065:;
            ITable* $tmp1067 = rawIntf$Iter1060->$class->itable;
            while ($tmp1067->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1067 = $tmp1067->next;
            }
            $fn1069 $tmp1068 = $tmp1067->methods[0];
            panda$core$Bit $tmp1070 = $tmp1068(rawIntf$Iter1060);
            panda$core$Bit $tmp1071 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1070);
            if (!$tmp1071.value) goto $l1066;
            {
                ITable* $tmp1073 = rawIntf$Iter1060->$class->itable;
                while ($tmp1073->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1073 = $tmp1073->next;
                }
                $fn1075 $tmp1074 = $tmp1073->methods[1];
                panda$core$Object* $tmp1076 = $tmp1074(rawIntf$Iter1060);
                rawIntf1072 = ((org$pandalanguage$pandac$Type*) $tmp1076);
                org$pandalanguage$pandac$ClassDecl* $tmp1078 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, rawIntf1072);
                intf1077 = $tmp1078;
                if (((panda$core$Bit) { intf1077 != NULL }).value) {
                {
                    org$pandalanguage$pandac$SymbolTable* $tmp1079 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, intf1077);
                    panda$collections$Array$add$panda$collections$Array$T(p_cl->symbolTable->parents, ((panda$core$Object*) $tmp1079));
                }
                }
            }
            goto $l1065;
            $l1066:;
        }
    }
    }
    return p_cl->symbolTable;
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$ClassDecl* superCl1082;
    panda$collections$Iterator* derived$Iter1085;
    org$pandalanguage$pandac$MethodDecl* derived1097;
    panda$core$Bit found1107;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1108;
    org$pandalanguage$pandac$MethodDecl* base1123;
    panda$core$Int64 $tmp1080 = panda$collections$Array$get_count$R$panda$core$Int64(p_cl->virtualMethods);
    panda$core$Bit $tmp1081 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1080, ((panda$core$Int64) { 0 }));
    if ($tmp1081.value) {
    {
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
        panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_cl));
        if (((panda$core$Bit) { p_cl->rawSuper != NULL }).value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp1083 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_cl->rawSuper);
            superCl1082 = $tmp1083;
            if (((panda$core$Bit) { superCl1082 == NULL }).value) {
            {
                panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
                return ((panda$collections$ListView*) p_cl->virtualMethods);
            }
            }
            panda$collections$ListView* $tmp1084 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self, superCl1082);
            panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(p_cl->virtualMethods, ((panda$collections$CollectionView*) $tmp1084));
        }
        }
        {
            ITable* $tmp1086 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
            while ($tmp1086->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1086 = $tmp1086->next;
            }
            $fn1088 $tmp1087 = $tmp1086->methods[0];
            panda$collections$Iterator* $tmp1089 = $tmp1087(((panda$collections$Iterable*) p_cl->methods));
            derived$Iter1085 = $tmp1089;
            $l1090:;
            ITable* $tmp1092 = derived$Iter1085->$class->itable;
            while ($tmp1092->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1092 = $tmp1092->next;
            }
            $fn1094 $tmp1093 = $tmp1092->methods[0];
            panda$core$Bit $tmp1095 = $tmp1093(derived$Iter1085);
            panda$core$Bit $tmp1096 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1095);
            if (!$tmp1096.value) goto $l1091;
            {
                ITable* $tmp1098 = derived$Iter1085->$class->itable;
                while ($tmp1098->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1098 = $tmp1098->next;
                }
                $fn1100 $tmp1099 = $tmp1098->methods[1];
                panda$core$Object* $tmp1101 = $tmp1099(derived$Iter1085);
                derived1097 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1101);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, derived1097);
                panda$core$Bit $tmp1103 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(derived1097->methodKind, ((panda$core$Int64) { 59 }));
                bool $tmp1102 = $tmp1103.value;
                if ($tmp1102) goto $l1104;
                panda$core$Bit $tmp1105 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(derived1097->annotations);
                $tmp1102 = $tmp1105.value;
                $l1104:;
                panda$core$Bit $tmp1106 = { $tmp1102 };
                if ($tmp1106.value) {
                {
                    goto $l1090;
                }
                }
                found1107 = ((panda$core$Bit) { false });
                panda$core$Int64 $tmp1109 = panda$collections$Array$get_count$R$panda$core$Int64(p_cl->virtualMethods);
                panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1108, ((panda$core$Int64) { 0 }), $tmp1109, ((panda$core$Bit) { false }));
                int64_t $tmp1111 = $tmp1108.min.value;
                panda$core$Int64 i1110 = { $tmp1111 };
                int64_t $tmp1113 = $tmp1108.max.value;
                bool $tmp1114 = $tmp1108.inclusive.value;
                if ($tmp1114) goto $l1121; else goto $l1122;
                $l1121:;
                if ($tmp1111 <= $tmp1113) goto $l1115; else goto $l1117;
                $l1122:;
                if ($tmp1111 < $tmp1113) goto $l1115; else goto $l1117;
                $l1115:;
                {
                    panda$core$Object* $tmp1124 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_cl->virtualMethods, i1110);
                    base1123 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1124);
                    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, base1123);
                    panda$core$Bit $tmp1125 = org$pandalanguage$pandac$MethodDecl$matches$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(derived1097, base1123);
                    if ($tmp1125.value) {
                    {
                        found1107 = ((panda$core$Bit) { true });
                        panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(p_cl->virtualMethods, i1110, ((panda$core$Object*) derived1097));
                        goto $l1117;
                    }
                    }
                }
                $l1118:;
                int64_t $tmp1127 = $tmp1113 - i1110.value;
                if ($tmp1114) goto $l1128; else goto $l1129;
                $l1128:;
                if ($tmp1127 >= 1) goto $l1126; else goto $l1117;
                $l1129:;
                if ($tmp1127 > 1) goto $l1126; else goto $l1117;
                $l1126:;
                i1110.value += 1;
                goto $l1115;
                $l1117:;
                panda$core$Bit $tmp1132 = panda$core$Bit$$NOT$R$panda$core$Bit(found1107);
                if ($tmp1132.value) {
                {
                    panda$collections$Array$add$panda$collections$Array$T(p_cl->virtualMethods, ((panda$core$Object*) derived1097));
                }
                }
            }
            goto $l1090;
            $l1091:;
        }
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    }
    }
    return ((panda$collections$ListView*) p_cl->virtualMethods);
}
void org$pandalanguage$pandac$Compiler$addInheritedMethods$org$pandalanguage$pandac$SymbolTable$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$SymbolTable* p_st, panda$core$String* p_name, panda$collections$Array* p_result, panda$collections$ListView* p_types) {
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$getMethodReference$org$pandalanguage$pandac$SymbolTable$org$pandalanguage$pandac$IRNode$Q$panda$core$String$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$SymbolTable* p_st, org$pandalanguage$pandac$IRNode* p_target, panda$core$String* p_name, org$pandalanguage$pandac$Position p_position, panda$collections$ListView* p_types) {
    panda$collections$Array* methods1133;
    org$pandalanguage$pandac$Symbol* s1136;
    panda$collections$Iterator* m$Iter1142;
    org$pandalanguage$pandac$MethodDecl* m1154;
    panda$collections$Iterator* p$Iter1161;
    org$pandalanguage$pandac$SymbolTable* p1173;
    panda$collections$Array* children1178;
    panda$collections$Array* types1190;
    panda$collections$Iterator* m$Iter1193;
    org$pandalanguage$pandac$MethodRef* m1205;
    panda$collections$Array* $tmp1134 = (panda$collections$Array*) malloc(40);
    $tmp1134->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1134->refCount.value = 1;
    panda$collections$Array$init($tmp1134);
    methods1133 = $tmp1134;
    org$pandalanguage$pandac$Symbol* $tmp1137 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(p_st, p_name);
    s1136 = $tmp1137;
    PANDA_ASSERT(((panda$core$Bit) { s1136 != NULL }).value);
    panda$core$Bit $tmp1138 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(s1136->kind, ((panda$core$Int64) { 204 }));
    if ($tmp1138.value) {
    {
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, ((org$pandalanguage$pandac$MethodDecl*) s1136));
        org$pandalanguage$pandac$MethodRef* $tmp1139 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
        $tmp1139->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
        $tmp1139->refCount.value = 1;
        org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp1139, ((org$pandalanguage$pandac$MethodDecl*) s1136), p_types);
        panda$collections$Array$add$panda$collections$Array$T(methods1133, ((panda$core$Object*) $tmp1139));
    }
    }
    else {
    {
        panda$core$Bit $tmp1141 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(s1136->kind, ((panda$core$Int64) { 205 }));
        PANDA_ASSERT($tmp1141.value);
        {
            ITable* $tmp1143 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s1136)->methods)->$class->itable;
            while ($tmp1143->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1143 = $tmp1143->next;
            }
            $fn1145 $tmp1144 = $tmp1143->methods[0];
            panda$collections$Iterator* $tmp1146 = $tmp1144(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s1136)->methods));
            m$Iter1142 = $tmp1146;
            $l1147:;
            ITable* $tmp1149 = m$Iter1142->$class->itable;
            while ($tmp1149->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1149 = $tmp1149->next;
            }
            $fn1151 $tmp1150 = $tmp1149->methods[0];
            panda$core$Bit $tmp1152 = $tmp1150(m$Iter1142);
            panda$core$Bit $tmp1153 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1152);
            if (!$tmp1153.value) goto $l1148;
            {
                ITable* $tmp1155 = m$Iter1142->$class->itable;
                while ($tmp1155->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1155 = $tmp1155->next;
                }
                $fn1157 $tmp1156 = $tmp1155->methods[1];
                panda$core$Object* $tmp1158 = $tmp1156(m$Iter1142);
                m1154 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1158);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m1154);
                org$pandalanguage$pandac$MethodRef* $tmp1159 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                $tmp1159->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                $tmp1159->refCount.value = 1;
                org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp1159, m1154, p_types);
                panda$collections$Array$add$panda$collections$Array$T(methods1133, ((panda$core$Object*) $tmp1159));
            }
            goto $l1147;
            $l1148:;
        }
    }
    }
    {
        ITable* $tmp1162 = ((panda$collections$Iterable*) p_st->parents)->$class->itable;
        while ($tmp1162->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1162 = $tmp1162->next;
        }
        $fn1164 $tmp1163 = $tmp1162->methods[0];
        panda$collections$Iterator* $tmp1165 = $tmp1163(((panda$collections$Iterable*) p_st->parents));
        p$Iter1161 = $tmp1165;
        $l1166:;
        ITable* $tmp1168 = p$Iter1161->$class->itable;
        while ($tmp1168->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1168 = $tmp1168->next;
        }
        $fn1170 $tmp1169 = $tmp1168->methods[0];
        panda$core$Bit $tmp1171 = $tmp1169(p$Iter1161);
        panda$core$Bit $tmp1172 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1171);
        if (!$tmp1172.value) goto $l1167;
        {
            ITable* $tmp1174 = p$Iter1161->$class->itable;
            while ($tmp1174->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1174 = $tmp1174->next;
            }
            $fn1176 $tmp1175 = $tmp1174->methods[1];
            panda$core$Object* $tmp1177 = $tmp1175(p$Iter1161);
            p1173 = ((org$pandalanguage$pandac$SymbolTable*) $tmp1177);
            org$pandalanguage$pandac$Compiler$addInheritedMethods$org$pandalanguage$pandac$SymbolTable$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p1173, p_name, methods1133, p_types);
        }
        goto $l1166;
        $l1167:;
    }
    panda$collections$Array* $tmp1179 = (panda$collections$Array*) malloc(40);
    $tmp1179->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1179->refCount.value = 1;
    panda$collections$Array$init($tmp1179);
    children1178 = $tmp1179;
    if (((panda$core$Bit) { p_target != NULL }).value) {
    {
        panda$collections$Array$add$panda$collections$Array$T(children1178, ((panda$core$Object*) p_target));
    }
    }
    panda$core$Int64 $tmp1181 = panda$collections$Array$get_count$R$panda$core$Int64(methods1133);
    panda$core$Bit $tmp1182 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1181, ((panda$core$Int64) { 1 }));
    if ($tmp1182.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp1183 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp1183->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp1183->refCount.value = 1;
        panda$core$Object* $tmp1185 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(methods1133, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Type* $tmp1186 = org$pandalanguage$pandac$MethodRef$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$MethodRef*) $tmp1185));
        panda$core$Object* $tmp1187 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(methods1133, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp1183, ((panda$core$Int64) { 1002 }), p_position, $tmp1186, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodRef*) $tmp1187)), ((panda$collections$ListView*) children1178));
        return $tmp1183;
    }
    }
    else {
    {
        panda$core$Int64 $tmp1188 = panda$collections$Array$get_count$R$panda$core$Int64(methods1133);
        panda$core$Bit $tmp1189 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1188, ((panda$core$Int64) { 0 }));
        PANDA_ASSERT($tmp1189.value);
        panda$collections$Array* $tmp1191 = (panda$collections$Array*) malloc(40);
        $tmp1191->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp1191->refCount.value = 1;
        panda$collections$Array$init($tmp1191);
        types1190 = $tmp1191;
        {
            ITable* $tmp1194 = ((panda$collections$Iterable*) methods1133)->$class->itable;
            while ($tmp1194->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1194 = $tmp1194->next;
            }
            $fn1196 $tmp1195 = $tmp1194->methods[0];
            panda$collections$Iterator* $tmp1197 = $tmp1195(((panda$collections$Iterable*) methods1133));
            m$Iter1193 = $tmp1197;
            $l1198:;
            ITable* $tmp1200 = m$Iter1193->$class->itable;
            while ($tmp1200->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1200 = $tmp1200->next;
            }
            $fn1202 $tmp1201 = $tmp1200->methods[0];
            panda$core$Bit $tmp1203 = $tmp1201(m$Iter1193);
            panda$core$Bit $tmp1204 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1203);
            if (!$tmp1204.value) goto $l1199;
            {
                ITable* $tmp1206 = m$Iter1193->$class->itable;
                while ($tmp1206->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1206 = $tmp1206->next;
                }
                $fn1208 $tmp1207 = $tmp1206->methods[1];
                panda$core$Object* $tmp1209 = $tmp1207(m$Iter1193);
                m1205 = ((org$pandalanguage$pandac$MethodRef*) $tmp1209);
                org$pandalanguage$pandac$Type* $tmp1210 = org$pandalanguage$pandac$MethodRef$type$R$org$pandalanguage$pandac$Type(m1205);
                panda$collections$Array$add$panda$collections$Array$T(types1190, ((panda$core$Object*) $tmp1210));
            }
            goto $l1198;
            $l1199:;
        }
        org$pandalanguage$pandac$IRNode* $tmp1211 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp1211->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp1211->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp1213 = (org$pandalanguage$pandac$Type*) malloc(96);
        $tmp1213->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
        $tmp1213->refCount.value = 1;
        org$pandalanguage$pandac$Type$init$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp1213, ((panda$collections$ListView*) types1190));
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp1211, ((panda$core$Int64) { 1003 }), p_position, $tmp1213, ((panda$core$Object*) methods1133), ((panda$collections$ListView*) children1178));
        return $tmp1211;
    }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$symbolRef$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$Symbol* p_s, org$pandalanguage$pandac$SymbolTable* p_st) {
    org$pandalanguage$pandac$ClassDecl* cl1215;
    org$pandalanguage$pandac$FieldDecl* f1231;
    panda$collections$Array* children1234;
    org$pandalanguage$pandac$Type* effectiveType1239;
    org$pandalanguage$pandac$IRNode* result1244;
    switch (p_s->kind.value) {
        case 200:
        {
            PANDA_ASSERT(((panda$core$Bit) { p_target == NULL }).value);
            org$pandalanguage$pandac$ClassDecl* $tmp1216 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Position$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_position, ((org$pandalanguage$pandac$Alias*) p_s)->fullName);
            cl1215 = $tmp1216;
            if (((panda$core$Bit) { cl1215 != NULL }).value) {
            {
                org$pandalanguage$pandac$Type* $tmp1217 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl1215);
                org$pandalanguage$pandac$Compiler$checkGenericParameters$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_position, cl1215, $tmp1217);
                org$pandalanguage$pandac$IRNode* $tmp1218 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1218->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1218->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1220 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$Type* $tmp1221 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl1215);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1218, ((panda$core$Int64) { 1001 }), p_position, $tmp1220, $tmp1221);
                return $tmp1218;
            }
            }
            return NULL;
        }
        break;
        case 201:
        {
            org$pandalanguage$pandac$Type* $tmp1222 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) p_s));
            org$pandalanguage$pandac$Compiler$checkGenericParameters$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_position, ((org$pandalanguage$pandac$ClassDecl*) p_s), $tmp1222);
            org$pandalanguage$pandac$IRNode* $tmp1223 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp1223->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1223->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp1225 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$Type* $tmp1226 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) p_s));
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1223, ((panda$core$Int64) { 1001 }), p_position, $tmp1225, $tmp1226);
            return $tmp1223;
        }
        break;
        case 204:
        case 205:
        {
            panda$collections$ListView* $tmp1227 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$IRNode$Q$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p_target);
            org$pandalanguage$pandac$IRNode* $tmp1228 = org$pandalanguage$pandac$Compiler$getMethodReference$org$pandalanguage$pandac$SymbolTable$org$pandalanguage$pandac$IRNode$Q$panda$core$String$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$IRNode(self, p_st, p_target, p_s->name, p_position, $tmp1227);
            return $tmp1228;
        }
        break;
        case 208:
        {
            org$pandalanguage$pandac$IRNode* $tmp1229 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp1229->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1229->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp1229, ((panda$core$Int64) { 1016 }), p_position, ((org$pandalanguage$pandac$Variable*) p_s)->type, ((org$pandalanguage$pandac$Variable*) p_s));
            return $tmp1229;
        }
        break;
        case 202:
        {
            f1231 = ((org$pandalanguage$pandac$FieldDecl*) p_s);
            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self, f1231);
            org$pandalanguage$pandac$Type* $tmp1232 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1233 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(f1231->type, $tmp1232);
            if ($tmp1233.value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp1235 = (panda$collections$Array*) malloc(40);
            $tmp1235->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1235->refCount.value = 1;
            panda$collections$Array$init($tmp1235);
            children1234 = $tmp1235;
            if (((panda$core$Bit) { p_target != NULL }).value) {
            {
                panda$core$Bit $tmp1237 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1024 }));
                if ($tmp1237.value) {
                {
                    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_target->position, &$s1238);
                    return NULL;
                }
                }
                org$pandalanguage$pandac$Type* $tmp1240 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_target->type, f1231->type);
                effectiveType1239 = $tmp1240;
                panda$core$Bit $tmp1241 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(f1231->annotations);
                if ($tmp1241.value) {
                {
                    panda$collections$Array$add$panda$collections$Array$T(children1234, ((panda$core$Object*) p_target));
                }
                }
                else {
                {
                    org$pandalanguage$pandac$Type* $tmp1242 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(f1231->owner);
                    org$pandalanguage$pandac$IRNode* $tmp1243 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_target, $tmp1242);
                    panda$collections$Array$add$panda$collections$Array$T(children1234, ((panda$core$Object*) $tmp1243));
                }
                }
                org$pandalanguage$pandac$IRNode* $tmp1245 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1245->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1245->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp1245, ((panda$core$Int64) { 1026 }), p_position, f1231->type, ((panda$core$Object*) p_s), ((panda$collections$ListView*) children1234));
                result1244 = $tmp1245;
                panda$core$Bit $tmp1247 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(effectiveType1239, result1244->type);
                if ($tmp1247.value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp1248 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, result1244, p_position, ((panda$core$Bit) { false }), effectiveType1239);
                    result1244 = $tmp1248;
                }
                }
                return result1244;
            }
            }
            else {
            {
                org$pandalanguage$pandac$IRNode* $tmp1249 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1249->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1249->refCount.value = 1;
                panda$core$Object* $tmp1251 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
                org$pandalanguage$pandac$Type* $tmp1252 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp1251));
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp1249, ((panda$core$Int64) { 1025 }), p_position, $tmp1252);
                panda$collections$Array$add$panda$collections$Array$T(children1234, ((panda$core$Object*) $tmp1249));
                org$pandalanguage$pandac$IRNode* $tmp1253 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1253->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1253->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp1253, ((panda$core$Int64) { 1026 }), p_position, f1231->type, ((panda$core$Object*) p_s), ((panda$collections$ListView*) children1234));
                return $tmp1253;
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
    panda$collections$HashMap* typeMap1261;
    org$pandalanguage$pandac$Type* base1264;
    org$pandalanguage$pandac$ClassDecl* cl1266;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1268;
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
            panda$core$Int64 $tmp1255 = panda$collections$Array$get_count$R$panda$core$Int64(p_context->subtypes);
            panda$core$Bit $tmp1256 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1255, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp1256.value);
            panda$core$Object* $tmp1257 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_context->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp1258 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$Type*) $tmp1257), p_raw);
            return $tmp1258;
        }
        break;
        case 21:
        {
            panda$core$Int64 $tmp1259 = panda$collections$Array$get_count$R$panda$core$Int64(p_context->subtypes);
            panda$core$Bit $tmp1260 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp1259, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1260.value);
            panda$collections$HashMap* $tmp1262 = (panda$collections$HashMap*) malloc(56);
            $tmp1262->$class = (panda$core$Class*) &panda$collections$HashMap$class;
            $tmp1262->refCount.value = 1;
            panda$collections$HashMap$init($tmp1262);
            typeMap1261 = $tmp1262;
            panda$core$Object* $tmp1265 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_context->subtypes, ((panda$core$Int64) { 0 }));
            base1264 = ((org$pandalanguage$pandac$Type*) $tmp1265);
            org$pandalanguage$pandac$ClassDecl* $tmp1267 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Symbol*) base1264)->name);
            cl1266 = $tmp1267;
            PANDA_ASSERT(((panda$core$Bit) { cl1266 != NULL }).value);
            panda$core$Int64 $tmp1269 = panda$collections$Array$get_count$R$panda$core$Int64(p_context->subtypes);
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1268, ((panda$core$Int64) { 1 }), $tmp1269, ((panda$core$Bit) { false }));
            int64_t $tmp1271 = $tmp1268.min.value;
            panda$core$Int64 i1270 = { $tmp1271 };
            int64_t $tmp1273 = $tmp1268.max.value;
            bool $tmp1274 = $tmp1268.inclusive.value;
            if ($tmp1274) goto $l1281; else goto $l1282;
            $l1281:;
            if ($tmp1271 <= $tmp1273) goto $l1275; else goto $l1277;
            $l1282:;
            if ($tmp1271 < $tmp1273) goto $l1275; else goto $l1277;
            $l1275:;
            {
                panda$core$String* $tmp1284 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) cl1266)->name, &$s1283);
                panda$core$Int64 $tmp1285 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i1270, ((panda$core$Int64) { 1 }));
                ITable* $tmp1286 = ((panda$collections$ListView*) cl1266->parameters)->$class->itable;
                while ($tmp1286->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp1286 = $tmp1286->next;
                }
                $fn1288 $tmp1287 = $tmp1286->methods[0];
                panda$core$Object* $tmp1289 = $tmp1287(((panda$collections$ListView*) cl1266->parameters), $tmp1285);
                panda$core$String* $tmp1290 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1284, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp1289))->name);
                panda$core$Object* $tmp1291 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_context->subtypes, i1270);
                panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(typeMap1261, ((panda$collections$Key*) $tmp1290), ((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp1291)));
            }
            $l1278:;
            int64_t $tmp1293 = $tmp1273 - i1270.value;
            if ($tmp1274) goto $l1294; else goto $l1295;
            $l1294:;
            if ($tmp1293 >= 1) goto $l1292; else goto $l1277;
            $l1295:;
            if ($tmp1293 > 1) goto $l1292; else goto $l1277;
            $l1292:;
            i1270.value += 1;
            goto $l1275;
            $l1277:;
            org$pandalanguage$pandac$Type* $tmp1298 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(p_raw, typeMap1261);
            return $tmp1298;
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
    org$pandalanguage$pandac$Type* $tmp1299 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1300 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_type, $tmp1299);
    if ($tmp1300.value) {
    {
        org$pandalanguage$pandac$Type* $tmp1301 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
        return $tmp1301;
    }
    }
    org$pandalanguage$pandac$Type* $tmp1302 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1303 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_type, $tmp1302);
    if ($tmp1303.value) {
    {
        org$pandalanguage$pandac$Type* $tmp1304 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
        return $tmp1304;
    }
    }
    panda$core$Bit $tmp1305 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 23 }));
    if ($tmp1305.value) {
    {
        org$pandalanguage$pandac$Type* $tmp1306 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
        return $tmp1306;
    }
    }
    return p_type;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    org$pandalanguage$pandac$Type* step1333;
    panda$collections$ImmutableArray* args1360;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1361;
    org$pandalanguage$pandac$IRNode* c1363;
    switch (p_expr->kind.value) {
        case 1031:
        {
            panda$core$Int64 $tmp1307 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_expr->children);
            panda$core$Bit $tmp1308 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1307, ((panda$core$Int64) { 2 }));
            if ($tmp1308.value) {
            {
                panda$core$Object* $tmp1309 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Bit $tmp1310 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1309)->kind, ((panda$core$Int64) { 1030 }));
                if ($tmp1310.value) {
                {
                    panda$core$Object* $tmp1311 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                    panda$core$Bit $tmp1312 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1311)->kind, ((panda$core$Int64) { 1030 }));
                    if ($tmp1312.value) {
                    {
                        org$pandalanguage$pandac$Type* $tmp1313 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
                        org$pandalanguage$pandac$Type* $tmp1314 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1313);
                        org$pandalanguage$pandac$Type* $tmp1315 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1314);
                        return $tmp1315;
                    }
                    }
                    panda$core$Object* $tmp1316 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                    org$pandalanguage$pandac$Type* $tmp1317 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$IRNode*) $tmp1316)->type);
                    org$pandalanguage$pandac$Type* $tmp1318 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1317);
                    org$pandalanguage$pandac$Type* $tmp1319 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1318);
                    return $tmp1319;
                }
                }
                panda$core$Object* $tmp1320 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                panda$core$Bit $tmp1321 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1320)->kind, ((panda$core$Int64) { 1030 }));
                if ($tmp1321.value) {
                {
                    panda$core$Object* $tmp1322 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                    org$pandalanguage$pandac$Type* $tmp1323 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$IRNode*) $tmp1322)->type);
                    org$pandalanguage$pandac$Type* $tmp1324 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1323);
                    org$pandalanguage$pandac$Type* $tmp1325 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1324);
                    return $tmp1325;
                }
                }
                panda$core$Object* $tmp1326 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp1327 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$IRNode*) $tmp1326)->type);
                panda$core$Object* $tmp1328 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$Type* $tmp1329 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$IRNode*) $tmp1328)->type);
                org$pandalanguage$pandac$Type* $tmp1330 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1327, $tmp1329);
                org$pandalanguage$pandac$Type* $tmp1331 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, $tmp1330);
                org$pandalanguage$pandac$Type* $tmp1332 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1331);
                return $tmp1332;
            }
            }
            panda$core$Object* $tmp1334 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 2 }));
            org$pandalanguage$pandac$Type* $tmp1335 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$IRNode*) $tmp1334)->type);
            step1333 = $tmp1335;
            panda$core$Object* $tmp1336 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp1337 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1336)->kind, ((panda$core$Int64) { 1030 }));
            if ($tmp1337.value) {
            {
                panda$core$Object* $tmp1338 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                panda$core$Bit $tmp1339 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1338)->kind, ((panda$core$Int64) { 1030 }));
                if ($tmp1339.value) {
                {
                    org$pandalanguage$pandac$Type* $tmp1340 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
                    org$pandalanguage$pandac$Type* $tmp1341 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1340);
                    org$pandalanguage$pandac$Type* $tmp1342 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1341, step1333);
                    return $tmp1342;
                }
                }
                panda$core$Object* $tmp1343 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$Type* $tmp1344 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$IRNode*) $tmp1343)->type);
                org$pandalanguage$pandac$Type* $tmp1345 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1344);
                org$pandalanguage$pandac$Type* $tmp1346 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1345, step1333);
                return $tmp1346;
            }
            }
            panda$core$Object* $tmp1347 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
            panda$core$Bit $tmp1348 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1347)->kind, ((panda$core$Int64) { 1030 }));
            if ($tmp1348.value) {
            {
                panda$core$Object* $tmp1349 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp1350 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$IRNode*) $tmp1349)->type);
                org$pandalanguage$pandac$Type* $tmp1351 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1350);
                org$pandalanguage$pandac$Type* $tmp1352 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1351, step1333);
                return $tmp1352;
            }
            }
            panda$core$Object* $tmp1353 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp1354 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$IRNode*) $tmp1353)->type);
            panda$core$Object* $tmp1355 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
            org$pandalanguage$pandac$Type* $tmp1356 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$IRNode*) $tmp1355)->type);
            org$pandalanguage$pandac$Type* $tmp1357 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1354, $tmp1356);
            org$pandalanguage$pandac$Type* $tmp1358 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, $tmp1357);
            org$pandalanguage$pandac$Type* $tmp1359 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1358, step1333);
            return $tmp1359;
        }
        break;
        case 1040:
        {
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1361, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$collections$ImmutableArray* $tmp1362 = panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(p_expr->children, $tmp1361);
            args1360 = $tmp1362;
            panda$core$Object* $tmp1364 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp1366 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1364), &$s1365, ((panda$collections$ListView*) args1360));
            c1363 = $tmp1366;
            if (((panda$core$Bit) { c1363 == NULL }).value) {
            {
                org$pandalanguage$pandac$Type* $tmp1367 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
                return $tmp1367;
            }
            }
            return c1363->type;
        }
        break;
    }
    org$pandalanguage$pandac$Type* $tmp1368 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_expr->type);
    return $tmp1368;
}
panda$core$Int64$nullable org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type, org$pandalanguage$pandac$Type* p_target) {
    panda$core$Int64$nullable result1379;
    panda$core$Int64$nullable result1383;
    panda$core$Int64$nullable best1392;
    panda$collections$Iterator* t$Iter1393;
    org$pandalanguage$pandac$Type* t1405;
    panda$core$Int64$nullable cost1410;
    org$pandalanguage$pandac$ClassDecl* cl1424;
    panda$core$Int64$nullable cost1426;
    panda$collections$Iterator* intf$Iter1431;
    org$pandalanguage$pandac$Type* intf1443;
    panda$core$Int64$nullable cost1448;
    PANDA_ASSERT(p_type->resolved.value);
    PANDA_ASSERT(p_target->resolved.value);
    panda$core$Bit $tmp1369 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_type, p_target);
    if ($tmp1369.value) {
    {
        return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
    }
    }
    org$pandalanguage$pandac$Type* $tmp1370 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1371 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_type, $tmp1370);
    if ($tmp1371.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    panda$core$Bit $tmp1372 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 23 }));
    if ($tmp1372.value) {
    {
        panda$core$Bit $tmp1373 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp1373.value) {
        {
            return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
        }
        }
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    panda$core$Bit $tmp1375 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 11 }));
    bool $tmp1374 = $tmp1375.value;
    if (!$tmp1374) goto $l1376;
    panda$core$Bit $tmp1377 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
    $tmp1374 = $tmp1377.value;
    $l1376:;
    panda$core$Bit $tmp1378 = { $tmp1374 };
    if ($tmp1378.value) {
    {
        panda$core$Object* $tmp1380 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Int64$nullable $tmp1381 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$Type*) $tmp1380), p_target);
        result1379 = $tmp1381;
        if (((panda$core$Bit) { !result1379.nonnull }).value) {
        {
            return ((panda$core$Int64$nullable) { .nonnull = false });
        }
        }
        panda$core$Int64 $tmp1382 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) result1379.value), ((panda$core$Int64) { 2 }));
        return ((panda$core$Int64$nullable) { $tmp1382, true });
    }
    }
    switch (p_target->typeKind.value) {
        case 11:
        {
            panda$core$Object* $tmp1384 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$Int64$nullable $tmp1385 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_type, ((org$pandalanguage$pandac$Type*) $tmp1384));
            result1383 = $tmp1385;
            if (((panda$core$Bit) { !result1383.nonnull }).value) {
            {
                return ((panda$core$Int64$nullable) { .nonnull = false });
            }
            }
            panda$core$Int64 $tmp1386 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) result1383.value), ((panda$core$Int64) { 1 }));
            return ((panda$core$Int64$nullable) { $tmp1386, true });
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
            panda$core$Bit $tmp1387 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 21 }));
            if ($tmp1387.value) {
            {
                panda$core$Object* $tmp1388 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
                panda$core$Int64$nullable $tmp1389 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$Type*) $tmp1388), p_target);
                return $tmp1389;
            }
            }
        }
        break;
    }
    switch (p_type->typeKind.value) {
        case 19:
        {
            org$pandalanguage$pandac$Type* $tmp1390 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            panda$core$Int64$nullable $tmp1391 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1390, p_target);
            return $tmp1391;
        }
        break;
        case 17:
        {
            best1392 = ((panda$core$Int64$nullable) { .nonnull = false });
            {
                ITable* $tmp1394 = ((panda$collections$Iterable*) p_type->subtypes)->$class->itable;
                while ($tmp1394->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1394 = $tmp1394->next;
                }
                $fn1396 $tmp1395 = $tmp1394->methods[0];
                panda$collections$Iterator* $tmp1397 = $tmp1395(((panda$collections$Iterable*) p_type->subtypes));
                t$Iter1393 = $tmp1397;
                $l1398:;
                ITable* $tmp1400 = t$Iter1393->$class->itable;
                while ($tmp1400->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1400 = $tmp1400->next;
                }
                $fn1402 $tmp1401 = $tmp1400->methods[0];
                panda$core$Bit $tmp1403 = $tmp1401(t$Iter1393);
                panda$core$Bit $tmp1404 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1403);
                if (!$tmp1404.value) goto $l1399;
                {
                    ITable* $tmp1406 = t$Iter1393->$class->itable;
                    while ($tmp1406->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1406 = $tmp1406->next;
                    }
                    $fn1408 $tmp1407 = $tmp1406->methods[1];
                    panda$core$Object* $tmp1409 = $tmp1407(t$Iter1393);
                    t1405 = ((org$pandalanguage$pandac$Type*) $tmp1409);
                    panda$core$Int64$nullable $tmp1411 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, t1405, p_target);
                    cost1410 = $tmp1411;
                    bool $tmp1412 = ((panda$core$Bit) { cost1410.nonnull }).value;
                    if (!$tmp1412) goto $l1413;
                    bool $tmp1414 = ((panda$core$Bit) { !best1392.nonnull }).value;
                    if ($tmp1414) goto $l1415;
                    panda$core$Bit $tmp1416 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost1410.value), ((panda$core$Int64) best1392.value));
                    $tmp1414 = $tmp1416.value;
                    $l1415:;
                    panda$core$Bit $tmp1417 = { $tmp1414 };
                    $tmp1412 = $tmp1417.value;
                    $l1413:;
                    panda$core$Bit $tmp1418 = { $tmp1412 };
                    if ($tmp1418.value) {
                    {
                        best1392 = cost1410;
                    }
                    }
                }
                goto $l1398;
                $l1399:;
            }
            return best1392;
        }
        break;
        case 22:
        {
            panda$core$Int64$nullable $tmp1419 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_type->parameter->bound, p_target);
            return $tmp1419;
        }
        break;
    }
    panda$core$Bit $tmp1420 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_target);
    panda$core$Bit $tmp1421 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1420);
    if ($tmp1421.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    panda$core$Bit $tmp1422 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_type);
    panda$core$Bit $tmp1423 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1422);
    if ($tmp1423.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp1425 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_type);
    cl1424 = $tmp1425;
    PANDA_ASSERT(((panda$core$Bit) { cl1424 != NULL }).value);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, cl1424);
    if (((panda$core$Bit) { cl1424->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp1427 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_type, cl1424->rawSuper);
        org$pandalanguage$pandac$Type* $tmp1428 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_type, $tmp1427);
        panda$core$Int64$nullable $tmp1429 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1428, p_target);
        cost1426 = $tmp1429;
        if (((panda$core$Bit) { cost1426.nonnull }).value) {
        {
            panda$core$Int64 $tmp1430 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) cost1426.value), ((panda$core$Int64) ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }).value));
            return ((panda$core$Int64$nullable) { $tmp1430, true });
        }
        }
    }
    }
    {
        ITable* $tmp1432 = ((panda$collections$Iterable*) cl1424->rawInterfaces)->$class->itable;
        while ($tmp1432->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1432 = $tmp1432->next;
        }
        $fn1434 $tmp1433 = $tmp1432->methods[0];
        panda$collections$Iterator* $tmp1435 = $tmp1433(((panda$collections$Iterable*) cl1424->rawInterfaces));
        intf$Iter1431 = $tmp1435;
        $l1436:;
        ITable* $tmp1438 = intf$Iter1431->$class->itable;
        while ($tmp1438->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1438 = $tmp1438->next;
        }
        $fn1440 $tmp1439 = $tmp1438->methods[0];
        panda$core$Bit $tmp1441 = $tmp1439(intf$Iter1431);
        panda$core$Bit $tmp1442 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1441);
        if (!$tmp1442.value) goto $l1437;
        {
            ITable* $tmp1444 = intf$Iter1431->$class->itable;
            while ($tmp1444->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1444 = $tmp1444->next;
            }
            $fn1446 $tmp1445 = $tmp1444->methods[1];
            panda$core$Object* $tmp1447 = $tmp1445(intf$Iter1431);
            intf1443 = ((org$pandalanguage$pandac$Type*) $tmp1447);
            org$pandalanguage$pandac$Type* $tmp1449 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_type, intf1443);
            org$pandalanguage$pandac$Type* $tmp1450 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_type, $tmp1449);
            panda$core$Int64$nullable $tmp1451 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1450, p_target);
            cost1448 = $tmp1451;
            if (((panda$core$Bit) { cost1448.nonnull }).value) {
            {
                panda$core$Int64 $tmp1452 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) cost1448.value), ((panda$core$Int64) ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }).value));
                return ((panda$core$Int64$nullable) { $tmp1452, true });
            }
            }
        }
        goto $l1436;
        $l1437:;
    }
    return ((panda$core$Int64$nullable) { .nonnull = false });
}
panda$core$Int64 org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_value) {
    panda$core$Bit $tmp1454 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { -128 }));
    bool $tmp1453 = $tmp1454.value;
    if (!$tmp1453) goto $l1455;
    panda$core$Bit $tmp1456 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { 127 }));
    $tmp1453 = $tmp1456.value;
    $l1455:;
    panda$core$Bit $tmp1457 = { $tmp1453 };
    if ($tmp1457.value) {
    {
        return ((panda$core$Int64) { 8 });
    }
    }
    panda$core$Bit $tmp1459 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { -32768 }));
    bool $tmp1458 = $tmp1459.value;
    if (!$tmp1458) goto $l1460;
    panda$core$Bit $tmp1461 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { 32767 }));
    $tmp1458 = $tmp1461.value;
    $l1460:;
    panda$core$Bit $tmp1462 = { $tmp1458 };
    if ($tmp1462.value) {
    {
        return ((panda$core$Int64) { 16 });
    }
    }
    panda$core$Bit $tmp1464 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { -2147483648 }));
    bool $tmp1463 = $tmp1464.value;
    if (!$tmp1463) goto $l1465;
    panda$core$Bit $tmp1466 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { 2147483647 }));
    $tmp1463 = $tmp1466.value;
    $l1465:;
    panda$core$Bit $tmp1467 = { $tmp1463 };
    if ($tmp1467.value) {
    {
        return ((panda$core$Int64) { 32 });
    }
    }
    return ((panda$core$Int64) { 64 });
}
panda$core$Int64 org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64(org$pandalanguage$pandac$Compiler* self, panda$core$UInt64 p_value) {
    panda$core$Bit $tmp1468 = panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(p_value, ((panda$core$UInt64) { 255 }));
    if ($tmp1468.value) {
    {
        return ((panda$core$Int64) { 8 });
    }
    }
    panda$core$Bit $tmp1469 = panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(p_value, ((panda$core$UInt64) { 65535 }));
    if ($tmp1469.value) {
    {
        return ((panda$core$Int64) { 16 });
    }
    }
    panda$core$Bit $tmp1470 = panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(p_value, ((panda$core$UInt64) { 4294967295 }));
    if ($tmp1470.value) {
    {
        return ((panda$core$Int64) { 32 });
    }
    }
    return ((panda$core$Int64) { 64 });
}
panda$core$Int64$nullable org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr, org$pandalanguage$pandac$Type* p_target) {
    panda$core$Int64 base1471;
    panda$core$Int64$nullable cost1485;
    panda$core$String* s1549;
    panda$collections$Iterator* utf161560;
    panda$core$Int64$nullable cost11596;
    panda$core$Int64$nullable cost21600;
    panda$core$Int64 cost1609;
    panda$core$Int64$nullable cost11623;
    panda$core$Int64$nullable cost21627;
    panda$core$Int64$nullable cost31632;
    panda$collections$Array* args1640;
    org$pandalanguage$pandac$ClassDecl* targetClass1651;
    panda$collections$Iterator* m$Iter1653;
    org$pandalanguage$pandac$MethodDecl* m1665;
    panda$core$Int64$nullable cost1674;
    panda$core$Int64$nullable cost1678;
    base1471 = ((panda$core$Int64) { 0 });
    panda$core$Bit $tmp1474 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1033 }));
    bool $tmp1473 = $tmp1474.value;
    if (!$tmp1473) goto $l1475;
    panda$core$Bit $tmp1476 = org$pandalanguage$pandac$Type$isChar$R$panda$core$Bit(p_target);
    panda$core$Bit $tmp1477 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1476);
    $tmp1473 = $tmp1477.value;
    $l1475:;
    panda$core$Bit $tmp1478 = { $tmp1473 };
    bool $tmp1472 = $tmp1478.value;
    if (!$tmp1472) goto $l1479;
    panda$core$Int64 $tmp1480 = panda$core$String$length$R$panda$core$Int64(((panda$core$String*) p_expr->payload));
    panda$core$Bit $tmp1481 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1480, ((panda$core$Int64) { 1 }));
    $tmp1472 = $tmp1481.value;
    $l1479:;
    panda$core$Bit $tmp1482 = { $tmp1472 };
    if ($tmp1482.value) {
    {
        base1471 = ((panda$core$Int64) { 3 });
    }
    }
    panda$core$Bit $tmp1483 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_expr->type, p_target);
    if ($tmp1483.value) {
    {
        return ((panda$core$Int64$nullable) { base1471, true });
    }
    }
    switch (p_target->typeKind.value) {
        case 11:
        {
            panda$core$Bit $tmp1484 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1030 }));
            if ($tmp1484.value) {
            {
                return ((panda$core$Int64$nullable) { base1471, true });
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
                panda$core$Int64 $tmp1489 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(base1471, ((panda$core$Int64) cost1485.value));
                return ((panda$core$Int64$nullable) { $tmp1489, true });
            }
            }
            panda$core$Int64 $tmp1490 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(base1471, ((panda$core$Int64) cost1485.value));
            panda$core$Int64 $tmp1491 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1490, ((panda$core$Int64) { 1 }));
            return ((panda$core$Int64$nullable) { $tmp1491, true });
        }
        break;
        case 22:
        {
            panda$core$Bit $tmp1492 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(base1471, ((panda$core$Int64) { 0 }));
            PANDA_ASSERT($tmp1492.value);
            panda$core$Int64$nullable $tmp1493 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, p_target->parameter->bound);
            return $tmp1493;
        }
        break;
    }
    switch (p_expr->kind.value) {
        case 1011:
        {
            panda$core$Bit $tmp1494 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 19 }));
            if ($tmp1494.value) {
            {
                return ((panda$core$Int64$nullable) { base1471, true });
            }
            }
            panda$core$Bit $tmp1495 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_target);
            if ($tmp1495.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1496 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
                panda$core$Int64$nullable $tmp1497 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1496, p_target);
                return $tmp1497;
            }
            }
        }
        break;
        case 1004:
        {
            panda$core$Bit $tmp1500 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            bool $tmp1499 = $tmp1500.value;
            if (!$tmp1499) goto $l1501;
            panda$core$Int64 $tmp1502 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1503 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(self, $tmp1502);
            panda$core$Int64 $tmp1504 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1505 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1503, $tmp1504);
            $tmp1499 = $tmp1505.value;
            $l1501:;
            panda$core$Bit $tmp1506 = { $tmp1499 };
            bool $tmp1498 = $tmp1506.value;
            if ($tmp1498) goto $l1507;
            panda$core$Bit $tmp1509 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 13 }));
            bool $tmp1508 = $tmp1509.value;
            if (!$tmp1508) goto $l1510;
            panda$core$Int64 $tmp1511 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64(self, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1512 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1513 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1511, $tmp1512);
            $tmp1508 = $tmp1513.value;
            $l1510:;
            panda$core$Bit $tmp1514 = { $tmp1508 };
            $tmp1498 = $tmp1514.value;
            $l1507:;
            panda$core$Bit $tmp1515 = { $tmp1498 };
            if ($tmp1515.value) {
            {
                return ((panda$core$Int64$nullable) { base1471, true });
            }
            }
            panda$core$Bit $tmp1516 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            panda$core$Bit $tmp1517 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1516);
            if ($tmp1517.value) {
            {
                panda$core$Bit $tmp1518 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(base1471, ((panda$core$Int64) { 0 }));
                PANDA_ASSERT($tmp1518.value);
                org$pandalanguage$pandac$Type* $tmp1519 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                panda$core$Int64$nullable $tmp1520 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1519, p_target);
                return $tmp1520;
            }
            }
        }
        break;
        case 1032:
        {
            panda$core$Bit $tmp1523 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            bool $tmp1522 = $tmp1523.value;
            if (!$tmp1522) goto $l1524;
            panda$core$Int64 $tmp1525 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1526 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp1525);
            panda$core$Int64 $tmp1527 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(self, $tmp1526);
            panda$core$Int64 $tmp1528 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1529 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1527, $tmp1528);
            $tmp1522 = $tmp1529.value;
            $l1524:;
            panda$core$Bit $tmp1530 = { $tmp1522 };
            bool $tmp1521 = $tmp1530.value;
            if ($tmp1521) goto $l1531;
            panda$core$Bit $tmp1533 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 13 }));
            bool $tmp1532 = $tmp1533.value;
            if (!$tmp1532) goto $l1534;
            panda$core$Int64 $tmp1535 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1536 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp1535);
            panda$core$Int64 $tmp1537 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(self, $tmp1536);
            panda$core$Int64 $tmp1538 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1539 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1537, $tmp1538);
            $tmp1532 = $tmp1539.value;
            $l1534:;
            panda$core$Bit $tmp1540 = { $tmp1532 };
            $tmp1521 = $tmp1540.value;
            $l1531:;
            panda$core$Bit $tmp1541 = { $tmp1521 };
            if ($tmp1541.value) {
            {
                return ((panda$core$Int64$nullable) { base1471, true });
            }
            }
            panda$core$Bit $tmp1542 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            panda$core$Bit $tmp1543 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1542);
            if ($tmp1543.value) {
            {
                panda$core$Bit $tmp1544 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(base1471, ((panda$core$Int64) { 0 }));
                PANDA_ASSERT($tmp1544.value);
                org$pandalanguage$pandac$Type* $tmp1545 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                panda$core$Int64$nullable $tmp1546 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1545, p_target);
                return $tmp1546;
            }
            }
        }
        break;
        case 1033:
        {
            org$pandalanguage$pandac$Type* $tmp1547 = org$pandalanguage$pandac$Type$Char8$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1548 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1547);
            if ($tmp1548.value) {
            {
                s1549 = ((panda$core$String*) p_expr->payload);
                panda$core$Int64 $tmp1551 = panda$core$String$length$R$panda$core$Int64(s1549);
                panda$core$Bit $tmp1552 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1551, ((panda$core$Int64) { 1 }));
                bool $tmp1550 = $tmp1552.value;
                if (!$tmp1550) goto $l1553;
                panda$core$Char32 $tmp1554 = panda$core$String$$IDX$panda$core$Int64$R$panda$core$Char32(s1549, ((panda$core$Int64) { 0 }));
                panda$core$UInt32 $tmp1555 = panda$core$Char32$convert$R$panda$core$UInt32($tmp1554);
                panda$core$Bit $tmp1556 = panda$core$UInt32$$LE$panda$core$UInt32$R$panda$core$Bit($tmp1555, ((panda$core$UInt32) { 255 }));
                $tmp1550 = $tmp1556.value;
                $l1553:;
                panda$core$Bit $tmp1557 = { $tmp1550 };
                if ($tmp1557.value) {
                {
                    return ((panda$core$Int64$nullable) { base1471, true });
                }
                }
                return ((panda$core$Int64$nullable) { .nonnull = false });
            }
            }
            org$pandalanguage$pandac$Type* $tmp1558 = org$pandalanguage$pandac$Type$Char16$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1559 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1558);
            if ($tmp1559.value) {
            {
                panda$collections$Iterator* $tmp1561 = panda$core$String$utf16$R$panda$collections$Iterator$LTpanda$core$Char16$GT(((panda$core$String*) p_expr->payload));
                utf161560 = $tmp1561;
                ITable* $tmp1562 = utf161560->$class->itable;
                while ($tmp1562->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1562 = $tmp1562->next;
                }
                $fn1564 $tmp1563 = $tmp1562->methods[0];
                panda$core$Bit $tmp1565 = $tmp1563(utf161560);
                if ($tmp1565.value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                ITable* $tmp1566 = utf161560->$class->itable;
                while ($tmp1566->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1566 = $tmp1566->next;
                }
                $fn1568 $tmp1567 = $tmp1566->methods[1];
                $tmp1567(utf161560);
                ITable* $tmp1569 = utf161560->$class->itable;
                while ($tmp1569->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1569 = $tmp1569->next;
                }
                $fn1571 $tmp1570 = $tmp1569->methods[0];
                panda$core$Bit $tmp1572 = $tmp1570(utf161560);
                if ($tmp1572.value) {
                {
                    panda$core$Int64 $tmp1573 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(base1471, ((panda$core$Int64) { 1 }));
                    return ((panda$core$Int64$nullable) { $tmp1573, true });
                }
                }
                return ((panda$core$Int64$nullable) { .nonnull = false });
            }
            }
            org$pandalanguage$pandac$Type* $tmp1574 = org$pandalanguage$pandac$Type$Char32$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1575 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1574);
            if ($tmp1575.value) {
            {
                panda$core$Int64 $tmp1576 = panda$core$String$length$R$panda$core$Int64(((panda$core$String*) p_expr->payload));
                panda$core$Bit $tmp1577 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1576, ((panda$core$Int64) { 1 }));
                if ($tmp1577.value) {
                {
                    panda$core$Int64 $tmp1578 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(base1471, ((panda$core$Int64) { 2 }));
                    return ((panda$core$Int64$nullable) { $tmp1578, true });
                }
                }
                return ((panda$core$Int64$nullable) { .nonnull = false });
            }
            }
        }
        break;
        case 1031:
        {
            panda$core$Bit $tmp1579 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(p_target);
            if ($tmp1579.value) {
            {
                panda$core$Int64 $tmp1580 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_expr->children);
                panda$core$Bit $tmp1581 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1580, ((panda$core$Int64) { 2 }));
                if ($tmp1581.value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Object* $tmp1583 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Bit $tmp1584 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1583)->kind, ((panda$core$Int64) { 1030 }));
                bool $tmp1582 = $tmp1584.value;
                if (!$tmp1582) goto $l1585;
                panda$core$Object* $tmp1586 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                panda$core$Bit $tmp1587 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1586)->kind, ((panda$core$Int64) { 1030 }));
                $tmp1582 = $tmp1587.value;
                $l1585:;
                panda$core$Bit $tmp1588 = { $tmp1582 };
                if ($tmp1588.value) {
                {
                    panda$core$Object* $tmp1589 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                    panda$core$Bit $tmp1590 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1589)->typeKind, ((panda$core$Int64) { 11 }));
                    if ($tmp1590.value) {
                    {
                        panda$core$Object* $tmp1591 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                        panda$core$Object* $tmp1592 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$Type*) $tmp1591)->subtypes, ((panda$core$Int64) { 0 }));
                        panda$core$Bit $tmp1593 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1592));
                        if ($tmp1593.value) {
                        {
                            return ((panda$core$Int64$nullable) { base1471, true });
                        }
                        }
                        panda$core$Int64 $tmp1594 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(base1471, ((panda$core$Int64) { 1 }));
                        return ((panda$core$Int64$nullable) { $tmp1594, true });
                    }
                    }
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Bit $tmp1595 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 21 }));
                PANDA_ASSERT($tmp1595.value);
                panda$core$Object* $tmp1597 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Object* $tmp1598 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                panda$core$Int64$nullable $tmp1599 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1597), ((org$pandalanguage$pandac$Type*) $tmp1598));
                cost11596 = $tmp1599;
                if (((panda$core$Bit) { !cost11596.nonnull }).value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Object* $tmp1601 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                panda$core$Object* $tmp1602 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                panda$core$Int64$nullable $tmp1603 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1601), ((org$pandalanguage$pandac$Type*) $tmp1602));
                cost21600 = $tmp1603;
                if (((panda$core$Bit) { !cost21600.nonnull }).value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Int64 $tmp1604 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(base1471, ((panda$core$Int64) cost11596.value));
                panda$core$Int64 $tmp1605 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1604, ((panda$core$Int64) cost21600.value));
                return ((panda$core$Int64$nullable) { $tmp1605, true });
            }
            }
            panda$core$Bit $tmp1606 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(p_target);
            if ($tmp1606.value) {
            {
                panda$core$Int64 $tmp1607 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_expr->children);
                panda$core$Bit $tmp1608 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1607, ((panda$core$Int64) { 3 }));
                if ($tmp1608.value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Object* $tmp1611 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Bit $tmp1612 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1611)->kind, ((panda$core$Int64) { 1030 }));
                bool $tmp1610 = $tmp1612.value;
                if (!$tmp1610) goto $l1613;
                panda$core$Object* $tmp1614 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                panda$core$Bit $tmp1615 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1614)->kind, ((panda$core$Int64) { 1030 }));
                $tmp1610 = $tmp1615.value;
                $l1613:;
                panda$core$Bit $tmp1616 = { $tmp1610 };
                if ($tmp1616.value) {
                {
                    panda$core$Object* $tmp1617 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                    panda$core$Bit $tmp1618 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1617)->typeKind, ((panda$core$Int64) { 11 }));
                    if ($tmp1618.value) {
                    {
                        panda$core$Object* $tmp1619 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                        panda$core$Object* $tmp1620 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$Type*) $tmp1619)->subtypes, ((panda$core$Int64) { 0 }));
                        panda$core$Bit $tmp1621 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1620));
                        if ($tmp1621.value) {
                        {
                            cost1609 = ((panda$core$Int64) { 0 });
                        }
                        }
                        else {
                        {
                            cost1609 = ((panda$core$Int64) { 1 });
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
                    panda$core$Bit $tmp1622 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 21 }));
                    PANDA_ASSERT($tmp1622.value);
                    panda$core$Object* $tmp1624 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                    panda$core$Object* $tmp1625 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                    panda$core$Int64$nullable $tmp1626 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1624), ((org$pandalanguage$pandac$Type*) $tmp1625));
                    cost11623 = $tmp1626;
                    if (((panda$core$Bit) { !cost11623.nonnull }).value) {
                    {
                        return ((panda$core$Int64$nullable) { .nonnull = false });
                    }
                    }
                    panda$core$Object* $tmp1628 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                    panda$core$Object* $tmp1629 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                    panda$core$Int64$nullable $tmp1630 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1628), ((org$pandalanguage$pandac$Type*) $tmp1629));
                    cost21627 = $tmp1630;
                    if (((panda$core$Bit) { !cost21627.nonnull }).value) {
                    {
                        return ((panda$core$Int64$nullable) { .nonnull = false });
                    }
                    }
                    panda$core$Int64 $tmp1631 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) cost11623.value), ((panda$core$Int64) cost21627.value));
                    cost1609 = $tmp1631;
                }
                }
                panda$core$Object* $tmp1633 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 2 }));
                panda$core$Object* $tmp1634 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 2 }));
                panda$core$Int64$nullable $tmp1635 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1633), ((org$pandalanguage$pandac$Type*) $tmp1634));
                cost31632 = $tmp1635;
                if (((panda$core$Bit) { !cost31632.nonnull }).value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Int64 $tmp1636 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(base1471, cost1609);
                panda$core$Int64 $tmp1637 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1636, ((panda$core$Int64) cost31632.value));
                return ((panda$core$Int64$nullable) { $tmp1637, true });
            }
            }
            org$pandalanguage$pandac$Type* $tmp1638 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
            panda$core$Int64$nullable $tmp1639 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1638, p_target);
            return $tmp1639;
        }
        break;
        case 1040:
        {
            panda$collections$Array* $tmp1641 = (panda$collections$Array*) malloc(40);
            $tmp1641->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1641->refCount.value = 1;
            panda$collections$Array$init($tmp1641);
            args1640 = $tmp1641;
            panda$core$Object* $tmp1643 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
            panda$collections$Array$add$panda$collections$Array$T(args1640, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp1643)));
            panda$core$Bit $tmp1644 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(base1471, ((panda$core$Int64) { 0 }));
            PANDA_ASSERT($tmp1644.value);
            panda$core$Object* $tmp1645 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp1647 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1645), &$s1646, ((panda$collections$ListView*) args1640));
            panda$core$Int64$nullable $tmp1648 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1647, p_target);
            return $tmp1648;
        }
        break;
    }
    panda$core$Bit $tmp1649 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_target);
    panda$core$Bit $tmp1650 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1649);
    if ($tmp1650.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp1652 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_target);
    targetClass1651 = $tmp1652;
    if (((panda$core$Bit) { targetClass1651 == NULL }).value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    {
        ITable* $tmp1654 = ((panda$collections$Iterable*) targetClass1651->methods)->$class->itable;
        while ($tmp1654->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1654 = $tmp1654->next;
        }
        $fn1656 $tmp1655 = $tmp1654->methods[0];
        panda$collections$Iterator* $tmp1657 = $tmp1655(((panda$collections$Iterable*) targetClass1651->methods));
        m$Iter1653 = $tmp1657;
        $l1658:;
        ITable* $tmp1660 = m$Iter1653->$class->itable;
        while ($tmp1660->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1660 = $tmp1660->next;
        }
        $fn1662 $tmp1661 = $tmp1660->methods[0];
        panda$core$Bit $tmp1663 = $tmp1661(m$Iter1653);
        panda$core$Bit $tmp1664 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1663);
        if (!$tmp1664.value) goto $l1659;
        {
            ITable* $tmp1666 = m$Iter1653->$class->itable;
            while ($tmp1666->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1666 = $tmp1666->next;
            }
            $fn1668 $tmp1667 = $tmp1666->methods[1];
            panda$core$Object* $tmp1669 = $tmp1667(m$Iter1653);
            m1665 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1669);
            panda$core$Bit $tmp1670 = org$pandalanguage$pandac$Annotations$isImplicit$R$panda$core$Bit(m1665->annotations);
            if ($tmp1670.value) {
            {
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m1665);
                panda$core$Bit $tmp1671 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(m1665->methodKind, ((panda$core$Int64) { 59 }));
                PANDA_ASSERT($tmp1671.value);
                panda$core$Int64 $tmp1672 = panda$collections$Array$get_count$R$panda$core$Int64(m1665->parameters);
                panda$core$Bit $tmp1673 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1672, ((panda$core$Int64) { 1 }));
                PANDA_ASSERT($tmp1673.value);
                panda$core$Object* $tmp1675 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(m1665->parameters, ((panda$core$Int64) { 0 }));
                panda$core$Int64$nullable $tmp1676 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1675)->type);
                cost1674 = $tmp1676;
                if (((panda$core$Bit) { cost1674.nonnull }).value) {
                {
                    panda$core$Int64 $tmp1677 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(base1471, ((panda$core$Int64) cost1674.value));
                    return ((panda$core$Int64$nullable) { $tmp1677, true });
                }
                }
            }
            }
        }
        goto $l1658;
        $l1659:;
    }
    PANDA_ASSERT(((panda$core$Bit) { p_expr->type != NULL }).value);
    panda$core$Int64$nullable $tmp1679 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr->type, p_target);
    cost1678 = $tmp1679;
    if (((panda$core$Bit) { cost1678.nonnull }).value) {
    {
        panda$core$Int64 $tmp1680 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(base1471, ((panda$core$Int64) cost1678.value));
        return ((panda$core$Int64$nullable) { $tmp1680, true });
    }
    }
    return ((panda$core$Int64$nullable) { .nonnull = false });
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$doCoerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr, org$pandalanguage$pandac$Type* p_target) {
    panda$collections$Array* children1689;
    org$pandalanguage$pandac$IRNode* intermediate1694;
    org$pandalanguage$pandac$IRNode* coerced1722;
    org$pandalanguage$pandac$IRNode* coerced1743;
    org$pandalanguage$pandac$IRNode* varType1757;
    panda$collections$Array* args1767;
    org$pandalanguage$pandac$IRNode* target1775;
    panda$collections$Array* args1786;
    org$pandalanguage$pandac$IRNode* target1798;
    panda$collections$Array* args1809;
    org$pandalanguage$pandac$IRNode* target1817;
    org$pandalanguage$pandac$Type* param1833;
    org$pandalanguage$pandac$IRNode* start1835;
    org$pandalanguage$pandac$IRNode* end1838;
    panda$collections$Array* args1841;
    org$pandalanguage$pandac$IRNode* target1847;
    org$pandalanguage$pandac$Type* endPoint1863;
    org$pandalanguage$pandac$IRNode* start1865;
    org$pandalanguage$pandac$IRNode* end1868;
    org$pandalanguage$pandac$IRNode* step1871;
    panda$collections$Array* args1875;
    org$pandalanguage$pandac$IRNode* target1881;
    panda$collections$ImmutableArray* args1889;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1890;
    panda$collections$Array* children1902;
    org$pandalanguage$pandac$IRNode* intermediate1908;
    org$pandalanguage$pandac$ClassDecl* cl1913;
    panda$collections$Iterator* m$Iter1915;
    org$pandalanguage$pandac$MethodDecl* m1927;
    org$pandalanguage$pandac$IRNode* type1938;
    panda$collections$Array* args1943;
    panda$collections$Array* children1947;
    if (((panda$core$Bit) { p_expr == NULL }).value) {
    {
        return NULL;
    }
    }
    PANDA_ASSERT(p_expr->type->resolved.value);
    PANDA_ASSERT(p_target->resolved.value);
    panda$core$Bit $tmp1681 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_expr->type, p_target);
    if ($tmp1681.value) {
    {
        return p_expr;
    }
    }
    panda$core$Bit $tmp1683 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->type->typeKind, ((panda$core$Int64) { 11 }));
    bool $tmp1682 = $tmp1683.value;
    if (!$tmp1682) goto $l1684;
    panda$core$Bit $tmp1685 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
    $tmp1682 = $tmp1685.value;
    $l1684:;
    panda$core$Bit $tmp1686 = { $tmp1682 };
    if ($tmp1686.value) {
    {
        panda$core$Object* $tmp1687 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp1688 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1687), p_target);
        if ($tmp1688.value) {
        {
            panda$collections$Array* $tmp1690 = (panda$collections$Array*) malloc(40);
            $tmp1690->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1690->refCount.value = 1;
            panda$collections$Array$init($tmp1690);
            children1689 = $tmp1690;
            panda$collections$Array$add$panda$collections$Array$T(children1689, ((panda$core$Object*) p_expr));
            org$pandalanguage$pandac$IRNode* $tmp1692 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp1692->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1692->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp1692, ((panda$core$Int64) { 1009 }), p_expr->position, p_target, ((panda$core$Object*) wrap_panda$core$Bit(((panda$core$Bit) { false }))), ((panda$collections$ListView*) children1689));
            return $tmp1692;
        }
        }
        panda$core$Object* $tmp1695 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->type->subtypes, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp1696 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, ((org$pandalanguage$pandac$Type*) $tmp1695));
        intermediate1694 = $tmp1696;
        org$pandalanguage$pandac$IRNode* $tmp1697 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, intermediate1694, p_target);
        return $tmp1697;
    }
    }
    switch (p_expr->kind.value) {
        case 1004:
        {
            panda$core$Bit $tmp1699 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            bool $tmp1698 = $tmp1699.value;
            if (!$tmp1698) goto $l1700;
            panda$core$Int64 $tmp1701 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64(self, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1702 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1703 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1701, $tmp1702);
            $tmp1698 = $tmp1703.value;
            $l1700:;
            panda$core$Bit $tmp1704 = { $tmp1698 };
            if ($tmp1704.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1705 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1705->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1705->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp1705, ((panda$core$Int64) { 1004 }), p_expr->position, p_target, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
                return $tmp1705;
            }
            }
            else {
            panda$core$Bit $tmp1708 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 13 }));
            bool $tmp1707 = $tmp1708.value;
            if (!$tmp1707) goto $l1709;
            panda$core$Int64 $tmp1710 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64(self, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1711 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1712 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1710, $tmp1711);
            $tmp1707 = $tmp1712.value;
            $l1709:;
            panda$core$Bit $tmp1713 = { $tmp1707 };
            if ($tmp1713.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1714 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1714->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1714->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp1714, ((panda$core$Int64) { 1004 }), p_expr->position, p_target, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
                return $tmp1714;
            }
            }
            }
            panda$core$Bit $tmp1717 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 10 }));
            bool $tmp1716 = $tmp1717.value;
            if (!$tmp1716) goto $l1718;
            panda$core$Bit $tmp1719 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            panda$core$Bit $tmp1720 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1719);
            $tmp1716 = $tmp1720.value;
            $l1718:;
            panda$core$Bit $tmp1721 = { $tmp1716 };
            if ($tmp1721.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1723 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp1724 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, $tmp1723);
                coerced1722 = $tmp1724;
                if (((panda$core$Bit) { coerced1722 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$IRNode* $tmp1725 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, coerced1722, p_target);
                return $tmp1725;
            }
            }
        }
        break;
        case 1032:
        {
            panda$core$Bit $tmp1727 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            bool $tmp1726 = $tmp1727.value;
            if (!$tmp1726) goto $l1728;
            panda$core$Int64 $tmp1729 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1730 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp1729);
            panda$core$Int64 $tmp1731 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(self, $tmp1730);
            panda$core$Int64 $tmp1732 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1733 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1731, $tmp1732);
            $tmp1726 = $tmp1733.value;
            $l1728:;
            panda$core$Bit $tmp1734 = { $tmp1726 };
            if ($tmp1734.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1735 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1735->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1735->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp1735, ((panda$core$Int64) { 1032 }), p_expr->position, p_target, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
                return $tmp1735;
            }
            }
            panda$core$Bit $tmp1738 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 10 }));
            bool $tmp1737 = $tmp1738.value;
            if (!$tmp1737) goto $l1739;
            panda$core$Bit $tmp1740 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            panda$core$Bit $tmp1741 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1740);
            $tmp1737 = $tmp1741.value;
            $l1739:;
            panda$core$Bit $tmp1742 = { $tmp1737 };
            if ($tmp1742.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1744 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp1745 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, $tmp1744);
                coerced1743 = $tmp1745;
                if (((panda$core$Bit) { coerced1743 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$IRNode* $tmp1746 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, coerced1743, p_target);
                return $tmp1746;
            }
            }
        }
        break;
        case 1011:
        {
            org$pandalanguage$pandac$Type* $tmp1747 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1748 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1747);
            if ($tmp1748.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1749 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1749->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1749->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp1749, ((panda$core$Int64) { 1011 }), p_expr->position, p_target, ((panda$core$Bit$wrapper*) p_expr->payload)->value);
                return $tmp1749;
            }
            }
            panda$core$Bit $tmp1752 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_target);
            bool $tmp1751 = $tmp1752.value;
            if (!$tmp1751) goto $l1753;
            org$pandalanguage$pandac$Type* $tmp1754 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1755 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1754);
            $tmp1751 = $tmp1755.value;
            $l1753:;
            panda$core$Bit $tmp1756 = { $tmp1751 };
            if ($tmp1756.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1758 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp1759 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, $tmp1758);
                varType1757 = $tmp1759;
                if (((panda$core$Bit) { varType1757 != NULL }).value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp1760 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, varType1757, p_target);
                    return $tmp1760;
                }
                }
            }
            }
        }
        break;
        case 1033:
        {
            org$pandalanguage$pandac$Type* $tmp1762 = org$pandalanguage$pandac$Type$Char8$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1763 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1762);
            bool $tmp1761 = $tmp1763.value;
            if (!$tmp1761) goto $l1764;
            panda$core$Int64$nullable $tmp1765 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, p_target);
            $tmp1761 = ((panda$core$Bit) { $tmp1765.nonnull }).value;
            $l1764:;
            panda$core$Bit $tmp1766 = { $tmp1761 };
            if ($tmp1766.value) {
            {
                panda$collections$Array* $tmp1768 = (panda$collections$Array*) malloc(40);
                $tmp1768->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp1768->refCount.value = 1;
                panda$collections$Array$init($tmp1768);
                args1767 = $tmp1768;
                org$pandalanguage$pandac$IRNode* $tmp1770 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1770->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1770->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1772 = org$pandalanguage$pandac$Type$BuiltinUInt8$R$org$pandalanguage$pandac$Type();
                panda$core$Char32 $tmp1773 = panda$core$String$$IDX$panda$core$Int64$R$panda$core$Char32(((panda$core$String*) p_expr->payload), ((panda$core$Int64) { 0 }));
                panda$core$UInt64 $tmp1774 = panda$core$Char32$convert$R$panda$core$UInt64($tmp1773);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp1770, ((panda$core$Int64) { 1004 }), p_expr->position, $tmp1772, $tmp1774);
                panda$collections$Array$add$panda$collections$Array$T(args1767, ((panda$core$Object*) $tmp1770));
                org$pandalanguage$pandac$IRNode* $tmp1776 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1776->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1776->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1778 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1776, ((panda$core$Int64) { 1001 }), p_expr->position, $tmp1778, p_target);
                target1775 = $tmp1776;
                org$pandalanguage$pandac$IRNode* $tmp1779 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target1775, ((panda$collections$ListView*) args1767));
                return $tmp1779;
            }
            }
            org$pandalanguage$pandac$Type* $tmp1781 = org$pandalanguage$pandac$Type$Char16$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1782 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1781);
            bool $tmp1780 = $tmp1782.value;
            if (!$tmp1780) goto $l1783;
            panda$core$Int64$nullable $tmp1784 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, p_target);
            $tmp1780 = ((panda$core$Bit) { $tmp1784.nonnull }).value;
            $l1783:;
            panda$core$Bit $tmp1785 = { $tmp1780 };
            if ($tmp1785.value) {
            {
                panda$collections$Array* $tmp1787 = (panda$collections$Array*) malloc(40);
                $tmp1787->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp1787->refCount.value = 1;
                panda$collections$Array$init($tmp1787);
                args1786 = $tmp1787;
                org$pandalanguage$pandac$IRNode* $tmp1789 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1789->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1789->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1791 = org$pandalanguage$pandac$Type$BuiltinUInt16$R$org$pandalanguage$pandac$Type();
                panda$collections$Iterator* $tmp1792 = panda$core$String$utf16$R$panda$collections$Iterator$LTpanda$core$Char16$GT(((panda$core$String*) p_expr->payload));
                ITable* $tmp1793 = $tmp1792->$class->itable;
                while ($tmp1793->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1793 = $tmp1793->next;
                }
                $fn1795 $tmp1794 = $tmp1793->methods[1];
                panda$core$Object* $tmp1796 = $tmp1794($tmp1792);
                panda$core$UInt64 $tmp1797 = panda$core$Char16$convert$R$panda$core$UInt64(((panda$core$Char16$wrapper*) $tmp1796)->value);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp1789, ((panda$core$Int64) { 1004 }), p_expr->position, $tmp1791, $tmp1797);
                panda$collections$Array$add$panda$collections$Array$T(args1786, ((panda$core$Object*) $tmp1789));
                org$pandalanguage$pandac$IRNode* $tmp1799 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1799->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1799->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1801 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1799, ((panda$core$Int64) { 1001 }), p_expr->position, $tmp1801, p_target);
                target1798 = $tmp1799;
                org$pandalanguage$pandac$IRNode* $tmp1802 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target1798, ((panda$collections$ListView*) args1786));
                return $tmp1802;
            }
            }
            org$pandalanguage$pandac$Type* $tmp1804 = org$pandalanguage$pandac$Type$Char32$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1805 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1804);
            bool $tmp1803 = $tmp1805.value;
            if (!$tmp1803) goto $l1806;
            panda$core$Int64$nullable $tmp1807 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, p_target);
            $tmp1803 = ((panda$core$Bit) { $tmp1807.nonnull }).value;
            $l1806:;
            panda$core$Bit $tmp1808 = { $tmp1803 };
            if ($tmp1808.value) {
            {
                panda$collections$Array* $tmp1810 = (panda$collections$Array*) malloc(40);
                $tmp1810->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp1810->refCount.value = 1;
                panda$collections$Array$init($tmp1810);
                args1809 = $tmp1810;
                org$pandalanguage$pandac$IRNode* $tmp1812 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1812->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1812->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1814 = org$pandalanguage$pandac$Type$BuiltinUInt32$R$org$pandalanguage$pandac$Type();
                panda$core$Char32 $tmp1815 = panda$core$String$$IDX$panda$core$Int64$R$panda$core$Char32(((panda$core$String*) p_expr->payload), ((panda$core$Int64) { 0 }));
                panda$core$UInt64 $tmp1816 = panda$core$Char32$convert$R$panda$core$UInt64($tmp1815);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp1812, ((panda$core$Int64) { 1004 }), p_expr->position, $tmp1814, $tmp1816);
                panda$collections$Array$add$panda$collections$Array$T(args1809, ((panda$core$Object*) $tmp1812));
                org$pandalanguage$pandac$IRNode* $tmp1818 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1818->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1818->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1820 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1818, ((panda$core$Int64) { 1001 }), p_expr->position, $tmp1820, p_target);
                target1817 = $tmp1818;
                org$pandalanguage$pandac$IRNode* $tmp1821 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target1817, ((panda$collections$ListView*) args1809));
                return $tmp1821;
            }
            }
        }
        break;
        case 1031:
        {
            panda$core$Bit $tmp1822 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(p_target);
            if ($tmp1822.value) {
            {
                panda$core$Int64 $tmp1823 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_expr->children);
                panda$core$Bit $tmp1824 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1823, ((panda$core$Int64) { 2 }));
                if ($tmp1824.value) {
                {
                    panda$core$String* $tmp1826 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1825, ((panda$core$Object*) p_target));
                    panda$core$String* $tmp1828 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1826, &$s1827);
                    panda$core$String* $tmp1829 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1828, ((panda$core$Object*) p_expr));
                    panda$core$String* $tmp1831 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1829, &$s1830);
                    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_expr->position, $tmp1831);
                    return NULL;
                }
                }
                panda$core$Bit $tmp1832 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 21 }));
                PANDA_ASSERT($tmp1832.value);
                panda$core$Object* $tmp1834 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                param1833 = ((org$pandalanguage$pandac$Type*) $tmp1834);
                panda$core$Object* $tmp1836 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$IRNode* $tmp1837 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1836), param1833);
                start1835 = $tmp1837;
                if (((panda$core$Bit) { start1835 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$core$Object* $tmp1839 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$IRNode* $tmp1840 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1839), param1833);
                end1838 = $tmp1840;
                if (((panda$core$Bit) { end1838 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp1842 = (panda$collections$Array*) malloc(40);
                $tmp1842->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp1842->refCount.value = 1;
                panda$collections$Array$init($tmp1842);
                args1841 = $tmp1842;
                panda$collections$Array$add$panda$collections$Array$T(args1841, ((panda$core$Object*) start1835));
                panda$collections$Array$add$panda$collections$Array$T(args1841, ((panda$core$Object*) end1838));
                org$pandalanguage$pandac$IRNode* $tmp1844 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1844->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1844->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1846 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp1844, ((panda$core$Int64) { 1011 }), p_expr->position, $tmp1846, ((panda$core$Bit$wrapper*) p_expr->payload)->value);
                panda$collections$Array$add$panda$collections$Array$T(args1841, ((panda$core$Object*) $tmp1844));
                org$pandalanguage$pandac$IRNode* $tmp1848 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1848->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1848->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1850 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1848, ((panda$core$Int64) { 1001 }), p_expr->position, $tmp1850, p_target);
                target1847 = $tmp1848;
                org$pandalanguage$pandac$IRNode* $tmp1851 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target1847, ((panda$collections$ListView*) args1841));
                return $tmp1851;
            }
            }
            else {
            panda$core$Bit $tmp1852 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(p_target);
            if ($tmp1852.value) {
            {
                panda$core$Int64 $tmp1853 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_expr->children);
                panda$core$Bit $tmp1854 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1853, ((panda$core$Int64) { 3 }));
                if ($tmp1854.value) {
                {
                    panda$core$String* $tmp1856 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1855, ((panda$core$Object*) p_target));
                    panda$core$String* $tmp1858 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1856, &$s1857);
                    panda$core$String* $tmp1859 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1858, ((panda$core$Object*) p_expr));
                    panda$core$String* $tmp1861 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1859, &$s1860);
                    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_expr->position, $tmp1861);
                    return NULL;
                }
                }
                panda$core$Bit $tmp1862 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 21 }));
                PANDA_ASSERT($tmp1862.value);
                panda$core$Object* $tmp1864 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                endPoint1863 = ((org$pandalanguage$pandac$Type*) $tmp1864);
                panda$core$Object* $tmp1866 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$IRNode* $tmp1867 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1866), endPoint1863);
                start1865 = $tmp1867;
                if (((panda$core$Bit) { start1865 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$core$Object* $tmp1869 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$IRNode* $tmp1870 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1869), endPoint1863);
                end1868 = $tmp1870;
                panda$core$Object* $tmp1872 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 2 }));
                panda$core$Object* $tmp1873 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 2 }));
                org$pandalanguage$pandac$IRNode* $tmp1874 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1872), ((org$pandalanguage$pandac$Type*) $tmp1873));
                step1871 = $tmp1874;
                panda$collections$Array* $tmp1876 = (panda$collections$Array*) malloc(40);
                $tmp1876->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp1876->refCount.value = 1;
                panda$collections$Array$init($tmp1876);
                args1875 = $tmp1876;
                panda$collections$Array$add$panda$collections$Array$T(args1875, ((panda$core$Object*) start1865));
                panda$collections$Array$add$panda$collections$Array$T(args1875, ((panda$core$Object*) end1868));
                panda$collections$Array$add$panda$collections$Array$T(args1875, ((panda$core$Object*) step1871));
                org$pandalanguage$pandac$IRNode* $tmp1878 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1878->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1878->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1880 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp1878, ((panda$core$Int64) { 1011 }), p_expr->position, $tmp1880, ((panda$core$Bit$wrapper*) p_expr->payload)->value);
                panda$collections$Array$add$panda$collections$Array$T(args1875, ((panda$core$Object*) $tmp1878));
                org$pandalanguage$pandac$IRNode* $tmp1882 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1882->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1882->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1884 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1882, ((panda$core$Int64) { 1001 }), p_expr->position, $tmp1884, p_target);
                target1881 = $tmp1882;
                org$pandalanguage$pandac$IRNode* $tmp1885 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target1881, ((panda$collections$ListView*) args1875));
                return $tmp1885;
            }
            }
            else {
            {
                org$pandalanguage$pandac$IRNode* $tmp1886 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp1887 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp1886, p_target);
                return $tmp1887;
            }
            }
            }
        }
        break;
        case 1039:
        {
            org$pandalanguage$pandac$IRNode* $tmp1888 = org$pandalanguage$pandac$Compiler$resolveMethodCall$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, p_target);
            return $tmp1888;
        }
        break;
        case 1040:
        {
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1890, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$collections$ImmutableArray* $tmp1891 = panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(p_expr->children, $tmp1890);
            args1889 = $tmp1891;
            panda$core$Object* $tmp1892 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp1894 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1892), &$s1893, ((panda$collections$ListView*) args1889), p_target);
            org$pandalanguage$pandac$IRNode* $tmp1895 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp1894, p_target);
            return $tmp1895;
        }
        break;
    }
    panda$core$Bit $tmp1896 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp1896.value) {
    {
        panda$core$Bit $tmp1897 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1030 }));
        if ($tmp1897.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp1898 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp1898->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1898->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp1898, ((panda$core$Int64) { 1030 }), p_expr->position, p_target);
            return $tmp1898;
        }
        }
        panda$core$Object* $tmp1900 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp1901 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_expr->type, ((org$pandalanguage$pandac$Type*) $tmp1900));
        if ($tmp1901.value) {
        {
            panda$collections$Array* $tmp1903 = (panda$collections$Array*) malloc(40);
            $tmp1903->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1903->refCount.value = 1;
            panda$collections$Array$init($tmp1903);
            children1902 = $tmp1903;
            panda$collections$Array$add$panda$collections$Array$T(children1902, ((panda$core$Object*) p_expr));
            org$pandalanguage$pandac$IRNode* $tmp1905 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp1905->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1905->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp1905, ((panda$core$Int64) { 1009 }), p_expr->position, p_target, ((panda$core$Object*) wrap_panda$core$Bit(((panda$core$Bit) { false }))), ((panda$collections$ListView*) children1902));
            return $tmp1905;
        }
        }
        panda$core$Bit $tmp1907 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_expr->type->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp1907.value) {
        {
            panda$core$Object* $tmp1909 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp1910 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, ((org$pandalanguage$pandac$Type*) $tmp1909));
            intermediate1908 = $tmp1910;
            org$pandalanguage$pandac$IRNode* $tmp1911 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, intermediate1908, p_target);
            return $tmp1911;
        }
        }
    }
    }
    panda$core$Int64$nullable $tmp1912 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, p_target);
    if (((panda$core$Bit) { $tmp1912.nonnull }).value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp1914 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_target);
        cl1913 = $tmp1914;
        if (((panda$core$Bit) { cl1913 != NULL }).value) {
        {
            {
                ITable* $tmp1916 = ((panda$collections$Iterable*) cl1913->methods)->$class->itable;
                while ($tmp1916->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1916 = $tmp1916->next;
                }
                $fn1918 $tmp1917 = $tmp1916->methods[0];
                panda$collections$Iterator* $tmp1919 = $tmp1917(((panda$collections$Iterable*) cl1913->methods));
                m$Iter1915 = $tmp1919;
                $l1920:;
                ITable* $tmp1922 = m$Iter1915->$class->itable;
                while ($tmp1922->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1922 = $tmp1922->next;
                }
                $fn1924 $tmp1923 = $tmp1922->methods[0];
                panda$core$Bit $tmp1925 = $tmp1923(m$Iter1915);
                panda$core$Bit $tmp1926 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1925);
                if (!$tmp1926.value) goto $l1921;
                {
                    ITable* $tmp1928 = m$Iter1915->$class->itable;
                    while ($tmp1928->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1928 = $tmp1928->next;
                    }
                    $fn1930 $tmp1929 = $tmp1928->methods[1];
                    panda$core$Object* $tmp1931 = $tmp1929(m$Iter1915);
                    m1927 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1931);
                    panda$core$Bit $tmp1932 = org$pandalanguage$pandac$Annotations$isImplicit$R$panda$core$Bit(m1927->annotations);
                    if ($tmp1932.value) {
                    {
                        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m1927);
                        panda$core$Bit $tmp1933 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(m1927->methodKind, ((panda$core$Int64) { 59 }));
                        PANDA_ASSERT($tmp1933.value);
                        panda$core$Int64 $tmp1934 = panda$collections$Array$get_count$R$panda$core$Int64(m1927->parameters);
                        panda$core$Bit $tmp1935 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1934, ((panda$core$Int64) { 1 }));
                        PANDA_ASSERT($tmp1935.value);
                        panda$core$Object* $tmp1936 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(m1927->parameters, ((panda$core$Int64) { 0 }));
                        panda$core$Int64$nullable $tmp1937 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1936)->type);
                        if (((panda$core$Bit) { $tmp1937.nonnull }).value) {
                        {
                            org$pandalanguage$pandac$IRNode* $tmp1939 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                            $tmp1939->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                            $tmp1939->refCount.value = 1;
                            org$pandalanguage$pandac$Type* $tmp1941 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                            org$pandalanguage$pandac$Type* $tmp1942 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl1913);
                            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1939, ((panda$core$Int64) { 1001 }), p_expr->position, $tmp1941, $tmp1942);
                            type1938 = $tmp1939;
                            panda$collections$Array* $tmp1944 = (panda$collections$Array*) malloc(40);
                            $tmp1944->$class = (panda$core$Class*) &panda$collections$Array$class;
                            $tmp1944->refCount.value = 1;
                            panda$collections$Array$init$panda$core$Int64($tmp1944, ((panda$core$Int64) { 1 }));
                            args1943 = $tmp1944;
                            panda$collections$Array$add$panda$collections$Array$T(args1943, ((panda$core$Object*) p_expr));
                            org$pandalanguage$pandac$IRNode* $tmp1946 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, type1938, ((panda$collections$ListView*) args1943));
                            return $tmp1946;
                        }
                        }
                    }
                    }
                }
                goto $l1920;
                $l1921:;
            }
        }
        }
        panda$collections$Array* $tmp1948 = (panda$collections$Array*) malloc(40);
        $tmp1948->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp1948->refCount.value = 1;
        panda$collections$Array$init$panda$core$Int64($tmp1948, ((panda$core$Int64) { 1 }));
        children1947 = $tmp1948;
        panda$collections$Array$add$panda$collections$Array$T(children1947, ((panda$core$Object*) p_expr));
        org$pandalanguage$pandac$IRNode* $tmp1950 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp1950->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp1950->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp1950, ((panda$core$Int64) { 1009 }), p_expr->position, p_target, ((panda$core$Object*) wrap_panda$core$Bit(((panda$core$Bit) { false }))), ((panda$collections$ListView*) children1947));
        return $tmp1950;
    }
    }
    panda$core$String* $tmp1953 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1952, ((panda$core$Object*) p_target));
    panda$core$String* $tmp1955 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1953, &$s1954);
    panda$core$String* $tmp1956 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1955, ((panda$core$Object*) p_expr->type));
    panda$core$String* $tmp1958 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1956, &$s1957);
    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_expr->position, $tmp1958);
    return NULL;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr, org$pandalanguage$pandac$Type* p_target) {
    org$pandalanguage$pandac$IRNode* result1959;
    org$pandalanguage$pandac$IRNode* $tmp1960 = org$pandalanguage$pandac$Compiler$doCoerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, p_target);
    result1959 = $tmp1960;
    bool $tmp1961 = ((panda$core$Bit) { result1959 == NULL }).value;
    if ($tmp1961) goto $l1962;
    panda$core$Bit $tmp1963 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(result1959->type, p_target);
    $tmp1961 = $tmp1963.value;
    $l1962:;
    panda$core$Bit $tmp1964 = { $tmp1961 };
    PANDA_ASSERT($tmp1964.value);
    return result1959;
}
panda$core$Bit org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type, org$pandalanguage$pandac$Type* p_target) {
    panda$core$Bit $tmp1966 = org$pandalanguage$pandac$Type$isPointer$R$panda$core$Bit(p_type);
    bool $tmp1965 = $tmp1966.value;
    if (!$tmp1965) goto $l1967;
    panda$core$Bit $tmp1968 = org$pandalanguage$pandac$Type$isPointer$R$panda$core$Bit(p_target);
    $tmp1965 = $tmp1968.value;
    $l1967:;
    panda$core$Bit $tmp1969 = { $tmp1965 };
    if ($tmp1969.value) {
    {
        return ((panda$core$Bit) { true });
    }
    }
    panda$core$Int64$nullable $tmp1970 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_type, p_target);
    if (((panda$core$Bit) { $tmp1970.nonnull }).value) {
    {
        return ((panda$core$Bit) { true });
    }
    }
    panda$core$Bit $tmp1972 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_type);
    bool $tmp1971 = $tmp1972.value;
    if (!$tmp1971) goto $l1973;
    panda$core$Bit $tmp1974 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_target);
    $tmp1971 = $tmp1974.value;
    $l1973:;
    panda$core$Bit $tmp1975 = { $tmp1971 };
    if ($tmp1975.value) {
    {
        return ((panda$core$Bit) { true });
    }
    }
    panda$core$Bit $tmp1976 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 16 }));
    if ($tmp1976.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Int64$nullable $tmp1977 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_target, p_type);
    return ((panda$core$Bit) { $tmp1977.nonnull });
}
panda$core$Bit org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_node, org$pandalanguage$pandac$Type* p_target) {
    panda$core$Bit result1979;
    org$pandalanguage$pandac$IRNode* resolved1986;
    panda$core$Int64$nullable $tmp1978 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_node, p_target);
    if (((panda$core$Bit) { $tmp1978.nonnull }).value) {
    {
        return ((panda$core$Bit) { true });
    }
    }
    panda$core$Bit $tmp1980 = org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_node->type, p_target);
    result1979 = $tmp1980;
    panda$core$Bit $tmp1982 = panda$core$Bit$$NOT$R$panda$core$Bit(result1979);
    bool $tmp1981 = $tmp1982.value;
    if (!$tmp1981) goto $l1983;
    panda$core$Bit $tmp1984 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_node->type->typeKind, ((panda$core$Int64) { 17 }));
    $tmp1981 = $tmp1984.value;
    $l1983:;
    panda$core$Bit $tmp1985 = { $tmp1981 };
    if ($tmp1985.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp1987 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_node);
        resolved1986 = $tmp1987;
        if (((panda$core$Bit) { resolved1986 != NULL }).value) {
        {
            panda$core$Bit $tmp1988 = org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, resolved1986, p_target);
            result1979 = $tmp1988;
        }
        }
    }
    }
    return result1979;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_node, org$pandalanguage$pandac$Position p_position, panda$core$Bit p_isExplicit, org$pandalanguage$pandac$Type* p_target) {
    org$pandalanguage$pandac$IRNode* resolved2009;
    panda$collections$Array* children2012;
    panda$core$Bit $tmp1989 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_node->type, p_target);
    if ($tmp1989.value) {
    {
        return p_node;
    }
    }
    org$pandalanguage$pandac$Type* $tmp1990 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1991 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1990);
    PANDA_ASSERT($tmp1991.value);
    bool $tmp1992 = p_isExplicit.value;
    if (!$tmp1992) goto $l1993;
    panda$core$Bit $tmp1994 = org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_node, p_target);
    panda$core$Bit $tmp1995 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1994);
    $tmp1992 = $tmp1995.value;
    $l1993:;
    panda$core$Bit $tmp1996 = { $tmp1992 };
    if ($tmp1996.value) {
    {
        panda$core$String* $tmp1998 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1997, ((panda$core$Object*) p_node->type));
        panda$core$String* $tmp2000 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1998, &$s1999);
        panda$core$String* $tmp2002 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2001, ((panda$core$Object*) p_target));
        panda$core$String* $tmp2004 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2002, &$s2003);
        panda$core$String* $tmp2005 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2000, $tmp2004);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp2005);
    }
    }
    switch (p_node->kind.value) {
        case 1004:
        case 1032:
        case 1011:
        {
            org$pandalanguage$pandac$IRNode* $tmp2006 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_node, p_target);
            return $tmp2006;
        }
        break;
        case 1039:
        case 1040:
        {
            panda$core$Int64$nullable $tmp2007 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_node, p_target);
            if (((panda$core$Bit) { $tmp2007.nonnull }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2008 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_node, p_target);
                return $tmp2008;
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp2010 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_node);
            resolved2009 = $tmp2010;
            if (((panda$core$Bit) { resolved2009 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2011 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, resolved2009, p_position, p_isExplicit, p_target);
                return $tmp2011;
            }
            }
        }
        break;
    }
    panda$collections$Array* $tmp2013 = (panda$collections$Array*) malloc(40);
    $tmp2013->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2013->refCount.value = 1;
    panda$collections$Array$init($tmp2013);
    children2012 = $tmp2013;
    panda$collections$Array$add$panda$collections$Array$T(children2012, ((panda$core$Object*) p_node));
    org$pandalanguage$pandac$IRNode* $tmp2015 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp2015->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2015->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2015, ((panda$core$Int64) { 1009 }), p_position, p_target, ((panda$core$Object*) wrap_panda$core$Bit(p_isExplicit)), ((panda$collections$ListView*) children2012));
    return $tmp2015;
}
panda$core$Int64$nullable org$pandalanguage$pandac$Compiler$callCost$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodRef* p_m, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedReturn) {
    panda$core$Int64 result2023;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2024;
    panda$core$Int64$nullable cost2039;
    panda$core$Int64$nullable cost2053;
    PANDA_ASSERT(p_m->value->resolved.value);
    panda$core$Int64 $tmp2017 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
    ITable* $tmp2018 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp2018->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2018 = $tmp2018->next;
    }
    $fn2020 $tmp2019 = $tmp2018->methods[0];
    panda$core$Int64 $tmp2021 = $tmp2019(((panda$collections$CollectionView*) p_args));
    panda$core$Bit $tmp2022 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp2017, $tmp2021);
    if ($tmp2022.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    result2023 = ((panda$core$Int64) { 0 });
    panda$core$Int64 $tmp2025 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2024, ((panda$core$Int64) { 0 }), $tmp2025, ((panda$core$Bit) { false }));
    int64_t $tmp2027 = $tmp2024.min.value;
    panda$core$Int64 i2026 = { $tmp2027 };
    int64_t $tmp2029 = $tmp2024.max.value;
    bool $tmp2030 = $tmp2024.inclusive.value;
    if ($tmp2030) goto $l2037; else goto $l2038;
    $l2037:;
    if ($tmp2027 <= $tmp2029) goto $l2031; else goto $l2033;
    $l2038:;
    if ($tmp2027 < $tmp2029) goto $l2031; else goto $l2033;
    $l2031:;
    {
        ITable* $tmp2040 = p_args->$class->itable;
        while ($tmp2040->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2040 = $tmp2040->next;
        }
        $fn2042 $tmp2041 = $tmp2040->methods[0];
        panda$core$Object* $tmp2043 = $tmp2041(p_args, i2026);
        org$pandalanguage$pandac$Type* $tmp2044 = org$pandalanguage$pandac$MethodRef$parameter$panda$core$Int64$R$org$pandalanguage$pandac$Type(p_m, i2026);
        panda$core$Int64$nullable $tmp2045 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp2043), $tmp2044);
        cost2039 = $tmp2045;
        if (((panda$core$Bit) { !cost2039.nonnull }).value) {
        {
            return ((panda$core$Int64$nullable) { .nonnull = false });
        }
        }
        panda$core$Int64 $tmp2046 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result2023, ((panda$core$Int64) cost2039.value));
        result2023 = $tmp2046;
    }
    $l2034:;
    int64_t $tmp2048 = $tmp2029 - i2026.value;
    if ($tmp2030) goto $l2049; else goto $l2050;
    $l2049:;
    if ($tmp2048 >= 1) goto $l2047; else goto $l2033;
    $l2050:;
    if ($tmp2048 > 1) goto $l2047; else goto $l2033;
    $l2047:;
    i2026.value += 1;
    goto $l2031;
    $l2033:;
    if (((panda$core$Bit) { p_expectedReturn != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp2054 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(p_m);
        panda$core$Int64$nullable $tmp2055 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp2054, p_expectedReturn);
        cost2053 = $tmp2055;
        if (((panda$core$Bit) { !cost2053.nonnull }).value) {
        {
            return ((panda$core$Int64$nullable) { .nonnull = false });
        }
        }
        panda$core$Int64 $tmp2056 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result2023, ((panda$core$Int64) cost2053.value));
        result2023 = $tmp2056;
    }
    }
    org$pandalanguage$pandac$Type* $tmp2059 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->value->owner);
    panda$core$Bit $tmp2060 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit($tmp2059);
    bool $tmp2058 = $tmp2060.value;
    if (!$tmp2058) goto $l2061;
    ITable* $tmp2062 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp2062->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2062 = $tmp2062->next;
    }
    $fn2064 $tmp2063 = $tmp2062->methods[0];
    panda$core$Int64 $tmp2065 = $tmp2063(((panda$collections$CollectionView*) p_args));
    panda$core$Bit $tmp2066 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2065, ((panda$core$Int64) { 1 }));
    $tmp2058 = $tmp2066.value;
    $l2061:;
    panda$core$Bit $tmp2067 = { $tmp2058 };
    bool $tmp2057 = $tmp2067.value;
    if (!$tmp2057) goto $l2068;
    panda$core$Object* $tmp2069 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->value->parameters, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp2070 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->value->owner);
    panda$core$Bit $tmp2071 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp2069)->type, $tmp2070);
    $tmp2057 = $tmp2071.value;
    $l2068:;
    panda$core$Bit $tmp2072 = { $tmp2057 };
    if ($tmp2072.value) {
    {
        panda$core$Int64 $tmp2073 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result2023, ((panda$core$Int64) { 1 }));
        result2023 = $tmp2073;
    }
    }
    return ((panda$core$Int64$nullable) { result2023, true });
}
panda$core$Int64$nullable org$pandalanguage$pandac$Compiler$matchMethods$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(org$pandalanguage$pandac$Compiler* self, panda$collections$Array* p_methods, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedReturn) {
    panda$collections$Array* result2074;
    panda$core$Int64$nullable best2077;
    panda$collections$Iterator* m$Iter2078;
    org$pandalanguage$pandac$MethodRef* m2090;
    panda$core$Int64$nullable cost2095;
    panda$collections$Array* $tmp2075 = (panda$collections$Array*) malloc(40);
    $tmp2075->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2075->refCount.value = 1;
    panda$collections$Array$init($tmp2075);
    result2074 = $tmp2075;
    best2077 = ((panda$core$Int64$nullable) { .nonnull = false });
    {
        ITable* $tmp2079 = ((panda$collections$Iterable*) p_methods)->$class->itable;
        while ($tmp2079->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2079 = $tmp2079->next;
        }
        $fn2081 $tmp2080 = $tmp2079->methods[0];
        panda$collections$Iterator* $tmp2082 = $tmp2080(((panda$collections$Iterable*) p_methods));
        m$Iter2078 = $tmp2082;
        $l2083:;
        ITable* $tmp2085 = m$Iter2078->$class->itable;
        while ($tmp2085->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2085 = $tmp2085->next;
        }
        $fn2087 $tmp2086 = $tmp2085->methods[0];
        panda$core$Bit $tmp2088 = $tmp2086(m$Iter2078);
        panda$core$Bit $tmp2089 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2088);
        if (!$tmp2089.value) goto $l2084;
        {
            ITable* $tmp2091 = m$Iter2078->$class->itable;
            while ($tmp2091->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2091 = $tmp2091->next;
            }
            $fn2093 $tmp2092 = $tmp2091->methods[1];
            panda$core$Object* $tmp2094 = $tmp2092(m$Iter2078);
            m2090 = ((org$pandalanguage$pandac$MethodRef*) $tmp2094);
            panda$core$Int64$nullable $tmp2096 = org$pandalanguage$pandac$Compiler$callCost$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(self, m2090, p_args, p_expectedReturn);
            cost2095 = $tmp2096;
            if (((panda$core$Bit) { !cost2095.nonnull }).value) {
            {
                goto $l2083;
            }
            }
            bool $tmp2097 = ((panda$core$Bit) { !best2077.nonnull }).value;
            if ($tmp2097) goto $l2098;
            panda$core$Bit $tmp2099 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost2095.value), ((panda$core$Int64) best2077.value));
            $tmp2097 = $tmp2099.value;
            $l2098:;
            panda$core$Bit $tmp2100 = { $tmp2097 };
            if ($tmp2100.value) {
            {
                panda$collections$Array$clear(result2074);
                best2077 = cost2095;
            }
            }
            panda$core$Bit $tmp2104;
            if (((panda$core$Bit) { cost2095.nonnull }).value) goto $l2101; else goto $l2102;
            $l2101:;
            panda$core$Bit $tmp2105 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost2095.value), ((panda$core$Int64) best2077.value));
            $tmp2104 = $tmp2105;
            goto $l2103;
            $l2102:;
            $tmp2104 = ((panda$core$Bit) { false });
            goto $l2103;
            $l2103:;
            if ($tmp2104.value) {
            {
                panda$collections$Array$add$panda$collections$Array$T(result2074, ((panda$core$Object*) m2090));
            }
            }
        }
        goto $l2083;
        $l2084:;
    }
    panda$collections$Array$clear(p_methods);
    panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(p_methods, ((panda$collections$CollectionView*) result2074));
    return best2077;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$MethodRef* p_m, panda$collections$ListView* p_args) {
    panda$core$String* s2112;
    panda$collections$Array* finalArgs2137;
    org$pandalanguage$pandac$IRNode* selfNode2173;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2202;
    org$pandalanguage$pandac$IRNode* coerced2220;
    org$pandalanguage$pandac$IRNode* result2235;
    PANDA_ASSERT(p_m->value->resolved.value);
    panda$core$Int64 $tmp2106 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
    ITable* $tmp2107 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp2107->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2107 = $tmp2107->next;
    }
    $fn2109 $tmp2108 = $tmp2107->methods[0];
    panda$core$Int64 $tmp2110 = $tmp2108(((panda$collections$CollectionView*) p_args));
    panda$core$Bit $tmp2111 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp2106, $tmp2110);
    if ($tmp2111.value) {
    {
        panda$core$Int64 $tmp2113 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
        panda$core$Bit $tmp2114 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2113, ((panda$core$Int64) { 1 }));
        if ($tmp2114.value) {
        {
            s2112 = &$s2115;
        }
        }
        else {
        {
            s2112 = &$s2116;
        }
        }
        panda$core$String* $tmp2117 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(p_m->value);
        panda$core$String* $tmp2118 = panda$core$String$convert$R$panda$core$String($tmp2117);
        panda$core$String* $tmp2120 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2118, &$s2119);
        panda$core$Int64 $tmp2121 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
        panda$core$String* $tmp2122 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2120, ((panda$core$Object*) wrap_panda$core$Int64($tmp2121)));
        panda$core$String* $tmp2124 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2122, &$s2123);
        panda$core$String* $tmp2125 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2124, s2112);
        panda$core$String* $tmp2127 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2125, &$s2126);
        ITable* $tmp2129 = ((panda$collections$CollectionView*) p_args)->$class->itable;
        while ($tmp2129->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp2129 = $tmp2129->next;
        }
        $fn2131 $tmp2130 = $tmp2129->methods[0];
        panda$core$Int64 $tmp2132 = $tmp2130(((panda$collections$CollectionView*) p_args));
        panda$core$String* $tmp2133 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2128, ((panda$core$Object*) wrap_panda$core$Int64($tmp2132)));
        panda$core$String* $tmp2135 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2133, &$s2134);
        panda$core$String* $tmp2136 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2127, $tmp2135);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp2136);
        return NULL;
    }
    }
    panda$collections$Array* $tmp2138 = (panda$collections$Array*) malloc(40);
    $tmp2138->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2138->refCount.value = 1;
    panda$collections$Array$init($tmp2138);
    finalArgs2137 = $tmp2138;
    bool $tmp2141 = ((panda$core$Bit) { p_target != NULL }).value;
    if (!$tmp2141) goto $l2142;
    panda$core$Bit $tmp2143 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1038 }));
    $tmp2141 = $tmp2143.value;
    $l2142:;
    panda$core$Bit $tmp2144 = { $tmp2141 };
    bool $tmp2140 = $tmp2144.value;
    if (!$tmp2140) goto $l2145;
    panda$core$Bit $tmp2146 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->value->annotations);
    panda$core$Bit $tmp2147 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2146);
    $tmp2140 = $tmp2147.value;
    $l2145:;
    panda$core$Bit $tmp2148 = { $tmp2140 };
    if ($tmp2148.value) {
    {
        org$pandalanguage$pandac$Type* $tmp2149 = org$pandalanguage$pandac$MethodRef$owner$R$org$pandalanguage$pandac$Type(p_m);
        org$pandalanguage$pandac$IRNode* $tmp2150 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, p_target, p_position, ((panda$core$Bit) { false }), $tmp2149);
        panda$collections$Array$add$panda$collections$Array$T(finalArgs2137, ((panda$core$Object*) $tmp2150));
    }
    }
    panda$core$Bit $tmp2151 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->value->methodKind, ((panda$core$Int64) { 59 }));
    if ($tmp2151.value) {
    {
        if (((panda$core$Bit) { p_target == NULL }).value) {
        {
            panda$core$Object* $tmp2152 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
            panda$core$Bit $tmp2153 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp2152)->methodKind, ((panda$core$Int64) { 59 }));
            if ($tmp2153.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2154 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2154->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2154->refCount.value = 1;
                panda$core$Object* $tmp2156 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
                org$pandalanguage$pandac$Type* $tmp2157 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp2156));
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp2154, ((panda$core$Int64) { 1025 }), p_position, $tmp2157);
                panda$collections$Array$add$panda$collections$Array$T(finalArgs2137, ((panda$core$Object*) $tmp2154));
            }
            }
            else {
            {
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s2158);
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp2161 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1025 }));
        bool $tmp2160 = $tmp2161.value;
        if (!$tmp2160) goto $l2162;
        panda$core$Bit $tmp2163 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1024 }));
        $tmp2160 = $tmp2163.value;
        $l2162:;
        panda$core$Bit $tmp2164 = { $tmp2160 };
        bool $tmp2159 = $tmp2164.value;
        if (!$tmp2159) goto $l2165;
        panda$core$Bit $tmp2166 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1038 }));
        $tmp2159 = $tmp2166.value;
        $l2165:;
        panda$core$Bit $tmp2167 = { $tmp2159 };
        if ($tmp2167.value) {
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s2168);
        }
        }
        }
    }
    }
    else {
    panda$core$Bit $tmp2170 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(p_m->value);
    bool $tmp2169 = $tmp2170.value;
    if (!$tmp2169) goto $l2171;
    $tmp2169 = ((panda$core$Bit) { p_target == NULL }).value;
    $l2171:;
    panda$core$Bit $tmp2172 = { $tmp2169 };
    if ($tmp2172.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2174 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2174->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2174->refCount.value = 1;
        panda$core$Object* $tmp2176 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
        org$pandalanguage$pandac$Type* $tmp2177 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp2176));
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp2174, ((panda$core$Int64) { 1025 }), p_position, $tmp2177);
        selfNode2173 = $tmp2174;
        org$pandalanguage$pandac$Type* $tmp2178 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->value->owner);
        org$pandalanguage$pandac$IRNode* $tmp2179 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, selfNode2173, $tmp2178);
        selfNode2173 = $tmp2179;
        PANDA_ASSERT(((panda$core$Bit) { selfNode2173 != NULL }).value);
        panda$collections$Array$add$panda$collections$Array$T(finalArgs2137, ((panda$core$Object*) selfNode2173));
        panda$core$Object* $tmp2180 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
        panda$core$Bit $tmp2181 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp2180));
        panda$core$Bit $tmp2182 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2181);
        if ($tmp2182.value) {
        {
            panda$core$String* $tmp2184 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(p_m->value);
            panda$core$String* $tmp2185 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2183, $tmp2184);
            panda$core$String* $tmp2187 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2185, &$s2186);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp2187);
        }
        }
    }
    }
    else {
    panda$core$Bit $tmp2190 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(p_m->value);
    panda$core$Bit $tmp2191 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2190);
    bool $tmp2189 = $tmp2191.value;
    if (!$tmp2189) goto $l2192;
    $tmp2189 = ((panda$core$Bit) { p_target != NULL }).value;
    $l2192:;
    panda$core$Bit $tmp2193 = { $tmp2189 };
    bool $tmp2188 = $tmp2193.value;
    if (!$tmp2188) goto $l2194;
    panda$core$Bit $tmp2195 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1001 }));
    $tmp2188 = $tmp2195.value;
    $l2194:;
    panda$core$Bit $tmp2196 = { $tmp2188 };
    if ($tmp2196.value) {
    {
        panda$core$String* $tmp2198 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(p_m->value);
        panda$core$String* $tmp2199 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2197, $tmp2198);
        panda$core$String* $tmp2201 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2199, &$s2200);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp2201);
    }
    }
    }
    }
    ITable* $tmp2203 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp2203->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2203 = $tmp2203->next;
    }
    $fn2205 $tmp2204 = $tmp2203->methods[0];
    panda$core$Int64 $tmp2206 = $tmp2204(((panda$collections$CollectionView*) p_args));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2202, ((panda$core$Int64) { 0 }), $tmp2206, ((panda$core$Bit) { false }));
    int64_t $tmp2208 = $tmp2202.min.value;
    panda$core$Int64 i2207 = { $tmp2208 };
    int64_t $tmp2210 = $tmp2202.max.value;
    bool $tmp2211 = $tmp2202.inclusive.value;
    if ($tmp2211) goto $l2218; else goto $l2219;
    $l2218:;
    if ($tmp2208 <= $tmp2210) goto $l2212; else goto $l2214;
    $l2219:;
    if ($tmp2208 < $tmp2210) goto $l2212; else goto $l2214;
    $l2212:;
    {
        ITable* $tmp2221 = p_args->$class->itable;
        while ($tmp2221->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2221 = $tmp2221->next;
        }
        $fn2223 $tmp2222 = $tmp2221->methods[0];
        panda$core$Object* $tmp2224 = $tmp2222(p_args, i2207);
        org$pandalanguage$pandac$Type* $tmp2225 = org$pandalanguage$pandac$MethodRef$parameter$panda$core$Int64$R$org$pandalanguage$pandac$Type(p_m, i2207);
        org$pandalanguage$pandac$IRNode* $tmp2226 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp2224), $tmp2225);
        coerced2220 = $tmp2226;
        if (((panda$core$Bit) { coerced2220 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Object* $tmp2227 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->value->parameters, i2207);
        org$pandalanguage$pandac$IRNode* $tmp2228 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, coerced2220, p_position, ((panda$core$Bit) { false }), ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp2227)->type);
        coerced2220 = $tmp2228;
        if (((panda$core$Bit) { coerced2220 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(finalArgs2137, ((panda$core$Object*) coerced2220));
    }
    $l2215:;
    int64_t $tmp2230 = $tmp2210 - i2207.value;
    if ($tmp2211) goto $l2231; else goto $l2232;
    $l2231:;
    if ($tmp2230 >= 1) goto $l2229; else goto $l2214;
    $l2232:;
    if ($tmp2230 > 1) goto $l2229; else goto $l2214;
    $l2229:;
    i2207.value += 1;
    goto $l2212;
    $l2214:;
    panda$core$Bit $tmp2237 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_m->value->owner)->name, &$s2236);
    if ($tmp2237.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2238 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2238->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2238->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp2240 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(p_m);
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2238, ((panda$core$Int64) { 1005 }), p_position, $tmp2240, ((panda$core$Object*) p_m), ((panda$collections$ListView*) finalArgs2137));
        result2235 = $tmp2238;
    }
    }
    else {
    {
        org$pandalanguage$pandac$IRNode* $tmp2241 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2241->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2241->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2241, ((panda$core$Int64) { 1005 }), p_position, p_m->value->returnType, ((panda$core$Object*) p_m), ((panda$collections$ListView*) finalArgs2137));
        result2235 = $tmp2241;
        org$pandalanguage$pandac$Type* $tmp2243 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(p_m);
        org$pandalanguage$pandac$IRNode* $tmp2244 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, result2235, p_position, ((panda$core$Bit) { false }), $tmp2243);
        result2235 = $tmp2244;
    }
    }
    return result2235;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_target, panda$core$String* p_name, panda$collections$ListView* p_args) {
    org$pandalanguage$pandac$IRNode* $tmp2245 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_target, p_name, p_args, NULL);
    return $tmp2245;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_target, panda$core$String* p_name, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedType) {
    org$pandalanguage$pandac$IRNode* resolved2246;
    org$pandalanguage$pandac$ClassDecl* cl2248;
    org$pandalanguage$pandac$Symbol* s2252;
    org$pandalanguage$pandac$IRNode* ref2274;
    org$pandalanguage$pandac$IRNode* $tmp2247 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_target);
    resolved2246 = $tmp2247;
    if (((panda$core$Bit) { resolved2246 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp2249 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(resolved2246->kind, ((panda$core$Int64) { 1001 }));
    if ($tmp2249.value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp2250 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Type*) resolved2246->payload));
        cl2248 = $tmp2250;
    }
    }
    else {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp2251 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, resolved2246->type);
        cl2248 = $tmp2251;
    }
    }
    if (((panda$core$Bit) { cl2248 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp2253 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl2248);
    org$pandalanguage$pandac$Symbol* $tmp2254 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp2253, p_name);
    s2252 = $tmp2254;
    if (((panda$core$Bit) { s2252 == NULL }).value) {
    {
        panda$core$String* $tmp2256 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2255, ((org$pandalanguage$pandac$Symbol*) cl2248)->name);
        panda$core$String* $tmp2258 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2256, &$s2257);
        panda$core$String* $tmp2259 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2258, p_name);
        panda$core$String* $tmp2261 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2259, &$s2260);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_target->position, $tmp2261);
        return NULL;
    }
    }
    panda$core$Bit $tmp2263 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(s2252->kind, ((panda$core$Int64) { 204 }));
    bool $tmp2262 = $tmp2263.value;
    if (!$tmp2262) goto $l2264;
    panda$core$Bit $tmp2265 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(s2252->kind, ((panda$core$Int64) { 205 }));
    $tmp2262 = $tmp2265.value;
    $l2264:;
    panda$core$Bit $tmp2266 = { $tmp2262 };
    if ($tmp2266.value) {
    {
        panda$core$String* $tmp2268 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2267, ((org$pandalanguage$pandac$Symbol*) cl2248)->name);
        panda$core$String* $tmp2270 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2268, &$s2269);
        panda$core$String* $tmp2271 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2270, p_name);
        panda$core$String* $tmp2273 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2271, &$s2272);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_target->position, $tmp2273);
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp2275 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl2248);
    org$pandalanguage$pandac$IRNode* $tmp2276 = org$pandalanguage$pandac$Compiler$symbolRef$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q(self, p_target->position, p_target, s2252, $tmp2275);
    ref2274 = $tmp2276;
    if (((panda$core$Bit) { ref2274 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp2277 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, ref2274, p_args, p_expectedType);
    return $tmp2277;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_m, panda$collections$ListView* p_args) {
    org$pandalanguage$pandac$IRNode* $tmp2278 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_m, p_args, NULL);
    return $tmp2278;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_m, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedType) {
    org$pandalanguage$pandac$IRNode* target2279;
    panda$collections$Array* methods2286;
    org$pandalanguage$pandac$MethodDecl* first2291;
    panda$core$MutableString* msg2296;
    panda$core$String* separator2307;
    panda$collections$Iterator* a$Iter2309;
    org$pandalanguage$pandac$IRNode* a2321;
    org$pandalanguage$pandac$IRNode* target2335;
    panda$collections$Array* children2343;
    panda$collections$Array* types2349;
    panda$collections$Iterator* m$Iter2352;
    org$pandalanguage$pandac$MethodRef* m2364;
    org$pandalanguage$pandac$IRNode* target2374;
    org$pandalanguage$pandac$IRNode* initCall2377;
    panda$collections$Array* children2381;
    org$pandalanguage$pandac$IRNode* resolved2386;
    switch (p_m->kind.value) {
        case 1002:
        {
            panda$core$Int64 $tmp2280 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
            panda$core$Bit $tmp2281 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2280, ((panda$core$Int64) { 0 }));
            if ($tmp2281.value) {
            {
                target2279 = NULL;
            }
            }
            else {
            {
                panda$core$Int64 $tmp2282 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
                panda$core$Bit $tmp2283 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2282, ((panda$core$Int64) { 1 }));
                PANDA_ASSERT($tmp2283.value);
                panda$core$Object* $tmp2284 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 0 }));
                target2279 = ((org$pandalanguage$pandac$IRNode*) $tmp2284);
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp2285 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, p_m->position, target2279, ((org$pandalanguage$pandac$MethodRef*) p_m->payload), p_args);
            return $tmp2285;
        }
        break;
        case 1003:
        {
            panda$collections$Array* $tmp2287 = (panda$collections$Array*) malloc(40);
            $tmp2287->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2287->refCount.value = 1;
            panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp2287, ((panda$collections$ListView*) p_m->payload));
            methods2286 = $tmp2287;
            org$pandalanguage$pandac$Compiler$matchMethods$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(self, methods2286, p_args, p_expectedType);
            panda$core$Int64 $tmp2289 = panda$collections$Array$get_count$R$panda$core$Int64(methods2286);
            panda$core$Bit $tmp2290 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2289, ((panda$core$Int64) { 0 }));
            if ($tmp2290.value) {
            {
                ITable* $tmp2292 = ((panda$collections$ListView*) p_m->payload)->$class->itable;
                while ($tmp2292->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp2292 = $tmp2292->next;
                }
                $fn2294 $tmp2293 = $tmp2292->methods[0];
                panda$core$Object* $tmp2295 = $tmp2293(((panda$collections$ListView*) p_m->payload), ((panda$core$Int64) { 0 }));
                first2291 = ((org$pandalanguage$pandac$MethodRef*) $tmp2295)->value;
                panda$core$MutableString* $tmp2297 = (panda$core$MutableString*) malloc(48);
                $tmp2297->$class = (panda$core$Class*) &panda$core$MutableString$class;
                $tmp2297->refCount.value = 1;
                panda$core$String* $tmp2300 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2299, ((org$pandalanguage$pandac$Symbol*) first2291->owner)->name);
                panda$core$String* $tmp2302 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2300, &$s2301);
                panda$core$String* $tmp2303 = panda$core$String$convert$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) first2291)->name);
                panda$core$String* $tmp2305 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2303, &$s2304);
                panda$core$String* $tmp2306 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2302, $tmp2305);
                panda$core$MutableString$init$panda$core$String($tmp2297, $tmp2306);
                msg2296 = $tmp2297;
                separator2307 = &$s2308;
                {
                    ITable* $tmp2310 = ((panda$collections$Iterable*) p_args)->$class->itable;
                    while ($tmp2310->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp2310 = $tmp2310->next;
                    }
                    $fn2312 $tmp2311 = $tmp2310->methods[0];
                    panda$collections$Iterator* $tmp2313 = $tmp2311(((panda$collections$Iterable*) p_args));
                    a$Iter2309 = $tmp2313;
                    $l2314:;
                    ITable* $tmp2316 = a$Iter2309->$class->itable;
                    while ($tmp2316->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp2316 = $tmp2316->next;
                    }
                    $fn2318 $tmp2317 = $tmp2316->methods[0];
                    panda$core$Bit $tmp2319 = $tmp2317(a$Iter2309);
                    panda$core$Bit $tmp2320 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2319);
                    if (!$tmp2320.value) goto $l2315;
                    {
                        ITable* $tmp2322 = a$Iter2309->$class->itable;
                        while ($tmp2322->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2322 = $tmp2322->next;
                        }
                        $fn2324 $tmp2323 = $tmp2322->methods[1];
                        panda$core$Object* $tmp2325 = $tmp2323(a$Iter2309);
                        a2321 = ((org$pandalanguage$pandac$IRNode*) $tmp2325);
                        panda$core$MutableString$append$panda$core$String(msg2296, separator2307);
                        panda$core$MutableString$append$panda$core$Object(msg2296, ((panda$core$Object*) a2321->type));
                        separator2307 = &$s2326;
                    }
                    goto $l2314;
                    $l2315:;
                }
                panda$core$MutableString$append$panda$core$String(msg2296, &$s2327);
                if (((panda$core$Bit) { p_expectedType != NULL }).value) {
                {
                    panda$core$String* $tmp2329 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2328, ((panda$core$Object*) p_expectedType));
                    panda$core$String* $tmp2331 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2329, &$s2330);
                    panda$core$MutableString$append$panda$core$String(msg2296, $tmp2331);
                }
                }
                panda$core$String* $tmp2332 = panda$core$MutableString$finish$R$panda$core$String(msg2296);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_m->position, $tmp2332);
                return NULL;
            }
            }
            panda$core$Int64 $tmp2333 = panda$collections$Array$get_count$R$panda$core$Int64(methods2286);
            panda$core$Bit $tmp2334 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2333, ((panda$core$Int64) { 1 }));
            if ($tmp2334.value) {
            {
                panda$core$Int64 $tmp2336 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
                panda$core$Bit $tmp2337 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2336, ((panda$core$Int64) { 1 }));
                if ($tmp2337.value) {
                {
                    panda$core$Object* $tmp2338 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 0 }));
                    target2335 = ((org$pandalanguage$pandac$IRNode*) $tmp2338);
                }
                }
                else {
                {
                    panda$core$Int64 $tmp2339 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
                    panda$core$Bit $tmp2340 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2339, ((panda$core$Int64) { 0 }));
                    PANDA_ASSERT($tmp2340.value);
                    target2335 = NULL;
                }
                }
                panda$core$Object* $tmp2341 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(methods2286, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$IRNode* $tmp2342 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, p_m->position, target2335, ((org$pandalanguage$pandac$MethodRef*) $tmp2341), p_args);
                return $tmp2342;
            }
            }
            panda$collections$Array* $tmp2344 = (panda$collections$Array*) malloc(40);
            $tmp2344->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2344->refCount.value = 1;
            panda$collections$Array$init($tmp2344);
            children2343 = $tmp2344;
            org$pandalanguage$pandac$IRNode* $tmp2346 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2346->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2346->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2348 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2346, ((panda$core$Int64) { 1003 }), p_m->position, $tmp2348, ((panda$core$Object*) methods2286), ((panda$collections$ListView*) p_m->children));
            panda$collections$Array$add$panda$collections$Array$T(children2343, ((panda$core$Object*) $tmp2346));
            panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(children2343, ((panda$collections$CollectionView*) p_args));
            panda$collections$Array* $tmp2350 = (panda$collections$Array*) malloc(40);
            $tmp2350->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2350->refCount.value = 1;
            panda$collections$Array$init($tmp2350);
            types2349 = $tmp2350;
            {
                ITable* $tmp2353 = ((panda$collections$Iterable*) methods2286)->$class->itable;
                while ($tmp2353->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp2353 = $tmp2353->next;
                }
                $fn2355 $tmp2354 = $tmp2353->methods[0];
                panda$collections$Iterator* $tmp2356 = $tmp2354(((panda$collections$Iterable*) methods2286));
                m$Iter2352 = $tmp2356;
                $l2357:;
                ITable* $tmp2359 = m$Iter2352->$class->itable;
                while ($tmp2359->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp2359 = $tmp2359->next;
                }
                $fn2361 $tmp2360 = $tmp2359->methods[0];
                panda$core$Bit $tmp2362 = $tmp2360(m$Iter2352);
                panda$core$Bit $tmp2363 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2362);
                if (!$tmp2363.value) goto $l2358;
                {
                    ITable* $tmp2365 = m$Iter2352->$class->itable;
                    while ($tmp2365->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp2365 = $tmp2365->next;
                    }
                    $fn2367 $tmp2366 = $tmp2365->methods[1];
                    panda$core$Object* $tmp2368 = $tmp2366(m$Iter2352);
                    m2364 = ((org$pandalanguage$pandac$MethodRef*) $tmp2368);
                    org$pandalanguage$pandac$Type* $tmp2369 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m2364);
                    panda$collections$Array$add$panda$collections$Array$T(types2349, ((panda$core$Object*) $tmp2369));
                }
                goto $l2357;
                $l2358:;
            }
            org$pandalanguage$pandac$IRNode* $tmp2370 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2370->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2370->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2372 = (org$pandalanguage$pandac$Type*) malloc(96);
            $tmp2372->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp2372->refCount.value = 1;
            org$pandalanguage$pandac$Type$init$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp2372, ((panda$collections$ListView*) types2349));
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2370, ((panda$core$Int64) { 1039 }), p_m->position, $tmp2372, ((panda$collections$ListView*) children2343));
            return $tmp2370;
        }
        break;
        case 1001:
        {
            org$pandalanguage$pandac$IRNode* $tmp2375 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2375->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2375->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp2375, ((panda$core$Int64) { 1038 }), p_m->position, ((org$pandalanguage$pandac$Type*) p_m->payload));
            target2374 = $tmp2375;
            org$pandalanguage$pandac$IRNode* $tmp2379 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target2374, &$s2378, p_args);
            org$pandalanguage$pandac$IRNode* $tmp2380 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp2379);
            initCall2377 = $tmp2380;
            if (((panda$core$Bit) { initCall2377 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp2382 = (panda$collections$Array*) malloc(40);
            $tmp2382->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2382->refCount.value = 1;
            panda$collections$Array$init($tmp2382);
            children2381 = $tmp2382;
            panda$collections$Array$add$panda$collections$Array$T(children2381, ((panda$core$Object*) initCall2377));
            org$pandalanguage$pandac$IRNode* $tmp2384 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2384->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2384->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2384, ((panda$core$Int64) { 1010 }), p_m->position, ((org$pandalanguage$pandac$Type*) p_m->payload), ((panda$collections$ListView*) children2381));
            return $tmp2384;
        }
        break;
        default:
        {
            org$pandalanguage$pandac$IRNode* $tmp2387 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_m);
            resolved2386 = $tmp2387;
            if (((panda$core$Bit) { resolved2386 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$String* $tmp2389 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2388, ((panda$core$Object*) resolved2386->type));
            panda$core$String* $tmp2391 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2389, &$s2390);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, resolved2386->position, $tmp2391);
        }
    }
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$collections$Array* subtypes2392;
    panda$core$MutableString* typeName2395;
    panda$core$String* separator2399;
    panda$collections$Iterator* p$Iter2401;
    org$pandalanguage$pandac$MethodDecl$Parameter* p2413;
    panda$core$Int64 kind2419;
    panda$core$Char8 $tmp2425;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
    panda$collections$Array* $tmp2393 = (panda$collections$Array*) malloc(40);
    $tmp2393->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2393->refCount.value = 1;
    panda$collections$Array$init($tmp2393);
    subtypes2392 = $tmp2393;
    panda$core$MutableString* $tmp2396 = (panda$core$MutableString*) malloc(48);
    $tmp2396->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp2396->refCount.value = 1;
    panda$core$MutableString$init$panda$core$String($tmp2396, &$s2398);
    typeName2395 = $tmp2396;
    separator2399 = &$s2400;
    {
        ITable* $tmp2402 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp2402->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2402 = $tmp2402->next;
        }
        $fn2404 $tmp2403 = $tmp2402->methods[0];
        panda$collections$Iterator* $tmp2405 = $tmp2403(((panda$collections$Iterable*) p_m->parameters));
        p$Iter2401 = $tmp2405;
        $l2406:;
        ITable* $tmp2408 = p$Iter2401->$class->itable;
        while ($tmp2408->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2408 = $tmp2408->next;
        }
        $fn2410 $tmp2409 = $tmp2408->methods[0];
        panda$core$Bit $tmp2411 = $tmp2409(p$Iter2401);
        panda$core$Bit $tmp2412 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2411);
        if (!$tmp2412.value) goto $l2407;
        {
            ITable* $tmp2414 = p$Iter2401->$class->itable;
            while ($tmp2414->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2414 = $tmp2414->next;
            }
            $fn2416 $tmp2415 = $tmp2414->methods[1];
            panda$core$Object* $tmp2417 = $tmp2415(p$Iter2401);
            p2413 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp2417);
            panda$core$MutableString$append$panda$core$String(typeName2395, separator2399);
            panda$core$MutableString$append$panda$core$String(typeName2395, ((org$pandalanguage$pandac$Symbol*) p2413->type)->name);
            panda$collections$Array$add$panda$collections$Array$T(subtypes2392, ((panda$core$Object*) p2413->type));
            separator2399 = &$s2418;
        }
        goto $l2406;
        $l2407:;
    }
    panda$core$Bit $tmp2420 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 58 }));
    if ($tmp2420.value) {
    {
        panda$core$MutableString$append$panda$core$String(typeName2395, &$s2421);
        kind2419 = ((panda$core$Int64) { 24 });
    }
    }
    else {
    {
        panda$core$MutableString$append$panda$core$String(typeName2395, &$s2422);
        kind2419 = ((panda$core$Int64) { 25 });
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(subtypes2392, ((panda$core$Object*) p_m->returnType));
    org$pandalanguage$pandac$Type* $tmp2423 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2424 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp2423);
    if ($tmp2424.value) {
    {
        panda$core$MutableString$append$panda$core$String(typeName2395, ((org$pandalanguage$pandac$Symbol*) p_m->returnType)->name);
    }
    }
    panda$core$Char8$init$panda$core$UInt8(&$tmp2425, ((panda$core$UInt8) { 41 }));
    panda$core$MutableString$append$panda$core$Char8(typeName2395, $tmp2425);
    org$pandalanguage$pandac$Type* $tmp2426 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp2426->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp2426->refCount.value = 1;
    panda$core$String* $tmp2428 = panda$core$MutableString$finish$R$panda$core$String(typeName2395);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp2426, $tmp2428, kind2419, ((org$pandalanguage$pandac$Symbol*) p_m)->position, ((panda$collections$ListView*) subtypes2392), ((panda$core$Bit) { true }));
    return $tmp2426;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$declaredTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m, org$pandalanguage$pandac$Type* p_selfType) {
    panda$collections$Array* subtypes2429;
    panda$core$MutableString* typeName2432;
    panda$collections$Iterator* p$Iter2436;
    org$pandalanguage$pandac$MethodDecl$Parameter* p2448;
    panda$core$Int64 kind2454;
    panda$core$Char8 $tmp2460;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
    panda$collections$Array* $tmp2430 = (panda$collections$Array*) malloc(40);
    $tmp2430->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2430->refCount.value = 1;
    panda$collections$Array$init($tmp2430);
    subtypes2429 = $tmp2430;
    panda$core$MutableString* $tmp2433 = (panda$core$MutableString*) malloc(48);
    $tmp2433->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp2433->refCount.value = 1;
    panda$core$MutableString$init$panda$core$String($tmp2433, &$s2435);
    typeName2432 = $tmp2433;
    panda$core$MutableString$append$panda$core$String(typeName2432, ((org$pandalanguage$pandac$Symbol*) p_selfType)->name);
    panda$collections$Array$add$panda$collections$Array$T(subtypes2429, ((panda$core$Object*) p_selfType));
    {
        ITable* $tmp2437 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp2437->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2437 = $tmp2437->next;
        }
        $fn2439 $tmp2438 = $tmp2437->methods[0];
        panda$collections$Iterator* $tmp2440 = $tmp2438(((panda$collections$Iterable*) p_m->parameters));
        p$Iter2436 = $tmp2440;
        $l2441:;
        ITable* $tmp2443 = p$Iter2436->$class->itable;
        while ($tmp2443->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2443 = $tmp2443->next;
        }
        $fn2445 $tmp2444 = $tmp2443->methods[0];
        panda$core$Bit $tmp2446 = $tmp2444(p$Iter2436);
        panda$core$Bit $tmp2447 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2446);
        if (!$tmp2447.value) goto $l2442;
        {
            ITable* $tmp2449 = p$Iter2436->$class->itable;
            while ($tmp2449->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2449 = $tmp2449->next;
            }
            $fn2451 $tmp2450 = $tmp2449->methods[1];
            panda$core$Object* $tmp2452 = $tmp2450(p$Iter2436);
            p2448 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp2452);
            panda$core$MutableString$append$panda$core$String(typeName2432, &$s2453);
            panda$core$MutableString$append$panda$core$String(typeName2432, ((org$pandalanguage$pandac$Symbol*) p2448->type)->name);
            panda$collections$Array$add$panda$collections$Array$T(subtypes2429, ((panda$core$Object*) p2448->type));
        }
        goto $l2441;
        $l2442:;
    }
    panda$core$Bit $tmp2455 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 58 }));
    if ($tmp2455.value) {
    {
        panda$core$MutableString$append$panda$core$String(typeName2432, &$s2456);
        kind2454 = ((panda$core$Int64) { 24 });
    }
    }
    else {
    {
        panda$core$MutableString$append$panda$core$String(typeName2432, &$s2457);
        kind2454 = ((panda$core$Int64) { 25 });
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(subtypes2429, ((panda$core$Object*) p_m->returnType));
    org$pandalanguage$pandac$Type* $tmp2458 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2459 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp2458);
    if ($tmp2459.value) {
    {
        panda$core$MutableString$append$panda$core$String(typeName2432, ((org$pandalanguage$pandac$Symbol*) p_m->returnType)->name);
    }
    }
    panda$core$Char8$init$panda$core$UInt8(&$tmp2460, ((panda$core$UInt8) { 41 }));
    panda$core$MutableString$append$panda$core$Char8(typeName2432, $tmp2460);
    org$pandalanguage$pandac$Type* $tmp2461 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp2461->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp2461->refCount.value = 1;
    panda$core$String* $tmp2463 = panda$core$MutableString$finish$R$panda$core$String(typeName2432);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp2461, $tmp2463, kind2454, ((org$pandalanguage$pandac$Symbol*) p_m)->position, ((panda$collections$ListView*) subtypes2429), ((panda$core$Bit) { true }));
    return $tmp2461;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$MethodDecl* inherited2464;
    org$pandalanguage$pandac$MethodDecl* $tmp2465 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(self, p_m);
    inherited2464 = $tmp2465;
    if (((panda$core$Bit) { inherited2464 == NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp2466 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, p_m);
        return $tmp2466;
    }
    }
    org$pandalanguage$pandac$Type* $tmp2467 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, inherited2464);
    return $tmp2467;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$Type* $tmp2468 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    org$pandalanguage$pandac$Type* $tmp2469 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_m, $tmp2468);
    return $tmp2469;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m, org$pandalanguage$pandac$Type* p_selfType) {
    org$pandalanguage$pandac$MethodDecl* inherited2470;
    org$pandalanguage$pandac$MethodDecl* $tmp2471 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(self, p_m);
    inherited2470 = $tmp2471;
    if (((panda$core$Bit) { inherited2470 == NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp2472 = org$pandalanguage$pandac$Compiler$declaredTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_m, p_selfType);
        return $tmp2472;
    }
    }
    org$pandalanguage$pandac$Type* $tmp2473 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, inherited2470, p_selfType);
    return $tmp2473;
}
panda$core$String* org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(panda$core$Int64 p_op) {
    switch (p_op.value) {
        case 51:
        {
            return &$s2474;
        }
        break;
        case 52:
        {
            return &$s2475;
        }
        break;
        case 53:
        {
            return &$s2476;
        }
        break;
        case 54:
        {
            return &$s2477;
        }
        break;
        case 55:
        {
            return &$s2478;
        }
        break;
        case 56:
        {
            return &$s2479;
        }
        break;
        case 57:
        {
            return &$s2480;
        }
        break;
        case 58:
        {
            return &$s2481;
        }
        break;
        case 59:
        {
            return &$s2482;
        }
        break;
        case 63:
        {
            return &$s2483;
        }
        break;
        case 62:
        {
            return &$s2484;
        }
        break;
        case 65:
        {
            return &$s2485;
        }
        break;
        case 64:
        {
            return &$s2486;
        }
        break;
        case 68:
        {
            return &$s2487;
        }
        break;
        case 69:
        {
            return &$s2488;
        }
        break;
        case 66:
        {
            return &$s2489;
        }
        break;
        case 67:
        {
            return &$s2490;
        }
        break;
        case 70:
        {
            return &$s2491;
        }
        break;
        case 71:
        {
            return &$s2492;
        }
        break;
        case 49:
        {
            return &$s2493;
        }
        break;
        case 50:
        {
            return &$s2494;
        }
        break;
        case 72:
        {
            return &$s2495;
        }
        break;
        case 1:
        {
            return &$s2496;
        }
        break;
        case 101:
        {
            return &$s2497;
        }
        break;
        case 73:
        {
            return &$s2498;
        }
        break;
        case 60:
        {
            return &$s2499;
        }
        break;
        case 61:
        {
            return &$s2500;
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
            panda$core$Int64 $tmp2501 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_expr->children);
            panda$core$Bit $tmp2502 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2501, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp2502.value);
            panda$core$Bit $tmp2503 = panda$core$Bit$$NOT$R$panda$core$Bit(((panda$core$Bit$wrapper*) p_expr->payload)->value);
            if ($tmp2503.value) {
            {
                panda$core$Object* $tmp2504 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Bit $tmp2505 = org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp2504));
                return $tmp2505;
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
            panda$core$Object* $tmp2506 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp2507 = org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp2506));
            return $tmp2507;
        }
        break;
        default:
        {
            return ((panda$core$Bit) { false });
        }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$foldInts$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_left, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_right) {
    panda$core$Int64 l2533;
    panda$core$Int64 r2535;
    panda$core$Bit $tmp2509 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_left->kind, ((panda$core$Int64) { 1004 }));
    bool $tmp2508 = $tmp2509.value;
    if ($tmp2508) goto $l2510;
    panda$core$Bit $tmp2511 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_left->kind, ((panda$core$Int64) { 1032 }));
    $tmp2508 = $tmp2511.value;
    $l2510:;
    panda$core$Bit $tmp2512 = { $tmp2508 };
    PANDA_ASSERT($tmp2512.value);
    panda$core$Bit $tmp2514 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_right->kind, ((panda$core$Int64) { 1004 }));
    bool $tmp2513 = $tmp2514.value;
    if ($tmp2513) goto $l2515;
    panda$core$Bit $tmp2516 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_right->kind, ((panda$core$Int64) { 1032 }));
    $tmp2513 = $tmp2516.value;
    $l2515:;
    panda$core$Bit $tmp2517 = { $tmp2513 };
    PANDA_ASSERT($tmp2517.value);
    panda$core$Bit $tmp2520 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_left->kind, ((panda$core$Int64) { 1032 }));
    bool $tmp2519 = $tmp2520.value;
    if ($tmp2519) goto $l2521;
    panda$core$UInt64 $tmp2523 = panda$core$Int64$convert$R$panda$core$UInt64(((panda$core$Int64) { 9223372036854775807 }));
    panda$core$Bit $tmp2524 = panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p_left->payload)->value, $tmp2523);
    bool $tmp2522 = $tmp2524.value;
    if (!$tmp2522) goto $l2525;
    panda$core$Bit $tmp2526 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_right->kind, ((panda$core$Int64) { 1032 }));
    $tmp2522 = $tmp2526.value;
    $l2525:;
    panda$core$Bit $tmp2527 = { $tmp2522 };
    $tmp2519 = $tmp2527.value;
    $l2521:;
    panda$core$Bit $tmp2528 = { $tmp2519 };
    bool $tmp2518 = $tmp2528.value;
    if ($tmp2518) goto $l2529;
    panda$core$UInt64 $tmp2530 = panda$core$Int64$convert$R$panda$core$UInt64(((panda$core$Int64) { 9223372036854775807 }));
    panda$core$Bit $tmp2531 = panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p_right->payload)->value, $tmp2530);
    $tmp2518 = $tmp2531.value;
    $l2529:;
    panda$core$Bit $tmp2532 = { $tmp2518 };
    if ($tmp2532.value) {
    {
        panda$core$Int64 $tmp2534 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_left->payload)->value);
        l2533 = $tmp2534;
        panda$core$Int64 $tmp2536 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_right->payload)->value);
        r2535 = $tmp2536;
        switch (p_op.value) {
            case 51:
            {
                org$pandalanguage$pandac$IRNode* $tmp2537 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2537->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2537->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2539 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2540 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(l2533, r2535);
                panda$core$UInt64 $tmp2541 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2540);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2537, ((panda$core$Int64) { 1004 }), p_position, $tmp2539, $tmp2541);
                return $tmp2537;
            }
            break;
            case 52:
            {
                org$pandalanguage$pandac$IRNode* $tmp2542 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2542->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2542->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2544 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2545 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(l2533, r2535);
                panda$core$UInt64 $tmp2546 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2545);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2542, ((panda$core$Int64) { 1004 }), p_position, $tmp2544, $tmp2546);
                return $tmp2542;
            }
            break;
            case 53:
            {
                org$pandalanguage$pandac$IRNode* $tmp2547 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2547->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2547->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2549 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2550 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(l2533, r2535);
                panda$core$UInt64 $tmp2551 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2550);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2547, ((panda$core$Int64) { 1004 }), p_position, $tmp2549, $tmp2551);
                return $tmp2547;
            }
            break;
            case 55:
            {
                org$pandalanguage$pandac$IRNode* $tmp2552 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2552->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2552->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2554 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2555 = panda$core$Int64$$INTDIV$panda$core$Int64$R$panda$core$Int64(l2533, r2535);
                panda$core$UInt64 $tmp2556 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2555);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2552, ((panda$core$Int64) { 1004 }), p_position, $tmp2554, $tmp2556);
                return $tmp2552;
            }
            break;
            case 56:
            {
                org$pandalanguage$pandac$IRNode* $tmp2557 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2557->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2557->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2559 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2560 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(l2533, r2535);
                panda$core$UInt64 $tmp2561 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2560);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2557, ((panda$core$Int64) { 1004 }), p_position, $tmp2559, $tmp2561);
                return $tmp2557;
            }
            break;
            case 58:
            {
                org$pandalanguage$pandac$IRNode* $tmp2562 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2562->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2562->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2564 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2565 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(l2533, r2535);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2562, ((panda$core$Int64) { 1011 }), p_position, $tmp2564, $tmp2565);
                return $tmp2562;
            }
            break;
            case 59:
            {
                org$pandalanguage$pandac$IRNode* $tmp2566 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2566->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2566->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2568 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2569 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(l2533, r2535);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2566, ((panda$core$Int64) { 1011 }), p_position, $tmp2568, $tmp2569);
                return $tmp2566;
            }
            break;
            case 62:
            {
                org$pandalanguage$pandac$IRNode* $tmp2570 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2570->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2570->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2572 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2573 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(l2533, r2535);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2570, ((panda$core$Int64) { 1011 }), p_position, $tmp2572, $tmp2573);
                return $tmp2570;
            }
            break;
            case 63:
            {
                org$pandalanguage$pandac$IRNode* $tmp2574 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2574->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2574->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2576 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2577 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(l2533, r2535);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2574, ((panda$core$Int64) { 1011 }), p_position, $tmp2576, $tmp2577);
                return $tmp2574;
            }
            break;
            case 64:
            {
                org$pandalanguage$pandac$IRNode* $tmp2578 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2578->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2578->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2580 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2581 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(l2533, r2535);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2578, ((panda$core$Int64) { 1011 }), p_position, $tmp2580, $tmp2581);
                return $tmp2578;
            }
            break;
            case 65:
            {
                org$pandalanguage$pandac$IRNode* $tmp2582 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2582->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2582->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2584 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2585 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(l2533, r2535);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2582, ((panda$core$Int64) { 1011 }), p_position, $tmp2584, $tmp2585);
                return $tmp2582;
            }
            break;
            case 67:
            {
                org$pandalanguage$pandac$IRNode* $tmp2586 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2586->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2586->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2588 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2589 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(l2533, r2535);
                panda$core$UInt64 $tmp2590 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2589);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2586, ((panda$core$Int64) { 1004 }), p_position, $tmp2588, $tmp2590);
                return $tmp2586;
            }
            break;
            case 69:
            {
                org$pandalanguage$pandac$IRNode* $tmp2591 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2591->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2591->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2593 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2594 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(l2533, r2535);
                panda$core$UInt64 $tmp2595 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2594);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2591, ((panda$core$Int64) { 1004 }), p_position, $tmp2593, $tmp2595);
                return $tmp2591;
            }
            break;
            case 71:
            {
                org$pandalanguage$pandac$IRNode* $tmp2596 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2596->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2596->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2598 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2599 = panda$core$Int64$$BXOR$panda$core$Int64$R$panda$core$Int64(l2533, r2535);
                panda$core$UInt64 $tmp2600 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2599);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2596, ((panda$core$Int64) { 1004 }), p_position, $tmp2598, $tmp2600);
                return $tmp2596;
            }
            break;
            case 72:
            {
                org$pandalanguage$pandac$IRNode* $tmp2601 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2601->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2601->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2603 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2604 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(l2533, r2535);
                panda$core$UInt64 $tmp2605 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2604);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2601, ((panda$core$Int64) { 1004 }), p_position, $tmp2603, $tmp2605);
                return $tmp2601;
            }
            break;
            case 1:
            {
                org$pandalanguage$pandac$IRNode* $tmp2606 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2606->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2606->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2608 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2609 = panda$core$Int64$$SHR$panda$core$Int64$R$panda$core$Int64(l2533, r2535);
                panda$core$UInt64 $tmp2610 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2609);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2606, ((panda$core$Int64) { 1004 }), p_position, $tmp2608, $tmp2610);
                return $tmp2606;
            }
            break;
        }
    }
    }
    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s2611);
    return NULL;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    panda$core$Bit $tmp2612 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1009 }));
    if ($tmp2612.value) {
    {
        panda$core$Object* $tmp2613 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
        return ((org$pandalanguage$pandac$IRNode*) $tmp2613);
    }
    }
    return p_expr;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIndexedAssignment$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_left, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_right) {
    panda$collections$Array* args2618;
    org$pandalanguage$pandac$IRNode* resolved2626;
    panda$collections$Array* children2631;
    panda$core$UInt64 baseId2637;
    org$pandalanguage$pandac$IRNode* base2638;
    panda$core$UInt64 indexId2645;
    org$pandalanguage$pandac$IRNode* index2646;
    org$pandalanguage$pandac$IRNode* baseRef2651;
    org$pandalanguage$pandac$IRNode* indexRef2654;
    org$pandalanguage$pandac$IRNode* rhsIndex2657;
    org$pandalanguage$pandac$IRNode* value2659;
    panda$core$Bit $tmp2614 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_left->kind, ((panda$core$Int64) { 1040 }));
    PANDA_ASSERT($tmp2614.value);
    panda$core$Int64 $tmp2615 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_left->children);
    panda$core$Bit $tmp2616 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2615, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp2616.value);
    panda$core$Bit $tmp2617 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 73 }));
    if ($tmp2617.value) {
    {
        panda$collections$Array* $tmp2619 = (panda$collections$Array*) malloc(40);
        $tmp2619->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2619->refCount.value = 1;
        panda$collections$Array$init($tmp2619);
        args2618 = $tmp2619;
        panda$core$Object* $tmp2621 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_left->children, ((panda$core$Int64) { 1 }));
        panda$collections$Array$add$panda$collections$Array$T(args2618, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp2621)));
        panda$collections$Array$add$panda$collections$Array$T(args2618, ((panda$core$Object*) p_right));
        panda$core$Object* $tmp2622 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_left->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp2624 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp2622), &$s2623, ((panda$collections$ListView*) args2618));
        return $tmp2624;
    }
    }
    panda$core$Bit $tmp2625 = org$pandalanguage$pandac$Compiler$isAssignment$panda$core$Int64$R$panda$core$Bit(p_op);
    PANDA_ASSERT($tmp2625.value);
    org$pandalanguage$pandac$IRNode* $tmp2627 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_left);
    resolved2626 = $tmp2627;
    if (((panda$core$Bit) { resolved2626 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp2628 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self, resolved2626);
    resolved2626 = $tmp2628;
    panda$core$Int64 $tmp2629 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(resolved2626->children);
    panda$core$Bit $tmp2630 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2629, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp2630.value);
    panda$collections$Array* $tmp2632 = (panda$collections$Array*) malloc(40);
    $tmp2632->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2632->refCount.value = 1;
    panda$collections$Array$init($tmp2632);
    children2631 = $tmp2632;
    panda$core$Object* $tmp2634 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(resolved2626->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp2635 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self, ((org$pandalanguage$pandac$IRNode*) $tmp2634));
    panda$collections$Array$add$panda$collections$Array$T(children2631, ((panda$core$Object*) $tmp2635));
    panda$core$UInt64 $tmp2636 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(self->reusedValueCount, ((panda$core$UInt64) { 1 }));
    self->reusedValueCount = $tmp2636;
    baseId2637 = self->reusedValueCount;
    org$pandalanguage$pandac$IRNode* $tmp2639 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp2639->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2639->refCount.value = 1;
    panda$core$Object* $tmp2641 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children2631, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp2642 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children2631, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2639, ((panda$core$Int64) { 1027 }), ((org$pandalanguage$pandac$IRNode*) $tmp2641)->position, ((org$pandalanguage$pandac$IRNode*) $tmp2642)->type, ((panda$core$Object*) wrap_panda$core$UInt64(baseId2637)), ((panda$collections$ListView*) children2631));
    base2638 = $tmp2639;
    panda$collections$Array$clear(children2631);
    panda$core$Object* $tmp2643 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(resolved2626->children, ((panda$core$Int64) { 1 }));
    panda$collections$Array$add$panda$collections$Array$T(children2631, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp2643)));
    panda$core$UInt64 $tmp2644 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(self->reusedValueCount, ((panda$core$UInt64) { 1 }));
    self->reusedValueCount = $tmp2644;
    indexId2645 = self->reusedValueCount;
    org$pandalanguage$pandac$IRNode* $tmp2647 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp2647->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2647->refCount.value = 1;
    panda$core$Object* $tmp2649 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children2631, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp2650 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children2631, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2647, ((panda$core$Int64) { 1027 }), ((org$pandalanguage$pandac$IRNode*) $tmp2649)->position, ((org$pandalanguage$pandac$IRNode*) $tmp2650)->type, ((panda$core$Object*) wrap_panda$core$UInt64(indexId2645)), ((panda$collections$ListView*) children2631));
    index2646 = $tmp2647;
    org$pandalanguage$pandac$IRNode* $tmp2652 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp2652->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2652->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2652, ((panda$core$Int64) { 1028 }), base2638->position, base2638->type, baseId2637);
    baseRef2651 = $tmp2652;
    org$pandalanguage$pandac$IRNode* $tmp2655 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp2655->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2655->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2655, ((panda$core$Int64) { 1028 }), index2646->position, index2646->type, indexId2645);
    indexRef2654 = $tmp2655;
    org$pandalanguage$pandac$IRNode* $tmp2658 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, baseRef2651, ((panda$core$Int64) { 101 }), indexRef2654);
    rhsIndex2657 = $tmp2658;
    if (((panda$core$Bit) { rhsIndex2657 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Int64 $tmp2660 = org$pandalanguage$pandac$Compiler$removeAssignment$panda$core$Int64$R$panda$core$Int64(p_op);
    org$pandalanguage$pandac$IRNode* $tmp2661 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, rhsIndex2657, $tmp2660, p_right);
    value2659 = $tmp2661;
    if (((panda$core$Bit) { value2659 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp2664 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(rhsIndex2657->type);
    bool $tmp2663 = $tmp2664.value;
    if (!$tmp2663) goto $l2665;
    panda$core$Bit $tmp2666 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_right->type);
    $tmp2663 = $tmp2666.value;
    $l2665:;
    panda$core$Bit $tmp2667 = { $tmp2663 };
    bool $tmp2662 = $tmp2667.value;
    if (!$tmp2662) goto $l2668;
    panda$core$Bit $tmp2669 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(rhsIndex2657->type, value2659->type);
    $tmp2662 = $tmp2669.value;
    $l2668:;
    panda$core$Bit $tmp2670 = { $tmp2662 };
    if ($tmp2670.value) {
    {
        panda$collections$Array* $tmp2672 = (panda$collections$Array*) malloc(40);
        $tmp2672->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2672->refCount.value = 1;
        panda$collections$Array$init($tmp2672);
        org$pandalanguage$pandac$IRNode* $tmp2674 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, value2659, &$s2671, ((panda$collections$ListView*) $tmp2672), resolved2626->type);
        value2659 = $tmp2674;
        if (((panda$core$Bit) { value2659 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$collections$Array$clear(children2631);
    panda$collections$Array$add$panda$collections$Array$T(children2631, ((panda$core$Object*) index2646));
    panda$collections$Array$add$panda$collections$Array$T(children2631, ((panda$core$Object*) value2659));
    org$pandalanguage$pandac$IRNode* $tmp2676 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, base2638, &$s2675, ((panda$collections$ListView*) children2631));
    return $tmp2676;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_rawLeft, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_rawRight) {
    org$pandalanguage$pandac$IRNode* left2677;
    org$pandalanguage$pandac$IRNode* right2678;
    panda$core$Int64 kind2702;
    org$pandalanguage$pandac$IRNode* resolved2709;
    panda$collections$Array* children2711;
    org$pandalanguage$pandac$IRNode* resolved2718;
    panda$collections$Array* children2720;
    panda$collections$Array* children2737;
    org$pandalanguage$pandac$IRNode* reusedLeft2742;
    org$pandalanguage$pandac$IRNode* toNonNullable2745;
    org$pandalanguage$pandac$IRNode* comparison2748;
    org$pandalanguage$pandac$IRNode* nullCheck2750;
    org$pandalanguage$pandac$ClassDecl* cl2770;
    org$pandalanguage$pandac$ClassDecl* cl2787;
    org$pandalanguage$pandac$IRNode* finalLeft2803;
    org$pandalanguage$pandac$IRNode* finalRight2806;
    panda$collections$Array* children2809;
    panda$collections$Array* children2823;
    panda$collections$Array* children2835;
    org$pandalanguage$pandac$IRNode* reusedLeft2841;
    org$pandalanguage$pandac$ClassDecl* cl2858;
    panda$collections$ListView* parameters2860;
    org$pandalanguage$pandac$Symbol* methods2862;
    org$pandalanguage$pandac$Type* type2866;
    panda$collections$Array* types2867;
    org$pandalanguage$pandac$MethodDecl* m2871;
    panda$collections$Iterator* m$Iter2876;
    org$pandalanguage$pandac$MethodDecl* m2888;
    panda$collections$Array* children2899;
    panda$collections$Array* children2928;
    panda$collections$Array* children2944;
    org$pandalanguage$pandac$Type* resultType2967;
    org$pandalanguage$pandac$IRNode* result2971;
    org$pandalanguage$pandac$IRNode* resolved2974;
    org$pandalanguage$pandac$IRNode* target2980;
    left2677 = p_rawLeft;
    right2678 = p_rawRight;
    panda$core$Bit $tmp2679 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2677->type->typeKind, ((panda$core$Int64) { 15 }));
    if ($tmp2679.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2680 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, right2678);
        right2678 = $tmp2680;
        if (((panda$core$Bit) { right2678 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Int64$nullable $tmp2681 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, left2677, right2678->type);
        if (((panda$core$Bit) { $tmp2681.nonnull }).value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2682 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, left2677, right2678->type);
            left2677 = $tmp2682;
        }
        }
    }
    }
    panda$core$Bit $tmp2684 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right2678->type->typeKind, ((panda$core$Int64) { 15 }));
    bool $tmp2683 = $tmp2684.value;
    if (!$tmp2683) goto $l2685;
    panda$core$Int64$nullable $tmp2686 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, right2678, left2677->type);
    $tmp2683 = ((panda$core$Bit) { $tmp2686.nonnull }).value;
    $l2685:;
    panda$core$Bit $tmp2687 = { $tmp2683 };
    if ($tmp2687.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2688 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, right2678, left2677->type);
        right2678 = $tmp2688;
    }
    }
    panda$core$Bit $tmp2692 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 58 }));
    bool $tmp2691 = $tmp2692.value;
    if ($tmp2691) goto $l2693;
    panda$core$Bit $tmp2694 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 59 }));
    $tmp2691 = $tmp2694.value;
    $l2693:;
    panda$core$Bit $tmp2695 = { $tmp2691 };
    bool $tmp2690 = $tmp2695.value;
    if ($tmp2690) goto $l2696;
    panda$core$Bit $tmp2697 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 60 }));
    $tmp2690 = $tmp2697.value;
    $l2696:;
    panda$core$Bit $tmp2698 = { $tmp2690 };
    bool $tmp2689 = $tmp2698.value;
    if ($tmp2689) goto $l2699;
    panda$core$Bit $tmp2700 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 61 }));
    $tmp2689 = $tmp2700.value;
    $l2699:;
    panda$core$Bit $tmp2701 = { $tmp2689 };
    if ($tmp2701.value) {
    {
        panda$core$Bit $tmp2704 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 58 }));
        bool $tmp2703 = $tmp2704.value;
        if ($tmp2703) goto $l2705;
        panda$core$Bit $tmp2706 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 60 }));
        $tmp2703 = $tmp2706.value;
        $l2705:;
        panda$core$Bit $tmp2707 = { $tmp2703 };
        if ($tmp2707.value) {
        {
            kind2702 = ((panda$core$Int64) { 1035 });
        }
        }
        else {
        {
            kind2702 = ((panda$core$Int64) { 1036 });
        }
        }
        panda$core$Bit $tmp2708 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2677->kind, ((panda$core$Int64) { 1030 }));
        if ($tmp2708.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2710 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, right2678);
            resolved2709 = $tmp2710;
            if (((panda$core$Bit) { resolved2709 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp2712 = (panda$collections$Array*) malloc(40);
            $tmp2712->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2712->refCount.value = 1;
            panda$collections$Array$init($tmp2712);
            children2711 = $tmp2712;
            panda$collections$Array$add$panda$collections$Array$T(children2711, ((panda$core$Object*) resolved2709));
            org$pandalanguage$pandac$IRNode* $tmp2714 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2714->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2714->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2716 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2714, kind2702, p_position, $tmp2716, ((panda$collections$ListView*) children2711));
            return $tmp2714;
        }
        }
        panda$core$Bit $tmp2717 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right2678->kind, ((panda$core$Int64) { 1030 }));
        if ($tmp2717.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2719 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, left2677);
            resolved2718 = $tmp2719;
            if (((panda$core$Bit) { resolved2718 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp2721 = (panda$collections$Array*) malloc(40);
            $tmp2721->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2721->refCount.value = 1;
            panda$collections$Array$init($tmp2721);
            children2720 = $tmp2721;
            panda$collections$Array$add$panda$collections$Array$T(children2720, ((panda$core$Object*) resolved2718));
            org$pandalanguage$pandac$IRNode* $tmp2723 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2723->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2723->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2725 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2723, kind2702, p_position, $tmp2725, ((panda$collections$ListView*) children2720));
            return $tmp2723;
        }
        }
    }
    }
    panda$core$Bit $tmp2728 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 58 }));
    bool $tmp2727 = $tmp2728.value;
    if ($tmp2727) goto $l2729;
    panda$core$Bit $tmp2730 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 59 }));
    $tmp2727 = $tmp2730.value;
    $l2729:;
    panda$core$Bit $tmp2731 = { $tmp2727 };
    bool $tmp2726 = $tmp2731.value;
    if (!$tmp2726) goto $l2732;
    panda$core$Bit $tmp2733 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2677->type->typeKind, ((panda$core$Int64) { 11 }));
    $tmp2726 = $tmp2733.value;
    $l2732:;
    panda$core$Bit $tmp2734 = { $tmp2726 };
    if ($tmp2734.value) {
    {
        panda$core$Bit $tmp2735 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(right2678->kind, ((panda$core$Int64) { 1030 }));
        PANDA_ASSERT($tmp2735.value);
        panda$core$UInt64 $tmp2736 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(self->reusedValueCount, ((panda$core$UInt64) { 1 }));
        self->reusedValueCount = $tmp2736;
        panda$collections$Array* $tmp2738 = (panda$collections$Array*) malloc(40);
        $tmp2738->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2738->refCount.value = 1;
        panda$collections$Array$init($tmp2738);
        children2737 = $tmp2738;
        panda$collections$Array$add$panda$collections$Array$T(children2737, ((panda$core$Object*) left2677));
        org$pandalanguage$pandac$IRNode* $tmp2740 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2740->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2740->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2740, ((panda$core$Int64) { 1027 }), left2677->position, left2677->type, ((panda$core$Object*) wrap_panda$core$UInt64(self->reusedValueCount)), ((panda$collections$ListView*) children2737));
        left2677 = $tmp2740;
        org$pandalanguage$pandac$IRNode* $tmp2743 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2743->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2743->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2743, ((panda$core$Int64) { 1028 }), left2677->position, left2677->type, self->reusedValueCount);
        reusedLeft2742 = $tmp2743;
        panda$core$Object* $tmp2746 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(left2677->type->subtypes, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp2747 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, reusedLeft2742, ((org$pandalanguage$pandac$Type*) $tmp2746));
        toNonNullable2745 = $tmp2747;
        org$pandalanguage$pandac$IRNode* $tmp2749 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, toNonNullable2745, p_op, right2678);
        comparison2748 = $tmp2749;
        if (((panda$core$Bit) { comparison2748 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp2751 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2751->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2751->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp2753 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp2751, ((panda$core$Int64) { 1030 }), p_position, $tmp2753);
        org$pandalanguage$pandac$IRNode* $tmp2754 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, left2677, ((panda$core$Int64) { 59 }), $tmp2751);
        nullCheck2750 = $tmp2754;
        if (((panda$core$Bit) { nullCheck2750 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$clear(children2737);
        panda$collections$Array$add$panda$collections$Array$T(children2737, ((panda$core$Object*) nullCheck2750));
        panda$collections$Array$add$panda$collections$Array$T(children2737, ((panda$core$Object*) comparison2748));
        org$pandalanguage$pandac$IRNode* $tmp2755 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2755->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2755->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp2757 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp2758 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 59 }));
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2755, ((panda$core$Int64) { 1011 }), p_position, $tmp2757, $tmp2758);
        org$pandalanguage$pandac$Type* $tmp2759 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp2760 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp2755, $tmp2759);
        panda$collections$Array$add$panda$collections$Array$T(children2737, ((panda$core$Object*) $tmp2760));
        org$pandalanguage$pandac$IRNode* $tmp2761 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2761->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2761->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp2763 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2761, ((panda$core$Int64) { 1044 }), p_position, $tmp2763, ((panda$collections$ListView*) children2737));
        return $tmp2761;
    }
    }
    panda$core$Bit $tmp2765 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 60 }));
    bool $tmp2764 = $tmp2765.value;
    if ($tmp2764) goto $l2766;
    panda$core$Bit $tmp2767 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 61 }));
    $tmp2764 = $tmp2767.value;
    $l2766:;
    panda$core$Bit $tmp2768 = { $tmp2764 };
    if ($tmp2768.value) {
    {
        panda$core$Bit $tmp2769 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(left2677->type);
        if ($tmp2769.value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp2771 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, left2677->type);
            cl2770 = $tmp2771;
            if (((panda$core$Bit) { cl2770 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$Bit $tmp2772 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, cl2770);
            if ($tmp2772.value) {
            {
                panda$core$String* $tmp2774 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
                panda$core$String* $tmp2775 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2773, $tmp2774);
                panda$core$String* $tmp2777 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2775, &$s2776);
                panda$core$String* $tmp2778 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2777, ((panda$core$Object*) left2677->type));
                panda$core$String* $tmp2780 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2778, &$s2779);
                panda$core$String* $tmp2782 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2781, ((panda$core$Object*) right2678->type));
                panda$core$String* $tmp2784 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2782, &$s2783);
                panda$core$String* $tmp2785 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2780, $tmp2784);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp2785);
            }
            }
        }
        }
        panda$core$Bit $tmp2786 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(right2678->type);
        if ($tmp2786.value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp2788 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, right2678->type);
            cl2787 = $tmp2788;
            if (((panda$core$Bit) { cl2787 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$Bit $tmp2789 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, cl2787);
            if ($tmp2789.value) {
            {
                panda$core$String* $tmp2791 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
                panda$core$String* $tmp2792 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2790, $tmp2791);
                panda$core$String* $tmp2794 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2792, &$s2793);
                panda$core$String* $tmp2795 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2794, ((panda$core$Object*) left2677->type));
                panda$core$String* $tmp2797 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2795, &$s2796);
                panda$core$String* $tmp2799 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2798, ((panda$core$Object*) right2678->type));
                panda$core$String* $tmp2801 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2799, &$s2800);
                panda$core$String* $tmp2802 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2797, $tmp2801);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp2802);
            }
            }
        }
        }
        org$pandalanguage$pandac$Type* $tmp2804 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp2805 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, left2677, $tmp2804);
        finalLeft2803 = $tmp2805;
        if (((panda$core$Bit) { finalLeft2803 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$Type* $tmp2807 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp2808 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, right2678, $tmp2807);
        finalRight2806 = $tmp2808;
        if (((panda$core$Bit) { finalRight2806 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp2810 = (panda$collections$Array*) malloc(40);
        $tmp2810->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2810->refCount.value = 1;
        panda$collections$Array$init($tmp2810);
        children2809 = $tmp2810;
        panda$collections$Array$add$panda$collections$Array$T(children2809, ((panda$core$Object*) finalLeft2803));
        panda$collections$Array$add$panda$collections$Array$T(children2809, ((panda$core$Object*) finalRight2806));
        org$pandalanguage$pandac$IRNode* $tmp2812 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2812->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2812->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp2814 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2812, ((panda$core$Int64) { 1023 }), p_position, $tmp2814, ((panda$core$Object*) wrap_panda$core$Int64(p_op)), ((panda$collections$ListView*) children2809));
        return $tmp2812;
    }
    }
    panda$core$Bit $tmp2815 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 73 }));
    if ($tmp2815.value) {
    {
        panda$core$Bit $tmp2816 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2677->kind, ((panda$core$Int64) { 1040 }));
        if ($tmp2816.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2817 = org$pandalanguage$pandac$Compiler$compileIndexedAssignment$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, left2677, p_op, right2678);
            return $tmp2817;
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp2818 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, left2677);
        left2677 = $tmp2818;
        if (((panda$core$Bit) { left2677 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp2819 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, right2678, left2677->type);
        right2678 = $tmp2819;
        if (((panda$core$Bit) { right2678 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp2820 = org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, left2677);
        panda$core$Bit $tmp2821 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2820);
        if ($tmp2821.value) {
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, left2677->position, &$s2822);
            return NULL;
        }
        }
        panda$collections$Array* $tmp2824 = (panda$collections$Array*) malloc(40);
        $tmp2824->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2824->refCount.value = 1;
        panda$collections$Array$init($tmp2824);
        children2823 = $tmp2824;
        panda$collections$Array$add$panda$collections$Array$T(children2823, ((panda$core$Object*) left2677));
        panda$collections$Array$add$panda$collections$Array$T(children2823, ((panda$core$Object*) right2678));
        org$pandalanguage$pandac$IRNode* $tmp2826 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2826->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2826->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2826, ((panda$core$Int64) { 1023 }), p_position, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 73 }))), ((panda$collections$ListView*) children2823));
        return $tmp2826;
    }
    }
    panda$core$Bit $tmp2828 = org$pandalanguage$pandac$Compiler$isAssignment$panda$core$Int64$R$panda$core$Bit(p_op);
    if ($tmp2828.value) {
    {
        panda$core$Bit $tmp2829 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2677->kind, ((panda$core$Int64) { 1040 }));
        if ($tmp2829.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2830 = org$pandalanguage$pandac$Compiler$compileIndexedAssignment$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, left2677, p_op, right2678);
            return $tmp2830;
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp2831 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, left2677);
        left2677 = $tmp2831;
        if (((panda$core$Bit) { left2677 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp2832 = org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, left2677);
        panda$core$Bit $tmp2833 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2832);
        if ($tmp2833.value) {
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, left2677->position, &$s2834);
            return NULL;
        }
        }
        panda$collections$Array* $tmp2836 = (panda$collections$Array*) malloc(40);
        $tmp2836->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2836->refCount.value = 1;
        panda$collections$Array$init($tmp2836);
        children2835 = $tmp2836;
        panda$collections$Array$add$panda$collections$Array$T(children2835, ((panda$core$Object*) left2677));
        panda$core$UInt64 $tmp2838 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(self->reusedValueCount, ((panda$core$UInt64) { 1 }));
        self->reusedValueCount = $tmp2838;
        org$pandalanguage$pandac$IRNode* $tmp2839 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2839->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2839->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2839, ((panda$core$Int64) { 1027 }), left2677->position, left2677->type, ((panda$core$Object*) wrap_panda$core$UInt64(self->reusedValueCount)), ((panda$collections$ListView*) children2835));
        left2677 = $tmp2839;
        org$pandalanguage$pandac$IRNode* $tmp2842 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2842->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2842->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2842, ((panda$core$Int64) { 1028 }), left2677->position, left2677->type, self->reusedValueCount);
        reusedLeft2841 = $tmp2842;
        panda$core$Int64 $tmp2844 = org$pandalanguage$pandac$Compiler$removeAssignment$panda$core$Int64$R$panda$core$Int64(p_op);
        org$pandalanguage$pandac$IRNode* $tmp2845 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, reusedLeft2841, $tmp2844, right2678);
        right2678 = $tmp2845;
        if (((panda$core$Bit) { right2678 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp2847 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(left2677->type);
        bool $tmp2846 = $tmp2847.value;
        if (!$tmp2846) goto $l2848;
        panda$core$Bit $tmp2849 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(left2677->type, right2678->type);
        $tmp2846 = $tmp2849.value;
        $l2848:;
        panda$core$Bit $tmp2850 = { $tmp2846 };
        if ($tmp2850.value) {
        {
            panda$collections$Array* $tmp2852 = (panda$collections$Array*) malloc(40);
            $tmp2852->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2852->refCount.value = 1;
            panda$collections$Array$init($tmp2852);
            org$pandalanguage$pandac$IRNode* $tmp2854 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, right2678, &$s2851, ((panda$collections$ListView*) $tmp2852), left2677->type);
            right2678 = $tmp2854;
            if (((panda$core$Bit) { right2678 == NULL }).value) {
            {
                return NULL;
            }
            }
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp2855 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, left2677, ((panda$core$Int64) { 73 }), right2678);
        return $tmp2855;
    }
    }
    panda$core$Bit $tmp2856 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 101 }));
    if ($tmp2856.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2857 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, left2677);
        left2677 = $tmp2857;
        if (((panda$core$Bit) { left2677 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$ClassDecl* $tmp2859 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, left2677->type);
        cl2858 = $tmp2859;
        if (((panda$core$Bit) { cl2858 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$ListView* $tmp2861 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, left2677->type);
        parameters2860 = $tmp2861;
        org$pandalanguage$pandac$SymbolTable* $tmp2863 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl2858);
        org$pandalanguage$pandac$Symbol* $tmp2865 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp2863, &$s2864);
        methods2862 = $tmp2865;
        if (((panda$core$Bit) { methods2862 != NULL }).value) {
        {
            panda$collections$Array* $tmp2868 = (panda$collections$Array*) malloc(40);
            $tmp2868->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2868->refCount.value = 1;
            panda$collections$Array$init($tmp2868);
            types2867 = $tmp2868;
            panda$core$Bit $tmp2870 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(methods2862->kind, ((panda$core$Int64) { 204 }));
            if ($tmp2870.value) {
            {
                m2871 = ((org$pandalanguage$pandac$MethodDecl*) methods2862);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m2871);
                org$pandalanguage$pandac$MethodRef* $tmp2872 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                $tmp2872->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                $tmp2872->refCount.value = 1;
                org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp2872, m2871, parameters2860);
                org$pandalanguage$pandac$Type* $tmp2874 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type($tmp2872);
                panda$collections$Array$add$panda$collections$Array$T(types2867, ((panda$core$Object*) $tmp2874));
            }
            }
            else {
            {
                panda$core$Bit $tmp2875 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(methods2862->kind, ((panda$core$Int64) { 205 }));
                PANDA_ASSERT($tmp2875.value);
                {
                    ITable* $tmp2877 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) methods2862)->methods)->$class->itable;
                    while ($tmp2877->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp2877 = $tmp2877->next;
                    }
                    $fn2879 $tmp2878 = $tmp2877->methods[0];
                    panda$collections$Iterator* $tmp2880 = $tmp2878(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) methods2862)->methods));
                    m$Iter2876 = $tmp2880;
                    $l2881:;
                    ITable* $tmp2883 = m$Iter2876->$class->itable;
                    while ($tmp2883->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp2883 = $tmp2883->next;
                    }
                    $fn2885 $tmp2884 = $tmp2883->methods[0];
                    panda$core$Bit $tmp2886 = $tmp2884(m$Iter2876);
                    panda$core$Bit $tmp2887 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2886);
                    if (!$tmp2887.value) goto $l2882;
                    {
                        ITable* $tmp2889 = m$Iter2876->$class->itable;
                        while ($tmp2889->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2889 = $tmp2889->next;
                        }
                        $fn2891 $tmp2890 = $tmp2889->methods[1];
                        panda$core$Object* $tmp2892 = $tmp2890(m$Iter2876);
                        m2888 = ((org$pandalanguage$pandac$MethodDecl*) $tmp2892);
                        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m2888);
                        org$pandalanguage$pandac$MethodRef* $tmp2893 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                        $tmp2893->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                        $tmp2893->refCount.value = 1;
                        org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp2893, m2888, parameters2860);
                        org$pandalanguage$pandac$Type* $tmp2895 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type($tmp2893);
                        panda$collections$Array$add$panda$collections$Array$T(types2867, ((panda$core$Object*) $tmp2895));
                    }
                    goto $l2881;
                    $l2882:;
                }
            }
            }
            org$pandalanguage$pandac$Type* $tmp2896 = (org$pandalanguage$pandac$Type*) malloc(96);
            $tmp2896->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp2896->refCount.value = 1;
            org$pandalanguage$pandac$Type$init$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp2896, ((panda$collections$ListView*) types2867));
            type2866 = $tmp2896;
        }
        }
        else {
        {
            org$pandalanguage$pandac$Type* $tmp2898 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            type2866 = $tmp2898;
        }
        }
        panda$collections$Array* $tmp2900 = (panda$collections$Array*) malloc(40);
        $tmp2900->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2900->refCount.value = 1;
        panda$collections$Array$init($tmp2900);
        children2899 = $tmp2900;
        panda$collections$Array$add$panda$collections$Array$T(children2899, ((panda$core$Object*) left2677));
        panda$collections$Array$add$panda$collections$Array$T(children2899, ((panda$core$Object*) right2678));
        org$pandalanguage$pandac$IRNode* $tmp2902 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2902->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2902->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2902, ((panda$core$Int64) { 1040 }), p_position, type2866, ((panda$collections$ListView*) children2899));
        return $tmp2902;
    }
    }
    org$pandalanguage$pandac$Type* $tmp2904 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2905 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(left2677->type, $tmp2904);
    if ($tmp2905.value) {
    {
        org$pandalanguage$pandac$Type* $tmp2907 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp2908 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(right2678->type, $tmp2907);
        bool $tmp2906 = $tmp2908.value;
        if (!$tmp2906) goto $l2909;
        panda$core$Bit $tmp2914 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 66 }));
        bool $tmp2913 = $tmp2914.value;
        if ($tmp2913) goto $l2915;
        panda$core$Bit $tmp2916 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 68 }));
        $tmp2913 = $tmp2916.value;
        $l2915:;
        panda$core$Bit $tmp2917 = { $tmp2913 };
        bool $tmp2912 = $tmp2917.value;
        if ($tmp2912) goto $l2918;
        panda$core$Bit $tmp2919 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 70 }));
        $tmp2912 = $tmp2919.value;
        $l2918:;
        panda$core$Bit $tmp2920 = { $tmp2912 };
        bool $tmp2911 = $tmp2920.value;
        if ($tmp2911) goto $l2921;
        panda$core$Bit $tmp2922 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 58 }));
        $tmp2911 = $tmp2922.value;
        $l2921:;
        panda$core$Bit $tmp2923 = { $tmp2911 };
        bool $tmp2910 = $tmp2923.value;
        if ($tmp2910) goto $l2924;
        panda$core$Bit $tmp2925 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 59 }));
        $tmp2910 = $tmp2925.value;
        $l2924:;
        panda$core$Bit $tmp2926 = { $tmp2910 };
        $tmp2906 = $tmp2926.value;
        $l2909:;
        panda$core$Bit $tmp2927 = { $tmp2906 };
        if ($tmp2927.value) {
        {
            panda$collections$Array* $tmp2929 = (panda$collections$Array*) malloc(40);
            $tmp2929->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2929->refCount.value = 1;
            panda$collections$Array$init($tmp2929);
            children2928 = $tmp2929;
            panda$collections$Array$add$panda$collections$Array$T(children2928, ((panda$core$Object*) left2677));
            panda$collections$Array$add$panda$collections$Array$T(children2928, ((panda$core$Object*) right2678));
            org$pandalanguage$pandac$IRNode* $tmp2931 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2931->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2931->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2931, ((panda$core$Int64) { 1023 }), p_position, left2677->type, ((panda$core$Object*) wrap_panda$core$Int64(p_op)), ((panda$collections$ListView*) children2928));
            return $tmp2931;
        }
        }
        panda$core$String* $tmp2934 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
        panda$core$String* $tmp2935 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2933, $tmp2934);
        panda$core$String* $tmp2937 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2935, &$s2936);
        panda$core$String* $tmp2938 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2937, ((panda$core$Object*) left2677->type));
        panda$core$String* $tmp2940 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2938, &$s2939);
        panda$core$String* $tmp2941 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2940, ((panda$core$Object*) right2678->type));
        panda$core$String* $tmp2943 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2941, &$s2942);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp2943);
        return NULL;
    }
    }
    panda$collections$Array* $tmp2945 = (panda$collections$Array*) malloc(40);
    $tmp2945->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2945->refCount.value = 1;
    panda$collections$Array$init($tmp2945);
    children2944 = $tmp2945;
    panda$core$Bit $tmp2949 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2677->kind, ((panda$core$Int64) { 1004 }));
    bool $tmp2948 = $tmp2949.value;
    if ($tmp2948) goto $l2950;
    panda$core$Bit $tmp2951 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2677->kind, ((panda$core$Int64) { 1032 }));
    $tmp2948 = $tmp2951.value;
    $l2950:;
    panda$core$Bit $tmp2952 = { $tmp2948 };
    bool $tmp2947 = $tmp2952.value;
    if (!$tmp2947) goto $l2953;
    panda$core$Bit $tmp2955 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right2678->kind, ((panda$core$Int64) { 1004 }));
    bool $tmp2954 = $tmp2955.value;
    if ($tmp2954) goto $l2956;
    panda$core$Bit $tmp2957 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right2678->kind, ((panda$core$Int64) { 1032 }));
    $tmp2954 = $tmp2957.value;
    $l2956:;
    panda$core$Bit $tmp2958 = { $tmp2954 };
    $tmp2947 = $tmp2958.value;
    $l2953:;
    panda$core$Bit $tmp2959 = { $tmp2947 };
    if ($tmp2959.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2960 = org$pandalanguage$pandac$Compiler$foldInts$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, left2677, p_op, right2678);
        return $tmp2960;
    }
    }
    panda$core$Bit $tmp2962 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(left2677->type);
    bool $tmp2961 = $tmp2962.value;
    if (!$tmp2961) goto $l2963;
    panda$core$Int64$nullable $tmp2964 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, right2678, left2677->type);
    $tmp2961 = ((panda$core$Bit) { $tmp2964.nonnull }).value;
    $l2963:;
    panda$core$Bit $tmp2965 = { $tmp2961 };
    if ($tmp2965.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2966 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, right2678, left2677->type);
        right2678 = $tmp2966;
        PANDA_ASSERT(((panda$core$Bit) { right2678 != NULL }).value);
        panda$collections$Array$add$panda$collections$Array$T(children2944, ((panda$core$Object*) left2677));
        panda$collections$Array$add$panda$collections$Array$T(children2944, ((panda$core$Object*) right2678));
        switch (p_op.value) {
            case 58:
            case 59:
            case 63:
            case 65:
            case 62:
            case 64:
            {
                org$pandalanguage$pandac$Type* $tmp2968 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
                resultType2967 = $tmp2968;
            }
            break;
            default:
            {
                resultType2967 = left2677->type;
            }
        }
        org$pandalanguage$pandac$IRNode* $tmp2969 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2969->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2969->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2969, ((panda$core$Int64) { 1023 }), p_position, resultType2967, ((panda$core$Object*) wrap_panda$core$Int64(p_op)), ((panda$collections$ListView*) children2944));
        return $tmp2969;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children2944, ((panda$core$Object*) right2678));
    PANDA_ASSERT(self->reportErrors.value);
    self->reportErrors = ((panda$core$Bit) { false });
    panda$core$String* $tmp2972 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
    org$pandalanguage$pandac$IRNode* $tmp2973 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, left2677, $tmp2972, ((panda$collections$ListView*) children2944));
    result2971 = $tmp2973;
    self->reportErrors = ((panda$core$Bit) { true });
    if (((panda$core$Bit) { result2971 == NULL }).value) {
    {
        panda$collections$Array$clear(children2944);
        panda$collections$Array$add$panda$collections$Array$T(children2944, ((panda$core$Object*) left2677));
        org$pandalanguage$pandac$IRNode* $tmp2975 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, right2678);
        resolved2974 = $tmp2975;
        bool $tmp2976 = ((panda$core$Bit) { resolved2974 != NULL }).value;
        if (!$tmp2976) goto $l2977;
        panda$core$Bit $tmp2978 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(resolved2974->type);
        $tmp2976 = $tmp2978.value;
        $l2977:;
        panda$core$Bit $tmp2979 = { $tmp2976 };
        if ($tmp2979.value) {
        {
            panda$collections$Array$add$panda$collections$Array$T(children2944, ((panda$core$Object*) resolved2974));
            org$pandalanguage$pandac$IRNode* $tmp2981 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2981->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2981->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2983 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp2981, ((panda$core$Int64) { 1001 }), resolved2974->position, $tmp2983, resolved2974->type);
            target2980 = $tmp2981;
            panda$core$String* $tmp2984 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
            org$pandalanguage$pandac$IRNode* $tmp2985 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target2980, $tmp2984, ((panda$collections$ListView*) children2944));
            result2971 = $tmp2985;
        }
        }
    }
    }
    return result2971;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_b) {
    org$pandalanguage$pandac$IRNode* left2986;
    org$pandalanguage$pandac$IRNode* right2989;
    panda$core$Object* $tmp2987 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_b->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp2988 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2987));
    left2986 = $tmp2988;
    if (((panda$core$Bit) { left2986 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Object* $tmp2990 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_b->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp2991 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2990));
    right2989 = $tmp2991;
    if (((panda$core$Bit) { right2989 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp2992 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_b->position, left2986, ((panda$core$Int64$wrapper*) p_b->payload)->value, right2989);
    return $tmp2992;
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type) {
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp2996;
    switch (p_type->typeKind.value) {
        case 22:
        {
            panda$collections$ListView* $tmp2993 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p_type->parameter->bound);
            return $tmp2993;
        }
        break;
        case 21:
        {
            panda$core$Int64 $tmp2994 = panda$collections$Array$get_count$R$panda$core$Int64(p_type->subtypes);
            panda$core$Bit $tmp2995 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp2994, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2995.value);
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp2996, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$collections$Array* $tmp2997 = panda$collections$Array$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT(p_type->subtypes, $tmp2996);
            return ((panda$collections$ListView*) $tmp2997);
        }
        break;
        case 11:
        {
            panda$core$Object* $tmp2998 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
            panda$collections$ListView* $tmp2999 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, ((org$pandalanguage$pandac$Type*) $tmp2998));
            return $tmp2999;
        }
        break;
        default:
        {
            panda$collections$Array* $tmp3000 = (panda$collections$Array*) malloc(40);
            $tmp3000->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp3000->refCount.value = 1;
            panda$collections$Array$init($tmp3000);
            return ((panda$collections$ListView*) $tmp3000);
        }
    }
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$IRNode$Q$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_target) {
    if (((panda$core$Bit) { p_target != NULL }).value) {
    {
        panda$core$Bit $tmp3002 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1001 }));
        if ($tmp3002.value) {
        {
            panda$collections$ListView* $tmp3003 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, ((org$pandalanguage$pandac$Type*) p_target->payload));
            return $tmp3003;
        }
        }
        panda$collections$ListView* $tmp3004 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p_target->type);
        return $tmp3004;
    }
    }
    panda$collections$Array* $tmp3005 = (panda$collections$Array*) malloc(40);
    $tmp3005->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3005->refCount.value = 1;
    panda$collections$Array$init($tmp3005);
    return ((panda$collections$ListView*) $tmp3005);
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compilePrefix$panda$core$Int64$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_base, org$pandalanguage$pandac$Position p_position) {
    panda$core$String* name3008;
    org$pandalanguage$pandac$ClassDecl* cl3010;
    org$pandalanguage$pandac$Symbol* s3012;
    org$pandalanguage$pandac$MethodDecl* m3015;
    panda$collections$Iterator* test$Iter3020;
    org$pandalanguage$pandac$MethodDecl* test3032;
    org$pandalanguage$pandac$MethodRef* ref3044;
    panda$collections$Array* children3048;
    org$pandalanguage$pandac$IRNode* methodRef3051;
    org$pandalanguage$pandac$Position $tmp3057;
    panda$collections$Array* args3058;
    panda$collections$Array* children3067;
    panda$collections$Array* children3077;
    org$pandalanguage$pandac$IRNode* coerced3086;
    panda$collections$Array* children3089;
    panda$core$Bit $tmp3007 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_base->type);
    if ($tmp3007.value) {
    {
        panda$core$String* $tmp3009 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
        name3008 = $tmp3009;
        org$pandalanguage$pandac$ClassDecl* $tmp3011 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_base->type);
        cl3010 = $tmp3011;
        if (((panda$core$Bit) { cl3010 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$SymbolTable* $tmp3013 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl3010);
        org$pandalanguage$pandac$Symbol* $tmp3014 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp3013, name3008);
        s3012 = $tmp3014;
        if (((panda$core$Bit) { s3012 != NULL }).value) {
        {
            m3015 = NULL;
            switch (s3012->kind.value) {
                case 204:
                {
                    m3015 = ((org$pandalanguage$pandac$MethodDecl*) s3012);
                    panda$core$Int64 $tmp3016 = panda$collections$Array$get_count$R$panda$core$Int64(m3015->parameters);
                    panda$core$Bit $tmp3017 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3016, ((panda$core$Int64) { 0 }));
                    PANDA_ASSERT($tmp3017.value);
                    panda$core$Bit $tmp3018 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(m3015->annotations);
                    panda$core$Bit $tmp3019 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3018);
                    PANDA_ASSERT($tmp3019.value);
                }
                break;
                case 205:
                {
                    {
                        ITable* $tmp3021 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s3012)->methods)->$class->itable;
                        while ($tmp3021->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp3021 = $tmp3021->next;
                        }
                        $fn3023 $tmp3022 = $tmp3021->methods[0];
                        panda$collections$Iterator* $tmp3024 = $tmp3022(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s3012)->methods));
                        test$Iter3020 = $tmp3024;
                        $l3025:;
                        ITable* $tmp3027 = test$Iter3020->$class->itable;
                        while ($tmp3027->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp3027 = $tmp3027->next;
                        }
                        $fn3029 $tmp3028 = $tmp3027->methods[0];
                        panda$core$Bit $tmp3030 = $tmp3028(test$Iter3020);
                        panda$core$Bit $tmp3031 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3030);
                        if (!$tmp3031.value) goto $l3026;
                        {
                            ITable* $tmp3033 = test$Iter3020->$class->itable;
                            while ($tmp3033->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp3033 = $tmp3033->next;
                            }
                            $fn3035 $tmp3034 = $tmp3033->methods[1];
                            panda$core$Object* $tmp3036 = $tmp3034(test$Iter3020);
                            test3032 = ((org$pandalanguage$pandac$MethodDecl*) $tmp3036);
                            panda$core$Bit $tmp3038 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(test3032->annotations);
                            panda$core$Bit $tmp3039 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3038);
                            bool $tmp3037 = $tmp3039.value;
                            if (!$tmp3037) goto $l3040;
                            panda$core$Int64 $tmp3041 = panda$collections$Array$get_count$R$panda$core$Int64(test3032->parameters);
                            panda$core$Bit $tmp3042 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3041, ((panda$core$Int64) { 0 }));
                            $tmp3037 = $tmp3042.value;
                            $l3040:;
                            panda$core$Bit $tmp3043 = { $tmp3037 };
                            if ($tmp3043.value) {
                            {
                                m3015 = test3032;
                                goto $l3026;
                            }
                            }
                        }
                        goto $l3025;
                        $l3026:;
                    }
                }
                break;
                default:
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
            }
            if (((panda$core$Bit) { m3015 != NULL }).value) {
            {
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m3015);
                org$pandalanguage$pandac$MethodRef* $tmp3045 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                $tmp3045->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                $tmp3045->refCount.value = 1;
                panda$collections$ListView* $tmp3047 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$IRNode$Q$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p_base);
                org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp3045, m3015, $tmp3047);
                ref3044 = $tmp3045;
                panda$collections$Array* $tmp3049 = (panda$collections$Array*) malloc(40);
                $tmp3049->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp3049->refCount.value = 1;
                panda$collections$Array$init($tmp3049);
                children3048 = $tmp3049;
                panda$collections$Array$add$panda$collections$Array$T(children3048, ((panda$core$Object*) p_base));
                org$pandalanguage$pandac$IRNode* $tmp3052 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp3052->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp3052->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp3054 = (org$pandalanguage$pandac$Type*) malloc(96);
                $tmp3054->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
                $tmp3054->refCount.value = 1;
                org$pandalanguage$pandac$Position$init(&$tmp3057);
                org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp3054, &$s3056, ((panda$core$Int64) { 16 }), $tmp3057, ((panda$core$Bit) { true }));
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3052, ((panda$core$Int64) { 1002 }), p_position, $tmp3054, ((panda$core$Object*) ref3044), ((panda$collections$ListView*) children3048));
                methodRef3051 = $tmp3052;
                panda$collections$Array* $tmp3059 = (panda$collections$Array*) malloc(40);
                $tmp3059->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp3059->refCount.value = 1;
                panda$collections$Array$init($tmp3059);
                args3058 = $tmp3059;
                org$pandalanguage$pandac$IRNode* $tmp3061 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, methodRef3051, ((panda$collections$ListView*) args3058));
                return $tmp3061;
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
                    org$pandalanguage$pandac$IRNode* $tmp3062 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp3062->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp3062->refCount.value = 1;
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp3062, ((panda$core$Int64) { 1032 }), p_position, p_base->type, ((panda$core$UInt64$wrapper*) p_base->payload)->value);
                    return $tmp3062;
                }
                break;
                case 1032:
                {
                    org$pandalanguage$pandac$IRNode* $tmp3064 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp3064->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp3064->refCount.value = 1;
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp3064, ((panda$core$Int64) { 1004 }), p_position, p_base->type, ((panda$core$UInt64$wrapper*) p_base->payload)->value);
                    return $tmp3064;
                }
                break;
                default:
                {
                    panda$core$Bit $tmp3066 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_base->type);
                    if ($tmp3066.value) {
                    {
                        panda$collections$Array* $tmp3068 = (panda$collections$Array*) malloc(40);
                        $tmp3068->$class = (panda$core$Class*) &panda$collections$Array$class;
                        $tmp3068->refCount.value = 1;
                        panda$collections$Array$init($tmp3068);
                        children3067 = $tmp3068;
                        panda$collections$Array$add$panda$collections$Array$T(children3067, ((panda$core$Object*) p_base));
                        org$pandalanguage$pandac$IRNode* $tmp3070 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                        $tmp3070->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                        $tmp3070->refCount.value = 1;
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3070, ((panda$core$Int64) { 1041 }), p_base->position, p_base->type, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 52 }))), ((panda$collections$ListView*) children3067));
                        return $tmp3070;
                    }
                    }
                }
            }
            panda$core$String* $tmp3073 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3072, ((panda$core$Object*) p_base->type));
            panda$core$String* $tmp3075 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3073, &$s3074);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_base->position, $tmp3075);
            return NULL;
        }
        break;
        case 50:
        {
            panda$core$Bit $tmp3076 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_base->type);
            if ($tmp3076.value) {
            {
                panda$collections$Array* $tmp3078 = (panda$collections$Array*) malloc(40);
                $tmp3078->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp3078->refCount.value = 1;
                panda$collections$Array$init($tmp3078);
                children3077 = $tmp3078;
                panda$collections$Array$add$panda$collections$Array$T(children3077, ((panda$core$Object*) p_base));
                org$pandalanguage$pandac$IRNode* $tmp3080 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp3080->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp3080->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3080, ((panda$core$Int64) { 1041 }), p_base->position, p_base->type, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 50 }))), ((panda$collections$ListView*) children3077));
                return $tmp3080;
            }
            }
            else {
            {
                panda$core$String* $tmp3083 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3082, ((org$pandalanguage$pandac$Symbol*) p_base->type)->name);
                panda$core$String* $tmp3085 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3083, &$s3084);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_base->position, $tmp3085);
                return NULL;
            }
            }
        }
        break;
        case 49:
        {
            org$pandalanguage$pandac$Type* $tmp3087 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode* $tmp3088 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_base, $tmp3087);
            coerced3086 = $tmp3088;
            if (((panda$core$Bit) { coerced3086 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp3090 = (panda$collections$Array*) malloc(40);
            $tmp3090->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp3090->refCount.value = 1;
            panda$collections$Array$init($tmp3090);
            children3089 = $tmp3090;
            panda$collections$Array$add$panda$collections$Array$T(children3089, ((panda$core$Object*) coerced3086));
            org$pandalanguage$pandac$IRNode* $tmp3092 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3092->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3092->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3092, ((panda$core$Int64) { 1041 }), p_base->position, p_base->type, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 49 }))), ((panda$collections$ListView*) children3089));
            return $tmp3092;
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
    org$pandalanguage$pandac$IRNode* base3097;
    panda$core$Bit $tmp3094 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_p->kind, ((panda$core$Int64) { 112 }));
    PANDA_ASSERT($tmp3094.value);
    panda$core$Int64 $tmp3095 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_p->children);
    panda$core$Bit $tmp3096 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3095, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3096.value);
    panda$core$Object* $tmp3098 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_p->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3099 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3098));
    base3097 = $tmp3099;
    if (((panda$core$Bit) { base3097 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3100 = org$pandalanguage$pandac$Compiler$compilePrefix$panda$core$Int64$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$R$org$pandalanguage$pandac$IRNode$Q(self, ((panda$core$Int64$wrapper*) p_p->payload)->value, base3097, p_p->position);
    return $tmp3100;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileCall$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_c) {
    org$pandalanguage$pandac$IRNode* m3102;
    panda$collections$Array* args3105;
    panda$core$Range$LTpanda$core$Int64$GT $tmp3108;
    org$pandalanguage$pandac$IRNode* arg3123;
    panda$core$Bit $tmp3101 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_c->kind, ((panda$core$Int64) { 107 }));
    PANDA_ASSERT($tmp3101.value);
    panda$core$Object* $tmp3103 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_c->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3104 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3103));
    m3102 = $tmp3104;
    if (((panda$core$Bit) { m3102 != NULL }).value) {
    {
        panda$collections$Array* $tmp3106 = (panda$collections$Array*) malloc(40);
        $tmp3106->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp3106->refCount.value = 1;
        panda$collections$Array$init($tmp3106);
        args3105 = $tmp3106;
        panda$core$Int64 $tmp3109 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_c->children);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp3108, ((panda$core$Int64) { 1 }), $tmp3109, ((panda$core$Bit) { false }));
        int64_t $tmp3111 = $tmp3108.min.value;
        panda$core$Int64 i3110 = { $tmp3111 };
        int64_t $tmp3113 = $tmp3108.max.value;
        bool $tmp3114 = $tmp3108.inclusive.value;
        if ($tmp3114) goto $l3121; else goto $l3122;
        $l3121:;
        if ($tmp3111 <= $tmp3113) goto $l3115; else goto $l3117;
        $l3122:;
        if ($tmp3111 < $tmp3113) goto $l3115; else goto $l3117;
        $l3115:;
        {
            panda$core$Object* $tmp3124 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_c->children, i3110);
            org$pandalanguage$pandac$IRNode* $tmp3125 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3124));
            arg3123 = $tmp3125;
            if (((panda$core$Bit) { arg3123 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(args3105, ((panda$core$Object*) arg3123));
        }
        $l3118:;
        int64_t $tmp3127 = $tmp3113 - i3110.value;
        if ($tmp3114) goto $l3128; else goto $l3129;
        $l3128:;
        if ($tmp3127 >= 1) goto $l3126; else goto $l3117;
        $l3129:;
        if ($tmp3127 > 1) goto $l3126; else goto $l3117;
        $l3126:;
        i3110.value += 1;
        goto $l3115;
        $l3117:;
        org$pandalanguage$pandac$IRNode* $tmp3132 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, m3102, ((panda$collections$ListView*) args3105));
        return $tmp3132;
    }
    }
    return NULL;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$String$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_base, panda$core$String* p_name) {
    org$pandalanguage$pandac$ClassDecl* cl3133;
    panda$core$String* name3135;
    org$pandalanguage$pandac$ClassDecl* cl3143;
    org$pandalanguage$pandac$SymbolTable* st3156;
    org$pandalanguage$pandac$Symbol* s3158;
    switch (p_base->kind.value) {
        case 1001:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp3134 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Type*) p_base->payload));
            cl3133 = $tmp3134;
        }
        break;
        case 1037:
        {
            panda$core$String* $tmp3137 = (($fn3136) p_base->payload->$class->vtable[0])(p_base->payload);
            panda$core$String* $tmp3139 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3137, &$s3138);
            panda$core$String* $tmp3140 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3139, p_name);
            panda$core$String* $tmp3142 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3140, &$s3141);
            name3135 = $tmp3142;
            org$pandalanguage$pandac$ClassDecl* $tmp3144 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, name3135);
            cl3143 = $tmp3144;
            if (((panda$core$Bit) { cl3143 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp3145 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp3145->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp3145->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp3147 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$Type* $tmp3148 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl3143);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp3145, ((panda$core$Int64) { 1001 }), p_position, $tmp3147, $tmp3148);
                return $tmp3145;
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp3149 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3149->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3149->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3151 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$String($tmp3149, ((panda$core$Int64) { 1037 }), p_position, $tmp3151, name3135);
            return $tmp3149;
        }
        break;
        case 1024:
        {
            panda$core$Object* $tmp3152 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, ((org$pandalanguage$pandac$ClassDecl*) $tmp3152));
            panda$core$Object* $tmp3153 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
            org$pandalanguage$pandac$ClassDecl* $tmp3154 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$ClassDecl*) $tmp3153)->rawSuper);
            cl3133 = $tmp3154;
        }
        break;
        default:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp3155 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_base->type);
            cl3133 = $tmp3155;
        }
    }
    if (((panda$core$Bit) { cl3133 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp3157 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl3133);
    st3156 = $tmp3157;
    org$pandalanguage$pandac$Symbol* $tmp3159 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(st3156, p_name);
    s3158 = $tmp3159;
    if (((panda$core$Bit) { s3158 == NULL }).value) {
    {
        panda$core$String* $tmp3161 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3160, ((panda$core$Object*) p_base->type));
        panda$core$String* $tmp3163 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3161, &$s3162);
        panda$core$String* $tmp3164 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3163, p_name);
        panda$core$String* $tmp3166 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3164, &$s3165);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp3166);
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3167 = org$pandalanguage$pandac$Compiler$symbolRef$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, p_base, s3158, st3156);
    return $tmp3167;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_d) {
    org$pandalanguage$pandac$IRNode* base3171;
    panda$core$Bit $tmp3168 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_d->kind, ((panda$core$Int64) { 108 }));
    PANDA_ASSERT($tmp3168.value);
    panda$core$Int64 $tmp3169 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp3170 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3169, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3170.value);
    panda$core$Object* $tmp3172 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3173 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3172));
    base3171 = $tmp3173;
    if (((panda$core$Bit) { base3171 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp3175 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(base3171->kind, ((panda$core$Int64) { 1037 }));
    bool $tmp3174 = $tmp3175.value;
    if (!$tmp3174) goto $l3176;
    panda$core$Bit $tmp3177 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(base3171->kind, ((panda$core$Int64) { 1024 }));
    $tmp3174 = $tmp3177.value;
    $l3176:;
    panda$core$Bit $tmp3178 = { $tmp3174 };
    if ($tmp3178.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3179 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, base3171);
        base3171 = $tmp3179;
    }
    }
    if (((panda$core$Bit) { base3171 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3180 = org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$String$R$org$pandalanguage$pandac$IRNode$Q(self, p_d->position, base3171, ((panda$core$String*) p_d->payload));
    return $tmp3180;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIdentifier$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_i) {
    org$pandalanguage$pandac$Symbol* s3182;
    panda$core$Bit $tmp3181 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_i->kind, ((panda$core$Int64) { 106 }));
    PANDA_ASSERT($tmp3181.value);
    org$pandalanguage$pandac$Symbol* $tmp3183 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(self->symbolTable, ((panda$core$String*) p_i->payload));
    s3182 = $tmp3183;
    if (((panda$core$Bit) { s3182 == NULL }).value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp3184 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((panda$core$String*) p_i->payload));
        s3182 = ((org$pandalanguage$pandac$Symbol*) $tmp3184);
    }
    }
    if (((panda$core$Bit) { s3182 != NULL }).value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3185 = org$pandalanguage$pandac$Compiler$symbolRef$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q(self, p_i->position, NULL, s3182, self->symbolTable);
        return $tmp3185;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3186 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3186->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3186->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3188 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$String($tmp3186, ((panda$core$Int64) { 1037 }), p_i->position, $tmp3188, ((panda$core$String*) p_i->payload));
    return $tmp3186;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_t) {
    org$pandalanguage$pandac$Type* resolved3189;
    org$pandalanguage$pandac$Type* $tmp3190 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, p_t);
    org$pandalanguage$pandac$Type* $tmp3191 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, $tmp3190);
    resolved3189 = $tmp3191;
    if (((panda$core$Bit) { resolved3189 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3192 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3192->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3192->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3194 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp3192, ((panda$core$Int64) { 1001 }), p_t->position, $tmp3194, resolved3189);
    return $tmp3192;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileRange$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_r) {
    org$pandalanguage$pandac$IRNode* start3202;
    org$pandalanguage$pandac$IRNode* end3210;
    org$pandalanguage$pandac$IRNode* step3218;
    panda$collections$Array* children3225;
    org$pandalanguage$pandac$Position $tmp3233;
    panda$core$Bit $tmp3196 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_r->kind, ((panda$core$Int64) { 105 }));
    bool $tmp3195 = $tmp3196.value;
    if ($tmp3195) goto $l3197;
    panda$core$Bit $tmp3198 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_r->kind, ((panda$core$Int64) { 104 }));
    $tmp3195 = $tmp3198.value;
    $l3197:;
    panda$core$Bit $tmp3199 = { $tmp3195 };
    PANDA_ASSERT($tmp3199.value);
    panda$core$Int64 $tmp3200 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_r->children);
    panda$core$Bit $tmp3201 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3200, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp3201.value);
    panda$core$Object* $tmp3203 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp3204 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp3203)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp3204.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3205 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3205->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3205->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp3207 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3205, ((panda$core$Int64) { 1030 }), p_r->position, $tmp3207);
        start3202 = $tmp3205;
    }
    }
    else {
    {
        panda$core$Object* $tmp3208 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp3209 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3208));
        start3202 = $tmp3209;
        if (((panda$core$Bit) { start3202 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$core$Object* $tmp3211 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp3212 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp3211)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp3212.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3213 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3213->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3213->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp3215 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3213, ((panda$core$Int64) { 1030 }), p_r->position, $tmp3215);
        end3210 = $tmp3213;
    }
    }
    else {
    {
        panda$core$Object* $tmp3216 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$IRNode* $tmp3217 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3216));
        end3210 = $tmp3217;
        if (((panda$core$Bit) { end3210 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$core$Object* $tmp3219 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 2 }));
    panda$core$Bit $tmp3220 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp3219)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp3220.value) {
    {
        step3218 = NULL;
    }
    }
    else {
    {
        panda$core$Object* $tmp3221 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$IRNode* $tmp3222 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3221));
        org$pandalanguage$pandac$Type* $tmp3223 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp3224 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3222, $tmp3223);
        step3218 = $tmp3224;
        if (((panda$core$Bit) { step3218 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$collections$Array* $tmp3226 = (panda$collections$Array*) malloc(40);
    $tmp3226->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3226->refCount.value = 1;
    panda$collections$Array$init($tmp3226);
    children3225 = $tmp3226;
    panda$collections$Array$add$panda$collections$Array$T(children3225, ((panda$core$Object*) start3202));
    panda$collections$Array$add$panda$collections$Array$T(children3225, ((panda$core$Object*) end3210));
    if (((panda$core$Bit) { step3218 != NULL }).value) {
    {
        panda$collections$Array$add$panda$collections$Array$T(children3225, ((panda$core$Object*) step3218));
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3228 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3228->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3228->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3230 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp3230->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp3230->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp3233);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp3230, &$s3232, ((panda$core$Int64) { 17 }), $tmp3233, ((panda$core$Bit) { true }));
    panda$core$Bit $tmp3234 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_r->kind, ((panda$core$Int64) { 104 }));
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3228, ((panda$core$Int64) { 1031 }), p_r->position, $tmp3230, ((panda$core$Object*) wrap_panda$core$Bit($tmp3234)), ((panda$collections$ListView*) children3225));
    return $tmp3228;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$IRNode* $tmp3235 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3235->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3235->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3237 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$String($tmp3235, ((panda$core$Int64) { 1033 }), p_s->position, $tmp3237, ((panda$core$String*) p_s->payload));
    return $tmp3235;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileSelf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$Type* type3242;
    org$pandalanguage$pandac$ClassDecl* cl3243;
    panda$collections$Array* subtypes3250;
    panda$core$MutableString* name3254;
    panda$core$Char8 $tmp3257;
    panda$core$String* separator3258;
    panda$collections$Iterator* p$Iter3260;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* p3272;
    panda$collections$Array* pType3277;
    panda$core$String* pName3280;
    panda$core$Char8 $tmp3290;
    panda$core$Bit $tmp3238 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_s->kind, ((panda$core$Int64) { 114 }));
    PANDA_ASSERT($tmp3238.value);
    panda$core$Object* $tmp3239 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
    panda$core$Bit $tmp3240 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp3239)->annotations);
    if ($tmp3240.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_s->position, &$s3241);
        return NULL;
    }
    }
    panda$core$Object* $tmp3244 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
    cl3243 = ((org$pandalanguage$pandac$ClassDecl*) $tmp3244);
    ITable* $tmp3245 = ((panda$collections$CollectionView*) cl3243->parameters)->$class->itable;
    while ($tmp3245->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp3245 = $tmp3245->next;
    }
    $fn3247 $tmp3246 = $tmp3245->methods[0];
    panda$core$Int64 $tmp3248 = $tmp3246(((panda$collections$CollectionView*) cl3243->parameters));
    panda$core$Bit $tmp3249 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3248, ((panda$core$Int64) { 0 }));
    if ($tmp3249.value) {
    {
        panda$collections$Array* $tmp3251 = (panda$collections$Array*) malloc(40);
        $tmp3251->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp3251->refCount.value = 1;
        panda$collections$Array$init($tmp3251);
        subtypes3250 = $tmp3251;
        org$pandalanguage$pandac$Type* $tmp3253 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl3243);
        panda$collections$Array$add$panda$collections$Array$T(subtypes3250, ((panda$core$Object*) $tmp3253));
        panda$core$MutableString* $tmp3255 = (panda$core$MutableString*) malloc(48);
        $tmp3255->$class = (panda$core$Class*) &panda$core$MutableString$class;
        $tmp3255->refCount.value = 1;
        panda$core$MutableString$init$panda$core$String($tmp3255, ((org$pandalanguage$pandac$Symbol*) cl3243)->name);
        name3254 = $tmp3255;
        panda$core$Char8$init$panda$core$UInt8(&$tmp3257, ((panda$core$UInt8) { 60 }));
        panda$core$MutableString$append$panda$core$Char8(name3254, $tmp3257);
        separator3258 = &$s3259;
        {
            ITable* $tmp3261 = ((panda$collections$Iterable*) cl3243->parameters)->$class->itable;
            while ($tmp3261->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3261 = $tmp3261->next;
            }
            $fn3263 $tmp3262 = $tmp3261->methods[0];
            panda$collections$Iterator* $tmp3264 = $tmp3262(((panda$collections$Iterable*) cl3243->parameters));
            p$Iter3260 = $tmp3264;
            $l3265:;
            ITable* $tmp3267 = p$Iter3260->$class->itable;
            while ($tmp3267->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3267 = $tmp3267->next;
            }
            $fn3269 $tmp3268 = $tmp3267->methods[0];
            panda$core$Bit $tmp3270 = $tmp3268(p$Iter3260);
            panda$core$Bit $tmp3271 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3270);
            if (!$tmp3271.value) goto $l3266;
            {
                ITable* $tmp3273 = p$Iter3260->$class->itable;
                while ($tmp3273->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3273 = $tmp3273->next;
                }
                $fn3275 $tmp3274 = $tmp3273->methods[1];
                panda$core$Object* $tmp3276 = $tmp3274(p$Iter3260);
                p3272 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp3276);
                panda$collections$Array* $tmp3278 = (panda$collections$Array*) malloc(40);
                $tmp3278->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp3278->refCount.value = 1;
                panda$collections$Array$init($tmp3278);
                pType3277 = $tmp3278;
                panda$collections$Array$add$panda$collections$Array$T(pType3277, ((panda$core$Object*) p3272->bound));
                panda$core$String* $tmp3281 = panda$core$String$convert$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) cl3243)->name);
                panda$core$String* $tmp3283 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3281, &$s3282);
                panda$core$String* $tmp3284 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3283, ((org$pandalanguage$pandac$Symbol*) p3272)->name);
                panda$core$String* $tmp3286 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3284, &$s3285);
                pName3280 = $tmp3286;
                panda$core$MutableString$append$panda$core$String(name3254, separator3258);
                panda$core$MutableString$append$panda$core$String(name3254, pName3280);
                org$pandalanguage$pandac$Type* $tmp3287 = (org$pandalanguage$pandac$Type*) malloc(96);
                $tmp3287->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
                $tmp3287->refCount.value = 1;
                org$pandalanguage$pandac$Type$init$org$pandalanguage$pandac$ClassDecl$GenericParameter($tmp3287, p3272);
                panda$collections$Array$add$panda$collections$Array$T(subtypes3250, ((panda$core$Object*) $tmp3287));
                separator3258 = &$s3289;
            }
            goto $l3265;
            $l3266:;
        }
        panda$core$Char8$init$panda$core$UInt8(&$tmp3290, ((panda$core$UInt8) { 62 }));
        panda$core$MutableString$append$panda$core$Char8(name3254, $tmp3290);
        org$pandalanguage$pandac$Type* $tmp3291 = (org$pandalanguage$pandac$Type*) malloc(96);
        $tmp3291->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
        $tmp3291->refCount.value = 1;
        panda$core$String* $tmp3293 = panda$core$MutableString$finish$R$panda$core$String(name3254);
        org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp3291, $tmp3293, ((panda$core$Int64) { 21 }), p_s->position, ((panda$collections$ListView*) subtypes3250), ((panda$core$Bit) { true }));
        type3242 = $tmp3291;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp3294 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl3243);
        type3242 = $tmp3294;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3295 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3295->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3295->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3295, ((panda$core$Int64) { 1025 }), p_s->position, type3242);
    return $tmp3295;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileSuper$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$ClassDecl* cl3301;
    panda$core$Bit $tmp3297 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_s->kind, ((panda$core$Int64) { 115 }));
    PANDA_ASSERT($tmp3297.value);
    panda$core$Object* $tmp3298 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
    panda$core$Bit $tmp3299 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp3298)->annotations);
    if ($tmp3299.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_s->position, &$s3300);
        return NULL;
    }
    }
    panda$core$Object* $tmp3302 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
    cl3301 = ((org$pandalanguage$pandac$ClassDecl*) $tmp3302);
    PANDA_ASSERT(cl3301->resolved.value);
    org$pandalanguage$pandac$IRNode* $tmp3303 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3303->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3303->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3303, ((panda$core$Int64) { 1024 }), p_s->position, cl3301->rawSuper);
    return $tmp3303;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_expr, org$pandalanguage$pandac$Type* p_rawType) {
    org$pandalanguage$pandac$IRNode* value3305;
    panda$core$String$Index$nullable index3307;
    org$pandalanguage$pandac$Type* type3314;
    org$pandalanguage$pandac$IRNode* base3316;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp3319;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp3322;
    org$pandalanguage$pandac$Type* type3326;
    org$pandalanguage$pandac$IRNode* $tmp3306 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr);
    value3305 = $tmp3306;
    if (((panda$core$Bit) { value3305 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$String$Index$nullable $tmp3309 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(((org$pandalanguage$pandac$Symbol*) p_rawType)->name, &$s3308);
    index3307 = $tmp3309;
    panda$core$Bit $tmp3311 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_rawType->typeKind, ((panda$core$Int64) { 10 }));
    bool $tmp3310 = $tmp3311.value;
    if (!$tmp3310) goto $l3312;
    $tmp3310 = ((panda$core$Bit) { index3307.nonnull }).value;
    $l3312:;
    panda$core$Bit $tmp3313 = { $tmp3310 };
    if ($tmp3313.value) {
    {
        PANDA_ASSERT(self->reportErrors.value);
        self->reportErrors = ((panda$core$Bit) { false });
        org$pandalanguage$pandac$Type* $tmp3315 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, p_rawType);
        type3314 = $tmp3315;
        self->reportErrors = ((panda$core$Bit) { true });
        if (((panda$core$Bit) { type3314 == NULL }).value) {
        {
            org$pandalanguage$pandac$Type* $tmp3317 = (org$pandalanguage$pandac$Type*) malloc(96);
            $tmp3317->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp3317->refCount.value = 1;
            panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp3319, ((panda$core$String$Index$nullable) { .nonnull = false }), index3307, ((panda$core$Bit) { false }));
            panda$core$String* $tmp3320 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) p_rawType)->name, $tmp3319);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position($tmp3317, $tmp3320, ((panda$core$Int64) { 10 }), p_position);
            org$pandalanguage$pandac$IRNode* $tmp3321 = org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, p_expr, $tmp3317);
            base3316 = $tmp3321;
            if (((panda$core$Bit) { base3316 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$String$Index $tmp3323 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(((org$pandalanguage$pandac$Symbol*) p_rawType)->name, ((panda$core$String$Index) index3307.value));
            panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp3322, ((panda$core$String$Index$nullable) { $tmp3323, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$core$String* $tmp3324 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) p_rawType)->name, $tmp3322);
            org$pandalanguage$pandac$IRNode* $tmp3325 = org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$String$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, base3316, $tmp3324);
            return $tmp3325;
        }
        }
    }
    }
    org$pandalanguage$pandac$Type* $tmp3327 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, p_rawType);
    type3326 = $tmp3327;
    if (((panda$core$Bit) { type3326 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Int64$nullable $tmp3328 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, value3305, type3326);
    if (((panda$core$Bit) { $tmp3328.nonnull }).value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3329 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, value3305, type3326);
        return $tmp3329;
    }
    }
    panda$core$Bit $tmp3330 = org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, value3305, type3326);
    if ($tmp3330.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3331 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, value3305, p_position, ((panda$core$Bit) { true }), type3326);
        return $tmp3331;
    }
    }
    else {
    {
        panda$core$String* $tmp3333 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3332, ((panda$core$Object*) value3305->type));
        panda$core$String* $tmp3335 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3333, &$s3334);
        panda$core$String* $tmp3337 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3336, ((panda$core$Object*) type3326));
        panda$core$String* $tmp3339 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3337, &$s3338);
        panda$core$String* $tmp3340 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3335, $tmp3339);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp3340);
        return NULL;
    }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_c) {
    panda$core$Bit $tmp3341 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_c->kind, ((panda$core$Int64) { 111 }));
    PANDA_ASSERT($tmp3341.value);
    panda$core$Int64 $tmp3342 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_c->children);
    panda$core$Bit $tmp3343 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3342, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp3343.value);
    panda$core$Object* $tmp3344 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_c->children, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp3345 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_c->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Type* $tmp3346 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, ((org$pandalanguage$pandac$ASTNode*) $tmp3345));
    org$pandalanguage$pandac$IRNode* $tmp3347 = org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_c->position, ((org$pandalanguage$pandac$ASTNode*) $tmp3344), $tmp3346);
    return $tmp3347;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileNull$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_n) {
    panda$core$Bit $tmp3348 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_n->kind, ((panda$core$Int64) { 117 }));
    PANDA_ASSERT($tmp3348.value);
    org$pandalanguage$pandac$IRNode* $tmp3349 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3349->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3349->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3351 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3349, ((panda$core$Int64) { 1030 }), p_n->position, $tmp3351);
    return $tmp3349;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_e) {
    org$pandalanguage$pandac$IRNode* result3356;
    switch (p_e->kind.value) {
        case 103:
        {
            org$pandalanguage$pandac$IRNode* $tmp3352 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3352;
        }
        break;
        case 116:
        {
            org$pandalanguage$pandac$IRNode* $tmp3353 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3353->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3353->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3355 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp3353, ((panda$core$Int64) { 1011 }), p_e->position, $tmp3355, ((panda$core$Bit$wrapper*) p_e->payload)->value);
            return $tmp3353;
        }
        break;
        case 107:
        {
            org$pandalanguage$pandac$IRNode* $tmp3357 = org$pandalanguage$pandac$Compiler$compileCall$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            result3356 = $tmp3357;
            bool $tmp3358 = ((panda$core$Bit) { result3356 != NULL }).value;
            if (!$tmp3358) goto $l3359;
            org$pandalanguage$pandac$Type* $tmp3360 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp3361 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(result3356->type, $tmp3360);
            $tmp3358 = $tmp3361.value;
            $l3359:;
            panda$core$Bit $tmp3362 = { $tmp3358 };
            if ($tmp3362.value) {
            {
                panda$core$Bit $tmp3363 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result3356->kind, ((panda$core$Int64) { 1005 }));
                PANDA_ASSERT($tmp3363.value);
                panda$core$String* $tmp3364 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(((org$pandalanguage$pandac$MethodRef*) result3356->payload)->value);
                panda$core$String* $tmp3366 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3364, &$s3365);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, result3356->position, $tmp3366);
                return NULL;
            }
            }
            return result3356;
        }
        break;
        case 108:
        {
            org$pandalanguage$pandac$IRNode* $tmp3367 = org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3367;
        }
        break;
        case 106:
        {
            org$pandalanguage$pandac$IRNode* $tmp3368 = org$pandalanguage$pandac$Compiler$compileIdentifier$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3368;
        }
        break;
        case 102:
        {
            org$pandalanguage$pandac$IRNode* $tmp3369 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3369->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3369->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3371 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp3369, ((panda$core$Int64) { 1004 }), p_e->position, $tmp3371, ((panda$core$UInt64$wrapper*) p_e->payload)->value);
            return $tmp3369;
        }
        break;
        case 112:
        {
            org$pandalanguage$pandac$IRNode* $tmp3372 = org$pandalanguage$pandac$Compiler$compilePrefix$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3372;
        }
        break;
        case 104:
        case 105:
        {
            org$pandalanguage$pandac$IRNode* $tmp3373 = org$pandalanguage$pandac$Compiler$compileRange$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3373;
        }
        break;
        case 113:
        {
            org$pandalanguage$pandac$IRNode* $tmp3374 = org$pandalanguage$pandac$Compiler$compileString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3374;
        }
        break;
        case 109:
        case 154:
        case 110:
        {
            org$pandalanguage$pandac$IRNode* $tmp3375 = org$pandalanguage$pandac$Compiler$compileType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3375;
        }
        break;
        case 114:
        {
            org$pandalanguage$pandac$IRNode* $tmp3376 = org$pandalanguage$pandac$Compiler$compileSelf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3376;
        }
        break;
        case 115:
        {
            org$pandalanguage$pandac$IRNode* $tmp3377 = org$pandalanguage$pandac$Compiler$compileSuper$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3377;
        }
        break;
        case 111:
        {
            org$pandalanguage$pandac$IRNode* $tmp3378 = org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3378;
        }
        break;
        case 117:
        {
            org$pandalanguage$pandac$IRNode* $tmp3379 = org$pandalanguage$pandac$Compiler$compileNull$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode(self, p_e);
            return $tmp3379;
        }
        break;
    }
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBlock$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_b) {
    org$pandalanguage$pandac$SymbolTable* symbols3381;
    panda$collections$Array* result3384;
    panda$collections$Iterator* stmt$Iter3387;
    org$pandalanguage$pandac$ASTNode* stmt3399;
    org$pandalanguage$pandac$IRNode* compiled3404;
    panda$core$Bit $tmp3380 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_b->kind, ((panda$core$Int64) { 126 }));
    PANDA_ASSERT($tmp3380.value);
    org$pandalanguage$pandac$SymbolTable* $tmp3382 = (org$pandalanguage$pandac$SymbolTable*) malloc(48);
    $tmp3382->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp3382->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp3382, self->symbolTable);
    symbols3381 = $tmp3382;
    self->symbolTable = symbols3381;
    panda$collections$Array* $tmp3385 = (panda$collections$Array*) malloc(40);
    $tmp3385->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3385->refCount.value = 1;
    panda$collections$Array$init($tmp3385);
    result3384 = $tmp3385;
    if (((panda$core$Bit) { p_b->children != NULL }).value) {
    {
        {
            ITable* $tmp3388 = ((panda$collections$Iterable*) p_b->children)->$class->itable;
            while ($tmp3388->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3388 = $tmp3388->next;
            }
            $fn3390 $tmp3389 = $tmp3388->methods[0];
            panda$collections$Iterator* $tmp3391 = $tmp3389(((panda$collections$Iterable*) p_b->children));
            stmt$Iter3387 = $tmp3391;
            $l3392:;
            ITable* $tmp3394 = stmt$Iter3387->$class->itable;
            while ($tmp3394->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3394 = $tmp3394->next;
            }
            $fn3396 $tmp3395 = $tmp3394->methods[0];
            panda$core$Bit $tmp3397 = $tmp3395(stmt$Iter3387);
            panda$core$Bit $tmp3398 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3397);
            if (!$tmp3398.value) goto $l3393;
            {
                ITable* $tmp3400 = stmt$Iter3387->$class->itable;
                while ($tmp3400->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3400 = $tmp3400->next;
                }
                $fn3402 $tmp3401 = $tmp3400->methods[1];
                panda$core$Object* $tmp3403 = $tmp3401(stmt$Iter3387);
                stmt3399 = ((org$pandalanguage$pandac$ASTNode*) $tmp3403);
                org$pandalanguage$pandac$IRNode* $tmp3405 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, stmt3399);
                compiled3404 = $tmp3405;
                if (((panda$core$Bit) { compiled3404 == NULL }).value) {
                {
                    panda$core$Object* $tmp3406 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(symbols3381->parents, ((panda$core$Int64) { 0 }));
                    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp3406);
                    return NULL;
                }
                }
                panda$core$Bit $tmp3407 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(compiled3404->kind, ((panda$core$Int64) { 1039 }));
                PANDA_ASSERT($tmp3407.value);
                panda$collections$Array$add$panda$collections$Array$T(result3384, ((panda$core$Object*) compiled3404));
            }
            goto $l3392;
            $l3393:;
        }
    }
    }
    panda$core$Object* $tmp3408 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(symbols3381->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp3408);
    org$pandalanguage$pandac$IRNode* $tmp3409 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3409->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3409->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3409, ((panda$core$Int64) { 1000 }), p_b->position, ((panda$collections$ListView*) result3384));
    return $tmp3409;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_i) {
    org$pandalanguage$pandac$IRNode* test3419;
    org$pandalanguage$pandac$IRNode* ifTrue3424;
    panda$collections$Array* children3427;
    org$pandalanguage$pandac$IRNode* ifFalse3432;
    panda$core$Bit $tmp3411 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_i->kind, ((panda$core$Int64) { 118 }));
    PANDA_ASSERT($tmp3411.value);
    panda$core$Int64 $tmp3413 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_i->children);
    panda$core$Bit $tmp3414 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3413, ((panda$core$Int64) { 2 }));
    bool $tmp3412 = $tmp3414.value;
    if ($tmp3412) goto $l3415;
    panda$core$Int64 $tmp3416 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_i->children);
    panda$core$Bit $tmp3417 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3416, ((panda$core$Int64) { 3 }));
    $tmp3412 = $tmp3417.value;
    $l3415:;
    panda$core$Bit $tmp3418 = { $tmp3412 };
    PANDA_ASSERT($tmp3418.value);
    panda$core$Object* $tmp3420 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_i->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3421 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3420));
    org$pandalanguage$pandac$Type* $tmp3422 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp3423 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3421, $tmp3422);
    test3419 = $tmp3423;
    if (((panda$core$Bit) { test3419 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Object* $tmp3425 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_i->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp3426 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3425));
    ifTrue3424 = $tmp3426;
    if (((panda$core$Bit) { ifTrue3424 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3428 = (panda$collections$Array*) malloc(40);
    $tmp3428->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3428->refCount.value = 1;
    panda$collections$Array$init($tmp3428);
    children3427 = $tmp3428;
    panda$collections$Array$add$panda$collections$Array$T(children3427, ((panda$core$Object*) test3419));
    panda$collections$Array$add$panda$collections$Array$T(children3427, ((panda$core$Object*) ifTrue3424));
    panda$core$Int64 $tmp3430 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_i->children);
    panda$core$Bit $tmp3431 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3430, ((panda$core$Int64) { 3 }));
    if ($tmp3431.value) {
    {
        panda$core$Object* $tmp3433 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_i->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$IRNode* $tmp3434 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3433));
        ifFalse3432 = $tmp3434;
        if (((panda$core$Bit) { ifFalse3432 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children3427, ((panda$core$Object*) ifFalse3432));
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3435 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3435->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3435->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3435, ((panda$core$Int64) { 1012 }), p_i->position, ((panda$collections$ListView*) children3427));
    return $tmp3435;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileRangeFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, panda$core$String* p_label, org$pandalanguage$pandac$ASTNode* p_astTarget, org$pandalanguage$pandac$IRNode* p_rawList, org$pandalanguage$pandac$ASTNode* p_body) {
    org$pandalanguage$pandac$Type* elementType3437;
    org$pandalanguage$pandac$IRNode* list3438;
    org$pandalanguage$pandac$Type* t3450;
    org$pandalanguage$pandac$Compiler$CompileTargetResult* target3483;
    org$pandalanguage$pandac$IRNode* body3485;
    panda$collections$Array* children3487;
    panda$core$Bit $tmp3441 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_astTarget->kind, ((panda$core$Int64) { 106 }));
    bool $tmp3440 = $tmp3441.value;
    if (!$tmp3440) goto $l3442;
    $tmp3440 = ((panda$core$Bit) { p_astTarget->children != NULL }).value;
    $l3442:;
    panda$core$Bit $tmp3443 = { $tmp3440 };
    bool $tmp3439 = $tmp3443.value;
    if (!$tmp3439) goto $l3444;
    panda$core$Int64 $tmp3445 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_astTarget->children);
    panda$core$Bit $tmp3446 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3445, ((panda$core$Int64) { 0 }));
    $tmp3439 = $tmp3446.value;
    $l3444:;
    panda$core$Bit $tmp3447 = { $tmp3439 };
    if ($tmp3447.value) {
    {
        panda$core$Int64 $tmp3448 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_astTarget->children);
        panda$core$Bit $tmp3449 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3448, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp3449.value);
        panda$core$Object* $tmp3451 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_astTarget->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Type* $tmp3452 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, ((org$pandalanguage$pandac$ASTNode*) $tmp3451));
        org$pandalanguage$pandac$Type* $tmp3453 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, $tmp3452);
        t3450 = $tmp3453;
        panda$core$Bit $tmp3454 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_rawList->kind, ((panda$core$Int64) { 1031 }));
        if ($tmp3454.value) {
        {
            panda$core$Int64 $tmp3455 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_rawList->children);
            panda$core$Bit $tmp3456 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3455, ((panda$core$Int64) { 2 }));
            if ($tmp3456.value) {
            {
                org$pandalanguage$pandac$Type* $tmp3457 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3450);
                org$pandalanguage$pandac$IRNode* $tmp3458 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, $tmp3457);
                list3438 = $tmp3458;
            }
            }
            else {
            {
                panda$core$Int64 $tmp3459 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_rawList->children);
                panda$core$Bit $tmp3460 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3459, ((panda$core$Int64) { 3 }));
                PANDA_ASSERT($tmp3460.value);
                org$pandalanguage$pandac$Type* $tmp3461 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$Type* $tmp3462 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3450, $tmp3461);
                org$pandalanguage$pandac$IRNode* $tmp3463 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, $tmp3462);
                list3438 = $tmp3463;
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp3464 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(p_rawList->type);
        if ($tmp3464.value) {
        {
            panda$core$Object* $tmp3465 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_rawList->type->subtypes, ((panda$core$Int64) { 2 }));
            org$pandalanguage$pandac$Type* $tmp3466 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3450, ((org$pandalanguage$pandac$Type*) $tmp3465));
            org$pandalanguage$pandac$IRNode* $tmp3467 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, $tmp3466);
            list3438 = $tmp3467;
        }
        }
        else {
        org$pandalanguage$pandac$Type* $tmp3468 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3450);
        panda$core$Int64$nullable $tmp3469 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_rawList, $tmp3468);
        if (((panda$core$Bit) { $tmp3469.nonnull }).value) {
        {
            org$pandalanguage$pandac$Type* $tmp3470 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3450);
            org$pandalanguage$pandac$IRNode* $tmp3471 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, $tmp3470);
            list3438 = $tmp3471;
        }
        }
        else {
        {
            org$pandalanguage$pandac$Type* $tmp3472 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$Type* $tmp3473 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3450, $tmp3472);
            org$pandalanguage$pandac$IRNode* $tmp3474 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, $tmp3473);
            list3438 = $tmp3474;
        }
        }
        }
        }
    }
    }
    else {
    {
        org$pandalanguage$pandac$IRNode* $tmp3475 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList);
        list3438 = $tmp3475;
    }
    }
    if (((panda$core$Bit) { list3438 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp3476 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(list3438->type->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp3476.value) {
    {
        panda$core$Object* $tmp3477 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(list3438->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp3478 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3477)->typeKind, ((panda$core$Int64) { 21 }));
        PANDA_ASSERT($tmp3478.value);
        panda$core$Object* $tmp3479 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(list3438->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3480 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$Type*) $tmp3479)->subtypes, ((panda$core$Int64) { 1 }));
        elementType3437 = ((org$pandalanguage$pandac$Type*) $tmp3480);
    }
    }
    else {
    {
        panda$core$Bit $tmp3481 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(list3438->type->typeKind, ((panda$core$Int64) { 21 }));
        PANDA_ASSERT($tmp3481.value);
        panda$core$Object* $tmp3482 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(list3438->type->subtypes, ((panda$core$Int64) { 1 }));
        elementType3437 = ((org$pandalanguage$pandac$Type*) $tmp3482);
    }
    }
    org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp3484 = org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(self, p_astTarget, ((panda$core$Int64) { 10001 }), NULL, elementType3437);
    target3483 = $tmp3484;
    if (((panda$core$Bit) { target3483 == NULL }).value) {
    {
        return NULL;
    }
    }
    PANDA_ASSERT(((panda$core$Bit) { target3483->value == NULL }).value);
    org$pandalanguage$pandac$IRNode* $tmp3486 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_body);
    body3485 = $tmp3486;
    if (((panda$core$Bit) { body3485 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3488 = (panda$collections$Array*) malloc(40);
    $tmp3488->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3488->refCount.value = 1;
    panda$collections$Array$init($tmp3488);
    children3487 = $tmp3488;
    panda$collections$Array$add$panda$collections$Array$T(children3487, ((panda$core$Object*) target3483->target));
    panda$collections$Array$add$panda$collections$Array$T(children3487, ((panda$core$Object*) list3438));
    panda$collections$Array$add$panda$collections$Array$T(children3487, ((panda$core$Object*) body3485));
    org$pandalanguage$pandac$IRNode* $tmp3490 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3490->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3490->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3490, ((panda$core$Int64) { 1029 }), p_position, ((panda$core$Object*) p_label), ((panda$collections$ListView*) children3487));
    return $tmp3490;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIteratorFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, panda$core$String* p_label, org$pandalanguage$pandac$ASTNode* p_astTarget, org$pandalanguage$pandac$IRNode* p_iterator, org$pandalanguage$pandac$ASTNode* p_body) {
    org$pandalanguage$pandac$Compiler$CompileTargetResult* target3499;
    org$pandalanguage$pandac$Variable* targetVar3503;
    panda$collections$Array* subtypes3504;
    org$pandalanguage$pandac$Type* iterType3508;
    org$pandalanguage$pandac$Variable* iter3519;
    panda$collections$Array* statements3524;
    panda$collections$Array* declChildren3527;
    panda$collections$Array* varChildren3532;
    panda$collections$Array* whileChildren3539;
    org$pandalanguage$pandac$IRNode* done3542;
    org$pandalanguage$pandac$IRNode* notCall3549;
    panda$collections$Array* valueDeclChildren3554;
    org$pandalanguage$pandac$IRNode* next3559;
    panda$collections$Array* valueVarChildren3566;
    org$pandalanguage$pandac$IRNode* block3571;
    panda$collections$Array* blockChildren3573;
    panda$core$Bit $tmp3493 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_iterator->type->typeKind, ((panda$core$Int64) { 21 }));
    bool $tmp3492 = $tmp3493.value;
    if (!$tmp3492) goto $l3494;
    panda$core$Object* $tmp3495 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_iterator->type->subtypes, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp3496 = org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp3497 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3495), $tmp3496);
    $tmp3492 = $tmp3497.value;
    $l3494:;
    panda$core$Bit $tmp3498 = { $tmp3492 };
    PANDA_ASSERT($tmp3498.value);
    panda$core$Object* $tmp3500 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_iterator->type->subtypes, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp3501 = org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(self, p_astTarget, ((panda$core$Int64) { 10001 }), NULL, ((org$pandalanguage$pandac$Type*) $tmp3500));
    target3499 = $tmp3501;
    if (((panda$core$Bit) { target3499 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp3502 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(target3499->target->kind, ((panda$core$Int64) { 1016 }));
    PANDA_ASSERT($tmp3502.value);
    targetVar3503 = ((org$pandalanguage$pandac$Variable*) target3499->target->payload);
    panda$collections$Array* $tmp3505 = (panda$collections$Array*) malloc(40);
    $tmp3505->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3505->refCount.value = 1;
    panda$collections$Array$init($tmp3505);
    subtypes3504 = $tmp3505;
    org$pandalanguage$pandac$Type* $tmp3507 = org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type();
    panda$collections$Array$add$panda$collections$Array$T(subtypes3504, ((panda$core$Object*) $tmp3507));
    panda$collections$Array$add$panda$collections$Array$T(subtypes3504, ((panda$core$Object*) target3499->target->type));
    org$pandalanguage$pandac$Type* $tmp3509 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp3509->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp3509->refCount.value = 1;
    panda$core$Object* $tmp3511 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(subtypes3504, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3512 = org$pandalanguage$pandac$Type$convert$R$panda$core$String(((org$pandalanguage$pandac$Type*) $tmp3511));
    panda$core$String* $tmp3514 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3512, &$s3513);
    panda$core$Object* $tmp3515 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(subtypes3504, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp3516 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3514, ((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp3515)));
    panda$core$String* $tmp3518 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3516, &$s3517);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp3509, $tmp3518, ((panda$core$Int64) { 21 }), p_position, ((panda$collections$ListView*) subtypes3504), ((panda$core$Bit) { true }));
    iterType3508 = $tmp3509;
    org$pandalanguage$pandac$Variable* $tmp3520 = (org$pandalanguage$pandac$Variable*) malloc(88);
    $tmp3520->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
    $tmp3520->refCount.value = 1;
    panda$core$String* $tmp3523 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) targetVar3503)->name, &$s3522);
    org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type($tmp3520, p_iterator->position, ((panda$core$Int64) { 10001 }), $tmp3523, iterType3508);
    iter3519 = $tmp3520;
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->symbolTable, ((org$pandalanguage$pandac$Symbol*) iter3519));
    panda$collections$Array* $tmp3525 = (panda$collections$Array*) malloc(40);
    $tmp3525->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3525->refCount.value = 1;
    panda$collections$Array$init($tmp3525);
    statements3524 = $tmp3525;
    panda$collections$Array* $tmp3528 = (panda$collections$Array*) malloc(40);
    $tmp3528->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3528->refCount.value = 1;
    panda$collections$Array$init($tmp3528);
    declChildren3527 = $tmp3528;
    org$pandalanguage$pandac$IRNode* $tmp3530 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3530->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3530->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3530, ((panda$core$Int64) { 1016 }), p_iterator->position, iter3519->type, iter3519);
    panda$collections$Array$add$panda$collections$Array$T(declChildren3527, ((panda$core$Object*) $tmp3530));
    panda$collections$Array$add$panda$collections$Array$T(declChildren3527, ((panda$core$Object*) p_iterator));
    panda$collections$Array* $tmp3533 = (panda$collections$Array*) malloc(40);
    $tmp3533->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3533->refCount.value = 1;
    panda$collections$Array$init($tmp3533);
    varChildren3532 = $tmp3533;
    org$pandalanguage$pandac$IRNode* $tmp3535 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3535->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3535->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3535, ((panda$core$Int64) { 1021 }), ((org$pandalanguage$pandac$Symbol*) iter3519)->position, ((panda$collections$ListView*) declChildren3527));
    panda$collections$Array$add$panda$collections$Array$T(varChildren3532, ((panda$core$Object*) $tmp3535));
    org$pandalanguage$pandac$IRNode* $tmp3537 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3537->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3537->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3537, ((panda$core$Int64) { 1018 }), ((org$pandalanguage$pandac$Symbol*) iter3519)->position, ((panda$collections$ListView*) varChildren3532));
    panda$collections$Array$add$panda$collections$Array$T(statements3524, ((panda$core$Object*) $tmp3537));
    panda$collections$Array* $tmp3540 = (panda$collections$Array*) malloc(40);
    $tmp3540->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3540->refCount.value = 1;
    panda$collections$Array$init($tmp3540);
    whileChildren3539 = $tmp3540;
    org$pandalanguage$pandac$IRNode* $tmp3543 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3543->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3543->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3543, ((panda$core$Int64) { 1016 }), ((org$pandalanguage$pandac$Symbol*) iter3519)->position, iter3519->type, iter3519);
    panda$collections$Array* $tmp3546 = (panda$collections$Array*) malloc(40);
    $tmp3546->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3546->refCount.value = 1;
    panda$collections$Array$init($tmp3546);
    org$pandalanguage$pandac$IRNode* $tmp3548 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3543, &$s3545, ((panda$collections$ListView*) $tmp3546), NULL);
    done3542 = $tmp3548;
    if (((panda$core$Bit) { done3542 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3551 = (panda$collections$Array*) malloc(40);
    $tmp3551->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3551->refCount.value = 1;
    panda$collections$Array$init($tmp3551);
    org$pandalanguage$pandac$IRNode* $tmp3553 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, done3542, &$s3550, ((panda$collections$ListView*) $tmp3551), NULL);
    notCall3549 = $tmp3553;
    if (((panda$core$Bit) { notCall3549 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(whileChildren3539, ((panda$core$Object*) notCall3549));
    panda$collections$Array* $tmp3555 = (panda$collections$Array*) malloc(40);
    $tmp3555->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3555->refCount.value = 1;
    panda$collections$Array$init($tmp3555);
    valueDeclChildren3554 = $tmp3555;
    org$pandalanguage$pandac$IRNode* $tmp3557 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3557->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3557->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3557, ((panda$core$Int64) { 1016 }), p_iterator->position, targetVar3503->type, targetVar3503);
    panda$collections$Array$add$panda$collections$Array$T(valueDeclChildren3554, ((panda$core$Object*) $tmp3557));
    org$pandalanguage$pandac$IRNode* $tmp3560 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3560->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3560->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3560, ((panda$core$Int64) { 1016 }), p_iterator->position, iter3519->type, iter3519);
    panda$collections$Array* $tmp3563 = (panda$collections$Array*) malloc(40);
    $tmp3563->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3563->refCount.value = 1;
    panda$collections$Array$init($tmp3563);
    org$pandalanguage$pandac$IRNode* $tmp3565 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3560, &$s3562, ((panda$collections$ListView*) $tmp3563), NULL);
    next3559 = $tmp3565;
    PANDA_ASSERT(((panda$core$Bit) { next3559 != NULL }).value);
    panda$collections$Array$add$panda$collections$Array$T(valueDeclChildren3554, ((panda$core$Object*) next3559));
    panda$collections$Array* $tmp3567 = (panda$collections$Array*) malloc(40);
    $tmp3567->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3567->refCount.value = 1;
    panda$collections$Array$init($tmp3567);
    valueVarChildren3566 = $tmp3567;
    org$pandalanguage$pandac$IRNode* $tmp3569 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3569->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3569->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3569, ((panda$core$Int64) { 1021 }), p_iterator->position, ((panda$collections$ListView*) valueDeclChildren3554));
    panda$collections$Array$add$panda$collections$Array$T(valueVarChildren3566, ((panda$core$Object*) $tmp3569));
    org$pandalanguage$pandac$IRNode* $tmp3572 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_body);
    block3571 = $tmp3572;
    if (((panda$core$Bit) { block3571 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3574 = (panda$collections$Array*) malloc(40);
    $tmp3574->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3574->refCount.value = 1;
    panda$collections$Array$init($tmp3574);
    blockChildren3573 = $tmp3574;
    org$pandalanguage$pandac$IRNode* $tmp3576 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3576->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3576->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3576, ((panda$core$Int64) { 1018 }), p_iterator->position, ((panda$collections$ListView*) valueVarChildren3566));
    panda$collections$Array$add$panda$collections$Array$T(blockChildren3573, ((panda$core$Object*) $tmp3576));
    panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(blockChildren3573, ((panda$collections$CollectionView*) block3571->children));
    org$pandalanguage$pandac$IRNode* $tmp3578 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3578->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3578->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3578, ((panda$core$Int64) { 1000 }), block3571->position, ((panda$collections$ListView*) blockChildren3573));
    block3571 = $tmp3578;
    panda$collections$Array$add$panda$collections$Array$T(whileChildren3539, ((panda$core$Object*) block3571));
    org$pandalanguage$pandac$IRNode* $tmp3580 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3580->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3580->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3580, ((panda$core$Int64) { 1013 }), p_iterator->position, ((panda$core$Object*) p_label), ((panda$collections$ListView*) whileChildren3539));
    panda$collections$Array$add$panda$collections$Array$T(statements3524, ((panda$core$Object*) $tmp3580));
    org$pandalanguage$pandac$IRNode* $tmp3582 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3582->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3582->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3582, ((panda$core$Int64) { 1000 }), p_iterator->position, ((panda$collections$ListView*) statements3524));
    return $tmp3582;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileFor$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_f) {
    org$pandalanguage$pandac$IRNode* list3587;
    org$pandalanguage$pandac$SymbolTable* symbols3590;
    org$pandalanguage$pandac$IRNode* result3593;
    panda$core$Bit found3607;
    panda$collections$Iterator* intf$Iter3608;
    org$pandalanguage$pandac$Type* intf3621;
    org$pandalanguage$pandac$IRNode* iterator3633;
    org$pandalanguage$pandac$IRNode* iterable3645;
    org$pandalanguage$pandac$IRNode* iterator3647;
    panda$core$Bit $tmp3584 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_f->kind, ((panda$core$Int64) { 119 }));
    PANDA_ASSERT($tmp3584.value);
    panda$core$Int64 $tmp3585 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_f->children);
    panda$core$Bit $tmp3586 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3585, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp3586.value);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loops, ((panda$core$Object*) ((panda$core$String*) p_f->payload)));
    panda$core$Object* $tmp3588 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp3589 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3588));
    list3587 = $tmp3589;
    if (((panda$core$Bit) { list3587 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp3591 = (org$pandalanguage$pandac$SymbolTable*) malloc(48);
    $tmp3591->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp3591->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp3591, self->symbolTable);
    symbols3590 = $tmp3591;
    self->symbolTable = symbols3590;
    panda$core$Bit $tmp3596 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(list3587->kind, ((panda$core$Int64) { 1031 }));
    bool $tmp3595 = $tmp3596.value;
    if ($tmp3595) goto $l3597;
    panda$core$Bit $tmp3598 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(list3587->type);
    $tmp3595 = $tmp3598.value;
    $l3597:;
    panda$core$Bit $tmp3599 = { $tmp3595 };
    bool $tmp3594 = $tmp3599.value;
    if ($tmp3594) goto $l3600;
    panda$core$Bit $tmp3601 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(list3587->type);
    $tmp3594 = $tmp3601.value;
    $l3600:;
    panda$core$Bit $tmp3602 = { $tmp3594 };
    if ($tmp3602.value) {
    {
        panda$core$Object* $tmp3603 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3604 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$IRNode* $tmp3605 = org$pandalanguage$pandac$Compiler$compileRangeFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->position, ((panda$core$String*) p_f->payload), ((org$pandalanguage$pandac$ASTNode*) $tmp3603), list3587, ((org$pandalanguage$pandac$ASTNode*) $tmp3604));
        result3593 = $tmp3605;
    }
    }
    else {
    {
        org$pandalanguage$pandac$IRNode* $tmp3606 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, list3587);
        list3587 = $tmp3606;
        if (((panda$core$Bit) { list3587 == NULL }).value) {
        {
            return NULL;
        }
        }
        found3607 = ((panda$core$Bit) { false });
        {
            panda$collections$Set* $tmp3609 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self, list3587->type);
            ITable* $tmp3610 = ((panda$collections$Iterable*) $tmp3609)->$class->itable;
            while ($tmp3610->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3610 = $tmp3610->next;
            }
            $fn3612 $tmp3611 = $tmp3610->methods[0];
            panda$collections$Iterator* $tmp3613 = $tmp3611(((panda$collections$Iterable*) $tmp3609));
            intf$Iter3608 = $tmp3613;
            $l3614:;
            ITable* $tmp3616 = intf$Iter3608->$class->itable;
            while ($tmp3616->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3616 = $tmp3616->next;
            }
            $fn3618 $tmp3617 = $tmp3616->methods[0];
            panda$core$Bit $tmp3619 = $tmp3617(intf$Iter3608);
            panda$core$Bit $tmp3620 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3619);
            if (!$tmp3620.value) goto $l3615;
            {
                ITable* $tmp3622 = intf$Iter3608->$class->itable;
                while ($tmp3622->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3622 = $tmp3622->next;
                }
                $fn3624 $tmp3623 = $tmp3622->methods[1];
                panda$core$Object* $tmp3625 = $tmp3623(intf$Iter3608);
                intf3621 = ((org$pandalanguage$pandac$Type*) $tmp3625);
                panda$core$Bit $tmp3627 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(intf3621->typeKind, ((panda$core$Int64) { 21 }));
                bool $tmp3626 = $tmp3627.value;
                if (!$tmp3626) goto $l3628;
                panda$core$Object* $tmp3629 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(intf3621->subtypes, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp3630 = org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp3631 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3629), $tmp3630);
                $tmp3626 = $tmp3631.value;
                $l3628:;
                panda$core$Bit $tmp3632 = { $tmp3626 };
                if ($tmp3632.value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp3634 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, list3587, intf3621);
                    iterator3633 = $tmp3634;
                    panda$core$Object* $tmp3635 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
                    panda$core$Object* $tmp3636 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 2 }));
                    org$pandalanguage$pandac$IRNode* $tmp3637 = org$pandalanguage$pandac$Compiler$compileIteratorFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->position, ((panda$core$String*) p_f->payload), ((org$pandalanguage$pandac$ASTNode*) $tmp3635), iterator3633, ((org$pandalanguage$pandac$ASTNode*) $tmp3636));
                    result3593 = $tmp3637;
                    found3607 = ((panda$core$Bit) { true });
                    goto $l3615;
                }
                }
                panda$core$Bit $tmp3639 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(intf3621->typeKind, ((panda$core$Int64) { 21 }));
                bool $tmp3638 = $tmp3639.value;
                if (!$tmp3638) goto $l3640;
                panda$core$Object* $tmp3641 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(intf3621->subtypes, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp3642 = org$pandalanguage$pandac$Type$Iterable$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp3643 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3641), $tmp3642);
                $tmp3638 = $tmp3643.value;
                $l3640:;
                panda$core$Bit $tmp3644 = { $tmp3638 };
                if ($tmp3644.value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp3646 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, list3587, intf3621);
                    iterable3645 = $tmp3646;
                    panda$collections$Array* $tmp3649 = (panda$collections$Array*) malloc(40);
                    $tmp3649->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp3649->refCount.value = 1;
                    panda$collections$Array$init($tmp3649);
                    org$pandalanguage$pandac$IRNode* $tmp3651 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, iterable3645, &$s3648, ((panda$collections$ListView*) $tmp3649));
                    iterator3647 = $tmp3651;
                    panda$core$Object* $tmp3652 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
                    panda$core$Object* $tmp3653 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 2 }));
                    org$pandalanguage$pandac$IRNode* $tmp3654 = org$pandalanguage$pandac$Compiler$compileIteratorFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->position, ((panda$core$String*) p_f->payload), ((org$pandalanguage$pandac$ASTNode*) $tmp3652), iterator3647, ((org$pandalanguage$pandac$ASTNode*) $tmp3653));
                    result3593 = $tmp3654;
                    found3607 = ((panda$core$Bit) { true });
                    goto $l3615;
                }
                }
            }
            goto $l3614;
            $l3615:;
        }
        panda$core$Bit $tmp3655 = panda$core$Bit$$NOT$R$panda$core$Bit(found3607);
        if ($tmp3655.value) {
        {
            panda$core$String* $tmp3657 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3656, ((panda$core$Object*) list3587->type));
            panda$core$String* $tmp3659 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3657, &$s3658);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, list3587->position, $tmp3659);
            return NULL;
        }
        }
    }
    }
    panda$core$Object* $tmp3660 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(symbols3590->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp3660);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
    return result3593;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileWhile$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_w) {
    org$pandalanguage$pandac$IRNode* test3664;
    org$pandalanguage$pandac$IRNode* stmt3669;
    panda$collections$Array* children3672;
    panda$core$Bit $tmp3661 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_w->kind, ((panda$core$Int64) { 121 }));
    PANDA_ASSERT($tmp3661.value);
    panda$core$Int64 $tmp3662 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Bit $tmp3663 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3662, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp3663.value);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loops, ((panda$core$Object*) ((panda$core$String*) p_w->payload)));
    panda$core$Object* $tmp3665 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3666 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3665));
    org$pandalanguage$pandac$Type* $tmp3667 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp3668 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3666, $tmp3667);
    test3664 = $tmp3668;
    if (((panda$core$Bit) { test3664 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$core$Object* $tmp3670 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp3671 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3670));
    stmt3669 = $tmp3671;
    if (((panda$core$Bit) { stmt3669 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$collections$Array* $tmp3673 = (panda$collections$Array*) malloc(40);
    $tmp3673->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3673->refCount.value = 1;
    panda$collections$Array$init$panda$core$Int64($tmp3673, ((panda$core$Int64) { 2 }));
    children3672 = $tmp3673;
    panda$collections$Array$add$panda$collections$Array$T(children3672, ((panda$core$Object*) test3664));
    panda$collections$Array$add$panda$collections$Array$T(children3672, ((panda$core$Object*) stmt3669));
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
    org$pandalanguage$pandac$IRNode* $tmp3675 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3675->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3675->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3675, ((panda$core$Int64) { 1013 }), p_w->position, p_w->payload, ((panda$collections$ListView*) children3672));
    return $tmp3675;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileDo$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_d) {
    org$pandalanguage$pandac$IRNode* stmt3680;
    org$pandalanguage$pandac$IRNode* test3683;
    panda$collections$Array* children3688;
    panda$core$Bit $tmp3677 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_d->kind, ((panda$core$Int64) { 120 }));
    PANDA_ASSERT($tmp3677.value);
    panda$core$Int64 $tmp3678 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp3679 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3678, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp3679.value);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loops, ((panda$core$Object*) ((panda$core$String*) p_d->payload)));
    panda$core$Object* $tmp3681 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3682 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3681));
    stmt3680 = $tmp3682;
    if (((panda$core$Bit) { stmt3680 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$core$Object* $tmp3684 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp3685 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3684));
    org$pandalanguage$pandac$Type* $tmp3686 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp3687 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3685, $tmp3686);
    test3683 = $tmp3687;
    if (((panda$core$Bit) { test3683 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$collections$Array* $tmp3689 = (panda$collections$Array*) malloc(40);
    $tmp3689->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3689->refCount.value = 1;
    panda$collections$Array$init$panda$core$Int64($tmp3689, ((panda$core$Int64) { 2 }));
    children3688 = $tmp3689;
    panda$collections$Array$add$panda$collections$Array$T(children3688, ((panda$core$Object*) stmt3680));
    panda$collections$Array$add$panda$collections$Array$T(children3688, ((panda$core$Object*) test3683));
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
    org$pandalanguage$pandac$IRNode* $tmp3691 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3691->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3691->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3691, ((panda$core$Int64) { 1014 }), p_d->position, p_d->payload, ((panda$collections$ListView*) children3688));
    return $tmp3691;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileLoop$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_l) {
    org$pandalanguage$pandac$IRNode* stmt3696;
    panda$collections$Array* children3699;
    panda$core$Bit $tmp3693 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_l->kind, ((panda$core$Int64) { 122 }));
    PANDA_ASSERT($tmp3693.value);
    panda$core$Int64 $tmp3694 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_l->children);
    panda$core$Bit $tmp3695 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3694, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3695.value);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loops, ((panda$core$Object*) ((panda$core$String*) p_l->payload)));
    panda$core$Object* $tmp3697 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_l->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3698 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3697));
    stmt3696 = $tmp3698;
    if (((panda$core$Bit) { stmt3696 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$collections$Array* $tmp3700 = (panda$collections$Array*) malloc(40);
    $tmp3700->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3700->refCount.value = 1;
    panda$collections$Array$init$panda$core$Int64($tmp3700, ((panda$core$Int64) { 1 }));
    children3699 = $tmp3700;
    panda$collections$Array$add$panda$collections$Array$T(children3699, ((panda$core$Object*) stmt3696));
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
    org$pandalanguage$pandac$IRNode* $tmp3702 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3702->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3702->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3702, ((panda$core$Int64) { 1015 }), p_l->position, p_l->payload, ((panda$collections$ListView*) children3699));
    return $tmp3702;
}
org$pandalanguage$pandac$Compiler$CompileTargetResult* org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_t, panda$core$Int64 p_kind, org$pandalanguage$pandac$IRNode* p_rawValue, org$pandalanguage$pandac$Type* p_valueType) {
    org$pandalanguage$pandac$IRNode* value3704;
    org$pandalanguage$pandac$Type* type3708;
    org$pandalanguage$pandac$Variable* v3724;
    value3704 = p_rawValue;
    bool $tmp3705 = ((panda$core$Bit) { value3704 == NULL }).value;
    if ($tmp3705) goto $l3706;
    $tmp3705 = ((panda$core$Bit) { p_valueType == NULL }).value;
    $l3706:;
    panda$core$Bit $tmp3707 = { $tmp3705 };
    PANDA_ASSERT($tmp3707.value);
    switch (p_t->kind.value) {
        case 106:
        {
            bool $tmp3709 = ((panda$core$Bit) { p_t->children != NULL }).value;
            if (!$tmp3709) goto $l3710;
            panda$core$Int64 $tmp3711 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_t->children);
            panda$core$Bit $tmp3712 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp3711, ((panda$core$Int64) { 0 }));
            $tmp3709 = $tmp3712.value;
            $l3710:;
            panda$core$Bit $tmp3713 = { $tmp3709 };
            if ($tmp3713.value) {
            {
                panda$core$Int64 $tmp3714 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_t->children);
                panda$core$Bit $tmp3715 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3714, ((panda$core$Int64) { 1 }));
                PANDA_ASSERT($tmp3715.value);
                panda$core$Object* $tmp3716 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp3717 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, ((org$pandalanguage$pandac$ASTNode*) $tmp3716));
                org$pandalanguage$pandac$Type* $tmp3718 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, $tmp3717);
                type3708 = $tmp3718;
            }
            }
            else {
            if (((panda$core$Bit) { value3704 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp3719 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, value3704);
                value3704 = $tmp3719;
                if (((panda$core$Bit) { value3704 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$Type* $tmp3720 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, value3704);
                type3708 = $tmp3720;
            }
            }
            else {
            if (((panda$core$Bit) { p_valueType != NULL }).value) {
            {
                type3708 = p_valueType;
            }
            }
            else {
            {
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_t->position, &$s3721);
                return NULL;
            }
            }
            }
            }
            if (((panda$core$Bit) { value3704 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp3722 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, value3704, type3708);
                value3704 = $tmp3722;
                if (((panda$core$Bit) { value3704 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$core$Bit $tmp3723 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(value3704->type, type3708);
                PANDA_ASSERT($tmp3723.value);
            }
            }
            org$pandalanguage$pandac$Variable* $tmp3725 = (org$pandalanguage$pandac$Variable*) malloc(88);
            $tmp3725->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
            $tmp3725->refCount.value = 1;
            org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type($tmp3725, p_t->position, p_kind, ((panda$core$String*) p_t->payload), type3708);
            v3724 = $tmp3725;
            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->symbolTable, ((org$pandalanguage$pandac$Symbol*) v3724));
            org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp3727 = (org$pandalanguage$pandac$Compiler$CompileTargetResult*) malloc(32);
            $tmp3727->$class = (panda$core$Class*) &org$pandalanguage$pandac$Compiler$CompileTargetResult$class;
            $tmp3727->refCount.value = 1;
            org$pandalanguage$pandac$IRNode* $tmp3729 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3729->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3729->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3729, ((panda$core$Int64) { 1016 }), ((org$pandalanguage$pandac$Symbol*) v3724)->position, v3724->type, v3724);
            org$pandalanguage$pandac$Compiler$CompileTargetResult$init$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q($tmp3727, $tmp3729, value3704);
            return $tmp3727;
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
    org$pandalanguage$pandac$IRNode* value3739;
    org$pandalanguage$pandac$Compiler$CompileTargetResult* target3744;
    panda$collections$Array* children3747;
    org$pandalanguage$pandac$Variable* v3751;
    panda$core$Bit $tmp3731 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_d->kind, ((panda$core$Int64) { 129 }));
    PANDA_ASSERT($tmp3731.value);
    panda$core$Int64 $tmp3733 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp3734 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3733, ((panda$core$Int64) { 1 }));
    bool $tmp3732 = $tmp3734.value;
    if ($tmp3732) goto $l3735;
    panda$core$Int64 $tmp3736 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp3737 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3736, ((panda$core$Int64) { 2 }));
    $tmp3732 = $tmp3737.value;
    $l3735:;
    panda$core$Bit $tmp3738 = { $tmp3732 };
    PANDA_ASSERT($tmp3738.value);
    panda$core$Int64 $tmp3740 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp3741 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3740, ((panda$core$Int64) { 2 }));
    if ($tmp3741.value) {
    {
        panda$core$Object* $tmp3742 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$IRNode* $tmp3743 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3742));
        value3739 = $tmp3743;
        if (((panda$core$Bit) { value3739 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    else {
    {
        value3739 = NULL;
    }
    }
    panda$core$Object* $tmp3745 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp3746 = org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3745), p_varKind, value3739, NULL);
    target3744 = $tmp3746;
    if (((panda$core$Bit) { target3744 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3748 = (panda$collections$Array*) malloc(40);
    $tmp3748->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3748->refCount.value = 1;
    panda$collections$Array$init($tmp3748);
    children3747 = $tmp3748;
    panda$collections$Array$add$panda$collections$Array$T(children3747, ((panda$core$Object*) target3744->target));
    if (((panda$core$Bit) { target3744->value != NULL }).value) {
    {
        panda$core$Bit $tmp3750 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(target3744->target->kind, ((panda$core$Int64) { 1016 }));
        PANDA_ASSERT($tmp3750.value);
        v3751 = ((org$pandalanguage$pandac$Variable*) target3744->target->payload);
        v3751->initialValue = target3744->value;
        panda$collections$Array$add$panda$collections$Array$T(children3747, ((panda$core$Object*) target3744->value));
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3752 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3752->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3752->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3752, ((panda$core$Int64) { 1021 }), p_d->position, ((panda$collections$ListView*) children3747));
    return $tmp3752;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBreak$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_b) {
    panda$core$Bit found3755;
    panda$collections$Iterator* label$Iter3756;
    panda$core$String* label3768;
    panda$core$Bit $tmp3754 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_b->kind, ((panda$core$Int64) { 134 }));
    PANDA_ASSERT($tmp3754.value);
    if (((panda$core$Bit) { p_b->payload != NULL }).value) {
    {
        found3755 = ((panda$core$Bit) { false });
        {
            ITable* $tmp3757 = ((panda$collections$Iterable*) self->loops)->$class->itable;
            while ($tmp3757->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3757 = $tmp3757->next;
            }
            $fn3759 $tmp3758 = $tmp3757->methods[0];
            panda$collections$Iterator* $tmp3760 = $tmp3758(((panda$collections$Iterable*) self->loops));
            label$Iter3756 = $tmp3760;
            $l3761:;
            ITable* $tmp3763 = label$Iter3756->$class->itable;
            while ($tmp3763->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3763 = $tmp3763->next;
            }
            $fn3765 $tmp3764 = $tmp3763->methods[0];
            panda$core$Bit $tmp3766 = $tmp3764(label$Iter3756);
            panda$core$Bit $tmp3767 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3766);
            if (!$tmp3767.value) goto $l3762;
            {
                ITable* $tmp3769 = label$Iter3756->$class->itable;
                while ($tmp3769->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3769 = $tmp3769->next;
                }
                $fn3771 $tmp3770 = $tmp3769->methods[1];
                panda$core$Object* $tmp3772 = $tmp3770(label$Iter3756);
                label3768 = ((panda$core$String*) $tmp3772);
                bool $tmp3773 = ((panda$core$Bit) { label3768 != NULL }).value;
                if (!$tmp3773) goto $l3774;
                panda$core$Bit $tmp3778;
                if (((panda$core$Bit) { label3768 != NULL }).value) goto $l3775; else goto $l3776;
                $l3775:;
                panda$core$Bit $tmp3779 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(label3768, ((panda$core$String*) p_b->payload));
                $tmp3778 = $tmp3779;
                goto $l3777;
                $l3776:;
                $tmp3778 = ((panda$core$Bit) { false });
                goto $l3777;
                $l3777:;
                $tmp3773 = $tmp3778.value;
                $l3774:;
                panda$core$Bit $tmp3780 = { $tmp3773 };
                if ($tmp3780.value) {
                {
                    found3755 = ((panda$core$Bit) { true });
                    goto $l3762;
                }
                }
            }
            goto $l3761;
            $l3762:;
        }
        panda$core$Bit $tmp3781 = panda$core$Bit$$NOT$R$panda$core$Bit(found3755);
        if ($tmp3781.value) {
        {
            panda$core$String* $tmp3783 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3782, p_b->payload);
            panda$core$String* $tmp3785 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3783, &$s3784);
            panda$core$String* $tmp3787 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3786, p_b->payload);
            panda$core$String* $tmp3789 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3787, &$s3788);
            panda$core$String* $tmp3790 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3785, $tmp3789);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_b->position, $tmp3790);
        }
        }
    }
    }
    else {
    panda$core$Int64 $tmp3791 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loops);
    panda$core$Bit $tmp3792 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3791, ((panda$core$Int64) { 0 }));
    if ($tmp3792.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_b->position, &$s3793);
    }
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3794 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3794->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3794->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp3794, ((panda$core$Int64) { 1006 }), p_b->position, ((panda$core$String*) p_b->payload));
    return $tmp3794;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileContinue$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_c) {
    panda$core$Bit found3797;
    panda$collections$Iterator* label$Iter3798;
    panda$core$String* label3810;
    panda$core$Bit $tmp3796 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_c->kind, ((panda$core$Int64) { 135 }));
    PANDA_ASSERT($tmp3796.value);
    if (((panda$core$Bit) { p_c->payload != NULL }).value) {
    {
        found3797 = ((panda$core$Bit) { false });
        {
            ITable* $tmp3799 = ((panda$collections$Iterable*) self->loops)->$class->itable;
            while ($tmp3799->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3799 = $tmp3799->next;
            }
            $fn3801 $tmp3800 = $tmp3799->methods[0];
            panda$collections$Iterator* $tmp3802 = $tmp3800(((panda$collections$Iterable*) self->loops));
            label$Iter3798 = $tmp3802;
            $l3803:;
            ITable* $tmp3805 = label$Iter3798->$class->itable;
            while ($tmp3805->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3805 = $tmp3805->next;
            }
            $fn3807 $tmp3806 = $tmp3805->methods[0];
            panda$core$Bit $tmp3808 = $tmp3806(label$Iter3798);
            panda$core$Bit $tmp3809 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3808);
            if (!$tmp3809.value) goto $l3804;
            {
                ITable* $tmp3811 = label$Iter3798->$class->itable;
                while ($tmp3811->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3811 = $tmp3811->next;
                }
                $fn3813 $tmp3812 = $tmp3811->methods[1];
                panda$core$Object* $tmp3814 = $tmp3812(label$Iter3798);
                label3810 = ((panda$core$String*) $tmp3814);
                bool $tmp3815 = ((panda$core$Bit) { label3810 != NULL }).value;
                if (!$tmp3815) goto $l3816;
                panda$core$Bit $tmp3820;
                if (((panda$core$Bit) { label3810 != NULL }).value) goto $l3817; else goto $l3818;
                $l3817:;
                panda$core$Bit $tmp3821 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(label3810, ((panda$core$String*) p_c->payload));
                $tmp3820 = $tmp3821;
                goto $l3819;
                $l3818:;
                $tmp3820 = ((panda$core$Bit) { false });
                goto $l3819;
                $l3819:;
                $tmp3815 = $tmp3820.value;
                $l3816:;
                panda$core$Bit $tmp3822 = { $tmp3815 };
                if ($tmp3822.value) {
                {
                    found3797 = ((panda$core$Bit) { true });
                    goto $l3804;
                }
                }
            }
            goto $l3803;
            $l3804:;
        }
        panda$core$Bit $tmp3823 = panda$core$Bit$$NOT$R$panda$core$Bit(found3797);
        if ($tmp3823.value) {
        {
            panda$core$String* $tmp3825 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3824, p_c->payload);
            panda$core$String* $tmp3827 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3825, &$s3826);
            panda$core$String* $tmp3829 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3828, p_c->payload);
            panda$core$String* $tmp3831 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3829, &$s3830);
            panda$core$String* $tmp3832 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3827, $tmp3831);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_c->position, $tmp3832);
        }
        }
    }
    }
    else {
    panda$core$Int64 $tmp3833 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loops);
    panda$core$Bit $tmp3834 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3833, ((panda$core$Int64) { 0 }));
    if ($tmp3834.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_c->position, &$s3835);
    }
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3836 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3836->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3836->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp3836, ((panda$core$Int64) { 1007 }), p_c->position, ((panda$core$String*) p_c->payload));
    return $tmp3836;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileReturn$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_r) {
    org$pandalanguage$pandac$IRNode* value3850;
    panda$collections$Array* children3855;
    panda$core$Bit $tmp3838 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_r->kind, ((panda$core$Int64) { 136 }));
    PANDA_ASSERT($tmp3838.value);
    bool $tmp3839 = ((panda$core$Bit) { p_r->children != NULL }).value;
    if (!$tmp3839) goto $l3840;
    panda$core$Int64 $tmp3841 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_r->children);
    panda$core$Bit $tmp3842 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3841, ((panda$core$Int64) { 0 }));
    $tmp3839 = $tmp3842.value;
    $l3840:;
    panda$core$Bit $tmp3843 = { $tmp3839 };
    if ($tmp3843.value) {
    {
        panda$core$Int64 $tmp3844 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_r->children);
        panda$core$Bit $tmp3845 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3844, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp3845.value);
        panda$core$Object* $tmp3846 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
        org$pandalanguage$pandac$Type* $tmp3847 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp3848 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp3846)->returnType, $tmp3847);
        if ($tmp3848.value) {
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_r->position, &$s3849);
            return NULL;
        }
        }
        panda$core$Object* $tmp3851 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp3852 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3851));
        panda$core$Object* $tmp3853 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
        org$pandalanguage$pandac$IRNode* $tmp3854 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3852, ((org$pandalanguage$pandac$MethodDecl*) $tmp3853)->returnType);
        value3850 = $tmp3854;
        if (((panda$core$Bit) { value3850 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp3856 = (panda$collections$Array*) malloc(40);
        $tmp3856->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp3856->refCount.value = 1;
        panda$collections$Array$init($tmp3856);
        children3855 = $tmp3856;
        panda$collections$Array$add$panda$collections$Array$T(children3855, ((panda$core$Object*) value3850));
        org$pandalanguage$pandac$IRNode* $tmp3858 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3858->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3858->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3858, ((panda$core$Int64) { 1008 }), p_r->position, ((panda$collections$ListView*) children3855));
        return $tmp3858;
    }
    }
    panda$core$Object* $tmp3860 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
    org$pandalanguage$pandac$Type* $tmp3861 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp3862 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp3860)->returnType, $tmp3861);
    if ($tmp3862.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_r->position, &$s3863);
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3864 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3864->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3864->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp3864, ((panda$core$Int64) { 1008 }), p_r->position);
    return $tmp3864;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileAssert$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_a) {
    org$pandalanguage$pandac$IRNode* test3874;
    org$pandalanguage$pandac$ClassDecl* bit3879;
    org$pandalanguage$pandac$Symbol* value3882;
    panda$collections$Array* fieldChildren3885;
    panda$collections$Array* children3891;
    org$pandalanguage$pandac$IRNode* msg3896;
    panda$core$Bit $tmp3866 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_a->kind, ((panda$core$Int64) { 123 }));
    PANDA_ASSERT($tmp3866.value);
    panda$core$Int64 $tmp3868 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp3869 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3868, ((panda$core$Int64) { 1 }));
    bool $tmp3867 = $tmp3869.value;
    if ($tmp3867) goto $l3870;
    panda$core$Int64 $tmp3871 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp3872 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3871, ((panda$core$Int64) { 2 }));
    $tmp3867 = $tmp3872.value;
    $l3870:;
    panda$core$Bit $tmp3873 = { $tmp3867 };
    PANDA_ASSERT($tmp3873.value);
    panda$core$Object* $tmp3875 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_a->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3876 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3875));
    test3874 = $tmp3876;
    if (((panda$core$Bit) { test3874 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$Type* $tmp3877 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp3878 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, test3874, $tmp3877);
    test3874 = $tmp3878;
    if (((panda$core$Bit) { test3874 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$Type* $tmp3880 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$ClassDecl* $tmp3881 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, $tmp3880);
    bit3879 = $tmp3881;
    PANDA_ASSERT(((panda$core$Bit) { bit3879 != NULL }).value);
    org$pandalanguage$pandac$Symbol* $tmp3884 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(bit3879->symbolTable, &$s3883);
    value3882 = $tmp3884;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self, ((org$pandalanguage$pandac$FieldDecl*) value3882));
    panda$collections$Array* $tmp3886 = (panda$collections$Array*) malloc(40);
    $tmp3886->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3886->refCount.value = 1;
    panda$collections$Array$init($tmp3886);
    fieldChildren3885 = $tmp3886;
    panda$collections$Array$add$panda$collections$Array$T(fieldChildren3885, ((panda$core$Object*) test3874));
    org$pandalanguage$pandac$IRNode* $tmp3888 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3888->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3888->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3890 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3888, ((panda$core$Int64) { 1026 }), p_a->position, $tmp3890, ((panda$core$Object*) value3882), ((panda$collections$ListView*) fieldChildren3885));
    test3874 = $tmp3888;
    panda$collections$Array* $tmp3892 = (panda$collections$Array*) malloc(40);
    $tmp3892->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3892->refCount.value = 1;
    panda$collections$Array$init($tmp3892);
    children3891 = $tmp3892;
    panda$collections$Array$add$panda$collections$Array$T(children3891, ((panda$core$Object*) test3874));
    panda$core$Int64 $tmp3894 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp3895 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3894, ((panda$core$Int64) { 2 }));
    if ($tmp3895.value) {
    {
        panda$core$Object* $tmp3897 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_a->children, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$IRNode* $tmp3898 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3897));
        msg3896 = $tmp3898;
        if (((panda$core$Bit) { msg3896 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$Type* $tmp3899 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp3900 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, msg3896, $tmp3899);
        msg3896 = $tmp3900;
        if (((panda$core$Bit) { msg3896 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children3891, ((panda$core$Object*) msg3896));
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3901 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3901->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3901->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3901, ((panda$core$Int64) { 1034 }), p_a->position, ((panda$collections$ListView*) children3891));
    return $tmp3901;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileVar$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_v) {
    panda$core$Int64 nodeKind3916;
    panda$core$Int64 varKind3917;
    panda$collections$Array* decls3918;
    panda$collections$Iterator* astDecl$Iter3921;
    org$pandalanguage$pandac$ASTNode* astDecl3933;
    org$pandalanguage$pandac$IRNode* decl3938;
    panda$core$Bit $tmp3906 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 130 }));
    bool $tmp3905 = $tmp3906.value;
    if ($tmp3905) goto $l3907;
    panda$core$Bit $tmp3908 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 131 }));
    $tmp3905 = $tmp3908.value;
    $l3907:;
    panda$core$Bit $tmp3909 = { $tmp3905 };
    bool $tmp3904 = $tmp3909.value;
    if ($tmp3904) goto $l3910;
    panda$core$Bit $tmp3911 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 133 }));
    $tmp3904 = $tmp3911.value;
    $l3910:;
    panda$core$Bit $tmp3912 = { $tmp3904 };
    bool $tmp3903 = $tmp3912.value;
    if ($tmp3903) goto $l3913;
    panda$core$Bit $tmp3914 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 132 }));
    $tmp3903 = $tmp3914.value;
    $l3913:;
    panda$core$Bit $tmp3915 = { $tmp3903 };
    PANDA_ASSERT($tmp3915.value);
    switch (p_v->kind.value) {
        case 130:
        {
            nodeKind3916 = ((panda$core$Int64) { 1017 });
            varKind3917 = ((panda$core$Int64) { 10000 });
        }
        break;
        case 131:
        {
            nodeKind3916 = ((panda$core$Int64) { 1018 });
            varKind3917 = ((panda$core$Int64) { 10001 });
        }
        break;
        case 132:
        {
            nodeKind3916 = ((panda$core$Int64) { 1019 });
            varKind3917 = ((panda$core$Int64) { 10002 });
        }
        break;
        case 133:
        {
            nodeKind3916 = ((panda$core$Int64) { 1020 });
            varKind3917 = ((panda$core$Int64) { 10003 });
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
    panda$collections$Array* $tmp3919 = (panda$collections$Array*) malloc(40);
    $tmp3919->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3919->refCount.value = 1;
    panda$collections$Array$init($tmp3919);
    decls3918 = $tmp3919;
    {
        ITable* $tmp3922 = ((panda$collections$Iterable*) p_v->children)->$class->itable;
        while ($tmp3922->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3922 = $tmp3922->next;
        }
        $fn3924 $tmp3923 = $tmp3922->methods[0];
        panda$collections$Iterator* $tmp3925 = $tmp3923(((panda$collections$Iterable*) p_v->children));
        astDecl$Iter3921 = $tmp3925;
        $l3926:;
        ITable* $tmp3928 = astDecl$Iter3921->$class->itable;
        while ($tmp3928->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3928 = $tmp3928->next;
        }
        $fn3930 $tmp3929 = $tmp3928->methods[0];
        panda$core$Bit $tmp3931 = $tmp3929(astDecl$Iter3921);
        panda$core$Bit $tmp3932 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3931);
        if (!$tmp3932.value) goto $l3927;
        {
            ITable* $tmp3934 = astDecl$Iter3921->$class->itable;
            while ($tmp3934->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3934 = $tmp3934->next;
            }
            $fn3936 $tmp3935 = $tmp3934->methods[1];
            panda$core$Object* $tmp3937 = $tmp3935(astDecl$Iter3921);
            astDecl3933 = ((org$pandalanguage$pandac$ASTNode*) $tmp3937);
            org$pandalanguage$pandac$IRNode* $tmp3939 = org$pandalanguage$pandac$Compiler$compileDeclaration$org$pandalanguage$pandac$ASTNode$panda$core$Int64$R$org$pandalanguage$pandac$IRNode$Q(self, astDecl3933, varKind3917);
            decl3938 = $tmp3939;
            if (((panda$core$Bit) { decl3938 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(decls3918, ((panda$core$Object*) decl3938));
        }
        goto $l3926;
        $l3927:;
    }
    org$pandalanguage$pandac$IRNode* $tmp3940 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3940->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3940->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3940, nodeKind3916, p_v->position, ((panda$collections$ListView*) decls3918));
    return $tmp3940;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileWhenTest$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Variable* p_value, org$pandalanguage$pandac$ASTNode* p_test) {
    org$pandalanguage$pandac$IRNode* target3942;
    panda$collections$Array* callChildren3945;
    org$pandalanguage$pandac$IRNode* testValue3948;
    org$pandalanguage$pandac$IRNode* $tmp3943 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3943->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3943->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3943, ((panda$core$Int64) { 1016 }), p_test->position, p_value->type, p_value);
    target3942 = $tmp3943;
    panda$collections$Array* $tmp3946 = (panda$collections$Array*) malloc(40);
    $tmp3946->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3946->refCount.value = 1;
    panda$collections$Array$init($tmp3946);
    callChildren3945 = $tmp3946;
    org$pandalanguage$pandac$IRNode* $tmp3949 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_test);
    testValue3948 = $tmp3949;
    if (((panda$core$Bit) { testValue3948 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(callChildren3945, ((panda$core$Object*) testValue3948));
    org$pandalanguage$pandac$IRNode* $tmp3951 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target3942, &$s3950, ((panda$collections$ListView*) callChildren3945));
    return $tmp3951;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileChainedIfWhen$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Variable* p_value, org$pandalanguage$pandac$ASTNode* p_w) {
    org$pandalanguage$pandac$IRNode* test3960;
    panda$core$Range$LTpanda$core$Int64$GT $tmp3964;
    org$pandalanguage$pandac$IRNode* nextTest3980;
    panda$collections$Array* callChildren3984;
    panda$collections$Array* statements3997;
    panda$core$Range$LTpanda$core$Int64$GT $tmp4000;
    org$pandalanguage$pandac$IRNode* statement4015;
    panda$collections$Array* children4025;
    panda$core$Bit $tmp3952 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_w->kind, ((panda$core$Int64) { 124 }));
    PANDA_ASSERT($tmp3952.value);
    panda$core$Int64 $tmp3953 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Bit $tmp3954 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp3953, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3954.value);
    panda$core$Object* $tmp3955 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp3956 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp3955)->kind, ((panda$core$Int64) { 128 }));
    PANDA_ASSERT($tmp3956.value);
    panda$core$Object* $tmp3957 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Int64 $tmp3958 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$ASTNode*) $tmp3957)->children);
    panda$core$Bit $tmp3959 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp3958, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3959.value);
    panda$core$Object* $tmp3961 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp3962 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$ASTNode*) $tmp3961)->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3963 = org$pandalanguage$pandac$Compiler$compileWhenTest$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_value, ((org$pandalanguage$pandac$ASTNode*) $tmp3962));
    test3960 = $tmp3963;
    if (((panda$core$Bit) { test3960 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Object* $tmp3965 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Int64 $tmp3966 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$ASTNode*) $tmp3965)->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp3964, ((panda$core$Int64) { 1 }), $tmp3966, ((panda$core$Bit) { false }));
    int64_t $tmp3968 = $tmp3964.min.value;
    panda$core$Int64 i3967 = { $tmp3968 };
    int64_t $tmp3970 = $tmp3964.max.value;
    bool $tmp3971 = $tmp3964.inclusive.value;
    if ($tmp3971) goto $l3978; else goto $l3979;
    $l3978:;
    if ($tmp3968 <= $tmp3970) goto $l3972; else goto $l3974;
    $l3979:;
    if ($tmp3968 < $tmp3970) goto $l3972; else goto $l3974;
    $l3972:;
    {
        panda$core$Object* $tmp3981 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3982 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$ASTNode*) $tmp3981)->children, i3967);
        org$pandalanguage$pandac$IRNode* $tmp3983 = org$pandalanguage$pandac$Compiler$compileWhenTest$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_value, ((org$pandalanguage$pandac$ASTNode*) $tmp3982));
        nextTest3980 = $tmp3983;
        if (((panda$core$Bit) { nextTest3980 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp3985 = (panda$collections$Array*) malloc(40);
        $tmp3985->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp3985->refCount.value = 1;
        panda$collections$Array$init($tmp3985);
        callChildren3984 = $tmp3985;
        panda$collections$Array$add$panda$collections$Array$T(callChildren3984, ((panda$core$Object*) nextTest3980));
        org$pandalanguage$pandac$IRNode* $tmp3988 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, test3960, &$s3987, ((panda$collections$ListView*) callChildren3984));
        test3960 = $tmp3988;
        if (((panda$core$Bit) { test3960 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    $l3975:;
    int64_t $tmp3990 = $tmp3970 - i3967.value;
    if ($tmp3971) goto $l3991; else goto $l3992;
    $l3991:;
    if ($tmp3990 >= 1) goto $l3989; else goto $l3974;
    $l3992:;
    if ($tmp3990 > 1) goto $l3989; else goto $l3974;
    $l3989:;
    i3967.value += 1;
    goto $l3972;
    $l3974:;
    org$pandalanguage$pandac$SymbolTable* $tmp3995 = (org$pandalanguage$pandac$SymbolTable*) malloc(48);
    $tmp3995->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp3995->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp3995, self->symbolTable);
    self->symbolTable = $tmp3995;
    panda$collections$Array* $tmp3998 = (panda$collections$Array*) malloc(40);
    $tmp3998->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3998->refCount.value = 1;
    panda$collections$Array$init($tmp3998);
    statements3997 = $tmp3998;
    panda$core$Int64 $tmp4001 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp4000, ((panda$core$Int64) { 1 }), $tmp4001, ((panda$core$Bit) { false }));
    int64_t $tmp4003 = $tmp4000.min.value;
    panda$core$Int64 i4002 = { $tmp4003 };
    int64_t $tmp4005 = $tmp4000.max.value;
    bool $tmp4006 = $tmp4000.inclusive.value;
    if ($tmp4006) goto $l4013; else goto $l4014;
    $l4013:;
    if ($tmp4003 <= $tmp4005) goto $l4007; else goto $l4009;
    $l4014:;
    if ($tmp4003 < $tmp4005) goto $l4007; else goto $l4009;
    $l4007:;
    {
        panda$core$Object* $tmp4016 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, i4002);
        org$pandalanguage$pandac$IRNode* $tmp4017 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4016));
        statement4015 = $tmp4017;
        if (((panda$core$Bit) { statement4015 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(statements3997, ((panda$core$Object*) statement4015));
    }
    $l4010:;
    int64_t $tmp4019 = $tmp4005 - i4002.value;
    if ($tmp4006) goto $l4020; else goto $l4021;
    $l4020:;
    if ($tmp4019 >= 1) goto $l4018; else goto $l4009;
    $l4021:;
    if ($tmp4019 > 1) goto $l4018; else goto $l4009;
    $l4018:;
    i4002.value += 1;
    goto $l4007;
    $l4009:;
    panda$core$Object* $tmp4024 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->symbolTable->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp4024);
    panda$collections$Array* $tmp4026 = (panda$collections$Array*) malloc(40);
    $tmp4026->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4026->refCount.value = 1;
    panda$collections$Array$init($tmp4026);
    children4025 = $tmp4026;
    panda$collections$Array$add$panda$collections$Array$T(children4025, ((panda$core$Object*) test3960));
    org$pandalanguage$pandac$IRNode* $tmp4028 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4028->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4028->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4028, ((panda$core$Int64) { 1000 }), p_w->position, ((panda$collections$ListView*) statements3997));
    panda$collections$Array$add$panda$collections$Array$T(children4025, ((panda$core$Object*) $tmp4028));
    org$pandalanguage$pandac$IRNode* $tmp4030 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4030->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4030->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4030, ((panda$core$Int64) { 1012 }), p_w->position, ((panda$collections$ListView*) children4025));
    return $tmp4030;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileChainedIfMatch$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_m, org$pandalanguage$pandac$IRNode* p_value) {
    panda$collections$Array* children4032;
    org$pandalanguage$pandac$Variable* valueVar4035;
    panda$collections$Array* declChildren4045;
    panda$collections$Array* varChildren4050;
    panda$core$Range$LTpanda$core$Int64$GT $tmp4057;
    org$pandalanguage$pandac$ASTNode* c4072;
    org$pandalanguage$pandac$IRNode* w4074;
    panda$collections$Array* statements4076;
    panda$collections$Iterator* astStatement$Iter4079;
    org$pandalanguage$pandac$ASTNode* astStatement4091;
    org$pandalanguage$pandac$IRNode* stmt4096;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp4106;
    panda$collections$Array* newChildren4134;
    panda$collections$Array* $tmp4033 = (panda$collections$Array*) malloc(40);
    $tmp4033->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4033->refCount.value = 1;
    panda$collections$Array$init($tmp4033);
    children4032 = $tmp4033;
    org$pandalanguage$pandac$Variable* $tmp4036 = (org$pandalanguage$pandac$Variable*) malloc(88);
    $tmp4036->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
    $tmp4036->refCount.value = 1;
    panda$core$String* $tmp4039 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4038, ((panda$core$Object*) wrap_panda$core$Int64(p_m->position.line)));
    panda$core$String* $tmp4041 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4039, &$s4040);
    panda$core$String* $tmp4042 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp4041, ((panda$core$Object*) wrap_panda$core$Int64(p_m->position.column)));
    panda$core$String* $tmp4044 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4042, &$s4043);
    org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type($tmp4036, p_m->position, ((panda$core$Int64) { 10001 }), $tmp4044, p_value->type);
    valueVar4035 = $tmp4036;
    panda$collections$Array* $tmp4046 = (panda$collections$Array*) malloc(40);
    $tmp4046->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4046->refCount.value = 1;
    panda$collections$Array$init($tmp4046);
    declChildren4045 = $tmp4046;
    org$pandalanguage$pandac$IRNode* $tmp4048 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4048->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4048->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp4048, ((panda$core$Int64) { 1016 }), p_value->position, valueVar4035->type, valueVar4035);
    panda$collections$Array$add$panda$collections$Array$T(declChildren4045, ((panda$core$Object*) $tmp4048));
    panda$collections$Array$add$panda$collections$Array$T(declChildren4045, ((panda$core$Object*) p_value));
    panda$collections$Array* $tmp4051 = (panda$collections$Array*) malloc(40);
    $tmp4051->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4051->refCount.value = 1;
    panda$collections$Array$init($tmp4051);
    varChildren4050 = $tmp4051;
    org$pandalanguage$pandac$IRNode* $tmp4053 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4053->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4053->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4053, ((panda$core$Int64) { 1021 }), ((org$pandalanguage$pandac$Symbol*) valueVar4035)->position, ((panda$collections$ListView*) declChildren4045));
    panda$collections$Array$add$panda$collections$Array$T(varChildren4050, ((panda$core$Object*) $tmp4053));
    org$pandalanguage$pandac$IRNode* $tmp4055 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4055->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4055->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4055, ((panda$core$Int64) { 1018 }), ((org$pandalanguage$pandac$Symbol*) valueVar4035)->position, ((panda$collections$ListView*) varChildren4050));
    panda$collections$Array$add$panda$collections$Array$T(children4032, ((panda$core$Object*) $tmp4055));
    panda$core$Int64 $tmp4058 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp4057, ((panda$core$Int64) { 1 }), $tmp4058, ((panda$core$Bit) { false }));
    int64_t $tmp4060 = $tmp4057.min.value;
    panda$core$Int64 i4059 = { $tmp4060 };
    int64_t $tmp4062 = $tmp4057.max.value;
    bool $tmp4063 = $tmp4057.inclusive.value;
    if ($tmp4063) goto $l4070; else goto $l4071;
    $l4070:;
    if ($tmp4060 <= $tmp4062) goto $l4064; else goto $l4066;
    $l4071:;
    if ($tmp4060 < $tmp4062) goto $l4064; else goto $l4066;
    $l4064:;
    {
        panda$core$Object* $tmp4073 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, i4059);
        c4072 = ((org$pandalanguage$pandac$ASTNode*) $tmp4073);
        switch (c4072->kind.value) {
            case 124:
            {
                org$pandalanguage$pandac$IRNode* $tmp4075 = org$pandalanguage$pandac$Compiler$compileChainedIfWhen$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, valueVar4035, c4072);
                w4074 = $tmp4075;
                if (((panda$core$Bit) { w4074 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children4032, ((panda$core$Object*) w4074));
            }
            break;
            case 127:
            {
                panda$collections$Array* $tmp4077 = (panda$collections$Array*) malloc(40);
                $tmp4077->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp4077->refCount.value = 1;
                panda$collections$Array$init($tmp4077);
                statements4076 = $tmp4077;
                {
                    ITable* $tmp4080 = ((panda$collections$Iterable*) c4072->children)->$class->itable;
                    while ($tmp4080->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp4080 = $tmp4080->next;
                    }
                    $fn4082 $tmp4081 = $tmp4080->methods[0];
                    panda$collections$Iterator* $tmp4083 = $tmp4081(((panda$collections$Iterable*) c4072->children));
                    astStatement$Iter4079 = $tmp4083;
                    $l4084:;
                    ITable* $tmp4086 = astStatement$Iter4079->$class->itable;
                    while ($tmp4086->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp4086 = $tmp4086->next;
                    }
                    $fn4088 $tmp4087 = $tmp4086->methods[0];
                    panda$core$Bit $tmp4089 = $tmp4087(astStatement$Iter4079);
                    panda$core$Bit $tmp4090 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4089);
                    if (!$tmp4090.value) goto $l4085;
                    {
                        ITable* $tmp4092 = astStatement$Iter4079->$class->itable;
                        while ($tmp4092->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp4092 = $tmp4092->next;
                        }
                        $fn4094 $tmp4093 = $tmp4092->methods[1];
                        panda$core$Object* $tmp4095 = $tmp4093(astStatement$Iter4079);
                        astStatement4091 = ((org$pandalanguage$pandac$ASTNode*) $tmp4095);
                        org$pandalanguage$pandac$IRNode* $tmp4097 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, astStatement4091);
                        stmt4096 = $tmp4097;
                        if (((panda$core$Bit) { stmt4096 == NULL }).value) {
                        {
                            return NULL;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(statements4076, ((panda$core$Object*) stmt4096));
                    }
                    goto $l4084;
                    $l4085:;
                }
                org$pandalanguage$pandac$IRNode* $tmp4098 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp4098->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp4098->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4098, ((panda$core$Int64) { 1000 }), c4072->position, ((panda$collections$ListView*) statements4076));
                panda$collections$Array$add$panda$collections$Array$T(children4032, ((panda$core$Object*) $tmp4098));
            }
            break;
            default:
            {
                PANDA_ASSERT(((panda$core$Bit) { false }).value);
            }
        }
    }
    $l4067:;
    int64_t $tmp4101 = $tmp4062 - i4059.value;
    if ($tmp4063) goto $l4102; else goto $l4103;
    $l4102:;
    if ($tmp4101 >= 1) goto $l4100; else goto $l4066;
    $l4103:;
    if ($tmp4101 > 1) goto $l4100; else goto $l4066;
    $l4100:;
    i4059.value += 1;
    goto $l4064;
    $l4066:;
    panda$core$Int64 $tmp4107 = panda$collections$Array$get_count$R$panda$core$Int64(children4032);
    panda$core$Int64 $tmp4108 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp4107, ((panda$core$Int64) { 1 }));
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp4106, $tmp4108, ((panda$core$Int64) { 1 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { false }));
    int64_t $tmp4110 = $tmp4106.start.value;
    panda$core$Int64 i4109 = { $tmp4110 };
    int64_t $tmp4112 = $tmp4106.end.value;
    int64_t $tmp4113 = $tmp4106.step.value;
    bool $tmp4114 = $tmp4106.inclusive.value;
    bool $tmp4121 = $tmp4113 > 0;
    if ($tmp4121) goto $l4119; else goto $l4120;
    $l4119:;
    if ($tmp4114) goto $l4122; else goto $l4123;
    $l4122:;
    if ($tmp4110 <= $tmp4112) goto $l4115; else goto $l4117;
    $l4123:;
    if ($tmp4110 < $tmp4112) goto $l4115; else goto $l4117;
    $l4120:;
    if ($tmp4114) goto $l4124; else goto $l4125;
    $l4124:;
    if ($tmp4110 >= $tmp4112) goto $l4115; else goto $l4117;
    $l4125:;
    if ($tmp4110 > $tmp4112) goto $l4115; else goto $l4117;
    $l4115:;
    {
        panda$core$Int64 $tmp4127 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4109, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp4128 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children4032, $tmp4127);
        panda$core$Bit $tmp4129 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp4128)->kind, ((panda$core$Int64) { 1012 }));
        PANDA_ASSERT($tmp4129.value);
        panda$core$Int64 $tmp4130 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4109, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp4131 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children4032, $tmp4130);
        panda$core$Int64 $tmp4132 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp4131)->children);
        panda$core$Bit $tmp4133 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4132, ((panda$core$Int64) { 2 }));
        PANDA_ASSERT($tmp4133.value);
        panda$collections$Array* $tmp4135 = (panda$collections$Array*) malloc(40);
        $tmp4135->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp4135->refCount.value = 1;
        panda$core$Int64 $tmp4137 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4109, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp4138 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children4032, $tmp4137);
        panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp4135, ((panda$collections$ListView*) ((org$pandalanguage$pandac$IRNode*) $tmp4138)->children));
        newChildren4134 = $tmp4135;
        panda$core$Object* $tmp4139 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children4032, i4109);
        panda$collections$Array$add$panda$collections$Array$T(newChildren4134, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp4139)));
        panda$core$Int64 $tmp4140 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4109, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$IRNode* $tmp4141 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp4141->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp4141->refCount.value = 1;
        panda$core$Int64 $tmp4143 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4109, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp4144 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children4032, $tmp4143);
        panda$core$Int64 $tmp4145 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4109, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp4146 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children4032, $tmp4145);
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4141, ((org$pandalanguage$pandac$IRNode*) $tmp4144)->kind, ((org$pandalanguage$pandac$IRNode*) $tmp4146)->position, ((panda$collections$ListView*) newChildren4134));
        panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(children4032, $tmp4140, ((panda$core$Object*) $tmp4141));
        panda$core$Int64 $tmp4147 = panda$collections$Array$get_count$R$panda$core$Int64(children4032);
        panda$core$Int64 $tmp4148 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp4147, ((panda$core$Int64) { 1 }));
        panda$collections$Array$removeIndex$panda$core$Int64(children4032, $tmp4148);
    }
    $l4118:;
    if ($tmp4121) goto $l4150; else goto $l4151;
    $l4150:;
    int64_t $tmp4152 = $tmp4112 - i4109.value;
    if ($tmp4114) goto $l4153; else goto $l4154;
    $l4153:;
    if ($tmp4152 >= $tmp4113) goto $l4149; else goto $l4117;
    $l4154:;
    if ($tmp4152 > $tmp4113) goto $l4149; else goto $l4117;
    $l4151:;
    int64_t $tmp4156 = i4109.value - $tmp4112;
    if ($tmp4114) goto $l4157; else goto $l4158;
    $l4157:;
    if ($tmp4156 >= -$tmp4113) goto $l4149; else goto $l4117;
    $l4158:;
    if ($tmp4156 > -$tmp4113) goto $l4149; else goto $l4117;
    $l4149:;
    i4109.value += $tmp4113;
    goto $l4115;
    $l4117:;
    org$pandalanguage$pandac$IRNode* $tmp4160 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4160->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4160->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4160, ((panda$core$Int64) { 1000 }), p_m->position, ((panda$collections$ListView*) children4032));
    return $tmp4160;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileWhen$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type, org$pandalanguage$pandac$ASTNode* p_w) {
    panda$collections$Array* children4170;
    panda$collections$Iterator* expr$Iter4173;
    org$pandalanguage$pandac$ASTNode* expr4186;
    org$pandalanguage$pandac$IRNode* compiled4191;
    panda$collections$Array* statements4196;
    panda$core$Range$LTpanda$core$Int64$GT $tmp4199;
    org$pandalanguage$pandac$IRNode* statement4214;
    panda$core$Bit $tmp4162 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_w->kind, ((panda$core$Int64) { 124 }));
    PANDA_ASSERT($tmp4162.value);
    panda$core$Int64 $tmp4163 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Bit $tmp4164 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp4163, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4164.value);
    panda$core$Object* $tmp4165 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp4166 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp4165)->kind, ((panda$core$Int64) { 128 }));
    PANDA_ASSERT($tmp4166.value);
    panda$core$Object* $tmp4167 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Int64 $tmp4168 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$ASTNode*) $tmp4167)->children);
    panda$core$Bit $tmp4169 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp4168, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4169.value);
    panda$collections$Array* $tmp4171 = (panda$collections$Array*) malloc(40);
    $tmp4171->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4171->refCount.value = 1;
    panda$collections$Array$init($tmp4171);
    children4170 = $tmp4171;
    {
        panda$core$Object* $tmp4174 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
        ITable* $tmp4175 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp4174)->children)->$class->itable;
        while ($tmp4175->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4175 = $tmp4175->next;
        }
        $fn4177 $tmp4176 = $tmp4175->methods[0];
        panda$collections$Iterator* $tmp4178 = $tmp4176(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp4174)->children));
        expr$Iter4173 = $tmp4178;
        $l4179:;
        ITable* $tmp4181 = expr$Iter4173->$class->itable;
        while ($tmp4181->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4181 = $tmp4181->next;
        }
        $fn4183 $tmp4182 = $tmp4181->methods[0];
        panda$core$Bit $tmp4184 = $tmp4182(expr$Iter4173);
        panda$core$Bit $tmp4185 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4184);
        if (!$tmp4185.value) goto $l4180;
        {
            ITable* $tmp4187 = expr$Iter4173->$class->itable;
            while ($tmp4187->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4187 = $tmp4187->next;
            }
            $fn4189 $tmp4188 = $tmp4187->methods[1];
            panda$core$Object* $tmp4190 = $tmp4188(expr$Iter4173);
            expr4186 = ((org$pandalanguage$pandac$ASTNode*) $tmp4190);
            org$pandalanguage$pandac$IRNode* $tmp4192 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, expr4186);
            org$pandalanguage$pandac$IRNode* $tmp4193 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp4192, p_type);
            compiled4191 = $tmp4193;
            if (((panda$core$Bit) { compiled4191 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children4170, ((panda$core$Object*) compiled4191));
        }
        goto $l4179;
        $l4180:;
    }
    org$pandalanguage$pandac$SymbolTable* $tmp4194 = (org$pandalanguage$pandac$SymbolTable*) malloc(48);
    $tmp4194->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp4194->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp4194, self->symbolTable);
    self->symbolTable = $tmp4194;
    panda$collections$Array* $tmp4197 = (panda$collections$Array*) malloc(40);
    $tmp4197->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4197->refCount.value = 1;
    panda$collections$Array$init($tmp4197);
    statements4196 = $tmp4197;
    panda$core$Int64 $tmp4200 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp4199, ((panda$core$Int64) { 1 }), $tmp4200, ((panda$core$Bit) { false }));
    int64_t $tmp4202 = $tmp4199.min.value;
    panda$core$Int64 i4201 = { $tmp4202 };
    int64_t $tmp4204 = $tmp4199.max.value;
    bool $tmp4205 = $tmp4199.inclusive.value;
    if ($tmp4205) goto $l4212; else goto $l4213;
    $l4212:;
    if ($tmp4202 <= $tmp4204) goto $l4206; else goto $l4208;
    $l4213:;
    if ($tmp4202 < $tmp4204) goto $l4206; else goto $l4208;
    $l4206:;
    {
        panda$core$Object* $tmp4215 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, i4201);
        org$pandalanguage$pandac$IRNode* $tmp4216 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4215));
        statement4214 = $tmp4216;
        if (((panda$core$Bit) { statement4214 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(statements4196, ((panda$core$Object*) statement4214));
    }
    $l4209:;
    int64_t $tmp4218 = $tmp4204 - i4201.value;
    if ($tmp4205) goto $l4219; else goto $l4220;
    $l4219:;
    if ($tmp4218 >= 1) goto $l4217; else goto $l4208;
    $l4220:;
    if ($tmp4218 > 1) goto $l4217; else goto $l4208;
    $l4217:;
    i4201.value += 1;
    goto $l4206;
    $l4208:;
    panda$core$Object* $tmp4223 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->symbolTable->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp4223);
    org$pandalanguage$pandac$IRNode* $tmp4224 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4224->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4224->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4224, ((panda$core$Int64) { 1000 }), p_w->position, ((panda$collections$ListView*) statements4196));
    panda$collections$Array$add$panda$collections$Array$T(children4170, ((panda$core$Object*) $tmp4224));
    org$pandalanguage$pandac$IRNode* $tmp4226 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4226->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4226->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4226, ((panda$core$Int64) { 1042 }), p_w->position, ((panda$collections$ListView*) children4170));
    return $tmp4226;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileOtherwise$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_o) {
    panda$collections$Array* children4229;
    panda$collections$Array* statements4234;
    panda$collections$Iterator* s$Iter4237;
    org$pandalanguage$pandac$ASTNode* s4249;
    org$pandalanguage$pandac$IRNode* statement4254;
    panda$core$Bit $tmp4228 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_o->kind, ((panda$core$Int64) { 127 }));
    PANDA_ASSERT($tmp4228.value);
    panda$collections$Array* $tmp4230 = (panda$collections$Array*) malloc(40);
    $tmp4230->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4230->refCount.value = 1;
    panda$collections$Array$init($tmp4230);
    children4229 = $tmp4230;
    org$pandalanguage$pandac$SymbolTable* $tmp4232 = (org$pandalanguage$pandac$SymbolTable*) malloc(48);
    $tmp4232->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp4232->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp4232, self->symbolTable);
    self->symbolTable = $tmp4232;
    panda$collections$Array* $tmp4235 = (panda$collections$Array*) malloc(40);
    $tmp4235->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4235->refCount.value = 1;
    panda$collections$Array$init($tmp4235);
    statements4234 = $tmp4235;
    {
        ITable* $tmp4238 = ((panda$collections$Iterable*) p_o->children)->$class->itable;
        while ($tmp4238->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4238 = $tmp4238->next;
        }
        $fn4240 $tmp4239 = $tmp4238->methods[0];
        panda$collections$Iterator* $tmp4241 = $tmp4239(((panda$collections$Iterable*) p_o->children));
        s$Iter4237 = $tmp4241;
        $l4242:;
        ITable* $tmp4244 = s$Iter4237->$class->itable;
        while ($tmp4244->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4244 = $tmp4244->next;
        }
        $fn4246 $tmp4245 = $tmp4244->methods[0];
        panda$core$Bit $tmp4247 = $tmp4245(s$Iter4237);
        panda$core$Bit $tmp4248 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4247);
        if (!$tmp4248.value) goto $l4243;
        {
            ITable* $tmp4250 = s$Iter4237->$class->itable;
            while ($tmp4250->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4250 = $tmp4250->next;
            }
            $fn4252 $tmp4251 = $tmp4250->methods[1];
            panda$core$Object* $tmp4253 = $tmp4251(s$Iter4237);
            s4249 = ((org$pandalanguage$pandac$ASTNode*) $tmp4253);
            org$pandalanguage$pandac$IRNode* $tmp4255 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, s4249);
            statement4254 = $tmp4255;
            if (((panda$core$Bit) { statement4254 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(statements4234, ((panda$core$Object*) statement4254));
        }
        goto $l4242;
        $l4243:;
    }
    panda$core$Object* $tmp4256 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->symbolTable->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp4256);
    org$pandalanguage$pandac$IRNode* $tmp4257 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4257->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4257->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4257, ((panda$core$Int64) { 1000 }), p_o->position, ((panda$collections$ListView*) statements4234));
    panda$collections$Array$add$panda$collections$Array$T(children4229, ((panda$core$Object*) $tmp4257));
    org$pandalanguage$pandac$IRNode* $tmp4259 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4259->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4259->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4259, ((panda$core$Int64) { 1043 }), p_o->position, ((panda$collections$ListView*) children4229));
    return $tmp4259;
}
panda$core$Bit org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    org$pandalanguage$pandac$FieldDecl* f4268;
    org$pandalanguage$pandac$Variable* v4277;
    switch (p_expr->kind.value) {
        case 1004:
        {
            return ((panda$core$Bit) { true });
        }
        break;
        case 1010:
        {
            panda$core$Bit $tmp4262 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_expr->type);
            bool $tmp4261 = $tmp4262.value;
            if (!$tmp4261) goto $l4263;
            panda$core$Object* $tmp4264 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp4265 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$IRNode*) $tmp4264)->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp4266 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp4265));
            $tmp4261 = $tmp4266.value;
            $l4263:;
            panda$core$Bit $tmp4267 = { $tmp4261 };
            return $tmp4267;
        }
        break;
        case 1026:
        {
            f4268 = ((org$pandalanguage$pandac$FieldDecl*) p_expr->payload);
            PANDA_ASSERT(f4268->resolved.value);
            panda$core$Bit $tmp4271 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(f4268->fieldKind, ((panda$core$Int64) { 10002 }));
            bool $tmp4270 = $tmp4271.value;
            if (!$tmp4270) goto $l4272;
            $tmp4270 = ((panda$core$Bit) { f4268->value != NULL }).value;
            $l4272:;
            panda$core$Bit $tmp4273 = { $tmp4270 };
            bool $tmp4269 = $tmp4273.value;
            if (!$tmp4269) goto $l4274;
            panda$core$Bit $tmp4275 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, f4268->value);
            $tmp4269 = $tmp4275.value;
            $l4274:;
            panda$core$Bit $tmp4276 = { $tmp4269 };
            return $tmp4276;
        }
        break;
        case 1016:
        {
            v4277 = ((org$pandalanguage$pandac$Variable*) p_expr->payload);
            panda$core$Bit $tmp4279 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(v4277->varKind, ((panda$core$Int64) { 10001 }));
            bool $tmp4278 = $tmp4279.value;
            if ($tmp4278) goto $l4280;
            panda$core$Bit $tmp4283 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(v4277->varKind, ((panda$core$Int64) { 10002 }));
            bool $tmp4282 = $tmp4283.value;
            if (!$tmp4282) goto $l4284;
            $tmp4282 = ((panda$core$Bit) { v4277->initialValue != NULL }).value;
            $l4284:;
            panda$core$Bit $tmp4285 = { $tmp4282 };
            bool $tmp4281 = $tmp4285.value;
            if (!$tmp4281) goto $l4286;
            panda$core$Bit $tmp4287 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, v4277->initialValue);
            $tmp4281 = $tmp4287.value;
            $l4286:;
            panda$core$Bit $tmp4288 = { $tmp4281 };
            $tmp4278 = $tmp4288.value;
            $l4280:;
            panda$core$Bit $tmp4289 = { $tmp4278 };
            return $tmp4289;
        }
        break;
        default:
        {
            return ((panda$core$Bit) { false });
        }
    }
}
panda$core$UInt64 org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    org$pandalanguage$pandac$FieldDecl* f4294;
    org$pandalanguage$pandac$Variable* v4296;
    panda$core$Bit $tmp4290 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, p_expr);
    PANDA_ASSERT($tmp4290.value);
    switch (p_expr->kind.value) {
        case 1004:
        {
            return ((panda$core$UInt64$wrapper*) p_expr->payload)->value;
        }
        break;
        case 1010:
        {
            panda$core$Object* $tmp4291 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp4292 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$IRNode*) $tmp4291)->children, ((panda$core$Int64) { 0 }));
            panda$core$UInt64 $tmp4293 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self, ((org$pandalanguage$pandac$IRNode*) $tmp4292));
            return $tmp4293;
        }
        break;
        case 1026:
        {
            f4294 = ((org$pandalanguage$pandac$FieldDecl*) p_expr->payload);
            panda$core$UInt64 $tmp4295 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self, f4294->value);
            return $tmp4295;
        }
        break;
        case 1016:
        {
            v4296 = ((org$pandalanguage$pandac$Variable*) p_expr->payload);
            panda$core$UInt64 $tmp4297 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self, v4296->initialValue);
            return $tmp4297;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileMatch$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_m) {
    org$pandalanguage$pandac$IRNode* value4301;
    panda$collections$Array* children4308;
    panda$collections$Iterator* rawWhen$Iter4311;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp4312;
    org$pandalanguage$pandac$ASTNode* rawWhen4325;
    org$pandalanguage$pandac$IRNode* o4331;
    org$pandalanguage$pandac$IRNode* w4333;
    panda$core$Bit $tmp4298 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->kind, ((panda$core$Int64) { 125 }));
    PANDA_ASSERT($tmp4298.value);
    panda$core$Int64 $tmp4299 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
    panda$core$Bit $tmp4300 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp4299, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4300.value);
    panda$core$Object* $tmp4302 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp4303 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4302));
    org$pandalanguage$pandac$IRNode* $tmp4304 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp4303);
    value4301 = $tmp4304;
    if (((panda$core$Bit) { value4301 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp4305 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(value4301->type);
    panda$core$Bit $tmp4306 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4305);
    if ($tmp4306.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp4307 = org$pandalanguage$pandac$Compiler$compileChainedIfMatch$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_m, value4301);
        return $tmp4307;
    }
    }
    panda$collections$Array* $tmp4309 = (panda$collections$Array*) malloc(40);
    $tmp4309->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4309->refCount.value = 1;
    panda$collections$Array$init($tmp4309);
    children4308 = $tmp4309;
    panda$collections$Array$add$panda$collections$Array$T(children4308, ((panda$core$Object*) value4301));
    {
        panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp4312, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
        panda$collections$ImmutableArray* $tmp4313 = panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(p_m->children, $tmp4312);
        ITable* $tmp4314 = ((panda$collections$Iterable*) $tmp4313)->$class->itable;
        while ($tmp4314->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4314 = $tmp4314->next;
        }
        $fn4316 $tmp4315 = $tmp4314->methods[0];
        panda$collections$Iterator* $tmp4317 = $tmp4315(((panda$collections$Iterable*) $tmp4313));
        rawWhen$Iter4311 = $tmp4317;
        $l4318:;
        ITable* $tmp4320 = rawWhen$Iter4311->$class->itable;
        while ($tmp4320->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4320 = $tmp4320->next;
        }
        $fn4322 $tmp4321 = $tmp4320->methods[0];
        panda$core$Bit $tmp4323 = $tmp4321(rawWhen$Iter4311);
        panda$core$Bit $tmp4324 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4323);
        if (!$tmp4324.value) goto $l4319;
        {
            ITable* $tmp4326 = rawWhen$Iter4311->$class->itable;
            while ($tmp4326->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4326 = $tmp4326->next;
            }
            $fn4328 $tmp4327 = $tmp4326->methods[1];
            panda$core$Object* $tmp4329 = $tmp4327(rawWhen$Iter4311);
            rawWhen4325 = ((org$pandalanguage$pandac$ASTNode*) $tmp4329);
            panda$core$Bit $tmp4330 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(rawWhen4325->kind, ((panda$core$Int64) { 127 }));
            if ($tmp4330.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp4332 = org$pandalanguage$pandac$Compiler$compileOtherwise$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, rawWhen4325);
                o4331 = $tmp4332;
                if (((panda$core$Bit) { o4331 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children4308, ((panda$core$Object*) o4331));
                goto $l4318;
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp4334 = org$pandalanguage$pandac$Compiler$compileWhen$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, value4301->type, rawWhen4325);
            w4333 = $tmp4334;
            if (((panda$core$Bit) { w4333 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$Object* $tmp4335 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(w4333->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp4336 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp4335));
            panda$core$Bit $tmp4337 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4336);
            if ($tmp4337.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp4338 = org$pandalanguage$pandac$Compiler$compileChainedIfMatch$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_m, value4301);
                return $tmp4338;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children4308, ((panda$core$Object*) w4333));
        }
        goto $l4318;
        $l4319:;
    }
    org$pandalanguage$pandac$IRNode* $tmp4339 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4339->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4339->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4339, ((panda$core$Int64) { 1042 }), p_m->position, ((panda$collections$ListView*) children4308));
    return $tmp4339;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$IRNode* result4354;
    switch (p_s->kind.value) {
        case 123:
        {
            org$pandalanguage$pandac$IRNode* $tmp4341 = org$pandalanguage$pandac$Compiler$compileAssert$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4341;
        }
        break;
        case 103:
        {
            org$pandalanguage$pandac$IRNode* $tmp4342 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            org$pandalanguage$pandac$IRNode* $tmp4343 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp4342);
            return $tmp4343;
        }
        break;
        case 126:
        {
            org$pandalanguage$pandac$IRNode* $tmp4344 = org$pandalanguage$pandac$Compiler$compileBlock$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4344;
        }
        break;
        case 118:
        {
            org$pandalanguage$pandac$IRNode* $tmp4345 = org$pandalanguage$pandac$Compiler$compileIf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4345;
        }
        break;
        case 119:
        {
            org$pandalanguage$pandac$IRNode* $tmp4346 = org$pandalanguage$pandac$Compiler$compileFor$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4346;
        }
        break;
        case 121:
        {
            org$pandalanguage$pandac$IRNode* $tmp4347 = org$pandalanguage$pandac$Compiler$compileWhile$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4347;
        }
        break;
        case 120:
        {
            org$pandalanguage$pandac$IRNode* $tmp4348 = org$pandalanguage$pandac$Compiler$compileDo$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4348;
        }
        break;
        case 122:
        {
            org$pandalanguage$pandac$IRNode* $tmp4349 = org$pandalanguage$pandac$Compiler$compileLoop$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4349;
        }
        break;
        case 125:
        {
            org$pandalanguage$pandac$IRNode* $tmp4350 = org$pandalanguage$pandac$Compiler$compileMatch$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4350;
        }
        break;
        case 134:
        {
            org$pandalanguage$pandac$IRNode* $tmp4351 = org$pandalanguage$pandac$Compiler$compileBreak$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4351;
        }
        break;
        case 135:
        {
            org$pandalanguage$pandac$IRNode* $tmp4352 = org$pandalanguage$pandac$Compiler$compileContinue$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4352;
        }
        break;
        case 136:
        {
            org$pandalanguage$pandac$IRNode* $tmp4353 = org$pandalanguage$pandac$Compiler$compileReturn$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4353;
        }
        break;
        case 107:
        {
            org$pandalanguage$pandac$IRNode* $tmp4355 = org$pandalanguage$pandac$Compiler$compileCall$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            org$pandalanguage$pandac$IRNode* $tmp4356 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp4355);
            result4354 = $tmp4356;
            if (((panda$core$Bit) { result4354 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp4357 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self, result4354);
                result4354 = $tmp4357;
            }
            }
            return result4354;
        }
        break;
        case 130:
        case 131:
        case 132:
        case 133:
        {
            org$pandalanguage$pandac$IRNode* $tmp4358 = org$pandalanguage$pandac$Compiler$compileVar$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4358;
        }
        break;
    }
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBody$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$SymbolTable* old4359;
    org$pandalanguage$pandac$SymbolTable* symbols4361;
    panda$collections$Iterator* p$Iter4364;
    org$pandalanguage$pandac$MethodDecl$Parameter* p4376;
    panda$collections$Array* fieldInitializers4383;
    panda$collections$Iterator* f$Iter4387;
    org$pandalanguage$pandac$FieldDecl* f4400;
    panda$collections$Array* children4410;
    org$pandalanguage$pandac$IRNode* fieldRef4417;
    org$pandalanguage$pandac$IRNode* compiled4422;
    panda$collections$Array* children4424;
    if (((panda$core$Bit) { p_m->compiledBody != NULL }).value) {
    {
        return p_m->compiledBody;
    }
    }
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_m->owner));
    old4359 = self->symbolTable;
    org$pandalanguage$pandac$SymbolTable* $tmp4360 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, p_m->owner);
    self->symbolTable = $tmp4360;
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentMethod, ((panda$core$Object*) p_m));
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
    PANDA_ASSERT(((panda$core$Bit) { p_m->body != NULL }).value);
    org$pandalanguage$pandac$SymbolTable* $tmp4362 = (org$pandalanguage$pandac$SymbolTable*) malloc(48);
    $tmp4362->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp4362->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp4362, self->symbolTable);
    symbols4361 = $tmp4362;
    {
        ITable* $tmp4365 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp4365->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4365 = $tmp4365->next;
        }
        $fn4367 $tmp4366 = $tmp4365->methods[0];
        panda$collections$Iterator* $tmp4368 = $tmp4366(((panda$collections$Iterable*) p_m->parameters));
        p$Iter4364 = $tmp4368;
        $l4369:;
        ITable* $tmp4371 = p$Iter4364->$class->itable;
        while ($tmp4371->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4371 = $tmp4371->next;
        }
        $fn4373 $tmp4372 = $tmp4371->methods[0];
        panda$core$Bit $tmp4374 = $tmp4372(p$Iter4364);
        panda$core$Bit $tmp4375 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4374);
        if (!$tmp4375.value) goto $l4370;
        {
            ITable* $tmp4377 = p$Iter4364->$class->itable;
            while ($tmp4377->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4377 = $tmp4377->next;
            }
            $fn4379 $tmp4378 = $tmp4377->methods[1];
            panda$core$Object* $tmp4380 = $tmp4378(p$Iter4364);
            p4376 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp4380);
            org$pandalanguage$pandac$Variable* $tmp4381 = (org$pandalanguage$pandac$Variable*) malloc(88);
            $tmp4381->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
            $tmp4381->refCount.value = 1;
            org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Int64($tmp4381, ((org$pandalanguage$pandac$Symbol*) p_m)->position, ((panda$core$Int64) { 10001 }), p4376->name, p4376->type, ((panda$core$Int64) { 1820 }));
            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(symbols4361, ((org$pandalanguage$pandac$Symbol*) $tmp4381));
        }
        goto $l4369;
        $l4370:;
    }
    self->symbolTable = symbols4361;
    fieldInitializers4383 = NULL;
    panda$core$Bit $tmp4384 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 59 }));
    if ($tmp4384.value) {
    {
        panda$collections$Array* $tmp4385 = (panda$collections$Array*) malloc(40);
        $tmp4385->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp4385->refCount.value = 1;
        panda$collections$Array$init($tmp4385);
        fieldInitializers4383 = $tmp4385;
        {
            panda$core$Object* $tmp4388 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
            ITable* $tmp4389 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ClassDecl*) $tmp4388)->fields)->$class->itable;
            while ($tmp4389->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp4389 = $tmp4389->next;
            }
            $fn4391 $tmp4390 = $tmp4389->methods[0];
            panda$collections$Iterator* $tmp4392 = $tmp4390(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ClassDecl*) $tmp4388)->fields));
            f$Iter4387 = $tmp4392;
            $l4393:;
            ITable* $tmp4395 = f$Iter4387->$class->itable;
            while ($tmp4395->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4395 = $tmp4395->next;
            }
            $fn4397 $tmp4396 = $tmp4395->methods[0];
            panda$core$Bit $tmp4398 = $tmp4396(f$Iter4387);
            panda$core$Bit $tmp4399 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4398);
            if (!$tmp4399.value) goto $l4394;
            {
                ITable* $tmp4401 = f$Iter4387->$class->itable;
                while ($tmp4401->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp4401 = $tmp4401->next;
                }
                $fn4403 $tmp4402 = $tmp4401->methods[1];
                panda$core$Object* $tmp4404 = $tmp4402(f$Iter4387);
                f4400 = ((org$pandalanguage$pandac$FieldDecl*) $tmp4404);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self, f4400);
                panda$core$Bit $tmp4406 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(f4400->annotations);
                panda$core$Bit $tmp4407 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4406);
                bool $tmp4405 = $tmp4407.value;
                if (!$tmp4405) goto $l4408;
                $tmp4405 = ((panda$core$Bit) { f4400->value != NULL }).value;
                $l4408:;
                panda$core$Bit $tmp4409 = { $tmp4405 };
                if ($tmp4409.value) {
                {
                    panda$collections$Array* $tmp4411 = (panda$collections$Array*) malloc(40);
                    $tmp4411->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp4411->refCount.value = 1;
                    panda$collections$Array$init($tmp4411);
                    children4410 = $tmp4411;
                    org$pandalanguage$pandac$IRNode* $tmp4413 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp4413->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp4413->refCount.value = 1;
                    panda$core$Object* $tmp4415 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
                    org$pandalanguage$pandac$Type* $tmp4416 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp4415));
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp4413, ((panda$core$Int64) { 1025 }), ((org$pandalanguage$pandac$Symbol*) p_m)->position, $tmp4416);
                    panda$collections$Array$add$panda$collections$Array$T(children4410, ((panda$core$Object*) $tmp4413));
                    org$pandalanguage$pandac$IRNode* $tmp4418 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp4418->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp4418->refCount.value = 1;
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp4418, ((panda$core$Int64) { 1026 }), ((org$pandalanguage$pandac$Symbol*) p_m)->position, f4400->type, ((panda$core$Object*) f4400), ((panda$collections$ListView*) children4410));
                    fieldRef4417 = $tmp4418;
                    panda$collections$Array$clear(children4410);
                    panda$collections$Array$add$panda$collections$Array$T(children4410, ((panda$core$Object*) fieldRef4417));
                    panda$collections$Array$add$panda$collections$Array$T(children4410, ((panda$core$Object*) f4400->value));
                    org$pandalanguage$pandac$IRNode* $tmp4420 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp4420->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp4420->refCount.value = 1;
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4420, ((panda$core$Int64) { 1023 }), ((org$pandalanguage$pandac$Symbol*) f4400)->position, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 73 }))), ((panda$collections$ListView*) children4410));
                    panda$collections$Array$add$panda$collections$Array$T(fieldInitializers4383, ((panda$core$Object*) $tmp4420));
                }
                }
            }
            goto $l4393;
            $l4394:;
        }
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp4423 = org$pandalanguage$pandac$Compiler$compileBlock$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_m->body);
    compiled4422 = $tmp4423;
    if (((panda$core$Bit) { compiled4422 != NULL }).value) {
    {
        if (((panda$core$Bit) { fieldInitializers4383 != NULL }).value) {
        {
            panda$collections$Array* $tmp4425 = (panda$collections$Array*) malloc(40);
            $tmp4425->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp4425->refCount.value = 1;
            panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp4425, ((panda$collections$ListView*) fieldInitializers4383));
            children4424 = $tmp4425;
            panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(children4424, ((panda$collections$CollectionView*) compiled4422->children));
            org$pandalanguage$pandac$IRNode* $tmp4427 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp4427->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp4427->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4427, ((panda$core$Int64) { 1000 }), p_m->body->position, ((panda$collections$ListView*) children4424));
            compiled4422 = $tmp4427;
        }
        }
    }
    }
    PANDA_ASSERT(((panda$core$Bit) { ((panda$core$Object*) self->symbolTable) == ((panda$core$Object*) symbols4361) }).value);
    self->symbolTable = old4359;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentMethod);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    panda$core$Bit $tmp4429 = org$pandalanguage$pandac$Annotations$isInline$R$panda$core$Bit(p_m->annotations);
    if ($tmp4429.value) {
    {
        p_m->compiledBody = compiled4422;
    }
    }
    return compiled4422;
}
void org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$IRNode* compiled4430;
    if (((panda$core$Bit) { p_m->body != NULL }).value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp4431 = org$pandalanguage$pandac$Compiler$compileBody$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$IRNode$Q(self, p_m);
        compiled4430 = $tmp4431;
        if (((panda$core$Bit) { compiled4430 != NULL }).value) {
        {
            ITable* $tmp4432 = self->codeGenerator->$class->itable;
            while ($tmp4432->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
                $tmp4432 = $tmp4432->next;
            }
            $fn4434 $tmp4433 = $tmp4432->methods[3];
            $tmp4433(self->codeGenerator, p_m, compiled4430);
        }
        }
    }
    }
    else {
    {
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
        ITable* $tmp4435 = self->codeGenerator->$class->itable;
        while ($tmp4435->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
            $tmp4435 = $tmp4435->next;
        }
        $fn4437 $tmp4436 = $tmp4435->methods[2];
        $tmp4436(self->codeGenerator, p_m);
    }
    }
}
void org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Iterator* inner$Iter4438;
    org$pandalanguage$pandac$ClassDecl* inner4450;
    p_cl->external = ((panda$core$Bit) { false });
    {
        ITable* $tmp4439 = ((panda$collections$Iterable*) p_cl->classes)->$class->itable;
        while ($tmp4439->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4439 = $tmp4439->next;
        }
        $fn4441 $tmp4440 = $tmp4439->methods[0];
        panda$collections$Iterator* $tmp4442 = $tmp4440(((panda$collections$Iterable*) p_cl->classes));
        inner$Iter4438 = $tmp4442;
        $l4443:;
        ITable* $tmp4445 = inner$Iter4438->$class->itable;
        while ($tmp4445->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4445 = $tmp4445->next;
        }
        $fn4447 $tmp4446 = $tmp4445->methods[0];
        panda$core$Bit $tmp4448 = $tmp4446(inner$Iter4438);
        panda$core$Bit $tmp4449 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4448);
        if (!$tmp4449.value) goto $l4444;
        {
            ITable* $tmp4451 = inner$Iter4438->$class->itable;
            while ($tmp4451->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4451 = $tmp4451->next;
            }
            $fn4453 $tmp4452 = $tmp4451->methods[1];
            panda$core$Object* $tmp4454 = $tmp4452(inner$Iter4438);
            inner4450 = ((org$pandalanguage$pandac$ClassDecl*) $tmp4454);
            org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl(self, inner4450);
        }
        goto $l4443;
        $l4444:;
    }
}
void org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$SymbolTable* old4462;
    panda$collections$Iterator* m$Iter4467;
    org$pandalanguage$pandac$MethodDecl* m4479;
    org$pandalanguage$pandac$ClassDecl* next4489;
    PANDA_ASSERT(((panda$core$Bit) { self->compiling == NULL }).value);
    self->compiling = p_cl;
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_cl));
    org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl(self, p_cl);
    panda$core$Bit $tmp4455 = org$pandalanguage$pandac$Annotations$isSpecialize$R$panda$core$Bit(p_cl->annotations);
    if ($tmp4455.value) {
    {
        ITable* $tmp4456 = self->codeGenerator->$class->itable;
        while ($tmp4456->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
            $tmp4456 = $tmp4456->next;
        }
        $fn4458 $tmp4457 = $tmp4456->methods[1];
        $tmp4457(self->codeGenerator, p_cl);
        ITable* $tmp4459 = self->codeGenerator->$class->itable;
        while ($tmp4459->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
            $tmp4459 = $tmp4459->next;
        }
        $fn4461 $tmp4460 = $tmp4459->methods[4];
        $tmp4460(self->codeGenerator, p_cl);
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
        return;
    }
    }
    old4462 = self->symbolTable;
    org$pandalanguage$pandac$SymbolTable* $tmp4463 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, p_cl);
    self->symbolTable = $tmp4463;
    ITable* $tmp4464 = self->codeGenerator->$class->itable;
    while ($tmp4464->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
        $tmp4464 = $tmp4464->next;
    }
    $fn4466 $tmp4465 = $tmp4464->methods[1];
    $tmp4465(self->codeGenerator, p_cl);
    {
        ITable* $tmp4468 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
        while ($tmp4468->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4468 = $tmp4468->next;
        }
        $fn4470 $tmp4469 = $tmp4468->methods[0];
        panda$collections$Iterator* $tmp4471 = $tmp4469(((panda$collections$Iterable*) p_cl->methods));
        m$Iter4467 = $tmp4471;
        $l4472:;
        ITable* $tmp4474 = m$Iter4467->$class->itable;
        while ($tmp4474->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4474 = $tmp4474->next;
        }
        $fn4476 $tmp4475 = $tmp4474->methods[0];
        panda$core$Bit $tmp4477 = $tmp4475(m$Iter4467);
        panda$core$Bit $tmp4478 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4477);
        if (!$tmp4478.value) goto $l4473;
        {
            ITable* $tmp4480 = m$Iter4467->$class->itable;
            while ($tmp4480->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4480 = $tmp4480->next;
            }
            $fn4482 $tmp4481 = $tmp4480->methods[1];
            panda$core$Object* $tmp4483 = $tmp4481(m$Iter4467);
            m4479 = ((org$pandalanguage$pandac$MethodDecl*) $tmp4483);
            org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$MethodDecl(self, m4479);
        }
        goto $l4472;
        $l4473:;
    }
    ITable* $tmp4484 = self->codeGenerator->$class->itable;
    while ($tmp4484->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
        $tmp4484 = $tmp4484->next;
    }
    $fn4486 $tmp4485 = $tmp4484->methods[4];
    $tmp4485(self->codeGenerator, p_cl);
    self->symbolTable = old4462;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    self->compiling = NULL;
    panda$core$Int64 $tmp4487 = panda$collections$Array$get_count$R$panda$core$Int64(self->compilationQueue);
    panda$core$Bit $tmp4488 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp4487, ((panda$core$Int64) { 0 }));
    if ($tmp4488.value) {
    {
        panda$core$Object* $tmp4490 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->compilationQueue, ((panda$core$Int64) { 0 }));
        next4489 = ((org$pandalanguage$pandac$ClassDecl*) $tmp4490);
        panda$collections$Array$removeIndex$panda$core$Int64(self->compilationQueue, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$ClassDecl(self, next4489);
    }
    }
    panda$core$Int64 $tmp4491 = panda$collections$Array$get_count$R$panda$core$Int64(self->compilationQueue);
    panda$core$Bit $tmp4492 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4491, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp4492.value);
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Compiler* self, panda$io$File* p_file) {
    panda$collections$ListView* result4493;
    org$pandalanguage$pandac$ASTNode* parsed4497;
    panda$collections$Iterator* cl$Iter4501;
    org$pandalanguage$pandac$ClassDecl* cl4513;
    panda$core$Object* $tmp4494 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->scans, ((panda$collections$Key*) p_file));
    result4493 = ((panda$collections$ListView*) $tmp4494);
    if (((panda$core$Bit) { result4493 == NULL }).value) {
    {
        panda$core$String* $tmp4495 = panda$io$File$readFully$R$panda$core$String(p_file);
        (($fn4496) self->parser->$class->vtable[2])(self->parser, p_file, $tmp4495);
        org$pandalanguage$pandac$ASTNode* $tmp4499 = (($fn4498) self->parser->$class->vtable[67])(self->parser);
        parsed4497 = $tmp4499;
        if (((panda$core$Bit) { parsed4497 != NULL }).value) {
        {
            panda$collections$ListView* $tmp4500 = org$pandalanguage$pandac$Scanner$scan$panda$io$File$org$pandalanguage$pandac$ASTNode$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(self->scanner, p_file, parsed4497);
            result4493 = $tmp4500;
            {
                ITable* $tmp4502 = ((panda$collections$Iterable*) result4493)->$class->itable;
                while ($tmp4502->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp4502 = $tmp4502->next;
                }
                $fn4504 $tmp4503 = $tmp4502->methods[0];
                panda$collections$Iterator* $tmp4505 = $tmp4503(((panda$collections$Iterable*) result4493));
                cl$Iter4501 = $tmp4505;
                $l4506:;
                ITable* $tmp4508 = cl$Iter4501->$class->itable;
                while ($tmp4508->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp4508 = $tmp4508->next;
                }
                $fn4510 $tmp4509 = $tmp4508->methods[0];
                panda$core$Bit $tmp4511 = $tmp4509(cl$Iter4501);
                panda$core$Bit $tmp4512 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4511);
                if (!$tmp4512.value) goto $l4507;
                {
                    ITable* $tmp4514 = cl$Iter4501->$class->itable;
                    while ($tmp4514->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp4514 = $tmp4514->next;
                    }
                    $fn4516 $tmp4515 = $tmp4514->methods[1];
                    panda$core$Object* $tmp4517 = $tmp4515(cl$Iter4501);
                    cl4513 = ((org$pandalanguage$pandac$ClassDecl*) $tmp4517);
                    panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classes, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) cl4513)->name), ((panda$core$Object*) cl4513));
                }
                goto $l4506;
                $l4507:;
            }
        }
        }
        else {
        {
            panda$collections$Array* $tmp4518 = (panda$collections$Array*) malloc(40);
            $tmp4518->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp4518->refCount.value = 1;
            panda$collections$Array$init($tmp4518);
            result4493 = ((panda$collections$ListView*) $tmp4518);
        }
        }
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->scans, ((panda$collections$Key*) p_file), ((panda$core$Object*) result4493));
    }
    }
    return result4493;
}
void org$pandalanguage$pandac$Compiler$compile$panda$io$File(org$pandalanguage$pandac$Compiler* self, panda$io$File* p_file) {
    panda$collections$ListView* classes4520;
    panda$collections$Iterator* cl$Iter4522;
    org$pandalanguage$pandac$ClassDecl* cl4534;
    panda$collections$ListView* $tmp4521 = org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(self, p_file);
    classes4520 = $tmp4521;
    {
        ITable* $tmp4523 = ((panda$collections$Iterable*) classes4520)->$class->itable;
        while ($tmp4523->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4523 = $tmp4523->next;
        }
        $fn4525 $tmp4524 = $tmp4523->methods[0];
        panda$collections$Iterator* $tmp4526 = $tmp4524(((panda$collections$Iterable*) classes4520));
        cl$Iter4522 = $tmp4526;
        $l4527:;
        ITable* $tmp4529 = cl$Iter4522->$class->itable;
        while ($tmp4529->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4529 = $tmp4529->next;
        }
        $fn4531 $tmp4530 = $tmp4529->methods[0];
        panda$core$Bit $tmp4532 = $tmp4530(cl$Iter4522);
        panda$core$Bit $tmp4533 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4532);
        if (!$tmp4533.value) goto $l4528;
        {
            ITable* $tmp4535 = cl$Iter4522->$class->itable;
            while ($tmp4535->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4535 = $tmp4535->next;
            }
            $fn4537 $tmp4536 = $tmp4535->methods[1];
            panda$core$Object* $tmp4538 = $tmp4536(cl$Iter4522);
            cl4534 = ((org$pandalanguage$pandac$ClassDecl*) $tmp4538);
            org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$ClassDecl(self, cl4534);
        }
        goto $l4527;
        $l4528:;
    }
}
void org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, panda$core$String* p_msg) {
    panda$core$Object* $tmp4539 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
    org$pandalanguage$pandac$Compiler$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$ClassDecl*) $tmp4539)->source, p_position, p_msg);
}
void org$pandalanguage$pandac$Compiler$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$Compiler* self, panda$io$File* p_file, org$pandalanguage$pandac$Position p_pos, panda$core$String* p_msg) {
    if (self->reportErrors.value) {
    {
        panda$core$Int64 $tmp4540 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->errorCount, ((panda$core$Int64) { 1 }));
        self->errorCount = $tmp4540;
        panda$core$String* $tmp4541 = panda$io$File$name$R$panda$core$String(p_file);
        panda$core$String* $tmp4542 = panda$core$String$convert$R$panda$core$String($tmp4541);
        panda$core$String* $tmp4544 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4542, &$s4543);
        panda$core$String* $tmp4545 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp4544, ((panda$core$Object*) wrap_org$pandalanguage$pandac$Position(p_pos)));
        panda$core$String* $tmp4547 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4545, &$s4546);
        panda$core$String* $tmp4548 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4547, p_msg);
        panda$core$String* $tmp4550 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4548, &$s4549);
        panda$io$Console$printLine$panda$core$Object(((panda$core$Object*) $tmp4550));
    }
    }
}
void org$pandalanguage$pandac$Compiler$finish(org$pandalanguage$pandac$Compiler* self) {
    ITable* $tmp4551 = self->codeGenerator->$class->itable;
    while ($tmp4551->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
        $tmp4551 = $tmp4551->next;
    }
    $fn4553 $tmp4552 = $tmp4551->methods[5];
    $tmp4552(self->codeGenerator);
}

