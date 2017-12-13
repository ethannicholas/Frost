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
#include "panda/core/Char16.h"
#include "panda/core/Char32.h"
#include "org/pandalanguage/pandac/Compiler/CompileTargetResult.h"
#include "panda/core/SteppedRange.LTpanda/core/Int64.Cpanda/core/Int64.GT.h"


struct { panda$core$Class* cl; ITable* next; void* methods[1]; } org$pandalanguage$pandac$Compiler$_org$pandalanguage$pandac$ErrorReporter = { (panda$core$Class*) &org$pandalanguage$pandac$ErrorReporter$class, NULL, { org$pandalanguage$pandac$Compiler$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String} };

org$pandalanguage$pandac$Compiler$class_type org$pandalanguage$pandac$Compiler$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &org$pandalanguage$pandac$Compiler$_org$pandalanguage$pandac$ErrorReporter, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, org$pandalanguage$pandac$Compiler$addAlias$panda$core$String, org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q, org$pandalanguage$pandac$Compiler$checkGenericParameters$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$Type$Q, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl, org$pandalanguage$pandac$Compiler$resolveMethodCall$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT, org$pandalanguage$pandac$Compiler$exists$panda$io$File$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$getClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q, org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Position$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q, org$pandalanguage$pandac$Compiler$specialize$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q, org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT, org$pandalanguage$pandac$Compiler$signatureMatch$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q, org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q, org$pandalanguage$pandac$Compiler$interfaceMethods$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT, org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable, org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT, org$pandalanguage$pandac$Compiler$addInheritedMethods$org$pandalanguage$pandac$SymbolTable$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT, org$pandalanguage$pandac$Compiler$getMethodReference$org$pandalanguage$pandac$SymbolTable$org$pandalanguage$pandac$IRNode$Q$panda$core$String$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$Compiler$symbolRef$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q, org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64, org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64, org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q, org$pandalanguage$pandac$Compiler$doCoerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$Compiler$callCost$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q, org$pandalanguage$pandac$Compiler$matchMethods$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q, org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$declaredTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$foldInts$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$Compiler$compileIndexedAssignment$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT, org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$IRNode$Q$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT, org$pandalanguage$pandac$Compiler$compilePrefix$panda$core$Int64$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compilePrefix$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileCall$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileIdentifier$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileRange$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileSelf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileSuper$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileNull$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileBlock$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileIf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileRangeFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileIteratorFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileFor$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileWhile$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileDo$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileLoop$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q, org$pandalanguage$pandac$Compiler$compileDeclaration$org$pandalanguage$pandac$ASTNode$panda$core$Int64$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileBreak$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileContinue$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileReturn$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileAssert$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileVar$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileWhenTest$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileChainedIfWhen$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileChainedIfMatch$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileWhen$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileOtherwise$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64, org$pandalanguage$pandac$Compiler$compileMatch$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileBody$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT, org$pandalanguage$pandac$Compiler$compile$panda$io$File, org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String, org$pandalanguage$pandac$Compiler$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String, org$pandalanguage$pandac$Compiler$finish} };

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
typedef panda$core$Object* (*$fn602)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn634)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn640)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn646)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn665)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn671)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn677)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn703)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn709)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn715)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn767)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn773)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn779)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn788)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn805)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn823)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn829)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn835)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn843)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn849)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn855)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn867)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn873)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn879)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn902)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn908)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn914)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn953)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn959)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn965)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn978)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn984)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn990)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1005)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1011)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1017)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1033)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1039)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1045)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1059)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1065)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1071)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1084)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1090)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1096)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1141)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1147)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1153)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1160)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1166)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1172)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1192)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1198)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1204)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1284)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn1392)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1398)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1404)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1430)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1436)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1442)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn1548)(panda$collections$CollectionView*);
typedef panda$core$Bit (*$fn1557)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1561)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1564)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1649)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1655)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1661)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1769)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn1792)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1915)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1921)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1927)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn2017)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2039)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Int64 (*$fn2061)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn2078)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2084)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2090)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn2102)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn2124)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn2198)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2216)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn2287)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn2305)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2311)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2317)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2348)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2354)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2360)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2397)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2403)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2409)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2432)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2438)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2444)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2834)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2840)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2846)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2978)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2984)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2990)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn3103)(panda$core$Object*);
typedef panda$core$Int64 (*$fn3203)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn3219)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3225)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3231)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3326)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3332)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3338)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3548)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3554)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3560)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3695)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3701)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3707)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3733)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3739)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3745)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3852)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3858)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3864)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4010)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4016)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4022)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4105)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4111)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4117)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4168)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4174)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4180)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4244)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4250)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4256)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4295)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4301)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4307)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4319)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4325)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4331)(panda$collections$Iterator*);
typedef void (*$fn4362)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$MethodDecl*, org$pandalanguage$pandac$IRNode*);
typedef void (*$fn4365)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$collections$Iterator* (*$fn4369)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4375)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4381)(panda$collections$Iterator*);
typedef void (*$fn4386)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn4389)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn4394)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$collections$Iterator* (*$fn4398)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4404)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4410)(panda$collections$Iterator*);
typedef void (*$fn4414)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn4424)(org$pandalanguage$pandac$parser$Parser*, panda$io$File*, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn4426)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$collections$Iterator* (*$fn4432)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4438)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4444)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4453)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4459)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4465)(panda$collections$Iterator*);
typedef void (*$fn4481)(org$pandalanguage$pandac$CodeGenerator*);

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
static panda$core$String $s596 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x6F\x20\x6F\x72\x20\x61\x6D\x62\x69\x67\x75\x6F\x75\x73\x20\x6D\x61\x74\x63\x68\x20\x6F\x6E\x20\x6D\x65\x74\x68\x6F\x64\x20\x63\x61\x6C\x6C\x20\x28", 38, 3392199122829501018, NULL };
static panda$core$String $s598 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s605 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s608 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s610 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x6B\x6E\x6F\x77\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 18, 1104129620483010492, NULL };
static panda$core$String $s612 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x73\x75\x70\x65\x72\x27\x20\x63\x61\x6E\x20\x6F\x6E\x6C\x79\x20\x62\x65\x20\x75\x73\x65\x64\x20\x61\x73\x20\x70\x61\x72\x74\x20\x6F\x66\x20\x61\x20\x6D\x65\x74\x68\x6F\x64\x20\x63\x61\x6C\x6C", 49, 5687166824689512368, NULL };
static panda$core$String $s617 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x56\x61\x6C\x75\x65", 16, -4218233431647874265, NULL };
static panda$core$String $s656 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s657 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, 148, NULL };
static panda$core$String $s659 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x70\x61\x6E\x64\x61", 6, 1556740610063, NULL };
static panda$core$String $s684 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s694 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s695 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, 148, NULL };
static panda$core$String $s697 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x70\x61\x6E\x64\x61", 6, 1556740610063, NULL };
static panda$core$String $s727 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x66\x69\x6C\x65\x20\x27", 15, -3519420271001816814, NULL };
static panda$core$String $s729 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x74\x6F\x20\x63\x6F\x6E\x74\x61\x69\x6E\x20\x61\x20\x63\x6C\x61\x73\x73\x20\x6E\x61\x6D\x65\x64\x20\x27", 28, 3445503135242247770, NULL };
static panda$core$String $s732 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s735 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x6F\x20\x66\x69\x6C\x65\x20\x6E\x61\x6D\x65\x64\x20", 14, 8876718408773305983, NULL };
static panda$core$String $s737 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x69\x6E\x20\x61\x6E\x79\x20\x69\x6D\x70\x6F\x72\x74\x20\x70\x61\x74\x68\x20\x28", 21, 3105450433703869576, NULL };
static panda$core$String $s740 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s742 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x69\x6E\x74\x5F\x6C\x69\x74\x65\x72\x61\x6C", 12, -6710647184408424492, NULL };
static panda$core$String $s1234 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x73\x75\x70\x65\x72\x27\x20\x63\x61\x6E\x20\x6F\x6E\x6C\x79\x20\x62\x65\x20\x75\x73\x65\x64\x20\x61\x73\x20\x70\x61\x72\x74\x20\x6F\x66\x20\x61\x20\x6D\x65\x74\x68\x6F\x64\x20\x63\x61\x6C\x6C", 49, 5687166824689512368, NULL };
static panda$core$String $s1279 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s1361 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 19485, NULL };
static panda$core$String $s1639 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 19485, NULL };
static panda$core$String $s1822 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27", 10, 875040426634827830, NULL };
static panda$core$String $s1824 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 14, 2262695563077912654, NULL };
static panda$core$String $s1827 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1852 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27", 10, 875040426634827830, NULL };
static panda$core$String $s1854 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 14, 2262695563077912654, NULL };
static panda$core$String $s1857 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1890 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 19485, NULL };
static panda$core$String $s1949 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27", 10, 875040426634827830, NULL };
static panda$core$String $s1951 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 14, 2262695563077912654, NULL };
static panda$core$String $s1954 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1994 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6C\x75\x65\x20\x6F\x66\x20\x74\x79\x70\x65\x20\x27", 15, -1620219380461029456, NULL };
static panda$core$String $s1996 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x70\x6F\x73\x73\x69\x62\x6C\x79\x20\x62\x65\x20\x61\x6E\x20\x69\x6E\x73\x74\x61\x6E\x63\x65\x20\x6F\x66\x20", 36, -427166674877421096, NULL };
static panda$core$String $s1998 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2000 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2108 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2109 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, 216, NULL };
static panda$core$String $s2112 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x65\x78\x70\x65\x63\x74\x65\x64\x20", 10, -1007140463547215113, NULL };
static panda$core$String $s2116 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x61\x72\x67\x75\x6D\x65\x6E\x74", 9, 1450721239526715900, NULL };
static panda$core$String $s2119 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2121 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x74\x20\x72\x65\x63\x65\x69\x76\x65\x64\x20", 13, -1301083486074551925, NULL };
static panda$core$String $s2127 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2151 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x64\x69\x72\x65\x63\x74\x6C\x79\x20\x63\x61\x6C\x6C\x20\x27\x69\x6E\x69\x74\x27\x20\x6F\x75\x74\x73\x69\x64\x65\x20\x6F\x66\x20\x61\x6E\x20\x69\x6E\x69\x74\x20\x6D\x65\x74\x68\x6F\x64", 53, 84993564105955720, NULL };
static panda$core$String $s2161 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x69\x6E\x69\x74\x27\x20\x6D\x61\x79\x20\x6F\x6E\x6C\x79\x20\x62\x65\x20\x63\x61\x6C\x6C\x65\x64\x20\x6F\x6E\x20\x27\x73\x65\x6C\x66\x27\x20\x6F\x72\x20\x27\x73\x75\x70\x65\x72\x27", 46, 5737688576853633111, NULL };
static panda$core$String $s2176 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x63\x61\x6C\x6C\x20\x69\x6E\x73\x74\x61\x6E\x63\x65\x20", 21, -1285496544752055923, NULL };
static panda$core$String $s2179 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x66\x72\x6F\x6D\x20\x61\x20\x40\x63\x6C\x61\x73\x73\x20\x63\x6F\x6E\x74\x65\x78\x74", 22, 6236893689928691337, NULL };
static panda$core$String $s2190 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x63\x61\x6C\x6C\x20\x63\x6C\x61\x73\x73\x20", 18, 4176321021903236102, NULL };
static panda$core$String $s2193 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x6F\x6E\x20\x61\x6E\x20\x69\x6E\x73\x74\x61\x6E\x63\x65", 15, 4946791728819903386, NULL };
static panda$core$String $s2229 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s2248 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6C\x61\x73\x73\x20\x27", 7, 213449334494206, NULL };
static panda$core$String $s2250 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x64\x6F\x65\x73\x20\x6E\x6F\x74\x20\x68\x61\x76\x65\x20\x61\x20\x6D\x65\x6D\x62\x65\x72\x20\x6E\x61\x6D\x65\x64\x20\x27", 32, -5677460192622646983, NULL };
static panda$core$String $s2253 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2260 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2262 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s2265 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x69\x73\x20\x6E\x6F\x74\x20\x61\x20\x6D\x65\x74\x68\x6F\x64", 17, 1918101523522592587, NULL };
static panda$core$String $s2292 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x6F\x20\x6D\x61\x74\x63\x68\x20\x66\x6F\x72\x20\x63\x61\x6C\x6C\x20\x74\x6F\x20\x27", 22, 7814600009206081200, NULL };
static panda$core$String $s2294 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s2297 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2301 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2319 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2320 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x27", 2, 14381, NULL };
static panda$core$String $s2321 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x77\x69\x74\x68\x20\x72\x65\x74\x75\x72\x6E\x20\x74\x79\x70\x65\x20\x27", 19, -3030064837581027794, NULL };
static panda$core$String $s2323 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2371 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x69\x74", 4, 213374837, NULL };
static panda$core$String $s2381 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6C\x75\x65\x20\x6F\x66\x20\x74\x79\x70\x65\x20\x27", 15, -1620219380461029456, NULL };
static panda$core$String $s2383 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x69\x73\x20\x6E\x6F\x74\x20\x61\x20\x6D\x65\x74\x68\x6F\x64", 17, 1918101523522592587, NULL };
static panda$core$String $s2391 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2393 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2411 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2414 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x3E\x28", 4, 146931305, NULL };
static panda$core$String $s2415 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x26\x3E\x28", 5, 14839819243, NULL };
static panda$core$String $s2428 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2446 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2449 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x3E\x28", 4, 146931305, NULL };
static panda$core$String $s2450 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x26\x3E\x28", 5, 14839819243, NULL };
static panda$core$String $s2467 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2B", 1, 144, NULL };
static panda$core$String $s2468 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D", 1, 146, NULL };
static panda$core$String $s2469 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 143, NULL };
static panda$core$String $s2470 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, 148, NULL };
static panda$core$String $s2471 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F\x2F", 2, 14995, NULL };
static panda$core$String $s2472 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 138, NULL };
static panda$core$String $s2473 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5E", 1, 195, NULL };
static panda$core$String $s2474 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3D", 1, 162, NULL };
static panda$core$String $s2475 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x3D", 2, 13595, NULL };
static panda$core$String $s2476 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 163, NULL };
static panda$core$String $s2477 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 161, NULL };
static panda$core$String $s2478 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E\x3D", 2, 16524, NULL };
static panda$core$String $s2479 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x3D", 2, 16322, NULL };
static panda$core$String $s2480 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1, 225, NULL };
static panda$core$String $s2481 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C\x7C", 2, 22849, NULL };
static panda$core$String $s2482 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s2483 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26\x26", 2, 14077, NULL };
static panda$core$String $s2484 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7E", 1, 227, NULL };
static panda$core$String $s2485 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7E\x7E", 2, 23053, NULL };
static panda$core$String $s2486 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21", 1, 134, NULL };
static panda$core$String $s2487 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x21", 2, 13567, NULL };
static panda$core$String $s2488 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x3C", 2, 16321, NULL };
static panda$core$String $s2489 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E\x3E", 2, 16525, NULL };
static panda$core$String $s2490 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 19485, NULL };
static panda$core$String $s2491 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A\x3D", 2, 16120, NULL };
static panda$core$String $s2492 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3D\x3D", 2, 16423, NULL };
static panda$core$String $s2493 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x3D\x3D", 3, 1373156, NULL };
static panda$core$String $s2604 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x76\x61\x6C\x69\x64\x20\x6E\x75\x6D\x65\x72\x69\x63\x20\x6F\x70\x65\x72\x61\x74\x69\x6F\x6E", 25, 9019145596080302696, NULL };
static panda$core$String $s2616 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D\x3A\x3D", 4, 198772404, NULL };
static panda$core$String $s2664 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6F\x6E\x76\x65\x72\x74", 7, 213482220537370, NULL };
static panda$core$String $s2668 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D\x3A\x3D", 4, 198772404, NULL };
static panda$core$String $s2728 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2731 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x6F\x70\x65\x72\x61\x74\x65\x20\x6F\x6E\x20\x27", 21, -3266050109438970469, NULL };
static panda$core$String $s2734 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20", 3, 1432616, NULL };
static panda$core$String $s2736 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2738 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2745 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2748 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x6F\x70\x65\x72\x61\x74\x65\x20\x6F\x6E\x20\x27", 21, -3266050109438970469, NULL };
static panda$core$String $s2751 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20", 3, 1432616, NULL };
static panda$core$String $s2753 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2755 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2777 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x61\x73\x73\x69\x67\x6E\x20\x74\x6F\x20\x74\x68\x69\x73\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6F\x6E", 32, -4891466264852316840, NULL };
static panda$core$String $s2789 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x61\x73\x73\x69\x67\x6E\x20\x74\x6F\x20\x74\x68\x69\x73\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6F\x6E", 32, -4891466264852316840, NULL };
static panda$core$String $s2806 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6F\x6E\x76\x65\x72\x74", 7, 213482220537370, NULL };
static panda$core$String $s2819 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 19485, NULL };
static panda$core$String $s2888 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2891 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x6F\x70\x65\x72\x61\x74\x65\x20\x6F\x6E\x20\x27", 21, -3266050109438970469, NULL };
static panda$core$String $s2894 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20\x27", 4, 144694255, NULL };
static panda$core$String $s2897 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3011 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x6D\x65\x74\x68\x6F\x64\x3E", 8, 17378158564789264, NULL };
static panda$core$String $s3027 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6E\x75\x6D\x62\x65\x72\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 30, 5304221197101987767, NULL };
static panda$core$String $s3029 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3037 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6E\x75\x6D\x62\x65\x72\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 30, 5304221197101987767, NULL };
static panda$core$String $s3039 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3105 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s3108 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3126 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6C\x61\x73\x73\x20\x27", 7, 213449334494206, NULL };
static panda$core$String $s3128 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x64\x6F\x65\x73\x20\x6E\x6F\x74\x20\x68\x61\x76\x65\x20\x61\x20\x6D\x65\x6D\x62\x65\x72\x20\x6E\x61\x6D\x65\x64\x20", 31, -2978468964078965078, NULL };
static panda$core$String $s3130 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3132 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3188 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x75\x6E\x72\x65\x73\x6F\x6C\x76\x65\x64\x20\x72\x61\x6E\x67\x65\x3E", 18, -1293962867859660245, NULL };
static panda$core$String $s3197 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x72\x65\x66\x65\x72\x65\x6E\x63\x65\x20\x27\x73\x65\x6C\x66\x27\x20\x66\x72\x6F\x6D\x20\x61\x20\x40\x63\x6C\x61\x73\x73\x20\x6D\x65\x74\x68\x6F\x64", 44, -511889306060728385, NULL };
static panda$core$String $s3215 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3238 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s3241 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3245 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3256 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x72\x65\x66\x65\x72\x65\x6E\x63\x65\x20\x27\x73\x75\x70\x65\x72\x27\x20\x66\x72\x6F\x6D\x20\x61\x20\x40\x63\x6C\x61\x73\x73\x20\x6D\x65\x74\x68\x6F\x64", 45, 3734810722724983720, NULL };
static panda$core$String $s3275 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6C\x75\x65\x20\x6F\x66\x20\x74\x79\x70\x65\x20\x27", 15, -1620219380461029456, NULL };
static panda$core$String $s3277 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x70\x6F\x73\x73\x69\x62\x6C\x79\x20\x62\x65\x20\x61\x6E\x20", 24, -5420382528200372370, NULL };
static panda$core$String $s3279 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x73\x74\x61\x6E\x63\x65\x20\x6F\x66\x20\x27", 13, 7885269545242335118, NULL };
static panda$core$String $s3281 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3301 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x64\x6F\x65\x73\x20\x6E\x6F\x74\x20\x72\x65\x74\x75\x72\x6E\x20\x61\x20\x76\x61\x6C\x75\x65", 24, -3977552604268313933, NULL };
static panda$core$String $s3449 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 161, NULL };
static panda$core$String $s3453 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 163, NULL };
static panda$core$String $s3458 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x49\x74\x65\x72", 5, 14332680541, NULL };
static panda$core$String $s3481 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x65\x74\x5F\x64\x6F\x6E\x65", 8, 21980003879763538, NULL };
static panda$core$String $s3486 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21", 1, 134, NULL };
static panda$core$String $s3498 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x65\x78\x74", 4, 218436048, NULL };
static panda$core$String $s3584 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x74\x65\x72\x61\x74\x6F\x72", 8, 22210198075044275, NULL };
static panda$core$String $s3592 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6E\x20\x49\x74\x65\x72\x61\x62\x6C\x65\x20\x6F\x72\x20\x49\x74\x65\x72\x61\x74\x6F\x72\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 45, 562271959045909027, NULL };
static panda$core$String $s3594 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3657 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x63\x6C\x61\x72\x61\x74\x69\x6F\x6E\x20\x68\x61\x73\x20\x6E\x65\x69\x74\x68\x65\x72\x20\x61\x20\x74\x79\x70\x65\x20\x6E\x6F\x72\x20\x61\x20\x76\x61\x6C\x75\x65", 42, 71025131614347466, NULL };
static panda$core$String $s3714 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x62\x72\x65\x61\x6B\x20", 7, 149654778879689, NULL };
static panda$core$String $s3716 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20\x69\x6E\x73\x69\x64\x65\x20\x61\x20\x6C\x6F\x6F\x70\x20\x6C\x61\x62\x65\x6C\x6C\x65\x64\x20", 33, 5869484791969643332, NULL };
static panda$core$String $s3718 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3720 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A\x27", 2, 16098, NULL };
static panda$core$String $s3725 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x62\x72\x65\x61\x6B\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20\x69\x6E\x73\x69\x64\x65\x20\x61\x20\x6C\x6F\x6F\x70", 29, -2107280000252113069, NULL };
static panda$core$String $s3752 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x63\x6F\x6E\x74\x69\x6E\x75\x65\x20", 10, 6626032424543403513, NULL };
static panda$core$String $s3754 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20\x69\x6E\x73\x69\x64\x65\x20\x61\x20\x6C\x6F\x6F\x70\x20\x6C\x61\x62\x65\x6C\x6C\x65\x64\x20", 33, 5869484791969643332, NULL };
static panda$core$String $s3756 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3758 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A\x27", 2, 16098, NULL };
static panda$core$String $s3763 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x63\x6F\x6E\x74\x69\x6E\x75\x65\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20\x69\x6E\x73\x69\x64\x65\x20\x61\x20\x6C\x6F\x6F\x70", 32, -6048052453244835837, NULL };
static panda$core$String $s3777 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x72\x65\x74\x75\x72\x6E\x20\x61\x20\x76\x61\x6C\x75\x65\x20\x66\x72\x6F\x6D\x20\x61\x20\x6D\x65\x74\x68\x6F\x64\x20\x77\x69\x74\x68\x20\x6E\x6F\x20\x72\x65\x74\x75\x72\x6E\x20\x74\x79\x70\x65", 55, -6755143087675264705, NULL };
static panda$core$String $s3791 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x72\x65\x74\x75\x72\x6E\x20\x76\x61\x6C\x75\x65", 23, 6159277012237708805, NULL };
static panda$core$String $s3811 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6C\x75\x65", 5, 22890280642, NULL };
static panda$core$String $s3878 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3D", 1, 162, NULL };
static panda$core$String $s3915 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1, 225, NULL };
static panda$core$String $s3966 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x6D\x61\x74\x63\x68\x24", 7, 146584075981198, NULL };
static panda$core$String $s3968 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5F", 1, 196, NULL };
static panda$core$String $s3971 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4471 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A", 1, 159, NULL };
static panda$core$String $s4474 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A\x20\x65\x72\x72\x6F\x72\x3A\x20", 9, 1725281418740475535, NULL };
static panda$core$String $s4477 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };

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
    org$pandalanguage$pandac$IRNode* callTarget586;
    org$pandalanguage$pandac$IRNode* result592;
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
            panda$core$Bit $tmp583 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost580.value), ((panda$core$Int64) bestCost562.value));
            if ($tmp583.value) {
            {
                panda$collections$Array$add$panda$collections$Array$T(best559, ((panda$core$Object*) m575));
            }
            }
        }
        goto $l568;
        $l569:;
    }
    panda$core$Int64 $tmp584 = panda$collections$Array$get_count$R$panda$core$Int64(best559);
    panda$core$Bit $tmp585 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp584, ((panda$core$Int64) { 1 }));
    if ($tmp585.value) {
    {
        panda$core$Object* $tmp587 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
        panda$core$Int64 $tmp588 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp587)->children);
        panda$core$Bit $tmp589 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp588, ((panda$core$Int64) { 0 }));
        if ($tmp589.value) {
        {
            panda$core$Object* $tmp590 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp591 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$IRNode*) $tmp590)->children, ((panda$core$Int64) { 0 }));
            callTarget586 = ((org$pandalanguage$pandac$IRNode*) $tmp591);
        }
        }
        else {
        {
            callTarget586 = NULL;
        }
        }
        panda$core$Object* $tmp593 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(best559, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp594 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr->position, callTarget586, ((org$pandalanguage$pandac$MethodRef*) $tmp593), ((panda$collections$ListView*) args556));
        result592 = $tmp594;
        if (((panda$core$Bit) { p_target != NULL }).value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp595 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, result592, p_target);
            result592 = $tmp595;
        }
        }
        return result592;
    }
    }
    panda$core$String* $tmp597 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s596, ((panda$core$Object*) wrap_org$pandalanguage$pandac$Position(p_expr->position)));
    panda$core$String* $tmp599 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp597, &$s598);
    ITable* $tmp600 = methods554->$class->itable;
    while ($tmp600->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp600 = $tmp600->next;
    }
    $fn602 $tmp601 = $tmp600->methods[0];
    panda$core$Object* $tmp603 = $tmp601(methods554, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp604 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp599, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodRef*) $tmp603)->value)->name);
    panda$core$String* $tmp606 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp604, &$s605);
    panda$core$String* $tmp607 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp606, ((panda$core$Object*) best559));
    panda$core$String* $tmp609 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp607, &$s608);
    panda$io$Console$printLine$panda$core$Object(((panda$core$Object*) $tmp609));
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
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_expr->position, &$s610);
            return NULL;
        }
        break;
        case 1039:
        {
            org$pandalanguage$pandac$IRNode* $tmp611 = org$pandalanguage$pandac$Compiler$resolveMethodCall$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, NULL);
            return $tmp611;
        }
        break;
        case 1024:
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_expr->position, &$s612);
            return NULL;
        }
        break;
        default:
        {
            org$pandalanguage$pandac$Type* $tmp613 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
            org$pandalanguage$pandac$IRNode* $tmp614 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, $tmp613);
            return $tmp614;
        }
    }
}
panda$core$Bit org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
    bool $tmp615 = ((panda$core$Bit) { p_cl->rawSuper != NULL }).value;
    if (!$tmp615) goto $l616;
    panda$core$Bit $tmp618 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_cl->rawSuper)->name, &$s617);
    $tmp615 = $tmp618.value;
    $l616:;
    panda$core$Bit $tmp619 = { $tmp615 };
    return $tmp619;
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Array* result620;
    org$pandalanguage$pandac$ClassDecl* s628;
    panda$collections$Iterator* f$Iter631;
    org$pandalanguage$pandac$FieldDecl* f643;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
    panda$collections$Array* $tmp621 = (panda$collections$Array*) malloc(40);
    $tmp621->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp621->refCount.value = 1;
    panda$collections$Array$init($tmp621);
    result620 = $tmp621;
    panda$core$Bit $tmp624 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, p_cl);
    panda$core$Bit $tmp625 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp624);
    bool $tmp623 = $tmp625.value;
    if (!$tmp623) goto $l626;
    $tmp623 = ((panda$core$Bit) { p_cl->rawSuper != NULL }).value;
    $l626:;
    panda$core$Bit $tmp627 = { $tmp623 };
    if ($tmp627.value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp629 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_cl->rawSuper);
        s628 = $tmp629;
        if (((panda$core$Bit) { s628 != NULL }).value) {
        {
            panda$collections$ListView* $tmp630 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self, s628);
            panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(result620, ((panda$collections$CollectionView*) $tmp630));
        }
        }
    }
    }
    {
        ITable* $tmp632 = ((panda$collections$Iterable*) p_cl->fields)->$class->itable;
        while ($tmp632->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp632 = $tmp632->next;
        }
        $fn634 $tmp633 = $tmp632->methods[0];
        panda$collections$Iterator* $tmp635 = $tmp633(((panda$collections$Iterable*) p_cl->fields));
        f$Iter631 = $tmp635;
        $l636:;
        ITable* $tmp638 = f$Iter631->$class->itable;
        while ($tmp638->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp638 = $tmp638->next;
        }
        $fn640 $tmp639 = $tmp638->methods[0];
        panda$core$Bit $tmp641 = $tmp639(f$Iter631);
        panda$core$Bit $tmp642 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp641);
        if (!$tmp642.value) goto $l637;
        {
            ITable* $tmp644 = f$Iter631->$class->itable;
            while ($tmp644->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp644 = $tmp644->next;
            }
            $fn646 $tmp645 = $tmp644->methods[1];
            panda$core$Object* $tmp647 = $tmp645(f$Iter631);
            f643 = ((org$pandalanguage$pandac$FieldDecl*) $tmp647);
            panda$core$Bit $tmp648 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(f643->annotations);
            panda$core$Bit $tmp649 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp648);
            if ($tmp649.value) {
            {
                panda$collections$Array$add$panda$collections$Array$T(result620, ((panda$core$Object*) f643));
            }
            }
        }
        goto $l636;
        $l637:;
    }
    return ((panda$collections$ListView*) result620);
}
panda$core$Bit org$pandalanguage$pandac$Compiler$exists$panda$io$File$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, panda$io$File* p_f) {
    panda$core$Bit$nullable result650;
    panda$core$Bit $tmp652;
    panda$core$Object* $tmp651 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->existenceCache, ((panda$collections$Key*) p_f));
    result650 = ($tmp651 != NULL ? ((panda$core$Bit$nullable) { ((panda$core$Bit$wrapper*) $tmp651)->value, true }) : (panda$core$Bit$nullable) { .nonnull = 0 });
    if (((panda$core$Bit) { !result650.nonnull }).value) {
    {
        panda$io$File$exists$R$panda$core$Bit(&$tmp652, p_f);
        result650 = ((panda$core$Bit$nullable) { $tmp652, true });
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->existenceCache, ((panda$collections$Key*) p_f), ((panda$core$Object*) wrap_panda$core$Bit(((panda$core$Bit) result650.value))));
    }
    }
    return ((panda$core$Bit) result650.value);
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Compiler$getClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Compiler* self, panda$core$String* p_fullName) {
    org$pandalanguage$pandac$ClassDecl* result653;
    panda$core$String* suffix655;
    panda$core$Bit found661;
    panda$collections$Iterator* dir$Iter662;
    panda$io$File* dir674;
    panda$io$File* f679;
    panda$core$String$Index$nullable index683;
    org$pandalanguage$pandac$ClassDecl* parent686;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp687;
    panda$core$Object* $tmp654 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) p_fullName));
    result653 = ((org$pandalanguage$pandac$ClassDecl*) $tmp654);
    if (((panda$core$Bit) { result653 == NULL }).value) {
    {
        panda$core$String* $tmp658 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(p_fullName, &$s656, &$s657);
        panda$core$String* $tmp660 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp658, &$s659);
        suffix655 = $tmp660;
        found661 = ((panda$core$Bit) { false });
        {
            ITable* $tmp663 = ((panda$collections$Iterable*) self->settings->importDirs)->$class->itable;
            while ($tmp663->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp663 = $tmp663->next;
            }
            $fn665 $tmp664 = $tmp663->methods[0];
            panda$collections$Iterator* $tmp666 = $tmp664(((panda$collections$Iterable*) self->settings->importDirs));
            dir$Iter662 = $tmp666;
            $l667:;
            ITable* $tmp669 = dir$Iter662->$class->itable;
            while ($tmp669->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp669 = $tmp669->next;
            }
            $fn671 $tmp670 = $tmp669->methods[0];
            panda$core$Bit $tmp672 = $tmp670(dir$Iter662);
            panda$core$Bit $tmp673 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp672);
            if (!$tmp673.value) goto $l668;
            {
                ITable* $tmp675 = dir$Iter662->$class->itable;
                while ($tmp675->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp675 = $tmp675->next;
                }
                $fn677 $tmp676 = $tmp675->methods[1];
                panda$core$Object* $tmp678 = $tmp676(dir$Iter662);
                dir674 = ((panda$io$File*) $tmp678);
                panda$io$File* $tmp680 = panda$io$File$resolve$panda$core$String$R$panda$io$File(dir674, suffix655);
                f679 = $tmp680;
                panda$core$Bit $tmp681 = org$pandalanguage$pandac$Compiler$exists$panda$io$File$R$panda$core$Bit(self, f679);
                if ($tmp681.value) {
                {
                    found661 = ((panda$core$Bit) { true });
                    org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(self, f679);
                    panda$core$Object* $tmp682 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) p_fullName));
                    result653 = ((org$pandalanguage$pandac$ClassDecl*) $tmp682);
                }
                }
            }
            goto $l667;
            $l668:;
        }
    }
    }
    if (((panda$core$Bit) { result653 == NULL }).value) {
    {
        panda$core$String$Index$nullable $tmp685 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(p_fullName, &$s684);
        index683 = $tmp685;
        if (((panda$core$Bit) { index683.nonnull }).value) {
        {
            panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp687, ((panda$core$String$Index$nullable) { .nonnull = false }), index683, ((panda$core$Bit) { false }));
            panda$core$String* $tmp688 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(p_fullName, $tmp687);
            org$pandalanguage$pandac$ClassDecl* $tmp689 = org$pandalanguage$pandac$Compiler$getClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, $tmp688);
            parent686 = $tmp689;
            if (((panda$core$Bit) { parent686 != NULL }).value) {
            {
                panda$core$Object* $tmp690 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) p_fullName));
                result653 = ((org$pandalanguage$pandac$ClassDecl*) $tmp690);
            }
            }
        }
        }
    }
    }
    return result653;
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Position$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, panda$core$String* p_fullName) {
    org$pandalanguage$pandac$ClassDecl* result691;
    panda$core$String* suffix693;
    panda$core$Bit found699;
    panda$collections$Iterator* dir$Iter700;
    panda$io$File* dir712;
    panda$io$File* f717;
    panda$core$Int64 oldErrorCount720;
    org$pandalanguage$pandac$Position $tmp726;
    panda$core$Object* $tmp692 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) p_fullName));
    result691 = ((org$pandalanguage$pandac$ClassDecl*) $tmp692);
    if (((panda$core$Bit) { result691 == NULL }).value) {
    {
        panda$core$String* $tmp696 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(p_fullName, &$s694, &$s695);
        panda$core$String* $tmp698 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp696, &$s697);
        suffix693 = $tmp698;
        found699 = ((panda$core$Bit) { false });
        {
            ITable* $tmp701 = ((panda$collections$Iterable*) self->settings->importDirs)->$class->itable;
            while ($tmp701->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp701 = $tmp701->next;
            }
            $fn703 $tmp702 = $tmp701->methods[0];
            panda$collections$Iterator* $tmp704 = $tmp702(((panda$collections$Iterable*) self->settings->importDirs));
            dir$Iter700 = $tmp704;
            $l705:;
            ITable* $tmp707 = dir$Iter700->$class->itable;
            while ($tmp707->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp707 = $tmp707->next;
            }
            $fn709 $tmp708 = $tmp707->methods[0];
            panda$core$Bit $tmp710 = $tmp708(dir$Iter700);
            panda$core$Bit $tmp711 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp710);
            if (!$tmp711.value) goto $l706;
            {
                ITable* $tmp713 = dir$Iter700->$class->itable;
                while ($tmp713->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp713 = $tmp713->next;
                }
                $fn715 $tmp714 = $tmp713->methods[1];
                panda$core$Object* $tmp716 = $tmp714(dir$Iter700);
                dir712 = ((panda$io$File*) $tmp716);
                panda$io$File* $tmp718 = panda$io$File$resolve$panda$core$String$R$panda$io$File(dir712, suffix693);
                f717 = $tmp718;
                panda$core$Bit $tmp719 = org$pandalanguage$pandac$Compiler$exists$panda$io$File$R$panda$core$Bit(self, f717);
                if ($tmp719.value) {
                {
                    found699 = ((panda$core$Bit) { true });
                    oldErrorCount720 = self->errorCount;
                    org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(self, f717);
                    panda$core$Object* $tmp721 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) p_fullName));
                    result691 = ((org$pandalanguage$pandac$ClassDecl*) $tmp721);
                    bool $tmp722 = ((panda$core$Bit) { result691 == NULL }).value;
                    if (!$tmp722) goto $l723;
                    panda$core$Bit $tmp724 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->errorCount, oldErrorCount720);
                    $tmp722 = $tmp724.value;
                    $l723:;
                    panda$core$Bit $tmp725 = { $tmp722 };
                    if ($tmp725.value) {
                    {
                        org$pandalanguage$pandac$Position$init$panda$core$Int64$panda$core$Int64(&$tmp726, ((panda$core$Int64) { 1 }), ((panda$core$Int64) { 1 }));
                        panda$core$String* $tmp728 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s727, ((panda$core$Object*) f717));
                        panda$core$String* $tmp730 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp728, &$s729);
                        panda$core$String* $tmp731 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp730, p_fullName);
                        panda$core$String* $tmp733 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp731, &$s732);
                        org$pandalanguage$pandac$Compiler$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String(self, f717, $tmp726, $tmp733);
                    }
                    }
                }
                }
            }
            goto $l705;
            $l706:;
        }
        panda$core$Bit $tmp734 = panda$core$Bit$$NOT$R$panda$core$Bit(found699);
        if ($tmp734.value) {
        {
            panda$core$String* $tmp736 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s735, suffix693);
            panda$core$String* $tmp738 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp736, &$s737);
            panda$core$String* $tmp739 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp738, ((panda$core$Object*) self->settings->importDirs));
            panda$core$String* $tmp741 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp739, &$s740);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp741);
        }
        }
    }
    }
    return result691;
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Compiler$specialize$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl, org$pandalanguage$pandac$Type* p_rawType) {
    org$pandalanguage$pandac$Type* type745;
    org$pandalanguage$pandac$ClassDecl* result752;
    org$pandalanguage$pandac$Annotations* annotations754;
    panda$collections$Array* supertypes760;
    panda$collections$Iterator* intf$Iter764;
    org$pandalanguage$pandac$Type* intf776;
    panda$collections$HashMap* aliases782;
    panda$core$Range$LTpanda$core$Int64$GT $tmp785;
    panda$collections$Iterator* m$Iter820;
    org$pandalanguage$pandac$MethodDecl* m832;
    panda$collections$Array* parameters837;
    panda$collections$Iterator* p$Iter840;
    org$pandalanguage$pandac$MethodDecl$Parameter* p852;
    org$pandalanguage$pandac$MethodDecl* clone860;
    panda$collections$Iterator* f$Iter864;
    org$pandalanguage$pandac$FieldDecl* f876;
    org$pandalanguage$pandac$FieldDecl* clone881;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
    panda$core$Bit $tmp743 = panda$core$String$contains$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_rawType)->name, &$s742);
    panda$core$Bit $tmp744 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp743);
    PANDA_ASSERT($tmp744.value);
    org$pandalanguage$pandac$Type* $tmp746 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, p_rawType);
    type745 = $tmp746;
    panda$core$Bit $tmp747 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(type745->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp747.value) {
    {
        panda$core$Object* $tmp748 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(type745->subtypes, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$ClassDecl* $tmp749 = org$pandalanguage$pandac$Compiler$specialize$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl(self, p_cl, ((org$pandalanguage$pandac$Type*) $tmp748));
        return $tmp749;
    }
    }
    panda$core$Bit $tmp750 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(type745->typeKind, ((panda$core$Int64) { 10 }));
    if ($tmp750.value) {
    {
        return p_cl;
    }
    }
    panda$core$Bit $tmp751 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(type745->typeKind, ((panda$core$Int64) { 21 }));
    PANDA_ASSERT($tmp751.value);
    panda$core$Object* $tmp753 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) type745)->name));
    result752 = ((org$pandalanguage$pandac$ClassDecl*) $tmp753);
    if (((panda$core$Bit) { result752 == NULL }).value) {
    {
        panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_cl));
        org$pandalanguage$pandac$Annotations* $tmp755 = (org$pandalanguage$pandac$Annotations*) malloc(24);
        $tmp755->$class = (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class;
        $tmp755->refCount.value = 1;
        panda$core$Int64 $tmp757 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 11 }));
        panda$core$Int64 $tmp758 = panda$core$Int64$$BNOT$R$panda$core$Int64($tmp757);
        panda$core$Int64 $tmp759 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(p_cl->annotations->flags, $tmp758);
        org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp755, $tmp759);
        annotations754 = $tmp755;
        panda$collections$Array* $tmp761 = (panda$collections$Array*) malloc(40);
        $tmp761->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp761->refCount.value = 1;
        panda$collections$Array$init($tmp761);
        supertypes760 = $tmp761;
        org$pandalanguage$pandac$Type* $tmp763 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, type745, p_cl->rawSuper);
        panda$collections$Array$add$panda$collections$Array$T(supertypes760, ((panda$core$Object*) $tmp763));
        {
            ITable* $tmp765 = ((panda$collections$Iterable*) p_cl->rawInterfaces)->$class->itable;
            while ($tmp765->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp765 = $tmp765->next;
            }
            $fn767 $tmp766 = $tmp765->methods[0];
            panda$collections$Iterator* $tmp768 = $tmp766(((panda$collections$Iterable*) p_cl->rawInterfaces));
            intf$Iter764 = $tmp768;
            $l769:;
            ITable* $tmp771 = intf$Iter764->$class->itable;
            while ($tmp771->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp771 = $tmp771->next;
            }
            $fn773 $tmp772 = $tmp771->methods[0];
            panda$core$Bit $tmp774 = $tmp772(intf$Iter764);
            panda$core$Bit $tmp775 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp774);
            if (!$tmp775.value) goto $l770;
            {
                ITable* $tmp777 = intf$Iter764->$class->itable;
                while ($tmp777->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp777 = $tmp777->next;
                }
                $fn779 $tmp778 = $tmp777->methods[1];
                panda$core$Object* $tmp780 = $tmp778(intf$Iter764);
                intf776 = ((org$pandalanguage$pandac$Type*) $tmp780);
                org$pandalanguage$pandac$Type* $tmp781 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, type745, intf776);
                panda$collections$Array$add$panda$collections$Array$T(supertypes760, ((panda$core$Object*) $tmp781));
            }
            goto $l769;
            $l770:;
        }
        panda$collections$HashMap* $tmp783 = (panda$collections$HashMap*) malloc(56);
        $tmp783->$class = (panda$core$Class*) &panda$collections$HashMap$class;
        $tmp783->refCount.value = 1;
        panda$collections$HashMap$init$panda$collections$MapView$LTpanda$collections$HashMap$K$Cpanda$collections$HashMap$V$GT($tmp783, p_cl->aliases);
        aliases782 = $tmp783;
        ITable* $tmp786 = ((panda$collections$CollectionView*) p_cl->parameters)->$class->itable;
        while ($tmp786->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp786 = $tmp786->next;
        }
        $fn788 $tmp787 = $tmp786->methods[0];
        panda$core$Int64 $tmp789 = $tmp787(((panda$collections$CollectionView*) p_cl->parameters));
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp785, ((panda$core$Int64) { 0 }), $tmp789, ((panda$core$Bit) { false }));
        int64_t $tmp791 = $tmp785.min.value;
        panda$core$Int64 i790 = { $tmp791 };
        int64_t $tmp793 = $tmp785.max.value;
        bool $tmp794 = $tmp785.inclusive.value;
        if ($tmp794) goto $l801; else goto $l802;
        $l801:;
        if ($tmp791 <= $tmp793) goto $l795; else goto $l797;
        $l802:;
        if ($tmp791 < $tmp793) goto $l795; else goto $l797;
        $l795:;
        {
            ITable* $tmp803 = ((panda$collections$ListView*) p_cl->parameters)->$class->itable;
            while ($tmp803->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp803 = $tmp803->next;
            }
            $fn805 $tmp804 = $tmp803->methods[0];
            panda$core$Object* $tmp806 = $tmp804(((panda$collections$ListView*) p_cl->parameters), i790);
            panda$core$Int64 $tmp807 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i790, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp808 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(type745->subtypes, $tmp807);
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(aliases782, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp806))->name), ((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp808))->name));
        }
        $l798:;
        int64_t $tmp810 = $tmp793 - i790.value;
        if ($tmp794) goto $l811; else goto $l812;
        $l811:;
        if ($tmp810 >= 1) goto $l809; else goto $l797;
        $l812:;
        if ($tmp810 > 1) goto $l809; else goto $l797;
        $l809:;
        i790.value += 1;
        goto $l795;
        $l797:;
        org$pandalanguage$pandac$ClassDecl* $tmp815 = (org$pandalanguage$pandac$ClassDecl*) malloc(193);
        $tmp815->$class = (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$class;
        $tmp815->refCount.value = 1;
        panda$collections$Array* $tmp817 = (panda$collections$Array*) malloc(40);
        $tmp817->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp817->refCount.value = 1;
        panda$collections$Array$init($tmp817);
        panda$core$Object* $tmp819 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_cl->symbolTable->parents, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$ClassDecl$init$panda$io$File$org$pandalanguage$pandac$Position$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable($tmp815, p_cl->source, ((org$pandalanguage$pandac$Symbol*) p_cl)->position, ((panda$collections$MapView*) aliases782), p_cl->doccomment, annotations754, p_cl->classKind, ((org$pandalanguage$pandac$Symbol*) type745)->name, ((panda$collections$ListView*) supertypes760), $tmp817, ((org$pandalanguage$pandac$SymbolTable*) $tmp819));
        result752 = $tmp815;
        result752->external = ((panda$core$Bit) { false });
        {
            ITable* $tmp821 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
            while ($tmp821->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp821 = $tmp821->next;
            }
            $fn823 $tmp822 = $tmp821->methods[0];
            panda$collections$Iterator* $tmp824 = $tmp822(((panda$collections$Iterable*) p_cl->methods));
            m$Iter820 = $tmp824;
            $l825:;
            ITable* $tmp827 = m$Iter820->$class->itable;
            while ($tmp827->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp827 = $tmp827->next;
            }
            $fn829 $tmp828 = $tmp827->methods[0];
            panda$core$Bit $tmp830 = $tmp828(m$Iter820);
            panda$core$Bit $tmp831 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp830);
            if (!$tmp831.value) goto $l826;
            {
                ITable* $tmp833 = m$Iter820->$class->itable;
                while ($tmp833->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp833 = $tmp833->next;
                }
                $fn835 $tmp834 = $tmp833->methods[1];
                panda$core$Object* $tmp836 = $tmp834(m$Iter820);
                m832 = ((org$pandalanguage$pandac$MethodDecl*) $tmp836);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m832);
                panda$collections$Array* $tmp838 = (panda$collections$Array*) malloc(40);
                $tmp838->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp838->refCount.value = 1;
                panda$collections$Array$init($tmp838);
                parameters837 = $tmp838;
                {
                    ITable* $tmp841 = ((panda$collections$Iterable*) m832->parameters)->$class->itable;
                    while ($tmp841->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp841 = $tmp841->next;
                    }
                    $fn843 $tmp842 = $tmp841->methods[0];
                    panda$collections$Iterator* $tmp844 = $tmp842(((panda$collections$Iterable*) m832->parameters));
                    p$Iter840 = $tmp844;
                    $l845:;
                    ITable* $tmp847 = p$Iter840->$class->itable;
                    while ($tmp847->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp847 = $tmp847->next;
                    }
                    $fn849 $tmp848 = $tmp847->methods[0];
                    panda$core$Bit $tmp850 = $tmp848(p$Iter840);
                    panda$core$Bit $tmp851 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp850);
                    if (!$tmp851.value) goto $l846;
                    {
                        ITable* $tmp853 = p$Iter840->$class->itable;
                        while ($tmp853->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp853 = $tmp853->next;
                        }
                        $fn855 $tmp854 = $tmp853->methods[1];
                        panda$core$Object* $tmp856 = $tmp854(p$Iter840);
                        p852 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp856);
                        org$pandalanguage$pandac$MethodDecl$Parameter* $tmp857 = (org$pandalanguage$pandac$MethodDecl$Parameter*) malloc(32);
                        $tmp857->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class;
                        $tmp857->refCount.value = 1;
                        org$pandalanguage$pandac$Type* $tmp859 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, type745, p852->type);
                        org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp857, p852->name, $tmp859);
                        panda$collections$Array$add$panda$collections$Array$T(parameters837, ((panda$core$Object*) $tmp857));
                    }
                    goto $l845;
                    $l846:;
                }
                org$pandalanguage$pandac$MethodDecl* $tmp861 = (org$pandalanguage$pandac$MethodDecl*) malloc(136);
                $tmp861->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class;
                $tmp861->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp863 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, type745, m832->returnType);
                org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp861, result752, ((org$pandalanguage$pandac$Symbol*) m832)->position, m832->doccomment, m832->annotations, m832->methodKind, ((org$pandalanguage$pandac$Symbol*) m832)->name, parameters837, $tmp863, m832->body);
                clone860 = $tmp861;
                panda$collections$Array$add$panda$collections$Array$T(result752->methods, ((panda$core$Object*) clone860));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result752->symbolTable, ((org$pandalanguage$pandac$Symbol*) clone860));
            }
            goto $l825;
            $l826:;
        }
        {
            ITable* $tmp865 = ((panda$collections$Iterable*) p_cl->fields)->$class->itable;
            while ($tmp865->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp865 = $tmp865->next;
            }
            $fn867 $tmp866 = $tmp865->methods[0];
            panda$collections$Iterator* $tmp868 = $tmp866(((panda$collections$Iterable*) p_cl->fields));
            f$Iter864 = $tmp868;
            $l869:;
            ITable* $tmp871 = f$Iter864->$class->itable;
            while ($tmp871->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp871 = $tmp871->next;
            }
            $fn873 $tmp872 = $tmp871->methods[0];
            panda$core$Bit $tmp874 = $tmp872(f$Iter864);
            panda$core$Bit $tmp875 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp874);
            if (!$tmp875.value) goto $l870;
            {
                ITable* $tmp877 = f$Iter864->$class->itable;
                while ($tmp877->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp877 = $tmp877->next;
                }
                $fn879 $tmp878 = $tmp877->methods[1];
                panda$core$Object* $tmp880 = $tmp878(f$Iter864);
                f876 = ((org$pandalanguage$pandac$FieldDecl*) $tmp880);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self, f876);
                org$pandalanguage$pandac$FieldDecl* $tmp882 = (org$pandalanguage$pandac$FieldDecl*) malloc(113);
                $tmp882->$class = (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class;
                $tmp882->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp884 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, type745, f876->type);
                org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp882, result752, ((org$pandalanguage$pandac$Symbol*) f876)->position, f876->doccomment, f876->annotations, f876->fieldKind, ((org$pandalanguage$pandac$Symbol*) f876)->name, $tmp884, f876->rawValue);
                clone881 = $tmp882;
                panda$collections$Array$add$panda$collections$Array$T(result752->fields, ((panda$core$Object*) clone881));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result752->symbolTable, ((org$pandalanguage$pandac$Symbol*) clone881));
            }
            goto $l869;
            $l870:;
        }
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classes, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) result752)->name), ((panda$core$Object*) result752));
        panda$collections$Array$add$panda$collections$Array$T(self->compilationQueue, ((panda$core$Object*) result752));
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, result752);
    }
    }
    return result752;
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type) {
    org$pandalanguage$pandac$ClassDecl* result885;
    PANDA_ASSERT(p_type->resolved.value);
    switch (p_type->typeKind.value) {
        case 10:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp886 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Position$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Symbol*) p_type)->position, ((org$pandalanguage$pandac$Symbol*) p_type)->name);
            result885 = $tmp886;
        }
        break;
        case 11:
        case 21:
        {
            panda$core$Object* $tmp887 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$ClassDecl* $tmp888 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Type*) $tmp887));
            result885 = $tmp888;
        }
        break;
        case 22:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp889 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_type->parameter->bound);
            return $tmp889;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
    panda$core$Bit $tmp890 = org$pandalanguage$pandac$Annotations$isSpecialize$R$panda$core$Bit(result885->annotations);
    if ($tmp890.value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp891 = org$pandalanguage$pandac$Compiler$specialize$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl(self, result885, p_type);
        result885 = $tmp891;
    }
    }
    return result885;
}
panda$collections$Set* org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_t) {
    org$pandalanguage$pandac$ClassDecl* cl892;
    panda$collections$Set* result894;
    panda$collections$Iterator* intf$Iter899;
    org$pandalanguage$pandac$Type* intf911;
    org$pandalanguage$pandac$ClassDecl* $tmp893 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_t);
    cl892 = $tmp893;
    PANDA_ASSERT(((panda$core$Bit) { cl892 != NULL }).value);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, cl892);
    panda$collections$Set* $tmp895 = (panda$collections$Set*) malloc(24);
    $tmp895->$class = (panda$core$Class*) &panda$collections$Set$class;
    $tmp895->refCount.value = 1;
    panda$collections$Set$init($tmp895);
    result894 = $tmp895;
    if (((panda$core$Bit) { cl892->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp897 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_t, cl892->rawSuper);
        panda$collections$Set* $tmp898 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self, $tmp897);
        panda$collections$Set$addAll$panda$collections$CollectionView$LTpanda$collections$Set$T$GT(result894, ((panda$collections$CollectionView*) $tmp898));
    }
    }
    {
        ITable* $tmp900 = ((panda$collections$Iterable*) cl892->rawInterfaces)->$class->itable;
        while ($tmp900->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp900 = $tmp900->next;
        }
        $fn902 $tmp901 = $tmp900->methods[0];
        panda$collections$Iterator* $tmp903 = $tmp901(((panda$collections$Iterable*) cl892->rawInterfaces));
        intf$Iter899 = $tmp903;
        $l904:;
        ITable* $tmp906 = intf$Iter899->$class->itable;
        while ($tmp906->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp906 = $tmp906->next;
        }
        $fn908 $tmp907 = $tmp906->methods[0];
        panda$core$Bit $tmp909 = $tmp907(intf$Iter899);
        panda$core$Bit $tmp910 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp909);
        if (!$tmp910.value) goto $l905;
        {
            ITable* $tmp912 = intf$Iter899->$class->itable;
            while ($tmp912->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp912 = $tmp912->next;
            }
            $fn914 $tmp913 = $tmp912->methods[1];
            panda$core$Object* $tmp915 = $tmp913(intf$Iter899);
            intf911 = ((org$pandalanguage$pandac$Type*) $tmp915);
            org$pandalanguage$pandac$Type* $tmp916 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_t, intf911);
            panda$collections$Set* $tmp917 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self, $tmp916);
            panda$collections$Set$addAll$panda$collections$CollectionView$LTpanda$collections$Set$T$GT(result894, ((panda$collections$CollectionView*) $tmp917));
        }
        goto $l904;
        $l905:;
    }
    panda$core$Bit $tmp918 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(cl892->classKind, ((panda$core$Int64) { 5012 }));
    if ($tmp918.value) {
    {
        panda$collections$Set$add$panda$collections$Set$T(result894, ((panda$collections$Key*) p_t));
    }
    }
    return result894;
}
panda$core$Bit org$pandalanguage$pandac$Compiler$signatureMatch$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_t1, org$pandalanguage$pandac$Type* p_t2) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp924;
    panda$core$Bit $tmp919 = org$pandalanguage$pandac$Type$isMethod$R$panda$core$Bit(p_t1);
    PANDA_ASSERT($tmp919.value);
    panda$core$Bit $tmp920 = org$pandalanguage$pandac$Type$isMethod$R$panda$core$Bit(p_t2);
    PANDA_ASSERT($tmp920.value);
    panda$core$Int64 $tmp921 = panda$collections$Array$get_count$R$panda$core$Int64(p_t1->subtypes);
    panda$core$Int64 $tmp922 = panda$collections$Array$get_count$R$panda$core$Int64(p_t2->subtypes);
    panda$core$Bit $tmp923 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp921, $tmp922);
    if ($tmp923.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Int64 $tmp925 = panda$collections$Array$get_count$R$panda$core$Int64(p_t1->subtypes);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp924, ((panda$core$Int64) { 0 }), $tmp925, ((panda$core$Bit) { false }));
    int64_t $tmp927 = $tmp924.min.value;
    panda$core$Int64 i926 = { $tmp927 };
    int64_t $tmp929 = $tmp924.max.value;
    bool $tmp930 = $tmp924.inclusive.value;
    if ($tmp930) goto $l937; else goto $l938;
    $l937:;
    if ($tmp927 <= $tmp929) goto $l931; else goto $l933;
    $l938:;
    if ($tmp927 < $tmp929) goto $l931; else goto $l933;
    $l931:;
    {
        panda$core$Object* $tmp939 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t1->subtypes, i926);
        panda$core$Object* $tmp940 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t2->subtypes, i926);
        panda$core$Bit $tmp941 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp939), ((org$pandalanguage$pandac$Type*) $tmp940));
        if ($tmp941.value) {
        {
            return ((panda$core$Bit) { false });
        }
        }
    }
    $l934:;
    int64_t $tmp943 = $tmp929 - i926.value;
    if ($tmp930) goto $l944; else goto $l945;
    $l944:;
    if ($tmp943 >= 1) goto $l942; else goto $l933;
    $l945:;
    if ($tmp943 > 1) goto $l942; else goto $l933;
    $l942:;
    i926.value += 1;
    goto $l931;
    $l933:;
    return ((panda$core$Bit) { true });
}
org$pandalanguage$pandac$MethodDecl* org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_owner, panda$core$String* p_name, org$pandalanguage$pandac$Type* p_methodType, panda$core$Bit p_checkInterfaces) {
    org$pandalanguage$pandac$ClassDecl* cl948;
    panda$collections$Iterator* test$Iter950;
    org$pandalanguage$pandac$MethodDecl* test962;
    panda$collections$Iterator* raw$Iter975;
    org$pandalanguage$pandac$Type* raw987;
    org$pandalanguage$pandac$MethodDecl* result992;
    org$pandalanguage$pandac$ClassDecl* $tmp949 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_owner);
    cl948 = $tmp949;
    PANDA_ASSERT(((panda$core$Bit) { cl948 != NULL }).value);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, cl948);
    {
        ITable* $tmp951 = ((panda$collections$Iterable*) cl948->methods)->$class->itable;
        while ($tmp951->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp951 = $tmp951->next;
        }
        $fn953 $tmp952 = $tmp951->methods[0];
        panda$collections$Iterator* $tmp954 = $tmp952(((panda$collections$Iterable*) cl948->methods));
        test$Iter950 = $tmp954;
        $l955:;
        ITable* $tmp957 = test$Iter950->$class->itable;
        while ($tmp957->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp957 = $tmp957->next;
        }
        $fn959 $tmp958 = $tmp957->methods[0];
        panda$core$Bit $tmp960 = $tmp958(test$Iter950);
        panda$core$Bit $tmp961 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp960);
        if (!$tmp961.value) goto $l956;
        {
            ITable* $tmp963 = test$Iter950->$class->itable;
            while ($tmp963->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp963 = $tmp963->next;
            }
            $fn965 $tmp964 = $tmp963->methods[1];
            panda$core$Object* $tmp966 = $tmp964(test$Iter950);
            test962 = ((org$pandalanguage$pandac$MethodDecl*) $tmp966);
            panda$core$Bit $tmp967 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) test962)->name, p_name);
            if ($tmp967.value) {
            {
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, test962);
                org$pandalanguage$pandac$Type* $tmp968 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, test962);
                org$pandalanguage$pandac$Type* $tmp969 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_owner, $tmp968);
                panda$core$Bit $tmp970 = org$pandalanguage$pandac$Compiler$signatureMatch$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, $tmp969, p_methodType);
                if ($tmp970.value) {
                {
                    return test962;
                }
                }
            }
            }
        }
        goto $l955;
        $l956:;
    }
    bool $tmp971 = p_checkInterfaces.value;
    if ($tmp971) goto $l972;
    panda$core$Bit $tmp973 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(cl948->classKind, ((panda$core$Int64) { 5012 }));
    $tmp971 = $tmp973.value;
    $l972:;
    panda$core$Bit $tmp974 = { $tmp971 };
    if ($tmp974.value) {
    {
        {
            ITable* $tmp976 = ((panda$collections$Iterable*) cl948->rawInterfaces)->$class->itable;
            while ($tmp976->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp976 = $tmp976->next;
            }
            $fn978 $tmp977 = $tmp976->methods[0];
            panda$collections$Iterator* $tmp979 = $tmp977(((panda$collections$Iterable*) cl948->rawInterfaces));
            raw$Iter975 = $tmp979;
            $l980:;
            ITable* $tmp982 = raw$Iter975->$class->itable;
            while ($tmp982->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp982 = $tmp982->next;
            }
            $fn984 $tmp983 = $tmp982->methods[0];
            panda$core$Bit $tmp985 = $tmp983(raw$Iter975);
            panda$core$Bit $tmp986 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp985);
            if (!$tmp986.value) goto $l981;
            {
                ITable* $tmp988 = raw$Iter975->$class->itable;
                while ($tmp988->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp988 = $tmp988->next;
                }
                $fn990 $tmp989 = $tmp988->methods[1];
                panda$core$Object* $tmp991 = $tmp989(raw$Iter975);
                raw987 = ((org$pandalanguage$pandac$Type*) $tmp991);
                org$pandalanguage$pandac$Type* $tmp993 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_owner, raw987);
                org$pandalanguage$pandac$MethodDecl* $tmp994 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp993, p_name, p_methodType, p_checkInterfaces);
                result992 = $tmp994;
                if (((panda$core$Bit) { result992 != NULL }).value) {
                {
                    return result992;
                }
                }
            }
            goto $l980;
            $l981:;
        }
    }
    }
    if (((panda$core$Bit) { cl948->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp995 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_owner, cl948->rawSuper);
        org$pandalanguage$pandac$MethodDecl* $tmp996 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp995, p_name, p_methodType, p_checkInterfaces);
        return $tmp996;
    }
    }
    return NULL;
}
org$pandalanguage$pandac$MethodDecl* org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$Type* methodType998;
    org$pandalanguage$pandac$Type* owner1000;
    panda$collections$Iterator* raw$Iter1002;
    org$pandalanguage$pandac$Type* raw1014;
    org$pandalanguage$pandac$MethodDecl* result1019;
    org$pandalanguage$pandac$MethodDecl* result1022;
    if (p_m->overrideKnown.value) {
    {
        return p_m->overridden;
    }
    }
    panda$core$Bit $tmp997 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 59 }));
    if ($tmp997.value) {
    {
        p_m->overrideKnown = ((panda$core$Bit) { true });
        return NULL;
    }
    }
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
    org$pandalanguage$pandac$Type* $tmp999 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, p_m);
    methodType998 = $tmp999;
    org$pandalanguage$pandac$Type* $tmp1001 = org$pandalanguage$pandac$ClassDecl$typeWithParameters$R$org$pandalanguage$pandac$Type(p_m->owner);
    owner1000 = $tmp1001;
    {
        ITable* $tmp1003 = ((panda$collections$Iterable*) p_m->owner->rawInterfaces)->$class->itable;
        while ($tmp1003->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1003 = $tmp1003->next;
        }
        $fn1005 $tmp1004 = $tmp1003->methods[0];
        panda$collections$Iterator* $tmp1006 = $tmp1004(((panda$collections$Iterable*) p_m->owner->rawInterfaces));
        raw$Iter1002 = $tmp1006;
        $l1007:;
        ITable* $tmp1009 = raw$Iter1002->$class->itable;
        while ($tmp1009->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1009 = $tmp1009->next;
        }
        $fn1011 $tmp1010 = $tmp1009->methods[0];
        panda$core$Bit $tmp1012 = $tmp1010(raw$Iter1002);
        panda$core$Bit $tmp1013 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1012);
        if (!$tmp1013.value) goto $l1008;
        {
            ITable* $tmp1015 = raw$Iter1002->$class->itable;
            while ($tmp1015->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1015 = $tmp1015->next;
            }
            $fn1017 $tmp1016 = $tmp1015->methods[1];
            panda$core$Object* $tmp1018 = $tmp1016(raw$Iter1002);
            raw1014 = ((org$pandalanguage$pandac$Type*) $tmp1018);
            org$pandalanguage$pandac$Type* $tmp1020 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, owner1000, raw1014);
            org$pandalanguage$pandac$MethodDecl* $tmp1021 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp1020, ((org$pandalanguage$pandac$Symbol*) p_m)->name, methodType998, ((panda$core$Bit) { true }));
            result1019 = $tmp1021;
            if (((panda$core$Bit) { result1019 != NULL }).value) {
            {
                p_m->overrideKnown = ((panda$core$Bit) { true });
                p_m->overridden = result1019;
                return result1019;
            }
            }
        }
        goto $l1007;
        $l1008:;
    }
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_m->owner);
    if (((panda$core$Bit) { p_m->owner->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp1023 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, owner1000, p_m->owner->rawSuper);
        org$pandalanguage$pandac$MethodDecl* $tmp1024 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp1023, ((org$pandalanguage$pandac$Symbol*) p_m)->name, methodType998, ((panda$core$Bit) { true }));
        result1022 = $tmp1024;
        p_m->overrideKnown = ((panda$core$Bit) { true });
        p_m->overridden = result1022;
        return result1022;
    }
    }
    p_m->overrideKnown = ((panda$core$Bit) { true });
    return NULL;
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$interfaceMethods$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl, org$pandalanguage$pandac$Type* p_intf) {
    org$pandalanguage$pandac$ClassDecl* intfClass1025;
    panda$collections$Array* result1027;
    panda$collections$Iterator* m$Iter1030;
    org$pandalanguage$pandac$MethodDecl* m1042;
    org$pandalanguage$pandac$MethodDecl* found1047;
    org$pandalanguage$pandac$ClassDecl* $tmp1026 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_intf);
    intfClass1025 = $tmp1026;
    PANDA_ASSERT(((panda$core$Bit) { intfClass1025 != NULL }).value);
    panda$collections$Array* $tmp1028 = (panda$collections$Array*) malloc(40);
    $tmp1028->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1028->refCount.value = 1;
    panda$collections$Array$init($tmp1028);
    result1027 = $tmp1028;
    {
        ITable* $tmp1031 = ((panda$collections$Iterable*) intfClass1025->methods)->$class->itable;
        while ($tmp1031->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1031 = $tmp1031->next;
        }
        $fn1033 $tmp1032 = $tmp1031->methods[0];
        panda$collections$Iterator* $tmp1034 = $tmp1032(((panda$collections$Iterable*) intfClass1025->methods));
        m$Iter1030 = $tmp1034;
        $l1035:;
        ITable* $tmp1037 = m$Iter1030->$class->itable;
        while ($tmp1037->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1037 = $tmp1037->next;
        }
        $fn1039 $tmp1038 = $tmp1037->methods[0];
        panda$core$Bit $tmp1040 = $tmp1038(m$Iter1030);
        panda$core$Bit $tmp1041 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1040);
        if (!$tmp1041.value) goto $l1036;
        {
            ITable* $tmp1043 = m$Iter1030->$class->itable;
            while ($tmp1043->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1043 = $tmp1043->next;
            }
            $fn1045 $tmp1044 = $tmp1043->methods[1];
            panda$core$Object* $tmp1046 = $tmp1044(m$Iter1030);
            m1042 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1046);
            org$pandalanguage$pandac$Type* $tmp1048 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
            org$pandalanguage$pandac$Type* $tmp1049 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, m1042);
            org$pandalanguage$pandac$Type* $tmp1050 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_intf, $tmp1049);
            org$pandalanguage$pandac$MethodDecl* $tmp1051 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp1048, ((org$pandalanguage$pandac$Symbol*) m1042)->name, $tmp1050, ((panda$core$Bit) { false }));
            found1047 = $tmp1051;
            PANDA_ASSERT(((panda$core$Bit) { found1047 != NULL }).value);
            panda$collections$Array$add$panda$collections$Array$T(result1027, ((panda$core$Object*) found1047));
        }
        goto $l1035;
        $l1036:;
    }
    return ((panda$collections$ListView*) result1027);
}
org$pandalanguage$pandac$SymbolTable* org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$ClassDecl* superCl1053;
    panda$collections$Iterator* rawIntf$Iter1056;
    org$pandalanguage$pandac$Type* rawIntf1068;
    org$pandalanguage$pandac$ClassDecl* intf1073;
    panda$core$Bit $tmp1052 = panda$core$Bit$$NOT$R$panda$core$Bit(p_cl->symbolTableResolved);
    if ($tmp1052.value) {
    {
        p_cl->symbolTableResolved = ((panda$core$Bit) { true });
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
        if (((panda$core$Bit) { p_cl->rawSuper != NULL }).value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp1054 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_cl->rawSuper);
            superCl1053 = $tmp1054;
            if (((panda$core$Bit) { superCl1053 != NULL }).value) {
            {
                org$pandalanguage$pandac$SymbolTable* $tmp1055 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, superCl1053);
                panda$collections$Array$add$panda$collections$Array$T(p_cl->symbolTable->parents, ((panda$core$Object*) $tmp1055));
            }
            }
        }
        }
        {
            ITable* $tmp1057 = ((panda$collections$Iterable*) p_cl->rawInterfaces)->$class->itable;
            while ($tmp1057->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1057 = $tmp1057->next;
            }
            $fn1059 $tmp1058 = $tmp1057->methods[0];
            panda$collections$Iterator* $tmp1060 = $tmp1058(((panda$collections$Iterable*) p_cl->rawInterfaces));
            rawIntf$Iter1056 = $tmp1060;
            $l1061:;
            ITable* $tmp1063 = rawIntf$Iter1056->$class->itable;
            while ($tmp1063->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1063 = $tmp1063->next;
            }
            $fn1065 $tmp1064 = $tmp1063->methods[0];
            panda$core$Bit $tmp1066 = $tmp1064(rawIntf$Iter1056);
            panda$core$Bit $tmp1067 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1066);
            if (!$tmp1067.value) goto $l1062;
            {
                ITable* $tmp1069 = rawIntf$Iter1056->$class->itable;
                while ($tmp1069->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1069 = $tmp1069->next;
                }
                $fn1071 $tmp1070 = $tmp1069->methods[1];
                panda$core$Object* $tmp1072 = $tmp1070(rawIntf$Iter1056);
                rawIntf1068 = ((org$pandalanguage$pandac$Type*) $tmp1072);
                org$pandalanguage$pandac$ClassDecl* $tmp1074 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, rawIntf1068);
                intf1073 = $tmp1074;
                if (((panda$core$Bit) { intf1073 != NULL }).value) {
                {
                    org$pandalanguage$pandac$SymbolTable* $tmp1075 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, intf1073);
                    panda$collections$Array$add$panda$collections$Array$T(p_cl->symbolTable->parents, ((panda$core$Object*) $tmp1075));
                }
                }
            }
            goto $l1061;
            $l1062:;
        }
    }
    }
    return p_cl->symbolTable;
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$ClassDecl* superCl1078;
    panda$collections$Iterator* derived$Iter1081;
    org$pandalanguage$pandac$MethodDecl* derived1093;
    panda$core$Bit found1103;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1104;
    org$pandalanguage$pandac$MethodDecl* base1119;
    panda$core$Int64 $tmp1076 = panda$collections$Array$get_count$R$panda$core$Int64(p_cl->virtualMethods);
    panda$core$Bit $tmp1077 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1076, ((panda$core$Int64) { 0 }));
    if ($tmp1077.value) {
    {
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
        panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_cl));
        if (((panda$core$Bit) { p_cl->rawSuper != NULL }).value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp1079 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_cl->rawSuper);
            superCl1078 = $tmp1079;
            if (((panda$core$Bit) { superCl1078 == NULL }).value) {
            {
                panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
                return ((panda$collections$ListView*) p_cl->virtualMethods);
            }
            }
            panda$collections$ListView* $tmp1080 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self, superCl1078);
            panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(p_cl->virtualMethods, ((panda$collections$CollectionView*) $tmp1080));
        }
        }
        {
            ITable* $tmp1082 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
            while ($tmp1082->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1082 = $tmp1082->next;
            }
            $fn1084 $tmp1083 = $tmp1082->methods[0];
            panda$collections$Iterator* $tmp1085 = $tmp1083(((panda$collections$Iterable*) p_cl->methods));
            derived$Iter1081 = $tmp1085;
            $l1086:;
            ITable* $tmp1088 = derived$Iter1081->$class->itable;
            while ($tmp1088->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1088 = $tmp1088->next;
            }
            $fn1090 $tmp1089 = $tmp1088->methods[0];
            panda$core$Bit $tmp1091 = $tmp1089(derived$Iter1081);
            panda$core$Bit $tmp1092 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1091);
            if (!$tmp1092.value) goto $l1087;
            {
                ITable* $tmp1094 = derived$Iter1081->$class->itable;
                while ($tmp1094->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1094 = $tmp1094->next;
                }
                $fn1096 $tmp1095 = $tmp1094->methods[1];
                panda$core$Object* $tmp1097 = $tmp1095(derived$Iter1081);
                derived1093 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1097);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, derived1093);
                panda$core$Bit $tmp1099 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(derived1093->methodKind, ((panda$core$Int64) { 59 }));
                bool $tmp1098 = $tmp1099.value;
                if ($tmp1098) goto $l1100;
                panda$core$Bit $tmp1101 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(derived1093->annotations);
                $tmp1098 = $tmp1101.value;
                $l1100:;
                panda$core$Bit $tmp1102 = { $tmp1098 };
                if ($tmp1102.value) {
                {
                    goto $l1086;
                }
                }
                found1103 = ((panda$core$Bit) { false });
                panda$core$Int64 $tmp1105 = panda$collections$Array$get_count$R$panda$core$Int64(p_cl->virtualMethods);
                panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1104, ((panda$core$Int64) { 0 }), $tmp1105, ((panda$core$Bit) { false }));
                int64_t $tmp1107 = $tmp1104.min.value;
                panda$core$Int64 i1106 = { $tmp1107 };
                int64_t $tmp1109 = $tmp1104.max.value;
                bool $tmp1110 = $tmp1104.inclusive.value;
                if ($tmp1110) goto $l1117; else goto $l1118;
                $l1117:;
                if ($tmp1107 <= $tmp1109) goto $l1111; else goto $l1113;
                $l1118:;
                if ($tmp1107 < $tmp1109) goto $l1111; else goto $l1113;
                $l1111:;
                {
                    panda$core$Object* $tmp1120 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_cl->virtualMethods, i1106);
                    base1119 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1120);
                    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, base1119);
                    panda$core$Bit $tmp1121 = org$pandalanguage$pandac$MethodDecl$matches$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(derived1093, base1119);
                    if ($tmp1121.value) {
                    {
                        found1103 = ((panda$core$Bit) { true });
                        panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(p_cl->virtualMethods, i1106, ((panda$core$Object*) derived1093));
                        goto $l1113;
                    }
                    }
                }
                $l1114:;
                int64_t $tmp1123 = $tmp1109 - i1106.value;
                if ($tmp1110) goto $l1124; else goto $l1125;
                $l1124:;
                if ($tmp1123 >= 1) goto $l1122; else goto $l1113;
                $l1125:;
                if ($tmp1123 > 1) goto $l1122; else goto $l1113;
                $l1122:;
                i1106.value += 1;
                goto $l1111;
                $l1113:;
                panda$core$Bit $tmp1128 = panda$core$Bit$$NOT$R$panda$core$Bit(found1103);
                if ($tmp1128.value) {
                {
                    panda$collections$Array$add$panda$collections$Array$T(p_cl->virtualMethods, ((panda$core$Object*) derived1093));
                }
                }
            }
            goto $l1086;
            $l1087:;
        }
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    }
    }
    return ((panda$collections$ListView*) p_cl->virtualMethods);
}
void org$pandalanguage$pandac$Compiler$addInheritedMethods$org$pandalanguage$pandac$SymbolTable$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$SymbolTable* p_st, panda$core$String* p_name, panda$collections$Array* p_result, panda$collections$ListView* p_types) {
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$getMethodReference$org$pandalanguage$pandac$SymbolTable$org$pandalanguage$pandac$IRNode$Q$panda$core$String$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$SymbolTable* p_st, org$pandalanguage$pandac$IRNode* p_target, panda$core$String* p_name, org$pandalanguage$pandac$Position p_position, panda$collections$ListView* p_types) {
    panda$collections$Array* methods1129;
    org$pandalanguage$pandac$Symbol* s1132;
    panda$collections$Iterator* m$Iter1138;
    org$pandalanguage$pandac$MethodDecl* m1150;
    panda$collections$Iterator* p$Iter1157;
    org$pandalanguage$pandac$SymbolTable* p1169;
    panda$collections$Array* children1174;
    panda$collections$Array* types1186;
    panda$collections$Iterator* m$Iter1189;
    org$pandalanguage$pandac$MethodRef* m1201;
    panda$collections$Array* $tmp1130 = (panda$collections$Array*) malloc(40);
    $tmp1130->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1130->refCount.value = 1;
    panda$collections$Array$init($tmp1130);
    methods1129 = $tmp1130;
    org$pandalanguage$pandac$Symbol* $tmp1133 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(p_st, p_name);
    s1132 = $tmp1133;
    PANDA_ASSERT(((panda$core$Bit) { s1132 != NULL }).value);
    panda$core$Bit $tmp1134 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(s1132->kind, ((panda$core$Int64) { 204 }));
    if ($tmp1134.value) {
    {
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, ((org$pandalanguage$pandac$MethodDecl*) s1132));
        org$pandalanguage$pandac$MethodRef* $tmp1135 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
        $tmp1135->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
        $tmp1135->refCount.value = 1;
        org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp1135, ((org$pandalanguage$pandac$MethodDecl*) s1132), p_types);
        panda$collections$Array$add$panda$collections$Array$T(methods1129, ((panda$core$Object*) $tmp1135));
    }
    }
    else {
    {
        panda$core$Bit $tmp1137 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(s1132->kind, ((panda$core$Int64) { 205 }));
        PANDA_ASSERT($tmp1137.value);
        {
            ITable* $tmp1139 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s1132)->methods)->$class->itable;
            while ($tmp1139->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1139 = $tmp1139->next;
            }
            $fn1141 $tmp1140 = $tmp1139->methods[0];
            panda$collections$Iterator* $tmp1142 = $tmp1140(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s1132)->methods));
            m$Iter1138 = $tmp1142;
            $l1143:;
            ITable* $tmp1145 = m$Iter1138->$class->itable;
            while ($tmp1145->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1145 = $tmp1145->next;
            }
            $fn1147 $tmp1146 = $tmp1145->methods[0];
            panda$core$Bit $tmp1148 = $tmp1146(m$Iter1138);
            panda$core$Bit $tmp1149 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1148);
            if (!$tmp1149.value) goto $l1144;
            {
                ITable* $tmp1151 = m$Iter1138->$class->itable;
                while ($tmp1151->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1151 = $tmp1151->next;
                }
                $fn1153 $tmp1152 = $tmp1151->methods[1];
                panda$core$Object* $tmp1154 = $tmp1152(m$Iter1138);
                m1150 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1154);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m1150);
                org$pandalanguage$pandac$MethodRef* $tmp1155 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                $tmp1155->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                $tmp1155->refCount.value = 1;
                org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp1155, m1150, p_types);
                panda$collections$Array$add$panda$collections$Array$T(methods1129, ((panda$core$Object*) $tmp1155));
            }
            goto $l1143;
            $l1144:;
        }
    }
    }
    {
        ITable* $tmp1158 = ((panda$collections$Iterable*) p_st->parents)->$class->itable;
        while ($tmp1158->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1158 = $tmp1158->next;
        }
        $fn1160 $tmp1159 = $tmp1158->methods[0];
        panda$collections$Iterator* $tmp1161 = $tmp1159(((panda$collections$Iterable*) p_st->parents));
        p$Iter1157 = $tmp1161;
        $l1162:;
        ITable* $tmp1164 = p$Iter1157->$class->itable;
        while ($tmp1164->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1164 = $tmp1164->next;
        }
        $fn1166 $tmp1165 = $tmp1164->methods[0];
        panda$core$Bit $tmp1167 = $tmp1165(p$Iter1157);
        panda$core$Bit $tmp1168 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1167);
        if (!$tmp1168.value) goto $l1163;
        {
            ITable* $tmp1170 = p$Iter1157->$class->itable;
            while ($tmp1170->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1170 = $tmp1170->next;
            }
            $fn1172 $tmp1171 = $tmp1170->methods[1];
            panda$core$Object* $tmp1173 = $tmp1171(p$Iter1157);
            p1169 = ((org$pandalanguage$pandac$SymbolTable*) $tmp1173);
            org$pandalanguage$pandac$Compiler$addInheritedMethods$org$pandalanguage$pandac$SymbolTable$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p1169, p_name, methods1129, p_types);
        }
        goto $l1162;
        $l1163:;
    }
    panda$collections$Array* $tmp1175 = (panda$collections$Array*) malloc(40);
    $tmp1175->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1175->refCount.value = 1;
    panda$collections$Array$init($tmp1175);
    children1174 = $tmp1175;
    if (((panda$core$Bit) { p_target != NULL }).value) {
    {
        panda$collections$Array$add$panda$collections$Array$T(children1174, ((panda$core$Object*) p_target));
    }
    }
    panda$core$Int64 $tmp1177 = panda$collections$Array$get_count$R$panda$core$Int64(methods1129);
    panda$core$Bit $tmp1178 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1177, ((panda$core$Int64) { 1 }));
    if ($tmp1178.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp1179 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp1179->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp1179->refCount.value = 1;
        panda$core$Object* $tmp1181 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(methods1129, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Type* $tmp1182 = org$pandalanguage$pandac$MethodRef$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$MethodRef*) $tmp1181));
        panda$core$Object* $tmp1183 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(methods1129, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp1179, ((panda$core$Int64) { 1002 }), p_position, $tmp1182, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodRef*) $tmp1183)), ((panda$collections$ListView*) children1174));
        return $tmp1179;
    }
    }
    else {
    {
        panda$core$Int64 $tmp1184 = panda$collections$Array$get_count$R$panda$core$Int64(methods1129);
        panda$core$Bit $tmp1185 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1184, ((panda$core$Int64) { 0 }));
        PANDA_ASSERT($tmp1185.value);
        panda$collections$Array* $tmp1187 = (panda$collections$Array*) malloc(40);
        $tmp1187->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp1187->refCount.value = 1;
        panda$collections$Array$init($tmp1187);
        types1186 = $tmp1187;
        {
            ITable* $tmp1190 = ((panda$collections$Iterable*) methods1129)->$class->itable;
            while ($tmp1190->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1190 = $tmp1190->next;
            }
            $fn1192 $tmp1191 = $tmp1190->methods[0];
            panda$collections$Iterator* $tmp1193 = $tmp1191(((panda$collections$Iterable*) methods1129));
            m$Iter1189 = $tmp1193;
            $l1194:;
            ITable* $tmp1196 = m$Iter1189->$class->itable;
            while ($tmp1196->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1196 = $tmp1196->next;
            }
            $fn1198 $tmp1197 = $tmp1196->methods[0];
            panda$core$Bit $tmp1199 = $tmp1197(m$Iter1189);
            panda$core$Bit $tmp1200 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1199);
            if (!$tmp1200.value) goto $l1195;
            {
                ITable* $tmp1202 = m$Iter1189->$class->itable;
                while ($tmp1202->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1202 = $tmp1202->next;
                }
                $fn1204 $tmp1203 = $tmp1202->methods[1];
                panda$core$Object* $tmp1205 = $tmp1203(m$Iter1189);
                m1201 = ((org$pandalanguage$pandac$MethodRef*) $tmp1205);
                org$pandalanguage$pandac$Type* $tmp1206 = org$pandalanguage$pandac$MethodRef$type$R$org$pandalanguage$pandac$Type(m1201);
                panda$collections$Array$add$panda$collections$Array$T(types1186, ((panda$core$Object*) $tmp1206));
            }
            goto $l1194;
            $l1195:;
        }
        org$pandalanguage$pandac$IRNode* $tmp1207 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp1207->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp1207->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp1209 = (org$pandalanguage$pandac$Type*) malloc(96);
        $tmp1209->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
        $tmp1209->refCount.value = 1;
        org$pandalanguage$pandac$Type$init$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp1209, ((panda$collections$ListView*) types1186));
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp1207, ((panda$core$Int64) { 1003 }), p_position, $tmp1209, ((panda$core$Object*) methods1129), ((panda$collections$ListView*) children1174));
        return $tmp1207;
    }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$symbolRef$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$Symbol* p_s, org$pandalanguage$pandac$SymbolTable* p_st) {
    org$pandalanguage$pandac$ClassDecl* cl1211;
    org$pandalanguage$pandac$FieldDecl* f1227;
    panda$collections$Array* children1230;
    org$pandalanguage$pandac$Type* effectiveType1235;
    org$pandalanguage$pandac$IRNode* result1240;
    switch (p_s->kind.value) {
        case 200:
        {
            PANDA_ASSERT(((panda$core$Bit) { p_target == NULL }).value);
            org$pandalanguage$pandac$ClassDecl* $tmp1212 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Position$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_position, ((org$pandalanguage$pandac$Alias*) p_s)->fullName);
            cl1211 = $tmp1212;
            if (((panda$core$Bit) { cl1211 != NULL }).value) {
            {
                org$pandalanguage$pandac$Type* $tmp1213 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl1211);
                org$pandalanguage$pandac$Compiler$checkGenericParameters$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_position, cl1211, $tmp1213);
                org$pandalanguage$pandac$IRNode* $tmp1214 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1214->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1214->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1216 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$Type* $tmp1217 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl1211);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1214, ((panda$core$Int64) { 1001 }), p_position, $tmp1216, $tmp1217);
                return $tmp1214;
            }
            }
            return NULL;
        }
        break;
        case 201:
        {
            org$pandalanguage$pandac$Type* $tmp1218 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) p_s));
            org$pandalanguage$pandac$Compiler$checkGenericParameters$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_position, ((org$pandalanguage$pandac$ClassDecl*) p_s), $tmp1218);
            org$pandalanguage$pandac$IRNode* $tmp1219 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp1219->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1219->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp1221 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$Type* $tmp1222 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) p_s));
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1219, ((panda$core$Int64) { 1001 }), p_position, $tmp1221, $tmp1222);
            return $tmp1219;
        }
        break;
        case 204:
        case 205:
        {
            panda$collections$ListView* $tmp1223 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$IRNode$Q$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p_target);
            org$pandalanguage$pandac$IRNode* $tmp1224 = org$pandalanguage$pandac$Compiler$getMethodReference$org$pandalanguage$pandac$SymbolTable$org$pandalanguage$pandac$IRNode$Q$panda$core$String$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$IRNode(self, p_st, p_target, p_s->name, p_position, $tmp1223);
            return $tmp1224;
        }
        break;
        case 208:
        {
            org$pandalanguage$pandac$IRNode* $tmp1225 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp1225->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1225->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp1225, ((panda$core$Int64) { 1016 }), p_position, ((org$pandalanguage$pandac$Variable*) p_s)->type, ((org$pandalanguage$pandac$Variable*) p_s));
            return $tmp1225;
        }
        break;
        case 202:
        {
            f1227 = ((org$pandalanguage$pandac$FieldDecl*) p_s);
            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self, f1227);
            org$pandalanguage$pandac$Type* $tmp1228 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1229 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(f1227->type, $tmp1228);
            if ($tmp1229.value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp1231 = (panda$collections$Array*) malloc(40);
            $tmp1231->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1231->refCount.value = 1;
            panda$collections$Array$init($tmp1231);
            children1230 = $tmp1231;
            if (((panda$core$Bit) { p_target != NULL }).value) {
            {
                panda$core$Bit $tmp1233 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1024 }));
                if ($tmp1233.value) {
                {
                    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_target->position, &$s1234);
                    return NULL;
                }
                }
                org$pandalanguage$pandac$Type* $tmp1236 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_target->type, f1227->type);
                effectiveType1235 = $tmp1236;
                panda$core$Bit $tmp1237 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(f1227->annotations);
                if ($tmp1237.value) {
                {
                    panda$collections$Array$add$panda$collections$Array$T(children1230, ((panda$core$Object*) p_target));
                }
                }
                else {
                {
                    org$pandalanguage$pandac$Type* $tmp1238 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(f1227->owner);
                    org$pandalanguage$pandac$IRNode* $tmp1239 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_target, $tmp1238);
                    panda$collections$Array$add$panda$collections$Array$T(children1230, ((panda$core$Object*) $tmp1239));
                }
                }
                org$pandalanguage$pandac$IRNode* $tmp1241 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1241->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1241->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp1241, ((panda$core$Int64) { 1026 }), p_position, f1227->type, ((panda$core$Object*) p_s), ((panda$collections$ListView*) children1230));
                result1240 = $tmp1241;
                panda$core$Bit $tmp1243 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(effectiveType1235, result1240->type);
                if ($tmp1243.value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp1244 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, result1240, p_position, ((panda$core$Bit) { false }), effectiveType1235);
                    result1240 = $tmp1244;
                }
                }
                return result1240;
            }
            }
            else {
            {
                org$pandalanguage$pandac$IRNode* $tmp1245 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1245->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1245->refCount.value = 1;
                panda$core$Object* $tmp1247 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
                org$pandalanguage$pandac$Type* $tmp1248 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp1247));
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp1245, ((panda$core$Int64) { 1025 }), p_position, $tmp1248);
                panda$collections$Array$add$panda$collections$Array$T(children1230, ((panda$core$Object*) $tmp1245));
                org$pandalanguage$pandac$IRNode* $tmp1249 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1249->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1249->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp1249, ((panda$core$Int64) { 1026 }), p_position, f1227->type, ((panda$core$Object*) p_s), ((panda$collections$ListView*) children1230));
                return $tmp1249;
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
    panda$collections$HashMap* typeMap1257;
    org$pandalanguage$pandac$Type* base1260;
    org$pandalanguage$pandac$ClassDecl* cl1262;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1264;
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
            panda$core$Int64 $tmp1251 = panda$collections$Array$get_count$R$panda$core$Int64(p_context->subtypes);
            panda$core$Bit $tmp1252 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1251, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp1252.value);
            panda$core$Object* $tmp1253 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_context->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp1254 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$Type*) $tmp1253), p_raw);
            return $tmp1254;
        }
        break;
        case 21:
        {
            panda$core$Int64 $tmp1255 = panda$collections$Array$get_count$R$panda$core$Int64(p_context->subtypes);
            panda$core$Bit $tmp1256 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp1255, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1256.value);
            panda$collections$HashMap* $tmp1258 = (panda$collections$HashMap*) malloc(56);
            $tmp1258->$class = (panda$core$Class*) &panda$collections$HashMap$class;
            $tmp1258->refCount.value = 1;
            panda$collections$HashMap$init($tmp1258);
            typeMap1257 = $tmp1258;
            panda$core$Object* $tmp1261 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_context->subtypes, ((panda$core$Int64) { 0 }));
            base1260 = ((org$pandalanguage$pandac$Type*) $tmp1261);
            org$pandalanguage$pandac$ClassDecl* $tmp1263 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Symbol*) base1260)->name);
            cl1262 = $tmp1263;
            PANDA_ASSERT(((panda$core$Bit) { cl1262 != NULL }).value);
            panda$core$Int64 $tmp1265 = panda$collections$Array$get_count$R$panda$core$Int64(p_context->subtypes);
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1264, ((panda$core$Int64) { 1 }), $tmp1265, ((panda$core$Bit) { false }));
            int64_t $tmp1267 = $tmp1264.min.value;
            panda$core$Int64 i1266 = { $tmp1267 };
            int64_t $tmp1269 = $tmp1264.max.value;
            bool $tmp1270 = $tmp1264.inclusive.value;
            if ($tmp1270) goto $l1277; else goto $l1278;
            $l1277:;
            if ($tmp1267 <= $tmp1269) goto $l1271; else goto $l1273;
            $l1278:;
            if ($tmp1267 < $tmp1269) goto $l1271; else goto $l1273;
            $l1271:;
            {
                panda$core$String* $tmp1280 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) cl1262)->name, &$s1279);
                panda$core$Int64 $tmp1281 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i1266, ((panda$core$Int64) { 1 }));
                ITable* $tmp1282 = ((panda$collections$ListView*) cl1262->parameters)->$class->itable;
                while ($tmp1282->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp1282 = $tmp1282->next;
                }
                $fn1284 $tmp1283 = $tmp1282->methods[0];
                panda$core$Object* $tmp1285 = $tmp1283(((panda$collections$ListView*) cl1262->parameters), $tmp1281);
                panda$core$String* $tmp1286 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1280, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp1285))->name);
                panda$core$Object* $tmp1287 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_context->subtypes, i1266);
                panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(typeMap1257, ((panda$collections$Key*) $tmp1286), ((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp1287)));
            }
            $l1274:;
            int64_t $tmp1289 = $tmp1269 - i1266.value;
            if ($tmp1270) goto $l1290; else goto $l1291;
            $l1290:;
            if ($tmp1289 >= 1) goto $l1288; else goto $l1273;
            $l1291:;
            if ($tmp1289 > 1) goto $l1288; else goto $l1273;
            $l1288:;
            i1266.value += 1;
            goto $l1271;
            $l1273:;
            org$pandalanguage$pandac$Type* $tmp1294 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(p_raw, typeMap1257);
            return $tmp1294;
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
    org$pandalanguage$pandac$Type* $tmp1295 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1296 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_type, $tmp1295);
    if ($tmp1296.value) {
    {
        org$pandalanguage$pandac$Type* $tmp1297 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
        return $tmp1297;
    }
    }
    org$pandalanguage$pandac$Type* $tmp1298 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1299 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_type, $tmp1298);
    if ($tmp1299.value) {
    {
        org$pandalanguage$pandac$Type* $tmp1300 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
        return $tmp1300;
    }
    }
    panda$core$Bit $tmp1301 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 23 }));
    if ($tmp1301.value) {
    {
        org$pandalanguage$pandac$Type* $tmp1302 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
        return $tmp1302;
    }
    }
    return p_type;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    org$pandalanguage$pandac$Type* step1329;
    panda$collections$ImmutableArray* args1356;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1357;
    org$pandalanguage$pandac$IRNode* c1359;
    switch (p_expr->kind.value) {
        case 1031:
        {
            panda$core$Int64 $tmp1303 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_expr->children);
            panda$core$Bit $tmp1304 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1303, ((panda$core$Int64) { 2 }));
            if ($tmp1304.value) {
            {
                panda$core$Object* $tmp1305 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Bit $tmp1306 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1305)->kind, ((panda$core$Int64) { 1030 }));
                if ($tmp1306.value) {
                {
                    panda$core$Object* $tmp1307 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                    panda$core$Bit $tmp1308 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1307)->kind, ((panda$core$Int64) { 1030 }));
                    if ($tmp1308.value) {
                    {
                        org$pandalanguage$pandac$Type* $tmp1309 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
                        org$pandalanguage$pandac$Type* $tmp1310 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1309);
                        org$pandalanguage$pandac$Type* $tmp1311 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1310);
                        return $tmp1311;
                    }
                    }
                    panda$core$Object* $tmp1312 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                    org$pandalanguage$pandac$Type* $tmp1313 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$IRNode*) $tmp1312)->type);
                    org$pandalanguage$pandac$Type* $tmp1314 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1313);
                    org$pandalanguage$pandac$Type* $tmp1315 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1314);
                    return $tmp1315;
                }
                }
                panda$core$Object* $tmp1316 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                panda$core$Bit $tmp1317 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1316)->kind, ((panda$core$Int64) { 1030 }));
                if ($tmp1317.value) {
                {
                    panda$core$Object* $tmp1318 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                    org$pandalanguage$pandac$Type* $tmp1319 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$IRNode*) $tmp1318)->type);
                    org$pandalanguage$pandac$Type* $tmp1320 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1319);
                    org$pandalanguage$pandac$Type* $tmp1321 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1320);
                    return $tmp1321;
                }
                }
                panda$core$Object* $tmp1322 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp1323 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$IRNode*) $tmp1322)->type);
                panda$core$Object* $tmp1324 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$Type* $tmp1325 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$IRNode*) $tmp1324)->type);
                org$pandalanguage$pandac$Type* $tmp1326 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1323, $tmp1325);
                org$pandalanguage$pandac$Type* $tmp1327 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, $tmp1326);
                org$pandalanguage$pandac$Type* $tmp1328 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1327);
                return $tmp1328;
            }
            }
            panda$core$Object* $tmp1330 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 2 }));
            org$pandalanguage$pandac$Type* $tmp1331 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$IRNode*) $tmp1330)->type);
            step1329 = $tmp1331;
            panda$core$Object* $tmp1332 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp1333 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1332)->kind, ((panda$core$Int64) { 1030 }));
            if ($tmp1333.value) {
            {
                panda$core$Object* $tmp1334 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                panda$core$Bit $tmp1335 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1334)->kind, ((panda$core$Int64) { 1030 }));
                if ($tmp1335.value) {
                {
                    org$pandalanguage$pandac$Type* $tmp1336 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
                    org$pandalanguage$pandac$Type* $tmp1337 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1336);
                    org$pandalanguage$pandac$Type* $tmp1338 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1337, step1329);
                    return $tmp1338;
                }
                }
                panda$core$Object* $tmp1339 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$Type* $tmp1340 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$IRNode*) $tmp1339)->type);
                org$pandalanguage$pandac$Type* $tmp1341 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1340);
                org$pandalanguage$pandac$Type* $tmp1342 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1341, step1329);
                return $tmp1342;
            }
            }
            panda$core$Object* $tmp1343 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
            panda$core$Bit $tmp1344 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1343)->kind, ((panda$core$Int64) { 1030 }));
            if ($tmp1344.value) {
            {
                panda$core$Object* $tmp1345 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp1346 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$IRNode*) $tmp1345)->type);
                org$pandalanguage$pandac$Type* $tmp1347 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1346);
                org$pandalanguage$pandac$Type* $tmp1348 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1347, step1329);
                return $tmp1348;
            }
            }
            panda$core$Object* $tmp1349 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp1350 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$IRNode*) $tmp1349)->type);
            panda$core$Object* $tmp1351 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
            org$pandalanguage$pandac$Type* $tmp1352 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$IRNode*) $tmp1351)->type);
            org$pandalanguage$pandac$Type* $tmp1353 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1350, $tmp1352);
            org$pandalanguage$pandac$Type* $tmp1354 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, $tmp1353);
            org$pandalanguage$pandac$Type* $tmp1355 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1354, step1329);
            return $tmp1355;
        }
        break;
        case 1040:
        {
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1357, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$collections$ImmutableArray* $tmp1358 = panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(p_expr->children, $tmp1357);
            args1356 = $tmp1358;
            panda$core$Object* $tmp1360 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp1362 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1360), &$s1361, ((panda$collections$ListView*) args1356));
            c1359 = $tmp1362;
            if (((panda$core$Bit) { c1359 == NULL }).value) {
            {
                org$pandalanguage$pandac$Type* $tmp1363 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
                return $tmp1363;
            }
            }
            return c1359->type;
        }
        break;
    }
    org$pandalanguage$pandac$Type* $tmp1364 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_expr->type);
    return $tmp1364;
}
panda$core$Int64$nullable org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type, org$pandalanguage$pandac$Type* p_target) {
    panda$core$Int64$nullable result1375;
    panda$core$Int64$nullable result1379;
    panda$core$Int64$nullable best1388;
    panda$collections$Iterator* t$Iter1389;
    org$pandalanguage$pandac$Type* t1401;
    panda$core$Int64$nullable cost1406;
    org$pandalanguage$pandac$ClassDecl* cl1420;
    panda$core$Int64$nullable cost1422;
    panda$collections$Iterator* intf$Iter1427;
    org$pandalanguage$pandac$Type* intf1439;
    panda$core$Int64$nullable cost1444;
    PANDA_ASSERT(p_type->resolved.value);
    PANDA_ASSERT(p_target->resolved.value);
    panda$core$Bit $tmp1365 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_type, p_target);
    if ($tmp1365.value) {
    {
        return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
    }
    }
    org$pandalanguage$pandac$Type* $tmp1366 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1367 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_type, $tmp1366);
    if ($tmp1367.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    panda$core$Bit $tmp1368 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 23 }));
    if ($tmp1368.value) {
    {
        panda$core$Bit $tmp1369 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp1369.value) {
        {
            return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
        }
        }
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    panda$core$Bit $tmp1371 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 11 }));
    bool $tmp1370 = $tmp1371.value;
    if (!$tmp1370) goto $l1372;
    panda$core$Bit $tmp1373 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
    $tmp1370 = $tmp1373.value;
    $l1372:;
    panda$core$Bit $tmp1374 = { $tmp1370 };
    if ($tmp1374.value) {
    {
        panda$core$Object* $tmp1376 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Int64$nullable $tmp1377 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$Type*) $tmp1376), p_target);
        result1375 = $tmp1377;
        if (((panda$core$Bit) { !result1375.nonnull }).value) {
        {
            return ((panda$core$Int64$nullable) { .nonnull = false });
        }
        }
        panda$core$Int64 $tmp1378 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) result1375.value), ((panda$core$Int64) { 2 }));
        return ((panda$core$Int64$nullable) { $tmp1378, true });
    }
    }
    switch (p_target->typeKind.value) {
        case 11:
        {
            panda$core$Object* $tmp1380 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$Int64$nullable $tmp1381 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_type, ((org$pandalanguage$pandac$Type*) $tmp1380));
            result1379 = $tmp1381;
            if (((panda$core$Bit) { !result1379.nonnull }).value) {
            {
                return ((panda$core$Int64$nullable) { .nonnull = false });
            }
            }
            panda$core$Int64 $tmp1382 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) result1379.value), ((panda$core$Int64) { 1 }));
            return ((panda$core$Int64$nullable) { $tmp1382, true });
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
            panda$core$Bit $tmp1383 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 21 }));
            if ($tmp1383.value) {
            {
                panda$core$Object* $tmp1384 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
                panda$core$Int64$nullable $tmp1385 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$Type*) $tmp1384), p_target);
                return $tmp1385;
            }
            }
        }
        break;
    }
    switch (p_type->typeKind.value) {
        case 19:
        {
            org$pandalanguage$pandac$Type* $tmp1386 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            panda$core$Int64$nullable $tmp1387 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1386, p_target);
            return $tmp1387;
        }
        break;
        case 17:
        {
            best1388 = ((panda$core$Int64$nullable) { .nonnull = false });
            {
                ITable* $tmp1390 = ((panda$collections$Iterable*) p_type->subtypes)->$class->itable;
                while ($tmp1390->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1390 = $tmp1390->next;
                }
                $fn1392 $tmp1391 = $tmp1390->methods[0];
                panda$collections$Iterator* $tmp1393 = $tmp1391(((panda$collections$Iterable*) p_type->subtypes));
                t$Iter1389 = $tmp1393;
                $l1394:;
                ITable* $tmp1396 = t$Iter1389->$class->itable;
                while ($tmp1396->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1396 = $tmp1396->next;
                }
                $fn1398 $tmp1397 = $tmp1396->methods[0];
                panda$core$Bit $tmp1399 = $tmp1397(t$Iter1389);
                panda$core$Bit $tmp1400 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1399);
                if (!$tmp1400.value) goto $l1395;
                {
                    ITable* $tmp1402 = t$Iter1389->$class->itable;
                    while ($tmp1402->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1402 = $tmp1402->next;
                    }
                    $fn1404 $tmp1403 = $tmp1402->methods[1];
                    panda$core$Object* $tmp1405 = $tmp1403(t$Iter1389);
                    t1401 = ((org$pandalanguage$pandac$Type*) $tmp1405);
                    panda$core$Int64$nullable $tmp1407 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, t1401, p_target);
                    cost1406 = $tmp1407;
                    bool $tmp1408 = ((panda$core$Bit) { cost1406.nonnull }).value;
                    if (!$tmp1408) goto $l1409;
                    bool $tmp1410 = ((panda$core$Bit) { !best1388.nonnull }).value;
                    if ($tmp1410) goto $l1411;
                    panda$core$Bit $tmp1412 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost1406.value), ((panda$core$Int64) best1388.value));
                    $tmp1410 = $tmp1412.value;
                    $l1411:;
                    panda$core$Bit $tmp1413 = { $tmp1410 };
                    $tmp1408 = $tmp1413.value;
                    $l1409:;
                    panda$core$Bit $tmp1414 = { $tmp1408 };
                    if ($tmp1414.value) {
                    {
                        best1388 = cost1406;
                    }
                    }
                }
                goto $l1394;
                $l1395:;
            }
            return best1388;
        }
        break;
        case 22:
        {
            panda$core$Int64$nullable $tmp1415 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_type->parameter->bound, p_target);
            return $tmp1415;
        }
        break;
    }
    panda$core$Bit $tmp1416 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_target);
    panda$core$Bit $tmp1417 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1416);
    if ($tmp1417.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    panda$core$Bit $tmp1418 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_type);
    panda$core$Bit $tmp1419 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1418);
    if ($tmp1419.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp1421 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_type);
    cl1420 = $tmp1421;
    PANDA_ASSERT(((panda$core$Bit) { cl1420 != NULL }).value);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, cl1420);
    if (((panda$core$Bit) { cl1420->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp1423 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_type, cl1420->rawSuper);
        org$pandalanguage$pandac$Type* $tmp1424 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_type, $tmp1423);
        panda$core$Int64$nullable $tmp1425 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1424, p_target);
        cost1422 = $tmp1425;
        if (((panda$core$Bit) { cost1422.nonnull }).value) {
        {
            panda$core$Int64 $tmp1426 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) cost1422.value), ((panda$core$Int64) ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }).value));
            return ((panda$core$Int64$nullable) { $tmp1426, true });
        }
        }
    }
    }
    {
        ITable* $tmp1428 = ((panda$collections$Iterable*) cl1420->rawInterfaces)->$class->itable;
        while ($tmp1428->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1428 = $tmp1428->next;
        }
        $fn1430 $tmp1429 = $tmp1428->methods[0];
        panda$collections$Iterator* $tmp1431 = $tmp1429(((panda$collections$Iterable*) cl1420->rawInterfaces));
        intf$Iter1427 = $tmp1431;
        $l1432:;
        ITable* $tmp1434 = intf$Iter1427->$class->itable;
        while ($tmp1434->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1434 = $tmp1434->next;
        }
        $fn1436 $tmp1435 = $tmp1434->methods[0];
        panda$core$Bit $tmp1437 = $tmp1435(intf$Iter1427);
        panda$core$Bit $tmp1438 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1437);
        if (!$tmp1438.value) goto $l1433;
        {
            ITable* $tmp1440 = intf$Iter1427->$class->itable;
            while ($tmp1440->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1440 = $tmp1440->next;
            }
            $fn1442 $tmp1441 = $tmp1440->methods[1];
            panda$core$Object* $tmp1443 = $tmp1441(intf$Iter1427);
            intf1439 = ((org$pandalanguage$pandac$Type*) $tmp1443);
            org$pandalanguage$pandac$Type* $tmp1445 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_type, intf1439);
            org$pandalanguage$pandac$Type* $tmp1446 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_type, $tmp1445);
            panda$core$Int64$nullable $tmp1447 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1446, p_target);
            cost1444 = $tmp1447;
            if (((panda$core$Bit) { cost1444.nonnull }).value) {
            {
                panda$core$Int64 $tmp1448 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) cost1444.value), ((panda$core$Int64) ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }).value));
                return ((panda$core$Int64$nullable) { $tmp1448, true });
            }
            }
        }
        goto $l1432;
        $l1433:;
    }
    return ((panda$core$Int64$nullable) { .nonnull = false });
}
panda$core$Int64 org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_value) {
    panda$core$Bit $tmp1450 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { -128 }));
    bool $tmp1449 = $tmp1450.value;
    if (!$tmp1449) goto $l1451;
    panda$core$Bit $tmp1452 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { 127 }));
    $tmp1449 = $tmp1452.value;
    $l1451:;
    panda$core$Bit $tmp1453 = { $tmp1449 };
    if ($tmp1453.value) {
    {
        return ((panda$core$Int64) { 8 });
    }
    }
    panda$core$Bit $tmp1455 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { -32768 }));
    bool $tmp1454 = $tmp1455.value;
    if (!$tmp1454) goto $l1456;
    panda$core$Bit $tmp1457 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { 32767 }));
    $tmp1454 = $tmp1457.value;
    $l1456:;
    panda$core$Bit $tmp1458 = { $tmp1454 };
    if ($tmp1458.value) {
    {
        return ((panda$core$Int64) { 16 });
    }
    }
    panda$core$Bit $tmp1460 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { -2147483648 }));
    bool $tmp1459 = $tmp1460.value;
    if (!$tmp1459) goto $l1461;
    panda$core$Bit $tmp1462 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { 2147483647 }));
    $tmp1459 = $tmp1462.value;
    $l1461:;
    panda$core$Bit $tmp1463 = { $tmp1459 };
    if ($tmp1463.value) {
    {
        return ((panda$core$Int64) { 32 });
    }
    }
    return ((panda$core$Int64) { 64 });
}
panda$core$Int64 org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64(org$pandalanguage$pandac$Compiler* self, panda$core$UInt64 p_value) {
    panda$core$Bit $tmp1464 = panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(p_value, ((panda$core$UInt64) { 255 }));
    if ($tmp1464.value) {
    {
        return ((panda$core$Int64) { 8 });
    }
    }
    panda$core$Bit $tmp1465 = panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(p_value, ((panda$core$UInt64) { 65535 }));
    if ($tmp1465.value) {
    {
        return ((panda$core$Int64) { 16 });
    }
    }
    panda$core$Bit $tmp1466 = panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(p_value, ((panda$core$UInt64) { 4294967295 }));
    if ($tmp1466.value) {
    {
        return ((panda$core$Int64) { 32 });
    }
    }
    return ((panda$core$Int64) { 64 });
}
panda$core$Int64$nullable org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr, org$pandalanguage$pandac$Type* p_target) {
    panda$core$Int64 base1467;
    panda$core$Int64$nullable cost1481;
    panda$collections$Iterator* utf161553;
    panda$core$Int64$nullable cost11589;
    panda$core$Int64$nullable cost21593;
    panda$core$Int64 cost1602;
    panda$core$Int64$nullable cost11616;
    panda$core$Int64$nullable cost21620;
    panda$core$Int64$nullable cost31625;
    panda$collections$Array* args1633;
    org$pandalanguage$pandac$ClassDecl* targetClass1644;
    panda$collections$Iterator* m$Iter1646;
    org$pandalanguage$pandac$MethodDecl* m1658;
    panda$core$Int64$nullable cost1667;
    panda$core$Int64$nullable cost1671;
    base1467 = ((panda$core$Int64) { 0 });
    panda$core$Bit $tmp1470 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1033 }));
    bool $tmp1469 = $tmp1470.value;
    if (!$tmp1469) goto $l1471;
    panda$core$Bit $tmp1472 = org$pandalanguage$pandac$Type$isChar$R$panda$core$Bit(p_target);
    panda$core$Bit $tmp1473 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1472);
    $tmp1469 = $tmp1473.value;
    $l1471:;
    panda$core$Bit $tmp1474 = { $tmp1469 };
    bool $tmp1468 = $tmp1474.value;
    if (!$tmp1468) goto $l1475;
    panda$core$Int64 $tmp1476 = panda$core$String$length$R$panda$core$Int64(((panda$core$String*) p_expr->payload));
    panda$core$Bit $tmp1477 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1476, ((panda$core$Int64) { 1 }));
    $tmp1468 = $tmp1477.value;
    $l1475:;
    panda$core$Bit $tmp1478 = { $tmp1468 };
    if ($tmp1478.value) {
    {
        base1467 = ((panda$core$Int64) { 3 });
    }
    }
    panda$core$Bit $tmp1479 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_expr->type, p_target);
    if ($tmp1479.value) {
    {
        return ((panda$core$Int64$nullable) { base1467, true });
    }
    }
    switch (p_target->typeKind.value) {
        case 11:
        {
            panda$core$Bit $tmp1480 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1030 }));
            if ($tmp1480.value) {
            {
                return ((panda$core$Int64$nullable) { base1467, true });
            }
            }
            panda$core$Object* $tmp1482 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$Int64$nullable $tmp1483 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, ((org$pandalanguage$pandac$Type*) $tmp1482));
            cost1481 = $tmp1483;
            if (((panda$core$Bit) { !cost1481.nonnull }).value) {
            {
                return ((panda$core$Int64$nullable) { .nonnull = false });
            }
            }
            panda$core$Bit $tmp1484 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->type->typeKind, ((panda$core$Int64) { 11 }));
            if ($tmp1484.value) {
            {
                panda$core$Int64 $tmp1485 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(base1467, ((panda$core$Int64) cost1481.value));
                return ((panda$core$Int64$nullable) { $tmp1485, true });
            }
            }
            panda$core$Int64 $tmp1486 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(base1467, ((panda$core$Int64) cost1481.value));
            panda$core$Int64 $tmp1487 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1486, ((panda$core$Int64) { 1 }));
            return ((panda$core$Int64$nullable) { $tmp1487, true });
        }
        break;
        case 22:
        {
            panda$core$Bit $tmp1488 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(base1467, ((panda$core$Int64) { 0 }));
            PANDA_ASSERT($tmp1488.value);
            panda$core$Int64$nullable $tmp1489 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, p_target->parameter->bound);
            return $tmp1489;
        }
        break;
    }
    switch (p_expr->kind.value) {
        case 1011:
        {
            panda$core$Bit $tmp1490 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 19 }));
            if ($tmp1490.value) {
            {
                return ((panda$core$Int64$nullable) { base1467, true });
            }
            }
            panda$core$Bit $tmp1491 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_target);
            if ($tmp1491.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1492 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
                panda$core$Int64$nullable $tmp1493 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1492, p_target);
                return $tmp1493;
            }
            }
        }
        break;
        case 1004:
        {
            panda$core$Bit $tmp1496 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            bool $tmp1495 = $tmp1496.value;
            if (!$tmp1495) goto $l1497;
            panda$core$Int64 $tmp1498 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1499 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(self, $tmp1498);
            panda$core$Int64 $tmp1500 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1501 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1499, $tmp1500);
            $tmp1495 = $tmp1501.value;
            $l1497:;
            panda$core$Bit $tmp1502 = { $tmp1495 };
            bool $tmp1494 = $tmp1502.value;
            if ($tmp1494) goto $l1503;
            panda$core$Bit $tmp1505 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 13 }));
            bool $tmp1504 = $tmp1505.value;
            if (!$tmp1504) goto $l1506;
            panda$core$Int64 $tmp1507 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64(self, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1508 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1509 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1507, $tmp1508);
            $tmp1504 = $tmp1509.value;
            $l1506:;
            panda$core$Bit $tmp1510 = { $tmp1504 };
            $tmp1494 = $tmp1510.value;
            $l1503:;
            panda$core$Bit $tmp1511 = { $tmp1494 };
            if ($tmp1511.value) {
            {
                return ((panda$core$Int64$nullable) { base1467, true });
            }
            }
            panda$core$Bit $tmp1512 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            panda$core$Bit $tmp1513 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1512);
            if ($tmp1513.value) {
            {
                panda$core$Bit $tmp1514 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(base1467, ((panda$core$Int64) { 0 }));
                PANDA_ASSERT($tmp1514.value);
                org$pandalanguage$pandac$Type* $tmp1515 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                panda$core$Int64$nullable $tmp1516 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1515, p_target);
                return $tmp1516;
            }
            }
        }
        break;
        case 1032:
        {
            panda$core$Bit $tmp1519 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            bool $tmp1518 = $tmp1519.value;
            if (!$tmp1518) goto $l1520;
            panda$core$Int64 $tmp1521 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1522 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp1521);
            panda$core$Int64 $tmp1523 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(self, $tmp1522);
            panda$core$Int64 $tmp1524 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1525 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1523, $tmp1524);
            $tmp1518 = $tmp1525.value;
            $l1520:;
            panda$core$Bit $tmp1526 = { $tmp1518 };
            bool $tmp1517 = $tmp1526.value;
            if ($tmp1517) goto $l1527;
            panda$core$Bit $tmp1529 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 13 }));
            bool $tmp1528 = $tmp1529.value;
            if (!$tmp1528) goto $l1530;
            panda$core$Int64 $tmp1531 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1532 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp1531);
            panda$core$Int64 $tmp1533 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(self, $tmp1532);
            panda$core$Int64 $tmp1534 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1535 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1533, $tmp1534);
            $tmp1528 = $tmp1535.value;
            $l1530:;
            panda$core$Bit $tmp1536 = { $tmp1528 };
            $tmp1517 = $tmp1536.value;
            $l1527:;
            panda$core$Bit $tmp1537 = { $tmp1517 };
            if ($tmp1537.value) {
            {
                return ((panda$core$Int64$nullable) { base1467, true });
            }
            }
            panda$core$Bit $tmp1538 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            panda$core$Bit $tmp1539 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1538);
            if ($tmp1539.value) {
            {
                panda$core$Bit $tmp1540 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(base1467, ((panda$core$Int64) { 0 }));
                PANDA_ASSERT($tmp1540.value);
                org$pandalanguage$pandac$Type* $tmp1541 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                panda$core$Int64$nullable $tmp1542 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1541, p_target);
                return $tmp1542;
            }
            }
        }
        break;
        case 1033:
        {
            org$pandalanguage$pandac$Type* $tmp1543 = org$pandalanguage$pandac$Type$Char8$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1544 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1543);
            if ($tmp1544.value) {
            {
                panda$collections$ListView* $tmp1545 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(((panda$core$String*) p_expr->payload));
                ITable* $tmp1546 = ((panda$collections$CollectionView*) $tmp1545)->$class->itable;
                while ($tmp1546->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                    $tmp1546 = $tmp1546->next;
                }
                $fn1548 $tmp1547 = $tmp1546->methods[0];
                panda$core$Int64 $tmp1549 = $tmp1547(((panda$collections$CollectionView*) $tmp1545));
                panda$core$Bit $tmp1550 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1549, ((panda$core$Int64) { 1 }));
                if ($tmp1550.value) {
                {
                    return ((panda$core$Int64$nullable) { base1467, true });
                }
                }
                return ((panda$core$Int64$nullable) { .nonnull = false });
            }
            }
            org$pandalanguage$pandac$Type* $tmp1551 = org$pandalanguage$pandac$Type$Char16$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1552 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1551);
            if ($tmp1552.value) {
            {
                panda$collections$Iterator* $tmp1554 = panda$core$String$utf16$R$panda$collections$Iterator$LTpanda$core$Char16$GT(((panda$core$String*) p_expr->payload));
                utf161553 = $tmp1554;
                ITable* $tmp1555 = utf161553->$class->itable;
                while ($tmp1555->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1555 = $tmp1555->next;
                }
                $fn1557 $tmp1556 = $tmp1555->methods[0];
                panda$core$Bit $tmp1558 = $tmp1556(utf161553);
                if ($tmp1558.value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                ITable* $tmp1559 = utf161553->$class->itable;
                while ($tmp1559->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1559 = $tmp1559->next;
                }
                $fn1561 $tmp1560 = $tmp1559->methods[1];
                $tmp1560(utf161553);
                ITable* $tmp1562 = utf161553->$class->itable;
                while ($tmp1562->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1562 = $tmp1562->next;
                }
                $fn1564 $tmp1563 = $tmp1562->methods[0];
                panda$core$Bit $tmp1565 = $tmp1563(utf161553);
                if ($tmp1565.value) {
                {
                    panda$core$Int64 $tmp1566 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(base1467, ((panda$core$Int64) { 1 }));
                    return ((panda$core$Int64$nullable) { $tmp1566, true });
                }
                }
                return ((panda$core$Int64$nullable) { .nonnull = false });
            }
            }
            org$pandalanguage$pandac$Type* $tmp1567 = org$pandalanguage$pandac$Type$Char32$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1568 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1567);
            if ($tmp1568.value) {
            {
                panda$core$Int64 $tmp1569 = panda$core$String$length$R$panda$core$Int64(((panda$core$String*) p_expr->payload));
                panda$core$Bit $tmp1570 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1569, ((panda$core$Int64) { 1 }));
                if ($tmp1570.value) {
                {
                    panda$core$Int64 $tmp1571 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(base1467, ((panda$core$Int64) { 2 }));
                    return ((panda$core$Int64$nullable) { $tmp1571, true });
                }
                }
                return ((panda$core$Int64$nullable) { .nonnull = false });
            }
            }
        }
        break;
        case 1031:
        {
            panda$core$Bit $tmp1572 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(p_target);
            if ($tmp1572.value) {
            {
                panda$core$Int64 $tmp1573 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_expr->children);
                panda$core$Bit $tmp1574 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1573, ((panda$core$Int64) { 2 }));
                if ($tmp1574.value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Object* $tmp1576 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Bit $tmp1577 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1576)->kind, ((panda$core$Int64) { 1030 }));
                bool $tmp1575 = $tmp1577.value;
                if (!$tmp1575) goto $l1578;
                panda$core$Object* $tmp1579 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                panda$core$Bit $tmp1580 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1579)->kind, ((panda$core$Int64) { 1030 }));
                $tmp1575 = $tmp1580.value;
                $l1578:;
                panda$core$Bit $tmp1581 = { $tmp1575 };
                if ($tmp1581.value) {
                {
                    panda$core$Object* $tmp1582 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                    panda$core$Bit $tmp1583 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1582)->typeKind, ((panda$core$Int64) { 11 }));
                    if ($tmp1583.value) {
                    {
                        panda$core$Object* $tmp1584 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                        panda$core$Object* $tmp1585 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$Type*) $tmp1584)->subtypes, ((panda$core$Int64) { 0 }));
                        panda$core$Bit $tmp1586 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1585));
                        if ($tmp1586.value) {
                        {
                            return ((panda$core$Int64$nullable) { base1467, true });
                        }
                        }
                        panda$core$Int64 $tmp1587 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(base1467, ((panda$core$Int64) { 1 }));
                        return ((panda$core$Int64$nullable) { $tmp1587, true });
                    }
                    }
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Bit $tmp1588 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 21 }));
                PANDA_ASSERT($tmp1588.value);
                panda$core$Object* $tmp1590 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Object* $tmp1591 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                panda$core$Int64$nullable $tmp1592 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1590), ((org$pandalanguage$pandac$Type*) $tmp1591));
                cost11589 = $tmp1592;
                if (((panda$core$Bit) { !cost11589.nonnull }).value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Object* $tmp1594 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                panda$core$Object* $tmp1595 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                panda$core$Int64$nullable $tmp1596 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1594), ((org$pandalanguage$pandac$Type*) $tmp1595));
                cost21593 = $tmp1596;
                if (((panda$core$Bit) { !cost21593.nonnull }).value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Int64 $tmp1597 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(base1467, ((panda$core$Int64) cost11589.value));
                panda$core$Int64 $tmp1598 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1597, ((panda$core$Int64) cost21593.value));
                return ((panda$core$Int64$nullable) { $tmp1598, true });
            }
            }
            panda$core$Bit $tmp1599 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(p_target);
            if ($tmp1599.value) {
            {
                panda$core$Int64 $tmp1600 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_expr->children);
                panda$core$Bit $tmp1601 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1600, ((panda$core$Int64) { 3 }));
                if ($tmp1601.value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Object* $tmp1604 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Bit $tmp1605 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1604)->kind, ((panda$core$Int64) { 1030 }));
                bool $tmp1603 = $tmp1605.value;
                if (!$tmp1603) goto $l1606;
                panda$core$Object* $tmp1607 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                panda$core$Bit $tmp1608 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1607)->kind, ((panda$core$Int64) { 1030 }));
                $tmp1603 = $tmp1608.value;
                $l1606:;
                panda$core$Bit $tmp1609 = { $tmp1603 };
                if ($tmp1609.value) {
                {
                    panda$core$Object* $tmp1610 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                    panda$core$Bit $tmp1611 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1610)->typeKind, ((panda$core$Int64) { 11 }));
                    if ($tmp1611.value) {
                    {
                        panda$core$Object* $tmp1612 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                        panda$core$Object* $tmp1613 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$Type*) $tmp1612)->subtypes, ((panda$core$Int64) { 0 }));
                        panda$core$Bit $tmp1614 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1613));
                        if ($tmp1614.value) {
                        {
                            cost1602 = ((panda$core$Int64) { 0 });
                        }
                        }
                        else {
                        {
                            cost1602 = ((panda$core$Int64) { 1 });
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
                    panda$core$Bit $tmp1615 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 21 }));
                    PANDA_ASSERT($tmp1615.value);
                    panda$core$Object* $tmp1617 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                    panda$core$Object* $tmp1618 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                    panda$core$Int64$nullable $tmp1619 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1617), ((org$pandalanguage$pandac$Type*) $tmp1618));
                    cost11616 = $tmp1619;
                    if (((panda$core$Bit) { !cost11616.nonnull }).value) {
                    {
                        return ((panda$core$Int64$nullable) { .nonnull = false });
                    }
                    }
                    panda$core$Object* $tmp1621 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                    panda$core$Object* $tmp1622 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                    panda$core$Int64$nullable $tmp1623 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1621), ((org$pandalanguage$pandac$Type*) $tmp1622));
                    cost21620 = $tmp1623;
                    if (((panda$core$Bit) { !cost21620.nonnull }).value) {
                    {
                        return ((panda$core$Int64$nullable) { .nonnull = false });
                    }
                    }
                    panda$core$Int64 $tmp1624 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) cost11616.value), ((panda$core$Int64) cost21620.value));
                    cost1602 = $tmp1624;
                }
                }
                panda$core$Object* $tmp1626 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 2 }));
                panda$core$Object* $tmp1627 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 2 }));
                panda$core$Int64$nullable $tmp1628 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1626), ((org$pandalanguage$pandac$Type*) $tmp1627));
                cost31625 = $tmp1628;
                if (((panda$core$Bit) { !cost31625.nonnull }).value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Int64 $tmp1629 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(base1467, cost1602);
                panda$core$Int64 $tmp1630 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1629, ((panda$core$Int64) cost31625.value));
                return ((panda$core$Int64$nullable) { $tmp1630, true });
            }
            }
            org$pandalanguage$pandac$Type* $tmp1631 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
            panda$core$Int64$nullable $tmp1632 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1631, p_target);
            return $tmp1632;
        }
        break;
        case 1040:
        {
            panda$collections$Array* $tmp1634 = (panda$collections$Array*) malloc(40);
            $tmp1634->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1634->refCount.value = 1;
            panda$collections$Array$init($tmp1634);
            args1633 = $tmp1634;
            panda$core$Object* $tmp1636 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
            panda$collections$Array$add$panda$collections$Array$T(args1633, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp1636)));
            panda$core$Bit $tmp1637 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(base1467, ((panda$core$Int64) { 0 }));
            PANDA_ASSERT($tmp1637.value);
            panda$core$Object* $tmp1638 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp1640 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1638), &$s1639, ((panda$collections$ListView*) args1633));
            panda$core$Int64$nullable $tmp1641 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1640, p_target);
            return $tmp1641;
        }
        break;
    }
    panda$core$Bit $tmp1642 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_target);
    panda$core$Bit $tmp1643 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1642);
    if ($tmp1643.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp1645 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_target);
    targetClass1644 = $tmp1645;
    if (((panda$core$Bit) { targetClass1644 == NULL }).value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    {
        ITable* $tmp1647 = ((panda$collections$Iterable*) targetClass1644->methods)->$class->itable;
        while ($tmp1647->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1647 = $tmp1647->next;
        }
        $fn1649 $tmp1648 = $tmp1647->methods[0];
        panda$collections$Iterator* $tmp1650 = $tmp1648(((panda$collections$Iterable*) targetClass1644->methods));
        m$Iter1646 = $tmp1650;
        $l1651:;
        ITable* $tmp1653 = m$Iter1646->$class->itable;
        while ($tmp1653->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1653 = $tmp1653->next;
        }
        $fn1655 $tmp1654 = $tmp1653->methods[0];
        panda$core$Bit $tmp1656 = $tmp1654(m$Iter1646);
        panda$core$Bit $tmp1657 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1656);
        if (!$tmp1657.value) goto $l1652;
        {
            ITable* $tmp1659 = m$Iter1646->$class->itable;
            while ($tmp1659->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1659 = $tmp1659->next;
            }
            $fn1661 $tmp1660 = $tmp1659->methods[1];
            panda$core$Object* $tmp1662 = $tmp1660(m$Iter1646);
            m1658 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1662);
            panda$core$Bit $tmp1663 = org$pandalanguage$pandac$Annotations$isImplicit$R$panda$core$Bit(m1658->annotations);
            if ($tmp1663.value) {
            {
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m1658);
                panda$core$Bit $tmp1664 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(m1658->methodKind, ((panda$core$Int64) { 59 }));
                PANDA_ASSERT($tmp1664.value);
                panda$core$Int64 $tmp1665 = panda$collections$Array$get_count$R$panda$core$Int64(m1658->parameters);
                panda$core$Bit $tmp1666 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1665, ((panda$core$Int64) { 1 }));
                PANDA_ASSERT($tmp1666.value);
                panda$core$Object* $tmp1668 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(m1658->parameters, ((panda$core$Int64) { 0 }));
                panda$core$Int64$nullable $tmp1669 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1668)->type);
                cost1667 = $tmp1669;
                if (((panda$core$Bit) { cost1667.nonnull }).value) {
                {
                    panda$core$Int64 $tmp1670 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(base1467, ((panda$core$Int64) cost1667.value));
                    return ((panda$core$Int64$nullable) { $tmp1670, true });
                }
                }
            }
            }
        }
        goto $l1651;
        $l1652:;
    }
    PANDA_ASSERT(((panda$core$Bit) { p_expr->type != NULL }).value);
    panda$core$Int64$nullable $tmp1672 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr->type, p_target);
    cost1671 = $tmp1672;
    if (((panda$core$Bit) { cost1671.nonnull }).value) {
    {
        panda$core$Int64 $tmp1673 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(base1467, ((panda$core$Int64) cost1671.value));
        return ((panda$core$Int64$nullable) { $tmp1673, true });
    }
    }
    return ((panda$core$Int64$nullable) { .nonnull = false });
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$doCoerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr, org$pandalanguage$pandac$Type* p_target) {
    panda$collections$Array* children1682;
    org$pandalanguage$pandac$IRNode* intermediate1687;
    org$pandalanguage$pandac$IRNode* coerced1715;
    org$pandalanguage$pandac$IRNode* coerced1736;
    org$pandalanguage$pandac$IRNode* varType1750;
    panda$collections$Array* args1760;
    org$pandalanguage$pandac$IRNode* target1772;
    panda$collections$Array* args1783;
    org$pandalanguage$pandac$IRNode* target1795;
    panda$collections$Array* args1806;
    org$pandalanguage$pandac$IRNode* target1814;
    org$pandalanguage$pandac$Type* param1830;
    org$pandalanguage$pandac$IRNode* start1832;
    org$pandalanguage$pandac$IRNode* end1835;
    panda$collections$Array* args1838;
    org$pandalanguage$pandac$IRNode* target1844;
    org$pandalanguage$pandac$Type* endPoint1860;
    org$pandalanguage$pandac$IRNode* start1862;
    org$pandalanguage$pandac$IRNode* end1865;
    org$pandalanguage$pandac$IRNode* step1868;
    panda$collections$Array* args1872;
    org$pandalanguage$pandac$IRNode* target1878;
    panda$collections$ImmutableArray* args1886;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1887;
    panda$collections$Array* children1899;
    org$pandalanguage$pandac$IRNode* intermediate1905;
    org$pandalanguage$pandac$ClassDecl* cl1910;
    panda$collections$Iterator* m$Iter1912;
    org$pandalanguage$pandac$MethodDecl* m1924;
    org$pandalanguage$pandac$IRNode* type1935;
    panda$collections$Array* args1940;
    panda$collections$Array* children1944;
    if (((panda$core$Bit) { p_expr == NULL }).value) {
    {
        return NULL;
    }
    }
    PANDA_ASSERT(p_expr->type->resolved.value);
    PANDA_ASSERT(p_target->resolved.value);
    panda$core$Bit $tmp1674 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_expr->type, p_target);
    if ($tmp1674.value) {
    {
        return p_expr;
    }
    }
    panda$core$Bit $tmp1676 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->type->typeKind, ((panda$core$Int64) { 11 }));
    bool $tmp1675 = $tmp1676.value;
    if (!$tmp1675) goto $l1677;
    panda$core$Bit $tmp1678 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
    $tmp1675 = $tmp1678.value;
    $l1677:;
    panda$core$Bit $tmp1679 = { $tmp1675 };
    if ($tmp1679.value) {
    {
        panda$core$Object* $tmp1680 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp1681 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1680), p_target);
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
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp1685, ((panda$core$Int64) { 1009 }), p_expr->position, p_target, ((panda$core$Object*) wrap_panda$core$Bit(((panda$core$Bit) { false }))), ((panda$collections$ListView*) children1682));
            return $tmp1685;
        }
        }
        panda$core$Object* $tmp1688 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->type->subtypes, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp1689 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, ((org$pandalanguage$pandac$Type*) $tmp1688));
        intermediate1687 = $tmp1689;
        org$pandalanguage$pandac$IRNode* $tmp1690 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, intermediate1687, p_target);
        return $tmp1690;
    }
    }
    switch (p_expr->kind.value) {
        case 1004:
        {
            panda$core$Bit $tmp1692 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            bool $tmp1691 = $tmp1692.value;
            if (!$tmp1691) goto $l1693;
            panda$core$Int64 $tmp1694 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64(self, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1695 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1696 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1694, $tmp1695);
            $tmp1691 = $tmp1696.value;
            $l1693:;
            panda$core$Bit $tmp1697 = { $tmp1691 };
            if ($tmp1697.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1698 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1698->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1698->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp1698, ((panda$core$Int64) { 1004 }), p_expr->position, p_target, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
                return $tmp1698;
            }
            }
            else {
            panda$core$Bit $tmp1701 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 13 }));
            bool $tmp1700 = $tmp1701.value;
            if (!$tmp1700) goto $l1702;
            panda$core$Int64 $tmp1703 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64(self, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1704 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1705 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1703, $tmp1704);
            $tmp1700 = $tmp1705.value;
            $l1702:;
            panda$core$Bit $tmp1706 = { $tmp1700 };
            if ($tmp1706.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1707 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1707->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1707->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp1707, ((panda$core$Int64) { 1004 }), p_expr->position, p_target, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
                return $tmp1707;
            }
            }
            }
            panda$core$Bit $tmp1710 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 10 }));
            bool $tmp1709 = $tmp1710.value;
            if (!$tmp1709) goto $l1711;
            panda$core$Bit $tmp1712 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            panda$core$Bit $tmp1713 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1712);
            $tmp1709 = $tmp1713.value;
            $l1711:;
            panda$core$Bit $tmp1714 = { $tmp1709 };
            if ($tmp1714.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1716 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp1717 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, $tmp1716);
                coerced1715 = $tmp1717;
                if (((panda$core$Bit) { coerced1715 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$IRNode* $tmp1718 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, coerced1715, p_target);
                return $tmp1718;
            }
            }
        }
        break;
        case 1032:
        {
            panda$core$Bit $tmp1720 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            bool $tmp1719 = $tmp1720.value;
            if (!$tmp1719) goto $l1721;
            panda$core$Int64 $tmp1722 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1723 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp1722);
            panda$core$Int64 $tmp1724 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(self, $tmp1723);
            panda$core$Int64 $tmp1725 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1726 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1724, $tmp1725);
            $tmp1719 = $tmp1726.value;
            $l1721:;
            panda$core$Bit $tmp1727 = { $tmp1719 };
            if ($tmp1727.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1728 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1728->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1728->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp1728, ((panda$core$Int64) { 1032 }), p_expr->position, p_target, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
                return $tmp1728;
            }
            }
            panda$core$Bit $tmp1731 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 10 }));
            bool $tmp1730 = $tmp1731.value;
            if (!$tmp1730) goto $l1732;
            panda$core$Bit $tmp1733 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            panda$core$Bit $tmp1734 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1733);
            $tmp1730 = $tmp1734.value;
            $l1732:;
            panda$core$Bit $tmp1735 = { $tmp1730 };
            if ($tmp1735.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1737 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp1738 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, $tmp1737);
                coerced1736 = $tmp1738;
                if (((panda$core$Bit) { coerced1736 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$IRNode* $tmp1739 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, coerced1736, p_target);
                return $tmp1739;
            }
            }
        }
        break;
        case 1011:
        {
            org$pandalanguage$pandac$Type* $tmp1740 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1741 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1740);
            if ($tmp1741.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1742 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1742->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1742->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp1742, ((panda$core$Int64) { 1011 }), p_expr->position, p_target, ((panda$core$Bit$wrapper*) p_expr->payload)->value);
                return $tmp1742;
            }
            }
            panda$core$Bit $tmp1745 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_target);
            bool $tmp1744 = $tmp1745.value;
            if (!$tmp1744) goto $l1746;
            org$pandalanguage$pandac$Type* $tmp1747 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1748 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1747);
            $tmp1744 = $tmp1748.value;
            $l1746:;
            panda$core$Bit $tmp1749 = { $tmp1744 };
            if ($tmp1749.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1751 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp1752 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, $tmp1751);
                varType1750 = $tmp1752;
                if (((panda$core$Bit) { varType1750 != NULL }).value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp1753 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, varType1750, p_target);
                    return $tmp1753;
                }
                }
            }
            }
        }
        break;
        case 1033:
        {
            org$pandalanguage$pandac$Type* $tmp1755 = org$pandalanguage$pandac$Type$Char8$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1756 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1755);
            bool $tmp1754 = $tmp1756.value;
            if (!$tmp1754) goto $l1757;
            panda$core$Int64$nullable $tmp1758 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, p_target);
            $tmp1754 = ((panda$core$Bit) { $tmp1758.nonnull }).value;
            $l1757:;
            panda$core$Bit $tmp1759 = { $tmp1754 };
            if ($tmp1759.value) {
            {
                panda$collections$Array* $tmp1761 = (panda$collections$Array*) malloc(40);
                $tmp1761->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp1761->refCount.value = 1;
                panda$collections$Array$init($tmp1761);
                args1760 = $tmp1761;
                org$pandalanguage$pandac$IRNode* $tmp1763 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1763->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1763->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1765 = org$pandalanguage$pandac$Type$BuiltinUInt8$R$org$pandalanguage$pandac$Type();
                panda$collections$ListView* $tmp1766 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(((panda$core$String*) p_expr->payload));
                ITable* $tmp1767 = $tmp1766->$class->itable;
                while ($tmp1767->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp1767 = $tmp1767->next;
                }
                $fn1769 $tmp1768 = $tmp1767->methods[0];
                panda$core$Object* $tmp1770 = $tmp1768($tmp1766, ((panda$core$Int64) { 0 }));
                panda$core$UInt64 $tmp1771 = panda$core$Char8$convert$R$panda$core$UInt64(((panda$core$Char8$wrapper*) $tmp1770)->value);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp1763, ((panda$core$Int64) { 1004 }), p_expr->position, $tmp1765, $tmp1771);
                panda$collections$Array$add$panda$collections$Array$T(args1760, ((panda$core$Object*) $tmp1763));
                org$pandalanguage$pandac$IRNode* $tmp1773 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1773->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1773->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1775 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1773, ((panda$core$Int64) { 1001 }), p_expr->position, $tmp1775, p_target);
                target1772 = $tmp1773;
                org$pandalanguage$pandac$IRNode* $tmp1776 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target1772, ((panda$collections$ListView*) args1760));
                return $tmp1776;
            }
            }
            org$pandalanguage$pandac$Type* $tmp1778 = org$pandalanguage$pandac$Type$Char16$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1779 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1778);
            bool $tmp1777 = $tmp1779.value;
            if (!$tmp1777) goto $l1780;
            panda$core$Int64$nullable $tmp1781 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, p_target);
            $tmp1777 = ((panda$core$Bit) { $tmp1781.nonnull }).value;
            $l1780:;
            panda$core$Bit $tmp1782 = { $tmp1777 };
            if ($tmp1782.value) {
            {
                panda$collections$Array* $tmp1784 = (panda$collections$Array*) malloc(40);
                $tmp1784->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp1784->refCount.value = 1;
                panda$collections$Array$init($tmp1784);
                args1783 = $tmp1784;
                org$pandalanguage$pandac$IRNode* $tmp1786 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1786->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1786->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1788 = org$pandalanguage$pandac$Type$BuiltinUInt16$R$org$pandalanguage$pandac$Type();
                panda$collections$Iterator* $tmp1789 = panda$core$String$utf16$R$panda$collections$Iterator$LTpanda$core$Char16$GT(((panda$core$String*) p_expr->payload));
                ITable* $tmp1790 = $tmp1789->$class->itable;
                while ($tmp1790->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1790 = $tmp1790->next;
                }
                $fn1792 $tmp1791 = $tmp1790->methods[1];
                panda$core$Object* $tmp1793 = $tmp1791($tmp1789);
                panda$core$UInt64 $tmp1794 = panda$core$Char16$convert$R$panda$core$UInt64(((panda$core$Char16$wrapper*) $tmp1793)->value);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp1786, ((panda$core$Int64) { 1004 }), p_expr->position, $tmp1788, $tmp1794);
                panda$collections$Array$add$panda$collections$Array$T(args1783, ((panda$core$Object*) $tmp1786));
                org$pandalanguage$pandac$IRNode* $tmp1796 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1796->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1796->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1798 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1796, ((panda$core$Int64) { 1001 }), p_expr->position, $tmp1798, p_target);
                target1795 = $tmp1796;
                org$pandalanguage$pandac$IRNode* $tmp1799 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target1795, ((panda$collections$ListView*) args1783));
                return $tmp1799;
            }
            }
            org$pandalanguage$pandac$Type* $tmp1801 = org$pandalanguage$pandac$Type$Char32$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1802 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1801);
            bool $tmp1800 = $tmp1802.value;
            if (!$tmp1800) goto $l1803;
            panda$core$Int64$nullable $tmp1804 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, p_target);
            $tmp1800 = ((panda$core$Bit) { $tmp1804.nonnull }).value;
            $l1803:;
            panda$core$Bit $tmp1805 = { $tmp1800 };
            if ($tmp1805.value) {
            {
                panda$collections$Array* $tmp1807 = (panda$collections$Array*) malloc(40);
                $tmp1807->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp1807->refCount.value = 1;
                panda$collections$Array$init($tmp1807);
                args1806 = $tmp1807;
                org$pandalanguage$pandac$IRNode* $tmp1809 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1809->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1809->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1811 = org$pandalanguage$pandac$Type$BuiltinUInt32$R$org$pandalanguage$pandac$Type();
                panda$core$Char32 $tmp1812 = panda$core$String$$IDX$panda$core$Int64$R$panda$core$Char32(((panda$core$String*) p_expr->payload), ((panda$core$Int64) { 0 }));
                panda$core$UInt64 $tmp1813 = panda$core$Char32$convert$R$panda$core$UInt64($tmp1812);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp1809, ((panda$core$Int64) { 1004 }), p_expr->position, $tmp1811, $tmp1813);
                panda$collections$Array$add$panda$collections$Array$T(args1806, ((panda$core$Object*) $tmp1809));
                org$pandalanguage$pandac$IRNode* $tmp1815 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1815->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1815->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1817 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1815, ((panda$core$Int64) { 1001 }), p_expr->position, $tmp1817, p_target);
                target1814 = $tmp1815;
                org$pandalanguage$pandac$IRNode* $tmp1818 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target1814, ((panda$collections$ListView*) args1806));
                return $tmp1818;
            }
            }
        }
        break;
        case 1031:
        {
            panda$core$Bit $tmp1819 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(p_target);
            if ($tmp1819.value) {
            {
                panda$core$Int64 $tmp1820 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_expr->children);
                panda$core$Bit $tmp1821 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1820, ((panda$core$Int64) { 2 }));
                if ($tmp1821.value) {
                {
                    panda$core$String* $tmp1823 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1822, ((panda$core$Object*) p_target));
                    panda$core$String* $tmp1825 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1823, &$s1824);
                    panda$core$String* $tmp1826 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1825, ((panda$core$Object*) p_expr));
                    panda$core$String* $tmp1828 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1826, &$s1827);
                    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_expr->position, $tmp1828);
                    return NULL;
                }
                }
                panda$core$Bit $tmp1829 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 21 }));
                PANDA_ASSERT($tmp1829.value);
                panda$core$Object* $tmp1831 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                param1830 = ((org$pandalanguage$pandac$Type*) $tmp1831);
                panda$core$Object* $tmp1833 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$IRNode* $tmp1834 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1833), param1830);
                start1832 = $tmp1834;
                if (((panda$core$Bit) { start1832 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$core$Object* $tmp1836 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$IRNode* $tmp1837 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1836), param1830);
                end1835 = $tmp1837;
                if (((panda$core$Bit) { end1835 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp1839 = (panda$collections$Array*) malloc(40);
                $tmp1839->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp1839->refCount.value = 1;
                panda$collections$Array$init($tmp1839);
                args1838 = $tmp1839;
                panda$collections$Array$add$panda$collections$Array$T(args1838, ((panda$core$Object*) start1832));
                panda$collections$Array$add$panda$collections$Array$T(args1838, ((panda$core$Object*) end1835));
                org$pandalanguage$pandac$IRNode* $tmp1841 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1841->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1841->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1843 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp1841, ((panda$core$Int64) { 1011 }), p_expr->position, $tmp1843, ((panda$core$Bit$wrapper*) p_expr->payload)->value);
                panda$collections$Array$add$panda$collections$Array$T(args1838, ((panda$core$Object*) $tmp1841));
                org$pandalanguage$pandac$IRNode* $tmp1845 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1845->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1845->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1847 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1845, ((panda$core$Int64) { 1001 }), p_expr->position, $tmp1847, p_target);
                target1844 = $tmp1845;
                org$pandalanguage$pandac$IRNode* $tmp1848 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target1844, ((panda$collections$ListView*) args1838));
                return $tmp1848;
            }
            }
            else {
            panda$core$Bit $tmp1849 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(p_target);
            if ($tmp1849.value) {
            {
                panda$core$Int64 $tmp1850 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_expr->children);
                panda$core$Bit $tmp1851 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1850, ((panda$core$Int64) { 3 }));
                if ($tmp1851.value) {
                {
                    panda$core$String* $tmp1853 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1852, ((panda$core$Object*) p_target));
                    panda$core$String* $tmp1855 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1853, &$s1854);
                    panda$core$String* $tmp1856 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1855, ((panda$core$Object*) p_expr));
                    panda$core$String* $tmp1858 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1856, &$s1857);
                    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_expr->position, $tmp1858);
                    return NULL;
                }
                }
                panda$core$Bit $tmp1859 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 21 }));
                PANDA_ASSERT($tmp1859.value);
                panda$core$Object* $tmp1861 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                endPoint1860 = ((org$pandalanguage$pandac$Type*) $tmp1861);
                panda$core$Object* $tmp1863 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$IRNode* $tmp1864 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1863), endPoint1860);
                start1862 = $tmp1864;
                if (((panda$core$Bit) { start1862 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$core$Object* $tmp1866 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$IRNode* $tmp1867 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1866), endPoint1860);
                end1865 = $tmp1867;
                panda$core$Object* $tmp1869 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 2 }));
                panda$core$Object* $tmp1870 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 2 }));
                org$pandalanguage$pandac$IRNode* $tmp1871 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1869), ((org$pandalanguage$pandac$Type*) $tmp1870));
                step1868 = $tmp1871;
                panda$collections$Array* $tmp1873 = (panda$collections$Array*) malloc(40);
                $tmp1873->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp1873->refCount.value = 1;
                panda$collections$Array$init($tmp1873);
                args1872 = $tmp1873;
                panda$collections$Array$add$panda$collections$Array$T(args1872, ((panda$core$Object*) start1862));
                panda$collections$Array$add$panda$collections$Array$T(args1872, ((panda$core$Object*) end1865));
                panda$collections$Array$add$panda$collections$Array$T(args1872, ((panda$core$Object*) step1868));
                org$pandalanguage$pandac$IRNode* $tmp1875 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1875->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1875->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1877 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp1875, ((panda$core$Int64) { 1011 }), p_expr->position, $tmp1877, ((panda$core$Bit$wrapper*) p_expr->payload)->value);
                panda$collections$Array$add$panda$collections$Array$T(args1872, ((panda$core$Object*) $tmp1875));
                org$pandalanguage$pandac$IRNode* $tmp1879 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1879->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1879->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1881 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1879, ((panda$core$Int64) { 1001 }), p_expr->position, $tmp1881, p_target);
                target1878 = $tmp1879;
                org$pandalanguage$pandac$IRNode* $tmp1882 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target1878, ((panda$collections$ListView*) args1872));
                return $tmp1882;
            }
            }
            else {
            {
                org$pandalanguage$pandac$IRNode* $tmp1883 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp1884 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp1883, p_target);
                return $tmp1884;
            }
            }
            }
        }
        break;
        case 1039:
        {
            org$pandalanguage$pandac$IRNode* $tmp1885 = org$pandalanguage$pandac$Compiler$resolveMethodCall$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, p_target);
            return $tmp1885;
        }
        break;
        case 1040:
        {
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1887, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$collections$ImmutableArray* $tmp1888 = panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(p_expr->children, $tmp1887);
            args1886 = $tmp1888;
            panda$core$Object* $tmp1889 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp1891 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1889), &$s1890, ((panda$collections$ListView*) args1886), p_target);
            org$pandalanguage$pandac$IRNode* $tmp1892 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp1891, p_target);
            return $tmp1892;
        }
        break;
    }
    panda$core$Bit $tmp1893 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp1893.value) {
    {
        panda$core$Bit $tmp1894 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1030 }));
        if ($tmp1894.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp1895 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp1895->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1895->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp1895, ((panda$core$Int64) { 1030 }), p_expr->position, p_target);
            return $tmp1895;
        }
        }
        panda$core$Object* $tmp1897 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp1898 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_expr->type, ((org$pandalanguage$pandac$Type*) $tmp1897));
        if ($tmp1898.value) {
        {
            panda$collections$Array* $tmp1900 = (panda$collections$Array*) malloc(40);
            $tmp1900->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1900->refCount.value = 1;
            panda$collections$Array$init($tmp1900);
            children1899 = $tmp1900;
            panda$collections$Array$add$panda$collections$Array$T(children1899, ((panda$core$Object*) p_expr));
            org$pandalanguage$pandac$IRNode* $tmp1902 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp1902->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1902->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp1902, ((panda$core$Int64) { 1009 }), p_expr->position, p_target, ((panda$core$Object*) wrap_panda$core$Bit(((panda$core$Bit) { false }))), ((panda$collections$ListView*) children1899));
            return $tmp1902;
        }
        }
        panda$core$Bit $tmp1904 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_expr->type->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp1904.value) {
        {
            panda$core$Object* $tmp1906 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp1907 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, ((org$pandalanguage$pandac$Type*) $tmp1906));
            intermediate1905 = $tmp1907;
            org$pandalanguage$pandac$IRNode* $tmp1908 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, intermediate1905, p_target);
            return $tmp1908;
        }
        }
    }
    }
    panda$core$Int64$nullable $tmp1909 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, p_target);
    if (((panda$core$Bit) { $tmp1909.nonnull }).value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp1911 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_target);
        cl1910 = $tmp1911;
        if (((panda$core$Bit) { cl1910 != NULL }).value) {
        {
            {
                ITable* $tmp1913 = ((panda$collections$Iterable*) cl1910->methods)->$class->itable;
                while ($tmp1913->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1913 = $tmp1913->next;
                }
                $fn1915 $tmp1914 = $tmp1913->methods[0];
                panda$collections$Iterator* $tmp1916 = $tmp1914(((panda$collections$Iterable*) cl1910->methods));
                m$Iter1912 = $tmp1916;
                $l1917:;
                ITable* $tmp1919 = m$Iter1912->$class->itable;
                while ($tmp1919->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1919 = $tmp1919->next;
                }
                $fn1921 $tmp1920 = $tmp1919->methods[0];
                panda$core$Bit $tmp1922 = $tmp1920(m$Iter1912);
                panda$core$Bit $tmp1923 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1922);
                if (!$tmp1923.value) goto $l1918;
                {
                    ITable* $tmp1925 = m$Iter1912->$class->itable;
                    while ($tmp1925->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1925 = $tmp1925->next;
                    }
                    $fn1927 $tmp1926 = $tmp1925->methods[1];
                    panda$core$Object* $tmp1928 = $tmp1926(m$Iter1912);
                    m1924 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1928);
                    panda$core$Bit $tmp1929 = org$pandalanguage$pandac$Annotations$isImplicit$R$panda$core$Bit(m1924->annotations);
                    if ($tmp1929.value) {
                    {
                        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m1924);
                        panda$core$Bit $tmp1930 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(m1924->methodKind, ((panda$core$Int64) { 59 }));
                        PANDA_ASSERT($tmp1930.value);
                        panda$core$Int64 $tmp1931 = panda$collections$Array$get_count$R$panda$core$Int64(m1924->parameters);
                        panda$core$Bit $tmp1932 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1931, ((panda$core$Int64) { 1 }));
                        PANDA_ASSERT($tmp1932.value);
                        panda$core$Object* $tmp1933 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(m1924->parameters, ((panda$core$Int64) { 0 }));
                        panda$core$Int64$nullable $tmp1934 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1933)->type);
                        if (((panda$core$Bit) { $tmp1934.nonnull }).value) {
                        {
                            org$pandalanguage$pandac$IRNode* $tmp1936 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                            $tmp1936->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                            $tmp1936->refCount.value = 1;
                            org$pandalanguage$pandac$Type* $tmp1938 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                            org$pandalanguage$pandac$Type* $tmp1939 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl1910);
                            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1936, ((panda$core$Int64) { 1001 }), p_expr->position, $tmp1938, $tmp1939);
                            type1935 = $tmp1936;
                            panda$collections$Array* $tmp1941 = (panda$collections$Array*) malloc(40);
                            $tmp1941->$class = (panda$core$Class*) &panda$collections$Array$class;
                            $tmp1941->refCount.value = 1;
                            panda$collections$Array$init$panda$core$Int64($tmp1941, ((panda$core$Int64) { 1 }));
                            args1940 = $tmp1941;
                            panda$collections$Array$add$panda$collections$Array$T(args1940, ((panda$core$Object*) p_expr));
                            org$pandalanguage$pandac$IRNode* $tmp1943 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, type1935, ((panda$collections$ListView*) args1940));
                            return $tmp1943;
                        }
                        }
                    }
                    }
                }
                goto $l1917;
                $l1918:;
            }
        }
        }
        panda$collections$Array* $tmp1945 = (panda$collections$Array*) malloc(40);
        $tmp1945->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp1945->refCount.value = 1;
        panda$collections$Array$init$panda$core$Int64($tmp1945, ((panda$core$Int64) { 1 }));
        children1944 = $tmp1945;
        panda$collections$Array$add$panda$collections$Array$T(children1944, ((panda$core$Object*) p_expr));
        org$pandalanguage$pandac$IRNode* $tmp1947 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp1947->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp1947->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp1947, ((panda$core$Int64) { 1009 }), p_expr->position, p_target, ((panda$core$Object*) wrap_panda$core$Bit(((panda$core$Bit) { false }))), ((panda$collections$ListView*) children1944));
        return $tmp1947;
    }
    }
    panda$core$String* $tmp1950 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1949, ((panda$core$Object*) p_target));
    panda$core$String* $tmp1952 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1950, &$s1951);
    panda$core$String* $tmp1953 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1952, ((panda$core$Object*) p_expr->type));
    panda$core$String* $tmp1955 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1953, &$s1954);
    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_expr->position, $tmp1955);
    return NULL;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr, org$pandalanguage$pandac$Type* p_target) {
    org$pandalanguage$pandac$IRNode* result1956;
    org$pandalanguage$pandac$IRNode* $tmp1957 = org$pandalanguage$pandac$Compiler$doCoerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, p_target);
    result1956 = $tmp1957;
    bool $tmp1958 = ((panda$core$Bit) { result1956 == NULL }).value;
    if ($tmp1958) goto $l1959;
    panda$core$Bit $tmp1960 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(result1956->type, p_target);
    $tmp1958 = $tmp1960.value;
    $l1959:;
    panda$core$Bit $tmp1961 = { $tmp1958 };
    PANDA_ASSERT($tmp1961.value);
    return result1956;
}
panda$core$Bit org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type, org$pandalanguage$pandac$Type* p_target) {
    panda$core$Bit $tmp1963 = org$pandalanguage$pandac$Type$isPointer$R$panda$core$Bit(p_type);
    bool $tmp1962 = $tmp1963.value;
    if (!$tmp1962) goto $l1964;
    panda$core$Bit $tmp1965 = org$pandalanguage$pandac$Type$isPointer$R$panda$core$Bit(p_target);
    $tmp1962 = $tmp1965.value;
    $l1964:;
    panda$core$Bit $tmp1966 = { $tmp1962 };
    if ($tmp1966.value) {
    {
        return ((panda$core$Bit) { true });
    }
    }
    panda$core$Int64$nullable $tmp1967 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_type, p_target);
    if (((panda$core$Bit) { $tmp1967.nonnull }).value) {
    {
        return ((panda$core$Bit) { true });
    }
    }
    panda$core$Bit $tmp1969 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_type);
    bool $tmp1968 = $tmp1969.value;
    if (!$tmp1968) goto $l1970;
    panda$core$Bit $tmp1971 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_target);
    $tmp1968 = $tmp1971.value;
    $l1970:;
    panda$core$Bit $tmp1972 = { $tmp1968 };
    if ($tmp1972.value) {
    {
        return ((panda$core$Bit) { true });
    }
    }
    panda$core$Bit $tmp1973 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 16 }));
    if ($tmp1973.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Int64$nullable $tmp1974 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_target, p_type);
    return ((panda$core$Bit) { $tmp1974.nonnull });
}
panda$core$Bit org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_node, org$pandalanguage$pandac$Type* p_target) {
    panda$core$Bit result1976;
    org$pandalanguage$pandac$IRNode* resolved1983;
    panda$core$Int64$nullable $tmp1975 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_node, p_target);
    if (((panda$core$Bit) { $tmp1975.nonnull }).value) {
    {
        return ((panda$core$Bit) { true });
    }
    }
    panda$core$Bit $tmp1977 = org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_node->type, p_target);
    result1976 = $tmp1977;
    panda$core$Bit $tmp1979 = panda$core$Bit$$NOT$R$panda$core$Bit(result1976);
    bool $tmp1978 = $tmp1979.value;
    if (!$tmp1978) goto $l1980;
    panda$core$Bit $tmp1981 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_node->type->typeKind, ((panda$core$Int64) { 17 }));
    $tmp1978 = $tmp1981.value;
    $l1980:;
    panda$core$Bit $tmp1982 = { $tmp1978 };
    if ($tmp1982.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp1984 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_node);
        resolved1983 = $tmp1984;
        if (((panda$core$Bit) { resolved1983 != NULL }).value) {
        {
            panda$core$Bit $tmp1985 = org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, resolved1983, p_target);
            result1976 = $tmp1985;
        }
        }
    }
    }
    return result1976;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_node, org$pandalanguage$pandac$Position p_position, panda$core$Bit p_isExplicit, org$pandalanguage$pandac$Type* p_target) {
    org$pandalanguage$pandac$IRNode* resolved2006;
    panda$collections$Array* children2009;
    panda$core$Bit $tmp1986 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_node->type, p_target);
    if ($tmp1986.value) {
    {
        return p_node;
    }
    }
    org$pandalanguage$pandac$Type* $tmp1987 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1988 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1987);
    PANDA_ASSERT($tmp1988.value);
    bool $tmp1989 = p_isExplicit.value;
    if (!$tmp1989) goto $l1990;
    panda$core$Bit $tmp1991 = org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_node, p_target);
    panda$core$Bit $tmp1992 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1991);
    $tmp1989 = $tmp1992.value;
    $l1990:;
    panda$core$Bit $tmp1993 = { $tmp1989 };
    if ($tmp1993.value) {
    {
        panda$core$String* $tmp1995 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1994, ((panda$core$Object*) p_node->type));
        panda$core$String* $tmp1997 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1995, &$s1996);
        panda$core$String* $tmp1999 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1998, ((panda$core$Object*) p_target));
        panda$core$String* $tmp2001 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1999, &$s2000);
        panda$core$String* $tmp2002 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1997, $tmp2001);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp2002);
    }
    }
    switch (p_node->kind.value) {
        case 1004:
        case 1032:
        case 1011:
        {
            org$pandalanguage$pandac$IRNode* $tmp2003 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_node, p_target);
            return $tmp2003;
        }
        break;
        case 1039:
        case 1040:
        {
            panda$core$Int64$nullable $tmp2004 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_node, p_target);
            if (((panda$core$Bit) { $tmp2004.nonnull }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2005 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_node, p_target);
                return $tmp2005;
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp2007 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_node);
            resolved2006 = $tmp2007;
            if (((panda$core$Bit) { resolved2006 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2008 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, resolved2006, p_position, p_isExplicit, p_target);
                return $tmp2008;
            }
            }
        }
        break;
    }
    panda$collections$Array* $tmp2010 = (panda$collections$Array*) malloc(40);
    $tmp2010->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2010->refCount.value = 1;
    panda$collections$Array$init($tmp2010);
    children2009 = $tmp2010;
    panda$collections$Array$add$panda$collections$Array$T(children2009, ((panda$core$Object*) p_node));
    org$pandalanguage$pandac$IRNode* $tmp2012 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp2012->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2012->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2012, ((panda$core$Int64) { 1009 }), p_position, p_target, ((panda$core$Object*) wrap_panda$core$Bit(p_isExplicit)), ((panda$collections$ListView*) children2009));
    return $tmp2012;
}
panda$core$Int64$nullable org$pandalanguage$pandac$Compiler$callCost$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodRef* p_m, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedReturn) {
    panda$core$Int64 result2020;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2021;
    panda$core$Int64$nullable cost2036;
    panda$core$Int64$nullable cost2050;
    PANDA_ASSERT(p_m->value->resolved.value);
    panda$core$Int64 $tmp2014 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
    ITable* $tmp2015 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp2015->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2015 = $tmp2015->next;
    }
    $fn2017 $tmp2016 = $tmp2015->methods[0];
    panda$core$Int64 $tmp2018 = $tmp2016(((panda$collections$CollectionView*) p_args));
    panda$core$Bit $tmp2019 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp2014, $tmp2018);
    if ($tmp2019.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    result2020 = ((panda$core$Int64) { 0 });
    panda$core$Int64 $tmp2022 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2021, ((panda$core$Int64) { 0 }), $tmp2022, ((panda$core$Bit) { false }));
    int64_t $tmp2024 = $tmp2021.min.value;
    panda$core$Int64 i2023 = { $tmp2024 };
    int64_t $tmp2026 = $tmp2021.max.value;
    bool $tmp2027 = $tmp2021.inclusive.value;
    if ($tmp2027) goto $l2034; else goto $l2035;
    $l2034:;
    if ($tmp2024 <= $tmp2026) goto $l2028; else goto $l2030;
    $l2035:;
    if ($tmp2024 < $tmp2026) goto $l2028; else goto $l2030;
    $l2028:;
    {
        ITable* $tmp2037 = p_args->$class->itable;
        while ($tmp2037->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2037 = $tmp2037->next;
        }
        $fn2039 $tmp2038 = $tmp2037->methods[0];
        panda$core$Object* $tmp2040 = $tmp2038(p_args, i2023);
        org$pandalanguage$pandac$Type* $tmp2041 = org$pandalanguage$pandac$MethodRef$parameter$panda$core$Int64$R$org$pandalanguage$pandac$Type(p_m, i2023);
        panda$core$Int64$nullable $tmp2042 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp2040), $tmp2041);
        cost2036 = $tmp2042;
        if (((panda$core$Bit) { !cost2036.nonnull }).value) {
        {
            return ((panda$core$Int64$nullable) { .nonnull = false });
        }
        }
        panda$core$Int64 $tmp2043 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result2020, ((panda$core$Int64) cost2036.value));
        result2020 = $tmp2043;
    }
    $l2031:;
    int64_t $tmp2045 = $tmp2026 - i2023.value;
    if ($tmp2027) goto $l2046; else goto $l2047;
    $l2046:;
    if ($tmp2045 >= 1) goto $l2044; else goto $l2030;
    $l2047:;
    if ($tmp2045 > 1) goto $l2044; else goto $l2030;
    $l2044:;
    i2023.value += 1;
    goto $l2028;
    $l2030:;
    if (((panda$core$Bit) { p_expectedReturn != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp2051 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(p_m);
        panda$core$Int64$nullable $tmp2052 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp2051, p_expectedReturn);
        cost2050 = $tmp2052;
        if (((panda$core$Bit) { !cost2050.nonnull }).value) {
        {
            return ((panda$core$Int64$nullable) { .nonnull = false });
        }
        }
        panda$core$Int64 $tmp2053 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result2020, ((panda$core$Int64) cost2050.value));
        result2020 = $tmp2053;
    }
    }
    org$pandalanguage$pandac$Type* $tmp2056 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->value->owner);
    panda$core$Bit $tmp2057 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit($tmp2056);
    bool $tmp2055 = $tmp2057.value;
    if (!$tmp2055) goto $l2058;
    ITable* $tmp2059 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp2059->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2059 = $tmp2059->next;
    }
    $fn2061 $tmp2060 = $tmp2059->methods[0];
    panda$core$Int64 $tmp2062 = $tmp2060(((panda$collections$CollectionView*) p_args));
    panda$core$Bit $tmp2063 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2062, ((panda$core$Int64) { 1 }));
    $tmp2055 = $tmp2063.value;
    $l2058:;
    panda$core$Bit $tmp2064 = { $tmp2055 };
    bool $tmp2054 = $tmp2064.value;
    if (!$tmp2054) goto $l2065;
    panda$core$Object* $tmp2066 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->value->parameters, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp2067 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->value->owner);
    panda$core$Bit $tmp2068 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp2066)->type, $tmp2067);
    $tmp2054 = $tmp2068.value;
    $l2065:;
    panda$core$Bit $tmp2069 = { $tmp2054 };
    if ($tmp2069.value) {
    {
        panda$core$Int64 $tmp2070 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result2020, ((panda$core$Int64) { 1 }));
        result2020 = $tmp2070;
    }
    }
    return ((panda$core$Int64$nullable) { result2020, true });
}
panda$core$Int64$nullable org$pandalanguage$pandac$Compiler$matchMethods$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(org$pandalanguage$pandac$Compiler* self, panda$collections$Array* p_methods, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedReturn) {
    panda$collections$Array* result2071;
    panda$core$Int64$nullable best2074;
    panda$collections$Iterator* m$Iter2075;
    org$pandalanguage$pandac$MethodRef* m2087;
    panda$core$Int64$nullable cost2092;
    panda$collections$Array* $tmp2072 = (panda$collections$Array*) malloc(40);
    $tmp2072->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2072->refCount.value = 1;
    panda$collections$Array$init($tmp2072);
    result2071 = $tmp2072;
    best2074 = ((panda$core$Int64$nullable) { .nonnull = false });
    {
        ITable* $tmp2076 = ((panda$collections$Iterable*) p_methods)->$class->itable;
        while ($tmp2076->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2076 = $tmp2076->next;
        }
        $fn2078 $tmp2077 = $tmp2076->methods[0];
        panda$collections$Iterator* $tmp2079 = $tmp2077(((panda$collections$Iterable*) p_methods));
        m$Iter2075 = $tmp2079;
        $l2080:;
        ITable* $tmp2082 = m$Iter2075->$class->itable;
        while ($tmp2082->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2082 = $tmp2082->next;
        }
        $fn2084 $tmp2083 = $tmp2082->methods[0];
        panda$core$Bit $tmp2085 = $tmp2083(m$Iter2075);
        panda$core$Bit $tmp2086 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2085);
        if (!$tmp2086.value) goto $l2081;
        {
            ITable* $tmp2088 = m$Iter2075->$class->itable;
            while ($tmp2088->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2088 = $tmp2088->next;
            }
            $fn2090 $tmp2089 = $tmp2088->methods[1];
            panda$core$Object* $tmp2091 = $tmp2089(m$Iter2075);
            m2087 = ((org$pandalanguage$pandac$MethodRef*) $tmp2091);
            panda$core$Int64$nullable $tmp2093 = org$pandalanguage$pandac$Compiler$callCost$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(self, m2087, p_args, p_expectedReturn);
            cost2092 = $tmp2093;
            if (((panda$core$Bit) { !cost2092.nonnull }).value) {
            {
                goto $l2080;
            }
            }
            bool $tmp2094 = ((panda$core$Bit) { !best2074.nonnull }).value;
            if ($tmp2094) goto $l2095;
            panda$core$Bit $tmp2096 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost2092.value), ((panda$core$Int64) best2074.value));
            $tmp2094 = $tmp2096.value;
            $l2095:;
            panda$core$Bit $tmp2097 = { $tmp2094 };
            if ($tmp2097.value) {
            {
                panda$collections$Array$clear(result2071);
                best2074 = cost2092;
            }
            }
            panda$core$Bit $tmp2098 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost2092.value), ((panda$core$Int64) best2074.value));
            if ($tmp2098.value) {
            {
                panda$collections$Array$add$panda$collections$Array$T(result2071, ((panda$core$Object*) m2087));
            }
            }
        }
        goto $l2080;
        $l2081:;
    }
    panda$collections$Array$clear(p_methods);
    panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(p_methods, ((panda$collections$CollectionView*) result2071));
    return best2074;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$MethodRef* p_m, panda$collections$ListView* p_args) {
    panda$core$String* s2105;
    panda$collections$Array* finalArgs2130;
    org$pandalanguage$pandac$IRNode* selfNode2166;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2195;
    org$pandalanguage$pandac$IRNode* coerced2213;
    org$pandalanguage$pandac$IRNode* result2228;
    PANDA_ASSERT(p_m->value->resolved.value);
    panda$core$Int64 $tmp2099 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
    ITable* $tmp2100 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp2100->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2100 = $tmp2100->next;
    }
    $fn2102 $tmp2101 = $tmp2100->methods[0];
    panda$core$Int64 $tmp2103 = $tmp2101(((panda$collections$CollectionView*) p_args));
    panda$core$Bit $tmp2104 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp2099, $tmp2103);
    if ($tmp2104.value) {
    {
        panda$core$Int64 $tmp2106 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
        panda$core$Bit $tmp2107 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2106, ((panda$core$Int64) { 1 }));
        if ($tmp2107.value) {
        {
            s2105 = &$s2108;
        }
        }
        else {
        {
            s2105 = &$s2109;
        }
        }
        panda$core$String* $tmp2110 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(p_m->value);
        panda$core$String* $tmp2111 = panda$core$String$convert$R$panda$core$String($tmp2110);
        panda$core$String* $tmp2113 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2111, &$s2112);
        panda$core$Int64 $tmp2114 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
        panda$core$String* $tmp2115 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2113, ((panda$core$Object*) wrap_panda$core$Int64($tmp2114)));
        panda$core$String* $tmp2117 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2115, &$s2116);
        panda$core$String* $tmp2118 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2117, s2105);
        panda$core$String* $tmp2120 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2118, &$s2119);
        ITable* $tmp2122 = ((panda$collections$CollectionView*) p_args)->$class->itable;
        while ($tmp2122->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp2122 = $tmp2122->next;
        }
        $fn2124 $tmp2123 = $tmp2122->methods[0];
        panda$core$Int64 $tmp2125 = $tmp2123(((panda$collections$CollectionView*) p_args));
        panda$core$String* $tmp2126 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2121, ((panda$core$Object*) wrap_panda$core$Int64($tmp2125)));
        panda$core$String* $tmp2128 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2126, &$s2127);
        panda$core$String* $tmp2129 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2120, $tmp2128);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp2129);
        return NULL;
    }
    }
    panda$collections$Array* $tmp2131 = (panda$collections$Array*) malloc(40);
    $tmp2131->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2131->refCount.value = 1;
    panda$collections$Array$init($tmp2131);
    finalArgs2130 = $tmp2131;
    bool $tmp2134 = ((panda$core$Bit) { p_target != NULL }).value;
    if (!$tmp2134) goto $l2135;
    panda$core$Bit $tmp2136 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1038 }));
    $tmp2134 = $tmp2136.value;
    $l2135:;
    panda$core$Bit $tmp2137 = { $tmp2134 };
    bool $tmp2133 = $tmp2137.value;
    if (!$tmp2133) goto $l2138;
    panda$core$Bit $tmp2139 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->value->annotations);
    panda$core$Bit $tmp2140 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2139);
    $tmp2133 = $tmp2140.value;
    $l2138:;
    panda$core$Bit $tmp2141 = { $tmp2133 };
    if ($tmp2141.value) {
    {
        org$pandalanguage$pandac$Type* $tmp2142 = org$pandalanguage$pandac$MethodRef$owner$R$org$pandalanguage$pandac$Type(p_m);
        org$pandalanguage$pandac$IRNode* $tmp2143 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, p_target, p_position, ((panda$core$Bit) { false }), $tmp2142);
        panda$collections$Array$add$panda$collections$Array$T(finalArgs2130, ((panda$core$Object*) $tmp2143));
    }
    }
    panda$core$Bit $tmp2144 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->value->methodKind, ((panda$core$Int64) { 59 }));
    if ($tmp2144.value) {
    {
        if (((panda$core$Bit) { p_target == NULL }).value) {
        {
            panda$core$Object* $tmp2145 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
            panda$core$Bit $tmp2146 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp2145)->methodKind, ((panda$core$Int64) { 59 }));
            if ($tmp2146.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2147 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2147->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2147->refCount.value = 1;
                panda$core$Object* $tmp2149 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
                org$pandalanguage$pandac$Type* $tmp2150 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp2149));
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp2147, ((panda$core$Int64) { 1025 }), p_position, $tmp2150);
                panda$collections$Array$add$panda$collections$Array$T(finalArgs2130, ((panda$core$Object*) $tmp2147));
            }
            }
            else {
            {
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s2151);
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp2154 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1025 }));
        bool $tmp2153 = $tmp2154.value;
        if (!$tmp2153) goto $l2155;
        panda$core$Bit $tmp2156 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1024 }));
        $tmp2153 = $tmp2156.value;
        $l2155:;
        panda$core$Bit $tmp2157 = { $tmp2153 };
        bool $tmp2152 = $tmp2157.value;
        if (!$tmp2152) goto $l2158;
        panda$core$Bit $tmp2159 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1038 }));
        $tmp2152 = $tmp2159.value;
        $l2158:;
        panda$core$Bit $tmp2160 = { $tmp2152 };
        if ($tmp2160.value) {
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s2161);
        }
        }
        }
    }
    }
    else {
    panda$core$Bit $tmp2163 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(p_m->value);
    bool $tmp2162 = $tmp2163.value;
    if (!$tmp2162) goto $l2164;
    $tmp2162 = ((panda$core$Bit) { p_target == NULL }).value;
    $l2164:;
    panda$core$Bit $tmp2165 = { $tmp2162 };
    if ($tmp2165.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2167 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2167->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2167->refCount.value = 1;
        panda$core$Object* $tmp2169 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
        org$pandalanguage$pandac$Type* $tmp2170 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp2169));
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp2167, ((panda$core$Int64) { 1025 }), p_position, $tmp2170);
        selfNode2166 = $tmp2167;
        org$pandalanguage$pandac$Type* $tmp2171 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->value->owner);
        org$pandalanguage$pandac$IRNode* $tmp2172 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, selfNode2166, $tmp2171);
        selfNode2166 = $tmp2172;
        PANDA_ASSERT(((panda$core$Bit) { selfNode2166 != NULL }).value);
        panda$collections$Array$add$panda$collections$Array$T(finalArgs2130, ((panda$core$Object*) selfNode2166));
        panda$core$Object* $tmp2173 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
        panda$core$Bit $tmp2174 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp2173));
        panda$core$Bit $tmp2175 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2174);
        if ($tmp2175.value) {
        {
            panda$core$String* $tmp2177 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(p_m->value);
            panda$core$String* $tmp2178 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2176, $tmp2177);
            panda$core$String* $tmp2180 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2178, &$s2179);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp2180);
        }
        }
    }
    }
    else {
    panda$core$Bit $tmp2183 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(p_m->value);
    panda$core$Bit $tmp2184 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2183);
    bool $tmp2182 = $tmp2184.value;
    if (!$tmp2182) goto $l2185;
    $tmp2182 = ((panda$core$Bit) { p_target != NULL }).value;
    $l2185:;
    panda$core$Bit $tmp2186 = { $tmp2182 };
    bool $tmp2181 = $tmp2186.value;
    if (!$tmp2181) goto $l2187;
    panda$core$Bit $tmp2188 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1001 }));
    $tmp2181 = $tmp2188.value;
    $l2187:;
    panda$core$Bit $tmp2189 = { $tmp2181 };
    if ($tmp2189.value) {
    {
        panda$core$String* $tmp2191 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(p_m->value);
        panda$core$String* $tmp2192 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2190, $tmp2191);
        panda$core$String* $tmp2194 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2192, &$s2193);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp2194);
    }
    }
    }
    }
    ITable* $tmp2196 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp2196->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2196 = $tmp2196->next;
    }
    $fn2198 $tmp2197 = $tmp2196->methods[0];
    panda$core$Int64 $tmp2199 = $tmp2197(((panda$collections$CollectionView*) p_args));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2195, ((panda$core$Int64) { 0 }), $tmp2199, ((panda$core$Bit) { false }));
    int64_t $tmp2201 = $tmp2195.min.value;
    panda$core$Int64 i2200 = { $tmp2201 };
    int64_t $tmp2203 = $tmp2195.max.value;
    bool $tmp2204 = $tmp2195.inclusive.value;
    if ($tmp2204) goto $l2211; else goto $l2212;
    $l2211:;
    if ($tmp2201 <= $tmp2203) goto $l2205; else goto $l2207;
    $l2212:;
    if ($tmp2201 < $tmp2203) goto $l2205; else goto $l2207;
    $l2205:;
    {
        ITable* $tmp2214 = p_args->$class->itable;
        while ($tmp2214->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2214 = $tmp2214->next;
        }
        $fn2216 $tmp2215 = $tmp2214->methods[0];
        panda$core$Object* $tmp2217 = $tmp2215(p_args, i2200);
        org$pandalanguage$pandac$Type* $tmp2218 = org$pandalanguage$pandac$MethodRef$parameter$panda$core$Int64$R$org$pandalanguage$pandac$Type(p_m, i2200);
        org$pandalanguage$pandac$IRNode* $tmp2219 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp2217), $tmp2218);
        coerced2213 = $tmp2219;
        if (((panda$core$Bit) { coerced2213 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Object* $tmp2220 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->value->parameters, i2200);
        org$pandalanguage$pandac$IRNode* $tmp2221 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, coerced2213, p_position, ((panda$core$Bit) { false }), ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp2220)->type);
        coerced2213 = $tmp2221;
        if (((panda$core$Bit) { coerced2213 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(finalArgs2130, ((panda$core$Object*) coerced2213));
    }
    $l2208:;
    int64_t $tmp2223 = $tmp2203 - i2200.value;
    if ($tmp2204) goto $l2224; else goto $l2225;
    $l2224:;
    if ($tmp2223 >= 1) goto $l2222; else goto $l2207;
    $l2225:;
    if ($tmp2223 > 1) goto $l2222; else goto $l2207;
    $l2222:;
    i2200.value += 1;
    goto $l2205;
    $l2207:;
    panda$core$Bit $tmp2230 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_m->value->owner)->name, &$s2229);
    if ($tmp2230.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2231 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2231->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2231->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp2233 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(p_m);
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2231, ((panda$core$Int64) { 1005 }), p_position, $tmp2233, ((panda$core$Object*) p_m), ((panda$collections$ListView*) finalArgs2130));
        result2228 = $tmp2231;
    }
    }
    else {
    {
        org$pandalanguage$pandac$IRNode* $tmp2234 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2234->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2234->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2234, ((panda$core$Int64) { 1005 }), p_position, p_m->value->returnType, ((panda$core$Object*) p_m), ((panda$collections$ListView*) finalArgs2130));
        result2228 = $tmp2234;
        org$pandalanguage$pandac$Type* $tmp2236 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(p_m);
        org$pandalanguage$pandac$IRNode* $tmp2237 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, result2228, p_position, ((panda$core$Bit) { false }), $tmp2236);
        result2228 = $tmp2237;
    }
    }
    return result2228;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_target, panda$core$String* p_name, panda$collections$ListView* p_args) {
    org$pandalanguage$pandac$IRNode* $tmp2238 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_target, p_name, p_args, NULL);
    return $tmp2238;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_target, panda$core$String* p_name, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedType) {
    org$pandalanguage$pandac$IRNode* resolved2239;
    org$pandalanguage$pandac$ClassDecl* cl2241;
    org$pandalanguage$pandac$Symbol* s2245;
    org$pandalanguage$pandac$IRNode* ref2267;
    org$pandalanguage$pandac$IRNode* $tmp2240 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_target);
    resolved2239 = $tmp2240;
    if (((panda$core$Bit) { resolved2239 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp2242 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(resolved2239->kind, ((panda$core$Int64) { 1001 }));
    if ($tmp2242.value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp2243 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Type*) resolved2239->payload));
        cl2241 = $tmp2243;
    }
    }
    else {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp2244 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, resolved2239->type);
        cl2241 = $tmp2244;
    }
    }
    if (((panda$core$Bit) { cl2241 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp2246 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl2241);
    org$pandalanguage$pandac$Symbol* $tmp2247 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp2246, p_name);
    s2245 = $tmp2247;
    if (((panda$core$Bit) { s2245 == NULL }).value) {
    {
        panda$core$String* $tmp2249 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2248, ((org$pandalanguage$pandac$Symbol*) cl2241)->name);
        panda$core$String* $tmp2251 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2249, &$s2250);
        panda$core$String* $tmp2252 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2251, p_name);
        panda$core$String* $tmp2254 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2252, &$s2253);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_target->position, $tmp2254);
        return NULL;
    }
    }
    panda$core$Bit $tmp2256 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(s2245->kind, ((panda$core$Int64) { 204 }));
    bool $tmp2255 = $tmp2256.value;
    if (!$tmp2255) goto $l2257;
    panda$core$Bit $tmp2258 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(s2245->kind, ((panda$core$Int64) { 205 }));
    $tmp2255 = $tmp2258.value;
    $l2257:;
    panda$core$Bit $tmp2259 = { $tmp2255 };
    if ($tmp2259.value) {
    {
        panda$core$String* $tmp2261 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2260, ((org$pandalanguage$pandac$Symbol*) cl2241)->name);
        panda$core$String* $tmp2263 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2261, &$s2262);
        panda$core$String* $tmp2264 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2263, p_name);
        panda$core$String* $tmp2266 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2264, &$s2265);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_target->position, $tmp2266);
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp2268 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl2241);
    org$pandalanguage$pandac$IRNode* $tmp2269 = org$pandalanguage$pandac$Compiler$symbolRef$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q(self, p_target->position, p_target, s2245, $tmp2268);
    ref2267 = $tmp2269;
    if (((panda$core$Bit) { ref2267 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp2270 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, ref2267, p_args, p_expectedType);
    return $tmp2270;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_m, panda$collections$ListView* p_args) {
    org$pandalanguage$pandac$IRNode* $tmp2271 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_m, p_args, NULL);
    return $tmp2271;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_m, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedType) {
    org$pandalanguage$pandac$IRNode* target2272;
    panda$collections$Array* methods2279;
    org$pandalanguage$pandac$MethodDecl* first2284;
    panda$core$MutableString* msg2289;
    panda$core$String* separator2300;
    panda$collections$Iterator* a$Iter2302;
    org$pandalanguage$pandac$IRNode* a2314;
    org$pandalanguage$pandac$IRNode* target2328;
    panda$collections$Array* children2336;
    panda$collections$Array* types2342;
    panda$collections$Iterator* m$Iter2345;
    org$pandalanguage$pandac$MethodRef* m2357;
    org$pandalanguage$pandac$IRNode* target2367;
    org$pandalanguage$pandac$IRNode* initCall2370;
    panda$collections$Array* children2374;
    org$pandalanguage$pandac$IRNode* resolved2379;
    switch (p_m->kind.value) {
        case 1002:
        {
            panda$core$Int64 $tmp2273 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
            panda$core$Bit $tmp2274 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2273, ((panda$core$Int64) { 0 }));
            if ($tmp2274.value) {
            {
                target2272 = NULL;
            }
            }
            else {
            {
                panda$core$Int64 $tmp2275 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
                panda$core$Bit $tmp2276 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2275, ((panda$core$Int64) { 1 }));
                PANDA_ASSERT($tmp2276.value);
                panda$core$Object* $tmp2277 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 0 }));
                target2272 = ((org$pandalanguage$pandac$IRNode*) $tmp2277);
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp2278 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, p_m->position, target2272, ((org$pandalanguage$pandac$MethodRef*) p_m->payload), p_args);
            return $tmp2278;
        }
        break;
        case 1003:
        {
            panda$collections$Array* $tmp2280 = (panda$collections$Array*) malloc(40);
            $tmp2280->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2280->refCount.value = 1;
            panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp2280, ((panda$collections$ListView*) p_m->payload));
            methods2279 = $tmp2280;
            org$pandalanguage$pandac$Compiler$matchMethods$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(self, methods2279, p_args, p_expectedType);
            panda$core$Int64 $tmp2282 = panda$collections$Array$get_count$R$panda$core$Int64(methods2279);
            panda$core$Bit $tmp2283 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2282, ((panda$core$Int64) { 0 }));
            if ($tmp2283.value) {
            {
                ITable* $tmp2285 = ((panda$collections$ListView*) p_m->payload)->$class->itable;
                while ($tmp2285->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp2285 = $tmp2285->next;
                }
                $fn2287 $tmp2286 = $tmp2285->methods[0];
                panda$core$Object* $tmp2288 = $tmp2286(((panda$collections$ListView*) p_m->payload), ((panda$core$Int64) { 0 }));
                first2284 = ((org$pandalanguage$pandac$MethodRef*) $tmp2288)->value;
                panda$core$MutableString* $tmp2290 = (panda$core$MutableString*) malloc(48);
                $tmp2290->$class = (panda$core$Class*) &panda$core$MutableString$class;
                $tmp2290->refCount.value = 1;
                panda$core$String* $tmp2293 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2292, ((org$pandalanguage$pandac$Symbol*) first2284->owner)->name);
                panda$core$String* $tmp2295 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2293, &$s2294);
                panda$core$String* $tmp2296 = panda$core$String$convert$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) first2284)->name);
                panda$core$String* $tmp2298 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2296, &$s2297);
                panda$core$String* $tmp2299 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2295, $tmp2298);
                panda$core$MutableString$init$panda$core$String($tmp2290, $tmp2299);
                msg2289 = $tmp2290;
                separator2300 = &$s2301;
                {
                    ITable* $tmp2303 = ((panda$collections$Iterable*) p_args)->$class->itable;
                    while ($tmp2303->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp2303 = $tmp2303->next;
                    }
                    $fn2305 $tmp2304 = $tmp2303->methods[0];
                    panda$collections$Iterator* $tmp2306 = $tmp2304(((panda$collections$Iterable*) p_args));
                    a$Iter2302 = $tmp2306;
                    $l2307:;
                    ITable* $tmp2309 = a$Iter2302->$class->itable;
                    while ($tmp2309->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp2309 = $tmp2309->next;
                    }
                    $fn2311 $tmp2310 = $tmp2309->methods[0];
                    panda$core$Bit $tmp2312 = $tmp2310(a$Iter2302);
                    panda$core$Bit $tmp2313 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2312);
                    if (!$tmp2313.value) goto $l2308;
                    {
                        ITable* $tmp2315 = a$Iter2302->$class->itable;
                        while ($tmp2315->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2315 = $tmp2315->next;
                        }
                        $fn2317 $tmp2316 = $tmp2315->methods[1];
                        panda$core$Object* $tmp2318 = $tmp2316(a$Iter2302);
                        a2314 = ((org$pandalanguage$pandac$IRNode*) $tmp2318);
                        panda$core$MutableString$append$panda$core$String(msg2289, separator2300);
                        panda$core$MutableString$append$panda$core$Object(msg2289, ((panda$core$Object*) a2314->type));
                        separator2300 = &$s2319;
                    }
                    goto $l2307;
                    $l2308:;
                }
                panda$core$MutableString$append$panda$core$String(msg2289, &$s2320);
                if (((panda$core$Bit) { p_expectedType != NULL }).value) {
                {
                    panda$core$String* $tmp2322 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2321, ((panda$core$Object*) p_expectedType));
                    panda$core$String* $tmp2324 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2322, &$s2323);
                    panda$core$MutableString$append$panda$core$String(msg2289, $tmp2324);
                }
                }
                panda$core$String* $tmp2325 = panda$core$MutableString$finish$R$panda$core$String(msg2289);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_m->position, $tmp2325);
                return NULL;
            }
            }
            panda$core$Int64 $tmp2326 = panda$collections$Array$get_count$R$panda$core$Int64(methods2279);
            panda$core$Bit $tmp2327 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2326, ((panda$core$Int64) { 1 }));
            if ($tmp2327.value) {
            {
                panda$core$Int64 $tmp2329 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
                panda$core$Bit $tmp2330 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2329, ((panda$core$Int64) { 1 }));
                if ($tmp2330.value) {
                {
                    panda$core$Object* $tmp2331 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 0 }));
                    target2328 = ((org$pandalanguage$pandac$IRNode*) $tmp2331);
                }
                }
                else {
                {
                    panda$core$Int64 $tmp2332 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
                    panda$core$Bit $tmp2333 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2332, ((panda$core$Int64) { 0 }));
                    PANDA_ASSERT($tmp2333.value);
                    target2328 = NULL;
                }
                }
                panda$core$Object* $tmp2334 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(methods2279, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$IRNode* $tmp2335 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, p_m->position, target2328, ((org$pandalanguage$pandac$MethodRef*) $tmp2334), p_args);
                return $tmp2335;
            }
            }
            panda$collections$Array* $tmp2337 = (panda$collections$Array*) malloc(40);
            $tmp2337->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2337->refCount.value = 1;
            panda$collections$Array$init($tmp2337);
            children2336 = $tmp2337;
            org$pandalanguage$pandac$IRNode* $tmp2339 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2339->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2339->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2341 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2339, ((panda$core$Int64) { 1003 }), p_m->position, $tmp2341, ((panda$core$Object*) methods2279), ((panda$collections$ListView*) p_m->children));
            panda$collections$Array$add$panda$collections$Array$T(children2336, ((panda$core$Object*) $tmp2339));
            panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(children2336, ((panda$collections$CollectionView*) p_args));
            panda$collections$Array* $tmp2343 = (panda$collections$Array*) malloc(40);
            $tmp2343->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2343->refCount.value = 1;
            panda$collections$Array$init($tmp2343);
            types2342 = $tmp2343;
            {
                ITable* $tmp2346 = ((panda$collections$Iterable*) methods2279)->$class->itable;
                while ($tmp2346->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp2346 = $tmp2346->next;
                }
                $fn2348 $tmp2347 = $tmp2346->methods[0];
                panda$collections$Iterator* $tmp2349 = $tmp2347(((panda$collections$Iterable*) methods2279));
                m$Iter2345 = $tmp2349;
                $l2350:;
                ITable* $tmp2352 = m$Iter2345->$class->itable;
                while ($tmp2352->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp2352 = $tmp2352->next;
                }
                $fn2354 $tmp2353 = $tmp2352->methods[0];
                panda$core$Bit $tmp2355 = $tmp2353(m$Iter2345);
                panda$core$Bit $tmp2356 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2355);
                if (!$tmp2356.value) goto $l2351;
                {
                    ITable* $tmp2358 = m$Iter2345->$class->itable;
                    while ($tmp2358->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp2358 = $tmp2358->next;
                    }
                    $fn2360 $tmp2359 = $tmp2358->methods[1];
                    panda$core$Object* $tmp2361 = $tmp2359(m$Iter2345);
                    m2357 = ((org$pandalanguage$pandac$MethodRef*) $tmp2361);
                    org$pandalanguage$pandac$Type* $tmp2362 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m2357);
                    panda$collections$Array$add$panda$collections$Array$T(types2342, ((panda$core$Object*) $tmp2362));
                }
                goto $l2350;
                $l2351:;
            }
            org$pandalanguage$pandac$IRNode* $tmp2363 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2363->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2363->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2365 = (org$pandalanguage$pandac$Type*) malloc(96);
            $tmp2365->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp2365->refCount.value = 1;
            org$pandalanguage$pandac$Type$init$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp2365, ((panda$collections$ListView*) types2342));
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2363, ((panda$core$Int64) { 1039 }), p_m->position, $tmp2365, ((panda$collections$ListView*) children2336));
            return $tmp2363;
        }
        break;
        case 1001:
        {
            org$pandalanguage$pandac$IRNode* $tmp2368 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2368->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2368->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp2368, ((panda$core$Int64) { 1038 }), p_m->position, ((org$pandalanguage$pandac$Type*) p_m->payload));
            target2367 = $tmp2368;
            org$pandalanguage$pandac$IRNode* $tmp2372 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target2367, &$s2371, p_args);
            org$pandalanguage$pandac$IRNode* $tmp2373 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp2372);
            initCall2370 = $tmp2373;
            if (((panda$core$Bit) { initCall2370 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp2375 = (panda$collections$Array*) malloc(40);
            $tmp2375->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2375->refCount.value = 1;
            panda$collections$Array$init($tmp2375);
            children2374 = $tmp2375;
            panda$collections$Array$add$panda$collections$Array$T(children2374, ((panda$core$Object*) initCall2370));
            org$pandalanguage$pandac$IRNode* $tmp2377 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2377->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2377->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2377, ((panda$core$Int64) { 1010 }), p_m->position, ((org$pandalanguage$pandac$Type*) p_m->payload), ((panda$collections$ListView*) children2374));
            return $tmp2377;
        }
        break;
        default:
        {
            org$pandalanguage$pandac$IRNode* $tmp2380 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_m);
            resolved2379 = $tmp2380;
            if (((panda$core$Bit) { resolved2379 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$String* $tmp2382 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2381, ((panda$core$Object*) resolved2379->type));
            panda$core$String* $tmp2384 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2382, &$s2383);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, resolved2379->position, $tmp2384);
        }
    }
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$collections$Array* subtypes2385;
    panda$core$MutableString* typeName2388;
    panda$core$String* separator2392;
    panda$collections$Iterator* p$Iter2394;
    org$pandalanguage$pandac$MethodDecl$Parameter* p2406;
    panda$core$Int64 kind2412;
    panda$core$Char8 $tmp2418;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
    panda$collections$Array* $tmp2386 = (panda$collections$Array*) malloc(40);
    $tmp2386->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2386->refCount.value = 1;
    panda$collections$Array$init($tmp2386);
    subtypes2385 = $tmp2386;
    panda$core$MutableString* $tmp2389 = (panda$core$MutableString*) malloc(48);
    $tmp2389->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp2389->refCount.value = 1;
    panda$core$MutableString$init$panda$core$String($tmp2389, &$s2391);
    typeName2388 = $tmp2389;
    separator2392 = &$s2393;
    {
        ITable* $tmp2395 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp2395->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2395 = $tmp2395->next;
        }
        $fn2397 $tmp2396 = $tmp2395->methods[0];
        panda$collections$Iterator* $tmp2398 = $tmp2396(((panda$collections$Iterable*) p_m->parameters));
        p$Iter2394 = $tmp2398;
        $l2399:;
        ITable* $tmp2401 = p$Iter2394->$class->itable;
        while ($tmp2401->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2401 = $tmp2401->next;
        }
        $fn2403 $tmp2402 = $tmp2401->methods[0];
        panda$core$Bit $tmp2404 = $tmp2402(p$Iter2394);
        panda$core$Bit $tmp2405 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2404);
        if (!$tmp2405.value) goto $l2400;
        {
            ITable* $tmp2407 = p$Iter2394->$class->itable;
            while ($tmp2407->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2407 = $tmp2407->next;
            }
            $fn2409 $tmp2408 = $tmp2407->methods[1];
            panda$core$Object* $tmp2410 = $tmp2408(p$Iter2394);
            p2406 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp2410);
            panda$core$MutableString$append$panda$core$String(typeName2388, separator2392);
            panda$core$MutableString$append$panda$core$String(typeName2388, ((org$pandalanguage$pandac$Symbol*) p2406->type)->name);
            panda$collections$Array$add$panda$collections$Array$T(subtypes2385, ((panda$core$Object*) p2406->type));
            separator2392 = &$s2411;
        }
        goto $l2399;
        $l2400:;
    }
    panda$core$Bit $tmp2413 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 58 }));
    if ($tmp2413.value) {
    {
        panda$core$MutableString$append$panda$core$String(typeName2388, &$s2414);
        kind2412 = ((panda$core$Int64) { 24 });
    }
    }
    else {
    {
        panda$core$MutableString$append$panda$core$String(typeName2388, &$s2415);
        kind2412 = ((panda$core$Int64) { 25 });
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(subtypes2385, ((panda$core$Object*) p_m->returnType));
    org$pandalanguage$pandac$Type* $tmp2416 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2417 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp2416);
    if ($tmp2417.value) {
    {
        panda$core$MutableString$append$panda$core$String(typeName2388, ((org$pandalanguage$pandac$Symbol*) p_m->returnType)->name);
    }
    }
    panda$core$Char8$init$panda$core$UInt8(&$tmp2418, ((panda$core$UInt8) { 41 }));
    panda$core$MutableString$append$panda$core$Char8(typeName2388, $tmp2418);
    org$pandalanguage$pandac$Type* $tmp2419 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp2419->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp2419->refCount.value = 1;
    panda$core$String* $tmp2421 = panda$core$MutableString$finish$R$panda$core$String(typeName2388);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp2419, $tmp2421, kind2412, ((org$pandalanguage$pandac$Symbol*) p_m)->position, ((panda$collections$ListView*) subtypes2385), ((panda$core$Bit) { true }));
    return $tmp2419;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$declaredTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m, org$pandalanguage$pandac$Type* p_selfType) {
    panda$collections$Array* subtypes2422;
    panda$core$MutableString* typeName2425;
    panda$collections$Iterator* p$Iter2429;
    org$pandalanguage$pandac$MethodDecl$Parameter* p2441;
    panda$core$Int64 kind2447;
    panda$core$Char8 $tmp2453;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
    panda$collections$Array* $tmp2423 = (panda$collections$Array*) malloc(40);
    $tmp2423->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2423->refCount.value = 1;
    panda$collections$Array$init($tmp2423);
    subtypes2422 = $tmp2423;
    panda$core$MutableString* $tmp2426 = (panda$core$MutableString*) malloc(48);
    $tmp2426->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp2426->refCount.value = 1;
    panda$core$MutableString$init$panda$core$String($tmp2426, &$s2428);
    typeName2425 = $tmp2426;
    panda$core$MutableString$append$panda$core$String(typeName2425, ((org$pandalanguage$pandac$Symbol*) p_selfType)->name);
    panda$collections$Array$add$panda$collections$Array$T(subtypes2422, ((panda$core$Object*) p_selfType));
    {
        ITable* $tmp2430 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp2430->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2430 = $tmp2430->next;
        }
        $fn2432 $tmp2431 = $tmp2430->methods[0];
        panda$collections$Iterator* $tmp2433 = $tmp2431(((panda$collections$Iterable*) p_m->parameters));
        p$Iter2429 = $tmp2433;
        $l2434:;
        ITable* $tmp2436 = p$Iter2429->$class->itable;
        while ($tmp2436->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2436 = $tmp2436->next;
        }
        $fn2438 $tmp2437 = $tmp2436->methods[0];
        panda$core$Bit $tmp2439 = $tmp2437(p$Iter2429);
        panda$core$Bit $tmp2440 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2439);
        if (!$tmp2440.value) goto $l2435;
        {
            ITable* $tmp2442 = p$Iter2429->$class->itable;
            while ($tmp2442->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2442 = $tmp2442->next;
            }
            $fn2444 $tmp2443 = $tmp2442->methods[1];
            panda$core$Object* $tmp2445 = $tmp2443(p$Iter2429);
            p2441 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp2445);
            panda$core$MutableString$append$panda$core$String(typeName2425, &$s2446);
            panda$core$MutableString$append$panda$core$String(typeName2425, ((org$pandalanguage$pandac$Symbol*) p2441->type)->name);
            panda$collections$Array$add$panda$collections$Array$T(subtypes2422, ((panda$core$Object*) p2441->type));
        }
        goto $l2434;
        $l2435:;
    }
    panda$core$Bit $tmp2448 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 58 }));
    if ($tmp2448.value) {
    {
        panda$core$MutableString$append$panda$core$String(typeName2425, &$s2449);
        kind2447 = ((panda$core$Int64) { 24 });
    }
    }
    else {
    {
        panda$core$MutableString$append$panda$core$String(typeName2425, &$s2450);
        kind2447 = ((panda$core$Int64) { 25 });
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(subtypes2422, ((panda$core$Object*) p_m->returnType));
    org$pandalanguage$pandac$Type* $tmp2451 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2452 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp2451);
    if ($tmp2452.value) {
    {
        panda$core$MutableString$append$panda$core$String(typeName2425, ((org$pandalanguage$pandac$Symbol*) p_m->returnType)->name);
    }
    }
    panda$core$Char8$init$panda$core$UInt8(&$tmp2453, ((panda$core$UInt8) { 41 }));
    panda$core$MutableString$append$panda$core$Char8(typeName2425, $tmp2453);
    org$pandalanguage$pandac$Type* $tmp2454 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp2454->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp2454->refCount.value = 1;
    panda$core$String* $tmp2456 = panda$core$MutableString$finish$R$panda$core$String(typeName2425);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp2454, $tmp2456, kind2447, ((org$pandalanguage$pandac$Symbol*) p_m)->position, ((panda$collections$ListView*) subtypes2422), ((panda$core$Bit) { true }));
    return $tmp2454;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$MethodDecl* inherited2457;
    org$pandalanguage$pandac$MethodDecl* $tmp2458 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(self, p_m);
    inherited2457 = $tmp2458;
    if (((panda$core$Bit) { inherited2457 == NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp2459 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, p_m);
        return $tmp2459;
    }
    }
    org$pandalanguage$pandac$Type* $tmp2460 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, inherited2457);
    return $tmp2460;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$Type* $tmp2461 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    org$pandalanguage$pandac$Type* $tmp2462 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_m, $tmp2461);
    return $tmp2462;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m, org$pandalanguage$pandac$Type* p_selfType) {
    org$pandalanguage$pandac$MethodDecl* inherited2463;
    org$pandalanguage$pandac$MethodDecl* $tmp2464 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(self, p_m);
    inherited2463 = $tmp2464;
    if (((panda$core$Bit) { inherited2463 == NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp2465 = org$pandalanguage$pandac$Compiler$declaredTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_m, p_selfType);
        return $tmp2465;
    }
    }
    org$pandalanguage$pandac$Type* $tmp2466 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, inherited2463, p_selfType);
    return $tmp2466;
}
panda$core$String* org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(panda$core$Int64 p_op) {
    switch (p_op.value) {
        case 51:
        {
            return &$s2467;
        }
        break;
        case 52:
        {
            return &$s2468;
        }
        break;
        case 53:
        {
            return &$s2469;
        }
        break;
        case 54:
        {
            return &$s2470;
        }
        break;
        case 55:
        {
            return &$s2471;
        }
        break;
        case 56:
        {
            return &$s2472;
        }
        break;
        case 57:
        {
            return &$s2473;
        }
        break;
        case 58:
        {
            return &$s2474;
        }
        break;
        case 59:
        {
            return &$s2475;
        }
        break;
        case 63:
        {
            return &$s2476;
        }
        break;
        case 62:
        {
            return &$s2477;
        }
        break;
        case 65:
        {
            return &$s2478;
        }
        break;
        case 64:
        {
            return &$s2479;
        }
        break;
        case 68:
        {
            return &$s2480;
        }
        break;
        case 69:
        {
            return &$s2481;
        }
        break;
        case 66:
        {
            return &$s2482;
        }
        break;
        case 67:
        {
            return &$s2483;
        }
        break;
        case 70:
        {
            return &$s2484;
        }
        break;
        case 71:
        {
            return &$s2485;
        }
        break;
        case 49:
        {
            return &$s2486;
        }
        break;
        case 50:
        {
            return &$s2487;
        }
        break;
        case 72:
        {
            return &$s2488;
        }
        break;
        case 1:
        {
            return &$s2489;
        }
        break;
        case 101:
        {
            return &$s2490;
        }
        break;
        case 73:
        {
            return &$s2491;
        }
        break;
        case 60:
        {
            return &$s2492;
        }
        break;
        case 61:
        {
            return &$s2493;
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
            panda$core$Int64 $tmp2494 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_expr->children);
            panda$core$Bit $tmp2495 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2494, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp2495.value);
            panda$core$Bit $tmp2496 = panda$core$Bit$$NOT$R$panda$core$Bit(((panda$core$Bit$wrapper*) p_expr->payload)->value);
            if ($tmp2496.value) {
            {
                panda$core$Object* $tmp2497 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Bit $tmp2498 = org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp2497));
                return $tmp2498;
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
            panda$core$Object* $tmp2499 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp2500 = org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp2499));
            return $tmp2500;
        }
        break;
        default:
        {
            return ((panda$core$Bit) { false });
        }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$foldInts$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_left, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_right) {
    panda$core$Int64 l2526;
    panda$core$Int64 r2528;
    panda$core$Bit $tmp2502 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_left->kind, ((panda$core$Int64) { 1004 }));
    bool $tmp2501 = $tmp2502.value;
    if ($tmp2501) goto $l2503;
    panda$core$Bit $tmp2504 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_left->kind, ((panda$core$Int64) { 1032 }));
    $tmp2501 = $tmp2504.value;
    $l2503:;
    panda$core$Bit $tmp2505 = { $tmp2501 };
    PANDA_ASSERT($tmp2505.value);
    panda$core$Bit $tmp2507 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_right->kind, ((panda$core$Int64) { 1004 }));
    bool $tmp2506 = $tmp2507.value;
    if ($tmp2506) goto $l2508;
    panda$core$Bit $tmp2509 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_right->kind, ((panda$core$Int64) { 1032 }));
    $tmp2506 = $tmp2509.value;
    $l2508:;
    panda$core$Bit $tmp2510 = { $tmp2506 };
    PANDA_ASSERT($tmp2510.value);
    panda$core$Bit $tmp2513 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_left->kind, ((panda$core$Int64) { 1032 }));
    bool $tmp2512 = $tmp2513.value;
    if ($tmp2512) goto $l2514;
    panda$core$UInt64 $tmp2516 = panda$core$Int64$convert$R$panda$core$UInt64(((panda$core$Int64) { 9223372036854775807 }));
    panda$core$Bit $tmp2517 = panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p_left->payload)->value, $tmp2516);
    bool $tmp2515 = $tmp2517.value;
    if (!$tmp2515) goto $l2518;
    panda$core$Bit $tmp2519 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_right->kind, ((panda$core$Int64) { 1032 }));
    $tmp2515 = $tmp2519.value;
    $l2518:;
    panda$core$Bit $tmp2520 = { $tmp2515 };
    $tmp2512 = $tmp2520.value;
    $l2514:;
    panda$core$Bit $tmp2521 = { $tmp2512 };
    bool $tmp2511 = $tmp2521.value;
    if ($tmp2511) goto $l2522;
    panda$core$UInt64 $tmp2523 = panda$core$Int64$convert$R$panda$core$UInt64(((panda$core$Int64) { 9223372036854775807 }));
    panda$core$Bit $tmp2524 = panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p_right->payload)->value, $tmp2523);
    $tmp2511 = $tmp2524.value;
    $l2522:;
    panda$core$Bit $tmp2525 = { $tmp2511 };
    if ($tmp2525.value) {
    {
        panda$core$Int64 $tmp2527 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_left->payload)->value);
        l2526 = $tmp2527;
        panda$core$Int64 $tmp2529 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_right->payload)->value);
        r2528 = $tmp2529;
        switch (p_op.value) {
            case 51:
            {
                org$pandalanguage$pandac$IRNode* $tmp2530 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2530->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2530->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2532 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2533 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(l2526, r2528);
                panda$core$UInt64 $tmp2534 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2533);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2530, ((panda$core$Int64) { 1004 }), p_position, $tmp2532, $tmp2534);
                return $tmp2530;
            }
            break;
            case 52:
            {
                org$pandalanguage$pandac$IRNode* $tmp2535 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2535->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2535->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2537 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2538 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(l2526, r2528);
                panda$core$UInt64 $tmp2539 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2538);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2535, ((panda$core$Int64) { 1004 }), p_position, $tmp2537, $tmp2539);
                return $tmp2535;
            }
            break;
            case 53:
            {
                org$pandalanguage$pandac$IRNode* $tmp2540 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2540->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2540->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2542 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2543 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(l2526, r2528);
                panda$core$UInt64 $tmp2544 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2543);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2540, ((panda$core$Int64) { 1004 }), p_position, $tmp2542, $tmp2544);
                return $tmp2540;
            }
            break;
            case 55:
            {
                org$pandalanguage$pandac$IRNode* $tmp2545 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2545->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2545->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2547 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2548 = panda$core$Int64$$INTDIV$panda$core$Int64$R$panda$core$Int64(l2526, r2528);
                panda$core$UInt64 $tmp2549 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2548);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2545, ((panda$core$Int64) { 1004 }), p_position, $tmp2547, $tmp2549);
                return $tmp2545;
            }
            break;
            case 56:
            {
                org$pandalanguage$pandac$IRNode* $tmp2550 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2550->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2550->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2552 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2553 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(l2526, r2528);
                panda$core$UInt64 $tmp2554 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2553);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2550, ((panda$core$Int64) { 1004 }), p_position, $tmp2552, $tmp2554);
                return $tmp2550;
            }
            break;
            case 58:
            {
                org$pandalanguage$pandac$IRNode* $tmp2555 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2555->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2555->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2557 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2558 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(l2526, r2528);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2555, ((panda$core$Int64) { 1011 }), p_position, $tmp2557, $tmp2558);
                return $tmp2555;
            }
            break;
            case 59:
            {
                org$pandalanguage$pandac$IRNode* $tmp2559 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2559->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2559->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2561 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2562 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(l2526, r2528);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2559, ((panda$core$Int64) { 1011 }), p_position, $tmp2561, $tmp2562);
                return $tmp2559;
            }
            break;
            case 62:
            {
                org$pandalanguage$pandac$IRNode* $tmp2563 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2563->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2563->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2565 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2566 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(l2526, r2528);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2563, ((panda$core$Int64) { 1011 }), p_position, $tmp2565, $tmp2566);
                return $tmp2563;
            }
            break;
            case 63:
            {
                org$pandalanguage$pandac$IRNode* $tmp2567 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2567->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2567->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2569 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2570 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(l2526, r2528);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2567, ((panda$core$Int64) { 1011 }), p_position, $tmp2569, $tmp2570);
                return $tmp2567;
            }
            break;
            case 64:
            {
                org$pandalanguage$pandac$IRNode* $tmp2571 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2571->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2571->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2573 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2574 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(l2526, r2528);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2571, ((panda$core$Int64) { 1011 }), p_position, $tmp2573, $tmp2574);
                return $tmp2571;
            }
            break;
            case 65:
            {
                org$pandalanguage$pandac$IRNode* $tmp2575 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2575->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2575->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2577 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2578 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(l2526, r2528);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2575, ((panda$core$Int64) { 1011 }), p_position, $tmp2577, $tmp2578);
                return $tmp2575;
            }
            break;
            case 67:
            {
                org$pandalanguage$pandac$IRNode* $tmp2579 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2579->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2579->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2581 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2582 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(l2526, r2528);
                panda$core$UInt64 $tmp2583 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2582);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2579, ((panda$core$Int64) { 1004 }), p_position, $tmp2581, $tmp2583);
                return $tmp2579;
            }
            break;
            case 69:
            {
                org$pandalanguage$pandac$IRNode* $tmp2584 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2584->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2584->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2586 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2587 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(l2526, r2528);
                panda$core$UInt64 $tmp2588 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2587);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2584, ((panda$core$Int64) { 1004 }), p_position, $tmp2586, $tmp2588);
                return $tmp2584;
            }
            break;
            case 71:
            {
                org$pandalanguage$pandac$IRNode* $tmp2589 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2589->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2589->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2591 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2592 = panda$core$Int64$$BXOR$panda$core$Int64$R$panda$core$Int64(l2526, r2528);
                panda$core$UInt64 $tmp2593 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2592);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2589, ((panda$core$Int64) { 1004 }), p_position, $tmp2591, $tmp2593);
                return $tmp2589;
            }
            break;
            case 72:
            {
                org$pandalanguage$pandac$IRNode* $tmp2594 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2594->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2594->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2596 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2597 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(l2526, r2528);
                panda$core$UInt64 $tmp2598 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2597);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2594, ((panda$core$Int64) { 1004 }), p_position, $tmp2596, $tmp2598);
                return $tmp2594;
            }
            break;
            case 1:
            {
                org$pandalanguage$pandac$IRNode* $tmp2599 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2599->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2599->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2601 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2602 = panda$core$Int64$$SHR$panda$core$Int64$R$panda$core$Int64(l2526, r2528);
                panda$core$UInt64 $tmp2603 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2602);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2599, ((panda$core$Int64) { 1004 }), p_position, $tmp2601, $tmp2603);
                return $tmp2599;
            }
            break;
        }
    }
    }
    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s2604);
    return NULL;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    panda$core$Bit $tmp2605 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1009 }));
    if ($tmp2605.value) {
    {
        panda$core$Object* $tmp2606 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
        return ((org$pandalanguage$pandac$IRNode*) $tmp2606);
    }
    }
    return p_expr;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIndexedAssignment$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_left, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_right) {
    panda$collections$Array* args2611;
    org$pandalanguage$pandac$IRNode* resolved2619;
    panda$collections$Array* children2624;
    panda$core$UInt64 baseId2630;
    org$pandalanguage$pandac$IRNode* base2631;
    panda$core$UInt64 indexId2638;
    org$pandalanguage$pandac$IRNode* index2639;
    org$pandalanguage$pandac$IRNode* baseRef2644;
    org$pandalanguage$pandac$IRNode* indexRef2647;
    org$pandalanguage$pandac$IRNode* rhsIndex2650;
    org$pandalanguage$pandac$IRNode* value2652;
    panda$core$Bit $tmp2607 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_left->kind, ((panda$core$Int64) { 1040 }));
    PANDA_ASSERT($tmp2607.value);
    panda$core$Int64 $tmp2608 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_left->children);
    panda$core$Bit $tmp2609 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2608, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp2609.value);
    panda$core$Bit $tmp2610 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 73 }));
    if ($tmp2610.value) {
    {
        panda$collections$Array* $tmp2612 = (panda$collections$Array*) malloc(40);
        $tmp2612->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2612->refCount.value = 1;
        panda$collections$Array$init($tmp2612);
        args2611 = $tmp2612;
        panda$core$Object* $tmp2614 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_left->children, ((panda$core$Int64) { 1 }));
        panda$collections$Array$add$panda$collections$Array$T(args2611, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp2614)));
        panda$collections$Array$add$panda$collections$Array$T(args2611, ((panda$core$Object*) p_right));
        panda$core$Object* $tmp2615 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_left->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp2617 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp2615), &$s2616, ((panda$collections$ListView*) args2611));
        return $tmp2617;
    }
    }
    panda$core$Bit $tmp2618 = org$pandalanguage$pandac$Compiler$isAssignment$panda$core$Int64$R$panda$core$Bit(p_op);
    PANDA_ASSERT($tmp2618.value);
    org$pandalanguage$pandac$IRNode* $tmp2620 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_left);
    resolved2619 = $tmp2620;
    if (((panda$core$Bit) { resolved2619 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp2621 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self, resolved2619);
    resolved2619 = $tmp2621;
    panda$core$Int64 $tmp2622 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(resolved2619->children);
    panda$core$Bit $tmp2623 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2622, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp2623.value);
    panda$collections$Array* $tmp2625 = (panda$collections$Array*) malloc(40);
    $tmp2625->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2625->refCount.value = 1;
    panda$collections$Array$init($tmp2625);
    children2624 = $tmp2625;
    panda$core$Object* $tmp2627 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(resolved2619->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp2628 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self, ((org$pandalanguage$pandac$IRNode*) $tmp2627));
    panda$collections$Array$add$panda$collections$Array$T(children2624, ((panda$core$Object*) $tmp2628));
    panda$core$UInt64 $tmp2629 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(self->reusedValueCount, ((panda$core$UInt64) { 1 }));
    self->reusedValueCount = $tmp2629;
    baseId2630 = self->reusedValueCount;
    org$pandalanguage$pandac$IRNode* $tmp2632 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp2632->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2632->refCount.value = 1;
    panda$core$Object* $tmp2634 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children2624, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp2635 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children2624, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2632, ((panda$core$Int64) { 1027 }), ((org$pandalanguage$pandac$IRNode*) $tmp2634)->position, ((org$pandalanguage$pandac$IRNode*) $tmp2635)->type, ((panda$core$Object*) wrap_panda$core$UInt64(baseId2630)), ((panda$collections$ListView*) children2624));
    base2631 = $tmp2632;
    panda$collections$Array$clear(children2624);
    panda$core$Object* $tmp2636 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(resolved2619->children, ((panda$core$Int64) { 1 }));
    panda$collections$Array$add$panda$collections$Array$T(children2624, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp2636)));
    panda$core$UInt64 $tmp2637 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(self->reusedValueCount, ((panda$core$UInt64) { 1 }));
    self->reusedValueCount = $tmp2637;
    indexId2638 = self->reusedValueCount;
    org$pandalanguage$pandac$IRNode* $tmp2640 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp2640->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2640->refCount.value = 1;
    panda$core$Object* $tmp2642 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children2624, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp2643 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children2624, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2640, ((panda$core$Int64) { 1027 }), ((org$pandalanguage$pandac$IRNode*) $tmp2642)->position, ((org$pandalanguage$pandac$IRNode*) $tmp2643)->type, ((panda$core$Object*) wrap_panda$core$UInt64(indexId2638)), ((panda$collections$ListView*) children2624));
    index2639 = $tmp2640;
    org$pandalanguage$pandac$IRNode* $tmp2645 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp2645->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2645->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2645, ((panda$core$Int64) { 1028 }), base2631->position, base2631->type, baseId2630);
    baseRef2644 = $tmp2645;
    org$pandalanguage$pandac$IRNode* $tmp2648 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp2648->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2648->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2648, ((panda$core$Int64) { 1028 }), index2639->position, index2639->type, indexId2638);
    indexRef2647 = $tmp2648;
    org$pandalanguage$pandac$IRNode* $tmp2651 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, baseRef2644, ((panda$core$Int64) { 101 }), indexRef2647);
    rhsIndex2650 = $tmp2651;
    if (((panda$core$Bit) { rhsIndex2650 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Int64 $tmp2653 = org$pandalanguage$pandac$Compiler$removeAssignment$panda$core$Int64$R$panda$core$Int64(p_op);
    org$pandalanguage$pandac$IRNode* $tmp2654 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, rhsIndex2650, $tmp2653, p_right);
    value2652 = $tmp2654;
    if (((panda$core$Bit) { value2652 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp2657 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(rhsIndex2650->type);
    bool $tmp2656 = $tmp2657.value;
    if (!$tmp2656) goto $l2658;
    panda$core$Bit $tmp2659 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_right->type);
    $tmp2656 = $tmp2659.value;
    $l2658:;
    panda$core$Bit $tmp2660 = { $tmp2656 };
    bool $tmp2655 = $tmp2660.value;
    if (!$tmp2655) goto $l2661;
    panda$core$Bit $tmp2662 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(rhsIndex2650->type, value2652->type);
    $tmp2655 = $tmp2662.value;
    $l2661:;
    panda$core$Bit $tmp2663 = { $tmp2655 };
    if ($tmp2663.value) {
    {
        panda$collections$Array* $tmp2665 = (panda$collections$Array*) malloc(40);
        $tmp2665->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2665->refCount.value = 1;
        panda$collections$Array$init($tmp2665);
        org$pandalanguage$pandac$IRNode* $tmp2667 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, value2652, &$s2664, ((panda$collections$ListView*) $tmp2665), resolved2619->type);
        value2652 = $tmp2667;
        if (((panda$core$Bit) { value2652 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$collections$Array$clear(children2624);
    panda$collections$Array$add$panda$collections$Array$T(children2624, ((panda$core$Object*) index2639));
    panda$collections$Array$add$panda$collections$Array$T(children2624, ((panda$core$Object*) value2652));
    org$pandalanguage$pandac$IRNode* $tmp2669 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, base2631, &$s2668, ((panda$collections$ListView*) children2624));
    return $tmp2669;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_rawLeft, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_rawRight) {
    org$pandalanguage$pandac$IRNode* left2670;
    org$pandalanguage$pandac$IRNode* right2671;
    panda$core$Int64 kind2695;
    org$pandalanguage$pandac$IRNode* resolved2702;
    panda$collections$Array* children2704;
    org$pandalanguage$pandac$IRNode* resolved2711;
    panda$collections$Array* children2713;
    org$pandalanguage$pandac$ClassDecl* cl2725;
    org$pandalanguage$pandac$ClassDecl* cl2742;
    org$pandalanguage$pandac$IRNode* finalLeft2758;
    org$pandalanguage$pandac$IRNode* finalRight2761;
    panda$collections$Array* children2764;
    panda$collections$Array* children2778;
    panda$collections$Array* children2790;
    org$pandalanguage$pandac$IRNode* reusedLeft2796;
    org$pandalanguage$pandac$ClassDecl* cl2813;
    panda$collections$ListView* parameters2815;
    org$pandalanguage$pandac$Symbol* methods2817;
    org$pandalanguage$pandac$Type* type2821;
    panda$collections$Array* types2822;
    org$pandalanguage$pandac$MethodDecl* m2826;
    panda$collections$Iterator* m$Iter2831;
    org$pandalanguage$pandac$MethodDecl* m2843;
    panda$collections$Array* children2854;
    panda$collections$Array* children2883;
    panda$collections$Array* children2899;
    org$pandalanguage$pandac$Type* resultType2922;
    org$pandalanguage$pandac$IRNode* result2926;
    org$pandalanguage$pandac$IRNode* resolved2929;
    org$pandalanguage$pandac$IRNode* target2935;
    left2670 = p_rawLeft;
    right2671 = p_rawRight;
    panda$core$Bit $tmp2672 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2670->type->typeKind, ((panda$core$Int64) { 15 }));
    if ($tmp2672.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2673 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, right2671);
        right2671 = $tmp2673;
        if (((panda$core$Bit) { right2671 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Int64$nullable $tmp2674 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, left2670, right2671->type);
        if (((panda$core$Bit) { $tmp2674.nonnull }).value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2675 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, left2670, right2671->type);
            left2670 = $tmp2675;
        }
        }
    }
    }
    panda$core$Bit $tmp2677 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right2671->type->typeKind, ((panda$core$Int64) { 15 }));
    bool $tmp2676 = $tmp2677.value;
    if (!$tmp2676) goto $l2678;
    panda$core$Int64$nullable $tmp2679 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, right2671, left2670->type);
    $tmp2676 = ((panda$core$Bit) { $tmp2679.nonnull }).value;
    $l2678:;
    panda$core$Bit $tmp2680 = { $tmp2676 };
    if ($tmp2680.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2681 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, right2671, left2670->type);
        right2671 = $tmp2681;
    }
    }
    panda$core$Bit $tmp2685 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 58 }));
    bool $tmp2684 = $tmp2685.value;
    if ($tmp2684) goto $l2686;
    panda$core$Bit $tmp2687 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 59 }));
    $tmp2684 = $tmp2687.value;
    $l2686:;
    panda$core$Bit $tmp2688 = { $tmp2684 };
    bool $tmp2683 = $tmp2688.value;
    if ($tmp2683) goto $l2689;
    panda$core$Bit $tmp2690 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 60 }));
    $tmp2683 = $tmp2690.value;
    $l2689:;
    panda$core$Bit $tmp2691 = { $tmp2683 };
    bool $tmp2682 = $tmp2691.value;
    if ($tmp2682) goto $l2692;
    panda$core$Bit $tmp2693 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 61 }));
    $tmp2682 = $tmp2693.value;
    $l2692:;
    panda$core$Bit $tmp2694 = { $tmp2682 };
    if ($tmp2694.value) {
    {
        panda$core$Bit $tmp2697 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 58 }));
        bool $tmp2696 = $tmp2697.value;
        if ($tmp2696) goto $l2698;
        panda$core$Bit $tmp2699 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 60 }));
        $tmp2696 = $tmp2699.value;
        $l2698:;
        panda$core$Bit $tmp2700 = { $tmp2696 };
        if ($tmp2700.value) {
        {
            kind2695 = ((panda$core$Int64) { 1035 });
        }
        }
        else {
        {
            kind2695 = ((panda$core$Int64) { 1036 });
        }
        }
        panda$core$Bit $tmp2701 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2670->kind, ((panda$core$Int64) { 1030 }));
        if ($tmp2701.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2703 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, right2671);
            resolved2702 = $tmp2703;
            if (((panda$core$Bit) { resolved2702 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp2705 = (panda$collections$Array*) malloc(40);
            $tmp2705->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2705->refCount.value = 1;
            panda$collections$Array$init($tmp2705);
            children2704 = $tmp2705;
            panda$collections$Array$add$panda$collections$Array$T(children2704, ((panda$core$Object*) resolved2702));
            org$pandalanguage$pandac$IRNode* $tmp2707 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2707->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2707->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2709 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2707, kind2695, p_position, $tmp2709, ((panda$collections$ListView*) children2704));
            return $tmp2707;
        }
        }
        panda$core$Bit $tmp2710 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right2671->kind, ((panda$core$Int64) { 1030 }));
        if ($tmp2710.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2712 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, left2670);
            resolved2711 = $tmp2712;
            if (((panda$core$Bit) { resolved2711 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp2714 = (panda$collections$Array*) malloc(40);
            $tmp2714->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2714->refCount.value = 1;
            panda$collections$Array$init($tmp2714);
            children2713 = $tmp2714;
            panda$collections$Array$add$panda$collections$Array$T(children2713, ((panda$core$Object*) resolved2711));
            org$pandalanguage$pandac$IRNode* $tmp2716 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2716->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2716->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2718 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2716, kind2695, p_position, $tmp2718, ((panda$collections$ListView*) children2713));
            return $tmp2716;
        }
        }
    }
    }
    panda$core$Bit $tmp2720 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 60 }));
    bool $tmp2719 = $tmp2720.value;
    if ($tmp2719) goto $l2721;
    panda$core$Bit $tmp2722 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 61 }));
    $tmp2719 = $tmp2722.value;
    $l2721:;
    panda$core$Bit $tmp2723 = { $tmp2719 };
    if ($tmp2723.value) {
    {
        panda$core$Bit $tmp2724 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(left2670->type);
        if ($tmp2724.value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp2726 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, left2670->type);
            cl2725 = $tmp2726;
            if (((panda$core$Bit) { cl2725 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$Bit $tmp2727 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, cl2725);
            if ($tmp2727.value) {
            {
                panda$core$String* $tmp2729 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
                panda$core$String* $tmp2730 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2728, $tmp2729);
                panda$core$String* $tmp2732 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2730, &$s2731);
                panda$core$String* $tmp2733 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2732, ((panda$core$Object*) left2670->type));
                panda$core$String* $tmp2735 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2733, &$s2734);
                panda$core$String* $tmp2737 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2736, ((panda$core$Object*) right2671->type));
                panda$core$String* $tmp2739 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2737, &$s2738);
                panda$core$String* $tmp2740 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2735, $tmp2739);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp2740);
            }
            }
        }
        }
        panda$core$Bit $tmp2741 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(right2671->type);
        if ($tmp2741.value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp2743 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, right2671->type);
            cl2742 = $tmp2743;
            if (((panda$core$Bit) { cl2742 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$Bit $tmp2744 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, cl2742);
            if ($tmp2744.value) {
            {
                panda$core$String* $tmp2746 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
                panda$core$String* $tmp2747 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2745, $tmp2746);
                panda$core$String* $tmp2749 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2747, &$s2748);
                panda$core$String* $tmp2750 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2749, ((panda$core$Object*) left2670->type));
                panda$core$String* $tmp2752 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2750, &$s2751);
                panda$core$String* $tmp2754 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2753, ((panda$core$Object*) right2671->type));
                panda$core$String* $tmp2756 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2754, &$s2755);
                panda$core$String* $tmp2757 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2752, $tmp2756);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp2757);
            }
            }
        }
        }
        org$pandalanguage$pandac$Type* $tmp2759 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp2760 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, left2670, $tmp2759);
        finalLeft2758 = $tmp2760;
        if (((panda$core$Bit) { finalLeft2758 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$Type* $tmp2762 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp2763 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, right2671, $tmp2762);
        finalRight2761 = $tmp2763;
        if (((panda$core$Bit) { finalRight2761 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp2765 = (panda$collections$Array*) malloc(40);
        $tmp2765->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2765->refCount.value = 1;
        panda$collections$Array$init($tmp2765);
        children2764 = $tmp2765;
        panda$collections$Array$add$panda$collections$Array$T(children2764, ((panda$core$Object*) finalLeft2758));
        panda$collections$Array$add$panda$collections$Array$T(children2764, ((panda$core$Object*) finalRight2761));
        org$pandalanguage$pandac$IRNode* $tmp2767 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2767->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2767->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp2769 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2767, ((panda$core$Int64) { 1023 }), p_position, $tmp2769, ((panda$core$Object*) wrap_panda$core$Int64(p_op)), ((panda$collections$ListView*) children2764));
        return $tmp2767;
    }
    }
    panda$core$Bit $tmp2770 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 73 }));
    if ($tmp2770.value) {
    {
        panda$core$Bit $tmp2771 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2670->kind, ((panda$core$Int64) { 1040 }));
        if ($tmp2771.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2772 = org$pandalanguage$pandac$Compiler$compileIndexedAssignment$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, left2670, p_op, right2671);
            return $tmp2772;
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp2773 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, left2670);
        left2670 = $tmp2773;
        if (((panda$core$Bit) { left2670 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp2774 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, right2671, left2670->type);
        right2671 = $tmp2774;
        if (((panda$core$Bit) { right2671 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp2775 = org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, left2670);
        panda$core$Bit $tmp2776 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2775);
        if ($tmp2776.value) {
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, left2670->position, &$s2777);
            return NULL;
        }
        }
        panda$collections$Array* $tmp2779 = (panda$collections$Array*) malloc(40);
        $tmp2779->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2779->refCount.value = 1;
        panda$collections$Array$init($tmp2779);
        children2778 = $tmp2779;
        panda$collections$Array$add$panda$collections$Array$T(children2778, ((panda$core$Object*) left2670));
        panda$collections$Array$add$panda$collections$Array$T(children2778, ((panda$core$Object*) right2671));
        org$pandalanguage$pandac$IRNode* $tmp2781 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2781->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2781->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2781, ((panda$core$Int64) { 1023 }), p_position, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 73 }))), ((panda$collections$ListView*) children2778));
        return $tmp2781;
    }
    }
    panda$core$Bit $tmp2783 = org$pandalanguage$pandac$Compiler$isAssignment$panda$core$Int64$R$panda$core$Bit(p_op);
    if ($tmp2783.value) {
    {
        panda$core$Bit $tmp2784 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2670->kind, ((panda$core$Int64) { 1040 }));
        if ($tmp2784.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2785 = org$pandalanguage$pandac$Compiler$compileIndexedAssignment$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, left2670, p_op, right2671);
            return $tmp2785;
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp2786 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, left2670);
        left2670 = $tmp2786;
        if (((panda$core$Bit) { left2670 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp2787 = org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, left2670);
        panda$core$Bit $tmp2788 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2787);
        if ($tmp2788.value) {
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, left2670->position, &$s2789);
            return NULL;
        }
        }
        panda$collections$Array* $tmp2791 = (panda$collections$Array*) malloc(40);
        $tmp2791->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2791->refCount.value = 1;
        panda$collections$Array$init($tmp2791);
        children2790 = $tmp2791;
        panda$collections$Array$add$panda$collections$Array$T(children2790, ((panda$core$Object*) left2670));
        panda$core$UInt64 $tmp2793 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(self->reusedValueCount, ((panda$core$UInt64) { 1 }));
        self->reusedValueCount = $tmp2793;
        org$pandalanguage$pandac$IRNode* $tmp2794 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2794->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2794->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2794, ((panda$core$Int64) { 1027 }), left2670->position, left2670->type, ((panda$core$Object*) wrap_panda$core$UInt64(self->reusedValueCount)), ((panda$collections$ListView*) children2790));
        left2670 = $tmp2794;
        org$pandalanguage$pandac$IRNode* $tmp2797 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2797->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2797->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2797, ((panda$core$Int64) { 1028 }), left2670->position, left2670->type, self->reusedValueCount);
        reusedLeft2796 = $tmp2797;
        panda$core$Int64 $tmp2799 = org$pandalanguage$pandac$Compiler$removeAssignment$panda$core$Int64$R$panda$core$Int64(p_op);
        org$pandalanguage$pandac$IRNode* $tmp2800 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, reusedLeft2796, $tmp2799, right2671);
        right2671 = $tmp2800;
        if (((panda$core$Bit) { right2671 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp2802 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(left2670->type);
        bool $tmp2801 = $tmp2802.value;
        if (!$tmp2801) goto $l2803;
        panda$core$Bit $tmp2804 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(left2670->type, right2671->type);
        $tmp2801 = $tmp2804.value;
        $l2803:;
        panda$core$Bit $tmp2805 = { $tmp2801 };
        if ($tmp2805.value) {
        {
            panda$collections$Array* $tmp2807 = (panda$collections$Array*) malloc(40);
            $tmp2807->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2807->refCount.value = 1;
            panda$collections$Array$init($tmp2807);
            org$pandalanguage$pandac$IRNode* $tmp2809 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, right2671, &$s2806, ((panda$collections$ListView*) $tmp2807), left2670->type);
            right2671 = $tmp2809;
            if (((panda$core$Bit) { right2671 == NULL }).value) {
            {
                return NULL;
            }
            }
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp2810 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, left2670, ((panda$core$Int64) { 73 }), right2671);
        return $tmp2810;
    }
    }
    panda$core$Bit $tmp2811 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 101 }));
    if ($tmp2811.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2812 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, left2670);
        left2670 = $tmp2812;
        if (((panda$core$Bit) { left2670 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$ClassDecl* $tmp2814 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, left2670->type);
        cl2813 = $tmp2814;
        if (((panda$core$Bit) { cl2813 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$ListView* $tmp2816 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, left2670->type);
        parameters2815 = $tmp2816;
        org$pandalanguage$pandac$SymbolTable* $tmp2818 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl2813);
        org$pandalanguage$pandac$Symbol* $tmp2820 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp2818, &$s2819);
        methods2817 = $tmp2820;
        if (((panda$core$Bit) { methods2817 != NULL }).value) {
        {
            panda$collections$Array* $tmp2823 = (panda$collections$Array*) malloc(40);
            $tmp2823->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2823->refCount.value = 1;
            panda$collections$Array$init($tmp2823);
            types2822 = $tmp2823;
            panda$core$Bit $tmp2825 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(methods2817->kind, ((panda$core$Int64) { 204 }));
            if ($tmp2825.value) {
            {
                m2826 = ((org$pandalanguage$pandac$MethodDecl*) methods2817);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m2826);
                org$pandalanguage$pandac$MethodRef* $tmp2827 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                $tmp2827->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                $tmp2827->refCount.value = 1;
                org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp2827, m2826, parameters2815);
                org$pandalanguage$pandac$Type* $tmp2829 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type($tmp2827);
                panda$collections$Array$add$panda$collections$Array$T(types2822, ((panda$core$Object*) $tmp2829));
            }
            }
            else {
            {
                panda$core$Bit $tmp2830 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(methods2817->kind, ((panda$core$Int64) { 205 }));
                PANDA_ASSERT($tmp2830.value);
                {
                    ITable* $tmp2832 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) methods2817)->methods)->$class->itable;
                    while ($tmp2832->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp2832 = $tmp2832->next;
                    }
                    $fn2834 $tmp2833 = $tmp2832->methods[0];
                    panda$collections$Iterator* $tmp2835 = $tmp2833(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) methods2817)->methods));
                    m$Iter2831 = $tmp2835;
                    $l2836:;
                    ITable* $tmp2838 = m$Iter2831->$class->itable;
                    while ($tmp2838->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp2838 = $tmp2838->next;
                    }
                    $fn2840 $tmp2839 = $tmp2838->methods[0];
                    panda$core$Bit $tmp2841 = $tmp2839(m$Iter2831);
                    panda$core$Bit $tmp2842 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2841);
                    if (!$tmp2842.value) goto $l2837;
                    {
                        ITable* $tmp2844 = m$Iter2831->$class->itable;
                        while ($tmp2844->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2844 = $tmp2844->next;
                        }
                        $fn2846 $tmp2845 = $tmp2844->methods[1];
                        panda$core$Object* $tmp2847 = $tmp2845(m$Iter2831);
                        m2843 = ((org$pandalanguage$pandac$MethodDecl*) $tmp2847);
                        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m2843);
                        org$pandalanguage$pandac$MethodRef* $tmp2848 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                        $tmp2848->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                        $tmp2848->refCount.value = 1;
                        org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp2848, m2843, parameters2815);
                        org$pandalanguage$pandac$Type* $tmp2850 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type($tmp2848);
                        panda$collections$Array$add$panda$collections$Array$T(types2822, ((panda$core$Object*) $tmp2850));
                    }
                    goto $l2836;
                    $l2837:;
                }
            }
            }
            org$pandalanguage$pandac$Type* $tmp2851 = (org$pandalanguage$pandac$Type*) malloc(96);
            $tmp2851->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp2851->refCount.value = 1;
            org$pandalanguage$pandac$Type$init$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp2851, ((panda$collections$ListView*) types2822));
            type2821 = $tmp2851;
        }
        }
        else {
        {
            org$pandalanguage$pandac$Type* $tmp2853 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            type2821 = $tmp2853;
        }
        }
        panda$collections$Array* $tmp2855 = (panda$collections$Array*) malloc(40);
        $tmp2855->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2855->refCount.value = 1;
        panda$collections$Array$init($tmp2855);
        children2854 = $tmp2855;
        panda$collections$Array$add$panda$collections$Array$T(children2854, ((panda$core$Object*) left2670));
        panda$collections$Array$add$panda$collections$Array$T(children2854, ((panda$core$Object*) right2671));
        org$pandalanguage$pandac$IRNode* $tmp2857 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2857->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2857->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2857, ((panda$core$Int64) { 1040 }), p_position, type2821, ((panda$collections$ListView*) children2854));
        return $tmp2857;
    }
    }
    org$pandalanguage$pandac$Type* $tmp2859 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2860 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(left2670->type, $tmp2859);
    if ($tmp2860.value) {
    {
        org$pandalanguage$pandac$Type* $tmp2862 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp2863 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(right2671->type, $tmp2862);
        bool $tmp2861 = $tmp2863.value;
        if (!$tmp2861) goto $l2864;
        panda$core$Bit $tmp2869 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 66 }));
        bool $tmp2868 = $tmp2869.value;
        if ($tmp2868) goto $l2870;
        panda$core$Bit $tmp2871 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 68 }));
        $tmp2868 = $tmp2871.value;
        $l2870:;
        panda$core$Bit $tmp2872 = { $tmp2868 };
        bool $tmp2867 = $tmp2872.value;
        if ($tmp2867) goto $l2873;
        panda$core$Bit $tmp2874 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 70 }));
        $tmp2867 = $tmp2874.value;
        $l2873:;
        panda$core$Bit $tmp2875 = { $tmp2867 };
        bool $tmp2866 = $tmp2875.value;
        if ($tmp2866) goto $l2876;
        panda$core$Bit $tmp2877 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 58 }));
        $tmp2866 = $tmp2877.value;
        $l2876:;
        panda$core$Bit $tmp2878 = { $tmp2866 };
        bool $tmp2865 = $tmp2878.value;
        if ($tmp2865) goto $l2879;
        panda$core$Bit $tmp2880 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 59 }));
        $tmp2865 = $tmp2880.value;
        $l2879:;
        panda$core$Bit $tmp2881 = { $tmp2865 };
        $tmp2861 = $tmp2881.value;
        $l2864:;
        panda$core$Bit $tmp2882 = { $tmp2861 };
        if ($tmp2882.value) {
        {
            panda$collections$Array* $tmp2884 = (panda$collections$Array*) malloc(40);
            $tmp2884->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2884->refCount.value = 1;
            panda$collections$Array$init($tmp2884);
            children2883 = $tmp2884;
            panda$collections$Array$add$panda$collections$Array$T(children2883, ((panda$core$Object*) left2670));
            panda$collections$Array$add$panda$collections$Array$T(children2883, ((panda$core$Object*) right2671));
            org$pandalanguage$pandac$IRNode* $tmp2886 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2886->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2886->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2886, ((panda$core$Int64) { 1023 }), p_position, left2670->type, ((panda$core$Object*) wrap_panda$core$Int64(p_op)), ((panda$collections$ListView*) children2883));
            return $tmp2886;
        }
        }
        panda$core$String* $tmp2889 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
        panda$core$String* $tmp2890 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2888, $tmp2889);
        panda$core$String* $tmp2892 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2890, &$s2891);
        panda$core$String* $tmp2893 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2892, ((panda$core$Object*) left2670->type));
        panda$core$String* $tmp2895 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2893, &$s2894);
        panda$core$String* $tmp2896 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2895, ((panda$core$Object*) right2671->type));
        panda$core$String* $tmp2898 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2896, &$s2897);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp2898);
        return NULL;
    }
    }
    panda$collections$Array* $tmp2900 = (panda$collections$Array*) malloc(40);
    $tmp2900->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2900->refCount.value = 1;
    panda$collections$Array$init($tmp2900);
    children2899 = $tmp2900;
    panda$core$Bit $tmp2904 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2670->kind, ((panda$core$Int64) { 1004 }));
    bool $tmp2903 = $tmp2904.value;
    if ($tmp2903) goto $l2905;
    panda$core$Bit $tmp2906 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2670->kind, ((panda$core$Int64) { 1032 }));
    $tmp2903 = $tmp2906.value;
    $l2905:;
    panda$core$Bit $tmp2907 = { $tmp2903 };
    bool $tmp2902 = $tmp2907.value;
    if (!$tmp2902) goto $l2908;
    panda$core$Bit $tmp2910 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right2671->kind, ((panda$core$Int64) { 1004 }));
    bool $tmp2909 = $tmp2910.value;
    if ($tmp2909) goto $l2911;
    panda$core$Bit $tmp2912 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right2671->kind, ((panda$core$Int64) { 1032 }));
    $tmp2909 = $tmp2912.value;
    $l2911:;
    panda$core$Bit $tmp2913 = { $tmp2909 };
    $tmp2902 = $tmp2913.value;
    $l2908:;
    panda$core$Bit $tmp2914 = { $tmp2902 };
    if ($tmp2914.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2915 = org$pandalanguage$pandac$Compiler$foldInts$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, left2670, p_op, right2671);
        return $tmp2915;
    }
    }
    panda$core$Bit $tmp2917 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(left2670->type);
    bool $tmp2916 = $tmp2917.value;
    if (!$tmp2916) goto $l2918;
    panda$core$Int64$nullable $tmp2919 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, right2671, left2670->type);
    $tmp2916 = ((panda$core$Bit) { $tmp2919.nonnull }).value;
    $l2918:;
    panda$core$Bit $tmp2920 = { $tmp2916 };
    if ($tmp2920.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2921 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, right2671, left2670->type);
        right2671 = $tmp2921;
        PANDA_ASSERT(((panda$core$Bit) { right2671 != NULL }).value);
        panda$collections$Array$add$panda$collections$Array$T(children2899, ((panda$core$Object*) left2670));
        panda$collections$Array$add$panda$collections$Array$T(children2899, ((panda$core$Object*) right2671));
        switch (p_op.value) {
            case 58:
            case 59:
            case 63:
            case 65:
            case 62:
            case 64:
            {
                org$pandalanguage$pandac$Type* $tmp2923 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
                resultType2922 = $tmp2923;
            }
            break;
            default:
            {
                resultType2922 = left2670->type;
            }
        }
        org$pandalanguage$pandac$IRNode* $tmp2924 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2924->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2924->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2924, ((panda$core$Int64) { 1023 }), p_position, resultType2922, ((panda$core$Object*) wrap_panda$core$Int64(p_op)), ((panda$collections$ListView*) children2899));
        return $tmp2924;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children2899, ((panda$core$Object*) right2671));
    PANDA_ASSERT(self->reportErrors.value);
    self->reportErrors = ((panda$core$Bit) { false });
    panda$core$String* $tmp2927 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
    org$pandalanguage$pandac$IRNode* $tmp2928 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, left2670, $tmp2927, ((panda$collections$ListView*) children2899));
    result2926 = $tmp2928;
    self->reportErrors = ((panda$core$Bit) { true });
    if (((panda$core$Bit) { result2926 == NULL }).value) {
    {
        panda$collections$Array$clear(children2899);
        panda$collections$Array$add$panda$collections$Array$T(children2899, ((panda$core$Object*) left2670));
        org$pandalanguage$pandac$IRNode* $tmp2930 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, right2671);
        resolved2929 = $tmp2930;
        bool $tmp2931 = ((panda$core$Bit) { resolved2929 != NULL }).value;
        if (!$tmp2931) goto $l2932;
        panda$core$Bit $tmp2933 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(resolved2929->type);
        $tmp2931 = $tmp2933.value;
        $l2932:;
        panda$core$Bit $tmp2934 = { $tmp2931 };
        if ($tmp2934.value) {
        {
            panda$collections$Array$add$panda$collections$Array$T(children2899, ((panda$core$Object*) resolved2929));
            org$pandalanguage$pandac$IRNode* $tmp2936 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2936->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2936->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2938 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp2936, ((panda$core$Int64) { 1001 }), resolved2929->position, $tmp2938, resolved2929->type);
            target2935 = $tmp2936;
            panda$core$String* $tmp2939 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
            org$pandalanguage$pandac$IRNode* $tmp2940 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target2935, $tmp2939, ((panda$collections$ListView*) children2899));
            result2926 = $tmp2940;
        }
        }
    }
    }
    return result2926;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_b) {
    org$pandalanguage$pandac$IRNode* left2941;
    org$pandalanguage$pandac$IRNode* right2944;
    panda$core$Object* $tmp2942 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_b->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp2943 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2942));
    left2941 = $tmp2943;
    if (((panda$core$Bit) { left2941 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Object* $tmp2945 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_b->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp2946 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2945));
    right2944 = $tmp2946;
    if (((panda$core$Bit) { right2944 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp2947 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_b->position, left2941, ((panda$core$Int64$wrapper*) p_b->payload)->value, right2944);
    return $tmp2947;
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type) {
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp2951;
    switch (p_type->typeKind.value) {
        case 22:
        {
            panda$collections$ListView* $tmp2948 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p_type->parameter->bound);
            return $tmp2948;
        }
        break;
        case 21:
        {
            panda$core$Int64 $tmp2949 = panda$collections$Array$get_count$R$panda$core$Int64(p_type->subtypes);
            panda$core$Bit $tmp2950 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp2949, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2950.value);
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp2951, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$collections$Array* $tmp2952 = panda$collections$Array$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT(p_type->subtypes, $tmp2951);
            return ((panda$collections$ListView*) $tmp2952);
        }
        break;
        case 11:
        {
            panda$core$Object* $tmp2953 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
            panda$collections$ListView* $tmp2954 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, ((org$pandalanguage$pandac$Type*) $tmp2953));
            return $tmp2954;
        }
        break;
        default:
        {
            panda$collections$Array* $tmp2955 = (panda$collections$Array*) malloc(40);
            $tmp2955->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2955->refCount.value = 1;
            panda$collections$Array$init($tmp2955);
            return ((panda$collections$ListView*) $tmp2955);
        }
    }
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$IRNode$Q$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_target) {
    if (((panda$core$Bit) { p_target != NULL }).value) {
    {
        panda$core$Bit $tmp2957 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1001 }));
        if ($tmp2957.value) {
        {
            panda$collections$ListView* $tmp2958 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, ((org$pandalanguage$pandac$Type*) p_target->payload));
            return $tmp2958;
        }
        }
        panda$collections$ListView* $tmp2959 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p_target->type);
        return $tmp2959;
    }
    }
    panda$collections$Array* $tmp2960 = (panda$collections$Array*) malloc(40);
    $tmp2960->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2960->refCount.value = 1;
    panda$collections$Array$init($tmp2960);
    return ((panda$collections$ListView*) $tmp2960);
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compilePrefix$panda$core$Int64$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_base, org$pandalanguage$pandac$Position p_position) {
    panda$core$String* name2963;
    org$pandalanguage$pandac$ClassDecl* cl2965;
    org$pandalanguage$pandac$Symbol* s2967;
    org$pandalanguage$pandac$MethodDecl* m2970;
    panda$collections$Iterator* test$Iter2975;
    org$pandalanguage$pandac$MethodDecl* test2987;
    org$pandalanguage$pandac$MethodRef* ref2999;
    panda$collections$Array* children3003;
    org$pandalanguage$pandac$IRNode* methodRef3006;
    org$pandalanguage$pandac$Position $tmp3012;
    panda$collections$Array* args3013;
    panda$collections$Array* children3022;
    panda$collections$Array* children3032;
    org$pandalanguage$pandac$IRNode* coerced3041;
    panda$collections$Array* children3044;
    panda$core$Bit $tmp2962 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_base->type);
    if ($tmp2962.value) {
    {
        panda$core$String* $tmp2964 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
        name2963 = $tmp2964;
        org$pandalanguage$pandac$ClassDecl* $tmp2966 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_base->type);
        cl2965 = $tmp2966;
        if (((panda$core$Bit) { cl2965 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$SymbolTable* $tmp2968 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl2965);
        org$pandalanguage$pandac$Symbol* $tmp2969 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp2968, name2963);
        s2967 = $tmp2969;
        if (((panda$core$Bit) { s2967 != NULL }).value) {
        {
            m2970 = NULL;
            switch (s2967->kind.value) {
                case 204:
                {
                    m2970 = ((org$pandalanguage$pandac$MethodDecl*) s2967);
                    panda$core$Int64 $tmp2971 = panda$collections$Array$get_count$R$panda$core$Int64(m2970->parameters);
                    panda$core$Bit $tmp2972 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2971, ((panda$core$Int64) { 0 }));
                    PANDA_ASSERT($tmp2972.value);
                    panda$core$Bit $tmp2973 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(m2970->annotations);
                    panda$core$Bit $tmp2974 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2973);
                    PANDA_ASSERT($tmp2974.value);
                }
                break;
                case 205:
                {
                    {
                        ITable* $tmp2976 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s2967)->methods)->$class->itable;
                        while ($tmp2976->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp2976 = $tmp2976->next;
                        }
                        $fn2978 $tmp2977 = $tmp2976->methods[0];
                        panda$collections$Iterator* $tmp2979 = $tmp2977(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s2967)->methods));
                        test$Iter2975 = $tmp2979;
                        $l2980:;
                        ITable* $tmp2982 = test$Iter2975->$class->itable;
                        while ($tmp2982->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2982 = $tmp2982->next;
                        }
                        $fn2984 $tmp2983 = $tmp2982->methods[0];
                        panda$core$Bit $tmp2985 = $tmp2983(test$Iter2975);
                        panda$core$Bit $tmp2986 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2985);
                        if (!$tmp2986.value) goto $l2981;
                        {
                            ITable* $tmp2988 = test$Iter2975->$class->itable;
                            while ($tmp2988->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp2988 = $tmp2988->next;
                            }
                            $fn2990 $tmp2989 = $tmp2988->methods[1];
                            panda$core$Object* $tmp2991 = $tmp2989(test$Iter2975);
                            test2987 = ((org$pandalanguage$pandac$MethodDecl*) $tmp2991);
                            panda$core$Bit $tmp2993 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(test2987->annotations);
                            panda$core$Bit $tmp2994 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2993);
                            bool $tmp2992 = $tmp2994.value;
                            if (!$tmp2992) goto $l2995;
                            panda$core$Int64 $tmp2996 = panda$collections$Array$get_count$R$panda$core$Int64(test2987->parameters);
                            panda$core$Bit $tmp2997 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2996, ((panda$core$Int64) { 0 }));
                            $tmp2992 = $tmp2997.value;
                            $l2995:;
                            panda$core$Bit $tmp2998 = { $tmp2992 };
                            if ($tmp2998.value) {
                            {
                                m2970 = test2987;
                                goto $l2981;
                            }
                            }
                        }
                        goto $l2980;
                        $l2981:;
                    }
                }
                break;
                default:
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
            }
            if (((panda$core$Bit) { m2970 != NULL }).value) {
            {
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m2970);
                org$pandalanguage$pandac$MethodRef* $tmp3000 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                $tmp3000->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                $tmp3000->refCount.value = 1;
                panda$collections$ListView* $tmp3002 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$IRNode$Q$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p_base);
                org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp3000, m2970, $tmp3002);
                ref2999 = $tmp3000;
                panda$collections$Array* $tmp3004 = (panda$collections$Array*) malloc(40);
                $tmp3004->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp3004->refCount.value = 1;
                panda$collections$Array$init($tmp3004);
                children3003 = $tmp3004;
                panda$collections$Array$add$panda$collections$Array$T(children3003, ((panda$core$Object*) p_base));
                org$pandalanguage$pandac$IRNode* $tmp3007 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp3007->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp3007->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp3009 = (org$pandalanguage$pandac$Type*) malloc(96);
                $tmp3009->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
                $tmp3009->refCount.value = 1;
                org$pandalanguage$pandac$Position$init(&$tmp3012);
                org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp3009, &$s3011, ((panda$core$Int64) { 16 }), $tmp3012, ((panda$core$Bit) { true }));
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3007, ((panda$core$Int64) { 1002 }), p_position, $tmp3009, ((panda$core$Object*) ref2999), ((panda$collections$ListView*) children3003));
                methodRef3006 = $tmp3007;
                panda$collections$Array* $tmp3014 = (panda$collections$Array*) malloc(40);
                $tmp3014->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp3014->refCount.value = 1;
                panda$collections$Array$init($tmp3014);
                args3013 = $tmp3014;
                org$pandalanguage$pandac$IRNode* $tmp3016 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, methodRef3006, ((panda$collections$ListView*) args3013));
                return $tmp3016;
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
                    org$pandalanguage$pandac$IRNode* $tmp3017 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp3017->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp3017->refCount.value = 1;
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp3017, ((panda$core$Int64) { 1032 }), p_position, p_base->type, ((panda$core$UInt64$wrapper*) p_base->payload)->value);
                    return $tmp3017;
                }
                break;
                case 1032:
                {
                    org$pandalanguage$pandac$IRNode* $tmp3019 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp3019->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp3019->refCount.value = 1;
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp3019, ((panda$core$Int64) { 1004 }), p_position, p_base->type, ((panda$core$UInt64$wrapper*) p_base->payload)->value);
                    return $tmp3019;
                }
                break;
                default:
                {
                    panda$core$Bit $tmp3021 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_base->type);
                    if ($tmp3021.value) {
                    {
                        panda$collections$Array* $tmp3023 = (panda$collections$Array*) malloc(40);
                        $tmp3023->$class = (panda$core$Class*) &panda$collections$Array$class;
                        $tmp3023->refCount.value = 1;
                        panda$collections$Array$init($tmp3023);
                        children3022 = $tmp3023;
                        panda$collections$Array$add$panda$collections$Array$T(children3022, ((panda$core$Object*) p_base));
                        org$pandalanguage$pandac$IRNode* $tmp3025 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                        $tmp3025->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                        $tmp3025->refCount.value = 1;
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3025, ((panda$core$Int64) { 1041 }), p_base->position, p_base->type, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 52 }))), ((panda$collections$ListView*) children3022));
                        return $tmp3025;
                    }
                    }
                }
            }
            panda$core$String* $tmp3028 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3027, ((panda$core$Object*) p_base->type));
            panda$core$String* $tmp3030 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3028, &$s3029);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_base->position, $tmp3030);
            return NULL;
        }
        break;
        case 50:
        {
            panda$core$Bit $tmp3031 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_base->type);
            if ($tmp3031.value) {
            {
                panda$collections$Array* $tmp3033 = (panda$collections$Array*) malloc(40);
                $tmp3033->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp3033->refCount.value = 1;
                panda$collections$Array$init($tmp3033);
                children3032 = $tmp3033;
                panda$collections$Array$add$panda$collections$Array$T(children3032, ((panda$core$Object*) p_base));
                org$pandalanguage$pandac$IRNode* $tmp3035 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp3035->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp3035->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3035, ((panda$core$Int64) { 1041 }), p_base->position, p_base->type, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 50 }))), ((panda$collections$ListView*) children3032));
                return $tmp3035;
            }
            }
            else {
            {
                panda$core$String* $tmp3038 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3037, ((org$pandalanguage$pandac$Symbol*) p_base->type)->name);
                panda$core$String* $tmp3040 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3038, &$s3039);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_base->position, $tmp3040);
                return NULL;
            }
            }
        }
        break;
        case 49:
        {
            org$pandalanguage$pandac$Type* $tmp3042 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode* $tmp3043 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_base, $tmp3042);
            coerced3041 = $tmp3043;
            if (((panda$core$Bit) { coerced3041 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp3045 = (panda$collections$Array*) malloc(40);
            $tmp3045->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp3045->refCount.value = 1;
            panda$collections$Array$init($tmp3045);
            children3044 = $tmp3045;
            panda$collections$Array$add$panda$collections$Array$T(children3044, ((panda$core$Object*) coerced3041));
            org$pandalanguage$pandac$IRNode* $tmp3047 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3047->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3047->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3047, ((panda$core$Int64) { 1041 }), p_base->position, p_base->type, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 49 }))), ((panda$collections$ListView*) children3044));
            return $tmp3047;
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
    org$pandalanguage$pandac$IRNode* base3052;
    panda$core$Bit $tmp3049 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_p->kind, ((panda$core$Int64) { 112 }));
    PANDA_ASSERT($tmp3049.value);
    panda$core$Int64 $tmp3050 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_p->children);
    panda$core$Bit $tmp3051 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3050, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3051.value);
    panda$core$Object* $tmp3053 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_p->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3054 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3053));
    base3052 = $tmp3054;
    if (((panda$core$Bit) { base3052 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3055 = org$pandalanguage$pandac$Compiler$compilePrefix$panda$core$Int64$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$R$org$pandalanguage$pandac$IRNode$Q(self, ((panda$core$Int64$wrapper*) p_p->payload)->value, base3052, p_p->position);
    return $tmp3055;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileCall$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_c) {
    org$pandalanguage$pandac$IRNode* m3057;
    panda$collections$Array* args3060;
    panda$core$Range$LTpanda$core$Int64$GT $tmp3063;
    org$pandalanguage$pandac$IRNode* arg3078;
    panda$core$Bit $tmp3056 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_c->kind, ((panda$core$Int64) { 107 }));
    PANDA_ASSERT($tmp3056.value);
    panda$core$Object* $tmp3058 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_c->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3059 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3058));
    m3057 = $tmp3059;
    if (((panda$core$Bit) { m3057 != NULL }).value) {
    {
        panda$collections$Array* $tmp3061 = (panda$collections$Array*) malloc(40);
        $tmp3061->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp3061->refCount.value = 1;
        panda$collections$Array$init($tmp3061);
        args3060 = $tmp3061;
        panda$core$Int64 $tmp3064 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_c->children);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp3063, ((panda$core$Int64) { 1 }), $tmp3064, ((panda$core$Bit) { false }));
        int64_t $tmp3066 = $tmp3063.min.value;
        panda$core$Int64 i3065 = { $tmp3066 };
        int64_t $tmp3068 = $tmp3063.max.value;
        bool $tmp3069 = $tmp3063.inclusive.value;
        if ($tmp3069) goto $l3076; else goto $l3077;
        $l3076:;
        if ($tmp3066 <= $tmp3068) goto $l3070; else goto $l3072;
        $l3077:;
        if ($tmp3066 < $tmp3068) goto $l3070; else goto $l3072;
        $l3070:;
        {
            panda$core$Object* $tmp3079 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_c->children, i3065);
            org$pandalanguage$pandac$IRNode* $tmp3080 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3079));
            arg3078 = $tmp3080;
            if (((panda$core$Bit) { arg3078 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(args3060, ((panda$core$Object*) arg3078));
        }
        $l3073:;
        int64_t $tmp3082 = $tmp3068 - i3065.value;
        if ($tmp3069) goto $l3083; else goto $l3084;
        $l3083:;
        if ($tmp3082 >= 1) goto $l3081; else goto $l3072;
        $l3084:;
        if ($tmp3082 > 1) goto $l3081; else goto $l3072;
        $l3081:;
        i3065.value += 1;
        goto $l3070;
        $l3072:;
        org$pandalanguage$pandac$IRNode* $tmp3087 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, m3057, ((panda$collections$ListView*) args3060));
        return $tmp3087;
    }
    }
    return NULL;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_d) {
    org$pandalanguage$pandac$IRNode* base3091;
    org$pandalanguage$pandac$ClassDecl* cl3100;
    panda$core$String* name3102;
    org$pandalanguage$pandac$ClassDecl* cl3110;
    org$pandalanguage$pandac$Symbol* s3123;
    panda$core$Bit $tmp3088 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_d->kind, ((panda$core$Int64) { 108 }));
    PANDA_ASSERT($tmp3088.value);
    panda$core$Int64 $tmp3089 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp3090 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3089, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3090.value);
    panda$core$Object* $tmp3092 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3093 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3092));
    base3091 = $tmp3093;
    if (((panda$core$Bit) { base3091 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp3095 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(base3091->kind, ((panda$core$Int64) { 1037 }));
    bool $tmp3094 = $tmp3095.value;
    if (!$tmp3094) goto $l3096;
    panda$core$Bit $tmp3097 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(base3091->kind, ((panda$core$Int64) { 1024 }));
    $tmp3094 = $tmp3097.value;
    $l3096:;
    panda$core$Bit $tmp3098 = { $tmp3094 };
    if ($tmp3098.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3099 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, base3091);
        base3091 = $tmp3099;
    }
    }
    if (((panda$core$Bit) { base3091 == NULL }).value) {
    {
        return NULL;
    }
    }
    switch (base3091->kind.value) {
        case 1001:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp3101 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Type*) base3091->payload));
            cl3100 = $tmp3101;
        }
        break;
        case 1037:
        {
            panda$core$String* $tmp3104 = (($fn3103) base3091->payload->$class->vtable[0])(base3091->payload);
            panda$core$String* $tmp3106 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3104, &$s3105);
            panda$core$String* $tmp3107 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3106, p_d->payload);
            panda$core$String* $tmp3109 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3107, &$s3108);
            name3102 = $tmp3109;
            org$pandalanguage$pandac$ClassDecl* $tmp3111 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, name3102);
            cl3110 = $tmp3111;
            if (((panda$core$Bit) { cl3110 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp3112 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp3112->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp3112->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp3114 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$Type* $tmp3115 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl3110);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp3112, ((panda$core$Int64) { 1001 }), p_d->position, $tmp3114, $tmp3115);
                return $tmp3112;
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp3116 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3116->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3116->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3118 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$String($tmp3116, ((panda$core$Int64) { 1037 }), p_d->position, $tmp3118, name3102);
            return $tmp3116;
        }
        break;
        case 1024:
        {
            panda$core$Object* $tmp3119 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, ((org$pandalanguage$pandac$ClassDecl*) $tmp3119));
            panda$core$Object* $tmp3120 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
            org$pandalanguage$pandac$ClassDecl* $tmp3121 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$ClassDecl*) $tmp3120)->rawSuper);
            cl3100 = $tmp3121;
        }
        break;
        default:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp3122 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, base3091->type);
            cl3100 = $tmp3122;
        }
    }
    if (((panda$core$Bit) { cl3100 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp3124 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl3100);
    org$pandalanguage$pandac$Symbol* $tmp3125 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp3124, ((panda$core$String*) p_d->payload));
    s3123 = $tmp3125;
    if (((panda$core$Bit) { s3123 == NULL }).value) {
    {
        panda$core$String* $tmp3127 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3126, ((panda$core$Object*) base3091->type));
        panda$core$String* $tmp3129 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3127, &$s3128);
        panda$core$String* $tmp3131 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3130, p_d->payload);
        panda$core$String* $tmp3133 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3131, &$s3132);
        panda$core$String* $tmp3134 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3129, $tmp3133);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_d->position, $tmp3134);
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp3135 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl3100);
    org$pandalanguage$pandac$IRNode* $tmp3136 = org$pandalanguage$pandac$Compiler$symbolRef$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q(self, p_d->position, base3091, s3123, $tmp3135);
    return $tmp3136;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIdentifier$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_i) {
    org$pandalanguage$pandac$Symbol* s3138;
    panda$core$Bit $tmp3137 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_i->kind, ((panda$core$Int64) { 106 }));
    PANDA_ASSERT($tmp3137.value);
    org$pandalanguage$pandac$Symbol* $tmp3139 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(self->symbolTable, ((panda$core$String*) p_i->payload));
    s3138 = $tmp3139;
    if (((panda$core$Bit) { s3138 == NULL }).value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp3140 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((panda$core$String*) p_i->payload));
        s3138 = ((org$pandalanguage$pandac$Symbol*) $tmp3140);
    }
    }
    if (((panda$core$Bit) { s3138 != NULL }).value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3141 = org$pandalanguage$pandac$Compiler$symbolRef$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q(self, p_i->position, NULL, s3138, self->symbolTable);
        return $tmp3141;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3142 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3142->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3142->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3144 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$String($tmp3142, ((panda$core$Int64) { 1037 }), p_i->position, $tmp3144, ((panda$core$String*) p_i->payload));
    return $tmp3142;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_t) {
    org$pandalanguage$pandac$Type* resolved3145;
    org$pandalanguage$pandac$Type* $tmp3146 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, p_t);
    org$pandalanguage$pandac$Type* $tmp3147 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, $tmp3146);
    resolved3145 = $tmp3147;
    if (((panda$core$Bit) { resolved3145 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3148 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3148->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3148->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3150 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp3148, ((panda$core$Int64) { 1001 }), p_t->position, $tmp3150, resolved3145);
    return $tmp3148;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileRange$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_r) {
    org$pandalanguage$pandac$IRNode* start3158;
    org$pandalanguage$pandac$IRNode* end3166;
    org$pandalanguage$pandac$IRNode* step3174;
    panda$collections$Array* children3181;
    org$pandalanguage$pandac$Position $tmp3189;
    panda$core$Bit $tmp3152 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_r->kind, ((panda$core$Int64) { 105 }));
    bool $tmp3151 = $tmp3152.value;
    if ($tmp3151) goto $l3153;
    panda$core$Bit $tmp3154 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_r->kind, ((panda$core$Int64) { 104 }));
    $tmp3151 = $tmp3154.value;
    $l3153:;
    panda$core$Bit $tmp3155 = { $tmp3151 };
    PANDA_ASSERT($tmp3155.value);
    panda$core$Int64 $tmp3156 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_r->children);
    panda$core$Bit $tmp3157 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3156, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp3157.value);
    panda$core$Object* $tmp3159 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp3160 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp3159)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp3160.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3161 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3161->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3161->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp3163 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3161, ((panda$core$Int64) { 1030 }), p_r->position, $tmp3163);
        start3158 = $tmp3161;
    }
    }
    else {
    {
        panda$core$Object* $tmp3164 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp3165 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3164));
        start3158 = $tmp3165;
        if (((panda$core$Bit) { start3158 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$core$Object* $tmp3167 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp3168 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp3167)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp3168.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3169 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3169->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3169->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp3171 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3169, ((panda$core$Int64) { 1030 }), p_r->position, $tmp3171);
        end3166 = $tmp3169;
    }
    }
    else {
    {
        panda$core$Object* $tmp3172 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$IRNode* $tmp3173 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3172));
        end3166 = $tmp3173;
        if (((panda$core$Bit) { end3166 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$core$Object* $tmp3175 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 2 }));
    panda$core$Bit $tmp3176 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp3175)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp3176.value) {
    {
        step3174 = NULL;
    }
    }
    else {
    {
        panda$core$Object* $tmp3177 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$IRNode* $tmp3178 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3177));
        org$pandalanguage$pandac$Type* $tmp3179 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp3180 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3178, $tmp3179);
        step3174 = $tmp3180;
        if (((panda$core$Bit) { step3174 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$collections$Array* $tmp3182 = (panda$collections$Array*) malloc(40);
    $tmp3182->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3182->refCount.value = 1;
    panda$collections$Array$init($tmp3182);
    children3181 = $tmp3182;
    panda$collections$Array$add$panda$collections$Array$T(children3181, ((panda$core$Object*) start3158));
    panda$collections$Array$add$panda$collections$Array$T(children3181, ((panda$core$Object*) end3166));
    if (((panda$core$Bit) { step3174 != NULL }).value) {
    {
        panda$collections$Array$add$panda$collections$Array$T(children3181, ((panda$core$Object*) step3174));
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3184 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3184->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3184->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3186 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp3186->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp3186->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp3189);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp3186, &$s3188, ((panda$core$Int64) { 17 }), $tmp3189, ((panda$core$Bit) { true }));
    panda$core$Bit $tmp3190 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_r->kind, ((panda$core$Int64) { 104 }));
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3184, ((panda$core$Int64) { 1031 }), p_r->position, $tmp3186, ((panda$core$Object*) wrap_panda$core$Bit($tmp3190)), ((panda$collections$ListView*) children3181));
    return $tmp3184;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$IRNode* $tmp3191 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3191->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3191->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3193 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$String($tmp3191, ((panda$core$Int64) { 1033 }), p_s->position, $tmp3193, ((panda$core$String*) p_s->payload));
    return $tmp3191;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileSelf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$Type* type3198;
    org$pandalanguage$pandac$ClassDecl* cl3199;
    panda$collections$Array* subtypes3206;
    panda$core$MutableString* name3210;
    panda$core$Char8 $tmp3213;
    panda$core$String* separator3214;
    panda$collections$Iterator* p$Iter3216;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* p3228;
    panda$collections$Array* pType3233;
    panda$core$String* pName3236;
    panda$core$Char8 $tmp3246;
    panda$core$Bit $tmp3194 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_s->kind, ((panda$core$Int64) { 114 }));
    PANDA_ASSERT($tmp3194.value);
    panda$core$Object* $tmp3195 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
    panda$core$Bit $tmp3196 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp3195)->annotations);
    if ($tmp3196.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_s->position, &$s3197);
        return NULL;
    }
    }
    panda$core$Object* $tmp3200 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
    cl3199 = ((org$pandalanguage$pandac$ClassDecl*) $tmp3200);
    ITable* $tmp3201 = ((panda$collections$CollectionView*) cl3199->parameters)->$class->itable;
    while ($tmp3201->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp3201 = $tmp3201->next;
    }
    $fn3203 $tmp3202 = $tmp3201->methods[0];
    panda$core$Int64 $tmp3204 = $tmp3202(((panda$collections$CollectionView*) cl3199->parameters));
    panda$core$Bit $tmp3205 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3204, ((panda$core$Int64) { 0 }));
    if ($tmp3205.value) {
    {
        panda$collections$Array* $tmp3207 = (panda$collections$Array*) malloc(40);
        $tmp3207->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp3207->refCount.value = 1;
        panda$collections$Array$init($tmp3207);
        subtypes3206 = $tmp3207;
        org$pandalanguage$pandac$Type* $tmp3209 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl3199);
        panda$collections$Array$add$panda$collections$Array$T(subtypes3206, ((panda$core$Object*) $tmp3209));
        panda$core$MutableString* $tmp3211 = (panda$core$MutableString*) malloc(48);
        $tmp3211->$class = (panda$core$Class*) &panda$core$MutableString$class;
        $tmp3211->refCount.value = 1;
        panda$core$MutableString$init$panda$core$String($tmp3211, ((org$pandalanguage$pandac$Symbol*) cl3199)->name);
        name3210 = $tmp3211;
        panda$core$Char8$init$panda$core$UInt8(&$tmp3213, ((panda$core$UInt8) { 60 }));
        panda$core$MutableString$append$panda$core$Char8(name3210, $tmp3213);
        separator3214 = &$s3215;
        {
            ITable* $tmp3217 = ((panda$collections$Iterable*) cl3199->parameters)->$class->itable;
            while ($tmp3217->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3217 = $tmp3217->next;
            }
            $fn3219 $tmp3218 = $tmp3217->methods[0];
            panda$collections$Iterator* $tmp3220 = $tmp3218(((panda$collections$Iterable*) cl3199->parameters));
            p$Iter3216 = $tmp3220;
            $l3221:;
            ITable* $tmp3223 = p$Iter3216->$class->itable;
            while ($tmp3223->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3223 = $tmp3223->next;
            }
            $fn3225 $tmp3224 = $tmp3223->methods[0];
            panda$core$Bit $tmp3226 = $tmp3224(p$Iter3216);
            panda$core$Bit $tmp3227 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3226);
            if (!$tmp3227.value) goto $l3222;
            {
                ITable* $tmp3229 = p$Iter3216->$class->itable;
                while ($tmp3229->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3229 = $tmp3229->next;
                }
                $fn3231 $tmp3230 = $tmp3229->methods[1];
                panda$core$Object* $tmp3232 = $tmp3230(p$Iter3216);
                p3228 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp3232);
                panda$collections$Array* $tmp3234 = (panda$collections$Array*) malloc(40);
                $tmp3234->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp3234->refCount.value = 1;
                panda$collections$Array$init($tmp3234);
                pType3233 = $tmp3234;
                panda$collections$Array$add$panda$collections$Array$T(pType3233, ((panda$core$Object*) p3228->bound));
                panda$core$String* $tmp3237 = panda$core$String$convert$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) cl3199)->name);
                panda$core$String* $tmp3239 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3237, &$s3238);
                panda$core$String* $tmp3240 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3239, ((org$pandalanguage$pandac$Symbol*) p3228)->name);
                panda$core$String* $tmp3242 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3240, &$s3241);
                pName3236 = $tmp3242;
                panda$core$MutableString$append$panda$core$String(name3210, separator3214);
                panda$core$MutableString$append$panda$core$String(name3210, pName3236);
                org$pandalanguage$pandac$Type* $tmp3243 = (org$pandalanguage$pandac$Type*) malloc(96);
                $tmp3243->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
                $tmp3243->refCount.value = 1;
                org$pandalanguage$pandac$Type$init$org$pandalanguage$pandac$ClassDecl$GenericParameter($tmp3243, p3228);
                panda$collections$Array$add$panda$collections$Array$T(subtypes3206, ((panda$core$Object*) $tmp3243));
                separator3214 = &$s3245;
            }
            goto $l3221;
            $l3222:;
        }
        panda$core$Char8$init$panda$core$UInt8(&$tmp3246, ((panda$core$UInt8) { 62 }));
        panda$core$MutableString$append$panda$core$Char8(name3210, $tmp3246);
        org$pandalanguage$pandac$Type* $tmp3247 = (org$pandalanguage$pandac$Type*) malloc(96);
        $tmp3247->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
        $tmp3247->refCount.value = 1;
        panda$core$String* $tmp3249 = panda$core$MutableString$finish$R$panda$core$String(name3210);
        org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp3247, $tmp3249, ((panda$core$Int64) { 21 }), p_s->position, ((panda$collections$ListView*) subtypes3206), ((panda$core$Bit) { true }));
        type3198 = $tmp3247;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp3250 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl3199);
        type3198 = $tmp3250;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3251 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3251->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3251->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3251, ((panda$core$Int64) { 1025 }), p_s->position, type3198);
    return $tmp3251;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileSuper$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$ClassDecl* cl3257;
    panda$core$Bit $tmp3253 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_s->kind, ((panda$core$Int64) { 115 }));
    PANDA_ASSERT($tmp3253.value);
    panda$core$Object* $tmp3254 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
    panda$core$Bit $tmp3255 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp3254)->annotations);
    if ($tmp3255.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_s->position, &$s3256);
        return NULL;
    }
    }
    panda$core$Object* $tmp3258 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
    cl3257 = ((org$pandalanguage$pandac$ClassDecl*) $tmp3258);
    PANDA_ASSERT(cl3257->resolved.value);
    org$pandalanguage$pandac$IRNode* $tmp3259 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3259->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3259->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3259, ((panda$core$Int64) { 1024 }), p_s->position, cl3257->rawSuper);
    return $tmp3259;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_c) {
    org$pandalanguage$pandac$IRNode* value3264;
    org$pandalanguage$pandac$Type* type3267;
    panda$core$Bit $tmp3261 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_c->kind, ((panda$core$Int64) { 111 }));
    PANDA_ASSERT($tmp3261.value);
    panda$core$Int64 $tmp3262 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_c->children);
    panda$core$Bit $tmp3263 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3262, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp3263.value);
    panda$core$Object* $tmp3265 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_c->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3266 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3265));
    value3264 = $tmp3266;
    if (((panda$core$Bit) { value3264 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Object* $tmp3268 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_c->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Type* $tmp3269 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, ((org$pandalanguage$pandac$ASTNode*) $tmp3268));
    org$pandalanguage$pandac$Type* $tmp3270 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, $tmp3269);
    type3267 = $tmp3270;
    if (((panda$core$Bit) { type3267 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Int64$nullable $tmp3271 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, value3264, type3267);
    if (((panda$core$Bit) { $tmp3271.nonnull }).value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3272 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, value3264, type3267);
        return $tmp3272;
    }
    }
    panda$core$Bit $tmp3273 = org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, value3264, type3267);
    if ($tmp3273.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3274 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, value3264, p_c->position, ((panda$core$Bit) { true }), type3267);
        return $tmp3274;
    }
    }
    else {
    {
        panda$core$String* $tmp3276 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3275, ((panda$core$Object*) value3264->type));
        panda$core$String* $tmp3278 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3276, &$s3277);
        panda$core$String* $tmp3280 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3279, ((panda$core$Object*) type3267));
        panda$core$String* $tmp3282 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3280, &$s3281);
        panda$core$String* $tmp3283 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3278, $tmp3282);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_c->position, $tmp3283);
        return NULL;
    }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileNull$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_n) {
    panda$core$Bit $tmp3284 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_n->kind, ((panda$core$Int64) { 117 }));
    PANDA_ASSERT($tmp3284.value);
    org$pandalanguage$pandac$IRNode* $tmp3285 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3285->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3285->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3287 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3285, ((panda$core$Int64) { 1030 }), p_n->position, $tmp3287);
    return $tmp3285;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_e) {
    org$pandalanguage$pandac$IRNode* result3292;
    switch (p_e->kind.value) {
        case 103:
        {
            org$pandalanguage$pandac$IRNode* $tmp3288 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3288;
        }
        break;
        case 116:
        {
            org$pandalanguage$pandac$IRNode* $tmp3289 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3289->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3289->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3291 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp3289, ((panda$core$Int64) { 1011 }), p_e->position, $tmp3291, ((panda$core$Bit$wrapper*) p_e->payload)->value);
            return $tmp3289;
        }
        break;
        case 107:
        {
            org$pandalanguage$pandac$IRNode* $tmp3293 = org$pandalanguage$pandac$Compiler$compileCall$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            result3292 = $tmp3293;
            bool $tmp3294 = ((panda$core$Bit) { result3292 != NULL }).value;
            if (!$tmp3294) goto $l3295;
            org$pandalanguage$pandac$Type* $tmp3296 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp3297 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(result3292->type, $tmp3296);
            $tmp3294 = $tmp3297.value;
            $l3295:;
            panda$core$Bit $tmp3298 = { $tmp3294 };
            if ($tmp3298.value) {
            {
                panda$core$Bit $tmp3299 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result3292->kind, ((panda$core$Int64) { 1005 }));
                PANDA_ASSERT($tmp3299.value);
                panda$core$String* $tmp3300 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(((org$pandalanguage$pandac$MethodRef*) result3292->payload)->value);
                panda$core$String* $tmp3302 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3300, &$s3301);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, result3292->position, $tmp3302);
                return NULL;
            }
            }
            return result3292;
        }
        break;
        case 108:
        {
            org$pandalanguage$pandac$IRNode* $tmp3303 = org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3303;
        }
        break;
        case 106:
        {
            org$pandalanguage$pandac$IRNode* $tmp3304 = org$pandalanguage$pandac$Compiler$compileIdentifier$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3304;
        }
        break;
        case 102:
        {
            org$pandalanguage$pandac$IRNode* $tmp3305 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3305->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3305->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3307 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp3305, ((panda$core$Int64) { 1004 }), p_e->position, $tmp3307, ((panda$core$UInt64$wrapper*) p_e->payload)->value);
            return $tmp3305;
        }
        break;
        case 112:
        {
            org$pandalanguage$pandac$IRNode* $tmp3308 = org$pandalanguage$pandac$Compiler$compilePrefix$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3308;
        }
        break;
        case 104:
        case 105:
        {
            org$pandalanguage$pandac$IRNode* $tmp3309 = org$pandalanguage$pandac$Compiler$compileRange$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3309;
        }
        break;
        case 113:
        {
            org$pandalanguage$pandac$IRNode* $tmp3310 = org$pandalanguage$pandac$Compiler$compileString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3310;
        }
        break;
        case 109:
        case 154:
        case 110:
        {
            org$pandalanguage$pandac$IRNode* $tmp3311 = org$pandalanguage$pandac$Compiler$compileType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3311;
        }
        break;
        case 114:
        {
            org$pandalanguage$pandac$IRNode* $tmp3312 = org$pandalanguage$pandac$Compiler$compileSelf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3312;
        }
        break;
        case 115:
        {
            org$pandalanguage$pandac$IRNode* $tmp3313 = org$pandalanguage$pandac$Compiler$compileSuper$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3313;
        }
        break;
        case 111:
        {
            org$pandalanguage$pandac$IRNode* $tmp3314 = org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3314;
        }
        break;
        case 117:
        {
            org$pandalanguage$pandac$IRNode* $tmp3315 = org$pandalanguage$pandac$Compiler$compileNull$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode(self, p_e);
            return $tmp3315;
        }
        break;
    }
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBlock$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_b) {
    org$pandalanguage$pandac$SymbolTable* symbols3317;
    panda$collections$Array* result3320;
    panda$collections$Iterator* stmt$Iter3323;
    org$pandalanguage$pandac$ASTNode* stmt3335;
    org$pandalanguage$pandac$IRNode* compiled3340;
    panda$core$Bit $tmp3316 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_b->kind, ((panda$core$Int64) { 126 }));
    PANDA_ASSERT($tmp3316.value);
    org$pandalanguage$pandac$SymbolTable* $tmp3318 = (org$pandalanguage$pandac$SymbolTable*) malloc(48);
    $tmp3318->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp3318->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp3318, self->symbolTable);
    symbols3317 = $tmp3318;
    self->symbolTable = symbols3317;
    panda$collections$Array* $tmp3321 = (panda$collections$Array*) malloc(40);
    $tmp3321->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3321->refCount.value = 1;
    panda$collections$Array$init($tmp3321);
    result3320 = $tmp3321;
    if (((panda$core$Bit) { p_b->children != NULL }).value) {
    {
        {
            ITable* $tmp3324 = ((panda$collections$Iterable*) p_b->children)->$class->itable;
            while ($tmp3324->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3324 = $tmp3324->next;
            }
            $fn3326 $tmp3325 = $tmp3324->methods[0];
            panda$collections$Iterator* $tmp3327 = $tmp3325(((panda$collections$Iterable*) p_b->children));
            stmt$Iter3323 = $tmp3327;
            $l3328:;
            ITable* $tmp3330 = stmt$Iter3323->$class->itable;
            while ($tmp3330->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3330 = $tmp3330->next;
            }
            $fn3332 $tmp3331 = $tmp3330->methods[0];
            panda$core$Bit $tmp3333 = $tmp3331(stmt$Iter3323);
            panda$core$Bit $tmp3334 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3333);
            if (!$tmp3334.value) goto $l3329;
            {
                ITable* $tmp3336 = stmt$Iter3323->$class->itable;
                while ($tmp3336->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3336 = $tmp3336->next;
                }
                $fn3338 $tmp3337 = $tmp3336->methods[1];
                panda$core$Object* $tmp3339 = $tmp3337(stmt$Iter3323);
                stmt3335 = ((org$pandalanguage$pandac$ASTNode*) $tmp3339);
                org$pandalanguage$pandac$IRNode* $tmp3341 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, stmt3335);
                compiled3340 = $tmp3341;
                if (((panda$core$Bit) { compiled3340 == NULL }).value) {
                {
                    panda$core$Object* $tmp3342 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(symbols3317->parents, ((panda$core$Int64) { 0 }));
                    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp3342);
                    return NULL;
                }
                }
                panda$core$Bit $tmp3343 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(compiled3340->kind, ((panda$core$Int64) { 1039 }));
                PANDA_ASSERT($tmp3343.value);
                panda$collections$Array$add$panda$collections$Array$T(result3320, ((panda$core$Object*) compiled3340));
            }
            goto $l3328;
            $l3329:;
        }
    }
    }
    panda$core$Object* $tmp3344 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(symbols3317->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp3344);
    org$pandalanguage$pandac$IRNode* $tmp3345 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3345->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3345->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3345, ((panda$core$Int64) { 1000 }), p_b->position, ((panda$collections$ListView*) result3320));
    return $tmp3345;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_i) {
    org$pandalanguage$pandac$IRNode* test3355;
    org$pandalanguage$pandac$IRNode* ifTrue3360;
    panda$collections$Array* children3363;
    org$pandalanguage$pandac$IRNode* ifFalse3368;
    panda$core$Bit $tmp3347 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_i->kind, ((panda$core$Int64) { 118 }));
    PANDA_ASSERT($tmp3347.value);
    panda$core$Int64 $tmp3349 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_i->children);
    panda$core$Bit $tmp3350 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3349, ((panda$core$Int64) { 2 }));
    bool $tmp3348 = $tmp3350.value;
    if ($tmp3348) goto $l3351;
    panda$core$Int64 $tmp3352 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_i->children);
    panda$core$Bit $tmp3353 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3352, ((panda$core$Int64) { 3 }));
    $tmp3348 = $tmp3353.value;
    $l3351:;
    panda$core$Bit $tmp3354 = { $tmp3348 };
    PANDA_ASSERT($tmp3354.value);
    panda$core$Object* $tmp3356 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_i->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3357 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3356));
    org$pandalanguage$pandac$Type* $tmp3358 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp3359 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3357, $tmp3358);
    test3355 = $tmp3359;
    if (((panda$core$Bit) { test3355 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Object* $tmp3361 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_i->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp3362 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3361));
    ifTrue3360 = $tmp3362;
    if (((panda$core$Bit) { ifTrue3360 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3364 = (panda$collections$Array*) malloc(40);
    $tmp3364->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3364->refCount.value = 1;
    panda$collections$Array$init($tmp3364);
    children3363 = $tmp3364;
    panda$collections$Array$add$panda$collections$Array$T(children3363, ((panda$core$Object*) test3355));
    panda$collections$Array$add$panda$collections$Array$T(children3363, ((panda$core$Object*) ifTrue3360));
    panda$core$Int64 $tmp3366 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_i->children);
    panda$core$Bit $tmp3367 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3366, ((panda$core$Int64) { 3 }));
    if ($tmp3367.value) {
    {
        panda$core$Object* $tmp3369 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_i->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$IRNode* $tmp3370 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3369));
        ifFalse3368 = $tmp3370;
        if (((panda$core$Bit) { ifFalse3368 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children3363, ((panda$core$Object*) ifFalse3368));
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3371 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3371->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3371->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3371, ((panda$core$Int64) { 1012 }), p_i->position, ((panda$collections$ListView*) children3363));
    return $tmp3371;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileRangeFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, panda$core$String* p_label, org$pandalanguage$pandac$ASTNode* p_astTarget, org$pandalanguage$pandac$IRNode* p_rawList, org$pandalanguage$pandac$ASTNode* p_body) {
    org$pandalanguage$pandac$Type* elementType3373;
    org$pandalanguage$pandac$IRNode* list3374;
    org$pandalanguage$pandac$Type* t3386;
    org$pandalanguage$pandac$Compiler$CompileTargetResult* target3419;
    org$pandalanguage$pandac$IRNode* body3421;
    panda$collections$Array* children3423;
    panda$core$Bit $tmp3377 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_astTarget->kind, ((panda$core$Int64) { 106 }));
    bool $tmp3376 = $tmp3377.value;
    if (!$tmp3376) goto $l3378;
    $tmp3376 = ((panda$core$Bit) { p_astTarget->children != NULL }).value;
    $l3378:;
    panda$core$Bit $tmp3379 = { $tmp3376 };
    bool $tmp3375 = $tmp3379.value;
    if (!$tmp3375) goto $l3380;
    panda$core$Int64 $tmp3381 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_astTarget->children);
    panda$core$Bit $tmp3382 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3381, ((panda$core$Int64) { 0 }));
    $tmp3375 = $tmp3382.value;
    $l3380:;
    panda$core$Bit $tmp3383 = { $tmp3375 };
    if ($tmp3383.value) {
    {
        panda$core$Int64 $tmp3384 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_astTarget->children);
        panda$core$Bit $tmp3385 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3384, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp3385.value);
        panda$core$Object* $tmp3387 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_astTarget->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Type* $tmp3388 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, ((org$pandalanguage$pandac$ASTNode*) $tmp3387));
        org$pandalanguage$pandac$Type* $tmp3389 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, $tmp3388);
        t3386 = $tmp3389;
        panda$core$Bit $tmp3390 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_rawList->kind, ((panda$core$Int64) { 1031 }));
        if ($tmp3390.value) {
        {
            panda$core$Int64 $tmp3391 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_rawList->children);
            panda$core$Bit $tmp3392 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3391, ((panda$core$Int64) { 2 }));
            if ($tmp3392.value) {
            {
                org$pandalanguage$pandac$Type* $tmp3393 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3386);
                org$pandalanguage$pandac$IRNode* $tmp3394 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, $tmp3393);
                list3374 = $tmp3394;
            }
            }
            else {
            {
                panda$core$Int64 $tmp3395 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_rawList->children);
                panda$core$Bit $tmp3396 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3395, ((panda$core$Int64) { 3 }));
                PANDA_ASSERT($tmp3396.value);
                org$pandalanguage$pandac$Type* $tmp3397 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$Type* $tmp3398 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3386, $tmp3397);
                org$pandalanguage$pandac$IRNode* $tmp3399 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, $tmp3398);
                list3374 = $tmp3399;
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp3400 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(p_rawList->type);
        if ($tmp3400.value) {
        {
            panda$core$Object* $tmp3401 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_rawList->type->subtypes, ((panda$core$Int64) { 2 }));
            org$pandalanguage$pandac$Type* $tmp3402 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3386, ((org$pandalanguage$pandac$Type*) $tmp3401));
            org$pandalanguage$pandac$IRNode* $tmp3403 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, $tmp3402);
            list3374 = $tmp3403;
        }
        }
        else {
        org$pandalanguage$pandac$Type* $tmp3404 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3386);
        panda$core$Int64$nullable $tmp3405 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_rawList, $tmp3404);
        if (((panda$core$Bit) { $tmp3405.nonnull }).value) {
        {
            org$pandalanguage$pandac$Type* $tmp3406 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3386);
            org$pandalanguage$pandac$IRNode* $tmp3407 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, $tmp3406);
            list3374 = $tmp3407;
        }
        }
        else {
        {
            org$pandalanguage$pandac$Type* $tmp3408 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$Type* $tmp3409 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3386, $tmp3408);
            org$pandalanguage$pandac$IRNode* $tmp3410 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, $tmp3409);
            list3374 = $tmp3410;
        }
        }
        }
        }
    }
    }
    else {
    {
        org$pandalanguage$pandac$IRNode* $tmp3411 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList);
        list3374 = $tmp3411;
    }
    }
    if (((panda$core$Bit) { list3374 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp3412 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(list3374->type->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp3412.value) {
    {
        panda$core$Object* $tmp3413 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(list3374->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp3414 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3413)->typeKind, ((panda$core$Int64) { 21 }));
        PANDA_ASSERT($tmp3414.value);
        panda$core$Object* $tmp3415 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(list3374->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3416 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$Type*) $tmp3415)->subtypes, ((panda$core$Int64) { 1 }));
        elementType3373 = ((org$pandalanguage$pandac$Type*) $tmp3416);
    }
    }
    else {
    {
        panda$core$Bit $tmp3417 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(list3374->type->typeKind, ((panda$core$Int64) { 21 }));
        PANDA_ASSERT($tmp3417.value);
        panda$core$Object* $tmp3418 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(list3374->type->subtypes, ((panda$core$Int64) { 1 }));
        elementType3373 = ((org$pandalanguage$pandac$Type*) $tmp3418);
    }
    }
    org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp3420 = org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(self, p_astTarget, ((panda$core$Int64) { 10001 }), NULL, elementType3373);
    target3419 = $tmp3420;
    if (((panda$core$Bit) { target3419 == NULL }).value) {
    {
        return NULL;
    }
    }
    PANDA_ASSERT(((panda$core$Bit) { target3419->value == NULL }).value);
    org$pandalanguage$pandac$IRNode* $tmp3422 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_body);
    body3421 = $tmp3422;
    if (((panda$core$Bit) { body3421 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3424 = (panda$collections$Array*) malloc(40);
    $tmp3424->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3424->refCount.value = 1;
    panda$collections$Array$init($tmp3424);
    children3423 = $tmp3424;
    panda$collections$Array$add$panda$collections$Array$T(children3423, ((panda$core$Object*) target3419->target));
    panda$collections$Array$add$panda$collections$Array$T(children3423, ((panda$core$Object*) list3374));
    panda$collections$Array$add$panda$collections$Array$T(children3423, ((panda$core$Object*) body3421));
    org$pandalanguage$pandac$IRNode* $tmp3426 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3426->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3426->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3426, ((panda$core$Int64) { 1029 }), p_position, ((panda$core$Object*) p_label), ((panda$collections$ListView*) children3423));
    return $tmp3426;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIteratorFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, panda$core$String* p_label, org$pandalanguage$pandac$ASTNode* p_astTarget, org$pandalanguage$pandac$IRNode* p_iterator, org$pandalanguage$pandac$ASTNode* p_body) {
    org$pandalanguage$pandac$Compiler$CompileTargetResult* target3435;
    org$pandalanguage$pandac$Variable* targetVar3439;
    panda$collections$Array* subtypes3440;
    org$pandalanguage$pandac$Type* iterType3444;
    org$pandalanguage$pandac$Variable* iter3455;
    panda$collections$Array* statements3460;
    panda$collections$Array* declChildren3463;
    panda$collections$Array* varChildren3468;
    panda$collections$Array* whileChildren3475;
    org$pandalanguage$pandac$IRNode* done3478;
    org$pandalanguage$pandac$IRNode* notCall3485;
    panda$collections$Array* valueDeclChildren3490;
    org$pandalanguage$pandac$IRNode* next3495;
    panda$collections$Array* valueVarChildren3502;
    org$pandalanguage$pandac$IRNode* block3507;
    panda$collections$Array* blockChildren3509;
    panda$core$Bit $tmp3429 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_iterator->type->typeKind, ((panda$core$Int64) { 21 }));
    bool $tmp3428 = $tmp3429.value;
    if (!$tmp3428) goto $l3430;
    panda$core$Object* $tmp3431 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_iterator->type->subtypes, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp3432 = org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp3433 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3431), $tmp3432);
    $tmp3428 = $tmp3433.value;
    $l3430:;
    panda$core$Bit $tmp3434 = { $tmp3428 };
    PANDA_ASSERT($tmp3434.value);
    panda$core$Object* $tmp3436 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_iterator->type->subtypes, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp3437 = org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(self, p_astTarget, ((panda$core$Int64) { 10001 }), NULL, ((org$pandalanguage$pandac$Type*) $tmp3436));
    target3435 = $tmp3437;
    if (((panda$core$Bit) { target3435 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp3438 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(target3435->target->kind, ((panda$core$Int64) { 1016 }));
    PANDA_ASSERT($tmp3438.value);
    targetVar3439 = ((org$pandalanguage$pandac$Variable*) target3435->target->payload);
    panda$collections$Array* $tmp3441 = (panda$collections$Array*) malloc(40);
    $tmp3441->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3441->refCount.value = 1;
    panda$collections$Array$init($tmp3441);
    subtypes3440 = $tmp3441;
    org$pandalanguage$pandac$Type* $tmp3443 = org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type();
    panda$collections$Array$add$panda$collections$Array$T(subtypes3440, ((panda$core$Object*) $tmp3443));
    panda$collections$Array$add$panda$collections$Array$T(subtypes3440, ((panda$core$Object*) target3435->target->type));
    org$pandalanguage$pandac$Type* $tmp3445 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp3445->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp3445->refCount.value = 1;
    panda$core$Object* $tmp3447 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(subtypes3440, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3448 = org$pandalanguage$pandac$Type$convert$R$panda$core$String(((org$pandalanguage$pandac$Type*) $tmp3447));
    panda$core$String* $tmp3450 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3448, &$s3449);
    panda$core$Object* $tmp3451 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(subtypes3440, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp3452 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3450, ((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp3451)));
    panda$core$String* $tmp3454 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3452, &$s3453);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp3445, $tmp3454, ((panda$core$Int64) { 21 }), p_position, ((panda$collections$ListView*) subtypes3440), ((panda$core$Bit) { true }));
    iterType3444 = $tmp3445;
    org$pandalanguage$pandac$Variable* $tmp3456 = (org$pandalanguage$pandac$Variable*) malloc(88);
    $tmp3456->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
    $tmp3456->refCount.value = 1;
    panda$core$String* $tmp3459 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) targetVar3439)->name, &$s3458);
    org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type($tmp3456, p_iterator->position, ((panda$core$Int64) { 10001 }), $tmp3459, iterType3444);
    iter3455 = $tmp3456;
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->symbolTable, ((org$pandalanguage$pandac$Symbol*) iter3455));
    panda$collections$Array* $tmp3461 = (panda$collections$Array*) malloc(40);
    $tmp3461->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3461->refCount.value = 1;
    panda$collections$Array$init($tmp3461);
    statements3460 = $tmp3461;
    panda$collections$Array* $tmp3464 = (panda$collections$Array*) malloc(40);
    $tmp3464->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3464->refCount.value = 1;
    panda$collections$Array$init($tmp3464);
    declChildren3463 = $tmp3464;
    org$pandalanguage$pandac$IRNode* $tmp3466 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3466->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3466->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3466, ((panda$core$Int64) { 1016 }), p_iterator->position, iter3455->type, iter3455);
    panda$collections$Array$add$panda$collections$Array$T(declChildren3463, ((panda$core$Object*) $tmp3466));
    panda$collections$Array$add$panda$collections$Array$T(declChildren3463, ((panda$core$Object*) p_iterator));
    panda$collections$Array* $tmp3469 = (panda$collections$Array*) malloc(40);
    $tmp3469->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3469->refCount.value = 1;
    panda$collections$Array$init($tmp3469);
    varChildren3468 = $tmp3469;
    org$pandalanguage$pandac$IRNode* $tmp3471 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3471->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3471->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3471, ((panda$core$Int64) { 1021 }), ((org$pandalanguage$pandac$Symbol*) iter3455)->position, ((panda$collections$ListView*) declChildren3463));
    panda$collections$Array$add$panda$collections$Array$T(varChildren3468, ((panda$core$Object*) $tmp3471));
    org$pandalanguage$pandac$IRNode* $tmp3473 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3473->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3473->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3473, ((panda$core$Int64) { 1018 }), ((org$pandalanguage$pandac$Symbol*) iter3455)->position, ((panda$collections$ListView*) varChildren3468));
    panda$collections$Array$add$panda$collections$Array$T(statements3460, ((panda$core$Object*) $tmp3473));
    panda$collections$Array* $tmp3476 = (panda$collections$Array*) malloc(40);
    $tmp3476->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3476->refCount.value = 1;
    panda$collections$Array$init($tmp3476);
    whileChildren3475 = $tmp3476;
    org$pandalanguage$pandac$IRNode* $tmp3479 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3479->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3479->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3479, ((panda$core$Int64) { 1016 }), ((org$pandalanguage$pandac$Symbol*) iter3455)->position, iter3455->type, iter3455);
    panda$collections$Array* $tmp3482 = (panda$collections$Array*) malloc(40);
    $tmp3482->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3482->refCount.value = 1;
    panda$collections$Array$init($tmp3482);
    org$pandalanguage$pandac$IRNode* $tmp3484 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3479, &$s3481, ((panda$collections$ListView*) $tmp3482), NULL);
    done3478 = $tmp3484;
    if (((panda$core$Bit) { done3478 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3487 = (panda$collections$Array*) malloc(40);
    $tmp3487->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3487->refCount.value = 1;
    panda$collections$Array$init($tmp3487);
    org$pandalanguage$pandac$IRNode* $tmp3489 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, done3478, &$s3486, ((panda$collections$ListView*) $tmp3487), NULL);
    notCall3485 = $tmp3489;
    if (((panda$core$Bit) { notCall3485 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(whileChildren3475, ((panda$core$Object*) notCall3485));
    panda$collections$Array* $tmp3491 = (panda$collections$Array*) malloc(40);
    $tmp3491->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3491->refCount.value = 1;
    panda$collections$Array$init($tmp3491);
    valueDeclChildren3490 = $tmp3491;
    org$pandalanguage$pandac$IRNode* $tmp3493 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3493->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3493->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3493, ((panda$core$Int64) { 1016 }), p_iterator->position, targetVar3439->type, targetVar3439);
    panda$collections$Array$add$panda$collections$Array$T(valueDeclChildren3490, ((panda$core$Object*) $tmp3493));
    org$pandalanguage$pandac$IRNode* $tmp3496 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3496->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3496->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3496, ((panda$core$Int64) { 1016 }), p_iterator->position, iter3455->type, iter3455);
    panda$collections$Array* $tmp3499 = (panda$collections$Array*) malloc(40);
    $tmp3499->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3499->refCount.value = 1;
    panda$collections$Array$init($tmp3499);
    org$pandalanguage$pandac$IRNode* $tmp3501 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3496, &$s3498, ((panda$collections$ListView*) $tmp3499), NULL);
    next3495 = $tmp3501;
    PANDA_ASSERT(((panda$core$Bit) { next3495 != NULL }).value);
    panda$collections$Array$add$panda$collections$Array$T(valueDeclChildren3490, ((panda$core$Object*) next3495));
    panda$collections$Array* $tmp3503 = (panda$collections$Array*) malloc(40);
    $tmp3503->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3503->refCount.value = 1;
    panda$collections$Array$init($tmp3503);
    valueVarChildren3502 = $tmp3503;
    org$pandalanguage$pandac$IRNode* $tmp3505 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3505->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3505->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3505, ((panda$core$Int64) { 1021 }), p_iterator->position, ((panda$collections$ListView*) valueDeclChildren3490));
    panda$collections$Array$add$panda$collections$Array$T(valueVarChildren3502, ((panda$core$Object*) $tmp3505));
    org$pandalanguage$pandac$IRNode* $tmp3508 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_body);
    block3507 = $tmp3508;
    if (((panda$core$Bit) { block3507 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3510 = (panda$collections$Array*) malloc(40);
    $tmp3510->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3510->refCount.value = 1;
    panda$collections$Array$init($tmp3510);
    blockChildren3509 = $tmp3510;
    org$pandalanguage$pandac$IRNode* $tmp3512 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3512->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3512->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3512, ((panda$core$Int64) { 1018 }), p_iterator->position, ((panda$collections$ListView*) valueVarChildren3502));
    panda$collections$Array$add$panda$collections$Array$T(blockChildren3509, ((panda$core$Object*) $tmp3512));
    panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(blockChildren3509, ((panda$collections$CollectionView*) block3507->children));
    org$pandalanguage$pandac$IRNode* $tmp3514 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3514->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3514->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3514, ((panda$core$Int64) { 1000 }), block3507->position, ((panda$collections$ListView*) blockChildren3509));
    block3507 = $tmp3514;
    panda$collections$Array$add$panda$collections$Array$T(whileChildren3475, ((panda$core$Object*) block3507));
    org$pandalanguage$pandac$IRNode* $tmp3516 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3516->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3516->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3516, ((panda$core$Int64) { 1013 }), p_iterator->position, ((panda$core$Object*) p_label), ((panda$collections$ListView*) whileChildren3475));
    panda$collections$Array$add$panda$collections$Array$T(statements3460, ((panda$core$Object*) $tmp3516));
    org$pandalanguage$pandac$IRNode* $tmp3518 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3518->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3518->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3518, ((panda$core$Int64) { 1000 }), p_iterator->position, ((panda$collections$ListView*) statements3460));
    return $tmp3518;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileFor$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_f) {
    org$pandalanguage$pandac$IRNode* list3523;
    org$pandalanguage$pandac$SymbolTable* symbols3526;
    org$pandalanguage$pandac$IRNode* result3529;
    panda$core$Bit found3543;
    panda$collections$Iterator* intf$Iter3544;
    org$pandalanguage$pandac$Type* intf3557;
    org$pandalanguage$pandac$IRNode* iterator3569;
    org$pandalanguage$pandac$IRNode* iterable3581;
    org$pandalanguage$pandac$IRNode* iterator3583;
    panda$core$Bit $tmp3520 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_f->kind, ((panda$core$Int64) { 119 }));
    PANDA_ASSERT($tmp3520.value);
    panda$core$Int64 $tmp3521 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_f->children);
    panda$core$Bit $tmp3522 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3521, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp3522.value);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loops, ((panda$core$Object*) ((panda$core$String*) p_f->payload)));
    panda$core$Object* $tmp3524 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp3525 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3524));
    list3523 = $tmp3525;
    if (((panda$core$Bit) { list3523 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp3527 = (org$pandalanguage$pandac$SymbolTable*) malloc(48);
    $tmp3527->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp3527->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp3527, self->symbolTable);
    symbols3526 = $tmp3527;
    self->symbolTable = symbols3526;
    panda$core$Bit $tmp3532 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(list3523->kind, ((panda$core$Int64) { 1031 }));
    bool $tmp3531 = $tmp3532.value;
    if ($tmp3531) goto $l3533;
    panda$core$Bit $tmp3534 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(list3523->type);
    $tmp3531 = $tmp3534.value;
    $l3533:;
    panda$core$Bit $tmp3535 = { $tmp3531 };
    bool $tmp3530 = $tmp3535.value;
    if ($tmp3530) goto $l3536;
    panda$core$Bit $tmp3537 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(list3523->type);
    $tmp3530 = $tmp3537.value;
    $l3536:;
    panda$core$Bit $tmp3538 = { $tmp3530 };
    if ($tmp3538.value) {
    {
        panda$core$Object* $tmp3539 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3540 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$IRNode* $tmp3541 = org$pandalanguage$pandac$Compiler$compileRangeFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->position, ((panda$core$String*) p_f->payload), ((org$pandalanguage$pandac$ASTNode*) $tmp3539), list3523, ((org$pandalanguage$pandac$ASTNode*) $tmp3540));
        result3529 = $tmp3541;
    }
    }
    else {
    {
        org$pandalanguage$pandac$IRNode* $tmp3542 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, list3523);
        list3523 = $tmp3542;
        if (((panda$core$Bit) { list3523 == NULL }).value) {
        {
            return NULL;
        }
        }
        found3543 = ((panda$core$Bit) { false });
        {
            panda$collections$Set* $tmp3545 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self, list3523->type);
            ITable* $tmp3546 = ((panda$collections$Iterable*) $tmp3545)->$class->itable;
            while ($tmp3546->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3546 = $tmp3546->next;
            }
            $fn3548 $tmp3547 = $tmp3546->methods[0];
            panda$collections$Iterator* $tmp3549 = $tmp3547(((panda$collections$Iterable*) $tmp3545));
            intf$Iter3544 = $tmp3549;
            $l3550:;
            ITable* $tmp3552 = intf$Iter3544->$class->itable;
            while ($tmp3552->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3552 = $tmp3552->next;
            }
            $fn3554 $tmp3553 = $tmp3552->methods[0];
            panda$core$Bit $tmp3555 = $tmp3553(intf$Iter3544);
            panda$core$Bit $tmp3556 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3555);
            if (!$tmp3556.value) goto $l3551;
            {
                ITable* $tmp3558 = intf$Iter3544->$class->itable;
                while ($tmp3558->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3558 = $tmp3558->next;
                }
                $fn3560 $tmp3559 = $tmp3558->methods[1];
                panda$core$Object* $tmp3561 = $tmp3559(intf$Iter3544);
                intf3557 = ((org$pandalanguage$pandac$Type*) $tmp3561);
                panda$core$Bit $tmp3563 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(intf3557->typeKind, ((panda$core$Int64) { 21 }));
                bool $tmp3562 = $tmp3563.value;
                if (!$tmp3562) goto $l3564;
                panda$core$Object* $tmp3565 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(intf3557->subtypes, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp3566 = org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp3567 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3565), $tmp3566);
                $tmp3562 = $tmp3567.value;
                $l3564:;
                panda$core$Bit $tmp3568 = { $tmp3562 };
                if ($tmp3568.value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp3570 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, list3523, intf3557);
                    iterator3569 = $tmp3570;
                    panda$core$Object* $tmp3571 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
                    panda$core$Object* $tmp3572 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 2 }));
                    org$pandalanguage$pandac$IRNode* $tmp3573 = org$pandalanguage$pandac$Compiler$compileIteratorFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->position, ((panda$core$String*) p_f->payload), ((org$pandalanguage$pandac$ASTNode*) $tmp3571), iterator3569, ((org$pandalanguage$pandac$ASTNode*) $tmp3572));
                    result3529 = $tmp3573;
                    found3543 = ((panda$core$Bit) { true });
                    goto $l3551;
                }
                }
                panda$core$Bit $tmp3575 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(intf3557->typeKind, ((panda$core$Int64) { 21 }));
                bool $tmp3574 = $tmp3575.value;
                if (!$tmp3574) goto $l3576;
                panda$core$Object* $tmp3577 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(intf3557->subtypes, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp3578 = org$pandalanguage$pandac$Type$Iterable$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp3579 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3577), $tmp3578);
                $tmp3574 = $tmp3579.value;
                $l3576:;
                panda$core$Bit $tmp3580 = { $tmp3574 };
                if ($tmp3580.value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp3582 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, list3523, intf3557);
                    iterable3581 = $tmp3582;
                    panda$collections$Array* $tmp3585 = (panda$collections$Array*) malloc(40);
                    $tmp3585->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp3585->refCount.value = 1;
                    panda$collections$Array$init($tmp3585);
                    org$pandalanguage$pandac$IRNode* $tmp3587 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, iterable3581, &$s3584, ((panda$collections$ListView*) $tmp3585));
                    iterator3583 = $tmp3587;
                    panda$core$Object* $tmp3588 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
                    panda$core$Object* $tmp3589 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 2 }));
                    org$pandalanguage$pandac$IRNode* $tmp3590 = org$pandalanguage$pandac$Compiler$compileIteratorFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->position, ((panda$core$String*) p_f->payload), ((org$pandalanguage$pandac$ASTNode*) $tmp3588), iterator3583, ((org$pandalanguage$pandac$ASTNode*) $tmp3589));
                    result3529 = $tmp3590;
                    found3543 = ((panda$core$Bit) { true });
                    goto $l3551;
                }
                }
            }
            goto $l3550;
            $l3551:;
        }
        panda$core$Bit $tmp3591 = panda$core$Bit$$NOT$R$panda$core$Bit(found3543);
        if ($tmp3591.value) {
        {
            panda$core$String* $tmp3593 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3592, ((panda$core$Object*) list3523->type));
            panda$core$String* $tmp3595 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3593, &$s3594);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, list3523->position, $tmp3595);
            return NULL;
        }
        }
    }
    }
    panda$core$Object* $tmp3596 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(symbols3526->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp3596);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
    return result3529;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileWhile$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_w) {
    org$pandalanguage$pandac$IRNode* test3600;
    org$pandalanguage$pandac$IRNode* stmt3605;
    panda$collections$Array* children3608;
    panda$core$Bit $tmp3597 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_w->kind, ((panda$core$Int64) { 121 }));
    PANDA_ASSERT($tmp3597.value);
    panda$core$Int64 $tmp3598 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Bit $tmp3599 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3598, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp3599.value);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loops, ((panda$core$Object*) ((panda$core$String*) p_w->payload)));
    panda$core$Object* $tmp3601 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3602 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3601));
    org$pandalanguage$pandac$Type* $tmp3603 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp3604 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3602, $tmp3603);
    test3600 = $tmp3604;
    if (((panda$core$Bit) { test3600 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$core$Object* $tmp3606 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp3607 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3606));
    stmt3605 = $tmp3607;
    if (((panda$core$Bit) { stmt3605 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$collections$Array* $tmp3609 = (panda$collections$Array*) malloc(40);
    $tmp3609->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3609->refCount.value = 1;
    panda$collections$Array$init$panda$core$Int64($tmp3609, ((panda$core$Int64) { 2 }));
    children3608 = $tmp3609;
    panda$collections$Array$add$panda$collections$Array$T(children3608, ((panda$core$Object*) test3600));
    panda$collections$Array$add$panda$collections$Array$T(children3608, ((panda$core$Object*) stmt3605));
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
    org$pandalanguage$pandac$IRNode* $tmp3611 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3611->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3611->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3611, ((panda$core$Int64) { 1013 }), p_w->position, p_w->payload, ((panda$collections$ListView*) children3608));
    return $tmp3611;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileDo$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_d) {
    org$pandalanguage$pandac$IRNode* stmt3616;
    org$pandalanguage$pandac$IRNode* test3619;
    panda$collections$Array* children3624;
    panda$core$Bit $tmp3613 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_d->kind, ((panda$core$Int64) { 120 }));
    PANDA_ASSERT($tmp3613.value);
    panda$core$Int64 $tmp3614 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp3615 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3614, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp3615.value);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loops, ((panda$core$Object*) ((panda$core$String*) p_d->payload)));
    panda$core$Object* $tmp3617 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3618 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3617));
    stmt3616 = $tmp3618;
    if (((panda$core$Bit) { stmt3616 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$core$Object* $tmp3620 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp3621 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3620));
    org$pandalanguage$pandac$Type* $tmp3622 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp3623 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3621, $tmp3622);
    test3619 = $tmp3623;
    if (((panda$core$Bit) { test3619 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$collections$Array* $tmp3625 = (panda$collections$Array*) malloc(40);
    $tmp3625->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3625->refCount.value = 1;
    panda$collections$Array$init$panda$core$Int64($tmp3625, ((panda$core$Int64) { 2 }));
    children3624 = $tmp3625;
    panda$collections$Array$add$panda$collections$Array$T(children3624, ((panda$core$Object*) stmt3616));
    panda$collections$Array$add$panda$collections$Array$T(children3624, ((panda$core$Object*) test3619));
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
    org$pandalanguage$pandac$IRNode* $tmp3627 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3627->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3627->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3627, ((panda$core$Int64) { 1014 }), p_d->position, p_d->payload, ((panda$collections$ListView*) children3624));
    return $tmp3627;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileLoop$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_l) {
    org$pandalanguage$pandac$IRNode* stmt3632;
    panda$collections$Array* children3635;
    panda$core$Bit $tmp3629 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_l->kind, ((panda$core$Int64) { 122 }));
    PANDA_ASSERT($tmp3629.value);
    panda$core$Int64 $tmp3630 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_l->children);
    panda$core$Bit $tmp3631 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3630, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3631.value);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loops, ((panda$core$Object*) ((panda$core$String*) p_l->payload)));
    panda$core$Object* $tmp3633 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_l->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3634 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3633));
    stmt3632 = $tmp3634;
    if (((panda$core$Bit) { stmt3632 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$collections$Array* $tmp3636 = (panda$collections$Array*) malloc(40);
    $tmp3636->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3636->refCount.value = 1;
    panda$collections$Array$init$panda$core$Int64($tmp3636, ((panda$core$Int64) { 1 }));
    children3635 = $tmp3636;
    panda$collections$Array$add$panda$collections$Array$T(children3635, ((panda$core$Object*) stmt3632));
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
    org$pandalanguage$pandac$IRNode* $tmp3638 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3638->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3638->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3638, ((panda$core$Int64) { 1015 }), p_l->position, p_l->payload, ((panda$collections$ListView*) children3635));
    return $tmp3638;
}
org$pandalanguage$pandac$Compiler$CompileTargetResult* org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_t, panda$core$Int64 p_kind, org$pandalanguage$pandac$IRNode* p_rawValue, org$pandalanguage$pandac$Type* p_valueType) {
    org$pandalanguage$pandac$IRNode* value3640;
    org$pandalanguage$pandac$Type* type3644;
    org$pandalanguage$pandac$Variable* v3660;
    value3640 = p_rawValue;
    bool $tmp3641 = ((panda$core$Bit) { value3640 == NULL }).value;
    if ($tmp3641) goto $l3642;
    $tmp3641 = ((panda$core$Bit) { p_valueType == NULL }).value;
    $l3642:;
    panda$core$Bit $tmp3643 = { $tmp3641 };
    PANDA_ASSERT($tmp3643.value);
    switch (p_t->kind.value) {
        case 106:
        {
            bool $tmp3645 = ((panda$core$Bit) { p_t->children != NULL }).value;
            if (!$tmp3645) goto $l3646;
            panda$core$Int64 $tmp3647 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_t->children);
            panda$core$Bit $tmp3648 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp3647, ((panda$core$Int64) { 0 }));
            $tmp3645 = $tmp3648.value;
            $l3646:;
            panda$core$Bit $tmp3649 = { $tmp3645 };
            if ($tmp3649.value) {
            {
                panda$core$Int64 $tmp3650 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_t->children);
                panda$core$Bit $tmp3651 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3650, ((panda$core$Int64) { 1 }));
                PANDA_ASSERT($tmp3651.value);
                panda$core$Object* $tmp3652 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp3653 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, ((org$pandalanguage$pandac$ASTNode*) $tmp3652));
                org$pandalanguage$pandac$Type* $tmp3654 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, $tmp3653);
                type3644 = $tmp3654;
            }
            }
            else {
            if (((panda$core$Bit) { value3640 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp3655 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, value3640);
                value3640 = $tmp3655;
                if (((panda$core$Bit) { value3640 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$Type* $tmp3656 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, value3640);
                type3644 = $tmp3656;
            }
            }
            else {
            if (((panda$core$Bit) { p_valueType != NULL }).value) {
            {
                type3644 = p_valueType;
            }
            }
            else {
            {
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_t->position, &$s3657);
                return NULL;
            }
            }
            }
            }
            if (((panda$core$Bit) { value3640 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp3658 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, value3640, type3644);
                value3640 = $tmp3658;
                if (((panda$core$Bit) { value3640 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$core$Bit $tmp3659 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(value3640->type, type3644);
                PANDA_ASSERT($tmp3659.value);
            }
            }
            org$pandalanguage$pandac$Variable* $tmp3661 = (org$pandalanguage$pandac$Variable*) malloc(88);
            $tmp3661->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
            $tmp3661->refCount.value = 1;
            org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type($tmp3661, p_t->position, p_kind, ((panda$core$String*) p_t->payload), type3644);
            v3660 = $tmp3661;
            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->symbolTable, ((org$pandalanguage$pandac$Symbol*) v3660));
            org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp3663 = (org$pandalanguage$pandac$Compiler$CompileTargetResult*) malloc(32);
            $tmp3663->$class = (panda$core$Class*) &org$pandalanguage$pandac$Compiler$CompileTargetResult$class;
            $tmp3663->refCount.value = 1;
            org$pandalanguage$pandac$IRNode* $tmp3665 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3665->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3665->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3665, ((panda$core$Int64) { 1016 }), ((org$pandalanguage$pandac$Symbol*) v3660)->position, v3660->type, v3660);
            org$pandalanguage$pandac$Compiler$CompileTargetResult$init$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q($tmp3663, $tmp3665, value3640);
            return $tmp3663;
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
    org$pandalanguage$pandac$IRNode* value3675;
    org$pandalanguage$pandac$Compiler$CompileTargetResult* target3680;
    panda$collections$Array* children3683;
    org$pandalanguage$pandac$Variable* v3687;
    panda$core$Bit $tmp3667 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_d->kind, ((panda$core$Int64) { 129 }));
    PANDA_ASSERT($tmp3667.value);
    panda$core$Int64 $tmp3669 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp3670 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3669, ((panda$core$Int64) { 1 }));
    bool $tmp3668 = $tmp3670.value;
    if ($tmp3668) goto $l3671;
    panda$core$Int64 $tmp3672 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp3673 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3672, ((panda$core$Int64) { 2 }));
    $tmp3668 = $tmp3673.value;
    $l3671:;
    panda$core$Bit $tmp3674 = { $tmp3668 };
    PANDA_ASSERT($tmp3674.value);
    panda$core$Int64 $tmp3676 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp3677 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3676, ((panda$core$Int64) { 2 }));
    if ($tmp3677.value) {
    {
        panda$core$Object* $tmp3678 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$IRNode* $tmp3679 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3678));
        value3675 = $tmp3679;
        if (((panda$core$Bit) { value3675 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    else {
    {
        value3675 = NULL;
    }
    }
    panda$core$Object* $tmp3681 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp3682 = org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3681), p_varKind, value3675, NULL);
    target3680 = $tmp3682;
    if (((panda$core$Bit) { target3680 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3684 = (panda$collections$Array*) malloc(40);
    $tmp3684->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3684->refCount.value = 1;
    panda$collections$Array$init($tmp3684);
    children3683 = $tmp3684;
    panda$collections$Array$add$panda$collections$Array$T(children3683, ((panda$core$Object*) target3680->target));
    if (((panda$core$Bit) { target3680->value != NULL }).value) {
    {
        panda$core$Bit $tmp3686 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(target3680->target->kind, ((panda$core$Int64) { 1016 }));
        PANDA_ASSERT($tmp3686.value);
        v3687 = ((org$pandalanguage$pandac$Variable*) target3680->target->payload);
        v3687->initialValue = target3680->value;
        panda$collections$Array$add$panda$collections$Array$T(children3683, ((panda$core$Object*) target3680->value));
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3688 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3688->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3688->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3688, ((panda$core$Int64) { 1021 }), p_d->position, ((panda$collections$ListView*) children3683));
    return $tmp3688;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBreak$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_b) {
    panda$core$Bit found3691;
    panda$collections$Iterator* label$Iter3692;
    panda$core$String* label3704;
    panda$core$Bit $tmp3690 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_b->kind, ((panda$core$Int64) { 134 }));
    PANDA_ASSERT($tmp3690.value);
    if (((panda$core$Bit) { p_b->payload != NULL }).value) {
    {
        found3691 = ((panda$core$Bit) { false });
        {
            ITable* $tmp3693 = ((panda$collections$Iterable*) self->loops)->$class->itable;
            while ($tmp3693->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3693 = $tmp3693->next;
            }
            $fn3695 $tmp3694 = $tmp3693->methods[0];
            panda$collections$Iterator* $tmp3696 = $tmp3694(((panda$collections$Iterable*) self->loops));
            label$Iter3692 = $tmp3696;
            $l3697:;
            ITable* $tmp3699 = label$Iter3692->$class->itable;
            while ($tmp3699->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3699 = $tmp3699->next;
            }
            $fn3701 $tmp3700 = $tmp3699->methods[0];
            panda$core$Bit $tmp3702 = $tmp3700(label$Iter3692);
            panda$core$Bit $tmp3703 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3702);
            if (!$tmp3703.value) goto $l3698;
            {
                ITable* $tmp3705 = label$Iter3692->$class->itable;
                while ($tmp3705->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3705 = $tmp3705->next;
                }
                $fn3707 $tmp3706 = $tmp3705->methods[1];
                panda$core$Object* $tmp3708 = $tmp3706(label$Iter3692);
                label3704 = ((panda$core$String*) $tmp3708);
                bool $tmp3709 = ((panda$core$Bit) { label3704 != NULL }).value;
                if (!$tmp3709) goto $l3710;
                panda$core$Bit $tmp3711 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(label3704, ((panda$core$String*) p_b->payload));
                $tmp3709 = $tmp3711.value;
                $l3710:;
                panda$core$Bit $tmp3712 = { $tmp3709 };
                if ($tmp3712.value) {
                {
                    found3691 = ((panda$core$Bit) { true });
                    goto $l3698;
                }
                }
            }
            goto $l3697;
            $l3698:;
        }
        panda$core$Bit $tmp3713 = panda$core$Bit$$NOT$R$panda$core$Bit(found3691);
        if ($tmp3713.value) {
        {
            panda$core$String* $tmp3715 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3714, p_b->payload);
            panda$core$String* $tmp3717 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3715, &$s3716);
            panda$core$String* $tmp3719 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3718, p_b->payload);
            panda$core$String* $tmp3721 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3719, &$s3720);
            panda$core$String* $tmp3722 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3717, $tmp3721);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_b->position, $tmp3722);
        }
        }
    }
    }
    else {
    panda$core$Int64 $tmp3723 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loops);
    panda$core$Bit $tmp3724 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3723, ((panda$core$Int64) { 0 }));
    if ($tmp3724.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_b->position, &$s3725);
    }
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3726 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3726->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3726->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp3726, ((panda$core$Int64) { 1006 }), p_b->position, ((panda$core$String*) p_b->payload));
    return $tmp3726;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileContinue$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_c) {
    panda$core$Bit found3729;
    panda$collections$Iterator* label$Iter3730;
    panda$core$String* label3742;
    panda$core$Bit $tmp3728 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_c->kind, ((panda$core$Int64) { 135 }));
    PANDA_ASSERT($tmp3728.value);
    if (((panda$core$Bit) { p_c->payload != NULL }).value) {
    {
        found3729 = ((panda$core$Bit) { false });
        {
            ITable* $tmp3731 = ((panda$collections$Iterable*) self->loops)->$class->itable;
            while ($tmp3731->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3731 = $tmp3731->next;
            }
            $fn3733 $tmp3732 = $tmp3731->methods[0];
            panda$collections$Iterator* $tmp3734 = $tmp3732(((panda$collections$Iterable*) self->loops));
            label$Iter3730 = $tmp3734;
            $l3735:;
            ITable* $tmp3737 = label$Iter3730->$class->itable;
            while ($tmp3737->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3737 = $tmp3737->next;
            }
            $fn3739 $tmp3738 = $tmp3737->methods[0];
            panda$core$Bit $tmp3740 = $tmp3738(label$Iter3730);
            panda$core$Bit $tmp3741 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3740);
            if (!$tmp3741.value) goto $l3736;
            {
                ITable* $tmp3743 = label$Iter3730->$class->itable;
                while ($tmp3743->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3743 = $tmp3743->next;
                }
                $fn3745 $tmp3744 = $tmp3743->methods[1];
                panda$core$Object* $tmp3746 = $tmp3744(label$Iter3730);
                label3742 = ((panda$core$String*) $tmp3746);
                bool $tmp3747 = ((panda$core$Bit) { label3742 != NULL }).value;
                if (!$tmp3747) goto $l3748;
                panda$core$Bit $tmp3749 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(label3742, ((panda$core$String*) p_c->payload));
                $tmp3747 = $tmp3749.value;
                $l3748:;
                panda$core$Bit $tmp3750 = { $tmp3747 };
                if ($tmp3750.value) {
                {
                    found3729 = ((panda$core$Bit) { true });
                    goto $l3736;
                }
                }
            }
            goto $l3735;
            $l3736:;
        }
        panda$core$Bit $tmp3751 = panda$core$Bit$$NOT$R$panda$core$Bit(found3729);
        if ($tmp3751.value) {
        {
            panda$core$String* $tmp3753 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3752, p_c->payload);
            panda$core$String* $tmp3755 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3753, &$s3754);
            panda$core$String* $tmp3757 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3756, p_c->payload);
            panda$core$String* $tmp3759 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3757, &$s3758);
            panda$core$String* $tmp3760 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3755, $tmp3759);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_c->position, $tmp3760);
        }
        }
    }
    }
    else {
    panda$core$Int64 $tmp3761 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loops);
    panda$core$Bit $tmp3762 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3761, ((panda$core$Int64) { 0 }));
    if ($tmp3762.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_c->position, &$s3763);
    }
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3764 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3764->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3764->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp3764, ((panda$core$Int64) { 1007 }), p_c->position, ((panda$core$String*) p_c->payload));
    return $tmp3764;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileReturn$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_r) {
    org$pandalanguage$pandac$IRNode* value3778;
    panda$collections$Array* children3783;
    panda$core$Bit $tmp3766 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_r->kind, ((panda$core$Int64) { 136 }));
    PANDA_ASSERT($tmp3766.value);
    bool $tmp3767 = ((panda$core$Bit) { p_r->children != NULL }).value;
    if (!$tmp3767) goto $l3768;
    panda$core$Int64 $tmp3769 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_r->children);
    panda$core$Bit $tmp3770 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3769, ((panda$core$Int64) { 0 }));
    $tmp3767 = $tmp3770.value;
    $l3768:;
    panda$core$Bit $tmp3771 = { $tmp3767 };
    if ($tmp3771.value) {
    {
        panda$core$Int64 $tmp3772 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_r->children);
        panda$core$Bit $tmp3773 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3772, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp3773.value);
        panda$core$Object* $tmp3774 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
        org$pandalanguage$pandac$Type* $tmp3775 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp3776 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp3774)->returnType, $tmp3775);
        if ($tmp3776.value) {
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_r->position, &$s3777);
            return NULL;
        }
        }
        panda$core$Object* $tmp3779 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp3780 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3779));
        panda$core$Object* $tmp3781 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
        org$pandalanguage$pandac$IRNode* $tmp3782 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3780, ((org$pandalanguage$pandac$MethodDecl*) $tmp3781)->returnType);
        value3778 = $tmp3782;
        if (((panda$core$Bit) { value3778 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp3784 = (panda$collections$Array*) malloc(40);
        $tmp3784->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp3784->refCount.value = 1;
        panda$collections$Array$init($tmp3784);
        children3783 = $tmp3784;
        panda$collections$Array$add$panda$collections$Array$T(children3783, ((panda$core$Object*) value3778));
        org$pandalanguage$pandac$IRNode* $tmp3786 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3786->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3786->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3786, ((panda$core$Int64) { 1008 }), p_r->position, ((panda$collections$ListView*) children3783));
        return $tmp3786;
    }
    }
    panda$core$Object* $tmp3788 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
    org$pandalanguage$pandac$Type* $tmp3789 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp3790 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp3788)->returnType, $tmp3789);
    if ($tmp3790.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_r->position, &$s3791);
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3792 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3792->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3792->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp3792, ((panda$core$Int64) { 1008 }), p_r->position);
    return $tmp3792;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileAssert$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_a) {
    org$pandalanguage$pandac$IRNode* test3802;
    org$pandalanguage$pandac$ClassDecl* bit3807;
    org$pandalanguage$pandac$Symbol* value3810;
    panda$collections$Array* fieldChildren3813;
    panda$collections$Array* children3819;
    org$pandalanguage$pandac$IRNode* msg3824;
    panda$core$Bit $tmp3794 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_a->kind, ((panda$core$Int64) { 123 }));
    PANDA_ASSERT($tmp3794.value);
    panda$core$Int64 $tmp3796 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp3797 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3796, ((panda$core$Int64) { 1 }));
    bool $tmp3795 = $tmp3797.value;
    if ($tmp3795) goto $l3798;
    panda$core$Int64 $tmp3799 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp3800 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3799, ((panda$core$Int64) { 2 }));
    $tmp3795 = $tmp3800.value;
    $l3798:;
    panda$core$Bit $tmp3801 = { $tmp3795 };
    PANDA_ASSERT($tmp3801.value);
    panda$core$Object* $tmp3803 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_a->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3804 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3803));
    test3802 = $tmp3804;
    if (((panda$core$Bit) { test3802 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$Type* $tmp3805 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp3806 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, test3802, $tmp3805);
    test3802 = $tmp3806;
    if (((panda$core$Bit) { test3802 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$Type* $tmp3808 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$ClassDecl* $tmp3809 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, $tmp3808);
    bit3807 = $tmp3809;
    PANDA_ASSERT(((panda$core$Bit) { bit3807 != NULL }).value);
    org$pandalanguage$pandac$Symbol* $tmp3812 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(bit3807->symbolTable, &$s3811);
    value3810 = $tmp3812;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self, ((org$pandalanguage$pandac$FieldDecl*) value3810));
    panda$collections$Array* $tmp3814 = (panda$collections$Array*) malloc(40);
    $tmp3814->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3814->refCount.value = 1;
    panda$collections$Array$init($tmp3814);
    fieldChildren3813 = $tmp3814;
    panda$collections$Array$add$panda$collections$Array$T(fieldChildren3813, ((panda$core$Object*) test3802));
    org$pandalanguage$pandac$IRNode* $tmp3816 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3816->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3816->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3818 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3816, ((panda$core$Int64) { 1026 }), p_a->position, $tmp3818, ((panda$core$Object*) value3810), ((panda$collections$ListView*) fieldChildren3813));
    test3802 = $tmp3816;
    panda$collections$Array* $tmp3820 = (panda$collections$Array*) malloc(40);
    $tmp3820->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3820->refCount.value = 1;
    panda$collections$Array$init($tmp3820);
    children3819 = $tmp3820;
    panda$collections$Array$add$panda$collections$Array$T(children3819, ((panda$core$Object*) test3802));
    panda$core$Int64 $tmp3822 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp3823 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3822, ((panda$core$Int64) { 2 }));
    if ($tmp3823.value) {
    {
        panda$core$Object* $tmp3825 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_a->children, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$IRNode* $tmp3826 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3825));
        msg3824 = $tmp3826;
        if (((panda$core$Bit) { msg3824 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$Type* $tmp3827 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp3828 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, msg3824, $tmp3827);
        msg3824 = $tmp3828;
        if (((panda$core$Bit) { msg3824 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children3819, ((panda$core$Object*) msg3824));
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3829 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3829->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3829->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3829, ((panda$core$Int64) { 1034 }), p_a->position, ((panda$collections$ListView*) children3819));
    return $tmp3829;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileVar$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_v) {
    panda$core$Int64 nodeKind3844;
    panda$core$Int64 varKind3845;
    panda$collections$Array* decls3846;
    panda$collections$Iterator* astDecl$Iter3849;
    org$pandalanguage$pandac$ASTNode* astDecl3861;
    org$pandalanguage$pandac$IRNode* decl3866;
    panda$core$Bit $tmp3834 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 130 }));
    bool $tmp3833 = $tmp3834.value;
    if ($tmp3833) goto $l3835;
    panda$core$Bit $tmp3836 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 131 }));
    $tmp3833 = $tmp3836.value;
    $l3835:;
    panda$core$Bit $tmp3837 = { $tmp3833 };
    bool $tmp3832 = $tmp3837.value;
    if ($tmp3832) goto $l3838;
    panda$core$Bit $tmp3839 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 133 }));
    $tmp3832 = $tmp3839.value;
    $l3838:;
    panda$core$Bit $tmp3840 = { $tmp3832 };
    bool $tmp3831 = $tmp3840.value;
    if ($tmp3831) goto $l3841;
    panda$core$Bit $tmp3842 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 132 }));
    $tmp3831 = $tmp3842.value;
    $l3841:;
    panda$core$Bit $tmp3843 = { $tmp3831 };
    PANDA_ASSERT($tmp3843.value);
    switch (p_v->kind.value) {
        case 130:
        {
            nodeKind3844 = ((panda$core$Int64) { 1017 });
            varKind3845 = ((panda$core$Int64) { 10000 });
        }
        break;
        case 131:
        {
            nodeKind3844 = ((panda$core$Int64) { 1018 });
            varKind3845 = ((panda$core$Int64) { 10001 });
        }
        break;
        case 132:
        {
            nodeKind3844 = ((panda$core$Int64) { 1019 });
            varKind3845 = ((panda$core$Int64) { 10002 });
        }
        break;
        case 133:
        {
            nodeKind3844 = ((panda$core$Int64) { 1020 });
            varKind3845 = ((panda$core$Int64) { 10003 });
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
    panda$collections$Array* $tmp3847 = (panda$collections$Array*) malloc(40);
    $tmp3847->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3847->refCount.value = 1;
    panda$collections$Array$init($tmp3847);
    decls3846 = $tmp3847;
    {
        ITable* $tmp3850 = ((panda$collections$Iterable*) p_v->children)->$class->itable;
        while ($tmp3850->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3850 = $tmp3850->next;
        }
        $fn3852 $tmp3851 = $tmp3850->methods[0];
        panda$collections$Iterator* $tmp3853 = $tmp3851(((panda$collections$Iterable*) p_v->children));
        astDecl$Iter3849 = $tmp3853;
        $l3854:;
        ITable* $tmp3856 = astDecl$Iter3849->$class->itable;
        while ($tmp3856->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3856 = $tmp3856->next;
        }
        $fn3858 $tmp3857 = $tmp3856->methods[0];
        panda$core$Bit $tmp3859 = $tmp3857(astDecl$Iter3849);
        panda$core$Bit $tmp3860 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3859);
        if (!$tmp3860.value) goto $l3855;
        {
            ITable* $tmp3862 = astDecl$Iter3849->$class->itable;
            while ($tmp3862->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3862 = $tmp3862->next;
            }
            $fn3864 $tmp3863 = $tmp3862->methods[1];
            panda$core$Object* $tmp3865 = $tmp3863(astDecl$Iter3849);
            astDecl3861 = ((org$pandalanguage$pandac$ASTNode*) $tmp3865);
            org$pandalanguage$pandac$IRNode* $tmp3867 = org$pandalanguage$pandac$Compiler$compileDeclaration$org$pandalanguage$pandac$ASTNode$panda$core$Int64$R$org$pandalanguage$pandac$IRNode$Q(self, astDecl3861, varKind3845);
            decl3866 = $tmp3867;
            if (((panda$core$Bit) { decl3866 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(decls3846, ((panda$core$Object*) decl3866));
        }
        goto $l3854;
        $l3855:;
    }
    org$pandalanguage$pandac$IRNode* $tmp3868 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3868->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3868->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3868, nodeKind3844, p_v->position, ((panda$collections$ListView*) decls3846));
    return $tmp3868;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileWhenTest$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Variable* p_value, org$pandalanguage$pandac$ASTNode* p_test) {
    org$pandalanguage$pandac$IRNode* target3870;
    panda$collections$Array* callChildren3873;
    org$pandalanguage$pandac$IRNode* testValue3876;
    org$pandalanguage$pandac$IRNode* $tmp3871 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3871->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3871->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3871, ((panda$core$Int64) { 1016 }), p_test->position, p_value->type, p_value);
    target3870 = $tmp3871;
    panda$collections$Array* $tmp3874 = (panda$collections$Array*) malloc(40);
    $tmp3874->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3874->refCount.value = 1;
    panda$collections$Array$init($tmp3874);
    callChildren3873 = $tmp3874;
    org$pandalanguage$pandac$IRNode* $tmp3877 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_test);
    testValue3876 = $tmp3877;
    if (((panda$core$Bit) { testValue3876 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(callChildren3873, ((panda$core$Object*) testValue3876));
    org$pandalanguage$pandac$IRNode* $tmp3879 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target3870, &$s3878, ((panda$collections$ListView*) callChildren3873));
    return $tmp3879;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileChainedIfWhen$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Variable* p_value, org$pandalanguage$pandac$ASTNode* p_w) {
    org$pandalanguage$pandac$IRNode* test3888;
    panda$core$Range$LTpanda$core$Int64$GT $tmp3892;
    org$pandalanguage$pandac$IRNode* nextTest3908;
    panda$collections$Array* callChildren3912;
    panda$collections$Array* statements3925;
    panda$core$Range$LTpanda$core$Int64$GT $tmp3928;
    org$pandalanguage$pandac$IRNode* statement3943;
    panda$collections$Array* children3953;
    panda$core$Bit $tmp3880 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_w->kind, ((panda$core$Int64) { 124 }));
    PANDA_ASSERT($tmp3880.value);
    panda$core$Int64 $tmp3881 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Bit $tmp3882 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp3881, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3882.value);
    panda$core$Object* $tmp3883 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp3884 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp3883)->kind, ((panda$core$Int64) { 128 }));
    PANDA_ASSERT($tmp3884.value);
    panda$core$Object* $tmp3885 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Int64 $tmp3886 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$ASTNode*) $tmp3885)->children);
    panda$core$Bit $tmp3887 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp3886, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3887.value);
    panda$core$Object* $tmp3889 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp3890 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$ASTNode*) $tmp3889)->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3891 = org$pandalanguage$pandac$Compiler$compileWhenTest$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_value, ((org$pandalanguage$pandac$ASTNode*) $tmp3890));
    test3888 = $tmp3891;
    if (((panda$core$Bit) { test3888 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Object* $tmp3893 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Int64 $tmp3894 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$ASTNode*) $tmp3893)->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp3892, ((panda$core$Int64) { 1 }), $tmp3894, ((panda$core$Bit) { false }));
    int64_t $tmp3896 = $tmp3892.min.value;
    panda$core$Int64 i3895 = { $tmp3896 };
    int64_t $tmp3898 = $tmp3892.max.value;
    bool $tmp3899 = $tmp3892.inclusive.value;
    if ($tmp3899) goto $l3906; else goto $l3907;
    $l3906:;
    if ($tmp3896 <= $tmp3898) goto $l3900; else goto $l3902;
    $l3907:;
    if ($tmp3896 < $tmp3898) goto $l3900; else goto $l3902;
    $l3900:;
    {
        panda$core$Object* $tmp3909 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3910 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$ASTNode*) $tmp3909)->children, i3895);
        org$pandalanguage$pandac$IRNode* $tmp3911 = org$pandalanguage$pandac$Compiler$compileWhenTest$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_value, ((org$pandalanguage$pandac$ASTNode*) $tmp3910));
        nextTest3908 = $tmp3911;
        if (((panda$core$Bit) { nextTest3908 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp3913 = (panda$collections$Array*) malloc(40);
        $tmp3913->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp3913->refCount.value = 1;
        panda$collections$Array$init($tmp3913);
        callChildren3912 = $tmp3913;
        panda$collections$Array$add$panda$collections$Array$T(callChildren3912, ((panda$core$Object*) nextTest3908));
        org$pandalanguage$pandac$IRNode* $tmp3916 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, test3888, &$s3915, ((panda$collections$ListView*) callChildren3912));
        test3888 = $tmp3916;
        if (((panda$core$Bit) { test3888 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    $l3903:;
    int64_t $tmp3918 = $tmp3898 - i3895.value;
    if ($tmp3899) goto $l3919; else goto $l3920;
    $l3919:;
    if ($tmp3918 >= 1) goto $l3917; else goto $l3902;
    $l3920:;
    if ($tmp3918 > 1) goto $l3917; else goto $l3902;
    $l3917:;
    i3895.value += 1;
    goto $l3900;
    $l3902:;
    org$pandalanguage$pandac$SymbolTable* $tmp3923 = (org$pandalanguage$pandac$SymbolTable*) malloc(48);
    $tmp3923->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp3923->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp3923, self->symbolTable);
    self->symbolTable = $tmp3923;
    panda$collections$Array* $tmp3926 = (panda$collections$Array*) malloc(40);
    $tmp3926->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3926->refCount.value = 1;
    panda$collections$Array$init($tmp3926);
    statements3925 = $tmp3926;
    panda$core$Int64 $tmp3929 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp3928, ((panda$core$Int64) { 1 }), $tmp3929, ((panda$core$Bit) { false }));
    int64_t $tmp3931 = $tmp3928.min.value;
    panda$core$Int64 i3930 = { $tmp3931 };
    int64_t $tmp3933 = $tmp3928.max.value;
    bool $tmp3934 = $tmp3928.inclusive.value;
    if ($tmp3934) goto $l3941; else goto $l3942;
    $l3941:;
    if ($tmp3931 <= $tmp3933) goto $l3935; else goto $l3937;
    $l3942:;
    if ($tmp3931 < $tmp3933) goto $l3935; else goto $l3937;
    $l3935:;
    {
        panda$core$Object* $tmp3944 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, i3930);
        org$pandalanguage$pandac$IRNode* $tmp3945 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3944));
        statement3943 = $tmp3945;
        if (((panda$core$Bit) { statement3943 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(statements3925, ((panda$core$Object*) statement3943));
    }
    $l3938:;
    int64_t $tmp3947 = $tmp3933 - i3930.value;
    if ($tmp3934) goto $l3948; else goto $l3949;
    $l3948:;
    if ($tmp3947 >= 1) goto $l3946; else goto $l3937;
    $l3949:;
    if ($tmp3947 > 1) goto $l3946; else goto $l3937;
    $l3946:;
    i3930.value += 1;
    goto $l3935;
    $l3937:;
    panda$core$Object* $tmp3952 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->symbolTable->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp3952);
    panda$collections$Array* $tmp3954 = (panda$collections$Array*) malloc(40);
    $tmp3954->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3954->refCount.value = 1;
    panda$collections$Array$init($tmp3954);
    children3953 = $tmp3954;
    panda$collections$Array$add$panda$collections$Array$T(children3953, ((panda$core$Object*) test3888));
    org$pandalanguage$pandac$IRNode* $tmp3956 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3956->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3956->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3956, ((panda$core$Int64) { 1000 }), p_w->position, ((panda$collections$ListView*) statements3925));
    panda$collections$Array$add$panda$collections$Array$T(children3953, ((panda$core$Object*) $tmp3956));
    org$pandalanguage$pandac$IRNode* $tmp3958 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3958->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3958->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3958, ((panda$core$Int64) { 1012 }), p_w->position, ((panda$collections$ListView*) children3953));
    return $tmp3958;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileChainedIfMatch$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_m, org$pandalanguage$pandac$IRNode* p_value) {
    panda$collections$Array* children3960;
    org$pandalanguage$pandac$Variable* valueVar3963;
    panda$collections$Array* declChildren3973;
    panda$collections$Array* varChildren3978;
    panda$core$Range$LTpanda$core$Int64$GT $tmp3985;
    org$pandalanguage$pandac$ASTNode* c4000;
    org$pandalanguage$pandac$IRNode* w4002;
    panda$collections$Array* statements4004;
    panda$collections$Iterator* astStatement$Iter4007;
    org$pandalanguage$pandac$ASTNode* astStatement4019;
    org$pandalanguage$pandac$IRNode* stmt4024;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp4034;
    panda$collections$Array* newChildren4062;
    panda$collections$Array* $tmp3961 = (panda$collections$Array*) malloc(40);
    $tmp3961->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3961->refCount.value = 1;
    panda$collections$Array$init($tmp3961);
    children3960 = $tmp3961;
    org$pandalanguage$pandac$Variable* $tmp3964 = (org$pandalanguage$pandac$Variable*) malloc(88);
    $tmp3964->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
    $tmp3964->refCount.value = 1;
    panda$core$String* $tmp3967 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3966, ((panda$core$Object*) wrap_panda$core$Int64(p_m->position.line)));
    panda$core$String* $tmp3969 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3967, &$s3968);
    panda$core$String* $tmp3970 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3969, ((panda$core$Object*) wrap_panda$core$Int64(p_m->position.column)));
    panda$core$String* $tmp3972 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3970, &$s3971);
    org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type($tmp3964, p_m->position, ((panda$core$Int64) { 10001 }), $tmp3972, p_value->type);
    valueVar3963 = $tmp3964;
    panda$collections$Array* $tmp3974 = (panda$collections$Array*) malloc(40);
    $tmp3974->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3974->refCount.value = 1;
    panda$collections$Array$init($tmp3974);
    declChildren3973 = $tmp3974;
    org$pandalanguage$pandac$IRNode* $tmp3976 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3976->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3976->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3976, ((panda$core$Int64) { 1016 }), p_value->position, valueVar3963->type, valueVar3963);
    panda$collections$Array$add$panda$collections$Array$T(declChildren3973, ((panda$core$Object*) $tmp3976));
    panda$collections$Array$add$panda$collections$Array$T(declChildren3973, ((panda$core$Object*) p_value));
    panda$collections$Array* $tmp3979 = (panda$collections$Array*) malloc(40);
    $tmp3979->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3979->refCount.value = 1;
    panda$collections$Array$init($tmp3979);
    varChildren3978 = $tmp3979;
    org$pandalanguage$pandac$IRNode* $tmp3981 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3981->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3981->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3981, ((panda$core$Int64) { 1021 }), ((org$pandalanguage$pandac$Symbol*) valueVar3963)->position, ((panda$collections$ListView*) declChildren3973));
    panda$collections$Array$add$panda$collections$Array$T(varChildren3978, ((panda$core$Object*) $tmp3981));
    org$pandalanguage$pandac$IRNode* $tmp3983 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3983->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3983->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3983, ((panda$core$Int64) { 1018 }), ((org$pandalanguage$pandac$Symbol*) valueVar3963)->position, ((panda$collections$ListView*) varChildren3978));
    panda$collections$Array$add$panda$collections$Array$T(children3960, ((panda$core$Object*) $tmp3983));
    panda$core$Int64 $tmp3986 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp3985, ((panda$core$Int64) { 1 }), $tmp3986, ((panda$core$Bit) { false }));
    int64_t $tmp3988 = $tmp3985.min.value;
    panda$core$Int64 i3987 = { $tmp3988 };
    int64_t $tmp3990 = $tmp3985.max.value;
    bool $tmp3991 = $tmp3985.inclusive.value;
    if ($tmp3991) goto $l3998; else goto $l3999;
    $l3998:;
    if ($tmp3988 <= $tmp3990) goto $l3992; else goto $l3994;
    $l3999:;
    if ($tmp3988 < $tmp3990) goto $l3992; else goto $l3994;
    $l3992:;
    {
        panda$core$Object* $tmp4001 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, i3987);
        c4000 = ((org$pandalanguage$pandac$ASTNode*) $tmp4001);
        switch (c4000->kind.value) {
            case 124:
            {
                org$pandalanguage$pandac$IRNode* $tmp4003 = org$pandalanguage$pandac$Compiler$compileChainedIfWhen$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, valueVar3963, c4000);
                w4002 = $tmp4003;
                if (((panda$core$Bit) { w4002 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children3960, ((panda$core$Object*) w4002));
            }
            break;
            case 127:
            {
                panda$collections$Array* $tmp4005 = (panda$collections$Array*) malloc(40);
                $tmp4005->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp4005->refCount.value = 1;
                panda$collections$Array$init($tmp4005);
                statements4004 = $tmp4005;
                {
                    ITable* $tmp4008 = ((panda$collections$Iterable*) c4000->children)->$class->itable;
                    while ($tmp4008->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp4008 = $tmp4008->next;
                    }
                    $fn4010 $tmp4009 = $tmp4008->methods[0];
                    panda$collections$Iterator* $tmp4011 = $tmp4009(((panda$collections$Iterable*) c4000->children));
                    astStatement$Iter4007 = $tmp4011;
                    $l4012:;
                    ITable* $tmp4014 = astStatement$Iter4007->$class->itable;
                    while ($tmp4014->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp4014 = $tmp4014->next;
                    }
                    $fn4016 $tmp4015 = $tmp4014->methods[0];
                    panda$core$Bit $tmp4017 = $tmp4015(astStatement$Iter4007);
                    panda$core$Bit $tmp4018 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4017);
                    if (!$tmp4018.value) goto $l4013;
                    {
                        ITable* $tmp4020 = astStatement$Iter4007->$class->itable;
                        while ($tmp4020->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp4020 = $tmp4020->next;
                        }
                        $fn4022 $tmp4021 = $tmp4020->methods[1];
                        panda$core$Object* $tmp4023 = $tmp4021(astStatement$Iter4007);
                        astStatement4019 = ((org$pandalanguage$pandac$ASTNode*) $tmp4023);
                        org$pandalanguage$pandac$IRNode* $tmp4025 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, astStatement4019);
                        stmt4024 = $tmp4025;
                        if (((panda$core$Bit) { stmt4024 == NULL }).value) {
                        {
                            return NULL;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(statements4004, ((panda$core$Object*) stmt4024));
                    }
                    goto $l4012;
                    $l4013:;
                }
                org$pandalanguage$pandac$IRNode* $tmp4026 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp4026->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp4026->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4026, ((panda$core$Int64) { 1000 }), c4000->position, ((panda$collections$ListView*) statements4004));
                panda$collections$Array$add$panda$collections$Array$T(children3960, ((panda$core$Object*) $tmp4026));
            }
            break;
            default:
            {
                PANDA_ASSERT(((panda$core$Bit) { false }).value);
            }
        }
    }
    $l3995:;
    int64_t $tmp4029 = $tmp3990 - i3987.value;
    if ($tmp3991) goto $l4030; else goto $l4031;
    $l4030:;
    if ($tmp4029 >= 1) goto $l4028; else goto $l3994;
    $l4031:;
    if ($tmp4029 > 1) goto $l4028; else goto $l3994;
    $l4028:;
    i3987.value += 1;
    goto $l3992;
    $l3994:;
    panda$core$Int64 $tmp4035 = panda$collections$Array$get_count$R$panda$core$Int64(children3960);
    panda$core$Int64 $tmp4036 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp4035, ((panda$core$Int64) { 1 }));
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp4034, $tmp4036, ((panda$core$Int64) { 1 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { false }));
    int64_t $tmp4038 = $tmp4034.start.value;
    panda$core$Int64 i4037 = { $tmp4038 };
    int64_t $tmp4040 = $tmp4034.end.value;
    int64_t $tmp4041 = $tmp4034.step.value;
    bool $tmp4042 = $tmp4034.inclusive.value;
    bool $tmp4049 = $tmp4041 > 0;
    if ($tmp4049) goto $l4047; else goto $l4048;
    $l4047:;
    if ($tmp4042) goto $l4050; else goto $l4051;
    $l4050:;
    if ($tmp4038 <= $tmp4040) goto $l4043; else goto $l4045;
    $l4051:;
    if ($tmp4038 < $tmp4040) goto $l4043; else goto $l4045;
    $l4048:;
    if ($tmp4042) goto $l4052; else goto $l4053;
    $l4052:;
    if ($tmp4038 >= $tmp4040) goto $l4043; else goto $l4045;
    $l4053:;
    if ($tmp4038 > $tmp4040) goto $l4043; else goto $l4045;
    $l4043:;
    {
        panda$core$Int64 $tmp4055 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4037, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp4056 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children3960, $tmp4055);
        panda$core$Bit $tmp4057 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp4056)->kind, ((panda$core$Int64) { 1012 }));
        PANDA_ASSERT($tmp4057.value);
        panda$core$Int64 $tmp4058 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4037, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp4059 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children3960, $tmp4058);
        panda$core$Int64 $tmp4060 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp4059)->children);
        panda$core$Bit $tmp4061 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4060, ((panda$core$Int64) { 2 }));
        PANDA_ASSERT($tmp4061.value);
        panda$collections$Array* $tmp4063 = (panda$collections$Array*) malloc(40);
        $tmp4063->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp4063->refCount.value = 1;
        panda$core$Int64 $tmp4065 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4037, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp4066 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children3960, $tmp4065);
        panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp4063, ((panda$collections$ListView*) ((org$pandalanguage$pandac$IRNode*) $tmp4066)->children));
        newChildren4062 = $tmp4063;
        panda$core$Object* $tmp4067 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children3960, i4037);
        panda$collections$Array$add$panda$collections$Array$T(newChildren4062, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp4067)));
        panda$core$Int64 $tmp4068 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4037, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$IRNode* $tmp4069 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp4069->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp4069->refCount.value = 1;
        panda$core$Int64 $tmp4071 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4037, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp4072 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children3960, $tmp4071);
        panda$core$Int64 $tmp4073 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4037, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp4074 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children3960, $tmp4073);
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4069, ((org$pandalanguage$pandac$IRNode*) $tmp4072)->kind, ((org$pandalanguage$pandac$IRNode*) $tmp4074)->position, ((panda$collections$ListView*) newChildren4062));
        panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(children3960, $tmp4068, ((panda$core$Object*) $tmp4069));
        panda$core$Int64 $tmp4075 = panda$collections$Array$get_count$R$panda$core$Int64(children3960);
        panda$core$Int64 $tmp4076 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp4075, ((panda$core$Int64) { 1 }));
        panda$collections$Array$removeIndex$panda$core$Int64(children3960, $tmp4076);
    }
    $l4046:;
    if ($tmp4049) goto $l4078; else goto $l4079;
    $l4078:;
    int64_t $tmp4080 = $tmp4040 - i4037.value;
    if ($tmp4042) goto $l4081; else goto $l4082;
    $l4081:;
    if ($tmp4080 >= $tmp4041) goto $l4077; else goto $l4045;
    $l4082:;
    if ($tmp4080 > $tmp4041) goto $l4077; else goto $l4045;
    $l4079:;
    int64_t $tmp4084 = i4037.value - $tmp4040;
    if ($tmp4042) goto $l4085; else goto $l4086;
    $l4085:;
    if ($tmp4084 >= -$tmp4041) goto $l4077; else goto $l4045;
    $l4086:;
    if ($tmp4084 > -$tmp4041) goto $l4077; else goto $l4045;
    $l4077:;
    i4037.value += $tmp4041;
    goto $l4043;
    $l4045:;
    org$pandalanguage$pandac$IRNode* $tmp4088 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4088->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4088->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4088, ((panda$core$Int64) { 1000 }), p_m->position, ((panda$collections$ListView*) children3960));
    return $tmp4088;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileWhen$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type, org$pandalanguage$pandac$ASTNode* p_w) {
    panda$collections$Array* children4098;
    panda$collections$Iterator* expr$Iter4101;
    org$pandalanguage$pandac$ASTNode* expr4114;
    org$pandalanguage$pandac$IRNode* compiled4119;
    panda$collections$Array* statements4124;
    panda$core$Range$LTpanda$core$Int64$GT $tmp4127;
    org$pandalanguage$pandac$IRNode* statement4142;
    panda$core$Bit $tmp4090 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_w->kind, ((panda$core$Int64) { 124 }));
    PANDA_ASSERT($tmp4090.value);
    panda$core$Int64 $tmp4091 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Bit $tmp4092 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp4091, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4092.value);
    panda$core$Object* $tmp4093 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp4094 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp4093)->kind, ((panda$core$Int64) { 128 }));
    PANDA_ASSERT($tmp4094.value);
    panda$core$Object* $tmp4095 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Int64 $tmp4096 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$ASTNode*) $tmp4095)->children);
    panda$core$Bit $tmp4097 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp4096, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4097.value);
    panda$collections$Array* $tmp4099 = (panda$collections$Array*) malloc(40);
    $tmp4099->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4099->refCount.value = 1;
    panda$collections$Array$init($tmp4099);
    children4098 = $tmp4099;
    {
        panda$core$Object* $tmp4102 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
        ITable* $tmp4103 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp4102)->children)->$class->itable;
        while ($tmp4103->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4103 = $tmp4103->next;
        }
        $fn4105 $tmp4104 = $tmp4103->methods[0];
        panda$collections$Iterator* $tmp4106 = $tmp4104(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp4102)->children));
        expr$Iter4101 = $tmp4106;
        $l4107:;
        ITable* $tmp4109 = expr$Iter4101->$class->itable;
        while ($tmp4109->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4109 = $tmp4109->next;
        }
        $fn4111 $tmp4110 = $tmp4109->methods[0];
        panda$core$Bit $tmp4112 = $tmp4110(expr$Iter4101);
        panda$core$Bit $tmp4113 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4112);
        if (!$tmp4113.value) goto $l4108;
        {
            ITable* $tmp4115 = expr$Iter4101->$class->itable;
            while ($tmp4115->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4115 = $tmp4115->next;
            }
            $fn4117 $tmp4116 = $tmp4115->methods[1];
            panda$core$Object* $tmp4118 = $tmp4116(expr$Iter4101);
            expr4114 = ((org$pandalanguage$pandac$ASTNode*) $tmp4118);
            org$pandalanguage$pandac$IRNode* $tmp4120 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, expr4114);
            org$pandalanguage$pandac$IRNode* $tmp4121 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp4120, p_type);
            compiled4119 = $tmp4121;
            if (((panda$core$Bit) { compiled4119 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children4098, ((panda$core$Object*) compiled4119));
        }
        goto $l4107;
        $l4108:;
    }
    org$pandalanguage$pandac$SymbolTable* $tmp4122 = (org$pandalanguage$pandac$SymbolTable*) malloc(48);
    $tmp4122->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp4122->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp4122, self->symbolTable);
    self->symbolTable = $tmp4122;
    panda$collections$Array* $tmp4125 = (panda$collections$Array*) malloc(40);
    $tmp4125->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4125->refCount.value = 1;
    panda$collections$Array$init($tmp4125);
    statements4124 = $tmp4125;
    panda$core$Int64 $tmp4128 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp4127, ((panda$core$Int64) { 1 }), $tmp4128, ((panda$core$Bit) { false }));
    int64_t $tmp4130 = $tmp4127.min.value;
    panda$core$Int64 i4129 = { $tmp4130 };
    int64_t $tmp4132 = $tmp4127.max.value;
    bool $tmp4133 = $tmp4127.inclusive.value;
    if ($tmp4133) goto $l4140; else goto $l4141;
    $l4140:;
    if ($tmp4130 <= $tmp4132) goto $l4134; else goto $l4136;
    $l4141:;
    if ($tmp4130 < $tmp4132) goto $l4134; else goto $l4136;
    $l4134:;
    {
        panda$core$Object* $tmp4143 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, i4129);
        org$pandalanguage$pandac$IRNode* $tmp4144 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4143));
        statement4142 = $tmp4144;
        if (((panda$core$Bit) { statement4142 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(statements4124, ((panda$core$Object*) statement4142));
    }
    $l4137:;
    int64_t $tmp4146 = $tmp4132 - i4129.value;
    if ($tmp4133) goto $l4147; else goto $l4148;
    $l4147:;
    if ($tmp4146 >= 1) goto $l4145; else goto $l4136;
    $l4148:;
    if ($tmp4146 > 1) goto $l4145; else goto $l4136;
    $l4145:;
    i4129.value += 1;
    goto $l4134;
    $l4136:;
    panda$core$Object* $tmp4151 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->symbolTable->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp4151);
    org$pandalanguage$pandac$IRNode* $tmp4152 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4152->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4152->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4152, ((panda$core$Int64) { 1000 }), p_w->position, ((panda$collections$ListView*) statements4124));
    panda$collections$Array$add$panda$collections$Array$T(children4098, ((panda$core$Object*) $tmp4152));
    org$pandalanguage$pandac$IRNode* $tmp4154 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4154->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4154->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4154, ((panda$core$Int64) { 1042 }), p_w->position, ((panda$collections$ListView*) children4098));
    return $tmp4154;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileOtherwise$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_o) {
    panda$collections$Array* children4157;
    panda$collections$Array* statements4162;
    panda$collections$Iterator* s$Iter4165;
    org$pandalanguage$pandac$ASTNode* s4177;
    org$pandalanguage$pandac$IRNode* statement4182;
    panda$core$Bit $tmp4156 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_o->kind, ((panda$core$Int64) { 127 }));
    PANDA_ASSERT($tmp4156.value);
    panda$collections$Array* $tmp4158 = (panda$collections$Array*) malloc(40);
    $tmp4158->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4158->refCount.value = 1;
    panda$collections$Array$init($tmp4158);
    children4157 = $tmp4158;
    org$pandalanguage$pandac$SymbolTable* $tmp4160 = (org$pandalanguage$pandac$SymbolTable*) malloc(48);
    $tmp4160->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp4160->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp4160, self->symbolTable);
    self->symbolTable = $tmp4160;
    panda$collections$Array* $tmp4163 = (panda$collections$Array*) malloc(40);
    $tmp4163->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4163->refCount.value = 1;
    panda$collections$Array$init($tmp4163);
    statements4162 = $tmp4163;
    {
        ITable* $tmp4166 = ((panda$collections$Iterable*) p_o->children)->$class->itable;
        while ($tmp4166->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4166 = $tmp4166->next;
        }
        $fn4168 $tmp4167 = $tmp4166->methods[0];
        panda$collections$Iterator* $tmp4169 = $tmp4167(((panda$collections$Iterable*) p_o->children));
        s$Iter4165 = $tmp4169;
        $l4170:;
        ITable* $tmp4172 = s$Iter4165->$class->itable;
        while ($tmp4172->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4172 = $tmp4172->next;
        }
        $fn4174 $tmp4173 = $tmp4172->methods[0];
        panda$core$Bit $tmp4175 = $tmp4173(s$Iter4165);
        panda$core$Bit $tmp4176 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4175);
        if (!$tmp4176.value) goto $l4171;
        {
            ITable* $tmp4178 = s$Iter4165->$class->itable;
            while ($tmp4178->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4178 = $tmp4178->next;
            }
            $fn4180 $tmp4179 = $tmp4178->methods[1];
            panda$core$Object* $tmp4181 = $tmp4179(s$Iter4165);
            s4177 = ((org$pandalanguage$pandac$ASTNode*) $tmp4181);
            org$pandalanguage$pandac$IRNode* $tmp4183 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, s4177);
            statement4182 = $tmp4183;
            if (((panda$core$Bit) { statement4182 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(statements4162, ((panda$core$Object*) statement4182));
        }
        goto $l4170;
        $l4171:;
    }
    panda$core$Object* $tmp4184 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->symbolTable->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp4184);
    org$pandalanguage$pandac$IRNode* $tmp4185 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4185->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4185->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4185, ((panda$core$Int64) { 1000 }), p_o->position, ((panda$collections$ListView*) statements4162));
    panda$collections$Array$add$panda$collections$Array$T(children4157, ((panda$core$Object*) $tmp4185));
    org$pandalanguage$pandac$IRNode* $tmp4187 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4187->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4187->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4187, ((panda$core$Int64) { 1043 }), p_o->position, ((panda$collections$ListView*) children4157));
    return $tmp4187;
}
panda$core$Bit org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    org$pandalanguage$pandac$FieldDecl* f4196;
    org$pandalanguage$pandac$Variable* v4205;
    switch (p_expr->kind.value) {
        case 1004:
        {
            return ((panda$core$Bit) { true });
        }
        break;
        case 1010:
        {
            panda$core$Bit $tmp4190 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_expr->type);
            bool $tmp4189 = $tmp4190.value;
            if (!$tmp4189) goto $l4191;
            panda$core$Object* $tmp4192 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp4193 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$IRNode*) $tmp4192)->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp4194 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp4193));
            $tmp4189 = $tmp4194.value;
            $l4191:;
            panda$core$Bit $tmp4195 = { $tmp4189 };
            return $tmp4195;
        }
        break;
        case 1026:
        {
            f4196 = ((org$pandalanguage$pandac$FieldDecl*) p_expr->payload);
            PANDA_ASSERT(f4196->resolved.value);
            panda$core$Bit $tmp4199 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(f4196->fieldKind, ((panda$core$Int64) { 10002 }));
            bool $tmp4198 = $tmp4199.value;
            if (!$tmp4198) goto $l4200;
            $tmp4198 = ((panda$core$Bit) { f4196->value != NULL }).value;
            $l4200:;
            panda$core$Bit $tmp4201 = { $tmp4198 };
            bool $tmp4197 = $tmp4201.value;
            if (!$tmp4197) goto $l4202;
            panda$core$Bit $tmp4203 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, f4196->value);
            $tmp4197 = $tmp4203.value;
            $l4202:;
            panda$core$Bit $tmp4204 = { $tmp4197 };
            return $tmp4204;
        }
        break;
        case 1016:
        {
            v4205 = ((org$pandalanguage$pandac$Variable*) p_expr->payload);
            panda$core$Bit $tmp4207 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(v4205->varKind, ((panda$core$Int64) { 10001 }));
            bool $tmp4206 = $tmp4207.value;
            if ($tmp4206) goto $l4208;
            panda$core$Bit $tmp4211 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(v4205->varKind, ((panda$core$Int64) { 10002 }));
            bool $tmp4210 = $tmp4211.value;
            if (!$tmp4210) goto $l4212;
            $tmp4210 = ((panda$core$Bit) { v4205->initialValue != NULL }).value;
            $l4212:;
            panda$core$Bit $tmp4213 = { $tmp4210 };
            bool $tmp4209 = $tmp4213.value;
            if (!$tmp4209) goto $l4214;
            panda$core$Bit $tmp4215 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, v4205->initialValue);
            $tmp4209 = $tmp4215.value;
            $l4214:;
            panda$core$Bit $tmp4216 = { $tmp4209 };
            $tmp4206 = $tmp4216.value;
            $l4208:;
            panda$core$Bit $tmp4217 = { $tmp4206 };
            return $tmp4217;
        }
        break;
        default:
        {
            return ((panda$core$Bit) { false });
        }
    }
}
panda$core$UInt64 org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    org$pandalanguage$pandac$FieldDecl* f4222;
    org$pandalanguage$pandac$Variable* v4224;
    panda$core$Bit $tmp4218 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, p_expr);
    PANDA_ASSERT($tmp4218.value);
    switch (p_expr->kind.value) {
        case 1004:
        {
            return ((panda$core$UInt64$wrapper*) p_expr->payload)->value;
        }
        break;
        case 1010:
        {
            panda$core$Object* $tmp4219 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp4220 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$IRNode*) $tmp4219)->children, ((panda$core$Int64) { 0 }));
            panda$core$UInt64 $tmp4221 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self, ((org$pandalanguage$pandac$IRNode*) $tmp4220));
            return $tmp4221;
        }
        break;
        case 1026:
        {
            f4222 = ((org$pandalanguage$pandac$FieldDecl*) p_expr->payload);
            panda$core$UInt64 $tmp4223 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self, f4222->value);
            return $tmp4223;
        }
        break;
        case 1016:
        {
            v4224 = ((org$pandalanguage$pandac$Variable*) p_expr->payload);
            panda$core$UInt64 $tmp4225 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self, v4224->initialValue);
            return $tmp4225;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileMatch$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_m) {
    org$pandalanguage$pandac$IRNode* value4229;
    panda$collections$Array* children4236;
    panda$collections$Iterator* rawWhen$Iter4239;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp4240;
    org$pandalanguage$pandac$ASTNode* rawWhen4253;
    org$pandalanguage$pandac$IRNode* o4259;
    org$pandalanguage$pandac$IRNode* w4261;
    panda$core$Bit $tmp4226 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->kind, ((panda$core$Int64) { 125 }));
    PANDA_ASSERT($tmp4226.value);
    panda$core$Int64 $tmp4227 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
    panda$core$Bit $tmp4228 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp4227, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4228.value);
    panda$core$Object* $tmp4230 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp4231 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4230));
    org$pandalanguage$pandac$IRNode* $tmp4232 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp4231);
    value4229 = $tmp4232;
    if (((panda$core$Bit) { value4229 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp4233 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(value4229->type);
    panda$core$Bit $tmp4234 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4233);
    if ($tmp4234.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp4235 = org$pandalanguage$pandac$Compiler$compileChainedIfMatch$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_m, value4229);
        return $tmp4235;
    }
    }
    panda$collections$Array* $tmp4237 = (panda$collections$Array*) malloc(40);
    $tmp4237->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4237->refCount.value = 1;
    panda$collections$Array$init($tmp4237);
    children4236 = $tmp4237;
    panda$collections$Array$add$panda$collections$Array$T(children4236, ((panda$core$Object*) value4229));
    {
        panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp4240, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
        panda$collections$ImmutableArray* $tmp4241 = panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(p_m->children, $tmp4240);
        ITable* $tmp4242 = ((panda$collections$Iterable*) $tmp4241)->$class->itable;
        while ($tmp4242->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4242 = $tmp4242->next;
        }
        $fn4244 $tmp4243 = $tmp4242->methods[0];
        panda$collections$Iterator* $tmp4245 = $tmp4243(((panda$collections$Iterable*) $tmp4241));
        rawWhen$Iter4239 = $tmp4245;
        $l4246:;
        ITable* $tmp4248 = rawWhen$Iter4239->$class->itable;
        while ($tmp4248->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4248 = $tmp4248->next;
        }
        $fn4250 $tmp4249 = $tmp4248->methods[0];
        panda$core$Bit $tmp4251 = $tmp4249(rawWhen$Iter4239);
        panda$core$Bit $tmp4252 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4251);
        if (!$tmp4252.value) goto $l4247;
        {
            ITable* $tmp4254 = rawWhen$Iter4239->$class->itable;
            while ($tmp4254->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4254 = $tmp4254->next;
            }
            $fn4256 $tmp4255 = $tmp4254->methods[1];
            panda$core$Object* $tmp4257 = $tmp4255(rawWhen$Iter4239);
            rawWhen4253 = ((org$pandalanguage$pandac$ASTNode*) $tmp4257);
            panda$core$Bit $tmp4258 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(rawWhen4253->kind, ((panda$core$Int64) { 127 }));
            if ($tmp4258.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp4260 = org$pandalanguage$pandac$Compiler$compileOtherwise$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, rawWhen4253);
                o4259 = $tmp4260;
                if (((panda$core$Bit) { o4259 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children4236, ((panda$core$Object*) o4259));
                goto $l4246;
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp4262 = org$pandalanguage$pandac$Compiler$compileWhen$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, value4229->type, rawWhen4253);
            w4261 = $tmp4262;
            if (((panda$core$Bit) { w4261 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$Object* $tmp4263 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(w4261->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp4264 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp4263));
            panda$core$Bit $tmp4265 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4264);
            if ($tmp4265.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp4266 = org$pandalanguage$pandac$Compiler$compileChainedIfMatch$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_m, value4229);
                return $tmp4266;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children4236, ((panda$core$Object*) w4261));
        }
        goto $l4246;
        $l4247:;
    }
    org$pandalanguage$pandac$IRNode* $tmp4267 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4267->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4267->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4267, ((panda$core$Int64) { 1042 }), p_m->position, ((panda$collections$ListView*) children4236));
    return $tmp4267;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$IRNode* result4282;
    switch (p_s->kind.value) {
        case 123:
        {
            org$pandalanguage$pandac$IRNode* $tmp4269 = org$pandalanguage$pandac$Compiler$compileAssert$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4269;
        }
        break;
        case 103:
        {
            org$pandalanguage$pandac$IRNode* $tmp4270 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            org$pandalanguage$pandac$IRNode* $tmp4271 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp4270);
            return $tmp4271;
        }
        break;
        case 126:
        {
            org$pandalanguage$pandac$IRNode* $tmp4272 = org$pandalanguage$pandac$Compiler$compileBlock$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4272;
        }
        break;
        case 118:
        {
            org$pandalanguage$pandac$IRNode* $tmp4273 = org$pandalanguage$pandac$Compiler$compileIf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4273;
        }
        break;
        case 119:
        {
            org$pandalanguage$pandac$IRNode* $tmp4274 = org$pandalanguage$pandac$Compiler$compileFor$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4274;
        }
        break;
        case 121:
        {
            org$pandalanguage$pandac$IRNode* $tmp4275 = org$pandalanguage$pandac$Compiler$compileWhile$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4275;
        }
        break;
        case 120:
        {
            org$pandalanguage$pandac$IRNode* $tmp4276 = org$pandalanguage$pandac$Compiler$compileDo$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4276;
        }
        break;
        case 122:
        {
            org$pandalanguage$pandac$IRNode* $tmp4277 = org$pandalanguage$pandac$Compiler$compileLoop$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4277;
        }
        break;
        case 125:
        {
            org$pandalanguage$pandac$IRNode* $tmp4278 = org$pandalanguage$pandac$Compiler$compileMatch$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4278;
        }
        break;
        case 134:
        {
            org$pandalanguage$pandac$IRNode* $tmp4279 = org$pandalanguage$pandac$Compiler$compileBreak$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4279;
        }
        break;
        case 135:
        {
            org$pandalanguage$pandac$IRNode* $tmp4280 = org$pandalanguage$pandac$Compiler$compileContinue$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4280;
        }
        break;
        case 136:
        {
            org$pandalanguage$pandac$IRNode* $tmp4281 = org$pandalanguage$pandac$Compiler$compileReturn$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4281;
        }
        break;
        case 107:
        {
            org$pandalanguage$pandac$IRNode* $tmp4283 = org$pandalanguage$pandac$Compiler$compileCall$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            org$pandalanguage$pandac$IRNode* $tmp4284 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp4283);
            result4282 = $tmp4284;
            if (((panda$core$Bit) { result4282 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp4285 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self, result4282);
                result4282 = $tmp4285;
            }
            }
            return result4282;
        }
        break;
        case 130:
        case 131:
        case 132:
        case 133:
        {
            org$pandalanguage$pandac$IRNode* $tmp4286 = org$pandalanguage$pandac$Compiler$compileVar$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4286;
        }
        break;
    }
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBody$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$SymbolTable* old4287;
    org$pandalanguage$pandac$SymbolTable* symbols4289;
    panda$collections$Iterator* p$Iter4292;
    org$pandalanguage$pandac$MethodDecl$Parameter* p4304;
    panda$collections$Array* fieldInitializers4311;
    panda$collections$Iterator* f$Iter4315;
    org$pandalanguage$pandac$FieldDecl* f4328;
    panda$collections$Array* children4338;
    org$pandalanguage$pandac$IRNode* fieldRef4345;
    org$pandalanguage$pandac$IRNode* compiled4350;
    panda$collections$Array* children4352;
    if (((panda$core$Bit) { p_m->compiledBody != NULL }).value) {
    {
        return p_m->compiledBody;
    }
    }
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_m->owner));
    old4287 = self->symbolTable;
    org$pandalanguage$pandac$SymbolTable* $tmp4288 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, p_m->owner);
    self->symbolTable = $tmp4288;
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentMethod, ((panda$core$Object*) p_m));
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
    PANDA_ASSERT(((panda$core$Bit) { p_m->body != NULL }).value);
    org$pandalanguage$pandac$SymbolTable* $tmp4290 = (org$pandalanguage$pandac$SymbolTable*) malloc(48);
    $tmp4290->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp4290->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp4290, self->symbolTable);
    symbols4289 = $tmp4290;
    {
        ITable* $tmp4293 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp4293->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4293 = $tmp4293->next;
        }
        $fn4295 $tmp4294 = $tmp4293->methods[0];
        panda$collections$Iterator* $tmp4296 = $tmp4294(((panda$collections$Iterable*) p_m->parameters));
        p$Iter4292 = $tmp4296;
        $l4297:;
        ITable* $tmp4299 = p$Iter4292->$class->itable;
        while ($tmp4299->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4299 = $tmp4299->next;
        }
        $fn4301 $tmp4300 = $tmp4299->methods[0];
        panda$core$Bit $tmp4302 = $tmp4300(p$Iter4292);
        panda$core$Bit $tmp4303 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4302);
        if (!$tmp4303.value) goto $l4298;
        {
            ITable* $tmp4305 = p$Iter4292->$class->itable;
            while ($tmp4305->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4305 = $tmp4305->next;
            }
            $fn4307 $tmp4306 = $tmp4305->methods[1];
            panda$core$Object* $tmp4308 = $tmp4306(p$Iter4292);
            p4304 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp4308);
            org$pandalanguage$pandac$Variable* $tmp4309 = (org$pandalanguage$pandac$Variable*) malloc(88);
            $tmp4309->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
            $tmp4309->refCount.value = 1;
            org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Int64($tmp4309, ((org$pandalanguage$pandac$Symbol*) p_m)->position, ((panda$core$Int64) { 10001 }), p4304->name, p4304->type, ((panda$core$Int64) { 1820 }));
            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(symbols4289, ((org$pandalanguage$pandac$Symbol*) $tmp4309));
        }
        goto $l4297;
        $l4298:;
    }
    self->symbolTable = symbols4289;
    fieldInitializers4311 = NULL;
    panda$core$Bit $tmp4312 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 59 }));
    if ($tmp4312.value) {
    {
        panda$collections$Array* $tmp4313 = (panda$collections$Array*) malloc(40);
        $tmp4313->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp4313->refCount.value = 1;
        panda$collections$Array$init($tmp4313);
        fieldInitializers4311 = $tmp4313;
        {
            panda$core$Object* $tmp4316 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
            ITable* $tmp4317 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ClassDecl*) $tmp4316)->fields)->$class->itable;
            while ($tmp4317->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp4317 = $tmp4317->next;
            }
            $fn4319 $tmp4318 = $tmp4317->methods[0];
            panda$collections$Iterator* $tmp4320 = $tmp4318(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ClassDecl*) $tmp4316)->fields));
            f$Iter4315 = $tmp4320;
            $l4321:;
            ITable* $tmp4323 = f$Iter4315->$class->itable;
            while ($tmp4323->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4323 = $tmp4323->next;
            }
            $fn4325 $tmp4324 = $tmp4323->methods[0];
            panda$core$Bit $tmp4326 = $tmp4324(f$Iter4315);
            panda$core$Bit $tmp4327 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4326);
            if (!$tmp4327.value) goto $l4322;
            {
                ITable* $tmp4329 = f$Iter4315->$class->itable;
                while ($tmp4329->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp4329 = $tmp4329->next;
                }
                $fn4331 $tmp4330 = $tmp4329->methods[1];
                panda$core$Object* $tmp4332 = $tmp4330(f$Iter4315);
                f4328 = ((org$pandalanguage$pandac$FieldDecl*) $tmp4332);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self, f4328);
                panda$core$Bit $tmp4334 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(f4328->annotations);
                panda$core$Bit $tmp4335 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4334);
                bool $tmp4333 = $tmp4335.value;
                if (!$tmp4333) goto $l4336;
                $tmp4333 = ((panda$core$Bit) { f4328->value != NULL }).value;
                $l4336:;
                panda$core$Bit $tmp4337 = { $tmp4333 };
                if ($tmp4337.value) {
                {
                    panda$collections$Array* $tmp4339 = (panda$collections$Array*) malloc(40);
                    $tmp4339->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp4339->refCount.value = 1;
                    panda$collections$Array$init($tmp4339);
                    children4338 = $tmp4339;
                    org$pandalanguage$pandac$IRNode* $tmp4341 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp4341->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp4341->refCount.value = 1;
                    panda$core$Object* $tmp4343 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
                    org$pandalanguage$pandac$Type* $tmp4344 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp4343));
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp4341, ((panda$core$Int64) { 1025 }), ((org$pandalanguage$pandac$Symbol*) p_m)->position, $tmp4344);
                    panda$collections$Array$add$panda$collections$Array$T(children4338, ((panda$core$Object*) $tmp4341));
                    org$pandalanguage$pandac$IRNode* $tmp4346 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp4346->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp4346->refCount.value = 1;
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp4346, ((panda$core$Int64) { 1026 }), ((org$pandalanguage$pandac$Symbol*) p_m)->position, f4328->type, ((panda$core$Object*) f4328), ((panda$collections$ListView*) children4338));
                    fieldRef4345 = $tmp4346;
                    panda$collections$Array$clear(children4338);
                    panda$collections$Array$add$panda$collections$Array$T(children4338, ((panda$core$Object*) fieldRef4345));
                    panda$collections$Array$add$panda$collections$Array$T(children4338, ((panda$core$Object*) f4328->value));
                    org$pandalanguage$pandac$IRNode* $tmp4348 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp4348->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp4348->refCount.value = 1;
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4348, ((panda$core$Int64) { 1023 }), ((org$pandalanguage$pandac$Symbol*) f4328)->position, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 73 }))), ((panda$collections$ListView*) children4338));
                    panda$collections$Array$add$panda$collections$Array$T(fieldInitializers4311, ((panda$core$Object*) $tmp4348));
                }
                }
            }
            goto $l4321;
            $l4322:;
        }
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp4351 = org$pandalanguage$pandac$Compiler$compileBlock$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_m->body);
    compiled4350 = $tmp4351;
    if (((panda$core$Bit) { compiled4350 != NULL }).value) {
    {
        if (((panda$core$Bit) { fieldInitializers4311 != NULL }).value) {
        {
            panda$collections$Array* $tmp4353 = (panda$collections$Array*) malloc(40);
            $tmp4353->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp4353->refCount.value = 1;
            panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp4353, ((panda$collections$ListView*) fieldInitializers4311));
            children4352 = $tmp4353;
            panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(children4352, ((panda$collections$CollectionView*) compiled4350->children));
            org$pandalanguage$pandac$IRNode* $tmp4355 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp4355->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp4355->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4355, ((panda$core$Int64) { 1000 }), p_m->body->position, ((panda$collections$ListView*) children4352));
            compiled4350 = $tmp4355;
        }
        }
    }
    }
    PANDA_ASSERT(((panda$core$Bit) { ((panda$core$Object*) self->symbolTable) == ((panda$core$Object*) symbols4289) }).value);
    self->symbolTable = old4287;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentMethod);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    panda$core$Bit $tmp4357 = org$pandalanguage$pandac$Annotations$isInline$R$panda$core$Bit(p_m->annotations);
    if ($tmp4357.value) {
    {
        p_m->compiledBody = compiled4350;
    }
    }
    return compiled4350;
}
void org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$IRNode* compiled4358;
    if (((panda$core$Bit) { p_m->body != NULL }).value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp4359 = org$pandalanguage$pandac$Compiler$compileBody$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$IRNode$Q(self, p_m);
        compiled4358 = $tmp4359;
        if (((panda$core$Bit) { compiled4358 != NULL }).value) {
        {
            ITable* $tmp4360 = self->codeGenerator->$class->itable;
            while ($tmp4360->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
                $tmp4360 = $tmp4360->next;
            }
            $fn4362 $tmp4361 = $tmp4360->methods[3];
            $tmp4361(self->codeGenerator, p_m, compiled4358);
        }
        }
    }
    }
    else {
    {
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
        ITable* $tmp4363 = self->codeGenerator->$class->itable;
        while ($tmp4363->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
            $tmp4363 = $tmp4363->next;
        }
        $fn4365 $tmp4364 = $tmp4363->methods[2];
        $tmp4364(self->codeGenerator, p_m);
    }
    }
}
void org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Iterator* inner$Iter4366;
    org$pandalanguage$pandac$ClassDecl* inner4378;
    p_cl->external = ((panda$core$Bit) { false });
    {
        ITable* $tmp4367 = ((panda$collections$Iterable*) p_cl->classes)->$class->itable;
        while ($tmp4367->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4367 = $tmp4367->next;
        }
        $fn4369 $tmp4368 = $tmp4367->methods[0];
        panda$collections$Iterator* $tmp4370 = $tmp4368(((panda$collections$Iterable*) p_cl->classes));
        inner$Iter4366 = $tmp4370;
        $l4371:;
        ITable* $tmp4373 = inner$Iter4366->$class->itable;
        while ($tmp4373->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4373 = $tmp4373->next;
        }
        $fn4375 $tmp4374 = $tmp4373->methods[0];
        panda$core$Bit $tmp4376 = $tmp4374(inner$Iter4366);
        panda$core$Bit $tmp4377 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4376);
        if (!$tmp4377.value) goto $l4372;
        {
            ITable* $tmp4379 = inner$Iter4366->$class->itable;
            while ($tmp4379->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4379 = $tmp4379->next;
            }
            $fn4381 $tmp4380 = $tmp4379->methods[1];
            panda$core$Object* $tmp4382 = $tmp4380(inner$Iter4366);
            inner4378 = ((org$pandalanguage$pandac$ClassDecl*) $tmp4382);
            org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl(self, inner4378);
        }
        goto $l4371;
        $l4372:;
    }
}
void org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$SymbolTable* old4390;
    panda$collections$Iterator* m$Iter4395;
    org$pandalanguage$pandac$MethodDecl* m4407;
    org$pandalanguage$pandac$ClassDecl* next4417;
    PANDA_ASSERT(((panda$core$Bit) { self->compiling == NULL }).value);
    self->compiling = p_cl;
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_cl));
    org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl(self, p_cl);
    panda$core$Bit $tmp4383 = org$pandalanguage$pandac$Annotations$isSpecialize$R$panda$core$Bit(p_cl->annotations);
    if ($tmp4383.value) {
    {
        ITable* $tmp4384 = self->codeGenerator->$class->itable;
        while ($tmp4384->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
            $tmp4384 = $tmp4384->next;
        }
        $fn4386 $tmp4385 = $tmp4384->methods[1];
        $tmp4385(self->codeGenerator, p_cl);
        ITable* $tmp4387 = self->codeGenerator->$class->itable;
        while ($tmp4387->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
            $tmp4387 = $tmp4387->next;
        }
        $fn4389 $tmp4388 = $tmp4387->methods[4];
        $tmp4388(self->codeGenerator, p_cl);
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
        return;
    }
    }
    old4390 = self->symbolTable;
    org$pandalanguage$pandac$SymbolTable* $tmp4391 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, p_cl);
    self->symbolTable = $tmp4391;
    ITable* $tmp4392 = self->codeGenerator->$class->itable;
    while ($tmp4392->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
        $tmp4392 = $tmp4392->next;
    }
    $fn4394 $tmp4393 = $tmp4392->methods[1];
    $tmp4393(self->codeGenerator, p_cl);
    {
        ITable* $tmp4396 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
        while ($tmp4396->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4396 = $tmp4396->next;
        }
        $fn4398 $tmp4397 = $tmp4396->methods[0];
        panda$collections$Iterator* $tmp4399 = $tmp4397(((panda$collections$Iterable*) p_cl->methods));
        m$Iter4395 = $tmp4399;
        $l4400:;
        ITable* $tmp4402 = m$Iter4395->$class->itable;
        while ($tmp4402->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4402 = $tmp4402->next;
        }
        $fn4404 $tmp4403 = $tmp4402->methods[0];
        panda$core$Bit $tmp4405 = $tmp4403(m$Iter4395);
        panda$core$Bit $tmp4406 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4405);
        if (!$tmp4406.value) goto $l4401;
        {
            ITable* $tmp4408 = m$Iter4395->$class->itable;
            while ($tmp4408->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4408 = $tmp4408->next;
            }
            $fn4410 $tmp4409 = $tmp4408->methods[1];
            panda$core$Object* $tmp4411 = $tmp4409(m$Iter4395);
            m4407 = ((org$pandalanguage$pandac$MethodDecl*) $tmp4411);
            org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$MethodDecl(self, m4407);
        }
        goto $l4400;
        $l4401:;
    }
    ITable* $tmp4412 = self->codeGenerator->$class->itable;
    while ($tmp4412->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
        $tmp4412 = $tmp4412->next;
    }
    $fn4414 $tmp4413 = $tmp4412->methods[4];
    $tmp4413(self->codeGenerator, p_cl);
    self->symbolTable = old4390;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    self->compiling = NULL;
    panda$core$Int64 $tmp4415 = panda$collections$Array$get_count$R$panda$core$Int64(self->compilationQueue);
    panda$core$Bit $tmp4416 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp4415, ((panda$core$Int64) { 0 }));
    if ($tmp4416.value) {
    {
        panda$core$Object* $tmp4418 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->compilationQueue, ((panda$core$Int64) { 0 }));
        next4417 = ((org$pandalanguage$pandac$ClassDecl*) $tmp4418);
        panda$collections$Array$removeIndex$panda$core$Int64(self->compilationQueue, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$ClassDecl(self, next4417);
    }
    }
    panda$core$Int64 $tmp4419 = panda$collections$Array$get_count$R$panda$core$Int64(self->compilationQueue);
    panda$core$Bit $tmp4420 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4419, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp4420.value);
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Compiler* self, panda$io$File* p_file) {
    panda$collections$ListView* result4421;
    org$pandalanguage$pandac$ASTNode* parsed4425;
    panda$collections$Iterator* cl$Iter4429;
    org$pandalanguage$pandac$ClassDecl* cl4441;
    panda$core$Object* $tmp4422 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->scans, ((panda$collections$Key*) p_file));
    result4421 = ((panda$collections$ListView*) $tmp4422);
    if (((panda$core$Bit) { result4421 == NULL }).value) {
    {
        panda$core$String* $tmp4423 = panda$io$File$readFully$R$panda$core$String(p_file);
        (($fn4424) self->parser->$class->vtable[2])(self->parser, p_file, $tmp4423);
        org$pandalanguage$pandac$ASTNode* $tmp4427 = (($fn4426) self->parser->$class->vtable[67])(self->parser);
        parsed4425 = $tmp4427;
        if (((panda$core$Bit) { parsed4425 != NULL }).value) {
        {
            panda$collections$ListView* $tmp4428 = org$pandalanguage$pandac$Scanner$scan$panda$io$File$org$pandalanguage$pandac$ASTNode$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(self->scanner, p_file, parsed4425);
            result4421 = $tmp4428;
            {
                ITable* $tmp4430 = ((panda$collections$Iterable*) result4421)->$class->itable;
                while ($tmp4430->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp4430 = $tmp4430->next;
                }
                $fn4432 $tmp4431 = $tmp4430->methods[0];
                panda$collections$Iterator* $tmp4433 = $tmp4431(((panda$collections$Iterable*) result4421));
                cl$Iter4429 = $tmp4433;
                $l4434:;
                ITable* $tmp4436 = cl$Iter4429->$class->itable;
                while ($tmp4436->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp4436 = $tmp4436->next;
                }
                $fn4438 $tmp4437 = $tmp4436->methods[0];
                panda$core$Bit $tmp4439 = $tmp4437(cl$Iter4429);
                panda$core$Bit $tmp4440 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4439);
                if (!$tmp4440.value) goto $l4435;
                {
                    ITable* $tmp4442 = cl$Iter4429->$class->itable;
                    while ($tmp4442->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp4442 = $tmp4442->next;
                    }
                    $fn4444 $tmp4443 = $tmp4442->methods[1];
                    panda$core$Object* $tmp4445 = $tmp4443(cl$Iter4429);
                    cl4441 = ((org$pandalanguage$pandac$ClassDecl*) $tmp4445);
                    panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classes, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) cl4441)->name), ((panda$core$Object*) cl4441));
                }
                goto $l4434;
                $l4435:;
            }
        }
        }
        else {
        {
            panda$collections$Array* $tmp4446 = (panda$collections$Array*) malloc(40);
            $tmp4446->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp4446->refCount.value = 1;
            panda$collections$Array$init($tmp4446);
            result4421 = ((panda$collections$ListView*) $tmp4446);
        }
        }
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->scans, ((panda$collections$Key*) p_file), ((panda$core$Object*) result4421));
    }
    }
    return result4421;
}
void org$pandalanguage$pandac$Compiler$compile$panda$io$File(org$pandalanguage$pandac$Compiler* self, panda$io$File* p_file) {
    panda$collections$ListView* classes4448;
    panda$collections$Iterator* cl$Iter4450;
    org$pandalanguage$pandac$ClassDecl* cl4462;
    panda$collections$ListView* $tmp4449 = org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(self, p_file);
    classes4448 = $tmp4449;
    {
        ITable* $tmp4451 = ((panda$collections$Iterable*) classes4448)->$class->itable;
        while ($tmp4451->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4451 = $tmp4451->next;
        }
        $fn4453 $tmp4452 = $tmp4451->methods[0];
        panda$collections$Iterator* $tmp4454 = $tmp4452(((panda$collections$Iterable*) classes4448));
        cl$Iter4450 = $tmp4454;
        $l4455:;
        ITable* $tmp4457 = cl$Iter4450->$class->itable;
        while ($tmp4457->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4457 = $tmp4457->next;
        }
        $fn4459 $tmp4458 = $tmp4457->methods[0];
        panda$core$Bit $tmp4460 = $tmp4458(cl$Iter4450);
        panda$core$Bit $tmp4461 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4460);
        if (!$tmp4461.value) goto $l4456;
        {
            ITable* $tmp4463 = cl$Iter4450->$class->itable;
            while ($tmp4463->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4463 = $tmp4463->next;
            }
            $fn4465 $tmp4464 = $tmp4463->methods[1];
            panda$core$Object* $tmp4466 = $tmp4464(cl$Iter4450);
            cl4462 = ((org$pandalanguage$pandac$ClassDecl*) $tmp4466);
            org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$ClassDecl(self, cl4462);
        }
        goto $l4455;
        $l4456:;
    }
}
void org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, panda$core$String* p_msg) {
    panda$core$Object* $tmp4467 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
    org$pandalanguage$pandac$Compiler$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$ClassDecl*) $tmp4467)->source, p_position, p_msg);
}
void org$pandalanguage$pandac$Compiler$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$Compiler* self, panda$io$File* p_file, org$pandalanguage$pandac$Position p_pos, panda$core$String* p_msg) {
    if (self->reportErrors.value) {
    {
        panda$core$Int64 $tmp4468 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->errorCount, ((panda$core$Int64) { 1 }));
        self->errorCount = $tmp4468;
        panda$core$String* $tmp4469 = panda$io$File$name$R$panda$core$String(p_file);
        panda$core$String* $tmp4470 = panda$core$String$convert$R$panda$core$String($tmp4469);
        panda$core$String* $tmp4472 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4470, &$s4471);
        panda$core$String* $tmp4473 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp4472, ((panda$core$Object*) wrap_org$pandalanguage$pandac$Position(p_pos)));
        panda$core$String* $tmp4475 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4473, &$s4474);
        panda$core$String* $tmp4476 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4475, p_msg);
        panda$core$String* $tmp4478 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4476, &$s4477);
        panda$io$Console$printLine$panda$core$Object(((panda$core$Object*) $tmp4478));
    }
    }
}
void org$pandalanguage$pandac$Compiler$finish(org$pandalanguage$pandac$Compiler* self) {
    ITable* $tmp4479 = self->codeGenerator->$class->itable;
    while ($tmp4479->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
        $tmp4479 = $tmp4479->next;
    }
    $fn4481 $tmp4480 = $tmp4479->methods[5];
    $tmp4480(self->codeGenerator);
}

