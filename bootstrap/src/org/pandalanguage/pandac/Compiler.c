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
#include "panda/core/Range.LTpanda/core/String/Index.Q.GT.h"
#include "panda/core/String/Index.h"
#include "panda/collections/MapView.h"
#include "panda/collections/CollectionView.h"
#include "panda/collections/List.h"
#include "panda/collections/ListView.h"
#include "panda/io/File.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "org/pandalanguage/pandac/ClassDecl/GenericParameter.h"
#include "org/pandalanguage/pandac/Position.h"
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
#include "panda/collections/Set.h"
#include "org/pandalanguage/pandac/MethodRef.h"
#include "org/pandalanguage/pandac/Methods.h"
#include "org/pandalanguage/pandac/Variable.h"
#include "panda/core/Range.LTpanda/core/Int64.Q.GT.h"
#include "org/pandalanguage/pandac/Compiler/CompileTargetResult.h"
#include "panda/io/InputStream.h"
#include "panda/core/Char8.h"
#include "panda/core/UInt8.h"


struct { panda$core$Class* cl; ITable* next; void* methods[1]; } org$pandalanguage$pandac$Compiler$_org$pandalanguage$pandac$ErrorReporter = { (panda$core$Class*) &org$pandalanguage$pandac$ErrorReporter$class, NULL, { org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String} };

org$pandalanguage$pandac$Compiler$class_type org$pandalanguage$pandac$Compiler$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &org$pandalanguage$pandac$Compiler$_org$pandalanguage$pandac$ErrorReporter, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, org$pandalanguage$pandac$Compiler$addAlias$panda$core$String, org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q, org$pandalanguage$pandac$Compiler$checkGenericParameters$panda$core$Int64$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$Type$Q, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT, org$pandalanguage$pandac$Compiler$getClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q, org$pandalanguage$pandac$Compiler$getClass$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q, org$pandalanguage$pandac$Compiler$specialize$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q, org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT, org$pandalanguage$pandac$Compiler$signatureMatch$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q, org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q, org$pandalanguage$pandac$Compiler$interfaceMethods$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT, org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable, org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT, org$pandalanguage$pandac$Compiler$addInheritedMethods$org$pandalanguage$pandac$SymbolTable$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT, org$pandalanguage$pandac$Compiler$getMethodReference$org$pandalanguage$pandac$SymbolTable$org$pandalanguage$pandac$IRNode$Q$panda$core$String$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$Compiler$symbolRef$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q, org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64, org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64, org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q, org$pandalanguage$pandac$Compiler$doCoerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$panda$core$Int64$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$Compiler$callCost$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q, org$pandalanguage$pandac$Compiler$matchMethods$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q, org$pandalanguage$pandac$Compiler$call$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$declaredTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$foldInts$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$Compiler$compileIndexedAssignment$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileBinary$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT, org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$IRNode$Q$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT, org$pandalanguage$pandac$Compiler$compilePrefix$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compilePrefix$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileCall$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileIdentifier$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileRange$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileSelf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileSuper$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileNull$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileBlock$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileIf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileRangeFor$panda$core$Int64$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileIteratorFor$panda$core$Int64$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileFor$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileWhile$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileDo$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileLoop$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q, org$pandalanguage$pandac$Compiler$compileDeclaration$org$pandalanguage$pandac$ASTNode$panda$core$Int64$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileBreak$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileContinue$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileReturn$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileAssert$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileVar$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileWhenTest$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileChainedIfWhen$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileChainedIfMatch$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileWhen$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileOtherwise$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64, org$pandalanguage$pandac$Compiler$compileMatch$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileBody$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT, org$pandalanguage$pandac$Compiler$compile$panda$io$File, org$pandalanguage$pandac$Compiler$position$panda$core$Int64$R$org$pandalanguage$pandac$Position, org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String, org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String, org$pandalanguage$pandac$Compiler$finish} };

typedef void (*$fn23)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$Compiler*);
typedef panda$core$Object* (*$fn121)(panda$collections$MapView*, panda$core$Object*);
typedef panda$core$Int64 (*$fn158)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn165)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn208)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn212)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn222)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn230)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn237)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn351)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn357)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn363)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn383)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn389)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn395)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn439)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn445)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn451)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn459)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn465)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn471)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn511)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn517)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn523)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn539)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn545)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn551)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn577)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn583)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn589)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn644)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn650)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn656)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn665)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn687)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn710)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn716)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn722)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn730)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn736)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn742)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn753)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn759)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn765)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn788)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn794)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn800)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn849)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn855)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn861)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn874)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn880)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn886)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn900)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn906)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn912)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn927)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn933)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn939)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn953)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn959)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn965)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn978)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn984)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn990)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1045)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1051)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1057)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1064)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1070)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1076)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1096)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1102)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1108)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1193)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn1258)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1264)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1270)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1296)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1302)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1308)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1425)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1431)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1437)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1565)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1571)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1577)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1624)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1630)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1636)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn1726)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn1753)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Int64 (*$fn1780)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn1797)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1803)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1809)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn1821)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn1878)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn1901)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn1977)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn1996)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2002)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2008)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2039)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2045)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2051)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2088)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2094)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2100)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2123)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2129)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2135)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2525)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2531)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2537)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2669)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2675)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2681)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn2904)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn2920)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2926)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2932)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3028)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3034)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3040)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3223)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3229)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3235)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3365)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3371)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3377)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3403)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3409)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3415)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3519)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3525)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3531)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3699)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3705)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3711)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3789)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3795)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3801)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3862)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3868)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3874)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3938)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3944)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3950)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3989)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3995)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4001)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4013)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4019)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4025)(panda$collections$Iterator*);
typedef void (*$fn4058)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$MethodDecl*, org$pandalanguage$pandac$IRNode*);
typedef void (*$fn4061)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$collections$Iterator* (*$fn4065)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4071)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4077)(panda$collections$Iterator*);
typedef void (*$fn4082)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn4085)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn4090)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$collections$Iterator* (*$fn4094)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4100)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4106)(panda$collections$Iterator*);
typedef void (*$fn4110)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn4121)(org$pandalanguage$pandac$parser$Parser*, panda$core$String*, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn4123)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$collections$Iterator* (*$fn4129)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4135)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4141)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4150)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4156)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4162)(panda$collections$Iterator*);
typedef panda$core$Char8$nullable (*$fn4189)(panda$io$InputStream*);
typedef void (*$fn4211)(panda$core$Object*);
typedef void (*$fn4227)(org$pandalanguage$pandac$CodeGenerator*);

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
static panda$core$String $s55 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x41\x72\x72\x61\x79", 23, 1 };
static panda$core$String $s56 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x43\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E", 28, 1 };
static panda$core$String $s57 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x43\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x56\x69\x65\x77", 32, 1 };
static panda$core$String $s58 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x43\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x57\x72\x69\x74\x65\x72", 34, 1 };
static panda$core$String $s59 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x49\x64\x65\x6E\x74\x69\x74\x79\x4D\x61\x70", 29, 1 };
static panda$core$String $s60 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x49\x6D\x6D\x75\x74\x61\x62\x6C\x65\x41\x72\x72\x61\x79", 32, 1 };
static panda$core$String $s61 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x49\x74\x65\x72\x61\x62\x6C\x65", 26, 1 };
static panda$core$String $s62 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x49\x74\x65\x72\x61\x74\x6F\x72", 26, 1 };
static panda$core$String $s63 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x4B\x65\x79", 21, 1 };
static panda$core$String $s64 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x4C\x69\x73\x74", 22, 1 };
static panda$core$String $s65 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x4C\x69\x73\x74\x56\x69\x65\x77", 26, 1 };
static panda$core$String $s66 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x4C\x69\x73\x74\x57\x72\x69\x74\x65\x72", 28, 1 };
static panda$core$String $s67 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x48\x61\x73\x68\x4D\x61\x70", 25, 1 };
static panda$core$String $s68 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x4D\x61\x70", 21, 1 };
static panda$core$String $s69 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x4D\x61\x70\x56\x69\x65\x77", 25, 1 };
static panda$core$String $s70 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x4D\x61\x70\x57\x72\x69\x74\x65\x72", 27, 1 };
static panda$core$String $s71 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x53\x65\x74", 21, 1 };
static panda$core$String $s72 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x53\x74\x61\x63\x6B", 23, 1 };
static panda$core$String $s73 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x43\x6C\x61\x73\x73", 16, 1 };
static panda$core$String $s74 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x42\x69\x74", 14, 1 };
static panda$core$String $s75 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x43\x68\x61\x72\x38", 16, 1 };
static panda$core$String $s76 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x43\x68\x61\x72\x31\x36", 17, 1 };
static panda$core$String $s77 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x43\x68\x61\x72\x33\x32", 17, 1 };
static panda$core$String $s78 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x43\x6F\x6D\x70\x61\x72\x61\x62\x6C\x65", 21, 1 };
static panda$core$String $s79 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x45\x71\x75\x61\x74\x61\x62\x6C\x65", 20, 1 };
static panda$core$String $s80 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74\x38", 15, 1 };
static panda$core$String $s81 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74\x31\x36", 16, 1 };
static panda$core$String $s82 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74\x33\x32", 16, 1 };
static panda$core$String $s83 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74\x36\x34", 16, 1 };
static panda$core$String $s84 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6D\x6D\x75\x74\x61\x62\x6C\x65", 20, 1 };
static panda$core$String $s85 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x4D\x75\x74\x61\x62\x6C\x65\x53\x74\x72\x69\x6E\x67", 24, 1 };
static panda$core$String $s86 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x4F\x62\x6A\x65\x63\x74", 17, 1 };
static panda$core$String $s87 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x50\x61\x6E\x64\x61", 16, 1 };
static panda$core$String $s88 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x52\x61\x6E\x67\x65", 16, 1 };
static panda$core$String $s89 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x53\x74\x72\x69\x6E\x67", 17, 1 };
static panda$core$String $s90 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x53\x79\x73\x74\x65\x6D", 17, 1 };
static panda$core$String $s91 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x55\x49\x6E\x74\x38", 16, 1 };
static panda$core$String $s92 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x55\x49\x6E\x74\x31\x36", 17, 1 };
static panda$core$String $s93 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x55\x49\x6E\x74\x33\x32", 17, 1 };
static panda$core$String $s94 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x55\x49\x6E\x74\x36\x34", 17, 1 };
static panda$core$String $s95 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x56\x61\x6C\x75\x65", 16, 1 };
static panda$core$String $s96 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x6D\x61\x74\x68\x2E\x52\x61\x6E\x64\x6F\x6D", 17, 1 };
static panda$core$String $s97 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x6D\x61\x74\x68\x2E\x58\x6F\x72\x53\x68\x69\x66\x74\x31\x32\x38\x50\x6C\x75\x73", 26, 1 };
static panda$core$String $s98 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x69\x6F\x2E\x43\x6F\x6E\x73\x6F\x6C\x65", 16, 1 };
static panda$core$String $s99 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x69\x6F\x2E\x46\x69\x6C\x65", 13, 1 };
static panda$core$String $s100 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x69\x6F\x2E\x49\x6E\x64\x65\x6E\x74\x65\x64\x4F\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6D", 29, 1 };
static panda$core$String $s101 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x69\x6F\x2E\x49\x6E\x70\x75\x74\x53\x74\x72\x65\x61\x6D", 20, 1 };
static panda$core$String $s102 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x69\x6F\x2E\x4C\x69\x6E\x65\x4E\x75\x6D\x62\x65\x72\x49\x6E\x70\x75\x74\x53\x74\x72\x65\x61\x6D", 30, 1 };
static panda$core$String $s103 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x69\x6F\x2E\x4D\x65\x6D\x6F\x72\x79\x49\x6E\x70\x75\x74\x53\x74\x72\x65\x61\x6D", 26, 1 };
static panda$core$String $s104 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x69\x6F\x2E\x4D\x65\x6D\x6F\x72\x79\x4F\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6D", 27, 1 };
static panda$core$String $s105 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x69\x6F\x2E\x4F\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6D", 21, 1 };
static panda$core$String $s106 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x69\x6F\x2E\x50\x75\x73\x68\x62\x61\x63\x6B\x49\x6E\x70\x75\x74\x53\x74\x72\x65\x61\x6D", 28, 1 };
static panda$core$String $s107 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, 1 };
static panda$core$String $s111 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
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
static panda$core$String $s270 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x6B\x6E\x6F\x77\x6E\x20\x74\x79\x70\x65\x20\x27", 14, 1 };
static panda$core$String $s272 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s285 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3F", 1, 1 };
static panda$core$String $s299 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 1 };
static panda$core$String $s301 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s325 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s337 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };
static panda$core$String $s375 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x56\x61\x6C\x75\x65", 16, 1 };
static panda$core$String $s482 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x69\x65\x6C\x64\x20\x68\x61\x73\x20\x6E\x65\x69\x74\x68\x65\x72\x20\x61\x20\x74\x79\x70\x65\x20\x6E\x6F\x72\x20\x61\x20\x76\x61\x6C\x75\x65", 36, 1 };
static panda$core$String $s486 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x6B\x6E\x6F\x77\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 18, 1 };
static panda$core$String $s487 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6D\x62\x69\x67\x75\x6F\x75\x73\x20\x6D\x65\x74\x68\x6F\x64\x20\x63\x61\x6C\x6C", 21, 1 };
static panda$core$String $s489 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x73\x75\x70\x65\x72\x27\x20\x63\x61\x6E\x20\x6F\x6E\x6C\x79\x20\x62\x65\x20\x75\x73\x65\x64\x20\x61\x73\x20\x70\x61\x72\x74\x20\x6F\x66\x20\x61\x20\x6D\x65\x74\x68\x6F\x64\x20\x63\x61\x6C\x6C", 49, 1 };
static panda$core$String $s530 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s531 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, 1 };
static panda$core$String $s533 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x70\x61\x6E\x64\x61", 6, 1 };
static panda$core$String $s558 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s568 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s569 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, 1 };
static panda$core$String $s571 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x70\x61\x6E\x64\x61", 6, 1 };
static panda$core$String $s603 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x66\x69\x6C\x65\x20\x27", 15, 1 };
static panda$core$String $s605 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x74\x6F\x20\x63\x6F\x6E\x74\x61\x69\x6E\x20\x61\x20\x63\x6C\x61\x73\x73\x20\x6E\x61\x6D\x65\x64\x20\x27", 28, 1 };
static panda$core$String $s608 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s611 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x6F\x20\x66\x69\x6C\x65\x20\x6E\x61\x6D\x65\x64\x20", 14, 1 };
static panda$core$String $s613 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x69\x6E\x20\x61\x6E\x79\x20\x69\x6D\x70\x6F\x72\x74\x20\x70\x61\x74\x68\x20\x28", 21, 1 };
static panda$core$String $s616 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s618 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x69\x6E\x74\x5F\x6C\x69\x74\x65\x72\x61\x6C", 12, 1 };
static panda$core$String $s1138 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x73\x75\x70\x65\x72\x27\x20\x63\x61\x6E\x20\x6F\x6E\x6C\x79\x20\x62\x65\x20\x75\x73\x65\x64\x20\x61\x73\x20\x70\x61\x72\x74\x20\x6F\x66\x20\x61\x20\x6D\x65\x74\x68\x6F\x64\x20\x63\x61\x6C\x6C", 49, 1 };
static panda$core$String $s1188 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s1227 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 1 };
static panda$core$String $s1599 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 1 };
static panda$core$String $s1658 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27", 10, 1 };
static panda$core$String $s1660 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 14, 1 };
static panda$core$String $s1663 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s1703 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6C\x75\x65\x20\x6F\x66\x20\x74\x79\x70\x65\x20\x27", 15, 1 };
static panda$core$String $s1705 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x70\x6F\x73\x73\x69\x62\x6C\x79\x20\x62\x65\x20\x61\x6E\x20\x69\x6E\x73\x74\x61\x6E\x63\x65\x20\x6F\x66\x20", 36, 1 };
static panda$core$String $s1707 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s1709 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s1845 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x64\x69\x72\x65\x63\x74\x6C\x79\x20\x63\x61\x6C\x6C\x20\x27\x69\x6E\x69\x74\x27\x20\x6F\x75\x74\x73\x69\x64\x65\x20\x6F\x66\x20\x61\x6E\x20\x69\x6E\x69\x74\x20\x6D\x65\x74\x68\x6F\x64", 53, 1 };
static panda$core$String $s1855 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x69\x6E\x69\x74\x27\x20\x6D\x61\x79\x20\x6F\x6E\x6C\x79\x20\x62\x65\x20\x63\x61\x6C\x6C\x65\x64\x20\x6F\x6E\x20\x27\x73\x65\x6C\x66\x27\x20\x6F\x72\x20\x27\x73\x75\x70\x65\x72\x27", 46, 1 };
static panda$core$String $s1870 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x63\x61\x6C\x6C\x20\x69\x6E\x73\x74\x61\x6E\x63\x65\x20", 21, 1 };
static panda$core$String $s1873 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x66\x72\x6F\x6D\x20\x61\x20\x40\x63\x6C\x61\x73\x73\x20\x63\x6F\x6E\x74\x65\x78\x74", 22, 1 };
static panda$core$String $s1919 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, 1 };
static panda$core$String $s1938 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6C\x61\x73\x73\x20\x27", 7, 1 };
static panda$core$String $s1940 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x64\x6F\x65\x73\x20\x6E\x6F\x74\x20\x68\x61\x76\x65\x20\x61\x20\x6D\x65\x6D\x62\x65\x72\x20\x6E\x61\x6D\x65\x64\x20\x27", 32, 1 };
static panda$core$String $s1943 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s1950 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s1952 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s1955 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x69\x73\x20\x6E\x6F\x74\x20\x61\x20\x6D\x65\x74\x68\x6F\x64", 17, 1 };
static panda$core$String $s1982 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x6F\x20\x6D\x61\x74\x63\x68\x20\x66\x6F\x72\x20\x63\x61\x6C\x6C\x20\x74\x6F\x20\x27", 22, 1 };
static panda$core$String $s1984 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s1986 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1988 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s1992 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2010 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2011 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x27", 2, 1 };
static panda$core$String $s2012 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x77\x69\x74\x68\x20\x72\x65\x74\x75\x72\x6E\x20\x74\x79\x70\x65\x20\x27", 19, 1 };
static panda$core$String $s2014 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2062 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x69\x74", 4, 1 };
static panda$core$String $s2072 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6C\x75\x65\x20\x6F\x66\x20\x74\x79\x70\x65\x20\x27", 15, 1 };
static panda$core$String $s2074 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x69\x73\x20\x6E\x6F\x74\x20\x61\x20\x6D\x65\x74\x68\x6F\x64", 17, 1 };
static panda$core$String $s2082 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s2084 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2102 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2105 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x3E\x28", 4, 1 };
static panda$core$String $s2106 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x26\x3E\x28", 5, 1 };
static panda$core$String $s2109 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s2119 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s2137 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2140 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x3E\x28", 4, 1 };
static panda$core$String $s2141 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x26\x3E\x28", 5, 1 };
static panda$core$String $s2144 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s2158 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2B", 1, 1 };
static panda$core$String $s2159 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D", 1, 1 };
static panda$core$String $s2160 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s2161 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, 1 };
static panda$core$String $s2162 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F\x2F", 2, 1 };
static panda$core$String $s2163 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 1 };
static panda$core$String $s2164 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5E", 1, 1 };
static panda$core$String $s2165 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3D", 1, 1 };
static panda$core$String $s2166 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x3D", 2, 1 };
static panda$core$String $s2167 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };
static panda$core$String $s2168 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 1 };
static panda$core$String $s2169 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E\x3D", 2, 1 };
static panda$core$String $s2170 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x3D", 2, 1 };
static panda$core$String $s2171 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1, 1 };
static panda$core$String $s2172 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C\x7C", 2, 1 };
static panda$core$String $s2173 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, 1 };
static panda$core$String $s2174 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26\x26", 2, 1 };
static panda$core$String $s2175 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7E", 1, 1 };
static panda$core$String $s2176 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7E\x7E", 2, 1 };
static panda$core$String $s2177 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21", 1, 1 };
static panda$core$String $s2178 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x21", 2, 1 };
static panda$core$String $s2179 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x3C", 2, 1 };
static panda$core$String $s2180 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E\x3E", 2, 1 };
static panda$core$String $s2181 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 1 };
static panda$core$String $s2182 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A\x3D", 2, 1 };
static panda$core$String $s2183 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3D\x3D", 2, 1 };
static panda$core$String $s2184 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x3D\x3D", 3, 1 };
static panda$core$String $s2295 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x76\x61\x6C\x69\x64\x20\x6E\x75\x6D\x65\x72\x69\x63\x20\x6F\x70\x65\x72\x61\x74\x69\x6F\x6E", 25, 1 };
static panda$core$String $s2307 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D\x3A\x3D", 4, 1 };
static panda$core$String $s2355 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6F\x6E\x76\x65\x72\x74", 7, 1 };
static panda$core$String $s2359 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D\x3A\x3D", 4, 1 };
static panda$core$String $s2419 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2422 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x6F\x70\x65\x72\x61\x74\x65\x20\x6F\x6E\x20\x27", 21, 1 };
static panda$core$String $s2425 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20", 3, 1 };
static panda$core$String $s2427 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2429 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2436 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2439 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x6F\x70\x65\x72\x61\x74\x65\x20\x6F\x6E\x20\x27", 21, 1 };
static panda$core$String $s2442 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20", 3, 1 };
static panda$core$String $s2444 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2446 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2468 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x61\x73\x73\x69\x67\x6E\x20\x74\x6F\x20\x74\x68\x69\x73\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6F\x6E", 32, 1 };
static panda$core$String $s2480 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x61\x73\x73\x69\x67\x6E\x20\x74\x6F\x20\x74\x68\x69\x73\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6F\x6E", 32, 1 };
static panda$core$String $s2497 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6F\x6E\x76\x65\x72\x74", 7, 1 };
static panda$core$String $s2510 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 1 };
static panda$core$String $s2579 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2582 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x6F\x70\x65\x72\x61\x74\x65\x20\x6F\x6E\x20\x27", 21, 1 };
static panda$core$String $s2585 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20\x27", 4, 1 };
static panda$core$String $s2588 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2702 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x6D\x65\x74\x68\x6F\x64\x3E", 8, 1 };
static panda$core$String $s2717 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6E\x75\x6D\x62\x65\x72\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 30, 1 };
static panda$core$String $s2719 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2727 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6E\x75\x6D\x62\x65\x72\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 30, 1 };
static panda$core$String $s2729 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2803 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2805 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s2808 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2825 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6C\x61\x73\x73\x20\x27", 7, 1 };
static panda$core$String $s2827 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x64\x6F\x65\x73\x20\x6E\x6F\x74\x20\x68\x61\x76\x65\x20\x61\x20\x6D\x65\x6D\x62\x65\x72\x20\x6E\x61\x6D\x65\x64\x20", 31, 1 };
static panda$core$String $s2829 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2831 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2890 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x75\x6E\x72\x65\x73\x6F\x6C\x76\x65\x64\x20\x72\x61\x6E\x67\x65\x3E", 18, 1 };
static panda$core$String $s2898 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x72\x65\x66\x65\x72\x65\x6E\x63\x65\x20\x27\x73\x65\x6C\x66\x27\x20\x66\x72\x6F\x6D\x20\x61\x20\x40\x63\x6C\x61\x73\x73\x20\x6D\x65\x74\x68\x6F\x64", 44, 1 };
static panda$core$String $s2914 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 1 };
static panda$core$String $s2916 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2938 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2940 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s2943 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2947 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2948 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };
static panda$core$String $s2958 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x72\x65\x66\x65\x72\x65\x6E\x63\x65\x20\x27\x73\x75\x70\x65\x72\x27\x20\x66\x72\x6F\x6D\x20\x61\x20\x40\x63\x6C\x61\x73\x73\x20\x6D\x65\x74\x68\x6F\x64", 45, 1 };
static panda$core$String $s2977 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6C\x75\x65\x20\x6F\x66\x20\x74\x79\x70\x65\x20\x27", 15, 1 };
static panda$core$String $s2979 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x70\x6F\x73\x73\x69\x62\x6C\x79\x20\x62\x65\x20\x61\x6E\x20", 24, 1 };
static panda$core$String $s2981 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x73\x74\x61\x6E\x63\x65\x20\x6F\x66\x20\x27", 13, 1 };
static panda$core$String $s2983 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s3003 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x64\x6F\x65\x73\x20\x6E\x6F\x74\x20\x72\x65\x74\x75\x72\x6E\x20\x61\x20\x76\x61\x6C\x75\x65", 24, 1 };
static panda$core$String $s3125 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3128 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 1 };
static panda$core$String $s3132 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };
static panda$core$String $s3137 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x49\x74\x65\x72", 5, 1 };
static panda$core$String $s3160 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x65\x74\x5F\x64\x6F\x6E\x65", 8, 1 };
static panda$core$String $s3165 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21", 1, 1 };
static panda$core$String $s3177 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x65\x78\x74", 4, 1 };
static panda$core$String $s3259 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x74\x65\x72\x61\x74\x6F\x72", 8, 1 };
static panda$core$String $s3267 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6E\x20\x49\x74\x65\x72\x61\x62\x6C\x65\x20\x6F\x72\x20\x49\x74\x65\x72\x61\x74\x6F\x72\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 45, 1 };
static panda$core$String $s3269 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s3327 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x63\x6C\x61\x72\x61\x74\x69\x6F\x6E\x20\x68\x61\x73\x20\x6E\x65\x69\x74\x68\x65\x72\x20\x61\x20\x74\x79\x70\x65\x20\x6E\x6F\x72\x20\x61\x20\x76\x61\x6C\x75\x65", 42, 1 };
static panda$core$String $s3384 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x62\x72\x65\x61\x6B\x20", 7, 1 };
static panda$core$String $s3386 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20\x69\x6E\x73\x69\x64\x65\x20\x61\x20\x6C\x6F\x6F\x70\x20\x6C\x61\x62\x65\x6C\x6C\x65\x64\x20", 33, 1 };
static panda$core$String $s3388 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s3390 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A\x27", 2, 1 };
static panda$core$String $s3395 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x62\x72\x65\x61\x6B\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20\x69\x6E\x73\x69\x64\x65\x20\x61\x20\x6C\x6F\x6F\x70", 29, 1 };
static panda$core$String $s3422 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x63\x6F\x6E\x74\x69\x6E\x75\x65\x20", 10, 1 };
static panda$core$String $s3424 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20\x69\x6E\x73\x69\x64\x65\x20\x61\x20\x6C\x6F\x6F\x70\x20\x6C\x61\x62\x65\x6C\x6C\x65\x64\x20", 33, 1 };
static panda$core$String $s3426 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s3428 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A\x27", 2, 1 };
static panda$core$String $s3433 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x63\x6F\x6E\x74\x69\x6E\x75\x65\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20\x69\x6E\x73\x69\x64\x65\x20\x61\x20\x6C\x6F\x6F\x70", 32, 1 };
static panda$core$String $s3442 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x72\x65\x74\x75\x72\x6E\x20\x61\x20\x76\x61\x6C\x75\x65\x20\x66\x72\x6F\x6D\x20\x61\x20\x6D\x65\x74\x68\x6F\x64\x20\x77\x69\x74\x68\x20\x6E\x6F\x20\x72\x65\x74\x75\x72\x6E\x20\x74\x79\x70\x65", 55, 1 };
static panda$core$String $s3458 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x72\x65\x74\x75\x72\x6E\x20\x76\x61\x6C\x75\x65", 23, 1 };
static panda$core$String $s3478 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6C\x75\x65", 5, 1 };
static panda$core$String $s3545 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3D", 1, 1 };
static panda$core$String $s3587 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1, 1 };
static panda$core$String $s3653 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x6D\x61\x74\x63\x68\x24", 7, 1 };
static panda$core$String $s3655 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4218 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4220 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A\x20\x65\x72\x72\x6F\x72\x3A\x20", 9, 1 };
static panda$core$String $s4223 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };

void org$pandalanguage$pandac$Compiler$init$org$pandalanguage$pandac$CodeGenerator$org$pandalanguage$pandac$Compiler$Settings(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$CodeGenerator* p_codeGenerator, org$pandalanguage$pandac$Compiler$Settings* p_settings) {
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
    org$pandalanguage$pandac$Type* $tmp24 = (org$pandalanguage$pandac$Type*) malloc(80);
    $tmp24->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp24->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp24, &$s26, ((panda$core$Int64) { 19 }), ((panda$core$Int64) { 1 }), ((panda$core$Bit) { true }));
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->root, ((org$pandalanguage$pandac$Symbol*) $tmp24));
    org$pandalanguage$pandac$Type* $tmp27 = (org$pandalanguage$pandac$Type*) malloc(80);
    $tmp27->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp27->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp27, &$s29, ((panda$core$Int64) { 12 }), ((panda$core$Int64) { 8 }), ((panda$core$Bit) { true }));
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->root, ((org$pandalanguage$pandac$Symbol*) $tmp27));
    org$pandalanguage$pandac$Type* $tmp30 = (org$pandalanguage$pandac$Type*) malloc(80);
    $tmp30->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp30->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp30, &$s32, ((panda$core$Int64) { 12 }), ((panda$core$Int64) { 16 }), ((panda$core$Bit) { true }));
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->root, ((org$pandalanguage$pandac$Symbol*) $tmp30));
    org$pandalanguage$pandac$Type* $tmp33 = (org$pandalanguage$pandac$Type*) malloc(80);
    $tmp33->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp33->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp33, &$s35, ((panda$core$Int64) { 12 }), ((panda$core$Int64) { 32 }), ((panda$core$Bit) { true }));
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->root, ((org$pandalanguage$pandac$Symbol*) $tmp33));
    org$pandalanguage$pandac$Type* $tmp36 = (org$pandalanguage$pandac$Type*) malloc(80);
    $tmp36->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp36->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp36, &$s38, ((panda$core$Int64) { 12 }), ((panda$core$Int64) { 64 }), ((panda$core$Bit) { true }));
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->root, ((org$pandalanguage$pandac$Symbol*) $tmp36));
    org$pandalanguage$pandac$Type* $tmp39 = (org$pandalanguage$pandac$Type*) malloc(80);
    $tmp39->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp39->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp39, &$s41, ((panda$core$Int64) { 13 }), ((panda$core$Int64) { 8 }), ((panda$core$Bit) { true }));
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->root, ((org$pandalanguage$pandac$Symbol*) $tmp39));
    org$pandalanguage$pandac$Type* $tmp42 = (org$pandalanguage$pandac$Type*) malloc(80);
    $tmp42->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp42->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp42, &$s44, ((panda$core$Int64) { 13 }), ((panda$core$Int64) { 16 }), ((panda$core$Bit) { true }));
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->root, ((org$pandalanguage$pandac$Symbol*) $tmp42));
    org$pandalanguage$pandac$Type* $tmp45 = (org$pandalanguage$pandac$Type*) malloc(80);
    $tmp45->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp45->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp45, &$s47, ((panda$core$Int64) { 13 }), ((panda$core$Int64) { 32 }), ((panda$core$Bit) { true }));
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->root, ((org$pandalanguage$pandac$Symbol*) $tmp45));
    org$pandalanguage$pandac$Type* $tmp48 = (org$pandalanguage$pandac$Type*) malloc(80);
    $tmp48->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp48->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp48, &$s50, ((panda$core$Int64) { 13 }), ((panda$core$Int64) { 64 }), ((panda$core$Bit) { true }));
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->root, ((org$pandalanguage$pandac$Symbol*) $tmp48));
    org$pandalanguage$pandac$Alias* $tmp51 = (org$pandalanguage$pandac$Alias*) malloc(48);
    $tmp51->$class = (panda$core$Class*) &org$pandalanguage$pandac$Alias$class;
    $tmp51->refCount.value = 1;
    org$pandalanguage$pandac$Alias$init$panda$core$String$panda$core$String$panda$core$Int64($tmp51, &$s53, &$s54, ((panda$core$Int64) { -1 }));
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->root, ((org$pandalanguage$pandac$Symbol*) $tmp51));
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
}
void org$pandalanguage$pandac$Compiler$addAlias$panda$core$String(org$pandalanguage$pandac$Compiler* self, panda$core$String* p_name) {
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp110;
    org$pandalanguage$pandac$Alias* $tmp108 = (org$pandalanguage$pandac$Alias*) malloc(48);
    $tmp108->$class = (panda$core$Class*) &org$pandalanguage$pandac$Alias$class;
    $tmp108->refCount.value = 1;
    panda$core$String$Index$nullable $tmp112 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(p_name, &$s111);
    panda$core$String$Index $tmp113 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(p_name, ((panda$core$String$Index) $tmp112.value));
    panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp110, ((panda$core$String$Index$nullable) { $tmp113, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    panda$core$String* $tmp114 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(p_name, $tmp110);
    org$pandalanguage$pandac$Alias$init$panda$core$String$panda$core$String$panda$core$Int64($tmp108, $tmp114, p_name, ((panda$core$Int64) { -1 }));
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->root, ((org$pandalanguage$pandac$Symbol*) $tmp108));
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
panda$core$Bit org$pandalanguage$pandac$Compiler$checkGenericParameters$panda$core$Int64$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_offset, org$pandalanguage$pandac$ClassDecl* p_cl, org$pandalanguage$pandac$Type* p_type) {
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
        org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_offset, $tmp186);
        return ((panda$core$Bit) { false });
    }
    }
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_cl));
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentFile, ((panda$core$Object*) p_cl->source));
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
            org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_offset, $tmp242);
            panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentFile);
            panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
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
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentFile);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    return ((panda$core$Bit) { true });
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$Type$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type, panda$core$Bit p_checkParameters) {
    org$pandalanguage$pandac$ClassDecl* resolved254;
    org$pandalanguage$pandac$Type* result256;
    org$pandalanguage$pandac$Symbol* s260;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* gp264;
    panda$collections$Array* subtypes276;
    org$pandalanguage$pandac$Type* sub279;
    panda$collections$Array* subtypes289;
    org$pandalanguage$pandac$Type* base292;
    panda$core$MutableString* name295;
    panda$core$String* separator300;
    panda$core$Range$LTpanda$core$Int64$GT $tmp302;
    org$pandalanguage$pandac$Type* resolved322;
    org$pandalanguage$pandac$Type* result338;
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
                    panda$core$Bit $tmp258 = org$pandalanguage$pandac$Compiler$checkGenericParameters$panda$core$Int64$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, ((org$pandalanguage$pandac$Symbol*) p_type)->offset, resolved254, result256);
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
                        org$pandalanguage$pandac$Type* $tmp262 = (org$pandalanguage$pandac$Type*) malloc(80);
                        $tmp262->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
                        $tmp262->refCount.value = 1;
                        org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp262, ((org$pandalanguage$pandac$Alias*) s260)->fullName, ((panda$core$Int64) { 10 }), ((org$pandalanguage$pandac$Symbol*) p_type)->offset, ((panda$core$Bit) { true }));
                        return $tmp262;
                    }
                    break;
                    case 203:
                    {
                        gp264 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) s260);
                        org$pandalanguage$pandac$ClassDecl* $tmp265 = org$pandalanguage$pandac$Compiler$getClass$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Symbol*) p_type)->offset, gp264->owner);
                        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, $tmp265);
                        org$pandalanguage$pandac$Type* $tmp266 = (org$pandalanguage$pandac$Type*) malloc(80);
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
            org$pandalanguage$pandac$Position* $tmp269 = org$pandalanguage$pandac$Compiler$position$panda$core$Int64$R$org$pandalanguage$pandac$Position(self, ((org$pandalanguage$pandac$Symbol*) p_type)->offset);
            panda$core$String* $tmp271 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s270, ((panda$core$Object*) p_type));
            panda$core$String* $tmp273 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp271, &$s272);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, $tmp269, $tmp273);
            return NULL;
        }
        break;
        case 11:
        {
            panda$core$Int64 $tmp274 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_type->subtypes);
            panda$core$Bit $tmp275 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp274, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp275.value);
            panda$collections$Array* $tmp277 = (panda$collections$Array*) malloc(40);
            $tmp277->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp277->refCount.value = 1;
            panda$collections$Array$init($tmp277);
            subtypes276 = $tmp277;
            panda$core$Object* $tmp280 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp281 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, ((org$pandalanguage$pandac$Type*) $tmp280));
            sub279 = $tmp281;
            if (((panda$core$Bit) { sub279 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(subtypes276, ((panda$core$Object*) sub279));
            org$pandalanguage$pandac$Type* $tmp282 = (org$pandalanguage$pandac$Type*) malloc(80);
            $tmp282->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp282->refCount.value = 1;
            panda$core$Object* $tmp284 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(subtypes276, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp286 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp284))->name, &$s285);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp282, $tmp286, ((panda$core$Int64) { 11 }), ((org$pandalanguage$pandac$Symbol*) p_type)->offset, ((panda$collections$ListView*) subtypes276), ((panda$core$Bit) { true }));
            return $tmp282;
        }
        break;
        case 21:
        {
            panda$core$Int64 $tmp287 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_type->subtypes);
            panda$core$Bit $tmp288 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp287, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp288.value);
            panda$collections$Array* $tmp290 = (panda$collections$Array*) malloc(40);
            $tmp290->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp290->refCount.value = 1;
            panda$collections$Array$init($tmp290);
            subtypes289 = $tmp290;
            panda$core$Object* $tmp293 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
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
            panda$core$Int64 $tmp303 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_type->subtypes);
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp302, ((panda$core$Int64) { 1 }), $tmp303, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
            int64_t $tmp305 = $tmp302.start.value;
            panda$core$Int64 i304 = { $tmp305 };
            int64_t $tmp307 = $tmp302.end.value;
            int64_t $tmp308 = $tmp302.step.value;
            bool $tmp309 = $tmp302.inclusive.value;
            bool $tmp316 = $tmp308 > 0;
            if ($tmp316) goto $l314; else goto $l315;
            $l314:;
            if ($tmp309) goto $l317; else goto $l318;
            $l317:;
            if ($tmp305 <= $tmp307) goto $l310; else goto $l312;
            $l318:;
            if ($tmp305 < $tmp307) goto $l310; else goto $l312;
            $l315:;
            if ($tmp309) goto $l319; else goto $l320;
            $l319:;
            if ($tmp305 >= $tmp307) goto $l310; else goto $l312;
            $l320:;
            if ($tmp305 > $tmp307) goto $l310; else goto $l312;
            $l310:;
            {
                panda$core$Object* $tmp323 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_type->subtypes, i304);
                org$pandalanguage$pandac$Type* $tmp324 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, ((org$pandalanguage$pandac$Type*) $tmp323));
                resolved322 = $tmp324;
                if (((panda$core$Bit) { resolved322 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(subtypes289, ((panda$core$Object*) resolved322));
                panda$core$MutableString$append$panda$core$String(name295, separator300);
                panda$core$MutableString$append$panda$core$String(name295, ((org$pandalanguage$pandac$Symbol*) resolved322)->name);
                separator300 = &$s325;
            }
            $l313:;
            if ($tmp316) goto $l327; else goto $l328;
            $l327:;
            int64_t $tmp329 = $tmp307 - i304.value;
            if ($tmp309) goto $l330; else goto $l331;
            $l330:;
            if ($tmp329 >= $tmp308) goto $l326; else goto $l312;
            $l331:;
            if ($tmp329 > $tmp308) goto $l326; else goto $l312;
            $l328:;
            int64_t $tmp333 = i304.value - $tmp307;
            if ($tmp309) goto $l334; else goto $l335;
            $l334:;
            if ($tmp333 >= -$tmp308) goto $l326; else goto $l312;
            $l335:;
            if ($tmp333 > -$tmp308) goto $l326; else goto $l312;
            $l326:;
            i304.value += $tmp308;
            goto $l310;
            $l312:;
            panda$core$MutableString$append$panda$core$String(name295, &$s337);
            org$pandalanguage$pandac$Type* $tmp339 = (org$pandalanguage$pandac$Type*) malloc(80);
            $tmp339->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp339->refCount.value = 1;
            panda$core$String* $tmp341 = panda$core$MutableString$convert$R$panda$core$String(name295);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp339, $tmp341, ((panda$core$Int64) { 21 }), ((org$pandalanguage$pandac$Symbol*) p_type)->offset, ((panda$collections$ListView*) subtypes289), ((panda$core$Bit) { true }));
            result338 = $tmp339;
            if (p_checkParameters.value) {
            {
                panda$core$Object* $tmp342 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(result338->subtypes, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$ClassDecl* $tmp343 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Type*) $tmp342));
                panda$core$Bit $tmp344 = org$pandalanguage$pandac$Compiler$checkGenericParameters$panda$core$Int64$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, ((org$pandalanguage$pandac$Symbol*) p_type)->offset, $tmp343, result338);
                panda$core$Bit $tmp345 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp344);
                if ($tmp345.value) {
                {
                    return NULL;
                }
                }
            }
            }
            return result338;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type) {
    org$pandalanguage$pandac$Type* $tmp346 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$Type$Q(self, p_type, ((panda$core$Bit) { true }));
    return $tmp346;
}
void org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$SymbolTable* old347;
    panda$collections$Iterator* p$Iter348;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* p360;
    org$pandalanguage$pandac$Type* resolved365;
    panda$collections$Iterator* m$Iter380;
    org$pandalanguage$pandac$MethodDecl* m392;
    panda$core$Range$LTpanda$core$Int64$GT $tmp402;
    org$pandalanguage$pandac$Type* resolved422;
    panda$collections$Iterator* p$Iter436;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* p448;
    org$pandalanguage$pandac$ClassDecl* cl453;
    if (p_cl->resolved.value) {
    {
        return;
    }
    }
    p_cl->resolved = ((panda$core$Bit) { true });
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentFile, ((panda$core$Object*) p_cl->source));
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_cl));
    old347 = self->symbolTable;
    self->symbolTable = p_cl->symbolTable;
    {
        ITable* $tmp349 = ((panda$collections$Iterable*) p_cl->parameters)->$class->itable;
        while ($tmp349->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp349 = $tmp349->next;
        }
        $fn351 $tmp350 = $tmp349->methods[0];
        panda$collections$Iterator* $tmp352 = $tmp350(((panda$collections$Iterable*) p_cl->parameters));
        p$Iter348 = $tmp352;
        $l353:;
        ITable* $tmp355 = p$Iter348->$class->itable;
        while ($tmp355->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp355 = $tmp355->next;
        }
        $fn357 $tmp356 = $tmp355->methods[0];
        panda$core$Bit $tmp358 = $tmp356(p$Iter348);
        panda$core$Bit $tmp359 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp358);
        if (!$tmp359.value) goto $l354;
        {
            ITable* $tmp361 = p$Iter348->$class->itable;
            while ($tmp361->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp361 = $tmp361->next;
            }
            $fn363 $tmp362 = $tmp361->methods[1];
            panda$core$Object* $tmp364 = $tmp362(p$Iter348);
            p360 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp364);
            org$pandalanguage$pandac$Type* $tmp366 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$Type$Q(self, p360->bound, ((panda$core$Bit) { false }));
            resolved365 = $tmp366;
            if (((panda$core$Bit) { resolved365 != NULL }).value) {
            {
                p360->bound = resolved365;
            }
            }
        }
        goto $l353;
        $l354:;
    }
    if (((panda$core$Bit) { p_cl->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp367 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, p_cl->rawSuper);
        p_cl->rawSuper = $tmp367;
        bool $tmp369 = ((panda$core$Bit) { p_cl->rawSuper != NULL }).value;
        if (!$tmp369) goto $l370;
        panda$core$Bit $tmp371 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_cl->annotations);
        panda$core$Bit $tmp372 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp371);
        $tmp369 = $tmp372.value;
        $l370:;
        panda$core$Bit $tmp373 = { $tmp369 };
        bool $tmp368 = $tmp373.value;
        if (!$tmp368) goto $l374;
        panda$core$Bit $tmp376 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_cl->rawSuper)->name, &$s375);
        $tmp368 = $tmp376.value;
        $l374:;
        panda$core$Bit $tmp377 = { $tmp368 };
        if ($tmp377.value) {
        {
            panda$core$Int64 $tmp378 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 8 }));
            panda$core$Int64 $tmp379 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(p_cl->annotations->flags, $tmp378);
            p_cl->annotations->flags = $tmp379;
            {
                ITable* $tmp381 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
                while ($tmp381->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp381 = $tmp381->next;
                }
                $fn383 $tmp382 = $tmp381->methods[0];
                panda$collections$Iterator* $tmp384 = $tmp382(((panda$collections$Iterable*) p_cl->methods));
                m$Iter380 = $tmp384;
                $l385:;
                ITable* $tmp387 = m$Iter380->$class->itable;
                while ($tmp387->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp387 = $tmp387->next;
                }
                $fn389 $tmp388 = $tmp387->methods[0];
                panda$core$Bit $tmp390 = $tmp388(m$Iter380);
                panda$core$Bit $tmp391 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp390);
                if (!$tmp391.value) goto $l386;
                {
                    ITable* $tmp393 = m$Iter380->$class->itable;
                    while ($tmp393->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp393 = $tmp393->next;
                    }
                    $fn395 $tmp394 = $tmp393->methods[1];
                    panda$core$Object* $tmp396 = $tmp394(m$Iter380);
                    m392 = ((org$pandalanguage$pandac$MethodDecl*) $tmp396);
                    panda$core$Int64 $tmp397 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 8 }));
                    panda$core$Int64 $tmp398 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(m392->annotations->flags, $tmp397);
                    m392->annotations->flags = $tmp398;
                    panda$core$Bit $tmp399 = org$pandalanguage$pandac$Scanner$shouldInline$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ASTNode$Q$R$panda$core$Bit(self->scanner, m392->annotations, m392->body);
                    if ($tmp399.value) {
                    {
                        panda$core$Int64 $tmp400 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 10 }));
                        panda$core$Int64 $tmp401 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(m392->annotations->flags, $tmp400);
                        m392->annotations->flags = $tmp401;
                    }
                    }
                }
                goto $l385;
                $l386:;
            }
        }
        }
    }
    }
    panda$core$Int64 $tmp403 = panda$collections$Array$get_count$R$panda$core$Int64(p_cl->rawInterfaces);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp402, ((panda$core$Int64) { 0 }), $tmp403, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp405 = $tmp402.start.value;
    panda$core$Int64 i404 = { $tmp405 };
    int64_t $tmp407 = $tmp402.end.value;
    int64_t $tmp408 = $tmp402.step.value;
    bool $tmp409 = $tmp402.inclusive.value;
    bool $tmp416 = $tmp408 > 0;
    if ($tmp416) goto $l414; else goto $l415;
    $l414:;
    if ($tmp409) goto $l417; else goto $l418;
    $l417:;
    if ($tmp405 <= $tmp407) goto $l410; else goto $l412;
    $l418:;
    if ($tmp405 < $tmp407) goto $l410; else goto $l412;
    $l415:;
    if ($tmp409) goto $l419; else goto $l420;
    $l419:;
    if ($tmp405 >= $tmp407) goto $l410; else goto $l412;
    $l420:;
    if ($tmp405 > $tmp407) goto $l410; else goto $l412;
    $l410:;
    {
        panda$core$Object* $tmp423 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_cl->rawInterfaces, i404);
        org$pandalanguage$pandac$Type* $tmp424 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, ((org$pandalanguage$pandac$Type*) $tmp423));
        resolved422 = $tmp424;
        if (((panda$core$Bit) { resolved422 != NULL }).value) {
        {
            panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(p_cl->rawInterfaces, i404, ((panda$core$Object*) resolved422));
        }
        }
    }
    $l413:;
    if ($tmp416) goto $l426; else goto $l427;
    $l426:;
    int64_t $tmp428 = $tmp407 - i404.value;
    if ($tmp409) goto $l429; else goto $l430;
    $l429:;
    if ($tmp428 >= $tmp408) goto $l425; else goto $l412;
    $l430:;
    if ($tmp428 > $tmp408) goto $l425; else goto $l412;
    $l427:;
    int64_t $tmp432 = i404.value - $tmp407;
    if ($tmp409) goto $l433; else goto $l434;
    $l433:;
    if ($tmp432 >= -$tmp408) goto $l425; else goto $l412;
    $l434:;
    if ($tmp432 > -$tmp408) goto $l425; else goto $l412;
    $l425:;
    i404.value += $tmp408;
    goto $l410;
    $l412:;
    {
        ITable* $tmp437 = ((panda$collections$Iterable*) p_cl->parameters)->$class->itable;
        while ($tmp437->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp437 = $tmp437->next;
        }
        $fn439 $tmp438 = $tmp437->methods[0];
        panda$collections$Iterator* $tmp440 = $tmp438(((panda$collections$Iterable*) p_cl->parameters));
        p$Iter436 = $tmp440;
        $l441:;
        ITable* $tmp443 = p$Iter436->$class->itable;
        while ($tmp443->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp443 = $tmp443->next;
        }
        $fn445 $tmp444 = $tmp443->methods[0];
        panda$core$Bit $tmp446 = $tmp444(p$Iter436);
        panda$core$Bit $tmp447 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp446);
        if (!$tmp447.value) goto $l442;
        {
            ITable* $tmp449 = p$Iter436->$class->itable;
            while ($tmp449->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp449 = $tmp449->next;
            }
            $fn451 $tmp450 = $tmp449->methods[1];
            panda$core$Object* $tmp452 = $tmp450(p$Iter436);
            p448 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp452);
            org$pandalanguage$pandac$ClassDecl* $tmp454 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p448->bound);
            cl453 = $tmp454;
            if (((panda$core$Bit) { cl453 != NULL }).value) {
            {
                org$pandalanguage$pandac$Compiler$checkGenericParameters$panda$core$Int64$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, ((org$pandalanguage$pandac$Symbol*) cl453)->offset, cl453, p448->bound);
            }
            }
        }
        goto $l441;
        $l442:;
    }
    self->symbolTable = old347;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentFile);
}
void org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$SymbolTable* old455;
    panda$collections$Iterator* p$Iter456;
    org$pandalanguage$pandac$MethodDecl$Parameter* p468;
    if (p_m->resolved.value) {
    {
        return;
    }
    }
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_m->owner);
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentFile, ((panda$core$Object*) p_m->owner->source));
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_m->owner));
    old455 = self->symbolTable;
    self->symbolTable = p_m->owner->symbolTable;
    {
        ITable* $tmp457 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp457->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp457 = $tmp457->next;
        }
        $fn459 $tmp458 = $tmp457->methods[0];
        panda$collections$Iterator* $tmp460 = $tmp458(((panda$collections$Iterable*) p_m->parameters));
        p$Iter456 = $tmp460;
        $l461:;
        ITable* $tmp463 = p$Iter456->$class->itable;
        while ($tmp463->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp463 = $tmp463->next;
        }
        $fn465 $tmp464 = $tmp463->methods[0];
        panda$core$Bit $tmp466 = $tmp464(p$Iter456);
        panda$core$Bit $tmp467 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp466);
        if (!$tmp467.value) goto $l462;
        {
            ITable* $tmp469 = p$Iter456->$class->itable;
            while ($tmp469->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp469 = $tmp469->next;
            }
            $fn471 $tmp470 = $tmp469->methods[1];
            panda$core$Object* $tmp472 = $tmp470(p$Iter456);
            p468 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp472);
            org$pandalanguage$pandac$Type* $tmp473 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, p468->type);
            p468->type = $tmp473;
        }
        goto $l461;
        $l462:;
    }
    org$pandalanguage$pandac$Type* $tmp474 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, p_m->returnType);
    p_m->returnType = $tmp474;
    p_m->resolved = ((panda$core$Bit) { true });
    self->symbolTable = old455;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentFile);
}
void org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$FieldDecl* p_f) {
    org$pandalanguage$pandac$SymbolTable* old475;
    org$pandalanguage$pandac$Type* resolved478;
    if (p_f->resolved.value) {
    {
        return;
    }
    }
    p_f->resolved = ((panda$core$Bit) { true });
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentFile, ((panda$core$Object*) p_f->owner->source));
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_f->owner));
    old475 = self->symbolTable;
    self->symbolTable = p_f->owner->symbolTable;
    org$pandalanguage$pandac$Type* $tmp476 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp477 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_f->type, $tmp476);
    if ($tmp477.value) {
    {
        org$pandalanguage$pandac$Type* $tmp479 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, p_f->type);
        resolved478 = $tmp479;
        if (((panda$core$Bit) { resolved478 != NULL }).value) {
        {
            p_f->type = resolved478;
            if (((panda$core$Bit) { p_f->rawValue != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp480 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->rawValue);
                org$pandalanguage$pandac$IRNode* $tmp481 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp480, p_f->type);
                p_f->value = $tmp481;
            }
            }
        }
        }
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentFile);
        self->symbolTable = old475;
        return;
    }
    }
    if (((panda$core$Bit) { p_f->rawValue == NULL }).value) {
    {
        org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_f)->offset, &$s482);
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentFile);
        self->symbolTable = old475;
        return;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp483 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->rawValue);
    p_f->value = $tmp483;
    if (((panda$core$Bit) { p_f->value == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentFile);
        self->symbolTable = old475;
        return;
    }
    }
    org$pandalanguage$pandac$Type* $tmp484 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_f->value);
    p_f->type = $tmp484;
    org$pandalanguage$pandac$IRNode* $tmp485 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->value, p_f->type);
    p_f->value = $tmp485;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentFile);
    self->symbolTable = old475;
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
            org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_expr->offset, &$s486);
            return NULL;
        }
        break;
        case 1039:
        {
            org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_expr->offset, &$s487);
            panda$core$Object* $tmp488 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$io$Console$printLine$panda$core$Object(((panda$core$Object*) ((panda$collections$ListView*) ((org$pandalanguage$pandac$IRNode*) $tmp488)->payload)));
            return NULL;
        }
        break;
        case 1024:
        {
            org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_expr->offset, &$s489);
            return NULL;
        }
        break;
        default:
        {
            org$pandalanguage$pandac$Type* $tmp490 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
            org$pandalanguage$pandac$IRNode* $tmp491 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, $tmp490);
            return $tmp491;
        }
    }
}
panda$core$Bit org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
    bool $tmp492 = ((panda$core$Bit) { p_cl->rawSuper != NULL }).value;
    if (!$tmp492) goto $l493;
    org$pandalanguage$pandac$Type* $tmp494 = org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type();
    panda$core$Int64$nullable $tmp495 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_cl->rawSuper, $tmp494);
    $tmp492 = ((panda$core$Bit) { $tmp495.nonnull }).value;
    $l493:;
    panda$core$Bit $tmp496 = { $tmp492 };
    return $tmp496;
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Array* result497;
    org$pandalanguage$pandac$ClassDecl* s505;
    panda$collections$Iterator* f$Iter508;
    org$pandalanguage$pandac$FieldDecl* f520;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
    panda$collections$Array* $tmp498 = (panda$collections$Array*) malloc(40);
    $tmp498->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp498->refCount.value = 1;
    panda$collections$Array$init($tmp498);
    result497 = $tmp498;
    panda$core$Bit $tmp501 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, p_cl);
    panda$core$Bit $tmp502 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp501);
    bool $tmp500 = $tmp502.value;
    if (!$tmp500) goto $l503;
    $tmp500 = ((panda$core$Bit) { p_cl->rawSuper != NULL }).value;
    $l503:;
    panda$core$Bit $tmp504 = { $tmp500 };
    if ($tmp504.value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp506 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_cl->rawSuper);
        s505 = $tmp506;
        if (((panda$core$Bit) { s505 != NULL }).value) {
        {
            panda$collections$ListView* $tmp507 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self, s505);
            panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(result497, ((panda$collections$CollectionView*) $tmp507));
        }
        }
    }
    }
    {
        ITable* $tmp509 = ((panda$collections$Iterable*) p_cl->fields)->$class->itable;
        while ($tmp509->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp509 = $tmp509->next;
        }
        $fn511 $tmp510 = $tmp509->methods[0];
        panda$collections$Iterator* $tmp512 = $tmp510(((panda$collections$Iterable*) p_cl->fields));
        f$Iter508 = $tmp512;
        $l513:;
        ITable* $tmp515 = f$Iter508->$class->itable;
        while ($tmp515->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp515 = $tmp515->next;
        }
        $fn517 $tmp516 = $tmp515->methods[0];
        panda$core$Bit $tmp518 = $tmp516(f$Iter508);
        panda$core$Bit $tmp519 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp518);
        if (!$tmp519.value) goto $l514;
        {
            ITable* $tmp521 = f$Iter508->$class->itable;
            while ($tmp521->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp521 = $tmp521->next;
            }
            $fn523 $tmp522 = $tmp521->methods[1];
            panda$core$Object* $tmp524 = $tmp522(f$Iter508);
            f520 = ((org$pandalanguage$pandac$FieldDecl*) $tmp524);
            panda$core$Bit $tmp525 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(f520->annotations);
            panda$core$Bit $tmp526 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp525);
            if ($tmp526.value) {
            {
                panda$collections$Array$add$panda$collections$Array$T(result497, ((panda$core$Object*) f520));
            }
            }
        }
        goto $l513;
        $l514:;
    }
    return ((panda$collections$ListView*) result497);
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Compiler$getClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Compiler* self, panda$core$String* p_fullName) {
    org$pandalanguage$pandac$ClassDecl* result527;
    panda$core$String* suffix529;
    panda$core$Bit found535;
    panda$collections$Iterator* dir$Iter536;
    panda$io$File* dir548;
    panda$io$File* f553;
    panda$core$Bit $tmp555;
    panda$core$String$Index$nullable index557;
    org$pandalanguage$pandac$ClassDecl* parent560;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp561;
    panda$core$Object* $tmp528 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) p_fullName));
    result527 = ((org$pandalanguage$pandac$ClassDecl*) $tmp528);
    if (((panda$core$Bit) { result527 == NULL }).value) {
    {
        panda$core$String* $tmp532 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(p_fullName, &$s530, &$s531);
        panda$core$String* $tmp534 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp532, &$s533);
        suffix529 = $tmp534;
        found535 = ((panda$core$Bit) { false });
        {
            ITable* $tmp537 = ((panda$collections$Iterable*) self->settings->importDirs)->$class->itable;
            while ($tmp537->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp537 = $tmp537->next;
            }
            $fn539 $tmp538 = $tmp537->methods[0];
            panda$collections$Iterator* $tmp540 = $tmp538(((panda$collections$Iterable*) self->settings->importDirs));
            dir$Iter536 = $tmp540;
            $l541:;
            ITable* $tmp543 = dir$Iter536->$class->itable;
            while ($tmp543->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp543 = $tmp543->next;
            }
            $fn545 $tmp544 = $tmp543->methods[0];
            panda$core$Bit $tmp546 = $tmp544(dir$Iter536);
            panda$core$Bit $tmp547 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp546);
            if (!$tmp547.value) goto $l542;
            {
                ITable* $tmp549 = dir$Iter536->$class->itable;
                while ($tmp549->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp549 = $tmp549->next;
                }
                $fn551 $tmp550 = $tmp549->methods[1];
                panda$core$Object* $tmp552 = $tmp550(dir$Iter536);
                dir548 = ((panda$io$File*) $tmp552);
                panda$io$File* $tmp554 = panda$io$File$resolve$panda$core$String$R$panda$io$File(dir548, suffix529);
                f553 = $tmp554;
                panda$io$File$exists$R$panda$core$Bit(&$tmp555, f553);
                if ($tmp555.value) {
                {
                    found535 = ((panda$core$Bit) { true });
                    org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(self, f553);
                    panda$core$Object* $tmp556 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) p_fullName));
                    result527 = ((org$pandalanguage$pandac$ClassDecl*) $tmp556);
                }
                }
            }
            goto $l541;
            $l542:;
        }
    }
    }
    if (((panda$core$Bit) { result527 == NULL }).value) {
    {
        panda$core$String$Index$nullable $tmp559 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(p_fullName, &$s558);
        index557 = $tmp559;
        if (((panda$core$Bit) { index557.nonnull }).value) {
        {
            panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp561, ((panda$core$String$Index$nullable) { .nonnull = false }), index557, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
            panda$core$String* $tmp562 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(p_fullName, $tmp561);
            org$pandalanguage$pandac$ClassDecl* $tmp563 = org$pandalanguage$pandac$Compiler$getClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, $tmp562);
            parent560 = $tmp563;
            if (((panda$core$Bit) { parent560 != NULL }).value) {
            {
                panda$core$Object* $tmp564 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) p_fullName));
                result527 = ((org$pandalanguage$pandac$ClassDecl*) $tmp564);
            }
            }
        }
        }
    }
    }
    return result527;
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Compiler$getClass$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_offset, panda$core$String* p_fullName) {
    org$pandalanguage$pandac$ClassDecl* result565;
    panda$core$String* suffix567;
    panda$core$Bit found573;
    panda$collections$Iterator* dir$Iter574;
    panda$io$File* dir586;
    panda$io$File* f591;
    panda$core$Bit $tmp593;
    panda$core$Int64 oldErrorCount594;
    panda$core$Object* $tmp566 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) p_fullName));
    result565 = ((org$pandalanguage$pandac$ClassDecl*) $tmp566);
    if (((panda$core$Bit) { result565 == NULL }).value) {
    {
        panda$core$String* $tmp570 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(p_fullName, &$s568, &$s569);
        panda$core$String* $tmp572 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp570, &$s571);
        suffix567 = $tmp572;
        found573 = ((panda$core$Bit) { false });
        {
            ITable* $tmp575 = ((panda$collections$Iterable*) self->settings->importDirs)->$class->itable;
            while ($tmp575->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp575 = $tmp575->next;
            }
            $fn577 $tmp576 = $tmp575->methods[0];
            panda$collections$Iterator* $tmp578 = $tmp576(((panda$collections$Iterable*) self->settings->importDirs));
            dir$Iter574 = $tmp578;
            $l579:;
            ITable* $tmp581 = dir$Iter574->$class->itable;
            while ($tmp581->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp581 = $tmp581->next;
            }
            $fn583 $tmp582 = $tmp581->methods[0];
            panda$core$Bit $tmp584 = $tmp582(dir$Iter574);
            panda$core$Bit $tmp585 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp584);
            if (!$tmp585.value) goto $l580;
            {
                ITable* $tmp587 = dir$Iter574->$class->itable;
                while ($tmp587->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp587 = $tmp587->next;
                }
                $fn589 $tmp588 = $tmp587->methods[1];
                panda$core$Object* $tmp590 = $tmp588(dir$Iter574);
                dir586 = ((panda$io$File*) $tmp590);
                panda$io$File* $tmp592 = panda$io$File$resolve$panda$core$String$R$panda$io$File(dir586, suffix567);
                f591 = $tmp592;
                panda$io$File$exists$R$panda$core$Bit(&$tmp593, f591);
                if ($tmp593.value) {
                {
                    found573 = ((panda$core$Bit) { true });
                    oldErrorCount594 = self->errorCount;
                    org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(self, f591);
                    panda$core$Object* $tmp595 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) p_fullName));
                    result565 = ((org$pandalanguage$pandac$ClassDecl*) $tmp595);
                    bool $tmp596 = ((panda$core$Bit) { result565 == NULL }).value;
                    if (!$tmp596) goto $l597;
                    panda$core$Bit $tmp598 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->errorCount, oldErrorCount594);
                    $tmp596 = $tmp598.value;
                    $l597:;
                    panda$core$Bit $tmp599 = { $tmp596 };
                    if ($tmp599.value) {
                    {
                        org$pandalanguage$pandac$Position* $tmp600 = (org$pandalanguage$pandac$Position*) malloc(40);
                        $tmp600->$class = (panda$core$Class*) &org$pandalanguage$pandac$Position$class;
                        $tmp600->refCount.value = 1;
                        panda$core$String* $tmp602 = panda$io$File$name$R$panda$core$String(f591);
                        org$pandalanguage$pandac$Position$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp600, $tmp602, ((panda$core$Int64) { 1 }), ((panda$core$Int64) { 1 }));
                        panda$core$String* $tmp604 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s603, ((panda$core$Object*) f591));
                        panda$core$String* $tmp606 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp604, &$s605);
                        panda$core$String* $tmp607 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp606, p_fullName);
                        panda$core$String* $tmp609 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp607, &$s608);
                        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, $tmp600, $tmp609);
                    }
                    }
                }
                }
            }
            goto $l579;
            $l580:;
        }
        panda$core$Bit $tmp610 = panda$core$Bit$$NOT$R$panda$core$Bit(found573);
        if ($tmp610.value) {
        {
            panda$core$String* $tmp612 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s611, suffix567);
            panda$core$String* $tmp614 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp612, &$s613);
            panda$core$String* $tmp615 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp614, ((panda$core$Object*) self->settings->importDirs));
            panda$core$String* $tmp617 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp615, &$s616);
            org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_offset, $tmp617);
        }
        }
    }
    }
    return result565;
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Compiler$specialize$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl, org$pandalanguage$pandac$Type* p_rawType) {
    org$pandalanguage$pandac$Type* type621;
    org$pandalanguage$pandac$ClassDecl* result628;
    org$pandalanguage$pandac$Annotations* annotations630;
    org$pandalanguage$pandac$Type* supertype636;
    panda$collections$Array* interfaces638;
    panda$collections$Iterator* intf$Iter641;
    org$pandalanguage$pandac$Type* intf653;
    panda$collections$HashMap* aliases659;
    panda$core$Range$LTpanda$core$Int64$GT $tmp662;
    panda$collections$Iterator* m$Iter707;
    org$pandalanguage$pandac$MethodDecl* m719;
    panda$collections$Array* parameters724;
    panda$collections$Iterator* p$Iter727;
    org$pandalanguage$pandac$MethodDecl$Parameter* p739;
    org$pandalanguage$pandac$MethodDecl* clone747;
    panda$collections$Iterator* f$Iter750;
    org$pandalanguage$pandac$FieldDecl* f762;
    org$pandalanguage$pandac$FieldDecl* clone767;
    panda$core$Bit $tmp619 = panda$core$String$contains$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_rawType)->name, &$s618);
    panda$core$Bit $tmp620 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp619);
    PANDA_ASSERT($tmp620.value);
    org$pandalanguage$pandac$Type* $tmp622 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, p_rawType);
    type621 = $tmp622;
    panda$core$Bit $tmp623 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(type621->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp623.value) {
    {
        panda$core$Object* $tmp624 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(type621->subtypes, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$ClassDecl* $tmp625 = org$pandalanguage$pandac$Compiler$specialize$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl(self, p_cl, ((org$pandalanguage$pandac$Type*) $tmp624));
        return $tmp625;
    }
    }
    panda$core$Bit $tmp626 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(type621->typeKind, ((panda$core$Int64) { 10 }));
    if ($tmp626.value) {
    {
        return p_cl;
    }
    }
    panda$core$Bit $tmp627 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(type621->typeKind, ((panda$core$Int64) { 21 }));
    PANDA_ASSERT($tmp627.value);
    panda$core$Object* $tmp629 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) type621)->name));
    result628 = ((org$pandalanguage$pandac$ClassDecl*) $tmp629);
    if (((panda$core$Bit) { result628 == NULL }).value) {
    {
        panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_cl));
        org$pandalanguage$pandac$Annotations* $tmp631 = (org$pandalanguage$pandac$Annotations*) malloc(24);
        $tmp631->$class = (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class;
        $tmp631->refCount.value = 1;
        panda$core$Int64 $tmp633 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 11 }));
        panda$core$Int64 $tmp634 = panda$core$Int64$$BNOT$R$panda$core$Int64($tmp633);
        panda$core$Int64 $tmp635 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(p_cl->annotations->flags, $tmp634);
        org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp631, $tmp635);
        annotations630 = $tmp631;
        org$pandalanguage$pandac$Type* $tmp637 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, type621, p_cl->rawSuper);
        supertype636 = $tmp637;
        panda$collections$Array* $tmp639 = (panda$collections$Array*) malloc(40);
        $tmp639->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp639->refCount.value = 1;
        panda$collections$Array$init($tmp639);
        interfaces638 = $tmp639;
        {
            ITable* $tmp642 = ((panda$collections$Iterable*) p_cl->rawInterfaces)->$class->itable;
            while ($tmp642->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp642 = $tmp642->next;
            }
            $fn644 $tmp643 = $tmp642->methods[0];
            panda$collections$Iterator* $tmp645 = $tmp643(((panda$collections$Iterable*) p_cl->rawInterfaces));
            intf$Iter641 = $tmp645;
            $l646:;
            ITable* $tmp648 = intf$Iter641->$class->itable;
            while ($tmp648->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp648 = $tmp648->next;
            }
            $fn650 $tmp649 = $tmp648->methods[0];
            panda$core$Bit $tmp651 = $tmp649(intf$Iter641);
            panda$core$Bit $tmp652 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp651);
            if (!$tmp652.value) goto $l647;
            {
                ITable* $tmp654 = intf$Iter641->$class->itable;
                while ($tmp654->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp654 = $tmp654->next;
                }
                $fn656 $tmp655 = $tmp654->methods[1];
                panda$core$Object* $tmp657 = $tmp655(intf$Iter641);
                intf653 = ((org$pandalanguage$pandac$Type*) $tmp657);
                org$pandalanguage$pandac$Type* $tmp658 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, type621, intf653);
                panda$collections$Array$add$panda$collections$Array$T(interfaces638, ((panda$core$Object*) $tmp658));
            }
            goto $l646;
            $l647:;
        }
        panda$collections$HashMap* $tmp660 = (panda$collections$HashMap*) malloc(56);
        $tmp660->$class = (panda$core$Class*) &panda$collections$HashMap$class;
        $tmp660->refCount.value = 1;
        panda$collections$HashMap$init$panda$collections$MapView$LTpanda$collections$HashMap$K$Cpanda$collections$HashMap$V$GT($tmp660, p_cl->aliases);
        aliases659 = $tmp660;
        ITable* $tmp663 = ((panda$collections$CollectionView*) p_cl->parameters)->$class->itable;
        while ($tmp663->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp663 = $tmp663->next;
        }
        $fn665 $tmp664 = $tmp663->methods[0];
        panda$core$Int64 $tmp666 = $tmp664(((panda$collections$CollectionView*) p_cl->parameters));
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp662, ((panda$core$Int64) { 0 }), $tmp666, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
        int64_t $tmp668 = $tmp662.start.value;
        panda$core$Int64 i667 = { $tmp668 };
        int64_t $tmp670 = $tmp662.end.value;
        int64_t $tmp671 = $tmp662.step.value;
        bool $tmp672 = $tmp662.inclusive.value;
        bool $tmp679 = $tmp671 > 0;
        if ($tmp679) goto $l677; else goto $l678;
        $l677:;
        if ($tmp672) goto $l680; else goto $l681;
        $l680:;
        if ($tmp668 <= $tmp670) goto $l673; else goto $l675;
        $l681:;
        if ($tmp668 < $tmp670) goto $l673; else goto $l675;
        $l678:;
        if ($tmp672) goto $l682; else goto $l683;
        $l682:;
        if ($tmp668 >= $tmp670) goto $l673; else goto $l675;
        $l683:;
        if ($tmp668 > $tmp670) goto $l673; else goto $l675;
        $l673:;
        {
            ITable* $tmp685 = ((panda$collections$ListView*) p_cl->parameters)->$class->itable;
            while ($tmp685->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp685 = $tmp685->next;
            }
            $fn687 $tmp686 = $tmp685->methods[0];
            panda$core$Object* $tmp688 = $tmp686(((panda$collections$ListView*) p_cl->parameters), i667);
            panda$core$Int64 $tmp689 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i667, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp690 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(type621->subtypes, $tmp689);
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(aliases659, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp688))->name), ((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp690))->name));
        }
        $l676:;
        if ($tmp679) goto $l692; else goto $l693;
        $l692:;
        int64_t $tmp694 = $tmp670 - i667.value;
        if ($tmp672) goto $l695; else goto $l696;
        $l695:;
        if ($tmp694 >= $tmp671) goto $l691; else goto $l675;
        $l696:;
        if ($tmp694 > $tmp671) goto $l691; else goto $l675;
        $l693:;
        int64_t $tmp698 = i667.value - $tmp670;
        if ($tmp672) goto $l699; else goto $l700;
        $l699:;
        if ($tmp698 >= -$tmp671) goto $l691; else goto $l675;
        $l700:;
        if ($tmp698 > -$tmp671) goto $l691; else goto $l675;
        $l691:;
        i667.value += $tmp671;
        goto $l673;
        $l675:;
        org$pandalanguage$pandac$ClassDecl* $tmp702 = (org$pandalanguage$pandac$ClassDecl*) malloc(161);
        $tmp702->$class = (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$class;
        $tmp702->refCount.value = 1;
        panda$collections$Array* $tmp704 = (panda$collections$Array*) malloc(40);
        $tmp704->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp704->refCount.value = 1;
        panda$collections$Array$init($tmp704);
        panda$core$Object* $tmp706 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_cl->symbolTable->parents, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$ClassDecl$init$panda$io$File$panda$core$Int64$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type$Q$panda$collections$Array$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable($tmp702, p_cl->source, ((org$pandalanguage$pandac$Symbol*) p_cl)->offset, ((panda$collections$MapView*) aliases659), p_cl->doccomment, annotations630, p_cl->classKind, ((org$pandalanguage$pandac$Symbol*) type621)->name, supertype636, interfaces638, $tmp704, ((org$pandalanguage$pandac$SymbolTable*) $tmp706));
        result628 = $tmp702;
        result628->external = ((panda$core$Bit) { false });
        {
            ITable* $tmp708 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
            while ($tmp708->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp708 = $tmp708->next;
            }
            $fn710 $tmp709 = $tmp708->methods[0];
            panda$collections$Iterator* $tmp711 = $tmp709(((panda$collections$Iterable*) p_cl->methods));
            m$Iter707 = $tmp711;
            $l712:;
            ITable* $tmp714 = m$Iter707->$class->itable;
            while ($tmp714->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp714 = $tmp714->next;
            }
            $fn716 $tmp715 = $tmp714->methods[0];
            panda$core$Bit $tmp717 = $tmp715(m$Iter707);
            panda$core$Bit $tmp718 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp717);
            if (!$tmp718.value) goto $l713;
            {
                ITable* $tmp720 = m$Iter707->$class->itable;
                while ($tmp720->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp720 = $tmp720->next;
                }
                $fn722 $tmp721 = $tmp720->methods[1];
                panda$core$Object* $tmp723 = $tmp721(m$Iter707);
                m719 = ((org$pandalanguage$pandac$MethodDecl*) $tmp723);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m719);
                panda$collections$Array* $tmp725 = (panda$collections$Array*) malloc(40);
                $tmp725->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp725->refCount.value = 1;
                panda$collections$Array$init($tmp725);
                parameters724 = $tmp725;
                {
                    ITable* $tmp728 = ((panda$collections$Iterable*) m719->parameters)->$class->itable;
                    while ($tmp728->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp728 = $tmp728->next;
                    }
                    $fn730 $tmp729 = $tmp728->methods[0];
                    panda$collections$Iterator* $tmp731 = $tmp729(((panda$collections$Iterable*) m719->parameters));
                    p$Iter727 = $tmp731;
                    $l732:;
                    ITable* $tmp734 = p$Iter727->$class->itable;
                    while ($tmp734->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp734 = $tmp734->next;
                    }
                    $fn736 $tmp735 = $tmp734->methods[0];
                    panda$core$Bit $tmp737 = $tmp735(p$Iter727);
                    panda$core$Bit $tmp738 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp737);
                    if (!$tmp738.value) goto $l733;
                    {
                        ITable* $tmp740 = p$Iter727->$class->itable;
                        while ($tmp740->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp740 = $tmp740->next;
                        }
                        $fn742 $tmp741 = $tmp740->methods[1];
                        panda$core$Object* $tmp743 = $tmp741(p$Iter727);
                        p739 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp743);
                        org$pandalanguage$pandac$MethodDecl$Parameter* $tmp744 = (org$pandalanguage$pandac$MethodDecl$Parameter*) malloc(32);
                        $tmp744->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class;
                        $tmp744->refCount.value = 1;
                        org$pandalanguage$pandac$Type* $tmp746 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, type621, p739->type);
                        org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp744, p739->name, $tmp746);
                        panda$collections$Array$add$panda$collections$Array$T(parameters724, ((panda$core$Object*) $tmp744));
                    }
                    goto $l732;
                    $l733:;
                }
                org$pandalanguage$pandac$MethodDecl* $tmp748 = (org$pandalanguage$pandac$MethodDecl*) malloc(105);
                $tmp748->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class;
                $tmp748->refCount.value = 1;
                org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$panda$core$Int64$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp748, result628, ((org$pandalanguage$pandac$Symbol*) m719)->offset, m719->doccomment, m719->annotations, m719->methodKind, ((org$pandalanguage$pandac$Symbol*) m719)->name, parameters724, m719->returnType, m719->body);
                clone747 = $tmp748;
                panda$collections$Array$add$panda$collections$Array$T(result628->methods, ((panda$core$Object*) clone747));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result628->symbolTable, ((org$pandalanguage$pandac$Symbol*) clone747));
            }
            goto $l712;
            $l713:;
        }
        {
            ITable* $tmp751 = ((panda$collections$Iterable*) p_cl->fields)->$class->itable;
            while ($tmp751->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp751 = $tmp751->next;
            }
            $fn753 $tmp752 = $tmp751->methods[0];
            panda$collections$Iterator* $tmp754 = $tmp752(((panda$collections$Iterable*) p_cl->fields));
            f$Iter750 = $tmp754;
            $l755:;
            ITable* $tmp757 = f$Iter750->$class->itable;
            while ($tmp757->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp757 = $tmp757->next;
            }
            $fn759 $tmp758 = $tmp757->methods[0];
            panda$core$Bit $tmp760 = $tmp758(f$Iter750);
            panda$core$Bit $tmp761 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp760);
            if (!$tmp761.value) goto $l756;
            {
                ITable* $tmp763 = f$Iter750->$class->itable;
                while ($tmp763->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp763 = $tmp763->next;
                }
                $fn765 $tmp764 = $tmp763->methods[1];
                panda$core$Object* $tmp766 = $tmp764(f$Iter750);
                f762 = ((org$pandalanguage$pandac$FieldDecl*) $tmp766);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self, f762);
                org$pandalanguage$pandac$FieldDecl* $tmp768 = (org$pandalanguage$pandac$FieldDecl*) malloc(97);
                $tmp768->$class = (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class;
                $tmp768->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp770 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, type621, f762->type);
                org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$panda$core$Int64$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp768, result628, ((org$pandalanguage$pandac$Symbol*) f762)->offset, f762->doccomment, f762->annotations, f762->fieldKind, ((org$pandalanguage$pandac$Symbol*) f762)->name, $tmp770, f762->rawValue);
                clone767 = $tmp768;
                panda$collections$Array$add$panda$collections$Array$T(result628->fields, ((panda$core$Object*) clone767));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result628->symbolTable, ((org$pandalanguage$pandac$Symbol*) clone767));
            }
            goto $l755;
            $l756:;
        }
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classes, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) result628)->name), ((panda$core$Object*) result628));
        panda$collections$Array$add$panda$collections$Array$T(self->compilationQueue, ((panda$core$Object*) result628));
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    }
    }
    return result628;
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type) {
    org$pandalanguage$pandac$ClassDecl* result771;
    PANDA_ASSERT(p_type->resolved.value);
    switch (p_type->typeKind.value) {
        case 10:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp772 = org$pandalanguage$pandac$Compiler$getClass$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Symbol*) p_type)->offset, ((org$pandalanguage$pandac$Symbol*) p_type)->name);
            result771 = $tmp772;
        }
        break;
        case 11:
        case 21:
        {
            panda$core$Object* $tmp773 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$ClassDecl* $tmp774 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Type*) $tmp773));
            result771 = $tmp774;
        }
        break;
        case 22:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp775 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_type->parameter->bound);
            return $tmp775;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
    panda$core$Bit $tmp776 = org$pandalanguage$pandac$Annotations$isSpecialize$R$panda$core$Bit(result771->annotations);
    if ($tmp776.value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp777 = org$pandalanguage$pandac$Compiler$specialize$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl(self, result771, p_type);
        result771 = $tmp777;
    }
    }
    return result771;
}
panda$collections$Set* org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_t) {
    org$pandalanguage$pandac$ClassDecl* cl778;
    panda$collections$Set* result780;
    panda$collections$Iterator* intf$Iter785;
    org$pandalanguage$pandac$Type* intf797;
    org$pandalanguage$pandac$ClassDecl* $tmp779 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_t);
    cl778 = $tmp779;
    PANDA_ASSERT(((panda$core$Bit) { cl778 != NULL }).value);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, cl778);
    panda$collections$Set* $tmp781 = (panda$collections$Set*) malloc(24);
    $tmp781->$class = (panda$core$Class*) &panda$collections$Set$class;
    $tmp781->refCount.value = 1;
    panda$collections$Set$init($tmp781);
    result780 = $tmp781;
    if (((panda$core$Bit) { cl778->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp783 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_t, cl778->rawSuper);
        panda$collections$Set* $tmp784 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self, $tmp783);
        panda$collections$Set$addAll$panda$collections$CollectionView$LTpanda$collections$Set$T$GT(result780, ((panda$collections$CollectionView*) $tmp784));
    }
    }
    {
        ITable* $tmp786 = ((panda$collections$Iterable*) cl778->rawInterfaces)->$class->itable;
        while ($tmp786->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp786 = $tmp786->next;
        }
        $fn788 $tmp787 = $tmp786->methods[0];
        panda$collections$Iterator* $tmp789 = $tmp787(((panda$collections$Iterable*) cl778->rawInterfaces));
        intf$Iter785 = $tmp789;
        $l790:;
        ITable* $tmp792 = intf$Iter785->$class->itable;
        while ($tmp792->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp792 = $tmp792->next;
        }
        $fn794 $tmp793 = $tmp792->methods[0];
        panda$core$Bit $tmp795 = $tmp793(intf$Iter785);
        panda$core$Bit $tmp796 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp795);
        if (!$tmp796.value) goto $l791;
        {
            ITable* $tmp798 = intf$Iter785->$class->itable;
            while ($tmp798->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp798 = $tmp798->next;
            }
            $fn800 $tmp799 = $tmp798->methods[1];
            panda$core$Object* $tmp801 = $tmp799(intf$Iter785);
            intf797 = ((org$pandalanguage$pandac$Type*) $tmp801);
            org$pandalanguage$pandac$Type* $tmp802 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_t, intf797);
            panda$collections$Set* $tmp803 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self, $tmp802);
            panda$collections$Set$addAll$panda$collections$CollectionView$LTpanda$collections$Set$T$GT(result780, ((panda$collections$CollectionView*) $tmp803));
        }
        goto $l790;
        $l791:;
    }
    panda$core$Bit $tmp804 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(cl778->classKind, ((panda$core$Int64) { 5012 }));
    if ($tmp804.value) {
    {
        panda$collections$Set$add$panda$collections$Set$T(result780, ((panda$collections$Key*) p_t));
    }
    }
    return result780;
}
panda$core$Bit org$pandalanguage$pandac$Compiler$signatureMatch$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_t1, org$pandalanguage$pandac$Type* p_t2) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp810;
    panda$core$Bit $tmp805 = org$pandalanguage$pandac$Type$isMethod$R$panda$core$Bit(p_t1);
    PANDA_ASSERT($tmp805.value);
    panda$core$Bit $tmp806 = org$pandalanguage$pandac$Type$isMethod$R$panda$core$Bit(p_t2);
    PANDA_ASSERT($tmp806.value);
    panda$core$Int64 $tmp807 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_t1->subtypes);
    panda$core$Int64 $tmp808 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_t2->subtypes);
    panda$core$Bit $tmp809 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp807, $tmp808);
    if ($tmp809.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Int64 $tmp811 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_t1->subtypes);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp810, ((panda$core$Int64) { 0 }), $tmp811, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp813 = $tmp810.start.value;
    panda$core$Int64 i812 = { $tmp813 };
    int64_t $tmp815 = $tmp810.end.value;
    int64_t $tmp816 = $tmp810.step.value;
    bool $tmp817 = $tmp810.inclusive.value;
    bool $tmp824 = $tmp816 > 0;
    if ($tmp824) goto $l822; else goto $l823;
    $l822:;
    if ($tmp817) goto $l825; else goto $l826;
    $l825:;
    if ($tmp813 <= $tmp815) goto $l818; else goto $l820;
    $l826:;
    if ($tmp813 < $tmp815) goto $l818; else goto $l820;
    $l823:;
    if ($tmp817) goto $l827; else goto $l828;
    $l827:;
    if ($tmp813 >= $tmp815) goto $l818; else goto $l820;
    $l828:;
    if ($tmp813 > $tmp815) goto $l818; else goto $l820;
    $l818:;
    {
        panda$core$Object* $tmp830 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t1->subtypes, i812);
        panda$core$Object* $tmp831 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t2->subtypes, i812);
        panda$core$Bit $tmp832 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp830), ((org$pandalanguage$pandac$Type*) $tmp831));
        if ($tmp832.value) {
        {
            return ((panda$core$Bit) { false });
        }
        }
    }
    $l821:;
    if ($tmp824) goto $l834; else goto $l835;
    $l834:;
    int64_t $tmp836 = $tmp815 - i812.value;
    if ($tmp817) goto $l837; else goto $l838;
    $l837:;
    if ($tmp836 >= $tmp816) goto $l833; else goto $l820;
    $l838:;
    if ($tmp836 > $tmp816) goto $l833; else goto $l820;
    $l835:;
    int64_t $tmp840 = i812.value - $tmp815;
    if ($tmp817) goto $l841; else goto $l842;
    $l841:;
    if ($tmp840 >= -$tmp816) goto $l833; else goto $l820;
    $l842:;
    if ($tmp840 > -$tmp816) goto $l833; else goto $l820;
    $l833:;
    i812.value += $tmp816;
    goto $l818;
    $l820:;
    return ((panda$core$Bit) { true });
}
org$pandalanguage$pandac$MethodDecl* org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_owner, panda$core$String* p_name, org$pandalanguage$pandac$Type* p_methodType, panda$core$Bit p_checkInterfaces) {
    org$pandalanguage$pandac$ClassDecl* cl844;
    panda$collections$Iterator* test$Iter846;
    org$pandalanguage$pandac$MethodDecl* test858;
    panda$collections$Iterator* raw$Iter871;
    org$pandalanguage$pandac$Type* raw883;
    org$pandalanguage$pandac$MethodDecl* result888;
    org$pandalanguage$pandac$ClassDecl* $tmp845 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_owner);
    cl844 = $tmp845;
    PANDA_ASSERT(((panda$core$Bit) { cl844 != NULL }).value);
    {
        ITable* $tmp847 = ((panda$collections$Iterable*) cl844->methods)->$class->itable;
        while ($tmp847->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp847 = $tmp847->next;
        }
        $fn849 $tmp848 = $tmp847->methods[0];
        panda$collections$Iterator* $tmp850 = $tmp848(((panda$collections$Iterable*) cl844->methods));
        test$Iter846 = $tmp850;
        $l851:;
        ITable* $tmp853 = test$Iter846->$class->itable;
        while ($tmp853->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp853 = $tmp853->next;
        }
        $fn855 $tmp854 = $tmp853->methods[0];
        panda$core$Bit $tmp856 = $tmp854(test$Iter846);
        panda$core$Bit $tmp857 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp856);
        if (!$tmp857.value) goto $l852;
        {
            ITable* $tmp859 = test$Iter846->$class->itable;
            while ($tmp859->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp859 = $tmp859->next;
            }
            $fn861 $tmp860 = $tmp859->methods[1];
            panda$core$Object* $tmp862 = $tmp860(test$Iter846);
            test858 = ((org$pandalanguage$pandac$MethodDecl*) $tmp862);
            panda$core$Bit $tmp863 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) test858)->name, p_name);
            if ($tmp863.value) {
            {
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, test858);
                org$pandalanguage$pandac$Type* $tmp864 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, test858);
                org$pandalanguage$pandac$Type* $tmp865 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_owner, $tmp864);
                panda$core$Bit $tmp866 = org$pandalanguage$pandac$Compiler$signatureMatch$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, $tmp865, p_methodType);
                if ($tmp866.value) {
                {
                    return test858;
                }
                }
            }
            }
        }
        goto $l851;
        $l852:;
    }
    bool $tmp867 = p_checkInterfaces.value;
    if ($tmp867) goto $l868;
    panda$core$Bit $tmp869 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(cl844->classKind, ((panda$core$Int64) { 5012 }));
    $tmp867 = $tmp869.value;
    $l868:;
    panda$core$Bit $tmp870 = { $tmp867 };
    if ($tmp870.value) {
    {
        {
            ITable* $tmp872 = ((panda$collections$Iterable*) cl844->rawInterfaces)->$class->itable;
            while ($tmp872->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp872 = $tmp872->next;
            }
            $fn874 $tmp873 = $tmp872->methods[0];
            panda$collections$Iterator* $tmp875 = $tmp873(((panda$collections$Iterable*) cl844->rawInterfaces));
            raw$Iter871 = $tmp875;
            $l876:;
            ITable* $tmp878 = raw$Iter871->$class->itable;
            while ($tmp878->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp878 = $tmp878->next;
            }
            $fn880 $tmp879 = $tmp878->methods[0];
            panda$core$Bit $tmp881 = $tmp879(raw$Iter871);
            panda$core$Bit $tmp882 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp881);
            if (!$tmp882.value) goto $l877;
            {
                ITable* $tmp884 = raw$Iter871->$class->itable;
                while ($tmp884->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp884 = $tmp884->next;
                }
                $fn886 $tmp885 = $tmp884->methods[1];
                panda$core$Object* $tmp887 = $tmp885(raw$Iter871);
                raw883 = ((org$pandalanguage$pandac$Type*) $tmp887);
                org$pandalanguage$pandac$Type* $tmp889 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_owner, raw883);
                org$pandalanguage$pandac$MethodDecl* $tmp890 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp889, p_name, p_methodType, p_checkInterfaces);
                result888 = $tmp890;
                if (((panda$core$Bit) { result888 != NULL }).value) {
                {
                    return result888;
                }
                }
            }
            goto $l876;
            $l877:;
        }
    }
    }
    if (((panda$core$Bit) { cl844->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp891 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_owner, cl844->rawSuper);
        org$pandalanguage$pandac$MethodDecl* $tmp892 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp891, p_name, p_methodType, p_checkInterfaces);
        return $tmp892;
    }
    }
    return NULL;
}
org$pandalanguage$pandac$MethodDecl* org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$Type* methodType893;
    org$pandalanguage$pandac$Type* owner895;
    panda$collections$Iterator* raw$Iter897;
    org$pandalanguage$pandac$Type* raw909;
    org$pandalanguage$pandac$MethodDecl* result914;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
    org$pandalanguage$pandac$Type* $tmp894 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, p_m);
    methodType893 = $tmp894;
    org$pandalanguage$pandac$Type* $tmp896 = org$pandalanguage$pandac$ClassDecl$typeWithParameters$R$org$pandalanguage$pandac$Type(p_m->owner);
    owner895 = $tmp896;
    {
        ITable* $tmp898 = ((panda$collections$Iterable*) p_m->owner->rawInterfaces)->$class->itable;
        while ($tmp898->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp898 = $tmp898->next;
        }
        $fn900 $tmp899 = $tmp898->methods[0];
        panda$collections$Iterator* $tmp901 = $tmp899(((panda$collections$Iterable*) p_m->owner->rawInterfaces));
        raw$Iter897 = $tmp901;
        $l902:;
        ITable* $tmp904 = raw$Iter897->$class->itable;
        while ($tmp904->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp904 = $tmp904->next;
        }
        $fn906 $tmp905 = $tmp904->methods[0];
        panda$core$Bit $tmp907 = $tmp905(raw$Iter897);
        panda$core$Bit $tmp908 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp907);
        if (!$tmp908.value) goto $l903;
        {
            ITable* $tmp910 = raw$Iter897->$class->itable;
            while ($tmp910->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp910 = $tmp910->next;
            }
            $fn912 $tmp911 = $tmp910->methods[1];
            panda$core$Object* $tmp913 = $tmp911(raw$Iter897);
            raw909 = ((org$pandalanguage$pandac$Type*) $tmp913);
            org$pandalanguage$pandac$Type* $tmp915 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, owner895, raw909);
            org$pandalanguage$pandac$MethodDecl* $tmp916 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp915, ((org$pandalanguage$pandac$Symbol*) p_m)->name, methodType893, ((panda$core$Bit) { true }));
            result914 = $tmp916;
            if (((panda$core$Bit) { result914 != NULL }).value) {
            {
                return result914;
            }
            }
        }
        goto $l902;
        $l903:;
    }
    if (((panda$core$Bit) { p_m->owner->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp917 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, owner895, p_m->owner->rawSuper);
        org$pandalanguage$pandac$MethodDecl* $tmp918 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp917, ((org$pandalanguage$pandac$Symbol*) p_m)->name, methodType893, ((panda$core$Bit) { true }));
        return $tmp918;
    }
    }
    return NULL;
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$interfaceMethods$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl, org$pandalanguage$pandac$Type* p_intf) {
    org$pandalanguage$pandac$ClassDecl* intfClass919;
    panda$collections$Array* result921;
    panda$collections$Iterator* m$Iter924;
    org$pandalanguage$pandac$MethodDecl* m936;
    org$pandalanguage$pandac$MethodDecl* found941;
    org$pandalanguage$pandac$ClassDecl* $tmp920 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_intf);
    intfClass919 = $tmp920;
    PANDA_ASSERT(((panda$core$Bit) { intfClass919 != NULL }).value);
    panda$collections$Array* $tmp922 = (panda$collections$Array*) malloc(40);
    $tmp922->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp922->refCount.value = 1;
    panda$collections$Array$init($tmp922);
    result921 = $tmp922;
    {
        ITable* $tmp925 = ((panda$collections$Iterable*) intfClass919->methods)->$class->itable;
        while ($tmp925->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp925 = $tmp925->next;
        }
        $fn927 $tmp926 = $tmp925->methods[0];
        panda$collections$Iterator* $tmp928 = $tmp926(((panda$collections$Iterable*) intfClass919->methods));
        m$Iter924 = $tmp928;
        $l929:;
        ITable* $tmp931 = m$Iter924->$class->itable;
        while ($tmp931->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp931 = $tmp931->next;
        }
        $fn933 $tmp932 = $tmp931->methods[0];
        panda$core$Bit $tmp934 = $tmp932(m$Iter924);
        panda$core$Bit $tmp935 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp934);
        if (!$tmp935.value) goto $l930;
        {
            ITable* $tmp937 = m$Iter924->$class->itable;
            while ($tmp937->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp937 = $tmp937->next;
            }
            $fn939 $tmp938 = $tmp937->methods[1];
            panda$core$Object* $tmp940 = $tmp938(m$Iter924);
            m936 = ((org$pandalanguage$pandac$MethodDecl*) $tmp940);
            org$pandalanguage$pandac$Type* $tmp942 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
            org$pandalanguage$pandac$Type* $tmp943 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, m936);
            org$pandalanguage$pandac$Type* $tmp944 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_intf, $tmp943);
            org$pandalanguage$pandac$MethodDecl* $tmp945 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp942, ((org$pandalanguage$pandac$Symbol*) m936)->name, $tmp944, ((panda$core$Bit) { false }));
            found941 = $tmp945;
            PANDA_ASSERT(((panda$core$Bit) { found941 != NULL }).value);
            panda$collections$Array$add$panda$collections$Array$T(result921, ((panda$core$Object*) found941));
        }
        goto $l929;
        $l930:;
    }
    return ((panda$collections$ListView*) result921);
}
org$pandalanguage$pandac$SymbolTable* org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$ClassDecl* superCl947;
    panda$collections$Iterator* rawIntf$Iter950;
    org$pandalanguage$pandac$Type* rawIntf962;
    org$pandalanguage$pandac$ClassDecl* intf967;
    panda$core$Bit $tmp946 = panda$core$Bit$$NOT$R$panda$core$Bit(p_cl->symbolTableResolved);
    if ($tmp946.value) {
    {
        p_cl->symbolTableResolved = ((panda$core$Bit) { true });
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
        if (((panda$core$Bit) { p_cl->rawSuper != NULL }).value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp948 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_cl->rawSuper);
            superCl947 = $tmp948;
            if (((panda$core$Bit) { superCl947 != NULL }).value) {
            {
                org$pandalanguage$pandac$SymbolTable* $tmp949 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, superCl947);
                panda$collections$Array$add$panda$collections$Array$T(p_cl->symbolTable->parents, ((panda$core$Object*) $tmp949));
            }
            }
        }
        }
        {
            ITable* $tmp951 = ((panda$collections$Iterable*) p_cl->rawInterfaces)->$class->itable;
            while ($tmp951->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp951 = $tmp951->next;
            }
            $fn953 $tmp952 = $tmp951->methods[0];
            panda$collections$Iterator* $tmp954 = $tmp952(((panda$collections$Iterable*) p_cl->rawInterfaces));
            rawIntf$Iter950 = $tmp954;
            $l955:;
            ITable* $tmp957 = rawIntf$Iter950->$class->itable;
            while ($tmp957->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp957 = $tmp957->next;
            }
            $fn959 $tmp958 = $tmp957->methods[0];
            panda$core$Bit $tmp960 = $tmp958(rawIntf$Iter950);
            panda$core$Bit $tmp961 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp960);
            if (!$tmp961.value) goto $l956;
            {
                ITable* $tmp963 = rawIntf$Iter950->$class->itable;
                while ($tmp963->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp963 = $tmp963->next;
                }
                $fn965 $tmp964 = $tmp963->methods[1];
                panda$core$Object* $tmp966 = $tmp964(rawIntf$Iter950);
                rawIntf962 = ((org$pandalanguage$pandac$Type*) $tmp966);
                org$pandalanguage$pandac$ClassDecl* $tmp968 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, rawIntf962);
                intf967 = $tmp968;
                if (((panda$core$Bit) { intf967 != NULL }).value) {
                {
                    org$pandalanguage$pandac$SymbolTable* $tmp969 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, intf967);
                    panda$collections$Array$add$panda$collections$Array$T(p_cl->symbolTable->parents, ((panda$core$Object*) $tmp969));
                }
                }
            }
            goto $l955;
            $l956:;
        }
    }
    }
    return p_cl->symbolTable;
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$ClassDecl* superCl972;
    panda$collections$Iterator* derived$Iter975;
    org$pandalanguage$pandac$MethodDecl* derived987;
    panda$core$Bit found997;
    panda$core$Range$LTpanda$core$Int64$GT $tmp998;
    org$pandalanguage$pandac$MethodDecl* base1018;
    panda$core$Int64 $tmp970 = panda$collections$Array$get_count$R$panda$core$Int64(p_cl->virtualMethods);
    panda$core$Bit $tmp971 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp970, ((panda$core$Int64) { 0 }));
    if ($tmp971.value) {
    {
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
        panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_cl));
        panda$collections$Stack$push$panda$collections$Stack$T(self->currentFile, ((panda$core$Object*) p_cl->source));
        if (((panda$core$Bit) { p_cl->rawSuper != NULL }).value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp973 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_cl->rawSuper);
            superCl972 = $tmp973;
            if (((panda$core$Bit) { superCl972 == NULL }).value) {
            {
                panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
                panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentFile);
                return ((panda$collections$ListView*) p_cl->virtualMethods);
            }
            }
            panda$collections$ListView* $tmp974 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self, superCl972);
            panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(p_cl->virtualMethods, ((panda$collections$CollectionView*) $tmp974));
        }
        }
        {
            ITable* $tmp976 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
            while ($tmp976->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp976 = $tmp976->next;
            }
            $fn978 $tmp977 = $tmp976->methods[0];
            panda$collections$Iterator* $tmp979 = $tmp977(((panda$collections$Iterable*) p_cl->methods));
            derived$Iter975 = $tmp979;
            $l980:;
            ITable* $tmp982 = derived$Iter975->$class->itable;
            while ($tmp982->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp982 = $tmp982->next;
            }
            $fn984 $tmp983 = $tmp982->methods[0];
            panda$core$Bit $tmp985 = $tmp983(derived$Iter975);
            panda$core$Bit $tmp986 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp985);
            if (!$tmp986.value) goto $l981;
            {
                ITable* $tmp988 = derived$Iter975->$class->itable;
                while ($tmp988->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp988 = $tmp988->next;
                }
                $fn990 $tmp989 = $tmp988->methods[1];
                panda$core$Object* $tmp991 = $tmp989(derived$Iter975);
                derived987 = ((org$pandalanguage$pandac$MethodDecl*) $tmp991);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, derived987);
                panda$core$Bit $tmp993 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(derived987->methodKind, ((panda$core$Int64) { 59 }));
                bool $tmp992 = $tmp993.value;
                if ($tmp992) goto $l994;
                panda$core$Bit $tmp995 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(derived987->annotations);
                $tmp992 = $tmp995.value;
                $l994:;
                panda$core$Bit $tmp996 = { $tmp992 };
                if ($tmp996.value) {
                {
                    goto $l980;
                }
                }
                found997 = ((panda$core$Bit) { false });
                panda$core$Int64 $tmp999 = panda$collections$Array$get_count$R$panda$core$Int64(p_cl->virtualMethods);
                panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp998, ((panda$core$Int64) { 0 }), $tmp999, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
                int64_t $tmp1001 = $tmp998.start.value;
                panda$core$Int64 i1000 = { $tmp1001 };
                int64_t $tmp1003 = $tmp998.end.value;
                int64_t $tmp1004 = $tmp998.step.value;
                bool $tmp1005 = $tmp998.inclusive.value;
                bool $tmp1012 = $tmp1004 > 0;
                if ($tmp1012) goto $l1010; else goto $l1011;
                $l1010:;
                if ($tmp1005) goto $l1013; else goto $l1014;
                $l1013:;
                if ($tmp1001 <= $tmp1003) goto $l1006; else goto $l1008;
                $l1014:;
                if ($tmp1001 < $tmp1003) goto $l1006; else goto $l1008;
                $l1011:;
                if ($tmp1005) goto $l1015; else goto $l1016;
                $l1015:;
                if ($tmp1001 >= $tmp1003) goto $l1006; else goto $l1008;
                $l1016:;
                if ($tmp1001 > $tmp1003) goto $l1006; else goto $l1008;
                $l1006:;
                {
                    panda$core$Object* $tmp1019 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_cl->virtualMethods, i1000);
                    base1018 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1019);
                    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, base1018);
                    panda$core$Bit $tmp1020 = org$pandalanguage$pandac$MethodDecl$matches$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(derived987, base1018);
                    if ($tmp1020.value) {
                    {
                        found997 = ((panda$core$Bit) { true });
                        panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(p_cl->virtualMethods, i1000, ((panda$core$Object*) derived987));
                        goto $l1008;
                    }
                    }
                }
                $l1009:;
                if ($tmp1012) goto $l1022; else goto $l1023;
                $l1022:;
                int64_t $tmp1024 = $tmp1003 - i1000.value;
                if ($tmp1005) goto $l1025; else goto $l1026;
                $l1025:;
                if ($tmp1024 >= $tmp1004) goto $l1021; else goto $l1008;
                $l1026:;
                if ($tmp1024 > $tmp1004) goto $l1021; else goto $l1008;
                $l1023:;
                int64_t $tmp1028 = i1000.value - $tmp1003;
                if ($tmp1005) goto $l1029; else goto $l1030;
                $l1029:;
                if ($tmp1028 >= -$tmp1004) goto $l1021; else goto $l1008;
                $l1030:;
                if ($tmp1028 > -$tmp1004) goto $l1021; else goto $l1008;
                $l1021:;
                i1000.value += $tmp1004;
                goto $l1006;
                $l1008:;
                panda$core$Bit $tmp1032 = panda$core$Bit$$NOT$R$panda$core$Bit(found997);
                if ($tmp1032.value) {
                {
                    panda$collections$Array$add$panda$collections$Array$T(p_cl->virtualMethods, ((panda$core$Object*) derived987));
                }
                }
            }
            goto $l980;
            $l981:;
        }
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentFile);
    }
    }
    return ((panda$collections$ListView*) p_cl->virtualMethods);
}
void org$pandalanguage$pandac$Compiler$addInheritedMethods$org$pandalanguage$pandac$SymbolTable$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$SymbolTable* p_st, panda$core$String* p_name, panda$collections$Array* p_result, panda$collections$ListView* p_types) {
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$getMethodReference$org$pandalanguage$pandac$SymbolTable$org$pandalanguage$pandac$IRNode$Q$panda$core$String$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$SymbolTable* p_st, org$pandalanguage$pandac$IRNode* p_target, panda$core$String* p_name, panda$core$Int64 p_offset, panda$collections$ListView* p_types) {
    panda$collections$Array* methods1033;
    org$pandalanguage$pandac$Symbol* s1036;
    panda$collections$Iterator* m$Iter1042;
    org$pandalanguage$pandac$MethodDecl* m1054;
    panda$collections$Iterator* p$Iter1061;
    org$pandalanguage$pandac$SymbolTable* p1073;
    panda$collections$Array* children1078;
    panda$collections$Array* types1090;
    panda$collections$Iterator* m$Iter1093;
    org$pandalanguage$pandac$MethodRef* m1105;
    panda$collections$Array* $tmp1034 = (panda$collections$Array*) malloc(40);
    $tmp1034->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1034->refCount.value = 1;
    panda$collections$Array$init($tmp1034);
    methods1033 = $tmp1034;
    org$pandalanguage$pandac$Symbol* $tmp1037 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(p_st, p_name);
    s1036 = $tmp1037;
    PANDA_ASSERT(((panda$core$Bit) { s1036 != NULL }).value);
    panda$core$Bit $tmp1038 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(s1036->kind, ((panda$core$Int64) { 204 }));
    if ($tmp1038.value) {
    {
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, ((org$pandalanguage$pandac$MethodDecl*) s1036));
        org$pandalanguage$pandac$MethodRef* $tmp1039 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
        $tmp1039->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
        $tmp1039->refCount.value = 1;
        org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp1039, ((org$pandalanguage$pandac$MethodDecl*) s1036), p_types);
        panda$collections$Array$add$panda$collections$Array$T(methods1033, ((panda$core$Object*) $tmp1039));
    }
    }
    else {
    {
        panda$core$Bit $tmp1041 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(s1036->kind, ((panda$core$Int64) { 205 }));
        PANDA_ASSERT($tmp1041.value);
        {
            ITable* $tmp1043 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s1036)->methods)->$class->itable;
            while ($tmp1043->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1043 = $tmp1043->next;
            }
            $fn1045 $tmp1044 = $tmp1043->methods[0];
            panda$collections$Iterator* $tmp1046 = $tmp1044(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s1036)->methods));
            m$Iter1042 = $tmp1046;
            $l1047:;
            ITable* $tmp1049 = m$Iter1042->$class->itable;
            while ($tmp1049->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1049 = $tmp1049->next;
            }
            $fn1051 $tmp1050 = $tmp1049->methods[0];
            panda$core$Bit $tmp1052 = $tmp1050(m$Iter1042);
            panda$core$Bit $tmp1053 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1052);
            if (!$tmp1053.value) goto $l1048;
            {
                ITable* $tmp1055 = m$Iter1042->$class->itable;
                while ($tmp1055->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1055 = $tmp1055->next;
                }
                $fn1057 $tmp1056 = $tmp1055->methods[1];
                panda$core$Object* $tmp1058 = $tmp1056(m$Iter1042);
                m1054 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1058);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m1054);
                org$pandalanguage$pandac$MethodRef* $tmp1059 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                $tmp1059->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                $tmp1059->refCount.value = 1;
                org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp1059, m1054, p_types);
                panda$collections$Array$add$panda$collections$Array$T(methods1033, ((panda$core$Object*) $tmp1059));
            }
            goto $l1047;
            $l1048:;
        }
    }
    }
    {
        ITable* $tmp1062 = ((panda$collections$Iterable*) p_st->parents)->$class->itable;
        while ($tmp1062->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1062 = $tmp1062->next;
        }
        $fn1064 $tmp1063 = $tmp1062->methods[0];
        panda$collections$Iterator* $tmp1065 = $tmp1063(((panda$collections$Iterable*) p_st->parents));
        p$Iter1061 = $tmp1065;
        $l1066:;
        ITable* $tmp1068 = p$Iter1061->$class->itable;
        while ($tmp1068->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1068 = $tmp1068->next;
        }
        $fn1070 $tmp1069 = $tmp1068->methods[0];
        panda$core$Bit $tmp1071 = $tmp1069(p$Iter1061);
        panda$core$Bit $tmp1072 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1071);
        if (!$tmp1072.value) goto $l1067;
        {
            ITable* $tmp1074 = p$Iter1061->$class->itable;
            while ($tmp1074->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1074 = $tmp1074->next;
            }
            $fn1076 $tmp1075 = $tmp1074->methods[1];
            panda$core$Object* $tmp1077 = $tmp1075(p$Iter1061);
            p1073 = ((org$pandalanguage$pandac$SymbolTable*) $tmp1077);
            org$pandalanguage$pandac$Compiler$addInheritedMethods$org$pandalanguage$pandac$SymbolTable$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p1073, p_name, methods1033, p_types);
        }
        goto $l1066;
        $l1067:;
    }
    panda$collections$Array* $tmp1079 = (panda$collections$Array*) malloc(40);
    $tmp1079->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1079->refCount.value = 1;
    panda$collections$Array$init($tmp1079);
    children1078 = $tmp1079;
    if (((panda$core$Bit) { p_target != NULL }).value) {
    {
        panda$collections$Array$add$panda$collections$Array$T(children1078, ((panda$core$Object*) p_target));
    }
    }
    panda$core$Int64 $tmp1081 = panda$collections$Array$get_count$R$panda$core$Int64(methods1033);
    panda$core$Bit $tmp1082 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1081, ((panda$core$Int64) { 1 }));
    if ($tmp1082.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp1083 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp1083->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp1083->refCount.value = 1;
        panda$core$Object* $tmp1085 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(methods1033, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Type* $tmp1086 = org$pandalanguage$pandac$MethodRef$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$MethodRef*) $tmp1085));
        panda$core$Object* $tmp1087 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(methods1033, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1083, ((panda$core$Int64) { 1002 }), p_offset, $tmp1086, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodRef*) $tmp1087)), ((panda$collections$ListView*) children1078));
        return $tmp1083;
    }
    }
    else {
    {
        panda$core$Int64 $tmp1088 = panda$collections$Array$get_count$R$panda$core$Int64(methods1033);
        panda$core$Bit $tmp1089 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1088, ((panda$core$Int64) { 0 }));
        PANDA_ASSERT($tmp1089.value);
        panda$collections$Array* $tmp1091 = (panda$collections$Array*) malloc(40);
        $tmp1091->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp1091->refCount.value = 1;
        panda$collections$Array$init($tmp1091);
        types1090 = $tmp1091;
        {
            ITable* $tmp1094 = ((panda$collections$Iterable*) methods1033)->$class->itable;
            while ($tmp1094->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1094 = $tmp1094->next;
            }
            $fn1096 $tmp1095 = $tmp1094->methods[0];
            panda$collections$Iterator* $tmp1097 = $tmp1095(((panda$collections$Iterable*) methods1033));
            m$Iter1093 = $tmp1097;
            $l1098:;
            ITable* $tmp1100 = m$Iter1093->$class->itable;
            while ($tmp1100->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1100 = $tmp1100->next;
            }
            $fn1102 $tmp1101 = $tmp1100->methods[0];
            panda$core$Bit $tmp1103 = $tmp1101(m$Iter1093);
            panda$core$Bit $tmp1104 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1103);
            if (!$tmp1104.value) goto $l1099;
            {
                ITable* $tmp1106 = m$Iter1093->$class->itable;
                while ($tmp1106->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1106 = $tmp1106->next;
                }
                $fn1108 $tmp1107 = $tmp1106->methods[1];
                panda$core$Object* $tmp1109 = $tmp1107(m$Iter1093);
                m1105 = ((org$pandalanguage$pandac$MethodRef*) $tmp1109);
                org$pandalanguage$pandac$Type* $tmp1110 = org$pandalanguage$pandac$MethodRef$type$R$org$pandalanguage$pandac$Type(m1105);
                panda$collections$Array$add$panda$collections$Array$T(types1090, ((panda$core$Object*) $tmp1110));
            }
            goto $l1098;
            $l1099:;
        }
        org$pandalanguage$pandac$IRNode* $tmp1111 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp1111->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp1111->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp1113 = (org$pandalanguage$pandac$Type*) malloc(80);
        $tmp1113->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
        $tmp1113->refCount.value = 1;
        org$pandalanguage$pandac$Type$init$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp1113, ((panda$collections$ListView*) types1090));
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1111, ((panda$core$Int64) { 1003 }), p_offset, $tmp1113, ((panda$core$Object*) methods1033), ((panda$collections$ListView*) children1078));
        return $tmp1111;
    }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$symbolRef$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_offset, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$Symbol* p_s, org$pandalanguage$pandac$SymbolTable* p_st) {
    org$pandalanguage$pandac$ClassDecl* cl1115;
    org$pandalanguage$pandac$FieldDecl* f1131;
    panda$collections$Array* children1134;
    org$pandalanguage$pandac$Type* effectiveType1139;
    org$pandalanguage$pandac$IRNode* result1144;
    switch (p_s->kind.value) {
        case 200:
        {
            PANDA_ASSERT(((panda$core$Bit) { p_target == NULL }).value);
            org$pandalanguage$pandac$ClassDecl* $tmp1116 = org$pandalanguage$pandac$Compiler$getClass$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_offset, ((org$pandalanguage$pandac$Alias*) p_s)->fullName);
            cl1115 = $tmp1116;
            if (((panda$core$Bit) { cl1115 != NULL }).value) {
            {
                org$pandalanguage$pandac$Type* $tmp1117 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl1115);
                org$pandalanguage$pandac$Compiler$checkGenericParameters$panda$core$Int64$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_offset, cl1115, $tmp1117);
                org$pandalanguage$pandac$IRNode* $tmp1118 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp1118->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1118->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1120 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$Type* $tmp1121 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl1115);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1118, ((panda$core$Int64) { 1001 }), p_offset, $tmp1120, $tmp1121);
                return $tmp1118;
            }
            }
            return NULL;
        }
        break;
        case 201:
        {
            org$pandalanguage$pandac$Type* $tmp1122 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) p_s));
            org$pandalanguage$pandac$Compiler$checkGenericParameters$panda$core$Int64$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_offset, ((org$pandalanguage$pandac$ClassDecl*) p_s), $tmp1122);
            org$pandalanguage$pandac$IRNode* $tmp1123 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp1123->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1123->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp1125 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$Type* $tmp1126 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) p_s));
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1123, ((panda$core$Int64) { 1001 }), p_offset, $tmp1125, $tmp1126);
            return $tmp1123;
        }
        break;
        case 204:
        case 205:
        {
            panda$collections$ListView* $tmp1127 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$IRNode$Q$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p_target);
            org$pandalanguage$pandac$IRNode* $tmp1128 = org$pandalanguage$pandac$Compiler$getMethodReference$org$pandalanguage$pandac$SymbolTable$org$pandalanguage$pandac$IRNode$Q$panda$core$String$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$IRNode(self, p_st, p_target, p_s->name, p_offset, $tmp1127);
            return $tmp1128;
        }
        break;
        case 208:
        {
            org$pandalanguage$pandac$IRNode* $tmp1129 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp1129->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1129->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp1129, ((panda$core$Int64) { 1016 }), p_offset, ((org$pandalanguage$pandac$Variable*) p_s)->type, ((org$pandalanguage$pandac$Variable*) p_s));
            return $tmp1129;
        }
        break;
        case 202:
        {
            f1131 = ((org$pandalanguage$pandac$FieldDecl*) p_s);
            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self, f1131);
            org$pandalanguage$pandac$Type* $tmp1132 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1133 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(f1131->type, $tmp1132);
            if ($tmp1133.value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp1135 = (panda$collections$Array*) malloc(40);
            $tmp1135->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1135->refCount.value = 1;
            panda$collections$Array$init($tmp1135);
            children1134 = $tmp1135;
            if (((panda$core$Bit) { p_target != NULL }).value) {
            {
                panda$core$Bit $tmp1137 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1024 }));
                if ($tmp1137.value) {
                {
                    org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_target->offset, &$s1138);
                    return NULL;
                }
                }
                org$pandalanguage$pandac$Type* $tmp1140 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_target->type, f1131->type);
                effectiveType1139 = $tmp1140;
                panda$core$Bit $tmp1141 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(f1131->annotations);
                if ($tmp1141.value) {
                {
                    panda$collections$Array$add$panda$collections$Array$T(children1134, ((panda$core$Object*) p_target));
                }
                }
                else {
                {
                    org$pandalanguage$pandac$Type* $tmp1142 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(f1131->owner);
                    org$pandalanguage$pandac$IRNode* $tmp1143 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_target, $tmp1142);
                    panda$collections$Array$add$panda$collections$Array$T(children1134, ((panda$core$Object*) $tmp1143));
                }
                }
                org$pandalanguage$pandac$IRNode* $tmp1145 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp1145->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1145->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1145, ((panda$core$Int64) { 1026 }), p_offset, f1131->type, ((panda$core$Object*) p_s), ((panda$collections$ListView*) children1134));
                result1144 = $tmp1145;
                panda$core$Bit $tmp1147 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(effectiveType1139, result1144->type);
                if ($tmp1147.value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp1148 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$panda$core$Int64$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, result1144, p_offset, ((panda$core$Bit) { false }), effectiveType1139);
                    result1144 = $tmp1148;
                }
                }
                return result1144;
            }
            }
            else {
            {
                org$pandalanguage$pandac$IRNode* $tmp1149 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp1149->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1149->refCount.value = 1;
                panda$core$Object* $tmp1151 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
                org$pandalanguage$pandac$Type* $tmp1152 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp1151));
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp1149, ((panda$core$Int64) { 1025 }), p_offset, $tmp1152);
                panda$collections$Array$add$panda$collections$Array$T(children1134, ((panda$core$Object*) $tmp1149));
                org$pandalanguage$pandac$IRNode* $tmp1153 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp1153->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1153->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1153, ((panda$core$Int64) { 1026 }), p_offset, f1131->type, ((panda$core$Object*) p_s), ((panda$collections$ListView*) children1134));
                return $tmp1153;
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
    panda$collections$HashMap* typeMap1161;
    org$pandalanguage$pandac$Type* base1164;
    org$pandalanguage$pandac$ClassDecl* cl1166;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1168;
    switch (p_context->typeKind.value) {
        case 10:
        {
            return p_raw;
        }
        break;
        case 11:
        {
            panda$core$Int64 $tmp1155 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_context->subtypes);
            panda$core$Bit $tmp1156 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1155, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp1156.value);
            panda$core$Object* $tmp1157 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_context->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp1158 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$Type*) $tmp1157), p_raw);
            return $tmp1158;
        }
        break;
        case 21:
        {
            panda$core$Int64 $tmp1159 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_context->subtypes);
            panda$core$Bit $tmp1160 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp1159, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1160.value);
            panda$collections$HashMap* $tmp1162 = (panda$collections$HashMap*) malloc(56);
            $tmp1162->$class = (panda$core$Class*) &panda$collections$HashMap$class;
            $tmp1162->refCount.value = 1;
            panda$collections$HashMap$init($tmp1162);
            typeMap1161 = $tmp1162;
            panda$core$Object* $tmp1165 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_context->subtypes, ((panda$core$Int64) { 0 }));
            base1164 = ((org$pandalanguage$pandac$Type*) $tmp1165);
            org$pandalanguage$pandac$ClassDecl* $tmp1167 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Symbol*) base1164)->name);
            cl1166 = $tmp1167;
            PANDA_ASSERT(((panda$core$Bit) { cl1166 != NULL }).value);
            panda$core$Int64 $tmp1169 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_context->subtypes);
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp1168, ((panda$core$Int64) { 1 }), $tmp1169, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
            int64_t $tmp1171 = $tmp1168.start.value;
            panda$core$Int64 i1170 = { $tmp1171 };
            int64_t $tmp1173 = $tmp1168.end.value;
            int64_t $tmp1174 = $tmp1168.step.value;
            bool $tmp1175 = $tmp1168.inclusive.value;
            bool $tmp1182 = $tmp1174 > 0;
            if ($tmp1182) goto $l1180; else goto $l1181;
            $l1180:;
            if ($tmp1175) goto $l1183; else goto $l1184;
            $l1183:;
            if ($tmp1171 <= $tmp1173) goto $l1176; else goto $l1178;
            $l1184:;
            if ($tmp1171 < $tmp1173) goto $l1176; else goto $l1178;
            $l1181:;
            if ($tmp1175) goto $l1185; else goto $l1186;
            $l1185:;
            if ($tmp1171 >= $tmp1173) goto $l1176; else goto $l1178;
            $l1186:;
            if ($tmp1171 > $tmp1173) goto $l1176; else goto $l1178;
            $l1176:;
            {
                panda$core$String* $tmp1189 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) cl1166)->name, &$s1188);
                panda$core$Int64 $tmp1190 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i1170, ((panda$core$Int64) { 1 }));
                ITable* $tmp1191 = ((panda$collections$ListView*) cl1166->parameters)->$class->itable;
                while ($tmp1191->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp1191 = $tmp1191->next;
                }
                $fn1193 $tmp1192 = $tmp1191->methods[0];
                panda$core$Object* $tmp1194 = $tmp1192(((panda$collections$ListView*) cl1166->parameters), $tmp1190);
                panda$core$String* $tmp1195 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1189, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp1194))->name);
                panda$core$Object* $tmp1196 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_context->subtypes, i1170);
                panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(typeMap1161, ((panda$collections$Key*) $tmp1195), ((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp1196)));
            }
            $l1179:;
            if ($tmp1182) goto $l1198; else goto $l1199;
            $l1198:;
            int64_t $tmp1200 = $tmp1173 - i1170.value;
            if ($tmp1175) goto $l1201; else goto $l1202;
            $l1201:;
            if ($tmp1200 >= $tmp1174) goto $l1197; else goto $l1178;
            $l1202:;
            if ($tmp1200 > $tmp1174) goto $l1197; else goto $l1178;
            $l1199:;
            int64_t $tmp1204 = i1170.value - $tmp1173;
            if ($tmp1175) goto $l1205; else goto $l1206;
            $l1205:;
            if ($tmp1204 >= -$tmp1174) goto $l1197; else goto $l1178;
            $l1206:;
            if ($tmp1204 > -$tmp1174) goto $l1197; else goto $l1178;
            $l1197:;
            i1170.value += $tmp1174;
            goto $l1176;
            $l1178:;
            org$pandalanguage$pandac$Type* $tmp1208 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(p_raw, typeMap1161);
            return $tmp1208;
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
    org$pandalanguage$pandac$Type* $tmp1209 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1210 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_type, $tmp1209);
    if ($tmp1210.value) {
    {
        org$pandalanguage$pandac$Type* $tmp1211 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
        return $tmp1211;
    }
    }
    org$pandalanguage$pandac$Type* $tmp1212 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1213 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_type, $tmp1212);
    if ($tmp1213.value) {
    {
        org$pandalanguage$pandac$Type* $tmp1214 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
        return $tmp1214;
    }
    }
    return p_type;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    panda$collections$Array* args1222;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1223;
    org$pandalanguage$pandac$IRNode* c1225;
    switch (p_expr->kind.value) {
        case 1031:
        {
            panda$core$Object* $tmp1215 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp1216 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$IRNode*) $tmp1215)->type);
            panda$core$Object* $tmp1217 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
            org$pandalanguage$pandac$Type* $tmp1218 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$IRNode*) $tmp1217)->type);
            org$pandalanguage$pandac$Type* $tmp1219 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1216, $tmp1218);
            org$pandalanguage$pandac$Type* $tmp1220 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, $tmp1219);
            org$pandalanguage$pandac$Type* $tmp1221 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1220);
            return $tmp1221;
        }
        break;
        case 1040:
        {
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1223, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
            panda$collections$Array* $tmp1224 = panda$collections$Array$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT(p_expr->children, $tmp1223);
            args1222 = $tmp1224;
            panda$core$Object* $tmp1226 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp1228 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1226), &$s1227, ((panda$collections$ListView*) args1222));
            c1225 = $tmp1228;
            if (((panda$core$Bit) { c1225 == NULL }).value) {
            {
                org$pandalanguage$pandac$Type* $tmp1229 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
                return $tmp1229;
            }
            }
            return c1225->type;
        }
        break;
    }
    org$pandalanguage$pandac$Type* $tmp1230 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_expr->type);
    return $tmp1230;
}
panda$core$Int64$nullable org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type, org$pandalanguage$pandac$Type* p_target) {
    panda$core$Int64$nullable result1241;
    panda$core$Int64$nullable result1245;
    panda$core$Int64$nullable best1254;
    panda$collections$Iterator* t$Iter1255;
    org$pandalanguage$pandac$Type* t1267;
    panda$core$Int64$nullable cost1272;
    org$pandalanguage$pandac$ClassDecl* cl1286;
    panda$core$Int64$nullable cost1288;
    panda$collections$Iterator* intf$Iter1293;
    org$pandalanguage$pandac$Type* intf1305;
    panda$core$Int64$nullable cost1310;
    PANDA_ASSERT(p_type->resolved.value);
    PANDA_ASSERT(p_target->resolved.value);
    panda$core$Bit $tmp1231 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_type, p_target);
    if ($tmp1231.value) {
    {
        return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
    }
    }
    org$pandalanguage$pandac$Type* $tmp1232 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1233 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_type, $tmp1232);
    if ($tmp1233.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    panda$core$Bit $tmp1234 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 23 }));
    if ($tmp1234.value) {
    {
        panda$core$Bit $tmp1235 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp1235.value) {
        {
            return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
        }
        }
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    panda$core$Bit $tmp1237 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 11 }));
    bool $tmp1236 = $tmp1237.value;
    if (!$tmp1236) goto $l1238;
    panda$core$Bit $tmp1239 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
    $tmp1236 = $tmp1239.value;
    $l1238:;
    panda$core$Bit $tmp1240 = { $tmp1236 };
    if ($tmp1240.value) {
    {
        panda$core$Object* $tmp1242 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Int64$nullable $tmp1243 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$Type*) $tmp1242), p_target);
        result1241 = $tmp1243;
        if (((panda$core$Bit) { !result1241.nonnull }).value) {
        {
            return ((panda$core$Int64$nullable) { .nonnull = false });
        }
        }
        panda$core$Int64 $tmp1244 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) result1241.value), ((panda$core$Int64) { 1 }));
        return ((panda$core$Int64$nullable) { $tmp1244, true });
    }
    }
    switch (p_target->typeKind.value) {
        case 11:
        {
            panda$core$Object* $tmp1246 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$Int64$nullable $tmp1247 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_type, ((org$pandalanguage$pandac$Type*) $tmp1246));
            result1245 = $tmp1247;
            if (((panda$core$Bit) { !result1245.nonnull }).value) {
            {
                return ((panda$core$Int64$nullable) { .nonnull = false });
            }
            }
            panda$core$Int64 $tmp1248 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) result1245.value), ((panda$core$Int64) { 1 }));
            return ((panda$core$Int64$nullable) { $tmp1248, true });
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
            panda$core$Bit $tmp1249 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 21 }));
            if ($tmp1249.value) {
            {
                panda$core$Object* $tmp1250 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
                panda$core$Int64$nullable $tmp1251 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$Type*) $tmp1250), p_target);
                return $tmp1251;
            }
            }
        }
        break;
    }
    switch (p_type->typeKind.value) {
        case 19:
        {
            org$pandalanguage$pandac$Type* $tmp1252 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            panda$core$Int64$nullable $tmp1253 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1252, p_target);
            return $tmp1253;
        }
        break;
        case 17:
        {
            best1254 = ((panda$core$Int64$nullable) { .nonnull = false });
            {
                ITable* $tmp1256 = ((panda$collections$Iterable*) p_type->subtypes)->$class->itable;
                while ($tmp1256->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1256 = $tmp1256->next;
                }
                $fn1258 $tmp1257 = $tmp1256->methods[0];
                panda$collections$Iterator* $tmp1259 = $tmp1257(((panda$collections$Iterable*) p_type->subtypes));
                t$Iter1255 = $tmp1259;
                $l1260:;
                ITable* $tmp1262 = t$Iter1255->$class->itable;
                while ($tmp1262->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1262 = $tmp1262->next;
                }
                $fn1264 $tmp1263 = $tmp1262->methods[0];
                panda$core$Bit $tmp1265 = $tmp1263(t$Iter1255);
                panda$core$Bit $tmp1266 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1265);
                if (!$tmp1266.value) goto $l1261;
                {
                    ITable* $tmp1268 = t$Iter1255->$class->itable;
                    while ($tmp1268->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1268 = $tmp1268->next;
                    }
                    $fn1270 $tmp1269 = $tmp1268->methods[1];
                    panda$core$Object* $tmp1271 = $tmp1269(t$Iter1255);
                    t1267 = ((org$pandalanguage$pandac$Type*) $tmp1271);
                    panda$core$Int64$nullable $tmp1273 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, t1267, p_target);
                    cost1272 = $tmp1273;
                    bool $tmp1274 = ((panda$core$Bit) { cost1272.nonnull }).value;
                    if (!$tmp1274) goto $l1275;
                    bool $tmp1276 = ((panda$core$Bit) { !best1254.nonnull }).value;
                    if ($tmp1276) goto $l1277;
                    panda$core$Bit $tmp1278 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost1272.value), ((panda$core$Int64) best1254.value));
                    $tmp1276 = $tmp1278.value;
                    $l1277:;
                    panda$core$Bit $tmp1279 = { $tmp1276 };
                    $tmp1274 = $tmp1279.value;
                    $l1275:;
                    panda$core$Bit $tmp1280 = { $tmp1274 };
                    if ($tmp1280.value) {
                    {
                        best1254 = cost1272;
                    }
                    }
                }
                goto $l1260;
                $l1261:;
            }
            return best1254;
        }
        break;
        case 22:
        {
            panda$core$Int64$nullable $tmp1281 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_type->parameter->bound, p_target);
            return $tmp1281;
        }
        break;
    }
    panda$core$Bit $tmp1282 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_target);
    panda$core$Bit $tmp1283 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1282);
    if ($tmp1283.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    panda$core$Bit $tmp1284 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_type);
    panda$core$Bit $tmp1285 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1284);
    if ($tmp1285.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp1287 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_type);
    cl1286 = $tmp1287;
    PANDA_ASSERT(((panda$core$Bit) { cl1286 != NULL }).value);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, cl1286);
    if (((panda$core$Bit) { cl1286->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp1289 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_type, cl1286->rawSuper);
        org$pandalanguage$pandac$Type* $tmp1290 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_type, $tmp1289);
        panda$core$Int64$nullable $tmp1291 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1290, p_target);
        cost1288 = $tmp1291;
        if (((panda$core$Bit) { cost1288.nonnull }).value) {
        {
            panda$core$Int64 $tmp1292 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) cost1288.value), ((panda$core$Int64) ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }).value));
            return ((panda$core$Int64$nullable) { $tmp1292, true });
        }
        }
    }
    }
    {
        ITable* $tmp1294 = ((panda$collections$Iterable*) cl1286->rawInterfaces)->$class->itable;
        while ($tmp1294->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1294 = $tmp1294->next;
        }
        $fn1296 $tmp1295 = $tmp1294->methods[0];
        panda$collections$Iterator* $tmp1297 = $tmp1295(((panda$collections$Iterable*) cl1286->rawInterfaces));
        intf$Iter1293 = $tmp1297;
        $l1298:;
        ITable* $tmp1300 = intf$Iter1293->$class->itable;
        while ($tmp1300->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1300 = $tmp1300->next;
        }
        $fn1302 $tmp1301 = $tmp1300->methods[0];
        panda$core$Bit $tmp1303 = $tmp1301(intf$Iter1293);
        panda$core$Bit $tmp1304 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1303);
        if (!$tmp1304.value) goto $l1299;
        {
            ITable* $tmp1306 = intf$Iter1293->$class->itable;
            while ($tmp1306->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1306 = $tmp1306->next;
            }
            $fn1308 $tmp1307 = $tmp1306->methods[1];
            panda$core$Object* $tmp1309 = $tmp1307(intf$Iter1293);
            intf1305 = ((org$pandalanguage$pandac$Type*) $tmp1309);
            org$pandalanguage$pandac$Type* $tmp1311 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_type, intf1305);
            org$pandalanguage$pandac$Type* $tmp1312 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_type, $tmp1311);
            panda$core$Int64$nullable $tmp1313 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1312, p_target);
            cost1310 = $tmp1313;
            if (((panda$core$Bit) { cost1310.nonnull }).value) {
            {
                panda$core$Int64 $tmp1314 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) cost1310.value), ((panda$core$Int64) ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }).value));
                return ((panda$core$Int64$nullable) { $tmp1314, true });
            }
            }
        }
        goto $l1298;
        $l1299:;
    }
    return ((panda$core$Int64$nullable) { .nonnull = false });
}
panda$core$Int64 org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_value) {
    panda$core$Bit $tmp1316 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { -128 }));
    bool $tmp1315 = $tmp1316.value;
    if (!$tmp1315) goto $l1317;
    panda$core$Bit $tmp1318 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { 127 }));
    $tmp1315 = $tmp1318.value;
    $l1317:;
    panda$core$Bit $tmp1319 = { $tmp1315 };
    if ($tmp1319.value) {
    {
        return ((panda$core$Int64) { 8 });
    }
    }
    panda$core$Bit $tmp1321 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { -32768 }));
    bool $tmp1320 = $tmp1321.value;
    if (!$tmp1320) goto $l1322;
    panda$core$Bit $tmp1323 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { 32767 }));
    $tmp1320 = $tmp1323.value;
    $l1322:;
    panda$core$Bit $tmp1324 = { $tmp1320 };
    if ($tmp1324.value) {
    {
        return ((panda$core$Int64) { 16 });
    }
    }
    panda$core$Bit $tmp1326 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { -2147483648 }));
    bool $tmp1325 = $tmp1326.value;
    if (!$tmp1325) goto $l1327;
    panda$core$Bit $tmp1328 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { 2147483647 }));
    $tmp1325 = $tmp1328.value;
    $l1327:;
    panda$core$Bit $tmp1329 = { $tmp1325 };
    if ($tmp1329.value) {
    {
        return ((panda$core$Int64) { 32 });
    }
    }
    return ((panda$core$Int64) { 64 });
}
panda$core$Int64 org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64(org$pandalanguage$pandac$Compiler* self, panda$core$UInt64 p_value) {
    panda$core$Bit $tmp1330 = panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(p_value, ((panda$core$UInt64) { 255 }));
    if ($tmp1330.value) {
    {
        return ((panda$core$Int64) { 8 });
    }
    }
    panda$core$Bit $tmp1331 = panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(p_value, ((panda$core$UInt64) { 65535 }));
    if ($tmp1331.value) {
    {
        return ((panda$core$Int64) { 16 });
    }
    }
    panda$core$Bit $tmp1332 = panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(p_value, ((panda$core$UInt64) { 4294967295 }));
    if ($tmp1332.value) {
    {
        return ((panda$core$Int64) { 32 });
    }
    }
    return ((panda$core$Int64) { 64 });
}
panda$core$Int64$nullable org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr, org$pandalanguage$pandac$Type* p_target) {
    panda$core$Int64$nullable cost1335;
    panda$core$Int64$nullable cost11406;
    panda$core$Int64$nullable cost21410;
    org$pandalanguage$pandac$ClassDecl* targetClass1420;
    panda$collections$Iterator* m$Iter1422;
    org$pandalanguage$pandac$MethodDecl* m1434;
    panda$core$Int64$nullable cost1443;
    panda$core$Bit $tmp1333 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_expr->type, p_target);
    if ($tmp1333.value) {
    {
        return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
    }
    }
    switch (p_target->typeKind.value) {
        case 11:
        {
            panda$core$Bit $tmp1334 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1030 }));
            if ($tmp1334.value) {
            {
                return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
            }
            }
            panda$core$Object* $tmp1336 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$Int64$nullable $tmp1337 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, ((org$pandalanguage$pandac$Type*) $tmp1336));
            cost1335 = $tmp1337;
            if (((panda$core$Bit) { !cost1335.nonnull }).value) {
            {
                return ((panda$core$Int64$nullable) { .nonnull = false });
            }
            }
            panda$core$Bit $tmp1338 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->type->typeKind, ((panda$core$Int64) { 11 }));
            if ($tmp1338.value) {
            {
                return cost1335;
            }
            }
            panda$core$Int64 $tmp1339 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) cost1335.value), ((panda$core$Int64) { 1 }));
            return ((panda$core$Int64$nullable) { $tmp1339, true });
        }
        break;
        case 22:
        {
            panda$core$Int64$nullable $tmp1340 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, p_target->parameter->bound);
            return $tmp1340;
        }
        break;
    }
    switch (p_expr->kind.value) {
        case 1011:
        {
            panda$core$Bit $tmp1341 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 19 }));
            if ($tmp1341.value) {
            {
                return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
            }
            }
            panda$core$Bit $tmp1342 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_target);
            if ($tmp1342.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1343 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
                panda$core$Int64$nullable $tmp1344 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1343, p_target);
                return $tmp1344;
            }
            }
        }
        break;
        case 1004:
        {
            panda$core$Bit $tmp1347 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            bool $tmp1346 = $tmp1347.value;
            if (!$tmp1346) goto $l1348;
            panda$core$Int64 $tmp1349 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1350 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(self, $tmp1349);
            panda$core$Int64 $tmp1351 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1352 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1350, $tmp1351);
            $tmp1346 = $tmp1352.value;
            $l1348:;
            panda$core$Bit $tmp1353 = { $tmp1346 };
            bool $tmp1345 = $tmp1353.value;
            if ($tmp1345) goto $l1354;
            panda$core$Bit $tmp1356 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 13 }));
            bool $tmp1355 = $tmp1356.value;
            if (!$tmp1355) goto $l1357;
            panda$core$Int64 $tmp1358 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64(self, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1359 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1360 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1358, $tmp1359);
            $tmp1355 = $tmp1360.value;
            $l1357:;
            panda$core$Bit $tmp1361 = { $tmp1355 };
            $tmp1345 = $tmp1361.value;
            $l1354:;
            panda$core$Bit $tmp1362 = { $tmp1345 };
            if ($tmp1362.value) {
            {
                return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
            }
            }
            panda$core$Bit $tmp1363 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            panda$core$Bit $tmp1364 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1363);
            if ($tmp1364.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1365 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                panda$core$Int64$nullable $tmp1366 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1365, p_target);
                return $tmp1366;
            }
            }
        }
        break;
        case 1032:
        {
            panda$core$Bit $tmp1369 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            bool $tmp1368 = $tmp1369.value;
            if (!$tmp1368) goto $l1370;
            panda$core$Int64 $tmp1371 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1372 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp1371);
            panda$core$Int64 $tmp1373 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(self, $tmp1372);
            panda$core$Int64 $tmp1374 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1375 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1373, $tmp1374);
            $tmp1368 = $tmp1375.value;
            $l1370:;
            panda$core$Bit $tmp1376 = { $tmp1368 };
            bool $tmp1367 = $tmp1376.value;
            if ($tmp1367) goto $l1377;
            panda$core$Bit $tmp1379 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 13 }));
            bool $tmp1378 = $tmp1379.value;
            if (!$tmp1378) goto $l1380;
            panda$core$Int64 $tmp1381 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1382 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp1381);
            panda$core$Int64 $tmp1383 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(self, $tmp1382);
            panda$core$Int64 $tmp1384 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1385 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1383, $tmp1384);
            $tmp1378 = $tmp1385.value;
            $l1380:;
            panda$core$Bit $tmp1386 = { $tmp1378 };
            $tmp1367 = $tmp1386.value;
            $l1377:;
            panda$core$Bit $tmp1387 = { $tmp1367 };
            if ($tmp1387.value) {
            {
                return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
            }
            }
            panda$core$Bit $tmp1388 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            panda$core$Bit $tmp1389 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1388);
            if ($tmp1389.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1390 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                panda$core$Int64$nullable $tmp1391 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1390, p_target);
                return $tmp1391;
            }
            }
        }
        break;
        case 1031:
        {
            panda$core$Bit $tmp1392 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(p_target);
            if ($tmp1392.value) {
            {
                panda$core$Int64 $tmp1393 = panda$collections$Array$get_count$R$panda$core$Int64(p_expr->children);
                panda$core$Bit $tmp1394 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1393, ((panda$core$Int64) { 3 }));
                PANDA_ASSERT($tmp1394.value);
                panda$core$Object* $tmp1396 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Bit $tmp1397 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1396)->kind, ((panda$core$Int64) { 1030 }));
                bool $tmp1395 = $tmp1397.value;
                if (!$tmp1395) goto $l1398;
                panda$core$Object* $tmp1399 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
                panda$core$Bit $tmp1400 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1399)->kind, ((panda$core$Int64) { 1030 }));
                $tmp1395 = $tmp1400.value;
                $l1398:;
                panda$core$Bit $tmp1401 = { $tmp1395 };
                if ($tmp1401.value) {
                {
                    panda$core$Object* $tmp1402 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                    panda$core$Bit $tmp1403 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1402));
                    panda$core$Bit $tmp1404 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1403);
                    if ($tmp1404.value) {
                    {
                        return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
                    }
                    }
                    return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true });
                }
                }
                panda$core$Bit $tmp1405 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 21 }));
                PANDA_ASSERT($tmp1405.value);
                panda$core$Object* $tmp1407 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Object* $tmp1408 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                panda$core$Int64$nullable $tmp1409 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1407), ((org$pandalanguage$pandac$Type*) $tmp1408));
                cost11406 = $tmp1409;
                if (((panda$core$Bit) { !cost11406.nonnull }).value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Object* $tmp1411 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
                panda$core$Object* $tmp1412 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                panda$core$Int64$nullable $tmp1413 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1411), ((org$pandalanguage$pandac$Type*) $tmp1412));
                cost21410 = $tmp1413;
                if (((panda$core$Bit) { !cost21410.nonnull }).value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Int64 $tmp1414 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) cost11406.value), ((panda$core$Int64) cost21410.value));
                return ((panda$core$Int64$nullable) { $tmp1414, true });
            }
            }
            org$pandalanguage$pandac$Type* $tmp1415 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
            panda$core$Int64$nullable $tmp1416 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1415, p_target);
            return $tmp1416;
        }
        break;
        case 1040:
        {
            panda$core$Int64$nullable $tmp1417 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr->type, p_target);
            return $tmp1417;
        }
        break;
    }
    panda$core$Bit $tmp1418 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_target);
    panda$core$Bit $tmp1419 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1418);
    if ($tmp1419.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp1421 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_target);
    targetClass1420 = $tmp1421;
    if (((panda$core$Bit) { targetClass1420 == NULL }).value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    {
        ITable* $tmp1423 = ((panda$collections$Iterable*) targetClass1420->methods)->$class->itable;
        while ($tmp1423->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1423 = $tmp1423->next;
        }
        $fn1425 $tmp1424 = $tmp1423->methods[0];
        panda$collections$Iterator* $tmp1426 = $tmp1424(((panda$collections$Iterable*) targetClass1420->methods));
        m$Iter1422 = $tmp1426;
        $l1427:;
        ITable* $tmp1429 = m$Iter1422->$class->itable;
        while ($tmp1429->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1429 = $tmp1429->next;
        }
        $fn1431 $tmp1430 = $tmp1429->methods[0];
        panda$core$Bit $tmp1432 = $tmp1430(m$Iter1422);
        panda$core$Bit $tmp1433 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1432);
        if (!$tmp1433.value) goto $l1428;
        {
            ITable* $tmp1435 = m$Iter1422->$class->itable;
            while ($tmp1435->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1435 = $tmp1435->next;
            }
            $fn1437 $tmp1436 = $tmp1435->methods[1];
            panda$core$Object* $tmp1438 = $tmp1436(m$Iter1422);
            m1434 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1438);
            panda$core$Bit $tmp1439 = org$pandalanguage$pandac$Annotations$isImplicit$R$panda$core$Bit(m1434->annotations);
            if ($tmp1439.value) {
            {
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m1434);
                panda$core$Bit $tmp1440 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(m1434->methodKind, ((panda$core$Int64) { 59 }));
                PANDA_ASSERT($tmp1440.value);
                panda$core$Int64 $tmp1441 = panda$collections$Array$get_count$R$panda$core$Int64(m1434->parameters);
                panda$core$Bit $tmp1442 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1441, ((panda$core$Int64) { 1 }));
                PANDA_ASSERT($tmp1442.value);
                panda$core$Object* $tmp1444 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(m1434->parameters, ((panda$core$Int64) { 0 }));
                panda$core$Int64$nullable $tmp1445 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1444)->type);
                cost1443 = $tmp1445;
                if (((panda$core$Bit) { cost1443.nonnull }).value) {
                {
                    return cost1443;
                }
                }
            }
            }
        }
        goto $l1427;
        $l1428:;
    }
    PANDA_ASSERT(((panda$core$Bit) { p_expr->type != NULL }).value);
    panda$core$Int64$nullable $tmp1446 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr->type, p_target);
    return $tmp1446;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$doCoerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr, org$pandalanguage$pandac$Type* p_target) {
    panda$collections$Array* children1455;
    org$pandalanguage$pandac$IRNode* intermediate1460;
    org$pandalanguage$pandac$IRNode* coerced1488;
    org$pandalanguage$pandac$IRNode* coerced1509;
    org$pandalanguage$pandac$IRNode* varType1523;
    org$pandalanguage$pandac$Type* param1531;
    org$pandalanguage$pandac$IRNode* start1533;
    org$pandalanguage$pandac$IRNode* end1536;
    panda$collections$Array* args1539;
    org$pandalanguage$pandac$IRNode* target1546;
    panda$collections$ListView* methods1553;
    panda$collections$Array* args1555;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1556;
    panda$collections$Array* best1558;
    panda$core$Int64$nullable bestCost1561;
    panda$collections$Iterator* m$Iter1562;
    org$pandalanguage$pandac$MethodRef* m1574;
    panda$core$Int64$nullable cost1579;
    org$pandalanguage$pandac$IRNode* callTarget1585;
    org$pandalanguage$pandac$IRNode* result1591;
    panda$collections$Array* args1595;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1596;
    panda$collections$Array* children1608;
    org$pandalanguage$pandac$IRNode* intermediate1614;
    org$pandalanguage$pandac$ClassDecl* cl1619;
    panda$collections$Iterator* m$Iter1621;
    org$pandalanguage$pandac$MethodDecl* m1633;
    org$pandalanguage$pandac$IRNode* type1644;
    panda$collections$Array* args1649;
    panda$collections$Array* children1653;
    if (((panda$core$Bit) { p_expr == NULL }).value) {
    {
        return NULL;
    }
    }
    PANDA_ASSERT(p_expr->type->resolved.value);
    PANDA_ASSERT(p_target->resolved.value);
    panda$core$Bit $tmp1447 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_expr->type, p_target);
    if ($tmp1447.value) {
    {
        return p_expr;
    }
    }
    panda$core$Bit $tmp1449 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->type->typeKind, ((panda$core$Int64) { 11 }));
    bool $tmp1448 = $tmp1449.value;
    if (!$tmp1448) goto $l1450;
    panda$core$Bit $tmp1451 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
    $tmp1448 = $tmp1451.value;
    $l1450:;
    panda$core$Bit $tmp1452 = { $tmp1448 };
    if ($tmp1452.value) {
    {
        panda$core$Object* $tmp1453 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp1454 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1453), p_target);
        if ($tmp1454.value) {
        {
            panda$collections$Array* $tmp1456 = (panda$collections$Array*) malloc(40);
            $tmp1456->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1456->refCount.value = 1;
            panda$collections$Array$init($tmp1456);
            children1455 = $tmp1456;
            panda$collections$Array$add$panda$collections$Array$T(children1455, ((panda$core$Object*) p_expr));
            org$pandalanguage$pandac$IRNode* $tmp1458 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp1458->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1458->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1458, ((panda$core$Int64) { 1009 }), p_expr->offset, p_target, ((panda$core$Object*) wrap_panda$core$Bit(((panda$core$Bit) { false }))), ((panda$collections$ListView*) children1455));
            return $tmp1458;
        }
        }
        panda$core$Object* $tmp1461 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->type->subtypes, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp1462 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, ((org$pandalanguage$pandac$Type*) $tmp1461));
        intermediate1460 = $tmp1462;
        org$pandalanguage$pandac$IRNode* $tmp1463 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, intermediate1460, p_target);
        return $tmp1463;
    }
    }
    switch (p_expr->kind.value) {
        case 1004:
        {
            panda$core$Bit $tmp1465 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            bool $tmp1464 = $tmp1465.value;
            if (!$tmp1464) goto $l1466;
            panda$core$Int64 $tmp1467 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64(self, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1468 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1469 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1467, $tmp1468);
            $tmp1464 = $tmp1469.value;
            $l1466:;
            panda$core$Bit $tmp1470 = { $tmp1464 };
            if ($tmp1470.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1471 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp1471->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1471->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp1471, ((panda$core$Int64) { 1004 }), p_expr->offset, p_target, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
                return $tmp1471;
            }
            }
            else {
            panda$core$Bit $tmp1474 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 13 }));
            bool $tmp1473 = $tmp1474.value;
            if (!$tmp1473) goto $l1475;
            panda$core$Int64 $tmp1476 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64(self, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1477 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1478 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1476, $tmp1477);
            $tmp1473 = $tmp1478.value;
            $l1475:;
            panda$core$Bit $tmp1479 = { $tmp1473 };
            if ($tmp1479.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1480 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp1480->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1480->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp1480, ((panda$core$Int64) { 1004 }), p_expr->offset, p_target, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
                return $tmp1480;
            }
            }
            }
            panda$core$Bit $tmp1483 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 10 }));
            bool $tmp1482 = $tmp1483.value;
            if (!$tmp1482) goto $l1484;
            panda$core$Bit $tmp1485 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            panda$core$Bit $tmp1486 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1485);
            $tmp1482 = $tmp1486.value;
            $l1484:;
            panda$core$Bit $tmp1487 = { $tmp1482 };
            if ($tmp1487.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1489 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp1490 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, $tmp1489);
                coerced1488 = $tmp1490;
                if (((panda$core$Bit) { coerced1488 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$IRNode* $tmp1491 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, coerced1488, p_target);
                return $tmp1491;
            }
            }
        }
        break;
        case 1032:
        {
            panda$core$Bit $tmp1493 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            bool $tmp1492 = $tmp1493.value;
            if (!$tmp1492) goto $l1494;
            panda$core$Int64 $tmp1495 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1496 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp1495);
            panda$core$Int64 $tmp1497 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(self, $tmp1496);
            panda$core$Int64 $tmp1498 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1499 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1497, $tmp1498);
            $tmp1492 = $tmp1499.value;
            $l1494:;
            panda$core$Bit $tmp1500 = { $tmp1492 };
            if ($tmp1500.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1501 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp1501->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1501->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp1501, ((panda$core$Int64) { 1032 }), p_expr->offset, p_target, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
                return $tmp1501;
            }
            }
            panda$core$Bit $tmp1504 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 10 }));
            bool $tmp1503 = $tmp1504.value;
            if (!$tmp1503) goto $l1505;
            panda$core$Bit $tmp1506 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            panda$core$Bit $tmp1507 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1506);
            $tmp1503 = $tmp1507.value;
            $l1505:;
            panda$core$Bit $tmp1508 = { $tmp1503 };
            if ($tmp1508.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1510 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp1511 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, $tmp1510);
                coerced1509 = $tmp1511;
                if (((panda$core$Bit) { coerced1509 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$IRNode* $tmp1512 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, coerced1509, p_target);
                return $tmp1512;
            }
            }
        }
        break;
        case 1011:
        {
            org$pandalanguage$pandac$Type* $tmp1513 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1514 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1513);
            if ($tmp1514.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1515 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp1515->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1515->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Bit($tmp1515, ((panda$core$Int64) { 1011 }), p_expr->offset, p_target, ((panda$core$Bit$wrapper*) p_expr->payload)->value);
                return $tmp1515;
            }
            }
            panda$core$Bit $tmp1518 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_target);
            bool $tmp1517 = $tmp1518.value;
            if (!$tmp1517) goto $l1519;
            org$pandalanguage$pandac$Type* $tmp1520 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1521 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1520);
            $tmp1517 = $tmp1521.value;
            $l1519:;
            panda$core$Bit $tmp1522 = { $tmp1517 };
            if ($tmp1522.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1524 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp1525 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, $tmp1524);
                varType1523 = $tmp1525;
                if (((panda$core$Bit) { varType1523 != NULL }).value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp1526 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, varType1523, p_target);
                    return $tmp1526;
                }
                }
            }
            }
        }
        break;
        case 1031:
        {
            panda$core$Int64 $tmp1527 = panda$collections$Array$get_count$R$panda$core$Int64(p_expr->children);
            panda$core$Bit $tmp1528 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1527, ((panda$core$Int64) { 3 }));
            PANDA_ASSERT($tmp1528.value);
            panda$core$Bit $tmp1529 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(p_target);
            if ($tmp1529.value) {
            {
                panda$core$Bit $tmp1530 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 21 }));
                PANDA_ASSERT($tmp1530.value);
                panda$core$Object* $tmp1532 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                param1531 = ((org$pandalanguage$pandac$Type*) $tmp1532);
                panda$core$Object* $tmp1534 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$IRNode* $tmp1535 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1534), param1531);
                start1533 = $tmp1535;
                if (((panda$core$Bit) { start1533 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$core$Object* $tmp1537 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$IRNode* $tmp1538 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1537), param1531);
                end1536 = $tmp1538;
                if (((panda$core$Bit) { end1536 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp1540 = (panda$collections$Array*) malloc(40);
                $tmp1540->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp1540->refCount.value = 1;
                panda$collections$Array$init($tmp1540);
                args1539 = $tmp1540;
                panda$collections$Array$add$panda$collections$Array$T(args1539, ((panda$core$Object*) start1533));
                panda$collections$Array$add$panda$collections$Array$T(args1539, ((panda$core$Object*) end1536));
                panda$core$Object* $tmp1542 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 2 }));
                panda$collections$Array$add$panda$collections$Array$T(args1539, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp1542)));
                org$pandalanguage$pandac$IRNode* $tmp1543 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp1543->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1543->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1545 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Bit($tmp1543, ((panda$core$Int64) { 1011 }), p_expr->offset, $tmp1545, ((panda$core$Bit$wrapper*) p_expr->payload)->value);
                panda$collections$Array$add$panda$collections$Array$T(args1539, ((panda$core$Object*) $tmp1543));
                org$pandalanguage$pandac$IRNode* $tmp1547 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp1547->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1547->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1549 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1547, ((panda$core$Int64) { 1001 }), p_expr->offset, $tmp1549, p_target);
                target1546 = $tmp1547;
                org$pandalanguage$pandac$IRNode* $tmp1550 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target1546, ((panda$collections$ListView*) args1539));
                return $tmp1550;
            }
            }
            else {
            {
                org$pandalanguage$pandac$IRNode* $tmp1551 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp1552 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp1551, p_target);
                return $tmp1552;
            }
            }
        }
        break;
        case 1039:
        {
            panda$core$Object* $tmp1554 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            methods1553 = ((panda$collections$ListView*) ((org$pandalanguage$pandac$IRNode*) $tmp1554)->payload);
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1556, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
            panda$collections$Array* $tmp1557 = panda$collections$Array$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT(p_expr->children, $tmp1556);
            args1555 = $tmp1557;
            panda$collections$Array* $tmp1559 = (panda$collections$Array*) malloc(40);
            $tmp1559->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1559->refCount.value = 1;
            panda$collections$Array$init($tmp1559);
            best1558 = $tmp1559;
            bestCost1561 = ((panda$core$Int64$nullable) { .nonnull = false });
            {
                ITable* $tmp1563 = ((panda$collections$Iterable*) methods1553)->$class->itable;
                while ($tmp1563->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1563 = $tmp1563->next;
                }
                $fn1565 $tmp1564 = $tmp1563->methods[0];
                panda$collections$Iterator* $tmp1566 = $tmp1564(((panda$collections$Iterable*) methods1553));
                m$Iter1562 = $tmp1566;
                $l1567:;
                ITable* $tmp1569 = m$Iter1562->$class->itable;
                while ($tmp1569->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1569 = $tmp1569->next;
                }
                $fn1571 $tmp1570 = $tmp1569->methods[0];
                panda$core$Bit $tmp1572 = $tmp1570(m$Iter1562);
                panda$core$Bit $tmp1573 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1572);
                if (!$tmp1573.value) goto $l1568;
                {
                    ITable* $tmp1575 = m$Iter1562->$class->itable;
                    while ($tmp1575->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1575 = $tmp1575->next;
                    }
                    $fn1577 $tmp1576 = $tmp1575->methods[1];
                    panda$core$Object* $tmp1578 = $tmp1576(m$Iter1562);
                    m1574 = ((org$pandalanguage$pandac$MethodRef*) $tmp1578);
                    panda$core$Int64$nullable $tmp1580 = org$pandalanguage$pandac$Compiler$callCost$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(self, m1574, ((panda$collections$ListView*) args1555), p_target);
                    cost1579 = $tmp1580;
                    if (((panda$core$Bit) { !cost1579.nonnull }).value) {
                    {
                        goto $l1567;
                    }
                    }
                    if (((panda$core$Bit) { !bestCost1561.nonnull }).value) {
                    {
                        panda$collections$Array$add$panda$collections$Array$T(best1558, ((panda$core$Object*) m1574));
                        bestCost1561 = cost1579;
                        goto $l1567;
                    }
                    }
                    panda$core$Bit $tmp1581 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost1579.value), ((panda$core$Int64) bestCost1561.value));
                    if ($tmp1581.value) {
                    {
                        panda$collections$Array$clear(best1558);
                        bestCost1561 = cost1579;
                    }
                    }
                    panda$core$Bit $tmp1582 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost1579.value), ((panda$core$Int64) bestCost1561.value));
                    if ($tmp1582.value) {
                    {
                        panda$collections$Array$add$panda$collections$Array$T(best1558, ((panda$core$Object*) m1574));
                    }
                    }
                }
                goto $l1567;
                $l1568:;
            }
            panda$core$Int64 $tmp1583 = panda$collections$Array$get_count$R$panda$core$Int64(best1558);
            panda$core$Bit $tmp1584 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1583, ((panda$core$Int64) { 1 }));
            if ($tmp1584.value) {
            {
                panda$core$Object* $tmp1586 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Int64 $tmp1587 = panda$collections$Array$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp1586)->children);
                panda$core$Bit $tmp1588 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1587, ((panda$core$Int64) { 0 }));
                if ($tmp1588.value) {
                {
                    panda$core$Object* $tmp1589 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                    panda$core$Object* $tmp1590 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp1589)->children, ((panda$core$Int64) { 0 }));
                    callTarget1585 = ((org$pandalanguage$pandac$IRNode*) $tmp1590);
                }
                }
                else {
                {
                    callTarget1585 = NULL;
                }
                }
                panda$core$Object* $tmp1592 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(best1558, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$IRNode* $tmp1593 = org$pandalanguage$pandac$Compiler$call$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr->offset, callTarget1585, ((org$pandalanguage$pandac$MethodRef*) $tmp1592), ((panda$collections$ListView*) args1555));
                result1591 = $tmp1593;
                org$pandalanguage$pandac$IRNode* $tmp1594 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, result1591, p_target);
                return $tmp1594;
            }
            }
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        break;
        case 1040:
        {
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1596, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
            panda$collections$Array* $tmp1597 = panda$collections$Array$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT(p_expr->children, $tmp1596);
            args1595 = $tmp1597;
            panda$core$Object* $tmp1598 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp1600 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1598), &$s1599, ((panda$collections$ListView*) args1595), p_target);
            org$pandalanguage$pandac$IRNode* $tmp1601 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp1600, p_target);
            return $tmp1601;
        }
        break;
    }
    panda$core$Bit $tmp1602 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp1602.value) {
    {
        panda$core$Bit $tmp1603 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1030 }));
        if ($tmp1603.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp1604 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp1604->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1604->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp1604, ((panda$core$Int64) { 1030 }), p_expr->offset, p_target);
            return $tmp1604;
        }
        }
        panda$core$Object* $tmp1606 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp1607 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_expr->type, ((org$pandalanguage$pandac$Type*) $tmp1606));
        if ($tmp1607.value) {
        {
            panda$collections$Array* $tmp1609 = (panda$collections$Array*) malloc(40);
            $tmp1609->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1609->refCount.value = 1;
            panda$collections$Array$init($tmp1609);
            children1608 = $tmp1609;
            panda$collections$Array$add$panda$collections$Array$T(children1608, ((panda$core$Object*) p_expr));
            org$pandalanguage$pandac$IRNode* $tmp1611 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp1611->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1611->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1611, ((panda$core$Int64) { 1009 }), p_expr->offset, p_target, ((panda$core$Object*) wrap_panda$core$Bit(((panda$core$Bit) { false }))), ((panda$collections$ListView*) children1608));
            return $tmp1611;
        }
        }
        panda$core$Bit $tmp1613 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_expr->type->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp1613.value) {
        {
            panda$core$Object* $tmp1615 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp1616 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, ((org$pandalanguage$pandac$Type*) $tmp1615));
            intermediate1614 = $tmp1616;
            org$pandalanguage$pandac$IRNode* $tmp1617 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, intermediate1614, p_target);
            return $tmp1617;
        }
        }
    }
    }
    panda$core$Int64$nullable $tmp1618 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, p_target);
    if (((panda$core$Bit) { $tmp1618.nonnull }).value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp1620 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_target);
        cl1619 = $tmp1620;
        if (((panda$core$Bit) { cl1619 != NULL }).value) {
        {
            {
                ITable* $tmp1622 = ((panda$collections$Iterable*) cl1619->methods)->$class->itable;
                while ($tmp1622->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1622 = $tmp1622->next;
                }
                $fn1624 $tmp1623 = $tmp1622->methods[0];
                panda$collections$Iterator* $tmp1625 = $tmp1623(((panda$collections$Iterable*) cl1619->methods));
                m$Iter1621 = $tmp1625;
                $l1626:;
                ITable* $tmp1628 = m$Iter1621->$class->itable;
                while ($tmp1628->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1628 = $tmp1628->next;
                }
                $fn1630 $tmp1629 = $tmp1628->methods[0];
                panda$core$Bit $tmp1631 = $tmp1629(m$Iter1621);
                panda$core$Bit $tmp1632 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1631);
                if (!$tmp1632.value) goto $l1627;
                {
                    ITable* $tmp1634 = m$Iter1621->$class->itable;
                    while ($tmp1634->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1634 = $tmp1634->next;
                    }
                    $fn1636 $tmp1635 = $tmp1634->methods[1];
                    panda$core$Object* $tmp1637 = $tmp1635(m$Iter1621);
                    m1633 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1637);
                    panda$core$Bit $tmp1638 = org$pandalanguage$pandac$Annotations$isImplicit$R$panda$core$Bit(m1633->annotations);
                    if ($tmp1638.value) {
                    {
                        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m1633);
                        panda$core$Bit $tmp1639 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(m1633->methodKind, ((panda$core$Int64) { 59 }));
                        PANDA_ASSERT($tmp1639.value);
                        panda$core$Int64 $tmp1640 = panda$collections$Array$get_count$R$panda$core$Int64(m1633->parameters);
                        panda$core$Bit $tmp1641 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1640, ((panda$core$Int64) { 1 }));
                        PANDA_ASSERT($tmp1641.value);
                        panda$core$Object* $tmp1642 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(m1633->parameters, ((panda$core$Int64) { 0 }));
                        panda$core$Int64$nullable $tmp1643 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1642)->type);
                        if (((panda$core$Bit) { $tmp1643.nonnull }).value) {
                        {
                            org$pandalanguage$pandac$IRNode* $tmp1645 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                            $tmp1645->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                            $tmp1645->refCount.value = 1;
                            org$pandalanguage$pandac$Type* $tmp1647 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                            org$pandalanguage$pandac$Type* $tmp1648 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl1619);
                            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1645, ((panda$core$Int64) { 1001 }), p_expr->offset, $tmp1647, $tmp1648);
                            type1644 = $tmp1645;
                            panda$collections$Array* $tmp1650 = (panda$collections$Array*) malloc(40);
                            $tmp1650->$class = (panda$core$Class*) &panda$collections$Array$class;
                            $tmp1650->refCount.value = 1;
                            panda$collections$Array$init$panda$core$Int64($tmp1650, ((panda$core$Int64) { 1 }));
                            args1649 = $tmp1650;
                            panda$collections$Array$add$panda$collections$Array$T(args1649, ((panda$core$Object*) p_expr));
                            org$pandalanguage$pandac$IRNode* $tmp1652 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, type1644, ((panda$collections$ListView*) args1649));
                            return $tmp1652;
                        }
                        }
                    }
                    }
                }
                goto $l1626;
                $l1627:;
            }
        }
        }
        panda$collections$Array* $tmp1654 = (panda$collections$Array*) malloc(40);
        $tmp1654->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp1654->refCount.value = 1;
        panda$collections$Array$init$panda$core$Int64($tmp1654, ((panda$core$Int64) { 1 }));
        children1653 = $tmp1654;
        panda$collections$Array$add$panda$collections$Array$T(children1653, ((panda$core$Object*) p_expr));
        org$pandalanguage$pandac$IRNode* $tmp1656 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp1656->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp1656->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1656, ((panda$core$Int64) { 1009 }), p_expr->offset, p_target, ((panda$core$Object*) wrap_panda$core$Bit(((panda$core$Bit) { false }))), ((panda$collections$ListView*) children1653));
        return $tmp1656;
    }
    }
    panda$core$String* $tmp1659 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1658, ((panda$core$Object*) p_target));
    panda$core$String* $tmp1661 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1659, &$s1660);
    panda$core$String* $tmp1662 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1661, ((panda$core$Object*) p_expr->type));
    panda$core$String* $tmp1664 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1662, &$s1663);
    org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_expr->offset, $tmp1664);
    return NULL;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr, org$pandalanguage$pandac$Type* p_target) {
    org$pandalanguage$pandac$IRNode* result1665;
    org$pandalanguage$pandac$IRNode* $tmp1666 = org$pandalanguage$pandac$Compiler$doCoerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, p_target);
    result1665 = $tmp1666;
    bool $tmp1667 = ((panda$core$Bit) { result1665 == NULL }).value;
    if ($tmp1667) goto $l1668;
    panda$core$Bit $tmp1669 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(result1665->type, p_target);
    $tmp1667 = $tmp1669.value;
    $l1668:;
    panda$core$Bit $tmp1670 = { $tmp1667 };
    PANDA_ASSERT($tmp1670.value);
    return result1665;
}
panda$core$Bit org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type, org$pandalanguage$pandac$Type* p_target) {
    panda$core$Bit $tmp1672 = org$pandalanguage$pandac$Type$isPointer$R$panda$core$Bit(p_type);
    bool $tmp1671 = $tmp1672.value;
    if (!$tmp1671) goto $l1673;
    panda$core$Bit $tmp1674 = org$pandalanguage$pandac$Type$isPointer$R$panda$core$Bit(p_target);
    $tmp1671 = $tmp1674.value;
    $l1673:;
    panda$core$Bit $tmp1675 = { $tmp1671 };
    if ($tmp1675.value) {
    {
        return ((panda$core$Bit) { true });
    }
    }
    panda$core$Int64$nullable $tmp1676 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_type, p_target);
    if (((panda$core$Bit) { $tmp1676.nonnull }).value) {
    {
        return ((panda$core$Bit) { true });
    }
    }
    panda$core$Bit $tmp1678 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_type);
    bool $tmp1677 = $tmp1678.value;
    if (!$tmp1677) goto $l1679;
    panda$core$Bit $tmp1680 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_target);
    $tmp1677 = $tmp1680.value;
    $l1679:;
    panda$core$Bit $tmp1681 = { $tmp1677 };
    if ($tmp1681.value) {
    {
        return ((panda$core$Bit) { true });
    }
    }
    panda$core$Bit $tmp1682 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 16 }));
    if ($tmp1682.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Int64$nullable $tmp1683 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_target, p_type);
    return ((panda$core$Bit) { $tmp1683.nonnull });
}
panda$core$Bit org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_node, org$pandalanguage$pandac$Type* p_target) {
    panda$core$Bit result1685;
    org$pandalanguage$pandac$IRNode* resolved1692;
    panda$core$Int64$nullable $tmp1684 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_node, p_target);
    if (((panda$core$Bit) { $tmp1684.nonnull }).value) {
    {
        return ((panda$core$Bit) { true });
    }
    }
    panda$core$Bit $tmp1686 = org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_node->type, p_target);
    result1685 = $tmp1686;
    panda$core$Bit $tmp1688 = panda$core$Bit$$NOT$R$panda$core$Bit(result1685);
    bool $tmp1687 = $tmp1688.value;
    if (!$tmp1687) goto $l1689;
    panda$core$Bit $tmp1690 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_node->type->typeKind, ((panda$core$Int64) { 17 }));
    $tmp1687 = $tmp1690.value;
    $l1689:;
    panda$core$Bit $tmp1691 = { $tmp1687 };
    if ($tmp1691.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp1693 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_node);
        resolved1692 = $tmp1693;
        if (((panda$core$Bit) { resolved1692 != NULL }).value) {
        {
            panda$core$Bit $tmp1694 = org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, resolved1692, p_target);
            result1685 = $tmp1694;
        }
        }
    }
    }
    return result1685;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$panda$core$Int64$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_node, panda$core$Int64 p_offset, panda$core$Bit p_isExplicit, org$pandalanguage$pandac$Type* p_target) {
    org$pandalanguage$pandac$IRNode* resolved1715;
    panda$collections$Array* children1718;
    panda$core$Bit $tmp1695 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_node->type, p_target);
    if ($tmp1695.value) {
    {
        return p_node;
    }
    }
    org$pandalanguage$pandac$Type* $tmp1696 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1697 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1696);
    PANDA_ASSERT($tmp1697.value);
    bool $tmp1698 = p_isExplicit.value;
    if (!$tmp1698) goto $l1699;
    panda$core$Bit $tmp1700 = org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_node, p_target);
    panda$core$Bit $tmp1701 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1700);
    $tmp1698 = $tmp1701.value;
    $l1699:;
    panda$core$Bit $tmp1702 = { $tmp1698 };
    if ($tmp1702.value) {
    {
        panda$core$String* $tmp1704 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1703, ((panda$core$Object*) p_node->type));
        panda$core$String* $tmp1706 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1704, &$s1705);
        panda$core$String* $tmp1708 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1707, ((panda$core$Object*) p_target));
        panda$core$String* $tmp1710 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1708, &$s1709);
        panda$core$String* $tmp1711 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1706, $tmp1710);
        org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_offset, $tmp1711);
    }
    }
    switch (p_node->kind.value) {
        case 1004:
        case 1032:
        case 1011:
        {
            org$pandalanguage$pandac$IRNode* $tmp1712 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_node, p_target);
            return $tmp1712;
        }
        break;
        case 1039:
        case 1040:
        {
            panda$core$Int64$nullable $tmp1713 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_node, p_target);
            if (((panda$core$Bit) { $tmp1713.nonnull }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1714 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_node, p_target);
                return $tmp1714;
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp1716 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_node);
            resolved1715 = $tmp1716;
            if (((panda$core$Bit) { resolved1715 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1717 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$panda$core$Int64$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, resolved1715, p_offset, p_isExplicit, p_target);
                return $tmp1717;
            }
            }
        }
        break;
    }
    panda$collections$Array* $tmp1719 = (panda$collections$Array*) malloc(40);
    $tmp1719->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1719->refCount.value = 1;
    panda$collections$Array$init($tmp1719);
    children1718 = $tmp1719;
    panda$collections$Array$add$panda$collections$Array$T(children1718, ((panda$core$Object*) p_node));
    org$pandalanguage$pandac$IRNode* $tmp1721 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp1721->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp1721->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1721, ((panda$core$Int64) { 1009 }), p_offset, p_target, ((panda$core$Object*) wrap_panda$core$Bit(p_isExplicit)), ((panda$collections$ListView*) children1718));
    return $tmp1721;
}
panda$core$Int64$nullable org$pandalanguage$pandac$Compiler$callCost$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodRef* p_m, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedReturn) {
    panda$core$Int64 result1729;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1730;
    panda$core$Int64$nullable cost1750;
    panda$core$Int64$nullable cost1769;
    PANDA_ASSERT(p_m->value->resolved.value);
    panda$core$Int64 $tmp1723 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
    ITable* $tmp1724 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp1724->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1724 = $tmp1724->next;
    }
    $fn1726 $tmp1725 = $tmp1724->methods[0];
    panda$core$Int64 $tmp1727 = $tmp1725(((panda$collections$CollectionView*) p_args));
    panda$core$Bit $tmp1728 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1723, $tmp1727);
    if ($tmp1728.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    result1729 = ((panda$core$Int64) { 0 });
    panda$core$Int64 $tmp1731 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp1730, ((panda$core$Int64) { 0 }), $tmp1731, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp1733 = $tmp1730.start.value;
    panda$core$Int64 i1732 = { $tmp1733 };
    int64_t $tmp1735 = $tmp1730.end.value;
    int64_t $tmp1736 = $tmp1730.step.value;
    bool $tmp1737 = $tmp1730.inclusive.value;
    bool $tmp1744 = $tmp1736 > 0;
    if ($tmp1744) goto $l1742; else goto $l1743;
    $l1742:;
    if ($tmp1737) goto $l1745; else goto $l1746;
    $l1745:;
    if ($tmp1733 <= $tmp1735) goto $l1738; else goto $l1740;
    $l1746:;
    if ($tmp1733 < $tmp1735) goto $l1738; else goto $l1740;
    $l1743:;
    if ($tmp1737) goto $l1747; else goto $l1748;
    $l1747:;
    if ($tmp1733 >= $tmp1735) goto $l1738; else goto $l1740;
    $l1748:;
    if ($tmp1733 > $tmp1735) goto $l1738; else goto $l1740;
    $l1738:;
    {
        ITable* $tmp1751 = p_args->$class->itable;
        while ($tmp1751->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1751 = $tmp1751->next;
        }
        $fn1753 $tmp1752 = $tmp1751->methods[0];
        panda$core$Object* $tmp1754 = $tmp1752(p_args, i1732);
        org$pandalanguage$pandac$Type* $tmp1755 = org$pandalanguage$pandac$MethodRef$parameter$panda$core$Int64$R$org$pandalanguage$pandac$Type(p_m, i1732);
        panda$core$Int64$nullable $tmp1756 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1754), $tmp1755);
        cost1750 = $tmp1756;
        if (((panda$core$Bit) { !cost1750.nonnull }).value) {
        {
            return ((panda$core$Int64$nullable) { .nonnull = false });
        }
        }
        panda$core$Int64 $tmp1757 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result1729, ((panda$core$Int64) cost1750.value));
        result1729 = $tmp1757;
    }
    $l1741:;
    if ($tmp1744) goto $l1759; else goto $l1760;
    $l1759:;
    int64_t $tmp1761 = $tmp1735 - i1732.value;
    if ($tmp1737) goto $l1762; else goto $l1763;
    $l1762:;
    if ($tmp1761 >= $tmp1736) goto $l1758; else goto $l1740;
    $l1763:;
    if ($tmp1761 > $tmp1736) goto $l1758; else goto $l1740;
    $l1760:;
    int64_t $tmp1765 = i1732.value - $tmp1735;
    if ($tmp1737) goto $l1766; else goto $l1767;
    $l1766:;
    if ($tmp1765 >= -$tmp1736) goto $l1758; else goto $l1740;
    $l1767:;
    if ($tmp1765 > -$tmp1736) goto $l1758; else goto $l1740;
    $l1758:;
    i1732.value += $tmp1736;
    goto $l1738;
    $l1740:;
    if (((panda$core$Bit) { p_expectedReturn != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp1770 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(p_m);
        panda$core$Int64$nullable $tmp1771 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1770, p_expectedReturn);
        cost1769 = $tmp1771;
        if (((panda$core$Bit) { !cost1769.nonnull }).value) {
        {
            return ((panda$core$Int64$nullable) { .nonnull = false });
        }
        }
        panda$core$Int64 $tmp1772 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result1729, ((panda$core$Int64) cost1769.value));
        result1729 = $tmp1772;
    }
    }
    org$pandalanguage$pandac$Type* $tmp1775 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->value->owner);
    panda$core$Bit $tmp1776 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit($tmp1775);
    bool $tmp1774 = $tmp1776.value;
    if (!$tmp1774) goto $l1777;
    ITable* $tmp1778 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp1778->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1778 = $tmp1778->next;
    }
    $fn1780 $tmp1779 = $tmp1778->methods[0];
    panda$core$Int64 $tmp1781 = $tmp1779(((panda$collections$CollectionView*) p_args));
    panda$core$Bit $tmp1782 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1781, ((panda$core$Int64) { 1 }));
    $tmp1774 = $tmp1782.value;
    $l1777:;
    panda$core$Bit $tmp1783 = { $tmp1774 };
    bool $tmp1773 = $tmp1783.value;
    if (!$tmp1773) goto $l1784;
    panda$core$Object* $tmp1785 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->value->parameters, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp1786 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->value->owner);
    panda$core$Bit $tmp1787 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1785)->type, $tmp1786);
    $tmp1773 = $tmp1787.value;
    $l1784:;
    panda$core$Bit $tmp1788 = { $tmp1773 };
    if ($tmp1788.value) {
    {
        panda$core$Int64 $tmp1789 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result1729, ((panda$core$Int64) { 1 }));
        result1729 = $tmp1789;
    }
    }
    return ((panda$core$Int64$nullable) { result1729, true });
}
panda$core$Int64$nullable org$pandalanguage$pandac$Compiler$matchMethods$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(org$pandalanguage$pandac$Compiler* self, panda$collections$Array* p_methods, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedReturn) {
    panda$collections$Array* result1790;
    panda$core$Int64$nullable best1793;
    panda$collections$Iterator* m$Iter1794;
    org$pandalanguage$pandac$MethodRef* m1806;
    panda$core$Int64$nullable cost1811;
    panda$collections$Array* $tmp1791 = (panda$collections$Array*) malloc(40);
    $tmp1791->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1791->refCount.value = 1;
    panda$collections$Array$init($tmp1791);
    result1790 = $tmp1791;
    best1793 = ((panda$core$Int64$nullable) { .nonnull = false });
    {
        ITable* $tmp1795 = ((panda$collections$Iterable*) p_methods)->$class->itable;
        while ($tmp1795->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1795 = $tmp1795->next;
        }
        $fn1797 $tmp1796 = $tmp1795->methods[0];
        panda$collections$Iterator* $tmp1798 = $tmp1796(((panda$collections$Iterable*) p_methods));
        m$Iter1794 = $tmp1798;
        $l1799:;
        ITable* $tmp1801 = m$Iter1794->$class->itable;
        while ($tmp1801->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1801 = $tmp1801->next;
        }
        $fn1803 $tmp1802 = $tmp1801->methods[0];
        panda$core$Bit $tmp1804 = $tmp1802(m$Iter1794);
        panda$core$Bit $tmp1805 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1804);
        if (!$tmp1805.value) goto $l1800;
        {
            ITable* $tmp1807 = m$Iter1794->$class->itable;
            while ($tmp1807->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1807 = $tmp1807->next;
            }
            $fn1809 $tmp1808 = $tmp1807->methods[1];
            panda$core$Object* $tmp1810 = $tmp1808(m$Iter1794);
            m1806 = ((org$pandalanguage$pandac$MethodRef*) $tmp1810);
            panda$core$Int64$nullable $tmp1812 = org$pandalanguage$pandac$Compiler$callCost$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(self, m1806, p_args, p_expectedReturn);
            cost1811 = $tmp1812;
            if (((panda$core$Bit) { !cost1811.nonnull }).value) {
            {
                goto $l1799;
            }
            }
            bool $tmp1813 = ((panda$core$Bit) { !best1793.nonnull }).value;
            if ($tmp1813) goto $l1814;
            panda$core$Bit $tmp1815 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost1811.value), ((panda$core$Int64) best1793.value));
            $tmp1813 = $tmp1815.value;
            $l1814:;
            panda$core$Bit $tmp1816 = { $tmp1813 };
            if ($tmp1816.value) {
            {
                panda$collections$Array$clear(result1790);
                best1793 = cost1811;
            }
            }
            panda$core$Bit $tmp1817 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost1811.value), ((panda$core$Int64) best1793.value));
            if ($tmp1817.value) {
            {
                panda$collections$Array$add$panda$collections$Array$T(result1790, ((panda$core$Object*) m1806));
            }
            }
        }
        goto $l1799;
        $l1800:;
    }
    panda$collections$Array$clear(p_methods);
    panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(p_methods, ((panda$collections$CollectionView*) result1790));
    return best1793;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_offset, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$MethodRef* p_m, panda$collections$ListView* p_args) {
    panda$collections$Array* finalArgs1824;
    org$pandalanguage$pandac$IRNode* selfNode1860;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1875;
    org$pandalanguage$pandac$IRNode* coerced1898;
    org$pandalanguage$pandac$IRNode* result1918;
    PANDA_ASSERT(p_m->value->resolved.value);
    panda$core$Int64 $tmp1818 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
    ITable* $tmp1819 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp1819->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1819 = $tmp1819->next;
    }
    $fn1821 $tmp1820 = $tmp1819->methods[0];
    panda$core$Int64 $tmp1822 = $tmp1820(((panda$collections$CollectionView*) p_args));
    panda$core$Bit $tmp1823 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1818, $tmp1822);
    PANDA_ASSERT($tmp1823.value);
    panda$collections$Array* $tmp1825 = (panda$collections$Array*) malloc(40);
    $tmp1825->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1825->refCount.value = 1;
    panda$collections$Array$init($tmp1825);
    finalArgs1824 = $tmp1825;
    bool $tmp1828 = ((panda$core$Bit) { p_target != NULL }).value;
    if (!$tmp1828) goto $l1829;
    panda$core$Bit $tmp1830 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1038 }));
    $tmp1828 = $tmp1830.value;
    $l1829:;
    panda$core$Bit $tmp1831 = { $tmp1828 };
    bool $tmp1827 = $tmp1831.value;
    if (!$tmp1827) goto $l1832;
    panda$core$Bit $tmp1833 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->value->annotations);
    panda$core$Bit $tmp1834 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1833);
    $tmp1827 = $tmp1834.value;
    $l1832:;
    panda$core$Bit $tmp1835 = { $tmp1827 };
    if ($tmp1835.value) {
    {
        org$pandalanguage$pandac$Type* $tmp1836 = org$pandalanguage$pandac$MethodRef$owner$R$org$pandalanguage$pandac$Type(p_m);
        org$pandalanguage$pandac$IRNode* $tmp1837 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$panda$core$Int64$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, p_target, p_offset, ((panda$core$Bit) { false }), $tmp1836);
        panda$collections$Array$add$panda$collections$Array$T(finalArgs1824, ((panda$core$Object*) $tmp1837));
    }
    }
    panda$core$Bit $tmp1838 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->value->methodKind, ((panda$core$Int64) { 59 }));
    if ($tmp1838.value) {
    {
        if (((panda$core$Bit) { p_target == NULL }).value) {
        {
            panda$core$Object* $tmp1839 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
            panda$core$Bit $tmp1840 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp1839)->methodKind, ((panda$core$Int64) { 59 }));
            if ($tmp1840.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1841 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp1841->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1841->refCount.value = 1;
                panda$core$Object* $tmp1843 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
                org$pandalanguage$pandac$Type* $tmp1844 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp1843));
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp1841, ((panda$core$Int64) { 1025 }), p_offset, $tmp1844);
                panda$collections$Array$add$panda$collections$Array$T(finalArgs1824, ((panda$core$Object*) $tmp1841));
            }
            }
            else {
            {
                org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_offset, &$s1845);
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp1848 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1025 }));
        bool $tmp1847 = $tmp1848.value;
        if (!$tmp1847) goto $l1849;
        panda$core$Bit $tmp1850 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1024 }));
        $tmp1847 = $tmp1850.value;
        $l1849:;
        panda$core$Bit $tmp1851 = { $tmp1847 };
        bool $tmp1846 = $tmp1851.value;
        if (!$tmp1846) goto $l1852;
        panda$core$Bit $tmp1853 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1038 }));
        $tmp1846 = $tmp1853.value;
        $l1852:;
        panda$core$Bit $tmp1854 = { $tmp1846 };
        if ($tmp1854.value) {
        {
            org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_offset, &$s1855);
        }
        }
        }
    }
    }
    else {
    panda$core$Bit $tmp1857 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(p_m->value);
    bool $tmp1856 = $tmp1857.value;
    if (!$tmp1856) goto $l1858;
    $tmp1856 = ((panda$core$Bit) { p_target == NULL }).value;
    $l1858:;
    panda$core$Bit $tmp1859 = { $tmp1856 };
    if ($tmp1859.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp1861 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp1861->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp1861->refCount.value = 1;
        panda$core$Object* $tmp1863 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
        org$pandalanguage$pandac$Type* $tmp1864 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp1863));
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp1861, ((panda$core$Int64) { 1025 }), p_offset, $tmp1864);
        selfNode1860 = $tmp1861;
        org$pandalanguage$pandac$Type* $tmp1865 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->value->owner);
        org$pandalanguage$pandac$IRNode* $tmp1866 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, selfNode1860, $tmp1865);
        selfNode1860 = $tmp1866;
        PANDA_ASSERT(((panda$core$Bit) { selfNode1860 != NULL }).value);
        panda$collections$Array$add$panda$collections$Array$T(finalArgs1824, ((panda$core$Object*) selfNode1860));
        panda$core$Object* $tmp1867 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
        panda$core$Bit $tmp1868 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp1867));
        panda$core$Bit $tmp1869 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1868);
        if ($tmp1869.value) {
        {
            panda$core$String* $tmp1871 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(p_m->value);
            panda$core$String* $tmp1872 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1870, $tmp1871);
            panda$core$String* $tmp1874 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1872, &$s1873);
            org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_offset, $tmp1874);
        }
        }
    }
    }
    }
    ITable* $tmp1876 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp1876->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1876 = $tmp1876->next;
    }
    $fn1878 $tmp1877 = $tmp1876->methods[0];
    panda$core$Int64 $tmp1879 = $tmp1877(((panda$collections$CollectionView*) p_args));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp1875, ((panda$core$Int64) { 0 }), $tmp1879, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp1881 = $tmp1875.start.value;
    panda$core$Int64 i1880 = { $tmp1881 };
    int64_t $tmp1883 = $tmp1875.end.value;
    int64_t $tmp1884 = $tmp1875.step.value;
    bool $tmp1885 = $tmp1875.inclusive.value;
    bool $tmp1892 = $tmp1884 > 0;
    if ($tmp1892) goto $l1890; else goto $l1891;
    $l1890:;
    if ($tmp1885) goto $l1893; else goto $l1894;
    $l1893:;
    if ($tmp1881 <= $tmp1883) goto $l1886; else goto $l1888;
    $l1894:;
    if ($tmp1881 < $tmp1883) goto $l1886; else goto $l1888;
    $l1891:;
    if ($tmp1885) goto $l1895; else goto $l1896;
    $l1895:;
    if ($tmp1881 >= $tmp1883) goto $l1886; else goto $l1888;
    $l1896:;
    if ($tmp1881 > $tmp1883) goto $l1886; else goto $l1888;
    $l1886:;
    {
        ITable* $tmp1899 = p_args->$class->itable;
        while ($tmp1899->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1899 = $tmp1899->next;
        }
        $fn1901 $tmp1900 = $tmp1899->methods[0];
        panda$core$Object* $tmp1902 = $tmp1900(p_args, i1880);
        org$pandalanguage$pandac$Type* $tmp1903 = org$pandalanguage$pandac$MethodRef$parameter$panda$core$Int64$R$org$pandalanguage$pandac$Type(p_m, i1880);
        org$pandalanguage$pandac$IRNode* $tmp1904 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1902), $tmp1903);
        coerced1898 = $tmp1904;
        if (((panda$core$Bit) { coerced1898 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Object* $tmp1905 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->value->parameters, i1880);
        org$pandalanguage$pandac$IRNode* $tmp1906 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$panda$core$Int64$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, coerced1898, p_offset, ((panda$core$Bit) { false }), ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1905)->type);
        coerced1898 = $tmp1906;
        if (((panda$core$Bit) { coerced1898 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(finalArgs1824, ((panda$core$Object*) coerced1898));
    }
    $l1889:;
    if ($tmp1892) goto $l1908; else goto $l1909;
    $l1908:;
    int64_t $tmp1910 = $tmp1883 - i1880.value;
    if ($tmp1885) goto $l1911; else goto $l1912;
    $l1911:;
    if ($tmp1910 >= $tmp1884) goto $l1907; else goto $l1888;
    $l1912:;
    if ($tmp1910 > $tmp1884) goto $l1907; else goto $l1888;
    $l1909:;
    int64_t $tmp1914 = i1880.value - $tmp1883;
    if ($tmp1885) goto $l1915; else goto $l1916;
    $l1915:;
    if ($tmp1914 >= -$tmp1884) goto $l1907; else goto $l1888;
    $l1916:;
    if ($tmp1914 > -$tmp1884) goto $l1907; else goto $l1888;
    $l1907:;
    i1880.value += $tmp1884;
    goto $l1886;
    $l1888:;
    panda$core$Bit $tmp1920 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_m->value->owner)->name, &$s1919);
    if ($tmp1920.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp1921 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp1921->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp1921->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp1923 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(p_m);
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1921, ((panda$core$Int64) { 1005 }), p_offset, $tmp1923, ((panda$core$Object*) p_m), ((panda$collections$ListView*) finalArgs1824));
        result1918 = $tmp1921;
    }
    }
    else {
    {
        org$pandalanguage$pandac$IRNode* $tmp1924 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp1924->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp1924->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1924, ((panda$core$Int64) { 1005 }), p_offset, p_m->value->returnType, ((panda$core$Object*) p_m), ((panda$collections$ListView*) finalArgs1824));
        result1918 = $tmp1924;
        org$pandalanguage$pandac$Type* $tmp1926 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(p_m);
        org$pandalanguage$pandac$IRNode* $tmp1927 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$panda$core$Int64$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, result1918, p_offset, ((panda$core$Bit) { false }), $tmp1926);
        result1918 = $tmp1927;
    }
    }
    return result1918;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_target, panda$core$String* p_name, panda$collections$ListView* p_args) {
    org$pandalanguage$pandac$IRNode* $tmp1928 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_target, p_name, p_args, NULL);
    return $tmp1928;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_target, panda$core$String* p_name, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedType) {
    org$pandalanguage$pandac$IRNode* resolved1929;
    org$pandalanguage$pandac$ClassDecl* cl1931;
    org$pandalanguage$pandac$Symbol* s1935;
    org$pandalanguage$pandac$IRNode* ref1957;
    org$pandalanguage$pandac$IRNode* $tmp1930 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_target);
    resolved1929 = $tmp1930;
    if (((panda$core$Bit) { resolved1929 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp1932 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(resolved1929->kind, ((panda$core$Int64) { 1001 }));
    if ($tmp1932.value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp1933 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Type*) resolved1929->payload));
        cl1931 = $tmp1933;
    }
    }
    else {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp1934 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, resolved1929->type);
        cl1931 = $tmp1934;
    }
    }
    if (((panda$core$Bit) { cl1931 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp1936 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl1931);
    org$pandalanguage$pandac$Symbol* $tmp1937 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp1936, p_name);
    s1935 = $tmp1937;
    if (((panda$core$Bit) { s1935 == NULL }).value) {
    {
        panda$core$String* $tmp1939 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1938, ((org$pandalanguage$pandac$Symbol*) cl1931)->name);
        panda$core$String* $tmp1941 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1939, &$s1940);
        panda$core$String* $tmp1942 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1941, p_name);
        panda$core$String* $tmp1944 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1942, &$s1943);
        org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_target->offset, $tmp1944);
        return NULL;
    }
    }
    panda$core$Bit $tmp1946 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(s1935->kind, ((panda$core$Int64) { 204 }));
    bool $tmp1945 = $tmp1946.value;
    if (!$tmp1945) goto $l1947;
    panda$core$Bit $tmp1948 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(s1935->kind, ((panda$core$Int64) { 205 }));
    $tmp1945 = $tmp1948.value;
    $l1947:;
    panda$core$Bit $tmp1949 = { $tmp1945 };
    if ($tmp1949.value) {
    {
        panda$core$String* $tmp1951 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1950, ((org$pandalanguage$pandac$Symbol*) cl1931)->name);
        panda$core$String* $tmp1953 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1951, &$s1952);
        panda$core$String* $tmp1954 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1953, p_name);
        panda$core$String* $tmp1956 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1954, &$s1955);
        org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_target->offset, $tmp1956);
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp1958 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl1931);
    org$pandalanguage$pandac$IRNode* $tmp1959 = org$pandalanguage$pandac$Compiler$symbolRef$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q(self, p_target->offset, p_target, s1935, $tmp1958);
    ref1957 = $tmp1959;
    if (((panda$core$Bit) { ref1957 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp1960 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, ref1957, p_args, p_expectedType);
    return $tmp1960;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_m, panda$collections$ListView* p_args) {
    org$pandalanguage$pandac$IRNode* $tmp1961 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_m, p_args, NULL);
    return $tmp1961;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_m, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedType) {
    org$pandalanguage$pandac$IRNode* target1962;
    panda$collections$Array* methods1969;
    org$pandalanguage$pandac$MethodDecl* first1974;
    panda$core$MutableString* msg1979;
    panda$core$String* separator1991;
    panda$collections$Iterator* a$Iter1993;
    org$pandalanguage$pandac$IRNode* a2005;
    org$pandalanguage$pandac$IRNode* target2019;
    panda$collections$Array* children2027;
    panda$collections$Array* types2033;
    panda$collections$Iterator* m$Iter2036;
    org$pandalanguage$pandac$MethodRef* m2048;
    org$pandalanguage$pandac$IRNode* target2058;
    org$pandalanguage$pandac$IRNode* initCall2061;
    panda$collections$Array* children2065;
    org$pandalanguage$pandac$IRNode* resolved2070;
    switch (p_m->kind.value) {
        case 1002:
        {
            panda$core$Int64 $tmp1963 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->children);
            panda$core$Bit $tmp1964 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1963, ((panda$core$Int64) { 0 }));
            if ($tmp1964.value) {
            {
                target1962 = NULL;
            }
            }
            else {
            {
                panda$core$Int64 $tmp1965 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->children);
                panda$core$Bit $tmp1966 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1965, ((panda$core$Int64) { 1 }));
                PANDA_ASSERT($tmp1966.value);
                panda$core$Object* $tmp1967 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->children, ((panda$core$Int64) { 0 }));
                target1962 = ((org$pandalanguage$pandac$IRNode*) $tmp1967);
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp1968 = org$pandalanguage$pandac$Compiler$call$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, p_m->offset, target1962, ((org$pandalanguage$pandac$MethodRef*) p_m->payload), p_args);
            return $tmp1968;
        }
        break;
        case 1003:
        {
            panda$collections$Array* $tmp1970 = (panda$collections$Array*) malloc(40);
            $tmp1970->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1970->refCount.value = 1;
            panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp1970, ((panda$collections$ListView*) p_m->payload));
            methods1969 = $tmp1970;
            org$pandalanguage$pandac$Compiler$matchMethods$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(self, methods1969, p_args, p_expectedType);
            panda$core$Int64 $tmp1972 = panda$collections$Array$get_count$R$panda$core$Int64(methods1969);
            panda$core$Bit $tmp1973 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1972, ((panda$core$Int64) { 0 }));
            if ($tmp1973.value) {
            {
                ITable* $tmp1975 = ((panda$collections$ListView*) p_m->payload)->$class->itable;
                while ($tmp1975->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp1975 = $tmp1975->next;
                }
                $fn1977 $tmp1976 = $tmp1975->methods[0];
                panda$core$Object* $tmp1978 = $tmp1976(((panda$collections$ListView*) p_m->payload), ((panda$core$Int64) { 0 }));
                first1974 = ((org$pandalanguage$pandac$MethodRef*) $tmp1978)->value;
                panda$core$MutableString* $tmp1980 = (panda$core$MutableString*) malloc(40);
                $tmp1980->$class = (panda$core$Class*) &panda$core$MutableString$class;
                $tmp1980->refCount.value = 1;
                panda$core$String* $tmp1983 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1982, ((org$pandalanguage$pandac$Symbol*) first1974->owner)->name);
                panda$core$String* $tmp1985 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1983, &$s1984);
                panda$core$String* $tmp1987 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1986, ((org$pandalanguage$pandac$Symbol*) first1974)->name);
                panda$core$String* $tmp1989 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1987, &$s1988);
                panda$core$String* $tmp1990 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1985, $tmp1989);
                panda$core$MutableString$init$panda$core$String($tmp1980, $tmp1990);
                msg1979 = $tmp1980;
                separator1991 = &$s1992;
                {
                    ITable* $tmp1994 = ((panda$collections$Iterable*) p_args)->$class->itable;
                    while ($tmp1994->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1994 = $tmp1994->next;
                    }
                    $fn1996 $tmp1995 = $tmp1994->methods[0];
                    panda$collections$Iterator* $tmp1997 = $tmp1995(((panda$collections$Iterable*) p_args));
                    a$Iter1993 = $tmp1997;
                    $l1998:;
                    ITable* $tmp2000 = a$Iter1993->$class->itable;
                    while ($tmp2000->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp2000 = $tmp2000->next;
                    }
                    $fn2002 $tmp2001 = $tmp2000->methods[0];
                    panda$core$Bit $tmp2003 = $tmp2001(a$Iter1993);
                    panda$core$Bit $tmp2004 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2003);
                    if (!$tmp2004.value) goto $l1999;
                    {
                        ITable* $tmp2006 = a$Iter1993->$class->itable;
                        while ($tmp2006->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2006 = $tmp2006->next;
                        }
                        $fn2008 $tmp2007 = $tmp2006->methods[1];
                        panda$core$Object* $tmp2009 = $tmp2007(a$Iter1993);
                        a2005 = ((org$pandalanguage$pandac$IRNode*) $tmp2009);
                        panda$core$MutableString$append$panda$core$String(msg1979, separator1991);
                        panda$core$MutableString$append$panda$core$Object(msg1979, ((panda$core$Object*) a2005->type));
                        separator1991 = &$s2010;
                    }
                    goto $l1998;
                    $l1999:;
                }
                panda$core$MutableString$append$panda$core$String(msg1979, &$s2011);
                if (((panda$core$Bit) { p_expectedType != NULL }).value) {
                {
                    panda$core$String* $tmp2013 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2012, ((panda$core$Object*) p_expectedType));
                    panda$core$String* $tmp2015 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2013, &$s2014);
                    panda$core$MutableString$append$panda$core$String(msg1979, $tmp2015);
                }
                }
                panda$core$String* $tmp2016 = panda$core$MutableString$convert$R$panda$core$String(msg1979);
                org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_m->offset, $tmp2016);
                return NULL;
            }
            }
            panda$core$Int64 $tmp2017 = panda$collections$Array$get_count$R$panda$core$Int64(methods1969);
            panda$core$Bit $tmp2018 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2017, ((panda$core$Int64) { 1 }));
            if ($tmp2018.value) {
            {
                panda$core$Int64 $tmp2020 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->children);
                panda$core$Bit $tmp2021 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2020, ((panda$core$Int64) { 1 }));
                if ($tmp2021.value) {
                {
                    panda$core$Object* $tmp2022 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->children, ((panda$core$Int64) { 0 }));
                    target2019 = ((org$pandalanguage$pandac$IRNode*) $tmp2022);
                }
                }
                else {
                {
                    panda$core$Int64 $tmp2023 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->children);
                    panda$core$Bit $tmp2024 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2023, ((panda$core$Int64) { 0 }));
                    PANDA_ASSERT($tmp2024.value);
                    target2019 = NULL;
                }
                }
                panda$core$Object* $tmp2025 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(methods1969, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$IRNode* $tmp2026 = org$pandalanguage$pandac$Compiler$call$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, p_m->offset, target2019, ((org$pandalanguage$pandac$MethodRef*) $tmp2025), p_args);
                return $tmp2026;
            }
            }
            panda$collections$Array* $tmp2028 = (panda$collections$Array*) malloc(40);
            $tmp2028->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2028->refCount.value = 1;
            panda$collections$Array$init($tmp2028);
            children2027 = $tmp2028;
            org$pandalanguage$pandac$IRNode* $tmp2030 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp2030->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2030->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2032 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2030, ((panda$core$Int64) { 1003 }), p_m->offset, $tmp2032, ((panda$core$Object*) methods1969), ((panda$collections$ListView*) p_m->children));
            panda$collections$Array$add$panda$collections$Array$T(children2027, ((panda$core$Object*) $tmp2030));
            panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(children2027, ((panda$collections$CollectionView*) p_args));
            panda$collections$Array* $tmp2034 = (panda$collections$Array*) malloc(40);
            $tmp2034->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2034->refCount.value = 1;
            panda$collections$Array$init($tmp2034);
            types2033 = $tmp2034;
            {
                ITable* $tmp2037 = ((panda$collections$Iterable*) methods1969)->$class->itable;
                while ($tmp2037->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp2037 = $tmp2037->next;
                }
                $fn2039 $tmp2038 = $tmp2037->methods[0];
                panda$collections$Iterator* $tmp2040 = $tmp2038(((panda$collections$Iterable*) methods1969));
                m$Iter2036 = $tmp2040;
                $l2041:;
                ITable* $tmp2043 = m$Iter2036->$class->itable;
                while ($tmp2043->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp2043 = $tmp2043->next;
                }
                $fn2045 $tmp2044 = $tmp2043->methods[0];
                panda$core$Bit $tmp2046 = $tmp2044(m$Iter2036);
                panda$core$Bit $tmp2047 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2046);
                if (!$tmp2047.value) goto $l2042;
                {
                    ITable* $tmp2049 = m$Iter2036->$class->itable;
                    while ($tmp2049->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp2049 = $tmp2049->next;
                    }
                    $fn2051 $tmp2050 = $tmp2049->methods[1];
                    panda$core$Object* $tmp2052 = $tmp2050(m$Iter2036);
                    m2048 = ((org$pandalanguage$pandac$MethodRef*) $tmp2052);
                    org$pandalanguage$pandac$Type* $tmp2053 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m2048);
                    panda$collections$Array$add$panda$collections$Array$T(types2033, ((panda$core$Object*) $tmp2053));
                }
                goto $l2041;
                $l2042:;
            }
            org$pandalanguage$pandac$IRNode* $tmp2054 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp2054->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2054->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2056 = (org$pandalanguage$pandac$Type*) malloc(80);
            $tmp2056->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp2056->refCount.value = 1;
            org$pandalanguage$pandac$Type$init$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp2056, ((panda$collections$ListView*) types2033));
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2054, ((panda$core$Int64) { 1039 }), p_m->offset, $tmp2056, ((panda$collections$ListView*) children2027));
            return $tmp2054;
        }
        break;
        case 1001:
        {
            org$pandalanguage$pandac$IRNode* $tmp2059 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp2059->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2059->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp2059, ((panda$core$Int64) { 1038 }), p_m->offset, ((org$pandalanguage$pandac$Type*) p_m->payload));
            target2058 = $tmp2059;
            org$pandalanguage$pandac$IRNode* $tmp2063 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target2058, &$s2062, p_args);
            org$pandalanguage$pandac$IRNode* $tmp2064 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp2063);
            initCall2061 = $tmp2064;
            if (((panda$core$Bit) { initCall2061 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp2066 = (panda$collections$Array*) malloc(40);
            $tmp2066->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2066->refCount.value = 1;
            panda$collections$Array$init($tmp2066);
            children2065 = $tmp2066;
            panda$collections$Array$add$panda$collections$Array$T(children2065, ((panda$core$Object*) initCall2061));
            org$pandalanguage$pandac$IRNode* $tmp2068 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp2068->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2068->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2068, ((panda$core$Int64) { 1010 }), p_m->offset, ((org$pandalanguage$pandac$Type*) p_m->payload), ((panda$collections$ListView*) children2065));
            return $tmp2068;
        }
        break;
        default:
        {
            org$pandalanguage$pandac$IRNode* $tmp2071 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_m);
            resolved2070 = $tmp2071;
            if (((panda$core$Bit) { resolved2070 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$String* $tmp2073 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2072, ((panda$core$Object*) resolved2070->type));
            panda$core$String* $tmp2075 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2073, &$s2074);
            org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, resolved2070->offset, $tmp2075);
        }
    }
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$collections$Array* subtypes2076;
    panda$core$MutableString* typeName2079;
    panda$core$String* separator2083;
    panda$collections$Iterator* p$Iter2085;
    org$pandalanguage$pandac$MethodDecl$Parameter* p2097;
    panda$core$Int64 kind2103;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
    panda$collections$Array* $tmp2077 = (panda$collections$Array*) malloc(40);
    $tmp2077->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2077->refCount.value = 1;
    panda$collections$Array$init($tmp2077);
    subtypes2076 = $tmp2077;
    panda$core$MutableString* $tmp2080 = (panda$core$MutableString*) malloc(40);
    $tmp2080->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp2080->refCount.value = 1;
    panda$core$MutableString$init$panda$core$String($tmp2080, &$s2082);
    typeName2079 = $tmp2080;
    separator2083 = &$s2084;
    {
        ITable* $tmp2086 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp2086->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2086 = $tmp2086->next;
        }
        $fn2088 $tmp2087 = $tmp2086->methods[0];
        panda$collections$Iterator* $tmp2089 = $tmp2087(((panda$collections$Iterable*) p_m->parameters));
        p$Iter2085 = $tmp2089;
        $l2090:;
        ITable* $tmp2092 = p$Iter2085->$class->itable;
        while ($tmp2092->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2092 = $tmp2092->next;
        }
        $fn2094 $tmp2093 = $tmp2092->methods[0];
        panda$core$Bit $tmp2095 = $tmp2093(p$Iter2085);
        panda$core$Bit $tmp2096 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2095);
        if (!$tmp2096.value) goto $l2091;
        {
            ITable* $tmp2098 = p$Iter2085->$class->itable;
            while ($tmp2098->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2098 = $tmp2098->next;
            }
            $fn2100 $tmp2099 = $tmp2098->methods[1];
            panda$core$Object* $tmp2101 = $tmp2099(p$Iter2085);
            p2097 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp2101);
            panda$core$MutableString$append$panda$core$String(typeName2079, separator2083);
            panda$core$MutableString$append$panda$core$String(typeName2079, ((org$pandalanguage$pandac$Symbol*) p2097->type)->name);
            panda$collections$Array$add$panda$collections$Array$T(subtypes2076, ((panda$core$Object*) p2097->type));
            separator2083 = &$s2102;
        }
        goto $l2090;
        $l2091:;
    }
    panda$core$Bit $tmp2104 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 58 }));
    if ($tmp2104.value) {
    {
        panda$core$MutableString$append$panda$core$String(typeName2079, &$s2105);
        kind2103 = ((panda$core$Int64) { 24 });
    }
    }
    else {
    {
        panda$core$MutableString$append$panda$core$String(typeName2079, &$s2106);
        kind2103 = ((panda$core$Int64) { 25 });
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(subtypes2076, ((panda$core$Object*) p_m->returnType));
    org$pandalanguage$pandac$Type* $tmp2107 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2108 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp2107);
    if ($tmp2108.value) {
    {
        panda$core$MutableString$append$panda$core$String(typeName2079, ((org$pandalanguage$pandac$Symbol*) p_m->returnType)->name);
    }
    }
    panda$core$MutableString$append$panda$core$String(typeName2079, &$s2109);
    org$pandalanguage$pandac$Type* $tmp2110 = (org$pandalanguage$pandac$Type*) malloc(80);
    $tmp2110->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp2110->refCount.value = 1;
    panda$core$String* $tmp2112 = panda$core$MutableString$convert$R$panda$core$String(typeName2079);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp2110, $tmp2112, kind2103, ((org$pandalanguage$pandac$Symbol*) p_m)->offset, ((panda$collections$ListView*) subtypes2076), ((panda$core$Bit) { true }));
    return $tmp2110;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$declaredTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m, org$pandalanguage$pandac$Type* p_selfType) {
    panda$collections$Array* subtypes2113;
    panda$core$MutableString* typeName2116;
    panda$collections$Iterator* p$Iter2120;
    org$pandalanguage$pandac$MethodDecl$Parameter* p2132;
    panda$core$Int64 kind2138;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
    panda$collections$Array* $tmp2114 = (panda$collections$Array*) malloc(40);
    $tmp2114->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2114->refCount.value = 1;
    panda$collections$Array$init($tmp2114);
    subtypes2113 = $tmp2114;
    panda$core$MutableString* $tmp2117 = (panda$core$MutableString*) malloc(40);
    $tmp2117->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp2117->refCount.value = 1;
    panda$core$MutableString$init$panda$core$String($tmp2117, &$s2119);
    typeName2116 = $tmp2117;
    panda$core$MutableString$append$panda$core$String(typeName2116, ((org$pandalanguage$pandac$Symbol*) p_selfType)->name);
    panda$collections$Array$add$panda$collections$Array$T(subtypes2113, ((panda$core$Object*) p_selfType));
    {
        ITable* $tmp2121 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp2121->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2121 = $tmp2121->next;
        }
        $fn2123 $tmp2122 = $tmp2121->methods[0];
        panda$collections$Iterator* $tmp2124 = $tmp2122(((panda$collections$Iterable*) p_m->parameters));
        p$Iter2120 = $tmp2124;
        $l2125:;
        ITable* $tmp2127 = p$Iter2120->$class->itable;
        while ($tmp2127->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2127 = $tmp2127->next;
        }
        $fn2129 $tmp2128 = $tmp2127->methods[0];
        panda$core$Bit $tmp2130 = $tmp2128(p$Iter2120);
        panda$core$Bit $tmp2131 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2130);
        if (!$tmp2131.value) goto $l2126;
        {
            ITable* $tmp2133 = p$Iter2120->$class->itable;
            while ($tmp2133->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2133 = $tmp2133->next;
            }
            $fn2135 $tmp2134 = $tmp2133->methods[1];
            panda$core$Object* $tmp2136 = $tmp2134(p$Iter2120);
            p2132 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp2136);
            panda$core$MutableString$append$panda$core$String(typeName2116, &$s2137);
            panda$core$MutableString$append$panda$core$String(typeName2116, ((org$pandalanguage$pandac$Symbol*) p2132->type)->name);
            panda$collections$Array$add$panda$collections$Array$T(subtypes2113, ((panda$core$Object*) p2132->type));
        }
        goto $l2125;
        $l2126:;
    }
    panda$core$Bit $tmp2139 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 58 }));
    if ($tmp2139.value) {
    {
        panda$core$MutableString$append$panda$core$String(typeName2116, &$s2140);
        kind2138 = ((panda$core$Int64) { 24 });
    }
    }
    else {
    {
        panda$core$MutableString$append$panda$core$String(typeName2116, &$s2141);
        kind2138 = ((panda$core$Int64) { 25 });
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(subtypes2113, ((panda$core$Object*) p_m->returnType));
    org$pandalanguage$pandac$Type* $tmp2142 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2143 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp2142);
    if ($tmp2143.value) {
    {
        panda$core$MutableString$append$panda$core$String(typeName2116, ((org$pandalanguage$pandac$Symbol*) p_m->returnType)->name);
    }
    }
    panda$core$MutableString$append$panda$core$String(typeName2116, &$s2144);
    org$pandalanguage$pandac$Type* $tmp2145 = (org$pandalanguage$pandac$Type*) malloc(80);
    $tmp2145->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp2145->refCount.value = 1;
    panda$core$String* $tmp2147 = panda$core$MutableString$convert$R$panda$core$String(typeName2116);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp2145, $tmp2147, kind2138, ((org$pandalanguage$pandac$Symbol*) p_m)->offset, ((panda$collections$ListView*) subtypes2113), ((panda$core$Bit) { true }));
    return $tmp2145;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$MethodDecl* inherited2148;
    org$pandalanguage$pandac$MethodDecl* $tmp2149 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(self, p_m);
    inherited2148 = $tmp2149;
    if (((panda$core$Bit) { inherited2148 == NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp2150 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, p_m);
        return $tmp2150;
    }
    }
    org$pandalanguage$pandac$Type* $tmp2151 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, inherited2148);
    return $tmp2151;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$Type* $tmp2152 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    org$pandalanguage$pandac$Type* $tmp2153 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_m, $tmp2152);
    return $tmp2153;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m, org$pandalanguage$pandac$Type* p_selfType) {
    org$pandalanguage$pandac$MethodDecl* inherited2154;
    org$pandalanguage$pandac$MethodDecl* $tmp2155 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(self, p_m);
    inherited2154 = $tmp2155;
    if (((panda$core$Bit) { inherited2154 == NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp2156 = org$pandalanguage$pandac$Compiler$declaredTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_m, p_selfType);
        return $tmp2156;
    }
    }
    org$pandalanguage$pandac$Type* $tmp2157 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, inherited2154, p_selfType);
    return $tmp2157;
}
panda$core$String* org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(panda$core$Int64 p_op) {
    switch (p_op.value) {
        case 51:
        {
            return &$s2158;
        }
        break;
        case 52:
        {
            return &$s2159;
        }
        break;
        case 53:
        {
            return &$s2160;
        }
        break;
        case 54:
        {
            return &$s2161;
        }
        break;
        case 55:
        {
            return &$s2162;
        }
        break;
        case 56:
        {
            return &$s2163;
        }
        break;
        case 57:
        {
            return &$s2164;
        }
        break;
        case 58:
        {
            return &$s2165;
        }
        break;
        case 59:
        {
            return &$s2166;
        }
        break;
        case 63:
        {
            return &$s2167;
        }
        break;
        case 62:
        {
            return &$s2168;
        }
        break;
        case 65:
        {
            return &$s2169;
        }
        break;
        case 64:
        {
            return &$s2170;
        }
        break;
        case 68:
        {
            return &$s2171;
        }
        break;
        case 69:
        {
            return &$s2172;
        }
        break;
        case 66:
        {
            return &$s2173;
        }
        break;
        case 67:
        {
            return &$s2174;
        }
        break;
        case 70:
        {
            return &$s2175;
        }
        break;
        case 71:
        {
            return &$s2176;
        }
        break;
        case 49:
        {
            return &$s2177;
        }
        break;
        case 50:
        {
            return &$s2178;
        }
        break;
        case 72:
        {
            return &$s2179;
        }
        break;
        case 1:
        {
            return &$s2180;
        }
        break;
        case 101:
        {
            return &$s2181;
        }
        break;
        case 73:
        {
            return &$s2182;
        }
        break;
        case 60:
        {
            return &$s2183;
        }
        break;
        case 61:
        {
            return &$s2184;
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
            panda$core$Int64 $tmp2185 = panda$collections$Array$get_count$R$panda$core$Int64(p_expr->children);
            panda$core$Bit $tmp2186 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2185, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp2186.value);
            panda$core$Bit $tmp2187 = panda$core$Bit$$NOT$R$panda$core$Bit(((panda$core$Bit$wrapper*) p_expr->payload)->value);
            if ($tmp2187.value) {
            {
                panda$core$Object* $tmp2188 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Bit $tmp2189 = org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp2188));
                return $tmp2189;
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
            panda$core$Object* $tmp2190 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp2191 = org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp2190));
            return $tmp2191;
        }
        break;
        default:
        {
            return ((panda$core$Bit) { false });
        }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$foldInts$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_offset, org$pandalanguage$pandac$IRNode* p_left, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_right) {
    panda$core$Int64 l2217;
    panda$core$Int64 r2219;
    panda$core$Bit $tmp2193 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_left->kind, ((panda$core$Int64) { 1004 }));
    bool $tmp2192 = $tmp2193.value;
    if ($tmp2192) goto $l2194;
    panda$core$Bit $tmp2195 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_left->kind, ((panda$core$Int64) { 1032 }));
    $tmp2192 = $tmp2195.value;
    $l2194:;
    panda$core$Bit $tmp2196 = { $tmp2192 };
    PANDA_ASSERT($tmp2196.value);
    panda$core$Bit $tmp2198 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_right->kind, ((panda$core$Int64) { 1004 }));
    bool $tmp2197 = $tmp2198.value;
    if ($tmp2197) goto $l2199;
    panda$core$Bit $tmp2200 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_right->kind, ((panda$core$Int64) { 1032 }));
    $tmp2197 = $tmp2200.value;
    $l2199:;
    panda$core$Bit $tmp2201 = { $tmp2197 };
    PANDA_ASSERT($tmp2201.value);
    panda$core$Bit $tmp2204 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_left->kind, ((panda$core$Int64) { 1032 }));
    bool $tmp2203 = $tmp2204.value;
    if ($tmp2203) goto $l2205;
    panda$core$UInt64 $tmp2207 = panda$core$Int64$convert$R$panda$core$UInt64(((panda$core$Int64) { 9223372036854775807 }));
    panda$core$Bit $tmp2208 = panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p_left->payload)->value, $tmp2207);
    bool $tmp2206 = $tmp2208.value;
    if (!$tmp2206) goto $l2209;
    panda$core$Bit $tmp2210 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_right->kind, ((panda$core$Int64) { 1032 }));
    $tmp2206 = $tmp2210.value;
    $l2209:;
    panda$core$Bit $tmp2211 = { $tmp2206 };
    $tmp2203 = $tmp2211.value;
    $l2205:;
    panda$core$Bit $tmp2212 = { $tmp2203 };
    bool $tmp2202 = $tmp2212.value;
    if ($tmp2202) goto $l2213;
    panda$core$UInt64 $tmp2214 = panda$core$Int64$convert$R$panda$core$UInt64(((panda$core$Int64) { 9223372036854775807 }));
    panda$core$Bit $tmp2215 = panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p_right->payload)->value, $tmp2214);
    $tmp2202 = $tmp2215.value;
    $l2213:;
    panda$core$Bit $tmp2216 = { $tmp2202 };
    if ($tmp2216.value) {
    {
        panda$core$Int64 $tmp2218 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_left->payload)->value);
        l2217 = $tmp2218;
        panda$core$Int64 $tmp2220 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_right->payload)->value);
        r2219 = $tmp2220;
        switch (p_op.value) {
            case 51:
            {
                org$pandalanguage$pandac$IRNode* $tmp2221 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2221->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2221->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2223 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2224 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(l2217, r2219);
                panda$core$UInt64 $tmp2225 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2224);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2221, ((panda$core$Int64) { 1004 }), p_offset, $tmp2223, $tmp2225);
                return $tmp2221;
            }
            break;
            case 52:
            {
                org$pandalanguage$pandac$IRNode* $tmp2226 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2226->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2226->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2228 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2229 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(l2217, r2219);
                panda$core$UInt64 $tmp2230 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2229);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2226, ((panda$core$Int64) { 1004 }), p_offset, $tmp2228, $tmp2230);
                return $tmp2226;
            }
            break;
            case 53:
            {
                org$pandalanguage$pandac$IRNode* $tmp2231 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2231->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2231->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2233 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2234 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(l2217, r2219);
                panda$core$UInt64 $tmp2235 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2234);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2231, ((panda$core$Int64) { 1004 }), p_offset, $tmp2233, $tmp2235);
                return $tmp2231;
            }
            break;
            case 55:
            {
                org$pandalanguage$pandac$IRNode* $tmp2236 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2236->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2236->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2238 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2239 = panda$core$Int64$$INTDIV$panda$core$Int64$R$panda$core$Int64(l2217, r2219);
                panda$core$UInt64 $tmp2240 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2239);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2236, ((panda$core$Int64) { 1004 }), p_offset, $tmp2238, $tmp2240);
                return $tmp2236;
            }
            break;
            case 56:
            {
                org$pandalanguage$pandac$IRNode* $tmp2241 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2241->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2241->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2243 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2244 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(l2217, r2219);
                panda$core$UInt64 $tmp2245 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2244);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2241, ((panda$core$Int64) { 1004 }), p_offset, $tmp2243, $tmp2245);
                return $tmp2241;
            }
            break;
            case 58:
            {
                org$pandalanguage$pandac$IRNode* $tmp2246 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2246->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2246->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2248 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2249 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(l2217, r2219);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2246, ((panda$core$Int64) { 1011 }), p_offset, $tmp2248, $tmp2249);
                return $tmp2246;
            }
            break;
            case 59:
            {
                org$pandalanguage$pandac$IRNode* $tmp2250 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2250->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2250->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2252 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2253 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(l2217, r2219);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2250, ((panda$core$Int64) { 1011 }), p_offset, $tmp2252, $tmp2253);
                return $tmp2250;
            }
            break;
            case 62:
            {
                org$pandalanguage$pandac$IRNode* $tmp2254 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2254->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2254->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2256 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2257 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(l2217, r2219);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2254, ((panda$core$Int64) { 1011 }), p_offset, $tmp2256, $tmp2257);
                return $tmp2254;
            }
            break;
            case 63:
            {
                org$pandalanguage$pandac$IRNode* $tmp2258 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2258->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2258->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2260 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2261 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(l2217, r2219);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2258, ((panda$core$Int64) { 1011 }), p_offset, $tmp2260, $tmp2261);
                return $tmp2258;
            }
            break;
            case 64:
            {
                org$pandalanguage$pandac$IRNode* $tmp2262 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2262->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2262->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2264 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2265 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(l2217, r2219);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2262, ((panda$core$Int64) { 1011 }), p_offset, $tmp2264, $tmp2265);
                return $tmp2262;
            }
            break;
            case 65:
            {
                org$pandalanguage$pandac$IRNode* $tmp2266 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2266->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2266->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2268 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2269 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(l2217, r2219);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2266, ((panda$core$Int64) { 1011 }), p_offset, $tmp2268, $tmp2269);
                return $tmp2266;
            }
            break;
            case 67:
            {
                org$pandalanguage$pandac$IRNode* $tmp2270 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2270->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2270->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2272 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2273 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(l2217, r2219);
                panda$core$UInt64 $tmp2274 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2273);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2270, ((panda$core$Int64) { 1004 }), p_offset, $tmp2272, $tmp2274);
                return $tmp2270;
            }
            break;
            case 69:
            {
                org$pandalanguage$pandac$IRNode* $tmp2275 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2275->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2275->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2277 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2278 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(l2217, r2219);
                panda$core$UInt64 $tmp2279 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2278);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2275, ((panda$core$Int64) { 1004 }), p_offset, $tmp2277, $tmp2279);
                return $tmp2275;
            }
            break;
            case 71:
            {
                org$pandalanguage$pandac$IRNode* $tmp2280 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2280->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2280->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2282 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2283 = panda$core$Int64$$BXOR$panda$core$Int64$R$panda$core$Int64(l2217, r2219);
                panda$core$UInt64 $tmp2284 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2283);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2280, ((panda$core$Int64) { 1004 }), p_offset, $tmp2282, $tmp2284);
                return $tmp2280;
            }
            break;
            case 72:
            {
                org$pandalanguage$pandac$IRNode* $tmp2285 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2285->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2285->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2287 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2288 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(l2217, r2219);
                panda$core$UInt64 $tmp2289 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2288);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2285, ((panda$core$Int64) { 1004 }), p_offset, $tmp2287, $tmp2289);
                return $tmp2285;
            }
            break;
            case 1:
            {
                org$pandalanguage$pandac$IRNode* $tmp2290 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2290->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2290->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2292 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2293 = panda$core$Int64$$SHR$panda$core$Int64$R$panda$core$Int64(l2217, r2219);
                panda$core$UInt64 $tmp2294 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2293);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2290, ((panda$core$Int64) { 1004 }), p_offset, $tmp2292, $tmp2294);
                return $tmp2290;
            }
            break;
        }
    }
    }
    org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_offset, &$s2295);
    return NULL;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    panda$core$Bit $tmp2296 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1009 }));
    if ($tmp2296.value) {
    {
        panda$core$Object* $tmp2297 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
        return ((org$pandalanguage$pandac$IRNode*) $tmp2297);
    }
    }
    return p_expr;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIndexedAssignment$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_offset, org$pandalanguage$pandac$IRNode* p_left, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_right) {
    panda$collections$Array* args2302;
    org$pandalanguage$pandac$IRNode* resolved2310;
    panda$collections$Array* children2315;
    panda$core$UInt64 baseId2321;
    org$pandalanguage$pandac$IRNode* base2322;
    panda$core$UInt64 indexId2329;
    org$pandalanguage$pandac$IRNode* index2330;
    org$pandalanguage$pandac$IRNode* baseRef2335;
    org$pandalanguage$pandac$IRNode* indexRef2338;
    org$pandalanguage$pandac$IRNode* rhsIndex2341;
    org$pandalanguage$pandac$IRNode* value2343;
    panda$core$Bit $tmp2298 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_left->kind, ((panda$core$Int64) { 1040 }));
    PANDA_ASSERT($tmp2298.value);
    panda$core$Int64 $tmp2299 = panda$collections$Array$get_count$R$panda$core$Int64(p_left->children);
    panda$core$Bit $tmp2300 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2299, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp2300.value);
    panda$core$Bit $tmp2301 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 73 }));
    if ($tmp2301.value) {
    {
        panda$collections$Array* $tmp2303 = (panda$collections$Array*) malloc(40);
        $tmp2303->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2303->refCount.value = 1;
        panda$collections$Array$init($tmp2303);
        args2302 = $tmp2303;
        panda$core$Object* $tmp2305 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_left->children, ((panda$core$Int64) { 1 }));
        panda$collections$Array$add$panda$collections$Array$T(args2302, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp2305)));
        panda$collections$Array$add$panda$collections$Array$T(args2302, ((panda$core$Object*) p_right));
        panda$core$Object* $tmp2306 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_left->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp2308 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp2306), &$s2307, ((panda$collections$ListView*) args2302));
        return $tmp2308;
    }
    }
    panda$core$Bit $tmp2309 = org$pandalanguage$pandac$Compiler$isAssignment$panda$core$Int64$R$panda$core$Bit(p_op);
    PANDA_ASSERT($tmp2309.value);
    org$pandalanguage$pandac$IRNode* $tmp2311 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_left);
    resolved2310 = $tmp2311;
    if (((panda$core$Bit) { resolved2310 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp2312 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self, resolved2310);
    resolved2310 = $tmp2312;
    panda$core$Int64 $tmp2313 = panda$collections$Array$get_count$R$panda$core$Int64(resolved2310->children);
    panda$core$Bit $tmp2314 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2313, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp2314.value);
    panda$collections$Array* $tmp2316 = (panda$collections$Array*) malloc(40);
    $tmp2316->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2316->refCount.value = 1;
    panda$collections$Array$init($tmp2316);
    children2315 = $tmp2316;
    panda$core$Object* $tmp2318 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(resolved2310->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp2319 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self, ((org$pandalanguage$pandac$IRNode*) $tmp2318));
    panda$collections$Array$add$panda$collections$Array$T(children2315, ((panda$core$Object*) $tmp2319));
    panda$core$UInt64 $tmp2320 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(self->reusedValueCount, ((panda$core$UInt64) { 1 }));
    self->reusedValueCount = $tmp2320;
    baseId2321 = self->reusedValueCount;
    org$pandalanguage$pandac$IRNode* $tmp2323 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp2323->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2323->refCount.value = 1;
    panda$core$Object* $tmp2325 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children2315, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp2326 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children2315, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2323, ((panda$core$Int64) { 1027 }), ((org$pandalanguage$pandac$IRNode*) $tmp2325)->offset, ((org$pandalanguage$pandac$IRNode*) $tmp2326)->type, ((panda$core$Object*) wrap_panda$core$UInt64(baseId2321)), ((panda$collections$ListView*) children2315));
    base2322 = $tmp2323;
    panda$collections$Array$clear(children2315);
    panda$core$Object* $tmp2327 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(resolved2310->children, ((panda$core$Int64) { 1 }));
    panda$collections$Array$add$panda$collections$Array$T(children2315, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp2327)));
    panda$core$UInt64 $tmp2328 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(self->reusedValueCount, ((panda$core$UInt64) { 1 }));
    self->reusedValueCount = $tmp2328;
    indexId2329 = self->reusedValueCount;
    org$pandalanguage$pandac$IRNode* $tmp2331 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp2331->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2331->refCount.value = 1;
    panda$core$Object* $tmp2333 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children2315, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp2334 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children2315, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2331, ((panda$core$Int64) { 1027 }), ((org$pandalanguage$pandac$IRNode*) $tmp2333)->offset, ((org$pandalanguage$pandac$IRNode*) $tmp2334)->type, ((panda$core$Object*) wrap_panda$core$UInt64(indexId2329)), ((panda$collections$ListView*) children2315));
    index2330 = $tmp2331;
    org$pandalanguage$pandac$IRNode* $tmp2336 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp2336->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2336->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2336, ((panda$core$Int64) { 1028 }), base2322->offset, base2322->type, baseId2321);
    baseRef2335 = $tmp2336;
    org$pandalanguage$pandac$IRNode* $tmp2339 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp2339->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2339->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2339, ((panda$core$Int64) { 1028 }), index2330->offset, index2330->type, indexId2329);
    indexRef2338 = $tmp2339;
    org$pandalanguage$pandac$IRNode* $tmp2342 = org$pandalanguage$pandac$Compiler$compileBinary$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_offset, baseRef2335, ((panda$core$Int64) { 101 }), indexRef2338);
    rhsIndex2341 = $tmp2342;
    if (((panda$core$Bit) { rhsIndex2341 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Int64 $tmp2344 = org$pandalanguage$pandac$Compiler$removeAssignment$panda$core$Int64$R$panda$core$Int64(p_op);
    org$pandalanguage$pandac$IRNode* $tmp2345 = org$pandalanguage$pandac$Compiler$compileBinary$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_offset, rhsIndex2341, $tmp2344, p_right);
    value2343 = $tmp2345;
    if (((panda$core$Bit) { value2343 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp2348 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(rhsIndex2341->type);
    bool $tmp2347 = $tmp2348.value;
    if (!$tmp2347) goto $l2349;
    panda$core$Bit $tmp2350 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_right->type);
    $tmp2347 = $tmp2350.value;
    $l2349:;
    panda$core$Bit $tmp2351 = { $tmp2347 };
    bool $tmp2346 = $tmp2351.value;
    if (!$tmp2346) goto $l2352;
    panda$core$Bit $tmp2353 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(rhsIndex2341->type, value2343->type);
    $tmp2346 = $tmp2353.value;
    $l2352:;
    panda$core$Bit $tmp2354 = { $tmp2346 };
    if ($tmp2354.value) {
    {
        panda$collections$Array* $tmp2356 = (panda$collections$Array*) malloc(40);
        $tmp2356->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2356->refCount.value = 1;
        panda$collections$Array$init($tmp2356);
        org$pandalanguage$pandac$IRNode* $tmp2358 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, value2343, &$s2355, ((panda$collections$ListView*) $tmp2356), resolved2310->type);
        value2343 = $tmp2358;
        if (((panda$core$Bit) { value2343 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$collections$Array$clear(children2315);
    panda$collections$Array$add$panda$collections$Array$T(children2315, ((panda$core$Object*) index2330));
    panda$collections$Array$add$panda$collections$Array$T(children2315, ((panda$core$Object*) value2343));
    org$pandalanguage$pandac$IRNode* $tmp2360 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, base2322, &$s2359, ((panda$collections$ListView*) children2315));
    return $tmp2360;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBinary$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_offset, org$pandalanguage$pandac$IRNode* p_rawLeft, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_rawRight) {
    org$pandalanguage$pandac$IRNode* left2361;
    org$pandalanguage$pandac$IRNode* right2362;
    panda$core$Int64 kind2386;
    org$pandalanguage$pandac$IRNode* resolved2393;
    panda$collections$Array* children2395;
    org$pandalanguage$pandac$IRNode* resolved2402;
    panda$collections$Array* children2404;
    org$pandalanguage$pandac$ClassDecl* cl2416;
    org$pandalanguage$pandac$ClassDecl* cl2433;
    org$pandalanguage$pandac$IRNode* finalLeft2449;
    org$pandalanguage$pandac$IRNode* finalRight2452;
    panda$collections$Array* children2455;
    panda$collections$Array* children2469;
    panda$collections$Array* children2481;
    org$pandalanguage$pandac$IRNode* reusedLeft2487;
    org$pandalanguage$pandac$ClassDecl* cl2504;
    panda$collections$ListView* parameters2506;
    org$pandalanguage$pandac$Symbol* methods2508;
    org$pandalanguage$pandac$Type* type2512;
    panda$collections$Array* types2513;
    org$pandalanguage$pandac$MethodDecl* m2517;
    panda$collections$Iterator* m$Iter2522;
    org$pandalanguage$pandac$MethodDecl* m2534;
    panda$collections$Array* children2545;
    panda$collections$Array* children2574;
    panda$collections$Array* children2590;
    org$pandalanguage$pandac$Type* resultType2613;
    org$pandalanguage$pandac$IRNode* result2617;
    org$pandalanguage$pandac$IRNode* resolved2620;
    org$pandalanguage$pandac$IRNode* target2626;
    left2361 = p_rawLeft;
    right2362 = p_rawRight;
    panda$core$Bit $tmp2363 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2361->type->typeKind, ((panda$core$Int64) { 15 }));
    if ($tmp2363.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2364 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, right2362);
        right2362 = $tmp2364;
        if (((panda$core$Bit) { right2362 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Int64$nullable $tmp2365 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, left2361, right2362->type);
        if (((panda$core$Bit) { $tmp2365.nonnull }).value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2366 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, left2361, right2362->type);
            left2361 = $tmp2366;
        }
        }
    }
    }
    panda$core$Bit $tmp2368 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right2362->type->typeKind, ((panda$core$Int64) { 15 }));
    bool $tmp2367 = $tmp2368.value;
    if (!$tmp2367) goto $l2369;
    panda$core$Int64$nullable $tmp2370 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, right2362, left2361->type);
    $tmp2367 = ((panda$core$Bit) { $tmp2370.nonnull }).value;
    $l2369:;
    panda$core$Bit $tmp2371 = { $tmp2367 };
    if ($tmp2371.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2372 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, right2362, left2361->type);
        right2362 = $tmp2372;
    }
    }
    panda$core$Bit $tmp2376 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 58 }));
    bool $tmp2375 = $tmp2376.value;
    if ($tmp2375) goto $l2377;
    panda$core$Bit $tmp2378 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 59 }));
    $tmp2375 = $tmp2378.value;
    $l2377:;
    panda$core$Bit $tmp2379 = { $tmp2375 };
    bool $tmp2374 = $tmp2379.value;
    if ($tmp2374) goto $l2380;
    panda$core$Bit $tmp2381 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 60 }));
    $tmp2374 = $tmp2381.value;
    $l2380:;
    panda$core$Bit $tmp2382 = { $tmp2374 };
    bool $tmp2373 = $tmp2382.value;
    if ($tmp2373) goto $l2383;
    panda$core$Bit $tmp2384 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 61 }));
    $tmp2373 = $tmp2384.value;
    $l2383:;
    panda$core$Bit $tmp2385 = { $tmp2373 };
    if ($tmp2385.value) {
    {
        panda$core$Bit $tmp2388 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 58 }));
        bool $tmp2387 = $tmp2388.value;
        if ($tmp2387) goto $l2389;
        panda$core$Bit $tmp2390 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 60 }));
        $tmp2387 = $tmp2390.value;
        $l2389:;
        panda$core$Bit $tmp2391 = { $tmp2387 };
        if ($tmp2391.value) {
        {
            kind2386 = ((panda$core$Int64) { 1035 });
        }
        }
        else {
        {
            kind2386 = ((panda$core$Int64) { 1036 });
        }
        }
        panda$core$Bit $tmp2392 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2361->kind, ((panda$core$Int64) { 1030 }));
        if ($tmp2392.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2394 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, right2362);
            resolved2393 = $tmp2394;
            if (((panda$core$Bit) { resolved2393 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp2396 = (panda$collections$Array*) malloc(40);
            $tmp2396->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2396->refCount.value = 1;
            panda$collections$Array$init($tmp2396);
            children2395 = $tmp2396;
            panda$collections$Array$add$panda$collections$Array$T(children2395, ((panda$core$Object*) resolved2393));
            org$pandalanguage$pandac$IRNode* $tmp2398 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp2398->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2398->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2400 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2398, kind2386, p_offset, $tmp2400, ((panda$collections$ListView*) children2395));
            return $tmp2398;
        }
        }
        panda$core$Bit $tmp2401 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right2362->kind, ((panda$core$Int64) { 1030 }));
        if ($tmp2401.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2403 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, left2361);
            resolved2402 = $tmp2403;
            if (((panda$core$Bit) { resolved2402 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp2405 = (panda$collections$Array*) malloc(40);
            $tmp2405->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2405->refCount.value = 1;
            panda$collections$Array$init($tmp2405);
            children2404 = $tmp2405;
            panda$collections$Array$add$panda$collections$Array$T(children2404, ((panda$core$Object*) resolved2402));
            org$pandalanguage$pandac$IRNode* $tmp2407 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp2407->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2407->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2409 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2407, kind2386, p_offset, $tmp2409, ((panda$collections$ListView*) children2404));
            return $tmp2407;
        }
        }
    }
    }
    panda$core$Bit $tmp2411 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 60 }));
    bool $tmp2410 = $tmp2411.value;
    if ($tmp2410) goto $l2412;
    panda$core$Bit $tmp2413 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 61 }));
    $tmp2410 = $tmp2413.value;
    $l2412:;
    panda$core$Bit $tmp2414 = { $tmp2410 };
    if ($tmp2414.value) {
    {
        panda$core$Bit $tmp2415 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(left2361->type);
        if ($tmp2415.value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp2417 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, left2361->type);
            cl2416 = $tmp2417;
            if (((panda$core$Bit) { cl2416 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$Bit $tmp2418 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, cl2416);
            if ($tmp2418.value) {
            {
                panda$core$String* $tmp2420 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
                panda$core$String* $tmp2421 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2419, $tmp2420);
                panda$core$String* $tmp2423 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2421, &$s2422);
                panda$core$String* $tmp2424 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2423, ((panda$core$Object*) left2361->type));
                panda$core$String* $tmp2426 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2424, &$s2425);
                panda$core$String* $tmp2428 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2427, ((panda$core$Object*) right2362->type));
                panda$core$String* $tmp2430 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2428, &$s2429);
                panda$core$String* $tmp2431 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2426, $tmp2430);
                org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_offset, $tmp2431);
            }
            }
        }
        }
        panda$core$Bit $tmp2432 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(right2362->type);
        if ($tmp2432.value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp2434 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, right2362->type);
            cl2433 = $tmp2434;
            if (((panda$core$Bit) { cl2433 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$Bit $tmp2435 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, cl2433);
            if ($tmp2435.value) {
            {
                panda$core$String* $tmp2437 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
                panda$core$String* $tmp2438 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2436, $tmp2437);
                panda$core$String* $tmp2440 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2438, &$s2439);
                panda$core$String* $tmp2441 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2440, ((panda$core$Object*) left2361->type));
                panda$core$String* $tmp2443 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2441, &$s2442);
                panda$core$String* $tmp2445 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2444, ((panda$core$Object*) right2362->type));
                panda$core$String* $tmp2447 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2445, &$s2446);
                panda$core$String* $tmp2448 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2443, $tmp2447);
                org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_offset, $tmp2448);
            }
            }
        }
        }
        org$pandalanguage$pandac$Type* $tmp2450 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp2451 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, left2361, $tmp2450);
        finalLeft2449 = $tmp2451;
        if (((panda$core$Bit) { finalLeft2449 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$Type* $tmp2453 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp2454 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, right2362, $tmp2453);
        finalRight2452 = $tmp2454;
        if (((panda$core$Bit) { finalRight2452 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp2456 = (panda$collections$Array*) malloc(40);
        $tmp2456->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2456->refCount.value = 1;
        panda$collections$Array$init($tmp2456);
        children2455 = $tmp2456;
        panda$collections$Array$add$panda$collections$Array$T(children2455, ((panda$core$Object*) finalLeft2449));
        panda$collections$Array$add$panda$collections$Array$T(children2455, ((panda$core$Object*) finalRight2452));
        org$pandalanguage$pandac$IRNode* $tmp2458 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp2458->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2458->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp2460 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2458, ((panda$core$Int64) { 1023 }), p_offset, $tmp2460, ((panda$core$Object*) wrap_panda$core$Int64(p_op)), ((panda$collections$ListView*) children2455));
        return $tmp2458;
    }
    }
    panda$core$Bit $tmp2461 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 73 }));
    if ($tmp2461.value) {
    {
        panda$core$Bit $tmp2462 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2361->kind, ((panda$core$Int64) { 1040 }));
        if ($tmp2462.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2463 = org$pandalanguage$pandac$Compiler$compileIndexedAssignment$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_offset, left2361, p_op, right2362);
            return $tmp2463;
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp2464 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, left2361);
        left2361 = $tmp2464;
        if (((panda$core$Bit) { left2361 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp2465 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, right2362, left2361->type);
        right2362 = $tmp2465;
        if (((panda$core$Bit) { right2362 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp2466 = org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, left2361);
        panda$core$Bit $tmp2467 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2466);
        if ($tmp2467.value) {
        {
            org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, left2361->offset, &$s2468);
            return NULL;
        }
        }
        panda$collections$Array* $tmp2470 = (panda$collections$Array*) malloc(40);
        $tmp2470->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2470->refCount.value = 1;
        panda$collections$Array$init($tmp2470);
        children2469 = $tmp2470;
        panda$collections$Array$add$panda$collections$Array$T(children2469, ((panda$core$Object*) left2361));
        panda$collections$Array$add$panda$collections$Array$T(children2469, ((panda$core$Object*) right2362));
        org$pandalanguage$pandac$IRNode* $tmp2472 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp2472->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2472->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2472, ((panda$core$Int64) { 1023 }), p_offset, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 73 }))), ((panda$collections$ListView*) children2469));
        return $tmp2472;
    }
    }
    panda$core$Bit $tmp2474 = org$pandalanguage$pandac$Compiler$isAssignment$panda$core$Int64$R$panda$core$Bit(p_op);
    if ($tmp2474.value) {
    {
        panda$core$Bit $tmp2475 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2361->kind, ((panda$core$Int64) { 1040 }));
        if ($tmp2475.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2476 = org$pandalanguage$pandac$Compiler$compileIndexedAssignment$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_offset, left2361, p_op, right2362);
            return $tmp2476;
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp2477 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, left2361);
        left2361 = $tmp2477;
        if (((panda$core$Bit) { left2361 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp2478 = org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, left2361);
        panda$core$Bit $tmp2479 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2478);
        if ($tmp2479.value) {
        {
            org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, left2361->offset, &$s2480);
            return NULL;
        }
        }
        panda$collections$Array* $tmp2482 = (panda$collections$Array*) malloc(40);
        $tmp2482->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2482->refCount.value = 1;
        panda$collections$Array$init($tmp2482);
        children2481 = $tmp2482;
        panda$collections$Array$add$panda$collections$Array$T(children2481, ((panda$core$Object*) left2361));
        panda$core$UInt64 $tmp2484 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(self->reusedValueCount, ((panda$core$UInt64) { 1 }));
        self->reusedValueCount = $tmp2484;
        org$pandalanguage$pandac$IRNode* $tmp2485 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp2485->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2485->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2485, ((panda$core$Int64) { 1027 }), left2361->offset, left2361->type, ((panda$core$Object*) wrap_panda$core$UInt64(self->reusedValueCount)), ((panda$collections$ListView*) children2481));
        left2361 = $tmp2485;
        org$pandalanguage$pandac$IRNode* $tmp2488 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp2488->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2488->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2488, ((panda$core$Int64) { 1028 }), left2361->offset, left2361->type, self->reusedValueCount);
        reusedLeft2487 = $tmp2488;
        panda$core$Int64 $tmp2490 = org$pandalanguage$pandac$Compiler$removeAssignment$panda$core$Int64$R$panda$core$Int64(p_op);
        org$pandalanguage$pandac$IRNode* $tmp2491 = org$pandalanguage$pandac$Compiler$compileBinary$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_offset, reusedLeft2487, $tmp2490, right2362);
        right2362 = $tmp2491;
        if (((panda$core$Bit) { right2362 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp2493 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(left2361->type);
        bool $tmp2492 = $tmp2493.value;
        if (!$tmp2492) goto $l2494;
        panda$core$Bit $tmp2495 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(left2361->type, right2362->type);
        $tmp2492 = $tmp2495.value;
        $l2494:;
        panda$core$Bit $tmp2496 = { $tmp2492 };
        if ($tmp2496.value) {
        {
            panda$collections$Array* $tmp2498 = (panda$collections$Array*) malloc(40);
            $tmp2498->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2498->refCount.value = 1;
            panda$collections$Array$init($tmp2498);
            org$pandalanguage$pandac$IRNode* $tmp2500 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, right2362, &$s2497, ((panda$collections$ListView*) $tmp2498), left2361->type);
            right2362 = $tmp2500;
            if (((panda$core$Bit) { right2362 == NULL }).value) {
            {
                return NULL;
            }
            }
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp2501 = org$pandalanguage$pandac$Compiler$compileBinary$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_offset, left2361, ((panda$core$Int64) { 73 }), right2362);
        return $tmp2501;
    }
    }
    panda$core$Bit $tmp2502 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 101 }));
    if ($tmp2502.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2503 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, left2361);
        left2361 = $tmp2503;
        if (((panda$core$Bit) { left2361 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$ClassDecl* $tmp2505 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, left2361->type);
        cl2504 = $tmp2505;
        if (((panda$core$Bit) { cl2504 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$ListView* $tmp2507 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, left2361->type);
        parameters2506 = $tmp2507;
        org$pandalanguage$pandac$SymbolTable* $tmp2509 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl2504);
        org$pandalanguage$pandac$Symbol* $tmp2511 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp2509, &$s2510);
        methods2508 = $tmp2511;
        if (((panda$core$Bit) { methods2508 != NULL }).value) {
        {
            panda$collections$Array* $tmp2514 = (panda$collections$Array*) malloc(40);
            $tmp2514->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2514->refCount.value = 1;
            panda$collections$Array$init($tmp2514);
            types2513 = $tmp2514;
            panda$core$Bit $tmp2516 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(methods2508->kind, ((panda$core$Int64) { 204 }));
            if ($tmp2516.value) {
            {
                m2517 = ((org$pandalanguage$pandac$MethodDecl*) methods2508);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m2517);
                org$pandalanguage$pandac$MethodRef* $tmp2518 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                $tmp2518->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                $tmp2518->refCount.value = 1;
                org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp2518, m2517, parameters2506);
                org$pandalanguage$pandac$Type* $tmp2520 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type($tmp2518);
                panda$collections$Array$add$panda$collections$Array$T(types2513, ((panda$core$Object*) $tmp2520));
            }
            }
            else {
            {
                panda$core$Bit $tmp2521 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(methods2508->kind, ((panda$core$Int64) { 205 }));
                PANDA_ASSERT($tmp2521.value);
                {
                    ITable* $tmp2523 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) methods2508)->methods)->$class->itable;
                    while ($tmp2523->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp2523 = $tmp2523->next;
                    }
                    $fn2525 $tmp2524 = $tmp2523->methods[0];
                    panda$collections$Iterator* $tmp2526 = $tmp2524(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) methods2508)->methods));
                    m$Iter2522 = $tmp2526;
                    $l2527:;
                    ITable* $tmp2529 = m$Iter2522->$class->itable;
                    while ($tmp2529->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp2529 = $tmp2529->next;
                    }
                    $fn2531 $tmp2530 = $tmp2529->methods[0];
                    panda$core$Bit $tmp2532 = $tmp2530(m$Iter2522);
                    panda$core$Bit $tmp2533 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2532);
                    if (!$tmp2533.value) goto $l2528;
                    {
                        ITable* $tmp2535 = m$Iter2522->$class->itable;
                        while ($tmp2535->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2535 = $tmp2535->next;
                        }
                        $fn2537 $tmp2536 = $tmp2535->methods[1];
                        panda$core$Object* $tmp2538 = $tmp2536(m$Iter2522);
                        m2534 = ((org$pandalanguage$pandac$MethodDecl*) $tmp2538);
                        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m2534);
                        org$pandalanguage$pandac$MethodRef* $tmp2539 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                        $tmp2539->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                        $tmp2539->refCount.value = 1;
                        org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp2539, m2534, parameters2506);
                        org$pandalanguage$pandac$Type* $tmp2541 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type($tmp2539);
                        panda$collections$Array$add$panda$collections$Array$T(types2513, ((panda$core$Object*) $tmp2541));
                    }
                    goto $l2527;
                    $l2528:;
                }
            }
            }
            org$pandalanguage$pandac$Type* $tmp2542 = (org$pandalanguage$pandac$Type*) malloc(80);
            $tmp2542->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp2542->refCount.value = 1;
            org$pandalanguage$pandac$Type$init$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp2542, ((panda$collections$ListView*) types2513));
            type2512 = $tmp2542;
        }
        }
        else {
        {
            org$pandalanguage$pandac$Type* $tmp2544 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            type2512 = $tmp2544;
        }
        }
        panda$collections$Array* $tmp2546 = (panda$collections$Array*) malloc(40);
        $tmp2546->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2546->refCount.value = 1;
        panda$collections$Array$init($tmp2546);
        children2545 = $tmp2546;
        panda$collections$Array$add$panda$collections$Array$T(children2545, ((panda$core$Object*) left2361));
        panda$collections$Array$add$panda$collections$Array$T(children2545, ((panda$core$Object*) right2362));
        org$pandalanguage$pandac$IRNode* $tmp2548 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp2548->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2548->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2548, ((panda$core$Int64) { 1040 }), p_offset, type2512, ((panda$collections$ListView*) children2545));
        return $tmp2548;
    }
    }
    org$pandalanguage$pandac$Type* $tmp2550 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2551 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(left2361->type, $tmp2550);
    if ($tmp2551.value) {
    {
        org$pandalanguage$pandac$Type* $tmp2553 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp2554 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(right2362->type, $tmp2553);
        bool $tmp2552 = $tmp2554.value;
        if (!$tmp2552) goto $l2555;
        panda$core$Bit $tmp2560 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 66 }));
        bool $tmp2559 = $tmp2560.value;
        if ($tmp2559) goto $l2561;
        panda$core$Bit $tmp2562 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 68 }));
        $tmp2559 = $tmp2562.value;
        $l2561:;
        panda$core$Bit $tmp2563 = { $tmp2559 };
        bool $tmp2558 = $tmp2563.value;
        if ($tmp2558) goto $l2564;
        panda$core$Bit $tmp2565 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 70 }));
        $tmp2558 = $tmp2565.value;
        $l2564:;
        panda$core$Bit $tmp2566 = { $tmp2558 };
        bool $tmp2557 = $tmp2566.value;
        if ($tmp2557) goto $l2567;
        panda$core$Bit $tmp2568 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 58 }));
        $tmp2557 = $tmp2568.value;
        $l2567:;
        panda$core$Bit $tmp2569 = { $tmp2557 };
        bool $tmp2556 = $tmp2569.value;
        if ($tmp2556) goto $l2570;
        panda$core$Bit $tmp2571 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 59 }));
        $tmp2556 = $tmp2571.value;
        $l2570:;
        panda$core$Bit $tmp2572 = { $tmp2556 };
        $tmp2552 = $tmp2572.value;
        $l2555:;
        panda$core$Bit $tmp2573 = { $tmp2552 };
        if ($tmp2573.value) {
        {
            panda$collections$Array* $tmp2575 = (panda$collections$Array*) malloc(40);
            $tmp2575->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2575->refCount.value = 1;
            panda$collections$Array$init($tmp2575);
            children2574 = $tmp2575;
            panda$collections$Array$add$panda$collections$Array$T(children2574, ((panda$core$Object*) left2361));
            panda$collections$Array$add$panda$collections$Array$T(children2574, ((panda$core$Object*) right2362));
            org$pandalanguage$pandac$IRNode* $tmp2577 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp2577->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2577->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2577, ((panda$core$Int64) { 1023 }), p_offset, left2361->type, ((panda$core$Object*) wrap_panda$core$Int64(p_op)), ((panda$collections$ListView*) children2574));
            return $tmp2577;
        }
        }
        panda$core$String* $tmp2580 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
        panda$core$String* $tmp2581 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2579, $tmp2580);
        panda$core$String* $tmp2583 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2581, &$s2582);
        panda$core$String* $tmp2584 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2583, ((panda$core$Object*) left2361->type));
        panda$core$String* $tmp2586 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2584, &$s2585);
        panda$core$String* $tmp2587 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2586, ((panda$core$Object*) right2362->type));
        panda$core$String* $tmp2589 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2587, &$s2588);
        org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_offset, $tmp2589);
        return NULL;
    }
    }
    panda$collections$Array* $tmp2591 = (panda$collections$Array*) malloc(40);
    $tmp2591->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2591->refCount.value = 1;
    panda$collections$Array$init($tmp2591);
    children2590 = $tmp2591;
    panda$core$Bit $tmp2595 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2361->kind, ((panda$core$Int64) { 1004 }));
    bool $tmp2594 = $tmp2595.value;
    if ($tmp2594) goto $l2596;
    panda$core$Bit $tmp2597 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2361->kind, ((panda$core$Int64) { 1032 }));
    $tmp2594 = $tmp2597.value;
    $l2596:;
    panda$core$Bit $tmp2598 = { $tmp2594 };
    bool $tmp2593 = $tmp2598.value;
    if (!$tmp2593) goto $l2599;
    panda$core$Bit $tmp2601 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right2362->kind, ((panda$core$Int64) { 1004 }));
    bool $tmp2600 = $tmp2601.value;
    if ($tmp2600) goto $l2602;
    panda$core$Bit $tmp2603 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right2362->kind, ((panda$core$Int64) { 1032 }));
    $tmp2600 = $tmp2603.value;
    $l2602:;
    panda$core$Bit $tmp2604 = { $tmp2600 };
    $tmp2593 = $tmp2604.value;
    $l2599:;
    panda$core$Bit $tmp2605 = { $tmp2593 };
    if ($tmp2605.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2606 = org$pandalanguage$pandac$Compiler$foldInts$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_offset, left2361, p_op, right2362);
        return $tmp2606;
    }
    }
    panda$core$Bit $tmp2608 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(left2361->type);
    bool $tmp2607 = $tmp2608.value;
    if (!$tmp2607) goto $l2609;
    panda$core$Int64$nullable $tmp2610 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, right2362, left2361->type);
    $tmp2607 = ((panda$core$Bit) { $tmp2610.nonnull }).value;
    $l2609:;
    panda$core$Bit $tmp2611 = { $tmp2607 };
    if ($tmp2611.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2612 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, right2362, left2361->type);
        right2362 = $tmp2612;
        PANDA_ASSERT(((panda$core$Bit) { right2362 != NULL }).value);
        panda$collections$Array$add$panda$collections$Array$T(children2590, ((panda$core$Object*) left2361));
        panda$collections$Array$add$panda$collections$Array$T(children2590, ((panda$core$Object*) right2362));
        switch (p_op.value) {
            case 58:
            case 59:
            case 63:
            case 65:
            case 62:
            case 64:
            {
                org$pandalanguage$pandac$Type* $tmp2614 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
                resultType2613 = $tmp2614;
            }
            break;
            default:
            {
                resultType2613 = left2361->type;
            }
        }
        org$pandalanguage$pandac$IRNode* $tmp2615 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp2615->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2615->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2615, ((panda$core$Int64) { 1023 }), p_offset, resultType2613, ((panda$core$Object*) wrap_panda$core$Int64(p_op)), ((panda$collections$ListView*) children2590));
        return $tmp2615;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children2590, ((panda$core$Object*) right2362));
    PANDA_ASSERT(self->reportErrors.value);
    self->reportErrors = ((panda$core$Bit) { false });
    panda$core$String* $tmp2618 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
    org$pandalanguage$pandac$IRNode* $tmp2619 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, left2361, $tmp2618, ((panda$collections$ListView*) children2590));
    result2617 = $tmp2619;
    self->reportErrors = ((panda$core$Bit) { true });
    if (((panda$core$Bit) { result2617 == NULL }).value) {
    {
        panda$collections$Array$clear(children2590);
        panda$collections$Array$add$panda$collections$Array$T(children2590, ((panda$core$Object*) left2361));
        org$pandalanguage$pandac$IRNode* $tmp2621 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, right2362);
        resolved2620 = $tmp2621;
        bool $tmp2622 = ((panda$core$Bit) { resolved2620 != NULL }).value;
        if (!$tmp2622) goto $l2623;
        panda$core$Bit $tmp2624 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(resolved2620->type);
        $tmp2622 = $tmp2624.value;
        $l2623:;
        panda$core$Bit $tmp2625 = { $tmp2622 };
        if ($tmp2625.value) {
        {
            panda$collections$Array$add$panda$collections$Array$T(children2590, ((panda$core$Object*) resolved2620));
            org$pandalanguage$pandac$IRNode* $tmp2627 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp2627->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2627->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2629 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp2627, ((panda$core$Int64) { 1001 }), resolved2620->offset, $tmp2629, resolved2620->type);
            target2626 = $tmp2627;
            panda$core$String* $tmp2630 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
            org$pandalanguage$pandac$IRNode* $tmp2631 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target2626, $tmp2630, ((panda$collections$ListView*) children2590));
            result2617 = $tmp2631;
        }
        }
    }
    }
    return result2617;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_b) {
    org$pandalanguage$pandac$IRNode* left2632;
    org$pandalanguage$pandac$IRNode* right2635;
    panda$core$Object* $tmp2633 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_b->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp2634 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2633));
    left2632 = $tmp2634;
    if (((panda$core$Bit) { left2632 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Object* $tmp2636 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_b->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp2637 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2636));
    right2635 = $tmp2637;
    if (((panda$core$Bit) { right2635 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp2638 = org$pandalanguage$pandac$Compiler$compileBinary$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_b->offset, left2632, ((panda$core$Int64$wrapper*) p_b->payload)->value, right2635);
    return $tmp2638;
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type) {
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp2642;
    switch (p_type->typeKind.value) {
        case 22:
        {
            panda$collections$ListView* $tmp2639 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p_type->parameter->bound);
            return $tmp2639;
        }
        break;
        case 21:
        {
            panda$core$Int64 $tmp2640 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_type->subtypes);
            panda$core$Bit $tmp2641 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp2640, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2641.value);
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp2642, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
            panda$collections$ImmutableArray* $tmp2643 = panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(p_type->subtypes, $tmp2642);
            return ((panda$collections$ListView*) $tmp2643);
        }
        break;
        case 11:
        {
            panda$core$Object* $tmp2644 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
            panda$collections$ListView* $tmp2645 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, ((org$pandalanguage$pandac$Type*) $tmp2644));
            return $tmp2645;
        }
        break;
        default:
        {
            panda$collections$Array* $tmp2646 = (panda$collections$Array*) malloc(40);
            $tmp2646->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2646->refCount.value = 1;
            panda$collections$Array$init($tmp2646);
            return ((panda$collections$ListView*) $tmp2646);
        }
    }
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$IRNode$Q$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_target) {
    if (((panda$core$Bit) { p_target != NULL }).value) {
    {
        panda$core$Bit $tmp2648 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1001 }));
        if ($tmp2648.value) {
        {
            panda$collections$ListView* $tmp2649 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, ((org$pandalanguage$pandac$Type*) p_target->payload));
            return $tmp2649;
        }
        }
        panda$collections$ListView* $tmp2650 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p_target->type);
        return $tmp2650;
    }
    }
    panda$collections$Array* $tmp2651 = (panda$collections$Array*) malloc(40);
    $tmp2651->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2651->refCount.value = 1;
    panda$collections$Array$init($tmp2651);
    return ((panda$collections$ListView*) $tmp2651);
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compilePrefix$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_base, panda$core$Int64 p_offset) {
    panda$core$String* name2654;
    org$pandalanguage$pandac$ClassDecl* cl2656;
    org$pandalanguage$pandac$Symbol* s2658;
    org$pandalanguage$pandac$MethodDecl* m2661;
    panda$collections$Iterator* test$Iter2666;
    org$pandalanguage$pandac$MethodDecl* test2678;
    org$pandalanguage$pandac$MethodRef* ref2690;
    panda$collections$Array* children2694;
    org$pandalanguage$pandac$IRNode* methodRef2697;
    panda$collections$Array* args2703;
    panda$collections$Array* children2712;
    panda$collections$Array* children2722;
    org$pandalanguage$pandac$IRNode* coerced2731;
    panda$collections$Array* children2734;
    panda$core$Bit $tmp2653 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_base->type);
    if ($tmp2653.value) {
    {
        panda$core$String* $tmp2655 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
        name2654 = $tmp2655;
        org$pandalanguage$pandac$ClassDecl* $tmp2657 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_base->type);
        cl2656 = $tmp2657;
        if (((panda$core$Bit) { cl2656 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$SymbolTable* $tmp2659 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl2656);
        org$pandalanguage$pandac$Symbol* $tmp2660 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp2659, name2654);
        s2658 = $tmp2660;
        if (((panda$core$Bit) { s2658 != NULL }).value) {
        {
            m2661 = NULL;
            switch (s2658->kind.value) {
                case 204:
                {
                    m2661 = ((org$pandalanguage$pandac$MethodDecl*) s2658);
                    panda$core$Int64 $tmp2662 = panda$collections$Array$get_count$R$panda$core$Int64(m2661->parameters);
                    panda$core$Bit $tmp2663 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2662, ((panda$core$Int64) { 0 }));
                    PANDA_ASSERT($tmp2663.value);
                    panda$core$Bit $tmp2664 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(m2661->annotations);
                    panda$core$Bit $tmp2665 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2664);
                    PANDA_ASSERT($tmp2665.value);
                }
                break;
                case 205:
                {
                    {
                        ITable* $tmp2667 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s2658)->methods)->$class->itable;
                        while ($tmp2667->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp2667 = $tmp2667->next;
                        }
                        $fn2669 $tmp2668 = $tmp2667->methods[0];
                        panda$collections$Iterator* $tmp2670 = $tmp2668(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s2658)->methods));
                        test$Iter2666 = $tmp2670;
                        $l2671:;
                        ITable* $tmp2673 = test$Iter2666->$class->itable;
                        while ($tmp2673->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2673 = $tmp2673->next;
                        }
                        $fn2675 $tmp2674 = $tmp2673->methods[0];
                        panda$core$Bit $tmp2676 = $tmp2674(test$Iter2666);
                        panda$core$Bit $tmp2677 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2676);
                        if (!$tmp2677.value) goto $l2672;
                        {
                            ITable* $tmp2679 = test$Iter2666->$class->itable;
                            while ($tmp2679->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp2679 = $tmp2679->next;
                            }
                            $fn2681 $tmp2680 = $tmp2679->methods[1];
                            panda$core$Object* $tmp2682 = $tmp2680(test$Iter2666);
                            test2678 = ((org$pandalanguage$pandac$MethodDecl*) $tmp2682);
                            panda$core$Bit $tmp2684 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(test2678->annotations);
                            panda$core$Bit $tmp2685 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2684);
                            bool $tmp2683 = $tmp2685.value;
                            if (!$tmp2683) goto $l2686;
                            panda$core$Int64 $tmp2687 = panda$collections$Array$get_count$R$panda$core$Int64(test2678->parameters);
                            panda$core$Bit $tmp2688 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2687, ((panda$core$Int64) { 0 }));
                            $tmp2683 = $tmp2688.value;
                            $l2686:;
                            panda$core$Bit $tmp2689 = { $tmp2683 };
                            if ($tmp2689.value) {
                            {
                                m2661 = test2678;
                                goto $l2672;
                            }
                            }
                        }
                        goto $l2671;
                        $l2672:;
                    }
                }
                break;
                default:
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
            }
            if (((panda$core$Bit) { m2661 != NULL }).value) {
            {
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m2661);
                org$pandalanguage$pandac$MethodRef* $tmp2691 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                $tmp2691->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                $tmp2691->refCount.value = 1;
                panda$collections$ListView* $tmp2693 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$IRNode$Q$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p_base);
                org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp2691, m2661, $tmp2693);
                ref2690 = $tmp2691;
                panda$collections$Array* $tmp2695 = (panda$collections$Array*) malloc(40);
                $tmp2695->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp2695->refCount.value = 1;
                panda$collections$Array$init($tmp2695);
                children2694 = $tmp2695;
                panda$collections$Array$add$panda$collections$Array$T(children2694, ((panda$core$Object*) p_base));
                org$pandalanguage$pandac$IRNode* $tmp2698 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2698->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2698->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2700 = (org$pandalanguage$pandac$Type*) malloc(80);
                $tmp2700->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
                $tmp2700->refCount.value = 1;
                org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp2700, &$s2702, ((panda$core$Int64) { 16 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2698, ((panda$core$Int64) { 1002 }), p_offset, $tmp2700, ((panda$core$Object*) ref2690), ((panda$collections$ListView*) children2694));
                methodRef2697 = $tmp2698;
                panda$collections$Array* $tmp2704 = (panda$collections$Array*) malloc(40);
                $tmp2704->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp2704->refCount.value = 1;
                panda$collections$Array$init($tmp2704);
                args2703 = $tmp2704;
                org$pandalanguage$pandac$IRNode* $tmp2706 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, methodRef2697, ((panda$collections$ListView*) args2703));
                return $tmp2706;
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
                    org$pandalanguage$pandac$IRNode* $tmp2707 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                    $tmp2707->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp2707->refCount.value = 1;
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2707, ((panda$core$Int64) { 1032 }), p_offset, p_base->type, ((panda$core$UInt64$wrapper*) p_base->payload)->value);
                    return $tmp2707;
                }
                break;
                case 1032:
                {
                    org$pandalanguage$pandac$IRNode* $tmp2709 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                    $tmp2709->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp2709->refCount.value = 1;
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2709, ((panda$core$Int64) { 1004 }), p_offset, p_base->type, ((panda$core$UInt64$wrapper*) p_base->payload)->value);
                    return $tmp2709;
                }
                break;
                default:
                {
                    panda$core$Bit $tmp2711 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_base->type);
                    if ($tmp2711.value) {
                    {
                        panda$collections$Array* $tmp2713 = (panda$collections$Array*) malloc(40);
                        $tmp2713->$class = (panda$core$Class*) &panda$collections$Array$class;
                        $tmp2713->refCount.value = 1;
                        panda$collections$Array$init($tmp2713);
                        children2712 = $tmp2713;
                        panda$collections$Array$add$panda$collections$Array$T(children2712, ((panda$core$Object*) p_base));
                        org$pandalanguage$pandac$IRNode* $tmp2715 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                        $tmp2715->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                        $tmp2715->refCount.value = 1;
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2715, ((panda$core$Int64) { 1041 }), p_base->offset, p_base->type, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 52 }))), ((panda$collections$ListView*) children2712));
                        return $tmp2715;
                    }
                    }
                }
            }
            panda$core$String* $tmp2718 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2717, ((panda$core$Object*) p_base->type));
            panda$core$String* $tmp2720 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2718, &$s2719);
            org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_base->offset, $tmp2720);
            return NULL;
        }
        break;
        case 50:
        {
            panda$core$Bit $tmp2721 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_base->type);
            if ($tmp2721.value) {
            {
                panda$collections$Array* $tmp2723 = (panda$collections$Array*) malloc(40);
                $tmp2723->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp2723->refCount.value = 1;
                panda$collections$Array$init($tmp2723);
                children2722 = $tmp2723;
                panda$collections$Array$add$panda$collections$Array$T(children2722, ((panda$core$Object*) p_base));
                org$pandalanguage$pandac$IRNode* $tmp2725 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2725->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2725->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2725, ((panda$core$Int64) { 1041 }), p_base->offset, p_base->type, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 50 }))), ((panda$collections$ListView*) children2722));
                return $tmp2725;
            }
            }
            else {
            {
                panda$core$String* $tmp2728 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2727, ((org$pandalanguage$pandac$Symbol*) p_base->type)->name);
                panda$core$String* $tmp2730 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2728, &$s2729);
                org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_base->offset, $tmp2730);
                return NULL;
            }
            }
        }
        break;
        case 49:
        {
            org$pandalanguage$pandac$Type* $tmp2732 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode* $tmp2733 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_base, $tmp2732);
            coerced2731 = $tmp2733;
            if (((panda$core$Bit) { coerced2731 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp2735 = (panda$collections$Array*) malloc(40);
            $tmp2735->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2735->refCount.value = 1;
            panda$collections$Array$init($tmp2735);
            children2734 = $tmp2735;
            panda$collections$Array$add$panda$collections$Array$T(children2734, ((panda$core$Object*) coerced2731));
            org$pandalanguage$pandac$IRNode* $tmp2737 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp2737->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2737->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2737, ((panda$core$Int64) { 1041 }), p_base->offset, p_base->type, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 49 }))), ((panda$collections$ListView*) children2734));
            return $tmp2737;
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
    org$pandalanguage$pandac$IRNode* base2742;
    panda$core$Bit $tmp2739 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_p->kind, ((panda$core$Int64) { 112 }));
    PANDA_ASSERT($tmp2739.value);
    panda$core$Int64 $tmp2740 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_p->children);
    panda$core$Bit $tmp2741 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2740, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp2741.value);
    panda$core$Object* $tmp2743 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_p->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp2744 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2743));
    base2742 = $tmp2744;
    if (((panda$core$Bit) { base2742 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp2745 = org$pandalanguage$pandac$Compiler$compilePrefix$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64$R$org$pandalanguage$pandac$IRNode$Q(self, ((panda$core$Int64$wrapper*) p_p->payload)->value, base2742, p_p->offset);
    return $tmp2745;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileCall$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_c) {
    org$pandalanguage$pandac$IRNode* m2747;
    panda$collections$Array* args2750;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2753;
    org$pandalanguage$pandac$IRNode* arg2773;
    panda$core$Bit $tmp2746 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_c->kind, ((panda$core$Int64) { 107 }));
    PANDA_ASSERT($tmp2746.value);
    panda$core$Object* $tmp2748 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_c->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp2749 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2748));
    m2747 = $tmp2749;
    if (((panda$core$Bit) { m2747 != NULL }).value) {
    {
        panda$collections$Array* $tmp2751 = (panda$collections$Array*) malloc(40);
        $tmp2751->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2751->refCount.value = 1;
        panda$collections$Array$init($tmp2751);
        args2750 = $tmp2751;
        panda$core$Int64 $tmp2754 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_c->children);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp2753, ((panda$core$Int64) { 1 }), $tmp2754, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
        int64_t $tmp2756 = $tmp2753.start.value;
        panda$core$Int64 i2755 = { $tmp2756 };
        int64_t $tmp2758 = $tmp2753.end.value;
        int64_t $tmp2759 = $tmp2753.step.value;
        bool $tmp2760 = $tmp2753.inclusive.value;
        bool $tmp2767 = $tmp2759 > 0;
        if ($tmp2767) goto $l2765; else goto $l2766;
        $l2765:;
        if ($tmp2760) goto $l2768; else goto $l2769;
        $l2768:;
        if ($tmp2756 <= $tmp2758) goto $l2761; else goto $l2763;
        $l2769:;
        if ($tmp2756 < $tmp2758) goto $l2761; else goto $l2763;
        $l2766:;
        if ($tmp2760) goto $l2770; else goto $l2771;
        $l2770:;
        if ($tmp2756 >= $tmp2758) goto $l2761; else goto $l2763;
        $l2771:;
        if ($tmp2756 > $tmp2758) goto $l2761; else goto $l2763;
        $l2761:;
        {
            panda$core$Object* $tmp2774 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_c->children, i2755);
            org$pandalanguage$pandac$IRNode* $tmp2775 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2774));
            arg2773 = $tmp2775;
            if (((panda$core$Bit) { arg2773 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(args2750, ((panda$core$Object*) arg2773));
        }
        $l2764:;
        if ($tmp2767) goto $l2777; else goto $l2778;
        $l2777:;
        int64_t $tmp2779 = $tmp2758 - i2755.value;
        if ($tmp2760) goto $l2780; else goto $l2781;
        $l2780:;
        if ($tmp2779 >= $tmp2759) goto $l2776; else goto $l2763;
        $l2781:;
        if ($tmp2779 > $tmp2759) goto $l2776; else goto $l2763;
        $l2778:;
        int64_t $tmp2783 = i2755.value - $tmp2758;
        if ($tmp2760) goto $l2784; else goto $l2785;
        $l2784:;
        if ($tmp2783 >= -$tmp2759) goto $l2776; else goto $l2763;
        $l2785:;
        if ($tmp2783 > -$tmp2759) goto $l2776; else goto $l2763;
        $l2776:;
        i2755.value += $tmp2759;
        goto $l2761;
        $l2763:;
        org$pandalanguage$pandac$IRNode* $tmp2787 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, m2747, ((panda$collections$ListView*) args2750));
        return $tmp2787;
    }
    }
    return NULL;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_d) {
    org$pandalanguage$pandac$IRNode* base2791;
    org$pandalanguage$pandac$ClassDecl* cl2800;
    panda$core$String* name2802;
    org$pandalanguage$pandac$ClassDecl* cl2810;
    org$pandalanguage$pandac$Symbol* s2822;
    panda$core$Bit $tmp2788 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_d->kind, ((panda$core$Int64) { 108 }));
    PANDA_ASSERT($tmp2788.value);
    panda$core$Int64 $tmp2789 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp2790 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2789, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp2790.value);
    panda$core$Object* $tmp2792 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp2793 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2792));
    base2791 = $tmp2793;
    if (((panda$core$Bit) { base2791 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp2795 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(base2791->kind, ((panda$core$Int64) { 1037 }));
    bool $tmp2794 = $tmp2795.value;
    if (!$tmp2794) goto $l2796;
    panda$core$Bit $tmp2797 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(base2791->kind, ((panda$core$Int64) { 1024 }));
    $tmp2794 = $tmp2797.value;
    $l2796:;
    panda$core$Bit $tmp2798 = { $tmp2794 };
    if ($tmp2798.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2799 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, base2791);
        base2791 = $tmp2799;
    }
    }
    if (((panda$core$Bit) { base2791 == NULL }).value) {
    {
        return NULL;
    }
    }
    switch (base2791->kind.value) {
        case 1001:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp2801 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Type*) base2791->payload));
            cl2800 = $tmp2801;
        }
        break;
        case 1037:
        {
            panda$core$String* $tmp2804 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2803, base2791->payload);
            panda$core$String* $tmp2806 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2804, &$s2805);
            panda$core$String* $tmp2807 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2806, p_d->payload);
            panda$core$String* $tmp2809 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2807, &$s2808);
            name2802 = $tmp2809;
            org$pandalanguage$pandac$ClassDecl* $tmp2811 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, name2802);
            cl2810 = $tmp2811;
            if (((panda$core$Bit) { cl2810 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2812 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2812->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2812->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2814 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$Type* $tmp2815 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl2810);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp2812, ((panda$core$Int64) { 1001 }), p_d->offset, $tmp2814, $tmp2815);
                return $tmp2812;
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp2816 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp2816->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2816->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2818 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$String($tmp2816, ((panda$core$Int64) { 1037 }), p_d->offset, $tmp2818, name2802);
            return $tmp2816;
        }
        break;
        case 1024:
        {
            panda$core$Object* $tmp2819 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
            org$pandalanguage$pandac$ClassDecl* $tmp2820 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$ClassDecl*) $tmp2819)->rawSuper);
            cl2800 = $tmp2820;
        }
        break;
        default:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp2821 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, base2791->type);
            cl2800 = $tmp2821;
        }
    }
    if (((panda$core$Bit) { cl2800 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp2823 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl2800);
    org$pandalanguage$pandac$Symbol* $tmp2824 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp2823, ((panda$core$String*) p_d->payload));
    s2822 = $tmp2824;
    if (((panda$core$Bit) { s2822 == NULL }).value) {
    {
        panda$core$String* $tmp2826 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2825, ((panda$core$Object*) base2791->type));
        panda$core$String* $tmp2828 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2826, &$s2827);
        panda$core$String* $tmp2830 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2829, p_d->payload);
        panda$core$String* $tmp2832 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2830, &$s2831);
        panda$core$String* $tmp2833 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2828, $tmp2832);
        org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_d->offset, $tmp2833);
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp2834 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl2800);
    org$pandalanguage$pandac$IRNode* $tmp2835 = org$pandalanguage$pandac$Compiler$symbolRef$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q(self, p_d->offset, base2791, s2822, $tmp2834);
    return $tmp2835;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIdentifier$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_i) {
    org$pandalanguage$pandac$Symbol* s2837;
    panda$core$Bit $tmp2836 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_i->kind, ((panda$core$Int64) { 106 }));
    PANDA_ASSERT($tmp2836.value);
    org$pandalanguage$pandac$Symbol* $tmp2838 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(self->symbolTable, ((panda$core$String*) p_i->payload));
    s2837 = $tmp2838;
    if (((panda$core$Bit) { s2837 == NULL }).value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp2839 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((panda$core$String*) p_i->payload));
        s2837 = ((org$pandalanguage$pandac$Symbol*) $tmp2839);
    }
    }
    if (((panda$core$Bit) { s2837 != NULL }).value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2840 = org$pandalanguage$pandac$Compiler$symbolRef$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q(self, p_i->offset, NULL, s2837, self->symbolTable);
        return $tmp2840;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp2841 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp2841->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2841->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp2843 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$String($tmp2841, ((panda$core$Int64) { 1037 }), p_i->offset, $tmp2843, ((panda$core$String*) p_i->payload));
    return $tmp2841;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_t) {
    org$pandalanguage$pandac$Type* resolved2844;
    org$pandalanguage$pandac$Type* $tmp2845 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, p_t);
    org$pandalanguage$pandac$Type* $tmp2846 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, $tmp2845);
    resolved2844 = $tmp2846;
    if (((panda$core$Bit) { resolved2844 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp2847 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp2847->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2847->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp2849 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp2847, ((panda$core$Int64) { 1001 }), p_t->offset, $tmp2849, resolved2844);
    return $tmp2847;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileRange$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_r) {
    org$pandalanguage$pandac$IRNode* start2857;
    org$pandalanguage$pandac$IRNode* end2865;
    org$pandalanguage$pandac$IRNode* step2873;
    panda$collections$Array* children2883;
    panda$core$Bit $tmp2851 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_r->kind, ((panda$core$Int64) { 105 }));
    bool $tmp2850 = $tmp2851.value;
    if ($tmp2850) goto $l2852;
    panda$core$Bit $tmp2853 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_r->kind, ((panda$core$Int64) { 104 }));
    $tmp2850 = $tmp2853.value;
    $l2852:;
    panda$core$Bit $tmp2854 = { $tmp2850 };
    PANDA_ASSERT($tmp2854.value);
    panda$core$Int64 $tmp2855 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_r->children);
    panda$core$Bit $tmp2856 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2855, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp2856.value);
    panda$core$Object* $tmp2858 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp2859 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp2858)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp2859.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2860 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp2860->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2860->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp2862 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp2860, ((panda$core$Int64) { 1030 }), p_r->offset, $tmp2862);
        start2857 = $tmp2860;
    }
    }
    else {
    {
        panda$core$Object* $tmp2863 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp2864 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2863));
        start2857 = $tmp2864;
        if (((panda$core$Bit) { start2857 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$core$Object* $tmp2866 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp2867 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp2866)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp2867.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2868 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp2868->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2868->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp2870 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp2868, ((panda$core$Int64) { 1030 }), p_r->offset, $tmp2870);
        end2865 = $tmp2868;
    }
    }
    else {
    {
        panda$core$Object* $tmp2871 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$IRNode* $tmp2872 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2871));
        end2865 = $tmp2872;
        if (((panda$core$Bit) { end2865 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$core$Object* $tmp2874 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 2 }));
    panda$core$Bit $tmp2875 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp2874)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp2875.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2876 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp2876->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2876->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp2878 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2876, ((panda$core$Int64) { 1004 }), p_r->offset, $tmp2878, ((panda$core$UInt64) { 1 }));
        step2873 = $tmp2876;
    }
    }
    else {
    {
        panda$core$Object* $tmp2879 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$IRNode* $tmp2880 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2879));
        org$pandalanguage$pandac$Type* $tmp2881 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp2882 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp2880, $tmp2881);
        step2873 = $tmp2882;
        if (((panda$core$Bit) { step2873 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$collections$Array* $tmp2884 = (panda$collections$Array*) malloc(40);
    $tmp2884->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2884->refCount.value = 1;
    panda$collections$Array$init($tmp2884);
    children2883 = $tmp2884;
    panda$collections$Array$add$panda$collections$Array$T(children2883, ((panda$core$Object*) start2857));
    panda$collections$Array$add$panda$collections$Array$T(children2883, ((panda$core$Object*) end2865));
    panda$collections$Array$add$panda$collections$Array$T(children2883, ((panda$core$Object*) step2873));
    org$pandalanguage$pandac$IRNode* $tmp2886 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp2886->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2886->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp2888 = (org$pandalanguage$pandac$Type*) malloc(80);
    $tmp2888->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp2888->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp2888, &$s2890, ((panda$core$Int64) { 17 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
    panda$core$Bit $tmp2891 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_r->kind, ((panda$core$Int64) { 104 }));
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2886, ((panda$core$Int64) { 1031 }), p_r->offset, $tmp2888, ((panda$core$Object*) wrap_panda$core$Bit($tmp2891)), ((panda$collections$ListView*) children2883));
    return $tmp2886;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$IRNode* $tmp2892 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp2892->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2892->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp2894 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$String($tmp2892, ((panda$core$Int64) { 1033 }), p_s->offset, $tmp2894, ((panda$core$String*) p_s->payload));
    return $tmp2892;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileSelf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$Type* type2899;
    org$pandalanguage$pandac$ClassDecl* cl2900;
    panda$collections$Array* subtypes2907;
    panda$core$MutableString* name2911;
    panda$core$String* separator2915;
    panda$collections$Iterator* p$Iter2917;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* p2929;
    panda$collections$Array* pType2934;
    panda$core$String* pName2937;
    panda$core$Bit $tmp2895 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_s->kind, ((panda$core$Int64) { 114 }));
    PANDA_ASSERT($tmp2895.value);
    panda$core$Object* $tmp2896 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
    panda$core$Bit $tmp2897 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp2896)->annotations);
    if ($tmp2897.value) {
    {
        org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_s->offset, &$s2898);
        return NULL;
    }
    }
    panda$core$Object* $tmp2901 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
    cl2900 = ((org$pandalanguage$pandac$ClassDecl*) $tmp2901);
    ITable* $tmp2902 = ((panda$collections$CollectionView*) cl2900->parameters)->$class->itable;
    while ($tmp2902->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2902 = $tmp2902->next;
    }
    $fn2904 $tmp2903 = $tmp2902->methods[0];
    panda$core$Int64 $tmp2905 = $tmp2903(((panda$collections$CollectionView*) cl2900->parameters));
    panda$core$Bit $tmp2906 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp2905, ((panda$core$Int64) { 0 }));
    if ($tmp2906.value) {
    {
        panda$collections$Array* $tmp2908 = (panda$collections$Array*) malloc(40);
        $tmp2908->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2908->refCount.value = 1;
        panda$collections$Array$init($tmp2908);
        subtypes2907 = $tmp2908;
        org$pandalanguage$pandac$Type* $tmp2910 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl2900);
        panda$collections$Array$add$panda$collections$Array$T(subtypes2907, ((panda$core$Object*) $tmp2910));
        panda$core$MutableString* $tmp2912 = (panda$core$MutableString*) malloc(40);
        $tmp2912->$class = (panda$core$Class*) &panda$core$MutableString$class;
        $tmp2912->refCount.value = 1;
        panda$core$MutableString$init$panda$core$String($tmp2912, ((org$pandalanguage$pandac$Symbol*) cl2900)->name);
        name2911 = $tmp2912;
        panda$core$MutableString$append$panda$core$String(name2911, &$s2914);
        separator2915 = &$s2916;
        {
            ITable* $tmp2918 = ((panda$collections$Iterable*) cl2900->parameters)->$class->itable;
            while ($tmp2918->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp2918 = $tmp2918->next;
            }
            $fn2920 $tmp2919 = $tmp2918->methods[0];
            panda$collections$Iterator* $tmp2921 = $tmp2919(((panda$collections$Iterable*) cl2900->parameters));
            p$Iter2917 = $tmp2921;
            $l2922:;
            ITable* $tmp2924 = p$Iter2917->$class->itable;
            while ($tmp2924->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2924 = $tmp2924->next;
            }
            $fn2926 $tmp2925 = $tmp2924->methods[0];
            panda$core$Bit $tmp2927 = $tmp2925(p$Iter2917);
            panda$core$Bit $tmp2928 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2927);
            if (!$tmp2928.value) goto $l2923;
            {
                ITable* $tmp2930 = p$Iter2917->$class->itable;
                while ($tmp2930->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp2930 = $tmp2930->next;
                }
                $fn2932 $tmp2931 = $tmp2930->methods[1];
                panda$core$Object* $tmp2933 = $tmp2931(p$Iter2917);
                p2929 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp2933);
                panda$collections$Array* $tmp2935 = (panda$collections$Array*) malloc(40);
                $tmp2935->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp2935->refCount.value = 1;
                panda$collections$Array$init($tmp2935);
                pType2934 = $tmp2935;
                panda$collections$Array$add$panda$collections$Array$T(pType2934, ((panda$core$Object*) p2929->bound));
                panda$core$String* $tmp2939 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2938, ((org$pandalanguage$pandac$Symbol*) cl2900)->name);
                panda$core$String* $tmp2941 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2939, &$s2940);
                panda$core$String* $tmp2942 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2941, ((org$pandalanguage$pandac$Symbol*) p2929)->name);
                panda$core$String* $tmp2944 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2942, &$s2943);
                pName2937 = $tmp2944;
                panda$core$MutableString$append$panda$core$String(name2911, separator2915);
                panda$core$MutableString$append$panda$core$String(name2911, pName2937);
                org$pandalanguage$pandac$Type* $tmp2945 = (org$pandalanguage$pandac$Type*) malloc(80);
                $tmp2945->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
                $tmp2945->refCount.value = 1;
                org$pandalanguage$pandac$Type$init$org$pandalanguage$pandac$ClassDecl$GenericParameter($tmp2945, p2929);
                panda$collections$Array$add$panda$collections$Array$T(subtypes2907, ((panda$core$Object*) $tmp2945));
                separator2915 = &$s2947;
            }
            goto $l2922;
            $l2923:;
        }
        panda$core$MutableString$append$panda$core$String(name2911, &$s2948);
        org$pandalanguage$pandac$Type* $tmp2949 = (org$pandalanguage$pandac$Type*) malloc(80);
        $tmp2949->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
        $tmp2949->refCount.value = 1;
        panda$core$String* $tmp2951 = panda$core$MutableString$convert$R$panda$core$String(name2911);
        org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp2949, $tmp2951, ((panda$core$Int64) { 21 }), p_s->offset, ((panda$collections$ListView*) subtypes2907), ((panda$core$Bit) { true }));
        type2899 = $tmp2949;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp2952 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl2900);
        type2899 = $tmp2952;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp2953 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp2953->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2953->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp2953, ((panda$core$Int64) { 1025 }), p_s->offset, type2899);
    return $tmp2953;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileSuper$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$ClassDecl* cl2959;
    panda$core$Bit $tmp2955 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_s->kind, ((panda$core$Int64) { 115 }));
    PANDA_ASSERT($tmp2955.value);
    panda$core$Object* $tmp2956 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
    panda$core$Bit $tmp2957 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp2956)->annotations);
    if ($tmp2957.value) {
    {
        org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_s->offset, &$s2958);
        return NULL;
    }
    }
    panda$core$Object* $tmp2960 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
    cl2959 = ((org$pandalanguage$pandac$ClassDecl*) $tmp2960);
    PANDA_ASSERT(cl2959->resolved.value);
    org$pandalanguage$pandac$IRNode* $tmp2961 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp2961->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2961->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp2961, ((panda$core$Int64) { 1024 }), p_s->offset, cl2959->rawSuper);
    return $tmp2961;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_c) {
    org$pandalanguage$pandac$IRNode* value2966;
    org$pandalanguage$pandac$Type* type2969;
    panda$core$Bit $tmp2963 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_c->kind, ((panda$core$Int64) { 111 }));
    PANDA_ASSERT($tmp2963.value);
    panda$core$Int64 $tmp2964 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_c->children);
    panda$core$Bit $tmp2965 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2964, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp2965.value);
    panda$core$Object* $tmp2967 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_c->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp2968 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2967));
    value2966 = $tmp2968;
    if (((panda$core$Bit) { value2966 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Object* $tmp2970 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_c->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Type* $tmp2971 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, ((org$pandalanguage$pandac$ASTNode*) $tmp2970));
    org$pandalanguage$pandac$Type* $tmp2972 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, $tmp2971);
    type2969 = $tmp2972;
    if (((panda$core$Bit) { type2969 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Int64$nullable $tmp2973 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, value2966, type2969);
    if (((panda$core$Bit) { $tmp2973.nonnull }).value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2974 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, value2966, type2969);
        return $tmp2974;
    }
    }
    panda$core$Bit $tmp2975 = org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, value2966, type2969);
    if ($tmp2975.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2976 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$panda$core$Int64$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, value2966, p_c->offset, ((panda$core$Bit) { true }), type2969);
        return $tmp2976;
    }
    }
    else {
    {
        panda$core$String* $tmp2978 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2977, ((panda$core$Object*) value2966->type));
        panda$core$String* $tmp2980 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2978, &$s2979);
        panda$core$String* $tmp2982 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2981, ((panda$core$Object*) type2969));
        panda$core$String* $tmp2984 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2982, &$s2983);
        panda$core$String* $tmp2985 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2980, $tmp2984);
        org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_c->offset, $tmp2985);
        return NULL;
    }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileNull$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_n) {
    panda$core$Bit $tmp2986 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_n->kind, ((panda$core$Int64) { 117 }));
    PANDA_ASSERT($tmp2986.value);
    org$pandalanguage$pandac$IRNode* $tmp2987 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp2987->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2987->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp2989 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp2987, ((panda$core$Int64) { 1030 }), p_n->offset, $tmp2989);
    return $tmp2987;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_e) {
    org$pandalanguage$pandac$IRNode* result2994;
    switch (p_e->kind.value) {
        case 103:
        {
            org$pandalanguage$pandac$IRNode* $tmp2990 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp2990;
        }
        break;
        case 116:
        {
            org$pandalanguage$pandac$IRNode* $tmp2991 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp2991->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2991->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2993 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2991, ((panda$core$Int64) { 1011 }), p_e->offset, $tmp2993, ((panda$core$Bit$wrapper*) p_e->payload)->value);
            return $tmp2991;
        }
        break;
        case 107:
        {
            org$pandalanguage$pandac$IRNode* $tmp2995 = org$pandalanguage$pandac$Compiler$compileCall$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            result2994 = $tmp2995;
            bool $tmp2996 = ((panda$core$Bit) { result2994 != NULL }).value;
            if (!$tmp2996) goto $l2997;
            org$pandalanguage$pandac$Type* $tmp2998 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp2999 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(result2994->type, $tmp2998);
            $tmp2996 = $tmp2999.value;
            $l2997:;
            panda$core$Bit $tmp3000 = { $tmp2996 };
            if ($tmp3000.value) {
            {
                panda$core$Bit $tmp3001 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result2994->kind, ((panda$core$Int64) { 1005 }));
                PANDA_ASSERT($tmp3001.value);
                panda$core$String* $tmp3002 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(((org$pandalanguage$pandac$MethodRef*) result2994->payload)->value);
                panda$core$String* $tmp3004 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3002, &$s3003);
                org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, result2994->offset, $tmp3004);
                return NULL;
            }
            }
            return result2994;
        }
        break;
        case 108:
        {
            org$pandalanguage$pandac$IRNode* $tmp3005 = org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3005;
        }
        break;
        case 106:
        {
            org$pandalanguage$pandac$IRNode* $tmp3006 = org$pandalanguage$pandac$Compiler$compileIdentifier$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3006;
        }
        break;
        case 102:
        {
            org$pandalanguage$pandac$IRNode* $tmp3007 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp3007->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3007->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3009 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp3007, ((panda$core$Int64) { 1004 }), p_e->offset, $tmp3009, ((panda$core$UInt64$wrapper*) p_e->payload)->value);
            return $tmp3007;
        }
        break;
        case 112:
        {
            org$pandalanguage$pandac$IRNode* $tmp3010 = org$pandalanguage$pandac$Compiler$compilePrefix$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3010;
        }
        break;
        case 104:
        case 105:
        {
            org$pandalanguage$pandac$IRNode* $tmp3011 = org$pandalanguage$pandac$Compiler$compileRange$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3011;
        }
        break;
        case 113:
        {
            org$pandalanguage$pandac$IRNode* $tmp3012 = org$pandalanguage$pandac$Compiler$compileString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3012;
        }
        break;
        case 109:
        case 154:
        case 110:
        {
            org$pandalanguage$pandac$IRNode* $tmp3013 = org$pandalanguage$pandac$Compiler$compileType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3013;
        }
        break;
        case 114:
        {
            org$pandalanguage$pandac$IRNode* $tmp3014 = org$pandalanguage$pandac$Compiler$compileSelf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3014;
        }
        break;
        case 115:
        {
            org$pandalanguage$pandac$IRNode* $tmp3015 = org$pandalanguage$pandac$Compiler$compileSuper$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3015;
        }
        break;
        case 111:
        {
            org$pandalanguage$pandac$IRNode* $tmp3016 = org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3016;
        }
        break;
        case 117:
        {
            org$pandalanguage$pandac$IRNode* $tmp3017 = org$pandalanguage$pandac$Compiler$compileNull$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode(self, p_e);
            return $tmp3017;
        }
        break;
    }
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBlock$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_b) {
    org$pandalanguage$pandac$SymbolTable* symbols3019;
    panda$collections$Array* result3022;
    panda$collections$Iterator* stmt$Iter3025;
    org$pandalanguage$pandac$ASTNode* stmt3037;
    org$pandalanguage$pandac$IRNode* compiled3042;
    panda$core$Bit $tmp3018 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_b->kind, ((panda$core$Int64) { 126 }));
    PANDA_ASSERT($tmp3018.value);
    org$pandalanguage$pandac$SymbolTable* $tmp3020 = (org$pandalanguage$pandac$SymbolTable*) malloc(40);
    $tmp3020->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp3020->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp3020, self->symbolTable);
    symbols3019 = $tmp3020;
    self->symbolTable = symbols3019;
    panda$collections$Array* $tmp3023 = (panda$collections$Array*) malloc(40);
    $tmp3023->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3023->refCount.value = 1;
    panda$collections$Array$init($tmp3023);
    result3022 = $tmp3023;
    {
        ITable* $tmp3026 = ((panda$collections$Iterable*) p_b->children)->$class->itable;
        while ($tmp3026->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3026 = $tmp3026->next;
        }
        $fn3028 $tmp3027 = $tmp3026->methods[0];
        panda$collections$Iterator* $tmp3029 = $tmp3027(((panda$collections$Iterable*) p_b->children));
        stmt$Iter3025 = $tmp3029;
        $l3030:;
        ITable* $tmp3032 = stmt$Iter3025->$class->itable;
        while ($tmp3032->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3032 = $tmp3032->next;
        }
        $fn3034 $tmp3033 = $tmp3032->methods[0];
        panda$core$Bit $tmp3035 = $tmp3033(stmt$Iter3025);
        panda$core$Bit $tmp3036 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3035);
        if (!$tmp3036.value) goto $l3031;
        {
            ITable* $tmp3038 = stmt$Iter3025->$class->itable;
            while ($tmp3038->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3038 = $tmp3038->next;
            }
            $fn3040 $tmp3039 = $tmp3038->methods[1];
            panda$core$Object* $tmp3041 = $tmp3039(stmt$Iter3025);
            stmt3037 = ((org$pandalanguage$pandac$ASTNode*) $tmp3041);
            org$pandalanguage$pandac$IRNode* $tmp3043 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, stmt3037);
            compiled3042 = $tmp3043;
            if (((panda$core$Bit) { compiled3042 == NULL }).value) {
            {
                panda$core$Object* $tmp3044 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(symbols3019->parents, ((panda$core$Int64) { 0 }));
                self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp3044);
                return NULL;
            }
            }
            panda$core$Bit $tmp3045 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(compiled3042->kind, ((panda$core$Int64) { 1039 }));
            PANDA_ASSERT($tmp3045.value);
            panda$collections$Array$add$panda$collections$Array$T(result3022, ((panda$core$Object*) compiled3042));
        }
        goto $l3030;
        $l3031:;
    }
    panda$core$Object* $tmp3046 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(symbols3019->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp3046);
    org$pandalanguage$pandac$IRNode* $tmp3047 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3047->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3047->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3047, ((panda$core$Int64) { 1000 }), p_b->offset, ((panda$collections$ListView*) result3022));
    return $tmp3047;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_i) {
    org$pandalanguage$pandac$IRNode* test3057;
    org$pandalanguage$pandac$IRNode* ifTrue3062;
    panda$collections$Array* children3065;
    org$pandalanguage$pandac$IRNode* ifFalse3070;
    panda$core$Bit $tmp3049 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_i->kind, ((panda$core$Int64) { 118 }));
    PANDA_ASSERT($tmp3049.value);
    panda$core$Int64 $tmp3051 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_i->children);
    panda$core$Bit $tmp3052 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3051, ((panda$core$Int64) { 2 }));
    bool $tmp3050 = $tmp3052.value;
    if ($tmp3050) goto $l3053;
    panda$core$Int64 $tmp3054 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_i->children);
    panda$core$Bit $tmp3055 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3054, ((panda$core$Int64) { 3 }));
    $tmp3050 = $tmp3055.value;
    $l3053:;
    panda$core$Bit $tmp3056 = { $tmp3050 };
    PANDA_ASSERT($tmp3056.value);
    panda$core$Object* $tmp3058 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_i->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3059 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3058));
    org$pandalanguage$pandac$Type* $tmp3060 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp3061 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3059, $tmp3060);
    test3057 = $tmp3061;
    if (((panda$core$Bit) { test3057 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Object* $tmp3063 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_i->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp3064 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3063));
    ifTrue3062 = $tmp3064;
    panda$collections$Array* $tmp3066 = (panda$collections$Array*) malloc(40);
    $tmp3066->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3066->refCount.value = 1;
    panda$collections$Array$init($tmp3066);
    children3065 = $tmp3066;
    panda$collections$Array$add$panda$collections$Array$T(children3065, ((panda$core$Object*) test3057));
    panda$collections$Array$add$panda$collections$Array$T(children3065, ((panda$core$Object*) ifTrue3062));
    panda$core$Int64 $tmp3068 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_i->children);
    panda$core$Bit $tmp3069 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3068, ((panda$core$Int64) { 3 }));
    if ($tmp3069.value) {
    {
        panda$core$Object* $tmp3071 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_i->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$IRNode* $tmp3072 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3071));
        ifFalse3070 = $tmp3072;
        if (((panda$core$Bit) { ifFalse3070 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children3065, ((panda$core$Object*) ifFalse3070));
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3073 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3073->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3073->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3073, ((panda$core$Int64) { 1012 }), p_i->offset, ((panda$collections$ListView*) children3065));
    return $tmp3073;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileRangeFor$panda$core$Int64$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_offset, panda$core$String* p_label, org$pandalanguage$pandac$ASTNode* p_astTarget, org$pandalanguage$pandac$IRNode* p_rawList, org$pandalanguage$pandac$ASTNode* p_body) {
    org$pandalanguage$pandac$Type* elementType3075;
    org$pandalanguage$pandac$IRNode* list3076;
    org$pandalanguage$pandac$Type* t3083;
    org$pandalanguage$pandac$Compiler$CompileTargetResult* target3097;
    org$pandalanguage$pandac$IRNode* body3099;
    panda$collections$Array* children3101;
    panda$core$Bit $tmp3078 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_astTarget->kind, ((panda$core$Int64) { 106 }));
    bool $tmp3077 = $tmp3078.value;
    if (!$tmp3077) goto $l3079;
    panda$core$Int64 $tmp3080 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_astTarget->children);
    panda$core$Bit $tmp3081 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3080, ((panda$core$Int64) { 1 }));
    $tmp3077 = $tmp3081.value;
    $l3079:;
    panda$core$Bit $tmp3082 = { $tmp3077 };
    if ($tmp3082.value) {
    {
        panda$core$Object* $tmp3084 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_astTarget->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Type* $tmp3085 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, ((org$pandalanguage$pandac$ASTNode*) $tmp3084));
        org$pandalanguage$pandac$Type* $tmp3086 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, $tmp3085);
        t3083 = $tmp3086;
        org$pandalanguage$pandac$Type* $tmp3087 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3083);
        org$pandalanguage$pandac$IRNode* $tmp3088 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, $tmp3087);
        list3076 = $tmp3088;
    }
    }
    else {
    {
        org$pandalanguage$pandac$IRNode* $tmp3089 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList);
        list3076 = $tmp3089;
    }
    }
    if (((panda$core$Bit) { list3076 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp3090 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(list3076->type->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp3090.value) {
    {
        panda$core$Object* $tmp3091 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(list3076->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp3092 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3091)->typeKind, ((panda$core$Int64) { 21 }));
        PANDA_ASSERT($tmp3092.value);
        panda$core$Object* $tmp3093 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(list3076->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3094 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$Type*) $tmp3093)->subtypes, ((panda$core$Int64) { 1 }));
        elementType3075 = ((org$pandalanguage$pandac$Type*) $tmp3094);
    }
    }
    else {
    {
        panda$core$Bit $tmp3095 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(list3076->type->typeKind, ((panda$core$Int64) { 21 }));
        PANDA_ASSERT($tmp3095.value);
        panda$core$Object* $tmp3096 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(list3076->type->subtypes, ((panda$core$Int64) { 1 }));
        elementType3075 = ((org$pandalanguage$pandac$Type*) $tmp3096);
    }
    }
    org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp3098 = org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(self, p_astTarget, ((panda$core$Int64) { 10001 }), NULL, elementType3075);
    target3097 = $tmp3098;
    if (((panda$core$Bit) { target3097 == NULL }).value) {
    {
        return NULL;
    }
    }
    PANDA_ASSERT(((panda$core$Bit) { target3097->value == NULL }).value);
    org$pandalanguage$pandac$IRNode* $tmp3100 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_body);
    body3099 = $tmp3100;
    if (((panda$core$Bit) { body3099 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3102 = (panda$collections$Array*) malloc(40);
    $tmp3102->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3102->refCount.value = 1;
    panda$collections$Array$init($tmp3102);
    children3101 = $tmp3102;
    panda$collections$Array$add$panda$collections$Array$T(children3101, ((panda$core$Object*) target3097->target));
    panda$collections$Array$add$panda$collections$Array$T(children3101, ((panda$core$Object*) list3076));
    panda$collections$Array$add$panda$collections$Array$T(children3101, ((panda$core$Object*) body3099));
    org$pandalanguage$pandac$IRNode* $tmp3104 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3104->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3104->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3104, ((panda$core$Int64) { 1029 }), p_offset, ((panda$core$Object*) p_label), ((panda$collections$ListView*) children3101));
    return $tmp3104;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIteratorFor$panda$core$Int64$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_offset, panda$core$String* p_label, org$pandalanguage$pandac$ASTNode* p_astTarget, org$pandalanguage$pandac$IRNode* p_iterator, org$pandalanguage$pandac$ASTNode* p_body) {
    org$pandalanguage$pandac$Compiler$CompileTargetResult* target3113;
    org$pandalanguage$pandac$Variable* targetVar3117;
    panda$collections$Array* subtypes3118;
    org$pandalanguage$pandac$Type* iterType3122;
    org$pandalanguage$pandac$Variable* iter3134;
    panda$collections$Array* statements3139;
    panda$collections$Array* declChildren3142;
    panda$collections$Array* varChildren3147;
    panda$collections$Array* whileChildren3154;
    org$pandalanguage$pandac$IRNode* done3157;
    org$pandalanguage$pandac$IRNode* notCall3164;
    panda$collections$Array* valueDeclChildren3169;
    org$pandalanguage$pandac$IRNode* next3174;
    panda$collections$Array* valueVarChildren3181;
    org$pandalanguage$pandac$IRNode* block3186;
    panda$collections$Array* blockChildren3188;
    panda$core$Bit $tmp3107 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_iterator->type->typeKind, ((panda$core$Int64) { 21 }));
    bool $tmp3106 = $tmp3107.value;
    if (!$tmp3106) goto $l3108;
    panda$core$Object* $tmp3109 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_iterator->type->subtypes, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp3110 = org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp3111 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3109), $tmp3110);
    $tmp3106 = $tmp3111.value;
    $l3108:;
    panda$core$Bit $tmp3112 = { $tmp3106 };
    PANDA_ASSERT($tmp3112.value);
    panda$core$Object* $tmp3114 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_iterator->type->subtypes, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp3115 = org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(self, p_astTarget, ((panda$core$Int64) { 10001 }), NULL, ((org$pandalanguage$pandac$Type*) $tmp3114));
    target3113 = $tmp3115;
    if (((panda$core$Bit) { target3113 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp3116 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(target3113->target->kind, ((panda$core$Int64) { 1016 }));
    PANDA_ASSERT($tmp3116.value);
    targetVar3117 = ((org$pandalanguage$pandac$Variable*) target3113->target->payload);
    panda$collections$Array* $tmp3119 = (panda$collections$Array*) malloc(40);
    $tmp3119->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3119->refCount.value = 1;
    panda$collections$Array$init($tmp3119);
    subtypes3118 = $tmp3119;
    org$pandalanguage$pandac$Type* $tmp3121 = org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type();
    panda$collections$Array$add$panda$collections$Array$T(subtypes3118, ((panda$core$Object*) $tmp3121));
    panda$collections$Array$add$panda$collections$Array$T(subtypes3118, ((panda$core$Object*) target3113->target->type));
    org$pandalanguage$pandac$Type* $tmp3123 = (org$pandalanguage$pandac$Type*) malloc(80);
    $tmp3123->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp3123->refCount.value = 1;
    panda$core$Object* $tmp3126 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(subtypes3118, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3127 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3125, ((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp3126)));
    panda$core$String* $tmp3129 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3127, &$s3128);
    panda$core$Object* $tmp3130 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(subtypes3118, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp3131 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3129, ((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp3130)));
    panda$core$String* $tmp3133 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3131, &$s3132);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp3123, $tmp3133, ((panda$core$Int64) { 21 }), p_offset, ((panda$collections$ListView*) subtypes3118), ((panda$core$Bit) { true }));
    iterType3122 = $tmp3123;
    org$pandalanguage$pandac$Variable* $tmp3135 = (org$pandalanguage$pandac$Variable*) malloc(72);
    $tmp3135->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
    $tmp3135->refCount.value = 1;
    panda$core$String* $tmp3138 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) targetVar3117)->name, &$s3137);
    org$pandalanguage$pandac$Variable$init$panda$core$Int64$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type($tmp3135, p_iterator->offset, ((panda$core$Int64) { 10001 }), $tmp3138, iterType3122);
    iter3134 = $tmp3135;
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->symbolTable, ((org$pandalanguage$pandac$Symbol*) iter3134));
    panda$collections$Array* $tmp3140 = (panda$collections$Array*) malloc(40);
    $tmp3140->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3140->refCount.value = 1;
    panda$collections$Array$init($tmp3140);
    statements3139 = $tmp3140;
    panda$collections$Array* $tmp3143 = (panda$collections$Array*) malloc(40);
    $tmp3143->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3143->refCount.value = 1;
    panda$collections$Array$init($tmp3143);
    declChildren3142 = $tmp3143;
    org$pandalanguage$pandac$IRNode* $tmp3145 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3145->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3145->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3145, ((panda$core$Int64) { 1016 }), p_iterator->offset, iter3134->type, iter3134);
    panda$collections$Array$add$panda$collections$Array$T(declChildren3142, ((panda$core$Object*) $tmp3145));
    panda$collections$Array$add$panda$collections$Array$T(declChildren3142, ((panda$core$Object*) p_iterator));
    panda$collections$Array* $tmp3148 = (panda$collections$Array*) malloc(40);
    $tmp3148->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3148->refCount.value = 1;
    panda$collections$Array$init($tmp3148);
    varChildren3147 = $tmp3148;
    org$pandalanguage$pandac$IRNode* $tmp3150 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3150->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3150->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3150, ((panda$core$Int64) { 1021 }), ((org$pandalanguage$pandac$Symbol*) iter3134)->offset, ((panda$collections$ListView*) declChildren3142));
    panda$collections$Array$add$panda$collections$Array$T(varChildren3147, ((panda$core$Object*) $tmp3150));
    org$pandalanguage$pandac$IRNode* $tmp3152 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3152->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3152->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3152, ((panda$core$Int64) { 1018 }), ((org$pandalanguage$pandac$Symbol*) iter3134)->offset, ((panda$collections$ListView*) varChildren3147));
    panda$collections$Array$add$panda$collections$Array$T(statements3139, ((panda$core$Object*) $tmp3152));
    panda$collections$Array* $tmp3155 = (panda$collections$Array*) malloc(40);
    $tmp3155->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3155->refCount.value = 1;
    panda$collections$Array$init($tmp3155);
    whileChildren3154 = $tmp3155;
    org$pandalanguage$pandac$IRNode* $tmp3158 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3158->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3158->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3158, ((panda$core$Int64) { 1016 }), ((org$pandalanguage$pandac$Symbol*) iter3134)->offset, iter3134->type, iter3134);
    panda$collections$Array* $tmp3161 = (panda$collections$Array*) malloc(40);
    $tmp3161->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3161->refCount.value = 1;
    panda$collections$Array$init($tmp3161);
    org$pandalanguage$pandac$IRNode* $tmp3163 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3158, &$s3160, ((panda$collections$ListView*) $tmp3161), NULL);
    done3157 = $tmp3163;
    if (((panda$core$Bit) { done3157 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3166 = (panda$collections$Array*) malloc(40);
    $tmp3166->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3166->refCount.value = 1;
    panda$collections$Array$init($tmp3166);
    org$pandalanguage$pandac$IRNode* $tmp3168 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, done3157, &$s3165, ((panda$collections$ListView*) $tmp3166), NULL);
    notCall3164 = $tmp3168;
    if (((panda$core$Bit) { notCall3164 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(whileChildren3154, ((panda$core$Object*) notCall3164));
    panda$collections$Array* $tmp3170 = (panda$collections$Array*) malloc(40);
    $tmp3170->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3170->refCount.value = 1;
    panda$collections$Array$init($tmp3170);
    valueDeclChildren3169 = $tmp3170;
    org$pandalanguage$pandac$IRNode* $tmp3172 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3172->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3172->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3172, ((panda$core$Int64) { 1016 }), p_iterator->offset, targetVar3117->type, targetVar3117);
    panda$collections$Array$add$panda$collections$Array$T(valueDeclChildren3169, ((panda$core$Object*) $tmp3172));
    org$pandalanguage$pandac$IRNode* $tmp3175 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3175->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3175->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3175, ((panda$core$Int64) { 1016 }), p_iterator->offset, iter3134->type, iter3134);
    panda$collections$Array* $tmp3178 = (panda$collections$Array*) malloc(40);
    $tmp3178->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3178->refCount.value = 1;
    panda$collections$Array$init($tmp3178);
    org$pandalanguage$pandac$IRNode* $tmp3180 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3175, &$s3177, ((panda$collections$ListView*) $tmp3178), NULL);
    next3174 = $tmp3180;
    PANDA_ASSERT(((panda$core$Bit) { next3174 != NULL }).value);
    panda$collections$Array$add$panda$collections$Array$T(valueDeclChildren3169, ((panda$core$Object*) next3174));
    panda$collections$Array* $tmp3182 = (panda$collections$Array*) malloc(40);
    $tmp3182->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3182->refCount.value = 1;
    panda$collections$Array$init($tmp3182);
    valueVarChildren3181 = $tmp3182;
    org$pandalanguage$pandac$IRNode* $tmp3184 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3184->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3184->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3184, ((panda$core$Int64) { 1021 }), p_iterator->offset, ((panda$collections$ListView*) valueDeclChildren3169));
    panda$collections$Array$add$panda$collections$Array$T(valueVarChildren3181, ((panda$core$Object*) $tmp3184));
    org$pandalanguage$pandac$IRNode* $tmp3187 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_body);
    block3186 = $tmp3187;
    if (((panda$core$Bit) { block3186 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3189 = (panda$collections$Array*) malloc(40);
    $tmp3189->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3189->refCount.value = 1;
    panda$collections$Array$init($tmp3189);
    blockChildren3188 = $tmp3189;
    org$pandalanguage$pandac$IRNode* $tmp3191 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3191->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3191->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3191, ((panda$core$Int64) { 1018 }), p_iterator->offset, ((panda$collections$ListView*) valueVarChildren3181));
    panda$collections$Array$add$panda$collections$Array$T(blockChildren3188, ((panda$core$Object*) $tmp3191));
    panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(blockChildren3188, ((panda$collections$CollectionView*) block3186->children));
    org$pandalanguage$pandac$IRNode* $tmp3193 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3193->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3193->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3193, ((panda$core$Int64) { 1000 }), block3186->offset, ((panda$collections$ListView*) blockChildren3188));
    block3186 = $tmp3193;
    panda$collections$Array$add$panda$collections$Array$T(whileChildren3154, ((panda$core$Object*) block3186));
    org$pandalanguage$pandac$IRNode* $tmp3195 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3195->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3195->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3195, ((panda$core$Int64) { 1013 }), p_iterator->offset, ((panda$core$Object*) p_label), ((panda$collections$ListView*) whileChildren3154));
    panda$collections$Array$add$panda$collections$Array$T(statements3139, ((panda$core$Object*) $tmp3195));
    org$pandalanguage$pandac$IRNode* $tmp3197 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3197->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3197->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3197, ((panda$core$Int64) { 1000 }), p_iterator->offset, ((panda$collections$ListView*) statements3139));
    return $tmp3197;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileFor$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_f) {
    org$pandalanguage$pandac$IRNode* list3202;
    org$pandalanguage$pandac$SymbolTable* symbols3205;
    org$pandalanguage$pandac$IRNode* result3208;
    panda$core$Bit found3218;
    panda$collections$Iterator* intf$Iter3219;
    org$pandalanguage$pandac$Type* intf3232;
    org$pandalanguage$pandac$IRNode* iterator3244;
    org$pandalanguage$pandac$IRNode* iterable3256;
    org$pandalanguage$pandac$IRNode* iterator3258;
    panda$core$Bit $tmp3199 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_f->kind, ((panda$core$Int64) { 119 }));
    PANDA_ASSERT($tmp3199.value);
    panda$core$Int64 $tmp3200 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_f->children);
    panda$core$Bit $tmp3201 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3200, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp3201.value);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loops, ((panda$core$Object*) ((panda$core$String*) p_f->payload)));
    panda$core$Object* $tmp3203 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp3204 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3203));
    list3202 = $tmp3204;
    if (((panda$core$Bit) { list3202 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp3206 = (org$pandalanguage$pandac$SymbolTable*) malloc(40);
    $tmp3206->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp3206->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp3206, self->symbolTable);
    symbols3205 = $tmp3206;
    self->symbolTable = symbols3205;
    panda$core$Bit $tmp3210 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(list3202->kind, ((panda$core$Int64) { 1031 }));
    bool $tmp3209 = $tmp3210.value;
    if ($tmp3209) goto $l3211;
    panda$core$Bit $tmp3212 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(list3202->type);
    $tmp3209 = $tmp3212.value;
    $l3211:;
    panda$core$Bit $tmp3213 = { $tmp3209 };
    if ($tmp3213.value) {
    {
        panda$core$Object* $tmp3214 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3215 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$IRNode* $tmp3216 = org$pandalanguage$pandac$Compiler$compileRangeFor$panda$core$Int64$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->offset, ((panda$core$String*) p_f->payload), ((org$pandalanguage$pandac$ASTNode*) $tmp3214), list3202, ((org$pandalanguage$pandac$ASTNode*) $tmp3215));
        result3208 = $tmp3216;
    }
    }
    else {
    {
        org$pandalanguage$pandac$IRNode* $tmp3217 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, list3202);
        list3202 = $tmp3217;
        if (((panda$core$Bit) { list3202 == NULL }).value) {
        {
            return NULL;
        }
        }
        found3218 = ((panda$core$Bit) { false });
        {
            panda$collections$Set* $tmp3220 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self, list3202->type);
            ITable* $tmp3221 = ((panda$collections$Iterable*) $tmp3220)->$class->itable;
            while ($tmp3221->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3221 = $tmp3221->next;
            }
            $fn3223 $tmp3222 = $tmp3221->methods[0];
            panda$collections$Iterator* $tmp3224 = $tmp3222(((panda$collections$Iterable*) $tmp3220));
            intf$Iter3219 = $tmp3224;
            $l3225:;
            ITable* $tmp3227 = intf$Iter3219->$class->itable;
            while ($tmp3227->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3227 = $tmp3227->next;
            }
            $fn3229 $tmp3228 = $tmp3227->methods[0];
            panda$core$Bit $tmp3230 = $tmp3228(intf$Iter3219);
            panda$core$Bit $tmp3231 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3230);
            if (!$tmp3231.value) goto $l3226;
            {
                ITable* $tmp3233 = intf$Iter3219->$class->itable;
                while ($tmp3233->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3233 = $tmp3233->next;
                }
                $fn3235 $tmp3234 = $tmp3233->methods[1];
                panda$core$Object* $tmp3236 = $tmp3234(intf$Iter3219);
                intf3232 = ((org$pandalanguage$pandac$Type*) $tmp3236);
                panda$core$Bit $tmp3238 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(intf3232->typeKind, ((panda$core$Int64) { 21 }));
                bool $tmp3237 = $tmp3238.value;
                if (!$tmp3237) goto $l3239;
                panda$core$Object* $tmp3240 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(intf3232->subtypes, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp3241 = org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp3242 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3240), $tmp3241);
                $tmp3237 = $tmp3242.value;
                $l3239:;
                panda$core$Bit $tmp3243 = { $tmp3237 };
                if ($tmp3243.value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp3245 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, list3202, intf3232);
                    iterator3244 = $tmp3245;
                    panda$core$Object* $tmp3246 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
                    panda$core$Object* $tmp3247 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 2 }));
                    org$pandalanguage$pandac$IRNode* $tmp3248 = org$pandalanguage$pandac$Compiler$compileIteratorFor$panda$core$Int64$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->offset, ((panda$core$String*) p_f->payload), ((org$pandalanguage$pandac$ASTNode*) $tmp3246), iterator3244, ((org$pandalanguage$pandac$ASTNode*) $tmp3247));
                    result3208 = $tmp3248;
                    found3218 = ((panda$core$Bit) { true });
                    goto $l3226;
                }
                }
                panda$core$Bit $tmp3250 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(intf3232->typeKind, ((panda$core$Int64) { 21 }));
                bool $tmp3249 = $tmp3250.value;
                if (!$tmp3249) goto $l3251;
                panda$core$Object* $tmp3252 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(intf3232->subtypes, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp3253 = org$pandalanguage$pandac$Type$Iterable$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp3254 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3252), $tmp3253);
                $tmp3249 = $tmp3254.value;
                $l3251:;
                panda$core$Bit $tmp3255 = { $tmp3249 };
                if ($tmp3255.value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp3257 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, list3202, intf3232);
                    iterable3256 = $tmp3257;
                    panda$collections$Array* $tmp3260 = (panda$collections$Array*) malloc(40);
                    $tmp3260->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp3260->refCount.value = 1;
                    panda$collections$Array$init($tmp3260);
                    org$pandalanguage$pandac$IRNode* $tmp3262 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, iterable3256, &$s3259, ((panda$collections$ListView*) $tmp3260));
                    iterator3258 = $tmp3262;
                    panda$core$Object* $tmp3263 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
                    panda$core$Object* $tmp3264 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 2 }));
                    org$pandalanguage$pandac$IRNode* $tmp3265 = org$pandalanguage$pandac$Compiler$compileIteratorFor$panda$core$Int64$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->offset, ((panda$core$String*) p_f->payload), ((org$pandalanguage$pandac$ASTNode*) $tmp3263), iterator3258, ((org$pandalanguage$pandac$ASTNode*) $tmp3264));
                    result3208 = $tmp3265;
                    found3218 = ((panda$core$Bit) { true });
                    goto $l3226;
                }
                }
            }
            goto $l3225;
            $l3226:;
        }
        panda$core$Bit $tmp3266 = panda$core$Bit$$NOT$R$panda$core$Bit(found3218);
        if ($tmp3266.value) {
        {
            panda$core$String* $tmp3268 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3267, ((panda$core$Object*) list3202->type));
            panda$core$String* $tmp3270 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3268, &$s3269);
            org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, list3202->offset, $tmp3270);
            return NULL;
        }
        }
    }
    }
    panda$core$Object* $tmp3271 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(symbols3205->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp3271);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
    return result3208;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileWhile$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_w) {
    org$pandalanguage$pandac$IRNode* test3275;
    org$pandalanguage$pandac$IRNode* stmt3280;
    panda$collections$Array* children3283;
    panda$core$Bit $tmp3272 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_w->kind, ((panda$core$Int64) { 121 }));
    PANDA_ASSERT($tmp3272.value);
    panda$core$Int64 $tmp3273 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Bit $tmp3274 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3273, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp3274.value);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loops, ((panda$core$Object*) ((panda$core$String*) p_w->payload)));
    panda$core$Object* $tmp3276 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3277 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3276));
    org$pandalanguage$pandac$Type* $tmp3278 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp3279 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3277, $tmp3278);
    test3275 = $tmp3279;
    if (((panda$core$Bit) { test3275 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$core$Object* $tmp3281 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp3282 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3281));
    stmt3280 = $tmp3282;
    if (((panda$core$Bit) { stmt3280 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$collections$Array* $tmp3284 = (panda$collections$Array*) malloc(40);
    $tmp3284->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3284->refCount.value = 1;
    panda$collections$Array$init$panda$core$Int64($tmp3284, ((panda$core$Int64) { 2 }));
    children3283 = $tmp3284;
    panda$collections$Array$add$panda$collections$Array$T(children3283, ((panda$core$Object*) test3275));
    panda$collections$Array$add$panda$collections$Array$T(children3283, ((panda$core$Object*) stmt3280));
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
    org$pandalanguage$pandac$IRNode* $tmp3286 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3286->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3286->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3286, ((panda$core$Int64) { 1013 }), p_w->offset, p_w->payload, ((panda$collections$ListView*) children3283));
    return $tmp3286;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileDo$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_d) {
    org$pandalanguage$pandac$IRNode* stmt3291;
    org$pandalanguage$pandac$IRNode* test3294;
    panda$collections$Array* children3299;
    panda$core$Bit $tmp3288 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_d->kind, ((panda$core$Int64) { 120 }));
    PANDA_ASSERT($tmp3288.value);
    panda$core$Int64 $tmp3289 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp3290 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3289, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp3290.value);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loops, ((panda$core$Object*) ((panda$core$String*) p_d->payload)));
    panda$core$Object* $tmp3292 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3293 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3292));
    stmt3291 = $tmp3293;
    if (((panda$core$Bit) { stmt3291 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$core$Object* $tmp3295 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp3296 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3295));
    org$pandalanguage$pandac$Type* $tmp3297 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp3298 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3296, $tmp3297);
    test3294 = $tmp3298;
    if (((panda$core$Bit) { test3294 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$collections$Array* $tmp3300 = (panda$collections$Array*) malloc(40);
    $tmp3300->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3300->refCount.value = 1;
    panda$collections$Array$init$panda$core$Int64($tmp3300, ((panda$core$Int64) { 2 }));
    children3299 = $tmp3300;
    panda$collections$Array$add$panda$collections$Array$T(children3299, ((panda$core$Object*) stmt3291));
    panda$collections$Array$add$panda$collections$Array$T(children3299, ((panda$core$Object*) test3294));
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
    org$pandalanguage$pandac$IRNode* $tmp3302 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3302->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3302->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3302, ((panda$core$Int64) { 1014 }), p_d->offset, p_d->payload, ((panda$collections$ListView*) children3299));
    return $tmp3302;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileLoop$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_l) {
    org$pandalanguage$pandac$IRNode* stmt3307;
    panda$collections$Array* children3310;
    panda$core$Bit $tmp3304 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_l->kind, ((panda$core$Int64) { 122 }));
    PANDA_ASSERT($tmp3304.value);
    panda$core$Int64 $tmp3305 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_l->children);
    panda$core$Bit $tmp3306 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3305, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3306.value);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loops, ((panda$core$Object*) ((panda$core$String*) p_l->payload)));
    panda$core$Object* $tmp3308 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_l->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3309 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3308));
    stmt3307 = $tmp3309;
    if (((panda$core$Bit) { stmt3307 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$collections$Array* $tmp3311 = (panda$collections$Array*) malloc(40);
    $tmp3311->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3311->refCount.value = 1;
    panda$collections$Array$init$panda$core$Int64($tmp3311, ((panda$core$Int64) { 1 }));
    children3310 = $tmp3311;
    panda$collections$Array$add$panda$collections$Array$T(children3310, ((panda$core$Object*) stmt3307));
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
    org$pandalanguage$pandac$IRNode* $tmp3313 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3313->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3313->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3313, ((panda$core$Int64) { 1015 }), p_l->offset, p_l->payload, ((panda$collections$ListView*) children3310));
    return $tmp3313;
}
org$pandalanguage$pandac$Compiler$CompileTargetResult* org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_t, panda$core$Int64 p_kind, org$pandalanguage$pandac$IRNode* p_rawValue, org$pandalanguage$pandac$Type* p_valueType) {
    org$pandalanguage$pandac$IRNode* value3315;
    org$pandalanguage$pandac$Type* type3319;
    org$pandalanguage$pandac$Variable* v3330;
    value3315 = p_rawValue;
    bool $tmp3316 = ((panda$core$Bit) { value3315 == NULL }).value;
    if ($tmp3316) goto $l3317;
    $tmp3316 = ((panda$core$Bit) { p_valueType == NULL }).value;
    $l3317:;
    panda$core$Bit $tmp3318 = { $tmp3316 };
    PANDA_ASSERT($tmp3318.value);
    switch (p_t->kind.value) {
        case 106:
        {
            panda$core$Int64 $tmp3320 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_t->children);
            panda$core$Bit $tmp3321 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3320, ((panda$core$Int64) { 1 }));
            if ($tmp3321.value) {
            {
                panda$core$Object* $tmp3322 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp3323 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, ((org$pandalanguage$pandac$ASTNode*) $tmp3322));
                org$pandalanguage$pandac$Type* $tmp3324 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, $tmp3323);
                type3319 = $tmp3324;
            }
            }
            else {
            if (((panda$core$Bit) { value3315 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp3325 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, value3315);
                value3315 = $tmp3325;
                if (((panda$core$Bit) { value3315 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$Type* $tmp3326 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, value3315);
                type3319 = $tmp3326;
            }
            }
            else {
            if (((panda$core$Bit) { p_valueType != NULL }).value) {
            {
                type3319 = p_valueType;
            }
            }
            else {
            {
                org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_t->offset, &$s3327);
                return NULL;
            }
            }
            }
            }
            if (((panda$core$Bit) { value3315 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp3328 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, value3315, type3319);
                value3315 = $tmp3328;
                if (((panda$core$Bit) { value3315 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$core$Bit $tmp3329 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(value3315->type, type3319);
                PANDA_ASSERT($tmp3329.value);
            }
            }
            org$pandalanguage$pandac$Variable* $tmp3331 = (org$pandalanguage$pandac$Variable*) malloc(72);
            $tmp3331->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
            $tmp3331->refCount.value = 1;
            org$pandalanguage$pandac$Variable$init$panda$core$Int64$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type($tmp3331, p_t->offset, p_kind, ((panda$core$String*) p_t->payload), type3319);
            v3330 = $tmp3331;
            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->symbolTable, ((org$pandalanguage$pandac$Symbol*) v3330));
            org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp3333 = (org$pandalanguage$pandac$Compiler$CompileTargetResult*) malloc(32);
            $tmp3333->$class = (panda$core$Class*) &org$pandalanguage$pandac$Compiler$CompileTargetResult$class;
            $tmp3333->refCount.value = 1;
            org$pandalanguage$pandac$IRNode* $tmp3335 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp3335->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3335->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3335, ((panda$core$Int64) { 1016 }), ((org$pandalanguage$pandac$Symbol*) v3330)->offset, v3330->type, v3330);
            org$pandalanguage$pandac$Compiler$CompileTargetResult$init$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q($tmp3333, $tmp3335, value3315);
            return $tmp3333;
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
    org$pandalanguage$pandac$IRNode* value3345;
    org$pandalanguage$pandac$Compiler$CompileTargetResult* target3350;
    panda$collections$Array* children3353;
    org$pandalanguage$pandac$Variable* v3357;
    panda$core$Bit $tmp3337 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_d->kind, ((panda$core$Int64) { 129 }));
    PANDA_ASSERT($tmp3337.value);
    panda$core$Int64 $tmp3339 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp3340 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3339, ((panda$core$Int64) { 1 }));
    bool $tmp3338 = $tmp3340.value;
    if ($tmp3338) goto $l3341;
    panda$core$Int64 $tmp3342 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp3343 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3342, ((panda$core$Int64) { 2 }));
    $tmp3338 = $tmp3343.value;
    $l3341:;
    panda$core$Bit $tmp3344 = { $tmp3338 };
    PANDA_ASSERT($tmp3344.value);
    panda$core$Int64 $tmp3346 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp3347 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3346, ((panda$core$Int64) { 2 }));
    if ($tmp3347.value) {
    {
        panda$core$Object* $tmp3348 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$IRNode* $tmp3349 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3348));
        value3345 = $tmp3349;
        if (((panda$core$Bit) { value3345 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    else {
    {
        value3345 = NULL;
    }
    }
    panda$core$Object* $tmp3351 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp3352 = org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3351), p_varKind, value3345, NULL);
    target3350 = $tmp3352;
    if (((panda$core$Bit) { target3350 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3354 = (panda$collections$Array*) malloc(40);
    $tmp3354->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3354->refCount.value = 1;
    panda$collections$Array$init($tmp3354);
    children3353 = $tmp3354;
    panda$collections$Array$add$panda$collections$Array$T(children3353, ((panda$core$Object*) target3350->target));
    if (((panda$core$Bit) { target3350->value != NULL }).value) {
    {
        panda$core$Bit $tmp3356 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(target3350->target->kind, ((panda$core$Int64) { 1016 }));
        PANDA_ASSERT($tmp3356.value);
        v3357 = ((org$pandalanguage$pandac$Variable*) target3350->target->payload);
        v3357->initialValue = target3350->value;
        panda$collections$Array$add$panda$collections$Array$T(children3353, ((panda$core$Object*) target3350->value));
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3358 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3358->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3358->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3358, ((panda$core$Int64) { 1021 }), p_d->offset, ((panda$collections$ListView*) children3353));
    return $tmp3358;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBreak$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_b) {
    panda$core$Bit found3361;
    panda$collections$Iterator* label$Iter3362;
    panda$core$String* label3374;
    panda$core$Bit $tmp3360 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_b->kind, ((panda$core$Int64) { 134 }));
    PANDA_ASSERT($tmp3360.value);
    if (((panda$core$Bit) { p_b->payload != NULL }).value) {
    {
        found3361 = ((panda$core$Bit) { false });
        {
            ITable* $tmp3363 = ((panda$collections$Iterable*) self->loops)->$class->itable;
            while ($tmp3363->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3363 = $tmp3363->next;
            }
            $fn3365 $tmp3364 = $tmp3363->methods[0];
            panda$collections$Iterator* $tmp3366 = $tmp3364(((panda$collections$Iterable*) self->loops));
            label$Iter3362 = $tmp3366;
            $l3367:;
            ITable* $tmp3369 = label$Iter3362->$class->itable;
            while ($tmp3369->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3369 = $tmp3369->next;
            }
            $fn3371 $tmp3370 = $tmp3369->methods[0];
            panda$core$Bit $tmp3372 = $tmp3370(label$Iter3362);
            panda$core$Bit $tmp3373 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3372);
            if (!$tmp3373.value) goto $l3368;
            {
                ITable* $tmp3375 = label$Iter3362->$class->itable;
                while ($tmp3375->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3375 = $tmp3375->next;
                }
                $fn3377 $tmp3376 = $tmp3375->methods[1];
                panda$core$Object* $tmp3378 = $tmp3376(label$Iter3362);
                label3374 = ((panda$core$String*) $tmp3378);
                bool $tmp3379 = ((panda$core$Bit) { label3374 != NULL }).value;
                if (!$tmp3379) goto $l3380;
                panda$core$Bit $tmp3381 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(label3374, ((panda$core$String*) p_b->payload));
                $tmp3379 = $tmp3381.value;
                $l3380:;
                panda$core$Bit $tmp3382 = { $tmp3379 };
                if ($tmp3382.value) {
                {
                    found3361 = ((panda$core$Bit) { true });
                    goto $l3368;
                }
                }
            }
            goto $l3367;
            $l3368:;
        }
        panda$core$Bit $tmp3383 = panda$core$Bit$$NOT$R$panda$core$Bit(found3361);
        if ($tmp3383.value) {
        {
            panda$core$String* $tmp3385 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3384, p_b->payload);
            panda$core$String* $tmp3387 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3385, &$s3386);
            panda$core$String* $tmp3389 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3388, p_b->payload);
            panda$core$String* $tmp3391 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3389, &$s3390);
            panda$core$String* $tmp3392 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3387, $tmp3391);
            org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_b->offset, $tmp3392);
        }
        }
    }
    }
    else {
    panda$core$Int64 $tmp3393 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loops);
    panda$core$Bit $tmp3394 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3393, ((panda$core$Int64) { 0 }));
    if ($tmp3394.value) {
    {
        org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_b->offset, &$s3395);
    }
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3396 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3396->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3396->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$core$String($tmp3396, ((panda$core$Int64) { 1006 }), p_b->offset, ((panda$core$String*) p_b->payload));
    return $tmp3396;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileContinue$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_c) {
    panda$core$Bit found3399;
    panda$collections$Iterator* label$Iter3400;
    panda$core$String* label3412;
    panda$core$Bit $tmp3398 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_c->kind, ((panda$core$Int64) { 135 }));
    PANDA_ASSERT($tmp3398.value);
    if (((panda$core$Bit) { p_c->payload != NULL }).value) {
    {
        found3399 = ((panda$core$Bit) { false });
        {
            ITable* $tmp3401 = ((panda$collections$Iterable*) self->loops)->$class->itable;
            while ($tmp3401->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3401 = $tmp3401->next;
            }
            $fn3403 $tmp3402 = $tmp3401->methods[0];
            panda$collections$Iterator* $tmp3404 = $tmp3402(((panda$collections$Iterable*) self->loops));
            label$Iter3400 = $tmp3404;
            $l3405:;
            ITable* $tmp3407 = label$Iter3400->$class->itable;
            while ($tmp3407->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3407 = $tmp3407->next;
            }
            $fn3409 $tmp3408 = $tmp3407->methods[0];
            panda$core$Bit $tmp3410 = $tmp3408(label$Iter3400);
            panda$core$Bit $tmp3411 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3410);
            if (!$tmp3411.value) goto $l3406;
            {
                ITable* $tmp3413 = label$Iter3400->$class->itable;
                while ($tmp3413->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3413 = $tmp3413->next;
                }
                $fn3415 $tmp3414 = $tmp3413->methods[1];
                panda$core$Object* $tmp3416 = $tmp3414(label$Iter3400);
                label3412 = ((panda$core$String*) $tmp3416);
                bool $tmp3417 = ((panda$core$Bit) { label3412 != NULL }).value;
                if (!$tmp3417) goto $l3418;
                panda$core$Bit $tmp3419 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(label3412, ((panda$core$String*) p_c->payload));
                $tmp3417 = $tmp3419.value;
                $l3418:;
                panda$core$Bit $tmp3420 = { $tmp3417 };
                if ($tmp3420.value) {
                {
                    found3399 = ((panda$core$Bit) { true });
                    goto $l3406;
                }
                }
            }
            goto $l3405;
            $l3406:;
        }
        panda$core$Bit $tmp3421 = panda$core$Bit$$NOT$R$panda$core$Bit(found3399);
        if ($tmp3421.value) {
        {
            panda$core$String* $tmp3423 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3422, p_c->payload);
            panda$core$String* $tmp3425 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3423, &$s3424);
            panda$core$String* $tmp3427 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3426, p_c->payload);
            panda$core$String* $tmp3429 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3427, &$s3428);
            panda$core$String* $tmp3430 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3425, $tmp3429);
            org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_c->offset, $tmp3430);
        }
        }
    }
    }
    else {
    panda$core$Int64 $tmp3431 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loops);
    panda$core$Bit $tmp3432 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3431, ((panda$core$Int64) { 0 }));
    if ($tmp3432.value) {
    {
        org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_c->offset, &$s3433);
    }
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3434 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3434->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3434->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$core$String($tmp3434, ((panda$core$Int64) { 1007 }), p_c->offset, ((panda$core$String*) p_c->payload));
    return $tmp3434;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileReturn$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_r) {
    org$pandalanguage$pandac$IRNode* value3443;
    panda$collections$Array* children3448;
    panda$core$Bit $tmp3436 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_r->kind, ((panda$core$Int64) { 136 }));
    PANDA_ASSERT($tmp3436.value);
    panda$core$Int64 $tmp3437 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_r->children);
    panda$core$Bit $tmp3438 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3437, ((panda$core$Int64) { 1 }));
    if ($tmp3438.value) {
    {
        panda$core$Object* $tmp3439 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
        org$pandalanguage$pandac$Type* $tmp3440 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp3441 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp3439)->returnType, $tmp3440);
        if ($tmp3441.value) {
        {
            org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_r->offset, &$s3442);
            return NULL;
        }
        }
        panda$core$Object* $tmp3444 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp3445 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3444));
        panda$core$Object* $tmp3446 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
        org$pandalanguage$pandac$IRNode* $tmp3447 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3445, ((org$pandalanguage$pandac$MethodDecl*) $tmp3446)->returnType);
        value3443 = $tmp3447;
        if (((panda$core$Bit) { value3443 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp3449 = (panda$collections$Array*) malloc(40);
        $tmp3449->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp3449->refCount.value = 1;
        panda$collections$Array$init($tmp3449);
        children3448 = $tmp3449;
        panda$collections$Array$add$panda$collections$Array$T(children3448, ((panda$core$Object*) value3443));
        org$pandalanguage$pandac$IRNode* $tmp3451 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp3451->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3451->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3451, ((panda$core$Int64) { 1008 }), p_r->offset, ((panda$collections$ListView*) children3448));
        return $tmp3451;
    }
    }
    panda$core$Int64 $tmp3453 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_r->children);
    panda$core$Bit $tmp3454 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3453, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp3454.value);
    panda$core$Object* $tmp3455 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
    org$pandalanguage$pandac$Type* $tmp3456 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp3457 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp3455)->returnType, $tmp3456);
    if ($tmp3457.value) {
    {
        org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_r->offset, &$s3458);
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3459 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3459->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3459->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64($tmp3459, ((panda$core$Int64) { 1008 }), p_r->offset);
    return $tmp3459;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileAssert$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_a) {
    org$pandalanguage$pandac$IRNode* test3469;
    org$pandalanguage$pandac$ClassDecl* bit3474;
    org$pandalanguage$pandac$Symbol* value3477;
    panda$collections$Array* fieldChildren3480;
    panda$collections$Array* children3486;
    org$pandalanguage$pandac$IRNode* msg3491;
    panda$core$Bit $tmp3461 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_a->kind, ((panda$core$Int64) { 123 }));
    PANDA_ASSERT($tmp3461.value);
    panda$core$Int64 $tmp3463 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp3464 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3463, ((panda$core$Int64) { 1 }));
    bool $tmp3462 = $tmp3464.value;
    if ($tmp3462) goto $l3465;
    panda$core$Int64 $tmp3466 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp3467 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3466, ((panda$core$Int64) { 2 }));
    $tmp3462 = $tmp3467.value;
    $l3465:;
    panda$core$Bit $tmp3468 = { $tmp3462 };
    PANDA_ASSERT($tmp3468.value);
    panda$core$Object* $tmp3470 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_a->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3471 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3470));
    test3469 = $tmp3471;
    if (((panda$core$Bit) { test3469 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$Type* $tmp3472 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp3473 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, test3469, $tmp3472);
    test3469 = $tmp3473;
    if (((panda$core$Bit) { test3469 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$Type* $tmp3475 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$ClassDecl* $tmp3476 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, $tmp3475);
    bit3474 = $tmp3476;
    PANDA_ASSERT(((panda$core$Bit) { bit3474 != NULL }).value);
    org$pandalanguage$pandac$Symbol* $tmp3479 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(bit3474->symbolTable, &$s3478);
    value3477 = $tmp3479;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self, ((org$pandalanguage$pandac$FieldDecl*) value3477));
    panda$collections$Array* $tmp3481 = (panda$collections$Array*) malloc(40);
    $tmp3481->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3481->refCount.value = 1;
    panda$collections$Array$init($tmp3481);
    fieldChildren3480 = $tmp3481;
    panda$collections$Array$add$panda$collections$Array$T(fieldChildren3480, ((panda$core$Object*) test3469));
    org$pandalanguage$pandac$IRNode* $tmp3483 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3483->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3483->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3485 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3483, ((panda$core$Int64) { 1026 }), p_a->offset, $tmp3485, ((panda$core$Object*) value3477), ((panda$collections$ListView*) fieldChildren3480));
    test3469 = $tmp3483;
    panda$collections$Array* $tmp3487 = (panda$collections$Array*) malloc(40);
    $tmp3487->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3487->refCount.value = 1;
    panda$collections$Array$init($tmp3487);
    children3486 = $tmp3487;
    panda$collections$Array$add$panda$collections$Array$T(children3486, ((panda$core$Object*) test3469));
    panda$core$Int64 $tmp3489 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp3490 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3489, ((panda$core$Int64) { 2 }));
    if ($tmp3490.value) {
    {
        panda$core$Object* $tmp3492 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_a->children, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$IRNode* $tmp3493 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3492));
        msg3491 = $tmp3493;
        if (((panda$core$Bit) { msg3491 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$Type* $tmp3494 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp3495 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, msg3491, $tmp3494);
        msg3491 = $tmp3495;
        if (((panda$core$Bit) { msg3491 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children3486, ((panda$core$Object*) msg3491));
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3496 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3496->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3496->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3496, ((panda$core$Int64) { 1034 }), p_a->offset, ((panda$collections$ListView*) children3486));
    return $tmp3496;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileVar$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_v) {
    panda$core$Int64 nodeKind3511;
    panda$core$Int64 varKind3512;
    panda$collections$Array* decls3513;
    panda$collections$Iterator* astDecl$Iter3516;
    org$pandalanguage$pandac$ASTNode* astDecl3528;
    org$pandalanguage$pandac$IRNode* decl3533;
    panda$core$Bit $tmp3501 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 130 }));
    bool $tmp3500 = $tmp3501.value;
    if ($tmp3500) goto $l3502;
    panda$core$Bit $tmp3503 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 131 }));
    $tmp3500 = $tmp3503.value;
    $l3502:;
    panda$core$Bit $tmp3504 = { $tmp3500 };
    bool $tmp3499 = $tmp3504.value;
    if ($tmp3499) goto $l3505;
    panda$core$Bit $tmp3506 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 133 }));
    $tmp3499 = $tmp3506.value;
    $l3505:;
    panda$core$Bit $tmp3507 = { $tmp3499 };
    bool $tmp3498 = $tmp3507.value;
    if ($tmp3498) goto $l3508;
    panda$core$Bit $tmp3509 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 132 }));
    $tmp3498 = $tmp3509.value;
    $l3508:;
    panda$core$Bit $tmp3510 = { $tmp3498 };
    PANDA_ASSERT($tmp3510.value);
    switch (p_v->kind.value) {
        case 130:
        {
            nodeKind3511 = ((panda$core$Int64) { 1017 });
            varKind3512 = ((panda$core$Int64) { 10000 });
        }
        break;
        case 131:
        {
            nodeKind3511 = ((panda$core$Int64) { 1018 });
            varKind3512 = ((panda$core$Int64) { 10001 });
        }
        break;
        case 132:
        {
            nodeKind3511 = ((panda$core$Int64) { 1019 });
            varKind3512 = ((panda$core$Int64) { 10002 });
        }
        break;
        case 133:
        {
            nodeKind3511 = ((panda$core$Int64) { 1020 });
            varKind3512 = ((panda$core$Int64) { 10003 });
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
    panda$collections$Array* $tmp3514 = (panda$collections$Array*) malloc(40);
    $tmp3514->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3514->refCount.value = 1;
    panda$collections$Array$init($tmp3514);
    decls3513 = $tmp3514;
    {
        ITable* $tmp3517 = ((panda$collections$Iterable*) p_v->children)->$class->itable;
        while ($tmp3517->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3517 = $tmp3517->next;
        }
        $fn3519 $tmp3518 = $tmp3517->methods[0];
        panda$collections$Iterator* $tmp3520 = $tmp3518(((panda$collections$Iterable*) p_v->children));
        astDecl$Iter3516 = $tmp3520;
        $l3521:;
        ITable* $tmp3523 = astDecl$Iter3516->$class->itable;
        while ($tmp3523->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3523 = $tmp3523->next;
        }
        $fn3525 $tmp3524 = $tmp3523->methods[0];
        panda$core$Bit $tmp3526 = $tmp3524(astDecl$Iter3516);
        panda$core$Bit $tmp3527 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3526);
        if (!$tmp3527.value) goto $l3522;
        {
            ITable* $tmp3529 = astDecl$Iter3516->$class->itable;
            while ($tmp3529->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3529 = $tmp3529->next;
            }
            $fn3531 $tmp3530 = $tmp3529->methods[1];
            panda$core$Object* $tmp3532 = $tmp3530(astDecl$Iter3516);
            astDecl3528 = ((org$pandalanguage$pandac$ASTNode*) $tmp3532);
            org$pandalanguage$pandac$IRNode* $tmp3534 = org$pandalanguage$pandac$Compiler$compileDeclaration$org$pandalanguage$pandac$ASTNode$panda$core$Int64$R$org$pandalanguage$pandac$IRNode$Q(self, astDecl3528, varKind3512);
            decl3533 = $tmp3534;
            if (((panda$core$Bit) { decl3533 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(decls3513, ((panda$core$Object*) decl3533));
        }
        goto $l3521;
        $l3522:;
    }
    org$pandalanguage$pandac$IRNode* $tmp3535 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3535->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3535->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3535, nodeKind3511, p_v->offset, ((panda$collections$ListView*) decls3513));
    return $tmp3535;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileWhenTest$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Variable* p_value, org$pandalanguage$pandac$ASTNode* p_test) {
    org$pandalanguage$pandac$IRNode* target3537;
    panda$collections$Array* callChildren3540;
    org$pandalanguage$pandac$IRNode* testValue3543;
    org$pandalanguage$pandac$IRNode* $tmp3538 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3538->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3538->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3538, ((panda$core$Int64) { 1016 }), p_test->offset, p_value->type, p_value);
    target3537 = $tmp3538;
    panda$collections$Array* $tmp3541 = (panda$collections$Array*) malloc(40);
    $tmp3541->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3541->refCount.value = 1;
    panda$collections$Array$init($tmp3541);
    callChildren3540 = $tmp3541;
    org$pandalanguage$pandac$IRNode* $tmp3544 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_test);
    testValue3543 = $tmp3544;
    if (((panda$core$Bit) { testValue3543 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(callChildren3540, ((panda$core$Object*) testValue3543));
    org$pandalanguage$pandac$IRNode* $tmp3546 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target3537, &$s3545, ((panda$collections$ListView*) callChildren3540));
    return $tmp3546;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileChainedIfWhen$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Variable* p_value, org$pandalanguage$pandac$ASTNode* p_w) {
    org$pandalanguage$pandac$IRNode* test3555;
    panda$core$Range$LTpanda$core$Int64$GT $tmp3559;
    org$pandalanguage$pandac$IRNode* nextTest3580;
    panda$collections$Array* callChildren3584;
    panda$collections$Array* statements3602;
    panda$core$Range$LTpanda$core$Int64$GT $tmp3605;
    org$pandalanguage$pandac$IRNode* statement3625;
    panda$collections$Array* children3640;
    panda$core$Bit $tmp3547 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_w->kind, ((panda$core$Int64) { 124 }));
    PANDA_ASSERT($tmp3547.value);
    panda$core$Int64 $tmp3548 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Bit $tmp3549 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp3548, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3549.value);
    panda$core$Object* $tmp3550 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp3551 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp3550)->kind, ((panda$core$Int64) { 128 }));
    PANDA_ASSERT($tmp3551.value);
    panda$core$Object* $tmp3552 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Int64 $tmp3553 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$ASTNode*) $tmp3552)->children);
    panda$core$Bit $tmp3554 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp3553, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3554.value);
    panda$core$Object* $tmp3556 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp3557 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$ASTNode*) $tmp3556)->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3558 = org$pandalanguage$pandac$Compiler$compileWhenTest$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_value, ((org$pandalanguage$pandac$ASTNode*) $tmp3557));
    test3555 = $tmp3558;
    if (((panda$core$Bit) { test3555 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Object* $tmp3560 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Int64 $tmp3561 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$ASTNode*) $tmp3560)->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp3559, ((panda$core$Int64) { 1 }), $tmp3561, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp3563 = $tmp3559.start.value;
    panda$core$Int64 i3562 = { $tmp3563 };
    int64_t $tmp3565 = $tmp3559.end.value;
    int64_t $tmp3566 = $tmp3559.step.value;
    bool $tmp3567 = $tmp3559.inclusive.value;
    bool $tmp3574 = $tmp3566 > 0;
    if ($tmp3574) goto $l3572; else goto $l3573;
    $l3572:;
    if ($tmp3567) goto $l3575; else goto $l3576;
    $l3575:;
    if ($tmp3563 <= $tmp3565) goto $l3568; else goto $l3570;
    $l3576:;
    if ($tmp3563 < $tmp3565) goto $l3568; else goto $l3570;
    $l3573:;
    if ($tmp3567) goto $l3577; else goto $l3578;
    $l3577:;
    if ($tmp3563 >= $tmp3565) goto $l3568; else goto $l3570;
    $l3578:;
    if ($tmp3563 > $tmp3565) goto $l3568; else goto $l3570;
    $l3568:;
    {
        panda$core$Object* $tmp3581 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3582 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$ASTNode*) $tmp3581)->children, i3562);
        org$pandalanguage$pandac$IRNode* $tmp3583 = org$pandalanguage$pandac$Compiler$compileWhenTest$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_value, ((org$pandalanguage$pandac$ASTNode*) $tmp3582));
        nextTest3580 = $tmp3583;
        if (((panda$core$Bit) { nextTest3580 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp3585 = (panda$collections$Array*) malloc(40);
        $tmp3585->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp3585->refCount.value = 1;
        panda$collections$Array$init($tmp3585);
        callChildren3584 = $tmp3585;
        panda$collections$Array$add$panda$collections$Array$T(callChildren3584, ((panda$core$Object*) nextTest3580));
        org$pandalanguage$pandac$IRNode* $tmp3588 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, test3555, &$s3587, ((panda$collections$ListView*) callChildren3584));
        test3555 = $tmp3588;
        if (((panda$core$Bit) { test3555 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    $l3571:;
    if ($tmp3574) goto $l3590; else goto $l3591;
    $l3590:;
    int64_t $tmp3592 = $tmp3565 - i3562.value;
    if ($tmp3567) goto $l3593; else goto $l3594;
    $l3593:;
    if ($tmp3592 >= $tmp3566) goto $l3589; else goto $l3570;
    $l3594:;
    if ($tmp3592 > $tmp3566) goto $l3589; else goto $l3570;
    $l3591:;
    int64_t $tmp3596 = i3562.value - $tmp3565;
    if ($tmp3567) goto $l3597; else goto $l3598;
    $l3597:;
    if ($tmp3596 >= -$tmp3566) goto $l3589; else goto $l3570;
    $l3598:;
    if ($tmp3596 > -$tmp3566) goto $l3589; else goto $l3570;
    $l3589:;
    i3562.value += $tmp3566;
    goto $l3568;
    $l3570:;
    org$pandalanguage$pandac$SymbolTable* $tmp3600 = (org$pandalanguage$pandac$SymbolTable*) malloc(40);
    $tmp3600->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp3600->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp3600, self->symbolTable);
    self->symbolTable = $tmp3600;
    panda$collections$Array* $tmp3603 = (panda$collections$Array*) malloc(40);
    $tmp3603->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3603->refCount.value = 1;
    panda$collections$Array$init($tmp3603);
    statements3602 = $tmp3603;
    panda$core$Int64 $tmp3606 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp3605, ((panda$core$Int64) { 1 }), $tmp3606, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp3608 = $tmp3605.start.value;
    panda$core$Int64 i3607 = { $tmp3608 };
    int64_t $tmp3610 = $tmp3605.end.value;
    int64_t $tmp3611 = $tmp3605.step.value;
    bool $tmp3612 = $tmp3605.inclusive.value;
    bool $tmp3619 = $tmp3611 > 0;
    if ($tmp3619) goto $l3617; else goto $l3618;
    $l3617:;
    if ($tmp3612) goto $l3620; else goto $l3621;
    $l3620:;
    if ($tmp3608 <= $tmp3610) goto $l3613; else goto $l3615;
    $l3621:;
    if ($tmp3608 < $tmp3610) goto $l3613; else goto $l3615;
    $l3618:;
    if ($tmp3612) goto $l3622; else goto $l3623;
    $l3622:;
    if ($tmp3608 >= $tmp3610) goto $l3613; else goto $l3615;
    $l3623:;
    if ($tmp3608 > $tmp3610) goto $l3613; else goto $l3615;
    $l3613:;
    {
        panda$core$Object* $tmp3626 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, i3607);
        org$pandalanguage$pandac$IRNode* $tmp3627 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3626));
        statement3625 = $tmp3627;
        if (((panda$core$Bit) { statement3625 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(statements3602, ((panda$core$Object*) statement3625));
    }
    $l3616:;
    if ($tmp3619) goto $l3629; else goto $l3630;
    $l3629:;
    int64_t $tmp3631 = $tmp3610 - i3607.value;
    if ($tmp3612) goto $l3632; else goto $l3633;
    $l3632:;
    if ($tmp3631 >= $tmp3611) goto $l3628; else goto $l3615;
    $l3633:;
    if ($tmp3631 > $tmp3611) goto $l3628; else goto $l3615;
    $l3630:;
    int64_t $tmp3635 = i3607.value - $tmp3610;
    if ($tmp3612) goto $l3636; else goto $l3637;
    $l3636:;
    if ($tmp3635 >= -$tmp3611) goto $l3628; else goto $l3615;
    $l3637:;
    if ($tmp3635 > -$tmp3611) goto $l3628; else goto $l3615;
    $l3628:;
    i3607.value += $tmp3611;
    goto $l3613;
    $l3615:;
    panda$core$Object* $tmp3639 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->symbolTable->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp3639);
    panda$collections$Array* $tmp3641 = (panda$collections$Array*) malloc(40);
    $tmp3641->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3641->refCount.value = 1;
    panda$collections$Array$init($tmp3641);
    children3640 = $tmp3641;
    panda$collections$Array$add$panda$collections$Array$T(children3640, ((panda$core$Object*) test3555));
    org$pandalanguage$pandac$IRNode* $tmp3643 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3643->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3643->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3643, ((panda$core$Int64) { 1000 }), p_w->offset, ((panda$collections$ListView*) statements3602));
    panda$collections$Array$add$panda$collections$Array$T(children3640, ((panda$core$Object*) $tmp3643));
    org$pandalanguage$pandac$IRNode* $tmp3645 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3645->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3645->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3645, ((panda$core$Int64) { 1012 }), p_w->offset, ((panda$collections$ListView*) children3640));
    return $tmp3645;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileChainedIfMatch$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_m, org$pandalanguage$pandac$IRNode* p_value) {
    panda$collections$Array* children3647;
    org$pandalanguage$pandac$Variable* valueVar3650;
    panda$collections$Array* declChildren3657;
    panda$collections$Array* varChildren3662;
    panda$core$Range$LTpanda$core$Int64$GT $tmp3669;
    org$pandalanguage$pandac$ASTNode* c3689;
    org$pandalanguage$pandac$IRNode* w3691;
    panda$collections$Array* statements3693;
    panda$collections$Iterator* astStatement$Iter3696;
    org$pandalanguage$pandac$ASTNode* astStatement3708;
    org$pandalanguage$pandac$IRNode* stmt3713;
    panda$core$Range$LTpanda$core$Int64$GT $tmp3728;
    panda$collections$Array* $tmp3648 = (panda$collections$Array*) malloc(40);
    $tmp3648->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3648->refCount.value = 1;
    panda$collections$Array$init($tmp3648);
    children3647 = $tmp3648;
    org$pandalanguage$pandac$Variable* $tmp3651 = (org$pandalanguage$pandac$Variable*) malloc(72);
    $tmp3651->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
    $tmp3651->refCount.value = 1;
    panda$core$String* $tmp3654 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3653, ((panda$core$Object*) wrap_panda$core$Int64(p_m->offset)));
    panda$core$String* $tmp3656 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3654, &$s3655);
    org$pandalanguage$pandac$Variable$init$panda$core$Int64$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type($tmp3651, p_m->offset, ((panda$core$Int64) { 10001 }), $tmp3656, p_value->type);
    valueVar3650 = $tmp3651;
    panda$collections$Array* $tmp3658 = (panda$collections$Array*) malloc(40);
    $tmp3658->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3658->refCount.value = 1;
    panda$collections$Array$init($tmp3658);
    declChildren3657 = $tmp3658;
    org$pandalanguage$pandac$IRNode* $tmp3660 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3660->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3660->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3660, ((panda$core$Int64) { 1016 }), p_value->offset, valueVar3650->type, valueVar3650);
    panda$collections$Array$add$panda$collections$Array$T(declChildren3657, ((panda$core$Object*) $tmp3660));
    panda$collections$Array$add$panda$collections$Array$T(declChildren3657, ((panda$core$Object*) p_value));
    panda$collections$Array* $tmp3663 = (panda$collections$Array*) malloc(40);
    $tmp3663->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3663->refCount.value = 1;
    panda$collections$Array$init($tmp3663);
    varChildren3662 = $tmp3663;
    org$pandalanguage$pandac$IRNode* $tmp3665 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3665->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3665->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3665, ((panda$core$Int64) { 1021 }), ((org$pandalanguage$pandac$Symbol*) valueVar3650)->offset, ((panda$collections$ListView*) declChildren3657));
    panda$collections$Array$add$panda$collections$Array$T(varChildren3662, ((panda$core$Object*) $tmp3665));
    org$pandalanguage$pandac$IRNode* $tmp3667 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3667->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3667->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3667, ((panda$core$Int64) { 1018 }), ((org$pandalanguage$pandac$Symbol*) valueVar3650)->offset, ((panda$collections$ListView*) varChildren3662));
    panda$collections$Array$add$panda$collections$Array$T(children3647, ((panda$core$Object*) $tmp3667));
    panda$core$Int64 $tmp3670 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp3669, ((panda$core$Int64) { 1 }), $tmp3670, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp3672 = $tmp3669.start.value;
    panda$core$Int64 i3671 = { $tmp3672 };
    int64_t $tmp3674 = $tmp3669.end.value;
    int64_t $tmp3675 = $tmp3669.step.value;
    bool $tmp3676 = $tmp3669.inclusive.value;
    bool $tmp3683 = $tmp3675 > 0;
    if ($tmp3683) goto $l3681; else goto $l3682;
    $l3681:;
    if ($tmp3676) goto $l3684; else goto $l3685;
    $l3684:;
    if ($tmp3672 <= $tmp3674) goto $l3677; else goto $l3679;
    $l3685:;
    if ($tmp3672 < $tmp3674) goto $l3677; else goto $l3679;
    $l3682:;
    if ($tmp3676) goto $l3686; else goto $l3687;
    $l3686:;
    if ($tmp3672 >= $tmp3674) goto $l3677; else goto $l3679;
    $l3687:;
    if ($tmp3672 > $tmp3674) goto $l3677; else goto $l3679;
    $l3677:;
    {
        panda$core$Object* $tmp3690 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, i3671);
        c3689 = ((org$pandalanguage$pandac$ASTNode*) $tmp3690);
        switch (c3689->kind.value) {
            case 124:
            {
                org$pandalanguage$pandac$IRNode* $tmp3692 = org$pandalanguage$pandac$Compiler$compileChainedIfWhen$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, valueVar3650, c3689);
                w3691 = $tmp3692;
                if (((panda$core$Bit) { w3691 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children3647, ((panda$core$Object*) w3691));
            }
            break;
            case 127:
            {
                panda$collections$Array* $tmp3694 = (panda$collections$Array*) malloc(40);
                $tmp3694->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp3694->refCount.value = 1;
                panda$collections$Array$init($tmp3694);
                statements3693 = $tmp3694;
                {
                    ITable* $tmp3697 = ((panda$collections$Iterable*) c3689->children)->$class->itable;
                    while ($tmp3697->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp3697 = $tmp3697->next;
                    }
                    $fn3699 $tmp3698 = $tmp3697->methods[0];
                    panda$collections$Iterator* $tmp3700 = $tmp3698(((panda$collections$Iterable*) c3689->children));
                    astStatement$Iter3696 = $tmp3700;
                    $l3701:;
                    ITable* $tmp3703 = astStatement$Iter3696->$class->itable;
                    while ($tmp3703->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp3703 = $tmp3703->next;
                    }
                    $fn3705 $tmp3704 = $tmp3703->methods[0];
                    panda$core$Bit $tmp3706 = $tmp3704(astStatement$Iter3696);
                    panda$core$Bit $tmp3707 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3706);
                    if (!$tmp3707.value) goto $l3702;
                    {
                        ITable* $tmp3709 = astStatement$Iter3696->$class->itable;
                        while ($tmp3709->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp3709 = $tmp3709->next;
                        }
                        $fn3711 $tmp3710 = $tmp3709->methods[1];
                        panda$core$Object* $tmp3712 = $tmp3710(astStatement$Iter3696);
                        astStatement3708 = ((org$pandalanguage$pandac$ASTNode*) $tmp3712);
                        org$pandalanguage$pandac$IRNode* $tmp3714 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, astStatement3708);
                        stmt3713 = $tmp3714;
                        if (((panda$core$Bit) { stmt3713 == NULL }).value) {
                        {
                            return NULL;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(statements3693, ((panda$core$Object*) stmt3713));
                    }
                    goto $l3701;
                    $l3702:;
                }
                org$pandalanguage$pandac$IRNode* $tmp3715 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp3715->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp3715->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3715, ((panda$core$Int64) { 1000 }), c3689->offset, ((panda$collections$ListView*) statements3693));
                panda$collections$Array$add$panda$collections$Array$T(children3647, ((panda$core$Object*) $tmp3715));
            }
            break;
            default:
            {
                PANDA_ASSERT(((panda$core$Bit) { false }).value);
            }
        }
    }
    $l3680:;
    if ($tmp3683) goto $l3718; else goto $l3719;
    $l3718:;
    int64_t $tmp3720 = $tmp3674 - i3671.value;
    if ($tmp3676) goto $l3721; else goto $l3722;
    $l3721:;
    if ($tmp3720 >= $tmp3675) goto $l3717; else goto $l3679;
    $l3722:;
    if ($tmp3720 > $tmp3675) goto $l3717; else goto $l3679;
    $l3719:;
    int64_t $tmp3724 = i3671.value - $tmp3674;
    if ($tmp3676) goto $l3725; else goto $l3726;
    $l3725:;
    if ($tmp3724 >= -$tmp3675) goto $l3717; else goto $l3679;
    $l3726:;
    if ($tmp3724 > -$tmp3675) goto $l3717; else goto $l3679;
    $l3717:;
    i3671.value += $tmp3675;
    goto $l3677;
    $l3679:;
    panda$core$Int64 $tmp3729 = panda$collections$Array$get_count$R$panda$core$Int64(children3647);
    panda$core$Int64 $tmp3730 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp3729, ((panda$core$Int64) { 1 }));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp3728, $tmp3730, ((panda$core$Int64) { 1 }), ((panda$core$Int64$nullable) { ((panda$core$Int64) { -1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp3732 = $tmp3728.start.value;
    panda$core$Int64 i3731 = { $tmp3732 };
    int64_t $tmp3734 = $tmp3728.end.value;
    int64_t $tmp3735 = $tmp3728.step.value;
    bool $tmp3736 = $tmp3728.inclusive.value;
    bool $tmp3743 = $tmp3735 > 0;
    if ($tmp3743) goto $l3741; else goto $l3742;
    $l3741:;
    if ($tmp3736) goto $l3744; else goto $l3745;
    $l3744:;
    if ($tmp3732 <= $tmp3734) goto $l3737; else goto $l3739;
    $l3745:;
    if ($tmp3732 < $tmp3734) goto $l3737; else goto $l3739;
    $l3742:;
    if ($tmp3736) goto $l3746; else goto $l3747;
    $l3746:;
    if ($tmp3732 >= $tmp3734) goto $l3737; else goto $l3739;
    $l3747:;
    if ($tmp3732 > $tmp3734) goto $l3737; else goto $l3739;
    $l3737:;
    {
        panda$core$Int64 $tmp3749 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i3731, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp3750 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children3647, $tmp3749);
        panda$core$Bit $tmp3751 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp3750)->kind, ((panda$core$Int64) { 1012 }));
        PANDA_ASSERT($tmp3751.value);
        panda$core$Int64 $tmp3752 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i3731, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp3753 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children3647, $tmp3752);
        panda$core$Int64 $tmp3754 = panda$collections$Array$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp3753)->children);
        panda$core$Bit $tmp3755 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3754, ((panda$core$Int64) { 2 }));
        PANDA_ASSERT($tmp3755.value);
        panda$core$Int64 $tmp3756 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i3731, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp3757 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children3647, $tmp3756);
        panda$core$Object* $tmp3758 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children3647, i3731);
        panda$collections$Array$add$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp3757)->children, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp3758)));
        panda$core$Int64 $tmp3759 = panda$collections$Array$get_count$R$panda$core$Int64(children3647);
        panda$core$Int64 $tmp3760 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp3759, ((panda$core$Int64) { 1 }));
        panda$collections$Array$removeIndex$panda$core$Int64(children3647, $tmp3760);
    }
    $l3740:;
    if ($tmp3743) goto $l3762; else goto $l3763;
    $l3762:;
    int64_t $tmp3764 = $tmp3734 - i3731.value;
    if ($tmp3736) goto $l3765; else goto $l3766;
    $l3765:;
    if ($tmp3764 >= $tmp3735) goto $l3761; else goto $l3739;
    $l3766:;
    if ($tmp3764 > $tmp3735) goto $l3761; else goto $l3739;
    $l3763:;
    int64_t $tmp3768 = i3731.value - $tmp3734;
    if ($tmp3736) goto $l3769; else goto $l3770;
    $l3769:;
    if ($tmp3768 >= -$tmp3735) goto $l3761; else goto $l3739;
    $l3770:;
    if ($tmp3768 > -$tmp3735) goto $l3761; else goto $l3739;
    $l3761:;
    i3731.value += $tmp3735;
    goto $l3737;
    $l3739:;
    org$pandalanguage$pandac$IRNode* $tmp3772 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3772->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3772->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3772, ((panda$core$Int64) { 1000 }), p_m->offset, ((panda$collections$ListView*) children3647));
    return $tmp3772;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileWhen$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type, org$pandalanguage$pandac$ASTNode* p_w) {
    panda$collections$Array* children3782;
    panda$collections$Iterator* expr$Iter3785;
    org$pandalanguage$pandac$ASTNode* expr3798;
    org$pandalanguage$pandac$IRNode* compiled3803;
    panda$collections$Array* statements3808;
    panda$core$Range$LTpanda$core$Int64$GT $tmp3811;
    org$pandalanguage$pandac$IRNode* statement3831;
    panda$core$Bit $tmp3774 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_w->kind, ((panda$core$Int64) { 124 }));
    PANDA_ASSERT($tmp3774.value);
    panda$core$Int64 $tmp3775 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Bit $tmp3776 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp3775, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3776.value);
    panda$core$Object* $tmp3777 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp3778 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp3777)->kind, ((panda$core$Int64) { 128 }));
    PANDA_ASSERT($tmp3778.value);
    panda$core$Object* $tmp3779 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Int64 $tmp3780 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$ASTNode*) $tmp3779)->children);
    panda$core$Bit $tmp3781 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp3780, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3781.value);
    panda$collections$Array* $tmp3783 = (panda$collections$Array*) malloc(40);
    $tmp3783->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3783->refCount.value = 1;
    panda$collections$Array$init($tmp3783);
    children3782 = $tmp3783;
    {
        panda$core$Object* $tmp3786 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
        ITable* $tmp3787 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp3786)->children)->$class->itable;
        while ($tmp3787->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3787 = $tmp3787->next;
        }
        $fn3789 $tmp3788 = $tmp3787->methods[0];
        panda$collections$Iterator* $tmp3790 = $tmp3788(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp3786)->children));
        expr$Iter3785 = $tmp3790;
        $l3791:;
        ITable* $tmp3793 = expr$Iter3785->$class->itable;
        while ($tmp3793->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3793 = $tmp3793->next;
        }
        $fn3795 $tmp3794 = $tmp3793->methods[0];
        panda$core$Bit $tmp3796 = $tmp3794(expr$Iter3785);
        panda$core$Bit $tmp3797 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3796);
        if (!$tmp3797.value) goto $l3792;
        {
            ITable* $tmp3799 = expr$Iter3785->$class->itable;
            while ($tmp3799->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3799 = $tmp3799->next;
            }
            $fn3801 $tmp3800 = $tmp3799->methods[1];
            panda$core$Object* $tmp3802 = $tmp3800(expr$Iter3785);
            expr3798 = ((org$pandalanguage$pandac$ASTNode*) $tmp3802);
            org$pandalanguage$pandac$IRNode* $tmp3804 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, expr3798);
            org$pandalanguage$pandac$IRNode* $tmp3805 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3804, p_type);
            compiled3803 = $tmp3805;
            if (((panda$core$Bit) { compiled3803 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children3782, ((panda$core$Object*) compiled3803));
        }
        goto $l3791;
        $l3792:;
    }
    org$pandalanguage$pandac$SymbolTable* $tmp3806 = (org$pandalanguage$pandac$SymbolTable*) malloc(40);
    $tmp3806->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp3806->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp3806, self->symbolTable);
    self->symbolTable = $tmp3806;
    panda$collections$Array* $tmp3809 = (panda$collections$Array*) malloc(40);
    $tmp3809->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3809->refCount.value = 1;
    panda$collections$Array$init($tmp3809);
    statements3808 = $tmp3809;
    panda$core$Int64 $tmp3812 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp3811, ((panda$core$Int64) { 1 }), $tmp3812, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp3814 = $tmp3811.start.value;
    panda$core$Int64 i3813 = { $tmp3814 };
    int64_t $tmp3816 = $tmp3811.end.value;
    int64_t $tmp3817 = $tmp3811.step.value;
    bool $tmp3818 = $tmp3811.inclusive.value;
    bool $tmp3825 = $tmp3817 > 0;
    if ($tmp3825) goto $l3823; else goto $l3824;
    $l3823:;
    if ($tmp3818) goto $l3826; else goto $l3827;
    $l3826:;
    if ($tmp3814 <= $tmp3816) goto $l3819; else goto $l3821;
    $l3827:;
    if ($tmp3814 < $tmp3816) goto $l3819; else goto $l3821;
    $l3824:;
    if ($tmp3818) goto $l3828; else goto $l3829;
    $l3828:;
    if ($tmp3814 >= $tmp3816) goto $l3819; else goto $l3821;
    $l3829:;
    if ($tmp3814 > $tmp3816) goto $l3819; else goto $l3821;
    $l3819:;
    {
        panda$core$Object* $tmp3832 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, i3813);
        org$pandalanguage$pandac$IRNode* $tmp3833 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3832));
        statement3831 = $tmp3833;
        if (((panda$core$Bit) { statement3831 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(statements3808, ((panda$core$Object*) statement3831));
    }
    $l3822:;
    if ($tmp3825) goto $l3835; else goto $l3836;
    $l3835:;
    int64_t $tmp3837 = $tmp3816 - i3813.value;
    if ($tmp3818) goto $l3838; else goto $l3839;
    $l3838:;
    if ($tmp3837 >= $tmp3817) goto $l3834; else goto $l3821;
    $l3839:;
    if ($tmp3837 > $tmp3817) goto $l3834; else goto $l3821;
    $l3836:;
    int64_t $tmp3841 = i3813.value - $tmp3816;
    if ($tmp3818) goto $l3842; else goto $l3843;
    $l3842:;
    if ($tmp3841 >= -$tmp3817) goto $l3834; else goto $l3821;
    $l3843:;
    if ($tmp3841 > -$tmp3817) goto $l3834; else goto $l3821;
    $l3834:;
    i3813.value += $tmp3817;
    goto $l3819;
    $l3821:;
    panda$core$Object* $tmp3845 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->symbolTable->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp3845);
    org$pandalanguage$pandac$IRNode* $tmp3846 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3846->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3846->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3846, ((panda$core$Int64) { 1000 }), p_w->offset, ((panda$collections$ListView*) statements3808));
    panda$collections$Array$add$panda$collections$Array$T(children3782, ((panda$core$Object*) $tmp3846));
    org$pandalanguage$pandac$IRNode* $tmp3848 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3848->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3848->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3848, ((panda$core$Int64) { 1042 }), p_w->offset, ((panda$collections$ListView*) children3782));
    return $tmp3848;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileOtherwise$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_o) {
    panda$collections$Array* children3851;
    panda$collections$Array* statements3856;
    panda$collections$Iterator* s$Iter3859;
    org$pandalanguage$pandac$ASTNode* s3871;
    org$pandalanguage$pandac$IRNode* statement3876;
    panda$core$Bit $tmp3850 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_o->kind, ((panda$core$Int64) { 127 }));
    PANDA_ASSERT($tmp3850.value);
    panda$collections$Array* $tmp3852 = (panda$collections$Array*) malloc(40);
    $tmp3852->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3852->refCount.value = 1;
    panda$collections$Array$init($tmp3852);
    children3851 = $tmp3852;
    org$pandalanguage$pandac$SymbolTable* $tmp3854 = (org$pandalanguage$pandac$SymbolTable*) malloc(40);
    $tmp3854->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp3854->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp3854, self->symbolTable);
    self->symbolTable = $tmp3854;
    panda$collections$Array* $tmp3857 = (panda$collections$Array*) malloc(40);
    $tmp3857->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3857->refCount.value = 1;
    panda$collections$Array$init($tmp3857);
    statements3856 = $tmp3857;
    {
        ITable* $tmp3860 = ((panda$collections$Iterable*) p_o->children)->$class->itable;
        while ($tmp3860->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3860 = $tmp3860->next;
        }
        $fn3862 $tmp3861 = $tmp3860->methods[0];
        panda$collections$Iterator* $tmp3863 = $tmp3861(((panda$collections$Iterable*) p_o->children));
        s$Iter3859 = $tmp3863;
        $l3864:;
        ITable* $tmp3866 = s$Iter3859->$class->itable;
        while ($tmp3866->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3866 = $tmp3866->next;
        }
        $fn3868 $tmp3867 = $tmp3866->methods[0];
        panda$core$Bit $tmp3869 = $tmp3867(s$Iter3859);
        panda$core$Bit $tmp3870 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3869);
        if (!$tmp3870.value) goto $l3865;
        {
            ITable* $tmp3872 = s$Iter3859->$class->itable;
            while ($tmp3872->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3872 = $tmp3872->next;
            }
            $fn3874 $tmp3873 = $tmp3872->methods[1];
            panda$core$Object* $tmp3875 = $tmp3873(s$Iter3859);
            s3871 = ((org$pandalanguage$pandac$ASTNode*) $tmp3875);
            org$pandalanguage$pandac$IRNode* $tmp3877 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, s3871);
            statement3876 = $tmp3877;
            if (((panda$core$Bit) { statement3876 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(statements3856, ((panda$core$Object*) statement3876));
        }
        goto $l3864;
        $l3865:;
    }
    panda$core$Object* $tmp3878 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->symbolTable->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp3878);
    org$pandalanguage$pandac$IRNode* $tmp3879 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3879->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3879->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3879, ((panda$core$Int64) { 1000 }), p_o->offset, ((panda$collections$ListView*) statements3856));
    panda$collections$Array$add$panda$collections$Array$T(children3851, ((panda$core$Object*) $tmp3879));
    org$pandalanguage$pandac$IRNode* $tmp3881 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3881->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3881->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3881, ((panda$core$Int64) { 1043 }), p_o->offset, ((panda$collections$ListView*) children3851));
    return $tmp3881;
}
panda$core$Bit org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    org$pandalanguage$pandac$FieldDecl* f3890;
    org$pandalanguage$pandac$Variable* v3899;
    switch (p_expr->kind.value) {
        case 1004:
        {
            return ((panda$core$Bit) { true });
        }
        break;
        case 1010:
        {
            panda$core$Bit $tmp3884 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_expr->type);
            bool $tmp3883 = $tmp3884.value;
            if (!$tmp3883) goto $l3885;
            panda$core$Object* $tmp3886 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp3887 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp3886)->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp3888 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp3887));
            $tmp3883 = $tmp3888.value;
            $l3885:;
            panda$core$Bit $tmp3889 = { $tmp3883 };
            return $tmp3889;
        }
        break;
        case 1026:
        {
            f3890 = ((org$pandalanguage$pandac$FieldDecl*) p_expr->payload);
            PANDA_ASSERT(f3890->resolved.value);
            panda$core$Bit $tmp3893 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(f3890->fieldKind, ((panda$core$Int64) { 10002 }));
            bool $tmp3892 = $tmp3893.value;
            if (!$tmp3892) goto $l3894;
            $tmp3892 = ((panda$core$Bit) { f3890->value != NULL }).value;
            $l3894:;
            panda$core$Bit $tmp3895 = { $tmp3892 };
            bool $tmp3891 = $tmp3895.value;
            if (!$tmp3891) goto $l3896;
            panda$core$Bit $tmp3897 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, f3890->value);
            $tmp3891 = $tmp3897.value;
            $l3896:;
            panda$core$Bit $tmp3898 = { $tmp3891 };
            return $tmp3898;
        }
        break;
        case 1016:
        {
            v3899 = ((org$pandalanguage$pandac$Variable*) p_expr->payload);
            panda$core$Bit $tmp3901 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(v3899->varKind, ((panda$core$Int64) { 10001 }));
            bool $tmp3900 = $tmp3901.value;
            if ($tmp3900) goto $l3902;
            panda$core$Bit $tmp3905 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(v3899->varKind, ((panda$core$Int64) { 10002 }));
            bool $tmp3904 = $tmp3905.value;
            if (!$tmp3904) goto $l3906;
            $tmp3904 = ((panda$core$Bit) { v3899->initialValue != NULL }).value;
            $l3906:;
            panda$core$Bit $tmp3907 = { $tmp3904 };
            bool $tmp3903 = $tmp3907.value;
            if (!$tmp3903) goto $l3908;
            panda$core$Bit $tmp3909 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, v3899->initialValue);
            $tmp3903 = $tmp3909.value;
            $l3908:;
            panda$core$Bit $tmp3910 = { $tmp3903 };
            $tmp3900 = $tmp3910.value;
            $l3902:;
            panda$core$Bit $tmp3911 = { $tmp3900 };
            return $tmp3911;
        }
        break;
        default:
        {
            return ((panda$core$Bit) { false });
        }
    }
}
panda$core$UInt64 org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    org$pandalanguage$pandac$FieldDecl* f3916;
    org$pandalanguage$pandac$Variable* v3918;
    panda$core$Bit $tmp3912 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, p_expr);
    PANDA_ASSERT($tmp3912.value);
    switch (p_expr->kind.value) {
        case 1004:
        {
            return ((panda$core$UInt64$wrapper*) p_expr->payload)->value;
        }
        break;
        case 1010:
        {
            panda$core$Object* $tmp3913 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp3914 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp3913)->children, ((panda$core$Int64) { 0 }));
            panda$core$UInt64 $tmp3915 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self, ((org$pandalanguage$pandac$IRNode*) $tmp3914));
            return $tmp3915;
        }
        break;
        case 1026:
        {
            f3916 = ((org$pandalanguage$pandac$FieldDecl*) p_expr->payload);
            panda$core$UInt64 $tmp3917 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self, f3916->value);
            return $tmp3917;
        }
        break;
        case 1016:
        {
            v3918 = ((org$pandalanguage$pandac$Variable*) p_expr->payload);
            panda$core$UInt64 $tmp3919 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self, v3918->initialValue);
            return $tmp3919;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileMatch$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_m) {
    org$pandalanguage$pandac$IRNode* value3923;
    panda$collections$Array* children3930;
    panda$collections$Iterator* rawWhen$Iter3933;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp3934;
    org$pandalanguage$pandac$ASTNode* rawWhen3947;
    org$pandalanguage$pandac$IRNode* o3953;
    org$pandalanguage$pandac$IRNode* w3955;
    panda$core$Bit $tmp3920 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->kind, ((panda$core$Int64) { 125 }));
    PANDA_ASSERT($tmp3920.value);
    panda$core$Int64 $tmp3921 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
    panda$core$Bit $tmp3922 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp3921, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3922.value);
    panda$core$Object* $tmp3924 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3925 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3924));
    org$pandalanguage$pandac$IRNode* $tmp3926 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3925);
    value3923 = $tmp3926;
    if (((panda$core$Bit) { value3923 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp3927 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(value3923->type);
    panda$core$Bit $tmp3928 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3927);
    if ($tmp3928.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3929 = org$pandalanguage$pandac$Compiler$compileChainedIfMatch$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_m, value3923);
        return $tmp3929;
    }
    }
    panda$collections$Array* $tmp3931 = (panda$collections$Array*) malloc(40);
    $tmp3931->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3931->refCount.value = 1;
    panda$collections$Array$init($tmp3931);
    children3930 = $tmp3931;
    panda$collections$Array$add$panda$collections$Array$T(children3930, ((panda$core$Object*) value3923));
    {
        panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp3934, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
        panda$collections$ImmutableArray* $tmp3935 = panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(p_m->children, $tmp3934);
        ITable* $tmp3936 = ((panda$collections$Iterable*) $tmp3935)->$class->itable;
        while ($tmp3936->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3936 = $tmp3936->next;
        }
        $fn3938 $tmp3937 = $tmp3936->methods[0];
        panda$collections$Iterator* $tmp3939 = $tmp3937(((panda$collections$Iterable*) $tmp3935));
        rawWhen$Iter3933 = $tmp3939;
        $l3940:;
        ITable* $tmp3942 = rawWhen$Iter3933->$class->itable;
        while ($tmp3942->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3942 = $tmp3942->next;
        }
        $fn3944 $tmp3943 = $tmp3942->methods[0];
        panda$core$Bit $tmp3945 = $tmp3943(rawWhen$Iter3933);
        panda$core$Bit $tmp3946 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3945);
        if (!$tmp3946.value) goto $l3941;
        {
            ITable* $tmp3948 = rawWhen$Iter3933->$class->itable;
            while ($tmp3948->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3948 = $tmp3948->next;
            }
            $fn3950 $tmp3949 = $tmp3948->methods[1];
            panda$core$Object* $tmp3951 = $tmp3949(rawWhen$Iter3933);
            rawWhen3947 = ((org$pandalanguage$pandac$ASTNode*) $tmp3951);
            panda$core$Bit $tmp3952 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(rawWhen3947->kind, ((panda$core$Int64) { 127 }));
            if ($tmp3952.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp3954 = org$pandalanguage$pandac$Compiler$compileOtherwise$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, rawWhen3947);
                o3953 = $tmp3954;
                if (((panda$core$Bit) { o3953 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children3930, ((panda$core$Object*) o3953));
                goto $l3940;
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp3956 = org$pandalanguage$pandac$Compiler$compileWhen$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, value3923->type, rawWhen3947);
            w3955 = $tmp3956;
            if (((panda$core$Bit) { w3955 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$Object* $tmp3957 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(w3955->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp3958 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp3957));
            panda$core$Bit $tmp3959 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3958);
            if ($tmp3959.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp3960 = org$pandalanguage$pandac$Compiler$compileChainedIfMatch$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_m, value3923);
                return $tmp3960;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children3930, ((panda$core$Object*) w3955));
        }
        goto $l3940;
        $l3941:;
    }
    org$pandalanguage$pandac$IRNode* $tmp3961 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3961->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3961->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3961, ((panda$core$Int64) { 1042 }), p_m->offset, ((panda$collections$ListView*) children3930));
    return $tmp3961;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$IRNode* result3976;
    switch (p_s->kind.value) {
        case 123:
        {
            org$pandalanguage$pandac$IRNode* $tmp3963 = org$pandalanguage$pandac$Compiler$compileAssert$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp3963;
        }
        break;
        case 103:
        {
            org$pandalanguage$pandac$IRNode* $tmp3964 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            org$pandalanguage$pandac$IRNode* $tmp3965 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3964);
            return $tmp3965;
        }
        break;
        case 126:
        {
            org$pandalanguage$pandac$IRNode* $tmp3966 = org$pandalanguage$pandac$Compiler$compileBlock$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp3966;
        }
        break;
        case 118:
        {
            org$pandalanguage$pandac$IRNode* $tmp3967 = org$pandalanguage$pandac$Compiler$compileIf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp3967;
        }
        break;
        case 119:
        {
            org$pandalanguage$pandac$IRNode* $tmp3968 = org$pandalanguage$pandac$Compiler$compileFor$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp3968;
        }
        break;
        case 121:
        {
            org$pandalanguage$pandac$IRNode* $tmp3969 = org$pandalanguage$pandac$Compiler$compileWhile$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp3969;
        }
        break;
        case 120:
        {
            org$pandalanguage$pandac$IRNode* $tmp3970 = org$pandalanguage$pandac$Compiler$compileDo$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp3970;
        }
        break;
        case 122:
        {
            org$pandalanguage$pandac$IRNode* $tmp3971 = org$pandalanguage$pandac$Compiler$compileLoop$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp3971;
        }
        break;
        case 125:
        {
            org$pandalanguage$pandac$IRNode* $tmp3972 = org$pandalanguage$pandac$Compiler$compileMatch$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp3972;
        }
        break;
        case 134:
        {
            org$pandalanguage$pandac$IRNode* $tmp3973 = org$pandalanguage$pandac$Compiler$compileBreak$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp3973;
        }
        break;
        case 135:
        {
            org$pandalanguage$pandac$IRNode* $tmp3974 = org$pandalanguage$pandac$Compiler$compileContinue$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp3974;
        }
        break;
        case 136:
        {
            org$pandalanguage$pandac$IRNode* $tmp3975 = org$pandalanguage$pandac$Compiler$compileReturn$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp3975;
        }
        break;
        case 107:
        {
            org$pandalanguage$pandac$IRNode* $tmp3977 = org$pandalanguage$pandac$Compiler$compileCall$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            org$pandalanguage$pandac$IRNode* $tmp3978 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3977);
            result3976 = $tmp3978;
            if (((panda$core$Bit) { result3976 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp3979 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self, result3976);
                result3976 = $tmp3979;
            }
            }
            return result3976;
        }
        break;
        case 130:
        case 131:
        case 132:
        case 133:
        {
            org$pandalanguage$pandac$IRNode* $tmp3980 = org$pandalanguage$pandac$Compiler$compileVar$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp3980;
        }
        break;
    }
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBody$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$SymbolTable* old3981;
    org$pandalanguage$pandac$SymbolTable* symbols3983;
    panda$collections$Iterator* p$Iter3986;
    org$pandalanguage$pandac$MethodDecl$Parameter* p3998;
    panda$collections$Array* fieldInitializers4005;
    panda$collections$Iterator* f$Iter4009;
    org$pandalanguage$pandac$FieldDecl* f4022;
    panda$collections$Array* children4032;
    org$pandalanguage$pandac$IRNode* fieldRef4039;
    org$pandalanguage$pandac$IRNode* compiled4044;
    panda$collections$Array* children4048;
    if (((panda$core$Bit) { p_m->compiledBody != NULL }).value) {
    {
        return p_m->compiledBody;
    }
    }
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_m->owner));
    old3981 = self->symbolTable;
    org$pandalanguage$pandac$SymbolTable* $tmp3982 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, p_m->owner);
    self->symbolTable = $tmp3982;
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentMethod, ((panda$core$Object*) p_m));
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
    PANDA_ASSERT(((panda$core$Bit) { p_m->body != NULL }).value);
    org$pandalanguage$pandac$SymbolTable* $tmp3984 = (org$pandalanguage$pandac$SymbolTable*) malloc(40);
    $tmp3984->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp3984->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp3984, self->symbolTable);
    symbols3983 = $tmp3984;
    {
        ITable* $tmp3987 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp3987->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3987 = $tmp3987->next;
        }
        $fn3989 $tmp3988 = $tmp3987->methods[0];
        panda$collections$Iterator* $tmp3990 = $tmp3988(((panda$collections$Iterable*) p_m->parameters));
        p$Iter3986 = $tmp3990;
        $l3991:;
        ITable* $tmp3993 = p$Iter3986->$class->itable;
        while ($tmp3993->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3993 = $tmp3993->next;
        }
        $fn3995 $tmp3994 = $tmp3993->methods[0];
        panda$core$Bit $tmp3996 = $tmp3994(p$Iter3986);
        panda$core$Bit $tmp3997 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3996);
        if (!$tmp3997.value) goto $l3992;
        {
            ITable* $tmp3999 = p$Iter3986->$class->itable;
            while ($tmp3999->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3999 = $tmp3999->next;
            }
            $fn4001 $tmp4000 = $tmp3999->methods[1];
            panda$core$Object* $tmp4002 = $tmp4000(p$Iter3986);
            p3998 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp4002);
            org$pandalanguage$pandac$Variable* $tmp4003 = (org$pandalanguage$pandac$Variable*) malloc(72);
            $tmp4003->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
            $tmp4003->refCount.value = 1;
            org$pandalanguage$pandac$Variable$init$panda$core$Int64$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Int64($tmp4003, ((org$pandalanguage$pandac$Symbol*) p_m)->offset, ((panda$core$Int64) { 10001 }), p3998->name, p3998->type, ((panda$core$Int64) { 1820 }));
            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(symbols3983, ((org$pandalanguage$pandac$Symbol*) $tmp4003));
        }
        goto $l3991;
        $l3992:;
    }
    self->symbolTable = symbols3983;
    panda$collections$Array* $tmp4006 = (panda$collections$Array*) malloc(40);
    $tmp4006->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4006->refCount.value = 1;
    panda$collections$Array$init($tmp4006);
    fieldInitializers4005 = $tmp4006;
    panda$core$Bit $tmp4008 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 59 }));
    if ($tmp4008.value) {
    {
        {
            panda$core$Object* $tmp4010 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
            ITable* $tmp4011 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ClassDecl*) $tmp4010)->fields)->$class->itable;
            while ($tmp4011->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp4011 = $tmp4011->next;
            }
            $fn4013 $tmp4012 = $tmp4011->methods[0];
            panda$collections$Iterator* $tmp4014 = $tmp4012(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ClassDecl*) $tmp4010)->fields));
            f$Iter4009 = $tmp4014;
            $l4015:;
            ITable* $tmp4017 = f$Iter4009->$class->itable;
            while ($tmp4017->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4017 = $tmp4017->next;
            }
            $fn4019 $tmp4018 = $tmp4017->methods[0];
            panda$core$Bit $tmp4020 = $tmp4018(f$Iter4009);
            panda$core$Bit $tmp4021 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4020);
            if (!$tmp4021.value) goto $l4016;
            {
                ITable* $tmp4023 = f$Iter4009->$class->itable;
                while ($tmp4023->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp4023 = $tmp4023->next;
                }
                $fn4025 $tmp4024 = $tmp4023->methods[1];
                panda$core$Object* $tmp4026 = $tmp4024(f$Iter4009);
                f4022 = ((org$pandalanguage$pandac$FieldDecl*) $tmp4026);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self, f4022);
                panda$core$Bit $tmp4028 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(f4022->annotations);
                panda$core$Bit $tmp4029 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4028);
                bool $tmp4027 = $tmp4029.value;
                if (!$tmp4027) goto $l4030;
                $tmp4027 = ((panda$core$Bit) { f4022->value != NULL }).value;
                $l4030:;
                panda$core$Bit $tmp4031 = { $tmp4027 };
                if ($tmp4031.value) {
                {
                    panda$collections$Array* $tmp4033 = (panda$collections$Array*) malloc(40);
                    $tmp4033->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp4033->refCount.value = 1;
                    panda$collections$Array$init($tmp4033);
                    children4032 = $tmp4033;
                    org$pandalanguage$pandac$IRNode* $tmp4035 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                    $tmp4035->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp4035->refCount.value = 1;
                    panda$core$Object* $tmp4037 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
                    org$pandalanguage$pandac$Type* $tmp4038 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp4037));
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp4035, ((panda$core$Int64) { 1025 }), ((org$pandalanguage$pandac$Symbol*) p_m)->offset, $tmp4038);
                    panda$collections$Array$add$panda$collections$Array$T(children4032, ((panda$core$Object*) $tmp4035));
                    org$pandalanguage$pandac$IRNode* $tmp4040 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                    $tmp4040->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp4040->refCount.value = 1;
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4040, ((panda$core$Int64) { 1026 }), ((org$pandalanguage$pandac$Symbol*) p_m)->offset, f4022->type, ((panda$core$Object*) f4022), ((panda$collections$ListView*) children4032));
                    fieldRef4039 = $tmp4040;
                    panda$collections$Array$clear(children4032);
                    panda$collections$Array$add$panda$collections$Array$T(children4032, ((panda$core$Object*) fieldRef4039));
                    panda$collections$Array$add$panda$collections$Array$T(children4032, ((panda$core$Object*) f4022->value));
                    org$pandalanguage$pandac$IRNode* $tmp4042 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                    $tmp4042->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp4042->refCount.value = 1;
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4042, ((panda$core$Int64) { 1023 }), ((org$pandalanguage$pandac$Symbol*) f4022)->offset, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 73 }))), ((panda$collections$ListView*) children4032));
                    panda$collections$Array$add$panda$collections$Array$T(fieldInitializers4005, ((panda$core$Object*) $tmp4042));
                }
                }
            }
            goto $l4015;
            $l4016:;
        }
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp4045 = org$pandalanguage$pandac$Compiler$compileBlock$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_m->body);
    compiled4044 = $tmp4045;
    if (((panda$core$Bit) { compiled4044 != NULL }).value) {
    {
        panda$core$Int64 $tmp4046 = panda$collections$Array$get_count$R$panda$core$Int64(fieldInitializers4005);
        panda$core$Bit $tmp4047 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp4046, ((panda$core$Int64) { 0 }));
        if ($tmp4047.value) {
        {
            panda$collections$Array* $tmp4049 = (panda$collections$Array*) malloc(40);
            $tmp4049->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp4049->refCount.value = 1;
            panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp4049, ((panda$collections$ListView*) fieldInitializers4005));
            children4048 = $tmp4049;
            panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(children4048, ((panda$collections$CollectionView*) compiled4044->children));
            org$pandalanguage$pandac$IRNode* $tmp4051 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp4051->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp4051->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4051, ((panda$core$Int64) { 1000 }), p_m->body->offset, ((panda$collections$ListView*) children4048));
            compiled4044 = $tmp4051;
        }
        }
    }
    }
    PANDA_ASSERT(((panda$core$Bit) { ((panda$core$Object*) self->symbolTable) == ((panda$core$Object*) symbols3983) }).value);
    self->symbolTable = old3981;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentMethod);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    panda$core$Bit $tmp4053 = org$pandalanguage$pandac$Annotations$isInline$R$panda$core$Bit(p_m->annotations);
    if ($tmp4053.value) {
    {
        p_m->compiledBody = compiled4044;
    }
    }
    return compiled4044;
}
void org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$IRNode* compiled4054;
    if (((panda$core$Bit) { p_m->body != NULL }).value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp4055 = org$pandalanguage$pandac$Compiler$compileBody$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$IRNode$Q(self, p_m);
        compiled4054 = $tmp4055;
        if (((panda$core$Bit) { compiled4054 != NULL }).value) {
        {
            ITable* $tmp4056 = self->codeGenerator->$class->itable;
            while ($tmp4056->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
                $tmp4056 = $tmp4056->next;
            }
            $fn4058 $tmp4057 = $tmp4056->methods[3];
            $tmp4057(self->codeGenerator, p_m, compiled4054);
        }
        }
    }
    }
    else {
    {
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
        ITable* $tmp4059 = self->codeGenerator->$class->itable;
        while ($tmp4059->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
            $tmp4059 = $tmp4059->next;
        }
        $fn4061 $tmp4060 = $tmp4059->methods[2];
        $tmp4060(self->codeGenerator, p_m);
    }
    }
}
void org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Iterator* inner$Iter4062;
    org$pandalanguage$pandac$ClassDecl* inner4074;
    p_cl->external = ((panda$core$Bit) { false });
    {
        ITable* $tmp4063 = ((panda$collections$Iterable*) p_cl->classes)->$class->itable;
        while ($tmp4063->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4063 = $tmp4063->next;
        }
        $fn4065 $tmp4064 = $tmp4063->methods[0];
        panda$collections$Iterator* $tmp4066 = $tmp4064(((panda$collections$Iterable*) p_cl->classes));
        inner$Iter4062 = $tmp4066;
        $l4067:;
        ITable* $tmp4069 = inner$Iter4062->$class->itable;
        while ($tmp4069->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4069 = $tmp4069->next;
        }
        $fn4071 $tmp4070 = $tmp4069->methods[0];
        panda$core$Bit $tmp4072 = $tmp4070(inner$Iter4062);
        panda$core$Bit $tmp4073 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4072);
        if (!$tmp4073.value) goto $l4068;
        {
            ITable* $tmp4075 = inner$Iter4062->$class->itable;
            while ($tmp4075->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4075 = $tmp4075->next;
            }
            $fn4077 $tmp4076 = $tmp4075->methods[1];
            panda$core$Object* $tmp4078 = $tmp4076(inner$Iter4062);
            inner4074 = ((org$pandalanguage$pandac$ClassDecl*) $tmp4078);
            org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl(self, inner4074);
        }
        goto $l4067;
        $l4068:;
    }
}
void org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$SymbolTable* old4086;
    panda$collections$Iterator* m$Iter4091;
    org$pandalanguage$pandac$MethodDecl* m4103;
    org$pandalanguage$pandac$ClassDecl* next4113;
    PANDA_ASSERT(((panda$core$Bit) { self->compiling == NULL }).value);
    self->compiling = p_cl;
    org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl(self, p_cl);
    panda$core$Bit $tmp4079 = org$pandalanguage$pandac$Annotations$isSpecialize$R$panda$core$Bit(p_cl->annotations);
    if ($tmp4079.value) {
    {
        ITable* $tmp4080 = self->codeGenerator->$class->itable;
        while ($tmp4080->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
            $tmp4080 = $tmp4080->next;
        }
        $fn4082 $tmp4081 = $tmp4080->methods[1];
        $tmp4081(self->codeGenerator, p_cl);
        ITable* $tmp4083 = self->codeGenerator->$class->itable;
        while ($tmp4083->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
            $tmp4083 = $tmp4083->next;
        }
        $fn4085 $tmp4084 = $tmp4083->methods[4];
        $tmp4084(self->codeGenerator, p_cl);
        return;
    }
    }
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_cl));
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentFile, ((panda$core$Object*) p_cl->source));
    old4086 = self->symbolTable;
    org$pandalanguage$pandac$SymbolTable* $tmp4087 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, p_cl);
    self->symbolTable = $tmp4087;
    ITable* $tmp4088 = self->codeGenerator->$class->itable;
    while ($tmp4088->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
        $tmp4088 = $tmp4088->next;
    }
    $fn4090 $tmp4089 = $tmp4088->methods[1];
    $tmp4089(self->codeGenerator, p_cl);
    {
        ITable* $tmp4092 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
        while ($tmp4092->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4092 = $tmp4092->next;
        }
        $fn4094 $tmp4093 = $tmp4092->methods[0];
        panda$collections$Iterator* $tmp4095 = $tmp4093(((panda$collections$Iterable*) p_cl->methods));
        m$Iter4091 = $tmp4095;
        $l4096:;
        ITable* $tmp4098 = m$Iter4091->$class->itable;
        while ($tmp4098->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4098 = $tmp4098->next;
        }
        $fn4100 $tmp4099 = $tmp4098->methods[0];
        panda$core$Bit $tmp4101 = $tmp4099(m$Iter4091);
        panda$core$Bit $tmp4102 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4101);
        if (!$tmp4102.value) goto $l4097;
        {
            ITable* $tmp4104 = m$Iter4091->$class->itable;
            while ($tmp4104->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4104 = $tmp4104->next;
            }
            $fn4106 $tmp4105 = $tmp4104->methods[1];
            panda$core$Object* $tmp4107 = $tmp4105(m$Iter4091);
            m4103 = ((org$pandalanguage$pandac$MethodDecl*) $tmp4107);
            org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$MethodDecl(self, m4103);
        }
        goto $l4096;
        $l4097:;
    }
    ITable* $tmp4108 = self->codeGenerator->$class->itable;
    while ($tmp4108->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
        $tmp4108 = $tmp4108->next;
    }
    $fn4110 $tmp4109 = $tmp4108->methods[4];
    $tmp4109(self->codeGenerator, p_cl);
    self->symbolTable = old4086;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentFile);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    self->compiling = NULL;
    panda$core$Int64 $tmp4111 = panda$collections$Array$get_count$R$panda$core$Int64(self->compilationQueue);
    panda$core$Bit $tmp4112 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp4111, ((panda$core$Int64) { 0 }));
    if ($tmp4112.value) {
    {
        panda$core$Object* $tmp4114 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->compilationQueue, ((panda$core$Int64) { 0 }));
        next4113 = ((org$pandalanguage$pandac$ClassDecl*) $tmp4114);
        panda$collections$Array$removeIndex$panda$core$Int64(self->compilationQueue, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$ClassDecl(self, next4113);
    }
    }
    panda$core$Int64 $tmp4115 = panda$collections$Array$get_count$R$panda$core$Int64(self->compilationQueue);
    panda$core$Bit $tmp4116 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4115, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp4116.value);
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Compiler* self, panda$io$File* p_file) {
    panda$collections$ListView* result4117;
    org$pandalanguage$pandac$ASTNode* parsed4122;
    panda$collections$Iterator* cl$Iter4126;
    org$pandalanguage$pandac$ClassDecl* cl4138;
    panda$core$Object* $tmp4118 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->scans, ((panda$collections$Key*) p_file));
    result4117 = ((panda$collections$ListView*) $tmp4118);
    if (((panda$core$Bit) { result4117 == NULL }).value) {
    {
        panda$collections$Stack$push$panda$collections$Stack$T(self->currentFile, ((panda$core$Object*) p_file));
        panda$core$String* $tmp4119 = panda$io$File$name$R$panda$core$String(p_file);
        panda$core$String* $tmp4120 = panda$io$File$readFully$R$panda$core$String(p_file);
        (($fn4121) self->parser->$class->vtable[2])(self->parser, $tmp4119, $tmp4120);
        org$pandalanguage$pandac$ASTNode* $tmp4124 = (($fn4123) self->parser->$class->vtable[68])(self->parser);
        parsed4122 = $tmp4124;
        if (((panda$core$Bit) { parsed4122 != NULL }).value) {
        {
            panda$collections$ListView* $tmp4125 = org$pandalanguage$pandac$Scanner$scan$panda$io$File$org$pandalanguage$pandac$ASTNode$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(self->scanner, p_file, parsed4122);
            result4117 = $tmp4125;
            {
                ITable* $tmp4127 = ((panda$collections$Iterable*) result4117)->$class->itable;
                while ($tmp4127->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp4127 = $tmp4127->next;
                }
                $fn4129 $tmp4128 = $tmp4127->methods[0];
                panda$collections$Iterator* $tmp4130 = $tmp4128(((panda$collections$Iterable*) result4117));
                cl$Iter4126 = $tmp4130;
                $l4131:;
                ITable* $tmp4133 = cl$Iter4126->$class->itable;
                while ($tmp4133->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp4133 = $tmp4133->next;
                }
                $fn4135 $tmp4134 = $tmp4133->methods[0];
                panda$core$Bit $tmp4136 = $tmp4134(cl$Iter4126);
                panda$core$Bit $tmp4137 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4136);
                if (!$tmp4137.value) goto $l4132;
                {
                    ITable* $tmp4139 = cl$Iter4126->$class->itable;
                    while ($tmp4139->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp4139 = $tmp4139->next;
                    }
                    $fn4141 $tmp4140 = $tmp4139->methods[1];
                    panda$core$Object* $tmp4142 = $tmp4140(cl$Iter4126);
                    cl4138 = ((org$pandalanguage$pandac$ClassDecl*) $tmp4142);
                    panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classes, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) cl4138)->name), ((panda$core$Object*) cl4138));
                }
                goto $l4131;
                $l4132:;
            }
        }
        }
        else {
        {
            panda$collections$Array* $tmp4143 = (panda$collections$Array*) malloc(40);
            $tmp4143->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp4143->refCount.value = 1;
            panda$collections$Array$init($tmp4143);
            result4117 = ((panda$collections$ListView*) $tmp4143);
        }
        }
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->scans, ((panda$collections$Key*) p_file), ((panda$core$Object*) result4117));
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentFile);
    }
    }
    return result4117;
}
void org$pandalanguage$pandac$Compiler$compile$panda$io$File(org$pandalanguage$pandac$Compiler* self, panda$io$File* p_file) {
    panda$collections$ListView* classes4145;
    panda$collections$Iterator* cl$Iter4147;
    org$pandalanguage$pandac$ClassDecl* cl4159;
    panda$collections$ListView* $tmp4146 = org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(self, p_file);
    classes4145 = $tmp4146;
    {
        ITable* $tmp4148 = ((panda$collections$Iterable*) classes4145)->$class->itable;
        while ($tmp4148->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4148 = $tmp4148->next;
        }
        $fn4150 $tmp4149 = $tmp4148->methods[0];
        panda$collections$Iterator* $tmp4151 = $tmp4149(((panda$collections$Iterable*) classes4145));
        cl$Iter4147 = $tmp4151;
        $l4152:;
        ITable* $tmp4154 = cl$Iter4147->$class->itable;
        while ($tmp4154->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4154 = $tmp4154->next;
        }
        $fn4156 $tmp4155 = $tmp4154->methods[0];
        panda$core$Bit $tmp4157 = $tmp4155(cl$Iter4147);
        panda$core$Bit $tmp4158 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4157);
        if (!$tmp4158.value) goto $l4153;
        {
            ITable* $tmp4160 = cl$Iter4147->$class->itable;
            while ($tmp4160->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4160 = $tmp4160->next;
            }
            $fn4162 $tmp4161 = $tmp4160->methods[1];
            panda$core$Object* $tmp4163 = $tmp4161(cl$Iter4147);
            cl4159 = ((org$pandalanguage$pandac$ClassDecl*) $tmp4163);
            org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$ClassDecl(self, cl4159);
        }
        goto $l4152;
        $l4153:;
    }
}
org$pandalanguage$pandac$Position* org$pandalanguage$pandac$Compiler$position$panda$core$Int64$R$org$pandalanguage$pandac$Position(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_offset) {
    panda$io$InputStream* source4164;
    panda$core$Int64 line4167;
    panda$core$Int64 column4168;
    panda$core$Range$LTpanda$core$Int64$GT $tmp4169;
    panda$core$Char8 $match$1216694188;
    panda$core$Char8 $tmp4191;
    panda$core$Char8 $tmp4194;
    panda$core$Object* $tmp4165 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentFile);
    panda$io$InputStream* $tmp4166 = panda$io$File$openInputStream$R$panda$io$InputStream(((panda$io$File*) $tmp4165));
    source4164 = $tmp4166;
    line4167 = ((panda$core$Int64) { 1 });
    column4168 = ((panda$core$Int64) { 1 });
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp4169, ((panda$core$Int64) { 0 }), p_offset, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp4171 = $tmp4169.start.value;
    panda$core$Int64 i4170 = { $tmp4171 };
    int64_t $tmp4173 = $tmp4169.end.value;
    int64_t $tmp4174 = $tmp4169.step.value;
    bool $tmp4175 = $tmp4169.inclusive.value;
    bool $tmp4182 = $tmp4174 > 0;
    if ($tmp4182) goto $l4180; else goto $l4181;
    $l4180:;
    if ($tmp4175) goto $l4183; else goto $l4184;
    $l4183:;
    if ($tmp4171 <= $tmp4173) goto $l4176; else goto $l4178;
    $l4184:;
    if ($tmp4171 < $tmp4173) goto $l4176; else goto $l4178;
    $l4181:;
    if ($tmp4175) goto $l4185; else goto $l4186;
    $l4185:;
    if ($tmp4171 >= $tmp4173) goto $l4176; else goto $l4178;
    $l4186:;
    if ($tmp4171 > $tmp4173) goto $l4176; else goto $l4178;
    $l4176:;
    {
        {
            panda$core$Char8$nullable $tmp4190 = (($fn4189) source4164->$class->vtable[10])(source4164);
            $match$1216694188 = ((panda$core$Char8) $tmp4190.value);
            panda$core$Char8$init$panda$core$UInt8(&$tmp4191, ((panda$core$UInt8) { 10 }));
            panda$core$Bit $tmp4192 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$1216694188, $tmp4191);
            if ($tmp4192.value) {
            {
                panda$core$Int64 $tmp4193 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(line4167, ((panda$core$Int64) { 1 }));
                line4167 = $tmp4193;
                column4168 = ((panda$core$Int64) { 1 });
            }
            }
            else {
            panda$core$Char8$init$panda$core$UInt8(&$tmp4194, ((panda$core$UInt8) { 9 }));
            panda$core$Bit $tmp4195 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$1216694188, $tmp4194);
            if ($tmp4195.value) {
            {
                panda$core$Int64 $tmp4196 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(column4168, ((panda$core$Int64) { 4 }));
                panda$core$Int64 $tmp4197 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 4 }), $tmp4196);
                panda$core$Int64 $tmp4198 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(column4168, $tmp4197);
                column4168 = $tmp4198;
            }
            }
            else {
            {
                panda$core$Int64 $tmp4199 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(column4168, ((panda$core$Int64) { 1 }));
                column4168 = $tmp4199;
            }
            }
            }
        }
    }
    $l4179:;
    if ($tmp4182) goto $l4201; else goto $l4202;
    $l4201:;
    int64_t $tmp4203 = $tmp4173 - i4170.value;
    if ($tmp4175) goto $l4204; else goto $l4205;
    $l4204:;
    if ($tmp4203 >= $tmp4174) goto $l4200; else goto $l4178;
    $l4205:;
    if ($tmp4203 > $tmp4174) goto $l4200; else goto $l4178;
    $l4202:;
    int64_t $tmp4207 = i4170.value - $tmp4173;
    if ($tmp4175) goto $l4208; else goto $l4209;
    $l4208:;
    if ($tmp4207 >= -$tmp4174) goto $l4200; else goto $l4178;
    $l4209:;
    if ($tmp4207 > -$tmp4174) goto $l4200; else goto $l4178;
    $l4200:;
    i4170.value += $tmp4174;
    goto $l4176;
    $l4178:;
    (($fn4211) ((panda$core$Object*) source4164)->$class->vtable[1])(((panda$core$Object*) source4164));
    org$pandalanguage$pandac$Position* $tmp4212 = (org$pandalanguage$pandac$Position*) malloc(40);
    $tmp4212->$class = (panda$core$Class*) &org$pandalanguage$pandac$Position$class;
    $tmp4212->refCount.value = 1;
    panda$core$Object* $tmp4214 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentFile);
    panda$core$String* $tmp4215 = panda$io$File$name$R$panda$core$String(((panda$io$File*) $tmp4214));
    org$pandalanguage$pandac$Position$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp4212, $tmp4215, line4167, column4168);
    return $tmp4212;
}
void org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_offset, panda$core$String* p_msg) {
    org$pandalanguage$pandac$Position* $tmp4216 = org$pandalanguage$pandac$Compiler$position$panda$core$Int64$R$org$pandalanguage$pandac$Position(self, p_offset);
    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, $tmp4216, p_msg);
}
void org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position* p_pos, panda$core$String* p_msg) {
    if (self->reportErrors.value) {
    {
        panda$core$Int64 $tmp4217 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->errorCount, ((panda$core$Int64) { 1 }));
        self->errorCount = $tmp4217;
        panda$core$String* $tmp4219 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4218, ((panda$core$Object*) p_pos));
        panda$core$String* $tmp4221 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4219, &$s4220);
        panda$core$String* $tmp4222 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4221, p_msg);
        panda$core$String* $tmp4224 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4222, &$s4223);
        panda$io$Console$printLine$panda$core$Object(((panda$core$Object*) $tmp4224));
    }
    }
}
void org$pandalanguage$pandac$Compiler$finish(org$pandalanguage$pandac$Compiler* self) {
    ITable* $tmp4225 = self->codeGenerator->$class->itable;
    while ($tmp4225->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
        $tmp4225 = $tmp4225->next;
    }
    $fn4227 $tmp4226 = $tmp4225->methods[5];
    $tmp4226(self->codeGenerator);
}

