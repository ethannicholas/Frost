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
typedef panda$core$Bit (*$fn1560)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1564)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1567)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1652)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1658)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1664)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1791)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1914)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1920)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1926)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn2016)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2038)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Int64 (*$fn2060)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn2077)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2083)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2089)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn2101)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn2123)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn2197)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2215)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn2286)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn2304)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2310)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2316)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2347)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2353)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2359)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2396)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2402)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2408)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2431)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2437)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2443)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2833)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2839)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2845)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2977)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2983)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2989)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn3090)(panda$core$Object*);
typedef panda$core$Int64 (*$fn3201)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn3217)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3223)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3229)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3344)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3350)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3356)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3566)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3572)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3578)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3713)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3719)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3725)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3751)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3757)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3763)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3870)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3876)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3882)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4028)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4034)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4040)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4123)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4129)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4135)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4186)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4192)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4198)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4262)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4268)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4274)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4313)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4319)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4325)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4337)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4343)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4349)(panda$collections$Iterator*);
typedef void (*$fn4380)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$MethodDecl*, org$pandalanguage$pandac$IRNode*);
typedef void (*$fn4383)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$collections$Iterator* (*$fn4387)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4393)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4399)(panda$collections$Iterator*);
typedef void (*$fn4404)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn4407)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn4412)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$collections$Iterator* (*$fn4416)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4422)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4428)(panda$collections$Iterator*);
typedef void (*$fn4432)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn4442)(org$pandalanguage$pandac$parser$Parser*, panda$io$File*, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn4444)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$collections$Iterator* (*$fn4450)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4456)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4462)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4471)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4477)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4483)(panda$collections$Iterator*);
typedef void (*$fn4499)(org$pandalanguage$pandac$CodeGenerator*);

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
static panda$core$String $s1642 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 19485, NULL };
static panda$core$String $s1821 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27", 10, 875040426634827830, NULL };
static panda$core$String $s1823 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 14, 2262695563077912654, NULL };
static panda$core$String $s1826 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1851 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27", 10, 875040426634827830, NULL };
static panda$core$String $s1853 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 14, 2262695563077912654, NULL };
static panda$core$String $s1856 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1889 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 19485, NULL };
static panda$core$String $s1948 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27", 10, 875040426634827830, NULL };
static panda$core$String $s1950 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 14, 2262695563077912654, NULL };
static panda$core$String $s1953 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1993 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6C\x75\x65\x20\x6F\x66\x20\x74\x79\x70\x65\x20\x27", 15, -1620219380461029456, NULL };
static panda$core$String $s1995 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x70\x6F\x73\x73\x69\x62\x6C\x79\x20\x62\x65\x20\x61\x6E\x20\x69\x6E\x73\x74\x61\x6E\x63\x65\x20\x6F\x66\x20", 36, -427166674877421096, NULL };
static panda$core$String $s1997 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1999 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2107 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2108 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, 216, NULL };
static panda$core$String $s2111 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x65\x78\x70\x65\x63\x74\x65\x64\x20", 10, -1007140463547215113, NULL };
static panda$core$String $s2115 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x61\x72\x67\x75\x6D\x65\x6E\x74", 9, 1450721239526715900, NULL };
static panda$core$String $s2118 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2120 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x74\x20\x72\x65\x63\x65\x69\x76\x65\x64\x20", 13, -1301083486074551925, NULL };
static panda$core$String $s2126 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2150 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x64\x69\x72\x65\x63\x74\x6C\x79\x20\x63\x61\x6C\x6C\x20\x27\x69\x6E\x69\x74\x27\x20\x6F\x75\x74\x73\x69\x64\x65\x20\x6F\x66\x20\x61\x6E\x20\x69\x6E\x69\x74\x20\x6D\x65\x74\x68\x6F\x64", 53, 84993564105955720, NULL };
static panda$core$String $s2160 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x69\x6E\x69\x74\x27\x20\x6D\x61\x79\x20\x6F\x6E\x6C\x79\x20\x62\x65\x20\x63\x61\x6C\x6C\x65\x64\x20\x6F\x6E\x20\x27\x73\x65\x6C\x66\x27\x20\x6F\x72\x20\x27\x73\x75\x70\x65\x72\x27", 46, 5737688576853633111, NULL };
static panda$core$String $s2175 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x63\x61\x6C\x6C\x20\x69\x6E\x73\x74\x61\x6E\x63\x65\x20", 21, -1285496544752055923, NULL };
static panda$core$String $s2178 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x66\x72\x6F\x6D\x20\x61\x20\x40\x63\x6C\x61\x73\x73\x20\x63\x6F\x6E\x74\x65\x78\x74", 22, 6236893689928691337, NULL };
static panda$core$String $s2189 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x63\x61\x6C\x6C\x20\x63\x6C\x61\x73\x73\x20", 18, 4176321021903236102, NULL };
static panda$core$String $s2192 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x6F\x6E\x20\x61\x6E\x20\x69\x6E\x73\x74\x61\x6E\x63\x65", 15, 4946791728819903386, NULL };
static panda$core$String $s2228 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s2247 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6C\x61\x73\x73\x20\x27", 7, 213449334494206, NULL };
static panda$core$String $s2249 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x64\x6F\x65\x73\x20\x6E\x6F\x74\x20\x68\x61\x76\x65\x20\x61\x20\x6D\x65\x6D\x62\x65\x72\x20\x6E\x61\x6D\x65\x64\x20\x27", 32, -5677460192622646983, NULL };
static panda$core$String $s2252 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2259 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2261 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s2264 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x69\x73\x20\x6E\x6F\x74\x20\x61\x20\x6D\x65\x74\x68\x6F\x64", 17, 1918101523522592587, NULL };
static panda$core$String $s2291 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x6F\x20\x6D\x61\x74\x63\x68\x20\x66\x6F\x72\x20\x63\x61\x6C\x6C\x20\x74\x6F\x20\x27", 22, 7814600009206081200, NULL };
static panda$core$String $s2293 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s2296 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2300 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2318 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2319 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x27", 2, 14381, NULL };
static panda$core$String $s2320 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x77\x69\x74\x68\x20\x72\x65\x74\x75\x72\x6E\x20\x74\x79\x70\x65\x20\x27", 19, -3030064837581027794, NULL };
static panda$core$String $s2322 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2370 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x69\x74", 4, 213374837, NULL };
static panda$core$String $s2380 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6C\x75\x65\x20\x6F\x66\x20\x74\x79\x70\x65\x20\x27", 15, -1620219380461029456, NULL };
static panda$core$String $s2382 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x69\x73\x20\x6E\x6F\x74\x20\x61\x20\x6D\x65\x74\x68\x6F\x64", 17, 1918101523522592587, NULL };
static panda$core$String $s2390 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2392 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2410 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2413 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x3E\x28", 4, 146931305, NULL };
static panda$core$String $s2414 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x26\x3E\x28", 5, 14839819243, NULL };
static panda$core$String $s2427 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2445 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2448 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x3E\x28", 4, 146931305, NULL };
static panda$core$String $s2449 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x26\x3E\x28", 5, 14839819243, NULL };
static panda$core$String $s2466 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2B", 1, 144, NULL };
static panda$core$String $s2467 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D", 1, 146, NULL };
static panda$core$String $s2468 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 143, NULL };
static panda$core$String $s2469 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, 148, NULL };
static panda$core$String $s2470 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F\x2F", 2, 14995, NULL };
static panda$core$String $s2471 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 138, NULL };
static panda$core$String $s2472 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5E", 1, 195, NULL };
static panda$core$String $s2473 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3D", 1, 162, NULL };
static panda$core$String $s2474 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x3D", 2, 13595, NULL };
static panda$core$String $s2475 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 163, NULL };
static panda$core$String $s2476 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 161, NULL };
static panda$core$String $s2477 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E\x3D", 2, 16524, NULL };
static panda$core$String $s2478 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x3D", 2, 16322, NULL };
static panda$core$String $s2479 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1, 225, NULL };
static panda$core$String $s2480 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C\x7C", 2, 22849, NULL };
static panda$core$String $s2481 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s2482 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26\x26", 2, 14077, NULL };
static panda$core$String $s2483 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7E", 1, 227, NULL };
static panda$core$String $s2484 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7E\x7E", 2, 23053, NULL };
static panda$core$String $s2485 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21", 1, 134, NULL };
static panda$core$String $s2486 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x21", 2, 13567, NULL };
static panda$core$String $s2487 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x3C", 2, 16321, NULL };
static panda$core$String $s2488 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E\x3E", 2, 16525, NULL };
static panda$core$String $s2489 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 19485, NULL };
static panda$core$String $s2490 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A\x3D", 2, 16120, NULL };
static panda$core$String $s2491 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3D\x3D", 2, 16423, NULL };
static panda$core$String $s2492 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x3D\x3D", 3, 1373156, NULL };
static panda$core$String $s2603 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x76\x61\x6C\x69\x64\x20\x6E\x75\x6D\x65\x72\x69\x63\x20\x6F\x70\x65\x72\x61\x74\x69\x6F\x6E", 25, 9019145596080302696, NULL };
static panda$core$String $s2615 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D\x3A\x3D", 4, 198772404, NULL };
static panda$core$String $s2663 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6F\x6E\x76\x65\x72\x74", 7, 213482220537370, NULL };
static panda$core$String $s2667 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D\x3A\x3D", 4, 198772404, NULL };
static panda$core$String $s2727 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2730 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x6F\x70\x65\x72\x61\x74\x65\x20\x6F\x6E\x20\x27", 21, -3266050109438970469, NULL };
static panda$core$String $s2733 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20", 3, 1432616, NULL };
static panda$core$String $s2735 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2737 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2744 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2747 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x6F\x70\x65\x72\x61\x74\x65\x20\x6F\x6E\x20\x27", 21, -3266050109438970469, NULL };
static panda$core$String $s2750 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20", 3, 1432616, NULL };
static panda$core$String $s2752 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2754 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2776 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x61\x73\x73\x69\x67\x6E\x20\x74\x6F\x20\x74\x68\x69\x73\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6F\x6E", 32, -4891466264852316840, NULL };
static panda$core$String $s2788 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x61\x73\x73\x69\x67\x6E\x20\x74\x6F\x20\x74\x68\x69\x73\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6F\x6E", 32, -4891466264852316840, NULL };
static panda$core$String $s2805 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6F\x6E\x76\x65\x72\x74", 7, 213482220537370, NULL };
static panda$core$String $s2818 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 19485, NULL };
static panda$core$String $s2887 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2890 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x6F\x70\x65\x72\x61\x74\x65\x20\x6F\x6E\x20\x27", 21, -3266050109438970469, NULL };
static panda$core$String $s2893 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20\x27", 4, 144694255, NULL };
static panda$core$String $s2896 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3010 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x6D\x65\x74\x68\x6F\x64\x3E", 8, 17378158564789264, NULL };
static panda$core$String $s3026 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6E\x75\x6D\x62\x65\x72\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 30, 5304221197101987767, NULL };
static panda$core$String $s3028 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3036 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6E\x75\x6D\x62\x65\x72\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 30, 5304221197101987767, NULL };
static panda$core$String $s3038 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3092 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s3095 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3114 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6C\x61\x73\x73\x20\x27", 7, 213449334494206, NULL };
static panda$core$String $s3116 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x64\x6F\x65\x73\x20\x6E\x6F\x74\x20\x68\x61\x76\x65\x20\x61\x20\x6D\x65\x6D\x62\x65\x72\x20\x6E\x61\x6D\x65\x64\x20\x27", 32, -5677460192622646983, NULL };
static panda$core$String $s3119 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3186 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x75\x6E\x72\x65\x73\x6F\x6C\x76\x65\x64\x20\x72\x61\x6E\x67\x65\x3E", 18, -1293962867859660245, NULL };
static panda$core$String $s3195 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x72\x65\x66\x65\x72\x65\x6E\x63\x65\x20\x27\x73\x65\x6C\x66\x27\x20\x66\x72\x6F\x6D\x20\x61\x20\x40\x63\x6C\x61\x73\x73\x20\x6D\x65\x74\x68\x6F\x64", 44, -511889306060728385, NULL };
static panda$core$String $s3213 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3236 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s3239 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3243 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3254 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x72\x65\x66\x65\x72\x65\x6E\x63\x65\x20\x27\x73\x75\x70\x65\x72\x27\x20\x66\x72\x6F\x6D\x20\x61\x20\x40\x63\x6C\x61\x73\x73\x20\x6D\x65\x74\x68\x6F\x64", 45, 3734810722724983720, NULL };
static panda$core$String $s3262 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s3286 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6C\x75\x65\x20\x6F\x66\x20\x74\x79\x70\x65\x20\x27", 15, -1620219380461029456, NULL };
static panda$core$String $s3288 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x70\x6F\x73\x73\x69\x62\x6C\x79\x20\x62\x65\x20\x61\x6E\x20\x69\x6E\x73\x74\x61\x6E\x63\x65\x20\x6F\x66\x20", 36, -427166674877421096, NULL };
static panda$core$String $s3290 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3292 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3319 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x64\x6F\x65\x73\x20\x6E\x6F\x74\x20\x72\x65\x74\x75\x72\x6E\x20\x61\x20\x76\x61\x6C\x75\x65", 24, -3977552604268313933, NULL };
static panda$core$String $s3467 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 161, NULL };
static panda$core$String $s3471 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 163, NULL };
static panda$core$String $s3476 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x49\x74\x65\x72", 5, 14332680541, NULL };
static panda$core$String $s3499 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x65\x74\x5F\x64\x6F\x6E\x65", 8, 21980003879763538, NULL };
static panda$core$String $s3504 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21", 1, 134, NULL };
static panda$core$String $s3516 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x65\x78\x74", 4, 218436048, NULL };
static panda$core$String $s3602 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x74\x65\x72\x61\x74\x6F\x72", 8, 22210198075044275, NULL };
static panda$core$String $s3610 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6E\x20\x49\x74\x65\x72\x61\x62\x6C\x65\x20\x6F\x72\x20\x49\x74\x65\x72\x61\x74\x6F\x72\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 45, 562271959045909027, NULL };
static panda$core$String $s3612 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3675 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x63\x6C\x61\x72\x61\x74\x69\x6F\x6E\x20\x68\x61\x73\x20\x6E\x65\x69\x74\x68\x65\x72\x20\x61\x20\x74\x79\x70\x65\x20\x6E\x6F\x72\x20\x61\x20\x76\x61\x6C\x75\x65", 42, 71025131614347466, NULL };
static panda$core$String $s3732 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x62\x72\x65\x61\x6B\x20", 7, 149654778879689, NULL };
static panda$core$String $s3734 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20\x69\x6E\x73\x69\x64\x65\x20\x61\x20\x6C\x6F\x6F\x70\x20\x6C\x61\x62\x65\x6C\x6C\x65\x64\x20", 33, 5869484791969643332, NULL };
static panda$core$String $s3736 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3738 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A\x27", 2, 16098, NULL };
static panda$core$String $s3743 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x62\x72\x65\x61\x6B\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20\x69\x6E\x73\x69\x64\x65\x20\x61\x20\x6C\x6F\x6F\x70", 29, -2107280000252113069, NULL };
static panda$core$String $s3770 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x63\x6F\x6E\x74\x69\x6E\x75\x65\x20", 10, 6626032424543403513, NULL };
static panda$core$String $s3772 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20\x69\x6E\x73\x69\x64\x65\x20\x61\x20\x6C\x6F\x6F\x70\x20\x6C\x61\x62\x65\x6C\x6C\x65\x64\x20", 33, 5869484791969643332, NULL };
static panda$core$String $s3774 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3776 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A\x27", 2, 16098, NULL };
static panda$core$String $s3781 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x63\x6F\x6E\x74\x69\x6E\x75\x65\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20\x69\x6E\x73\x69\x64\x65\x20\x61\x20\x6C\x6F\x6F\x70", 32, -6048052453244835837, NULL };
static panda$core$String $s3795 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x72\x65\x74\x75\x72\x6E\x20\x61\x20\x76\x61\x6C\x75\x65\x20\x66\x72\x6F\x6D\x20\x61\x20\x6D\x65\x74\x68\x6F\x64\x20\x77\x69\x74\x68\x20\x6E\x6F\x20\x72\x65\x74\x75\x72\x6E\x20\x74\x79\x70\x65", 55, -6755143087675264705, NULL };
static panda$core$String $s3809 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x72\x65\x74\x75\x72\x6E\x20\x76\x61\x6C\x75\x65", 23, 6159277012237708805, NULL };
static panda$core$String $s3829 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6C\x75\x65", 5, 22890280642, NULL };
static panda$core$String $s3896 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3D", 1, 162, NULL };
static panda$core$String $s3933 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1, 225, NULL };
static panda$core$String $s3984 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x6D\x61\x74\x63\x68\x24", 7, 146584075981198, NULL };
static panda$core$String $s3986 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5F", 1, 196, NULL };
static panda$core$String $s3989 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4489 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A", 1, 159, NULL };
static panda$core$String $s4492 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A\x20\x65\x72\x72\x6F\x72\x3A\x20", 9, 1725281418740475535, NULL };
static panda$core$String $s4495 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };

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
    panda$core$String* s1545;
    panda$collections$Iterator* utf161556;
    panda$core$Int64$nullable cost11592;
    panda$core$Int64$nullable cost21596;
    panda$core$Int64 cost1605;
    panda$core$Int64$nullable cost11619;
    panda$core$Int64$nullable cost21623;
    panda$core$Int64$nullable cost31628;
    panda$collections$Array* args1636;
    org$pandalanguage$pandac$ClassDecl* targetClass1647;
    panda$collections$Iterator* m$Iter1649;
    org$pandalanguage$pandac$MethodDecl* m1661;
    panda$core$Int64$nullable cost1670;
    panda$core$Int64$nullable cost1674;
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
                s1545 = ((panda$core$String*) p_expr->payload);
                panda$core$Int64 $tmp1547 = panda$core$String$length$R$panda$core$Int64(s1545);
                panda$core$Bit $tmp1548 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1547, ((panda$core$Int64) { 1 }));
                bool $tmp1546 = $tmp1548.value;
                if (!$tmp1546) goto $l1549;
                panda$core$Char32 $tmp1550 = panda$core$String$$IDX$panda$core$Int64$R$panda$core$Char32(s1545, ((panda$core$Int64) { 0 }));
                panda$core$UInt32 $tmp1551 = panda$core$Char32$convert$R$panda$core$UInt32($tmp1550);
                panda$core$Bit $tmp1552 = panda$core$UInt32$$LE$panda$core$UInt32$R$panda$core$Bit($tmp1551, ((panda$core$UInt32) { 255 }));
                $tmp1546 = $tmp1552.value;
                $l1549:;
                panda$core$Bit $tmp1553 = { $tmp1546 };
                if ($tmp1553.value) {
                {
                    return ((panda$core$Int64$nullable) { base1467, true });
                }
                }
                return ((panda$core$Int64$nullable) { .nonnull = false });
            }
            }
            org$pandalanguage$pandac$Type* $tmp1554 = org$pandalanguage$pandac$Type$Char16$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1555 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1554);
            if ($tmp1555.value) {
            {
                panda$collections$Iterator* $tmp1557 = panda$core$String$utf16$R$panda$collections$Iterator$LTpanda$core$Char16$GT(((panda$core$String*) p_expr->payload));
                utf161556 = $tmp1557;
                ITable* $tmp1558 = utf161556->$class->itable;
                while ($tmp1558->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1558 = $tmp1558->next;
                }
                $fn1560 $tmp1559 = $tmp1558->methods[0];
                panda$core$Bit $tmp1561 = $tmp1559(utf161556);
                if ($tmp1561.value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                ITable* $tmp1562 = utf161556->$class->itable;
                while ($tmp1562->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1562 = $tmp1562->next;
                }
                $fn1564 $tmp1563 = $tmp1562->methods[1];
                $tmp1563(utf161556);
                ITable* $tmp1565 = utf161556->$class->itable;
                while ($tmp1565->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1565 = $tmp1565->next;
                }
                $fn1567 $tmp1566 = $tmp1565->methods[0];
                panda$core$Bit $tmp1568 = $tmp1566(utf161556);
                if ($tmp1568.value) {
                {
                    panda$core$Int64 $tmp1569 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(base1467, ((panda$core$Int64) { 1 }));
                    return ((panda$core$Int64$nullable) { $tmp1569, true });
                }
                }
                return ((panda$core$Int64$nullable) { .nonnull = false });
            }
            }
            org$pandalanguage$pandac$Type* $tmp1570 = org$pandalanguage$pandac$Type$Char32$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1571 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1570);
            if ($tmp1571.value) {
            {
                panda$core$Int64 $tmp1572 = panda$core$String$length$R$panda$core$Int64(((panda$core$String*) p_expr->payload));
                panda$core$Bit $tmp1573 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1572, ((panda$core$Int64) { 1 }));
                if ($tmp1573.value) {
                {
                    panda$core$Int64 $tmp1574 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(base1467, ((panda$core$Int64) { 2 }));
                    return ((panda$core$Int64$nullable) { $tmp1574, true });
                }
                }
                return ((panda$core$Int64$nullable) { .nonnull = false });
            }
            }
        }
        break;
        case 1031:
        {
            panda$core$Bit $tmp1575 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(p_target);
            if ($tmp1575.value) {
            {
                panda$core$Int64 $tmp1576 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_expr->children);
                panda$core$Bit $tmp1577 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1576, ((panda$core$Int64) { 2 }));
                if ($tmp1577.value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Object* $tmp1579 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Bit $tmp1580 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1579)->kind, ((panda$core$Int64) { 1030 }));
                bool $tmp1578 = $tmp1580.value;
                if (!$tmp1578) goto $l1581;
                panda$core$Object* $tmp1582 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                panda$core$Bit $tmp1583 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1582)->kind, ((panda$core$Int64) { 1030 }));
                $tmp1578 = $tmp1583.value;
                $l1581:;
                panda$core$Bit $tmp1584 = { $tmp1578 };
                if ($tmp1584.value) {
                {
                    panda$core$Object* $tmp1585 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                    panda$core$Bit $tmp1586 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1585)->typeKind, ((panda$core$Int64) { 11 }));
                    if ($tmp1586.value) {
                    {
                        panda$core$Object* $tmp1587 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                        panda$core$Object* $tmp1588 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$Type*) $tmp1587)->subtypes, ((panda$core$Int64) { 0 }));
                        panda$core$Bit $tmp1589 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1588));
                        if ($tmp1589.value) {
                        {
                            return ((panda$core$Int64$nullable) { base1467, true });
                        }
                        }
                        panda$core$Int64 $tmp1590 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(base1467, ((panda$core$Int64) { 1 }));
                        return ((panda$core$Int64$nullable) { $tmp1590, true });
                    }
                    }
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Bit $tmp1591 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 21 }));
                PANDA_ASSERT($tmp1591.value);
                panda$core$Object* $tmp1593 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Object* $tmp1594 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                panda$core$Int64$nullable $tmp1595 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1593), ((org$pandalanguage$pandac$Type*) $tmp1594));
                cost11592 = $tmp1595;
                if (((panda$core$Bit) { !cost11592.nonnull }).value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Object* $tmp1597 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                panda$core$Object* $tmp1598 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                panda$core$Int64$nullable $tmp1599 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1597), ((org$pandalanguage$pandac$Type*) $tmp1598));
                cost21596 = $tmp1599;
                if (((panda$core$Bit) { !cost21596.nonnull }).value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Int64 $tmp1600 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(base1467, ((panda$core$Int64) cost11592.value));
                panda$core$Int64 $tmp1601 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1600, ((panda$core$Int64) cost21596.value));
                return ((panda$core$Int64$nullable) { $tmp1601, true });
            }
            }
            panda$core$Bit $tmp1602 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(p_target);
            if ($tmp1602.value) {
            {
                panda$core$Int64 $tmp1603 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_expr->children);
                panda$core$Bit $tmp1604 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1603, ((panda$core$Int64) { 3 }));
                if ($tmp1604.value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Object* $tmp1607 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Bit $tmp1608 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1607)->kind, ((panda$core$Int64) { 1030 }));
                bool $tmp1606 = $tmp1608.value;
                if (!$tmp1606) goto $l1609;
                panda$core$Object* $tmp1610 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                panda$core$Bit $tmp1611 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1610)->kind, ((panda$core$Int64) { 1030 }));
                $tmp1606 = $tmp1611.value;
                $l1609:;
                panda$core$Bit $tmp1612 = { $tmp1606 };
                if ($tmp1612.value) {
                {
                    panda$core$Object* $tmp1613 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                    panda$core$Bit $tmp1614 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1613)->typeKind, ((panda$core$Int64) { 11 }));
                    if ($tmp1614.value) {
                    {
                        panda$core$Object* $tmp1615 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                        panda$core$Object* $tmp1616 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$Type*) $tmp1615)->subtypes, ((panda$core$Int64) { 0 }));
                        panda$core$Bit $tmp1617 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1616));
                        if ($tmp1617.value) {
                        {
                            cost1605 = ((panda$core$Int64) { 0 });
                        }
                        }
                        else {
                        {
                            cost1605 = ((panda$core$Int64) { 1 });
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
                    panda$core$Bit $tmp1618 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 21 }));
                    PANDA_ASSERT($tmp1618.value);
                    panda$core$Object* $tmp1620 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                    panda$core$Object* $tmp1621 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                    panda$core$Int64$nullable $tmp1622 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1620), ((org$pandalanguage$pandac$Type*) $tmp1621));
                    cost11619 = $tmp1622;
                    if (((panda$core$Bit) { !cost11619.nonnull }).value) {
                    {
                        return ((panda$core$Int64$nullable) { .nonnull = false });
                    }
                    }
                    panda$core$Object* $tmp1624 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                    panda$core$Object* $tmp1625 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                    panda$core$Int64$nullable $tmp1626 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1624), ((org$pandalanguage$pandac$Type*) $tmp1625));
                    cost21623 = $tmp1626;
                    if (((panda$core$Bit) { !cost21623.nonnull }).value) {
                    {
                        return ((panda$core$Int64$nullable) { .nonnull = false });
                    }
                    }
                    panda$core$Int64 $tmp1627 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) cost11619.value), ((panda$core$Int64) cost21623.value));
                    cost1605 = $tmp1627;
                }
                }
                panda$core$Object* $tmp1629 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 2 }));
                panda$core$Object* $tmp1630 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 2 }));
                panda$core$Int64$nullable $tmp1631 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1629), ((org$pandalanguage$pandac$Type*) $tmp1630));
                cost31628 = $tmp1631;
                if (((panda$core$Bit) { !cost31628.nonnull }).value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Int64 $tmp1632 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(base1467, cost1605);
                panda$core$Int64 $tmp1633 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1632, ((panda$core$Int64) cost31628.value));
                return ((panda$core$Int64$nullable) { $tmp1633, true });
            }
            }
            org$pandalanguage$pandac$Type* $tmp1634 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
            panda$core$Int64$nullable $tmp1635 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1634, p_target);
            return $tmp1635;
        }
        break;
        case 1040:
        {
            panda$collections$Array* $tmp1637 = (panda$collections$Array*) malloc(40);
            $tmp1637->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1637->refCount.value = 1;
            panda$collections$Array$init($tmp1637);
            args1636 = $tmp1637;
            panda$core$Object* $tmp1639 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
            panda$collections$Array$add$panda$collections$Array$T(args1636, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp1639)));
            panda$core$Bit $tmp1640 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(base1467, ((panda$core$Int64) { 0 }));
            PANDA_ASSERT($tmp1640.value);
            panda$core$Object* $tmp1641 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp1643 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1641), &$s1642, ((panda$collections$ListView*) args1636));
            panda$core$Int64$nullable $tmp1644 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1643, p_target);
            return $tmp1644;
        }
        break;
    }
    panda$core$Bit $tmp1645 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_target);
    panda$core$Bit $tmp1646 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1645);
    if ($tmp1646.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp1648 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_target);
    targetClass1647 = $tmp1648;
    if (((panda$core$Bit) { targetClass1647 == NULL }).value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    {
        ITable* $tmp1650 = ((panda$collections$Iterable*) targetClass1647->methods)->$class->itable;
        while ($tmp1650->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1650 = $tmp1650->next;
        }
        $fn1652 $tmp1651 = $tmp1650->methods[0];
        panda$collections$Iterator* $tmp1653 = $tmp1651(((panda$collections$Iterable*) targetClass1647->methods));
        m$Iter1649 = $tmp1653;
        $l1654:;
        ITable* $tmp1656 = m$Iter1649->$class->itable;
        while ($tmp1656->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1656 = $tmp1656->next;
        }
        $fn1658 $tmp1657 = $tmp1656->methods[0];
        panda$core$Bit $tmp1659 = $tmp1657(m$Iter1649);
        panda$core$Bit $tmp1660 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1659);
        if (!$tmp1660.value) goto $l1655;
        {
            ITable* $tmp1662 = m$Iter1649->$class->itable;
            while ($tmp1662->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1662 = $tmp1662->next;
            }
            $fn1664 $tmp1663 = $tmp1662->methods[1];
            panda$core$Object* $tmp1665 = $tmp1663(m$Iter1649);
            m1661 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1665);
            panda$core$Bit $tmp1666 = org$pandalanguage$pandac$Annotations$isImplicit$R$panda$core$Bit(m1661->annotations);
            if ($tmp1666.value) {
            {
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m1661);
                panda$core$Bit $tmp1667 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(m1661->methodKind, ((panda$core$Int64) { 59 }));
                PANDA_ASSERT($tmp1667.value);
                panda$core$Int64 $tmp1668 = panda$collections$Array$get_count$R$panda$core$Int64(m1661->parameters);
                panda$core$Bit $tmp1669 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1668, ((panda$core$Int64) { 1 }));
                PANDA_ASSERT($tmp1669.value);
                panda$core$Object* $tmp1671 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(m1661->parameters, ((panda$core$Int64) { 0 }));
                panda$core$Int64$nullable $tmp1672 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1671)->type);
                cost1670 = $tmp1672;
                if (((panda$core$Bit) { cost1670.nonnull }).value) {
                {
                    panda$core$Int64 $tmp1673 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(base1467, ((panda$core$Int64) cost1670.value));
                    return ((panda$core$Int64$nullable) { $tmp1673, true });
                }
                }
            }
            }
        }
        goto $l1654;
        $l1655:;
    }
    PANDA_ASSERT(((panda$core$Bit) { p_expr->type != NULL }).value);
    panda$core$Int64$nullable $tmp1675 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr->type, p_target);
    cost1674 = $tmp1675;
    if (((panda$core$Bit) { cost1674.nonnull }).value) {
    {
        panda$core$Int64 $tmp1676 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(base1467, ((panda$core$Int64) cost1674.value));
        return ((panda$core$Int64$nullable) { $tmp1676, true });
    }
    }
    return ((panda$core$Int64$nullable) { .nonnull = false });
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$doCoerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr, org$pandalanguage$pandac$Type* p_target) {
    panda$collections$Array* children1685;
    org$pandalanguage$pandac$IRNode* intermediate1690;
    org$pandalanguage$pandac$IRNode* coerced1718;
    org$pandalanguage$pandac$IRNode* coerced1739;
    org$pandalanguage$pandac$IRNode* varType1753;
    panda$collections$Array* args1763;
    org$pandalanguage$pandac$IRNode* target1771;
    panda$collections$Array* args1782;
    org$pandalanguage$pandac$IRNode* target1794;
    panda$collections$Array* args1805;
    org$pandalanguage$pandac$IRNode* target1813;
    org$pandalanguage$pandac$Type* param1829;
    org$pandalanguage$pandac$IRNode* start1831;
    org$pandalanguage$pandac$IRNode* end1834;
    panda$collections$Array* args1837;
    org$pandalanguage$pandac$IRNode* target1843;
    org$pandalanguage$pandac$Type* endPoint1859;
    org$pandalanguage$pandac$IRNode* start1861;
    org$pandalanguage$pandac$IRNode* end1864;
    org$pandalanguage$pandac$IRNode* step1867;
    panda$collections$Array* args1871;
    org$pandalanguage$pandac$IRNode* target1877;
    panda$collections$ImmutableArray* args1885;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1886;
    panda$collections$Array* children1898;
    org$pandalanguage$pandac$IRNode* intermediate1904;
    org$pandalanguage$pandac$ClassDecl* cl1909;
    panda$collections$Iterator* m$Iter1911;
    org$pandalanguage$pandac$MethodDecl* m1923;
    org$pandalanguage$pandac$IRNode* type1934;
    panda$collections$Array* args1939;
    panda$collections$Array* children1943;
    if (((panda$core$Bit) { p_expr == NULL }).value) {
    {
        return NULL;
    }
    }
    PANDA_ASSERT(p_expr->type->resolved.value);
    PANDA_ASSERT(p_target->resolved.value);
    panda$core$Bit $tmp1677 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_expr->type, p_target);
    if ($tmp1677.value) {
    {
        return p_expr;
    }
    }
    panda$core$Bit $tmp1679 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->type->typeKind, ((panda$core$Int64) { 11 }));
    bool $tmp1678 = $tmp1679.value;
    if (!$tmp1678) goto $l1680;
    panda$core$Bit $tmp1681 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
    $tmp1678 = $tmp1681.value;
    $l1680:;
    panda$core$Bit $tmp1682 = { $tmp1678 };
    if ($tmp1682.value) {
    {
        panda$core$Object* $tmp1683 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp1684 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1683), p_target);
        if ($tmp1684.value) {
        {
            panda$collections$Array* $tmp1686 = (panda$collections$Array*) malloc(40);
            $tmp1686->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1686->refCount.value = 1;
            panda$collections$Array$init($tmp1686);
            children1685 = $tmp1686;
            panda$collections$Array$add$panda$collections$Array$T(children1685, ((panda$core$Object*) p_expr));
            org$pandalanguage$pandac$IRNode* $tmp1688 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp1688->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1688->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp1688, ((panda$core$Int64) { 1009 }), p_expr->position, p_target, ((panda$core$Object*) wrap_panda$core$Bit(((panda$core$Bit) { false }))), ((panda$collections$ListView*) children1685));
            return $tmp1688;
        }
        }
        panda$core$Object* $tmp1691 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->type->subtypes, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp1692 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, ((org$pandalanguage$pandac$Type*) $tmp1691));
        intermediate1690 = $tmp1692;
        org$pandalanguage$pandac$IRNode* $tmp1693 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, intermediate1690, p_target);
        return $tmp1693;
    }
    }
    switch (p_expr->kind.value) {
        case 1004:
        {
            panda$core$Bit $tmp1695 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            bool $tmp1694 = $tmp1695.value;
            if (!$tmp1694) goto $l1696;
            panda$core$Int64 $tmp1697 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64(self, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1698 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1699 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1697, $tmp1698);
            $tmp1694 = $tmp1699.value;
            $l1696:;
            panda$core$Bit $tmp1700 = { $tmp1694 };
            if ($tmp1700.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1701 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1701->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1701->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp1701, ((panda$core$Int64) { 1004 }), p_expr->position, p_target, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
                return $tmp1701;
            }
            }
            else {
            panda$core$Bit $tmp1704 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 13 }));
            bool $tmp1703 = $tmp1704.value;
            if (!$tmp1703) goto $l1705;
            panda$core$Int64 $tmp1706 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64(self, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1707 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1708 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1706, $tmp1707);
            $tmp1703 = $tmp1708.value;
            $l1705:;
            panda$core$Bit $tmp1709 = { $tmp1703 };
            if ($tmp1709.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1710 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1710->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1710->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp1710, ((panda$core$Int64) { 1004 }), p_expr->position, p_target, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
                return $tmp1710;
            }
            }
            }
            panda$core$Bit $tmp1713 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 10 }));
            bool $tmp1712 = $tmp1713.value;
            if (!$tmp1712) goto $l1714;
            panda$core$Bit $tmp1715 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            panda$core$Bit $tmp1716 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1715);
            $tmp1712 = $tmp1716.value;
            $l1714:;
            panda$core$Bit $tmp1717 = { $tmp1712 };
            if ($tmp1717.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1719 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp1720 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, $tmp1719);
                coerced1718 = $tmp1720;
                if (((panda$core$Bit) { coerced1718 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$IRNode* $tmp1721 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, coerced1718, p_target);
                return $tmp1721;
            }
            }
        }
        break;
        case 1032:
        {
            panda$core$Bit $tmp1723 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            bool $tmp1722 = $tmp1723.value;
            if (!$tmp1722) goto $l1724;
            panda$core$Int64 $tmp1725 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1726 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp1725);
            panda$core$Int64 $tmp1727 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(self, $tmp1726);
            panda$core$Int64 $tmp1728 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1729 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1727, $tmp1728);
            $tmp1722 = $tmp1729.value;
            $l1724:;
            panda$core$Bit $tmp1730 = { $tmp1722 };
            if ($tmp1730.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1731 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1731->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1731->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp1731, ((panda$core$Int64) { 1032 }), p_expr->position, p_target, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
                return $tmp1731;
            }
            }
            panda$core$Bit $tmp1734 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 10 }));
            bool $tmp1733 = $tmp1734.value;
            if (!$tmp1733) goto $l1735;
            panda$core$Bit $tmp1736 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            panda$core$Bit $tmp1737 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1736);
            $tmp1733 = $tmp1737.value;
            $l1735:;
            panda$core$Bit $tmp1738 = { $tmp1733 };
            if ($tmp1738.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1740 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp1741 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, $tmp1740);
                coerced1739 = $tmp1741;
                if (((panda$core$Bit) { coerced1739 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$IRNode* $tmp1742 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, coerced1739, p_target);
                return $tmp1742;
            }
            }
        }
        break;
        case 1011:
        {
            org$pandalanguage$pandac$Type* $tmp1743 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1744 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1743);
            if ($tmp1744.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1745 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1745->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1745->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp1745, ((panda$core$Int64) { 1011 }), p_expr->position, p_target, ((panda$core$Bit$wrapper*) p_expr->payload)->value);
                return $tmp1745;
            }
            }
            panda$core$Bit $tmp1748 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_target);
            bool $tmp1747 = $tmp1748.value;
            if (!$tmp1747) goto $l1749;
            org$pandalanguage$pandac$Type* $tmp1750 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1751 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1750);
            $tmp1747 = $tmp1751.value;
            $l1749:;
            panda$core$Bit $tmp1752 = { $tmp1747 };
            if ($tmp1752.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1754 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp1755 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, $tmp1754);
                varType1753 = $tmp1755;
                if (((panda$core$Bit) { varType1753 != NULL }).value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp1756 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, varType1753, p_target);
                    return $tmp1756;
                }
                }
            }
            }
        }
        break;
        case 1033:
        {
            org$pandalanguage$pandac$Type* $tmp1758 = org$pandalanguage$pandac$Type$Char8$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1759 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1758);
            bool $tmp1757 = $tmp1759.value;
            if (!$tmp1757) goto $l1760;
            panda$core$Int64$nullable $tmp1761 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, p_target);
            $tmp1757 = ((panda$core$Bit) { $tmp1761.nonnull }).value;
            $l1760:;
            panda$core$Bit $tmp1762 = { $tmp1757 };
            if ($tmp1762.value) {
            {
                panda$collections$Array* $tmp1764 = (panda$collections$Array*) malloc(40);
                $tmp1764->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp1764->refCount.value = 1;
                panda$collections$Array$init($tmp1764);
                args1763 = $tmp1764;
                org$pandalanguage$pandac$IRNode* $tmp1766 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1766->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1766->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1768 = org$pandalanguage$pandac$Type$BuiltinUInt8$R$org$pandalanguage$pandac$Type();
                panda$core$Char32 $tmp1769 = panda$core$String$$IDX$panda$core$Int64$R$panda$core$Char32(((panda$core$String*) p_expr->payload), ((panda$core$Int64) { 0 }));
                panda$core$UInt64 $tmp1770 = panda$core$Char32$convert$R$panda$core$UInt64($tmp1769);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp1766, ((panda$core$Int64) { 1004 }), p_expr->position, $tmp1768, $tmp1770);
                panda$collections$Array$add$panda$collections$Array$T(args1763, ((panda$core$Object*) $tmp1766));
                org$pandalanguage$pandac$IRNode* $tmp1772 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1772->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1772->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1774 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1772, ((panda$core$Int64) { 1001 }), p_expr->position, $tmp1774, p_target);
                target1771 = $tmp1772;
                org$pandalanguage$pandac$IRNode* $tmp1775 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target1771, ((panda$collections$ListView*) args1763));
                return $tmp1775;
            }
            }
            org$pandalanguage$pandac$Type* $tmp1777 = org$pandalanguage$pandac$Type$Char16$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1778 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1777);
            bool $tmp1776 = $tmp1778.value;
            if (!$tmp1776) goto $l1779;
            panda$core$Int64$nullable $tmp1780 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, p_target);
            $tmp1776 = ((panda$core$Bit) { $tmp1780.nonnull }).value;
            $l1779:;
            panda$core$Bit $tmp1781 = { $tmp1776 };
            if ($tmp1781.value) {
            {
                panda$collections$Array* $tmp1783 = (panda$collections$Array*) malloc(40);
                $tmp1783->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp1783->refCount.value = 1;
                panda$collections$Array$init($tmp1783);
                args1782 = $tmp1783;
                org$pandalanguage$pandac$IRNode* $tmp1785 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1785->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1785->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1787 = org$pandalanguage$pandac$Type$BuiltinUInt16$R$org$pandalanguage$pandac$Type();
                panda$collections$Iterator* $tmp1788 = panda$core$String$utf16$R$panda$collections$Iterator$LTpanda$core$Char16$GT(((panda$core$String*) p_expr->payload));
                ITable* $tmp1789 = $tmp1788->$class->itable;
                while ($tmp1789->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1789 = $tmp1789->next;
                }
                $fn1791 $tmp1790 = $tmp1789->methods[1];
                panda$core$Object* $tmp1792 = $tmp1790($tmp1788);
                panda$core$UInt64 $tmp1793 = panda$core$Char16$convert$R$panda$core$UInt64(((panda$core$Char16$wrapper*) $tmp1792)->value);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp1785, ((panda$core$Int64) { 1004 }), p_expr->position, $tmp1787, $tmp1793);
                panda$collections$Array$add$panda$collections$Array$T(args1782, ((panda$core$Object*) $tmp1785));
                org$pandalanguage$pandac$IRNode* $tmp1795 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1795->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1795->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1797 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1795, ((panda$core$Int64) { 1001 }), p_expr->position, $tmp1797, p_target);
                target1794 = $tmp1795;
                org$pandalanguage$pandac$IRNode* $tmp1798 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target1794, ((panda$collections$ListView*) args1782));
                return $tmp1798;
            }
            }
            org$pandalanguage$pandac$Type* $tmp1800 = org$pandalanguage$pandac$Type$Char32$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1801 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1800);
            bool $tmp1799 = $tmp1801.value;
            if (!$tmp1799) goto $l1802;
            panda$core$Int64$nullable $tmp1803 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, p_target);
            $tmp1799 = ((panda$core$Bit) { $tmp1803.nonnull }).value;
            $l1802:;
            panda$core$Bit $tmp1804 = { $tmp1799 };
            if ($tmp1804.value) {
            {
                panda$collections$Array* $tmp1806 = (panda$collections$Array*) malloc(40);
                $tmp1806->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp1806->refCount.value = 1;
                panda$collections$Array$init($tmp1806);
                args1805 = $tmp1806;
                org$pandalanguage$pandac$IRNode* $tmp1808 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1808->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1808->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1810 = org$pandalanguage$pandac$Type$BuiltinUInt32$R$org$pandalanguage$pandac$Type();
                panda$core$Char32 $tmp1811 = panda$core$String$$IDX$panda$core$Int64$R$panda$core$Char32(((panda$core$String*) p_expr->payload), ((panda$core$Int64) { 0 }));
                panda$core$UInt64 $tmp1812 = panda$core$Char32$convert$R$panda$core$UInt64($tmp1811);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp1808, ((panda$core$Int64) { 1004 }), p_expr->position, $tmp1810, $tmp1812);
                panda$collections$Array$add$panda$collections$Array$T(args1805, ((panda$core$Object*) $tmp1808));
                org$pandalanguage$pandac$IRNode* $tmp1814 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1814->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1814->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1816 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1814, ((panda$core$Int64) { 1001 }), p_expr->position, $tmp1816, p_target);
                target1813 = $tmp1814;
                org$pandalanguage$pandac$IRNode* $tmp1817 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target1813, ((panda$collections$ListView*) args1805));
                return $tmp1817;
            }
            }
        }
        break;
        case 1031:
        {
            panda$core$Bit $tmp1818 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(p_target);
            if ($tmp1818.value) {
            {
                panda$core$Int64 $tmp1819 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_expr->children);
                panda$core$Bit $tmp1820 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1819, ((panda$core$Int64) { 2 }));
                if ($tmp1820.value) {
                {
                    panda$core$String* $tmp1822 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1821, ((panda$core$Object*) p_target));
                    panda$core$String* $tmp1824 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1822, &$s1823);
                    panda$core$String* $tmp1825 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1824, ((panda$core$Object*) p_expr));
                    panda$core$String* $tmp1827 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1825, &$s1826);
                    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_expr->position, $tmp1827);
                    return NULL;
                }
                }
                panda$core$Bit $tmp1828 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 21 }));
                PANDA_ASSERT($tmp1828.value);
                panda$core$Object* $tmp1830 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                param1829 = ((org$pandalanguage$pandac$Type*) $tmp1830);
                panda$core$Object* $tmp1832 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$IRNode* $tmp1833 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1832), param1829);
                start1831 = $tmp1833;
                if (((panda$core$Bit) { start1831 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$core$Object* $tmp1835 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$IRNode* $tmp1836 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1835), param1829);
                end1834 = $tmp1836;
                if (((panda$core$Bit) { end1834 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp1838 = (panda$collections$Array*) malloc(40);
                $tmp1838->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp1838->refCount.value = 1;
                panda$collections$Array$init($tmp1838);
                args1837 = $tmp1838;
                panda$collections$Array$add$panda$collections$Array$T(args1837, ((panda$core$Object*) start1831));
                panda$collections$Array$add$panda$collections$Array$T(args1837, ((panda$core$Object*) end1834));
                org$pandalanguage$pandac$IRNode* $tmp1840 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1840->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1840->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1842 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp1840, ((panda$core$Int64) { 1011 }), p_expr->position, $tmp1842, ((panda$core$Bit$wrapper*) p_expr->payload)->value);
                panda$collections$Array$add$panda$collections$Array$T(args1837, ((panda$core$Object*) $tmp1840));
                org$pandalanguage$pandac$IRNode* $tmp1844 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1844->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1844->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1846 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1844, ((panda$core$Int64) { 1001 }), p_expr->position, $tmp1846, p_target);
                target1843 = $tmp1844;
                org$pandalanguage$pandac$IRNode* $tmp1847 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target1843, ((panda$collections$ListView*) args1837));
                return $tmp1847;
            }
            }
            else {
            panda$core$Bit $tmp1848 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(p_target);
            if ($tmp1848.value) {
            {
                panda$core$Int64 $tmp1849 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_expr->children);
                panda$core$Bit $tmp1850 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1849, ((panda$core$Int64) { 3 }));
                if ($tmp1850.value) {
                {
                    panda$core$String* $tmp1852 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1851, ((panda$core$Object*) p_target));
                    panda$core$String* $tmp1854 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1852, &$s1853);
                    panda$core$String* $tmp1855 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1854, ((panda$core$Object*) p_expr));
                    panda$core$String* $tmp1857 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1855, &$s1856);
                    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_expr->position, $tmp1857);
                    return NULL;
                }
                }
                panda$core$Bit $tmp1858 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 21 }));
                PANDA_ASSERT($tmp1858.value);
                panda$core$Object* $tmp1860 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                endPoint1859 = ((org$pandalanguage$pandac$Type*) $tmp1860);
                panda$core$Object* $tmp1862 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$IRNode* $tmp1863 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1862), endPoint1859);
                start1861 = $tmp1863;
                if (((panda$core$Bit) { start1861 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$core$Object* $tmp1865 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$IRNode* $tmp1866 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1865), endPoint1859);
                end1864 = $tmp1866;
                panda$core$Object* $tmp1868 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 2 }));
                panda$core$Object* $tmp1869 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 2 }));
                org$pandalanguage$pandac$IRNode* $tmp1870 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1868), ((org$pandalanguage$pandac$Type*) $tmp1869));
                step1867 = $tmp1870;
                panda$collections$Array* $tmp1872 = (panda$collections$Array*) malloc(40);
                $tmp1872->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp1872->refCount.value = 1;
                panda$collections$Array$init($tmp1872);
                args1871 = $tmp1872;
                panda$collections$Array$add$panda$collections$Array$T(args1871, ((panda$core$Object*) start1861));
                panda$collections$Array$add$panda$collections$Array$T(args1871, ((panda$core$Object*) end1864));
                panda$collections$Array$add$panda$collections$Array$T(args1871, ((panda$core$Object*) step1867));
                org$pandalanguage$pandac$IRNode* $tmp1874 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1874->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1874->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1876 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp1874, ((panda$core$Int64) { 1011 }), p_expr->position, $tmp1876, ((panda$core$Bit$wrapper*) p_expr->payload)->value);
                panda$collections$Array$add$panda$collections$Array$T(args1871, ((panda$core$Object*) $tmp1874));
                org$pandalanguage$pandac$IRNode* $tmp1878 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1878->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1878->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1880 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1878, ((panda$core$Int64) { 1001 }), p_expr->position, $tmp1880, p_target);
                target1877 = $tmp1878;
                org$pandalanguage$pandac$IRNode* $tmp1881 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target1877, ((panda$collections$ListView*) args1871));
                return $tmp1881;
            }
            }
            else {
            {
                org$pandalanguage$pandac$IRNode* $tmp1882 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp1883 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp1882, p_target);
                return $tmp1883;
            }
            }
            }
        }
        break;
        case 1039:
        {
            org$pandalanguage$pandac$IRNode* $tmp1884 = org$pandalanguage$pandac$Compiler$resolveMethodCall$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, p_target);
            return $tmp1884;
        }
        break;
        case 1040:
        {
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1886, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$collections$ImmutableArray* $tmp1887 = panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(p_expr->children, $tmp1886);
            args1885 = $tmp1887;
            panda$core$Object* $tmp1888 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp1890 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1888), &$s1889, ((panda$collections$ListView*) args1885), p_target);
            org$pandalanguage$pandac$IRNode* $tmp1891 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp1890, p_target);
            return $tmp1891;
        }
        break;
    }
    panda$core$Bit $tmp1892 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp1892.value) {
    {
        panda$core$Bit $tmp1893 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1030 }));
        if ($tmp1893.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp1894 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp1894->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1894->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp1894, ((panda$core$Int64) { 1030 }), p_expr->position, p_target);
            return $tmp1894;
        }
        }
        panda$core$Object* $tmp1896 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp1897 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_expr->type, ((org$pandalanguage$pandac$Type*) $tmp1896));
        if ($tmp1897.value) {
        {
            panda$collections$Array* $tmp1899 = (panda$collections$Array*) malloc(40);
            $tmp1899->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1899->refCount.value = 1;
            panda$collections$Array$init($tmp1899);
            children1898 = $tmp1899;
            panda$collections$Array$add$panda$collections$Array$T(children1898, ((panda$core$Object*) p_expr));
            org$pandalanguage$pandac$IRNode* $tmp1901 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp1901->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1901->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp1901, ((panda$core$Int64) { 1009 }), p_expr->position, p_target, ((panda$core$Object*) wrap_panda$core$Bit(((panda$core$Bit) { false }))), ((panda$collections$ListView*) children1898));
            return $tmp1901;
        }
        }
        panda$core$Bit $tmp1903 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_expr->type->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp1903.value) {
        {
            panda$core$Object* $tmp1905 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp1906 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, ((org$pandalanguage$pandac$Type*) $tmp1905));
            intermediate1904 = $tmp1906;
            org$pandalanguage$pandac$IRNode* $tmp1907 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, intermediate1904, p_target);
            return $tmp1907;
        }
        }
    }
    }
    panda$core$Int64$nullable $tmp1908 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, p_target);
    if (((panda$core$Bit) { $tmp1908.nonnull }).value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp1910 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_target);
        cl1909 = $tmp1910;
        if (((panda$core$Bit) { cl1909 != NULL }).value) {
        {
            {
                ITable* $tmp1912 = ((panda$collections$Iterable*) cl1909->methods)->$class->itable;
                while ($tmp1912->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1912 = $tmp1912->next;
                }
                $fn1914 $tmp1913 = $tmp1912->methods[0];
                panda$collections$Iterator* $tmp1915 = $tmp1913(((panda$collections$Iterable*) cl1909->methods));
                m$Iter1911 = $tmp1915;
                $l1916:;
                ITable* $tmp1918 = m$Iter1911->$class->itable;
                while ($tmp1918->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1918 = $tmp1918->next;
                }
                $fn1920 $tmp1919 = $tmp1918->methods[0];
                panda$core$Bit $tmp1921 = $tmp1919(m$Iter1911);
                panda$core$Bit $tmp1922 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1921);
                if (!$tmp1922.value) goto $l1917;
                {
                    ITable* $tmp1924 = m$Iter1911->$class->itable;
                    while ($tmp1924->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1924 = $tmp1924->next;
                    }
                    $fn1926 $tmp1925 = $tmp1924->methods[1];
                    panda$core$Object* $tmp1927 = $tmp1925(m$Iter1911);
                    m1923 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1927);
                    panda$core$Bit $tmp1928 = org$pandalanguage$pandac$Annotations$isImplicit$R$panda$core$Bit(m1923->annotations);
                    if ($tmp1928.value) {
                    {
                        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m1923);
                        panda$core$Bit $tmp1929 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(m1923->methodKind, ((panda$core$Int64) { 59 }));
                        PANDA_ASSERT($tmp1929.value);
                        panda$core$Int64 $tmp1930 = panda$collections$Array$get_count$R$panda$core$Int64(m1923->parameters);
                        panda$core$Bit $tmp1931 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1930, ((panda$core$Int64) { 1 }));
                        PANDA_ASSERT($tmp1931.value);
                        panda$core$Object* $tmp1932 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(m1923->parameters, ((panda$core$Int64) { 0 }));
                        panda$core$Int64$nullable $tmp1933 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1932)->type);
                        if (((panda$core$Bit) { $tmp1933.nonnull }).value) {
                        {
                            org$pandalanguage$pandac$IRNode* $tmp1935 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                            $tmp1935->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                            $tmp1935->refCount.value = 1;
                            org$pandalanguage$pandac$Type* $tmp1937 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                            org$pandalanguage$pandac$Type* $tmp1938 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl1909);
                            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1935, ((panda$core$Int64) { 1001 }), p_expr->position, $tmp1937, $tmp1938);
                            type1934 = $tmp1935;
                            panda$collections$Array* $tmp1940 = (panda$collections$Array*) malloc(40);
                            $tmp1940->$class = (panda$core$Class*) &panda$collections$Array$class;
                            $tmp1940->refCount.value = 1;
                            panda$collections$Array$init$panda$core$Int64($tmp1940, ((panda$core$Int64) { 1 }));
                            args1939 = $tmp1940;
                            panda$collections$Array$add$panda$collections$Array$T(args1939, ((panda$core$Object*) p_expr));
                            org$pandalanguage$pandac$IRNode* $tmp1942 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, type1934, ((panda$collections$ListView*) args1939));
                            return $tmp1942;
                        }
                        }
                    }
                    }
                }
                goto $l1916;
                $l1917:;
            }
        }
        }
        panda$collections$Array* $tmp1944 = (panda$collections$Array*) malloc(40);
        $tmp1944->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp1944->refCount.value = 1;
        panda$collections$Array$init$panda$core$Int64($tmp1944, ((panda$core$Int64) { 1 }));
        children1943 = $tmp1944;
        panda$collections$Array$add$panda$collections$Array$T(children1943, ((panda$core$Object*) p_expr));
        org$pandalanguage$pandac$IRNode* $tmp1946 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp1946->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp1946->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp1946, ((panda$core$Int64) { 1009 }), p_expr->position, p_target, ((panda$core$Object*) wrap_panda$core$Bit(((panda$core$Bit) { false }))), ((panda$collections$ListView*) children1943));
        return $tmp1946;
    }
    }
    panda$core$String* $tmp1949 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1948, ((panda$core$Object*) p_target));
    panda$core$String* $tmp1951 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1949, &$s1950);
    panda$core$String* $tmp1952 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1951, ((panda$core$Object*) p_expr->type));
    panda$core$String* $tmp1954 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1952, &$s1953);
    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_expr->position, $tmp1954);
    return NULL;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr, org$pandalanguage$pandac$Type* p_target) {
    org$pandalanguage$pandac$IRNode* result1955;
    org$pandalanguage$pandac$IRNode* $tmp1956 = org$pandalanguage$pandac$Compiler$doCoerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, p_target);
    result1955 = $tmp1956;
    bool $tmp1957 = ((panda$core$Bit) { result1955 == NULL }).value;
    if ($tmp1957) goto $l1958;
    panda$core$Bit $tmp1959 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(result1955->type, p_target);
    $tmp1957 = $tmp1959.value;
    $l1958:;
    panda$core$Bit $tmp1960 = { $tmp1957 };
    PANDA_ASSERT($tmp1960.value);
    return result1955;
}
panda$core$Bit org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type, org$pandalanguage$pandac$Type* p_target) {
    panda$core$Bit $tmp1962 = org$pandalanguage$pandac$Type$isPointer$R$panda$core$Bit(p_type);
    bool $tmp1961 = $tmp1962.value;
    if (!$tmp1961) goto $l1963;
    panda$core$Bit $tmp1964 = org$pandalanguage$pandac$Type$isPointer$R$panda$core$Bit(p_target);
    $tmp1961 = $tmp1964.value;
    $l1963:;
    panda$core$Bit $tmp1965 = { $tmp1961 };
    if ($tmp1965.value) {
    {
        return ((panda$core$Bit) { true });
    }
    }
    panda$core$Int64$nullable $tmp1966 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_type, p_target);
    if (((panda$core$Bit) { $tmp1966.nonnull }).value) {
    {
        return ((panda$core$Bit) { true });
    }
    }
    panda$core$Bit $tmp1968 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_type);
    bool $tmp1967 = $tmp1968.value;
    if (!$tmp1967) goto $l1969;
    panda$core$Bit $tmp1970 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_target);
    $tmp1967 = $tmp1970.value;
    $l1969:;
    panda$core$Bit $tmp1971 = { $tmp1967 };
    if ($tmp1971.value) {
    {
        return ((panda$core$Bit) { true });
    }
    }
    panda$core$Bit $tmp1972 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 16 }));
    if ($tmp1972.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Int64$nullable $tmp1973 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_target, p_type);
    return ((panda$core$Bit) { $tmp1973.nonnull });
}
panda$core$Bit org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_node, org$pandalanguage$pandac$Type* p_target) {
    panda$core$Bit result1975;
    org$pandalanguage$pandac$IRNode* resolved1982;
    panda$core$Int64$nullable $tmp1974 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_node, p_target);
    if (((panda$core$Bit) { $tmp1974.nonnull }).value) {
    {
        return ((panda$core$Bit) { true });
    }
    }
    panda$core$Bit $tmp1976 = org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_node->type, p_target);
    result1975 = $tmp1976;
    panda$core$Bit $tmp1978 = panda$core$Bit$$NOT$R$panda$core$Bit(result1975);
    bool $tmp1977 = $tmp1978.value;
    if (!$tmp1977) goto $l1979;
    panda$core$Bit $tmp1980 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_node->type->typeKind, ((panda$core$Int64) { 17 }));
    $tmp1977 = $tmp1980.value;
    $l1979:;
    panda$core$Bit $tmp1981 = { $tmp1977 };
    if ($tmp1981.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp1983 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_node);
        resolved1982 = $tmp1983;
        if (((panda$core$Bit) { resolved1982 != NULL }).value) {
        {
            panda$core$Bit $tmp1984 = org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, resolved1982, p_target);
            result1975 = $tmp1984;
        }
        }
    }
    }
    return result1975;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_node, org$pandalanguage$pandac$Position p_position, panda$core$Bit p_isExplicit, org$pandalanguage$pandac$Type* p_target) {
    org$pandalanguage$pandac$IRNode* resolved2005;
    panda$collections$Array* children2008;
    panda$core$Bit $tmp1985 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_node->type, p_target);
    if ($tmp1985.value) {
    {
        return p_node;
    }
    }
    org$pandalanguage$pandac$Type* $tmp1986 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1987 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1986);
    PANDA_ASSERT($tmp1987.value);
    bool $tmp1988 = p_isExplicit.value;
    if (!$tmp1988) goto $l1989;
    panda$core$Bit $tmp1990 = org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_node, p_target);
    panda$core$Bit $tmp1991 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1990);
    $tmp1988 = $tmp1991.value;
    $l1989:;
    panda$core$Bit $tmp1992 = { $tmp1988 };
    if ($tmp1992.value) {
    {
        panda$core$String* $tmp1994 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1993, ((panda$core$Object*) p_node->type));
        panda$core$String* $tmp1996 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1994, &$s1995);
        panda$core$String* $tmp1998 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1997, ((panda$core$Object*) p_target));
        panda$core$String* $tmp2000 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1998, &$s1999);
        panda$core$String* $tmp2001 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1996, $tmp2000);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp2001);
    }
    }
    switch (p_node->kind.value) {
        case 1004:
        case 1032:
        case 1011:
        {
            org$pandalanguage$pandac$IRNode* $tmp2002 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_node, p_target);
            return $tmp2002;
        }
        break;
        case 1039:
        case 1040:
        {
            panda$core$Int64$nullable $tmp2003 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_node, p_target);
            if (((panda$core$Bit) { $tmp2003.nonnull }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2004 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_node, p_target);
                return $tmp2004;
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp2006 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_node);
            resolved2005 = $tmp2006;
            if (((panda$core$Bit) { resolved2005 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2007 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, resolved2005, p_position, p_isExplicit, p_target);
                return $tmp2007;
            }
            }
        }
        break;
    }
    panda$collections$Array* $tmp2009 = (panda$collections$Array*) malloc(40);
    $tmp2009->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2009->refCount.value = 1;
    panda$collections$Array$init($tmp2009);
    children2008 = $tmp2009;
    panda$collections$Array$add$panda$collections$Array$T(children2008, ((panda$core$Object*) p_node));
    org$pandalanguage$pandac$IRNode* $tmp2011 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp2011->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2011->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2011, ((panda$core$Int64) { 1009 }), p_position, p_target, ((panda$core$Object*) wrap_panda$core$Bit(p_isExplicit)), ((panda$collections$ListView*) children2008));
    return $tmp2011;
}
panda$core$Int64$nullable org$pandalanguage$pandac$Compiler$callCost$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodRef* p_m, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedReturn) {
    panda$core$Int64 result2019;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2020;
    panda$core$Int64$nullable cost2035;
    panda$core$Int64$nullable cost2049;
    PANDA_ASSERT(p_m->value->resolved.value);
    panda$core$Int64 $tmp2013 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
    ITable* $tmp2014 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp2014->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2014 = $tmp2014->next;
    }
    $fn2016 $tmp2015 = $tmp2014->methods[0];
    panda$core$Int64 $tmp2017 = $tmp2015(((panda$collections$CollectionView*) p_args));
    panda$core$Bit $tmp2018 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp2013, $tmp2017);
    if ($tmp2018.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    result2019 = ((panda$core$Int64) { 0 });
    panda$core$Int64 $tmp2021 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2020, ((panda$core$Int64) { 0 }), $tmp2021, ((panda$core$Bit) { false }));
    int64_t $tmp2023 = $tmp2020.min.value;
    panda$core$Int64 i2022 = { $tmp2023 };
    int64_t $tmp2025 = $tmp2020.max.value;
    bool $tmp2026 = $tmp2020.inclusive.value;
    if ($tmp2026) goto $l2033; else goto $l2034;
    $l2033:;
    if ($tmp2023 <= $tmp2025) goto $l2027; else goto $l2029;
    $l2034:;
    if ($tmp2023 < $tmp2025) goto $l2027; else goto $l2029;
    $l2027:;
    {
        ITable* $tmp2036 = p_args->$class->itable;
        while ($tmp2036->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2036 = $tmp2036->next;
        }
        $fn2038 $tmp2037 = $tmp2036->methods[0];
        panda$core$Object* $tmp2039 = $tmp2037(p_args, i2022);
        org$pandalanguage$pandac$Type* $tmp2040 = org$pandalanguage$pandac$MethodRef$parameter$panda$core$Int64$R$org$pandalanguage$pandac$Type(p_m, i2022);
        panda$core$Int64$nullable $tmp2041 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp2039), $tmp2040);
        cost2035 = $tmp2041;
        if (((panda$core$Bit) { !cost2035.nonnull }).value) {
        {
            return ((panda$core$Int64$nullable) { .nonnull = false });
        }
        }
        panda$core$Int64 $tmp2042 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result2019, ((panda$core$Int64) cost2035.value));
        result2019 = $tmp2042;
    }
    $l2030:;
    int64_t $tmp2044 = $tmp2025 - i2022.value;
    if ($tmp2026) goto $l2045; else goto $l2046;
    $l2045:;
    if ($tmp2044 >= 1) goto $l2043; else goto $l2029;
    $l2046:;
    if ($tmp2044 > 1) goto $l2043; else goto $l2029;
    $l2043:;
    i2022.value += 1;
    goto $l2027;
    $l2029:;
    if (((panda$core$Bit) { p_expectedReturn != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp2050 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(p_m);
        panda$core$Int64$nullable $tmp2051 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp2050, p_expectedReturn);
        cost2049 = $tmp2051;
        if (((panda$core$Bit) { !cost2049.nonnull }).value) {
        {
            return ((panda$core$Int64$nullable) { .nonnull = false });
        }
        }
        panda$core$Int64 $tmp2052 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result2019, ((panda$core$Int64) cost2049.value));
        result2019 = $tmp2052;
    }
    }
    org$pandalanguage$pandac$Type* $tmp2055 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->value->owner);
    panda$core$Bit $tmp2056 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit($tmp2055);
    bool $tmp2054 = $tmp2056.value;
    if (!$tmp2054) goto $l2057;
    ITable* $tmp2058 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp2058->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2058 = $tmp2058->next;
    }
    $fn2060 $tmp2059 = $tmp2058->methods[0];
    panda$core$Int64 $tmp2061 = $tmp2059(((panda$collections$CollectionView*) p_args));
    panda$core$Bit $tmp2062 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2061, ((panda$core$Int64) { 1 }));
    $tmp2054 = $tmp2062.value;
    $l2057:;
    panda$core$Bit $tmp2063 = { $tmp2054 };
    bool $tmp2053 = $tmp2063.value;
    if (!$tmp2053) goto $l2064;
    panda$core$Object* $tmp2065 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->value->parameters, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp2066 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->value->owner);
    panda$core$Bit $tmp2067 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp2065)->type, $tmp2066);
    $tmp2053 = $tmp2067.value;
    $l2064:;
    panda$core$Bit $tmp2068 = { $tmp2053 };
    if ($tmp2068.value) {
    {
        panda$core$Int64 $tmp2069 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result2019, ((panda$core$Int64) { 1 }));
        result2019 = $tmp2069;
    }
    }
    return ((panda$core$Int64$nullable) { result2019, true });
}
panda$core$Int64$nullable org$pandalanguage$pandac$Compiler$matchMethods$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(org$pandalanguage$pandac$Compiler* self, panda$collections$Array* p_methods, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedReturn) {
    panda$collections$Array* result2070;
    panda$core$Int64$nullable best2073;
    panda$collections$Iterator* m$Iter2074;
    org$pandalanguage$pandac$MethodRef* m2086;
    panda$core$Int64$nullable cost2091;
    panda$collections$Array* $tmp2071 = (panda$collections$Array*) malloc(40);
    $tmp2071->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2071->refCount.value = 1;
    panda$collections$Array$init($tmp2071);
    result2070 = $tmp2071;
    best2073 = ((panda$core$Int64$nullable) { .nonnull = false });
    {
        ITable* $tmp2075 = ((panda$collections$Iterable*) p_methods)->$class->itable;
        while ($tmp2075->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2075 = $tmp2075->next;
        }
        $fn2077 $tmp2076 = $tmp2075->methods[0];
        panda$collections$Iterator* $tmp2078 = $tmp2076(((panda$collections$Iterable*) p_methods));
        m$Iter2074 = $tmp2078;
        $l2079:;
        ITable* $tmp2081 = m$Iter2074->$class->itable;
        while ($tmp2081->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2081 = $tmp2081->next;
        }
        $fn2083 $tmp2082 = $tmp2081->methods[0];
        panda$core$Bit $tmp2084 = $tmp2082(m$Iter2074);
        panda$core$Bit $tmp2085 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2084);
        if (!$tmp2085.value) goto $l2080;
        {
            ITable* $tmp2087 = m$Iter2074->$class->itable;
            while ($tmp2087->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2087 = $tmp2087->next;
            }
            $fn2089 $tmp2088 = $tmp2087->methods[1];
            panda$core$Object* $tmp2090 = $tmp2088(m$Iter2074);
            m2086 = ((org$pandalanguage$pandac$MethodRef*) $tmp2090);
            panda$core$Int64$nullable $tmp2092 = org$pandalanguage$pandac$Compiler$callCost$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(self, m2086, p_args, p_expectedReturn);
            cost2091 = $tmp2092;
            if (((panda$core$Bit) { !cost2091.nonnull }).value) {
            {
                goto $l2079;
            }
            }
            bool $tmp2093 = ((panda$core$Bit) { !best2073.nonnull }).value;
            if ($tmp2093) goto $l2094;
            panda$core$Bit $tmp2095 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost2091.value), ((panda$core$Int64) best2073.value));
            $tmp2093 = $tmp2095.value;
            $l2094:;
            panda$core$Bit $tmp2096 = { $tmp2093 };
            if ($tmp2096.value) {
            {
                panda$collections$Array$clear(result2070);
                best2073 = cost2091;
            }
            }
            panda$core$Bit $tmp2097 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost2091.value), ((panda$core$Int64) best2073.value));
            if ($tmp2097.value) {
            {
                panda$collections$Array$add$panda$collections$Array$T(result2070, ((panda$core$Object*) m2086));
            }
            }
        }
        goto $l2079;
        $l2080:;
    }
    panda$collections$Array$clear(p_methods);
    panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(p_methods, ((panda$collections$CollectionView*) result2070));
    return best2073;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$MethodRef* p_m, panda$collections$ListView* p_args) {
    panda$core$String* s2104;
    panda$collections$Array* finalArgs2129;
    org$pandalanguage$pandac$IRNode* selfNode2165;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2194;
    org$pandalanguage$pandac$IRNode* coerced2212;
    org$pandalanguage$pandac$IRNode* result2227;
    PANDA_ASSERT(p_m->value->resolved.value);
    panda$core$Int64 $tmp2098 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
    ITable* $tmp2099 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp2099->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2099 = $tmp2099->next;
    }
    $fn2101 $tmp2100 = $tmp2099->methods[0];
    panda$core$Int64 $tmp2102 = $tmp2100(((panda$collections$CollectionView*) p_args));
    panda$core$Bit $tmp2103 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp2098, $tmp2102);
    if ($tmp2103.value) {
    {
        panda$core$Int64 $tmp2105 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
        panda$core$Bit $tmp2106 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2105, ((panda$core$Int64) { 1 }));
        if ($tmp2106.value) {
        {
            s2104 = &$s2107;
        }
        }
        else {
        {
            s2104 = &$s2108;
        }
        }
        panda$core$String* $tmp2109 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(p_m->value);
        panda$core$String* $tmp2110 = panda$core$String$convert$R$panda$core$String($tmp2109);
        panda$core$String* $tmp2112 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2110, &$s2111);
        panda$core$Int64 $tmp2113 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
        panda$core$String* $tmp2114 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2112, ((panda$core$Object*) wrap_panda$core$Int64($tmp2113)));
        panda$core$String* $tmp2116 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2114, &$s2115);
        panda$core$String* $tmp2117 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2116, s2104);
        panda$core$String* $tmp2119 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2117, &$s2118);
        ITable* $tmp2121 = ((panda$collections$CollectionView*) p_args)->$class->itable;
        while ($tmp2121->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp2121 = $tmp2121->next;
        }
        $fn2123 $tmp2122 = $tmp2121->methods[0];
        panda$core$Int64 $tmp2124 = $tmp2122(((panda$collections$CollectionView*) p_args));
        panda$core$String* $tmp2125 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2120, ((panda$core$Object*) wrap_panda$core$Int64($tmp2124)));
        panda$core$String* $tmp2127 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2125, &$s2126);
        panda$core$String* $tmp2128 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2119, $tmp2127);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp2128);
        return NULL;
    }
    }
    panda$collections$Array* $tmp2130 = (panda$collections$Array*) malloc(40);
    $tmp2130->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2130->refCount.value = 1;
    panda$collections$Array$init($tmp2130);
    finalArgs2129 = $tmp2130;
    bool $tmp2133 = ((panda$core$Bit) { p_target != NULL }).value;
    if (!$tmp2133) goto $l2134;
    panda$core$Bit $tmp2135 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1038 }));
    $tmp2133 = $tmp2135.value;
    $l2134:;
    panda$core$Bit $tmp2136 = { $tmp2133 };
    bool $tmp2132 = $tmp2136.value;
    if (!$tmp2132) goto $l2137;
    panda$core$Bit $tmp2138 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->value->annotations);
    panda$core$Bit $tmp2139 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2138);
    $tmp2132 = $tmp2139.value;
    $l2137:;
    panda$core$Bit $tmp2140 = { $tmp2132 };
    if ($tmp2140.value) {
    {
        org$pandalanguage$pandac$Type* $tmp2141 = org$pandalanguage$pandac$MethodRef$owner$R$org$pandalanguage$pandac$Type(p_m);
        org$pandalanguage$pandac$IRNode* $tmp2142 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, p_target, p_position, ((panda$core$Bit) { false }), $tmp2141);
        panda$collections$Array$add$panda$collections$Array$T(finalArgs2129, ((panda$core$Object*) $tmp2142));
    }
    }
    panda$core$Bit $tmp2143 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->value->methodKind, ((panda$core$Int64) { 59 }));
    if ($tmp2143.value) {
    {
        if (((panda$core$Bit) { p_target == NULL }).value) {
        {
            panda$core$Object* $tmp2144 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
            panda$core$Bit $tmp2145 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp2144)->methodKind, ((panda$core$Int64) { 59 }));
            if ($tmp2145.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2146 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2146->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2146->refCount.value = 1;
                panda$core$Object* $tmp2148 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
                org$pandalanguage$pandac$Type* $tmp2149 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp2148));
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp2146, ((panda$core$Int64) { 1025 }), p_position, $tmp2149);
                panda$collections$Array$add$panda$collections$Array$T(finalArgs2129, ((panda$core$Object*) $tmp2146));
            }
            }
            else {
            {
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s2150);
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp2153 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1025 }));
        bool $tmp2152 = $tmp2153.value;
        if (!$tmp2152) goto $l2154;
        panda$core$Bit $tmp2155 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1024 }));
        $tmp2152 = $tmp2155.value;
        $l2154:;
        panda$core$Bit $tmp2156 = { $tmp2152 };
        bool $tmp2151 = $tmp2156.value;
        if (!$tmp2151) goto $l2157;
        panda$core$Bit $tmp2158 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1038 }));
        $tmp2151 = $tmp2158.value;
        $l2157:;
        panda$core$Bit $tmp2159 = { $tmp2151 };
        if ($tmp2159.value) {
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s2160);
        }
        }
        }
    }
    }
    else {
    panda$core$Bit $tmp2162 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(p_m->value);
    bool $tmp2161 = $tmp2162.value;
    if (!$tmp2161) goto $l2163;
    $tmp2161 = ((panda$core$Bit) { p_target == NULL }).value;
    $l2163:;
    panda$core$Bit $tmp2164 = { $tmp2161 };
    if ($tmp2164.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2166 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2166->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2166->refCount.value = 1;
        panda$core$Object* $tmp2168 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
        org$pandalanguage$pandac$Type* $tmp2169 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp2168));
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp2166, ((panda$core$Int64) { 1025 }), p_position, $tmp2169);
        selfNode2165 = $tmp2166;
        org$pandalanguage$pandac$Type* $tmp2170 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->value->owner);
        org$pandalanguage$pandac$IRNode* $tmp2171 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, selfNode2165, $tmp2170);
        selfNode2165 = $tmp2171;
        PANDA_ASSERT(((panda$core$Bit) { selfNode2165 != NULL }).value);
        panda$collections$Array$add$panda$collections$Array$T(finalArgs2129, ((panda$core$Object*) selfNode2165));
        panda$core$Object* $tmp2172 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
        panda$core$Bit $tmp2173 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp2172));
        panda$core$Bit $tmp2174 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2173);
        if ($tmp2174.value) {
        {
            panda$core$String* $tmp2176 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(p_m->value);
            panda$core$String* $tmp2177 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2175, $tmp2176);
            panda$core$String* $tmp2179 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2177, &$s2178);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp2179);
        }
        }
    }
    }
    else {
    panda$core$Bit $tmp2182 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(p_m->value);
    panda$core$Bit $tmp2183 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2182);
    bool $tmp2181 = $tmp2183.value;
    if (!$tmp2181) goto $l2184;
    $tmp2181 = ((panda$core$Bit) { p_target != NULL }).value;
    $l2184:;
    panda$core$Bit $tmp2185 = { $tmp2181 };
    bool $tmp2180 = $tmp2185.value;
    if (!$tmp2180) goto $l2186;
    panda$core$Bit $tmp2187 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1001 }));
    $tmp2180 = $tmp2187.value;
    $l2186:;
    panda$core$Bit $tmp2188 = { $tmp2180 };
    if ($tmp2188.value) {
    {
        panda$core$String* $tmp2190 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(p_m->value);
        panda$core$String* $tmp2191 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2189, $tmp2190);
        panda$core$String* $tmp2193 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2191, &$s2192);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp2193);
    }
    }
    }
    }
    ITable* $tmp2195 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp2195->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2195 = $tmp2195->next;
    }
    $fn2197 $tmp2196 = $tmp2195->methods[0];
    panda$core$Int64 $tmp2198 = $tmp2196(((panda$collections$CollectionView*) p_args));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2194, ((panda$core$Int64) { 0 }), $tmp2198, ((panda$core$Bit) { false }));
    int64_t $tmp2200 = $tmp2194.min.value;
    panda$core$Int64 i2199 = { $tmp2200 };
    int64_t $tmp2202 = $tmp2194.max.value;
    bool $tmp2203 = $tmp2194.inclusive.value;
    if ($tmp2203) goto $l2210; else goto $l2211;
    $l2210:;
    if ($tmp2200 <= $tmp2202) goto $l2204; else goto $l2206;
    $l2211:;
    if ($tmp2200 < $tmp2202) goto $l2204; else goto $l2206;
    $l2204:;
    {
        ITable* $tmp2213 = p_args->$class->itable;
        while ($tmp2213->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2213 = $tmp2213->next;
        }
        $fn2215 $tmp2214 = $tmp2213->methods[0];
        panda$core$Object* $tmp2216 = $tmp2214(p_args, i2199);
        org$pandalanguage$pandac$Type* $tmp2217 = org$pandalanguage$pandac$MethodRef$parameter$panda$core$Int64$R$org$pandalanguage$pandac$Type(p_m, i2199);
        org$pandalanguage$pandac$IRNode* $tmp2218 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp2216), $tmp2217);
        coerced2212 = $tmp2218;
        if (((panda$core$Bit) { coerced2212 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Object* $tmp2219 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->value->parameters, i2199);
        org$pandalanguage$pandac$IRNode* $tmp2220 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, coerced2212, p_position, ((panda$core$Bit) { false }), ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp2219)->type);
        coerced2212 = $tmp2220;
        if (((panda$core$Bit) { coerced2212 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(finalArgs2129, ((panda$core$Object*) coerced2212));
    }
    $l2207:;
    int64_t $tmp2222 = $tmp2202 - i2199.value;
    if ($tmp2203) goto $l2223; else goto $l2224;
    $l2223:;
    if ($tmp2222 >= 1) goto $l2221; else goto $l2206;
    $l2224:;
    if ($tmp2222 > 1) goto $l2221; else goto $l2206;
    $l2221:;
    i2199.value += 1;
    goto $l2204;
    $l2206:;
    panda$core$Bit $tmp2229 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_m->value->owner)->name, &$s2228);
    if ($tmp2229.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2230 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2230->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2230->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp2232 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(p_m);
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2230, ((panda$core$Int64) { 1005 }), p_position, $tmp2232, ((panda$core$Object*) p_m), ((panda$collections$ListView*) finalArgs2129));
        result2227 = $tmp2230;
    }
    }
    else {
    {
        org$pandalanguage$pandac$IRNode* $tmp2233 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2233->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2233->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2233, ((panda$core$Int64) { 1005 }), p_position, p_m->value->returnType, ((panda$core$Object*) p_m), ((panda$collections$ListView*) finalArgs2129));
        result2227 = $tmp2233;
        org$pandalanguage$pandac$Type* $tmp2235 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(p_m);
        org$pandalanguage$pandac$IRNode* $tmp2236 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, result2227, p_position, ((panda$core$Bit) { false }), $tmp2235);
        result2227 = $tmp2236;
    }
    }
    return result2227;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_target, panda$core$String* p_name, panda$collections$ListView* p_args) {
    org$pandalanguage$pandac$IRNode* $tmp2237 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_target, p_name, p_args, NULL);
    return $tmp2237;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_target, panda$core$String* p_name, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedType) {
    org$pandalanguage$pandac$IRNode* resolved2238;
    org$pandalanguage$pandac$ClassDecl* cl2240;
    org$pandalanguage$pandac$Symbol* s2244;
    org$pandalanguage$pandac$IRNode* ref2266;
    org$pandalanguage$pandac$IRNode* $tmp2239 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_target);
    resolved2238 = $tmp2239;
    if (((panda$core$Bit) { resolved2238 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp2241 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(resolved2238->kind, ((panda$core$Int64) { 1001 }));
    if ($tmp2241.value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp2242 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Type*) resolved2238->payload));
        cl2240 = $tmp2242;
    }
    }
    else {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp2243 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, resolved2238->type);
        cl2240 = $tmp2243;
    }
    }
    if (((panda$core$Bit) { cl2240 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp2245 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl2240);
    org$pandalanguage$pandac$Symbol* $tmp2246 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp2245, p_name);
    s2244 = $tmp2246;
    if (((panda$core$Bit) { s2244 == NULL }).value) {
    {
        panda$core$String* $tmp2248 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2247, ((org$pandalanguage$pandac$Symbol*) cl2240)->name);
        panda$core$String* $tmp2250 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2248, &$s2249);
        panda$core$String* $tmp2251 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2250, p_name);
        panda$core$String* $tmp2253 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2251, &$s2252);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_target->position, $tmp2253);
        return NULL;
    }
    }
    panda$core$Bit $tmp2255 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(s2244->kind, ((panda$core$Int64) { 204 }));
    bool $tmp2254 = $tmp2255.value;
    if (!$tmp2254) goto $l2256;
    panda$core$Bit $tmp2257 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(s2244->kind, ((panda$core$Int64) { 205 }));
    $tmp2254 = $tmp2257.value;
    $l2256:;
    panda$core$Bit $tmp2258 = { $tmp2254 };
    if ($tmp2258.value) {
    {
        panda$core$String* $tmp2260 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2259, ((org$pandalanguage$pandac$Symbol*) cl2240)->name);
        panda$core$String* $tmp2262 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2260, &$s2261);
        panda$core$String* $tmp2263 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2262, p_name);
        panda$core$String* $tmp2265 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2263, &$s2264);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_target->position, $tmp2265);
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp2267 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl2240);
    org$pandalanguage$pandac$IRNode* $tmp2268 = org$pandalanguage$pandac$Compiler$symbolRef$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q(self, p_target->position, p_target, s2244, $tmp2267);
    ref2266 = $tmp2268;
    if (((panda$core$Bit) { ref2266 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp2269 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, ref2266, p_args, p_expectedType);
    return $tmp2269;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_m, panda$collections$ListView* p_args) {
    org$pandalanguage$pandac$IRNode* $tmp2270 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_m, p_args, NULL);
    return $tmp2270;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_m, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedType) {
    org$pandalanguage$pandac$IRNode* target2271;
    panda$collections$Array* methods2278;
    org$pandalanguage$pandac$MethodDecl* first2283;
    panda$core$MutableString* msg2288;
    panda$core$String* separator2299;
    panda$collections$Iterator* a$Iter2301;
    org$pandalanguage$pandac$IRNode* a2313;
    org$pandalanguage$pandac$IRNode* target2327;
    panda$collections$Array* children2335;
    panda$collections$Array* types2341;
    panda$collections$Iterator* m$Iter2344;
    org$pandalanguage$pandac$MethodRef* m2356;
    org$pandalanguage$pandac$IRNode* target2366;
    org$pandalanguage$pandac$IRNode* initCall2369;
    panda$collections$Array* children2373;
    org$pandalanguage$pandac$IRNode* resolved2378;
    switch (p_m->kind.value) {
        case 1002:
        {
            panda$core$Int64 $tmp2272 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
            panda$core$Bit $tmp2273 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2272, ((panda$core$Int64) { 0 }));
            if ($tmp2273.value) {
            {
                target2271 = NULL;
            }
            }
            else {
            {
                panda$core$Int64 $tmp2274 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
                panda$core$Bit $tmp2275 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2274, ((panda$core$Int64) { 1 }));
                PANDA_ASSERT($tmp2275.value);
                panda$core$Object* $tmp2276 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 0 }));
                target2271 = ((org$pandalanguage$pandac$IRNode*) $tmp2276);
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp2277 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, p_m->position, target2271, ((org$pandalanguage$pandac$MethodRef*) p_m->payload), p_args);
            return $tmp2277;
        }
        break;
        case 1003:
        {
            panda$collections$Array* $tmp2279 = (panda$collections$Array*) malloc(40);
            $tmp2279->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2279->refCount.value = 1;
            panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp2279, ((panda$collections$ListView*) p_m->payload));
            methods2278 = $tmp2279;
            org$pandalanguage$pandac$Compiler$matchMethods$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(self, methods2278, p_args, p_expectedType);
            panda$core$Int64 $tmp2281 = panda$collections$Array$get_count$R$panda$core$Int64(methods2278);
            panda$core$Bit $tmp2282 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2281, ((panda$core$Int64) { 0 }));
            if ($tmp2282.value) {
            {
                ITable* $tmp2284 = ((panda$collections$ListView*) p_m->payload)->$class->itable;
                while ($tmp2284->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp2284 = $tmp2284->next;
                }
                $fn2286 $tmp2285 = $tmp2284->methods[0];
                panda$core$Object* $tmp2287 = $tmp2285(((panda$collections$ListView*) p_m->payload), ((panda$core$Int64) { 0 }));
                first2283 = ((org$pandalanguage$pandac$MethodRef*) $tmp2287)->value;
                panda$core$MutableString* $tmp2289 = (panda$core$MutableString*) malloc(48);
                $tmp2289->$class = (panda$core$Class*) &panda$core$MutableString$class;
                $tmp2289->refCount.value = 1;
                panda$core$String* $tmp2292 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2291, ((org$pandalanguage$pandac$Symbol*) first2283->owner)->name);
                panda$core$String* $tmp2294 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2292, &$s2293);
                panda$core$String* $tmp2295 = panda$core$String$convert$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) first2283)->name);
                panda$core$String* $tmp2297 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2295, &$s2296);
                panda$core$String* $tmp2298 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2294, $tmp2297);
                panda$core$MutableString$init$panda$core$String($tmp2289, $tmp2298);
                msg2288 = $tmp2289;
                separator2299 = &$s2300;
                {
                    ITable* $tmp2302 = ((panda$collections$Iterable*) p_args)->$class->itable;
                    while ($tmp2302->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp2302 = $tmp2302->next;
                    }
                    $fn2304 $tmp2303 = $tmp2302->methods[0];
                    panda$collections$Iterator* $tmp2305 = $tmp2303(((panda$collections$Iterable*) p_args));
                    a$Iter2301 = $tmp2305;
                    $l2306:;
                    ITable* $tmp2308 = a$Iter2301->$class->itable;
                    while ($tmp2308->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp2308 = $tmp2308->next;
                    }
                    $fn2310 $tmp2309 = $tmp2308->methods[0];
                    panda$core$Bit $tmp2311 = $tmp2309(a$Iter2301);
                    panda$core$Bit $tmp2312 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2311);
                    if (!$tmp2312.value) goto $l2307;
                    {
                        ITable* $tmp2314 = a$Iter2301->$class->itable;
                        while ($tmp2314->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2314 = $tmp2314->next;
                        }
                        $fn2316 $tmp2315 = $tmp2314->methods[1];
                        panda$core$Object* $tmp2317 = $tmp2315(a$Iter2301);
                        a2313 = ((org$pandalanguage$pandac$IRNode*) $tmp2317);
                        panda$core$MutableString$append$panda$core$String(msg2288, separator2299);
                        panda$core$MutableString$append$panda$core$Object(msg2288, ((panda$core$Object*) a2313->type));
                        separator2299 = &$s2318;
                    }
                    goto $l2306;
                    $l2307:;
                }
                panda$core$MutableString$append$panda$core$String(msg2288, &$s2319);
                if (((panda$core$Bit) { p_expectedType != NULL }).value) {
                {
                    panda$core$String* $tmp2321 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2320, ((panda$core$Object*) p_expectedType));
                    panda$core$String* $tmp2323 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2321, &$s2322);
                    panda$core$MutableString$append$panda$core$String(msg2288, $tmp2323);
                }
                }
                panda$core$String* $tmp2324 = panda$core$MutableString$finish$R$panda$core$String(msg2288);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_m->position, $tmp2324);
                return NULL;
            }
            }
            panda$core$Int64 $tmp2325 = panda$collections$Array$get_count$R$panda$core$Int64(methods2278);
            panda$core$Bit $tmp2326 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2325, ((panda$core$Int64) { 1 }));
            if ($tmp2326.value) {
            {
                panda$core$Int64 $tmp2328 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
                panda$core$Bit $tmp2329 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2328, ((panda$core$Int64) { 1 }));
                if ($tmp2329.value) {
                {
                    panda$core$Object* $tmp2330 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 0 }));
                    target2327 = ((org$pandalanguage$pandac$IRNode*) $tmp2330);
                }
                }
                else {
                {
                    panda$core$Int64 $tmp2331 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
                    panda$core$Bit $tmp2332 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2331, ((panda$core$Int64) { 0 }));
                    PANDA_ASSERT($tmp2332.value);
                    target2327 = NULL;
                }
                }
                panda$core$Object* $tmp2333 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(methods2278, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$IRNode* $tmp2334 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, p_m->position, target2327, ((org$pandalanguage$pandac$MethodRef*) $tmp2333), p_args);
                return $tmp2334;
            }
            }
            panda$collections$Array* $tmp2336 = (panda$collections$Array*) malloc(40);
            $tmp2336->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2336->refCount.value = 1;
            panda$collections$Array$init($tmp2336);
            children2335 = $tmp2336;
            org$pandalanguage$pandac$IRNode* $tmp2338 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2338->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2338->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2340 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2338, ((panda$core$Int64) { 1003 }), p_m->position, $tmp2340, ((panda$core$Object*) methods2278), ((panda$collections$ListView*) p_m->children));
            panda$collections$Array$add$panda$collections$Array$T(children2335, ((panda$core$Object*) $tmp2338));
            panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(children2335, ((panda$collections$CollectionView*) p_args));
            panda$collections$Array* $tmp2342 = (panda$collections$Array*) malloc(40);
            $tmp2342->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2342->refCount.value = 1;
            panda$collections$Array$init($tmp2342);
            types2341 = $tmp2342;
            {
                ITable* $tmp2345 = ((panda$collections$Iterable*) methods2278)->$class->itable;
                while ($tmp2345->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp2345 = $tmp2345->next;
                }
                $fn2347 $tmp2346 = $tmp2345->methods[0];
                panda$collections$Iterator* $tmp2348 = $tmp2346(((panda$collections$Iterable*) methods2278));
                m$Iter2344 = $tmp2348;
                $l2349:;
                ITable* $tmp2351 = m$Iter2344->$class->itable;
                while ($tmp2351->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp2351 = $tmp2351->next;
                }
                $fn2353 $tmp2352 = $tmp2351->methods[0];
                panda$core$Bit $tmp2354 = $tmp2352(m$Iter2344);
                panda$core$Bit $tmp2355 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2354);
                if (!$tmp2355.value) goto $l2350;
                {
                    ITable* $tmp2357 = m$Iter2344->$class->itable;
                    while ($tmp2357->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp2357 = $tmp2357->next;
                    }
                    $fn2359 $tmp2358 = $tmp2357->methods[1];
                    panda$core$Object* $tmp2360 = $tmp2358(m$Iter2344);
                    m2356 = ((org$pandalanguage$pandac$MethodRef*) $tmp2360);
                    org$pandalanguage$pandac$Type* $tmp2361 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m2356);
                    panda$collections$Array$add$panda$collections$Array$T(types2341, ((panda$core$Object*) $tmp2361));
                }
                goto $l2349;
                $l2350:;
            }
            org$pandalanguage$pandac$IRNode* $tmp2362 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2362->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2362->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2364 = (org$pandalanguage$pandac$Type*) malloc(96);
            $tmp2364->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp2364->refCount.value = 1;
            org$pandalanguage$pandac$Type$init$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp2364, ((panda$collections$ListView*) types2341));
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2362, ((panda$core$Int64) { 1039 }), p_m->position, $tmp2364, ((panda$collections$ListView*) children2335));
            return $tmp2362;
        }
        break;
        case 1001:
        {
            org$pandalanguage$pandac$IRNode* $tmp2367 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2367->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2367->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp2367, ((panda$core$Int64) { 1038 }), p_m->position, ((org$pandalanguage$pandac$Type*) p_m->payload));
            target2366 = $tmp2367;
            org$pandalanguage$pandac$IRNode* $tmp2371 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target2366, &$s2370, p_args);
            org$pandalanguage$pandac$IRNode* $tmp2372 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp2371);
            initCall2369 = $tmp2372;
            if (((panda$core$Bit) { initCall2369 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp2374 = (panda$collections$Array*) malloc(40);
            $tmp2374->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2374->refCount.value = 1;
            panda$collections$Array$init($tmp2374);
            children2373 = $tmp2374;
            panda$collections$Array$add$panda$collections$Array$T(children2373, ((panda$core$Object*) initCall2369));
            org$pandalanguage$pandac$IRNode* $tmp2376 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2376->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2376->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2376, ((panda$core$Int64) { 1010 }), p_m->position, ((org$pandalanguage$pandac$Type*) p_m->payload), ((panda$collections$ListView*) children2373));
            return $tmp2376;
        }
        break;
        default:
        {
            org$pandalanguage$pandac$IRNode* $tmp2379 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_m);
            resolved2378 = $tmp2379;
            if (((panda$core$Bit) { resolved2378 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$String* $tmp2381 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2380, ((panda$core$Object*) resolved2378->type));
            panda$core$String* $tmp2383 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2381, &$s2382);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, resolved2378->position, $tmp2383);
        }
    }
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$collections$Array* subtypes2384;
    panda$core$MutableString* typeName2387;
    panda$core$String* separator2391;
    panda$collections$Iterator* p$Iter2393;
    org$pandalanguage$pandac$MethodDecl$Parameter* p2405;
    panda$core$Int64 kind2411;
    panda$core$Char8 $tmp2417;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
    panda$collections$Array* $tmp2385 = (panda$collections$Array*) malloc(40);
    $tmp2385->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2385->refCount.value = 1;
    panda$collections$Array$init($tmp2385);
    subtypes2384 = $tmp2385;
    panda$core$MutableString* $tmp2388 = (panda$core$MutableString*) malloc(48);
    $tmp2388->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp2388->refCount.value = 1;
    panda$core$MutableString$init$panda$core$String($tmp2388, &$s2390);
    typeName2387 = $tmp2388;
    separator2391 = &$s2392;
    {
        ITable* $tmp2394 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp2394->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2394 = $tmp2394->next;
        }
        $fn2396 $tmp2395 = $tmp2394->methods[0];
        panda$collections$Iterator* $tmp2397 = $tmp2395(((panda$collections$Iterable*) p_m->parameters));
        p$Iter2393 = $tmp2397;
        $l2398:;
        ITable* $tmp2400 = p$Iter2393->$class->itable;
        while ($tmp2400->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2400 = $tmp2400->next;
        }
        $fn2402 $tmp2401 = $tmp2400->methods[0];
        panda$core$Bit $tmp2403 = $tmp2401(p$Iter2393);
        panda$core$Bit $tmp2404 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2403);
        if (!$tmp2404.value) goto $l2399;
        {
            ITable* $tmp2406 = p$Iter2393->$class->itable;
            while ($tmp2406->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2406 = $tmp2406->next;
            }
            $fn2408 $tmp2407 = $tmp2406->methods[1];
            panda$core$Object* $tmp2409 = $tmp2407(p$Iter2393);
            p2405 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp2409);
            panda$core$MutableString$append$panda$core$String(typeName2387, separator2391);
            panda$core$MutableString$append$panda$core$String(typeName2387, ((org$pandalanguage$pandac$Symbol*) p2405->type)->name);
            panda$collections$Array$add$panda$collections$Array$T(subtypes2384, ((panda$core$Object*) p2405->type));
            separator2391 = &$s2410;
        }
        goto $l2398;
        $l2399:;
    }
    panda$core$Bit $tmp2412 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 58 }));
    if ($tmp2412.value) {
    {
        panda$core$MutableString$append$panda$core$String(typeName2387, &$s2413);
        kind2411 = ((panda$core$Int64) { 24 });
    }
    }
    else {
    {
        panda$core$MutableString$append$panda$core$String(typeName2387, &$s2414);
        kind2411 = ((panda$core$Int64) { 25 });
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(subtypes2384, ((panda$core$Object*) p_m->returnType));
    org$pandalanguage$pandac$Type* $tmp2415 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2416 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp2415);
    if ($tmp2416.value) {
    {
        panda$core$MutableString$append$panda$core$String(typeName2387, ((org$pandalanguage$pandac$Symbol*) p_m->returnType)->name);
    }
    }
    panda$core$Char8$init$panda$core$UInt8(&$tmp2417, ((panda$core$UInt8) { 41 }));
    panda$core$MutableString$append$panda$core$Char8(typeName2387, $tmp2417);
    org$pandalanguage$pandac$Type* $tmp2418 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp2418->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp2418->refCount.value = 1;
    panda$core$String* $tmp2420 = panda$core$MutableString$finish$R$panda$core$String(typeName2387);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp2418, $tmp2420, kind2411, ((org$pandalanguage$pandac$Symbol*) p_m)->position, ((panda$collections$ListView*) subtypes2384), ((panda$core$Bit) { true }));
    return $tmp2418;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$declaredTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m, org$pandalanguage$pandac$Type* p_selfType) {
    panda$collections$Array* subtypes2421;
    panda$core$MutableString* typeName2424;
    panda$collections$Iterator* p$Iter2428;
    org$pandalanguage$pandac$MethodDecl$Parameter* p2440;
    panda$core$Int64 kind2446;
    panda$core$Char8 $tmp2452;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
    panda$collections$Array* $tmp2422 = (panda$collections$Array*) malloc(40);
    $tmp2422->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2422->refCount.value = 1;
    panda$collections$Array$init($tmp2422);
    subtypes2421 = $tmp2422;
    panda$core$MutableString* $tmp2425 = (panda$core$MutableString*) malloc(48);
    $tmp2425->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp2425->refCount.value = 1;
    panda$core$MutableString$init$panda$core$String($tmp2425, &$s2427);
    typeName2424 = $tmp2425;
    panda$core$MutableString$append$panda$core$String(typeName2424, ((org$pandalanguage$pandac$Symbol*) p_selfType)->name);
    panda$collections$Array$add$panda$collections$Array$T(subtypes2421, ((panda$core$Object*) p_selfType));
    {
        ITable* $tmp2429 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp2429->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2429 = $tmp2429->next;
        }
        $fn2431 $tmp2430 = $tmp2429->methods[0];
        panda$collections$Iterator* $tmp2432 = $tmp2430(((panda$collections$Iterable*) p_m->parameters));
        p$Iter2428 = $tmp2432;
        $l2433:;
        ITable* $tmp2435 = p$Iter2428->$class->itable;
        while ($tmp2435->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2435 = $tmp2435->next;
        }
        $fn2437 $tmp2436 = $tmp2435->methods[0];
        panda$core$Bit $tmp2438 = $tmp2436(p$Iter2428);
        panda$core$Bit $tmp2439 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2438);
        if (!$tmp2439.value) goto $l2434;
        {
            ITable* $tmp2441 = p$Iter2428->$class->itable;
            while ($tmp2441->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2441 = $tmp2441->next;
            }
            $fn2443 $tmp2442 = $tmp2441->methods[1];
            panda$core$Object* $tmp2444 = $tmp2442(p$Iter2428);
            p2440 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp2444);
            panda$core$MutableString$append$panda$core$String(typeName2424, &$s2445);
            panda$core$MutableString$append$panda$core$String(typeName2424, ((org$pandalanguage$pandac$Symbol*) p2440->type)->name);
            panda$collections$Array$add$panda$collections$Array$T(subtypes2421, ((panda$core$Object*) p2440->type));
        }
        goto $l2433;
        $l2434:;
    }
    panda$core$Bit $tmp2447 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 58 }));
    if ($tmp2447.value) {
    {
        panda$core$MutableString$append$panda$core$String(typeName2424, &$s2448);
        kind2446 = ((panda$core$Int64) { 24 });
    }
    }
    else {
    {
        panda$core$MutableString$append$panda$core$String(typeName2424, &$s2449);
        kind2446 = ((panda$core$Int64) { 25 });
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(subtypes2421, ((panda$core$Object*) p_m->returnType));
    org$pandalanguage$pandac$Type* $tmp2450 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2451 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp2450);
    if ($tmp2451.value) {
    {
        panda$core$MutableString$append$panda$core$String(typeName2424, ((org$pandalanguage$pandac$Symbol*) p_m->returnType)->name);
    }
    }
    panda$core$Char8$init$panda$core$UInt8(&$tmp2452, ((panda$core$UInt8) { 41 }));
    panda$core$MutableString$append$panda$core$Char8(typeName2424, $tmp2452);
    org$pandalanguage$pandac$Type* $tmp2453 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp2453->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp2453->refCount.value = 1;
    panda$core$String* $tmp2455 = panda$core$MutableString$finish$R$panda$core$String(typeName2424);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp2453, $tmp2455, kind2446, ((org$pandalanguage$pandac$Symbol*) p_m)->position, ((panda$collections$ListView*) subtypes2421), ((panda$core$Bit) { true }));
    return $tmp2453;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$MethodDecl* inherited2456;
    org$pandalanguage$pandac$MethodDecl* $tmp2457 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(self, p_m);
    inherited2456 = $tmp2457;
    if (((panda$core$Bit) { inherited2456 == NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp2458 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, p_m);
        return $tmp2458;
    }
    }
    org$pandalanguage$pandac$Type* $tmp2459 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, inherited2456);
    return $tmp2459;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$Type* $tmp2460 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    org$pandalanguage$pandac$Type* $tmp2461 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_m, $tmp2460);
    return $tmp2461;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m, org$pandalanguage$pandac$Type* p_selfType) {
    org$pandalanguage$pandac$MethodDecl* inherited2462;
    org$pandalanguage$pandac$MethodDecl* $tmp2463 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(self, p_m);
    inherited2462 = $tmp2463;
    if (((panda$core$Bit) { inherited2462 == NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp2464 = org$pandalanguage$pandac$Compiler$declaredTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_m, p_selfType);
        return $tmp2464;
    }
    }
    org$pandalanguage$pandac$Type* $tmp2465 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, inherited2462, p_selfType);
    return $tmp2465;
}
panda$core$String* org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(panda$core$Int64 p_op) {
    switch (p_op.value) {
        case 51:
        {
            return &$s2466;
        }
        break;
        case 52:
        {
            return &$s2467;
        }
        break;
        case 53:
        {
            return &$s2468;
        }
        break;
        case 54:
        {
            return &$s2469;
        }
        break;
        case 55:
        {
            return &$s2470;
        }
        break;
        case 56:
        {
            return &$s2471;
        }
        break;
        case 57:
        {
            return &$s2472;
        }
        break;
        case 58:
        {
            return &$s2473;
        }
        break;
        case 59:
        {
            return &$s2474;
        }
        break;
        case 63:
        {
            return &$s2475;
        }
        break;
        case 62:
        {
            return &$s2476;
        }
        break;
        case 65:
        {
            return &$s2477;
        }
        break;
        case 64:
        {
            return &$s2478;
        }
        break;
        case 68:
        {
            return &$s2479;
        }
        break;
        case 69:
        {
            return &$s2480;
        }
        break;
        case 66:
        {
            return &$s2481;
        }
        break;
        case 67:
        {
            return &$s2482;
        }
        break;
        case 70:
        {
            return &$s2483;
        }
        break;
        case 71:
        {
            return &$s2484;
        }
        break;
        case 49:
        {
            return &$s2485;
        }
        break;
        case 50:
        {
            return &$s2486;
        }
        break;
        case 72:
        {
            return &$s2487;
        }
        break;
        case 1:
        {
            return &$s2488;
        }
        break;
        case 101:
        {
            return &$s2489;
        }
        break;
        case 73:
        {
            return &$s2490;
        }
        break;
        case 60:
        {
            return &$s2491;
        }
        break;
        case 61:
        {
            return &$s2492;
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
            panda$core$Int64 $tmp2493 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_expr->children);
            panda$core$Bit $tmp2494 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2493, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp2494.value);
            panda$core$Bit $tmp2495 = panda$core$Bit$$NOT$R$panda$core$Bit(((panda$core$Bit$wrapper*) p_expr->payload)->value);
            if ($tmp2495.value) {
            {
                panda$core$Object* $tmp2496 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Bit $tmp2497 = org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp2496));
                return $tmp2497;
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
            panda$core$Object* $tmp2498 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp2499 = org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp2498));
            return $tmp2499;
        }
        break;
        default:
        {
            return ((panda$core$Bit) { false });
        }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$foldInts$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_left, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_right) {
    panda$core$Int64 l2525;
    panda$core$Int64 r2527;
    panda$core$Bit $tmp2501 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_left->kind, ((panda$core$Int64) { 1004 }));
    bool $tmp2500 = $tmp2501.value;
    if ($tmp2500) goto $l2502;
    panda$core$Bit $tmp2503 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_left->kind, ((panda$core$Int64) { 1032 }));
    $tmp2500 = $tmp2503.value;
    $l2502:;
    panda$core$Bit $tmp2504 = { $tmp2500 };
    PANDA_ASSERT($tmp2504.value);
    panda$core$Bit $tmp2506 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_right->kind, ((panda$core$Int64) { 1004 }));
    bool $tmp2505 = $tmp2506.value;
    if ($tmp2505) goto $l2507;
    panda$core$Bit $tmp2508 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_right->kind, ((panda$core$Int64) { 1032 }));
    $tmp2505 = $tmp2508.value;
    $l2507:;
    panda$core$Bit $tmp2509 = { $tmp2505 };
    PANDA_ASSERT($tmp2509.value);
    panda$core$Bit $tmp2512 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_left->kind, ((panda$core$Int64) { 1032 }));
    bool $tmp2511 = $tmp2512.value;
    if ($tmp2511) goto $l2513;
    panda$core$UInt64 $tmp2515 = panda$core$Int64$convert$R$panda$core$UInt64(((panda$core$Int64) { 9223372036854775807 }));
    panda$core$Bit $tmp2516 = panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p_left->payload)->value, $tmp2515);
    bool $tmp2514 = $tmp2516.value;
    if (!$tmp2514) goto $l2517;
    panda$core$Bit $tmp2518 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_right->kind, ((panda$core$Int64) { 1032 }));
    $tmp2514 = $tmp2518.value;
    $l2517:;
    panda$core$Bit $tmp2519 = { $tmp2514 };
    $tmp2511 = $tmp2519.value;
    $l2513:;
    panda$core$Bit $tmp2520 = { $tmp2511 };
    bool $tmp2510 = $tmp2520.value;
    if ($tmp2510) goto $l2521;
    panda$core$UInt64 $tmp2522 = panda$core$Int64$convert$R$panda$core$UInt64(((panda$core$Int64) { 9223372036854775807 }));
    panda$core$Bit $tmp2523 = panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p_right->payload)->value, $tmp2522);
    $tmp2510 = $tmp2523.value;
    $l2521:;
    panda$core$Bit $tmp2524 = { $tmp2510 };
    if ($tmp2524.value) {
    {
        panda$core$Int64 $tmp2526 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_left->payload)->value);
        l2525 = $tmp2526;
        panda$core$Int64 $tmp2528 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_right->payload)->value);
        r2527 = $tmp2528;
        switch (p_op.value) {
            case 51:
            {
                org$pandalanguage$pandac$IRNode* $tmp2529 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2529->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2529->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2531 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2532 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(l2525, r2527);
                panda$core$UInt64 $tmp2533 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2532);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2529, ((panda$core$Int64) { 1004 }), p_position, $tmp2531, $tmp2533);
                return $tmp2529;
            }
            break;
            case 52:
            {
                org$pandalanguage$pandac$IRNode* $tmp2534 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2534->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2534->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2536 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2537 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(l2525, r2527);
                panda$core$UInt64 $tmp2538 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2537);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2534, ((panda$core$Int64) { 1004 }), p_position, $tmp2536, $tmp2538);
                return $tmp2534;
            }
            break;
            case 53:
            {
                org$pandalanguage$pandac$IRNode* $tmp2539 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2539->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2539->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2541 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2542 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(l2525, r2527);
                panda$core$UInt64 $tmp2543 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2542);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2539, ((panda$core$Int64) { 1004 }), p_position, $tmp2541, $tmp2543);
                return $tmp2539;
            }
            break;
            case 55:
            {
                org$pandalanguage$pandac$IRNode* $tmp2544 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2544->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2544->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2546 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2547 = panda$core$Int64$$INTDIV$panda$core$Int64$R$panda$core$Int64(l2525, r2527);
                panda$core$UInt64 $tmp2548 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2547);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2544, ((panda$core$Int64) { 1004 }), p_position, $tmp2546, $tmp2548);
                return $tmp2544;
            }
            break;
            case 56:
            {
                org$pandalanguage$pandac$IRNode* $tmp2549 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2549->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2549->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2551 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2552 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(l2525, r2527);
                panda$core$UInt64 $tmp2553 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2552);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2549, ((panda$core$Int64) { 1004 }), p_position, $tmp2551, $tmp2553);
                return $tmp2549;
            }
            break;
            case 58:
            {
                org$pandalanguage$pandac$IRNode* $tmp2554 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2554->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2554->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2556 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2557 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(l2525, r2527);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2554, ((panda$core$Int64) { 1011 }), p_position, $tmp2556, $tmp2557);
                return $tmp2554;
            }
            break;
            case 59:
            {
                org$pandalanguage$pandac$IRNode* $tmp2558 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2558->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2558->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2560 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2561 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(l2525, r2527);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2558, ((panda$core$Int64) { 1011 }), p_position, $tmp2560, $tmp2561);
                return $tmp2558;
            }
            break;
            case 62:
            {
                org$pandalanguage$pandac$IRNode* $tmp2562 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2562->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2562->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2564 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2565 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(l2525, r2527);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2562, ((panda$core$Int64) { 1011 }), p_position, $tmp2564, $tmp2565);
                return $tmp2562;
            }
            break;
            case 63:
            {
                org$pandalanguage$pandac$IRNode* $tmp2566 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2566->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2566->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2568 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2569 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(l2525, r2527);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2566, ((panda$core$Int64) { 1011 }), p_position, $tmp2568, $tmp2569);
                return $tmp2566;
            }
            break;
            case 64:
            {
                org$pandalanguage$pandac$IRNode* $tmp2570 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2570->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2570->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2572 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2573 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(l2525, r2527);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2570, ((panda$core$Int64) { 1011 }), p_position, $tmp2572, $tmp2573);
                return $tmp2570;
            }
            break;
            case 65:
            {
                org$pandalanguage$pandac$IRNode* $tmp2574 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2574->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2574->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2576 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2577 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(l2525, r2527);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2574, ((panda$core$Int64) { 1011 }), p_position, $tmp2576, $tmp2577);
                return $tmp2574;
            }
            break;
            case 67:
            {
                org$pandalanguage$pandac$IRNode* $tmp2578 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2578->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2578->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2580 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2581 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(l2525, r2527);
                panda$core$UInt64 $tmp2582 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2581);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2578, ((panda$core$Int64) { 1004 }), p_position, $tmp2580, $tmp2582);
                return $tmp2578;
            }
            break;
            case 69:
            {
                org$pandalanguage$pandac$IRNode* $tmp2583 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2583->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2583->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2585 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2586 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(l2525, r2527);
                panda$core$UInt64 $tmp2587 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2586);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2583, ((panda$core$Int64) { 1004 }), p_position, $tmp2585, $tmp2587);
                return $tmp2583;
            }
            break;
            case 71:
            {
                org$pandalanguage$pandac$IRNode* $tmp2588 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2588->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2588->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2590 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2591 = panda$core$Int64$$BXOR$panda$core$Int64$R$panda$core$Int64(l2525, r2527);
                panda$core$UInt64 $tmp2592 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2591);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2588, ((panda$core$Int64) { 1004 }), p_position, $tmp2590, $tmp2592);
                return $tmp2588;
            }
            break;
            case 72:
            {
                org$pandalanguage$pandac$IRNode* $tmp2593 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2593->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2593->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2595 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2596 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(l2525, r2527);
                panda$core$UInt64 $tmp2597 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2596);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2593, ((panda$core$Int64) { 1004 }), p_position, $tmp2595, $tmp2597);
                return $tmp2593;
            }
            break;
            case 1:
            {
                org$pandalanguage$pandac$IRNode* $tmp2598 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2598->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2598->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2600 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2601 = panda$core$Int64$$SHR$panda$core$Int64$R$panda$core$Int64(l2525, r2527);
                panda$core$UInt64 $tmp2602 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2601);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2598, ((panda$core$Int64) { 1004 }), p_position, $tmp2600, $tmp2602);
                return $tmp2598;
            }
            break;
        }
    }
    }
    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s2603);
    return NULL;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    panda$core$Bit $tmp2604 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1009 }));
    if ($tmp2604.value) {
    {
        panda$core$Object* $tmp2605 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
        return ((org$pandalanguage$pandac$IRNode*) $tmp2605);
    }
    }
    return p_expr;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIndexedAssignment$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_left, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_right) {
    panda$collections$Array* args2610;
    org$pandalanguage$pandac$IRNode* resolved2618;
    panda$collections$Array* children2623;
    panda$core$UInt64 baseId2629;
    org$pandalanguage$pandac$IRNode* base2630;
    panda$core$UInt64 indexId2637;
    org$pandalanguage$pandac$IRNode* index2638;
    org$pandalanguage$pandac$IRNode* baseRef2643;
    org$pandalanguage$pandac$IRNode* indexRef2646;
    org$pandalanguage$pandac$IRNode* rhsIndex2649;
    org$pandalanguage$pandac$IRNode* value2651;
    panda$core$Bit $tmp2606 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_left->kind, ((panda$core$Int64) { 1040 }));
    PANDA_ASSERT($tmp2606.value);
    panda$core$Int64 $tmp2607 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_left->children);
    panda$core$Bit $tmp2608 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2607, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp2608.value);
    panda$core$Bit $tmp2609 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 73 }));
    if ($tmp2609.value) {
    {
        panda$collections$Array* $tmp2611 = (panda$collections$Array*) malloc(40);
        $tmp2611->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2611->refCount.value = 1;
        panda$collections$Array$init($tmp2611);
        args2610 = $tmp2611;
        panda$core$Object* $tmp2613 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_left->children, ((panda$core$Int64) { 1 }));
        panda$collections$Array$add$panda$collections$Array$T(args2610, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp2613)));
        panda$collections$Array$add$panda$collections$Array$T(args2610, ((panda$core$Object*) p_right));
        panda$core$Object* $tmp2614 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_left->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp2616 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp2614), &$s2615, ((panda$collections$ListView*) args2610));
        return $tmp2616;
    }
    }
    panda$core$Bit $tmp2617 = org$pandalanguage$pandac$Compiler$isAssignment$panda$core$Int64$R$panda$core$Bit(p_op);
    PANDA_ASSERT($tmp2617.value);
    org$pandalanguage$pandac$IRNode* $tmp2619 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_left);
    resolved2618 = $tmp2619;
    if (((panda$core$Bit) { resolved2618 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp2620 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self, resolved2618);
    resolved2618 = $tmp2620;
    panda$core$Int64 $tmp2621 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(resolved2618->children);
    panda$core$Bit $tmp2622 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2621, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp2622.value);
    panda$collections$Array* $tmp2624 = (panda$collections$Array*) malloc(40);
    $tmp2624->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2624->refCount.value = 1;
    panda$collections$Array$init($tmp2624);
    children2623 = $tmp2624;
    panda$core$Object* $tmp2626 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(resolved2618->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp2627 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self, ((org$pandalanguage$pandac$IRNode*) $tmp2626));
    panda$collections$Array$add$panda$collections$Array$T(children2623, ((panda$core$Object*) $tmp2627));
    panda$core$UInt64 $tmp2628 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(self->reusedValueCount, ((panda$core$UInt64) { 1 }));
    self->reusedValueCount = $tmp2628;
    baseId2629 = self->reusedValueCount;
    org$pandalanguage$pandac$IRNode* $tmp2631 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp2631->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2631->refCount.value = 1;
    panda$core$Object* $tmp2633 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children2623, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp2634 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children2623, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2631, ((panda$core$Int64) { 1027 }), ((org$pandalanguage$pandac$IRNode*) $tmp2633)->position, ((org$pandalanguage$pandac$IRNode*) $tmp2634)->type, ((panda$core$Object*) wrap_panda$core$UInt64(baseId2629)), ((panda$collections$ListView*) children2623));
    base2630 = $tmp2631;
    panda$collections$Array$clear(children2623);
    panda$core$Object* $tmp2635 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(resolved2618->children, ((panda$core$Int64) { 1 }));
    panda$collections$Array$add$panda$collections$Array$T(children2623, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp2635)));
    panda$core$UInt64 $tmp2636 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(self->reusedValueCount, ((panda$core$UInt64) { 1 }));
    self->reusedValueCount = $tmp2636;
    indexId2637 = self->reusedValueCount;
    org$pandalanguage$pandac$IRNode* $tmp2639 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp2639->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2639->refCount.value = 1;
    panda$core$Object* $tmp2641 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children2623, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp2642 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children2623, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2639, ((panda$core$Int64) { 1027 }), ((org$pandalanguage$pandac$IRNode*) $tmp2641)->position, ((org$pandalanguage$pandac$IRNode*) $tmp2642)->type, ((panda$core$Object*) wrap_panda$core$UInt64(indexId2637)), ((panda$collections$ListView*) children2623));
    index2638 = $tmp2639;
    org$pandalanguage$pandac$IRNode* $tmp2644 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp2644->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2644->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2644, ((panda$core$Int64) { 1028 }), base2630->position, base2630->type, baseId2629);
    baseRef2643 = $tmp2644;
    org$pandalanguage$pandac$IRNode* $tmp2647 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp2647->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2647->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2647, ((panda$core$Int64) { 1028 }), index2638->position, index2638->type, indexId2637);
    indexRef2646 = $tmp2647;
    org$pandalanguage$pandac$IRNode* $tmp2650 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, baseRef2643, ((panda$core$Int64) { 101 }), indexRef2646);
    rhsIndex2649 = $tmp2650;
    if (((panda$core$Bit) { rhsIndex2649 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Int64 $tmp2652 = org$pandalanguage$pandac$Compiler$removeAssignment$panda$core$Int64$R$panda$core$Int64(p_op);
    org$pandalanguage$pandac$IRNode* $tmp2653 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, rhsIndex2649, $tmp2652, p_right);
    value2651 = $tmp2653;
    if (((panda$core$Bit) { value2651 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp2656 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(rhsIndex2649->type);
    bool $tmp2655 = $tmp2656.value;
    if (!$tmp2655) goto $l2657;
    panda$core$Bit $tmp2658 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_right->type);
    $tmp2655 = $tmp2658.value;
    $l2657:;
    panda$core$Bit $tmp2659 = { $tmp2655 };
    bool $tmp2654 = $tmp2659.value;
    if (!$tmp2654) goto $l2660;
    panda$core$Bit $tmp2661 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(rhsIndex2649->type, value2651->type);
    $tmp2654 = $tmp2661.value;
    $l2660:;
    panda$core$Bit $tmp2662 = { $tmp2654 };
    if ($tmp2662.value) {
    {
        panda$collections$Array* $tmp2664 = (panda$collections$Array*) malloc(40);
        $tmp2664->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2664->refCount.value = 1;
        panda$collections$Array$init($tmp2664);
        org$pandalanguage$pandac$IRNode* $tmp2666 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, value2651, &$s2663, ((panda$collections$ListView*) $tmp2664), resolved2618->type);
        value2651 = $tmp2666;
        if (((panda$core$Bit) { value2651 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$collections$Array$clear(children2623);
    panda$collections$Array$add$panda$collections$Array$T(children2623, ((panda$core$Object*) index2638));
    panda$collections$Array$add$panda$collections$Array$T(children2623, ((panda$core$Object*) value2651));
    org$pandalanguage$pandac$IRNode* $tmp2668 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, base2630, &$s2667, ((panda$collections$ListView*) children2623));
    return $tmp2668;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_rawLeft, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_rawRight) {
    org$pandalanguage$pandac$IRNode* left2669;
    org$pandalanguage$pandac$IRNode* right2670;
    panda$core$Int64 kind2694;
    org$pandalanguage$pandac$IRNode* resolved2701;
    panda$collections$Array* children2703;
    org$pandalanguage$pandac$IRNode* resolved2710;
    panda$collections$Array* children2712;
    org$pandalanguage$pandac$ClassDecl* cl2724;
    org$pandalanguage$pandac$ClassDecl* cl2741;
    org$pandalanguage$pandac$IRNode* finalLeft2757;
    org$pandalanguage$pandac$IRNode* finalRight2760;
    panda$collections$Array* children2763;
    panda$collections$Array* children2777;
    panda$collections$Array* children2789;
    org$pandalanguage$pandac$IRNode* reusedLeft2795;
    org$pandalanguage$pandac$ClassDecl* cl2812;
    panda$collections$ListView* parameters2814;
    org$pandalanguage$pandac$Symbol* methods2816;
    org$pandalanguage$pandac$Type* type2820;
    panda$collections$Array* types2821;
    org$pandalanguage$pandac$MethodDecl* m2825;
    panda$collections$Iterator* m$Iter2830;
    org$pandalanguage$pandac$MethodDecl* m2842;
    panda$collections$Array* children2853;
    panda$collections$Array* children2882;
    panda$collections$Array* children2898;
    org$pandalanguage$pandac$Type* resultType2921;
    org$pandalanguage$pandac$IRNode* result2925;
    org$pandalanguage$pandac$IRNode* resolved2928;
    org$pandalanguage$pandac$IRNode* target2934;
    left2669 = p_rawLeft;
    right2670 = p_rawRight;
    panda$core$Bit $tmp2671 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2669->type->typeKind, ((panda$core$Int64) { 15 }));
    if ($tmp2671.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2672 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, right2670);
        right2670 = $tmp2672;
        if (((panda$core$Bit) { right2670 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Int64$nullable $tmp2673 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, left2669, right2670->type);
        if (((panda$core$Bit) { $tmp2673.nonnull }).value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2674 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, left2669, right2670->type);
            left2669 = $tmp2674;
        }
        }
    }
    }
    panda$core$Bit $tmp2676 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right2670->type->typeKind, ((panda$core$Int64) { 15 }));
    bool $tmp2675 = $tmp2676.value;
    if (!$tmp2675) goto $l2677;
    panda$core$Int64$nullable $tmp2678 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, right2670, left2669->type);
    $tmp2675 = ((panda$core$Bit) { $tmp2678.nonnull }).value;
    $l2677:;
    panda$core$Bit $tmp2679 = { $tmp2675 };
    if ($tmp2679.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2680 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, right2670, left2669->type);
        right2670 = $tmp2680;
    }
    }
    panda$core$Bit $tmp2684 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 58 }));
    bool $tmp2683 = $tmp2684.value;
    if ($tmp2683) goto $l2685;
    panda$core$Bit $tmp2686 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 59 }));
    $tmp2683 = $tmp2686.value;
    $l2685:;
    panda$core$Bit $tmp2687 = { $tmp2683 };
    bool $tmp2682 = $tmp2687.value;
    if ($tmp2682) goto $l2688;
    panda$core$Bit $tmp2689 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 60 }));
    $tmp2682 = $tmp2689.value;
    $l2688:;
    panda$core$Bit $tmp2690 = { $tmp2682 };
    bool $tmp2681 = $tmp2690.value;
    if ($tmp2681) goto $l2691;
    panda$core$Bit $tmp2692 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 61 }));
    $tmp2681 = $tmp2692.value;
    $l2691:;
    panda$core$Bit $tmp2693 = { $tmp2681 };
    if ($tmp2693.value) {
    {
        panda$core$Bit $tmp2696 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 58 }));
        bool $tmp2695 = $tmp2696.value;
        if ($tmp2695) goto $l2697;
        panda$core$Bit $tmp2698 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 60 }));
        $tmp2695 = $tmp2698.value;
        $l2697:;
        panda$core$Bit $tmp2699 = { $tmp2695 };
        if ($tmp2699.value) {
        {
            kind2694 = ((panda$core$Int64) { 1035 });
        }
        }
        else {
        {
            kind2694 = ((panda$core$Int64) { 1036 });
        }
        }
        panda$core$Bit $tmp2700 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2669->kind, ((panda$core$Int64) { 1030 }));
        if ($tmp2700.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2702 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, right2670);
            resolved2701 = $tmp2702;
            if (((panda$core$Bit) { resolved2701 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp2704 = (panda$collections$Array*) malloc(40);
            $tmp2704->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2704->refCount.value = 1;
            panda$collections$Array$init($tmp2704);
            children2703 = $tmp2704;
            panda$collections$Array$add$panda$collections$Array$T(children2703, ((panda$core$Object*) resolved2701));
            org$pandalanguage$pandac$IRNode* $tmp2706 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2706->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2706->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2708 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2706, kind2694, p_position, $tmp2708, ((panda$collections$ListView*) children2703));
            return $tmp2706;
        }
        }
        panda$core$Bit $tmp2709 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right2670->kind, ((panda$core$Int64) { 1030 }));
        if ($tmp2709.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2711 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, left2669);
            resolved2710 = $tmp2711;
            if (((panda$core$Bit) { resolved2710 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp2713 = (panda$collections$Array*) malloc(40);
            $tmp2713->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2713->refCount.value = 1;
            panda$collections$Array$init($tmp2713);
            children2712 = $tmp2713;
            panda$collections$Array$add$panda$collections$Array$T(children2712, ((panda$core$Object*) resolved2710));
            org$pandalanguage$pandac$IRNode* $tmp2715 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2715->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2715->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2717 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2715, kind2694, p_position, $tmp2717, ((panda$collections$ListView*) children2712));
            return $tmp2715;
        }
        }
    }
    }
    panda$core$Bit $tmp2719 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 60 }));
    bool $tmp2718 = $tmp2719.value;
    if ($tmp2718) goto $l2720;
    panda$core$Bit $tmp2721 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 61 }));
    $tmp2718 = $tmp2721.value;
    $l2720:;
    panda$core$Bit $tmp2722 = { $tmp2718 };
    if ($tmp2722.value) {
    {
        panda$core$Bit $tmp2723 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(left2669->type);
        if ($tmp2723.value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp2725 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, left2669->type);
            cl2724 = $tmp2725;
            if (((panda$core$Bit) { cl2724 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$Bit $tmp2726 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, cl2724);
            if ($tmp2726.value) {
            {
                panda$core$String* $tmp2728 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
                panda$core$String* $tmp2729 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2727, $tmp2728);
                panda$core$String* $tmp2731 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2729, &$s2730);
                panda$core$String* $tmp2732 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2731, ((panda$core$Object*) left2669->type));
                panda$core$String* $tmp2734 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2732, &$s2733);
                panda$core$String* $tmp2736 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2735, ((panda$core$Object*) right2670->type));
                panda$core$String* $tmp2738 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2736, &$s2737);
                panda$core$String* $tmp2739 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2734, $tmp2738);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp2739);
            }
            }
        }
        }
        panda$core$Bit $tmp2740 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(right2670->type);
        if ($tmp2740.value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp2742 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, right2670->type);
            cl2741 = $tmp2742;
            if (((panda$core$Bit) { cl2741 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$Bit $tmp2743 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, cl2741);
            if ($tmp2743.value) {
            {
                panda$core$String* $tmp2745 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
                panda$core$String* $tmp2746 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2744, $tmp2745);
                panda$core$String* $tmp2748 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2746, &$s2747);
                panda$core$String* $tmp2749 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2748, ((panda$core$Object*) left2669->type));
                panda$core$String* $tmp2751 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2749, &$s2750);
                panda$core$String* $tmp2753 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2752, ((panda$core$Object*) right2670->type));
                panda$core$String* $tmp2755 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2753, &$s2754);
                panda$core$String* $tmp2756 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2751, $tmp2755);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp2756);
            }
            }
        }
        }
        org$pandalanguage$pandac$Type* $tmp2758 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp2759 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, left2669, $tmp2758);
        finalLeft2757 = $tmp2759;
        if (((panda$core$Bit) { finalLeft2757 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$Type* $tmp2761 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp2762 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, right2670, $tmp2761);
        finalRight2760 = $tmp2762;
        if (((panda$core$Bit) { finalRight2760 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp2764 = (panda$collections$Array*) malloc(40);
        $tmp2764->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2764->refCount.value = 1;
        panda$collections$Array$init($tmp2764);
        children2763 = $tmp2764;
        panda$collections$Array$add$panda$collections$Array$T(children2763, ((panda$core$Object*) finalLeft2757));
        panda$collections$Array$add$panda$collections$Array$T(children2763, ((panda$core$Object*) finalRight2760));
        org$pandalanguage$pandac$IRNode* $tmp2766 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2766->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2766->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp2768 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2766, ((panda$core$Int64) { 1023 }), p_position, $tmp2768, ((panda$core$Object*) wrap_panda$core$Int64(p_op)), ((panda$collections$ListView*) children2763));
        return $tmp2766;
    }
    }
    panda$core$Bit $tmp2769 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 73 }));
    if ($tmp2769.value) {
    {
        panda$core$Bit $tmp2770 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2669->kind, ((panda$core$Int64) { 1040 }));
        if ($tmp2770.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2771 = org$pandalanguage$pandac$Compiler$compileIndexedAssignment$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, left2669, p_op, right2670);
            return $tmp2771;
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp2772 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, left2669);
        left2669 = $tmp2772;
        if (((panda$core$Bit) { left2669 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp2773 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, right2670, left2669->type);
        right2670 = $tmp2773;
        if (((panda$core$Bit) { right2670 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp2774 = org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, left2669);
        panda$core$Bit $tmp2775 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2774);
        if ($tmp2775.value) {
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, left2669->position, &$s2776);
            return NULL;
        }
        }
        panda$collections$Array* $tmp2778 = (panda$collections$Array*) malloc(40);
        $tmp2778->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2778->refCount.value = 1;
        panda$collections$Array$init($tmp2778);
        children2777 = $tmp2778;
        panda$collections$Array$add$panda$collections$Array$T(children2777, ((panda$core$Object*) left2669));
        panda$collections$Array$add$panda$collections$Array$T(children2777, ((panda$core$Object*) right2670));
        org$pandalanguage$pandac$IRNode* $tmp2780 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2780->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2780->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2780, ((panda$core$Int64) { 1023 }), p_position, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 73 }))), ((panda$collections$ListView*) children2777));
        return $tmp2780;
    }
    }
    panda$core$Bit $tmp2782 = org$pandalanguage$pandac$Compiler$isAssignment$panda$core$Int64$R$panda$core$Bit(p_op);
    if ($tmp2782.value) {
    {
        panda$core$Bit $tmp2783 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2669->kind, ((panda$core$Int64) { 1040 }));
        if ($tmp2783.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2784 = org$pandalanguage$pandac$Compiler$compileIndexedAssignment$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, left2669, p_op, right2670);
            return $tmp2784;
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp2785 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, left2669);
        left2669 = $tmp2785;
        if (((panda$core$Bit) { left2669 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp2786 = org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, left2669);
        panda$core$Bit $tmp2787 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2786);
        if ($tmp2787.value) {
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, left2669->position, &$s2788);
            return NULL;
        }
        }
        panda$collections$Array* $tmp2790 = (panda$collections$Array*) malloc(40);
        $tmp2790->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2790->refCount.value = 1;
        panda$collections$Array$init($tmp2790);
        children2789 = $tmp2790;
        panda$collections$Array$add$panda$collections$Array$T(children2789, ((panda$core$Object*) left2669));
        panda$core$UInt64 $tmp2792 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(self->reusedValueCount, ((panda$core$UInt64) { 1 }));
        self->reusedValueCount = $tmp2792;
        org$pandalanguage$pandac$IRNode* $tmp2793 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2793->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2793->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2793, ((panda$core$Int64) { 1027 }), left2669->position, left2669->type, ((panda$core$Object*) wrap_panda$core$UInt64(self->reusedValueCount)), ((panda$collections$ListView*) children2789));
        left2669 = $tmp2793;
        org$pandalanguage$pandac$IRNode* $tmp2796 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2796->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2796->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2796, ((panda$core$Int64) { 1028 }), left2669->position, left2669->type, self->reusedValueCount);
        reusedLeft2795 = $tmp2796;
        panda$core$Int64 $tmp2798 = org$pandalanguage$pandac$Compiler$removeAssignment$panda$core$Int64$R$panda$core$Int64(p_op);
        org$pandalanguage$pandac$IRNode* $tmp2799 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, reusedLeft2795, $tmp2798, right2670);
        right2670 = $tmp2799;
        if (((panda$core$Bit) { right2670 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp2801 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(left2669->type);
        bool $tmp2800 = $tmp2801.value;
        if (!$tmp2800) goto $l2802;
        panda$core$Bit $tmp2803 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(left2669->type, right2670->type);
        $tmp2800 = $tmp2803.value;
        $l2802:;
        panda$core$Bit $tmp2804 = { $tmp2800 };
        if ($tmp2804.value) {
        {
            panda$collections$Array* $tmp2806 = (panda$collections$Array*) malloc(40);
            $tmp2806->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2806->refCount.value = 1;
            panda$collections$Array$init($tmp2806);
            org$pandalanguage$pandac$IRNode* $tmp2808 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, right2670, &$s2805, ((panda$collections$ListView*) $tmp2806), left2669->type);
            right2670 = $tmp2808;
            if (((panda$core$Bit) { right2670 == NULL }).value) {
            {
                return NULL;
            }
            }
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp2809 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, left2669, ((panda$core$Int64) { 73 }), right2670);
        return $tmp2809;
    }
    }
    panda$core$Bit $tmp2810 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 101 }));
    if ($tmp2810.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2811 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, left2669);
        left2669 = $tmp2811;
        if (((panda$core$Bit) { left2669 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$ClassDecl* $tmp2813 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, left2669->type);
        cl2812 = $tmp2813;
        if (((panda$core$Bit) { cl2812 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$ListView* $tmp2815 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, left2669->type);
        parameters2814 = $tmp2815;
        org$pandalanguage$pandac$SymbolTable* $tmp2817 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl2812);
        org$pandalanguage$pandac$Symbol* $tmp2819 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp2817, &$s2818);
        methods2816 = $tmp2819;
        if (((panda$core$Bit) { methods2816 != NULL }).value) {
        {
            panda$collections$Array* $tmp2822 = (panda$collections$Array*) malloc(40);
            $tmp2822->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2822->refCount.value = 1;
            panda$collections$Array$init($tmp2822);
            types2821 = $tmp2822;
            panda$core$Bit $tmp2824 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(methods2816->kind, ((panda$core$Int64) { 204 }));
            if ($tmp2824.value) {
            {
                m2825 = ((org$pandalanguage$pandac$MethodDecl*) methods2816);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m2825);
                org$pandalanguage$pandac$MethodRef* $tmp2826 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                $tmp2826->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                $tmp2826->refCount.value = 1;
                org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp2826, m2825, parameters2814);
                org$pandalanguage$pandac$Type* $tmp2828 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type($tmp2826);
                panda$collections$Array$add$panda$collections$Array$T(types2821, ((panda$core$Object*) $tmp2828));
            }
            }
            else {
            {
                panda$core$Bit $tmp2829 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(methods2816->kind, ((panda$core$Int64) { 205 }));
                PANDA_ASSERT($tmp2829.value);
                {
                    ITable* $tmp2831 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) methods2816)->methods)->$class->itable;
                    while ($tmp2831->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp2831 = $tmp2831->next;
                    }
                    $fn2833 $tmp2832 = $tmp2831->methods[0];
                    panda$collections$Iterator* $tmp2834 = $tmp2832(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) methods2816)->methods));
                    m$Iter2830 = $tmp2834;
                    $l2835:;
                    ITable* $tmp2837 = m$Iter2830->$class->itable;
                    while ($tmp2837->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp2837 = $tmp2837->next;
                    }
                    $fn2839 $tmp2838 = $tmp2837->methods[0];
                    panda$core$Bit $tmp2840 = $tmp2838(m$Iter2830);
                    panda$core$Bit $tmp2841 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2840);
                    if (!$tmp2841.value) goto $l2836;
                    {
                        ITable* $tmp2843 = m$Iter2830->$class->itable;
                        while ($tmp2843->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2843 = $tmp2843->next;
                        }
                        $fn2845 $tmp2844 = $tmp2843->methods[1];
                        panda$core$Object* $tmp2846 = $tmp2844(m$Iter2830);
                        m2842 = ((org$pandalanguage$pandac$MethodDecl*) $tmp2846);
                        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m2842);
                        org$pandalanguage$pandac$MethodRef* $tmp2847 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                        $tmp2847->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                        $tmp2847->refCount.value = 1;
                        org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp2847, m2842, parameters2814);
                        org$pandalanguage$pandac$Type* $tmp2849 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type($tmp2847);
                        panda$collections$Array$add$panda$collections$Array$T(types2821, ((panda$core$Object*) $tmp2849));
                    }
                    goto $l2835;
                    $l2836:;
                }
            }
            }
            org$pandalanguage$pandac$Type* $tmp2850 = (org$pandalanguage$pandac$Type*) malloc(96);
            $tmp2850->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp2850->refCount.value = 1;
            org$pandalanguage$pandac$Type$init$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp2850, ((panda$collections$ListView*) types2821));
            type2820 = $tmp2850;
        }
        }
        else {
        {
            org$pandalanguage$pandac$Type* $tmp2852 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            type2820 = $tmp2852;
        }
        }
        panda$collections$Array* $tmp2854 = (panda$collections$Array*) malloc(40);
        $tmp2854->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2854->refCount.value = 1;
        panda$collections$Array$init($tmp2854);
        children2853 = $tmp2854;
        panda$collections$Array$add$panda$collections$Array$T(children2853, ((panda$core$Object*) left2669));
        panda$collections$Array$add$panda$collections$Array$T(children2853, ((panda$core$Object*) right2670));
        org$pandalanguage$pandac$IRNode* $tmp2856 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2856->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2856->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2856, ((panda$core$Int64) { 1040 }), p_position, type2820, ((panda$collections$ListView*) children2853));
        return $tmp2856;
    }
    }
    org$pandalanguage$pandac$Type* $tmp2858 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2859 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(left2669->type, $tmp2858);
    if ($tmp2859.value) {
    {
        org$pandalanguage$pandac$Type* $tmp2861 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp2862 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(right2670->type, $tmp2861);
        bool $tmp2860 = $tmp2862.value;
        if (!$tmp2860) goto $l2863;
        panda$core$Bit $tmp2868 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 66 }));
        bool $tmp2867 = $tmp2868.value;
        if ($tmp2867) goto $l2869;
        panda$core$Bit $tmp2870 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 68 }));
        $tmp2867 = $tmp2870.value;
        $l2869:;
        panda$core$Bit $tmp2871 = { $tmp2867 };
        bool $tmp2866 = $tmp2871.value;
        if ($tmp2866) goto $l2872;
        panda$core$Bit $tmp2873 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 70 }));
        $tmp2866 = $tmp2873.value;
        $l2872:;
        panda$core$Bit $tmp2874 = { $tmp2866 };
        bool $tmp2865 = $tmp2874.value;
        if ($tmp2865) goto $l2875;
        panda$core$Bit $tmp2876 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 58 }));
        $tmp2865 = $tmp2876.value;
        $l2875:;
        panda$core$Bit $tmp2877 = { $tmp2865 };
        bool $tmp2864 = $tmp2877.value;
        if ($tmp2864) goto $l2878;
        panda$core$Bit $tmp2879 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 59 }));
        $tmp2864 = $tmp2879.value;
        $l2878:;
        panda$core$Bit $tmp2880 = { $tmp2864 };
        $tmp2860 = $tmp2880.value;
        $l2863:;
        panda$core$Bit $tmp2881 = { $tmp2860 };
        if ($tmp2881.value) {
        {
            panda$collections$Array* $tmp2883 = (panda$collections$Array*) malloc(40);
            $tmp2883->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2883->refCount.value = 1;
            panda$collections$Array$init($tmp2883);
            children2882 = $tmp2883;
            panda$collections$Array$add$panda$collections$Array$T(children2882, ((panda$core$Object*) left2669));
            panda$collections$Array$add$panda$collections$Array$T(children2882, ((panda$core$Object*) right2670));
            org$pandalanguage$pandac$IRNode* $tmp2885 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2885->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2885->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2885, ((panda$core$Int64) { 1023 }), p_position, left2669->type, ((panda$core$Object*) wrap_panda$core$Int64(p_op)), ((panda$collections$ListView*) children2882));
            return $tmp2885;
        }
        }
        panda$core$String* $tmp2888 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
        panda$core$String* $tmp2889 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2887, $tmp2888);
        panda$core$String* $tmp2891 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2889, &$s2890);
        panda$core$String* $tmp2892 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2891, ((panda$core$Object*) left2669->type));
        panda$core$String* $tmp2894 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2892, &$s2893);
        panda$core$String* $tmp2895 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2894, ((panda$core$Object*) right2670->type));
        panda$core$String* $tmp2897 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2895, &$s2896);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp2897);
        return NULL;
    }
    }
    panda$collections$Array* $tmp2899 = (panda$collections$Array*) malloc(40);
    $tmp2899->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2899->refCount.value = 1;
    panda$collections$Array$init($tmp2899);
    children2898 = $tmp2899;
    panda$core$Bit $tmp2903 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2669->kind, ((panda$core$Int64) { 1004 }));
    bool $tmp2902 = $tmp2903.value;
    if ($tmp2902) goto $l2904;
    panda$core$Bit $tmp2905 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2669->kind, ((panda$core$Int64) { 1032 }));
    $tmp2902 = $tmp2905.value;
    $l2904:;
    panda$core$Bit $tmp2906 = { $tmp2902 };
    bool $tmp2901 = $tmp2906.value;
    if (!$tmp2901) goto $l2907;
    panda$core$Bit $tmp2909 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right2670->kind, ((panda$core$Int64) { 1004 }));
    bool $tmp2908 = $tmp2909.value;
    if ($tmp2908) goto $l2910;
    panda$core$Bit $tmp2911 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right2670->kind, ((panda$core$Int64) { 1032 }));
    $tmp2908 = $tmp2911.value;
    $l2910:;
    panda$core$Bit $tmp2912 = { $tmp2908 };
    $tmp2901 = $tmp2912.value;
    $l2907:;
    panda$core$Bit $tmp2913 = { $tmp2901 };
    if ($tmp2913.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2914 = org$pandalanguage$pandac$Compiler$foldInts$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, left2669, p_op, right2670);
        return $tmp2914;
    }
    }
    panda$core$Bit $tmp2916 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(left2669->type);
    bool $tmp2915 = $tmp2916.value;
    if (!$tmp2915) goto $l2917;
    panda$core$Int64$nullable $tmp2918 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, right2670, left2669->type);
    $tmp2915 = ((panda$core$Bit) { $tmp2918.nonnull }).value;
    $l2917:;
    panda$core$Bit $tmp2919 = { $tmp2915 };
    if ($tmp2919.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2920 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, right2670, left2669->type);
        right2670 = $tmp2920;
        PANDA_ASSERT(((panda$core$Bit) { right2670 != NULL }).value);
        panda$collections$Array$add$panda$collections$Array$T(children2898, ((panda$core$Object*) left2669));
        panda$collections$Array$add$panda$collections$Array$T(children2898, ((panda$core$Object*) right2670));
        switch (p_op.value) {
            case 58:
            case 59:
            case 63:
            case 65:
            case 62:
            case 64:
            {
                org$pandalanguage$pandac$Type* $tmp2922 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
                resultType2921 = $tmp2922;
            }
            break;
            default:
            {
                resultType2921 = left2669->type;
            }
        }
        org$pandalanguage$pandac$IRNode* $tmp2923 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2923->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2923->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2923, ((panda$core$Int64) { 1023 }), p_position, resultType2921, ((panda$core$Object*) wrap_panda$core$Int64(p_op)), ((panda$collections$ListView*) children2898));
        return $tmp2923;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children2898, ((panda$core$Object*) right2670));
    PANDA_ASSERT(self->reportErrors.value);
    self->reportErrors = ((panda$core$Bit) { false });
    panda$core$String* $tmp2926 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
    org$pandalanguage$pandac$IRNode* $tmp2927 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, left2669, $tmp2926, ((panda$collections$ListView*) children2898));
    result2925 = $tmp2927;
    self->reportErrors = ((panda$core$Bit) { true });
    if (((panda$core$Bit) { result2925 == NULL }).value) {
    {
        panda$collections$Array$clear(children2898);
        panda$collections$Array$add$panda$collections$Array$T(children2898, ((panda$core$Object*) left2669));
        org$pandalanguage$pandac$IRNode* $tmp2929 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, right2670);
        resolved2928 = $tmp2929;
        bool $tmp2930 = ((panda$core$Bit) { resolved2928 != NULL }).value;
        if (!$tmp2930) goto $l2931;
        panda$core$Bit $tmp2932 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(resolved2928->type);
        $tmp2930 = $tmp2932.value;
        $l2931:;
        panda$core$Bit $tmp2933 = { $tmp2930 };
        if ($tmp2933.value) {
        {
            panda$collections$Array$add$panda$collections$Array$T(children2898, ((panda$core$Object*) resolved2928));
            org$pandalanguage$pandac$IRNode* $tmp2935 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2935->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2935->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2937 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp2935, ((panda$core$Int64) { 1001 }), resolved2928->position, $tmp2937, resolved2928->type);
            target2934 = $tmp2935;
            panda$core$String* $tmp2938 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
            org$pandalanguage$pandac$IRNode* $tmp2939 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target2934, $tmp2938, ((panda$collections$ListView*) children2898));
            result2925 = $tmp2939;
        }
        }
    }
    }
    return result2925;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_b) {
    org$pandalanguage$pandac$IRNode* left2940;
    org$pandalanguage$pandac$IRNode* right2943;
    panda$core$Object* $tmp2941 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_b->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp2942 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2941));
    left2940 = $tmp2942;
    if (((panda$core$Bit) { left2940 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Object* $tmp2944 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_b->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp2945 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2944));
    right2943 = $tmp2945;
    if (((panda$core$Bit) { right2943 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp2946 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_b->position, left2940, ((panda$core$Int64$wrapper*) p_b->payload)->value, right2943);
    return $tmp2946;
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type) {
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp2950;
    switch (p_type->typeKind.value) {
        case 22:
        {
            panda$collections$ListView* $tmp2947 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p_type->parameter->bound);
            return $tmp2947;
        }
        break;
        case 21:
        {
            panda$core$Int64 $tmp2948 = panda$collections$Array$get_count$R$panda$core$Int64(p_type->subtypes);
            panda$core$Bit $tmp2949 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp2948, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2949.value);
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp2950, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$collections$Array* $tmp2951 = panda$collections$Array$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT(p_type->subtypes, $tmp2950);
            return ((panda$collections$ListView*) $tmp2951);
        }
        break;
        case 11:
        {
            panda$core$Object* $tmp2952 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
            panda$collections$ListView* $tmp2953 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, ((org$pandalanguage$pandac$Type*) $tmp2952));
            return $tmp2953;
        }
        break;
        default:
        {
            panda$collections$Array* $tmp2954 = (panda$collections$Array*) malloc(40);
            $tmp2954->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2954->refCount.value = 1;
            panda$collections$Array$init($tmp2954);
            return ((panda$collections$ListView*) $tmp2954);
        }
    }
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$IRNode$Q$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_target) {
    if (((panda$core$Bit) { p_target != NULL }).value) {
    {
        panda$core$Bit $tmp2956 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1001 }));
        if ($tmp2956.value) {
        {
            panda$collections$ListView* $tmp2957 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, ((org$pandalanguage$pandac$Type*) p_target->payload));
            return $tmp2957;
        }
        }
        panda$collections$ListView* $tmp2958 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p_target->type);
        return $tmp2958;
    }
    }
    panda$collections$Array* $tmp2959 = (panda$collections$Array*) malloc(40);
    $tmp2959->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2959->refCount.value = 1;
    panda$collections$Array$init($tmp2959);
    return ((panda$collections$ListView*) $tmp2959);
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compilePrefix$panda$core$Int64$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_base, org$pandalanguage$pandac$Position p_position) {
    panda$core$String* name2962;
    org$pandalanguage$pandac$ClassDecl* cl2964;
    org$pandalanguage$pandac$Symbol* s2966;
    org$pandalanguage$pandac$MethodDecl* m2969;
    panda$collections$Iterator* test$Iter2974;
    org$pandalanguage$pandac$MethodDecl* test2986;
    org$pandalanguage$pandac$MethodRef* ref2998;
    panda$collections$Array* children3002;
    org$pandalanguage$pandac$IRNode* methodRef3005;
    org$pandalanguage$pandac$Position $tmp3011;
    panda$collections$Array* args3012;
    panda$collections$Array* children3021;
    panda$collections$Array* children3031;
    org$pandalanguage$pandac$IRNode* coerced3040;
    panda$collections$Array* children3043;
    panda$core$Bit $tmp2961 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_base->type);
    if ($tmp2961.value) {
    {
        panda$core$String* $tmp2963 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
        name2962 = $tmp2963;
        org$pandalanguage$pandac$ClassDecl* $tmp2965 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_base->type);
        cl2964 = $tmp2965;
        if (((panda$core$Bit) { cl2964 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$SymbolTable* $tmp2967 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl2964);
        org$pandalanguage$pandac$Symbol* $tmp2968 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp2967, name2962);
        s2966 = $tmp2968;
        if (((panda$core$Bit) { s2966 != NULL }).value) {
        {
            m2969 = NULL;
            switch (s2966->kind.value) {
                case 204:
                {
                    m2969 = ((org$pandalanguage$pandac$MethodDecl*) s2966);
                    panda$core$Int64 $tmp2970 = panda$collections$Array$get_count$R$panda$core$Int64(m2969->parameters);
                    panda$core$Bit $tmp2971 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2970, ((panda$core$Int64) { 0 }));
                    PANDA_ASSERT($tmp2971.value);
                    panda$core$Bit $tmp2972 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(m2969->annotations);
                    panda$core$Bit $tmp2973 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2972);
                    PANDA_ASSERT($tmp2973.value);
                }
                break;
                case 205:
                {
                    {
                        ITable* $tmp2975 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s2966)->methods)->$class->itable;
                        while ($tmp2975->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp2975 = $tmp2975->next;
                        }
                        $fn2977 $tmp2976 = $tmp2975->methods[0];
                        panda$collections$Iterator* $tmp2978 = $tmp2976(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s2966)->methods));
                        test$Iter2974 = $tmp2978;
                        $l2979:;
                        ITable* $tmp2981 = test$Iter2974->$class->itable;
                        while ($tmp2981->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2981 = $tmp2981->next;
                        }
                        $fn2983 $tmp2982 = $tmp2981->methods[0];
                        panda$core$Bit $tmp2984 = $tmp2982(test$Iter2974);
                        panda$core$Bit $tmp2985 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2984);
                        if (!$tmp2985.value) goto $l2980;
                        {
                            ITable* $tmp2987 = test$Iter2974->$class->itable;
                            while ($tmp2987->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp2987 = $tmp2987->next;
                            }
                            $fn2989 $tmp2988 = $tmp2987->methods[1];
                            panda$core$Object* $tmp2990 = $tmp2988(test$Iter2974);
                            test2986 = ((org$pandalanguage$pandac$MethodDecl*) $tmp2990);
                            panda$core$Bit $tmp2992 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(test2986->annotations);
                            panda$core$Bit $tmp2993 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2992);
                            bool $tmp2991 = $tmp2993.value;
                            if (!$tmp2991) goto $l2994;
                            panda$core$Int64 $tmp2995 = panda$collections$Array$get_count$R$panda$core$Int64(test2986->parameters);
                            panda$core$Bit $tmp2996 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2995, ((panda$core$Int64) { 0 }));
                            $tmp2991 = $tmp2996.value;
                            $l2994:;
                            panda$core$Bit $tmp2997 = { $tmp2991 };
                            if ($tmp2997.value) {
                            {
                                m2969 = test2986;
                                goto $l2980;
                            }
                            }
                        }
                        goto $l2979;
                        $l2980:;
                    }
                }
                break;
                default:
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
            }
            if (((panda$core$Bit) { m2969 != NULL }).value) {
            {
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m2969);
                org$pandalanguage$pandac$MethodRef* $tmp2999 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                $tmp2999->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                $tmp2999->refCount.value = 1;
                panda$collections$ListView* $tmp3001 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$IRNode$Q$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p_base);
                org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp2999, m2969, $tmp3001);
                ref2998 = $tmp2999;
                panda$collections$Array* $tmp3003 = (panda$collections$Array*) malloc(40);
                $tmp3003->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp3003->refCount.value = 1;
                panda$collections$Array$init($tmp3003);
                children3002 = $tmp3003;
                panda$collections$Array$add$panda$collections$Array$T(children3002, ((panda$core$Object*) p_base));
                org$pandalanguage$pandac$IRNode* $tmp3006 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp3006->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp3006->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp3008 = (org$pandalanguage$pandac$Type*) malloc(96);
                $tmp3008->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
                $tmp3008->refCount.value = 1;
                org$pandalanguage$pandac$Position$init(&$tmp3011);
                org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp3008, &$s3010, ((panda$core$Int64) { 16 }), $tmp3011, ((panda$core$Bit) { true }));
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3006, ((panda$core$Int64) { 1002 }), p_position, $tmp3008, ((panda$core$Object*) ref2998), ((panda$collections$ListView*) children3002));
                methodRef3005 = $tmp3006;
                panda$collections$Array* $tmp3013 = (panda$collections$Array*) malloc(40);
                $tmp3013->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp3013->refCount.value = 1;
                panda$collections$Array$init($tmp3013);
                args3012 = $tmp3013;
                org$pandalanguage$pandac$IRNode* $tmp3015 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, methodRef3005, ((panda$collections$ListView*) args3012));
                return $tmp3015;
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
                    org$pandalanguage$pandac$IRNode* $tmp3016 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp3016->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp3016->refCount.value = 1;
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp3016, ((panda$core$Int64) { 1032 }), p_position, p_base->type, ((panda$core$UInt64$wrapper*) p_base->payload)->value);
                    return $tmp3016;
                }
                break;
                case 1032:
                {
                    org$pandalanguage$pandac$IRNode* $tmp3018 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp3018->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp3018->refCount.value = 1;
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp3018, ((panda$core$Int64) { 1004 }), p_position, p_base->type, ((panda$core$UInt64$wrapper*) p_base->payload)->value);
                    return $tmp3018;
                }
                break;
                default:
                {
                    panda$core$Bit $tmp3020 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_base->type);
                    if ($tmp3020.value) {
                    {
                        panda$collections$Array* $tmp3022 = (panda$collections$Array*) malloc(40);
                        $tmp3022->$class = (panda$core$Class*) &panda$collections$Array$class;
                        $tmp3022->refCount.value = 1;
                        panda$collections$Array$init($tmp3022);
                        children3021 = $tmp3022;
                        panda$collections$Array$add$panda$collections$Array$T(children3021, ((panda$core$Object*) p_base));
                        org$pandalanguage$pandac$IRNode* $tmp3024 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                        $tmp3024->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                        $tmp3024->refCount.value = 1;
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3024, ((panda$core$Int64) { 1041 }), p_base->position, p_base->type, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 52 }))), ((panda$collections$ListView*) children3021));
                        return $tmp3024;
                    }
                    }
                }
            }
            panda$core$String* $tmp3027 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3026, ((panda$core$Object*) p_base->type));
            panda$core$String* $tmp3029 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3027, &$s3028);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_base->position, $tmp3029);
            return NULL;
        }
        break;
        case 50:
        {
            panda$core$Bit $tmp3030 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_base->type);
            if ($tmp3030.value) {
            {
                panda$collections$Array* $tmp3032 = (panda$collections$Array*) malloc(40);
                $tmp3032->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp3032->refCount.value = 1;
                panda$collections$Array$init($tmp3032);
                children3031 = $tmp3032;
                panda$collections$Array$add$panda$collections$Array$T(children3031, ((panda$core$Object*) p_base));
                org$pandalanguage$pandac$IRNode* $tmp3034 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp3034->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp3034->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3034, ((panda$core$Int64) { 1041 }), p_base->position, p_base->type, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 50 }))), ((panda$collections$ListView*) children3031));
                return $tmp3034;
            }
            }
            else {
            {
                panda$core$String* $tmp3037 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3036, ((org$pandalanguage$pandac$Symbol*) p_base->type)->name);
                panda$core$String* $tmp3039 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3037, &$s3038);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_base->position, $tmp3039);
                return NULL;
            }
            }
        }
        break;
        case 49:
        {
            org$pandalanguage$pandac$Type* $tmp3041 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode* $tmp3042 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_base, $tmp3041);
            coerced3040 = $tmp3042;
            if (((panda$core$Bit) { coerced3040 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp3044 = (panda$collections$Array*) malloc(40);
            $tmp3044->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp3044->refCount.value = 1;
            panda$collections$Array$init($tmp3044);
            children3043 = $tmp3044;
            panda$collections$Array$add$panda$collections$Array$T(children3043, ((panda$core$Object*) coerced3040));
            org$pandalanguage$pandac$IRNode* $tmp3046 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3046->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3046->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3046, ((panda$core$Int64) { 1041 }), p_base->position, p_base->type, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 49 }))), ((panda$collections$ListView*) children3043));
            return $tmp3046;
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
    org$pandalanguage$pandac$IRNode* base3051;
    panda$core$Bit $tmp3048 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_p->kind, ((panda$core$Int64) { 112 }));
    PANDA_ASSERT($tmp3048.value);
    panda$core$Int64 $tmp3049 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_p->children);
    panda$core$Bit $tmp3050 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3049, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3050.value);
    panda$core$Object* $tmp3052 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_p->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3053 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3052));
    base3051 = $tmp3053;
    if (((panda$core$Bit) { base3051 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3054 = org$pandalanguage$pandac$Compiler$compilePrefix$panda$core$Int64$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$R$org$pandalanguage$pandac$IRNode$Q(self, ((panda$core$Int64$wrapper*) p_p->payload)->value, base3051, p_p->position);
    return $tmp3054;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileCall$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_c) {
    org$pandalanguage$pandac$IRNode* m3056;
    panda$collections$Array* args3059;
    panda$core$Range$LTpanda$core$Int64$GT $tmp3062;
    org$pandalanguage$pandac$IRNode* arg3077;
    panda$core$Bit $tmp3055 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_c->kind, ((panda$core$Int64) { 107 }));
    PANDA_ASSERT($tmp3055.value);
    panda$core$Object* $tmp3057 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_c->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3058 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3057));
    m3056 = $tmp3058;
    if (((panda$core$Bit) { m3056 != NULL }).value) {
    {
        panda$collections$Array* $tmp3060 = (panda$collections$Array*) malloc(40);
        $tmp3060->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp3060->refCount.value = 1;
        panda$collections$Array$init($tmp3060);
        args3059 = $tmp3060;
        panda$core$Int64 $tmp3063 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_c->children);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp3062, ((panda$core$Int64) { 1 }), $tmp3063, ((panda$core$Bit) { false }));
        int64_t $tmp3065 = $tmp3062.min.value;
        panda$core$Int64 i3064 = { $tmp3065 };
        int64_t $tmp3067 = $tmp3062.max.value;
        bool $tmp3068 = $tmp3062.inclusive.value;
        if ($tmp3068) goto $l3075; else goto $l3076;
        $l3075:;
        if ($tmp3065 <= $tmp3067) goto $l3069; else goto $l3071;
        $l3076:;
        if ($tmp3065 < $tmp3067) goto $l3069; else goto $l3071;
        $l3069:;
        {
            panda$core$Object* $tmp3078 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_c->children, i3064);
            org$pandalanguage$pandac$IRNode* $tmp3079 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3078));
            arg3077 = $tmp3079;
            if (((panda$core$Bit) { arg3077 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(args3059, ((panda$core$Object*) arg3077));
        }
        $l3072:;
        int64_t $tmp3081 = $tmp3067 - i3064.value;
        if ($tmp3068) goto $l3082; else goto $l3083;
        $l3082:;
        if ($tmp3081 >= 1) goto $l3080; else goto $l3071;
        $l3083:;
        if ($tmp3081 > 1) goto $l3080; else goto $l3071;
        $l3080:;
        i3064.value += 1;
        goto $l3069;
        $l3071:;
        org$pandalanguage$pandac$IRNode* $tmp3086 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, m3056, ((panda$collections$ListView*) args3059));
        return $tmp3086;
    }
    }
    return NULL;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$String$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_base, panda$core$String* p_name) {
    org$pandalanguage$pandac$ClassDecl* cl3087;
    panda$core$String* name3089;
    org$pandalanguage$pandac$ClassDecl* cl3097;
    org$pandalanguage$pandac$SymbolTable* st3110;
    org$pandalanguage$pandac$Symbol* s3112;
    switch (p_base->kind.value) {
        case 1001:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp3088 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Type*) p_base->payload));
            cl3087 = $tmp3088;
        }
        break;
        case 1037:
        {
            panda$core$String* $tmp3091 = (($fn3090) p_base->payload->$class->vtable[0])(p_base->payload);
            panda$core$String* $tmp3093 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3091, &$s3092);
            panda$core$String* $tmp3094 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3093, p_name);
            panda$core$String* $tmp3096 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3094, &$s3095);
            name3089 = $tmp3096;
            org$pandalanguage$pandac$ClassDecl* $tmp3098 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, name3089);
            cl3097 = $tmp3098;
            if (((panda$core$Bit) { cl3097 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp3099 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp3099->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp3099->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp3101 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$Type* $tmp3102 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl3097);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp3099, ((panda$core$Int64) { 1001 }), p_position, $tmp3101, $tmp3102);
                return $tmp3099;
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp3103 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3103->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3103->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3105 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$String($tmp3103, ((panda$core$Int64) { 1037 }), p_position, $tmp3105, name3089);
            return $tmp3103;
        }
        break;
        case 1024:
        {
            panda$core$Object* $tmp3106 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, ((org$pandalanguage$pandac$ClassDecl*) $tmp3106));
            panda$core$Object* $tmp3107 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
            org$pandalanguage$pandac$ClassDecl* $tmp3108 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$ClassDecl*) $tmp3107)->rawSuper);
            cl3087 = $tmp3108;
        }
        break;
        default:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp3109 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_base->type);
            cl3087 = $tmp3109;
        }
    }
    if (((panda$core$Bit) { cl3087 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp3111 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl3087);
    st3110 = $tmp3111;
    org$pandalanguage$pandac$Symbol* $tmp3113 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(st3110, p_name);
    s3112 = $tmp3113;
    if (((panda$core$Bit) { s3112 == NULL }).value) {
    {
        panda$core$String* $tmp3115 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3114, ((panda$core$Object*) p_base->type));
        panda$core$String* $tmp3117 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3115, &$s3116);
        panda$core$String* $tmp3118 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3117, p_name);
        panda$core$String* $tmp3120 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3118, &$s3119);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp3120);
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3121 = org$pandalanguage$pandac$Compiler$symbolRef$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, p_base, s3112, st3110);
    return $tmp3121;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_d) {
    org$pandalanguage$pandac$IRNode* base3125;
    panda$core$Bit $tmp3122 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_d->kind, ((panda$core$Int64) { 108 }));
    PANDA_ASSERT($tmp3122.value);
    panda$core$Int64 $tmp3123 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp3124 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3123, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3124.value);
    panda$core$Object* $tmp3126 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3127 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3126));
    base3125 = $tmp3127;
    if (((panda$core$Bit) { base3125 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp3129 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(base3125->kind, ((panda$core$Int64) { 1037 }));
    bool $tmp3128 = $tmp3129.value;
    if (!$tmp3128) goto $l3130;
    panda$core$Bit $tmp3131 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(base3125->kind, ((panda$core$Int64) { 1024 }));
    $tmp3128 = $tmp3131.value;
    $l3130:;
    panda$core$Bit $tmp3132 = { $tmp3128 };
    if ($tmp3132.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3133 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, base3125);
        base3125 = $tmp3133;
    }
    }
    if (((panda$core$Bit) { base3125 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3134 = org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$String$R$org$pandalanguage$pandac$IRNode$Q(self, p_d->position, base3125, ((panda$core$String*) p_d->payload));
    return $tmp3134;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIdentifier$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_i) {
    org$pandalanguage$pandac$Symbol* s3136;
    panda$core$Bit $tmp3135 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_i->kind, ((panda$core$Int64) { 106 }));
    PANDA_ASSERT($tmp3135.value);
    org$pandalanguage$pandac$Symbol* $tmp3137 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(self->symbolTable, ((panda$core$String*) p_i->payload));
    s3136 = $tmp3137;
    if (((panda$core$Bit) { s3136 == NULL }).value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp3138 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((panda$core$String*) p_i->payload));
        s3136 = ((org$pandalanguage$pandac$Symbol*) $tmp3138);
    }
    }
    if (((panda$core$Bit) { s3136 != NULL }).value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3139 = org$pandalanguage$pandac$Compiler$symbolRef$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q(self, p_i->position, NULL, s3136, self->symbolTable);
        return $tmp3139;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3140 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3140->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3140->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3142 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$String($tmp3140, ((panda$core$Int64) { 1037 }), p_i->position, $tmp3142, ((panda$core$String*) p_i->payload));
    return $tmp3140;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_t) {
    org$pandalanguage$pandac$Type* resolved3143;
    org$pandalanguage$pandac$Type* $tmp3144 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, p_t);
    org$pandalanguage$pandac$Type* $tmp3145 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, $tmp3144);
    resolved3143 = $tmp3145;
    if (((panda$core$Bit) { resolved3143 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3146 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3146->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3146->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3148 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp3146, ((panda$core$Int64) { 1001 }), p_t->position, $tmp3148, resolved3143);
    return $tmp3146;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileRange$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_r) {
    org$pandalanguage$pandac$IRNode* start3156;
    org$pandalanguage$pandac$IRNode* end3164;
    org$pandalanguage$pandac$IRNode* step3172;
    panda$collections$Array* children3179;
    org$pandalanguage$pandac$Position $tmp3187;
    panda$core$Bit $tmp3150 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_r->kind, ((panda$core$Int64) { 105 }));
    bool $tmp3149 = $tmp3150.value;
    if ($tmp3149) goto $l3151;
    panda$core$Bit $tmp3152 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_r->kind, ((panda$core$Int64) { 104 }));
    $tmp3149 = $tmp3152.value;
    $l3151:;
    panda$core$Bit $tmp3153 = { $tmp3149 };
    PANDA_ASSERT($tmp3153.value);
    panda$core$Int64 $tmp3154 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_r->children);
    panda$core$Bit $tmp3155 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3154, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp3155.value);
    panda$core$Object* $tmp3157 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp3158 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp3157)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp3158.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3159 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3159->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3159->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp3161 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3159, ((panda$core$Int64) { 1030 }), p_r->position, $tmp3161);
        start3156 = $tmp3159;
    }
    }
    else {
    {
        panda$core$Object* $tmp3162 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp3163 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3162));
        start3156 = $tmp3163;
        if (((panda$core$Bit) { start3156 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$core$Object* $tmp3165 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp3166 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp3165)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp3166.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3167 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3167->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3167->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp3169 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3167, ((panda$core$Int64) { 1030 }), p_r->position, $tmp3169);
        end3164 = $tmp3167;
    }
    }
    else {
    {
        panda$core$Object* $tmp3170 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$IRNode* $tmp3171 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3170));
        end3164 = $tmp3171;
        if (((panda$core$Bit) { end3164 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$core$Object* $tmp3173 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 2 }));
    panda$core$Bit $tmp3174 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp3173)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp3174.value) {
    {
        step3172 = NULL;
    }
    }
    else {
    {
        panda$core$Object* $tmp3175 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$IRNode* $tmp3176 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3175));
        org$pandalanguage$pandac$Type* $tmp3177 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp3178 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3176, $tmp3177);
        step3172 = $tmp3178;
        if (((panda$core$Bit) { step3172 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$collections$Array* $tmp3180 = (panda$collections$Array*) malloc(40);
    $tmp3180->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3180->refCount.value = 1;
    panda$collections$Array$init($tmp3180);
    children3179 = $tmp3180;
    panda$collections$Array$add$panda$collections$Array$T(children3179, ((panda$core$Object*) start3156));
    panda$collections$Array$add$panda$collections$Array$T(children3179, ((panda$core$Object*) end3164));
    if (((panda$core$Bit) { step3172 != NULL }).value) {
    {
        panda$collections$Array$add$panda$collections$Array$T(children3179, ((panda$core$Object*) step3172));
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3182 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3182->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3182->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3184 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp3184->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp3184->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp3187);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp3184, &$s3186, ((panda$core$Int64) { 17 }), $tmp3187, ((panda$core$Bit) { true }));
    panda$core$Bit $tmp3188 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_r->kind, ((panda$core$Int64) { 104 }));
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3182, ((panda$core$Int64) { 1031 }), p_r->position, $tmp3184, ((panda$core$Object*) wrap_panda$core$Bit($tmp3188)), ((panda$collections$ListView*) children3179));
    return $tmp3182;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$IRNode* $tmp3189 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3189->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3189->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3191 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$String($tmp3189, ((panda$core$Int64) { 1033 }), p_s->position, $tmp3191, ((panda$core$String*) p_s->payload));
    return $tmp3189;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileSelf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$Type* type3196;
    org$pandalanguage$pandac$ClassDecl* cl3197;
    panda$collections$Array* subtypes3204;
    panda$core$MutableString* name3208;
    panda$core$Char8 $tmp3211;
    panda$core$String* separator3212;
    panda$collections$Iterator* p$Iter3214;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* p3226;
    panda$collections$Array* pType3231;
    panda$core$String* pName3234;
    panda$core$Char8 $tmp3244;
    panda$core$Bit $tmp3192 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_s->kind, ((panda$core$Int64) { 114 }));
    PANDA_ASSERT($tmp3192.value);
    panda$core$Object* $tmp3193 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
    panda$core$Bit $tmp3194 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp3193)->annotations);
    if ($tmp3194.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_s->position, &$s3195);
        return NULL;
    }
    }
    panda$core$Object* $tmp3198 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
    cl3197 = ((org$pandalanguage$pandac$ClassDecl*) $tmp3198);
    ITable* $tmp3199 = ((panda$collections$CollectionView*) cl3197->parameters)->$class->itable;
    while ($tmp3199->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp3199 = $tmp3199->next;
    }
    $fn3201 $tmp3200 = $tmp3199->methods[0];
    panda$core$Int64 $tmp3202 = $tmp3200(((panda$collections$CollectionView*) cl3197->parameters));
    panda$core$Bit $tmp3203 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3202, ((panda$core$Int64) { 0 }));
    if ($tmp3203.value) {
    {
        panda$collections$Array* $tmp3205 = (panda$collections$Array*) malloc(40);
        $tmp3205->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp3205->refCount.value = 1;
        panda$collections$Array$init($tmp3205);
        subtypes3204 = $tmp3205;
        org$pandalanguage$pandac$Type* $tmp3207 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl3197);
        panda$collections$Array$add$panda$collections$Array$T(subtypes3204, ((panda$core$Object*) $tmp3207));
        panda$core$MutableString* $tmp3209 = (panda$core$MutableString*) malloc(48);
        $tmp3209->$class = (panda$core$Class*) &panda$core$MutableString$class;
        $tmp3209->refCount.value = 1;
        panda$core$MutableString$init$panda$core$String($tmp3209, ((org$pandalanguage$pandac$Symbol*) cl3197)->name);
        name3208 = $tmp3209;
        panda$core$Char8$init$panda$core$UInt8(&$tmp3211, ((panda$core$UInt8) { 60 }));
        panda$core$MutableString$append$panda$core$Char8(name3208, $tmp3211);
        separator3212 = &$s3213;
        {
            ITable* $tmp3215 = ((panda$collections$Iterable*) cl3197->parameters)->$class->itable;
            while ($tmp3215->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3215 = $tmp3215->next;
            }
            $fn3217 $tmp3216 = $tmp3215->methods[0];
            panda$collections$Iterator* $tmp3218 = $tmp3216(((panda$collections$Iterable*) cl3197->parameters));
            p$Iter3214 = $tmp3218;
            $l3219:;
            ITable* $tmp3221 = p$Iter3214->$class->itable;
            while ($tmp3221->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3221 = $tmp3221->next;
            }
            $fn3223 $tmp3222 = $tmp3221->methods[0];
            panda$core$Bit $tmp3224 = $tmp3222(p$Iter3214);
            panda$core$Bit $tmp3225 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3224);
            if (!$tmp3225.value) goto $l3220;
            {
                ITable* $tmp3227 = p$Iter3214->$class->itable;
                while ($tmp3227->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3227 = $tmp3227->next;
                }
                $fn3229 $tmp3228 = $tmp3227->methods[1];
                panda$core$Object* $tmp3230 = $tmp3228(p$Iter3214);
                p3226 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp3230);
                panda$collections$Array* $tmp3232 = (panda$collections$Array*) malloc(40);
                $tmp3232->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp3232->refCount.value = 1;
                panda$collections$Array$init($tmp3232);
                pType3231 = $tmp3232;
                panda$collections$Array$add$panda$collections$Array$T(pType3231, ((panda$core$Object*) p3226->bound));
                panda$core$String* $tmp3235 = panda$core$String$convert$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) cl3197)->name);
                panda$core$String* $tmp3237 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3235, &$s3236);
                panda$core$String* $tmp3238 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3237, ((org$pandalanguage$pandac$Symbol*) p3226)->name);
                panda$core$String* $tmp3240 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3238, &$s3239);
                pName3234 = $tmp3240;
                panda$core$MutableString$append$panda$core$String(name3208, separator3212);
                panda$core$MutableString$append$panda$core$String(name3208, pName3234);
                org$pandalanguage$pandac$Type* $tmp3241 = (org$pandalanguage$pandac$Type*) malloc(96);
                $tmp3241->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
                $tmp3241->refCount.value = 1;
                org$pandalanguage$pandac$Type$init$org$pandalanguage$pandac$ClassDecl$GenericParameter($tmp3241, p3226);
                panda$collections$Array$add$panda$collections$Array$T(subtypes3204, ((panda$core$Object*) $tmp3241));
                separator3212 = &$s3243;
            }
            goto $l3219;
            $l3220:;
        }
        panda$core$Char8$init$panda$core$UInt8(&$tmp3244, ((panda$core$UInt8) { 62 }));
        panda$core$MutableString$append$panda$core$Char8(name3208, $tmp3244);
        org$pandalanguage$pandac$Type* $tmp3245 = (org$pandalanguage$pandac$Type*) malloc(96);
        $tmp3245->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
        $tmp3245->refCount.value = 1;
        panda$core$String* $tmp3247 = panda$core$MutableString$finish$R$panda$core$String(name3208);
        org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp3245, $tmp3247, ((panda$core$Int64) { 21 }), p_s->position, ((panda$collections$ListView*) subtypes3204), ((panda$core$Bit) { true }));
        type3196 = $tmp3245;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp3248 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl3197);
        type3196 = $tmp3248;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3249 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3249->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3249->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3249, ((panda$core$Int64) { 1025 }), p_s->position, type3196);
    return $tmp3249;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileSuper$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$ClassDecl* cl3255;
    panda$core$Bit $tmp3251 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_s->kind, ((panda$core$Int64) { 115 }));
    PANDA_ASSERT($tmp3251.value);
    panda$core$Object* $tmp3252 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
    panda$core$Bit $tmp3253 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp3252)->annotations);
    if ($tmp3253.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_s->position, &$s3254);
        return NULL;
    }
    }
    panda$core$Object* $tmp3256 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
    cl3255 = ((org$pandalanguage$pandac$ClassDecl*) $tmp3256);
    PANDA_ASSERT(cl3255->resolved.value);
    org$pandalanguage$pandac$IRNode* $tmp3257 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3257->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3257->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3257, ((panda$core$Int64) { 1024 }), p_s->position, cl3255->rawSuper);
    return $tmp3257;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_expr, org$pandalanguage$pandac$Type* p_rawType) {
    org$pandalanguage$pandac$IRNode* value3259;
    panda$core$String$Index$nullable index3261;
    org$pandalanguage$pandac$Type* type3268;
    org$pandalanguage$pandac$IRNode* base3270;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp3273;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp3276;
    org$pandalanguage$pandac$Type* type3280;
    org$pandalanguage$pandac$IRNode* $tmp3260 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr);
    value3259 = $tmp3260;
    if (((panda$core$Bit) { value3259 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$String$Index$nullable $tmp3263 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(((org$pandalanguage$pandac$Symbol*) p_rawType)->name, &$s3262);
    index3261 = $tmp3263;
    panda$core$Bit $tmp3265 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_rawType->typeKind, ((panda$core$Int64) { 10 }));
    bool $tmp3264 = $tmp3265.value;
    if (!$tmp3264) goto $l3266;
    $tmp3264 = ((panda$core$Bit) { index3261.nonnull }).value;
    $l3266:;
    panda$core$Bit $tmp3267 = { $tmp3264 };
    if ($tmp3267.value) {
    {
        PANDA_ASSERT(self->reportErrors.value);
        self->reportErrors = ((panda$core$Bit) { false });
        org$pandalanguage$pandac$Type* $tmp3269 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, p_rawType);
        type3268 = $tmp3269;
        self->reportErrors = ((panda$core$Bit) { true });
        if (((panda$core$Bit) { type3268 == NULL }).value) {
        {
            org$pandalanguage$pandac$Type* $tmp3271 = (org$pandalanguage$pandac$Type*) malloc(96);
            $tmp3271->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp3271->refCount.value = 1;
            panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp3273, ((panda$core$String$Index$nullable) { .nonnull = false }), index3261, ((panda$core$Bit) { false }));
            panda$core$String* $tmp3274 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) p_rawType)->name, $tmp3273);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position($tmp3271, $tmp3274, ((panda$core$Int64) { 10 }), p_position);
            org$pandalanguage$pandac$IRNode* $tmp3275 = org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, p_expr, $tmp3271);
            base3270 = $tmp3275;
            if (((panda$core$Bit) { base3270 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$String$Index $tmp3277 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(((org$pandalanguage$pandac$Symbol*) p_rawType)->name, ((panda$core$String$Index) index3261.value));
            panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp3276, ((panda$core$String$Index$nullable) { $tmp3277, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$core$String* $tmp3278 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) p_rawType)->name, $tmp3276);
            org$pandalanguage$pandac$IRNode* $tmp3279 = org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$String$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, base3270, $tmp3278);
            return $tmp3279;
        }
        }
    }
    }
    org$pandalanguage$pandac$Type* $tmp3281 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, p_rawType);
    type3280 = $tmp3281;
    if (((panda$core$Bit) { type3280 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Int64$nullable $tmp3282 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, value3259, type3280);
    if (((panda$core$Bit) { $tmp3282.nonnull }).value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3283 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, value3259, type3280);
        return $tmp3283;
    }
    }
    panda$core$Bit $tmp3284 = org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, value3259, type3280);
    if ($tmp3284.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3285 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, value3259, p_position, ((panda$core$Bit) { true }), type3280);
        return $tmp3285;
    }
    }
    else {
    {
        panda$core$String* $tmp3287 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3286, ((panda$core$Object*) value3259->type));
        panda$core$String* $tmp3289 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3287, &$s3288);
        panda$core$String* $tmp3291 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3290, ((panda$core$Object*) type3280));
        panda$core$String* $tmp3293 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3291, &$s3292);
        panda$core$String* $tmp3294 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3289, $tmp3293);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp3294);
        return NULL;
    }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_c) {
    panda$core$Bit $tmp3295 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_c->kind, ((panda$core$Int64) { 111 }));
    PANDA_ASSERT($tmp3295.value);
    panda$core$Int64 $tmp3296 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_c->children);
    panda$core$Bit $tmp3297 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3296, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp3297.value);
    panda$core$Object* $tmp3298 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_c->children, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp3299 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_c->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Type* $tmp3300 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, ((org$pandalanguage$pandac$ASTNode*) $tmp3299));
    org$pandalanguage$pandac$IRNode* $tmp3301 = org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_c->position, ((org$pandalanguage$pandac$ASTNode*) $tmp3298), $tmp3300);
    return $tmp3301;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileNull$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_n) {
    panda$core$Bit $tmp3302 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_n->kind, ((panda$core$Int64) { 117 }));
    PANDA_ASSERT($tmp3302.value);
    org$pandalanguage$pandac$IRNode* $tmp3303 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3303->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3303->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3305 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3303, ((panda$core$Int64) { 1030 }), p_n->position, $tmp3305);
    return $tmp3303;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_e) {
    org$pandalanguage$pandac$IRNode* result3310;
    switch (p_e->kind.value) {
        case 103:
        {
            org$pandalanguage$pandac$IRNode* $tmp3306 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3306;
        }
        break;
        case 116:
        {
            org$pandalanguage$pandac$IRNode* $tmp3307 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3307->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3307->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3309 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp3307, ((panda$core$Int64) { 1011 }), p_e->position, $tmp3309, ((panda$core$Bit$wrapper*) p_e->payload)->value);
            return $tmp3307;
        }
        break;
        case 107:
        {
            org$pandalanguage$pandac$IRNode* $tmp3311 = org$pandalanguage$pandac$Compiler$compileCall$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            result3310 = $tmp3311;
            bool $tmp3312 = ((panda$core$Bit) { result3310 != NULL }).value;
            if (!$tmp3312) goto $l3313;
            org$pandalanguage$pandac$Type* $tmp3314 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp3315 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(result3310->type, $tmp3314);
            $tmp3312 = $tmp3315.value;
            $l3313:;
            panda$core$Bit $tmp3316 = { $tmp3312 };
            if ($tmp3316.value) {
            {
                panda$core$Bit $tmp3317 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result3310->kind, ((panda$core$Int64) { 1005 }));
                PANDA_ASSERT($tmp3317.value);
                panda$core$String* $tmp3318 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(((org$pandalanguage$pandac$MethodRef*) result3310->payload)->value);
                panda$core$String* $tmp3320 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3318, &$s3319);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, result3310->position, $tmp3320);
                return NULL;
            }
            }
            return result3310;
        }
        break;
        case 108:
        {
            org$pandalanguage$pandac$IRNode* $tmp3321 = org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3321;
        }
        break;
        case 106:
        {
            org$pandalanguage$pandac$IRNode* $tmp3322 = org$pandalanguage$pandac$Compiler$compileIdentifier$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3322;
        }
        break;
        case 102:
        {
            org$pandalanguage$pandac$IRNode* $tmp3323 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3323->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3323->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3325 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp3323, ((panda$core$Int64) { 1004 }), p_e->position, $tmp3325, ((panda$core$UInt64$wrapper*) p_e->payload)->value);
            return $tmp3323;
        }
        break;
        case 112:
        {
            org$pandalanguage$pandac$IRNode* $tmp3326 = org$pandalanguage$pandac$Compiler$compilePrefix$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3326;
        }
        break;
        case 104:
        case 105:
        {
            org$pandalanguage$pandac$IRNode* $tmp3327 = org$pandalanguage$pandac$Compiler$compileRange$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3327;
        }
        break;
        case 113:
        {
            org$pandalanguage$pandac$IRNode* $tmp3328 = org$pandalanguage$pandac$Compiler$compileString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3328;
        }
        break;
        case 109:
        case 154:
        case 110:
        {
            org$pandalanguage$pandac$IRNode* $tmp3329 = org$pandalanguage$pandac$Compiler$compileType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3329;
        }
        break;
        case 114:
        {
            org$pandalanguage$pandac$IRNode* $tmp3330 = org$pandalanguage$pandac$Compiler$compileSelf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3330;
        }
        break;
        case 115:
        {
            org$pandalanguage$pandac$IRNode* $tmp3331 = org$pandalanguage$pandac$Compiler$compileSuper$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3331;
        }
        break;
        case 111:
        {
            org$pandalanguage$pandac$IRNode* $tmp3332 = org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3332;
        }
        break;
        case 117:
        {
            org$pandalanguage$pandac$IRNode* $tmp3333 = org$pandalanguage$pandac$Compiler$compileNull$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode(self, p_e);
            return $tmp3333;
        }
        break;
    }
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBlock$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_b) {
    org$pandalanguage$pandac$SymbolTable* symbols3335;
    panda$collections$Array* result3338;
    panda$collections$Iterator* stmt$Iter3341;
    org$pandalanguage$pandac$ASTNode* stmt3353;
    org$pandalanguage$pandac$IRNode* compiled3358;
    panda$core$Bit $tmp3334 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_b->kind, ((panda$core$Int64) { 126 }));
    PANDA_ASSERT($tmp3334.value);
    org$pandalanguage$pandac$SymbolTable* $tmp3336 = (org$pandalanguage$pandac$SymbolTable*) malloc(48);
    $tmp3336->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp3336->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp3336, self->symbolTable);
    symbols3335 = $tmp3336;
    self->symbolTable = symbols3335;
    panda$collections$Array* $tmp3339 = (panda$collections$Array*) malloc(40);
    $tmp3339->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3339->refCount.value = 1;
    panda$collections$Array$init($tmp3339);
    result3338 = $tmp3339;
    if (((panda$core$Bit) { p_b->children != NULL }).value) {
    {
        {
            ITable* $tmp3342 = ((panda$collections$Iterable*) p_b->children)->$class->itable;
            while ($tmp3342->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3342 = $tmp3342->next;
            }
            $fn3344 $tmp3343 = $tmp3342->methods[0];
            panda$collections$Iterator* $tmp3345 = $tmp3343(((panda$collections$Iterable*) p_b->children));
            stmt$Iter3341 = $tmp3345;
            $l3346:;
            ITable* $tmp3348 = stmt$Iter3341->$class->itable;
            while ($tmp3348->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3348 = $tmp3348->next;
            }
            $fn3350 $tmp3349 = $tmp3348->methods[0];
            panda$core$Bit $tmp3351 = $tmp3349(stmt$Iter3341);
            panda$core$Bit $tmp3352 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3351);
            if (!$tmp3352.value) goto $l3347;
            {
                ITable* $tmp3354 = stmt$Iter3341->$class->itable;
                while ($tmp3354->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3354 = $tmp3354->next;
                }
                $fn3356 $tmp3355 = $tmp3354->methods[1];
                panda$core$Object* $tmp3357 = $tmp3355(stmt$Iter3341);
                stmt3353 = ((org$pandalanguage$pandac$ASTNode*) $tmp3357);
                org$pandalanguage$pandac$IRNode* $tmp3359 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, stmt3353);
                compiled3358 = $tmp3359;
                if (((panda$core$Bit) { compiled3358 == NULL }).value) {
                {
                    panda$core$Object* $tmp3360 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(symbols3335->parents, ((panda$core$Int64) { 0 }));
                    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp3360);
                    return NULL;
                }
                }
                panda$core$Bit $tmp3361 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(compiled3358->kind, ((panda$core$Int64) { 1039 }));
                PANDA_ASSERT($tmp3361.value);
                panda$collections$Array$add$panda$collections$Array$T(result3338, ((panda$core$Object*) compiled3358));
            }
            goto $l3346;
            $l3347:;
        }
    }
    }
    panda$core$Object* $tmp3362 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(symbols3335->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp3362);
    org$pandalanguage$pandac$IRNode* $tmp3363 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3363->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3363->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3363, ((panda$core$Int64) { 1000 }), p_b->position, ((panda$collections$ListView*) result3338));
    return $tmp3363;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_i) {
    org$pandalanguage$pandac$IRNode* test3373;
    org$pandalanguage$pandac$IRNode* ifTrue3378;
    panda$collections$Array* children3381;
    org$pandalanguage$pandac$IRNode* ifFalse3386;
    panda$core$Bit $tmp3365 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_i->kind, ((panda$core$Int64) { 118 }));
    PANDA_ASSERT($tmp3365.value);
    panda$core$Int64 $tmp3367 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_i->children);
    panda$core$Bit $tmp3368 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3367, ((panda$core$Int64) { 2 }));
    bool $tmp3366 = $tmp3368.value;
    if ($tmp3366) goto $l3369;
    panda$core$Int64 $tmp3370 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_i->children);
    panda$core$Bit $tmp3371 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3370, ((panda$core$Int64) { 3 }));
    $tmp3366 = $tmp3371.value;
    $l3369:;
    panda$core$Bit $tmp3372 = { $tmp3366 };
    PANDA_ASSERT($tmp3372.value);
    panda$core$Object* $tmp3374 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_i->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3375 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3374));
    org$pandalanguage$pandac$Type* $tmp3376 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp3377 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3375, $tmp3376);
    test3373 = $tmp3377;
    if (((panda$core$Bit) { test3373 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Object* $tmp3379 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_i->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp3380 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3379));
    ifTrue3378 = $tmp3380;
    if (((panda$core$Bit) { ifTrue3378 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3382 = (panda$collections$Array*) malloc(40);
    $tmp3382->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3382->refCount.value = 1;
    panda$collections$Array$init($tmp3382);
    children3381 = $tmp3382;
    panda$collections$Array$add$panda$collections$Array$T(children3381, ((panda$core$Object*) test3373));
    panda$collections$Array$add$panda$collections$Array$T(children3381, ((panda$core$Object*) ifTrue3378));
    panda$core$Int64 $tmp3384 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_i->children);
    panda$core$Bit $tmp3385 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3384, ((panda$core$Int64) { 3 }));
    if ($tmp3385.value) {
    {
        panda$core$Object* $tmp3387 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_i->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$IRNode* $tmp3388 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3387));
        ifFalse3386 = $tmp3388;
        if (((panda$core$Bit) { ifFalse3386 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children3381, ((panda$core$Object*) ifFalse3386));
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3389 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3389->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3389->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3389, ((panda$core$Int64) { 1012 }), p_i->position, ((panda$collections$ListView*) children3381));
    return $tmp3389;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileRangeFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, panda$core$String* p_label, org$pandalanguage$pandac$ASTNode* p_astTarget, org$pandalanguage$pandac$IRNode* p_rawList, org$pandalanguage$pandac$ASTNode* p_body) {
    org$pandalanguage$pandac$Type* elementType3391;
    org$pandalanguage$pandac$IRNode* list3392;
    org$pandalanguage$pandac$Type* t3404;
    org$pandalanguage$pandac$Compiler$CompileTargetResult* target3437;
    org$pandalanguage$pandac$IRNode* body3439;
    panda$collections$Array* children3441;
    panda$core$Bit $tmp3395 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_astTarget->kind, ((panda$core$Int64) { 106 }));
    bool $tmp3394 = $tmp3395.value;
    if (!$tmp3394) goto $l3396;
    $tmp3394 = ((panda$core$Bit) { p_astTarget->children != NULL }).value;
    $l3396:;
    panda$core$Bit $tmp3397 = { $tmp3394 };
    bool $tmp3393 = $tmp3397.value;
    if (!$tmp3393) goto $l3398;
    panda$core$Int64 $tmp3399 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_astTarget->children);
    panda$core$Bit $tmp3400 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3399, ((panda$core$Int64) { 0 }));
    $tmp3393 = $tmp3400.value;
    $l3398:;
    panda$core$Bit $tmp3401 = { $tmp3393 };
    if ($tmp3401.value) {
    {
        panda$core$Int64 $tmp3402 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_astTarget->children);
        panda$core$Bit $tmp3403 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3402, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp3403.value);
        panda$core$Object* $tmp3405 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_astTarget->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Type* $tmp3406 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, ((org$pandalanguage$pandac$ASTNode*) $tmp3405));
        org$pandalanguage$pandac$Type* $tmp3407 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, $tmp3406);
        t3404 = $tmp3407;
        panda$core$Bit $tmp3408 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_rawList->kind, ((panda$core$Int64) { 1031 }));
        if ($tmp3408.value) {
        {
            panda$core$Int64 $tmp3409 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_rawList->children);
            panda$core$Bit $tmp3410 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3409, ((panda$core$Int64) { 2 }));
            if ($tmp3410.value) {
            {
                org$pandalanguage$pandac$Type* $tmp3411 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3404);
                org$pandalanguage$pandac$IRNode* $tmp3412 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, $tmp3411);
                list3392 = $tmp3412;
            }
            }
            else {
            {
                panda$core$Int64 $tmp3413 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_rawList->children);
                panda$core$Bit $tmp3414 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3413, ((panda$core$Int64) { 3 }));
                PANDA_ASSERT($tmp3414.value);
                org$pandalanguage$pandac$Type* $tmp3415 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$Type* $tmp3416 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3404, $tmp3415);
                org$pandalanguage$pandac$IRNode* $tmp3417 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, $tmp3416);
                list3392 = $tmp3417;
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp3418 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(p_rawList->type);
        if ($tmp3418.value) {
        {
            panda$core$Object* $tmp3419 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_rawList->type->subtypes, ((panda$core$Int64) { 2 }));
            org$pandalanguage$pandac$Type* $tmp3420 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3404, ((org$pandalanguage$pandac$Type*) $tmp3419));
            org$pandalanguage$pandac$IRNode* $tmp3421 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, $tmp3420);
            list3392 = $tmp3421;
        }
        }
        else {
        org$pandalanguage$pandac$Type* $tmp3422 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3404);
        panda$core$Int64$nullable $tmp3423 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_rawList, $tmp3422);
        if (((panda$core$Bit) { $tmp3423.nonnull }).value) {
        {
            org$pandalanguage$pandac$Type* $tmp3424 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3404);
            org$pandalanguage$pandac$IRNode* $tmp3425 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, $tmp3424);
            list3392 = $tmp3425;
        }
        }
        else {
        {
            org$pandalanguage$pandac$Type* $tmp3426 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$Type* $tmp3427 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3404, $tmp3426);
            org$pandalanguage$pandac$IRNode* $tmp3428 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, $tmp3427);
            list3392 = $tmp3428;
        }
        }
        }
        }
    }
    }
    else {
    {
        org$pandalanguage$pandac$IRNode* $tmp3429 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList);
        list3392 = $tmp3429;
    }
    }
    if (((panda$core$Bit) { list3392 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp3430 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(list3392->type->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp3430.value) {
    {
        panda$core$Object* $tmp3431 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(list3392->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp3432 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3431)->typeKind, ((panda$core$Int64) { 21 }));
        PANDA_ASSERT($tmp3432.value);
        panda$core$Object* $tmp3433 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(list3392->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3434 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$Type*) $tmp3433)->subtypes, ((panda$core$Int64) { 1 }));
        elementType3391 = ((org$pandalanguage$pandac$Type*) $tmp3434);
    }
    }
    else {
    {
        panda$core$Bit $tmp3435 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(list3392->type->typeKind, ((panda$core$Int64) { 21 }));
        PANDA_ASSERT($tmp3435.value);
        panda$core$Object* $tmp3436 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(list3392->type->subtypes, ((panda$core$Int64) { 1 }));
        elementType3391 = ((org$pandalanguage$pandac$Type*) $tmp3436);
    }
    }
    org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp3438 = org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(self, p_astTarget, ((panda$core$Int64) { 10001 }), NULL, elementType3391);
    target3437 = $tmp3438;
    if (((panda$core$Bit) { target3437 == NULL }).value) {
    {
        return NULL;
    }
    }
    PANDA_ASSERT(((panda$core$Bit) { target3437->value == NULL }).value);
    org$pandalanguage$pandac$IRNode* $tmp3440 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_body);
    body3439 = $tmp3440;
    if (((panda$core$Bit) { body3439 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3442 = (panda$collections$Array*) malloc(40);
    $tmp3442->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3442->refCount.value = 1;
    panda$collections$Array$init($tmp3442);
    children3441 = $tmp3442;
    panda$collections$Array$add$panda$collections$Array$T(children3441, ((panda$core$Object*) target3437->target));
    panda$collections$Array$add$panda$collections$Array$T(children3441, ((panda$core$Object*) list3392));
    panda$collections$Array$add$panda$collections$Array$T(children3441, ((panda$core$Object*) body3439));
    org$pandalanguage$pandac$IRNode* $tmp3444 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3444->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3444->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3444, ((panda$core$Int64) { 1029 }), p_position, ((panda$core$Object*) p_label), ((panda$collections$ListView*) children3441));
    return $tmp3444;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIteratorFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, panda$core$String* p_label, org$pandalanguage$pandac$ASTNode* p_astTarget, org$pandalanguage$pandac$IRNode* p_iterator, org$pandalanguage$pandac$ASTNode* p_body) {
    org$pandalanguage$pandac$Compiler$CompileTargetResult* target3453;
    org$pandalanguage$pandac$Variable* targetVar3457;
    panda$collections$Array* subtypes3458;
    org$pandalanguage$pandac$Type* iterType3462;
    org$pandalanguage$pandac$Variable* iter3473;
    panda$collections$Array* statements3478;
    panda$collections$Array* declChildren3481;
    panda$collections$Array* varChildren3486;
    panda$collections$Array* whileChildren3493;
    org$pandalanguage$pandac$IRNode* done3496;
    org$pandalanguage$pandac$IRNode* notCall3503;
    panda$collections$Array* valueDeclChildren3508;
    org$pandalanguage$pandac$IRNode* next3513;
    panda$collections$Array* valueVarChildren3520;
    org$pandalanguage$pandac$IRNode* block3525;
    panda$collections$Array* blockChildren3527;
    panda$core$Bit $tmp3447 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_iterator->type->typeKind, ((panda$core$Int64) { 21 }));
    bool $tmp3446 = $tmp3447.value;
    if (!$tmp3446) goto $l3448;
    panda$core$Object* $tmp3449 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_iterator->type->subtypes, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp3450 = org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp3451 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3449), $tmp3450);
    $tmp3446 = $tmp3451.value;
    $l3448:;
    panda$core$Bit $tmp3452 = { $tmp3446 };
    PANDA_ASSERT($tmp3452.value);
    panda$core$Object* $tmp3454 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_iterator->type->subtypes, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp3455 = org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(self, p_astTarget, ((panda$core$Int64) { 10001 }), NULL, ((org$pandalanguage$pandac$Type*) $tmp3454));
    target3453 = $tmp3455;
    if (((panda$core$Bit) { target3453 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp3456 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(target3453->target->kind, ((panda$core$Int64) { 1016 }));
    PANDA_ASSERT($tmp3456.value);
    targetVar3457 = ((org$pandalanguage$pandac$Variable*) target3453->target->payload);
    panda$collections$Array* $tmp3459 = (panda$collections$Array*) malloc(40);
    $tmp3459->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3459->refCount.value = 1;
    panda$collections$Array$init($tmp3459);
    subtypes3458 = $tmp3459;
    org$pandalanguage$pandac$Type* $tmp3461 = org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type();
    panda$collections$Array$add$panda$collections$Array$T(subtypes3458, ((panda$core$Object*) $tmp3461));
    panda$collections$Array$add$panda$collections$Array$T(subtypes3458, ((panda$core$Object*) target3453->target->type));
    org$pandalanguage$pandac$Type* $tmp3463 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp3463->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp3463->refCount.value = 1;
    panda$core$Object* $tmp3465 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(subtypes3458, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3466 = org$pandalanguage$pandac$Type$convert$R$panda$core$String(((org$pandalanguage$pandac$Type*) $tmp3465));
    panda$core$String* $tmp3468 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3466, &$s3467);
    panda$core$Object* $tmp3469 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(subtypes3458, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp3470 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3468, ((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp3469)));
    panda$core$String* $tmp3472 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3470, &$s3471);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp3463, $tmp3472, ((panda$core$Int64) { 21 }), p_position, ((panda$collections$ListView*) subtypes3458), ((panda$core$Bit) { true }));
    iterType3462 = $tmp3463;
    org$pandalanguage$pandac$Variable* $tmp3474 = (org$pandalanguage$pandac$Variable*) malloc(88);
    $tmp3474->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
    $tmp3474->refCount.value = 1;
    panda$core$String* $tmp3477 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) targetVar3457)->name, &$s3476);
    org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type($tmp3474, p_iterator->position, ((panda$core$Int64) { 10001 }), $tmp3477, iterType3462);
    iter3473 = $tmp3474;
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->symbolTable, ((org$pandalanguage$pandac$Symbol*) iter3473));
    panda$collections$Array* $tmp3479 = (panda$collections$Array*) malloc(40);
    $tmp3479->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3479->refCount.value = 1;
    panda$collections$Array$init($tmp3479);
    statements3478 = $tmp3479;
    panda$collections$Array* $tmp3482 = (panda$collections$Array*) malloc(40);
    $tmp3482->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3482->refCount.value = 1;
    panda$collections$Array$init($tmp3482);
    declChildren3481 = $tmp3482;
    org$pandalanguage$pandac$IRNode* $tmp3484 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3484->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3484->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3484, ((panda$core$Int64) { 1016 }), p_iterator->position, iter3473->type, iter3473);
    panda$collections$Array$add$panda$collections$Array$T(declChildren3481, ((panda$core$Object*) $tmp3484));
    panda$collections$Array$add$panda$collections$Array$T(declChildren3481, ((panda$core$Object*) p_iterator));
    panda$collections$Array* $tmp3487 = (panda$collections$Array*) malloc(40);
    $tmp3487->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3487->refCount.value = 1;
    panda$collections$Array$init($tmp3487);
    varChildren3486 = $tmp3487;
    org$pandalanguage$pandac$IRNode* $tmp3489 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3489->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3489->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3489, ((panda$core$Int64) { 1021 }), ((org$pandalanguage$pandac$Symbol*) iter3473)->position, ((panda$collections$ListView*) declChildren3481));
    panda$collections$Array$add$panda$collections$Array$T(varChildren3486, ((panda$core$Object*) $tmp3489));
    org$pandalanguage$pandac$IRNode* $tmp3491 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3491->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3491->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3491, ((panda$core$Int64) { 1018 }), ((org$pandalanguage$pandac$Symbol*) iter3473)->position, ((panda$collections$ListView*) varChildren3486));
    panda$collections$Array$add$panda$collections$Array$T(statements3478, ((panda$core$Object*) $tmp3491));
    panda$collections$Array* $tmp3494 = (panda$collections$Array*) malloc(40);
    $tmp3494->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3494->refCount.value = 1;
    panda$collections$Array$init($tmp3494);
    whileChildren3493 = $tmp3494;
    org$pandalanguage$pandac$IRNode* $tmp3497 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3497->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3497->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3497, ((panda$core$Int64) { 1016 }), ((org$pandalanguage$pandac$Symbol*) iter3473)->position, iter3473->type, iter3473);
    panda$collections$Array* $tmp3500 = (panda$collections$Array*) malloc(40);
    $tmp3500->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3500->refCount.value = 1;
    panda$collections$Array$init($tmp3500);
    org$pandalanguage$pandac$IRNode* $tmp3502 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3497, &$s3499, ((panda$collections$ListView*) $tmp3500), NULL);
    done3496 = $tmp3502;
    if (((panda$core$Bit) { done3496 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3505 = (panda$collections$Array*) malloc(40);
    $tmp3505->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3505->refCount.value = 1;
    panda$collections$Array$init($tmp3505);
    org$pandalanguage$pandac$IRNode* $tmp3507 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, done3496, &$s3504, ((panda$collections$ListView*) $tmp3505), NULL);
    notCall3503 = $tmp3507;
    if (((panda$core$Bit) { notCall3503 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(whileChildren3493, ((panda$core$Object*) notCall3503));
    panda$collections$Array* $tmp3509 = (panda$collections$Array*) malloc(40);
    $tmp3509->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3509->refCount.value = 1;
    panda$collections$Array$init($tmp3509);
    valueDeclChildren3508 = $tmp3509;
    org$pandalanguage$pandac$IRNode* $tmp3511 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3511->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3511->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3511, ((panda$core$Int64) { 1016 }), p_iterator->position, targetVar3457->type, targetVar3457);
    panda$collections$Array$add$panda$collections$Array$T(valueDeclChildren3508, ((panda$core$Object*) $tmp3511));
    org$pandalanguage$pandac$IRNode* $tmp3514 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3514->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3514->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3514, ((panda$core$Int64) { 1016 }), p_iterator->position, iter3473->type, iter3473);
    panda$collections$Array* $tmp3517 = (panda$collections$Array*) malloc(40);
    $tmp3517->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3517->refCount.value = 1;
    panda$collections$Array$init($tmp3517);
    org$pandalanguage$pandac$IRNode* $tmp3519 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3514, &$s3516, ((panda$collections$ListView*) $tmp3517), NULL);
    next3513 = $tmp3519;
    PANDA_ASSERT(((panda$core$Bit) { next3513 != NULL }).value);
    panda$collections$Array$add$panda$collections$Array$T(valueDeclChildren3508, ((panda$core$Object*) next3513));
    panda$collections$Array* $tmp3521 = (panda$collections$Array*) malloc(40);
    $tmp3521->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3521->refCount.value = 1;
    panda$collections$Array$init($tmp3521);
    valueVarChildren3520 = $tmp3521;
    org$pandalanguage$pandac$IRNode* $tmp3523 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3523->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3523->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3523, ((panda$core$Int64) { 1021 }), p_iterator->position, ((panda$collections$ListView*) valueDeclChildren3508));
    panda$collections$Array$add$panda$collections$Array$T(valueVarChildren3520, ((panda$core$Object*) $tmp3523));
    org$pandalanguage$pandac$IRNode* $tmp3526 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_body);
    block3525 = $tmp3526;
    if (((panda$core$Bit) { block3525 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3528 = (panda$collections$Array*) malloc(40);
    $tmp3528->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3528->refCount.value = 1;
    panda$collections$Array$init($tmp3528);
    blockChildren3527 = $tmp3528;
    org$pandalanguage$pandac$IRNode* $tmp3530 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3530->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3530->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3530, ((panda$core$Int64) { 1018 }), p_iterator->position, ((panda$collections$ListView*) valueVarChildren3520));
    panda$collections$Array$add$panda$collections$Array$T(blockChildren3527, ((panda$core$Object*) $tmp3530));
    panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(blockChildren3527, ((panda$collections$CollectionView*) block3525->children));
    org$pandalanguage$pandac$IRNode* $tmp3532 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3532->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3532->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3532, ((panda$core$Int64) { 1000 }), block3525->position, ((panda$collections$ListView*) blockChildren3527));
    block3525 = $tmp3532;
    panda$collections$Array$add$panda$collections$Array$T(whileChildren3493, ((panda$core$Object*) block3525));
    org$pandalanguage$pandac$IRNode* $tmp3534 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3534->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3534->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3534, ((panda$core$Int64) { 1013 }), p_iterator->position, ((panda$core$Object*) p_label), ((panda$collections$ListView*) whileChildren3493));
    panda$collections$Array$add$panda$collections$Array$T(statements3478, ((panda$core$Object*) $tmp3534));
    org$pandalanguage$pandac$IRNode* $tmp3536 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3536->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3536->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3536, ((panda$core$Int64) { 1000 }), p_iterator->position, ((panda$collections$ListView*) statements3478));
    return $tmp3536;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileFor$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_f) {
    org$pandalanguage$pandac$IRNode* list3541;
    org$pandalanguage$pandac$SymbolTable* symbols3544;
    org$pandalanguage$pandac$IRNode* result3547;
    panda$core$Bit found3561;
    panda$collections$Iterator* intf$Iter3562;
    org$pandalanguage$pandac$Type* intf3575;
    org$pandalanguage$pandac$IRNode* iterator3587;
    org$pandalanguage$pandac$IRNode* iterable3599;
    org$pandalanguage$pandac$IRNode* iterator3601;
    panda$core$Bit $tmp3538 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_f->kind, ((panda$core$Int64) { 119 }));
    PANDA_ASSERT($tmp3538.value);
    panda$core$Int64 $tmp3539 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_f->children);
    panda$core$Bit $tmp3540 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3539, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp3540.value);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loops, ((panda$core$Object*) ((panda$core$String*) p_f->payload)));
    panda$core$Object* $tmp3542 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp3543 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3542));
    list3541 = $tmp3543;
    if (((panda$core$Bit) { list3541 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp3545 = (org$pandalanguage$pandac$SymbolTable*) malloc(48);
    $tmp3545->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp3545->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp3545, self->symbolTable);
    symbols3544 = $tmp3545;
    self->symbolTable = symbols3544;
    panda$core$Bit $tmp3550 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(list3541->kind, ((panda$core$Int64) { 1031 }));
    bool $tmp3549 = $tmp3550.value;
    if ($tmp3549) goto $l3551;
    panda$core$Bit $tmp3552 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(list3541->type);
    $tmp3549 = $tmp3552.value;
    $l3551:;
    panda$core$Bit $tmp3553 = { $tmp3549 };
    bool $tmp3548 = $tmp3553.value;
    if ($tmp3548) goto $l3554;
    panda$core$Bit $tmp3555 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(list3541->type);
    $tmp3548 = $tmp3555.value;
    $l3554:;
    panda$core$Bit $tmp3556 = { $tmp3548 };
    if ($tmp3556.value) {
    {
        panda$core$Object* $tmp3557 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3558 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$IRNode* $tmp3559 = org$pandalanguage$pandac$Compiler$compileRangeFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->position, ((panda$core$String*) p_f->payload), ((org$pandalanguage$pandac$ASTNode*) $tmp3557), list3541, ((org$pandalanguage$pandac$ASTNode*) $tmp3558));
        result3547 = $tmp3559;
    }
    }
    else {
    {
        org$pandalanguage$pandac$IRNode* $tmp3560 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, list3541);
        list3541 = $tmp3560;
        if (((panda$core$Bit) { list3541 == NULL }).value) {
        {
            return NULL;
        }
        }
        found3561 = ((panda$core$Bit) { false });
        {
            panda$collections$Set* $tmp3563 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self, list3541->type);
            ITable* $tmp3564 = ((panda$collections$Iterable*) $tmp3563)->$class->itable;
            while ($tmp3564->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3564 = $tmp3564->next;
            }
            $fn3566 $tmp3565 = $tmp3564->methods[0];
            panda$collections$Iterator* $tmp3567 = $tmp3565(((panda$collections$Iterable*) $tmp3563));
            intf$Iter3562 = $tmp3567;
            $l3568:;
            ITable* $tmp3570 = intf$Iter3562->$class->itable;
            while ($tmp3570->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3570 = $tmp3570->next;
            }
            $fn3572 $tmp3571 = $tmp3570->methods[0];
            panda$core$Bit $tmp3573 = $tmp3571(intf$Iter3562);
            panda$core$Bit $tmp3574 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3573);
            if (!$tmp3574.value) goto $l3569;
            {
                ITable* $tmp3576 = intf$Iter3562->$class->itable;
                while ($tmp3576->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3576 = $tmp3576->next;
                }
                $fn3578 $tmp3577 = $tmp3576->methods[1];
                panda$core$Object* $tmp3579 = $tmp3577(intf$Iter3562);
                intf3575 = ((org$pandalanguage$pandac$Type*) $tmp3579);
                panda$core$Bit $tmp3581 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(intf3575->typeKind, ((panda$core$Int64) { 21 }));
                bool $tmp3580 = $tmp3581.value;
                if (!$tmp3580) goto $l3582;
                panda$core$Object* $tmp3583 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(intf3575->subtypes, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp3584 = org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp3585 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3583), $tmp3584);
                $tmp3580 = $tmp3585.value;
                $l3582:;
                panda$core$Bit $tmp3586 = { $tmp3580 };
                if ($tmp3586.value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp3588 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, list3541, intf3575);
                    iterator3587 = $tmp3588;
                    panda$core$Object* $tmp3589 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
                    panda$core$Object* $tmp3590 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 2 }));
                    org$pandalanguage$pandac$IRNode* $tmp3591 = org$pandalanguage$pandac$Compiler$compileIteratorFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->position, ((panda$core$String*) p_f->payload), ((org$pandalanguage$pandac$ASTNode*) $tmp3589), iterator3587, ((org$pandalanguage$pandac$ASTNode*) $tmp3590));
                    result3547 = $tmp3591;
                    found3561 = ((panda$core$Bit) { true });
                    goto $l3569;
                }
                }
                panda$core$Bit $tmp3593 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(intf3575->typeKind, ((panda$core$Int64) { 21 }));
                bool $tmp3592 = $tmp3593.value;
                if (!$tmp3592) goto $l3594;
                panda$core$Object* $tmp3595 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(intf3575->subtypes, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp3596 = org$pandalanguage$pandac$Type$Iterable$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp3597 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3595), $tmp3596);
                $tmp3592 = $tmp3597.value;
                $l3594:;
                panda$core$Bit $tmp3598 = { $tmp3592 };
                if ($tmp3598.value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp3600 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, list3541, intf3575);
                    iterable3599 = $tmp3600;
                    panda$collections$Array* $tmp3603 = (panda$collections$Array*) malloc(40);
                    $tmp3603->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp3603->refCount.value = 1;
                    panda$collections$Array$init($tmp3603);
                    org$pandalanguage$pandac$IRNode* $tmp3605 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, iterable3599, &$s3602, ((panda$collections$ListView*) $tmp3603));
                    iterator3601 = $tmp3605;
                    panda$core$Object* $tmp3606 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
                    panda$core$Object* $tmp3607 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 2 }));
                    org$pandalanguage$pandac$IRNode* $tmp3608 = org$pandalanguage$pandac$Compiler$compileIteratorFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->position, ((panda$core$String*) p_f->payload), ((org$pandalanguage$pandac$ASTNode*) $tmp3606), iterator3601, ((org$pandalanguage$pandac$ASTNode*) $tmp3607));
                    result3547 = $tmp3608;
                    found3561 = ((panda$core$Bit) { true });
                    goto $l3569;
                }
                }
            }
            goto $l3568;
            $l3569:;
        }
        panda$core$Bit $tmp3609 = panda$core$Bit$$NOT$R$panda$core$Bit(found3561);
        if ($tmp3609.value) {
        {
            panda$core$String* $tmp3611 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3610, ((panda$core$Object*) list3541->type));
            panda$core$String* $tmp3613 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3611, &$s3612);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, list3541->position, $tmp3613);
            return NULL;
        }
        }
    }
    }
    panda$core$Object* $tmp3614 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(symbols3544->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp3614);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
    return result3547;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileWhile$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_w) {
    org$pandalanguage$pandac$IRNode* test3618;
    org$pandalanguage$pandac$IRNode* stmt3623;
    panda$collections$Array* children3626;
    panda$core$Bit $tmp3615 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_w->kind, ((panda$core$Int64) { 121 }));
    PANDA_ASSERT($tmp3615.value);
    panda$core$Int64 $tmp3616 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Bit $tmp3617 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3616, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp3617.value);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loops, ((panda$core$Object*) ((panda$core$String*) p_w->payload)));
    panda$core$Object* $tmp3619 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3620 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3619));
    org$pandalanguage$pandac$Type* $tmp3621 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp3622 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3620, $tmp3621);
    test3618 = $tmp3622;
    if (((panda$core$Bit) { test3618 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$core$Object* $tmp3624 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp3625 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3624));
    stmt3623 = $tmp3625;
    if (((panda$core$Bit) { stmt3623 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$collections$Array* $tmp3627 = (panda$collections$Array*) malloc(40);
    $tmp3627->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3627->refCount.value = 1;
    panda$collections$Array$init$panda$core$Int64($tmp3627, ((panda$core$Int64) { 2 }));
    children3626 = $tmp3627;
    panda$collections$Array$add$panda$collections$Array$T(children3626, ((panda$core$Object*) test3618));
    panda$collections$Array$add$panda$collections$Array$T(children3626, ((panda$core$Object*) stmt3623));
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
    org$pandalanguage$pandac$IRNode* $tmp3629 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3629->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3629->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3629, ((panda$core$Int64) { 1013 }), p_w->position, p_w->payload, ((panda$collections$ListView*) children3626));
    return $tmp3629;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileDo$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_d) {
    org$pandalanguage$pandac$IRNode* stmt3634;
    org$pandalanguage$pandac$IRNode* test3637;
    panda$collections$Array* children3642;
    panda$core$Bit $tmp3631 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_d->kind, ((panda$core$Int64) { 120 }));
    PANDA_ASSERT($tmp3631.value);
    panda$core$Int64 $tmp3632 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp3633 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3632, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp3633.value);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loops, ((panda$core$Object*) ((panda$core$String*) p_d->payload)));
    panda$core$Object* $tmp3635 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3636 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3635));
    stmt3634 = $tmp3636;
    if (((panda$core$Bit) { stmt3634 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$core$Object* $tmp3638 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp3639 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3638));
    org$pandalanguage$pandac$Type* $tmp3640 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp3641 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3639, $tmp3640);
    test3637 = $tmp3641;
    if (((panda$core$Bit) { test3637 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$collections$Array* $tmp3643 = (panda$collections$Array*) malloc(40);
    $tmp3643->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3643->refCount.value = 1;
    panda$collections$Array$init$panda$core$Int64($tmp3643, ((panda$core$Int64) { 2 }));
    children3642 = $tmp3643;
    panda$collections$Array$add$panda$collections$Array$T(children3642, ((panda$core$Object*) stmt3634));
    panda$collections$Array$add$panda$collections$Array$T(children3642, ((panda$core$Object*) test3637));
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
    org$pandalanguage$pandac$IRNode* $tmp3645 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3645->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3645->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3645, ((panda$core$Int64) { 1014 }), p_d->position, p_d->payload, ((panda$collections$ListView*) children3642));
    return $tmp3645;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileLoop$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_l) {
    org$pandalanguage$pandac$IRNode* stmt3650;
    panda$collections$Array* children3653;
    panda$core$Bit $tmp3647 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_l->kind, ((panda$core$Int64) { 122 }));
    PANDA_ASSERT($tmp3647.value);
    panda$core$Int64 $tmp3648 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_l->children);
    panda$core$Bit $tmp3649 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3648, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3649.value);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loops, ((panda$core$Object*) ((panda$core$String*) p_l->payload)));
    panda$core$Object* $tmp3651 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_l->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3652 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3651));
    stmt3650 = $tmp3652;
    if (((panda$core$Bit) { stmt3650 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$collections$Array* $tmp3654 = (panda$collections$Array*) malloc(40);
    $tmp3654->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3654->refCount.value = 1;
    panda$collections$Array$init$panda$core$Int64($tmp3654, ((panda$core$Int64) { 1 }));
    children3653 = $tmp3654;
    panda$collections$Array$add$panda$collections$Array$T(children3653, ((panda$core$Object*) stmt3650));
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
    org$pandalanguage$pandac$IRNode* $tmp3656 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3656->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3656->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3656, ((panda$core$Int64) { 1015 }), p_l->position, p_l->payload, ((panda$collections$ListView*) children3653));
    return $tmp3656;
}
org$pandalanguage$pandac$Compiler$CompileTargetResult* org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_t, panda$core$Int64 p_kind, org$pandalanguage$pandac$IRNode* p_rawValue, org$pandalanguage$pandac$Type* p_valueType) {
    org$pandalanguage$pandac$IRNode* value3658;
    org$pandalanguage$pandac$Type* type3662;
    org$pandalanguage$pandac$Variable* v3678;
    value3658 = p_rawValue;
    bool $tmp3659 = ((panda$core$Bit) { value3658 == NULL }).value;
    if ($tmp3659) goto $l3660;
    $tmp3659 = ((panda$core$Bit) { p_valueType == NULL }).value;
    $l3660:;
    panda$core$Bit $tmp3661 = { $tmp3659 };
    PANDA_ASSERT($tmp3661.value);
    switch (p_t->kind.value) {
        case 106:
        {
            bool $tmp3663 = ((panda$core$Bit) { p_t->children != NULL }).value;
            if (!$tmp3663) goto $l3664;
            panda$core$Int64 $tmp3665 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_t->children);
            panda$core$Bit $tmp3666 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp3665, ((panda$core$Int64) { 0 }));
            $tmp3663 = $tmp3666.value;
            $l3664:;
            panda$core$Bit $tmp3667 = { $tmp3663 };
            if ($tmp3667.value) {
            {
                panda$core$Int64 $tmp3668 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_t->children);
                panda$core$Bit $tmp3669 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3668, ((panda$core$Int64) { 1 }));
                PANDA_ASSERT($tmp3669.value);
                panda$core$Object* $tmp3670 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp3671 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, ((org$pandalanguage$pandac$ASTNode*) $tmp3670));
                org$pandalanguage$pandac$Type* $tmp3672 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, $tmp3671);
                type3662 = $tmp3672;
            }
            }
            else {
            if (((panda$core$Bit) { value3658 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp3673 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, value3658);
                value3658 = $tmp3673;
                if (((panda$core$Bit) { value3658 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$Type* $tmp3674 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, value3658);
                type3662 = $tmp3674;
            }
            }
            else {
            if (((panda$core$Bit) { p_valueType != NULL }).value) {
            {
                type3662 = p_valueType;
            }
            }
            else {
            {
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_t->position, &$s3675);
                return NULL;
            }
            }
            }
            }
            if (((panda$core$Bit) { value3658 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp3676 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, value3658, type3662);
                value3658 = $tmp3676;
                if (((panda$core$Bit) { value3658 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$core$Bit $tmp3677 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(value3658->type, type3662);
                PANDA_ASSERT($tmp3677.value);
            }
            }
            org$pandalanguage$pandac$Variable* $tmp3679 = (org$pandalanguage$pandac$Variable*) malloc(88);
            $tmp3679->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
            $tmp3679->refCount.value = 1;
            org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type($tmp3679, p_t->position, p_kind, ((panda$core$String*) p_t->payload), type3662);
            v3678 = $tmp3679;
            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->symbolTable, ((org$pandalanguage$pandac$Symbol*) v3678));
            org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp3681 = (org$pandalanguage$pandac$Compiler$CompileTargetResult*) malloc(32);
            $tmp3681->$class = (panda$core$Class*) &org$pandalanguage$pandac$Compiler$CompileTargetResult$class;
            $tmp3681->refCount.value = 1;
            org$pandalanguage$pandac$IRNode* $tmp3683 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3683->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3683->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3683, ((panda$core$Int64) { 1016 }), ((org$pandalanguage$pandac$Symbol*) v3678)->position, v3678->type, v3678);
            org$pandalanguage$pandac$Compiler$CompileTargetResult$init$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q($tmp3681, $tmp3683, value3658);
            return $tmp3681;
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
    org$pandalanguage$pandac$IRNode* value3693;
    org$pandalanguage$pandac$Compiler$CompileTargetResult* target3698;
    panda$collections$Array* children3701;
    org$pandalanguage$pandac$Variable* v3705;
    panda$core$Bit $tmp3685 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_d->kind, ((panda$core$Int64) { 129 }));
    PANDA_ASSERT($tmp3685.value);
    panda$core$Int64 $tmp3687 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp3688 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3687, ((panda$core$Int64) { 1 }));
    bool $tmp3686 = $tmp3688.value;
    if ($tmp3686) goto $l3689;
    panda$core$Int64 $tmp3690 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp3691 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3690, ((panda$core$Int64) { 2 }));
    $tmp3686 = $tmp3691.value;
    $l3689:;
    panda$core$Bit $tmp3692 = { $tmp3686 };
    PANDA_ASSERT($tmp3692.value);
    panda$core$Int64 $tmp3694 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp3695 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3694, ((panda$core$Int64) { 2 }));
    if ($tmp3695.value) {
    {
        panda$core$Object* $tmp3696 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$IRNode* $tmp3697 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3696));
        value3693 = $tmp3697;
        if (((panda$core$Bit) { value3693 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    else {
    {
        value3693 = NULL;
    }
    }
    panda$core$Object* $tmp3699 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp3700 = org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3699), p_varKind, value3693, NULL);
    target3698 = $tmp3700;
    if (((panda$core$Bit) { target3698 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3702 = (panda$collections$Array*) malloc(40);
    $tmp3702->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3702->refCount.value = 1;
    panda$collections$Array$init($tmp3702);
    children3701 = $tmp3702;
    panda$collections$Array$add$panda$collections$Array$T(children3701, ((panda$core$Object*) target3698->target));
    if (((panda$core$Bit) { target3698->value != NULL }).value) {
    {
        panda$core$Bit $tmp3704 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(target3698->target->kind, ((panda$core$Int64) { 1016 }));
        PANDA_ASSERT($tmp3704.value);
        v3705 = ((org$pandalanguage$pandac$Variable*) target3698->target->payload);
        v3705->initialValue = target3698->value;
        panda$collections$Array$add$panda$collections$Array$T(children3701, ((panda$core$Object*) target3698->value));
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3706 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3706->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3706->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3706, ((panda$core$Int64) { 1021 }), p_d->position, ((panda$collections$ListView*) children3701));
    return $tmp3706;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBreak$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_b) {
    panda$core$Bit found3709;
    panda$collections$Iterator* label$Iter3710;
    panda$core$String* label3722;
    panda$core$Bit $tmp3708 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_b->kind, ((panda$core$Int64) { 134 }));
    PANDA_ASSERT($tmp3708.value);
    if (((panda$core$Bit) { p_b->payload != NULL }).value) {
    {
        found3709 = ((panda$core$Bit) { false });
        {
            ITable* $tmp3711 = ((panda$collections$Iterable*) self->loops)->$class->itable;
            while ($tmp3711->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3711 = $tmp3711->next;
            }
            $fn3713 $tmp3712 = $tmp3711->methods[0];
            panda$collections$Iterator* $tmp3714 = $tmp3712(((panda$collections$Iterable*) self->loops));
            label$Iter3710 = $tmp3714;
            $l3715:;
            ITable* $tmp3717 = label$Iter3710->$class->itable;
            while ($tmp3717->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3717 = $tmp3717->next;
            }
            $fn3719 $tmp3718 = $tmp3717->methods[0];
            panda$core$Bit $tmp3720 = $tmp3718(label$Iter3710);
            panda$core$Bit $tmp3721 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3720);
            if (!$tmp3721.value) goto $l3716;
            {
                ITable* $tmp3723 = label$Iter3710->$class->itable;
                while ($tmp3723->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3723 = $tmp3723->next;
                }
                $fn3725 $tmp3724 = $tmp3723->methods[1];
                panda$core$Object* $tmp3726 = $tmp3724(label$Iter3710);
                label3722 = ((panda$core$String*) $tmp3726);
                bool $tmp3727 = ((panda$core$Bit) { label3722 != NULL }).value;
                if (!$tmp3727) goto $l3728;
                panda$core$Bit $tmp3729 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(label3722, ((panda$core$String*) p_b->payload));
                $tmp3727 = $tmp3729.value;
                $l3728:;
                panda$core$Bit $tmp3730 = { $tmp3727 };
                if ($tmp3730.value) {
                {
                    found3709 = ((panda$core$Bit) { true });
                    goto $l3716;
                }
                }
            }
            goto $l3715;
            $l3716:;
        }
        panda$core$Bit $tmp3731 = panda$core$Bit$$NOT$R$panda$core$Bit(found3709);
        if ($tmp3731.value) {
        {
            panda$core$String* $tmp3733 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3732, p_b->payload);
            panda$core$String* $tmp3735 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3733, &$s3734);
            panda$core$String* $tmp3737 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3736, p_b->payload);
            panda$core$String* $tmp3739 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3737, &$s3738);
            panda$core$String* $tmp3740 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3735, $tmp3739);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_b->position, $tmp3740);
        }
        }
    }
    }
    else {
    panda$core$Int64 $tmp3741 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loops);
    panda$core$Bit $tmp3742 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3741, ((panda$core$Int64) { 0 }));
    if ($tmp3742.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_b->position, &$s3743);
    }
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3744 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3744->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3744->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp3744, ((panda$core$Int64) { 1006 }), p_b->position, ((panda$core$String*) p_b->payload));
    return $tmp3744;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileContinue$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_c) {
    panda$core$Bit found3747;
    panda$collections$Iterator* label$Iter3748;
    panda$core$String* label3760;
    panda$core$Bit $tmp3746 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_c->kind, ((panda$core$Int64) { 135 }));
    PANDA_ASSERT($tmp3746.value);
    if (((panda$core$Bit) { p_c->payload != NULL }).value) {
    {
        found3747 = ((panda$core$Bit) { false });
        {
            ITable* $tmp3749 = ((panda$collections$Iterable*) self->loops)->$class->itable;
            while ($tmp3749->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3749 = $tmp3749->next;
            }
            $fn3751 $tmp3750 = $tmp3749->methods[0];
            panda$collections$Iterator* $tmp3752 = $tmp3750(((panda$collections$Iterable*) self->loops));
            label$Iter3748 = $tmp3752;
            $l3753:;
            ITable* $tmp3755 = label$Iter3748->$class->itable;
            while ($tmp3755->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3755 = $tmp3755->next;
            }
            $fn3757 $tmp3756 = $tmp3755->methods[0];
            panda$core$Bit $tmp3758 = $tmp3756(label$Iter3748);
            panda$core$Bit $tmp3759 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3758);
            if (!$tmp3759.value) goto $l3754;
            {
                ITable* $tmp3761 = label$Iter3748->$class->itable;
                while ($tmp3761->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3761 = $tmp3761->next;
                }
                $fn3763 $tmp3762 = $tmp3761->methods[1];
                panda$core$Object* $tmp3764 = $tmp3762(label$Iter3748);
                label3760 = ((panda$core$String*) $tmp3764);
                bool $tmp3765 = ((panda$core$Bit) { label3760 != NULL }).value;
                if (!$tmp3765) goto $l3766;
                panda$core$Bit $tmp3767 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(label3760, ((panda$core$String*) p_c->payload));
                $tmp3765 = $tmp3767.value;
                $l3766:;
                panda$core$Bit $tmp3768 = { $tmp3765 };
                if ($tmp3768.value) {
                {
                    found3747 = ((panda$core$Bit) { true });
                    goto $l3754;
                }
                }
            }
            goto $l3753;
            $l3754:;
        }
        panda$core$Bit $tmp3769 = panda$core$Bit$$NOT$R$panda$core$Bit(found3747);
        if ($tmp3769.value) {
        {
            panda$core$String* $tmp3771 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3770, p_c->payload);
            panda$core$String* $tmp3773 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3771, &$s3772);
            panda$core$String* $tmp3775 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3774, p_c->payload);
            panda$core$String* $tmp3777 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3775, &$s3776);
            panda$core$String* $tmp3778 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3773, $tmp3777);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_c->position, $tmp3778);
        }
        }
    }
    }
    else {
    panda$core$Int64 $tmp3779 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loops);
    panda$core$Bit $tmp3780 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3779, ((panda$core$Int64) { 0 }));
    if ($tmp3780.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_c->position, &$s3781);
    }
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3782 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3782->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3782->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp3782, ((panda$core$Int64) { 1007 }), p_c->position, ((panda$core$String*) p_c->payload));
    return $tmp3782;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileReturn$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_r) {
    org$pandalanguage$pandac$IRNode* value3796;
    panda$collections$Array* children3801;
    panda$core$Bit $tmp3784 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_r->kind, ((panda$core$Int64) { 136 }));
    PANDA_ASSERT($tmp3784.value);
    bool $tmp3785 = ((panda$core$Bit) { p_r->children != NULL }).value;
    if (!$tmp3785) goto $l3786;
    panda$core$Int64 $tmp3787 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_r->children);
    panda$core$Bit $tmp3788 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3787, ((panda$core$Int64) { 0 }));
    $tmp3785 = $tmp3788.value;
    $l3786:;
    panda$core$Bit $tmp3789 = { $tmp3785 };
    if ($tmp3789.value) {
    {
        panda$core$Int64 $tmp3790 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_r->children);
        panda$core$Bit $tmp3791 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3790, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp3791.value);
        panda$core$Object* $tmp3792 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
        org$pandalanguage$pandac$Type* $tmp3793 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp3794 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp3792)->returnType, $tmp3793);
        if ($tmp3794.value) {
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_r->position, &$s3795);
            return NULL;
        }
        }
        panda$core$Object* $tmp3797 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp3798 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3797));
        panda$core$Object* $tmp3799 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
        org$pandalanguage$pandac$IRNode* $tmp3800 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3798, ((org$pandalanguage$pandac$MethodDecl*) $tmp3799)->returnType);
        value3796 = $tmp3800;
        if (((panda$core$Bit) { value3796 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp3802 = (panda$collections$Array*) malloc(40);
        $tmp3802->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp3802->refCount.value = 1;
        panda$collections$Array$init($tmp3802);
        children3801 = $tmp3802;
        panda$collections$Array$add$panda$collections$Array$T(children3801, ((panda$core$Object*) value3796));
        org$pandalanguage$pandac$IRNode* $tmp3804 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3804->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3804->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3804, ((panda$core$Int64) { 1008 }), p_r->position, ((panda$collections$ListView*) children3801));
        return $tmp3804;
    }
    }
    panda$core$Object* $tmp3806 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
    org$pandalanguage$pandac$Type* $tmp3807 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp3808 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp3806)->returnType, $tmp3807);
    if ($tmp3808.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_r->position, &$s3809);
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3810 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3810->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3810->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp3810, ((panda$core$Int64) { 1008 }), p_r->position);
    return $tmp3810;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileAssert$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_a) {
    org$pandalanguage$pandac$IRNode* test3820;
    org$pandalanguage$pandac$ClassDecl* bit3825;
    org$pandalanguage$pandac$Symbol* value3828;
    panda$collections$Array* fieldChildren3831;
    panda$collections$Array* children3837;
    org$pandalanguage$pandac$IRNode* msg3842;
    panda$core$Bit $tmp3812 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_a->kind, ((panda$core$Int64) { 123 }));
    PANDA_ASSERT($tmp3812.value);
    panda$core$Int64 $tmp3814 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp3815 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3814, ((panda$core$Int64) { 1 }));
    bool $tmp3813 = $tmp3815.value;
    if ($tmp3813) goto $l3816;
    panda$core$Int64 $tmp3817 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp3818 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3817, ((panda$core$Int64) { 2 }));
    $tmp3813 = $tmp3818.value;
    $l3816:;
    panda$core$Bit $tmp3819 = { $tmp3813 };
    PANDA_ASSERT($tmp3819.value);
    panda$core$Object* $tmp3821 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_a->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3822 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3821));
    test3820 = $tmp3822;
    if (((panda$core$Bit) { test3820 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$Type* $tmp3823 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp3824 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, test3820, $tmp3823);
    test3820 = $tmp3824;
    if (((panda$core$Bit) { test3820 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$Type* $tmp3826 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$ClassDecl* $tmp3827 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, $tmp3826);
    bit3825 = $tmp3827;
    PANDA_ASSERT(((panda$core$Bit) { bit3825 != NULL }).value);
    org$pandalanguage$pandac$Symbol* $tmp3830 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(bit3825->symbolTable, &$s3829);
    value3828 = $tmp3830;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self, ((org$pandalanguage$pandac$FieldDecl*) value3828));
    panda$collections$Array* $tmp3832 = (panda$collections$Array*) malloc(40);
    $tmp3832->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3832->refCount.value = 1;
    panda$collections$Array$init($tmp3832);
    fieldChildren3831 = $tmp3832;
    panda$collections$Array$add$panda$collections$Array$T(fieldChildren3831, ((panda$core$Object*) test3820));
    org$pandalanguage$pandac$IRNode* $tmp3834 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3834->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3834->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3836 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3834, ((panda$core$Int64) { 1026 }), p_a->position, $tmp3836, ((panda$core$Object*) value3828), ((panda$collections$ListView*) fieldChildren3831));
    test3820 = $tmp3834;
    panda$collections$Array* $tmp3838 = (panda$collections$Array*) malloc(40);
    $tmp3838->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3838->refCount.value = 1;
    panda$collections$Array$init($tmp3838);
    children3837 = $tmp3838;
    panda$collections$Array$add$panda$collections$Array$T(children3837, ((panda$core$Object*) test3820));
    panda$core$Int64 $tmp3840 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp3841 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3840, ((panda$core$Int64) { 2 }));
    if ($tmp3841.value) {
    {
        panda$core$Object* $tmp3843 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_a->children, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$IRNode* $tmp3844 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3843));
        msg3842 = $tmp3844;
        if (((panda$core$Bit) { msg3842 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$Type* $tmp3845 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp3846 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, msg3842, $tmp3845);
        msg3842 = $tmp3846;
        if (((panda$core$Bit) { msg3842 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children3837, ((panda$core$Object*) msg3842));
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3847 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3847->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3847->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3847, ((panda$core$Int64) { 1034 }), p_a->position, ((panda$collections$ListView*) children3837));
    return $tmp3847;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileVar$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_v) {
    panda$core$Int64 nodeKind3862;
    panda$core$Int64 varKind3863;
    panda$collections$Array* decls3864;
    panda$collections$Iterator* astDecl$Iter3867;
    org$pandalanguage$pandac$ASTNode* astDecl3879;
    org$pandalanguage$pandac$IRNode* decl3884;
    panda$core$Bit $tmp3852 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 130 }));
    bool $tmp3851 = $tmp3852.value;
    if ($tmp3851) goto $l3853;
    panda$core$Bit $tmp3854 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 131 }));
    $tmp3851 = $tmp3854.value;
    $l3853:;
    panda$core$Bit $tmp3855 = { $tmp3851 };
    bool $tmp3850 = $tmp3855.value;
    if ($tmp3850) goto $l3856;
    panda$core$Bit $tmp3857 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 133 }));
    $tmp3850 = $tmp3857.value;
    $l3856:;
    panda$core$Bit $tmp3858 = { $tmp3850 };
    bool $tmp3849 = $tmp3858.value;
    if ($tmp3849) goto $l3859;
    panda$core$Bit $tmp3860 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 132 }));
    $tmp3849 = $tmp3860.value;
    $l3859:;
    panda$core$Bit $tmp3861 = { $tmp3849 };
    PANDA_ASSERT($tmp3861.value);
    switch (p_v->kind.value) {
        case 130:
        {
            nodeKind3862 = ((panda$core$Int64) { 1017 });
            varKind3863 = ((panda$core$Int64) { 10000 });
        }
        break;
        case 131:
        {
            nodeKind3862 = ((panda$core$Int64) { 1018 });
            varKind3863 = ((panda$core$Int64) { 10001 });
        }
        break;
        case 132:
        {
            nodeKind3862 = ((panda$core$Int64) { 1019 });
            varKind3863 = ((panda$core$Int64) { 10002 });
        }
        break;
        case 133:
        {
            nodeKind3862 = ((panda$core$Int64) { 1020 });
            varKind3863 = ((panda$core$Int64) { 10003 });
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
    panda$collections$Array* $tmp3865 = (panda$collections$Array*) malloc(40);
    $tmp3865->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3865->refCount.value = 1;
    panda$collections$Array$init($tmp3865);
    decls3864 = $tmp3865;
    {
        ITable* $tmp3868 = ((panda$collections$Iterable*) p_v->children)->$class->itable;
        while ($tmp3868->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3868 = $tmp3868->next;
        }
        $fn3870 $tmp3869 = $tmp3868->methods[0];
        panda$collections$Iterator* $tmp3871 = $tmp3869(((panda$collections$Iterable*) p_v->children));
        astDecl$Iter3867 = $tmp3871;
        $l3872:;
        ITable* $tmp3874 = astDecl$Iter3867->$class->itable;
        while ($tmp3874->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3874 = $tmp3874->next;
        }
        $fn3876 $tmp3875 = $tmp3874->methods[0];
        panda$core$Bit $tmp3877 = $tmp3875(astDecl$Iter3867);
        panda$core$Bit $tmp3878 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3877);
        if (!$tmp3878.value) goto $l3873;
        {
            ITable* $tmp3880 = astDecl$Iter3867->$class->itable;
            while ($tmp3880->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3880 = $tmp3880->next;
            }
            $fn3882 $tmp3881 = $tmp3880->methods[1];
            panda$core$Object* $tmp3883 = $tmp3881(astDecl$Iter3867);
            astDecl3879 = ((org$pandalanguage$pandac$ASTNode*) $tmp3883);
            org$pandalanguage$pandac$IRNode* $tmp3885 = org$pandalanguage$pandac$Compiler$compileDeclaration$org$pandalanguage$pandac$ASTNode$panda$core$Int64$R$org$pandalanguage$pandac$IRNode$Q(self, astDecl3879, varKind3863);
            decl3884 = $tmp3885;
            if (((panda$core$Bit) { decl3884 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(decls3864, ((panda$core$Object*) decl3884));
        }
        goto $l3872;
        $l3873:;
    }
    org$pandalanguage$pandac$IRNode* $tmp3886 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3886->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3886->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3886, nodeKind3862, p_v->position, ((panda$collections$ListView*) decls3864));
    return $tmp3886;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileWhenTest$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Variable* p_value, org$pandalanguage$pandac$ASTNode* p_test) {
    org$pandalanguage$pandac$IRNode* target3888;
    panda$collections$Array* callChildren3891;
    org$pandalanguage$pandac$IRNode* testValue3894;
    org$pandalanguage$pandac$IRNode* $tmp3889 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3889->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3889->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3889, ((panda$core$Int64) { 1016 }), p_test->position, p_value->type, p_value);
    target3888 = $tmp3889;
    panda$collections$Array* $tmp3892 = (panda$collections$Array*) malloc(40);
    $tmp3892->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3892->refCount.value = 1;
    panda$collections$Array$init($tmp3892);
    callChildren3891 = $tmp3892;
    org$pandalanguage$pandac$IRNode* $tmp3895 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_test);
    testValue3894 = $tmp3895;
    if (((panda$core$Bit) { testValue3894 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(callChildren3891, ((panda$core$Object*) testValue3894));
    org$pandalanguage$pandac$IRNode* $tmp3897 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target3888, &$s3896, ((panda$collections$ListView*) callChildren3891));
    return $tmp3897;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileChainedIfWhen$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Variable* p_value, org$pandalanguage$pandac$ASTNode* p_w) {
    org$pandalanguage$pandac$IRNode* test3906;
    panda$core$Range$LTpanda$core$Int64$GT $tmp3910;
    org$pandalanguage$pandac$IRNode* nextTest3926;
    panda$collections$Array* callChildren3930;
    panda$collections$Array* statements3943;
    panda$core$Range$LTpanda$core$Int64$GT $tmp3946;
    org$pandalanguage$pandac$IRNode* statement3961;
    panda$collections$Array* children3971;
    panda$core$Bit $tmp3898 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_w->kind, ((panda$core$Int64) { 124 }));
    PANDA_ASSERT($tmp3898.value);
    panda$core$Int64 $tmp3899 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Bit $tmp3900 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp3899, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3900.value);
    panda$core$Object* $tmp3901 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp3902 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp3901)->kind, ((panda$core$Int64) { 128 }));
    PANDA_ASSERT($tmp3902.value);
    panda$core$Object* $tmp3903 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Int64 $tmp3904 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$ASTNode*) $tmp3903)->children);
    panda$core$Bit $tmp3905 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp3904, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3905.value);
    panda$core$Object* $tmp3907 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp3908 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$ASTNode*) $tmp3907)->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3909 = org$pandalanguage$pandac$Compiler$compileWhenTest$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_value, ((org$pandalanguage$pandac$ASTNode*) $tmp3908));
    test3906 = $tmp3909;
    if (((panda$core$Bit) { test3906 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Object* $tmp3911 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Int64 $tmp3912 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$ASTNode*) $tmp3911)->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp3910, ((panda$core$Int64) { 1 }), $tmp3912, ((panda$core$Bit) { false }));
    int64_t $tmp3914 = $tmp3910.min.value;
    panda$core$Int64 i3913 = { $tmp3914 };
    int64_t $tmp3916 = $tmp3910.max.value;
    bool $tmp3917 = $tmp3910.inclusive.value;
    if ($tmp3917) goto $l3924; else goto $l3925;
    $l3924:;
    if ($tmp3914 <= $tmp3916) goto $l3918; else goto $l3920;
    $l3925:;
    if ($tmp3914 < $tmp3916) goto $l3918; else goto $l3920;
    $l3918:;
    {
        panda$core$Object* $tmp3927 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3928 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$ASTNode*) $tmp3927)->children, i3913);
        org$pandalanguage$pandac$IRNode* $tmp3929 = org$pandalanguage$pandac$Compiler$compileWhenTest$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_value, ((org$pandalanguage$pandac$ASTNode*) $tmp3928));
        nextTest3926 = $tmp3929;
        if (((panda$core$Bit) { nextTest3926 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp3931 = (panda$collections$Array*) malloc(40);
        $tmp3931->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp3931->refCount.value = 1;
        panda$collections$Array$init($tmp3931);
        callChildren3930 = $tmp3931;
        panda$collections$Array$add$panda$collections$Array$T(callChildren3930, ((panda$core$Object*) nextTest3926));
        org$pandalanguage$pandac$IRNode* $tmp3934 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, test3906, &$s3933, ((panda$collections$ListView*) callChildren3930));
        test3906 = $tmp3934;
        if (((panda$core$Bit) { test3906 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    $l3921:;
    int64_t $tmp3936 = $tmp3916 - i3913.value;
    if ($tmp3917) goto $l3937; else goto $l3938;
    $l3937:;
    if ($tmp3936 >= 1) goto $l3935; else goto $l3920;
    $l3938:;
    if ($tmp3936 > 1) goto $l3935; else goto $l3920;
    $l3935:;
    i3913.value += 1;
    goto $l3918;
    $l3920:;
    org$pandalanguage$pandac$SymbolTable* $tmp3941 = (org$pandalanguage$pandac$SymbolTable*) malloc(48);
    $tmp3941->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp3941->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp3941, self->symbolTable);
    self->symbolTable = $tmp3941;
    panda$collections$Array* $tmp3944 = (panda$collections$Array*) malloc(40);
    $tmp3944->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3944->refCount.value = 1;
    panda$collections$Array$init($tmp3944);
    statements3943 = $tmp3944;
    panda$core$Int64 $tmp3947 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp3946, ((panda$core$Int64) { 1 }), $tmp3947, ((panda$core$Bit) { false }));
    int64_t $tmp3949 = $tmp3946.min.value;
    panda$core$Int64 i3948 = { $tmp3949 };
    int64_t $tmp3951 = $tmp3946.max.value;
    bool $tmp3952 = $tmp3946.inclusive.value;
    if ($tmp3952) goto $l3959; else goto $l3960;
    $l3959:;
    if ($tmp3949 <= $tmp3951) goto $l3953; else goto $l3955;
    $l3960:;
    if ($tmp3949 < $tmp3951) goto $l3953; else goto $l3955;
    $l3953:;
    {
        panda$core$Object* $tmp3962 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, i3948);
        org$pandalanguage$pandac$IRNode* $tmp3963 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3962));
        statement3961 = $tmp3963;
        if (((panda$core$Bit) { statement3961 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(statements3943, ((panda$core$Object*) statement3961));
    }
    $l3956:;
    int64_t $tmp3965 = $tmp3951 - i3948.value;
    if ($tmp3952) goto $l3966; else goto $l3967;
    $l3966:;
    if ($tmp3965 >= 1) goto $l3964; else goto $l3955;
    $l3967:;
    if ($tmp3965 > 1) goto $l3964; else goto $l3955;
    $l3964:;
    i3948.value += 1;
    goto $l3953;
    $l3955:;
    panda$core$Object* $tmp3970 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->symbolTable->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp3970);
    panda$collections$Array* $tmp3972 = (panda$collections$Array*) malloc(40);
    $tmp3972->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3972->refCount.value = 1;
    panda$collections$Array$init($tmp3972);
    children3971 = $tmp3972;
    panda$collections$Array$add$panda$collections$Array$T(children3971, ((panda$core$Object*) test3906));
    org$pandalanguage$pandac$IRNode* $tmp3974 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3974->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3974->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3974, ((panda$core$Int64) { 1000 }), p_w->position, ((panda$collections$ListView*) statements3943));
    panda$collections$Array$add$panda$collections$Array$T(children3971, ((panda$core$Object*) $tmp3974));
    org$pandalanguage$pandac$IRNode* $tmp3976 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3976->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3976->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3976, ((panda$core$Int64) { 1012 }), p_w->position, ((panda$collections$ListView*) children3971));
    return $tmp3976;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileChainedIfMatch$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_m, org$pandalanguage$pandac$IRNode* p_value) {
    panda$collections$Array* children3978;
    org$pandalanguage$pandac$Variable* valueVar3981;
    panda$collections$Array* declChildren3991;
    panda$collections$Array* varChildren3996;
    panda$core$Range$LTpanda$core$Int64$GT $tmp4003;
    org$pandalanguage$pandac$ASTNode* c4018;
    org$pandalanguage$pandac$IRNode* w4020;
    panda$collections$Array* statements4022;
    panda$collections$Iterator* astStatement$Iter4025;
    org$pandalanguage$pandac$ASTNode* astStatement4037;
    org$pandalanguage$pandac$IRNode* stmt4042;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp4052;
    panda$collections$Array* newChildren4080;
    panda$collections$Array* $tmp3979 = (panda$collections$Array*) malloc(40);
    $tmp3979->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3979->refCount.value = 1;
    panda$collections$Array$init($tmp3979);
    children3978 = $tmp3979;
    org$pandalanguage$pandac$Variable* $tmp3982 = (org$pandalanguage$pandac$Variable*) malloc(88);
    $tmp3982->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
    $tmp3982->refCount.value = 1;
    panda$core$String* $tmp3985 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3984, ((panda$core$Object*) wrap_panda$core$Int64(p_m->position.line)));
    panda$core$String* $tmp3987 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3985, &$s3986);
    panda$core$String* $tmp3988 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3987, ((panda$core$Object*) wrap_panda$core$Int64(p_m->position.column)));
    panda$core$String* $tmp3990 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3988, &$s3989);
    org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type($tmp3982, p_m->position, ((panda$core$Int64) { 10001 }), $tmp3990, p_value->type);
    valueVar3981 = $tmp3982;
    panda$collections$Array* $tmp3992 = (panda$collections$Array*) malloc(40);
    $tmp3992->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3992->refCount.value = 1;
    panda$collections$Array$init($tmp3992);
    declChildren3991 = $tmp3992;
    org$pandalanguage$pandac$IRNode* $tmp3994 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3994->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3994->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3994, ((panda$core$Int64) { 1016 }), p_value->position, valueVar3981->type, valueVar3981);
    panda$collections$Array$add$panda$collections$Array$T(declChildren3991, ((panda$core$Object*) $tmp3994));
    panda$collections$Array$add$panda$collections$Array$T(declChildren3991, ((panda$core$Object*) p_value));
    panda$collections$Array* $tmp3997 = (panda$collections$Array*) malloc(40);
    $tmp3997->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3997->refCount.value = 1;
    panda$collections$Array$init($tmp3997);
    varChildren3996 = $tmp3997;
    org$pandalanguage$pandac$IRNode* $tmp3999 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3999->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3999->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3999, ((panda$core$Int64) { 1021 }), ((org$pandalanguage$pandac$Symbol*) valueVar3981)->position, ((panda$collections$ListView*) declChildren3991));
    panda$collections$Array$add$panda$collections$Array$T(varChildren3996, ((panda$core$Object*) $tmp3999));
    org$pandalanguage$pandac$IRNode* $tmp4001 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4001->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4001->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4001, ((panda$core$Int64) { 1018 }), ((org$pandalanguage$pandac$Symbol*) valueVar3981)->position, ((panda$collections$ListView*) varChildren3996));
    panda$collections$Array$add$panda$collections$Array$T(children3978, ((panda$core$Object*) $tmp4001));
    panda$core$Int64 $tmp4004 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp4003, ((panda$core$Int64) { 1 }), $tmp4004, ((panda$core$Bit) { false }));
    int64_t $tmp4006 = $tmp4003.min.value;
    panda$core$Int64 i4005 = { $tmp4006 };
    int64_t $tmp4008 = $tmp4003.max.value;
    bool $tmp4009 = $tmp4003.inclusive.value;
    if ($tmp4009) goto $l4016; else goto $l4017;
    $l4016:;
    if ($tmp4006 <= $tmp4008) goto $l4010; else goto $l4012;
    $l4017:;
    if ($tmp4006 < $tmp4008) goto $l4010; else goto $l4012;
    $l4010:;
    {
        panda$core$Object* $tmp4019 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, i4005);
        c4018 = ((org$pandalanguage$pandac$ASTNode*) $tmp4019);
        switch (c4018->kind.value) {
            case 124:
            {
                org$pandalanguage$pandac$IRNode* $tmp4021 = org$pandalanguage$pandac$Compiler$compileChainedIfWhen$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, valueVar3981, c4018);
                w4020 = $tmp4021;
                if (((panda$core$Bit) { w4020 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children3978, ((panda$core$Object*) w4020));
            }
            break;
            case 127:
            {
                panda$collections$Array* $tmp4023 = (panda$collections$Array*) malloc(40);
                $tmp4023->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp4023->refCount.value = 1;
                panda$collections$Array$init($tmp4023);
                statements4022 = $tmp4023;
                {
                    ITable* $tmp4026 = ((panda$collections$Iterable*) c4018->children)->$class->itable;
                    while ($tmp4026->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp4026 = $tmp4026->next;
                    }
                    $fn4028 $tmp4027 = $tmp4026->methods[0];
                    panda$collections$Iterator* $tmp4029 = $tmp4027(((panda$collections$Iterable*) c4018->children));
                    astStatement$Iter4025 = $tmp4029;
                    $l4030:;
                    ITable* $tmp4032 = astStatement$Iter4025->$class->itable;
                    while ($tmp4032->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp4032 = $tmp4032->next;
                    }
                    $fn4034 $tmp4033 = $tmp4032->methods[0];
                    panda$core$Bit $tmp4035 = $tmp4033(astStatement$Iter4025);
                    panda$core$Bit $tmp4036 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4035);
                    if (!$tmp4036.value) goto $l4031;
                    {
                        ITable* $tmp4038 = astStatement$Iter4025->$class->itable;
                        while ($tmp4038->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp4038 = $tmp4038->next;
                        }
                        $fn4040 $tmp4039 = $tmp4038->methods[1];
                        panda$core$Object* $tmp4041 = $tmp4039(astStatement$Iter4025);
                        astStatement4037 = ((org$pandalanguage$pandac$ASTNode*) $tmp4041);
                        org$pandalanguage$pandac$IRNode* $tmp4043 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, astStatement4037);
                        stmt4042 = $tmp4043;
                        if (((panda$core$Bit) { stmt4042 == NULL }).value) {
                        {
                            return NULL;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(statements4022, ((panda$core$Object*) stmt4042));
                    }
                    goto $l4030;
                    $l4031:;
                }
                org$pandalanguage$pandac$IRNode* $tmp4044 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp4044->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp4044->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4044, ((panda$core$Int64) { 1000 }), c4018->position, ((panda$collections$ListView*) statements4022));
                panda$collections$Array$add$panda$collections$Array$T(children3978, ((panda$core$Object*) $tmp4044));
            }
            break;
            default:
            {
                PANDA_ASSERT(((panda$core$Bit) { false }).value);
            }
        }
    }
    $l4013:;
    int64_t $tmp4047 = $tmp4008 - i4005.value;
    if ($tmp4009) goto $l4048; else goto $l4049;
    $l4048:;
    if ($tmp4047 >= 1) goto $l4046; else goto $l4012;
    $l4049:;
    if ($tmp4047 > 1) goto $l4046; else goto $l4012;
    $l4046:;
    i4005.value += 1;
    goto $l4010;
    $l4012:;
    panda$core$Int64 $tmp4053 = panda$collections$Array$get_count$R$panda$core$Int64(children3978);
    panda$core$Int64 $tmp4054 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp4053, ((panda$core$Int64) { 1 }));
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp4052, $tmp4054, ((panda$core$Int64) { 1 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { false }));
    int64_t $tmp4056 = $tmp4052.start.value;
    panda$core$Int64 i4055 = { $tmp4056 };
    int64_t $tmp4058 = $tmp4052.end.value;
    int64_t $tmp4059 = $tmp4052.step.value;
    bool $tmp4060 = $tmp4052.inclusive.value;
    bool $tmp4067 = $tmp4059 > 0;
    if ($tmp4067) goto $l4065; else goto $l4066;
    $l4065:;
    if ($tmp4060) goto $l4068; else goto $l4069;
    $l4068:;
    if ($tmp4056 <= $tmp4058) goto $l4061; else goto $l4063;
    $l4069:;
    if ($tmp4056 < $tmp4058) goto $l4061; else goto $l4063;
    $l4066:;
    if ($tmp4060) goto $l4070; else goto $l4071;
    $l4070:;
    if ($tmp4056 >= $tmp4058) goto $l4061; else goto $l4063;
    $l4071:;
    if ($tmp4056 > $tmp4058) goto $l4061; else goto $l4063;
    $l4061:;
    {
        panda$core$Int64 $tmp4073 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4055, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp4074 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children3978, $tmp4073);
        panda$core$Bit $tmp4075 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp4074)->kind, ((panda$core$Int64) { 1012 }));
        PANDA_ASSERT($tmp4075.value);
        panda$core$Int64 $tmp4076 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4055, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp4077 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children3978, $tmp4076);
        panda$core$Int64 $tmp4078 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp4077)->children);
        panda$core$Bit $tmp4079 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4078, ((panda$core$Int64) { 2 }));
        PANDA_ASSERT($tmp4079.value);
        panda$collections$Array* $tmp4081 = (panda$collections$Array*) malloc(40);
        $tmp4081->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp4081->refCount.value = 1;
        panda$core$Int64 $tmp4083 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4055, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp4084 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children3978, $tmp4083);
        panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp4081, ((panda$collections$ListView*) ((org$pandalanguage$pandac$IRNode*) $tmp4084)->children));
        newChildren4080 = $tmp4081;
        panda$core$Object* $tmp4085 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children3978, i4055);
        panda$collections$Array$add$panda$collections$Array$T(newChildren4080, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp4085)));
        panda$core$Int64 $tmp4086 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4055, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$IRNode* $tmp4087 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp4087->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp4087->refCount.value = 1;
        panda$core$Int64 $tmp4089 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4055, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp4090 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children3978, $tmp4089);
        panda$core$Int64 $tmp4091 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4055, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp4092 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children3978, $tmp4091);
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4087, ((org$pandalanguage$pandac$IRNode*) $tmp4090)->kind, ((org$pandalanguage$pandac$IRNode*) $tmp4092)->position, ((panda$collections$ListView*) newChildren4080));
        panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(children3978, $tmp4086, ((panda$core$Object*) $tmp4087));
        panda$core$Int64 $tmp4093 = panda$collections$Array$get_count$R$panda$core$Int64(children3978);
        panda$core$Int64 $tmp4094 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp4093, ((panda$core$Int64) { 1 }));
        panda$collections$Array$removeIndex$panda$core$Int64(children3978, $tmp4094);
    }
    $l4064:;
    if ($tmp4067) goto $l4096; else goto $l4097;
    $l4096:;
    int64_t $tmp4098 = $tmp4058 - i4055.value;
    if ($tmp4060) goto $l4099; else goto $l4100;
    $l4099:;
    if ($tmp4098 >= $tmp4059) goto $l4095; else goto $l4063;
    $l4100:;
    if ($tmp4098 > $tmp4059) goto $l4095; else goto $l4063;
    $l4097:;
    int64_t $tmp4102 = i4055.value - $tmp4058;
    if ($tmp4060) goto $l4103; else goto $l4104;
    $l4103:;
    if ($tmp4102 >= -$tmp4059) goto $l4095; else goto $l4063;
    $l4104:;
    if ($tmp4102 > -$tmp4059) goto $l4095; else goto $l4063;
    $l4095:;
    i4055.value += $tmp4059;
    goto $l4061;
    $l4063:;
    org$pandalanguage$pandac$IRNode* $tmp4106 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4106->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4106->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4106, ((panda$core$Int64) { 1000 }), p_m->position, ((panda$collections$ListView*) children3978));
    return $tmp4106;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileWhen$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type, org$pandalanguage$pandac$ASTNode* p_w) {
    panda$collections$Array* children4116;
    panda$collections$Iterator* expr$Iter4119;
    org$pandalanguage$pandac$ASTNode* expr4132;
    org$pandalanguage$pandac$IRNode* compiled4137;
    panda$collections$Array* statements4142;
    panda$core$Range$LTpanda$core$Int64$GT $tmp4145;
    org$pandalanguage$pandac$IRNode* statement4160;
    panda$core$Bit $tmp4108 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_w->kind, ((panda$core$Int64) { 124 }));
    PANDA_ASSERT($tmp4108.value);
    panda$core$Int64 $tmp4109 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Bit $tmp4110 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp4109, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4110.value);
    panda$core$Object* $tmp4111 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp4112 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp4111)->kind, ((panda$core$Int64) { 128 }));
    PANDA_ASSERT($tmp4112.value);
    panda$core$Object* $tmp4113 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Int64 $tmp4114 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$ASTNode*) $tmp4113)->children);
    panda$core$Bit $tmp4115 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp4114, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4115.value);
    panda$collections$Array* $tmp4117 = (panda$collections$Array*) malloc(40);
    $tmp4117->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4117->refCount.value = 1;
    panda$collections$Array$init($tmp4117);
    children4116 = $tmp4117;
    {
        panda$core$Object* $tmp4120 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
        ITable* $tmp4121 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp4120)->children)->$class->itable;
        while ($tmp4121->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4121 = $tmp4121->next;
        }
        $fn4123 $tmp4122 = $tmp4121->methods[0];
        panda$collections$Iterator* $tmp4124 = $tmp4122(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp4120)->children));
        expr$Iter4119 = $tmp4124;
        $l4125:;
        ITable* $tmp4127 = expr$Iter4119->$class->itable;
        while ($tmp4127->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4127 = $tmp4127->next;
        }
        $fn4129 $tmp4128 = $tmp4127->methods[0];
        panda$core$Bit $tmp4130 = $tmp4128(expr$Iter4119);
        panda$core$Bit $tmp4131 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4130);
        if (!$tmp4131.value) goto $l4126;
        {
            ITable* $tmp4133 = expr$Iter4119->$class->itable;
            while ($tmp4133->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4133 = $tmp4133->next;
            }
            $fn4135 $tmp4134 = $tmp4133->methods[1];
            panda$core$Object* $tmp4136 = $tmp4134(expr$Iter4119);
            expr4132 = ((org$pandalanguage$pandac$ASTNode*) $tmp4136);
            org$pandalanguage$pandac$IRNode* $tmp4138 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, expr4132);
            org$pandalanguage$pandac$IRNode* $tmp4139 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp4138, p_type);
            compiled4137 = $tmp4139;
            if (((panda$core$Bit) { compiled4137 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children4116, ((panda$core$Object*) compiled4137));
        }
        goto $l4125;
        $l4126:;
    }
    org$pandalanguage$pandac$SymbolTable* $tmp4140 = (org$pandalanguage$pandac$SymbolTable*) malloc(48);
    $tmp4140->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp4140->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp4140, self->symbolTable);
    self->symbolTable = $tmp4140;
    panda$collections$Array* $tmp4143 = (panda$collections$Array*) malloc(40);
    $tmp4143->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4143->refCount.value = 1;
    panda$collections$Array$init($tmp4143);
    statements4142 = $tmp4143;
    panda$core$Int64 $tmp4146 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp4145, ((panda$core$Int64) { 1 }), $tmp4146, ((panda$core$Bit) { false }));
    int64_t $tmp4148 = $tmp4145.min.value;
    panda$core$Int64 i4147 = { $tmp4148 };
    int64_t $tmp4150 = $tmp4145.max.value;
    bool $tmp4151 = $tmp4145.inclusive.value;
    if ($tmp4151) goto $l4158; else goto $l4159;
    $l4158:;
    if ($tmp4148 <= $tmp4150) goto $l4152; else goto $l4154;
    $l4159:;
    if ($tmp4148 < $tmp4150) goto $l4152; else goto $l4154;
    $l4152:;
    {
        panda$core$Object* $tmp4161 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, i4147);
        org$pandalanguage$pandac$IRNode* $tmp4162 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4161));
        statement4160 = $tmp4162;
        if (((panda$core$Bit) { statement4160 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(statements4142, ((panda$core$Object*) statement4160));
    }
    $l4155:;
    int64_t $tmp4164 = $tmp4150 - i4147.value;
    if ($tmp4151) goto $l4165; else goto $l4166;
    $l4165:;
    if ($tmp4164 >= 1) goto $l4163; else goto $l4154;
    $l4166:;
    if ($tmp4164 > 1) goto $l4163; else goto $l4154;
    $l4163:;
    i4147.value += 1;
    goto $l4152;
    $l4154:;
    panda$core$Object* $tmp4169 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->symbolTable->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp4169);
    org$pandalanguage$pandac$IRNode* $tmp4170 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4170->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4170->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4170, ((panda$core$Int64) { 1000 }), p_w->position, ((panda$collections$ListView*) statements4142));
    panda$collections$Array$add$panda$collections$Array$T(children4116, ((panda$core$Object*) $tmp4170));
    org$pandalanguage$pandac$IRNode* $tmp4172 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4172->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4172->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4172, ((panda$core$Int64) { 1042 }), p_w->position, ((panda$collections$ListView*) children4116));
    return $tmp4172;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileOtherwise$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_o) {
    panda$collections$Array* children4175;
    panda$collections$Array* statements4180;
    panda$collections$Iterator* s$Iter4183;
    org$pandalanguage$pandac$ASTNode* s4195;
    org$pandalanguage$pandac$IRNode* statement4200;
    panda$core$Bit $tmp4174 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_o->kind, ((panda$core$Int64) { 127 }));
    PANDA_ASSERT($tmp4174.value);
    panda$collections$Array* $tmp4176 = (panda$collections$Array*) malloc(40);
    $tmp4176->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4176->refCount.value = 1;
    panda$collections$Array$init($tmp4176);
    children4175 = $tmp4176;
    org$pandalanguage$pandac$SymbolTable* $tmp4178 = (org$pandalanguage$pandac$SymbolTable*) malloc(48);
    $tmp4178->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp4178->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp4178, self->symbolTable);
    self->symbolTable = $tmp4178;
    panda$collections$Array* $tmp4181 = (panda$collections$Array*) malloc(40);
    $tmp4181->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4181->refCount.value = 1;
    panda$collections$Array$init($tmp4181);
    statements4180 = $tmp4181;
    {
        ITable* $tmp4184 = ((panda$collections$Iterable*) p_o->children)->$class->itable;
        while ($tmp4184->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4184 = $tmp4184->next;
        }
        $fn4186 $tmp4185 = $tmp4184->methods[0];
        panda$collections$Iterator* $tmp4187 = $tmp4185(((panda$collections$Iterable*) p_o->children));
        s$Iter4183 = $tmp4187;
        $l4188:;
        ITable* $tmp4190 = s$Iter4183->$class->itable;
        while ($tmp4190->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4190 = $tmp4190->next;
        }
        $fn4192 $tmp4191 = $tmp4190->methods[0];
        panda$core$Bit $tmp4193 = $tmp4191(s$Iter4183);
        panda$core$Bit $tmp4194 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4193);
        if (!$tmp4194.value) goto $l4189;
        {
            ITable* $tmp4196 = s$Iter4183->$class->itable;
            while ($tmp4196->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4196 = $tmp4196->next;
            }
            $fn4198 $tmp4197 = $tmp4196->methods[1];
            panda$core$Object* $tmp4199 = $tmp4197(s$Iter4183);
            s4195 = ((org$pandalanguage$pandac$ASTNode*) $tmp4199);
            org$pandalanguage$pandac$IRNode* $tmp4201 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, s4195);
            statement4200 = $tmp4201;
            if (((panda$core$Bit) { statement4200 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(statements4180, ((panda$core$Object*) statement4200));
        }
        goto $l4188;
        $l4189:;
    }
    panda$core$Object* $tmp4202 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->symbolTable->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp4202);
    org$pandalanguage$pandac$IRNode* $tmp4203 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4203->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4203->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4203, ((panda$core$Int64) { 1000 }), p_o->position, ((panda$collections$ListView*) statements4180));
    panda$collections$Array$add$panda$collections$Array$T(children4175, ((panda$core$Object*) $tmp4203));
    org$pandalanguage$pandac$IRNode* $tmp4205 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4205->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4205->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4205, ((panda$core$Int64) { 1043 }), p_o->position, ((panda$collections$ListView*) children4175));
    return $tmp4205;
}
panda$core$Bit org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    org$pandalanguage$pandac$FieldDecl* f4214;
    org$pandalanguage$pandac$Variable* v4223;
    switch (p_expr->kind.value) {
        case 1004:
        {
            return ((panda$core$Bit) { true });
        }
        break;
        case 1010:
        {
            panda$core$Bit $tmp4208 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_expr->type);
            bool $tmp4207 = $tmp4208.value;
            if (!$tmp4207) goto $l4209;
            panda$core$Object* $tmp4210 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp4211 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$IRNode*) $tmp4210)->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp4212 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp4211));
            $tmp4207 = $tmp4212.value;
            $l4209:;
            panda$core$Bit $tmp4213 = { $tmp4207 };
            return $tmp4213;
        }
        break;
        case 1026:
        {
            f4214 = ((org$pandalanguage$pandac$FieldDecl*) p_expr->payload);
            PANDA_ASSERT(f4214->resolved.value);
            panda$core$Bit $tmp4217 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(f4214->fieldKind, ((panda$core$Int64) { 10002 }));
            bool $tmp4216 = $tmp4217.value;
            if (!$tmp4216) goto $l4218;
            $tmp4216 = ((panda$core$Bit) { f4214->value != NULL }).value;
            $l4218:;
            panda$core$Bit $tmp4219 = { $tmp4216 };
            bool $tmp4215 = $tmp4219.value;
            if (!$tmp4215) goto $l4220;
            panda$core$Bit $tmp4221 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, f4214->value);
            $tmp4215 = $tmp4221.value;
            $l4220:;
            panda$core$Bit $tmp4222 = { $tmp4215 };
            return $tmp4222;
        }
        break;
        case 1016:
        {
            v4223 = ((org$pandalanguage$pandac$Variable*) p_expr->payload);
            panda$core$Bit $tmp4225 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(v4223->varKind, ((panda$core$Int64) { 10001 }));
            bool $tmp4224 = $tmp4225.value;
            if ($tmp4224) goto $l4226;
            panda$core$Bit $tmp4229 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(v4223->varKind, ((panda$core$Int64) { 10002 }));
            bool $tmp4228 = $tmp4229.value;
            if (!$tmp4228) goto $l4230;
            $tmp4228 = ((panda$core$Bit) { v4223->initialValue != NULL }).value;
            $l4230:;
            panda$core$Bit $tmp4231 = { $tmp4228 };
            bool $tmp4227 = $tmp4231.value;
            if (!$tmp4227) goto $l4232;
            panda$core$Bit $tmp4233 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, v4223->initialValue);
            $tmp4227 = $tmp4233.value;
            $l4232:;
            panda$core$Bit $tmp4234 = { $tmp4227 };
            $tmp4224 = $tmp4234.value;
            $l4226:;
            panda$core$Bit $tmp4235 = { $tmp4224 };
            return $tmp4235;
        }
        break;
        default:
        {
            return ((panda$core$Bit) { false });
        }
    }
}
panda$core$UInt64 org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    org$pandalanguage$pandac$FieldDecl* f4240;
    org$pandalanguage$pandac$Variable* v4242;
    panda$core$Bit $tmp4236 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, p_expr);
    PANDA_ASSERT($tmp4236.value);
    switch (p_expr->kind.value) {
        case 1004:
        {
            return ((panda$core$UInt64$wrapper*) p_expr->payload)->value;
        }
        break;
        case 1010:
        {
            panda$core$Object* $tmp4237 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp4238 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$IRNode*) $tmp4237)->children, ((panda$core$Int64) { 0 }));
            panda$core$UInt64 $tmp4239 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self, ((org$pandalanguage$pandac$IRNode*) $tmp4238));
            return $tmp4239;
        }
        break;
        case 1026:
        {
            f4240 = ((org$pandalanguage$pandac$FieldDecl*) p_expr->payload);
            panda$core$UInt64 $tmp4241 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self, f4240->value);
            return $tmp4241;
        }
        break;
        case 1016:
        {
            v4242 = ((org$pandalanguage$pandac$Variable*) p_expr->payload);
            panda$core$UInt64 $tmp4243 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self, v4242->initialValue);
            return $tmp4243;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileMatch$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_m) {
    org$pandalanguage$pandac$IRNode* value4247;
    panda$collections$Array* children4254;
    panda$collections$Iterator* rawWhen$Iter4257;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp4258;
    org$pandalanguage$pandac$ASTNode* rawWhen4271;
    org$pandalanguage$pandac$IRNode* o4277;
    org$pandalanguage$pandac$IRNode* w4279;
    panda$core$Bit $tmp4244 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->kind, ((panda$core$Int64) { 125 }));
    PANDA_ASSERT($tmp4244.value);
    panda$core$Int64 $tmp4245 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
    panda$core$Bit $tmp4246 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp4245, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4246.value);
    panda$core$Object* $tmp4248 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp4249 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4248));
    org$pandalanguage$pandac$IRNode* $tmp4250 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp4249);
    value4247 = $tmp4250;
    if (((panda$core$Bit) { value4247 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp4251 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(value4247->type);
    panda$core$Bit $tmp4252 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4251);
    if ($tmp4252.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp4253 = org$pandalanguage$pandac$Compiler$compileChainedIfMatch$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_m, value4247);
        return $tmp4253;
    }
    }
    panda$collections$Array* $tmp4255 = (panda$collections$Array*) malloc(40);
    $tmp4255->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4255->refCount.value = 1;
    panda$collections$Array$init($tmp4255);
    children4254 = $tmp4255;
    panda$collections$Array$add$panda$collections$Array$T(children4254, ((panda$core$Object*) value4247));
    {
        panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp4258, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
        panda$collections$ImmutableArray* $tmp4259 = panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(p_m->children, $tmp4258);
        ITable* $tmp4260 = ((panda$collections$Iterable*) $tmp4259)->$class->itable;
        while ($tmp4260->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4260 = $tmp4260->next;
        }
        $fn4262 $tmp4261 = $tmp4260->methods[0];
        panda$collections$Iterator* $tmp4263 = $tmp4261(((panda$collections$Iterable*) $tmp4259));
        rawWhen$Iter4257 = $tmp4263;
        $l4264:;
        ITable* $tmp4266 = rawWhen$Iter4257->$class->itable;
        while ($tmp4266->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4266 = $tmp4266->next;
        }
        $fn4268 $tmp4267 = $tmp4266->methods[0];
        panda$core$Bit $tmp4269 = $tmp4267(rawWhen$Iter4257);
        panda$core$Bit $tmp4270 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4269);
        if (!$tmp4270.value) goto $l4265;
        {
            ITable* $tmp4272 = rawWhen$Iter4257->$class->itable;
            while ($tmp4272->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4272 = $tmp4272->next;
            }
            $fn4274 $tmp4273 = $tmp4272->methods[1];
            panda$core$Object* $tmp4275 = $tmp4273(rawWhen$Iter4257);
            rawWhen4271 = ((org$pandalanguage$pandac$ASTNode*) $tmp4275);
            panda$core$Bit $tmp4276 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(rawWhen4271->kind, ((panda$core$Int64) { 127 }));
            if ($tmp4276.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp4278 = org$pandalanguage$pandac$Compiler$compileOtherwise$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, rawWhen4271);
                o4277 = $tmp4278;
                if (((panda$core$Bit) { o4277 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children4254, ((panda$core$Object*) o4277));
                goto $l4264;
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp4280 = org$pandalanguage$pandac$Compiler$compileWhen$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, value4247->type, rawWhen4271);
            w4279 = $tmp4280;
            if (((panda$core$Bit) { w4279 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$Object* $tmp4281 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(w4279->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp4282 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp4281));
            panda$core$Bit $tmp4283 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4282);
            if ($tmp4283.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp4284 = org$pandalanguage$pandac$Compiler$compileChainedIfMatch$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_m, value4247);
                return $tmp4284;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children4254, ((panda$core$Object*) w4279));
        }
        goto $l4264;
        $l4265:;
    }
    org$pandalanguage$pandac$IRNode* $tmp4285 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4285->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4285->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4285, ((panda$core$Int64) { 1042 }), p_m->position, ((panda$collections$ListView*) children4254));
    return $tmp4285;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$IRNode* result4300;
    switch (p_s->kind.value) {
        case 123:
        {
            org$pandalanguage$pandac$IRNode* $tmp4287 = org$pandalanguage$pandac$Compiler$compileAssert$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4287;
        }
        break;
        case 103:
        {
            org$pandalanguage$pandac$IRNode* $tmp4288 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            org$pandalanguage$pandac$IRNode* $tmp4289 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp4288);
            return $tmp4289;
        }
        break;
        case 126:
        {
            org$pandalanguage$pandac$IRNode* $tmp4290 = org$pandalanguage$pandac$Compiler$compileBlock$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4290;
        }
        break;
        case 118:
        {
            org$pandalanguage$pandac$IRNode* $tmp4291 = org$pandalanguage$pandac$Compiler$compileIf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4291;
        }
        break;
        case 119:
        {
            org$pandalanguage$pandac$IRNode* $tmp4292 = org$pandalanguage$pandac$Compiler$compileFor$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4292;
        }
        break;
        case 121:
        {
            org$pandalanguage$pandac$IRNode* $tmp4293 = org$pandalanguage$pandac$Compiler$compileWhile$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4293;
        }
        break;
        case 120:
        {
            org$pandalanguage$pandac$IRNode* $tmp4294 = org$pandalanguage$pandac$Compiler$compileDo$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4294;
        }
        break;
        case 122:
        {
            org$pandalanguage$pandac$IRNode* $tmp4295 = org$pandalanguage$pandac$Compiler$compileLoop$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4295;
        }
        break;
        case 125:
        {
            org$pandalanguage$pandac$IRNode* $tmp4296 = org$pandalanguage$pandac$Compiler$compileMatch$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4296;
        }
        break;
        case 134:
        {
            org$pandalanguage$pandac$IRNode* $tmp4297 = org$pandalanguage$pandac$Compiler$compileBreak$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4297;
        }
        break;
        case 135:
        {
            org$pandalanguage$pandac$IRNode* $tmp4298 = org$pandalanguage$pandac$Compiler$compileContinue$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4298;
        }
        break;
        case 136:
        {
            org$pandalanguage$pandac$IRNode* $tmp4299 = org$pandalanguage$pandac$Compiler$compileReturn$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4299;
        }
        break;
        case 107:
        {
            org$pandalanguage$pandac$IRNode* $tmp4301 = org$pandalanguage$pandac$Compiler$compileCall$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            org$pandalanguage$pandac$IRNode* $tmp4302 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp4301);
            result4300 = $tmp4302;
            if (((panda$core$Bit) { result4300 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp4303 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self, result4300);
                result4300 = $tmp4303;
            }
            }
            return result4300;
        }
        break;
        case 130:
        case 131:
        case 132:
        case 133:
        {
            org$pandalanguage$pandac$IRNode* $tmp4304 = org$pandalanguage$pandac$Compiler$compileVar$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4304;
        }
        break;
    }
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBody$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$SymbolTable* old4305;
    org$pandalanguage$pandac$SymbolTable* symbols4307;
    panda$collections$Iterator* p$Iter4310;
    org$pandalanguage$pandac$MethodDecl$Parameter* p4322;
    panda$collections$Array* fieldInitializers4329;
    panda$collections$Iterator* f$Iter4333;
    org$pandalanguage$pandac$FieldDecl* f4346;
    panda$collections$Array* children4356;
    org$pandalanguage$pandac$IRNode* fieldRef4363;
    org$pandalanguage$pandac$IRNode* compiled4368;
    panda$collections$Array* children4370;
    if (((panda$core$Bit) { p_m->compiledBody != NULL }).value) {
    {
        return p_m->compiledBody;
    }
    }
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_m->owner));
    old4305 = self->symbolTable;
    org$pandalanguage$pandac$SymbolTable* $tmp4306 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, p_m->owner);
    self->symbolTable = $tmp4306;
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentMethod, ((panda$core$Object*) p_m));
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
    PANDA_ASSERT(((panda$core$Bit) { p_m->body != NULL }).value);
    org$pandalanguage$pandac$SymbolTable* $tmp4308 = (org$pandalanguage$pandac$SymbolTable*) malloc(48);
    $tmp4308->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp4308->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp4308, self->symbolTable);
    symbols4307 = $tmp4308;
    {
        ITable* $tmp4311 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp4311->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4311 = $tmp4311->next;
        }
        $fn4313 $tmp4312 = $tmp4311->methods[0];
        panda$collections$Iterator* $tmp4314 = $tmp4312(((panda$collections$Iterable*) p_m->parameters));
        p$Iter4310 = $tmp4314;
        $l4315:;
        ITable* $tmp4317 = p$Iter4310->$class->itable;
        while ($tmp4317->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4317 = $tmp4317->next;
        }
        $fn4319 $tmp4318 = $tmp4317->methods[0];
        panda$core$Bit $tmp4320 = $tmp4318(p$Iter4310);
        panda$core$Bit $tmp4321 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4320);
        if (!$tmp4321.value) goto $l4316;
        {
            ITable* $tmp4323 = p$Iter4310->$class->itable;
            while ($tmp4323->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4323 = $tmp4323->next;
            }
            $fn4325 $tmp4324 = $tmp4323->methods[1];
            panda$core$Object* $tmp4326 = $tmp4324(p$Iter4310);
            p4322 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp4326);
            org$pandalanguage$pandac$Variable* $tmp4327 = (org$pandalanguage$pandac$Variable*) malloc(88);
            $tmp4327->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
            $tmp4327->refCount.value = 1;
            org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Int64($tmp4327, ((org$pandalanguage$pandac$Symbol*) p_m)->position, ((panda$core$Int64) { 10001 }), p4322->name, p4322->type, ((panda$core$Int64) { 1820 }));
            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(symbols4307, ((org$pandalanguage$pandac$Symbol*) $tmp4327));
        }
        goto $l4315;
        $l4316:;
    }
    self->symbolTable = symbols4307;
    fieldInitializers4329 = NULL;
    panda$core$Bit $tmp4330 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 59 }));
    if ($tmp4330.value) {
    {
        panda$collections$Array* $tmp4331 = (panda$collections$Array*) malloc(40);
        $tmp4331->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp4331->refCount.value = 1;
        panda$collections$Array$init($tmp4331);
        fieldInitializers4329 = $tmp4331;
        {
            panda$core$Object* $tmp4334 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
            ITable* $tmp4335 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ClassDecl*) $tmp4334)->fields)->$class->itable;
            while ($tmp4335->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp4335 = $tmp4335->next;
            }
            $fn4337 $tmp4336 = $tmp4335->methods[0];
            panda$collections$Iterator* $tmp4338 = $tmp4336(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ClassDecl*) $tmp4334)->fields));
            f$Iter4333 = $tmp4338;
            $l4339:;
            ITable* $tmp4341 = f$Iter4333->$class->itable;
            while ($tmp4341->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4341 = $tmp4341->next;
            }
            $fn4343 $tmp4342 = $tmp4341->methods[0];
            panda$core$Bit $tmp4344 = $tmp4342(f$Iter4333);
            panda$core$Bit $tmp4345 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4344);
            if (!$tmp4345.value) goto $l4340;
            {
                ITable* $tmp4347 = f$Iter4333->$class->itable;
                while ($tmp4347->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp4347 = $tmp4347->next;
                }
                $fn4349 $tmp4348 = $tmp4347->methods[1];
                panda$core$Object* $tmp4350 = $tmp4348(f$Iter4333);
                f4346 = ((org$pandalanguage$pandac$FieldDecl*) $tmp4350);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self, f4346);
                panda$core$Bit $tmp4352 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(f4346->annotations);
                panda$core$Bit $tmp4353 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4352);
                bool $tmp4351 = $tmp4353.value;
                if (!$tmp4351) goto $l4354;
                $tmp4351 = ((panda$core$Bit) { f4346->value != NULL }).value;
                $l4354:;
                panda$core$Bit $tmp4355 = { $tmp4351 };
                if ($tmp4355.value) {
                {
                    panda$collections$Array* $tmp4357 = (panda$collections$Array*) malloc(40);
                    $tmp4357->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp4357->refCount.value = 1;
                    panda$collections$Array$init($tmp4357);
                    children4356 = $tmp4357;
                    org$pandalanguage$pandac$IRNode* $tmp4359 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp4359->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp4359->refCount.value = 1;
                    panda$core$Object* $tmp4361 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
                    org$pandalanguage$pandac$Type* $tmp4362 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp4361));
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp4359, ((panda$core$Int64) { 1025 }), ((org$pandalanguage$pandac$Symbol*) p_m)->position, $tmp4362);
                    panda$collections$Array$add$panda$collections$Array$T(children4356, ((panda$core$Object*) $tmp4359));
                    org$pandalanguage$pandac$IRNode* $tmp4364 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp4364->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp4364->refCount.value = 1;
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp4364, ((panda$core$Int64) { 1026 }), ((org$pandalanguage$pandac$Symbol*) p_m)->position, f4346->type, ((panda$core$Object*) f4346), ((panda$collections$ListView*) children4356));
                    fieldRef4363 = $tmp4364;
                    panda$collections$Array$clear(children4356);
                    panda$collections$Array$add$panda$collections$Array$T(children4356, ((panda$core$Object*) fieldRef4363));
                    panda$collections$Array$add$panda$collections$Array$T(children4356, ((panda$core$Object*) f4346->value));
                    org$pandalanguage$pandac$IRNode* $tmp4366 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp4366->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp4366->refCount.value = 1;
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4366, ((panda$core$Int64) { 1023 }), ((org$pandalanguage$pandac$Symbol*) f4346)->position, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 73 }))), ((panda$collections$ListView*) children4356));
                    panda$collections$Array$add$panda$collections$Array$T(fieldInitializers4329, ((panda$core$Object*) $tmp4366));
                }
                }
            }
            goto $l4339;
            $l4340:;
        }
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp4369 = org$pandalanguage$pandac$Compiler$compileBlock$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_m->body);
    compiled4368 = $tmp4369;
    if (((panda$core$Bit) { compiled4368 != NULL }).value) {
    {
        if (((panda$core$Bit) { fieldInitializers4329 != NULL }).value) {
        {
            panda$collections$Array* $tmp4371 = (panda$collections$Array*) malloc(40);
            $tmp4371->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp4371->refCount.value = 1;
            panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp4371, ((panda$collections$ListView*) fieldInitializers4329));
            children4370 = $tmp4371;
            panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(children4370, ((panda$collections$CollectionView*) compiled4368->children));
            org$pandalanguage$pandac$IRNode* $tmp4373 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp4373->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp4373->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4373, ((panda$core$Int64) { 1000 }), p_m->body->position, ((panda$collections$ListView*) children4370));
            compiled4368 = $tmp4373;
        }
        }
    }
    }
    PANDA_ASSERT(((panda$core$Bit) { ((panda$core$Object*) self->symbolTable) == ((panda$core$Object*) symbols4307) }).value);
    self->symbolTable = old4305;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentMethod);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    panda$core$Bit $tmp4375 = org$pandalanguage$pandac$Annotations$isInline$R$panda$core$Bit(p_m->annotations);
    if ($tmp4375.value) {
    {
        p_m->compiledBody = compiled4368;
    }
    }
    return compiled4368;
}
void org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$IRNode* compiled4376;
    if (((panda$core$Bit) { p_m->body != NULL }).value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp4377 = org$pandalanguage$pandac$Compiler$compileBody$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$IRNode$Q(self, p_m);
        compiled4376 = $tmp4377;
        if (((panda$core$Bit) { compiled4376 != NULL }).value) {
        {
            ITable* $tmp4378 = self->codeGenerator->$class->itable;
            while ($tmp4378->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
                $tmp4378 = $tmp4378->next;
            }
            $fn4380 $tmp4379 = $tmp4378->methods[3];
            $tmp4379(self->codeGenerator, p_m, compiled4376);
        }
        }
    }
    }
    else {
    {
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
        ITable* $tmp4381 = self->codeGenerator->$class->itable;
        while ($tmp4381->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
            $tmp4381 = $tmp4381->next;
        }
        $fn4383 $tmp4382 = $tmp4381->methods[2];
        $tmp4382(self->codeGenerator, p_m);
    }
    }
}
void org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Iterator* inner$Iter4384;
    org$pandalanguage$pandac$ClassDecl* inner4396;
    p_cl->external = ((panda$core$Bit) { false });
    {
        ITable* $tmp4385 = ((panda$collections$Iterable*) p_cl->classes)->$class->itable;
        while ($tmp4385->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4385 = $tmp4385->next;
        }
        $fn4387 $tmp4386 = $tmp4385->methods[0];
        panda$collections$Iterator* $tmp4388 = $tmp4386(((panda$collections$Iterable*) p_cl->classes));
        inner$Iter4384 = $tmp4388;
        $l4389:;
        ITable* $tmp4391 = inner$Iter4384->$class->itable;
        while ($tmp4391->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4391 = $tmp4391->next;
        }
        $fn4393 $tmp4392 = $tmp4391->methods[0];
        panda$core$Bit $tmp4394 = $tmp4392(inner$Iter4384);
        panda$core$Bit $tmp4395 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4394);
        if (!$tmp4395.value) goto $l4390;
        {
            ITable* $tmp4397 = inner$Iter4384->$class->itable;
            while ($tmp4397->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4397 = $tmp4397->next;
            }
            $fn4399 $tmp4398 = $tmp4397->methods[1];
            panda$core$Object* $tmp4400 = $tmp4398(inner$Iter4384);
            inner4396 = ((org$pandalanguage$pandac$ClassDecl*) $tmp4400);
            org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl(self, inner4396);
        }
        goto $l4389;
        $l4390:;
    }
}
void org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$SymbolTable* old4408;
    panda$collections$Iterator* m$Iter4413;
    org$pandalanguage$pandac$MethodDecl* m4425;
    org$pandalanguage$pandac$ClassDecl* next4435;
    PANDA_ASSERT(((panda$core$Bit) { self->compiling == NULL }).value);
    self->compiling = p_cl;
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_cl));
    org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl(self, p_cl);
    panda$core$Bit $tmp4401 = org$pandalanguage$pandac$Annotations$isSpecialize$R$panda$core$Bit(p_cl->annotations);
    if ($tmp4401.value) {
    {
        ITable* $tmp4402 = self->codeGenerator->$class->itable;
        while ($tmp4402->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
            $tmp4402 = $tmp4402->next;
        }
        $fn4404 $tmp4403 = $tmp4402->methods[1];
        $tmp4403(self->codeGenerator, p_cl);
        ITable* $tmp4405 = self->codeGenerator->$class->itable;
        while ($tmp4405->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
            $tmp4405 = $tmp4405->next;
        }
        $fn4407 $tmp4406 = $tmp4405->methods[4];
        $tmp4406(self->codeGenerator, p_cl);
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
        return;
    }
    }
    old4408 = self->symbolTable;
    org$pandalanguage$pandac$SymbolTable* $tmp4409 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, p_cl);
    self->symbolTable = $tmp4409;
    ITable* $tmp4410 = self->codeGenerator->$class->itable;
    while ($tmp4410->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
        $tmp4410 = $tmp4410->next;
    }
    $fn4412 $tmp4411 = $tmp4410->methods[1];
    $tmp4411(self->codeGenerator, p_cl);
    {
        ITable* $tmp4414 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
        while ($tmp4414->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4414 = $tmp4414->next;
        }
        $fn4416 $tmp4415 = $tmp4414->methods[0];
        panda$collections$Iterator* $tmp4417 = $tmp4415(((panda$collections$Iterable*) p_cl->methods));
        m$Iter4413 = $tmp4417;
        $l4418:;
        ITable* $tmp4420 = m$Iter4413->$class->itable;
        while ($tmp4420->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4420 = $tmp4420->next;
        }
        $fn4422 $tmp4421 = $tmp4420->methods[0];
        panda$core$Bit $tmp4423 = $tmp4421(m$Iter4413);
        panda$core$Bit $tmp4424 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4423);
        if (!$tmp4424.value) goto $l4419;
        {
            ITable* $tmp4426 = m$Iter4413->$class->itable;
            while ($tmp4426->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4426 = $tmp4426->next;
            }
            $fn4428 $tmp4427 = $tmp4426->methods[1];
            panda$core$Object* $tmp4429 = $tmp4427(m$Iter4413);
            m4425 = ((org$pandalanguage$pandac$MethodDecl*) $tmp4429);
            org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$MethodDecl(self, m4425);
        }
        goto $l4418;
        $l4419:;
    }
    ITable* $tmp4430 = self->codeGenerator->$class->itable;
    while ($tmp4430->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
        $tmp4430 = $tmp4430->next;
    }
    $fn4432 $tmp4431 = $tmp4430->methods[4];
    $tmp4431(self->codeGenerator, p_cl);
    self->symbolTable = old4408;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    self->compiling = NULL;
    panda$core$Int64 $tmp4433 = panda$collections$Array$get_count$R$panda$core$Int64(self->compilationQueue);
    panda$core$Bit $tmp4434 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp4433, ((panda$core$Int64) { 0 }));
    if ($tmp4434.value) {
    {
        panda$core$Object* $tmp4436 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->compilationQueue, ((panda$core$Int64) { 0 }));
        next4435 = ((org$pandalanguage$pandac$ClassDecl*) $tmp4436);
        panda$collections$Array$removeIndex$panda$core$Int64(self->compilationQueue, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$ClassDecl(self, next4435);
    }
    }
    panda$core$Int64 $tmp4437 = panda$collections$Array$get_count$R$panda$core$Int64(self->compilationQueue);
    panda$core$Bit $tmp4438 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4437, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp4438.value);
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Compiler* self, panda$io$File* p_file) {
    panda$collections$ListView* result4439;
    org$pandalanguage$pandac$ASTNode* parsed4443;
    panda$collections$Iterator* cl$Iter4447;
    org$pandalanguage$pandac$ClassDecl* cl4459;
    panda$core$Object* $tmp4440 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->scans, ((panda$collections$Key*) p_file));
    result4439 = ((panda$collections$ListView*) $tmp4440);
    if (((panda$core$Bit) { result4439 == NULL }).value) {
    {
        panda$core$String* $tmp4441 = panda$io$File$readFully$R$panda$core$String(p_file);
        (($fn4442) self->parser->$class->vtable[2])(self->parser, p_file, $tmp4441);
        org$pandalanguage$pandac$ASTNode* $tmp4445 = (($fn4444) self->parser->$class->vtable[67])(self->parser);
        parsed4443 = $tmp4445;
        if (((panda$core$Bit) { parsed4443 != NULL }).value) {
        {
            panda$collections$ListView* $tmp4446 = org$pandalanguage$pandac$Scanner$scan$panda$io$File$org$pandalanguage$pandac$ASTNode$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(self->scanner, p_file, parsed4443);
            result4439 = $tmp4446;
            {
                ITable* $tmp4448 = ((panda$collections$Iterable*) result4439)->$class->itable;
                while ($tmp4448->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp4448 = $tmp4448->next;
                }
                $fn4450 $tmp4449 = $tmp4448->methods[0];
                panda$collections$Iterator* $tmp4451 = $tmp4449(((panda$collections$Iterable*) result4439));
                cl$Iter4447 = $tmp4451;
                $l4452:;
                ITable* $tmp4454 = cl$Iter4447->$class->itable;
                while ($tmp4454->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp4454 = $tmp4454->next;
                }
                $fn4456 $tmp4455 = $tmp4454->methods[0];
                panda$core$Bit $tmp4457 = $tmp4455(cl$Iter4447);
                panda$core$Bit $tmp4458 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4457);
                if (!$tmp4458.value) goto $l4453;
                {
                    ITable* $tmp4460 = cl$Iter4447->$class->itable;
                    while ($tmp4460->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp4460 = $tmp4460->next;
                    }
                    $fn4462 $tmp4461 = $tmp4460->methods[1];
                    panda$core$Object* $tmp4463 = $tmp4461(cl$Iter4447);
                    cl4459 = ((org$pandalanguage$pandac$ClassDecl*) $tmp4463);
                    panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classes, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) cl4459)->name), ((panda$core$Object*) cl4459));
                }
                goto $l4452;
                $l4453:;
            }
        }
        }
        else {
        {
            panda$collections$Array* $tmp4464 = (panda$collections$Array*) malloc(40);
            $tmp4464->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp4464->refCount.value = 1;
            panda$collections$Array$init($tmp4464);
            result4439 = ((panda$collections$ListView*) $tmp4464);
        }
        }
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->scans, ((panda$collections$Key*) p_file), ((panda$core$Object*) result4439));
    }
    }
    return result4439;
}
void org$pandalanguage$pandac$Compiler$compile$panda$io$File(org$pandalanguage$pandac$Compiler* self, panda$io$File* p_file) {
    panda$collections$ListView* classes4466;
    panda$collections$Iterator* cl$Iter4468;
    org$pandalanguage$pandac$ClassDecl* cl4480;
    panda$collections$ListView* $tmp4467 = org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(self, p_file);
    classes4466 = $tmp4467;
    {
        ITable* $tmp4469 = ((panda$collections$Iterable*) classes4466)->$class->itable;
        while ($tmp4469->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4469 = $tmp4469->next;
        }
        $fn4471 $tmp4470 = $tmp4469->methods[0];
        panda$collections$Iterator* $tmp4472 = $tmp4470(((panda$collections$Iterable*) classes4466));
        cl$Iter4468 = $tmp4472;
        $l4473:;
        ITable* $tmp4475 = cl$Iter4468->$class->itable;
        while ($tmp4475->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4475 = $tmp4475->next;
        }
        $fn4477 $tmp4476 = $tmp4475->methods[0];
        panda$core$Bit $tmp4478 = $tmp4476(cl$Iter4468);
        panda$core$Bit $tmp4479 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4478);
        if (!$tmp4479.value) goto $l4474;
        {
            ITable* $tmp4481 = cl$Iter4468->$class->itable;
            while ($tmp4481->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4481 = $tmp4481->next;
            }
            $fn4483 $tmp4482 = $tmp4481->methods[1];
            panda$core$Object* $tmp4484 = $tmp4482(cl$Iter4468);
            cl4480 = ((org$pandalanguage$pandac$ClassDecl*) $tmp4484);
            org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$ClassDecl(self, cl4480);
        }
        goto $l4473;
        $l4474:;
    }
}
void org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, panda$core$String* p_msg) {
    panda$core$Object* $tmp4485 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
    org$pandalanguage$pandac$Compiler$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$ClassDecl*) $tmp4485)->source, p_position, p_msg);
}
void org$pandalanguage$pandac$Compiler$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$Compiler* self, panda$io$File* p_file, org$pandalanguage$pandac$Position p_pos, panda$core$String* p_msg) {
    if (self->reportErrors.value) {
    {
        panda$core$Int64 $tmp4486 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->errorCount, ((panda$core$Int64) { 1 }));
        self->errorCount = $tmp4486;
        panda$core$String* $tmp4487 = panda$io$File$name$R$panda$core$String(p_file);
        panda$core$String* $tmp4488 = panda$core$String$convert$R$panda$core$String($tmp4487);
        panda$core$String* $tmp4490 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4488, &$s4489);
        panda$core$String* $tmp4491 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp4490, ((panda$core$Object*) wrap_org$pandalanguage$pandac$Position(p_pos)));
        panda$core$String* $tmp4493 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4491, &$s4492);
        panda$core$String* $tmp4494 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4493, p_msg);
        panda$core$String* $tmp4496 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4494, &$s4495);
        panda$io$Console$printLine$panda$core$Object(((panda$core$Object*) $tmp4496));
    }
    }
}
void org$pandalanguage$pandac$Compiler$finish(org$pandalanguage$pandac$Compiler* self) {
    ITable* $tmp4497 = self->codeGenerator->$class->itable;
    while ($tmp4497->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
        $tmp4497 = $tmp4497->next;
    }
    $fn4499 $tmp4498 = $tmp4497->methods[5];
    $tmp4498(self->codeGenerator);
}

